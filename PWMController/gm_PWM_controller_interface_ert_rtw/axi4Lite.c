/* Copyright 2012 The MathWorks, Inc. */
/*
 * _AXI_INTERFACE_LITE_C_
 * This file has the AXI4Lite Interface functions
 * This is a low-level API that MAPS/UNMAPS the memory region to a virtual address.
 * Copies the data to/from the AXI4Lite memory mapped area to the user-buffer.
 *
 */

#include <stdio.h>
#include <sys/mman.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#include <signal.h>
#include <fcntl.h>
#include <time.h>
#include <signal.h>
#include <sys/ioctl.h>
#include <errno.h>
#include "mwipcore_ioctl.h"
#include "axi_interface.h"


#define MAP_LENGTH 0xffff

#define ALIGN_SIZE sizeof(unsigned long)


static void alignedMemCopy(void* dest, const void *src, unsigned int lengthInBytes);

static int fd;
static int fd_devmem;
volatile unsigned char * virtual_addr;
static struct sigaction sigHndlNew;


/************************************************************
 * This is the dataType ENUM to match the dataType and their numeric ID in MATLAB
 *************************************************************/

enum {
    INVALID_DTYPE = 0,
    SS_DOUBLE = 1,
    SS_SINGLE,
    SS_INT8,
    SS_UINT8,
    SS_INT16,
    SS_UINT16,
    SS_INT32,
    SS_UINT32,
    SS_BOOLEAN
} dataType;

/**************************************************************
 * This is the constant Array that holds the number of bytes per dataType ENUM above
 * Since MATLAB environment is 1-based we need to do a transformation so as to get
 * the correct dataType number of bytes.
 **************************************************************/
static const char DType[] = {0,8,4,1,1,2,2,4,4,1};

/*************************************************************************
 * alignedMemCopy
 * Return: void
 * Arguments: destination pointer, source pointer, length in bytes
 * Function: Helper function to do 4-byte aligned copy
 *************************************************************************/
static void alignedMemCopy(void * dest, const void *src, unsigned int lengthInBytes)
{
    
    unsigned int * uDest;
    const unsigned int * uSrc;
    
    uDest = (unsigned int *)dest;
    uSrc = (const unsigned int *) src;
    
    /*
     * If number of bytes are a multple of 4 then do a 4-byte copy in a loop.
     * If number of bytes is less than 4 then copy all the bytes, no loop required
     * If number is not a multiple of 4 and not less than 4 then error out.
     */
    if (lengthInBytes%ALIGN_SIZE) {
        if (lengthInBytes < ALIGN_SIZE )
            *uDest = *uSrc;
        else
        {
            fprintf(stderr,"Byte-length has to be a multiple of 4. All pointers are assumed 4-byte aligned.\n");
            exit(EXIT_FAILURE);
        }
    }
    else
    {
        unsigned int i;
        for (i=0;i<lengthInBytes;i+=ALIGN_SIZE)
            *uDest++ = *uSrc++;
    }
}


/************************************************************************
 * readFromAXI4LiteIface
 * Return   : Error Enumerator
 * Arguments: void* destination, offset, lengthInBytes
 * Function : Copies the area from the AXI4LiteBus to destination address
 ************************************************************************/
static int readFromAXI4LiteIface(void * dest, unsigned int offset, unsigned int lengthInBytes)
{
    MW_DBG_functionIn();
    if ( (fd < 0) || (virtual_addr == MAP_FAILED) )
    {
        fprintf(stderr, "Invalid file descriptor or MAP_FAILED:fd - %d, virtualAddr: %#lx\n", fd, virtual_addr);
        return -1;
    }
    MW_DBG_printf("AXIInterface: AXI4Lite Register offset: %#lx, Num Bytes : %lu \n", offset, lengthInBytes);
    alignedMemCopy((void *) dest, (void*)(virtual_addr + offset), lengthInBytes);
    return 0;
}

/************************************************************************
 * writeToAXI4LiteIface
 * Return   : Error Enumerator
 * Arguments: AXI4LiteBus Pointer, void* source, offset, lengthInBytes
 * Function : Copies the data from source to AXI4LiteBus offset address
 ************************************************************************/
static int writeToAXI4LiteIface(const void * src, unsigned int offset, unsigned int lengthInBytes)
{
    MW_DBG_functionIn();
    if ( (fd < 0) || (virtual_addr == MAP_FAILED) )
    {
        fprintf(stderr, "Invalid file descriptor or MAP_FAILED:fd - %d, virtualAddr: %#lx\n", fd, virtual_addr);
        return -1;
    }
    
    MW_DBG_printf("AXIInterface AXI4Lite Register offset: %#lx, Num Bytes : %lu \n", offset, lengthInBytes);
    alignedMemCopy((void*)(virtual_addr + offset), src, lengthInBytes);
    return 0;
}

void axiInterfaceSignalHandler(int sig)
{

}

/**************************************************************
 * axi4LiteInit
 * Return : void
 * Arguments : baseAddr
 * Function: Takes the base address and initializes the gs_PCoreHandle
 *           by calling into the interface function:axi4LiteOpen
 **************************************************************/
int axi4InterfaceInit(const char * ipcore_name)
{
    MW_DBG_functionIn();
    static unsigned char opened = 0;
    static unsigned long baseAddr;
    int oflags, i;
    
    if (ipcore_name == NULL) /* Check PCORE string */
    {
        return -1;
    }
    
    if (1 == opened)
    {
        MW_DBG_printf("The %s is already being used. File handle:%d\n", ipcore_name, fd);
        return 0;
    }
    
    /* Open the /dev/pcore_name*/
    fd = open(ipcore_name, O_RDWR | O_SYNC);
    
    /* return NULL if file-descriptor was invalid */
    if(fd < 0)
    {
        fprintf(stderr, "Error while opening:%s\n", ipcore_name);
        perror("DEV_OPEN_FAILURE");
        return -1;
    }
    
    /* Map the base address to virtual address */
    virtual_addr = (unsigned char*) mmap(NULL, MAP_LENGTH, PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0);

    /* When MMAP fails it returns MAP_FAILED (void*(-1)).
     * In that case, print error and return NULL.
     */
    if (virtual_addr == MAP_FAILED) {
        close(fd);
        perror("MMAP Failed.");
        return -1;
    }
    
    /*Register signal handler */
    
    sigHndlNew.sa_handler = axiInterfaceSignalHandler;
    sigemptyset(&sigHndlNew.sa_mask);
    sigHndlNew.sa_flags = 0;
    
    fcntl(fd, F_SETOWN, getpid());
    oflags = fcntl(fd, F_GETFL);
    fcntl(fd, F_SETFL, oflags | FASYNC);
    
    opened = 1;
    

    MW_DBG_text("Open fd success\n");
    return 0;
}

/**************************************************************************
 * axi4InterfaceTerminate
 * Return: void
 * Arguments: void
 * Function: This wrapper function terminates the global static file
 *           descriptor and unmaps the previously mapped device area
 *************************************************************************/
void axi4InterfaceTerminate()
{
    int ret;
    static unsigned char closed = 0;
    
    MW_DBG_functionIn();
    
    if (1 == closed)
    {
        MW_DBG_text("This device is already closed.\n");
        return;
    }
    
    MW_DBG_printf("Un-mapping %d bytes of %#x\n", MAP_LENGTH, (unsigned int)virtual_addr);
    munmap((&virtual_addr), MAP_LENGTH);
    close(fd);
    closed = 1;
    MW_DBG_functionOut();
}

/**************************************************************************
 * axi4LiteRead
 * Return: void
 * Arguments: offset, data length, dest-pointer, data type
 * Function: This wrapper function calculates the length of data in bytes
 *           uses the length calculated in bytes to copy the data to dest
 *           void pointer.
 *************************************************************************/
int axi4LiteRead(unsigned int offset, unsigned int dataLength, void * dest, unsigned int dataType)
{
    int ret;
    /* Length in bytes is number of bytes in dataType multiplied by data Length */
    unsigned int lengthInBytes = DType[dataType] * dataLength;
    
    MW_DBG_functionIn();
    /*
     * For fixed point data-types fixdt(1,32,*) assume dataType bytes = 4
     */
    MW_DBG_printf("Read data type is : %u and data Length: %u\n", dataType,dataLength);
    if (dataType > 9) {
        lengthInBytes = sizeof(unsigned long)*dataLength;
    }
    
    /* Now read the entire data from AXI4Lite Bus */
    ret = readFromAXI4LiteIface(dest, offset, lengthInBytes);
    if (ret) {
        perror("AXI4Lite Interface Read Error.\n");
        exit(EXIT_FAILURE);
    }
    return ret;
}

/**************************************************************************
 * axi4LiteWrite
 * Return: void
 * Arguments: source void pointer, offset, data length, data type, strobe (for vector)
 * Function: This wrapper function calculates the length of data in bytes 
 *           uses the length calculated in bytes to copy the data from 
 *           src pointer to AXI4Lite Interface.
 *************************************************************************/
int axi4LiteWrite(unsigned int offset, unsigned int dataLength, const void * src, unsigned int dataType)
{
    int ret;
    unsigned int lengthInBytes = DType[dataType] * dataLength;
    MW_DBG_functionIn();
    
    /*
     * For fixed point data-types fixdt(1,32,*) assume dataType bytes = 4
     */
    MW_DBG_printf("Write data type is : %u and data Length: %u\n", dataType, dataLength);
    if (dataType > 9) {
        lengthInBytes = sizeof(unsigned long)*dataLength;
    }
    
    /* Write the data from source pointer to AXI4Lite Bus */
    ret = writeToAXI4LiteIface(src, offset, lengthInBytes);
    if (ret) {
        fprintf(stderr,"AXI4Lite Interface Write Error.\n");
    }
    return ret;
}

/* [EOF] */


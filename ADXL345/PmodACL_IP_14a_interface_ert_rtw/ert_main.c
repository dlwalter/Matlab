/*
 * File: ert_main.c
 *
 * Code generated for Simulink model 'PmodACL_IP_14a_interface'.
 *
 * Model version                  : 1.151
 * Simulink Coder version         : 8.7 (R2014b) 08-Sep-2014
 * C/C++ source code generated on : Tue Feb 17 16:16:15 2015
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Emulation hardware selection:
 *    Differs from embedded hardware (ARMCortex)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include <stdio.h>
#include <stdlib.h>
#include "PmodACL_IP_14a_interface.h"
#include "PmodACL_IP_14a_interface_private.h"
#include "rtwtypes.h"
#include "limits.h"
#include "rt_nonfinite.h"
#include "linuxinitialize.h"

volatile boolean_T runModel = 1;
sem_t stopSem;
sem_t termSem;
sem_t baserateTaskSem;
pthread_t terminateThread;
pthread_t schedulerThread;
pthread_t baseRateThread;
void * threadJoinStatus;
int terminatingmodel = 0;
int subratePriority[0];
void baseRateTask(void *arg)
{
  PmodACL_IP_14a_interface_initialize();

  /* External mode */
  rtSetTFinalForExtMode(&rtmGetTFinal(PmodACL_IP_14a_interface_M));
  rtExtModeCheckInit(1);

  {
    boolean_T rtmStopReq = false;
    rtExtModeWaitForStartPkt(PmodACL_IP_14a_interface_M->extModeInfo, 1,
      &rtmStopReq);
    if (rtmStopReq) {
      rtmSetStopRequested(PmodACL_IP_14a_interface_M, true);
    }
  }

  rtERTExtModeStartMsg();
  runModel = (rtmGetErrorStatus(PmodACL_IP_14a_interface_M) == (NULL)) &&
    !rtmGetStopRequested(PmodACL_IP_14a_interface_M);
  while (runModel) {
    sem_wait(&baserateTaskSem);

    /* External mode */
    {
      boolean_T rtmStopReq = false;
      rtExtModePauseIfNeeded(PmodACL_IP_14a_interface_M->extModeInfo, 1,
        &rtmStopReq);
      if (rtmStopReq) {
        rtmSetStopRequested(PmodACL_IP_14a_interface_M, true);
      }

      if (rtmGetStopRequested(PmodACL_IP_14a_interface_M) == true) {
        rtmSetErrorStatus(PmodACL_IP_14a_interface_M, "Simulation finished");
        break;
      }
    }

    /* External mode */
    {
      boolean_T rtmStopReq = false;
      rtExtModeOneStep(PmodACL_IP_14a_interface_M->extModeInfo, 1, &rtmStopReq);
      if (rtmStopReq) {
        rtmSetStopRequested(PmodACL_IP_14a_interface_M, true);
      }
    }

    PmodACL_IP_14a_interface_step();

    /* Get model outputs here */
    rtExtModeCheckEndTrigger();
    runModel = (rtmGetErrorStatus(PmodACL_IP_14a_interface_M) == (NULL)) &&
      !rtmGetStopRequested(PmodACL_IP_14a_interface_M);
  }

  sem_post(&termSem);
  pthread_exit((void *)0);
}

void exitTask(int sig)
{
  rtmSetErrorStatus(PmodACL_IP_14a_interface_M, "stopping the model");
  sem_post(&stopSem);
}

void terminateTask(void *arg)
{
  int i;
  int ret;
  sem_wait(&termSem);
  terminatingmodel = 1;
  printf("**terminating the model**\n");
  fflush(stdout);

  /* Wait for baseRate task to complete */
  ret = pthread_join(baseRateThread, &threadJoinStatus);
  CHECK_STATUS(ret, 0, "pthread_join");
  rtExtModeShutdown(1);

  /* Disable rt_OneStep() here */

  /* Terminate model */
  PmodACL_IP_14a_interface_terminate();
  sem_post(&stopSem);
}

int main(int argc, char **argv)
{
  printf("**starting the model**\n");
  fflush(stdout);
  rtmSetErrorStatus(PmodACL_IP_14a_interface_M, 0);
  rtExtModeParseArgs(argc, (const char_T **)argv, NULL);

  /* Call RTOS Initialization funcation */
  myRTOSInit(0.001, 0);

  /* Wait for stop semaphore */
  sem_wait(&stopSem);
  return 0;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

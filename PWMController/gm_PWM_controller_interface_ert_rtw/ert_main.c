/*
 * File: ert_main.c
 *
 * Code generated for Simulink model 'gm_PWM_controller_interface'.
 *
 * Model version                  : 1.12
 * Simulink Coder version         : 8.6 (R2014a) 27-Dec-2013
 * C/C++ source code generated on : Wed Oct 15 17:56:29 2014
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
#include "gm_PWM_controller_interface.h"
#include "gm_PWM_controller_interface_private.h"
#include "rtwtypes.h"
#include "limits.h"
#include "linuxinitialize.h"

sem_t stopSem;
sem_t termSem;
sem_t baserateTaskSem;
pthread_t terminateThread;
pthread_t schedulerThread;
pthread_t baseRateThread;
int subratePriority[0];
void baseRateTask(void *arg)
{
  gm_PWM_controller_interface_initialize();

  /* External mode */
  rtSetTFinalForExtMode(&rtmGetTFinal(gm_PWM_controller_interface_M));
  rtExtModeCheckInit(1);

  {
    boolean_T rtmStopReq = false;
    rtExtModeWaitForStartPkt(gm_PWM_controller_interface_M->extModeInfo, 1,
      &rtmStopReq);
    if (rtmStopReq) {
      rtmSetStopRequested(gm_PWM_controller_interface_M, true);
    }
  }

  rtERTExtModeStartMsg();
  volatile boolean_T noErr;
  noErr = (rtmGetErrorStatus(gm_PWM_controller_interface_M) == (NULL)) &&
    !rtmGetStopRequested(gm_PWM_controller_interface_M);
  while (noErr ) {
    sem_wait(&baserateTaskSem);

    /* External mode */
    {
      boolean_T rtmStopReq = false;
      rtExtModePauseIfNeeded(gm_PWM_controller_interface_M->extModeInfo, 1,
        &rtmStopReq);
      if (rtmStopReq) {
        rtmSetStopRequested(gm_PWM_controller_interface_M, true);
      }

      if (rtmGetStopRequested(gm_PWM_controller_interface_M) == true) {
        rtmSetErrorStatus(gm_PWM_controller_interface_M, "Simulation finished");
        break;
      }
    }

    /* External mode */
    {
      boolean_T rtmStopReq = false;
      rtExtModeOneStep(gm_PWM_controller_interface_M->extModeInfo, 1,
                       &rtmStopReq);
      if (rtmStopReq) {
        rtmSetStopRequested(gm_PWM_controller_interface_M, true);
      }
    }

    gm_PWM_controller_interface_step();

    /* Get model outputs here */
    rtExtModeCheckEndTrigger();
    noErr = (rtmGetErrorStatus(gm_PWM_controller_interface_M) == (NULL)) &&
      !rtmGetStopRequested(gm_PWM_controller_interface_M);
  }                                    /* while */

  sem_post(&termSem);
}

void exitTask(void *arg)
{
  sem_post(&stopSem);
}

void terminateTask(void *arg)
{
  sem_wait(&termSem);
  printf("**terminating the model**\n");
  fflush(stdout);
  rtExtModeShutdown(1);

  /* Disable rt_OneStep() here */

  /* Terminate model */
  gm_PWM_controller_interface_terminate();
  sem_post(&stopSem);
}

int main(int argc, char **argv)
{
  printf("**starting the model**\n");
  fflush(stdout);
  rtmSetErrorStatus(gm_PWM_controller_interface_M, 0);
  rtExtModeParseArgs(argc, (const char_T **)argv, NULL);

  /* Call RTOS Initialization funcation */
  myRTOSInit(1.0, 0);

  /* Wait for stop semaphore */
  sem_wait(&stopSem);
  return 0;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

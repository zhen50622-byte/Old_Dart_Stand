/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * File Name          : freertos.c
  * Description        : Code for freertos applications
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2026 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Includes ------------------------------------------------------------------*/
#include "FreeRTOS.h"
#include "task.h"
#include "main.h"
#include "cmsis_os.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/
/* USER CODE BEGIN Variables */

/* USER CODE END Variables */
/* Definitions for defaultTask */
osThreadId_t defaultTaskHandle;
const osThreadAttr_t defaultTask_attributes = {
  .name = "defaultTask",
  .stack_size = 128 * 4,
  .priority = (osPriority_t) osPriorityNormal,
};
/* Definitions for DM_Motor_Task */
osThreadId_t DM_Motor_TaskHandle;
const osThreadAttr_t DM_Motor_Task_attributes = {
  .name = "DM_Motor_Task",
  .stack_size = 128 * 4,
  .priority = (osPriority_t) osPriorityNormal,
};
/* Definitions for BJ_Task */
osThreadId_t BJ_TaskHandle;
const osThreadAttr_t BJ_Task_attributes = {
  .name = "BJ_Task",
  .stack_size = 128 * 4,
  .priority = (osPriority_t) osPriorityNormal,
};
/* Definitions for Motor_return_t0 */
osThreadId_t Motor_return_t0Handle;
const osThreadAttr_t Motor_return_t0_attributes = {
  .name = "Motor_return_t0",
  .stack_size = 128 * 4,
  .priority = (osPriority_t) osPriorityNormal1,
};

/* Private function prototypes -----------------------------------------------*/
/* USER CODE BEGIN FunctionPrototypes */

/* USER CODE END FunctionPrototypes */

void StartDefaultTask(void *argument);
void DM_Motor_TaskStart(void *argument);
void Start_BJ_Task(void *argument);
void Start_Motor_return_t0(void *argument);

void MX_FREERTOS_Init(void); /* (MISRA C 2004 rule 8.1) */

/**
  * @brief  FreeRTOS initialization
  * @param  None
  * @retval None
  */
void MX_FREERTOS_Init(void) {
  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* USER CODE BEGIN RTOS_MUTEX */
  /* add mutexes, ... */
  /* USER CODE END RTOS_MUTEX */

  /* USER CODE BEGIN RTOS_SEMAPHORES */
  /* add semaphores, ... */
  /* USER CODE END RTOS_SEMAPHORES */

  /* USER CODE BEGIN RTOS_TIMERS */
  /* start timers, add new ones, ... */
  /* USER CODE END RTOS_TIMERS */

  /* USER CODE BEGIN RTOS_QUEUES */
  /* add queues, ... */
  /* USER CODE END RTOS_QUEUES */

  /* Create the thread(s) */
  /* creation of defaultTask */
  defaultTaskHandle = osThreadNew(StartDefaultTask, NULL, &defaultTask_attributes);

  /* creation of DM_Motor_Task */
  DM_Motor_TaskHandle = osThreadNew(DM_Motor_TaskStart, NULL, &DM_Motor_Task_attributes);

  /* creation of BJ_Task */
  BJ_TaskHandle = osThreadNew(Start_BJ_Task, NULL, &BJ_Task_attributes);

  /* creation of Motor_return_t0 */
  Motor_return_t0Handle = osThreadNew(Start_Motor_return_t0, NULL, &Motor_return_t0_attributes);

  /* USER CODE BEGIN RTOS_THREADS */
  /* add threads, ... */
  /* USER CODE END RTOS_THREADS */

  /* USER CODE BEGIN RTOS_EVENTS */
  /* add events, ... */
  /* USER CODE END RTOS_EVENTS */

}

/* USER CODE BEGIN Header_StartDefaultTask */
/**
  * @brief  Function implementing the defaultTask thread.
  * @param  argument: Not used
  * @retval None
  */
/* USER CODE END Header_StartDefaultTask */
void StartDefaultTask(void *argument)
{
  /* USER CODE BEGIN StartDefaultTask */
  /* Infinite loop */
  for(;;)
  {
    osDelay(1);
  }
  /* USER CODE END StartDefaultTask */
}

/* USER CODE BEGIN Header_DM_Motor_TaskStart */
/**
* @brief Function implementing the DM_Motor_Task thread.
* @param argument: Not used
* @retval None
*/
/* USER CODE END Header_DM_Motor_TaskStart */
__weak void DM_Motor_TaskStart(void *argument)
{
  /* USER CODE BEGIN DM_Motor_TaskStart */
  /* Infinite loop */
  for(;;)
  {
    osDelay(1);
  }
  /* USER CODE END DM_Motor_TaskStart */
}

/* USER CODE BEGIN Header_Start_BJ_Task */
/**
* @brief Function implementing the BJ_Task thread.
* @param argument: Not used
* @retval None
*/
/* USER CODE END Header_Start_BJ_Task */
__weak void Start_BJ_Task(void *argument)
{
  /* USER CODE BEGIN Start_BJ_Task */
  /* Infinite loop */
  for(;;)
  {
    osDelay(1);
  }
  /* USER CODE END Start_BJ_Task */
}

/* USER CODE BEGIN Header_Start_Motor_return_t0 */
/**
* @brief Function implementing the Motor_return_t0 thread.
* @param argument: Not used
* @retval None
*/
/* USER CODE END Header_Start_Motor_return_t0 */
__weak void Start_Motor_return_t0(void *argument)
{
  /* USER CODE BEGIN Start_Motor_return_t0 */
  /* Infinite loop */
  for(;;)
  {
    osDelay(1);
  }
  /* USER CODE END Start_Motor_return_t0 */
}

/* Private application code --------------------------------------------------*/
/* USER CODE BEGIN Application */

/* USER CODE END Application */


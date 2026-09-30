//
// Created by 28416 on 2026/8/27.
//

#ifndef OLD_DART_STAND_DM_MOTOR_TASK_H
#define OLD_DART_STAND_DM_MOTOR_TASK_H
#include "cmsis_os2.h"
#include"DM_Motor.h"
#include"RC_remoto_control.h"
#include "tim.h"
#include "drv_can.h"
#include "darts.h"
extern  int flag;
extern  int flag_one_step;
extern  uint32_t t0;
extern  uint8_t s2_last ;
extern  uint8_t s1_last ;
#endif //OLD_DART_STAND_DM_MOTOR_TASK_H
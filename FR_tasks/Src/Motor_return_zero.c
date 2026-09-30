//
// Created by 28416 on 2026/9/25.
//
#include "Motor_return_zero.h"

#include "cmsis_os2.h"
#include "DM_Motor.h"
#include "X_V2.h"
void Start_Motor_return_t0(void *argument)
{
    for (;;)
    {
        if (RC_CtrlData.rc.s1 == 1 && RC_CtrlData.rc.s2 == 1)
        {
            X_V2_Traj_Pos_Control(8,0,1000,1000,100.0f,0.0f,1,0);
            //回零步进电机
        }
        osDelay(1);
    }
}
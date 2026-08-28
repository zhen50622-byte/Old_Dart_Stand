
//
// Created by 28416 on 2026/8/27.
//
#include "DM_Motor_task.h"
void DM_Motor_TaskStart(void *argument)
{
    DM_Motor_Init(&hcan1,0x01,POSITION);
    DM_Motor_Init(&hcan1,0x02,POSITION);

    for (;;)
    {
            DM_Motor_Setposition(&hcan1,0x01,POSITION,4.0f*3.1415926f,2.0f*3.1415926f);
            DM_Motor_Setposition(&hcan1,0x02,POSITION,4.0f*3.1415926f,2.0f*3.1415926f);
        //让出CPU
        osDelay(1);
    }

}
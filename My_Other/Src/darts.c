//
// Created by 28416 on 2026/9/22.
//
#include "darts.h"
//飞镖参数 初始化
Dart_FloatBytes D1_Data_Force={0};
Dart_FloatBytes D1_Data_Yaw={0};

Dart_FloatBytes D2_Data_Force={0};
Dart_FloatBytes D2_Data_Yaw={0};

Dart_FloatBytes D3_Data_Force={0};
Dart_FloatBytes D3_Data_Yaw={0};

Dart_FloatBytes D4_Data_Force={0};
Dart_FloatBytes D4_Data_Yaw={0};

uint8_t Dart_ID_state = 0;//用以区分是那个飞镖的参数
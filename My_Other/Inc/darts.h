//
// Created by 28416 on 2026/9/22.
//

#ifndef OLD_DART_STAND_DARTS_H
#define OLD_DART_STAND_DARTS_H
#include "stdint.h"
typedef union {
    float f;
    uint8_t bytes[4];
} Dart_FloatBytes;//将飞镖参数设为联合体

extern  Dart_FloatBytes D1_Data_Force;
extern  Dart_FloatBytes D1_Data_Yaw;

extern Dart_FloatBytes D2_Data_Force;
extern Dart_FloatBytes D2_Data_Yaw;

extern Dart_FloatBytes D3_Data_Force;
extern Dart_FloatBytes D3_Data_Yaw;

extern Dart_FloatBytes D4_Data_Force;
extern Dart_FloatBytes D4_Data_Yaw;

extern uint8_t Dart_ID_state;
#endif //OLD_DART_STAND_DARTS_H
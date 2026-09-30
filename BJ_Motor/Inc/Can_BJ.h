#ifndef __can_H
#define __can_H
#ifdef __cplusplus
 extern "C" {
#endif

#include "main.h"
#include "stdbool.h"

typedef struct {
	__IO CAN_RxHeaderTypeDef CAN_RxMsg;
	__IO uint8_t rxData[32];
	
	__IO CAN_TxHeaderTypeDef CAN_TxMsg;
	__IO uint8_t txData[32];

	__IO bool rxFrameFlag;
}CAN_t;

extern __IO CAN_t can;

void USER_CAN1_Filter_Init(void);
void can_SendCmd(__IO uint8_t *cmd, uint8_t len);

#ifdef __cplusplus
}
#endif
#endif /*__ can_H */
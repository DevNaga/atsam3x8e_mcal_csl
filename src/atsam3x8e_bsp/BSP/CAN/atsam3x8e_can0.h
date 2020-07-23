#ifndef __ATSAM3x8E_CAN0_H__
#define __ATSAM3x8E_CAN0_H__

#include "atsam3x8e_can_common.h"

#define CAN0_MR 0x400B4000
#define CAN0_IER 0x400B4004
#define CAN0_IDR 0x400B4008
#define CAN0_IMR 0x400B400C
#define CAN0_WPMR 0x400B40E4

// MR specific callables
int CAN_read_CAN0_MR(struct CAN_MR_struct *can0);
int CAN_enable_CAN0();
int CAN_disable_CAN0();
int CAN_enable_CAN0_lowpower();
int CAN_diasble_CAN0_lowpower();

int CAN_enable_CAN0_MBx(int mb_id);
int CAN_disable_CAN0_MBx(int mb_id);

int CAN_Read_CAN_MR_CAN0(struct CAN_MR_struct *can);
int CAN_Enable_CAN0();
int CAN_Enable_WPMR_CAN0();

#endif


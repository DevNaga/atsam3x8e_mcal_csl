#include "atsam3x8e_can0.h"

int CAN_Read_CAN_MR_CAN0(struct CAN_MR_struct *can)
{
    return CAN_Common_Read_CAN_MR(can, 0);
}

int CAN_Enable_CAN0()
{
    return CAN_Common_Enable_CAN(0);
}

int CAN_Enable_WPMR_CAN0()
{
    return CAN_Common_Enable_CAN(0);
}
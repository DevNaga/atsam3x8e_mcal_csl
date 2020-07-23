#include "atsam3x8e_can0.h"
#include "atsam3x8e_can1.h"

int CAN_Common_Read_CAN_MR(struct CAN_MR_struct *can, int can_channel)
{
    unsigned int *can_mr_addr = 0x0;

    if (can_channel == 0) {
        can_mr_addr = (unsigned int *)CAN0_MR;
    } else if (can_channel == 1) {
        can_mr_addr = (unsigned int *)CAN1_MR;
    } else {
        return -1;
    }

    can->CANEN = !!(*(can_mr_addr) & 0x00000001);
    can->LPM = !!(*(can_mr_addr) & 0x00000002);
    can->ABM = !!(*(can_mr_addr) & 0x00000004);
    can->OVL = !!(*(can_mr_addr) & 0x00000008);
    can->TEOF = !!(*(can_mr_addr) & 0x00000010);
    can->TTM = !!(*(can_mr_addr) & 0x00000020);
    can->TIMFRZ = !!(*(can_mr_addr) & 0x00000040);
    can->DRPT = !!(*(can_mr_addr) & 0x00000080);

    can->RXSYNC = (*(can_mr_addr) & 0x07000000) >> 24;

    return 0;
}

int CAN_Common_Enable_CAN(int channel)
{
    unsigned int *can_mr_addr = 0x0;

    if (channel == 0) {
        can_mr_addr = (unsigned int *)CAN0_MR;
    } else if (channel == 1) {
        can_mr_addr = (unsigned int *)CAN1_MR;
    } else {
        return -1;
    }

    (*can_mr_addr) |= 0x00000001;

    return 0;
}

int CAN_Common_Enable_WPMR(int channel)
{
    unsigned int *can_wpmr_addr = 0x0;

    if (channel == 0) {
        can_wpmr_addr = (unsigned int *)CAN0_WPMR;
    } else if (channel == 1) {
        can_wpmr_addr = (unsigned int *)CAN1_WPMR;
    } else {
        return -1;
    }

    (*can_wpmr_addr) |= 0x43414E01;
    return 0;
}
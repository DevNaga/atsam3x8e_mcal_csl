#ifndef __ATSAM3x8E_CAN_COMMON_H__
#define __ATSAM3x8E_CAN_COMMON_H__

struct CAN_MR_struct {
    unsigned int CANEN:1;
    unsigned int LPM:1;
    unsigned int ABM:1;
    unsigned int OVL:1;
    unsigned int TEOF:1;
    unsigned int TTM:1;
    unsigned int TIMFRZ:1;
    unsigned int DRPT:1;
    unsigned int RXSYNC:3;
};

struct CAN_IER_struct {
    unsigned int MB0:1;
    unsigned int MB1:1;
    unsigned int MB2:1;
    unsigned int MB3:1;
    unsigned int MB4:1;
    unsigned int MB5:1;
    unsigned int MB6:1;
    unsigned int MB7:1;
    unsigned int ERRA:1;
    unsigned int WARN:1;
    unsigned int ERRP:1;
    unsigned int BOFF:1;
    unsigned int SLEEP:1;
    unsigned int WAKEUP:1;
    unsigned int TOVF:1;
    unsigned int TSTP:1;
    unsigned int CERR:1;
    unsigned int SERR:1;
    unsigned int AERR:1;
    unsigned int FERR:1;
    unsigned int BERR:1;
};

struct CAN_WPMR_struct {
    unsigned int WPEN:1;
    unsigned int WPKEY;
};

int CAN_Common_Read_CAN_MR(struct CAN_MR_struct *can, int can_channel);
int CAN_Common_Enable_CAN(int channel);
int CAN_Common_Enable_WPMR(int channel);

#endif


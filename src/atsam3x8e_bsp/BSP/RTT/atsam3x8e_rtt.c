/**
 * 
 * @brief - RTT implementation definitions
 * 
 * @copyright - All rights reserved Devendra Naga (devendra.aaru@outlook.com) 2020-present
 */
#include "atsam3x8e_rtt.h"

// check what is the SCLK period xxx
#define RTT_SCLK_VALUE (1 / 32768 * 1024)
#define RTT_PRESCALAR_VAL_2_POW_16 (65536)

double rtt_mr_get_rtpres()
{
    unsigned int *rtt_mr = (unsigned int *)RTT_MR;
    int val = ((*rtt_mr) & 0x0000FFFF);

    if (val == 0) {
        return RTT_PRESCALAR_VAL_2_POW_16 * RTT_SCLK_VALUE;
    }
    
    return val * RTT_SCLK_VALUE;
}

int rtt_mr_get_alminen()
{
    unsigned int *rtt_mr = (unsigned int *)RTT_MR;

    return !!((*rtt_mr) & 0x00010000);
}


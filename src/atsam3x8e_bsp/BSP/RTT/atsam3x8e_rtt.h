/**
 * 
 * @brief - RTT implementation definitions
 * 
 * @copyright - All rights reserved Devendra Naga (devendra.aaru@outlook.com) 2020-present
 */
#ifndef __ATSAM3x8E_RTT_H__
#define __ATSAM3x8E_RTT_H__

// Real time timer mode register
#define RTT_MR 0x400E1A30

// Get real time prescalar value
double rtt_mr_get_rtpres();

// Get alarm interrupt enable
int rtt_mr_get_alminen();

#endif


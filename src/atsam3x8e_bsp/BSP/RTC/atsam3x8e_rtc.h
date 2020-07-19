/**
 * 
 * @brief - implements RTC
 * 
 * @copyright - All rights reserved Devendra Naga (devendra.aaru@outlook.com) 2020-present
 */
#ifndef __ATSAM3x8E_RTC_H__
#define __ATSAM3x8E_RTC_H__

// only be written if WPEN is cleared
#define RTC_CR 0x400E1A60

// RTC mode register
#define RTC_MR 0x400E1A64

// RTC timer register
#define RTC_TIMR 0x400E1A68

// RTC calendar register
#define RTC_CALR 0x400E1A6C

// RTC timer alarm register
#define RTC_TIMALR 0x400E1A70

// RTC calendar alarm register
#define RTC_CALALR 0x400E1A74

// RTC status register
#define RTC_SR 0x400E1A78

// RTC status clear command register
#define RTC_SCCR 0x400E1A7C

// RTC interrupt enable register
#define RTC_IER 0x400E1A80

// RTC interrupt disable register
#define RTC_IDR 0x400E1A84

// RTC interrupt mask register
#define RTC_IMR 0x400E1A88

// RTC valid entry register
#define RTC_VER 0x400E1A8C

// Write protect mode register
#define RTC_WPMR 0x400E1B44

// WPKEY to be writen in RTC_WPMR register.. 24 bits
#define ATSAM3X8E_WPKEY 0x525443

// get WPEN bit
int rtc_wpmr_wpen_get();

// set WPEN to enable .. write the WPKEY
int rtc_wpmr_wpen_enable();

// get update request time register
int rtc_cr_get_updtim();

struct rtc_time {
    unsigned char sec;
    unsigned char min;
    unsigned char hour;
    unsigned char ampm;
};

int rtc_get_time(struct rtc_time *t);

#endif


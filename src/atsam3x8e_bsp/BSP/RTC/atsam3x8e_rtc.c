/**
 * 
 * @brief - implements RTC
 * 
 * @copyright - All rights reserved Devendra Naga (devendra.aaru@outlook.com) 2020-present
 */
#include "atsam3x8e_rtc.h"

// not working xxx
int rtc_wpmr_wpen_get()
{
    unsigned int *rtc_wpmr = (unsigned int *)RTC_WPMR;

    return !!((*rtc_wpmr) & 0x00000001);
}

int rtc_wpmr_wpen_enable()
{
    unsigned int *rtc_wpmr = (unsigned int *)RTC_WPMR;

    *rtc_wpmr |= ((ATSAM3X8E_WPKEY << 8) | 0x00000001);
    return 0;
}

int rtc_cr_get_updtim()
{
    unsigned int *rtc_cr = (unsigned int *)RTC_CR;

    return !!((*rtc_cr) & 0x00000001);
}

int rtc_get_time(struct rtc_time *t)
{
    unsigned int *rtc_timr = (unsigned int *)RTC_TIMR;
    int secs = 0;
    int mins = 0;
    int hour = 0;

    t->ampm = !!((*rtc_timr) & 0x00400000);
    // didn't test this xxx
    t->hour = ((*rtc_timr) & 0x003f0000) >> 15;
    mins = ((*rtc_timr) & 0x00007f00) >> 7;
    secs = ((*rtc_timr) & 0x0000007f);

    t->sec = (((secs & 0x70) >> 4) * 10) + ((secs & 0x0f));
    t->min = (((mins & 0x70) >> 4) * 10) + ((mins & 0x0f));

    return 0;
}


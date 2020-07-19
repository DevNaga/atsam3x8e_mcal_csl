#include "atsam3x8e_wdt.h"

int wdt_set_restart()
{
    unsigned int *wdt_cr = (unsigned int *)WDT_CR;

    *wdt_cr = ((WDT_KEY << 24) | 0x00000001);

    return 0;
}

int wdt_mr_reset_processor()
{
    unsigned int *wdt_mr = (unsigned int *)WDT_MR;

    *wdt_mr |= 0x00004000;

    return 0;
}

int wdt_mr_reset_all()
{
    unsigned int *wdt_mr = (unsigned int *)WDT_MR;

    *wdt_mr |= 0x00000000;

    return 0;
}

int wdt_reset_enable()
{
    unsigned int *wdt_mr = (unsigned int *)WDT_MR;

    *wdt_mr |= 0x00002000;

    return 0;
}

int wdt_enable()
{
    unsigned int *wdt_mr = (unsigned int *)WDT_MR;

    (*wdt_mr) &= ~(1 << 15);

    return 0;
}

int wdt_disable()
{
    unsigned int *wdt_mr = (unsigned int *)WDT_MR;

    *wdt_mr |= 0x00008000;

    return 0;
}

int wdt_get_disable()
{
    unsigned int *wdt_mr = (unsigned int *)WDT_MR;

    return !!(*wdt_mr & 0x00008000);
}

int wdt_get_wdv()
{
    unsigned int *wdt_mr = (unsigned int *)WDT_MR;

    return ((*wdt_mr & 0x00000FFF));
}

int wdt_set_wdv(int val)
{
    unsigned int *wdt_mr = (unsigned int *)WDT_MR;

    *wdt_mr |= val;
}


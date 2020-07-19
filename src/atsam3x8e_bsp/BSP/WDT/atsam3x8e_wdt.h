#ifndef __ATSAM3x8E_WDT_H__
#define __ATSAM3x8E_WDT_H__

// value of WDT key
#define WDT_KEY 0xA5

// Wdg timer control register
#define WDT_CR 0x400E1A50

// Wdg timer mode register
#define WDT_MR 0x400E1A54

int wdt_set_restart();

int wdt_mr_reset_processor();

int wdt_mr_reset_all();

int wdt_reset_enable();

int wdt_enable();

int wdt_disable();

int wdt_get_disable();

int wdt_get_wdv();

int wdt_set_wdv(int val);


#endif


/**
 * 
 * @brief - implements pmc controller
 * 
 * @copyright - All rights reserved Devendra Naga (devendra.aaru@outlook.com) 2020-present
 */

#include "atsam3x8e_pmc.h"
#include "../PERIPH/atsam3x8e_peripherals.h"

void PMC_Enable_UOTGCLK()
{
    unsigned int *pmc_uotgclk = (unsigned int *)PMC_SCER;

    *pmc_uotgclk |= 0x00000020;
}

void PMC_Enable_PCK_0()
{
    unsigned int *pmc_pck0 = (unsigned int *)PMC_SCER;

    *pmc_pck0 |= 0x00000100;
}

void PMC_Enable_PCK_1()
{
    unsigned int *pmc_pck1 = (unsigned int *)PMC_SCER;

    *pmc_pck1 |= 0x00000200;
}

void PMC_Enable_PCK_2()
{
    unsigned int *pmc_pck2 = (unsigned int *)PMC_SCER;

    *pmc_pck2 |= 0x00000400;
}

void PMC_Enable_Periph_CAN_0()
{
    unsigned int *pmc_periph_clk = (unsigned int *)PMC_PCER1;

    *pmc_periph_clk |= 0x00000800;
}

void PMC_Enable_Periph_CAN_1()
{
    unsigned int *pmc_periph_clk = (unsigned int *)PMC_PCER1;

    *pmc_periph_clk |= 0x00010000;
}

void PMC_Enable_Periph_TRNG()
{
    unsigned int *pmc_periph_clk = (unsigned int *)PMC_PCER1;

    *pmc_periph_clk |= 0x00000200;
}

int PMC_Check_Periph_TRNG()
{
    unsigned int *pmc_periph_clk = (unsigned int *)PMC_PCSR1;

    return !!((*pmc_periph_clk) & 0x00000200);
}

void PMC_Enable_Periph_TWI0()
{
    unsigned int *pmc_periph_clk = (unsigned int *)PMC_PCER0;

    (*pmc_periph_clk) |= 0x00400000;
}

void PMC_Enable_Periph_TWI1()
{
    unsigned int *pmc_periph_clk = (unsigned int *)PMC_PCER0;

    (*pmc_periph_clk) |= 0x00800000;
}

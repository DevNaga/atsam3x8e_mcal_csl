/**
 * @brief - definitons to enable TRNG and get TRNG data
 * 
 * @copyright
 */
#include "atsam3x8e_trng.h"

// TRNG control register
#define TRNG_CR 0x400BC000

// TRNG interrupt enable register..
#define TRNG_IER 0x400BC010

// TRNG interrupt disable register..
#define TRNG_IDR 0x400BC014

// TRNG interrupt status register.. last bit is DATAREADY bit
#define TRNG_ISR 0x400BC01C

// TRNG interrupt mask register..
#define TRNG_IMR 0x400BC018

// TRNG output data register
#define TRNG_ODATA 0x400BC050

// security key to write to the TRNG.. TRNG_CR register
#define TRNG_SECURITY_KEY 0x524E47

// enable the TRNG.. TRNG_CR register
#define TRNG_ENABLE 0x00000001

void TRNG_Enable_Interrupts()
{
    unsigned int *trng_ie = (unsigned int *)TRNG_IER;

    // last bit is interrupt enable
    *trng_ie |= 0x00000001;
}

void TRNG_Disable_Interrupts()
{
    unsigned int *trng_ie = (unsigned int *)TRNG_IDR;

    *trng_ie |= 0x00000001;
}

int TRNG_Check_Interrupt()
{
    unsigned int *trng_ie = (unsigned int *)TRNG_IMR;

    return !!((*trng_ie) & 0x00000001);
}


void TRNG_Enable()
{
    unsigned int *trng_cr = (unsigned int *)TRNG_CR;

    *trng_cr = ((TRNG_SECURITY_KEY << 8) | TRNG_ENABLE);
}

// check for data readyness
static inline int TRNG_Data_Ready()
{
    unsigned int *trng_isr = (unsigned int *)TRNG_ISR;

    return !!((*trng_isr) & 0x00000001);
}

int TRNG_Get_Data_u32(unsigned int *data)
{
    unsigned int *trng_odata = (unsigned int *)TRNG_ODATA;

    // check if TRNG data is ready
    if (!TRNG_Data_Ready()) {
        return -1;
    }

    *data = *trng_odata;
    return 0;
}


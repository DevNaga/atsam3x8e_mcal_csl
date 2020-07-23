/**
 * @brief - ATSAM3X8E peripheral definitions
 *
 * @copyright - All rights reserved Devendra Naga (devendra.aaru@outlook.com) 2020-present
 */
#ifndef __ATSAM3x8E_PERIPHERALS_H__
#define __ATSAM3x8E_PERIPHERALS_H__

// A peripheral identifier is required for the control
// of the peripheral interrupt with the Nested Vectored
// Interrupt Controller and for the control of the peripheral
// clock with the Power Management Controller

enum peripheral_ids {

    // Supply controller
    PERIPH_ID_SUPC = 0,

    // Reset controller
    PERIPH_ID_RSTC,

    // Real time clock
    PERIPH_ID_RTC,

    // Real time timer
    PERIPH_ID_RTT,

    // Watchdog timer
    PERIPH_ID_WDG,

    // Power Management Controller
    PERIPH_ID_PMC,

    // Enhanced Embedded Flash Controller 0
    PERIPH_ID_EEFC0,

    // Enhanced Embedded Flash Controller 1
    PERIPH_ID_EEFC1,

    // UART
    PERIPH_ID_UART,

    // Static Memory Controller / SDRAM Controller
    PERIPH_ID_SMC_SDRAMC,

    // SDRAM Controller
    PERIPH_ID_SDRAMC,

    // Parallel I/O Conotroller A
    PERIPH_ID_PIOA,

    // Parallel I/O Conotroller B
    PERIPH_ID_PIOB,

    // Parallel I/O Conotroller C
    PERIPH_ID_PIOC,

    // Parallel I/O Conotroller D
    PERIPH_ID_PIOD,

    // Parallel I/O Conotroller E
    PERIPH_ID_PIOE,

    // Parallel I/O Conotroller F
    PERIPH_ID_PIOF,

    // UART 0
    PERIPH_ID_USART0,

    // UART 1
    PERIPH_ID_USART1,

    // UART 2
    PERIPH_ID_USART2,

    // UART 3
    PERIPH_ID_USART3,

    // High Speed Media Card Interface
    PERIPH_ID_HSMCI,

    // Two Wire Interface 0
    PERIPH_ID_TWI0,

    // Two Wire Interface 1
    PERIPH_ID_TWI1,

    // SPI 0
    PERIPH_ID_SPI0,

    // SPI 1
    PERIPH_ID_SPI1,

    // Sychronous Serial Controller
    PERIPH_ID_SSC,

    // Timer Counter Channel 0
    PERIPH_ID_TC0,

    // Timer Counter Channel 1
    PERIPH_ID_TC1,

    // Timer Counter Channel 2
    PERIPH_ID_TC2,

    // Timer Counter Channel 3
    PERIPH_ID_TC3,

    // Timer Counter Channel 4
    PERIPH_ID_TC4,

    // Timer Counter Channel 5
    PERIPH_ID_TC5,

    // Timer Counter Channel 6
    PERIPH_ID_TC6,

    // Timer Counter Channel 7
    PERIPH_ID_TC7,

    // Timer Counter Channel 8
    PERIPH_ID_TC8,

    // PWM Controller
    PERIPH_ID_PWM,

    // ADC Controller
    PERIPH_ID_ADC,

    // DAC Controller
    PERIPH_ID_DACC,

    // DMA Controller
    PERIPH_ID_DMAC,

    // USB OTG High Speed
    PERIPH_ID_UOTGHS,

    // TRNG generation
    PERIPH_ID_TRNG,

    // Ethernet Mac
    PERIPH_ID_EMAC,

    // CAN 0
    PERIPH_ID_CAN0,

    // CAN 1
    PERIPH_ID_CAN1,
};

// list specifying require of NVIC interrupt and PMC clock ctrl
struct periph_id_info {
    enum peripheral_ids ids;
    unsigned char has_nvic_intr;
    unsigned char has_pmc_clock_ctrl;
} periph_info[] = {
    {PERIPH_ID_SUPC, 1, 0},
    {PERIPH_ID_RSTC, 1, 0},
    {PERIPH_ID_RTC, 1, 0},
    {PERIPH_ID_RTT, 1, 0},
    {PERIPH_ID_WDG, 1, 0},
    {PERIPH_ID_PMC, 1, 0},
    {PERIPH_ID_EEFC0, 1, 0},
    {PERIPH_ID_EEFC1, 1, 0},
    {PERIPH_ID_UART, 1, 0},
    {PERIPH_ID_SMC_SDRAMC, 1, 1},
    {PERIPH_ID_SDRAMC, 1, 0},
    {PERIPH_ID_PIOA, 1, 1},
    {PERIPH_ID_PIOB, 1, 1},
    {PERIPH_ID_PIOC, 1, 1},
    {PERIPH_ID_PIOD, 1, 1},
    {PERIPH_ID_PIOE, 1, 1},
    {PERIPH_ID_PIOF, 1, 1},
    {PERIPH_ID_USART0, 1, 1},
    {PERIPH_ID_USART1, 1, 1},
    {PERIPH_ID_USART2, 1, 1},
    {PERIPH_ID_USART3, 1, 1},
    {PERIPH_ID_HSMCI, 1, 1},
    {PERIPH_ID_TWI0, 1, 1},
    {PERIPH_ID_TWI1, 1, 1},
    {PERIPH_ID_SPI0, 1, 1},
    {PERIPH_ID_SPI1, 1, 1},
    {PERIPH_ID_SSC, 1, 1},
    {PERIPH_ID_TC0, 1, 1},
    {PERIPH_ID_TC1, 1, 1},
    {PERIPH_ID_TC2, 1, 1},
    {PERIPH_ID_TC3, 1, 1},
    {PERIPH_ID_TC4, 1, 1},
    {PERIPH_ID_TC5, 1, 1},
    {PERIPH_ID_TC6, 1, 1},
    {PERIPH_ID_TC7, 1, 1},
    {PERIPH_ID_TC8, 1, 1},
    {PERIPH_ID_PWM, 1, 1},
    {PERIPH_ID_ADC, 1, 1},
    {PERIPH_ID_DACC, 1, 1},
    {PERIPH_ID_DMAC, 1, 1},
    {PERIPH_ID_UOTGHS, 1, 1},
    {PERIPH_ID_TRNG, 1, 1},
    {PERIPH_ID_EMAC, 1, 1},
    {PERIPH_ID_CAN0, 1, 1},
    {PERIPH_ID_CAN1, 1, 1},
};

#endif


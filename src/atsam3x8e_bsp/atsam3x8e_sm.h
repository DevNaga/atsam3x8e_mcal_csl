/**
 * @brief - contains definitions relating to the supply monitor and controler in the ATSAM3x8E Mcu
 * 
 * @copyright - All rights reserved Devendra Naga (devnaga@tuta.io) 2020-present
 */
#ifndef __ATSAM3x8e_SM_H__
#define __ATSAM3x8e_SM_H__

// SMSMPL statuses
#define SUPPLY_MONITOR_SMSMPL_DISABLED 0x00
#define SUPPLY_MONITOR_SMSMPL_CONT_SUPPLY_MONITOR 0x01
#define SUPPLY_MONITOR_SMSMPL_32SLCK 0x02
#define SUPPLY_MONITOR_SMSMPL_256SLCK 0x03
#define SUPPLY_MONITOR_SMSMPL_2048SLCK 0x04

// Supply controller supply monitor mode register
#define SUPC_SMMR 0x400E1A14
#define SUPC_MR 0x400E1A18

// voltage conversions
#define SMTH_1_9V 0x0
#define SMTH_2_0V 0x1

// password key
#define SUPPLY_MONITOR_PW_KEY 0xA5

// get supply monitor thresholds .. check those voltage conversion ids from SMTH_
int supply_monitor_get_smth();

// get a printable string
const char *supply_monitor_get_smth_str();

// get smply status
int supply_monitor_get_smsmpl();

// set SMPL status - one of the above 5 SUPPLY_MONITOR_SMSMPL_
int supply_monitor_set_smsmpl(int smsmpl);

// get if reset is enabled if a fault in the voltage level
int supply_monitor_get_reset_enable();

// get interrupt enable
int supply_monitor_get_interrupt_enable();

// get voltage regular enable
int supply_controller_get_volt_reg_enable();

// get password key
int supply_controller_get_pw_key();

#endif


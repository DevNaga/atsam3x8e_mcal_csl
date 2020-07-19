/**
 * 
 * @brief - implements ChipID
 * 
 * @copyright - All rights reserved Devendra Naga (devendra.aaru@outlook.com) 2020-present
 */
#ifndef __ATSAM3X8E_CHIPID_H__
#define __ATSAM3X8E_CHIPID_H__

#define CHIPID_CIDR  0x400E0940

// 0 - this chip has a single definition without extension
// 1 - an extended chip id exist
int chip_id_cidr_get_ext();

// get version of the device
int chip_id_cidr_get_version();

// get embedded processor
int chip_id_cidr_get_eproc();

// get nonvolatile program memory size
int chip_id_cidr_get_nvpsiz();

// get second nonvolatile program memory size
int chip_id_cidr_get_nvpsiz2();

// get SRAM size
int chip_id_cidr_get_sram();

// get ARCH
int chip_id_cidr_get_arch();

// get nonvolatile program memory type
int chip_id_cidr_get_nvptyp();


#endif


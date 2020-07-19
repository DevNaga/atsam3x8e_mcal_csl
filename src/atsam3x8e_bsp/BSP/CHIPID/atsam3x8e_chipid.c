#include "atsam3x8e_chipid.h"

//
// Version 0 - 4
// EPROC 5 - 7
// NVPSIZ 8 - 11
// NVPSIZ2 12 - 15
// SRAMSIZ 16 - 19
// ARCH 20 - 27
// NVPTYP 28 - 30
// Ext 31
int chip_id_cidr_get_ext()
{
    unsigned int *chipid_cidr = (unsigned int *)CHIPID_CIDR;

    return !!((*chipid_cidr) & 0x80000000);
}

int chip_id_cidr_get_version()
{
    unsigned int *chipid_cidr = (unsigned int *)CHIPID_CIDR;

    return ((*chipid_cidr) & 0x0000001F);
}

int chip_id_cidr_get_eproc()
{
    unsigned int *chipid_cidr = (unsigned int *)CHIPID_CIDR;

    return ((*chipid_cidr) & 0x000000E0) >> 5;
}

int chip_id_cidr_get_nvpsiz()
{
    unsigned int *chipid_cidr = (unsigned int *)CHIPID_CIDR;

    return ((*chipid_cidr) & 0x00000F00) >> 8;
}

int chip_id_cidr_get_nvpsiz2()
{
    unsigned int *chipid_cidr = (unsigned int *)CHIPID_CIDR;

    return ((*chipid_cidr) & 0x0000F000) >> 12;
}

int chip_id_cidr_get_sram()
{
    unsigned int *chipid_cidr = (unsigned int *)CHIPID_CIDR;

    return ((*chipid_cidr) & 0x000F0000) >> 16;
}

int chip_id_cidr_get_arch()
{
    unsigned int *chipid_cidr = (unsigned int *)CHIPID_CIDR;

    return ((*chipid_cidr) & 0x0FF00000) >> 20;
}

int chip_id_cidr_get_nvptyp()
{
    unsigned int *chipid_cidr = (unsigned int *)CHIPID_CIDR;

    return ((*chipid_cidr) & 0x70000000) >> 28;
}


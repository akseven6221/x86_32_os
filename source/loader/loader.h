#ifndef LOADER_H
#define LOADER_H


#include "comm/boot_info.h"
#include "comm/types.h"

typedef struct SMAP_entry {

    uint32_t BaseL;
    uint32_t BaseH;
    uint32_t LengthL;
    uint32_t LengthH;
    uint32_t Type;
    uint32_t ACPI;
}__attribute__((packed)) SMAP_entry_t;


#endif
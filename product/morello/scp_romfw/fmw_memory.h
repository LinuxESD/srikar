/*
 * Arm SCP/MCP Software
 * Copyright (c) 2018-2021, Arm Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 *
 * Description:
 *     ROM firmware memory layout for the linker script.
 */

#ifndef FMW_MEMORY_H
#define FMW_MEMORY_H

#include "morello_scp_system_mmap.h"

#define FMW_MEM_MODE ARCH_MEM_MODE_DUAL_REGION_RELOCATION

/*
 * ROM memory
 */
#define FMW_MEM0_SIZE SCP_ROM_SIZE
#define FMW_MEM0_BASE SCP_ROM_BASE

/*
 * RAM memory
 */
#define FMW_MEM1_SIZE SCP_RAM1_SIZE
#define FMW_MEM1_BASE SCP_RAM1_BASE

#endif /* FMW_MEMORY_H */

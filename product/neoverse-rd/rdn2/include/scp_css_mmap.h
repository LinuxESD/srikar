/*
 * Arm SCP/MCP Software
 * Copyright (c) 2020-2023, Arm Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef SCP_CSS_MMAP_H
#define SCP_CSS_MMAP_H

#include "scp_mmap.h"

#define SCP_CMN700_BASE (SCP_SYSTEM_ACCESS_PORT0_BASE)

#define SCP_REFCLK_CNTCONTROL_BASE (SCP_SYSTEM_ACCESS_PORT1_BASE + 0x2A430000)
#define SCP_SID_BASE               (SCP_SYSTEM_ACCESS_PORT1_BASE + 0x2A4A0000)

#define SCP_REFCLK_CNTCTL_BASE   (SCP_PERIPHERAL_BASE + 0x0000)
#define SCP_REFCLK_CNTBASE0_BASE (SCP_PERIPHERAL_BASE + 0x1000)
#define SCP_UART_BASE            (SCP_PERIPHERAL_BASE + 0x2000)
#define SCP_SP805_WDOG_BASE      (SCP_PERIPHERAL_BASE + 0x6000)
#define SCP_MHU_AP_BASE          (SCP_PERIPHERAL_BASE + 0x1000000)

#define SCP_PIK_SCP_BASE (SCP_PIK_BASE)

#define SCP_PIK_SYSTEM_BASE (SCP_PIK_SCP_BASE + 0x40000)

#define SCP_PIK_CLUSTER_BASE(n) \
    (SCP_SYSTEM_ACCESS_PORT1_BASE + 0x20000000 + (n * 0x100000) + 0x50000)

#define SCP_PPU_SCP_BASE (SCP_PIK_SCP_BASE + 0x1000)

#define SCP_PPU_SYS0_BASE (SCP_PIK_SYSTEM_BASE + 0x1000)

#define SCP_CLUSTER_PPU_BASE(n) \
    (SCP_SYSTEM_ACCESS_PORT1_BASE + 0x20000000 + (n * 0x100000) + 0x30000)

#define SCP_CORE_PPU_BASE(n) \
    (SCP_SYSTEM_ACCESS_PORT1_BASE + 0x20000000 + (n * 0x100000) + 0x80000)

#define SCP_MHU_SCP_AP_SND_S_CLUS0 (0x45020000)
#define SCP_MHU_SCP_AP_RCV_S_CLUS0 (0x45030000)

/*
 * Macro to convert the AP address to SCP address to access through System
 * Access Port 0
 */
#define SCP_SYSTEM_ACCESS_PORT0_ADDR(addr) (addr + 0x20000000)

/* PCIe Related memory map */
#define PCIE_INTEG_CTRL_REG_BASE(idx) \
    (SCP_SYSTEM_ACCESS_PORT0_ADDR(0x40D00000 + (idx * 0x2000000)))

#endif /* SCP_CSS_MMAP_H */

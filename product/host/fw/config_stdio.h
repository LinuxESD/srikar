/*
 * Arm SCP/MCP Software
 * Copyright (c) 2020-2021, Arm Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef CONFIG_STDIO_H
#define CONFIG_STDIO_H

#include <fwk_id.h>
#include <fwk_module_idx.h>

enum config_stdio_element_idx {
    CONFIG_STDIO_ELEMENT_IDX_STDIN,
    CONFIG_STDIO_ELEMENT_IDX_STDOUT,
    CONFIG_STDIO_ELEMENT_IDX_COUNT,
};

#define CONFIG_STDIO_ELEMENT_ID_STDIN_INIT \
    FWK_ID_ELEMENT_INIT(FWK_MODULE_IDX_STDIO, CONFIG_STDIO_ELEMENT_IDX_STDIN)

#define CONFIG_STDIO_ELEMENT_ID_STDIN \
    FWK_ID_ELEMENT(FWK_MODULE_IDX_STDIO, CONFIG_STDIO_ELEMENT_IDX_STDIN)

#define CONFIG_STDIO_ELEMENT_ID_STDOUT_INIT \
    FWK_ID_ELEMENT_INIT(FWK_MODULE_IDX_STDIO, CONFIG_STDIO_ELEMENT_IDX_STDOUT)

#define CONFIG_STDIO_ELEMENT_ID_STDOUT \
    FWK_ID_ELEMENT(FWK_MODULE_IDX_STDIO, CONFIG_STDIO_ELEMENT_IDX_STDOUT)

#endif /* CONFIG_STDIO_H */

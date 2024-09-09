/*
 * Arm SCP/MCP Software
 * Copyright (c) 2023, Arm Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef MORELLO_MCP_SCP_H
#define MORELLO_MCP_SCP_H

/*
 * Handshake pattern which is written to MCP2SCP Secure MHU RAM by SCP
 * to let MCP know that it can continue the boot.
 */
#define MORELLO_SCP_MCP_HANDSHAKE_PATTERN          0x87654321
#define MORELLO_SCP_MCP_HANDSHAKE_TIMEOUT_MICROSEC (10 * 1000 * 1000)

#endif /* MORELLO_MCP_SCP_H */

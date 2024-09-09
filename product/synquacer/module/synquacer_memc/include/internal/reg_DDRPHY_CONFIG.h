/*
 * Arm SCP/MCP Software
 * Copyright (c) 2018-2021, Arm Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef INTERNAL_REG_DDRPHY_CONFIG_H
#define INTERNAL_REG_DDRPHY_CONFIG_H

#include <stdint.h>

typedef volatile struct {
    uint32_t RIDR; // 0x000
    uint32_t PIR; // 0x001
    uint32_t CGCR; // 0x002
    uint32_t CGCR1; // 0x003
    uint32_t PGCR0; // 0x004
    uint32_t PGCR1; // 0x005
    uint32_t PGCR2; // 0x006
    uint32_t PGCR3; // 0x007
    uint32_t PGCR4; // 0x008
    uint32_t PGCR5; // 0x009
    uint32_t PGCR6; // 0x00A
    uint32_t PGCR7; // 0x00B
    uint32_t PGCR8; // 0x00C
    uint32_t PGSR0; // 0x00D
    uint32_t PGSR1; // 0x00E
    uint32_t __Reserved_00F__; // 0x00F
    uint32_t PTR0; // 0x010
    uint32_t PTR1; // 0x011
    uint32_t PTR2; // 0x012
    uint32_t PTR3; // 0x013
    uint32_t PTR4; // 0x014
    uint32_t PTR5; // 0x015
    uint32_t PTR6; // 0x016
    uint32_t __Reserved_017__; // 0x017
    uint32_t __Reserved_018__; // 0x018
    uint32_t __Reserved_019__; // 0x019
    uint32_t PLLCR0; // 0x01A
    uint32_t PLLCR1; // 0x01B
    uint32_t PLLCR2; // 0x01C
    uint32_t PLLCR3; // 0x01D
    uint32_t PLLCR4; // 0x01E
    uint32_t PLLCR5; // 0x01F
    uint32_t PLLCR; // 0x020
    uint32_t __Reserved_021__; // 0x021
    uint32_t DXCCR; // 0x022
    uint32_t __Reserved_023__; // 0x023
    uint32_t DSGCR; // 0x024
    uint32_t __Reserved_025__; // 0x025
    uint32_t ODTCR; // 0x026
    uint32_t __Reserved_027__; // 0x027
    uint32_t AACR; // 0x028
    uint32_t __Reserved_029__; // 0x029
    uint32_t __Reserved_02A__; // 0x02A
    uint32_t __Reserved_02B__; // 0x02B
    uint32_t __Reserved_02C__; // 0x02C
    uint32_t __Reserved_02D__; // 0x02D
    uint32_t __Reserved_02E__; // 0x02E
    uint32_t __Reserved_02F__; // 0x02F
    uint32_t GPR0; // 0x030
    uint32_t GPR1; // 0x031
    uint32_t __Reserved_032__; // 0x032
    uint32_t __Reserved_033__; // 0x033
    uint32_t __Reserved_034__; // 0x034
    uint32_t __Reserved_035__; // 0x035
    uint32_t __Reserved_036__; // 0x036
    uint32_t __Reserved_037__; // 0x037
    uint32_t __Reserved_038__; // 0x038
    uint32_t __Reserved_039__; // 0x039
    uint32_t __Reserved_03A__; // 0x03A
    uint32_t __Reserved_03B__; // 0x03B
    uint32_t __Reserved_03C__; // 0x03C
    uint32_t __Reserved_03D__; // 0x03D
    uint32_t __Reserved_03E__; // 0x03E
    uint32_t __Reserved_03F__; // 0x03F
    uint32_t DCR; // 0x040
    uint32_t __Reserved_041__; // 0x041
    uint32_t __Reserved_042__; // 0x042
    uint32_t __Reserved_043__; // 0x043
    uint32_t DTPR0; // 0x044
    uint32_t DTPR1; // 0x045
    uint32_t DTPR2; // 0x046
    uint32_t DTPR3; // 0x047
    uint32_t DTPR4; // 0x048
    uint32_t DTPR5; // 0x049
    uint32_t DTPR6; // 0x04A
    uint32_t __Reserved_04B__; // 0x04B
    uint32_t __Reserved_04C__; // 0x04C
    uint32_t __Reserved_04D__; // 0x04D
    uint32_t __Reserved_04E__; // 0x04E
    uint32_t __Reserved_04F__; // 0x04F
    uint32_t RDIMMGCR0; // 0x050
    uint32_t RDIMMGCR1; // 0x051
    uint32_t RDIMMGCR2; // 0x052
    uint32_t __Reserved_053__; // 0x053
    uint32_t RDIMMCR0; // 0x054
    uint32_t RDIMMCR1; // 0x055
    uint32_t RDIMMCR2; // 0x056
    uint32_t RDIMMCR3; // 0x057
    uint32_t RDIMMCR4; // 0x058
    uint32_t __Reserved_059__; // 0x059
    uint32_t SCHCR0; // 0x05A
    uint32_t SCHCR1; // 0x05B
    uint32_t __Reserved_05C__; // 0x05C
    uint32_t __Reserved_05D__; // 0x05D
    uint32_t __Reserved_05E__; // 0x05E
    uint32_t __Reserved_05F__; // 0x05F
    uint32_t MR0; // 0x060
    uint32_t MR1; // 0x061
    uint32_t MR2; // 0x062
    uint32_t MR3; // 0x063
    uint32_t MR4; // 0x064
    uint32_t MR5; // 0x065
    uint32_t MR6; // 0x066
    uint32_t MR7; // 0x067
    uint32_t __Reserved_068__; // 0x068
    uint32_t __Reserved_069__; // 0x069
    uint32_t __Reserved_06A__; // 0x06A
    uint32_t MR11; // 0x06B
    uint32_t __Reserved_06C__; // 0x06C
    uint32_t __Reserved_06D__; // 0x06D
    uint32_t __Reserved_06E__; // 0x06E
    uint32_t __Reserved_06F__; // 0x06F
    uint32_t __Reserved_070__; // 0x070
    uint32_t __Reserved_071__; // 0x071
    uint32_t __Reserved_072__; // 0x072
    uint32_t __Reserved_073__; // 0x073
    uint32_t __Reserved_074__; // 0x074
    uint32_t __Reserved_075__; // 0x075
    uint32_t __Reserved_076__; // 0x076
    uint32_t __Reserved_077__; // 0x077
    uint32_t __Reserved_078__; // 0x078
    uint32_t __Reserved_079__; // 0x079
    uint32_t __Reserved_07A__; // 0x07A
    uint32_t __Reserved_07B__; // 0x07B
    uint32_t __Reserved_07C__; // 0x07C
    uint32_t __Reserved_07D__; // 0x07D
    uint32_t __Reserved_07E__; // 0x07E
    uint32_t __Reserved_07F__; // 0x07F
    uint32_t DTCR0; // 0x080
    uint32_t DTCR1; // 0x081
    uint32_t DTAR0; // 0x082
    uint32_t DTAR1; // 0x083
    uint32_t DTAR2; // 0x084
    uint32_t __Reserved_085__; // 0x085
    uint32_t DTDR0; // 0x086
    uint32_t DTDR1; // 0x087
    uint32_t UDDR0; // 0x088
    uint32_t UDDR1; // 0x089
    uint32_t __Reserved_08A__; // 0x08A
    uint32_t __Reserved_08B__; // 0x08B
    uint32_t DTEDR0; // 0x08C
    uint32_t DTEDR1; // 0x08D
    uint32_t DTEDR2; // 0x08E
    uint32_t VTDR; // 0x08F
    uint32_t CATR0; // 0x090
    uint32_t CATR1; // 0x091
    uint32_t __Reserved_092__; // 0x092
    uint32_t __Reserved_093__; // 0x093
    uint32_t DQSDR0; // 0x094
    uint32_t DQSDR1; // 0x095
    uint32_t DQSDR2; // 0x096
    uint32_t __Reserved_097__; // 0x097
    uint32_t __Reserved_098__; // 0x098
    uint32_t __Reserved_099__; // 0x099
    uint32_t __Reserved_09A__; // 0x09A
    uint32_t __Reserved_09B__; // 0x09B
    uint32_t __Reserved_09C__; // 0x09C
    uint32_t __Reserved_09D__; // 0x09D
    uint32_t __Reserved_09E__; // 0x09E
    uint32_t __Reserved_09F__; // 0x09F
    uint32_t __Reserved_0A0__; // 0x0A0
    uint32_t __Reserved_0A1__; // 0x0A1
    uint32_t __Reserved_0A2__; // 0x0A2
    uint32_t __Reserved_0A3__; // 0x0A3
    uint32_t __Reserved_0A4__; // 0x0A4
    uint32_t __Reserved_0A5__; // 0x0A5
    uint32_t __Reserved_0A6__; // 0x0A6
    uint32_t __Reserved_0A7__; // 0x0A7
    uint32_t __Reserved_0A8__; // 0x0A8
    uint32_t __Reserved_0A9__; // 0x0A9
    uint32_t __Reserved_0AA__; // 0x0AA
    uint32_t __Reserved_0AB__; // 0x0AB
    uint32_t __Reserved_0AC__; // 0x0AC
    uint32_t __Reserved_0AD__; // 0x0AD
    uint32_t __Reserved_0AE__; // 0x0AE
    uint32_t __Reserved_0AF__; // 0x0AF
    uint32_t __Reserved_0B0__; // 0x0B0
    uint32_t __Reserved_0B1__; // 0x0B1
    uint32_t __Reserved_0B2__; // 0x0B2
    uint32_t __Reserved_0B3__; // 0x0B3
    uint32_t __Reserved_0B4__; // 0x0B4
    uint32_t __Reserved_0B5__; // 0x0B5
    uint32_t __Reserved_0B6__; // 0x0B6
    uint32_t __Reserved_0B7__; // 0x0B7
    uint32_t __Reserved_0B8__; // 0x0B8
    uint32_t __Reserved_0B9__; // 0x0B9
    uint32_t __Reserved_0BA__; // 0x0BA
    uint32_t __Reserved_0BB__; // 0x0BB
    uint32_t __Reserved_0BC__; // 0x0BC
    uint32_t __Reserved_0BD__; // 0x0BD
    uint32_t __Reserved_0BE__; // 0x0BE
    uint32_t __Reserved_0BF__; // 0x0BF
    uint32_t DCUAR; // 0x0C0
    uint32_t DCUDR; // 0x0C1
    uint32_t DCURR; // 0x0C2
    uint32_t DCULR; // 0x0C3
    uint32_t DCUGCR; // 0x0C4
    uint32_t DCUTPR; // 0x0C5
    uint32_t DCUSR0; // 0x0C6
    uint32_t DCUSR1; // 0x0C7
    uint32_t __Reserved_0C8__; // 0x0C8
    uint32_t __Reserved_0C9__; // 0x0C9
    uint32_t __Reserved_0CA__; // 0x0CA
    uint32_t __Reserved_0CB__; // 0x0CB
    uint32_t __Reserved_0CC__; // 0x0CC
    uint32_t __Reserved_0CD__; // 0x0CD
    uint32_t __Reserved_0CE__; // 0x0CE
    uint32_t __Reserved_0CF__; // 0x0CF
    uint32_t __Reserved_0D0__; // 0x0D0
    uint32_t __Reserved_0D1__; // 0x0D1
    uint32_t __Reserved_0D2__; // 0x0D2
    uint32_t __Reserved_0D3__; // 0x0D3
    uint32_t __Reserved_0D4__; // 0x0D4
    uint32_t __Reserved_0D5__; // 0x0D5
    uint32_t __Reserved_0D6__; // 0x0D6
    uint32_t __Reserved_0D7__; // 0x0D7
    uint32_t __Reserved_0D8__; // 0x0D8
    uint32_t __Reserved_0D9__; // 0x0D9
    uint32_t __Reserved_0DA__; // 0x0DA
    uint32_t __Reserved_0DB__; // 0x0DB
    uint32_t __Reserved_0DC__; // 0x0DC
    uint32_t __Reserved_0DD__; // 0x0DD
    uint32_t __Reserved_0DE__; // 0x0DE
    uint32_t __Reserved_0DF__; // 0x0DF
    uint32_t __Reserved_0E0__; // 0x0E0
    uint32_t __Reserved_0E1__; // 0x0E1
    uint32_t __Reserved_0E2__; // 0x0E2
    uint32_t __Reserved_0E3__; // 0x0E3
    uint32_t __Reserved_0E4__; // 0x0E4
    uint32_t __Reserved_0E5__; // 0x0E5
    uint32_t __Reserved_0E6__; // 0x0E6
    uint32_t __Reserved_0E7__; // 0x0E7
    uint32_t __Reserved_0E8__; // 0x0E8
    uint32_t __Reserved_0E9__; // 0x0E9
    uint32_t __Reserved_0EA__; // 0x0EA
    uint32_t __Reserved_0EB__; // 0x0EB
    uint32_t __Reserved_0EC__; // 0x0EC
    uint32_t __Reserved_0ED__; // 0x0ED
    uint32_t __Reserved_0EE__; // 0x0EE
    uint32_t __Reserved_0EF__; // 0x0EF
    uint32_t __Reserved_0F0__; // 0x0F0
    uint32_t __Reserved_0F1__; // 0x0F1
    uint32_t __Reserved_0F2__; // 0x0F2
    uint32_t __Reserved_0F3__; // 0x0F3
    uint32_t __Reserved_0F4__; // 0x0F4
    uint32_t __Reserved_0F5__; // 0x0F5
    uint32_t __Reserved_0F6__; // 0x0F6
    uint32_t __Reserved_0F7__; // 0x0F7
    uint32_t __Reserved_0F8__; // 0x0F8
    uint32_t __Reserved_0F9__; // 0x0F9
    uint32_t __Reserved_0FA__; // 0x0FA
    uint32_t __Reserved_0FB__; // 0x0FB
    uint32_t __Reserved_0FC__; // 0x0FC
    uint32_t __Reserved_0FD__; // 0x0FD
    uint32_t __Reserved_0FE__; // 0x0FE
    uint32_t __Reserved_0FF__; // 0x0FF
    uint32_t BISTRR; // 0x100
    uint32_t BISTWCR; // 0x101
    uint32_t BISTMSKR0; // 0x102
    uint32_t BISTMSKR1; // 0x103
    uint32_t BISTMSKR2; // 0x104
    uint32_t BISTLSR; // 0x105
    uint32_t BISTAR0; // 0x106
    uint32_t BISTAR1; // 0x107
    uint32_t BISTAR2; // 0x108
    uint32_t BISTAR3; // 0x109
    uint32_t BISTAR4; // 0x10A
    uint32_t BISTUDPR; // 0x10B
    uint32_t BISTGSR; // 0x10C
    uint32_t BISTWER0; // 0x10D
    uint32_t BISTWER1; // 0x10E
    uint32_t BISTBER0; // 0x10F
    uint32_t BISTBER1; // 0x110
    uint32_t BISTBER2; // 0x111
    uint32_t BISTBER3; // 0x112
    uint32_t BISTBER4; // 0x113
    uint32_t BISTWCSR; // 0x114
    uint32_t BISTFWR0; // 0x115
    uint32_t BISTFWR1; // 0x116
    uint32_t BISTFWR2; // 0x117
    uint32_t BISTBER5; // 0x118
    uint32_t __Reserved_119__; // 0x119
    uint32_t __Reserved_11A__; // 0x11A
    uint32_t __Reserved_11B__; // 0x11B
    uint32_t __Reserved_11C__; // 0x11C
    uint32_t __Reserved_11D__; // 0x11D
    uint32_t __Reserved_11E__; // 0x11E
    uint32_t __Reserved_11F__; // 0x11F
    uint32_t __Reserved_120__; // 0x120
    uint32_t __Reserved_121__; // 0x121
    uint32_t __Reserved_122__; // 0x122
    uint32_t __Reserved_123__; // 0x123
    uint32_t __Reserved_124__; // 0x124
    uint32_t __Reserved_125__; // 0x125
    uint32_t __Reserved_126__; // 0x126
    uint32_t __Reserved_127__; // 0x127
    uint32_t __Reserved_128__; // 0x128
    uint32_t __Reserved_129__; // 0x129
    uint32_t __Reserved_12A__; // 0x12A
    uint32_t __Reserved_12B__; // 0x12B
    uint32_t __Reserved_12C__; // 0x12C
    uint32_t __Reserved_12D__; // 0x12D
    uint32_t __Reserved_12E__; // 0x12E
    uint32_t __Reserved_12F__; // 0x12F
    uint32_t __Reserved_130__; // 0x130
    uint32_t __Reserved_131__; // 0x131
    uint32_t __Reserved_132__; // 0x132
    uint32_t __Reserved_133__; // 0x133
    uint32_t __Reserved_134__; // 0x134
    uint32_t __Reserved_135__; // 0x135
    uint32_t __Reserved_136__; // 0x136
    uint32_t RANKIDR; // 0x137
    uint32_t RIOCR0; // 0x138
    uint32_t RIOCR1; // 0x139
    uint32_t RIOCR2; // 0x13A
    uint32_t RIOCR3; // 0x13B
    uint32_t RIOCR4; // 0x13C
    uint32_t RIOCR5; // 0x13D
    uint32_t __Reserved_13E__; // 0x13E
    uint32_t __Reserved_13F__; // 0x13F
    uint32_t ACIOCR0; // 0x140
    uint32_t ACIOCR1; // 0x141
    uint32_t ACIOCR2; // 0x142
    uint32_t ACIOCR3; // 0x143
    uint32_t ACIOCR4; // 0x144
    uint32_t ACIOCR5; // 0x145
    uint32_t __Reserved_146__; // 0x146
    uint32_t __Reserved_147__; // 0x147
    uint32_t IOVCR0; // 0x148
    uint32_t IOVCR1; // 0x149
    uint32_t VTCR0; // 0x14A
    uint32_t VTCR1; // 0x14B
    uint32_t __Reserved_14C__; // 0x14C
    uint32_t __Reserved_14D__; // 0x14D
    uint32_t __Reserved_14E__; // 0x14E
    uint32_t __Reserved_14F__; // 0x14F
    uint32_t ACBDLR0; // 0x150
    uint32_t ACBDLR1; // 0x151
    uint32_t ACBDLR2; // 0x152
    uint32_t ACBDLR3; // 0x153
    uint32_t ACBDLR4; // 0x154
    uint32_t ACBDLR5; // 0x155
    uint32_t ACBDLR6; // 0x156
    uint32_t ACBDLR7; // 0x157
    uint32_t ACBDLR8; // 0x158
    uint32_t ACBDLR9; // 0x159
    uint32_t ACBDLR10; // 0x15A
    uint32_t ACBDLR11; // 0x15B
    uint32_t ACBDLR12; // 0x15C
    uint32_t ACBDLR13; // 0x15D
    uint32_t ACBDLR14; // 0x15E
    uint32_t __Reserved_15F__; // 0x15F
    uint32_t ACLCDLR; // 0x160
    uint32_t __Reserved_161__; // 0x161
    uint32_t __Reserved_162__; // 0x162
    uint32_t __Reserved_163__; // 0x163
    uint32_t __Reserved_164__; // 0x164
    uint32_t __Reserved_165__; // 0x165
    uint32_t __Reserved_166__; // 0x166
    uint32_t __Reserved_167__; // 0x167
    uint32_t ACMDLR0; // 0x168
    uint32_t ACMDLR1; // 0x169
    uint32_t __Reserved_16A__; // 0x16A
    uint32_t __Reserved_16B__; // 0x16B
    uint32_t __Reserved_16C__; // 0x16C
    uint32_t __Reserved_16D__; // 0x16D
    uint32_t __Reserved_16E__; // 0x16E
    uint32_t __Reserved_16F__; // 0x16F
    uint32_t __Reserved_170__; // 0x170
    uint32_t __Reserved_171__; // 0x171
    uint32_t __Reserved_172__; // 0x172
    uint32_t __Reserved_173__; // 0x173
    uint32_t __Reserved_174__; // 0x174
    uint32_t __Reserved_175__; // 0x175
    uint32_t __Reserved_176__; // 0x176
    uint32_t __Reserved_177__; // 0x177
    uint32_t __Reserved_178__; // 0x178
    uint32_t __Reserved_179__; // 0x179
    uint32_t __Reserved_17A__; // 0x17A
    uint32_t __Reserved_17B__; // 0x17B
    uint32_t __Reserved_17C__; // 0x17C
    uint32_t __Reserved_17D__; // 0x17D
    uint32_t __Reserved_17E__; // 0x17E
    uint32_t __Reserved_17F__; // 0x17F
    uint32_t __Reserved_180__; // 0x180
    uint32_t __Reserved_181__; // 0x181
    uint32_t __Reserved_182__; // 0x182
    uint32_t __Reserved_183__; // 0x183
    uint32_t __Reserved_184__; // 0x184
    uint32_t __Reserved_185__; // 0x185
    uint32_t __Reserved_186__; // 0x186
    uint32_t __Reserved_187__; // 0x187
    uint32_t __Reserved_188__; // 0x188
    uint32_t __Reserved_189__; // 0x189
    uint32_t __Reserved_18A__; // 0x18A
    uint32_t __Reserved_18B__; // 0x18B
    uint32_t __Reserved_18C__; // 0x18C
    uint32_t __Reserved_18D__; // 0x18D
    uint32_t __Reserved_18E__; // 0x18E
    uint32_t __Reserved_18F__; // 0x18F
    uint32_t __Reserved_190__; // 0x190
    uint32_t __Reserved_191__; // 0x191
    uint32_t __Reserved_192__; // 0x192
    uint32_t __Reserved_193__; // 0x193
    uint32_t __Reserved_194__; // 0x194
    uint32_t __Reserved_195__; // 0x195
    uint32_t __Reserved_196__; // 0x196
    uint32_t __Reserved_197__; // 0x197
    uint32_t __Reserved_198__; // 0x198
    uint32_t __Reserved_199__; // 0x199
    uint32_t __Reserved_19A__; // 0x19A
    uint32_t __Reserved_19B__; // 0x19B
    uint32_t __Reserved_19C__; // 0x19C
    uint32_t __Reserved_19D__; // 0x19D
    uint32_t __Reserved_19E__; // 0x19E
    uint32_t __Reserved_19F__; // 0x19F
    uint32_t ZQCR; // 0x1A0
    uint32_t ZQ0PR; // 0x1A1
    uint32_t ZQ0DR; // 0x1A2
    uint32_t ZQ0SR; // 0x1A3
    uint32_t __Reserved_1A4__; // 0x1A4
    uint32_t ZQ1PR; // 0x1A5
    uint32_t ZQ1DR; // 0x1A6
    uint32_t ZQ1SR; // 0x1A7
    uint32_t __Reserved_1A8__; // 0x1A8
    uint32_t ZQ2PR; // 0x1A9
    uint32_t ZQ2DR; // 0x1AA
    uint32_t ZQ2SR; // 0x1AB
    uint32_t __Reserved_1AC__; // 0x1AC
    uint32_t ZQ3PR; // 0x1AD
    uint32_t ZQ3DR; // 0x1AE
    uint32_t ZQ3SR; // 0x1AF
    uint32_t __Reserved_1B0__; // 0x1B0
    uint32_t __Reserved_1B1__; // 0x1B1
    uint32_t __Reserved_1B2__; // 0x1B2
    uint32_t __Reserved_1B3__; // 0x1B3
    uint32_t __Reserved_1B4__; // 0x1B4
    uint32_t __Reserved_1B5__; // 0x1B5
    uint32_t __Reserved_1B6__; // 0x1B6
    uint32_t __Reserved_1B7__; // 0x1B7
    uint32_t __Reserved_1B8__; // 0x1B8
    uint32_t __Reserved_1B9__; // 0x1B9
    uint32_t __Reserved_1BA__; // 0x1BA
    uint32_t __Reserved_1BB__; // 0x1BB
    uint32_t __Reserved_1BC__; // 0x1BC
    uint32_t __Reserved_1BD__; // 0x1BD
    uint32_t __Reserved_1BE__; // 0x1BE
    uint32_t __Reserved_1BF__; // 0x1BF
    uint32_t DX0GCR0; // 0x1C0
    uint32_t DX0GCR1; // 0x1C1
    uint32_t DX0GCR2; // 0x1C2
    uint32_t DX0GCR3; // 0x1C3
    uint32_t DX0GCR4; // 0x1C4
    uint32_t DX0GCR5; // 0x1C5
    uint32_t DX0GCR6; // 0x1C6
    uint32_t DX0GCR7; // 0x1C7
    uint32_t DX0GCR8; // 0x1C8
    uint32_t DX0GCR9; // 0x1C9
    uint32_t __Reserved_1CA__; // 0x1CA
    uint32_t __Reserved_1CB__; // 0x1CB
    uint32_t __Reserved_1CC__; // 0x1CC
    uint32_t __Reserved_1CD__; // 0x1CD
    uint32_t __Reserved_1CE__; // 0x1CE
    uint32_t __Reserved_1CF__; // 0x1CF
    uint32_t DX0BDLR0; // 0x1D0
    uint32_t DX0BDLR1; // 0x1D1
    uint32_t DX0BDLR2; // 0x1D2
    uint32_t __Reserved_1D3__; // 0x1D3
    uint32_t DX0BDLR3; // 0x1D4
    uint32_t DX0BDLR4; // 0x1D5
    uint32_t DX0BDLR5; // 0x1D6
    uint32_t __Reserved_1D7__; // 0x1D7
    uint32_t DX0BDLR6; // 0x1D8
    uint32_t DX0BDLR7; // 0x1D9
    uint32_t DX0BDLR8; // 0x1DA
    uint32_t DX0BDLR9; // 0x1DB
    uint32_t __Reserved_1DC__; // 0x1DC
    uint32_t __Reserved_1DD__; // 0x1DD
    uint32_t __Reserved_1DE__; // 0x1DE
    uint32_t __Reserved_1DF__; // 0x1DF
    uint32_t DX0LCDLR0; // 0x1E0
    uint32_t DX0LCDLR1; // 0x1E1
    uint32_t DX0LCDLR2; // 0x1E2
    uint32_t DX0LCDLR3; // 0x1E3
    uint32_t DX0LCDLR4; // 0x1E4
    uint32_t DX0LCDLR5; // 0x1E5
    uint32_t __Reserved_1E6__; // 0x1E6
    uint32_t __Reserved_1E7__; // 0x1E7
    uint32_t DX0MDLR0; // 0x1E8
    uint32_t DX0MDLR1; // 0x1E9
    uint32_t __Reserved_1EA__; // 0x1EA
    uint32_t __Reserved_1EB__; // 0x1EB
    uint32_t __Reserved_1EC__; // 0x1EC
    uint32_t __Reserved_1ED__; // 0x1ED
    uint32_t __Reserved_1EE__; // 0x1EE
    uint32_t __Reserved_1EF__; // 0x1EF
    uint32_t DX0GTR0; // 0x1F0
    uint32_t __Reserved_1F1__; // 0x1F1
    uint32_t __Reserved_1F2__; // 0x1F2
    uint32_t __Reserved_1F3__; // 0x1F3
    uint32_t DX0RSR0; // 0x1F4
    uint32_t DX0RSR1; // 0x1F5
    uint32_t DX0RSR2; // 0x1F6
    uint32_t DX0RSR3; // 0x1F7
    uint32_t DX0GSR0; // 0x1F8
    uint32_t DX0GSR1; // 0x1F9
    uint32_t DX0GSR2; // 0x1FA
    uint32_t DX0GSR3; // 0x1FB
    uint32_t DX0GSR4; // 0x1FC
    uint32_t DX0GSR5; // 0x1FD
    uint32_t DX0GSR6; // 0x1FE
    uint32_t __Reserved_1FF__; // 0x1FF
    uint32_t DX1GCR0; // 0x200
    uint32_t DX1GCR1; // 0x201
    uint32_t DX1GCR2; // 0x202
    uint32_t DX1GCR3; // 0x203
    uint32_t DX1GCR4; // 0x204
    uint32_t DX1GCR5; // 0x205
    uint32_t DX1GCR6; // 0x206
    uint32_t DX1GCR7; // 0x207
    uint32_t DX1GCR8; // 0x208
    uint32_t DX1GCR9; // 0x209
    uint32_t __Reserved_20A__; // 0x20A
    uint32_t __Reserved_20B__; // 0x20B
    uint32_t __Reserved_20C__; // 0x20C
    uint32_t __Reserved_20D__; // 0x20D
    uint32_t __Reserved_20E__; // 0x20E
    uint32_t __Reserved_20F__; // 0x20F
    uint32_t DX1BDLR0; // 0x210
    uint32_t DX1BDLR1; // 0x211
    uint32_t DX1BDLR2; // 0x212
    uint32_t __Reserved_213__; // 0x213
    uint32_t DX1BDLR3; // 0x214
    uint32_t DX1BDLR4; // 0x215
    uint32_t DX1BDLR5; // 0x216
    uint32_t __Reserved_217__; // 0x217
    uint32_t DX1BDLR6; // 0x218
    uint32_t DX1BDLR7; // 0x219
    uint32_t DX1BDLR8; // 0x21A
    uint32_t DX1BDLR9; // 0x21B
    uint32_t __Reserved_21C__; // 0x21C
    uint32_t __Reserved_21D__; // 0x21D
    uint32_t __Reserved_21E__; // 0x21E
    uint32_t __Reserved_21F__; // 0x21F
    uint32_t DX1LCDLR0; // 0x220
    uint32_t DX1LCDLR1; // 0x221
    uint32_t DX1LCDLR2; // 0x222
    uint32_t DX1LCDLR3; // 0x223
    uint32_t DX1LCDLR4; // 0x224
    uint32_t DX1LCDLR5; // 0x225
    uint32_t __Reserved_226__; // 0x226
    uint32_t __Reserved_227__; // 0x227
    uint32_t DX1MDLR0; // 0x228
    uint32_t DX1MDLR1; // 0x229
    uint32_t __Reserved_22A__; // 0x22A
    uint32_t __Reserved_22B__; // 0x22B
    uint32_t __Reserved_22C__; // 0x22C
    uint32_t __Reserved_22D__; // 0x22D
    uint32_t __Reserved_22E__; // 0x22E
    uint32_t __Reserved_22F__; // 0x22F
    uint32_t DX1GTR0; // 0x230
    uint32_t __Reserved_231__; // 0x231
    uint32_t __Reserved_232__; // 0x232
    uint32_t __Reserved_233__; // 0x233
    uint32_t DX1RSR0; // 0x234
    uint32_t DX1RSR1; // 0x235
    uint32_t DX1RSR2; // 0x236
    uint32_t DX1RSR3; // 0x237
    uint32_t DX1GSR0; // 0x238
    uint32_t DX1GSR1; // 0x239
    uint32_t DX1GSR2; // 0x23A
    uint32_t DX1GSR3; // 0x23B
    uint32_t DX1GSR4; // 0x23C
    uint32_t DX1GSR5; // 0x23D
    uint32_t DX1GSR6; // 0x23E
    uint32_t __Reserved_23F__; // 0x23F
    uint32_t DX2GCR0; // 0x240
    uint32_t DX2GCR1; // 0x241
    uint32_t DX2GCR2; // 0x242
    uint32_t DX2GCR3; // 0x243
    uint32_t DX2GCR4; // 0x244
    uint32_t DX2GCR5; // 0x245
    uint32_t DX2GCR6; // 0x246
    uint32_t DX2GCR7; // 0x247
    uint32_t DX2GCR8; // 0x248
    uint32_t DX2GCR9; // 0x249
    uint32_t __Reserved_24A__; // 0x24A
    uint32_t __Reserved_24B__; // 0x24B
    uint32_t __Reserved_24C__; // 0x24C
    uint32_t __Reserved_24D__; // 0x24D
    uint32_t __Reserved_24E__; // 0x24E
    uint32_t __Reserved_24F__; // 0x24F
    uint32_t DX2BDLR0; // 0x250
    uint32_t DX2BDLR1; // 0x251
    uint32_t DX2BDLR2; // 0x252
    uint32_t __Reserved_253__; // 0x253
    uint32_t DX2BDLR3; // 0x254
    uint32_t DX2BDLR4; // 0x255
    uint32_t DX2BDLR5; // 0x256
    uint32_t __Reserved_257__; // 0x257
    uint32_t DX2BDLR6; // 0x258
    uint32_t DX2BDLR7; // 0x259
    uint32_t DX2BDLR8; // 0x25A
    uint32_t DX2BDLR9; // 0x25B
    uint32_t __Reserved_25C__; // 0x25C
    uint32_t __Reserved_25D__; // 0x25D
    uint32_t __Reserved_25E__; // 0x25E
    uint32_t __Reserved_25F__; // 0x25F
    uint32_t DX2LCDLR0; // 0x260
    uint32_t DX2LCDLR1; // 0x261
    uint32_t DX2LCDLR2; // 0x262
    uint32_t DX2LCDLR3; // 0x263
    uint32_t DX2LCDLR4; // 0x264
    uint32_t DX2LCDLR5; // 0x265
    uint32_t __Reserved_266__; // 0x266
    uint32_t __Reserved_267__; // 0x267
    uint32_t DX2MDLR0; // 0x268
    uint32_t DX2MDLR1; // 0x269
    uint32_t __Reserved_26A__; // 0x26A
    uint32_t __Reserved_26B__; // 0x26B
    uint32_t __Reserved_26C__; // 0x26C
    uint32_t __Reserved_26D__; // 0x26D
    uint32_t __Reserved_26E__; // 0x26E
    uint32_t __Reserved_26F__; // 0x26F
    uint32_t DX2GTR0; // 0x270
    uint32_t __Reserved_271__; // 0x271
    uint32_t __Reserved_272__; // 0x272
    uint32_t __Reserved_273__; // 0x273
    uint32_t DX2RSR0; // 0x274
    uint32_t DX2RSR1; // 0x275
    uint32_t DX2RSR2; // 0x276
    uint32_t DX2RSR3; // 0x277
    uint32_t DX2GSR0; // 0x278
    uint32_t DX2GSR1; // 0x279
    uint32_t DX2GSR2; // 0x27A
    uint32_t DX2GSR3; // 0x27B
    uint32_t DX2GSR4; // 0x27C
    uint32_t DX2GSR5; // 0x27D
    uint32_t DX2GSR6; // 0x27E
    uint32_t __Reserved_27F__; // 0x27F
    uint32_t DX3GCR0; // 0x280
    uint32_t DX3GCR1; // 0x281
    uint32_t DX3GCR2; // 0x282
    uint32_t DX3GCR3; // 0x283
    uint32_t DX3GCR4; // 0x284
    uint32_t DX3GCR5; // 0x285
    uint32_t DX3GCR6; // 0x286
    uint32_t DX3GCR7; // 0x287
    uint32_t DX3GCR8; // 0x288
    uint32_t DX3GCR9; // 0x289
    uint32_t __Reserved_28A__; // 0x28A
    uint32_t __Reserved_28B__; // 0x28B
    uint32_t __Reserved_28C__; // 0x28C
    uint32_t __Reserved_28D__; // 0x28D
    uint32_t __Reserved_28E__; // 0x28E
    uint32_t __Reserved_28F__; // 0x28F
    uint32_t DX3BDLR0; // 0x290
    uint32_t DX3BDLR1; // 0x291
    uint32_t DX3BDLR2; // 0x292
    uint32_t __Reserved_293__; // 0x293
    uint32_t DX3BDLR3; // 0x294
    uint32_t DX3BDLR4; // 0x295
    uint32_t DX3BDLR5; // 0x296
    uint32_t __Reserved_297__; // 0x297
    uint32_t DX3BDLR6; // 0x298
    uint32_t DX3BDLR7; // 0x299
    uint32_t DX3BDLR8; // 0x29A
    uint32_t DX3BDLR9; // 0x29B
    uint32_t __Reserved_29C__; // 0x29C
    uint32_t __Reserved_29D__; // 0x29D
    uint32_t __Reserved_29E__; // 0x29E
    uint32_t __Reserved_29F__; // 0x29F
    uint32_t DX3LCDLR0; // 0x2A0
    uint32_t DX3LCDLR1; // 0x2A1
    uint32_t DX3LCDLR2; // 0x2A2
    uint32_t DX3LCDLR3; // 0x2A3
    uint32_t DX3LCDLR4; // 0x2A4
    uint32_t DX3LCDLR5; // 0x2A5
    uint32_t __Reserved_2A6__; // 0x2A6
    uint32_t __Reserved_2A7__; // 0x2A7
    uint32_t DX3MDLR0; // 0x2A8
    uint32_t DX3MDLR1; // 0x2A9
    uint32_t __Reserved_2AA__; // 0x2AA
    uint32_t __Reserved_2AB__; // 0x2AB
    uint32_t __Reserved_2AC__; // 0x2AC
    uint32_t __Reserved_2AD__; // 0x2AD
    uint32_t __Reserved_2AE__; // 0x2AE
    uint32_t __Reserved_2AF__; // 0x2AF
    uint32_t DX3GTR0; // 0x2B0
    uint32_t __Reserved_2B1__; // 0x2B1
    uint32_t __Reserved_2B2__; // 0x2B2
    uint32_t __Reserved_2B3__; // 0x2B3
    uint32_t DX3RSR0; // 0x2B4
    uint32_t DX3RSR1; // 0x2B5
    uint32_t DX3RSR2; // 0x2B6
    uint32_t DX3RSR3; // 0x2B7
    uint32_t DX3GSR0; // 0x2B8
    uint32_t DX3GSR1; // 0x2B9
    uint32_t DX3GSR2; // 0x2BA
    uint32_t DX3GSR3; // 0x2BB
    uint32_t DX3GSR4; // 0x2BC
    uint32_t DX3GSR5; // 0x2BD
    uint32_t DX3GSR6; // 0x2BE
    uint32_t __Reserved_2BF__; // 0x2BF
    uint32_t DX4GCR0; // 0x2C0
    uint32_t DX4GCR1; // 0x2C1
    uint32_t DX4GCR2; // 0x2C2
    uint32_t DX4GCR3; // 0x2C3
    uint32_t DX4GCR4; // 0x2C4
    uint32_t DX4GCR5; // 0x2C5
    uint32_t DX4GCR6; // 0x2C6
    uint32_t DX4GCR7; // 0x2C7
    uint32_t DX4GCR8; // 0x2C8
    uint32_t DX4GCR9; // 0x2C9
    uint32_t __Reserved_2CA__; // 0x2CA
    uint32_t __Reserved_2CB__; // 0x2CB
    uint32_t __Reserved_2CC__; // 0x2CC
    uint32_t __Reserved_2CD__; // 0x2CD
    uint32_t __Reserved_2CE__; // 0x2CE
    uint32_t __Reserved_2CF__; // 0x2CF
    uint32_t DX4BDLR0; // 0x2D0
    uint32_t DX4BDLR1; // 0x2D1
    uint32_t DX4BDLR2; // 0x2D2
    uint32_t __Reserved_2D3__; // 0x2D3
    uint32_t DX4BDLR3; // 0x2D4
    uint32_t DX4BDLR4; // 0x2D5
    uint32_t DX4BDLR5; // 0x2D6
    uint32_t __Reserved_2D7__; // 0x2D7
    uint32_t DX4BDLR6; // 0x2D8
    uint32_t DX4BDLR7; // 0x2D9
    uint32_t DX4BDLR8; // 0x2DA
    uint32_t DX4BDLR9; // 0x2DB
    uint32_t __Reserved_2DC__; // 0x2DC
    uint32_t __Reserved_2DD__; // 0x2DD
    uint32_t __Reserved_2DE__; // 0x2DE
    uint32_t __Reserved_2DF__; // 0x2DF
    uint32_t DX4LCDLR0; // 0x2E0
    uint32_t DX4LCDLR1; // 0x2E1
    uint32_t DX4LCDLR2; // 0x2E2
    uint32_t DX4LCDLR3; // 0x2E3
    uint32_t DX4LCDLR4; // 0x2E4
    uint32_t DX4LCDLR5; // 0x2E5
    uint32_t __Reserved_2E6__; // 0x2E6
    uint32_t __Reserved_2E7__; // 0x2E7
    uint32_t DX4MDLR0; // 0x2E8
    uint32_t DX4MDLR1; // 0x2E9
    uint32_t __Reserved_2EA__; // 0x2EA
    uint32_t __Reserved_2EB__; // 0x2EB
    uint32_t __Reserved_2EC__; // 0x2EC
    uint32_t __Reserved_2ED__; // 0x2ED
    uint32_t __Reserved_2EE__; // 0x2EE
    uint32_t __Reserved_2EF__; // 0x2EF
    uint32_t DX4GTR0; // 0x2F0
    uint32_t __Reserved_2F1__; // 0x2F1
    uint32_t __Reserved_2F2__; // 0x2F2
    uint32_t __Reserved_2F3__; // 0x2F3
    uint32_t DX4RSR0; // 0x2F4
    uint32_t DX4RSR1; // 0x2F5
    uint32_t DX4RSR2; // 0x2F6
    uint32_t DX4RSR3; // 0x2F7
    uint32_t DX4GSR0; // 0x2F8
    uint32_t DX4GSR1; // 0x2F9
    uint32_t DX4GSR2; // 0x2FA
    uint32_t DX4GSR3; // 0x2FB
    uint32_t DX4GSR4; // 0x2FC
    uint32_t DX4GSR5; // 0x2FD
    uint32_t DX4GSR6; // 0x2FE
    uint32_t __Reserved_2FF__; // 0x2FF
    uint32_t DX5GCR0; // 0x300
    uint32_t DX5GCR1; // 0x301
    uint32_t DX5GCR2; // 0x302
    uint32_t DX5GCR3; // 0x303
    uint32_t DX5GCR4; // 0x304
    uint32_t DX5GCR5; // 0x305
    uint32_t DX5GCR6; // 0x306
    uint32_t DX5GCR7; // 0x307
    uint32_t DX5GCR8; // 0x308
    uint32_t DX5GCR9; // 0x309
    uint32_t __Reserved_30A__; // 0x30A
    uint32_t __Reserved_30B__; // 0x30B
    uint32_t __Reserved_30C__; // 0x30C
    uint32_t __Reserved_30D__; // 0x30D
    uint32_t __Reserved_30E__; // 0x30E
    uint32_t __Reserved_30F__; // 0x30F
    uint32_t DX5BDLR0; // 0x310
    uint32_t DX5BDLR1; // 0x311
    uint32_t DX5BDLR2; // 0x312
    uint32_t __Reserved_313__; // 0x313
    uint32_t DX5BDLR3; // 0x314
    uint32_t DX5BDLR4; // 0x315
    uint32_t DX5BDLR5; // 0x316
    uint32_t __Reserved_317__; // 0x317
    uint32_t DX5BDLR6; // 0x318
    uint32_t DX5BDLR7; // 0x319
    uint32_t DX5BDLR8; // 0x31A
    uint32_t DX5BDLR9; // 0x31B
    uint32_t __Reserved_31C__; // 0x31C
    uint32_t __Reserved_31D__; // 0x31D
    uint32_t __Reserved_31E__; // 0x31E
    uint32_t __Reserved_31F__; // 0x31F
    uint32_t DX5LCDLR0; // 0x320
    uint32_t DX5LCDLR1; // 0x321
    uint32_t DX5LCDLR2; // 0x322
    uint32_t DX5LCDLR3; // 0x323
    uint32_t DX5LCDLR4; // 0x324
    uint32_t DX5LCDLR5; // 0x325
    uint32_t __Reserved_326__; // 0x326
    uint32_t __Reserved_327__; // 0x327
    uint32_t DX5MDLR0; // 0x328
    uint32_t DX5MDLR1; // 0x329
    uint32_t __Reserved_32A__; // 0x32A
    uint32_t __Reserved_32B__; // 0x32B
    uint32_t __Reserved_32C__; // 0x32C
    uint32_t __Reserved_32D__; // 0x32D
    uint32_t __Reserved_32E__; // 0x32E
    uint32_t __Reserved_32F__; // 0x32F
    uint32_t DX5GTR0; // 0x330
    uint32_t __Reserved_331__; // 0x331
    uint32_t __Reserved_332__; // 0x332
    uint32_t __Reserved_333__; // 0x333
    uint32_t DX5RSR0; // 0x334
    uint32_t DX5RSR1; // 0x335
    uint32_t DX5RSR2; // 0x336
    uint32_t DX5RSR3; // 0x337
    uint32_t DX5GSR0; // 0x338
    uint32_t DX5GSR1; // 0x339
    uint32_t DX5GSR2; // 0x33A
    uint32_t DX5GSR3; // 0x33B
    uint32_t DX5GSR4; // 0x33C
    uint32_t DX5GSR5; // 0x33D
    uint32_t DX5GSR6; // 0x33E
    uint32_t __Reserved_33F__; // 0x33F
    uint32_t DX6GCR0; // 0x340
    uint32_t DX6GCR1; // 0x341
    uint32_t DX6GCR2; // 0x342
    uint32_t DX6GCR3; // 0x343
    uint32_t DX6GCR4; // 0x344
    uint32_t DX6GCR5; // 0x345
    uint32_t DX6GCR6; // 0x346
    uint32_t DX6GCR7; // 0x347
    uint32_t DX6GCR8; // 0x348
    uint32_t DX6GCR9; // 0x349
    uint32_t __Reserved_34A__; // 0x34A
    uint32_t __Reserved_34B__; // 0x34B
    uint32_t __Reserved_34C__; // 0x34C
    uint32_t __Reserved_34D__; // 0x34D
    uint32_t __Reserved_34E__; // 0x34E
    uint32_t __Reserved_34F__; // 0x34F
    uint32_t DX6BDLR0; // 0x350
    uint32_t DX6BDLR1; // 0x351
    uint32_t DX6BDLR2; // 0x352
    uint32_t __Reserved_353__; // 0x353
    uint32_t DX6BDLR3; // 0x354
    uint32_t DX6BDLR4; // 0x355
    uint32_t DX6BDLR5; // 0x356
    uint32_t __Reserved_357__; // 0x357
    uint32_t DX6BDLR6; // 0x358
    uint32_t DX6BDLR7; // 0x359
    uint32_t DX6BDLR8; // 0x35A
    uint32_t DX6BDLR9; // 0x35B
    uint32_t __Reserved_35C__; // 0x35C
    uint32_t __Reserved_35D__; // 0x35D
    uint32_t __Reserved_35E__; // 0x35E
    uint32_t __Reserved_35F__; // 0x35F
    uint32_t DX6LCDLR0; // 0x360
    uint32_t DX6LCDLR1; // 0x361
    uint32_t DX6LCDLR2; // 0x362
    uint32_t DX6LCDLR3; // 0x363
    uint32_t DX6LCDLR4; // 0x364
    uint32_t DX6LCDLR5; // 0x365
    uint32_t __Reserved_366__; // 0x366
    uint32_t __Reserved_367__; // 0x367
    uint32_t DX6MDLR0; // 0x368
    uint32_t DX6MDLR1; // 0x369
    uint32_t __Reserved_36A__; // 0x36A
    uint32_t __Reserved_36B__; // 0x36B
    uint32_t __Reserved_36C__; // 0x36C
    uint32_t __Reserved_36D__; // 0x36D
    uint32_t __Reserved_36E__; // 0x36E
    uint32_t __Reserved_36F__; // 0x36F
    uint32_t DX6GTR0; // 0x370
    uint32_t __Reserved_371__; // 0x371
    uint32_t __Reserved_372__; // 0x372
    uint32_t __Reserved_373__; // 0x373
    uint32_t DX6RSR0; // 0x374
    uint32_t DX6RSR1; // 0x375
    uint32_t DX6RSR2; // 0x376
    uint32_t DX6RSR3; // 0x377
    uint32_t DX6GSR0; // 0x378
    uint32_t DX6GSR1; // 0x379
    uint32_t DX6GSR2; // 0x37A
    uint32_t DX6GSR3; // 0x37B
    uint32_t DX6GSR4; // 0x37C
    uint32_t DX6GSR5; // 0x37D
    uint32_t DX6GSR6; // 0x37E
    uint32_t __Reserved_37F__; // 0x37F
    uint32_t DX7GCR0; // 0x380
    uint32_t DX7GCR1; // 0x381
    uint32_t DX7GCR2; // 0x382
    uint32_t DX7GCR3; // 0x383
    uint32_t DX7GCR4; // 0x384
    uint32_t DX7GCR5; // 0x385
    uint32_t DX7GCR6; // 0x386
    uint32_t DX7GCR7; // 0x387
    uint32_t DX7GCR8; // 0x388
    uint32_t DX7GCR9; // 0x389
    uint32_t __Reserved_38A__; // 0x38A
    uint32_t __Reserved_38B__; // 0x38B
    uint32_t __Reserved_38C__; // 0x38C
    uint32_t __Reserved_38D__; // 0x38D
    uint32_t __Reserved_38E__; // 0x38E
    uint32_t __Reserved_38F__; // 0x38F
    uint32_t DX7BDLR0; // 0x390
    uint32_t DX7BDLR1; // 0x391
    uint32_t DX7BDLR2; // 0x392
    uint32_t __Reserved_393__; // 0x393
    uint32_t DX7BDLR3; // 0x394
    uint32_t DX7BDLR4; // 0x395
    uint32_t DX7BDLR5; // 0x396
    uint32_t __Reserved_397__; // 0x397
    uint32_t DX7BDLR6; // 0x398
    uint32_t DX7BDLR7; // 0x399
    uint32_t DX7BDLR8; // 0x39A
    uint32_t DX7BDLR9; // 0x39B
    uint32_t __Reserved_39C__; // 0x39C
    uint32_t __Reserved_39D__; // 0x39D
    uint32_t __Reserved_39E__; // 0x39E
    uint32_t __Reserved_39F__; // 0x39F
    uint32_t DX7LCDLR0; // 0x3A0
    uint32_t DX7LCDLR1; // 0x3A1
    uint32_t DX7LCDLR2; // 0x3A2
    uint32_t DX7LCDLR3; // 0x3A3
    uint32_t DX7LCDLR4; // 0x3A4
    uint32_t DX7LCDLR5; // 0x3A5
    uint32_t __Reserved_3A6__; // 0x3A6
    uint32_t __Reserved_3A7__; // 0x3A7
    uint32_t DX7MDLR0; // 0x3A8
    uint32_t DX7MDLR1; // 0x3A9
    uint32_t __Reserved_3AA__; // 0x3AA
    uint32_t __Reserved_3AB__; // 0x3AB
    uint32_t __Reserved_3AC__; // 0x3AC
    uint32_t __Reserved_3AD__; // 0x3AD
    uint32_t __Reserved_3AE__; // 0x3AE
    uint32_t __Reserved_3AF__; // 0x3AF
    uint32_t DX7GTR0; // 0x3B0
    uint32_t __Reserved_3B1__; // 0x3B1
    uint32_t __Reserved_3B2__; // 0x3B2
    uint32_t __Reserved_3B3__; // 0x3B3
    uint32_t DX7RSR0; // 0x3B4
    uint32_t DX7RSR1; // 0x3B5
    uint32_t DX7RSR2; // 0x3B6
    uint32_t DX7RSR3; // 0x3B7
    uint32_t DX7GSR0; // 0x3B8
    uint32_t DX7GSR1; // 0x3B9
    uint32_t DX7GSR2; // 0x3BA
    uint32_t DX7GSR3; // 0x3BB
    uint32_t DX7GSR4; // 0x3BC
    uint32_t DX7GSR5; // 0x3BD
    uint32_t DX7GSR6; // 0x3BE
    uint32_t __Reserved_3BF__; // 0x3BF
    uint32_t DX8GCR0; // 0x3C0
    uint32_t DX8GCR1; // 0x3C1
    uint32_t DX8GCR2; // 0x3C2
    uint32_t DX8GCR3; // 0x3C3
    uint32_t DX8GCR4; // 0x3C4
    uint32_t DX8GCR5; // 0x3C5
    uint32_t DX8GCR6; // 0x3C6
    uint32_t DX8GCR7; // 0x3C7
    uint32_t DX8GCR8; // 0x3C8
    uint32_t DX8GCR9; // 0x3C9
    uint32_t __Reserved_3CA__; // 0x3CA
    uint32_t __Reserved_3CB__; // 0x3CB
    uint32_t __Reserved_3CC__; // 0x3CC
    uint32_t __Reserved_3CD__; // 0x3CD
    uint32_t __Reserved_3CE__; // 0x3CE
    uint32_t __Reserved_3CF__; // 0x3CF
    uint32_t DX8BDLR0; // 0x3D0
    uint32_t DX8BDLR1; // 0x3D1
    uint32_t DX8BDLR2; // 0x3D2
    uint32_t __Reserved_3D3__; // 0x3D3
    uint32_t DX8BDLR3; // 0x3D4
    uint32_t DX8BDLR4; // 0x3D5
    uint32_t DX8BDLR5; // 0x3D6
    uint32_t __Reserved_3D7__; // 0x3D7
    uint32_t DX8BDLR6; // 0x3D8
    uint32_t DX8BDLR7; // 0x3D9
    uint32_t DX8BDLR8; // 0x3DA
    uint32_t DX8BDLR9; // 0x3DB
    uint32_t __Reserved_3DC__; // 0x3DC
    uint32_t __Reserved_3DD__; // 0x3DD
    uint32_t __Reserved_3DE__; // 0x3DE
    uint32_t __Reserved_3DF__; // 0x3DF
    uint32_t DX8LCDLR0; // 0x3E0
    uint32_t DX8LCDLR1; // 0x3E1
    uint32_t DX8LCDLR2; // 0x3E2
    uint32_t DX8LCDLR3; // 0x3E3
    uint32_t DX8LCDLR4; // 0x3E4
    uint32_t DX8LCDLR5; // 0x3E5
    uint32_t __Reserved_3E6__; // 0x3E6
    uint32_t __Reserved_3E7__; // 0x3E7
    uint32_t DX8MDLR0; // 0x3E8
    uint32_t DX8MDLR1; // 0x3E9
    uint32_t __Reserved_3EA__; // 0x3EA
    uint32_t __Reserved_3EB__; // 0x3EB
    uint32_t __Reserved_3EC__; // 0x3EC
    uint32_t __Reserved_3ED__; // 0x3ED
    uint32_t __Reserved_3EE__; // 0x3EE
    uint32_t __Reserved_3EF__; // 0x3EF
    uint32_t DX8GTR0; // 0x3F0
    uint32_t __Reserved_3F1__; // 0x3F1
    uint32_t __Reserved_3F2__; // 0x3F2
    uint32_t __Reserved_3F3__; // 0x3F3
    uint32_t DX8RSR0; // 0x3F4
    uint32_t DX8RSR1; // 0x3F5
    uint32_t DX8RSR2; // 0x3F6
    uint32_t DX8RSR3; // 0x3F7
    uint32_t DX8GSR0; // 0x3F8
    uint32_t DX8GSR1; // 0x3F9
    uint32_t DX8GSR2; // 0x3FA
    uint32_t DX8GSR3; // 0x3FB
    uint32_t DX8GSR4; // 0x3FC
    uint32_t DX8GSR5; // 0x3FD
    uint32_t DX8GSR6; // 0x3FE
    uint32_t __Reserved_3FF__; // 0x3FF
} REG_ST_DDRPHY_CONFIG_t;

#endif // INTERNAL_REG_DDRPHY_CONFIG_H

    .include "macros/scrcmd.inc"

    .data

    .long _008D-.-4
    .long _00A0-.-4
    .long _00FA-.-4
    .long _0111-.-4
    .long _013D-.-4
    .long _0150-.-4
    .long _0022-.-4
    .long _0128-.-4
    .short 0xFD13

_0022:
    ScrCmd_1B6 0x4000
    ScrCmd_011 0x4000, 0
    ScrCmd_01C 1, _0069
    ScrCmd_011 0x4000, 1
    ScrCmd_01C 1, _007B
    ScrCmd_011 0x4000, 2
    ScrCmd_01C 1, _007B
    ScrCmd_011 0x4000, 3
    ScrCmd_01C 1, _007B
    ScrCmd_011 0x4000, 4
    ScrCmd_01C 1, _007B
    ScrCmd_002

_0069:
    ScrCmd_01F 0x273
    ScrCmd_01F 0x275
    ScrCmd_01E 0x272
    ScrCmd_01E 0x274
    ScrCmd_002

_007B:
    ScrCmd_01F 0x272
    ScrCmd_01F 0x274
    ScrCmd_01E 0x273
    ScrCmd_01E 0x275
    ScrCmd_002

_008D:
    ScrCmd_049 0x5DC
    ScrCmd_060
    ScrCmd_068
    ScrCmd_02C 0
    ScrCmd_031
    ScrCmd_034
    ScrCmd_061
    ScrCmd_002

_00A0:
    ScrCmd_049 0x5DC
    ScrCmd_060
    ScrCmd_068
    ScrCmd_020 205
    ScrCmd_01C 1, _00E5
    ScrCmd_02C 1
    ScrCmd_028 0x8004, 0x189
    ScrCmd_028 0x8005, 1
    ScrCmd_07D 0x8004, 0x8005, 0x800C
    ScrCmd_011 0x800C, 0
    ScrCmd_01C 1, _00F0
    ScrCmd_014 0x7FC
    ScrCmd_01E 205
    ScrCmd_016 _00E5

_00E5:
    ScrCmd_02C 2
    ScrCmd_031
    ScrCmd_034
    ScrCmd_061
    ScrCmd_002

_00F0:
    ScrCmd_014 0x7E1
    ScrCmd_034
    ScrCmd_061
    ScrCmd_002

_00FA:
    ScrCmd_036 5, 1, 0, 0x800C
    ScrCmd_038 3
    ScrCmd_039
    ScrCmd_03B 0x800C
    ScrCmd_014 0x7D0
    ScrCmd_002

_0111:
    ScrCmd_036 6, 1, 0, 0x800C
    ScrCmd_038 3
    ScrCmd_039
    ScrCmd_03B 0x800C
    ScrCmd_014 0x7D0
    ScrCmd_002

_0128:
    ScrCmd_037 3, 0
    ScrCmd_038 3
    ScrCmd_039
    ScrCmd_03A 7, 0x800C
    ScrCmd_014 0x7D0
    ScrCmd_002

_013D:
    ScrCmd_049 0x5DC
    ScrCmd_060
    ScrCmd_068
    ScrCmd_02C 3
    ScrCmd_031
    ScrCmd_034
    ScrCmd_061
    ScrCmd_002

_0150:
    ScrCmd_049 0x5DC
    ScrCmd_060
    ScrCmd_068
    ScrCmd_02C 4
    ScrCmd_031
    ScrCmd_034
    ScrCmd_061
    ScrCmd_002

    .byte 0
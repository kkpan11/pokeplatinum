    .include "macros/scrcmd.inc"

    .data

    .long _0006-.-4
    .short 0xFD13

_0006:
    ScrCmd_049 0x5DC
    ScrCmd_060
    ScrCmd_068
    ScrCmd_21D 0, 1, 0x800C
    ScrCmd_011 0x800C, 0
    ScrCmd_01C 1, _0070
    ScrCmd_01A _0102
    ScrCmd_011 0x800C, 1
    ScrCmd_01C 1, _003C
    ScrCmd_016 _0055

_003C:
    ScrCmd_21D 3, 1, 0
    ScrCmd_21D 2, 1, 1
    ScrCmd_02C 0
    ScrCmd_016 _00A8

_0055:
    ScrCmd_21D 3, 1, 0
    ScrCmd_21D 2, 1, 1
    ScrCmd_02C 1
    ScrCmd_016 _008C
    End

_0070:
    ScrCmd_02C 2
_0073:
    ScrCmd_01A _0102
    ScrCmd_011 0x800C, 1
    ScrCmd_01C 1, _00A8
    ScrCmd_016 _008C

_008C:
    ScrCmd_041 1, 1, 0, 1, 0x8004
    ScrCmd_042 11, 1
    ScrCmd_042 13, 3
    ScrCmd_042 14, 4
    ScrCmd_043
    ScrCmd_016 _00C2

_00A8:
    ScrCmd_041 1, 1, 0, 1, 0x8004
    ScrCmd_042 11, 1
    ScrCmd_042 12, 2
    ScrCmd_042 13, 3
    ScrCmd_042 14, 4
    ScrCmd_043
_00C2:
    ScrCmd_029 0x8008, 0x8004
    ScrCmd_011 0x8008, 1
    ScrCmd_01C 1, _01CF
    ScrCmd_011 0x8008, 2
    ScrCmd_01C 1, _0261
    ScrCmd_011 0x8008, 3
    ScrCmd_01C 1, _03DA
    ScrCmd_011 0x8008, 4
    ScrCmd_01C 1, _03E5
    ScrCmd_016 _03E5

_0102:
    ScrCmd_21D 0, 0, 0x800C
    ScrCmd_011 0x800C, 0
    ScrCmd_01C 1, _012C
    ScrCmd_21D 1, 0, 0x800C
    ScrCmd_011 0x800C, 0
    ScrCmd_01C 1, _01BF
_012C:
    ScrCmd_21D 0, 2, 0x800C
    ScrCmd_011 0x800C, 0
    ScrCmd_01C 1, _0156
    ScrCmd_21D 1, 2, 0x800C
    ScrCmd_011 0x800C, 0
    ScrCmd_01C 1, _01BF
_0156:
    ScrCmd_21D 0, 3, 0x800C
    ScrCmd_011 0x800C, 0
    ScrCmd_01C 1, _0180
    ScrCmd_21D 1, 3, 0x800C
    ScrCmd_011 0x800C, 0
    ScrCmd_01C 1, _01BF
_0180:
    ScrCmd_21D 0, 4, 0x800C
    ScrCmd_011 0x800C, 0
    ScrCmd_01C 1, _01AA
    ScrCmd_21D 1, 4, 0x800C
    ScrCmd_011 0x800C, 0
    ScrCmd_01C 1, _01BF
_01AA:
    ScrCmd_21D 0, 5, 0x800C
    ScrCmd_011 0x800C, 0
    ScrCmd_01C 1, _01C7
_01BF:
    ScrCmd_028 0x800C, 1
    ScrCmd_01B

_01C7:
    ScrCmd_028 0x800C, 0
    ScrCmd_01B

_01CF:
    ScrCmd_21D 0, 0, 0x800C
    ScrCmd_011 0x800C, 0
    ScrCmd_01C 1, _01F8
    ScrCmd_02C 5
    ScrCmd_03E 0x800C
    ScrCmd_011 0x800C, 0
    ScrCmd_01C 5, _03E5
_01F8:
    ScrCmd_02C 6
    ScrCmd_030
    ScrCmd_0BC 6, 1, 0, 0
    ScrCmd_0BD
    ScrCmd_034
    ScrCmd_21D 4, 0x800C
    ScrCmd_0BC 6, 1, 1, 0
    ScrCmd_0BD
    ScrCmd_011 0x800C, 1
    ScrCmd_01C 1, _03E5
    ScrCmd_011 0x800C, 2
    ScrCmd_01C 1, _0256
    ScrCmd_21D 6
    ScrCmd_21D 2, 0, 0
    ScrCmd_21D 3, 0, 1
    ScrCmd_02C 7
    ScrCmd_031
    ScrCmd_016 _03EA

_0256:
    ScrCmd_02C 22
    ScrCmd_031
    ScrCmd_016 _03EA

_0261:
    ScrCmd_02C 3
    ScrCmd_041 1, 1, 0, 1, 0x8004
    ScrCmd_21D 0, 0, 0x800C
    ScrCmd_011 0x800C, 0
    ScrCmd_01C 1, _02A2
    ScrCmd_21D 1, 0, 0x800C
    ScrCmd_011 0x800C, 1
    ScrCmd_01C 1, _02A2
    ScrCmd_21D 2, 0, 0
    ScrCmd_042 15, 0
_02A2:
    ScrCmd_21D 0, 2, 0x800C
    ScrCmd_011 0x800C, 0
    ScrCmd_01C 1, _02D8
    ScrCmd_21D 1, 2, 0x800C
    ScrCmd_011 0x800C, 1
    ScrCmd_01C 1, _02D8
    ScrCmd_21D 2, 2, 1
    ScrCmd_042 16, 2
_02D8:
    ScrCmd_21D 0, 3, 0x800C
    ScrCmd_011 0x800C, 0
    ScrCmd_01C 1, _030E
    ScrCmd_21D 1, 3, 0x800C
    ScrCmd_011 0x800C, 1
    ScrCmd_01C 1, _030E
    ScrCmd_21D 2, 3, 2
    ScrCmd_042 17, 3
_030E:
    ScrCmd_21D 0, 4, 0x800C
    ScrCmd_011 0x800C, 0
    ScrCmd_01C 1, _0344
    ScrCmd_21D 1, 4, 0x800C
    ScrCmd_011 0x800C, 1
    ScrCmd_01C 1, _0344
    ScrCmd_21D 2, 4, 3
    ScrCmd_042 18, 4
_0344:
    ScrCmd_21D 0, 5, 0x800C
    ScrCmd_011 0x800C, 0
    ScrCmd_01C 1, _037A
    ScrCmd_21D 1, 5, 0x800C
    ScrCmd_011 0x800C, 1
    ScrCmd_01C 1, _037A
    ScrCmd_21D 2, 5, 4
    ScrCmd_042 19, 5
_037A:
    ScrCmd_042 20, 6
    ScrCmd_043
    ScrCmd_011 0x8004, 6
    ScrCmd_01C 1, _03E5
    ScrCmd_011 0x8004, 0xFFFE
    ScrCmd_01C 1, _03E5
    ScrCmd_21D 2, 0x8004, 0
    ScrCmd_21D 3, 0x8004, 1
    ScrCmd_02C 8
    ScrCmd_03E 0x800C
    ScrCmd_011 0x800C, 0
    ScrCmd_01C 5, _0261
    ScrCmd_21D 5, 0x8004
    ScrCmd_0CD 0
    ScrCmd_21D 2, 0x8004, 1
    ScrCmd_02C 9
    ScrCmd_031
    ScrCmd_016 _03EA

_03DA:
    ScrCmd_02C 10
    ScrCmd_030
    ScrCmd_016 _0073

_03E5:
    ScrCmd_02C 4
    ScrCmd_031
_03EA:
    ScrCmd_034
    ScrCmd_061
    End

#include "macros/btlcmd.inc"

    .data

_000:
    UpdateVar OPCODE_FLAG_ON, BTLVAR_BATTLE_CTX_STATUS, SYSCTL_IGNORE_TYPE_CHECKS
    UpdateMonDataFromVar OPCODE_GET, BTLSCR_DEFENDER, BATTLEMON_CUR_HP, BTLVAR_DAMAGE
    UpdateVar OPCODE_MUL, BTLVAR_DAMAGE, -1
    DivideVarByValue BTLVAR_DAMAGE, 2
    End 

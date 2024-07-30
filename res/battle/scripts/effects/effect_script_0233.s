#include "macros/btlcmd.inc"

    .data

_000:
    CompareMonDataToValue OPCODE_EQU, BTLSCR_ATTACKER, BATTLEMON_ABILITY, ABILITY_MULTITYPE, _034
    CompareMonDataToValue OPCODE_EQU, BTLSCR_ATTACKER, BATTLEMON_HELD_ITEM, ITEM_GRISEOUS_ORB, _034
    TryFling _034
    UpdateVar OPCODE_SET, BTLVAR_SIDE_EFFECT_FLAGS_INDIRECT, MOVE_SIDE_EFFECT_ON_HIT|MOVE_SIDE_EFFECT_TO_DEFENDER|MOVE_SUBSCRIPT_PTR_FLING
    CalcCrit 
    CalcDamage 
    PrintAttackMessage 
    Wait 
    WaitButtonABTime 30
    // {0} flung its {1}!
    PrintMessage pl_msg_00000368_01144, TAG_NICKNAME_ITEM, BTLSCR_ATTACKER, BTLSCR_ATTACKER
    Wait 
    WaitButtonABTime 30
    RemoveItem BTLSCR_ATTACKER
    End 

_034:
    UpdateVar OPCODE_FLAG_ON, BTLVAR_MOVE_STATUS_FLAGS, MOVE_STATUS_FAILED
    End 

#include "macros/btlcmd.inc"

    .data

_000:
    CompareVarToValue OPCODE_FLAG_SET, BTLVAR_MOVE_STATUS_FLAGS, MOVE_STATUS_PROTECTED, _044
    CompareVarToValue OPCODE_FLAG_SET, BTLVAR_MOVE_STATUS_FLAGS, MOVE_STATUS_DID_NOT_HIT, _038
    CompareMonDataToValue OPCODE_FLAG_SET, BTLSCR_DEFENDER, BATTLEMON_VOLATILE_STATUS, VOLATILE_CONDITION_MEAN_LOOK, _048
    CheckSubstitute BTLSCR_DEFENDER, _048
    Call BATTLE_SUBSCRIPT_ATTACK_MESSAGE_AND_ANIMATION
    UpdateMonData OPCODE_FLAG_ON, BTLSCR_DEFENDER, BATTLEMON_VOLATILE_STATUS, VOLATILE_CONDITION_MEAN_LOOK
    UpdateMonDataFromVar OPCODE_FLAG_ON, BTLSCR_DEFENDER, BATTLEMON_MEAN_LOOK_TARGET, BTLVAR_ATTACKER
    // {0} can no longer escape!
    PrintMessage pl_msg_00000368_00408, TAG_NICKNAME, BTLSCR_DEFENDER
    Wait 
    WaitButtonABTime 30
    End 

_038:
    UpdateVar OPCODE_FLAG_OFF, BTLVAR_MOVE_STATUS_FLAGS, MOVE_STATUS_SEMI_INVULNERABLE
    GoTo _048

_044:
    UpdateVar OPCODE_FLAG_OFF, BTLVAR_MOVE_STATUS_FLAGS, MOVE_STATUS_PROTECTED

_048:
    UpdateVar OPCODE_FLAG_ON, BTLVAR_MOVE_STATUS_FLAGS, MOVE_STATUS_FAILED
    End 

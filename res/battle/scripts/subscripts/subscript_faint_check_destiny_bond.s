    .include "macros/btlcmd.inc"

    .data

_000:
    CompareMonDataToValue OPCODE_FLAG_NOT, BTLSCR_FAINTED_MON, BATTLEMON_VOLATILE_STATUS, VOLATILE_CONDITION_DESTINY_BOND, _066
    IfSameSide BTLSCR_ATTACKER, BTLSCR_FAINTED_MON, _066
    CompareMonDataToValue OPCODE_EQU, BTLSCR_ATTACKER, BATTLEMON_CUR_HP, 0, _066
    // {0} took {1} down with it!
    PrintMessage pl_msg_00000368_00391, TAG_NICKNAME_NICKNAME, BTLSCR_FAINTED_MON, BTLSCR_ATTACKER
    UpdateVarFromVar OPCODE_GET, BTLVAR_FAINTED_MON, BTLVAR_LAST_BATTLER_ID
    UpdateMonDataFromVar OPCODE_GET, BTLSCR_ATTACKER, BATTLEMON_CUR_HP, BTLVAR_HP_CALC_TEMP
    UpdateVar OPCODE_MUL, BTLVAR_HP_CALC_TEMP, -1
    UpdateVarFromVar OPCODE_SET, BTLVAR_MSG_BATTLER_TEMP, BTLVAR_ATTACKER
    UpdateVar OPCODE_FLAG_ON, BTLVAR_BATTLE_CTX_STATUS, SYSCTL_SKIP_SPRITE_BLINK
    Call BATTLE_SUBSCRIPT_UPDATE_HP
    PlayFaintAnimation 
    Wait 
    HealthbarSlideOut BTLSCR_FAINTED_MON
    // {0} fainted!
    PrintMessage pl_msg_00000368_00030, TAG_NICKNAME, BTLSCR_FAINTED_MON
    Wait 
    WaitButtonABTime 30
    IncrementGameRecord BTLSCR_FAINTED_MON, BATTLER_TYPE_SOLO_ENEMY, RECORD_FAINTED_IN_BATTLE
    IncrementGameRecord BTLSCR_FAINTED_MON, BATTLER_TYPE_SOLO_PLAYER, RECORD_FAINTED_ENEMY_MON
    UpdateVarFromVar OPCODE_GET, BTLVAR_LAST_BATTLER_ID, BTLVAR_FAINTED_MON

_066:
    TryGrudge _076
    // {0}’s {1} lost all its PP due to the grudge!
    PrintMessage pl_msg_00000368_00568, TAG_NICKNAME_MOVE, BTLSCR_ATTACKER, BTLSCR_MSG_TEMP
    Wait 
    WaitButtonABTime 30

_076:
    UpdateVar OPCODE_FLAG_ON, BTLVAR_BATTLE_CTX_STATUS_2, SYSCTL_NO_EXPERIENCE_GIVEN
    Call BATTLE_SUBSCRIPT_FAINT_MON
    UpdateVar OPCODE_FLAG_OFF, BTLVAR_BATTLE_CTX_STATUS_2, SYSCTL_NO_EXPERIENCE_GIVEN
    End 

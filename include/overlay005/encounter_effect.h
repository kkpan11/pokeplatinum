#ifndef POKEPLATINUM_ENCOUNTER_EFFECT_H
#define POKEPLATINUM_ENCOUNTER_EFFECT_H

#include "overlay005/struct_ov5_021EF3BC_decl.h"
#include "overlay005/struct_ov5_021EF43C_decl.h"
#include "struct_decls/struct_02006C24_decl.h"
#include "struct_decls/struct_02018340_decl.h"
#include "struct_decls/sys_task.h"
#include "struct_decls/struct_02022550_decl.h"
#include "field/field_system_decl.h"
#include "struct_defs/struct_0205AA50.h"
#include "overlay005/encounter_effect.h"
#include "overlay005/struct_ov5_021DDD80.h"
#include "overlay005/struct_ov5_021DDDBC.h"
#include "overlay005/struct_ov5_021DDE14.h"
#include "overlay005/struct_ov5_021DDF24.h"
#include "overlay005/struct_ov5_021DE47C.h"
#include "overlay005/struct_ov5_021DE5A4.h"
#include "overlay006/battle_params.h"
#include "enc_effects.h"

#include <nitro/fx/fx.h>


typedef struct EncounterEffect {
    int unk_00;
    int unk_04;
    int unk_08;
    void *unk_0C;
    FieldSystem *fieldSystem;
    BOOL *done;
    BOOL unk_18;
    BOOL unk_1C;
    NARC *narc;
} EncounterEffect;

typedef struct UnkStruct_ov5_021DE6BC {
    UnkStruct_ov5_021DDD80 unk_00;
    UnkStruct_ov5_021DDD80 unk_14;
    Window *unk_28;
    u8 unk_2C;
    u8 unk_2D;
    u8 unk_2E;
    u8 unk_2F;
} UnkStruct_ov5_021DE6BC;

typedef struct UnkStruct_ov5_021DE79C {
    UnkStruct_ov5_021DDD80 unk_00;
    UnkStruct_ov5_021DDD80 unk_14;
    Window *unk_28;
    u8 unk_2C;
    u8 unk_2D;
    u8 unk_2E;
    u8 unk_2F;
} UnkStruct_ov5_021DE79C;

typedef struct UnkStruct_ov5_021DE928 {
    Window *unk_00;
    UnkStruct_ov5_021DE79C *unk_04[48];
    u8 unk_C4;
    u8 unk_C5;
    u8 unk_C6;
    u8 unk_C7;
    s8 unk_C8;
    u8 unk_C9;
    u8 unk_CA;
    u8 unk_CB[1];
} UnkStruct_ov5_021DE928;

typedef struct UnkStruct_ov5_021DEA98 {
    Window *unk_00;
    UnkStruct_ov5_021DDD80 unk_04;
    u8 unk_18;
    u8 unk_19;
    u8 unk_1A[2];
} UnkStruct_ov5_021DEA98;

typedef struct UnkStruct_ov5_021DEC18 {
    UnkStruct_ov5_021DEA98 *unk_00[8];
    u8 unk_20;
    u8 unk_21[3];
} UnkStruct_ov5_021DEC18;

typedef struct UnkStruct_ov5_021DE374 {
    UnkStruct_ov5_021DDE14 unk_00;
    UnkStruct_ov5_021DDE14 unk_18;
    u32 unk_30;
    u32 unk_34;
    UnkStruct_ov5_021EF3BC *unk_38;
    UnkStruct_ov5_021EF43C *unk_3C;
    SysTask *unk_40;
    BOOL *unk_44;
} UnkStruct_ov5_021DE374;

typedef struct UnkStruct_ov5_021DDF74 {
    UnkStruct_ov5_021DDE14 unk_00;
    u32 unk_18;
    u32 unk_1C;
    UnkStruct_ov5_021EF3BC *unk_20;
    UnkStruct_ov5_021EF43C *unk_24;
    SysTask *unk_28;
    BOOL *unk_2C;
} UnkStruct_ov5_021DDF74;

typedef struct UnkStruct_ov5_021DED04 {
    UnkStruct_ov5_021DDD80 unk_00;
    u32 unk_14;
    u8 unk_18[192];
    UnkStruct_ov5_021EF3BC *unk_D8;
    UnkStruct_ov5_021EF43C *unk_DC;
    SysTask *unk_E0;
    BOOL *unk_E4;
} UnkStruct_ov5_021DED04;

void EncounterEffect_Start(enum EncEffectCutIn effect, FieldSystem *fieldSystem, BOOL *param2);
void ov5_021DDC28(EncounterEffect *param0, SysTask *param1);
void ov5_021DDC44(int param0, u32 param1, u32 param2, BOOL *param3, u32 param4);
BOOL ov5_021DDD7C(EncounterEffect *param0);
void ov5_021DDD80(UnkStruct_ov5_021DDD80 *param0, int param1, int param2, int param3);
BOOL ov5_021DDD90(UnkStruct_ov5_021DDD80 *param0);
void ov5_021DDDBC(UnkStruct_ov5_021DDDBC *param0, fx32 param1, fx32 param2, int param3);
BOOL ov5_021DDDCC(UnkStruct_ov5_021DDDBC *param0);
void ov5_021DDE14(UnkStruct_ov5_021DDE14 *param0, fx32 param1, fx32 param2, fx32 param3, int param4);
BOOL ov5_021DDE74(UnkStruct_ov5_021DDE14 *param0);
void ov5_021DDEDC(int param0, int param1);
void ov5_021DDEFC(UnkStruct_ov5_021DDF24 *param0, int param1, int param2, int param3, int param4);
BOOL ov5_021DDF08(UnkStruct_ov5_021DDF24 *param0);
UnkStruct_ov5_021DDF74 *ov5_021DDF38(void);
void ov5_021DDF74(UnkStruct_ov5_021DDF74 *param0);
void ov5_021DDF9C(EncounterEffect *param0, UnkStruct_ov5_021DDF74 *param1, u8 param2, u32 param3, int param4, int param5, fx32 param6);
void ov5_021DE058(EncounterEffect *param0, UnkStruct_ov5_021DDF74 *param1, u8 param2, u32 param3, int param4, int param5, fx32 param6);
UnkStruct_ov5_021DE374 *ov5_021DE1CC(void);
void ov5_021DE218(UnkStruct_ov5_021DE374 *param0);
void ov5_021DE240(EncounterEffect *param0, UnkStruct_ov5_021DE374 *param1, u32 param2, fx32 param3, fx32 param4);
void ov5_021DE3D0(NARC *param0, u32 param1, u32 param2, u32 param3, u32 param4, u32 param5, BGL *param6, u32 param7);
void ov5_021DE47C(UnkStruct_ov5_021DE47C *param0, int param1, int param2);
void ov5_021DE4AC(UnkStruct_ov5_021DE47C *param0);
void ov5_021DE4CC(NARC *param0, UnkStruct_ov5_021DE47C *param1, UnkStruct_ov5_021DE5A4 *param2, u32 param3, u32 param4, u32 param5, u32 param6, u32 param7, u32 param8);
void ov5_021DE5A4(UnkStruct_ov5_021DE47C *param0, UnkStruct_ov5_021DE5A4 *param1);
void ov5_021DE5D0(GraphicElementData *param0, u32 param1, u32 param2, u8 param3, u16 param4);
GraphicElementData *ov5_021DE62C(UnkStruct_ov5_021DE47C *param0, UnkStruct_ov5_021DE5A4 *param1, fx32 param2, fx32 param3, fx32 param4, int param5);
VecFx32 ov5_021DE660(fx32 param0, fx32 param1, fx32 param2);
UnkStruct_ov5_021DE6BC *ov5_021DE6A4(u32 param0);
void ov5_021DE6BC(UnkStruct_ov5_021DE6BC *param0);
void ov5_021DE6C4(UnkStruct_ov5_021DE6BC *param0, int param1, int param2, int param3, int param4, int param5, Window *param6, u32 param7, u32 param8, u8 param9);
BOOL ov5_021DE71C(UnkStruct_ov5_021DE6BC *param0);
UnkStruct_ov5_021DE79C *ov5_021DE784(u32 param0);
void ov5_021DE79C(UnkStruct_ov5_021DE79C *param0);
void ov5_021DE7A4(UnkStruct_ov5_021DE79C *param0, int param1, int param2, int param3, int param4, int param5, Window *param6, u32 param7, u32 param8, u8 param9);
BOOL ov5_021DE7FC(UnkStruct_ov5_021DE79C *param0);
UnkStruct_ov5_021DE928 *ov5_021DE8F8(u32 param0);
void ov5_021DE928(UnkStruct_ov5_021DE928 *param0);
void ov5_021DE948(UnkStruct_ov5_021DE928 *param0, u8 param1, u8 param2, Window *param3, u8 param4);
BOOL ov5_021DE988(UnkStruct_ov5_021DE928 *param0);
UnkStruct_ov5_021DEA98 *ov5_021DEA80(u32 param0);
void ov5_021DEA98(UnkStruct_ov5_021DEA98 *param0);
void ov5_021DEAA0(UnkStruct_ov5_021DEA98 *param0, u8 param1, u16 param2, u16 param3, Window *param4, u8 param5);
BOOL ov5_021DEAC8(UnkStruct_ov5_021DEA98 *param0);
UnkStruct_ov5_021DEC18 *ov5_021DEBEC(u32 param0);
void ov5_021DEC18(UnkStruct_ov5_021DEC18 *param0);
void ov5_021DEC38(UnkStruct_ov5_021DEC18 *param0, u8 param1, Window *param2, u8 param3);
BOOL ov5_021DECB8(UnkStruct_ov5_021DEC18 *param0);
UnkStruct_ov5_021DED04 *ov5_021DECEC(void);
void ov5_021DED04(UnkStruct_ov5_021DED04 *param0);
void ov5_021DED20(EncounterEffect *param0, UnkStruct_ov5_021DED04 *param1, u32 param2, u32 param3, u32 param4, u32 param5, u32 param6);
u32 CutInEffects_ForBattle(const BattleParams *param0);
void ov5_021DEF8C(int *param0);
void ov5_021DEFA0(FieldSystem *fieldSystem);
void ov5_021DF038(void);
BOOL ov5_021DF054(void);
void ov5_021DF070(void);
void ov5_021DF084(void);
void ov5_021DF0CC(NARC *param0, u32 param1);
void ov5_021DF17C(u32 param0);
BOOL ov5_021DF1CC(void);
BOOL ov5_021DF208(void);
void ov5_021DF224(void);

#endif // POKEPLATINUM_ENCOUNTER_EFFECT_H

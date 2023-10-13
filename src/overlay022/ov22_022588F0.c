#include <nitro.h>
#include <string.h>

#include "core_sys.h"

#include "overlay022/struct_ov22_02258A48.h"

#include "overlay022/ov22_022588F0.h"

static void ov22_02258948(UnkStruct_ov22_02258A48 * param0);

void ov22_022588F0 (UnkStruct_ov22_02258A48 * param0)
{
    memset(param0, 0, sizeof(UnkStruct_ov22_02258A48));

    param0->unk_04 = ov22_02258948;
    param0->unk_08 = ov22_02258948;
    param0->unk_0C = ov22_02258948;
}

void ov22_0225890C (UnkStruct_ov22_02258A48 * param0)
{
    if (gCoreSys.touchInput) {
        param0->unk_04(param0);
    } else {
        if (gCoreSys.unk_62) {
            param0->unk_0C(param0);
        } else {
            if (param0->unk_18) {
                param0->unk_08(param0);
            }
        }
    }

    param0->unk_14 = gCoreSys.unk_5C;
    param0->unk_16 = gCoreSys.unk_5E;
    param0->unk_18 = gCoreSys.unk_62;
}

static void ov22_02258948 (UnkStruct_ov22_02258A48 * param0)
{
    return;
}

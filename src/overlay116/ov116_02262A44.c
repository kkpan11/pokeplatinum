#include <nitro.h>
#include <string.h>

#include "overlay116/struct_ov116_02262A44.h"
#include "overlay116/struct_ov116_022649E4.h"

#include "unk_02017E74.h"
#include "overlay116/ov116_02262A44.h"

UnkStruct_ov116_02262A44 * ov116_02262A44 (int param0, UnkStruct_ov116_022649E4 * param1)
{
    UnkStruct_ov116_02262A44 * v0 = sub_02018144(106, sizeof(UnkStruct_ov116_02262A44));

    memset(v0, 0, sizeof(UnkStruct_ov116_02262A44));

    v0->unk_04 = param0;
    v0->unk_08 = ((30 * 40) - 0);
    v0->unk_0C = param1;

    return v0;
}

void ov116_02262A6C (UnkStruct_ov116_02262A44 * param0)
{
    sub_020181C4(param0);
}

BOOL ov116_02262A74 (UnkStruct_ov116_02262A44 * param0)
{
    if ((--param0->unk_08) <= 0) {
        return 0;
    }

    return 1;
}

#include <nitro.h>
#include <string.h>

#include "struct_decls/struct_020508D4_decl.h"

#include "struct_defs/struct_0203CDB0.h"
#include "struct_defs/struct_0208BE5C.h"
#include "overlay066/struct_ov66_0222DCE0.h"

#include "heap.h"
#include "unk_020508D4.h"
#include "unk_0205749C.h"
#include "overlay066/ov66_0222DCE0.h"

FS_EXTERN_OVERLAY(overlay66);

typedef struct {
    u16 unk_00;
    u16 unk_02;
    UnkStruct_ov66_0222DCE0 unk_04;
} UnkStruct_0205749C;


static BOOL sub_020574CC(UnkStruct_020508D4 * param0);

static const UnkStruct_0208BE5C Unk_020ED4CC = {
    ov66_0222DCE0,
    ov66_0222DD6C,
    ov66_0222DD90,
    FS_OVERLAY_ID(overlay66)
};

void sub_0205749C (UnkStruct_020508D4 * param0, BOOL param1)
{
    UnkStruct_0205749C * v0;

    v0 = Heap_AllocFromHeapAtEnd(11, sizeof(UnkStruct_0205749C));
    memset(v0, 0, sizeof(UnkStruct_0205749C));

    v0->unk_02 = param1;
    sub_02050944(param0, sub_020574CC, v0);
}

static BOOL sub_020574CC (UnkStruct_020508D4 * param0)
{
    FieldSystem * v0 = sub_02050A60(param0);
    UnkStruct_0205749C * v1 = sub_02050A64(param0);

    switch (v1->unk_00) {
    case 0:
    {
        v1->unk_04.unk_04 = v0->unk_0C;
        v1->unk_04.unk_08 = v1->unk_02;
        v1->unk_04.unk_00 = &v0->unk_C4;
        sub_02050A38(param0, &Unk_020ED4CC, &v1->unk_04);
        v1->unk_00++;
    }
    break;
    case 1:
        Heap_FreeToHeap(v1);
        return 1;
    }

    return 0;
}

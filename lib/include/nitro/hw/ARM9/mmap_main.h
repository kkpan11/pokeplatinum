#ifndef NITRO_HW_MMAP_MAIN_H_
#define NITRO_HW_MMAP_MAIN_H_

#ifdef __cplusplus
extern "C" {
#endif

#define HW_MAIN_MEM_SHARED_SIZE 0x001000

#ifdef SDK_TS
#define HW_MAIN_MEM_MAIN_SIZE 0x3E0000
#else
#define HW_MAIN_MEM_MAIN_SIZE 0x380000
#endif
#define HW_MAIN_MEM_SUB_SIZE (HW_MAIN_MEM_SIZE - HW_MAIN_MEM_MAIN_SIZE - HW_MAIN_MEM_SHARED_SIZE)

#define HW_MAIN_MEM_MAIN (HW_MAIN_MEM)
#define HW_MAIN_MEM_MAIN_END (HW_MAIN_MEM + HW_MAIN_MEM_MAIN_SIZE)
#define HW_MAIN_MEM_SUB (HW_MAIN_MEM_MAIN_END + 0x400000)
#define HW_MAIN_MEM_SUB_END (HW_MAIN_MEM_SUB + HW_MAIN_MEM_SUB_SIZE)

#define HW_MAIN_MEM_DEBUGGER_OFFSET 0x700000
#define HW_MAIN_MEM_DEBUGGER_SIZE 0x080000
#define HW_MAIN_MEM_DEBUGGER (HW_MAIN_MEM + HW_MAIN_MEM_DEBUGGER_OFFSET)
#define HW_MAIN_MEM_DEBUGGER_END (HW_MAIN_MEM_DEBUGGER + HW_MAIN_MEM_DEBUGGER_SIZE)

#define HW_MAIN_MEM_SHARED (HW_MAIN_MEM_EX_END - HW_MAIN_MEM_SHARED_SIZE)
#define HW_MAIN_MEM_SHARED_END (HW_MAIN_MEM_EX_END - HW_MAIN_MEM_SYSTEM_SIZE)

#define HW_MAIN_MEM_SYSTEM_END (HW_MAIN_MEM_EX_END)

#ifdef __cplusplus
}
#endif

#endif

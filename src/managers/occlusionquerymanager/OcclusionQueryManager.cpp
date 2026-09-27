// src/managers/occlusionquerymanager/OcclusionQueryManager.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "OcclusionQueryManager.h"

extern char DAT_016eb618[];         // "OcclusionQueryManager::AllocQuery(): could not allocate a query."
extern undefined4 *DAT_018da4b0;    // query work pool base (0x1C-byte works)
extern int DAT_018da4b4;            // query work pool size
extern int DAT_01f20664;            // query result array (4 bytes per query)

namespace OcclusionQueryManager_p1 {

// FUN_00dd5650 is a variadic debug print (empty in the release build).
typedef void (*DebugPrintFn)(const char *format, ...);

// 00FA8830: pops a work from the lock-free free list (ECX = the list at 0x018DA4A0).
inline undefined4 *popFreeWork()
{
    return ((undefined4 *(__fastcall *)(void *))0x00FA8830)((void *)0x018DA4A0);
}
// Active query list (ECX of FUN_00fa8570).
int *const kActiveQueries = (int *)0x01F20710;

}  // namespace OcclusionQueryManager_p1

// 00F9F540  OcclusionQueryManager::AllocQuery  size=152  [class]
// Takes a query work from the free list, initialises it and appends it to the active list.
uint OcclusionQueryManager::AllocQuery()
{
    using namespace OcclusionQueryManager_p1;

    if (DAT_018da4b0 != 0) {
        undefined4 *work = popFreeWork();
        if (work != 0) {
            work[0] = 0;
            uint index;
            if (work < DAT_018da4b0 || DAT_018da4b0 + DAT_018da4b4 * 7 <= work) {
                index = 0xFFFFFFFF;
            } else {
                index = (uint)((int)work - (int)DAT_018da4b0) / 0x1C;
            }
            work[1] = DAT_01f20664 + index * 4;   // this query's result slot
            *(unsigned short *)(work + 2) = 0;
            *((unsigned char *)work + 10) = 0;
            work[3] = 0;
            work[4] = 0;
            work[5] = 0;
            FUN_00fa8570(kActiveQueries, (int *)work);
            return index;
        }
    }
    ((DebugPrintFn)FUN_00dd5650)(DAT_016eb618);
    return 0xFFFFFFFF;
}

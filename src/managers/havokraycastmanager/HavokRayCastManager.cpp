// src/managers/havokraycastmanager/HavokRayCastManager.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "HavokRayCastManager.h"

extern char DAT_0164c08c[];  // "RayCastManager::getWork handle defined twice"

namespace HavokRayCastManager_p1 {

// FUN_00dd5650 is a variadic debug print (empty in the release build).
typedef void (*DebugPrintFn)(const char *format, ...);

// 0090EF80 RayCastMultiHitWork::RayCastMultiHitWork_2 / 00907860 RayCastSingleHitWork::
// RayCastSingleHitWork_5: take a work from the pool (ECX = the pool), return it.
inline char *allocMultiHitWork(void *pool)
{
    return ((char *(__thiscall *)(void *))0x0090EF80)(pool);
}
inline char *allocSingleHitWork(void *pool)
{
    return ((char *(__thiscall *)(void *))0x00907860)(pool);
}
// 00907DC0 RayCastManager::set(work, handle, name) (ECX = the manager).
inline int registerWork(void *manager, char *work, int **handle, char *name)
{
    return ((int (__thiscall *)(void *, char *, int **, char *))0x00907DC0)(manager, work, handle, name);
}
// 00908310 RayCastWork::set (ECX = the work).
typedef int (__thiscall *RayCastWorkSetFn)(char *work, undefined4 param04, undefined4 *from,
                                           undefined4 *to, undefined4 param30, undefined4 param34,
                                           undefined4 param38, undefined4 param3C, char *name,
                                           int hitMode, int zero, undefined4 param44);
const RayCastWorkSetFn kRayCastWorkSet = (RayCastWorkSetFn)0x00908310;

}  // namespace HavokRayCastManager_p1

// 0090F3B0  HavokRayCastManager::set  size=182  [class]
// Registers a work for the request's handle when it has none (single- or multi-hit), then
// passes the ray parameters to it; a failed RayCastWork::set sets work+0x1A to 1.
void HavokRayCastManager::set(Request *request)
{
    using namespace HavokRayCastManager_p1;

    char *work;
    int **handle = request->handle;
    if (*handle == 0) {
        if (request->multiHit == 0) {
            work = allocSingleHitWork(workPool());
        } else {
            work = allocMultiHitWork(workPool());
        }
        if (registerWork(this, work, request->handle, request->name) == 0) {
            return;
        }
    setWork:
        if (kRayCastWorkSet(work, request->param04, request->from, request->to, request->param30,
                            request->param34, request->param38, request->param3C, request->name,
                            (request->multiHit != 0) + 1, 0, request->param44) == 0) {
            *(unsigned short *)(work + 0x1A) = 1;
        }
        return;
    }
    work = (char *)*handle;
    if (work != 0) {
        if ((int *)handle == *(int **)(work + 0x10)) {
            if (work != 0) {
                goto setWork;
            }
        } else {
            ((DebugPrintFn)FUN_00dd5650)(DAT_0164c08c);
        }
    }
    ((DebugPrintFn)FUN_00dd5650)("HavokRayCastManager::set %s:not found work.", request->name);
}

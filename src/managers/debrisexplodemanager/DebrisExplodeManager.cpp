// src/managers/debrisexplodemanager/DebrisExplodeManager.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "DebrisExplodeManager.h"

extern char DAT_0164f628[];  // "DebrisExplodeManager::addHandle failed, probably due to work overflow"

namespace DebrisExplodeManager_p1 {

// FUN_00dd5650 is a variadic debug print (empty in the release build).
typedef void (*DebugPrintFn)(const char *format, ...);

// 00941A90 DebrisHandleList::addHandle(handle, param) (ECX = the list).
inline int addToList(void *list, int *handle, undefined4 param)
{
    return ((int (__thiscall *)(void *, int *, undefined4))0x00941A90)(list, handle, param);
}

}  // namespace DebrisExplodeManager_p1

// 00942E00  DebrisExplodeManager::addHandle  size=271  [class]
// Adds `handle` to the group of its owner (or to a group with room); 0 on failure.
undefined4 DebrisExplodeManager::addHandle(int *handle, undefined4 param)
{
    using namespace DebrisExplodeManager_p1;

    if (*handle != 0) {
        int owner = (int)FUN_00a7c8a0(*handle);
        if (owner != 0 && *(int *)(owner + 0x83C) != 0) {
            unsigned int g = 0;
            while (true) {
                if (groupKey(g) == *(int *)(owner + 0x83C) && groupBusy(g) == 0) {
                    break;
                }
                unsigned char next = (unsigned char)g + 1;
                g = next;
                if (0xB < next) {
                    // no group of this owner: take the first group with room
                    unsigned char free = 0;
                    while (groupList(free)[1] != 0 && groupList(free)[2] != 0) {
                        free = free + 1;
                        if (0xB < free) {
                            return 1;
                        }
                    }
                    if (addToList(handleList(free), handle, param) != 0) {
                        int freeKey = groupKey(free);
                        for (int k = 0; k < 12; k++) {
                            if (freeKey == key(k)) {
                                groupKeyMatched(free) = 1;
                            }
                        }
                        return 1;
                    }
                    goto failed;
                }
            }
            if (addToList(handleList(g), handle, param) != 0) {
                for (int k = 0; k < 12; k++) {
                    if (groupKey(g) == key(k)) {
                        groupKeyMatched(g) = 1;
                    }
                }
                return 1;
            }
        failed:
            ((DebugPrintFn)FUN_00dd5650)(DAT_0164f628);
            return 0;
        }
    }
    return 0;
}

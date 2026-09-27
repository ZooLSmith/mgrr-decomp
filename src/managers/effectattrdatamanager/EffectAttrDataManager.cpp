// src/managers/effectattrdatamanager/EffectAttrDataManager.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "EffectAttrDataManager.h"

// Debug message formats passed to the (empty) debug print FUN_00dd5650.
extern char DAT_0165ae38[];  // "effect attribute ID:Call%04x has no call data for attribute %03d."
extern char DAT_0165adfc[];  // "effect attribute ID:Call%04x has no all-attribute call data."
extern char DAT_0165ae78[];  // "EffectAttrDataManager::searchCallData: effect attribute set %04x does not exist."

namespace EffectAttrDataManager_p1 {

// FUN_00dd5650 is a variadic debug print (empty in the release build).
typedef void (*DebugPrintFn)(const char *format, ...);

typedef EffectAttrDataManager::CallData  CallData;
typedef EffectAttrDataManager::AttrEntry AttrEntry;
typedef EffectAttrDataManager::AttrSet   AttrSet;

// Fields of the call descriptor that is searched for.
inline int callId(int call)    { return *(int *)(call + 0x2C); }
inline int attribute(int call) { return *(int *)(call + 0x28); }
inline int callKey(int call)   { return *(int *)(call + 0x44); }

}  // namespace EffectAttrDataManager_p1

// 009E5E80  FUN_009e5e80  size=80  [callgraph]
// The call data of `entry` whose key is call+0x44, else FUN_009dc560(entry, call).
// (functions.h declares it `void FUN_009e5e80(int, int)`; it returns the pointer in EAX.)
int FUN_009e5e80(EffectAttrDataManager::AttrEntry *entry, int call)
{
    using namespace EffectAttrDataManager_p1;

    if (entry->callCount != 0) {
        for (unsigned int i = 0; i < entry->callCount; i++) {
            if (entry->calls[i].key == callKey(call)) {
                CallData *data = &entry->calls[i];
                if (data != 0) {
                    return (int)data;
                }
                break;
            }
        }
    }
    return FUN_009dc560((int *)entry, call);  // tail call, ECX = entry
}

// 009E5ED0  FUN_009e5ed0  size=185  [callgraph]
// Searches the attribute set `group` (rate limited by interval/timer) for the call data of `call`,
// falling back to the "all attributes" entry.
int FUN_009e5ed0(int *group, int call)
{
    using namespace EffectAttrDataManager_p1;
    AttrSet *set = (AttrSet *)group;

    if (set->interval != 0.0f) {
        if (set->timer < set->interval) {
            return 0;
        }
        set->timer = 0.0f;
    }
    for (unsigned int i = 0; i < set->entryCount; i++) {
        if (set->entries[i].attribute == attribute(call)) {
            AttrEntry *entry = &set->entries[i];
            if (entry != 0) {
                int result = FUN_009e5e80(entry, call);
                if (result != 0) {
                    return result;
                }
            }
            break;
        }
    }
    if (set->allAttributes == 0) {
        ((DebugPrintFn)FUN_00dd5650)(DAT_0165ae38, callId(call), attribute(call));
        return 0;
    }
    int result = FUN_009e5e80(set->allAttributes, call);
    if (result == 0) {
        ((DebugPrintFn)FUN_00dd5650)(DAT_0165adfc, callId(call));
    }
    return result;
}

// 009E5F90  FUN_009e5f90  size=55  [callgraph]
// Initialiser: FUN_00de3610(0, 0), fields +0x8..+0x14, FUN_00de3540(0, 0).
int __fastcall FUN_009e5f90(int self)
{
    FUN_00de3610((undefined4 *)self, 0, 0);
    *(undefined4 *)(self + 0x8) = 0;
    *(undefined4 *)(self + 0xC) = 1;
    *(undefined4 *)(self + 0x10) = 0x8001;
    *(undefined4 *)(self + 0x14) = 10;
    FUN_00de3540((undefined4 *)self, 0, 0);
    return self;
}

// 009E5FD0  EffectAttrDataManager::searchCallData  size=381  [class]
// Finds the attribute set of call+0x2C and searches it (FUN_009e5ed0 and the entry part of
// FUN_009e5e80 are inlined here).
int EffectAttrDataManager::searchCallData(int call)
{
    using namespace EffectAttrDataManager_p1;

    AttrSet *set;
    unsigned int i = 0;
    if (setCount() != 0) {
        do {
            if (sets()[i].callId == callId(call)) {
                goto found;
            }
            i++;
        } while (i < setCount());
    }
    ((DebugPrintFn)FUN_00dd5650)(DAT_0165ae78, callId(call));
    return 0;

found:
    set = &sets()[i];
    if (set->interval != 0.0f) {
        if (set->timer < set->interval) {
            return 0;
        }
        set->timer = 0.0f;
    }
    for (unsigned int e = 0; e < set->entryCount; e++) {
        if (set->entries[e].attribute == attribute(call)) {
            AttrEntry *entry = &set->entries[e];
            if (entry != 0) {
                // inlined FUN_009e5e80(entry, call)
                int result = 0;
                bool haveData = false;
                for (unsigned int k = 0; k < entry->callCount; k++) {
                    if (entry->calls[k].key == callKey(call)) {
                        CallData *data = &entry->calls[k];
                        if (data != 0) {
                            result = (int)data;
                            haveData = true;
                        }
                        break;
                    }
                }
                if (!haveData) {
                    result = FUN_009dc560((int *)entry, call);
                }
                if (result != 0) {
                    return result;
                }
            }
            break;
        }
    }
    if (set->allAttributes != 0) {
        int result = FUN_009e5e80(set->allAttributes, call);
        if (result == 0) {
            ((DebugPrintFn)FUN_00dd5650)(DAT_0165adfc, callId(call));
        }
        return result;
    }
    ((DebugPrintFn)FUN_00dd5650)(DAT_0165ae38, callId(call), attribute(call));
    return 0;
}

// src/managers/cuihitdatamanager/cUIHitDataManager.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cUIHitDataManager.h"

// kernel32 (the lock at +0x10 is a CRITICAL_SECTION)
extern "C" __declspec(dllimport) void __stdcall EnterCriticalSection(void *criticalSection);
extern "C" __declspec(dllimport) void __stdcall LeaveCriticalSection(void *criticalSection);

extern char DAT_016b9544[];  // "cUIHitDataManager::Dictionary over" (dictionary full)

namespace cUIHitDataManager_p1 {

// FUN_00dd5650 is a variadic debug print (empty in the release build).
typedef void (*DebugPrintFn)(const char *format, ...);

// Record passed by value to cUIHitData::HIT (10 dwords).
struct HitRecord {
    int id;                               // +0x0  hit counter value
    int hitParam;                         // +0x4
    cUIHitDataManager::HitShape shape;    // +0x8
};

// FUN_00dd3500(size, heap): heap allocation (the generated prototype returns void).
inline void *allocate(unsigned int size, int heap)
{
    return ((void *(*)(unsigned int, int))FUN_00dd3500)(size, heap);
}
// 00CFD440 UICollision::cUIHitData::cUIHitData (ECX = the new object).
inline void *constructHitData(void *memory)
{
    return ((void *(__thiscall *)(void *))0x00CFD440)(memory);
}
// 00CFD4B0 cUIHitData::HIT (ECX = the hit data, record passed by value).
inline int hit(void *hitData, HitRecord record)
{
    return ((int (__thiscall *)(void *, HitRecord))0x00CFD4B0)(hitData, record);
}

}  // namespace cUIHitDataManager_p1

// 00CFD830  FUN_00cfd830  size=73  [callgraph]
// Index of the entry with the keys (key0, key1), or -1.
int FUN_00cfd830(int self, int key0, int key1)
{
    cUIHitDataManager *manager = (cUIHitDataManager *)self;
    cUIHitDataManager::Entry *entry = manager->entries();
    cUIHitDataManager::Entry *end = entry + manager->entryCount();
    int index = 0;
    while (true) {
        if (entry == end) {
            return -1;
        }
        if (entry->key0 == key0 && entry->key1 == key1) {
            break;
        }
        entry++;
        index++;
    }
    return index;
}

// 00CFD880  cUIHitDataManager::Dictionary  size=338  [class]
// Finds (or creates) the hit data of (key0, key1) and registers a hit on it.
int cUIHitDataManager::Dictionary(int key0, int key1, int hitParam, HitShape shape, int enable)
{
    using namespace cUIHitDataManager_p1;

    if (initialized() == 0 || enable == 0) {
        return 0;
    }
    if (lockEnabled() == 0) {
        return 0;
    }
    void *section = lock();
    if (lockEnabled() != 0) {
        EnterCriticalSection(section);
    }
    int result;
    void *hitData;
    int index = FUN_00cfd830((int)this, key0, key1);
    if (index < 0) {
        result = 0;
        if (entryCount() >= entryCapacity()) {
            ((DebugPrintFn)FUN_00dd5650)(DAT_016b9544);
            goto unlock;
        }
        Entry newEntry;
        newEntry.key0 = key0;
        newEntry.key1 = key1;
        void *memory = allocate(0x48, heap());
        if (memory == 0 || (newEntry.hitData = constructHitData(memory)) == 0) {
            goto unlock;
        }
        result = FUN_00cd0060((int)newEntry.hitData, heap(), 0x20);
        if (result != 1) {
            FUN_00ceaa60((undefined4 *)&newEntry);
            goto unlock;
        }
        int inserted;  // returned iterator (unused)
        FUN_00cf5a90((int *)entryVector(), &inserted, (undefined4 *)&newEntry);
        index = entryCount() - 1;
    }
    hitData = entries()[index].hitData;
    result = FUN_00cfd730((int)hitData, hitParam);
    if (result == 0) {
        hitCounter()++;
        HitRecord record;
        record.id = hitCounter();
        record.hitParam = hitParam;
        FID_conflict__memcpy(&record.shape, &shape, 0x20);  // 00FDBD90 memcpy
        result = hit(hitData, record);
    }
unlock:
    if (((int *)section)[6] != 0) {  // section + 0x18 == lockEnabled()
        LeaveCriticalSection(section);
    }
    return result;
}

// 00CFD9E0  FUN_00cfd9e0  size=151  [callgraph]
// Forwards (arg, data) to FUN_00cfd670 on the hit data of (key0, key1); 0 when not found.
undefined4 FUN_00cfd9e0(int self, int key0, int key1, int arg, void *data)
{
    cUIHitDataManager *manager = (cUIHitDataManager *)self;
    if (manager->initialized() == 0) {
        return 0;
    }
    if (data == 0) {
        return 0;
    }
    undefined4 result = 0;
    if (manager->lockEnabled() != 0) {
        if (manager->lockEnabled() != 0) {
            EnterCriticalSection(manager->lock());
        }
        int index = FUN_00cfd830(self, key0, key1);
        if (index >= 0) {
            result = FUN_00cfd670((int)manager->entries()[index].hitData, arg, data);
        }
        if (manager->lockEnabled() != 0) {
            LeaveCriticalSection(manager->lock());
        }
    }
    return result;
}

// 00CFDA80  FUN_00cfda80  size=151  [callgraph]
// Removes the entry of (key0, key1); true when it existed.
bool FUN_00cfda80(int self, undefined4 key0, undefined4 key1)
{
    cUIHitDataManager *manager = (cUIHitDataManager *)self;
    if (manager->initialized() != 0) {
        bool found = false;
        if (manager->lockEnabled() != 0) {
            if (manager->lockEnabled() != 0) {
                EnterCriticalSection(manager->lock());
            }
            int index = FUN_00cfd830(self, key0, key1);
            found = index >= 0;
            if (found) {
                cUIHitDataManager::Entry entry = manager->entries()[index];
                FUN_00ceaa60((undefined4 *)&entry);
                FUN_00cc5990((int)manager->entryVector(), index);
            }
            if (manager->lockEnabled() != 0) {
                LeaveCriticalSection(manager->lock());
            }
        }
        return found;
    }
    return false;
}

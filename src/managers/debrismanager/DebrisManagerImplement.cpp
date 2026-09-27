// src/managers/debrismanager/DebrisManagerImplement.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "DebrisManagerImplement.h"

// kernel32 (the lock at +0x20 is a CRITICAL_SECTION)
extern "C" __declspec(dllimport) void __stdcall EnterCriticalSection(void *criticalSection);
extern "C" __declspec(dllimport) void __stdcall LeaveCriticalSection(void *criticalSection);

extern undefined4 *DAT_01bea18c;  // the DebrisManager instance

namespace DebrisManagerImplement_p1 {

typedef DebrisManagerImplement::EntityList EntityList;
typedef DebrisManagerImplement::SortEntry  SortEntry;

const unsigned int kVftable = 0x016A71A8;  // DebrisManagerImplement::vftable

// Virtual function at byte offset `offset` of the vftable of `obj`.
template <class Sig> inline Sig vfunc(void *obj, int offset) { return *(Sig *)(*(char **)obj + offset); }

// Local entity handle with a float (8 bytes, same layout as SortEntry).
struct HandleWithValue {
    undefined4 handle;
    float      value;
};

// 00C1C630 (not a named function): qsort comparator of two SortEntry.
void *const kCompareSortEntries = (void *)0x00C1C630;

// FUN_00dd3500(size, heap): heap allocation (the generated prototype returns void).
inline void *allocate(unsigned int size, undefined4 heap)
{
    return ((void *(*)(unsigned int, undefined4))FUN_00dd3500)(size, heap);
}
// 00C5F220 (named lib::AllocatedArray<Entity*>::AllocatedArray<Entity*>), ECX = the new manager.
inline void initEntityList(void *manager)
{
    ((void (__thiscall *)(void *))0x00C5F220)(manager);
}

}  // namespace DebrisManagerImplement_p1

// 00C1C600  DebrisManagerImplement::vf04  size=18  [class]
// Appends `entity` to the list (passes the address of the argument).
void DebrisManagerImplement::vf04(undefined4 entity)
{
    using namespace DebrisManagerImplement_p1;
    EntityList *list = entities();
    vfunc<void (__thiscall *)(void *, undefined4 *)>(list, 0x8)(list, &entity);
}

// 00C2DC20  DebrisManagerImplement::vf14  size=57  [class]
// For the first entity of the list: its object's vf80(), or FUN_00a805f0 when it has none.
void DebrisManagerImplement::vf14()
{
    using namespace DebrisManagerImplement_p1;
    EntityList *list = entities();
    if (list != 0 && list->count != 0) {
        int first = list->data[0];
        if (first != 0) {
            void *object = (void *)FUN_00a7c8a0(first);
            if (object == 0) {
                FUN_00a805f0(first);  // tail call
                return;
            }
            vfunc<void (__thiscall *)(void *)>(object, 0x80)(object);  // tail call
            return;
        }
    }
}

// 00C2DC60  DebrisManagerImplement::vf20  size=4  [class]
undefined4 DebrisManagerImplement::vf20()
{
    return (undefined4)sortedCount();
}

// 00C448C0  DebrisManagerImplement::vf18  size=43  [class]
// FUN_00a805f0 on the first entity, then FUN_0040c150(list, &data[0]).
void DebrisManagerImplement::vf18()
{
    using namespace DebrisManagerImplement_p1;
    EntityList *list = entities();
    if (list != 0 && list->count != 0) {
        int *first = list->data;
        if (*first != 0) {
            FUN_00a805f0(*first);
            FUN_0040c150((int)entities(), (undefined4 *)first);
        }
    }
}

// 00C448F0  DebrisManagerImplement::vf1C  size=69  [class]
// FUN_00a805f0 on every entity, then empties the list.
void DebrisManagerImplement::vf1C()
{
    using namespace DebrisManagerImplement_p1;
    EntityList *list = entities();
    if (list != 0) {
        int *it = list->data;
        if (it != it + list->count) {
            do {
                FUN_00a805f0(*it);
                it++;
            } while (it != entities()->data + entities()->count);
        }
        if (entities()->data != 0) {
            entities()->count = 0;
        }
    }
}

// 00C50F40  DebrisManagerImplement::vf08  size=104  [class]
// Removes `entity` from the list (erase, preserving order).
void DebrisManagerImplement::vf08(int entity)
{
    using namespace DebrisManagerImplement_p1;
    EntityList *list = entities();
    int *it = list->data;
    int *end = it + list->count;
    for (; it != end && *it != entity; it++) {
    }
    int data = (int)list->data;
    if (it != (int *)(data + list->count * 4)) {
        unsigned int count = list->count;
        end = (int *)(data + count * 4);
        if (it != end && data != 0 && count != 0 &&
            (unsigned int)(((int)it - data) >> 2) < count) {
            for (; it != end - 1; it++) {
                *it = it[1];
            }
            list->count = list->count - 1;
        }
    }
}

// 00C50FB0  DebrisManagerImplement::vf24  size=241  [class]
// Rebuilds the {handle, value} array from the entities (value = +0x524 of the entity object,
// entities with a negative value are skipped) and sorts it with the comparator at 0x00C1C630.
void DebrisManagerImplement::vf24()
{
    using namespace DebrisManagerImplement_p1;

    if (entities() != 0) {
        FUN_00c3f310((int)sortedArray());
        int *it = entities()->data;
        if (it != it + entities()->count) {
            do {
                HandleWithValue local;
                FUN_00a7c930(&local.handle);
                FUN_00a7c950(&local.handle);
                local.value = 0.0f;
                bool add = true;
                if (*it != 0) {
                    int object = (int)FUN_00a7c800(*it);
                    if (object != 0) {
                        local.value = *(float *)(object + 0x524);
                    }
                    // x87: fldz / fcomp value / test ah,0x41 -> skipped only when value < 0
                    add = !(local.value < 0.0f);
                }
                if (add) {
                    FUN_00a7c960(&local.handle, (undefined4 *)FUN_00a7c7f0(*it));
                    if (sortedCount() < sortedCapacity()) {
                        SortEntry *slot = sortedData() + sortedCount();
                        if (slot != 0) {
                            FUN_00a7c940(&slot->handle, &local.handle);
                            slot->value = local.value;
                        }
                        sortedCount()++;
                    }
                }
                FUN_00a7c950(&local.handle);
                local.value = 0.0f;
                it++;
            } while (it != entities()->data + entities()->count);
        }
        _qsort(sortedData(), sortedCount(), 8, kCompareSortEntries);
    }
}

// 00C510B0  DebrisManagerImplement::vf28  size=119  [class]
// Takes the first sorted entry: its entity object's FUN_005d9560 (when it has one), then erases it.
void DebrisManagerImplement::vf28()
{
    using namespace DebrisManagerImplement_p1;

    if (entities() != 0) {
        if (lockEnabled() != 0) {
            EnterCriticalSection(lock());
        }
        if (sortedCount() != 0) {
            int first = (int)sortedData();
            int entity = (int)FUN_00a81330((uint *)sortedData());
            if (entity != 0 && (entity = (int)FUN_00a7c8a0(entity)) != 0 &&
                (entity = (int)FUN_00606e40((int *)entity)) != 0) {
                FUN_005d9560(entity);
            }
            int erased;  // returned iterator (unused)
            FUN_00c4ba60((int)sortedArray(), &erased, &first);
        }
        if (lockEnabled() != 0) {
            LeaveCriticalSection(lock());
        }
    }
}

// 00C62AD0  DebrisManagerImplement::vf0C  size=20  [class]
// Free room in the entity list.
int DebrisManagerImplement::vf0C()
{
    int capacity = entities()->capacity;
    return capacity - (int)vf10();  // virtual call (slot 0x10)
}

// 00C62AF0  DebrisManagerImplement::vf10  size=7  [class]
undefined4 DebrisManagerImplement::vf10()
{
    return entities()->count;
}

// 00C62B90  DebrisManagerImplement::vf00  size=30  [class]
// Scalar deleting destructor.
undefined4 *DebrisManagerImplement::vf00(byte flags)
{
    destroyAsImplement();
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 00C64820  DebrisManagerImplement::DebrisManagerImplement  size=96  [class]
// Allocates and initialises the instance (DAT_01bea18c); true on success.
bool DebrisManagerImplement::create(undefined4 heap)
{
    using namespace DebrisManagerImplement_p1;

    DebrisManagerImplement *manager = (DebrisManagerImplement *)allocate(0x40, heap);
    if (manager != 0) {
        *(unsigned int *)manager = kVftable;  // vftable = DebrisManagerImplement::vftable
        manager->heap() = heap;
        *(int *)manager->sortedArray() = 0;
        manager->sortedData() = 0;
        manager->sortedCapacity() = 0;
        manager->sortedCount() = 0;
        manager->sortedOwnsData() = 0;
        manager->lockEnabled() = 0;
        initEntityList(manager);
        DAT_01bea18c = (undefined4 *)manager;
        return manager != 0;
    }
    DAT_01bea18c = 0;
    return false;
}

// 00C64880  DebrisManagerImplement::DebrisManagerImplement  size=5  [class]
bool DebrisManagerImplement::createThunk(undefined4 heap)
{
    return create(heap);  // jmp 00C64820
}

// src/managers/battleparametermanager/BattleParameterManagerImplement.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "BattleParameterManagerImplement.h"

// ---------------------------------------------------------------------------------------------
// Imports
// ---------------------------------------------------------------------------------------------
extern "C" __declspec(dllimport) void __stdcall EnterCriticalSection(void *criticalSection);
extern "C" __declspec(dllimport) void __stdcall LeaveCriticalSection(void *criticalSection);

namespace BattleParameterManagerImplement_p1 {

typedef BattleParameterManagerImplement::Entry      Entry;
typedef BattleParameterManagerImplement::EntryArray EntryArray;

// virtual call through the vftable slot at byte offset `slot`
template <class R, class... A> inline R vcall(const void *obj, unsigned int slot, A... args)
{
    typedef R (__thiscall *Fn)(const void *, A...);
    return (*(Fn *)(*(char *const *)obj + slot))(obj, args...);
}

// Frees one entry and the parameter object it owns.
inline void deleteEntry(Entry *entry)
{
    if (entry->parameter != 0) {
        vcall<void>(entry->parameter, 0x98, 1);
        entry->parameter = 0;
    }
    FUN_00dd4920((int)entry);
}

}  // namespace BattleParameterManagerImplement_p1

// 00D731A0  BattleParameterManagerImplement::vf08  size=98  [class]
// Drops one reference of the entry `id`; an entry whose count falls below 1 is marked released.
void BattleParameterManagerImplement::vf08(int id)
{
    using namespace BattleParameterManagerImplement_p1;
    if (lockInitialized() != 0) {
        EnterCriticalSection(lock());
    }
    EntryArray *list = entries();
    Entry **it = list->data;
    if (it != it + list->count) {
        Entry **end = it + list->count;
        do {
            Entry *entry = *it;
            if (entry->id == id) {
                entry->refCount = entry->refCount - 1;
                if (entry->refCount < 1) {
                    entry->released = 1;
                }
                break;
            }
            it = it + 1;
        } while (it != end);
    }
    if (lockInitialized() != 0) {
        LeaveCriticalSection(lock());
    }
}

// 00D73210  FUN_00d73210  size=118  [callgraph]
// BattleParameterManagerImplement teardown: destroys the lock, frees every entry, then the entry array.
void __fastcall FUN_00d73210(int self)
{
    using namespace BattleParameterManagerImplement_p1;
    BattleParameterManagerImplement *manager = (BattleParameterManagerImplement *)self;
    FUN_00dd7270((undefined4)manager->lock());
    Entry **it = manager->entries()->data;
    if (it != it + manager->entries()->count) {
        do {
            Entry *entry = *it;
            if (entry != 0) {
                deleteEntry(entry);
            }
            it = it + 1;
        } while (it != manager->entries()->data + manager->entries()->count);
    }
    if (manager->entries() != 0) {
        vcall<void>(manager->entries(), 0x0, 1);  // scalar deleting destructor
        manager->entries() = 0;
    }
}

// 00D73C20  BattleParameterManagerImplement::vf00  size=208  [class]
// Frees the released entries and removes them from the table.
void BattleParameterManagerImplement::purgeReleased()
{
    using namespace BattleParameterManagerImplement_p1;
    if (lockInitialized() != 0) {
        EnterCriticalSection(lock());
    }
    Entry **it = entries()->data;
    if (it != it + entries()->count) {
        Entry **next;
        do {
            Entry *entry = *it;
            if (entry->released == 0) {
                next = it + 1;
            }
            else {
                if (entry != 0) {
                    deleteEntry(entry);
                }
                EntryArray *list = entries();
                unsigned int count = list->count;
                Entry **data = list->data;
                next = data + count;
                if (it != next && data != 0 && count != 0 && (unsigned int)(it - data) < count) {
                    // erase: shift the following entries down by one
                    for (Entry **p = it; p != next - 1; p = p + 1) {
                        *p = p[1];
                    }
                    list->count = list->count - 1;
                    next = it;
                }
            }
            it = next;
        } while (next != entries()->data + entries()->count);
    }
    if (lockInitialized() != 0) {
        LeaveCriticalSection(lock());
    }
}

// 00D73D00  BattleParameterManagerImplement::thunk_vf00  size=5  [class]
void BattleParameterManagerImplement::vf00()
{
    purgeReleased();  // jmp 00D73C20
}

// 00D76190  BattleParameterManagerImplement::vf0C  size=50  [class]
// Scalar deleting destructor.
undefined4 *BattleParameterManagerImplement::vf0C(byte flags)
{
    // vftable = BattleParameterManagerImplement::vftable (0x016C0EEC)
    FUN_00d73210((int)this);
    FUN_00dd7270((undefined4)lock());
    // vftable = BattleParameterManager::vftable (0x016C0C24)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

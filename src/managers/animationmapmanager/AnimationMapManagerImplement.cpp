// src/managers/animationmapmanager/AnimationMapManagerImplement.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "AnimationMapManagerImplement.h"

// ---------------------------------------------------------------------------------------------
// Imports
// ---------------------------------------------------------------------------------------------
extern "C" __declspec(dllimport) void __stdcall EnterCriticalSection(void *criticalSection);
extern "C" __declspec(dllimport) void __stdcall LeaveCriticalSection(void *criticalSection);

namespace AnimationMapManagerImplement_p1 {

typedef AnimationMapManagerImplement::Entry      Entry;
typedef AnimationMapManagerImplement::EntryArray EntryArray;
typedef AnimationMapManagerImplement::Resource   Resource;

// virtual call through the vftable slot at byte offset `slot`
template <class R, class... A> inline R vcall(const void *obj, unsigned int slot, A... args)
{
    typedef R (__thiscall *Fn)(const void *, A...);
    return (*(Fn *)(*(char *const *)obj + slot))(obj, args...);
}

// Frees one entry and the resource it owns.
inline void deleteEntry(Entry *entry)
{
    Resource *resource = entry->resource;
    if (resource != 0) {
        if (resource->object != 0) {
            vcall<void>(resource->object, 0x0, 1);  // scalar deleting destructor
            resource->object = 0;
        }
        FUN_00dd4920((int)resource);
        entry->resource = 0;
    }
    FUN_00dd4920((int)entry);
}

}  // namespace AnimationMapManagerImplement_p1

// 008D8110  AnimationMapManagerImplement::vf08  size=98  [class]
// Drops one reference of the entry `id`; an entry whose count falls below 1 is marked released.
void AnimationMapManagerImplement::vf08(int id)
{
    using namespace AnimationMapManagerImplement_p1;
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

// 008D8180  FUN_008d8180  size=136  [callgraph]
// AnimationMapManagerImplement teardown: destroys the lock, frees every entry, then the entry array.
void __fastcall FUN_008d8180(int self)
{
    using namespace AnimationMapManagerImplement_p1;
    AnimationMapManagerImplement *manager = (AnimationMapManagerImplement *)self;
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

// 008D8DE0  AnimationMapManagerImplement::vf00  size=227  [class]
// Frees the released entries and removes them from the table.
void AnimationMapManagerImplement::purgeReleased()
{
    using namespace AnimationMapManagerImplement_p1;
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

// 008D8ED0  AnimationMapManagerImplement::thunk_vf00  size=5  [class]
void AnimationMapManagerImplement::vf00()
{
    purgeReleased();  // jmp 008D8DE0
}

// 008D9E20  AnimationMapManagerImplement::vf0C  size=50  [class]
// Scalar deleting destructor.
undefined4 *AnimationMapManagerImplement::vf0C(byte flags)
{
    // vftable = AnimationMapManagerImplement::vftable (0x0164A368)
    FUN_008d8180((int)this);
    FUN_00dd7270((undefined4)lock());
    // vftable = AnimationMapManager::vftable (0x0164A254)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

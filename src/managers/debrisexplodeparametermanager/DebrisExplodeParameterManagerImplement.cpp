// src/managers/debrisexplodeparametermanager/DebrisExplodeParameterManagerImplement.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "DebrisExplodeParameterManagerImplement.h"

// kernel32 (the lock at +0x8 is a CRITICAL_SECTION)
extern "C" __declspec(dllimport) void __stdcall EnterCriticalSection(void *criticalSection);
extern "C" __declspec(dllimport) void __stdcall LeaveCriticalSection(void *criticalSection);

// Names of the objects whose explode parameters vf0C preloads (22 entries, ends at 0x01886610).
extern char *PTR_s_Em0030_018865b8[];

namespace DebrisExplodeParameterManagerImplement_p1 {

typedef DebrisExplodeParameterManagerImplement::ParamEntry ParamEntry;
typedef DebrisExplodeParameterManagerImplement::ParamList  ParamList;

const unsigned int kVftable     = 0x0164F728;  // DebrisExplodeParameterManagerImplement::vftable
const unsigned int kBaseVftable = 0x0164F424;  // DebrisExplodeParameterManager::vftable

// Virtual function at byte offset `offset` of the vftable of `obj`.
template <class Sig> inline Sig vfunc(void *obj, int offset) { return *(Sig *)(*(char **)obj + offset); }

// parameter->vf2C(1): deletes a DebrisExplodeParameterImplement.
inline void deleteParameter(void *parameter)
{
    vfunc<void (__thiscall *)(void *, int)>(parameter, 0x2C)(parameter, 1);
}
// list->vf00(1): deletes the parameter list.
inline void deleteList(ParamList *list)
{
    vfunc<void (__thiscall *)(void *, int)>(list, 0x0)(list, 1);
}
// list->vf08(&entry): appends an entry.
inline void appendEntry(ParamList *list, ParamEntry **entry)
{
    vfunc<void (__thiscall *)(void *, ParamEntry **)>(list, 0x8)(list, entry);
}
// FUN_00dd3500(size, heap): heap allocation (the generated prototype returns void).
inline void *allocate(unsigned int size, int heap)
{
    return ((void *(*)(unsigned int, int))FUN_00dd3500)(size, heap);
}
// 009441F0 DebrisExplodeParameterImplement::DebrisExplodeParameterImplement(heap, data) (ECX = the new object).
inline void *constructParameter(void *memory, int heap, undefined4 data)
{
    return ((void *(__thiscall *)(void *, int, undefined4))0x009441F0)(memory, heap, data);
}

}  // namespace DebrisExplodeParameterManagerImplement_p1

// 0093FDC0  DebrisExplodeParameterManagerImplement::vf08  size=98  [class]
// Drops one reference of parameter set `id`; flags it released when no reference is left.
void DebrisExplodeParameterManagerImplement::vf08(int id)
{
    using namespace DebrisExplodeParameterManagerImplement_p1;

    if (lockEnabled() != 0) {
        EnterCriticalSection(lock());
    }
    ParamList *list = parameters();
    ParamEntry **it = list->data;
    if (it != it + list->count) {
        ParamEntry **end = it + list->count;
        do {
            ParamEntry *entry = *it;
            if (entry->id == id) {
                entry->refCount = entry->refCount - 1;
                if (entry->refCount < 1) {
                    entry->released = 1;
                }
                break;
            }
            it++;
        } while (it != end);
    }
    if (lockEnabled() != 0) {
        LeaveCriticalSection(lock());
    }
}

// 0093FE30  FUN_0093fe30  size=102  [callgraph]
// Deletes every cached parameter set and the parameter list.
void __fastcall FUN_0093fe30(int self)
{
    using namespace DebrisExplodeParameterManagerImplement_p1;
    DebrisExplodeParameterManagerImplement *manager = (DebrisExplodeParameterManagerImplement *)self;

    FUN_00dd7270((undefined4)manager->lock());
    ParamEntry **it = manager->parameters()->data;
    if (it != it + manager->parameters()->count) {
        do {
            ParamEntry *entry = *it;
            if (entry->parameter != 0) {
                deleteParameter(entry->parameter);
                entry->parameter = 0;
            }
            it++;
        } while (it != manager->parameters()->data + manager->parameters()->count);
    }
    if (manager->parameters() != 0) {
        deleteList(manager->parameters());
        manager->parameters() = 0;
    }
}

// 00942810  DebrisExplodeParameterManagerImplement::vf00  size=188  [class]
// Deletes the parameter sets flagged released and removes their entries from the list.
void DebrisExplodeParameterManagerImplement::removeReleasedParameters()
{
    using namespace DebrisExplodeParameterManagerImplement_p1;

    if (lockEnabled() != 0) {
        EnterCriticalSection(lock());
    }
    ParamEntry **it = parameters()->data;
    if (it != it + parameters()->count) {
        ParamEntry **next;
        do {
            ParamEntry *entry = *it;
            if (entry->released == 0) {
                next = it + 1;
            } else {
                if (entry->parameter != 0) {
                    deleteParameter(entry->parameter);
                    entry->parameter = 0;
                }
                ParamList *list = parameters();
                unsigned int count = list->count;
                int data = (int)list->data;
                next = (ParamEntry **)(data + count * 4);
                if (it != next && data != 0 && count != 0 &&
                    (unsigned int)(((int)it - data) >> 2) < count) {
                    // erase(it): shift the following entries down by one
                    for (ParamEntry **p = it; p != next - 1; p++) {
                        *p = p[1];
                    }
                    list->count = list->count - 1;
                    next = it;
                }
            }
            it = next;
        } while (next != parameters()->data + parameters()->count);
    }
    if (lockEnabled() != 0) {
        LeaveCriticalSection(lock());
    }
}

// 009428D0  DebrisExplodeParameterManagerImplement::thunk_vf00  size=5  [class]
void DebrisExplodeParameterManagerImplement::vf00()
{
    removeReleasedParameters();  // jmp 00942810
}

// 00943DC0  DebrisExplodeParameterManagerImplement::vf0C  size=55  [class]
// Requests the parameters of every object named in the table at 0x018865B8 ("Em0030" .. "bm00e7").
void DebrisExplodeParameterManagerImplement::vf0C(undefined4 param)
{
    char **name = PTR_s_Em0030_018865b8;
    do {
        int objectId = FUN_009fde60(*name);
        vf04(objectId, param);  // virtual call (slot 0x4)
        name++;
    } while ((int)name < 0x01886610);
}

// 00943E00  DebrisExplodeParameterManagerImplement::vf10  size=59  [class]
// Parameter object of `id`, or 0 (no lock taken).
undefined4 DebrisExplodeParameterManagerImplement::vf10(int id)
{
    using namespace DebrisExplodeParameterManagerImplement_p1;

    ParamList *list = parameters();
    ParamEntry **it = list->data;
    if (it != it + list->count) {
        ParamEntry **end = it + list->count;
        do {
            if ((*it)->id == id) {
                return (undefined4)(*it)->parameter;
            }
            it++;
        } while (it != end);
    }
    return 0;
}

// 00943E40  DebrisExplodeParameterManagerImplement::vf14  size=61  [class]
// 1 when parameter set `id` is cached (no lock taken).
undefined4 DebrisExplodeParameterManagerImplement::vf14(int id)
{
    using namespace DebrisExplodeParameterManagerImplement_p1;

    ParamList *list = parameters();
    ParamEntry **it = list->data;
    if (it != it + list->count) {
        ParamEntry **end = it + list->count;
        do {
            if ((*it)->id == id) {
                return 1;
            }
            it++;
        } while (it != end);
    }
    return 0;
}

// 00943E80  DebrisExplodeParameterManagerImplement::vf18  size=55  [class]
// List index of parameter set `id`, or -1 (no lock taken).
int DebrisExplodeParameterManagerImplement::vf18(int id)
{
    using namespace DebrisExplodeParameterManagerImplement_p1;

    ParamList *list = parameters();
    ParamEntry **it = list->data;
    int index = 0;
    if (it != it + list->count) {
        ParamEntry **end = it + list->count;
        do {
            if ((*it)->id == id) {
                return index;
            }
            it++;
            index++;
        } while (it != end);
    }
    return -1;
}

// 00943EE0  DebrisExplodeParameterManagerImplement::vf1C  size=50  [class]
// Scalar deleting destructor (destructor body inlined).
undefined4 *DebrisExplodeParameterManagerImplement::vf1C(byte flags)
{
    using namespace DebrisExplodeParameterManagerImplement_p1;

    *(unsigned int *)this = kVftable;       // vftable = DebrisExplodeParameterManagerImplement::vftable
    FUN_0093fe30((int)this);
    FUN_00dd7270((undefined4)lock());
    *(unsigned int *)this = kBaseVftable;   // vftable = DebrisExplodeParameterManager::vftable
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 00944640  DebrisExplodeParameterManagerImplement::vf04  size=233  [class]
// Returns parameter set `id` (adding a reference), loading it from "debrisExplodeParameter.bxm" when not cached.
int DebrisExplodeParameterManagerImplement::vf04(int id, undefined4 param)
{
    using namespace DebrisExplodeParameterManagerImplement_p1;

    int parameter;
    if (lockEnabled() != 0) {
        EnterCriticalSection(lock());
    }
    ParamList *list = parameters();
    ParamEntry **it = list->data;
    if (it != it + list->count) {
        ParamEntry **end = it + list->count;
        do {
            ParamEntry *entry = *it;
            if (entry->id == id) {
                entry->refCount = entry->refCount + 1;
                parameter = (int)entry->parameter;
                goto unlock;
            }
            it++;
        } while (it != end);
    }
    {
        undefined4 size = 0;
        undefined4 data = FUN_00a54ae0(&size, param, (undefined4)"debrisExplodeParameter.bxm");
        int parameterHeap = heap();
        void *memory = allocate(0xC, parameterHeap);
        if (memory == 0) {
            parameter = 0;
        } else {
            parameter = (int)constructParameter(memory, parameterHeap, data);
        }
        ParamEntry *entry = (ParamEntry *)allocate(0x10, heap());
        if (entry == 0) {
            entry = 0;
        } else {
            entry->refCount = 0;
            entry->released = 0;
            entry->id = id;
            entry->parameter = (void *)parameter;
        }
        appendEntry(parameters(), &entry);
        entry->refCount = entry->refCount + 1;
    }
unlock:
    if (lockEnabled() != 0) {
        LeaveCriticalSection(lock());
    }
    return parameter;
}

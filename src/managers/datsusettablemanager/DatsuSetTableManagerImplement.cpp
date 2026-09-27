// src/managers/datsusettablemanager/DatsuSetTableManagerImplement.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "DatsuSetTableManagerImplement.h"

// kernel32 (the lock at +0x8 is a CRITICAL_SECTION)
extern "C" __declspec(dllimport) void __stdcall EnterCriticalSection(void *criticalSection);
extern "C" __declspec(dllimport) void __stdcall LeaveCriticalSection(void *criticalSection);

namespace DatsuSetTableManagerImplement_p1 {

typedef DatsuSetTableManagerImplement::TableEntry TableEntry;
typedef DatsuSetTableManagerImplement::TableList  TableList;

const unsigned int kVftable     = 0x0164F2EC;  // DatsuSetTableManagerImplement::vftable
const unsigned int kBaseVftable = 0x0164F234;  // DatsuSetTableManager::vftable

// Virtual function at byte offset `offset` of the vftable of `obj`.
template <class Sig> inline Sig vfunc(void *obj, int offset) { return *(Sig *)(*(char **)obj + offset); }

// table->vf20(1): deletes a DatsuSetTableImplement.
inline void deleteTable(void *table)
{
    vfunc<void (__thiscall *)(void *, int)>(table, 0x20)(table, 1);
}
// list->vf00(1): deletes the table list.
inline void deleteList(TableList *list)
{
    vfunc<void (__thiscall *)(void *, int)>(list, 0x0)(list, 1);
}
// list->vf08(&entry): appends an entry.
inline void appendEntry(TableList *list, TableEntry **entry)
{
    vfunc<void (__thiscall *)(void *, TableEntry **)>(list, 0x8)(list, entry);
}
// FUN_00dd3500(size, heap): heap allocation (the generated prototype returns void).
inline void *allocate(unsigned int size, int heap)
{
    return ((void *(*)(unsigned int, int))FUN_00dd3500)(size, heap);
}
// 0093D3E0 DatsuSetTableImplement::DatsuSetTableImplement(heap, data) (ECX = the new object).
inline void *constructTable(void *memory, int heap, undefined4 data)
{
    return ((void *(__thiscall *)(void *, int, undefined4))0x0093D3E0)(memory, heap, data);
}

}  // namespace DatsuSetTableManagerImplement_p1

// 0093C3A0  DatsuSetTableManagerImplement::vf08  size=98  [class]
// Drops one reference of table `id`; flags it released when no reference is left.
void DatsuSetTableManagerImplement::vf08(int id)
{
    using namespace DatsuSetTableManagerImplement_p1;

    if (lockEnabled() != 0) {
        EnterCriticalSection(lock());
    }
    TableList *list = tables();
    TableEntry **it = list->data;
    if (it != it + list->count) {
        TableEntry **end = it + list->count;
        do {
            TableEntry *entry = *it;
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

// 0093C410  FUN_0093c410  size=102  [callgraph]
// Deletes every cached table and the table list.
void __fastcall FUN_0093c410(int self)
{
    using namespace DatsuSetTableManagerImplement_p1;
    DatsuSetTableManagerImplement *manager = (DatsuSetTableManagerImplement *)self;

    FUN_00dd7270((undefined4)manager->lock());
    TableEntry **it = manager->tables()->data;
    if (it != it + manager->tables()->count) {
        do {
            TableEntry *entry = *it;
            if (entry->table != 0) {
                deleteTable(entry->table);
                entry->table = 0;
            }
            it++;
        } while (it != manager->tables()->data + manager->tables()->count);
    }
    if (manager->tables() != 0) {
        deleteList(manager->tables());
        manager->tables() = 0;
    }
}

// 0093C7E0  DatsuSetTableManagerImplement::vf00  size=188  [class]
// Deletes the tables flagged released and removes their entries from the list.
void DatsuSetTableManagerImplement::removeReleasedTables()
{
    using namespace DatsuSetTableManagerImplement_p1;

    if (lockEnabled() != 0) {
        EnterCriticalSection(lock());
    }
    TableEntry **it = tables()->data;
    if (it != it + tables()->count) {
        TableEntry **next;
        do {
            TableEntry *entry = *it;
            if (entry->released == 0) {
                next = it + 1;
            } else {
                if (entry->table != 0) {
                    deleteTable(entry->table);
                    entry->table = 0;
                }
                TableList *list = tables();
                unsigned int count = list->count;
                int data = (int)list->data;
                next = (TableEntry **)(data + count * 4);
                if (it != next && data != 0 && count != 0 &&
                    (unsigned int)(((int)it - data) >> 2) < count) {
                    // erase(it): shift the following entries down by one
                    for (TableEntry **p = it; p != next - 1; p++) {
                        *p = p[1];
                    }
                    list->count = list->count - 1;
                    next = it;
                }
            }
            it = next;
        } while (next != tables()->data + tables()->count);
    }
    if (lockEnabled() != 0) {
        LeaveCriticalSection(lock());
    }
}

// 0093C8A0  DatsuSetTableManagerImplement::thunk_vf00  size=5  [class]
void DatsuSetTableManagerImplement::vf00()
{
    removeReleasedTables();  // jmp 0093C7E0
}

// 0093D040  DatsuSetTableManagerImplement::vf0C  size=36  [class]
// Requests the tables 0..6.
void DatsuSetTableManagerImplement::vf0C(undefined4 param)
{
    int id = 0;
    do {
        vf04(id, param);  // virtual call (slot 0x4)
        id++;
    } while (id < 7);
}

// 0093D070  DatsuSetTableManagerImplement::vf10  size=59  [class]
// Table object of `id`, or 0 (no lock taken).
undefined4 DatsuSetTableManagerImplement::vf10(int id)
{
    using namespace DatsuSetTableManagerImplement_p1;

    TableList *list = tables();
    TableEntry **it = list->data;
    if (it != it + list->count) {
        TableEntry **end = it + list->count;
        do {
            if ((*it)->id == id) {
                return (undefined4)(*it)->table;
            }
            it++;
        } while (it != end);
    }
    return 0;
}

// 0093D0D0  DatsuSetTableManagerImplement::vf14  size=50  [class]
// Scalar deleting destructor (destructor body inlined).
undefined4 *DatsuSetTableManagerImplement::vf14(byte flags)
{
    using namespace DatsuSetTableManagerImplement_p1;

    *(unsigned int *)this = kVftable;       // vftable = DatsuSetTableManagerImplement::vftable
    FUN_0093c410((int)this);
    FUN_00dd7270((undefined4)lock());
    *(unsigned int *)this = kBaseVftable;   // vftable = DatsuSetTableManager::vftable
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 0093D760  DatsuSetTableManagerImplement::vf04  size=233  [class]
// Returns table `id` (adding a reference), loading it from "datsuSetTable.bxm" when not cached.
int DatsuSetTableManagerImplement::vf04(int id, undefined4 param)
{
    using namespace DatsuSetTableManagerImplement_p1;

    int table;
    if (lockEnabled() != 0) {
        EnterCriticalSection(lock());
    }
    TableList *list = tables();
    TableEntry **it = list->data;
    if (it != it + list->count) {
        TableEntry **end = it + list->count;
        do {
            TableEntry *entry = *it;
            if (entry->id == id) {
                entry->refCount = entry->refCount + 1;
                table = (int)entry->table;
                goto unlock;
            }
            it++;
        } while (it != end);
    }
    {
        undefined4 size = 0;
        undefined4 data = FUN_00a54ae0(&size, param, (undefined4)"datsuSetTable.bxm");
        int tableHeap = heap();
        void *memory = allocate(0xC, tableHeap);
        if (memory == 0) {
            table = 0;
        } else {
            table = (int)constructTable(memory, tableHeap, data);
        }
        TableEntry *entry = (TableEntry *)allocate(0x10, heap());
        if (entry == 0) {
            entry = 0;
        } else {
            entry->refCount = 0;
            entry->released = 0;
            entry->id = id;
            entry->table = (void *)table;
        }
        appendEntry(tables(), &entry);
        entry->refCount = entry->refCount + 1;
    }
unlock:
    if (lockEnabled() != 0) {
        LeaveCriticalSection(lock());
    }
    return table;
}

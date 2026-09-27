// src/managers/triggermanager/actions/TrgActSeObj.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern char DAT_016b16dc[];  // debug message: action has no record
extern char DAT_016abfb8[];  // debug message format: object %s not found
extern char DAT_016b1568[];  // argument of that message

// Trigger::Act::SE_OBJ is the vf18 ("execute") body of the matching Trigger::cAct* action:
// ECX = the action object; action[1] = its record (record[1] = action type, parameters from +0x08).
namespace Trigger { namespace Act {
bool __fastcall SE_OBJ(int *action);
} }

namespace TrgActSeObj_p1 {

typedef void (*DebugPrintFn)(const void *format, ...);
const DebugPrintFn debugPrint = (DebugPrintFn)FUN_00dd5650;  // debug printf (empty in release)

// object-handle list filled by the lookup functions (inline storage for 16 handles)
struct HandleList {
    unsigned int unknown00;
    int *data;          // points at the inline storage unless grown
    int capacity;
    int count;
    int heapAllocated;  // nonzero: data must be freed with FUN_00dd48d0
};

// FUN_00c77fc0: collect the objects whose name matches.
inline int findObjectsByName(char *name, HandleList *list)
{
    return ((int (*)(char *, HandleList *))FUN_00c77fc0)(name, list);
}

inline void releaseList(HandleList &list)
{
    if (list.data != 0) {
        list.count = 0;
        if (list.heapAllocated != 0) {
            FUN_00dd48d0((int)list.data, 0);
        }
    }
}

} // namespace TrgActSeObj_p1

// 00C97E90  Trigger::Act::SE_OBJ  size=355  [class]
bool __fastcall Trigger::Act::SE_OBJ(int *action)
{
    using namespace TrgActSeObj_p1;
    HandleList list;
    int storage[16];

    int *record = (int *)action[1];
    if (record == 0) {
        debugPrint(DAT_016b16dc);
        return false;
    }
    list.data = storage;
    list.unknown00 = 0;
    list.capacity = 0x10;
    list.count = 0;
    list.heapAllocated = 0;
    int number = record[10];  // +0x28: object number, -1 = by name
    char *objectName = (char *)record + 0x2c;
    if (number == -1) {
        findObjectsByName(objectName, &list);
    }
    else if (objectName[0] == '\0') {  // inlined strlen == 0
        ((void (*)(HandleList *, int))FUN_00a814d0)(&list, number);
    }
    else {
        ((void (*)(char *, int, HandleList *))FUN_00c959c0)((char *)record + 0x2c, number, &list);
    }
    if (list.count == 0) {
        releaseList(list);
        return false;
    }
    bool ok = true;
    for (int i = 0; i < list.count; i++) {
        int object;
        if (list.data[i] == 0 || (object = ((int (*)())FUN_00a7c800)() /* ? ECX = handle */, object == 0)) {
            if (record[10] == -1) {
                debugPrint(DAT_016abfb8, (char *)record + 0x2c, DAT_016b1568);
            }
            ok = false;
        }
        else {
            int played = ((int (*)(char *, int, int, int))FUN_00e5e0c0)((char *)record + 8, object, record[0x13] /* +0x4C */, 0);
            ok = (ok & (played != 0)) != 0;
        }
    }
    releaseList(list);
    return ok;
}

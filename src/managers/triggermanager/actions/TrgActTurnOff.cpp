// src/managers/triggermanager/actions/TrgActTurnOff.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern char DAT_016b0f70[];  // debug message: action has no record
extern char DAT_016b0efc[];  // debug message format: null handle for %s
extern char DAT_016b0ebc[];  // debug message format: no object for %s
extern char DAT_016b0f3c[];  // debug message format: %s not found

// Trigger::Act::TURN_OFF is the vf18 ("execute") body of the matching Trigger::cAct* action:
// ECX = the action object; action[1] = its record (record[1] = action type, parameters from +0x08).
namespace Trigger { namespace Act {
int __fastcall TURN_OFF(int *action);
} }

namespace TrgActTurnOff_p1 {

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

// FUN_00a7c8a0: handle -> object (its ECX argument was not recovered by the decompiler).
inline int *handleToObject()
{
    return ((int *(*)())FUN_00a7c8a0)();
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

} // namespace TrgActTurnOff_p1

// 00C967C0  Trigger::Act::TURN_OFF  size=266  [class]
int __fastcall Trigger::Act::TURN_OFF(int *action)
{
    using namespace TrgActTurnOff_p1;
    HandleList list;
    int storage[16];

    if (action[1] == 0) {
        debugPrint(DAT_016b0f70);
        return 0;
    }
    char *name = (char *)action[1] + 8;
    list.data = storage;
    list.unknown00 = 0;
    list.capacity = 0x10;
    list.count = 0;
    list.heapAllocated = 0;
    if (findObjectsByName(name, &list) != 0) {
        int result = 1;
        for (int i = 0; i < list.count; i++) {
            if (list.data[i] == 0) {
                debugPrint(DAT_016b0efc, name);
                result = 0;
            }
            else {
                int *object = handleToObject();  // ? ECX = handle
                if (object == 0) {
                    debugPrint(DAT_016b0ebc, name);
                    result = 0;
                }
                else {
                    (*(void (__thiscall **)(int *))((char *)object[0] + 0x20))(object);  // turn off
                }
            }
        }
        releaseList(list);
        return result;
    }
    debugPrint(DAT_016b0f3c, name);
    releaseList(list);
    return 0;
}

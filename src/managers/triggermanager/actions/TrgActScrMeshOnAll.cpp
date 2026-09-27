// src/managers/triggermanager/actions/TrgActScrMeshOnAll.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern char DAT_016abd08[];  // debug message: action has no record

// Trigger::Act::SCR_MESH_ON_ALL is the vf18 ("execute") body of the matching Trigger::cAct* action:
// ECX = the action object; action[1] = its record (record[1] = action type, parameters from +0x08).
namespace Trigger { namespace Act {
int __fastcall SCR_MESH_ON_ALL(int *action);
} }

namespace TrgActScrMeshOnAll_p1 {

typedef void (*DebugPrintFn)(const void *format, ...);
const DebugPrintFn debugPrint = (DebugPrintFn)FUN_00dd5650;  // debug printf (empty in release)

// FUN_00c14bb0: object/entity manager singleton.
inline int *objectManager()
{
    return (int *)FUN_00c14bb0();
}

// FUN_00a7c8a0: handle -> object (its ECX argument was not recovered by the decompiler).
inline int *handleToObject()
{
    return ((int *(*)())FUN_00a7c8a0)();
}

} // namespace TrgActScrMeshOnAll_p1

// 00C812A0  Trigger::Act::SCR_MESH_ON_ALL  size=103  [class]
int __fastcall Trigger::Act::SCR_MESH_ON_ALL(int *action)
{
    using namespace TrgActScrMeshOnAll_p1;
    int *record = (int *)action[1];
    if (record != 0) {
        int index = 0;
        int *manager = objectManager();
        int entity = (*(int (__thiscall **)(int *, int, int))((char *)manager[0] + 0x18))(manager, 0, record[2]);
        while (entity != 0) {
            int *object = handleToObject();  // ? ECX = entity
            (*(void (__thiscall **)(int *))((char *)object[0] + 0x1C))(object);  // show
            index = index + 1;
            manager = objectManager();
            entity = (*(int (__thiscall **)(int *, int, int))((char *)manager[0] + 0x18))(manager, index, record[2]);
        }
        return 1;
    }
    debugPrint(DAT_016abd08);
    return 0;
}

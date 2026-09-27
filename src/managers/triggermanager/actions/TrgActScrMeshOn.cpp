// src/managers/triggermanager/actions/TrgActScrMeshOn.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern char DAT_016b149c[];  // debug message: action has no record
extern char DAT_016b1464[];  // debug message: no handle list
extern int DAT_01dbd1cc;     // shared object-handle list (HandleList *)

// Trigger::Act::SCR_MESH_ON is the vf18 ("execute") body of the matching Trigger::cAct* action:
// ECX = the action object; action[1] = its record (record[1] = action type, parameters from +0x08).
namespace Trigger { namespace Act {
int __fastcall SCR_MESH_ON(int *action);
} }

namespace TrgActScrMeshOn_p1 {

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

// DAT_01dbd1cc: shared object-handle list (re-read from the global at every use).
inline HandleList *sharedList()
{
    return (HandleList *)DAT_01dbd1cc;
}

} // namespace TrgActScrMeshOn_p1

// 00C97220  Trigger::Act::SCR_MESH_ON  size=215  [class]
int __fastcall Trigger::Act::SCR_MESH_ON(int *action)
{
    using namespace TrgActScrMeshOn_p1;
    int *record = (int *)action[1];
    if (record == 0) {
        debugPrint(DAT_016b149c);
        return 0;
    }
    if (sharedList() == 0) {
        debugPrint(DAT_016b1464);
        return 0;
    }
    sharedList()->count = 0;
    HandleList *list = sharedList();
    int id = record[2];
    char *name = (char *)record + 0xc;
    if (name != 0) {
        int *manager = objectManager();
        (*(void (__thiscall **)(int *, HandleList *, char *, int))((char *)manager[0] + 0x14))(manager, list, name, id);
        if (list->count != 0) {
            int *handle = sharedList()->data;
            int result = 0;
            if (handle != handle + sharedList()->count) {
                do {
                    char *object = (char *)handleToObject();  // ? ECX = *handle
                    int meshIndex = record[7];  // +0x1C
                    char *mesh;
                    if (-1 < meshIndex && meshIndex < *(short *)(object + 0x324) /* object+0x324: mesh count */ &&
                        (mesh = (char *)(meshIndex * 0x70 + *(int *)(object + 0x320)) /* object+0x320: meshes, 0x70 bytes each */, mesh != 0)) {
                        *(unsigned int *)(mesh + 0x38) = *(unsigned int *)(mesh + 0x38) | 1;  // mesh+0x38: flags, bit 0 = visible
                        result = 1;
                    }
                    handle = handle + 1;
                } while (handle != sharedList()->data + sharedList()->count);
            }
            return result;
        }
    }
    return 0;
}

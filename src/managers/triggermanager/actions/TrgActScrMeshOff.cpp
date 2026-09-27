// src/managers/triggermanager/actions/TrgActScrMeshOff.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern char DAT_016b1504[];  // debug message: action has no parameter block
extern char DAT_016b14cc[];  // debug message: no handle list
extern int DAT_01dbd1cc;     // shared object-handle list (HandleList *)

namespace Trigger { namespace Act {
int __fastcall SCR_MESH_OFF(int *action);
} }

namespace TrgActScrMeshOff_p1 {

// FUN_00dd5650 is a variadic debug print (empty in the release build).
template <class... A> inline void debugPrint(const char *format, A... args)
{
    typedef void (__cdecl *Fn)(const char *, ...);
    ((Fn)FUN_00dd5650)(format, args...);
}

// object-handle list filled by the lookup functions
struct HandleList {
    unsigned int unknown00;  // +0x00
    int *data;               // +0x04
    int capacity;            // +0x08
    int count;               // +0x0C
};

// object manager (FUN_00c14bb0) vf14: fill list with the objects named name / with id
typedef void (__thiscall *CollectObjectsFn)(int *manager, HandleList *list, char *name, int id);

// DAT_01dbd1cc: shared object-handle list (re-read from the global at every use).
inline HandleList *sharedList()
{
    return (HandleList *)DAT_01dbd1cc;
}

}  // namespace TrgActScrMeshOff_p1

// 00C97300  Trigger::Act::SCR_MESH_OFF  size=218  [class]
// Hides mesh params+0x1C of every object named params+0xC / with id params+0x8.
int __fastcall Trigger::Act::SCR_MESH_OFF(int *action)
{
    using namespace TrgActScrMeshOff_p1;
    int *params = (int *)action[1];  // +0x4 parameter block
    if (params == 0) {
        debugPrint(DAT_016b1504);
        return 0;
    }
    if (sharedList() != 0) {
        sharedList()->count = 0;
        HandleList *list = sharedList();
        int id = params[2];  // +0x8
        char *name = (char *)(params + 3);  // +0xC
        if (name != 0) {
            int *manager = (int *)FUN_00c14bb0();
            (*(CollectObjectsFn *)(*manager + 0x14))(manager, list, name, id);
            if (list->count != 0) {
                int *handle = sharedList()->data;
                int result = 0;
                if (handle != handle + sharedList()->count) {
                    do {
                        char *object = (char *)FUN_00a7c8a0(*handle);  // machine code: ECX = *handle
                        int meshIndex = params[7];  // +0x1C
                        char *mesh;
                        if (-1 < meshIndex && meshIndex < *(short *)(object + 0x324) /* object+0x324: mesh count */ &&
                            (mesh = (char *)(meshIndex * 0x70 + *(int *)(object + 0x320)) /* object+0x320: meshes, 0x70 bytes each */, mesh != 0)) {
                            *(unsigned int *)(mesh + 0x38) = *(unsigned int *)(mesh + 0x38) & 0xfffffffe;  // mesh+0x38: flags, bit 0 = visible
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
    debugPrint(DAT_016b14cc);
    return 0;
}

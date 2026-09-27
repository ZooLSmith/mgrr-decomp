// src/managers/triggermanager/actions/TrgActScrColiOn.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern char DAT_016ab7b8[];  // debug message: action has no parameter block
extern char DAT_016ab778[];  // debug message: collision %s not switched
extern char DAT_016ab740[];  // debug message: no objects for id %d

namespace Trigger { namespace Act {
int __fastcall SCR_COLI_ON(int *action);
} }

namespace TrgActScrColiOn_p1 {

// FUN_00dd5650 is a variadic debug print (empty in the release build).
template <class... A> inline void debugPrint(const char *format, A... args)
{
    typedef void (__cdecl *Fn)(const char *, ...);
    ((Fn)FUN_00dd5650)(format, args...);
}

// object manager (FUN_00c14bb0) vf28: objects with id -> array of object pointers
typedef int **(__thiscall *FindObjectsFn)(int *manager, int *outValue, int id);
// object vf08: nonzero when the object is usable
typedef int (__thiscall *IsValidFn)(int *object);
// object vfE0: switch the named script collision (on, name, 0, 0)
typedef int (__thiscall *SetCollisionFn)(int *object, int on, char *name, int unknown3, int unknown4);

}  // namespace TrgActScrColiOn_p1

// 00C80870  Trigger::Act::SCR_COLI_ON  size=195  [class]
// Turns on the script collision named at params+0xC on every object with id params+0x8.
int __fastcall Trigger::Act::SCR_COLI_ON(int *action)
{
    using namespace TrgActScrColiOn_p1;
    int outValue;  // vf28 writes the object count here (raw showed unaff_ESI; machine code compares [esp+0x10])
    int *params = (int *)action[1];  // +0x4 parameter block
    int i = 0;
    if (params == 0) {
        outValue = (int)action;
        debugPrint(DAT_016ab7b8);
        return 0;
    }
    int result = 0;
    outValue = 0;
    int *manager = (int *)FUN_00c14bb0();
    int **objects = (*(FindObjectsFn *)(*manager + 0x28))(manager, &outValue, params[2]);
    char *name = (char *)(params + 3);  // +0xC
    if (objects != 0) {
        if (0 < outValue) {
            do {
                int *object = objects[i];
                if (object != 0 && (*(IsValidFn *)(*object + 8))(object) != 0 &&
                    (*(SetCollisionFn *)(*objects[i] + 0xe0))(objects[i], 1, name, 0, 0) != 0) {
                    result = 1;
                }
                i = i + 1;
            } while (i < outValue);
            if (result != 0) {
                return result;
            }
        }
        debugPrint(DAT_016ab778, name);
        return 0;
    }
    debugPrint(DAT_016ab740, params[2]);
    return 0;
}

// src/managers/triggermanager/actions/TrgActPos.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern char DAT_016b12bc[];  // debug message: action has no parameter block
extern char DAT_016b1228[];  // debug message: object %s not found
extern char DAT_016b11ec[];  // debug message: object %s has no behavior
extern char DAT_016b125c[];  // debug message: object %s could not be looked up
extern char DAT_016b1290[];  // debug message: position %d not registered

namespace Trigger { namespace Act {
int __fastcall POS(int *action);
} }

namespace TrgActPos_p1 {

// FUN_00dd5650 is a variadic debug print (empty in the release build).
template <class... A> inline void debugPrint(const char *format, A... args)
{
    typedef void (__cdecl *Fn)(const char *, ...);
    ((Fn)FUN_00dd5650)(format, args...);
}

// Callees whose generated prototype does not match the raw call site are invoked through
// call<Sig>(fn)(args...) with exactly the raw arguments. "ECX: ?" marks an unrecovered register.
template <class Sig, class Fn> inline Sig call(Fn *fn) { return (Sig)(void *)fn; }

// __thiscall call of the virtual function at byte offset `slot` of obj's vftable
template <class R, class... A> inline R vcall(const void *obj, unsigned int slot, A... args)
{
    typedef R (__thiscall *Fn)(const void *, A...);
    return (*(Fn *)(*(char *const *)obj + slot))(obj, args...);
}

// Growable entity list filled by the object lookups (header of a lib array with an inline
// buffer of 16 entries on the caller's stack).
struct EntityList {
    undefined4 unk00;      // +0x00
    int       *items;      // +0x04
    int        capacity;   // +0x08
    int        count;      // +0x0C
    int        heapOwned;  // +0x10 nonzero: items was allocated and must be freed
};

// Inlined list destructor.
inline void releaseList(EntityList &list)
{
    if (list.items != 0) {
        list.count = 0;
        if (list.heapOwned != 0) {
            FUN_00dd48d0((int)list.items, 0);
        }
    }
}

// Adjacent stack words local_94..local_84: the saved parameter block pointer followed by a
// 4-float vector (first the registered position, then the rotation). The vf88 call receives
// the address of the whole block, as in the raw decompilation.
struct PosFrame {
    int  *params;  // local_94
    float vec[4];  // local_90..local_84
};

const float DEG_TO_RAD = 0.017453292f;

}  // namespace TrgActPos_p1

// 00C96DB0  Trigger::Act::POS  size=464  [class]
// Moves every object named at params+0x10 to registered position params+0x8 with yaw
// params+0xC (degrees): behavior vf6C(position), vf88(rotation block).
int __fastcall Trigger::Act::POS(int *action)
{
    using namespace TrgActPos_p1;
    PosFrame frame;
    float position[4];
    int inlineItems[16];
    EntityList list;
    int *params = (int *)action[1];  // +0x4 parameter block
    frame.params = params;
    if (params == 0) {
        debugPrint(DAT_016b12bc);
        return 0;
    }
    int ok = call<int (*)(int, float *)>(FUN_00c78580)(params[2], frame.vec); /* ECX: ? */
    if (ok != 0) {
        position[0] = frame.vec[0];
        list.items = inlineItems;
        position[1] = frame.vec[1];
        char *objectName = (char *)(params + 4);  // +0x10
        position[2] = frame.vec[2];
        list.unk00 = 0;
        position[3] = 1.0f;
        list.capacity = 0x10;
        list.count = 0;
        list.heapOwned = 0;
        int found = call<int (*)(char *, EntityList *)>(FUN_00c77fc0)(objectName, &list);
        if (found != 0) {
            int result = 1;
            int i = 0;
            if (0 < list.count) {
                do {
                    if (list.items[i] == 0) {
                        debugPrint(DAT_016b1228, objectName);
                        result = 0;
                    }
                    else {
                        int *behavior = (int *)FUN_00a7c8a0(list.items[i]);  // machine code: ECX = list entry
                        if (behavior == 0) {
                            debugPrint(DAT_016b11ec, objectName);
                            result = 0;
                        }
                        else {
                            frame.vec[0] = 0.0f;
                            frame.vec[1] = *(float *)((char *)frame.params + 0xc) * DEG_TO_RAD;
                            frame.vec[2] = 0.0f;
                            frame.vec[3] = 1.0f;
                            vcall<void>(behavior, 0x6c, position);
                            vcall<void>(behavior, 0x88, &frame);
                        }
                    }
                    i = i + 1;
                } while (i < list.count);
            }
            releaseList(list);
            return result;
        }
        debugPrint(DAT_016b125c, objectName);
        releaseList(list);
        return 0;
    }
    debugPrint(DAT_016b1290, params[2]);
    return 0;
}

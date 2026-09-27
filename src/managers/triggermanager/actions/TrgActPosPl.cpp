// src/managers/triggermanager/actions/TrgActPosPl.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern char DAT_016aa628[];  // debug message: action has no parameter block
extern char DAT_016aa654[];  // debug message: position %d not registered

namespace Trigger { namespace Act {
int __fastcall POS_PL(int *action);
int __fastcall POS_PL_2(int *action);
} }

namespace TrgActPosPl_p1 {

// FUN_00dd5650 is a variadic debug print (empty in the release build).
template <class... A> inline void debugPrint(const char *format, A... args)
{
    typedef void (__cdecl *Fn)(const char *, ...);
    ((Fn)FUN_00dd5650)(format, args...);
}

// Callees whose generated prototype does not match the raw call site are invoked through
// call<Sig>(fn)(args...) with exactly the raw arguments. "ECX: ?" marks an unrecovered register.
template <class Sig, class Fn> inline Sig call(Fn *fn) { return (Sig)(void *)fn; }

const float DEG_TO_RAD = 0.017453292f;

}  // namespace TrgActPosPl_p1

// 00C7E920  Trigger::Act::POS_PL  size=103  [class]
// Moves the player to params+0x8..+0x10 (x, y, z) with yaw params+0x14 (degrees).
int __fastcall Trigger::Act::POS_PL(int *action)
{
    using namespace TrgActPosPl_p1;
    float position[4];
    int *params = (int *)action[1];  // +0x4 parameter block
    if (params == 0) {
        debugPrint(DAT_016aa628);
        return 0;
    }
    float *coords = (float *)params;
    position[0] = coords[2];  // +0x8
    position[1] = coords[3];  // +0xC
    position[2] = coords[4];  // +0x10
    position[3] = 1.0f;
    call<void (*)(float *, float)>(FUN_00a4ae90)(position, coords[5] * DEG_TO_RAD); /* ECX: ? */
    return 1;
}

// 00C7E990  Trigger::Act::POS_PL_2  size=146  [class]
// Moves the player to registered position params+0x8; the entry's 4th component is the yaw.
int __fastcall Trigger::Act::POS_PL_2(int *action)
{
    using namespace TrgActPosPl_p1;
    float rotation[4];
    float position[4];
    int *params = (int *)action[1];  // +0x4 parameter block
    if (params == 0) {
        debugPrint(DAT_016aa628);
        return 0;
    }
    int ok = call<int (*)(int, float *)>(FUN_00c78580)(params[2], position); /* ECX: ? */
    if (ok == 0) {
        debugPrint(DAT_016aa654, params[2]);
        return 0;
    }
    rotation[0] = 0.0f;
    rotation[1] = position[3];
    rotation[2] = 0.0f;
    position[3] = 1.0f;
    call<void (*)(float *, float *, int)>(FUN_00a4d790)(position, rotation, 0); /* ECX: ? */
    return 1;
}

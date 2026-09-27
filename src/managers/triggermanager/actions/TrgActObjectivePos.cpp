// src/managers/triggermanager/actions/TrgActObjectivePos.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern char DAT_016ab480[];  // debug message: action has no parameter block
extern char DAT_016ab438[];  // debug message: objective %d could not be set
extern char DAT_016ab3f0[];  // debug message: position %d could not be set

namespace Trigger { namespace Act {
int __fastcall OBJECTIVE_POS(int *action);
} }

namespace TrgActObjectivePos_p1 {

// FUN_00dd5650 is a variadic debug print (empty in the release build).
template <class... A> inline void debugPrint(const char *format, A... args)
{
    typedef void (__cdecl *Fn)(const char *, ...);
    ((Fn)FUN_00dd5650)(format, args...);
}

// Callees whose generated prototype does not match the raw call site are invoked through
// call<Sig>(fn)(args...) with exactly the raw arguments. "ECX: ?" marks an unrecovered register.
template <class Sig, class Fn> inline Sig call(Fn *fn) { return (Sig)(void *)fn; }

}  // namespace TrgActObjectivePos_p1

// 00C80390  Trigger::Act::OBJECTIVE_POS  size=126  [class]
// Parameter block: +0x8 objective id, +0xC value for FUN_00c1c0d0, +0x10 value for FUN_00c1bff0.
int __fastcall Trigger::Act::OBJECTIVE_POS(int *action)
{
    using namespace TrgActObjectivePos_p1;
    int *params = (int *)action[1];  // +0x4 parameter block
    if (params == 0) {
        debugPrint(DAT_016ab480);
        return 0;
    }
    int ok = call<int (*)(int, int)>(FUN_00c1c0d0)(params[2], params[3]); /* ECX: ? */
    if (ok == 0) {
        debugPrint(DAT_016ab438, params[2]);
        return 0;
    }
    ok = call<int (*)(int, int)>(FUN_00c1bff0)(params[2], params[4]); /* ECX: ? */
    if (ok == 0) {
        debugPrint(DAT_016ab3f0, params[4]);
        return 0;
    }
    return 1;
}

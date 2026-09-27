// src/managers/triggermanager/actions/TrgActPhase.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern char DAT_016aa73c[];  // debug message: action has no parameter block

namespace Trigger { namespace Act {
int __fastcall PHASE(int *action);
int __fastcall PHASE_2(int *action);
} }

namespace TrgActPhase_p1 {

// FUN_00dd5650 is a variadic debug print (empty in the release build).
template <class... A> inline void debugPrint(const char *format, A... args)
{
    typedef void (__cdecl *Fn)(const char *, ...);
    ((Fn)FUN_00dd5650)(format, args...);
}

// Callees whose generated prototype does not match the raw call site are invoked through
// call<Sig>(fn)(args...) with exactly the raw arguments. "ECX: ?" marks an unrecovered register.
template <class Sig, class Fn> inline Sig call(Fn *fn) { return (Sig)(void *)fn; }

}  // namespace TrgActPhase_p1

// 00C7EB80  Trigger::Act::PHASE  size=44  [class]
// Phase jump to params+0x8 with no extra name (FUN_00d5e850(phase, null)).
int __fastcall Trigger::Act::PHASE(int *action)
{
    using namespace TrgActPhase_p1;
    if (action[1] == 0) {  // +0x4 parameter block
        debugPrint(DAT_016aa73c);
        return 0;
    }
    int result = call<int (*)(int, int)>(FUN_00d5e850)(((int *)action[1])[2], 0); /* ECX: ? */
    return result;
}

// 00C7F0B0  Trigger::Act::PHASE_2  size=46  [class]
// Phase jump to params+0x8 with the name string at params+0xC.
int __fastcall Trigger::Act::PHASE_2(int *action)
{
    using namespace TrgActPhase_p1;
    int *params = (int *)action[1];  // +0x4 parameter block
    if (params == 0) {
        debugPrint(DAT_016aa73c);
        return 0;
    }
    int result = call<int (*)(int, char *)>(FUN_00d5e850)(params[2], (char *)(params + 3)); /* ECX: ? */
    return result;
}

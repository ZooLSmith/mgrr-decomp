// src/managers/triggermanager/actions/TrgActPathWayStart.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern char DAT_016aad84[];  // debug message: action has no parameter block

namespace Trigger { namespace Act {
int __fastcall PATH_WAY_START(int *action);
} }

namespace TrgActPathWayStart_p1 {

// FUN_00dd5650 is a variadic debug print (empty in the release build).
template <class... A> inline void debugPrint(const char *format, A... args)
{
    typedef void (__cdecl *Fn)(const char *, ...);
    ((Fn)FUN_00dd5650)(format, args...);
}

}  // namespace TrgActPathWayStart_p1

// 00C7F670  Trigger::Act::PATH_WAY_START  size=32  [class]
// No-op in this build apart from the parameter check.
int __fastcall Trigger::Act::PATH_WAY_START(int *action)
{
    using namespace TrgActPathWayStart_p1;
    if (action[1] == 0) {  // +0x4 parameter block
        debugPrint(DAT_016aad84);
        return 0;
    }
    return 1;
}

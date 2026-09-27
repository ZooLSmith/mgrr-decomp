// src/managers/triggermanager/actions/TrgActQteButtonDispOff.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern char DAT_016ab3b8[];  // debug message: action has no parameter block

namespace Trigger { namespace Act {
int __fastcall QTE_BUTTON_DISP_OFF(int *action);
} }

namespace TrgActQteButtonDispOff_p1 {

// FUN_00dd5650 is a variadic debug print (empty in the release build).
template <class... A> inline void debugPrint(const char *format, A... args)
{
    typedef void (__cdecl *Fn)(const char *, ...);
    ((Fn)FUN_00dd5650)(format, args...);
}

}  // namespace TrgActQteButtonDispOff_p1

// 00C80360  Trigger::Act::QTE_BUTTON_DISP_OFF  size=44  [class]
// Hides the QTE button display (FUN_00cbc9c0(1, 0)).
int __fastcall Trigger::Act::QTE_BUTTON_DISP_OFF(int *action)
{
    using namespace TrgActQteButtonDispOff_p1;
    if (action[1] == 0) {  // +0x4 parameter block
        debugPrint(DAT_016ab3b8);
        return 0;
    }
    FUN_00cbc9c0(1, 0);
    return 1;
}

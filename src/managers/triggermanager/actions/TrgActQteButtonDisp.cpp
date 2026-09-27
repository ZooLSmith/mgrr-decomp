// src/managers/triggermanager/actions/TrgActQteButtonDisp.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern char DAT_016ab154[];  // debug message: action has no parameter block

namespace Trigger { namespace Act {
int __fastcall QTE_BUTTON_DISP(int *action);
} }

namespace TrgActQteButtonDisp_p1 {

// FUN_00dd5650 is a variadic debug print (empty in the release build).
template <class... A> inline void debugPrint(const char *format, A... args)
{
    typedef void (__cdecl *Fn)(const char *, ...);
    ((Fn)FUN_00dd5650)(format, args...);
}

}  // namespace TrgActQteButtonDisp_p1

// 00C7FC60  Trigger::Act::QTE_BUTTON_DISP  size=48  [class]
// Shows QTE button params+0x8 (a short, sign-extended) via FUN_00cbc8f0(button, 0).
int __fastcall Trigger::Act::QTE_BUTTON_DISP(int *action)
{
    using namespace TrgActQteButtonDisp_p1;
    if (action[1] == 0) {  // +0x4 parameter block
        debugPrint(DAT_016ab154);
        return 0;
    }
    char *params = (char *)action[1];
    FUN_00cbc8f0((int)*(short *)(params + 8), 0);
    return 1;
}

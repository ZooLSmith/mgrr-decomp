// src/managers/triggermanager/actions/TrgActItemOnOff.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern char DAT_016abfe0[];  // debug message: action has no parameter block

namespace Trigger { namespace Act {
int __fastcall ITEM_ON_OFF(int *action);
} }

namespace TrgActItemOnOff_p1 {

// FUN_00dd5650 is a variadic debug print (empty in the release build).
template <class... A> inline void debugPrint(const char *format, A... args)
{
    typedef void (__cdecl *Fn)(const char *, ...);
    ((Fn)FUN_00dd5650)(format, args...);
}

}  // namespace TrgActItemOnOff_p1

// 00C81680  Trigger::Act::ITEM_ON_OFF  size=49  [class]
// FUN_00956870(params+0x8, params+0xC).
int __fastcall Trigger::Act::ITEM_ON_OFF(int *action)
{
    using namespace TrgActItemOnOff_p1;
    int *params = (int *)action[1];  // +0x4 parameter block
    if (params == 0) {
        debugPrint(DAT_016abfe0);
        return 0;
    }
    FUN_00956870(params[2], params[3]);
    return 1;
}

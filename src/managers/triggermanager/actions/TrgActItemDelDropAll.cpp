// src/managers/triggermanager/actions/TrgActItemDelDropAll.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern char DAT_016abeb8[];  // debug message: action has no parameter block

namespace Trigger { namespace Act {
int __fastcall ITEM_DEL_DROP_ALL(int *action);
} }

namespace TrgActItemDelDropAll_p1 {

// FUN_00dd5650 is a variadic debug print (empty in the release build).
template <class... A> inline void debugPrint(const char *format, A... args)
{
    typedef void (__cdecl *Fn)(const char *, ...);
    ((Fn)FUN_00dd5650)(format, args...);
}

}  // namespace TrgActItemDelDropAll_p1

// 00C814D0  Trigger::Act::ITEM_DEL_DROP_ALL  size=37  [class]
// Deletes every dropped item (FUN_00951930).
int __fastcall Trigger::Act::ITEM_DEL_DROP_ALL(int *action)
{
    using namespace TrgActItemDelDropAll_p1;
    if (action[1] == 0) {  // +0x4 parameter block
        debugPrint(DAT_016abeb8);
        return 0;
    }
    FUN_00951930();
    return 1;
}

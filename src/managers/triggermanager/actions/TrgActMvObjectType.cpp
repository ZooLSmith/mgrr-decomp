// src/managers/triggermanager/actions/TrgActMvObjectType.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern char DAT_016ac8d8[];         // debug message: action has no parameter block
extern unsigned int DAT_01bea070;   // flag word; bits 31..29 cleared here

namespace Trigger { namespace Act {
int __fastcall MV_OBJECT_TYPE(int *action);
} }

namespace TrgActMvObjectType_p1 {

// FUN_00dd5650 is a variadic debug print (empty in the release build).
template <class... A> inline void debugPrint(const char *format, A... args)
{
    typedef void (__cdecl *Fn)(const char *, ...);
    ((Fn)FUN_00dd5650)(format, args...);
}

}  // namespace TrgActMvObjectType_p1

// 00C87CE0  Trigger::Act::MV_OBJECT_TYPE  size=114  [class]
// Clears the DAT_01bea070 bit(s) selected by params+0x8 (0..3).
int __fastcall Trigger::Act::MV_OBJECT_TYPE(int *action)
{
    using namespace TrgActMvObjectType_p1;
    int result = 0;
    if (action[1] != 0) {  // +0x4 parameter block
        int *params = (int *)action[1];
        switch ((unsigned int)params[2]) {
        case 0:
            DAT_01bea070 = DAT_01bea070 & 0x7fffffff;
            return 1;
        case 1:
            DAT_01bea070 = DAT_01bea070 & 0xbfffffff;
            return 1;
        case 2:
            DAT_01bea070 = DAT_01bea070 & 0xdfffffff;
            return 1;
        case 3:
            DAT_01bea070 = DAT_01bea070 & 0x9fffffff;
            result = 1;
        }
        return result;
    }
    debugPrint(DAT_016ac8d8);
    return 0;
}

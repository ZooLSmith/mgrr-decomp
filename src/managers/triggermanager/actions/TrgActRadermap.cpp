// src/managers/triggermanager/actions/TrgActRadermap.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern char DAT_016aac88[];  // debug message: action has no parameter block

namespace Trigger { namespace Act {
int __fastcall RADERMAP(int *action);
} }

namespace TrgActRadermap_p1 {

// FUN_00dd5650 is a variadic debug print (empty in the release build).
template <class... A> inline void debugPrint(const char *format, A... args)
{
    typedef void (__cdecl *Fn)(const char *, ...);
    ((Fn)FUN_00dd5650)(format, args...);
}

}  // namespace TrgActRadermap_p1

// 00C7F550  Trigger::Act::RADERMAP  size=156  [class]
// Picks a radar-map id from a 2 x 5 table (row = params+0x8, column = params+0xC) and passes it
// to FUN_00d89e60.
int __fastcall Trigger::Act::RADERMAP(int *action)
{
    using namespace TrgActRadermap_p1;
    int *params = (int *)action[1];  // +0x4 parameter block
    int result = 0;
    unsigned int mapIds[10];
    mapIds[0] = 0x24;
    mapIds[1] = 0x22;
    mapIds[2] = 0x27;
    mapIds[3] = 0x29;
    mapIds[4] = 0x25;
    mapIds[5] = 0x23;
    mapIds[6] = 0x21;
    mapIds[7] = 0x28;
    mapIds[8] = 0x2a;
    mapIds[9] = 0x26;
    if (params == 0) {
        debugPrint(DAT_016aac88);
        return 0;
    }
    unsigned int row = (unsigned int)params[2];  // +0x8
    if ((row < 2) && ((unsigned int)params[3] < 5)) {  // +0xC column
        FUN_00d89e60(mapIds[(unsigned int)params[3] + row * 4 + row]);
        result = 1;
    }
    return result;
}

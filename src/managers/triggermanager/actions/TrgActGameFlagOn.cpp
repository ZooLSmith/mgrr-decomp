// src/managers/triggermanager/actions/TrgActGameFlagOn.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern char DAT_016ac90c[];          // debug message: action has no parameter block
extern char DAT_016ab358[];          // debug message: game flag not resolved
extern unsigned int DAT_01bea090[];  // game flag bit array (MSB-first within each word)
extern char DAT_018ab9ac[];          // game flag table, 8-byte entries; +0x0 = bit number

namespace Trigger { namespace Act {
int __fastcall GAME_FLAG_ON(int *action);
} }

namespace TrgActGameFlagOn_p1 {

// FUN_00dd5650 is a variadic debug print (empty in the release build).
template <class... A> inline void debugPrint(const char *format, A... args)
{
    typedef void (__cdecl *Fn)(const char *, ...);
    ((Fn)FUN_00dd5650)(format, args...);
}

}  // namespace TrgActGameFlagOn_p1

// 00C87D80  Trigger::Act::GAME_FLAG_ON  size=95  [class]
// Sets the game flag whose table index was resolved into action+0x8.
int __fastcall Trigger::Act::GAME_FLAG_ON(int *action)
{
    using namespace TrgActGameFlagOn_p1;
    if (action[1] == 0) {  // +0x4 parameter block
        debugPrint(DAT_016ac90c);
        return 0;
    }
    int flagIndex = action[2];  // +0x8
    if (-1 < flagIndex) {
        unsigned int bit = *(unsigned int *)(DAT_018ab9ac + flagIndex * 8);
        DAT_01bea090[bit >> 5] = DAT_01bea090[bit >> 5] | 0x80000000U >> (bit & 0x1f);
        return 1;
    }
    debugPrint(DAT_016ab358);
    return 0;
}

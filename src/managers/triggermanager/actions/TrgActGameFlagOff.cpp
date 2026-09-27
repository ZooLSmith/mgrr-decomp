// src/managers/triggermanager/actions/TrgActGameFlagOff.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern undefined DAT_016ac93c;  // error message format string
extern undefined DAT_016ac96c;  // error message format string
extern undefined DAT_018ab9ac;  // game-flag table, 8-byte entries; +0 = bit index into DAT_01bea090
extern unsigned int DAT_01bea090[];  // game flag bit words (indexed)

// the trigger action/condition handlers are free functions in these namespaces
namespace Trigger { namespace Act {
    int __fastcall GAME_FLAG_OFF(int action);
} }

namespace TrgActGameFlagOff_p1 {

// field at a byte offset of a record whose layout is not modelled
template <class T> inline T &at(int base, int offset) { return *(T *)(base + offset); }

// FUN_00dd5650: printf-style debug error report (functions.h declares it without parameters)
inline void reportError(const void *format) { ((void (*)(const void *, ...))FUN_00dd5650)(format); }
template <class A> inline void reportError(const void *format, A a)
{ ((void (*)(const void *, ...))FUN_00dd5650)(format, a); }
template <class A, class B> inline void reportError(const void *format, A a, B b)
{ ((void (*)(const void *, ...))FUN_00dd5650)(format, a, b); }
template <class A, class B, class C> inline void reportError(const void *format, A a, B b, C c)
{ ((void (*)(const void *, ...))FUN_00dd5650)(format, a, b, c); }

}  // namespace TrgActGameFlagOff_p1

// 00C87DF0  Trigger::Act::GAME_FLAG_OFF  size=97  [class]
int __fastcall Trigger::Act::GAME_FLAG_OFF(int action)
{
    using namespace TrgActGameFlagOff_p1;
    if (at<int>(action, 4) == 0) {
        reportError(&DAT_016ac96c);
        return 0;
    }
    if (-1 < at<int>(action, 8)) {
        unsigned int bit = *(unsigned int *)((char *)&DAT_018ab9ac + at<int>(action, 8) * 8);
        DAT_01bea090[bit >> 5] = DAT_01bea090[bit >> 5] & ~(0x80000000U >> ((unsigned char)bit & 0x1F));
        return 1;
    }
    reportError(&DAT_016ac93c);
    return 0;
}

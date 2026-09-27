// src/managers/triggermanager/conditions/TrgCondIsAnimPlay.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern undefined DAT_016aa018;  // debug message: no record

// the trigger condition handlers are free functions in this namespace; each one is a vftable
// slot body of the matching Trigger::cCond* class (ECX = the condition object)
namespace Trigger { namespace Cond {
    void IS_ANIM_PLAY(int condition, int record);
} }

namespace TrgCondIsAnimPlay_p1 {

// field at a byte offset of a condition object (layouts live in the cCond* classes)
template <class T> inline T &at(int base, int offset) { return *(T *)(base + offset); }

// FUN_00dd5650: printf-style debug error report (functions.h declares it without parameters)
inline void reportError(const void *format) { ((void (*)(const void *, ...))FUN_00dd5650)(format); }
template <class A> inline void reportError(const void *format, A a)
{ ((void (*)(const void *, ...))FUN_00dd5650)(format, a); }

}  // namespace TrgCondIsAnimPlay_p1

// 00C7D010  Trigger::Cond::IS_ANIM_PLAY  size=33  [class]
// __thiscall in the binary (ECX = the condition): vf1C, stores the record twice (+0x04, +0x10).
void Trigger::Cond::IS_ANIM_PLAY(int condition, int record)
{
    using namespace TrgCondIsAnimPlay_p1;
    at<int>(condition, 4) = record;
    if (record == 0) {
        reportError(&DAT_016aa018);
        return;
    }
    at<int>(condition, 0x10) = record;
}

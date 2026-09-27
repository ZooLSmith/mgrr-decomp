// src/managers/triggermanager/actions/TrgActCodecSeqEndAll.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern undefined DAT_016abcd4;  // error message format string

// the trigger action/condition handlers are free functions in these namespaces
namespace Trigger { namespace Act {
    int __fastcall CODEC_SEQ_END_ALL(int action);
} }

namespace TrgActCodecSeqEndAll_p1 {

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

}  // namespace TrgActCodecSeqEndAll_p1

// 00C81270  Trigger::Act::CODEC_SEQ_END_ALL  size=42  [class]
int __fastcall Trigger::Act::CODEC_SEQ_END_ALL(int action)
{
    using namespace TrgActCodecSeqEndAll_p1;
    if (at<int>(action, 4) == 0) {
        reportError(&DAT_016abcd4);
        return 0;
    }
    ((void (*)(void))FUN_00939bc0)();
    return 1;
}

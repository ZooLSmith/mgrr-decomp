// src/managers/triggermanager/actions/TrgActConversationEd.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern undefined DAT_016aad50;  // error message format string

// the trigger action/condition handlers are free functions in these namespaces
namespace Trigger { namespace Act {
    int __fastcall CONVERSATION_ED(int action);
} }

namespace TrgActConversationEd_p1 {

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

}  // namespace TrgActConversationEd_p1

// 00C7F650  Trigger::Act::CONVERSATION_ED  size=32  [class]
int __fastcall Trigger::Act::CONVERSATION_ED(int action)
{
    using namespace TrgActConversationEd_p1;
    if (at<int>(action, 4) == 0) {
        reportError(&DAT_016aad50);
        return 0;
    }
    return 1;
}

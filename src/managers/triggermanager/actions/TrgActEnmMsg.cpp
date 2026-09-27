// src/managers/triggermanager/actions/TrgActEnmMsg.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern undefined DAT_016ac6f4;  // error message format string

// the trigger action/condition handlers are free functions in these namespaces
namespace Trigger { namespace Act {
    int __fastcall ENM_MSG(int action);
    int __fastcall ENM_MSG_2(int action);
    int __fastcall ENM_MSG_3(int action);
} }

namespace TrgActEnmMsg_p1 {

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

// the two blocks handed to FUN_00c5e350, adjacent on the stack (header at -0x54, body at -0x30);
// words never written here are left uninitialised as in the original
struct EnemyMessage {
    undefined4 header[9];   // -0x54 .. -0x34
    undefined4 body[12];    // -0x30 .. -0x04
};

}  // namespace TrgActEnmMsg_p1

// 00C874C0  Trigger::Act::ENM_MSG  size=169  [class]
int __fastcall Trigger::Act::ENM_MSG(int action)
{
    using namespace TrgActEnmMsg_p1;
    EnemyMessage msg;
    int params = at<int>(action, 4);
    if (params == 0) {
        reportError(&DAT_016ac6f4);
        return 0;
    }
    msg.body[0] = at<undefined4>(action, 8);
    msg.body[8] = 0;
    msg.body[9] = 0;
    msg.body[10] = 0;
    msg.header[0] = 0;
    msg.header[1] = 0;
    msg.header[2] = 0xFFFFFFFF;
    msg.body[11] = 0xFFFFFFFF;
    msg.header[5] = 0xFFFFFFFE;
    msg.header[6] = 0;
    msg.body[1] = 0;
    msg.header[8] = 0x1010000;
    msg.header[3] = at<undefined4>(params, 0x28);
    msg.header[4] = at<undefined4>(params, 0x2C);
    msg.header[7] = at<undefined4>(params, 0x30);
    ((void (*)(int, undefined4 *, undefined4 *))FUN_00c5e350)(0, msg.header, msg.body);
    return 1;
}

// 00C87590  Trigger::Act::ENM_MSG_2  size=144  [class]
int __fastcall Trigger::Act::ENM_MSG_2(int action)
{
    using namespace TrgActEnmMsg_p1;
    EnemyMessage msg;
    if (at<int>(action, 4) == 0) {
        reportError(&DAT_016ac6f4);
        return 0;
    }
    msg.header[2] = 0xFFFFFFFF;
    msg.body[8] = 0;
    msg.header[3] = 0xFFFFFFFF;
    msg.body[9] = 0;
    msg.header[4] = 0xFFFFFFFF;
    msg.body[10] = 0;
    msg.header[7] = 0xFFFFFFFF;
    msg.header[0] = 0;
    msg.header[6] = at<undefined4>(action, 0xC);
    msg.header[1] = 0;
    msg.body[0] = at<undefined4>(action, 8);
    msg.body[11] = at<undefined4>(action, 0x10);
    msg.header[5] = 0xFFFFFFFE;
    msg.body[1] = 0;
    msg.header[8] = 0x1010000;
    ((void (*)(int, undefined4 *, undefined4 *))FUN_00c5e350)(0, msg.header, msg.body);
    return 1;
}

// 00C88350  Trigger::Act::ENM_MSG_3  size=189  [class]
int __fastcall Trigger::Act::ENM_MSG_3(int action)
{
    using namespace TrgActEnmMsg_p1;
    EnemyMessage msg;
    int params = at<int>(action, 4);
    if (params == 0) {
        reportError(&DAT_016ac6f4);
        return 0;
    }
    msg.body[8] = 0;
    msg.body[9] = 0;
    msg.body[10] = 0;
    msg.header[2] = 0xFFFFFFFF;
    msg.header[7] = 0xFFFFFFFF;
    msg.header[6] = 0;
    msg.body[1] = 0;
    msg.header[3] = at<undefined4>(params, 0x28);
    msg.header[4] = at<undefined4>(params, 0x2C);
    msg.header[5] = at<undefined4>(params, 0x30);
    msg.header[0] = 0;
    msg.body[0] = at<undefined4>(action, 8);
    msg.header[1] = 0;
    msg.body[11] = at<undefined4>(action, 0xC);
    msg.header[8] = 0x1010000;
    ((void (*)(int, undefined4 *, undefined4 *))FUN_00c5e350)(0, msg.header, msg.body);
    return 1;
}

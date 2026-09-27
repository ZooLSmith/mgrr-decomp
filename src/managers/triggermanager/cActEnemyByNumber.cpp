// src/managers/triggermanager/cActEnemyByNumber.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActEnemyByNumber.h"

extern undefined DAT_01dbe068;           // cActEnemyByNumber static descriptor returned by vf00
extern char DAT_016aa78c[];              // "Trigger::Act::ENM: <data is NULL>" (Shift-JIS)
extern undefined DAT_01c78cb0;           // enemy manager (ECX of the enemy lookups)

namespace cActEnemyByNumber_p1 {

// __thiscall call of a function whose functions.h prototype lacks the ECX argument or has the
// wrong convention; ECX (`self`) and the stack arguments are taken from the machine code.
template <class R, class F, class... A> inline R callThis(F fn, const void *self, A... args)
{
    typedef R (__thiscall *Fn)(const void *, A...);
    return ((Fn)fn)(self, args...);
}

// FUN_00dd5650: debug printf (functions.h declares it void(void); empty in release).
template <class... A> inline void debugPrint(const char *format, A... args)
{
    ((void (*)(const char *, ...))FUN_00dd5650)(format, args...);
}

} // namespace cActEnemyByNumber_p1

// 00C7EC40  Trigger::cActEnemyByNumber::vf18  size=42  [class]
int Trigger::cActEnemyByNumber::vf18()
{
    using namespace cActEnemyByNumber_p1;
    // (machine code: `ret 4` -- one stack argument; cAction.h declares vf18() without it. The
    // function overwrites that argument slot with the enemy number and tail-jumps to FUN_00c185c0.)
    if (record() == 0) {
        debugPrint(DAT_016aa78c);
        return 0;
    }
    // raw: FUN_00c185c0(); machine code: ECX = &DAT_01c78cb0, argument = *(record+0x08)
    return callThis<int>(FUN_00c185c0, &DAT_01c78cb0, *(int *)((char *)record() + 8));
}

// 00C7EC70  Trigger::cActEnemyByNumber::vf24  size=15  [class]
int Trigger::cActEnemyByNumber::vf24()
{
    if (record() == 0) {
        return -1;
    }
    return *(int *)((char *)record() + 8);  // enemy number
}

// 00C91970  Trigger::cActEnemyByNumber::vf00  size=6  [class]
void *Trigger::cActEnemyByNumber::vf00()
{
    return &DAT_01dbe068;
}

// 00C91980  Trigger::cActEnemyByNumber::vf04  size=31  [class]
Trigger::cActEnemyByNumber *Trigger::cActEnemyByNumber::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

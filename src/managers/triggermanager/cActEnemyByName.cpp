// src/managers/triggermanager/cActEnemyByName.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActEnemyByName.h"

extern undefined DAT_01dbe064;           // cActEnemyByName static descriptor returned by vf00
extern char DAT_016aa78c[];              // "Trigger::Act::ENM: <data is NULL>" (Shift-JIS)
extern undefined DAT_01c78cb0;           // enemy manager (ECX of the enemy lookups)

namespace cActEnemyByName_p1 {

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

} // namespace cActEnemyByName_p1

// 00C7EBF0  Trigger::cActEnemyByName::vf18  size=42  [class]
int Trigger::cActEnemyByName::vf18()
{
    using namespace cActEnemyByName_p1;
    // (machine code: `ret 4` -- one stack argument; cAction.h declares vf18() without it. The
    // function overwrites that argument slot with record+8 and tail-jumps to FUN_00c2a520.)
    if (record() == 0) {
        debugPrint(DAT_016aa78c);
        return 0;
    }
    // raw: FUN_00c2a520(); machine code: ECX = &DAT_01c78cb0, argument = record+0x08
    return callThis<int>(FUN_00c2a520, &DAT_01c78cb0, (char *)record() + 8);
}

// 00C7EC20  Trigger::cActEnemyByName::vf24  size=26  [class]
int Trigger::cActEnemyByName::vf24()
{
    using namespace cActEnemyByName_p1;
    if (record() == 0) {
        return -1;
    }
    // machine code: ECX = &DAT_01c78cb0
    return callThis<int>(FUN_00c18740, &DAT_01c78cb0, (char *)record() + 8);
}

// 00C896F0  Trigger::cActEnemyByName::vf08  size=1  [class]
void Trigger::cActEnemy::vf08()  // shared by all cActEnemy subclasses (cActEnemy vftable slot)
{
}

// 00C89700  Trigger::cActEnemyByName::vf0C  size=1  [class]
void Trigger::cActEnemy::vf0C()  // shared by all cActEnemy subclasses (cActEnemy vftable slot)
{
}

// 00C89710  Trigger::cActEnemyByName::vf10  size=1  [class]
void Trigger::cActEnemy::vf10()  // shared by all cActEnemy subclasses (cActEnemy vftable slot)
{
}

// 00C89720  Trigger::cActEnemyByName::vf14  size=1  [class]
void Trigger::cActEnemy::vf14()  // shared by all cActEnemy subclasses (cActEnemy vftable slot)
{
}

// 00C91930  Trigger::cActEnemyByName::vf00  size=6  [class]
void *Trigger::cActEnemyByName::vf00()
{
    return &DAT_01dbe064;
}

// 00C91940  Trigger::cActEnemyByName::vf04  size=31  [class]
Trigger::cActEnemyByName *Trigger::cActEnemyByName::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

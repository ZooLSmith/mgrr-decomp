// src/managers/triggermanager/cActEnemyByNameForce.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActEnemyByNameForce.h"

extern undefined DAT_01dbe06c;           // cActEnemyByNameForce static descriptor returned by vf00
extern undefined DAT_01c78cb0;           // enemy manager (ECX of the enemy lookups)
extern undefined4 DAT_01d5bad4;

namespace cActEnemyByNameForce_p1 {

// __thiscall call of a function whose functions.h prototype lacks the ECX argument or has the
// wrong convention; ECX (`self`) and the stack arguments are taken from the machine code.
template <class R, class F, class... A> inline R callThis(F fn, const void *self, A... args)
{
    typedef R (__thiscall *Fn)(const void *, A...);
    return ((Fn)fn)(self, args...);
}

} // namespace cActEnemyByNameForce_p1

// 00C7ECB0  Trigger::cActEnemyByNameForce::vf24  size=32  [class]
int Trigger::cActEnemyByNameForce::vf24()
{
    using namespace cActEnemyByNameForce_p1;
    if (record() == 0) {
        return -1;
    }
    // machine code: ECX = &DAT_01c78cb0
    return callThis<int>(FUN_00c194f0, &DAT_01c78cb0, DAT_01d5bad4, (char *)record() + 8);
}

// 00C919B0  Trigger::cActEnemyByNameForce::vf00  size=6  [class]
void *Trigger::cActEnemyByNameForce::vf00()
{
    return &DAT_01dbe06c;
}

// 00C919C0  Trigger::cActEnemyByNameForce::vf04  size=31  [class]
Trigger::cActEnemyByNameForce *Trigger::cActEnemyByNameForce::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

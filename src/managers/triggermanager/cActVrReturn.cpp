// src/managers/triggermanager/cActVrReturn.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActVrReturn.h"

extern undefined DAT_01dbe2c0;  // cActVrReturn static descriptor returned by vf00
extern uint DAT_018b9140;        // global object passed in ECX to FUN_00d46910 / FUN_00d46900
extern undefined4 DAT_01be8e40;  // global object passed in ECX to FUN_00a4ac40

namespace cActVrReturn_p1 {

// FUN_00a4ac40 (__thiscall, ECX = DAT_01be8e40); returns EAX
inline int callA4AC40(int a, int b, int c)
{
    return ((int (__thiscall *)(void *, int, int, int))FUN_00a4ac40)(&DAT_01be8e40, a, b, c);
}

} // namespace cActVrReturn_p1

// 00C81720  Trigger::cActVrReturn::vf18  size=56  [class]
int Trigger::cActVrReturn::vf18()
{
    using namespace cActVrReturn_p1;
    // machine code ends in `ret 4`: vf18 receives one (unused) stack argument.
    // Ghidra typed this void and dropped the ECX arguments; EAX on return is the result of
    // FUN_00a4ac40 (nothing overwrites it before `ret 4`).
    FUN_00d46910((int)&DAT_018b9140);
    int entry = FUN_00d46900((int)&DAT_018b9140);
    int *first = (int *)FUN_00d46900((int)&DAT_018b9140);
    return callA4AC40(*first, entry + 8, -1);
}

// 00C8F6B0  Trigger::cActVrReturn::vf08  size=1  [class]
void Trigger::cActVrReturn::vf08()
{
}

// 00C8F6C0  Trigger::cActVrReturn::vf0C  size=1  [class]
void Trigger::cActVrReturn::vf0C()
{
}

// 00C8F6D0  Trigger::cActVrReturn::vf10  size=1  [class]
void Trigger::cActVrReturn::vf10()
{
}

// 00C8F6E0  Trigger::cActVrReturn::vf14  size=1  [class]
void Trigger::cActVrReturn::vf14()
{
}

// 00C94AC0  Trigger::cActVrReturn::vf00  size=6  [class]
void *Trigger::cActVrReturn::vf00()
{
    return &DAT_01dbe2c0;
}

// 00C94AD0  Trigger::cActVrReturn::vf04  size=31  [class]
Trigger::cActVrReturn *Trigger::cActVrReturn::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// src/managers/triggermanager/cActMoveShounen.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActMoveShounen.h"

extern undefined DAT_01dbe0e0;                 // cActMoveShounen static descriptor returned by vf00

// 00C7F220  Trigger::cActMoveShounen::vf18  size=5  [class]
int Trigger::cActMoveShounen::vf18()
{
    // machine code ends in `ret 4`: vf18 receives one (unused) stack argument
    return 0;
}

// 00C92380  Trigger::cActMoveShounen::vf00  size=6  [class]
void *Trigger::cActMoveShounen::vf00()
{
    return &DAT_01dbe0e0;
}

// 00C92390  Trigger::cActMoveShounen::vf04  size=31  [class]
Trigger::cActMoveShounen *Trigger::cActMoveShounen::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

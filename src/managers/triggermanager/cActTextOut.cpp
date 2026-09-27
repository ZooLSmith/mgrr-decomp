// src/managers/triggermanager/cActTextOut.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActTextOut.h"

extern undefined DAT_01dbe0dc;  // cActTextOut static descriptor returned by vf00
extern undefined DAT_01dc3d08;  // global object passed in ECX to FUN_00cae000

// 00C7F1A0  Trigger::cActTextOut::vf18  size=18  [class]
int Trigger::cActTextOut::vf18()
{
    // machine code ends in `ret 4`: vf18 receives one (unused) stack argument
    FUN_00cae000((int)&DAT_01dc3d08);  // ECX = 0x01DC3D08 (Ghidra dropped the argument)
    return 1;
}

// 00C8A7D0  Trigger::cActTextOut::vf08  size=1  [class]
void Trigger::cActTextOut::vf08()
{
}

// 00C8A7E0  Trigger::cActTextOut::vf0C  size=1  [class]
void Trigger::cActTextOut::vf0C()
{
}

// 00C8A7F0  Trigger::cActTextOut::vf10  size=1  [class]
void Trigger::cActTextOut::vf10()
{
}

// 00C8A800  Trigger::cActTextOut::vf14  size=1  [class]
void Trigger::cActTextOut::vf14()
{
}

// 00C92280  Trigger::cActTextOut::vf00  size=6  [class]
void *Trigger::cActTextOut::vf00()
{
    return &DAT_01dbe0dc;
}

// 00C92290  Trigger::cActTextOut::vf04  size=31  [class]
Trigger::cActTextOut *Trigger::cActTextOut::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

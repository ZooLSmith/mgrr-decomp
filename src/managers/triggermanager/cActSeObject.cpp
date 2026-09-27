// src/managers/triggermanager/cActSeObject.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActSeObject.h"

extern undefined DAT_01dbe2a8;  // cActSeObject static descriptor returned by vf00

// 00C8F2F0  Trigger::cActSeObject::vf08  size=1  [class]
void Trigger::cActSeObject::vf08()
{
}

// 00C8F300  Trigger::cActSeObject::vf0C  size=1  [class]
void Trigger::cActSeObject::vf0C()
{
}

// 00C8F310  Trigger::cActSeObject::vf10  size=1  [class]
void Trigger::cActSeObject::vf10()
{
}

// 00C8F320  Trigger::cActSeObject::vf14  size=1  [class]
void Trigger::cActSeObject::vf14()
{
}

// 00C94940  Trigger::cActSeObject::vf00  size=6  [class]
void *Trigger::cActSeObject::vf00()
{
    return &DAT_01dbe2a8;
}

// 00C94950  Trigger::cActSeObject::vf04  size=31  [class]
Trigger::cActSeObject *Trigger::cActSeObject::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

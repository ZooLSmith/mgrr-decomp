// src/managers/triggermanager/cActGenericFlag.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActGenericFlag.h"

extern undefined DAT_01dbe380;                 // cActGenericFlag static descriptor returned by vf00

// 00C8EE80  Trigger::cActGenericFlag::vf00  size=6  [class]
void *Trigger::cActGenericFlag::vf00()
{
    return &DAT_01dbe380;
}

// 00C8EE90  Trigger::cActGenericFlag::vf08  size=1  [class]
void Trigger::cActGenericFlag::vf08()
{
}

// 00C8EEA0  Trigger::cActGenericFlag::vf0C  size=1  [class]
void Trigger::cActGenericFlag::vf0C()
{
}

// 00C8EEB0  Trigger::cActGenericFlag::vf10  size=1  [class]
void Trigger::cActGenericFlag::vf10()
{
}

// 00C8EEC0  Trigger::cActGenericFlag::vf14  size=1  [class]
void Trigger::cActGenericFlag::vf14()
{
}

// 00C94790  Trigger::cActGenericFlag::vf04  size=31  [class]
Trigger::cActGenericFlag *Trigger::cActGenericFlag::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

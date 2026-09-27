// src/managers/triggermanager/cActObjAttach.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActObjAttach.h"

extern undefined DAT_01dbe168;                 // cActObjAttach static descriptor returned by vf00

// 00C8C060  Trigger::cActObjAttach::vf08  size=1  [class]
void Trigger::cActObjAttach::vf08()
{
}

// 00C8C070  Trigger::cActObjAttach::vf0C  size=1  [class]
void Trigger::cActObjAttach::vf0C()
{
}

// 00C8C080  Trigger::cActObjAttach::vf10  size=1  [class]
void Trigger::cActObjAttach::vf10()
{
}

// 00C8C090  Trigger::cActObjAttach::vf14  size=1  [class]
void Trigger::cActObjAttach::vf14()
{
}

// 00C93070  Trigger::cActObjAttach::vf00  size=6  [class]
void *Trigger::cActObjAttach::vf00()
{
    return &DAT_01dbe168;
}

// 00C93080  Trigger::cActObjAttach::vf04  size=31  [class]
Trigger::cActObjAttach *Trigger::cActObjAttach::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

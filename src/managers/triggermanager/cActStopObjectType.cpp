// src/managers/triggermanager/cActStopObjectType.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActStopObjectType.h"

extern undefined DAT_01dbe1a8;  // cActStopObjectType static descriptor returned by vf00

// 00C8C560  Trigger::cActStopObjectType::vf08  size=1  [class]
void Trigger::cActStopObjectType::vf08()
{
}

// 00C8C570  Trigger::cActStopObjectType::vf0C  size=1  [class]
void Trigger::cActStopObjectType::vf0C()
{
}

// 00C8C580  Trigger::cActStopObjectType::vf10  size=1  [class]
void Trigger::cActStopObjectType::vf10()
{
}

// 00C8C590  Trigger::cActStopObjectType::vf14  size=1  [class]
void Trigger::cActStopObjectType::vf14()
{
}

// 00C93470  Trigger::cActStopObjectType::vf00  size=6  [class]
void *Trigger::cActStopObjectType::vf00()
{
    return &DAT_01dbe1a8;
}

// 00C93480  Trigger::cActStopObjectType::vf04  size=31  [class]
Trigger::cActStopObjectType *Trigger::cActStopObjectType::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

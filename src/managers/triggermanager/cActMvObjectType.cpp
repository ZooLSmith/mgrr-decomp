// src/managers/triggermanager/cActMvObjectType.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActMvObjectType.h"

extern undefined DAT_01dbe1ac;                 // cActMvObjectType static descriptor returned by vf00

// 00C8C600  Trigger::cActMvObjectType::vf08  size=1  [class]
void Trigger::cActMvObjectType::vf08()
{
}

// 00C8C610  Trigger::cActMvObjectType::vf0C  size=1  [class]
void Trigger::cActMvObjectType::vf0C()
{
}

// 00C8C620  Trigger::cActMvObjectType::vf10  size=1  [class]
void Trigger::cActMvObjectType::vf10()
{
}

// 00C8C630  Trigger::cActMvObjectType::vf14  size=1  [class]
void Trigger::cActMvObjectType::vf14()
{
}

// 00C934B0  Trigger::cActMvObjectType::vf00  size=6  [class]
void *Trigger::cActMvObjectType::vf00()
{
    return &DAT_01dbe1ac;
}

// 00C934C0  Trigger::cActMvObjectType::vf04  size=31  [class]
Trigger::cActMvObjectType *Trigger::cActMvObjectType::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

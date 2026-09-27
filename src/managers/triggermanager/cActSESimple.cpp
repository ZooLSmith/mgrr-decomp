// src/managers/triggermanager/cActSESimple.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActSESimple.h"

extern undefined DAT_01dbe100;  // cActSESimple static descriptor returned by vf00

// 00C8AFF0  Trigger::cActSESimple::vf08  size=1  [class]
void Trigger::cActSESimple::vf08()
{
}

// 00C8B000  Trigger::cActSESimple::vf0C  size=1  [class]
void Trigger::cActSESimple::vf0C()
{
}

// 00C8B010  Trigger::cActSESimple::vf10  size=1  [class]
void Trigger::cActSESimple::vf10()
{
}

// 00C8B020  Trigger::cActSESimple::vf14  size=1  [class]
void Trigger::cActSESimple::vf14()
{
}

// 00C92740  Trigger::cActSESimple::vf00  size=6  [class]
void *Trigger::cActSESimple::vf00()
{
    return &DAT_01dbe100;
}

// 00C92750  Trigger::cActSESimple::vf04  size=31  [class]
Trigger::cActSESimple *Trigger::cActSESimple::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

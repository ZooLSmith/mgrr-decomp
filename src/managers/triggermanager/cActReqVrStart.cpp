// src/managers/triggermanager/cActReqVrStart.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActReqVrStart.h"

extern undefined DAT_01dbe29c;  // cActReqVrStart static descriptor returned by vf00

// 00C8F110  Trigger::cActReqVrStart::vf08  size=1  [class]
void Trigger::cActReqVrStart::vf08()
{
}

// 00C8F120  Trigger::cActReqVrStart::vf0C  size=1  [class]
void Trigger::cActReqVrStart::vf0C()
{
}

// 00C8F130  Trigger::cActReqVrStart::vf10  size=1  [class]
void Trigger::cActReqVrStart::vf10()
{
}

// 00C8F140  Trigger::cActReqVrStart::vf14  size=1  [class]
void Trigger::cActReqVrStart::vf14()
{
}

// 00C94880  Trigger::cActReqVrStart::vf00  size=6  [class]
void *Trigger::cActReqVrStart::vf00()
{
    return &DAT_01dbe29c;
}

// 00C94890  Trigger::cActReqVrStart::vf04  size=31  [class]
Trigger::cActReqVrStart *Trigger::cActReqVrStart::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

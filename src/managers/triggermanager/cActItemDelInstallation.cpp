// src/managers/triggermanager/cActItemDelInstallation.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActItemDelInstallation.h"

extern undefined DAT_01dbe288;                 // cActItemDelInstallation static descriptor returned by vf00

// 00C8ED50  Trigger::cActItemDelInstallation::vf08  size=1  [class]
void Trigger::cActItemDelInstallation::vf08()
{
}

// 00C8ED60  Trigger::cActItemDelInstallation::vf0C  size=1  [class]
void Trigger::cActItemDelInstallation::vf0C()
{
}

// 00C8ED70  Trigger::cActItemDelInstallation::vf10  size=1  [class]
void Trigger::cActItemDelInstallation::vf10()
{
}

// 00C8ED80  Trigger::cActItemDelInstallation::vf14  size=1  [class]
void Trigger::cActItemDelInstallation::vf14()
{
}

// 00C94710  Trigger::cActItemDelInstallation::vf00  size=6  [class]
void *Trigger::cActItemDelInstallation::vf00()
{
    return &DAT_01dbe288;
}

// 00C94720  Trigger::cActItemDelInstallation::vf04  size=31  [class]
Trigger::cActItemDelInstallation *Trigger::cActItemDelInstallation::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

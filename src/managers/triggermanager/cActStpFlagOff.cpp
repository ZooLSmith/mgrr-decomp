// src/managers/triggermanager/cActStpFlagOff.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActStpFlagOff.h"

extern undefined DAT_01dbe440;  // cActStpFlagOff static descriptor returned by vf00
// STP_* flag (STP_OBJ ... STP_EM_BRAIN) table: 22 {name, value} pairs
extern char *PTR_s_STP_OBJ_018abc20;

namespace cActStpFlagOff_p1 {

// FUN_00e03ea0 (cdecl; functions.h declares it void): hash of a name string
inline int nameHash(char *name)
{
    return ((int (*)(char *))FUN_00e03ea0)(name);
}

} // namespace cActStpFlagOff_p1

// 00C80640  Trigger::cActStpFlagOff::vf08  size=54  [class]
void Trigger::cActStpFlagOff::vf08()
{
    using namespace cActStpFlagOff_p1;
    int *data = record();
    if (data != 0) {
        unsigned int index = 0;
        while (true) {
            int hash = nameHash((&PTR_s_STP_OBJ_018abc20)[index * 2]);
            if (data[2] == hash) break;
            index = index + 1;
            if (0x15 < index) {
                return;
            }
        }
        flagIndex() = index;
    }
}

// 00C8D090  Trigger::cActStpFlagOff::vf00  size=6  [class]
void *Trigger::cActStpFlagOff::vf00()
{
    return &DAT_01dbe440;
}

// 00C8D0B0  Trigger::cActStpFlagOff::vf0C  size=1  [class]
void Trigger::cActStpFlagOff::vf0C()
{
}

// 00C8D0C0  Trigger::cActStpFlagOff::vf10  size=1  [class]
void Trigger::cActStpFlagOff::vf10()
{
}

// 00C8D0D0  Trigger::cActStpFlagOff::vf14  size=1  [class]
void Trigger::cActStpFlagOff::vf14()
{
}

// 00C93960  Trigger::cActStpFlagOff::vf04  size=31  [class]
Trigger::cActStpFlagOff *Trigger::cActStpFlagOff::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

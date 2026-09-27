// src/managers/triggermanager/cActStaFlagOff.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActStaFlagOff.h"

extern undefined DAT_01dbe44c;  // cActStaFlagOff static descriptor returned by vf00
// STA_* flag (STA_SCENARIO ... STA_COMB_CLEAR) table: 25 {name, value} pairs
extern char *PTR_s_STA_SCENARIO_018abb58;

namespace cActStaFlagOff_p1 {

// FUN_00e03ea0 (cdecl; functions.h declares it void): hash of a name string
inline int nameHash(char *name)
{
    return ((int (*)(char *))FUN_00e03ea0)(name);
}

} // namespace cActStaFlagOff_p1

// 00C80510  Trigger::cActStaFlagOff::vf08  size=54  [class]
void Trigger::cActStaFlagOff::vf08()
{
    using namespace cActStaFlagOff_p1;
    int *data = record();
    if (data != 0) {
        unsigned int index = 0;
        while (true) {
            int hash = nameHash((&PTR_s_STA_SCENARIO_018abb58)[index * 2]);
            if (data[2] == hash) break;
            index = index + 1;
            if (0x18 < index) {
                return;
            }
        }
        flagIndex() = index;
    }
}

// 00C8CEB0  Trigger::cActStaFlagOff::vf00  size=6  [class]
void *Trigger::cActStaFlagOff::vf00()
{
    return &DAT_01dbe44c;
}

// 00C8CED0  Trigger::cActStaFlagOff::vf0C  size=1  [class]
void Trigger::cActStaFlagOff::vf0C()
{
}

// 00C8CEE0  Trigger::cActStaFlagOff::vf10  size=1  [class]
void Trigger::cActStaFlagOff::vf10()
{
}

// 00C8CEF0  Trigger::cActStaFlagOff::vf14  size=1  [class]
void Trigger::cActStaFlagOff::vf14()
{
}

// 00C938A0  Trigger::cActStaFlagOff::vf04  size=31  [class]
Trigger::cActStaFlagOff *Trigger::cActStaFlagOff::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

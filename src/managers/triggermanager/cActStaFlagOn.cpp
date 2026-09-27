// src/managers/triggermanager/cActStaFlagOn.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActStaFlagOn.h"

extern undefined DAT_01dbe5bc;  // cActStaFlagOn static descriptor returned by vf00
// STA_* flag (STA_SCENARIO ... STA_COMB_CLEAR) table: 25 {name, value} pairs
extern char *PTR_s_STA_SCENARIO_018abb58;

namespace cActStaFlagOn_p1 {

// FUN_00e03ea0 (cdecl; functions.h declares it void): hash of a name string
inline int nameHash(char *name)
{
    return ((int (*)(char *))FUN_00e03ea0)(name);
}

} // namespace cActStaFlagOn_p1

// 00C7EA70  Trigger::cActStaFlagOn::vf08  size=54  [class]
void Trigger::cActStaFlagOn::vf08()
{
    using namespace cActStaFlagOn_p1;
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

// 00C89320  Trigger::cActStaFlagOn::vf00  size=6  [class]
void *Trigger::cActStaFlagOn::vf00()
{
    return &DAT_01dbe5bc;
}

// 00C89340  Trigger::cActStaFlagOn::vf0C  size=1  [class]
void Trigger::cActStaFlagOn::vf0C()
{
}

// 00C89350  Trigger::cActStaFlagOn::vf10  size=1  [class]
void Trigger::cActStaFlagOn::vf10()
{
}

// 00C89360  Trigger::cActStaFlagOn::vf14  size=1  [class]
void Trigger::cActStaFlagOn::vf14()
{
}

// 00C91780  Trigger::cActStaFlagOn::vf04  size=31  [class]
Trigger::cActStaFlagOn *Trigger::cActStaFlagOn::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// src/managers/triggermanager/cActStpFlagOn.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActStpFlagOn.h"

extern undefined DAT_01dbe43c;  // cActStpFlagOn static descriptor returned by vf00
// STP_* flag (STP_OBJ ... STP_EM_BRAIN) table: 22 {name, value} pairs
extern char *PTR_s_STP_OBJ_018abc20;

namespace cActStpFlagOn_p1 {

// FUN_00e03ea0 (cdecl; functions.h declares it void): hash of a name string
inline int nameHash(char *name)
{
    return ((int (*)(char *))FUN_00e03ea0)(name);
}

} // namespace cActStpFlagOn_p1

// 00C80680  Trigger::cActStpFlagOn::vf08  size=54  [class]
void Trigger::cActStpFlagOn::vf08()
{
    using namespace cActStpFlagOn_p1;
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

// 00C8D130  Trigger::cActStpFlagOn::vf00  size=6  [class]
void *Trigger::cActStpFlagOn::vf00()
{
    return &DAT_01dbe43c;
}

// 00C8D150  Trigger::cActStpFlagOn::vf0C  size=1  [class]
void Trigger::cActStpFlagOn::vf0C()
{
}

// 00C8D160  Trigger::cActStpFlagOn::vf10  size=1  [class]
void Trigger::cActStpFlagOn::vf10()
{
}

// 00C8D170  Trigger::cActStpFlagOn::vf14  size=1  [class]
void Trigger::cActStpFlagOn::vf14()
{
}

// 00C939A0  Trigger::cActStpFlagOn::vf04  size=31  [class]
Trigger::cActStpFlagOn *Trigger::cActStpFlagOn::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

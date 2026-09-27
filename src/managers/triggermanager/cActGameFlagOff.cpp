// src/managers/triggermanager/cActGameFlagOff.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActGameFlagOff.h"

extern undefined DAT_01dbe47c;                 // cActGameFlagOff static descriptor returned by vf00
extern char *PTR_s_GAME_RECVCOMMU_018ab9a8[];  // game flag table: {name, ?} pairs, 0x36 entries

namespace cActGameFlagOff_p1 {

// FUN_00e03ea0 (cdecl): string hash; functions.h declares it returning void.
inline int nameHash(char *name)
{
    return ((int (*)(char *))FUN_00e03ea0)(name);
}

} // namespace cActGameFlagOff_p1

// 00C80090  Trigger::cActGameFlagOff::vf08  size=54  [class]
void Trigger::cActGameFlagOff::vf08()
{
    using namespace cActGameFlagOff_p1;
    // resolve the flag name hash in the record (rec[2]) to its index in the game flag table
    int *rec = record();
    if (rec != 0) {
        unsigned int index = 0;
        while (true) {
            int hash = nameHash(PTR_s_GAME_RECVCOMMU_018ab9a8[index * 2]);
            if (rec[2] == hash) break;
            index = index + 1;
            if (0x35 < index) {
                return;
            }
        }
        flagIndex() = index;
    }
}

// 00C8C730  Trigger::cActGameFlagOff::vf00  size=6  [class]
void *Trigger::cActGameFlagOff::vf00()
{
    return &DAT_01dbe47c;
}

// 00C8C750  Trigger::cActGameFlagOff::vf0C  size=1  [class]
void Trigger::cActGameFlagOff::vf0C()
{
}

// 00C8C760  Trigger::cActGameFlagOff::vf10  size=1  [class]
void Trigger::cActGameFlagOff::vf10()
{
}

// 00C8C770  Trigger::cActGameFlagOff::vf14  size=1  [class]
void Trigger::cActGameFlagOff::vf14()
{
}

// 00C93540  Trigger::cActGameFlagOff::vf04  size=31  [class]
Trigger::cActGameFlagOff *Trigger::cActGameFlagOff::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// src/managers/triggermanager/cActGameFlagOn.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActGameFlagOn.h"

extern undefined DAT_01dbe480;                 // cActGameFlagOn static descriptor returned by vf00
extern char *PTR_s_GAME_RECVCOMMU_018ab9a8[];  // game flag table: {name, ?} pairs, 0x36 entries

namespace cActGameFlagOn_p1 {

// FUN_00e03ea0 (cdecl): string hash; functions.h declares it returning void.
inline int nameHash(char *name)
{
    return ((int (*)(char *))FUN_00e03ea0)(name);
}

} // namespace cActGameFlagOn_p1

// 00C80050  Trigger::cActGameFlagOn::vf08  size=54  [class]
void Trigger::cActGameFlagOn::vf08()
{
    using namespace cActGameFlagOn_p1;
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

// 00C8C690  Trigger::cActGameFlagOn::vf00  size=6  [class]
void *Trigger::cActGameFlagOn::vf00()
{
    return &DAT_01dbe480;
}

// 00C8C6B0  Trigger::cActGameFlagOn::vf0C  size=1  [class]
void Trigger::cActGameFlagOn::vf0C()
{
}

// 00C8C6C0  Trigger::cActGameFlagOn::vf10  size=1  [class]
void Trigger::cActGameFlagOn::vf10()
{
}

// 00C8C6D0  Trigger::cActGameFlagOn::vf14  size=1  [class]
void Trigger::cActGameFlagOn::vf14()
{
}

// 00C93500  Trigger::cActGameFlagOn::vf04  size=31  [class]
Trigger::cActGameFlagOn *Trigger::cActGameFlagOn::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// src/managers/triggermanager/cCondNotStpFlag.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondNotStpFlag.h"

extern char *PTR_s_STP_OBJ_018abc20[];  // STP flag table: {name, ?} pairs, 0x16 entries

namespace cCondNotStpFlag_p1 {

// FUN_00e03ea0: hash of a name string (functions.h declares it void; the hash is in EAX)
inline int hashName(const char *name)
{
    return ((int (*)(const char *))FUN_00e03ea0)(name);
}

}  // namespace cCondNotStpFlag_p1

// 00C7CB50  Trigger::cCondNotStpFlag::vf1C  size=58  [class]
// Stores the record and the index of the table entry whose name hash equals record+0x08
// (flagIndex is left unchanged when no entry matches).
void Trigger::cCondNotStpFlag::vf1C(int *record)
{
    using namespace cCondNotStpFlag_p1;
    *(int **)((char *)this + 0x04) = record;  // cCondition+0x04: condition record
    unsigned int index = 0;
    do {
        int hash = hashName(PTR_s_STP_OBJ_018abc20[index * 2]);
        if (record[2] == hash) {  // record+0x08: flag name hash
            flagIndex() = index;
            return;
        }
        index = index + 1;
    } while (index < 0x16);
}

// 00C86580  Trigger::cCondNotStpFlag::vf00  size=31  [class]
Trigger::cCondNotStpFlag *Trigger::cCondNotStpFlag::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

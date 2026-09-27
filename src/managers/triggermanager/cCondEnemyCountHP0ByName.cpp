// src/managers/triggermanager/cCondEnemyCountHP0ByName.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondEnemyCountHP0ByName.h"

extern undefined DAT_016ac540;  // debug message

namespace cCondEnemyCountHP0ByName_p1 {

// call a function as __cdecl with exactly the arguments the raw call shows
// (used for the __cdecl callees; __thiscall callees go through thiscall() below)
template <class R, class F, class... A> inline R cdeclcall(F fn, A... args)
{
    typedef R (__cdecl *Fn)(A...);
    return ((Fn)fn)(args...);
}

// __thiscall call of a function with an explicit ECX (`self`), recovered from the machine code
template <class R, class F, class... A> inline R thiscall(F fn, const void *self, A... args)
{
    typedef R (__thiscall *Fn)(const void *, A...);
    return ((Fn)fn)(self, args...);
}

} // namespace cCondEnemyCountHP0ByName_p1

// 00C7A740  Trigger::cCondEnemyCountHP0ByName::vf1C  size=28  [class]
void Trigger::cCondEnemyCountHP0ByName::vf1C(int *record)
{
    *(int **)((char *)this + 0x04) /* cCondition+0x04: record */ = record;
    compareOp() = record[2];               // record+0x08
    threshold() = record[3];               // record+0x0C
    enemyName() = (char *)record + 0x10;   // name string stored in the record
}

// 00C855A0  Trigger::cCondEnemyCountHP0ByName::vf00  size=31  [class]
Trigger::cCondEnemyCountHP0ByName *Trigger::cCondEnemyCountHP0ByName::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C855C0  Trigger::cCondEnemyCountHP0ByName::vf14  size=160  [class]
bool Trigger::cCondEnemyCountHP0ByName::vf14()
{
    using namespace cCondEnemyCountHP0ByName_p1;
    int count;

    if (enemyName() == 0) {
        cdeclcall<void>(FUN_00dd5650, &DAT_016ac540);  // debug message
    }
    else {
        if (__stricmp((char *)"all", enemyName()) == 0) {
            count = thiscall<int>(FUN_00c195e0, (void *)0x01C78CB0);  // ECX = 0x01C78CB0
        }
        else {
            if (thiscall<int>(FUN_00c18c70, (void *)0x01C78CB0, enemyName()) == 0) {  // ECX = 0x01C78CB0 (enemy manager)
                return false;
            }
            count = thiscall<int>(FUN_00c19a00, (void *)0x01C78CB0, enemyName());  // ECX = 0x01C78CB0 (enemy manager)
        }
        switch (compareOp()) {
        case 1:
            return count < threshold();
        case 2:
            return count <= threshold();
        case 3:
            return count == threshold();
        case 4:
            return threshold() < count;
        case 5:
            return threshold() <= count;
        }
    }
    return false;
}

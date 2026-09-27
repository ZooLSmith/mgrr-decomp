// src/managers/triggermanager/cActEnemyGroupByName.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActEnemyGroupByName.h"

extern undefined DAT_01dbe1c4;                 // cActEnemyGroupByName static descriptor returned by vf00
extern char DAT_016aa78c[];                // debug message: action record missing

namespace cActEnemyGroupByName_p1 {

// FUN_00dd5650: debug printf (empty in release); functions.h declares it void(void).
inline void debugPrint(const char *message)
{
    ((void (*)(const char *, ...))FUN_00dd5650)(message);
}

// ECX values loaded by the machine code for the __thiscall callees below (the raw
// decompilation dropped them from the call sites).
inline void *enemyGroupManager() { return (void *)0x01C78CB0; }  // ? global object at 0x01C78CB0
inline void *enemySetReader() { return (void *)0x01DBE5D8; }     // ? EnemySetReader instance at 0x01DBE5D8

} // namespace cActEnemyGroupByName_p1

// 00C80450  Trigger::cActEnemyGroupByName::vf18  size=46  [class]
int Trigger::cActEnemyGroupByName::vf18()
{
    using namespace cActEnemyGroupByName_p1;
    // machine code ends in `ret 4`: vf18 receives one (unused) stack argument
    int *rec = record();
    if (rec == 0) {
        debugPrint(DAT_016aa78c);
        return 0;
    }
    // FUN_00c18650 (__thiscall): this = 0x01C78CB0, group index rec[2], name at rec+0xC
    return ((int (__thiscall *)(void *, int, char *))FUN_00c18650)(enemyGroupManager(), rec[2], (char *)rec + 0xC);
}

// 00C80480  Trigger::cActEnemyGroupByName::vf24  size=26  [class]
int Trigger::cActEnemyGroupByName::vf24()
{
    using namespace cActEnemyGroupByName_p1;
    if (record() == 0) {
        return -1;
    }
    // FUN_00c18740 (__thiscall): this = 0x01C78CB0; looks up the name, returns its index or -1
    return ((int (__thiscall *)(void *, char *))FUN_00c18740)(enemyGroupManager(), (char *)record() + 0xC);
}

// 00C93790  Trigger::cActEnemyGroupByName::vf00  size=6  [class]
void *Trigger::cActEnemyGroupByName::vf00()
{
    return &DAT_01dbe1c4;
}

// 00C937A0  Trigger::cActEnemyGroupByName::vf04  size=31  [class]
Trigger::cActEnemyGroupByName *Trigger::cActEnemyGroupByName::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

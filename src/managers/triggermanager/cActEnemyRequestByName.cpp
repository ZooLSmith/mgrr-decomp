// src/managers/triggermanager/cActEnemyRequestByName.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActEnemyRequestByName.h"

extern undefined DAT_01dbe184;                 // cActEnemyRequestByName static descriptor returned by vf00
extern char DAT_016aa78c[];                // debug message: action record missing
extern int DAT_01d5bad4;

namespace cActEnemyRequestByName_p1 {

// FUN_00dd5650: debug printf (empty in release); functions.h declares it void(void).
inline void debugPrint(const char *message)
{
    ((void (*)(const char *, ...))FUN_00dd5650)(message);
}

// ECX values loaded by the machine code for the __thiscall callees below (the raw
// decompilation dropped them from the call sites).
inline void *enemyGroupManager() { return (void *)0x01C78CB0; }  // ? global object at 0x01C78CB0
inline void *enemySetReader() { return (void *)0x01DBE5D8; }     // ? EnemySetReader instance at 0x01DBE5D8

} // namespace cActEnemyRequestByName_p1

// 00C7FE20  Trigger::cActEnemyRequestByName::vf18  size=47  [class]
int Trigger::cActEnemyRequestByName::vf18()
{
    using namespace cActEnemyRequestByName_p1;
    // machine code ends in `ret 4`: vf18 receives one (unused) stack argument
    int *rec = record();
    if (rec == 0) {
        debugPrint(DAT_016aa78c);
        return 0;
    }
    // 00CA6900 EnemySetReader::requestStart_2 (__thiscall, this = 0x01DBE5D8): by name at rec+8
    ((void (__thiscall *)(void *, char *))0x00CA6900)(enemySetReader(), (char *)rec + 8);
    return 1;
}

// 00C7FE50  Trigger::cActEnemyRequestByName::vf24  size=32  [class]
int Trigger::cActEnemyRequestByName::vf24()
{
    using namespace cActEnemyRequestByName_p1;
    if (record() == 0) {
        return -1;
    }
    // FUN_00c194f0 (__thiscall): this = 0x01C78CB0
    return ((int (__thiscall *)(void *, int, char *))FUN_00c194f0)(enemyGroupManager(), DAT_01d5bad4, (char *)record() + 8);
}

// 00C93230  Trigger::cActEnemyRequestByName::vf00  size=6  [class]
void *Trigger::cActEnemyRequestByName::vf00()
{
    return &DAT_01dbe184;
}

// 00C93240  Trigger::cActEnemyRequestByName::vf04  size=31  [class]
Trigger::cActEnemyRequestByName *Trigger::cActEnemyRequestByName::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

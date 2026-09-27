// src/managers/triggermanager/cAction.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cAction.h"

// per-action-type static descriptors returned by vf00
extern undefined DAT_01dbe5d0;
extern undefined DAT_01dbe5cc;
extern undefined DAT_01dbe5c8;
extern undefined DAT_01dbe5c4;
extern undefined DAT_01dbe5c0;
extern undefined DAT_01dbe5b8;
extern undefined DAT_01dbe5b4;
extern undefined DAT_01dbe5b0;
extern undefined DAT_01dbe5ac;
extern undefined DAT_01dbe5a8;
extern undefined DAT_01dbe5a4;
extern undefined DAT_01dbe5a0;
extern undefined DAT_01dbe59c;
extern undefined DAT_01dbe598;
extern undefined DAT_01dbe594;
extern undefined DAT_01dbe590;
extern undefined DAT_01dbe58c;
extern undefined DAT_01dbe588;
extern undefined DAT_01b35164;
extern undefined DAT_01b35168;
extern undefined DAT_01dbe584;
extern undefined DAT_01dbe580;
extern undefined DAT_01dbe57c;
extern undefined DAT_01dbe578;
extern undefined DAT_01dbe574;
extern undefined DAT_01dbe570;
extern undefined DAT_01dbe56c;
extern undefined DAT_01dbe568;
extern undefined DAT_01dbe564;
extern undefined DAT_01dbe560;
extern undefined DAT_01dbe55c;
extern undefined DAT_01dbe558;
extern undefined DAT_01dbe554;
extern undefined DAT_01dbe550;
extern undefined DAT_01dbe54c;
extern undefined DAT_01dbe548;
extern undefined DAT_01dbe544;
extern undefined DAT_01dbe540;
extern undefined DAT_01dbe52c;
extern undefined DAT_01dbe528;
extern undefined DAT_01dbe524;
extern undefined DAT_01dbe520;
extern undefined DAT_01dbe51c;
extern undefined DAT_01dbe518;
extern undefined DAT_01dbe514;
extern undefined DAT_01dbe510;
extern undefined DAT_01dbe50c;
extern undefined DAT_01dbe508;
extern undefined DAT_01dbe504;
extern undefined DAT_01dbe500;
extern undefined DAT_01dbe4fc;
extern undefined DAT_01dbe4f8;
extern undefined DAT_01dbe4f4;

// 00C835D0  Trigger::cAction<Trigger::cActArray>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActArray>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C89000  Trigger::cAction<Trigger::cActCamera>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActCamera>::vf00()
{
    return &DAT_01dbe5d0;
}

// 00C89050  Trigger::cAction<Trigger::cActCamera>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActCamera>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C89060  Trigger::cAction<Trigger::cActCamera>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActCamera>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C89070  Trigger::cAction<Trigger::cActCamera>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActCamera> *Trigger::cAction<Trigger::cActCamera>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C890A0  Trigger::cAction<Trigger::cActSubphase>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActSubphase>::vf00()
{
    return &DAT_01dbe5cc;
}

// 00C890F0  Trigger::cAction<Trigger::cActSubphase>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActSubphase>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C89100  Trigger::cAction<Trigger::cActSubphase>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActSubphase>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C89110  Trigger::cAction<Trigger::cActSubphase>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActSubphase> *Trigger::cAction<Trigger::cActSubphase>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C89140  Trigger::cAction<Trigger::cActTeleportExplicit>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActTeleportExplicit>::vf00()
{
    return &DAT_01dbe5c8;
}

// 00C89190  Trigger::cAction<Trigger::cActTeleportExplicit>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActTeleportExplicit>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C891A0  Trigger::cAction<Trigger::cActTeleportExplicit>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActTeleportExplicit>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C891B0  Trigger::cAction<Trigger::cActTeleportExplicit>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActTeleportExplicit> *Trigger::cAction<Trigger::cActTeleportExplicit>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C891E0  Trigger::cAction<Trigger::cActTeleportIndex>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActTeleportIndex>::vf00()
{
    return &DAT_01dbe5c4;
}

// 00C89230  Trigger::cAction<Trigger::cActTeleportIndex>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActTeleportIndex>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C89240  Trigger::cAction<Trigger::cActTeleportIndex>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActTeleportIndex>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C89250  Trigger::cAction<Trigger::cActTeleportIndex>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActTeleportIndex> *Trigger::cAction<Trigger::cActTeleportIndex>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C89280  Trigger::cAction<Trigger::cActDoorOpen>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActDoorOpen>::vf00()
{
    return &DAT_01dbe5c0;
}

// 00C892D0  Trigger::cAction<Trigger::cActDoorOpen>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActDoorOpen>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C892E0  Trigger::cAction<Trigger::cActDoorOpen>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActDoorOpen>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C892F0  Trigger::cAction<Trigger::cActDoorOpen>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActDoorOpen> *Trigger::cAction<Trigger::cActDoorOpen>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C89330  Trigger::cAction<Trigger::cActStaFlagOn>::vf08  size=1  [class]
template <>
void Trigger::cAction<Trigger::cActStaFlagOn>::vf08()
{
}

// 00C89370  Trigger::cAction<Trigger::cActStaFlagOn>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActStaFlagOn>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C89380  Trigger::cAction<Trigger::cActStaFlagOn>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActStaFlagOn>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C89390  Trigger::cAction<Trigger::cActStaFlagOn>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActStaFlagOn> *Trigger::cAction<Trigger::cActStaFlagOn>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C893C0  Trigger::cAction<Trigger::cActCamOff>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActCamOff>::vf00()
{
    return &DAT_01dbe5b8;
}

// 00C89410  Trigger::cAction<Trigger::cActCamOff>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActCamOff>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C89420  Trigger::cAction<Trigger::cActCamOff>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActCamOff>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C89430  Trigger::cAction<Trigger::cActCamOff>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActCamOff> *Trigger::cAction<Trigger::cActCamOff>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C89460  Trigger::cAction<Trigger::cActVerseStart>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActVerseStart>::vf00()
{
    return &DAT_01dbe5b4;
}

// 00C89470  Trigger::cAction<Trigger::cActVerseStart>::vf08  size=1  [class]
template <>
void Trigger::cAction<Trigger::cActVerseStart>::vf08()
{
}

// 00C89480  Trigger::cAction<Trigger::cActVerseStart>::vf0C  size=1  [class]
template <>
void Trigger::cAction<Trigger::cActVerseStart>::vf0C()
{
}

// 00C89490  Trigger::cAction<Trigger::cActVerseStart>::vf10  size=1  [class]
template <>
void Trigger::cAction<Trigger::cActVerseStart>::vf10()
{
}

// 00C894A0  Trigger::cAction<Trigger::cActVerseStart>::vf14  size=1  [class]
template <>
void Trigger::cAction<Trigger::cActVerseStart>::vf14()
{
}

// 00C894B0  Trigger::cAction<Trigger::cActVerseStart>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActVerseStart>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C894C0  Trigger::cAction<Trigger::cActVerseStart>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActVerseStart>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C894D0  Trigger::cAction<Trigger::cActVerseStart>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActVerseStart> *Trigger::cAction<Trigger::cActVerseStart>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C89500  Trigger::cAction<Trigger::cActVerseEnd>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActVerseEnd>::vf00()
{
    return &DAT_01dbe5b0;
}

// 00C89510  Trigger::cAction<Trigger::cActVerseEnd>::vf08  size=1  [class]
template <>
void Trigger::cAction<Trigger::cActVerseEnd>::vf08()
{
}

// 00C89520  Trigger::cAction<Trigger::cActVerseEnd>::vf0C  size=1  [class]
template <>
void Trigger::cAction<Trigger::cActVerseEnd>::vf0C()
{
}

// 00C89530  Trigger::cAction<Trigger::cActVerseEnd>::vf10  size=1  [class]
template <>
void Trigger::cAction<Trigger::cActVerseEnd>::vf10()
{
}

// 00C89540  Trigger::cAction<Trigger::cActVerseEnd>::vf14  size=1  [class]
template <>
void Trigger::cAction<Trigger::cActVerseEnd>::vf14()
{
}

// 00C89550  Trigger::cAction<Trigger::cActVerseEnd>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActVerseEnd>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C89560  Trigger::cAction<Trigger::cActVerseEnd>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActVerseEnd>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C89570  Trigger::cAction<Trigger::cActVerseEnd>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActVerseEnd> *Trigger::cAction<Trigger::cActVerseEnd>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C895A0  Trigger::cAction<Trigger::cActSoftEvent>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActSoftEvent>::vf00()
{
    return &DAT_01dbe5ac;
}

// 00C895F0  Trigger::cAction<Trigger::cActSoftEvent>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActSoftEvent>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C89600  Trigger::cAction<Trigger::cActSoftEvent>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActSoftEvent>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C89610  Trigger::cAction<Trigger::cActSoftEvent>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActSoftEvent> *Trigger::cAction<Trigger::cActSoftEvent>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C89640  Trigger::cAction<Trigger::cActPhase>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActPhase>::vf00()
{
    return &DAT_01dbe5a8;
}

// 00C89690  Trigger::cAction<Trigger::cActPhase>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActPhase>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C896A0  Trigger::cAction<Trigger::cActPhase>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActPhase>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C896B0  Trigger::cAction<Trigger::cActPhase>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActPhase> *Trigger::cAction<Trigger::cActPhase>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C896E0  Trigger::cAction<Trigger::cActEnemy>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActEnemy>::vf00()
{
    return &DAT_01dbe5a4;
}

// 00C89730  Trigger::cAction<Trigger::cActEnemy>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActEnemy>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C89740  Trigger::cAction<Trigger::cActEnemy>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActEnemy>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C89750  Trigger::cAction<Trigger::cActEnemy>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActEnemy> *Trigger::cAction<Trigger::cActEnemy>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C89780  Trigger::cAction<Trigger::cActEnemyRetreatByName>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActEnemyRetreatByName>::vf00()
{
    return &DAT_01dbe5a0;
}

// 00C897D0  Trigger::cAction<Trigger::cActEnemyRetreatByName>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActEnemyRetreatByName>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C897E0  Trigger::cAction<Trigger::cActEnemyRetreatByName>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActEnemyRetreatByName>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C897F0  Trigger::cAction<Trigger::cActEnemyRetreatByName>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActEnemyRetreatByName> *Trigger::cAction<Trigger::cActEnemyRetreatByName>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C89820  Trigger::cAction<Trigger::cActEnemyRetreatByNumber>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActEnemyRetreatByNumber>::vf00()
{
    return &DAT_01dbe59c;
}

// 00C89870  Trigger::cAction<Trigger::cActEnemyRetreatByNumber>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActEnemyRetreatByNumber>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C89880  Trigger::cAction<Trigger::cActEnemyRetreatByNumber>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActEnemyRetreatByNumber>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C89890  Trigger::cAction<Trigger::cActEnemyRetreatByNumber>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActEnemyRetreatByNumber> *Trigger::cAction<Trigger::cActEnemyRetreatByNumber>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C898C0  Trigger::cAction<Trigger::cActEnemyClearByName>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActEnemyClearByName>::vf00()
{
    return &DAT_01dbe598;
}

// 00C89910  Trigger::cAction<Trigger::cActEnemyClearByName>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActEnemyClearByName>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C89920  Trigger::cAction<Trigger::cActEnemyClearByName>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActEnemyClearByName>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C89930  Trigger::cAction<Trigger::cActEnemyClearByName>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActEnemyClearByName> *Trigger::cAction<Trigger::cActEnemyClearByName>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C89960  Trigger::cAction<Trigger::cActEnemyClearByNumber>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActEnemyClearByNumber>::vf00()
{
    return &DAT_01dbe594;
}

// 00C899B0  Trigger::cAction<Trigger::cActEnemyClearByNumber>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActEnemyClearByNumber>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C899C0  Trigger::cAction<Trigger::cActEnemyClearByNumber>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActEnemyClearByNumber>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C899D0  Trigger::cAction<Trigger::cActEnemyClearByNumber>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActEnemyClearByNumber> *Trigger::cAction<Trigger::cActEnemyClearByNumber>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C89A00  Trigger::cAction<Trigger::cActEffect>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActEffect>::vf00()
{
    return &DAT_01dbe590;
}

// 00C89A50  Trigger::cAction<Trigger::cActEffect>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActEffect>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C89A60  Trigger::cAction<Trigger::cActEffect>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActEffect>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C89A70  Trigger::cAction<Trigger::cActEffect>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActEffect> *Trigger::cAction<Trigger::cActEffect>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C89AA0  Trigger::cAction<Trigger::cActResult>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActResult>::vf00()
{
    return &DAT_01dbe58c;
}

// 00C89AF0  Trigger::cAction<Trigger::cActResult>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActResult>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C89B00  Trigger::cAction<Trigger::cActResult>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActResult>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C89B10  Trigger::cAction<Trigger::cActResult>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActResult> *Trigger::cAction<Trigger::cActResult>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C89B40  Trigger::cAction<Trigger::cActTurnOff>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActTurnOff>::vf00()
{
    return &DAT_01dbe588;
}

// 00C89B90  Trigger::cAction<Trigger::cActTurnOff>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActTurnOff>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C89BA0  Trigger::cAction<Trigger::cActTurnOff>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActTurnOff>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C89BB0  Trigger::cAction<Trigger::cActTurnOff>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActTurnOff> *Trigger::cAction<Trigger::cActTurnOff>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C89BE0  Trigger::cAction<Trigger::cActSE>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActSE>::vf00()
{
    return &DAT_01b35164;
}

// 00C89C30  Trigger::cAction<Trigger::cActSE>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActSE>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C89C40  Trigger::cAction<Trigger::cActSE>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActSE>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C89C50  Trigger::cAction<Trigger::cActSE>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActSE> *Trigger::cAction<Trigger::cActSE>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C89C80  Trigger::cAction<Trigger::cActFuncall>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActFuncall>::vf00()
{
    return &DAT_01b35168;
}

// 00C89CD0  Trigger::cAction<Trigger::cActFuncall>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActFuncall>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C89CE0  Trigger::cAction<Trigger::cActFuncall>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActFuncall>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C89CF0  Trigger::cAction<Trigger::cActFuncall>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActFuncall> *Trigger::cAction<Trigger::cActFuncall>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C89D20  Trigger::cAction<Trigger::cActTask>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActTask>::vf00()
{
    return &DAT_01dbe584;
}

// 00C89D70  Trigger::cAction<Trigger::cActTask>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActTask>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C89D80  Trigger::cAction<Trigger::cActTask>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActTask>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C89D90  Trigger::cAction<Trigger::cActTask>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActTask> *Trigger::cAction<Trigger::cActTask>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C89DC0  Trigger::cAction<Trigger::cActAnimation>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActAnimation>::vf00()
{
    return &DAT_01dbe580;
}

// 00C89E10  Trigger::cAction<Trigger::cActAnimation>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActAnimation>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C89E20  Trigger::cAction<Trigger::cActAnimation>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActAnimation>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C89E30  Trigger::cAction<Trigger::cActAnimation>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActAnimation> *Trigger::cAction<Trigger::cActAnimation>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C89E60  Trigger::cAction<Trigger::cActAnimationOrigin>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActAnimationOrigin>::vf00()
{
    return &DAT_01dbe57c;
}

// 00C89EB0  Trigger::cAction<Trigger::cActAnimationOrigin>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActAnimationOrigin>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C89EC0  Trigger::cAction<Trigger::cActAnimationOrigin>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActAnimationOrigin>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C89ED0  Trigger::cAction<Trigger::cActAnimationOrigin>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActAnimationOrigin> *Trigger::cAction<Trigger::cActAnimationOrigin>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C89F00  Trigger::cAction<Trigger::cActTerminate>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActTerminate>::vf00()
{
    return &DAT_01dbe578;
}

// 00C89F50  Trigger::cAction<Trigger::cActTerminate>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActTerminate>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C89F60  Trigger::cAction<Trigger::cActTerminate>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActTerminate>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C89F70  Trigger::cAction<Trigger::cActTerminate>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActTerminate> *Trigger::cAction<Trigger::cActTerminate>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C89FA0  Trigger::cAction<Trigger::cActFollowPath>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActFollowPath>::vf00()
{
    return &DAT_01dbe574;
}

// 00C89FF0  Trigger::cAction<Trigger::cActFollowPath>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActFollowPath>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8A000  Trigger::cAction<Trigger::cActFollowPath>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActFollowPath>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8A010  Trigger::cAction<Trigger::cActFollowPath>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActFollowPath> *Trigger::cAction<Trigger::cActFollowPath>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8A040  Trigger::cAction<Trigger::cActCameraDistance>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActCameraDistance>::vf00()
{
    return &DAT_01dbe570;
}

// 00C8A090  Trigger::cAction<Trigger::cActCameraDistance>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActCameraDistance>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8A0A0  Trigger::cAction<Trigger::cActCameraDistance>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActCameraDistance>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8A0B0  Trigger::cAction<Trigger::cActCameraDistance>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActCameraDistance> *Trigger::cAction<Trigger::cActCameraDistance>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8A0E0  Trigger::cAction<Trigger::cActCameraDistanceOff>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActCameraDistanceOff>::vf00()
{
    return &DAT_01dbe56c;
}

// 00C8A130  Trigger::cAction<Trigger::cActCameraDistanceOff>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActCameraDistanceOff>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8A140  Trigger::cAction<Trigger::cActCameraDistanceOff>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActCameraDistanceOff>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8A150  Trigger::cAction<Trigger::cActCameraDistanceOff>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActCameraDistanceOff> *Trigger::cAction<Trigger::cActCameraDistanceOff>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8A180  Trigger::cAction<Trigger::cActCameraFocus>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActCameraFocus>::vf00()
{
    return &DAT_01dbe568;
}

// 00C8A1D0  Trigger::cAction<Trigger::cActCameraFocus>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActCameraFocus>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8A1E0  Trigger::cAction<Trigger::cActCameraFocus>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActCameraFocus>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8A1F0  Trigger::cAction<Trigger::cActCameraFocus>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActCameraFocus> *Trigger::cAction<Trigger::cActCameraFocus>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8A220  Trigger::cAction<Trigger::cActCameraFocusOff>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActCameraFocusOff>::vf00()
{
    return &DAT_01dbe564;
}

// 00C8A270  Trigger::cAction<Trigger::cActCameraFocusOff>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActCameraFocusOff>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8A280  Trigger::cAction<Trigger::cActCameraFocusOff>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActCameraFocusOff>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8A290  Trigger::cAction<Trigger::cActCameraFocusOff>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActCameraFocusOff> *Trigger::cAction<Trigger::cActCameraFocusOff>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8A2C0  Trigger::cAction<Trigger::cActCameraAngle>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActCameraAngle>::vf00()
{
    return &DAT_01dbe560;
}

// 00C8A310  Trigger::cAction<Trigger::cActCameraAngle>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActCameraAngle>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8A320  Trigger::cAction<Trigger::cActCameraAngle>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActCameraAngle>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8A330  Trigger::cAction<Trigger::cActCameraAngle>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActCameraAngle> *Trigger::cAction<Trigger::cActCameraAngle>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8A360  Trigger::cAction<Trigger::cActCameraAngleOff>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActCameraAngleOff>::vf00()
{
    return &DAT_01dbe55c;
}

// 00C8A3B0  Trigger::cAction<Trigger::cActCameraAngleOff>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActCameraAngleOff>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8A3C0  Trigger::cAction<Trigger::cActCameraAngleOff>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActCameraAngleOff>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8A3D0  Trigger::cAction<Trigger::cActCameraAngleOff>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActCameraAngleOff> *Trigger::cAction<Trigger::cActCameraAngleOff>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8A400  Trigger::cAction<Trigger::cActPhaseSubphase>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActPhaseSubphase>::vf00()
{
    return &DAT_01dbe558;
}

// 00C8A450  Trigger::cAction<Trigger::cActPhaseSubphase>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActPhaseSubphase>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8A460  Trigger::cAction<Trigger::cActPhaseSubphase>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActPhaseSubphase>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8A470  Trigger::cAction<Trigger::cActPhaseSubphase>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActPhaseSubphase> *Trigger::cAction<Trigger::cActPhaseSubphase>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8A4A0  Trigger::cAction<Trigger::cActDoorClose>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActDoorClose>::vf00()
{
    return &DAT_01dbe554;
}

// 00C8A4F0  Trigger::cAction<Trigger::cActDoorClose>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActDoorClose>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8A500  Trigger::cAction<Trigger::cActDoorClose>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActDoorClose>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8A510  Trigger::cAction<Trigger::cActDoorClose>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActDoorClose> *Trigger::cAction<Trigger::cActDoorClose>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8A540  Trigger::cAction<Trigger::cActDebugMessage>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActDebugMessage>::vf00()
{
    return &DAT_01dbe550;
}

// 00C8A590  Trigger::cAction<Trigger::cActDebugMessage>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActDebugMessage>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8A5A0  Trigger::cAction<Trigger::cActDebugMessage>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActDebugMessage>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8A5B0  Trigger::cAction<Trigger::cActDebugMessage>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActDebugMessage> *Trigger::cAction<Trigger::cActDebugMessage>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8A5E0  Trigger::cAction<Trigger::cActStage>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActStage>::vf00()
{
    return &DAT_01dbe54c;
}

// 00C8A630  Trigger::cAction<Trigger::cActStage>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActStage>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8A640  Trigger::cAction<Trigger::cActStage>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActStage>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8A650  Trigger::cAction<Trigger::cActStage>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActStage> *Trigger::cAction<Trigger::cActStage>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8A680  Trigger::cAction<Trigger::cActSubstage>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActSubstage>::vf00()
{
    return &DAT_01dbe548;
}

// 00C8A6D0  Trigger::cAction<Trigger::cActSubstage>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActSubstage>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8A6E0  Trigger::cAction<Trigger::cActSubstage>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActSubstage>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8A6F0  Trigger::cAction<Trigger::cActSubstage>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActSubstage> *Trigger::cAction<Trigger::cActSubstage>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8A720  Trigger::cAction<Trigger::cActText>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActText>::vf00()
{
    return &DAT_01dbe544;
}

// 00C8A770  Trigger::cAction<Trigger::cActText>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActText>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8A780  Trigger::cAction<Trigger::cActText>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActText>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8A790  Trigger::cAction<Trigger::cActText>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActText> *Trigger::cAction<Trigger::cActText>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8A7C0  Trigger::cAction<Trigger::cActTextOut>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActTextOut>::vf00()
{
    return &DAT_01dbe540;
}

// 00C8A810  Trigger::cAction<Trigger::cActTextOut>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActTextOut>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8A820  Trigger::cAction<Trigger::cActTextOut>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActTextOut>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8A830  Trigger::cAction<Trigger::cActTextOut>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActTextOut> *Trigger::cAction<Trigger::cActTextOut>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8A8B0  Trigger::cAction<Trigger::cActFlagOn>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActFlagOn>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8A8C0  Trigger::cAction<Trigger::cActFlagOn>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActFlagOn>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8A8D0  Trigger::cAction<Trigger::cActFlagOn>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActFlagOn> *Trigger::cAction<Trigger::cActFlagOn>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8A950  Trigger::cAction<Trigger::cActFlagOff>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActFlagOff>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8A960  Trigger::cAction<Trigger::cActFlagOff>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActFlagOff>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8A970  Trigger::cAction<Trigger::cActFlagOff>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActFlagOff> *Trigger::cAction<Trigger::cActFlagOff>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8A9F0  Trigger::cAction<Trigger::cActLoadRoom>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActLoadRoom>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8AA00  Trigger::cAction<Trigger::cActLoadRoom>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActLoadRoom>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8AA10  Trigger::cAction<Trigger::cActLoadRoom>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActLoadRoom> *Trigger::cAction<Trigger::cActLoadRoom>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8AA90  Trigger::cAction<Trigger::cActUnloadRoom>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActUnloadRoom>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8AAA0  Trigger::cAction<Trigger::cActUnloadRoom>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActUnloadRoom>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8AAB0  Trigger::cAction<Trigger::cActUnloadRoom>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActUnloadRoom> *Trigger::cAction<Trigger::cActUnloadRoom>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8AAE0  Trigger::cAction<Trigger::cActMoveShounen>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActMoveShounen>::vf00()
{
    return &DAT_01dbe52c;
}

// 00C8AAF0  Trigger::cAction<Trigger::cActMoveShounen>::vf08  size=1  [class]
template <>
void Trigger::cAction<Trigger::cActMoveShounen>::vf08()
{
}

// 00C8AB00  Trigger::cAction<Trigger::cActMoveShounen>::vf0C  size=1  [class]
template <>
void Trigger::cAction<Trigger::cActMoveShounen>::vf0C()
{
}

// 00C8AB10  Trigger::cAction<Trigger::cActMoveShounen>::vf10  size=1  [class]
template <>
void Trigger::cAction<Trigger::cActMoveShounen>::vf10()
{
}

// 00C8AB20  Trigger::cAction<Trigger::cActMoveShounen>::vf14  size=1  [class]
template <>
void Trigger::cAction<Trigger::cActMoveShounen>::vf14()
{
}

// 00C8AB30  Trigger::cAction<Trigger::cActMoveShounen>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActMoveShounen>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8AB40  Trigger::cAction<Trigger::cActMoveShounen>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActMoveShounen>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8AB50  Trigger::cAction<Trigger::cActMoveShounen>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActMoveShounen> *Trigger::cAction<Trigger::cActMoveShounen>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8AB80  Trigger::cAction<Trigger::cActPosIndex>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActPosIndex>::vf00()
{
    return &DAT_01dbe528;
}

// 00C8ABD0  Trigger::cAction<Trigger::cActPosIndex>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActPosIndex>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8ABE0  Trigger::cAction<Trigger::cActPosIndex>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActPosIndex>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8ABF0  Trigger::cAction<Trigger::cActPosIndex>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActPosIndex> *Trigger::cAction<Trigger::cActPosIndex>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8AC20  Trigger::cAction<Trigger::cActEmMsg>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActEmMsg>::vf00()
{
    return &DAT_01dbe524;
}

// 00C8AC50  Trigger::cAction<Trigger::cActEmMsg>::vf10  size=1  [class]
template <>
void Trigger::cAction<Trigger::cActEmMsg>::vf10()
{
}

// 00C8AC70  Trigger::cAction<Trigger::cActEmMsg>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActEmMsg>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8AC80  Trigger::cAction<Trigger::cActEmMsg>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActEmMsg>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8AC90  Trigger::cAction<Trigger::cActEmMsg>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActEmMsg> *Trigger::cAction<Trigger::cActEmMsg>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8ACC0  Trigger::cAction<Trigger::cActScene>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActScene>::vf00()
{
    return &DAT_01dbe520;
}

// 00C8AD10  Trigger::cAction<Trigger::cActScene>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActScene>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8AD20  Trigger::cAction<Trigger::cActScene>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActScene>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8AD30  Trigger::cAction<Trigger::cActScene>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActScene> *Trigger::cAction<Trigger::cActScene>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8AD60  Trigger::cAction<Trigger::cActEmMsgDirect>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActEmMsgDirect>::vf00()
{
    return &DAT_01dbe51c;
}

// 00C8AD90  Trigger::cAction<Trigger::cActEmMsgDirect>::vf10  size=1  [class]
template <>
void Trigger::cAction<Trigger::cActEmMsgDirect>::vf10()
{
}

// 00C8ADB0  Trigger::cAction<Trigger::cActEmMsgDirect>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActEmMsgDirect>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8ADC0  Trigger::cAction<Trigger::cActEmMsgDirect>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActEmMsgDirect>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8ADD0  Trigger::cAction<Trigger::cActEmMsgDirect>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActEmMsgDirect> *Trigger::cAction<Trigger::cActEmMsgDirect>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8AE00  Trigger::cAction<Trigger::cActCollision>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActCollision>::vf00()
{
    return &DAT_01dbe518;
}

// 00C8AE50  Trigger::cAction<Trigger::cActCollision>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActCollision>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8AE60  Trigger::cAction<Trigger::cActCollision>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActCollision>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8AE70  Trigger::cAction<Trigger::cActCollision>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActCollision> *Trigger::cAction<Trigger::cActCollision>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8AEA0  Trigger::cAction<Trigger::cActBgm>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActBgm>::vf00()
{
    return &DAT_01dbe514;
}

// 00C8AEF0  Trigger::cAction<Trigger::cActBgm>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActBgm>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8AF00  Trigger::cAction<Trigger::cActBgm>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActBgm>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8AF10  Trigger::cAction<Trigger::cActBgm>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActBgm> *Trigger::cAction<Trigger::cActBgm>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8AF40  Trigger::cAction<Trigger::cActBgmSimple>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActBgmSimple>::vf00()
{
    return &DAT_01dbe510;
}

// 00C8AF90  Trigger::cAction<Trigger::cActBgmSimple>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActBgmSimple>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8AFA0  Trigger::cAction<Trigger::cActBgmSimple>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActBgmSimple>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8AFB0  Trigger::cAction<Trigger::cActBgmSimple>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActBgmSimple> *Trigger::cAction<Trigger::cActBgmSimple>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8AFE0  Trigger::cAction<Trigger::cActSESimple>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActSESimple>::vf00()
{
    return &DAT_01dbe50c;
}

// 00C8B030  Trigger::cAction<Trigger::cActSESimple>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActSESimple>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8B040  Trigger::cAction<Trigger::cActSESimple>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActSESimple>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8B050  Trigger::cAction<Trigger::cActSESimple>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActSESimple> *Trigger::cAction<Trigger::cActSESimple>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8B080  Trigger::cAction<Trigger::cActSound>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActSound>::vf00()
{
    return &DAT_01dbe508;
}

// 00C8B0D0  Trigger::cAction<Trigger::cActSound>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActSound>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8B0E0  Trigger::cAction<Trigger::cActSound>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActSound>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8B0F0  Trigger::cAction<Trigger::cActSound>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActSound> *Trigger::cAction<Trigger::cActSound>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8B120  Trigger::cAction<Trigger::cActCollisionOff>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActCollisionOff>::vf00()
{
    return &DAT_01dbe504;
}

// 00C8B170  Trigger::cAction<Trigger::cActCollisionOff>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActCollisionOff>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8B180  Trigger::cAction<Trigger::cActCollisionOff>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActCollisionOff>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8B190  Trigger::cAction<Trigger::cActCollisionOff>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActCollisionOff> *Trigger::cAction<Trigger::cActCollisionOff>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8B1C0  Trigger::cAction<Trigger::cActSeEntity>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActSeEntity>::vf00()
{
    return &DAT_01dbe500;
}

// 00C8B210  Trigger::cAction<Trigger::cActSeEntity>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActSeEntity>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8B220  Trigger::cAction<Trigger::cActSeEntity>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActSeEntity>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8B230  Trigger::cAction<Trigger::cActSeEntity>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActSeEntity> *Trigger::cAction<Trigger::cActSeEntity>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8B260  Trigger::cAction<Trigger::cActRoomEvent>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActRoomEvent>::vf00()
{
    return &DAT_01dbe4fc;
}

// 00C8B2B0  Trigger::cAction<Trigger::cActRoomEvent>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActRoomEvent>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8B2C0  Trigger::cAction<Trigger::cActRoomEvent>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActRoomEvent>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8B2D0  Trigger::cAction<Trigger::cActRoomEvent>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActRoomEvent> *Trigger::cAction<Trigger::cActRoomEvent>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8B300  Trigger::cAction<Trigger::cActEffectRoom>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActEffectRoom>::vf00()
{
    return &DAT_01dbe4f8;
}

// 00C8B350  Trigger::cAction<Trigger::cActEffectRoom>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActEffectRoom>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8B360  Trigger::cAction<Trigger::cActEffectRoom>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActEffectRoom>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8B370  Trigger::cAction<Trigger::cActEffectRoom>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActEffectRoom> *Trigger::cAction<Trigger::cActEffectRoom>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8B3A0  Trigger::cAction<Trigger::cActPlayerDie>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActPlayerDie>::vf00()
{
    return &DAT_01dbe4f4;
}

// per-action-type static descriptors returned by vf00
extern undefined DAT_01dbe4f0;
extern undefined DAT_01dbe4ec;
extern undefined DAT_01dbe4e8;
extern undefined DAT_01dbe4e4;
extern undefined DAT_01dbe4e0;
extern undefined DAT_01dbe4dc;
extern undefined DAT_01dbe4d8;
extern undefined DAT_01dbe4d4;
extern undefined DAT_01dbe4d0;
extern undefined DAT_01dbe4cc;
extern undefined DAT_01dbe4c8;
extern undefined DAT_01dbe4c4;
extern undefined DAT_01b375a8;
extern undefined DAT_01dbe4c0;
extern undefined DAT_01dbe4bc;
extern undefined DAT_01dbe4b8;
extern undefined DAT_01dbe4b4;
extern undefined DAT_01dbe4b0;
extern undefined DAT_01dbe4ac;
extern undefined DAT_01dbe4a8;
extern undefined DAT_01dbe4a4;
extern undefined DAT_01dbe4a0;
extern undefined DAT_01dbe49c;
extern undefined DAT_01dbe498;
extern undefined DAT_01dbe494;
extern undefined DAT_01dbe490;
extern undefined DAT_01dbe48c;
extern undefined DAT_01dbe488;
extern undefined DAT_01dbe484;
extern undefined DAT_01dbe470;
extern undefined DAT_01dbe46c;
extern undefined DAT_01dbe460;
extern undefined DAT_01dbe45c;
extern undefined DAT_01dbe458;
extern undefined DAT_01dbe454;
extern undefined DAT_01dbe450;
extern undefined DAT_01dbe448;
extern undefined DAT_01dbe444;
extern undefined DAT_01dbe438;
extern undefined DAT_01dbe434;
extern undefined DAT_01dbe430;
extern undefined DAT_01dbe42c;
extern undefined DAT_01dbe428;
extern undefined DAT_01dbe424;
extern undefined DAT_01dbe420;
extern undefined DAT_01dbe41c;
extern undefined DAT_01dbe418;
extern undefined DAT_01dbe414;

// 00C8B3F0  Trigger::cAction<Trigger::cActPlayerDie>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActPlayerDie>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8B400  Trigger::cAction<Trigger::cActPlayerDie>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActPlayerDie>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8B410  Trigger::cAction<Trigger::cActPlayerDie>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActPlayerDie> *Trigger::cAction<Trigger::cActPlayerDie>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8B440  Trigger::cAction<Trigger::cActEnemyMove>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActEnemyMove>::vf00()
{
    return &DAT_01dbe4f0;
}

// 00C8B490  Trigger::cAction<Trigger::cActEnemyMove>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActEnemyMove>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8B4A0  Trigger::cAction<Trigger::cActEnemyMove>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActEnemyMove>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8B4B0  Trigger::cAction<Trigger::cActEnemyMove>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActEnemyMove> *Trigger::cAction<Trigger::cActEnemyMove>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8B4E0  Trigger::cAction<Trigger::cActReqBehaviorInstruction>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActReqBehaviorInstruction>::vf00()
{
    return &DAT_01dbe4ec;
}

// 00C8B530  Trigger::cAction<Trigger::cActReqBehaviorInstruction>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActReqBehaviorInstruction>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8B540  Trigger::cAction<Trigger::cActReqBehaviorInstruction>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActReqBehaviorInstruction>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8B550  Trigger::cAction<Trigger::cActReqBehaviorInstruction>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActReqBehaviorInstruction> *Trigger::cAction<Trigger::cActReqBehaviorInstruction>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8B580  Trigger::cAction<Trigger::cActRaderMap>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActRaderMap>::vf00()
{
    return &DAT_01dbe4e8;
}

// 00C8B5D0  Trigger::cAction<Trigger::cActRaderMap>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActRaderMap>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8B5E0  Trigger::cAction<Trigger::cActRaderMap>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActRaderMap>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8B5F0  Trigger::cAction<Trigger::cActRaderMap>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActRaderMap> *Trigger::cAction<Trigger::cActRaderMap>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8B620  Trigger::cAction<Trigger::cActRadioInfoStart>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActRadioInfoStart>::vf00()
{
    return &DAT_01dbe4e4;
}

// 00C8B670  Trigger::cAction<Trigger::cActRadioInfoStart>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActRadioInfoStart>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8B680  Trigger::cAction<Trigger::cActRadioInfoStart>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActRadioInfoStart>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8B690  Trigger::cAction<Trigger::cActRadioInfoStart>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActRadioInfoStart> *Trigger::cAction<Trigger::cActRadioInfoStart>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8B6C0  Trigger::cAction<Trigger::cActRadioInfoEnd>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActRadioInfoEnd>::vf00()
{
    return &DAT_01dbe4e0;
}

// 00C8B710  Trigger::cAction<Trigger::cActRadioInfoEnd>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActRadioInfoEnd>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8B720  Trigger::cAction<Trigger::cActRadioInfoEnd>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActRadioInfoEnd>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8B730  Trigger::cAction<Trigger::cActRadioInfoEnd>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActRadioInfoEnd> *Trigger::cAction<Trigger::cActRadioInfoEnd>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8B760  Trigger::cAction<Trigger::cActConversationStart>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActConversationStart>::vf00()
{
    return &DAT_01dbe4dc;
}

// 00C8B7B0  Trigger::cAction<Trigger::cActConversationStart>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActConversationStart>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8B7C0  Trigger::cAction<Trigger::cActConversationStart>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActConversationStart>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8B7D0  Trigger::cAction<Trigger::cActConversationStart>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActConversationStart> *Trigger::cAction<Trigger::cActConversationStart>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8B800  Trigger::cAction<Trigger::cActConversationEnd>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActConversationEnd>::vf00()
{
    return &DAT_01dbe4d8;
}

// 00C8B850  Trigger::cAction<Trigger::cActConversationEnd>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActConversationEnd>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8B860  Trigger::cAction<Trigger::cActConversationEnd>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActConversationEnd>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8B870  Trigger::cAction<Trigger::cActConversationEnd>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActConversationEnd> *Trigger::cAction<Trigger::cActConversationEnd>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8B8A0  Trigger::cAction<Trigger::cActPathWayStart>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActPathWayStart>::vf00()
{
    return &DAT_01dbe4d4;
}

// 00C8B8F0  Trigger::cAction<Trigger::cActPathWayStart>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActPathWayStart>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8B900  Trigger::cAction<Trigger::cActPathWayStart>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActPathWayStart>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8B910  Trigger::cAction<Trigger::cActPathWayStart>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActPathWayStart> *Trigger::cAction<Trigger::cActPathWayStart>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8B940  Trigger::cAction<Trigger::cActPathWayEnd>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActPathWayEnd>::vf00()
{
    return &DAT_01dbe4d0;
}

// 00C8B990  Trigger::cAction<Trigger::cActPathWayEnd>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActPathWayEnd>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8B9A0  Trigger::cAction<Trigger::cActPathWayEnd>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActPathWayEnd>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8B9B0  Trigger::cAction<Trigger::cActPathWayEnd>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActPathWayEnd> *Trigger::cAction<Trigger::cActPathWayEnd>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8B9E0  Trigger::cAction<Trigger::cActTutorialStart>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActTutorialStart>::vf00()
{
    return &DAT_01dbe4cc;
}

// 00C8BA30  Trigger::cAction<Trigger::cActTutorialStart>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActTutorialStart>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8BA40  Trigger::cAction<Trigger::cActTutorialStart>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActTutorialStart>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8BA50  Trigger::cAction<Trigger::cActTutorialStart>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActTutorialStart> *Trigger::cAction<Trigger::cActTutorialStart>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8BA80  Trigger::cAction<Trigger::cActTutorialEnd>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActTutorialEnd>::vf00()
{
    return &DAT_01dbe4c8;
}

// 00C8BAD0  Trigger::cAction<Trigger::cActTutorialEnd>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActTutorialEnd>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8BAE0  Trigger::cAction<Trigger::cActTutorialEnd>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActTutorialEnd>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8BAF0  Trigger::cAction<Trigger::cActTutorialEnd>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActTutorialEnd> *Trigger::cAction<Trigger::cActTutorialEnd>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8BB20  Trigger::cAction<Trigger::cActAreaBarrierOff>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActAreaBarrierOff>::vf00()
{
    return &DAT_01dbe4c4;
}

// 00C8BB70  Trigger::cAction<Trigger::cActAreaBarrierOff>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActAreaBarrierOff>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8BB80  Trigger::cAction<Trigger::cActAreaBarrierOff>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActAreaBarrierOff>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8BB90  Trigger::cAction<Trigger::cActAreaBarrierOff>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActAreaBarrierOff> *Trigger::cAction<Trigger::cActAreaBarrierOff>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8BBC0  Trigger::cAction<Trigger::cActResultSetDisp>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActResultSetDisp>::vf00()
{
    return &DAT_01b375a8;
}

// 00C8BC10  Trigger::cAction<Trigger::cActResultSetDisp>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActResultSetDisp>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8BC20  Trigger::cAction<Trigger::cActResultSetDisp>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActResultSetDisp>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8BC30  Trigger::cAction<Trigger::cActResultSetDisp>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActResultSetDisp> *Trigger::cAction<Trigger::cActResultSetDisp>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8BC90  Trigger::cAction<Trigger::cActEmAnimation>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActEmAnimation>::vf00()
{
    return &DAT_01dbe4c0;
}

// 00C8BCE0  Trigger::cAction<Trigger::cActEmAnimation>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActEmAnimation>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8BCF0  Trigger::cAction<Trigger::cActEmAnimation>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActEmAnimation>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8BD00  Trigger::cAction<Trigger::cActEmAnimation>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActEmAnimation> *Trigger::cAction<Trigger::cActEmAnimation>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8BD30  Trigger::cAction<Trigger::cActPlAnimation>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActPlAnimation>::vf00()
{
    return &DAT_01dbe4bc;
}

// 00C8BD80  Trigger::cAction<Trigger::cActPlAnimation>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActPlAnimation>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8BD90  Trigger::cAction<Trigger::cActPlAnimation>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActPlAnimation>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8BDA0  Trigger::cAction<Trigger::cActPlAnimation>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActPlAnimation> *Trigger::cAction<Trigger::cActPlAnimation>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8BDD0  Trigger::cAction<Trigger::cActResultSetEndDisp>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActResultSetEndDisp>::vf00()
{
    return &DAT_01dbe4b8;
}

// 00C8BE20  Trigger::cAction<Trigger::cActResultSetEndDisp>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActResultSetEndDisp>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8BE30  Trigger::cAction<Trigger::cActResultSetEndDisp>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActResultSetEndDisp>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8BE40  Trigger::cAction<Trigger::cActResultSetEndDisp>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActResultSetEndDisp> *Trigger::cAction<Trigger::cActResultSetEndDisp>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8BE70  Trigger::cAction<Trigger::cActPlayerDeadDemo>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActPlayerDeadDemo>::vf00()
{
    return &DAT_01dbe4b4;
}

// 00C8BEC0  Trigger::cAction<Trigger::cActPlayerDeadDemo>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActPlayerDeadDemo>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8BED0  Trigger::cAction<Trigger::cActPlayerDeadDemo>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActPlayerDeadDemo>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8BEE0  Trigger::cAction<Trigger::cActPlayerDeadDemo>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActPlayerDeadDemo> *Trigger::cAction<Trigger::cActPlayerDeadDemo>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8BF10  Trigger::cAction<Trigger::cActHackEnd>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActHackEnd>::vf00()
{
    return &DAT_01dbe4b0;
}

// 00C8BF60  Trigger::cAction<Trigger::cActHackEnd>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActHackEnd>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8BF70  Trigger::cAction<Trigger::cActHackEnd>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActHackEnd>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8BF80  Trigger::cAction<Trigger::cActHackEnd>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActHackEnd> *Trigger::cAction<Trigger::cActHackEnd>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8BFB0  Trigger::cAction<Trigger::cActCamFlag>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActCamFlag>::vf00()
{
    return &DAT_01dbe4ac;
}

// 00C8C000  Trigger::cAction<Trigger::cActCamFlag>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActCamFlag>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8C010  Trigger::cAction<Trigger::cActCamFlag>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActCamFlag>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8C020  Trigger::cAction<Trigger::cActCamFlag>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActCamFlag> *Trigger::cAction<Trigger::cActCamFlag>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8C050  Trigger::cAction<Trigger::cActObjAttach>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActObjAttach>::vf00()
{
    return &DAT_01dbe4a8;
}

// 00C8C0A0  Trigger::cAction<Trigger::cActObjAttach>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActObjAttach>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8C0B0  Trigger::cAction<Trigger::cActObjAttach>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActObjAttach>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8C0C0  Trigger::cAction<Trigger::cActObjAttach>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActObjAttach> *Trigger::cAction<Trigger::cActObjAttach>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8C0F0  Trigger::cAction<Trigger::cActQTEButtonDisp>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActQTEButtonDisp>::vf00()
{
    return &DAT_01dbe4a4;
}

// 00C8C140  Trigger::cAction<Trigger::cActQTEButtonDisp>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActQTEButtonDisp>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8C150  Trigger::cAction<Trigger::cActQTEButtonDisp>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActQTEButtonDisp>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8C160  Trigger::cAction<Trigger::cActQTEButtonDisp>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActQTEButtonDisp> *Trigger::cAction<Trigger::cActQTEButtonDisp>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8C190  Trigger::cAction<Trigger::cActMoviePlay>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActMoviePlay>::vf00()
{
    return &DAT_01dbe4a0;
}

// 00C8C1E0  Trigger::cAction<Trigger::cActMoviePlay>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActMoviePlay>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8C1F0  Trigger::cAction<Trigger::cActMoviePlay>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActMoviePlay>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8C200  Trigger::cAction<Trigger::cActMoviePlay>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActMoviePlay> *Trigger::cAction<Trigger::cActMoviePlay>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8C230  Trigger::cAction<Trigger::cActForceBattleFlag>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActForceBattleFlag>::vf00()
{
    return &DAT_01dbe49c;
}

// 00C8C280  Trigger::cAction<Trigger::cActForceBattleFlag>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActForceBattleFlag>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8C290  Trigger::cAction<Trigger::cActForceBattleFlag>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActForceBattleFlag>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8C2A0  Trigger::cAction<Trigger::cActForceBattleFlag>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActForceBattleFlag> *Trigger::cAction<Trigger::cActForceBattleFlag>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8C2D0  Trigger::cAction<Trigger::cActGimmickEnable>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActGimmickEnable>::vf00()
{
    return &DAT_01dbe498;
}

// 00C8C320  Trigger::cAction<Trigger::cActGimmickEnable>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActGimmickEnable>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8C330  Trigger::cAction<Trigger::cActGimmickEnable>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActGimmickEnable>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8C340  Trigger::cAction<Trigger::cActGimmickEnable>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActGimmickEnable> *Trigger::cAction<Trigger::cActGimmickEnable>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8C370  Trigger::cAction<Trigger::cActFileRead>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActFileRead>::vf00()
{
    return &DAT_01dbe494;
}

// 00C8C3C0  Trigger::cAction<Trigger::cActFileRead>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActFileRead>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8C3D0  Trigger::cAction<Trigger::cActFileRead>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActFileRead>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8C3E0  Trigger::cAction<Trigger::cActFileRead>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActFileRead> *Trigger::cAction<Trigger::cActFileRead>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8C410  Trigger::cAction<Trigger::cActFileRelease>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActFileRelease>::vf00()
{
    return &DAT_01dbe490;
}

// 00C8C460  Trigger::cAction<Trigger::cActFileRelease>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActFileRelease>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8C470  Trigger::cAction<Trigger::cActFileRelease>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActFileRelease>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8C480  Trigger::cAction<Trigger::cActFileRelease>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActFileRelease> *Trigger::cAction<Trigger::cActFileRelease>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8C4B0  Trigger::cAction<Trigger::cActSceneMovie>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActSceneMovie>::vf00()
{
    return &DAT_01dbe48c;
}

// 00C8C500  Trigger::cAction<Trigger::cActSceneMovie>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActSceneMovie>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8C510  Trigger::cAction<Trigger::cActSceneMovie>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActSceneMovie>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8C520  Trigger::cAction<Trigger::cActSceneMovie>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActSceneMovie> *Trigger::cAction<Trigger::cActSceneMovie>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8C550  Trigger::cAction<Trigger::cActStopObjectType>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActStopObjectType>::vf00()
{
    return &DAT_01dbe488;
}

// 00C8C5A0  Trigger::cAction<Trigger::cActStopObjectType>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActStopObjectType>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8C5B0  Trigger::cAction<Trigger::cActStopObjectType>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActStopObjectType>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8C5C0  Trigger::cAction<Trigger::cActStopObjectType>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActStopObjectType> *Trigger::cAction<Trigger::cActStopObjectType>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8C5F0  Trigger::cAction<Trigger::cActMvObjectType>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActMvObjectType>::vf00()
{
    return &DAT_01dbe484;
}

// 00C8C640  Trigger::cAction<Trigger::cActMvObjectType>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActMvObjectType>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8C650  Trigger::cAction<Trigger::cActMvObjectType>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActMvObjectType>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8C660  Trigger::cAction<Trigger::cActMvObjectType>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActMvObjectType> *Trigger::cAction<Trigger::cActMvObjectType>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8C6A0  Trigger::cAction<Trigger::cActGameFlagOn>::vf08  size=1  [class]
template <>
void Trigger::cAction<Trigger::cActGameFlagOn>::vf08()
{
}

// 00C8C6E0  Trigger::cAction<Trigger::cActGameFlagOn>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActGameFlagOn>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8C6F0  Trigger::cAction<Trigger::cActGameFlagOn>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActGameFlagOn>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8C700  Trigger::cAction<Trigger::cActGameFlagOn>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActGameFlagOn> *Trigger::cAction<Trigger::cActGameFlagOn>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8C740  Trigger::cAction<Trigger::cActGameFlagOff>::vf08  size=1  [class]
template <>
void Trigger::cAction<Trigger::cActGameFlagOff>::vf08()
{
}

// 00C8C780  Trigger::cAction<Trigger::cActGameFlagOff>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActGameFlagOff>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8C790  Trigger::cAction<Trigger::cActGameFlagOff>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActGameFlagOff>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8C7A0  Trigger::cAction<Trigger::cActGameFlagOff>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActGameFlagOff> *Trigger::cAction<Trigger::cActGameFlagOff>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8C7E0  Trigger::cAction<Trigger::cActSendSignal>::vf08  size=1  [class]
template <>
void Trigger::cAction<Trigger::cActSendSignal>::vf08()
{
}

// 00C8C820  Trigger::cAction<Trigger::cActSendSignal>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActSendSignal>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8C830  Trigger::cAction<Trigger::cActSendSignal>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActSendSignal>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8C840  Trigger::cAction<Trigger::cActSendSignal>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActSendSignal> *Trigger::cAction<Trigger::cActSendSignal>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8C880  Trigger::cAction<Trigger::cActSendSignalContext>::vf08  size=1  [class]
template <>
void Trigger::cAction<Trigger::cActSendSignalContext>::vf08()
{
}

// 00C8C8C0  Trigger::cAction<Trigger::cActSendSignalContext>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActSendSignalContext>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8C8D0  Trigger::cAction<Trigger::cActSendSignalContext>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActSendSignalContext>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8C8E0  Trigger::cAction<Trigger::cActSendSignalContext>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActSendSignalContext> *Trigger::cAction<Trigger::cActSendSignalContext>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8C910  Trigger::cAction<Trigger::cActCodecStart>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActCodecStart>::vf00()
{
    return &DAT_01dbe470;
}

// 00C8C960  Trigger::cAction<Trigger::cActCodecStart>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActCodecStart>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8C970  Trigger::cAction<Trigger::cActCodecStart>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActCodecStart>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8C980  Trigger::cAction<Trigger::cActCodecStart>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActCodecStart> *Trigger::cAction<Trigger::cActCodecStart>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8C9B0  Trigger::cAction<Trigger::cActObjMeshTrans>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActObjMeshTrans>::vf00()
{
    return &DAT_01dbe46c;
}

// 00C8CA00  Trigger::cAction<Trigger::cActObjMeshTrans>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActObjMeshTrans>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8CA10  Trigger::cAction<Trigger::cActObjMeshTrans>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActObjMeshTrans>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8CA20  Trigger::cAction<Trigger::cActObjMeshTrans>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActObjMeshTrans> *Trigger::cAction<Trigger::cActObjMeshTrans>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8CA60  Trigger::cAction<Trigger::cActPlayerEffectOn>::vf08  size=1  [class]
template <>
void Trigger::cAction<Trigger::cActPlayerEffectOn>::vf08()
{
}

// 00C8CAA0  Trigger::cAction<Trigger::cActPlayerEffectOn>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActPlayerEffectOn>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8CAB0  Trigger::cAction<Trigger::cActPlayerEffectOn>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActPlayerEffectOn>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8CAC0  Trigger::cAction<Trigger::cActPlayerEffectOn>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActPlayerEffectOn> *Trigger::cAction<Trigger::cActPlayerEffectOn>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8CB00  Trigger::cAction<Trigger::cActPlayerEffectOff>::vf08  size=1  [class]
template <>
void Trigger::cAction<Trigger::cActPlayerEffectOff>::vf08()
{
}

// 00C8CB40  Trigger::cAction<Trigger::cActPlayerEffectOff>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActPlayerEffectOff>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8CB50  Trigger::cAction<Trigger::cActPlayerEffectOff>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActPlayerEffectOff>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8CB60  Trigger::cAction<Trigger::cActPlayerEffectOff>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActPlayerEffectOff> *Trigger::cAction<Trigger::cActPlayerEffectOff>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8CB90  Trigger::cAction<Trigger::cActQTEButtonDispOff>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActQTEButtonDispOff>::vf00()
{
    return &DAT_01dbe460;
}

// 00C8CBE0  Trigger::cAction<Trigger::cActQTEButtonDispOff>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActQTEButtonDispOff>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8CBF0  Trigger::cAction<Trigger::cActQTEButtonDispOff>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActQTEButtonDispOff>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8CC00  Trigger::cAction<Trigger::cActQTEButtonDispOff>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActQTEButtonDispOff> *Trigger::cAction<Trigger::cActQTEButtonDispOff>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8CC30  Trigger::cAction<Trigger::cActObjectivePosSet>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActObjectivePosSet>::vf00()
{
    return &DAT_01dbe45c;
}

// 00C8CC80  Trigger::cAction<Trigger::cActObjectivePosSet>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActObjectivePosSet>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8CC90  Trigger::cAction<Trigger::cActObjectivePosSet>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActObjectivePosSet>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8CCA0  Trigger::cAction<Trigger::cActObjectivePosSet>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActObjectivePosSet> *Trigger::cAction<Trigger::cActObjectivePosSet>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8CCD0  Trigger::cAction<Trigger::cActJammingDispStart>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActJammingDispStart>::vf00()
{
    return &DAT_01dbe458;
}

// 00C8CD20  Trigger::cAction<Trigger::cActJammingDispStart>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActJammingDispStart>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8CD30  Trigger::cAction<Trigger::cActJammingDispStart>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActJammingDispStart>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8CD40  Trigger::cAction<Trigger::cActJammingDispStart>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActJammingDispStart> *Trigger::cAction<Trigger::cActJammingDispStart>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8CD70  Trigger::cAction<Trigger::cActJammingDispEnd>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActJammingDispEnd>::vf00()
{
    return &DAT_01dbe454;
}

// 00C8CDC0  Trigger::cAction<Trigger::cActJammingDispEnd>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActJammingDispEnd>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8CDD0  Trigger::cAction<Trigger::cActJammingDispEnd>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActJammingDispEnd>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8CDE0  Trigger::cAction<Trigger::cActJammingDispEnd>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActJammingDispEnd> *Trigger::cAction<Trigger::cActJammingDispEnd>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8CE10  Trigger::cAction<Trigger::cActReqGpBehaviorInstruction>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActReqGpBehaviorInstruction>::vf00()
{
    return &DAT_01dbe450;
}

// 00C8CE60  Trigger::cAction<Trigger::cActReqGpBehaviorInstruction>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActReqGpBehaviorInstruction>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8CE70  Trigger::cAction<Trigger::cActReqGpBehaviorInstruction>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActReqGpBehaviorInstruction>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8CE80  Trigger::cAction<Trigger::cActReqGpBehaviorInstruction>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActReqGpBehaviorInstruction> *Trigger::cAction<Trigger::cActReqGpBehaviorInstruction>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8CEC0  Trigger::cAction<Trigger::cActStaFlagOff>::vf08  size=1  [class]
template <>
void Trigger::cAction<Trigger::cActStaFlagOff>::vf08()
{
}

// 00C8CF00  Trigger::cAction<Trigger::cActStaFlagOff>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActStaFlagOff>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8CF10  Trigger::cAction<Trigger::cActStaFlagOff>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActStaFlagOff>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8CF20  Trigger::cAction<Trigger::cActStaFlagOff>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActStaFlagOff> *Trigger::cAction<Trigger::cActStaFlagOff>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8CF50  Trigger::cAction<Trigger::cActUIAnimStart>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActUIAnimStart>::vf00()
{
    return &DAT_01dbe448;
}

// 00C8CFA0  Trigger::cAction<Trigger::cActUIAnimStart>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActUIAnimStart>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8CFB0  Trigger::cAction<Trigger::cActUIAnimStart>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActUIAnimStart>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8CFC0  Trigger::cAction<Trigger::cActUIAnimStart>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActUIAnimStart> *Trigger::cAction<Trigger::cActUIAnimStart>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8CFF0  Trigger::cAction<Trigger::cActSetNextCodec>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActSetNextCodec>::vf00()
{
    return &DAT_01dbe444;
}

// 00C8D040  Trigger::cAction<Trigger::cActSetNextCodec>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActSetNextCodec>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8D050  Trigger::cAction<Trigger::cActSetNextCodec>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActSetNextCodec>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8D060  Trigger::cAction<Trigger::cActSetNextCodec>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActSetNextCodec> *Trigger::cAction<Trigger::cActSetNextCodec>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8D0A0  Trigger::cAction<Trigger::cActStpFlagOff>::vf08  size=1  [class]
template <>
void Trigger::cAction<Trigger::cActStpFlagOff>::vf08()
{
}

// 00C8D0E0  Trigger::cAction<Trigger::cActStpFlagOff>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActStpFlagOff>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8D0F0  Trigger::cAction<Trigger::cActStpFlagOff>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActStpFlagOff>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8D100  Trigger::cAction<Trigger::cActStpFlagOff>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActStpFlagOff> *Trigger::cAction<Trigger::cActStpFlagOff>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8D140  Trigger::cAction<Trigger::cActStpFlagOn>::vf08  size=1  [class]
template <>
void Trigger::cAction<Trigger::cActStpFlagOn>::vf08()
{
}

// 00C8D180  Trigger::cAction<Trigger::cActStpFlagOn>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActStpFlagOn>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8D190  Trigger::cAction<Trigger::cActStpFlagOn>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActStpFlagOn>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8D1A0  Trigger::cAction<Trigger::cActStpFlagOn>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActStpFlagOn> *Trigger::cAction<Trigger::cActStpFlagOn>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8D1D0  Trigger::cAction<Trigger::cActSetUIAnimStartNone>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActSetUIAnimStartNone>::vf00()
{
    return &DAT_01dbe438;
}

// 00C8D220  Trigger::cAction<Trigger::cActSetUIAnimStartNone>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActSetUIAnimStartNone>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8D230  Trigger::cAction<Trigger::cActSetUIAnimStartNone>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActSetUIAnimStartNone>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8D240  Trigger::cAction<Trigger::cActSetUIAnimStartNone>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActSetUIAnimStartNone> *Trigger::cAction<Trigger::cActSetUIAnimStartNone>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8D270  Trigger::cAction<Trigger::cActSetGameoverNormalFlag>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActSetGameoverNormalFlag>::vf00()
{
    return &DAT_01dbe434;
}

// 00C8D2C0  Trigger::cAction<Trigger::cActSetGameoverNormalFlag>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActSetGameoverNormalFlag>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8D2D0  Trigger::cAction<Trigger::cActSetGameoverNormalFlag>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActSetGameoverNormalFlag>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8D2E0  Trigger::cAction<Trigger::cActSetGameoverNormalFlag>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActSetGameoverNormalFlag> *Trigger::cAction<Trigger::cActSetGameoverNormalFlag>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8D310  Trigger::cAction<Trigger::cActScrMeshOn>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActScrMeshOn>::vf00()
{
    return &DAT_01dbe430;
}

// 00C8D360  Trigger::cAction<Trigger::cActScrMeshOn>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActScrMeshOn>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8D370  Trigger::cAction<Trigger::cActScrMeshOn>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActScrMeshOn>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8D380  Trigger::cAction<Trigger::cActScrMeshOn>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActScrMeshOn> *Trigger::cAction<Trigger::cActScrMeshOn>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8D3B0  Trigger::cAction<Trigger::cActScrMeshOff>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActScrMeshOff>::vf00()
{
    return &DAT_01dbe42c;
}

// 00C8D400  Trigger::cAction<Trigger::cActScrMeshOff>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActScrMeshOff>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8D410  Trigger::cAction<Trigger::cActScrMeshOff>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActScrMeshOff>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8D420  Trigger::cAction<Trigger::cActScrMeshOff>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActScrMeshOff> *Trigger::cAction<Trigger::cActScrMeshOff>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8D450  Trigger::cAction<Trigger::cActVmPlay>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActVmPlay>::vf00()
{
    return &DAT_01dbe428;
}

// 00C8D4A0  Trigger::cAction<Trigger::cActVmPlay>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActVmPlay>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8D4B0  Trigger::cAction<Trigger::cActVmPlay>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActVmPlay>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8D4C0  Trigger::cAction<Trigger::cActVmPlay>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActVmPlay> *Trigger::cAction<Trigger::cActVmPlay>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8D4F0  Trigger::cAction<Trigger::cActItemGet>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActItemGet>::vf00()
{
    return &DAT_01dbe424;
}

// 00C8D540  Trigger::cAction<Trigger::cActItemGet>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActItemGet>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8D550  Trigger::cAction<Trigger::cActItemGet>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActItemGet>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8D560  Trigger::cAction<Trigger::cActItemGet>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActItemGet> *Trigger::cAction<Trigger::cActItemGet>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8D590  Trigger::cAction<Trigger::cActActionMessageStart>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActActionMessageStart>::vf00()
{
    return &DAT_01dbe420;
}

// 00C8D5E0  Trigger::cAction<Trigger::cActActionMessageStart>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActActionMessageStart>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8D5F0  Trigger::cAction<Trigger::cActActionMessageStart>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActActionMessageStart>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8D600  Trigger::cAction<Trigger::cActActionMessageStart>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActActionMessageStart> *Trigger::cAction<Trigger::cActActionMessageStart>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8D630  Trigger::cAction<Trigger::cActActionMessageFlagClear>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActActionMessageFlagClear>::vf00()
{
    return &DAT_01dbe41c;
}

// 00C8D680  Trigger::cAction<Trigger::cActActionMessageFlagClear>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActActionMessageFlagClear>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8D690  Trigger::cAction<Trigger::cActActionMessageFlagClear>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActActionMessageFlagClear>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8D6A0  Trigger::cAction<Trigger::cActActionMessageFlagClear>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActActionMessageFlagClear> *Trigger::cAction<Trigger::cActActionMessageFlagClear>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8D6D0  Trigger::cAction<Trigger::cActResultRecStart>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActResultRecStart>::vf00()
{
    return &DAT_01dbe418;
}

// 00C8D720  Trigger::cAction<Trigger::cActResultRecStart>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActResultRecStart>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8D730  Trigger::cAction<Trigger::cActResultRecStart>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActResultRecStart>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8D740  Trigger::cAction<Trigger::cActResultRecStart>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActResultRecStart> *Trigger::cAction<Trigger::cActResultRecStart>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8D770  Trigger::cAction<Trigger::cActResultRecEnd>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActResultRecEnd>::vf00()
{
    return &DAT_01dbe414;
}

// 00C8D7C0  Trigger::cAction<Trigger::cActResultRecEnd>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActResultRecEnd>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8D7D0  Trigger::cAction<Trigger::cActResultRecEnd>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActResultRecEnd>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// per-action-type static descriptors returned by vf00
extern undefined DAT_01dbe410;
extern undefined DAT_01dbe40c;
extern undefined DAT_01dbe408;
extern undefined DAT_01dbe404;
extern undefined DAT_01dbe400;
extern undefined DAT_01dbe3fc;
extern undefined DAT_01dbe3f8;
extern undefined DAT_01dbe3f4;
extern undefined DAT_01dbe3f0;
extern undefined DAT_01dbe3ec;
extern undefined DAT_01dbe3e8;
extern undefined DAT_01dbe3e4;
extern undefined DAT_01dbe3e0;
extern undefined DAT_01dbe3dc;
extern undefined DAT_01dbe3d8;
extern undefined DAT_01dbe3d4;
extern undefined DAT_01dbe3d0;
extern undefined DAT_01dbe3cc;
extern undefined DAT_01dbe3c8;
extern undefined DAT_01dbe3c4;
extern undefined DAT_01dbe3c0;
extern undefined DAT_01dbe3bc;
extern undefined DAT_01dbe3b8;
extern undefined DAT_01dbe3b4;
extern undefined DAT_01dbe3b0;
extern undefined DAT_01dbe3ac;
extern undefined DAT_01dbe3a8;
extern undefined DAT_01dbe3a4;
extern undefined DAT_01dbe3a0;
extern undefined DAT_01dbe39c;
extern undefined DAT_01dbe398;
extern undefined DAT_01dbe394;
extern undefined DAT_01dbe390;
extern undefined DAT_01dbe38c;
extern undefined DAT_01dbe388;
extern undefined DAT_01dbe384;
extern undefined DAT_01dbe37c;
extern undefined DAT_01dbe378;
extern undefined DAT_01dbe374;
extern undefined DAT_01dbe370;
extern undefined DAT_01dbe36c;
extern undefined DAT_01dbe368;
extern undefined DAT_01dbe364;
extern undefined DAT_01dbe360;
extern undefined DAT_01dbe35c;
extern undefined DAT_01dbe358;
extern undefined DAT_01dbe354;
extern undefined DAT_01dbe350;
extern undefined DAT_01dbe34c;
extern undefined DAT_01dbe348;
extern undefined DAT_01dbe344;
extern undefined DAT_01dbe340;
extern undefined DAT_01dbe33c;
extern undefined DAT_01dbe338;
extern undefined DAT_01dbe334;

// 00C8D7E0  Trigger::cAction<Trigger::cActResultRecEnd>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActResultRecEnd> *Trigger::cAction<Trigger::cActResultRecEnd>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8D810  Trigger::cAction<Trigger::cActScrCollisionOn>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActScrCollisionOn>::vf00()
{
    return &DAT_01dbe410;
}

// 00C8D860  Trigger::cAction<Trigger::cActScrCollisionOn>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActScrCollisionOn>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8D870  Trigger::cAction<Trigger::cActScrCollisionOn>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActScrCollisionOn>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8D880  Trigger::cAction<Trigger::cActScrCollisionOn>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActScrCollisionOn> *Trigger::cAction<Trigger::cActScrCollisionOn>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8D8B0  Trigger::cAction<Trigger::cActScrCollisionOff>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActScrCollisionOff>::vf00()
{
    return &DAT_01dbe40c;
}

// 00C8D900  Trigger::cAction<Trigger::cActScrCollisionOff>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActScrCollisionOff>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8D910  Trigger::cAction<Trigger::cActScrCollisionOff>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActScrCollisionOff>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8D920  Trigger::cAction<Trigger::cActScrCollisionOff>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActScrCollisionOff> *Trigger::cAction<Trigger::cActScrCollisionOff>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8D950  Trigger::cAction<Trigger::cActArray>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActArray>::vf00()
{
    return &DAT_01dbe408;
}

// 00C8D960  Trigger::cAction<Trigger::cActArray>::vf08  size=1  [class]
template <>
void Trigger::cAction<Trigger::cActArray>::vf08()
{
}

// 00C8D970  Trigger::cAction<Trigger::cActArray>::vf0C  size=1  [class]
template <>
void Trigger::cAction<Trigger::cActArray>::vf0C()
{
}

// 00C8D980  Trigger::cAction<Trigger::cActArray>::vf10  size=1  [class]
template <>
void Trigger::cAction<Trigger::cActArray>::vf10()
{
}

// 00C8D990  Trigger::cAction<Trigger::cActArray>::vf14  size=1  [class]
template <>
void Trigger::cAction<Trigger::cActArray>::vf14()
{
}

// 00C8D9A0  Trigger::cAction<Trigger::cActArray>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActArray>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8D9B0  Trigger::cAction<Trigger::cActArray>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActArray> *Trigger::cAction<Trigger::cActArray>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8D9E0  Trigger::cAction<Trigger::cActEffectRoomLoop>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActEffectRoomLoop>::vf00()
{
    return &DAT_01dbe404;
}

// 00C8DA30  Trigger::cAction<Trigger::cActEffectRoomLoop>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActEffectRoomLoop>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8DA40  Trigger::cAction<Trigger::cActEffectRoomLoop>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActEffectRoomLoop>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8DA50  Trigger::cAction<Trigger::cActEffectRoomLoop>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActEffectRoomLoop> *Trigger::cAction<Trigger::cActEffectRoomLoop>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8DA80  Trigger::cAction<Trigger::cActEffectRoomLoopOff>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActEffectRoomLoopOff>::vf00()
{
    return &DAT_01dbe400;
}

// 00C8DAD0  Trigger::cAction<Trigger::cActEffectRoomLoopOff>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActEffectRoomLoopOff>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8DAE0  Trigger::cAction<Trigger::cActEffectRoomLoopOff>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActEffectRoomLoopOff>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8DAF0  Trigger::cAction<Trigger::cActEffectRoomLoopOff>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActEffectRoomLoopOff> *Trigger::cAction<Trigger::cActEffectRoomLoopOff>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8DB20  Trigger::cAction<Trigger::cActMesDispOffSkip>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActMesDispOffSkip>::vf00()
{
    return &DAT_01dbe3fc;
}

// 00C8DB70  Trigger::cAction<Trigger::cActMesDispOffSkip>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActMesDispOffSkip>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8DB80  Trigger::cAction<Trigger::cActMesDispOffSkip>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActMesDispOffSkip>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8DB90  Trigger::cAction<Trigger::cActMesDispOffSkip>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActMesDispOffSkip> *Trigger::cAction<Trigger::cActMesDispOffSkip>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8DBC0  Trigger::cAction<Trigger::cActEmMsgDirectByNumber>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActEmMsgDirectByNumber>::vf00()
{
    return &DAT_01dbe3f8;
}

// 00C8DBF0  Trigger::cAction<Trigger::cActEmMsgDirectByNumber>::vf10  size=1  [class]
template <>
void Trigger::cAction<Trigger::cActEmMsgDirectByNumber>::vf10()
{
}

// 00C8DC10  Trigger::cAction<Trigger::cActEmMsgDirectByNumber>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActEmMsgDirectByNumber>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8DC20  Trigger::cAction<Trigger::cActEmMsgDirectByNumber>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActEmMsgDirectByNumber>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8DC30  Trigger::cAction<Trigger::cActEmMsgDirectByNumber>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActEmMsgDirectByNumber> *Trigger::cAction<Trigger::cActEmMsgDirectByNumber>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8DC60  Trigger::cAction<Trigger::cActCodecEnd>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActCodecEnd>::vf00()
{
    return &DAT_01dbe3f4;
}

// 00C8DCB0  Trigger::cAction<Trigger::cActCodecEnd>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActCodecEnd>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8DCC0  Trigger::cAction<Trigger::cActCodecEnd>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActCodecEnd>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8DCD0  Trigger::cAction<Trigger::cActCodecEnd>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActCodecEnd> *Trigger::cAction<Trigger::cActCodecEnd>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8DD00  Trigger::cAction<Trigger::cActAntiqScrMove>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActAntiqScrMove>::vf00()
{
    return &DAT_01dbe3f0;
}

// 00C8DD50  Trigger::cAction<Trigger::cActAntiqScrMove>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActAntiqScrMove>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8DD60  Trigger::cAction<Trigger::cActAntiqScrMove>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActAntiqScrMove>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8DD70  Trigger::cAction<Trigger::cActAntiqScrMove>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActAntiqScrMove> *Trigger::cAction<Trigger::cActAntiqScrMove>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8DDA0  Trigger::cAction<Trigger::cActAntiqScrReqEnd>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActAntiqScrReqEnd>::vf00()
{
    return &DAT_01dbe3ec;
}

// 00C8DDF0  Trigger::cAction<Trigger::cActAntiqScrReqEnd>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActAntiqScrReqEnd>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8DE00  Trigger::cAction<Trigger::cActAntiqScrReqEnd>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActAntiqScrReqEnd>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8DE10  Trigger::cAction<Trigger::cActAntiqScrReqEnd>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActAntiqScrReqEnd> *Trigger::cAction<Trigger::cActAntiqScrReqEnd>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8DE40  Trigger::cAction<Trigger::cActBattleAreaOn>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActBattleAreaOn>::vf00()
{
    return &DAT_01dbe3e8;
}

// 00C8DE90  Trigger::cAction<Trigger::cActBattleAreaOn>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActBattleAreaOn>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8DEA0  Trigger::cAction<Trigger::cActBattleAreaOn>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActBattleAreaOn>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8DEB0  Trigger::cAction<Trigger::cActBattleAreaOn>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActBattleAreaOn> *Trigger::cAction<Trigger::cActBattleAreaOn>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8DEE0  Trigger::cAction<Trigger::cActBattleAreaOff>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActBattleAreaOff>::vf00()
{
    return &DAT_01dbe3e4;
}

// 00C8DF30  Trigger::cAction<Trigger::cActBattleAreaOff>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActBattleAreaOff>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8DF40  Trigger::cAction<Trigger::cActBattleAreaOff>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActBattleAreaOff>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8DF50  Trigger::cAction<Trigger::cActBattleAreaOff>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActBattleAreaOff> *Trigger::cAction<Trigger::cActBattleAreaOff>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8DF80  Trigger::cAction<Trigger::cActReqShotMissile>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActReqShotMissile>::vf00()
{
    return &DAT_01dbe3e0;
}

// 00C8DFD0  Trigger::cAction<Trigger::cActReqShotMissile>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActReqShotMissile>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8DFE0  Trigger::cAction<Trigger::cActReqShotMissile>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActReqShotMissile>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8DFF0  Trigger::cAction<Trigger::cActReqShotMissile>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActReqShotMissile> *Trigger::cAction<Trigger::cActReqShotMissile>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8E020  Trigger::cAction<Trigger::cActEmAnimationByNumber>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActEmAnimationByNumber>::vf00()
{
    return &DAT_01dbe3dc;
}

// 00C8E070  Trigger::cAction<Trigger::cActEmAnimationByNumber>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActEmAnimationByNumber>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8E080  Trigger::cAction<Trigger::cActEmAnimationByNumber>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActEmAnimationByNumber>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8E090  Trigger::cAction<Trigger::cActEmAnimationByNumber>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActEmAnimationByNumber> *Trigger::cAction<Trigger::cActEmAnimationByNumber>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8E0C0  Trigger::cAction<Trigger::cActObjectDisp>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActObjectDisp>::vf00()
{
    return &DAT_01dbe3d8;
}

// 00C8E110  Trigger::cAction<Trigger::cActObjectDisp>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActObjectDisp>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8E120  Trigger::cAction<Trigger::cActObjectDisp>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActObjectDisp>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8E130  Trigger::cAction<Trigger::cActObjectDisp>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActObjectDisp> *Trigger::cAction<Trigger::cActObjectDisp>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8E160  Trigger::cAction<Trigger::cActDoorLock>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActDoorLock>::vf00()
{
    return &DAT_01dbe3d4;
}

// 00C8E1B0  Trigger::cAction<Trigger::cActDoorLock>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActDoorLock>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8E1C0  Trigger::cAction<Trigger::cActDoorLock>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActDoorLock>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8E1D0  Trigger::cAction<Trigger::cActDoorLock>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActDoorLock> *Trigger::cAction<Trigger::cActDoorLock>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8E200  Trigger::cAction<Trigger::cActObjectCollision>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActObjectCollision>::vf00()
{
    return &DAT_01dbe3d0;
}

// 00C8E250  Trigger::cAction<Trigger::cActObjectCollision>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActObjectCollision>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8E260  Trigger::cAction<Trigger::cActObjectCollision>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActObjectCollision>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8E270  Trigger::cAction<Trigger::cActObjectCollision>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActObjectCollision> *Trigger::cAction<Trigger::cActObjectCollision>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8E2A0  Trigger::cAction<Trigger::cActVrComplete>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActVrComplete>::vf00()
{
    return &DAT_01dbe3cc;
}

// 00C8E2F0  Trigger::cAction<Trigger::cActVrComplete>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActVrComplete>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8E300  Trigger::cAction<Trigger::cActVrComplete>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActVrComplete>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8E310  Trigger::cAction<Trigger::cActVrComplete>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActVrComplete> *Trigger::cAction<Trigger::cActVrComplete>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8E340  Trigger::cAction<Trigger::cActVrMistake>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActVrMistake>::vf00()
{
    return &DAT_01dbe3c8;
}

// 00C8E390  Trigger::cAction<Trigger::cActVrMistake>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActVrMistake>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8E3A0  Trigger::cAction<Trigger::cActVrMistake>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActVrMistake>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8E3B0  Trigger::cAction<Trigger::cActVrMistake>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActVrMistake> *Trigger::cAction<Trigger::cActVrMistake>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8E3E0  Trigger::cAction<Trigger::cActGimmickFinish>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActGimmickFinish>::vf00()
{
    return &DAT_01dbe3c4;
}

// 00C8E430  Trigger::cAction<Trigger::cActGimmickFinish>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActGimmickFinish>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8E440  Trigger::cAction<Trigger::cActGimmickFinish>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActGimmickFinish>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8E450  Trigger::cAction<Trigger::cActGimmickFinish>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActGimmickFinish> *Trigger::cAction<Trigger::cActGimmickFinish>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8E480  Trigger::cAction<Trigger::cActGimmickRevert>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActGimmickRevert>::vf00()
{
    return &DAT_01dbe3c0;
}

// 00C8E4D0  Trigger::cAction<Trigger::cActGimmickRevert>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActGimmickRevert>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8E4E0  Trigger::cAction<Trigger::cActGimmickRevert>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActGimmickRevert>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8E4F0  Trigger::cAction<Trigger::cActGimmickRevert>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActGimmickRevert> *Trigger::cAction<Trigger::cActGimmickRevert>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8E520  Trigger::cAction<Trigger::cActEnemyHide>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActEnemyHide>::vf00()
{
    return &DAT_01dbe3bc;
}

// 00C8E570  Trigger::cAction<Trigger::cActEnemyHide>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActEnemyHide>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8E580  Trigger::cAction<Trigger::cActEnemyHide>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActEnemyHide>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8E590  Trigger::cAction<Trigger::cActEnemyHide>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActEnemyHide> *Trigger::cAction<Trigger::cActEnemyHide>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8E5C0  Trigger::cAction<Trigger::cActEnemyAppear>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActEnemyAppear>::vf00()
{
    return &DAT_01dbe3b8;
}

// 00C8E610  Trigger::cAction<Trigger::cActEnemyAppear>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActEnemyAppear>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8E620  Trigger::cAction<Trigger::cActEnemyAppear>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActEnemyAppear>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8E630  Trigger::cAction<Trigger::cActEnemyAppear>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActEnemyAppear> *Trigger::cAction<Trigger::cActEnemyAppear>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8E660  Trigger::cAction<Trigger::cActGimmickRevivalCancel>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActGimmickRevivalCancel>::vf00()
{
    return &DAT_01dbe3b4;
}

// 00C8E6B0  Trigger::cAction<Trigger::cActGimmickRevivalCancel>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActGimmickRevivalCancel>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8E6C0  Trigger::cAction<Trigger::cActGimmickRevivalCancel>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActGimmickRevivalCancel>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8E6D0  Trigger::cAction<Trigger::cActGimmickRevivalCancel>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActGimmickRevivalCancel> *Trigger::cAction<Trigger::cActGimmickRevivalCancel>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8E700  Trigger::cAction<Trigger::cActEffectOff>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActEffectOff>::vf00()
{
    return &DAT_01dbe3b0;
}

// 00C8E750  Trigger::cAction<Trigger::cActEffectOff>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActEffectOff>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8E760  Trigger::cAction<Trigger::cActEffectOff>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActEffectOff>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8E770  Trigger::cAction<Trigger::cActEffectOff>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActEffectOff> *Trigger::cAction<Trigger::cActEffectOff>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8E7A0  Trigger::cAction<Trigger::cActCodecEndAll>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActCodecEndAll>::vf00()
{
    return &DAT_01dbe3ac;
}

// 00C8E7F0  Trigger::cAction<Trigger::cActCodecEndAll>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActCodecEndAll>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8E800  Trigger::cAction<Trigger::cActCodecEndAll>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActCodecEndAll>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8E810  Trigger::cAction<Trigger::cActCodecEndAll>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActCodecEndAll> *Trigger::cAction<Trigger::cActCodecEndAll>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8E840  Trigger::cAction<Trigger::cActVrGoalPoint>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActVrGoalPoint>::vf00()
{
    return &DAT_01dbe3a8;
}

// 00C8E890  Trigger::cAction<Trigger::cActVrGoalPoint>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActVrGoalPoint>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8E8A0  Trigger::cAction<Trigger::cActVrGoalPoint>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActVrGoalPoint>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8E8B0  Trigger::cAction<Trigger::cActVrGoalPoint>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActVrGoalPoint> *Trigger::cAction<Trigger::cActVrGoalPoint>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8E8E0  Trigger::cAction<Trigger::cActFade>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActFade>::vf00()
{
    return &DAT_01dbe3a4;
}

// 00C8E930  Trigger::cAction<Trigger::cActFade>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActFade>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8E940  Trigger::cAction<Trigger::cActFade>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActFade>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8E950  Trigger::cAction<Trigger::cActFade>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActFade> *Trigger::cAction<Trigger::cActFade>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8E980  Trigger::cAction<Trigger::cActScrMeshOnAll>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActScrMeshOnAll>::vf00()
{
    return &DAT_01dbe3a0;
}

// 00C8E9D0  Trigger::cAction<Trigger::cActScrMeshOnAll>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActScrMeshOnAll>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8E9E0  Trigger::cAction<Trigger::cActScrMeshOnAll>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActScrMeshOnAll>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8E9F0  Trigger::cAction<Trigger::cActScrMeshOnAll>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActScrMeshOnAll> *Trigger::cAction<Trigger::cActScrMeshOnAll>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8EA20  Trigger::cAction<Trigger::cActScrMeshOffAll>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActScrMeshOffAll>::vf00()
{
    return &DAT_01dbe39c;
}

// 00C8EA70  Trigger::cAction<Trigger::cActScrMeshOffAll>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActScrMeshOffAll>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8EA80  Trigger::cAction<Trigger::cActScrMeshOffAll>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActScrMeshOffAll>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8EA90  Trigger::cAction<Trigger::cActScrMeshOffAll>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActScrMeshOffAll> *Trigger::cAction<Trigger::cActScrMeshOffAll>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8EAC0  Trigger::cAction<Trigger::cActDoorDispOn>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActDoorDispOn>::vf00()
{
    return &DAT_01dbe398;
}

// 00C8EB10  Trigger::cAction<Trigger::cActDoorDispOn>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActDoorDispOn>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8EB20  Trigger::cAction<Trigger::cActDoorDispOn>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActDoorDispOn>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8EB30  Trigger::cAction<Trigger::cActDoorDispOn>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActDoorDispOn> *Trigger::cAction<Trigger::cActDoorDispOn>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8EB60  Trigger::cAction<Trigger::cActDoorDispOff>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActDoorDispOff>::vf00()
{
    return &DAT_01dbe394;
}

// 00C8EBB0  Trigger::cAction<Trigger::cActDoorDispOff>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActDoorDispOff>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8EBC0  Trigger::cAction<Trigger::cActDoorDispOff>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActDoorDispOff>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8EBD0  Trigger::cAction<Trigger::cActDoorDispOff>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActDoorDispOff> *Trigger::cAction<Trigger::cActDoorDispOff>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8EC00  Trigger::cAction<Trigger::cActAddExp>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActAddExp>::vf00()
{
    return &DAT_01dbe390;
}

// 00C8EC50  Trigger::cAction<Trigger::cActAddExp>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActAddExp>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8EC60  Trigger::cAction<Trigger::cActAddExp>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActAddExp>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8EC70  Trigger::cAction<Trigger::cActAddExp>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActAddExp> *Trigger::cAction<Trigger::cActAddExp>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8ECA0  Trigger::cAction<Trigger::cActCodecStartForSkip>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActCodecStartForSkip>::vf00()
{
    return &DAT_01dbe38c;
}

// 00C8ECF0  Trigger::cAction<Trigger::cActCodecStartForSkip>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActCodecStartForSkip>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8ED00  Trigger::cAction<Trigger::cActCodecStartForSkip>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActCodecStartForSkip>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8ED10  Trigger::cAction<Trigger::cActCodecStartForSkip>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActCodecStartForSkip> *Trigger::cAction<Trigger::cActCodecStartForSkip>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8ED40  Trigger::cAction<Trigger::cActItemDelInstallation>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActItemDelInstallation>::vf00()
{
    return &DAT_01dbe388;
}

// 00C8ED90  Trigger::cAction<Trigger::cActItemDelInstallation>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActItemDelInstallation>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8EDA0  Trigger::cAction<Trigger::cActItemDelInstallation>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActItemDelInstallation>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8EDB0  Trigger::cAction<Trigger::cActItemDelInstallation>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActItemDelInstallation> *Trigger::cAction<Trigger::cActItemDelInstallation>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8EDE0  Trigger::cAction<Trigger::cActItemDelDropAll>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActItemDelDropAll>::vf00()
{
    return &DAT_01dbe384;
}

// 00C8EE30  Trigger::cAction<Trigger::cActItemDelDropAll>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActItemDelDropAll>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8EE40  Trigger::cAction<Trigger::cActItemDelDropAll>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActItemDelDropAll>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8EE50  Trigger::cAction<Trigger::cActItemDelDropAll>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActItemDelDropAll> *Trigger::cAction<Trigger::cActItemDelDropAll>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8EED0  Trigger::cAction<Trigger::cActGenericFlag>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActGenericFlag>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8EEE0  Trigger::cAction<Trigger::cActGenericFlag>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActGenericFlag>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8EEF0  Trigger::cAction<Trigger::cActGenericFlag>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActGenericFlag> *Trigger::cAction<Trigger::cActGenericFlag>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8EF20  Trigger::cAction<Trigger::cActEnemyAppearResetPosByNumber>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActEnemyAppearResetPosByNumber>::vf00()
{
    return &DAT_01dbe37c;
}

// 00C8EF70  Trigger::cAction<Trigger::cActEnemyAppearResetPosByNumber>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActEnemyAppearResetPosByNumber>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8EF80  Trigger::cAction<Trigger::cActEnemyAppearResetPosByNumber>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActEnemyAppearResetPosByNumber>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8EF90  Trigger::cAction<Trigger::cActEnemyAppearResetPosByNumber>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActEnemyAppearResetPosByNumber> *Trigger::cAction<Trigger::cActEnemyAppearResetPosByNumber>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8EFC0  Trigger::cAction<Trigger::cActEnemyGroupAppearResetPosByNumber>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActEnemyGroupAppearResetPosByNumber>::vf00()
{
    return &DAT_01dbe378;
}

// 00C8F010  Trigger::cAction<Trigger::cActEnemyGroupAppearResetPosByNumber>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActEnemyGroupAppearResetPosByNumber>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8F020  Trigger::cAction<Trigger::cActEnemyGroupAppearResetPosByNumber>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActEnemyGroupAppearResetPosByNumber>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8F030  Trigger::cAction<Trigger::cActEnemyGroupAppearResetPosByNumber>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActEnemyGroupAppearResetPosByNumber> *Trigger::cAction<Trigger::cActEnemyGroupAppearResetPosByNumber>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8F060  Trigger::cAction<Trigger::cActEnemyDestroyByNumber>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActEnemyDestroyByNumber>::vf00()
{
    return &DAT_01dbe374;
}

// 00C8F0B0  Trigger::cAction<Trigger::cActEnemyDestroyByNumber>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActEnemyDestroyByNumber>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8F0C0  Trigger::cAction<Trigger::cActEnemyDestroyByNumber>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActEnemyDestroyByNumber>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8F0D0  Trigger::cAction<Trigger::cActEnemyDestroyByNumber>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActEnemyDestroyByNumber> *Trigger::cAction<Trigger::cActEnemyDestroyByNumber>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8F100  Trigger::cAction<Trigger::cActReqVrStart>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActReqVrStart>::vf00()
{
    return &DAT_01dbe370;
}

// 00C8F150  Trigger::cAction<Trigger::cActReqVrStart>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActReqVrStart>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8F160  Trigger::cAction<Trigger::cActReqVrStart>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActReqVrStart>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8F170  Trigger::cAction<Trigger::cActReqVrStart>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActReqVrStart> *Trigger::cAction<Trigger::cActReqVrStart>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8F1A0  Trigger::cAction<Trigger::cActPlayerMaxHp>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActPlayerMaxHp>::vf00()
{
    return &DAT_01dbe36c;
}

// 00C8F1F0  Trigger::cAction<Trigger::cActPlayerMaxHp>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActPlayerMaxHp>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8F200  Trigger::cAction<Trigger::cActPlayerMaxHp>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActPlayerMaxHp>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8F210  Trigger::cAction<Trigger::cActPlayerMaxHp>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActPlayerMaxHp> *Trigger::cAction<Trigger::cActPlayerMaxHp>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8F240  Trigger::cAction<Trigger::cActPlayerMaxDryCell>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActPlayerMaxDryCell>::vf00()
{
    return &DAT_01dbe368;
}

// 00C8F290  Trigger::cAction<Trigger::cActPlayerMaxDryCell>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActPlayerMaxDryCell>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8F2A0  Trigger::cAction<Trigger::cActPlayerMaxDryCell>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActPlayerMaxDryCell>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8F2B0  Trigger::cAction<Trigger::cActPlayerMaxDryCell>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActPlayerMaxDryCell> *Trigger::cAction<Trigger::cActPlayerMaxDryCell>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8F2E0  Trigger::cAction<Trigger::cActSeObject>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActSeObject>::vf00()
{
    return &DAT_01dbe364;
}

// 00C8F330  Trigger::cAction<Trigger::cActSeObject>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActSeObject>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8F340  Trigger::cAction<Trigger::cActSeObject>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActSeObject>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8F350  Trigger::cAction<Trigger::cActSeObject>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActSeObject> *Trigger::cAction<Trigger::cActSeObject>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8F380  Trigger::cAction<Trigger::cActItemOnOff>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActItemOnOff>::vf00()
{
    return &DAT_01dbe360;
}

// 00C8F3D0  Trigger::cAction<Trigger::cActItemOnOff>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActItemOnOff>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8F3E0  Trigger::cAction<Trigger::cActItemOnOff>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActItemOnOff>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8F3F0  Trigger::cAction<Trigger::cActItemOnOff>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActItemOnOff> *Trigger::cAction<Trigger::cActItemOnOff>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8F420  Trigger::cAction<Trigger::cActNoCodecMenu>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActNoCodecMenu>::vf00()
{
    return &DAT_01dbe35c;
}

// 00C8F470  Trigger::cAction<Trigger::cActNoCodecMenu>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActNoCodecMenu>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8F480  Trigger::cAction<Trigger::cActNoCodecMenu>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActNoCodecMenu>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8F490  Trigger::cAction<Trigger::cActNoCodecMenu>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActNoCodecMenu> *Trigger::cAction<Trigger::cActNoCodecMenu>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8F4C0  Trigger::cAction<Trigger::cActVrTimerStop>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActVrTimerStop>::vf00()
{
    return &DAT_01dbe358;
}

// 00C8F510  Trigger::cAction<Trigger::cActVrTimerStop>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActVrTimerStop>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8F520  Trigger::cAction<Trigger::cActVrTimerStop>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActVrTimerStop>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8F530  Trigger::cAction<Trigger::cActVrTimerStop>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActVrTimerStop> *Trigger::cAction<Trigger::cActVrTimerStop>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8F560  Trigger::cAction<Trigger::cActCamFocusLock>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActCamFocusLock>::vf00()
{
    return &DAT_01dbe354;
}

// 00C8F5B0  Trigger::cAction<Trigger::cActCamFocusLock>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActCamFocusLock>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8F5C0  Trigger::cAction<Trigger::cActCamFocusLock>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActCamFocusLock>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8F5D0  Trigger::cAction<Trigger::cActCamFocusLock>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActCamFocusLock> *Trigger::cAction<Trigger::cActCamFocusLock>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8F600  Trigger::cAction<Trigger::cActCamFocusLockOff>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActCamFocusLockOff>::vf00()
{
    return &DAT_01dbe350;
}

// 00C8F650  Trigger::cAction<Trigger::cActCamFocusLockOff>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActCamFocusLockOff>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8F660  Trigger::cAction<Trigger::cActCamFocusLockOff>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActCamFocusLockOff>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8F670  Trigger::cAction<Trigger::cActCamFocusLockOff>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActCamFocusLockOff> *Trigger::cAction<Trigger::cActCamFocusLockOff>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8F6A0  Trigger::cAction<Trigger::cActVrReturn>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActVrReturn>::vf00()
{
    return &DAT_01dbe34c;
}

// 00C8F6F0  Trigger::cAction<Trigger::cActVrReturn>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActVrReturn>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8F700  Trigger::cAction<Trigger::cActVrReturn>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActVrReturn>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8F710  Trigger::cAction<Trigger::cActVrReturn>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActVrReturn> *Trigger::cAction<Trigger::cActVrReturn>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8F740  Trigger::cAction<Trigger::cActPlKgkPos>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActPlKgkPos>::vf00()
{
    return &DAT_01dbe348;
}

// 00C8F790  Trigger::cAction<Trigger::cActPlKgkPos>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActPlKgkPos>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8F7A0  Trigger::cAction<Trigger::cActPlKgkPos>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActPlKgkPos>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8F7B0  Trigger::cAction<Trigger::cActPlKgkPos>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActPlKgkPos> *Trigger::cAction<Trigger::cActPlKgkPos>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8F7E0  Trigger::cAction<Trigger::cActVrBm6000On>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActVrBm6000On>::vf00()
{
    return &DAT_01dbe344;
}

// 00C8F830  Trigger::cAction<Trigger::cActVrBm6000On>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActVrBm6000On>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8F840  Trigger::cAction<Trigger::cActVrBm6000On>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActVrBm6000On>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8F850  Trigger::cAction<Trigger::cActVrBm6000On>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActVrBm6000On> *Trigger::cAction<Trigger::cActVrBm6000On>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8F880  Trigger::cAction<Trigger::cActVrBm6000Off>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActVrBm6000Off>::vf00()
{
    return &DAT_01dbe340;
}

// 00C8F8D0  Trigger::cAction<Trigger::cActVrBm6000Off>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActVrBm6000Off>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8F8E0  Trigger::cAction<Trigger::cActVrBm6000Off>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActVrBm6000Off>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8F8F0  Trigger::cAction<Trigger::cActVrBm6000Off>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActVrBm6000Off> *Trigger::cAction<Trigger::cActVrBm6000Off>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8F920  Trigger::cAction<Trigger::cActPlKgkStop>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActPlKgkStop>::vf00()
{
    return &DAT_01dbe33c;
}

// 00C8F970  Trigger::cAction<Trigger::cActPlKgkStop>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActPlKgkStop>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8F980  Trigger::cAction<Trigger::cActPlKgkStop>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActPlKgkStop>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8F990  Trigger::cAction<Trigger::cActPlKgkStop>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActPlKgkStop> *Trigger::cAction<Trigger::cActPlKgkStop>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8F9C0  Trigger::cAction<Trigger::cActDoorCloseDelay>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActDoorCloseDelay>::vf00()
{
    return &DAT_01dbe338;
}

// 00C8FA10  Trigger::cAction<Trigger::cActDoorCloseDelay>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActDoorCloseDelay>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8FA20  Trigger::cAction<Trigger::cActDoorCloseDelay>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActDoorCloseDelay>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8FA30  Trigger::cAction<Trigger::cActDoorCloseDelay>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActDoorCloseDelay> *Trigger::cAction<Trigger::cActDoorCloseDelay>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8FA60  Trigger::cAction<Trigger::cActDoorOpenDelay>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActDoorOpenDelay>::vf00()
{
    return &DAT_01dbe334;
}

// 00C8FAB0  Trigger::cAction<Trigger::cActDoorOpenDelay>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActDoorOpenDelay>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8FAC0  Trigger::cAction<Trigger::cActDoorOpenDelay>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActDoorOpenDelay>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8FAD0  Trigger::cAction<Trigger::cActDoorOpenDelay>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActDoorOpenDelay> *Trigger::cAction<Trigger::cActDoorOpenDelay>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8FB50  Trigger::cAction<Trigger::cActFlagOnDlc2>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActFlagOnDlc2>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8FB60  Trigger::cAction<Trigger::cActFlagOnDlc2>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActFlagOnDlc2>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// per-action-type static descriptors returned by vf00
extern undefined DAT_01dbe320;
extern undefined DAT_01dbe31c;
extern undefined DAT_01dbe318;
extern undefined DAT_01dbe314;
extern undefined DAT_01dbe310;
extern undefined DAT_01dbe30c;
extern undefined DAT_01dbe308;
extern undefined DAT_01dbe304;
extern undefined DAT_01dbe300;

// 00C8FB70  Trigger::cAction<Trigger::cActFlagOnDlc2>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActFlagOnDlc2> *Trigger::cAction<Trigger::cActFlagOnDlc2>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8FBF0  Trigger::cAction<Trigger::cActFlagOffDlc2>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActFlagOffDlc2>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8FC00  Trigger::cAction<Trigger::cActFlagOffDlc2>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActFlagOffDlc2>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8FC10  Trigger::cAction<Trigger::cActFlagOffDlc2>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActFlagOffDlc2> *Trigger::cAction<Trigger::cActFlagOffDlc2>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8FC90  Trigger::cAction<Trigger::cActFlagOnDlc3>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActFlagOnDlc3>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8FCA0  Trigger::cAction<Trigger::cActFlagOnDlc3>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActFlagOnDlc3>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8FCB0  Trigger::cAction<Trigger::cActFlagOnDlc3>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActFlagOnDlc3> *Trigger::cAction<Trigger::cActFlagOnDlc3>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8FD30  Trigger::cAction<Trigger::cActFlagOffDlc3>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActFlagOffDlc3>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8FD40  Trigger::cAction<Trigger::cActFlagOffDlc3>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActFlagOffDlc3>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8FD50  Trigger::cAction<Trigger::cActFlagOffDlc3>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActFlagOffDlc3> *Trigger::cAction<Trigger::cActFlagOffDlc3>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8FD80  Trigger::cAction<Trigger::cActResultRecStartClear>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActResultRecStartClear>::vf00()
{
    return &DAT_01dbe320;
}

// 00C8FDD0  Trigger::cAction<Trigger::cActResultRecStartClear>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActResultRecStartClear>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8FDE0  Trigger::cAction<Trigger::cActResultRecStartClear>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActResultRecStartClear>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8FDF0  Trigger::cAction<Trigger::cActResultRecStartClear>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActResultRecStartClear> *Trigger::cAction<Trigger::cActResultRecStartClear>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C8FE10  FUN_00c8fe10  size=43  [between]
// ? releases a buffer-like object: {+4 data, +8, +0xC, +0x10 owns-data flag}
void __fastcall FUN_00c8fe10(int object)
{
    if (*(int *)(object + 4) != 0) {
        *(int *)(object + 0xC) = 0;
        if (*(int *)(object + 0x10) != 0) {
            FUN_00dd48d0(*(int *)(object + 4), 0);
            *(int *)(object + 0x10) = 0;
        }
        *(int *)(object + 4) = 0;
        *(int *)(object + 8) = 0;
    }
}

// 00C8FF60  Trigger::cAction<Trigger::cActMainTrgActive>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActMainTrgActive>::vf00()
{
    return &DAT_01dbe31c;
}

// 00C8FF70  Trigger::cAction<Trigger::cActMainTrgActive>::vf08  size=1  [class]
template <>
void Trigger::cAction<Trigger::cActMainTrgActive>::vf08()
{
}

// 00C8FF80  Trigger::cAction<Trigger::cActMainTrgActive>::vf0C  size=1  [class]
template <>
void Trigger::cAction<Trigger::cActMainTrgActive>::vf0C()
{
}

// 00C8FF90  Trigger::cAction<Trigger::cActMainTrgActive>::vf10  size=1  [class]
template <>
void Trigger::cAction<Trigger::cActMainTrgActive>::vf10()
{
}

// 00C8FFA0  Trigger::cAction<Trigger::cActMainTrgActive>::vf14  size=1  [class]
template <>
void Trigger::cAction<Trigger::cActMainTrgActive>::vf14()
{
}

// 00C8FFB0  Trigger::cAction<Trigger::cActMainTrgActive>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActMainTrgActive>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C8FFC0  Trigger::cAction<Trigger::cActMainTrgActive>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActMainTrgActive>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C8FFD0  Trigger::cAction<Trigger::cActMainTrgActive>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActMainTrgActive> *Trigger::cAction<Trigger::cActMainTrgActive>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C90000  Trigger::cAction<Trigger::cActMainTrgSleep>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActMainTrgSleep>::vf00()
{
    return &DAT_01dbe318;
}

// 00C90010  Trigger::cAction<Trigger::cActMainTrgSleep>::vf08  size=1  [class]
template <>
void Trigger::cAction<Trigger::cActMainTrgSleep>::vf08()
{
}

// 00C90020  Trigger::cAction<Trigger::cActMainTrgSleep>::vf0C  size=1  [class]
template <>
void Trigger::cAction<Trigger::cActMainTrgSleep>::vf0C()
{
}

// 00C90030  Trigger::cAction<Trigger::cActMainTrgSleep>::vf10  size=1  [class]
template <>
void Trigger::cAction<Trigger::cActMainTrgSleep>::vf10()
{
}

// 00C90040  Trigger::cAction<Trigger::cActMainTrgSleep>::vf14  size=1  [class]
template <>
void Trigger::cAction<Trigger::cActMainTrgSleep>::vf14()
{
}

// 00C90050  Trigger::cAction<Trigger::cActMainTrgSleep>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActMainTrgSleep>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C90060  Trigger::cAction<Trigger::cActMainTrgSleep>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActMainTrgSleep>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C90070  Trigger::cAction<Trigger::cActMainTrgSleep>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActMainTrgSleep> *Trigger::cAction<Trigger::cActMainTrgSleep>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C900A0  Trigger::cAction<Trigger::cActSubTrgActive>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActSubTrgActive>::vf00()
{
    return &DAT_01dbe314;
}

// 00C900B0  Trigger::cAction<Trigger::cActSubTrgActive>::vf08  size=1  [class]
template <>
void Trigger::cAction<Trigger::cActSubTrgActive>::vf08()
{
}

// 00C900C0  Trigger::cAction<Trigger::cActSubTrgActive>::vf0C  size=1  [class]
template <>
void Trigger::cAction<Trigger::cActSubTrgActive>::vf0C()
{
}

// 00C900D0  Trigger::cAction<Trigger::cActSubTrgActive>::vf10  size=1  [class]
template <>
void Trigger::cAction<Trigger::cActSubTrgActive>::vf10()
{
}

// 00C900E0  Trigger::cAction<Trigger::cActSubTrgActive>::vf14  size=1  [class]
template <>
void Trigger::cAction<Trigger::cActSubTrgActive>::vf14()
{
}

// 00C900F0  Trigger::cAction<Trigger::cActSubTrgActive>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActSubTrgActive>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C90100  Trigger::cAction<Trigger::cActSubTrgActive>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActSubTrgActive>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C90110  Trigger::cAction<Trigger::cActSubTrgActive>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActSubTrgActive> *Trigger::cAction<Trigger::cActSubTrgActive>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C90140  Trigger::cAction<Trigger::cActSubTrgSleep>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActSubTrgSleep>::vf00()
{
    return &DAT_01dbe310;
}

// 00C90150  Trigger::cAction<Trigger::cActSubTrgSleep>::vf08  size=1  [class]
template <>
void Trigger::cAction<Trigger::cActSubTrgSleep>::vf08()
{
}

// 00C90160  Trigger::cAction<Trigger::cActSubTrgSleep>::vf0C  size=1  [class]
template <>
void Trigger::cAction<Trigger::cActSubTrgSleep>::vf0C()
{
}

// 00C90170  Trigger::cAction<Trigger::cActSubTrgSleep>::vf10  size=1  [class]
template <>
void Trigger::cAction<Trigger::cActSubTrgSleep>::vf10()
{
}

// 00C90180  Trigger::cAction<Trigger::cActSubTrgSleep>::vf14  size=1  [class]
template <>
void Trigger::cAction<Trigger::cActSubTrgSleep>::vf14()
{
}

// 00C90190  Trigger::cAction<Trigger::cActSubTrgSleep>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActSubTrgSleep>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C901A0  Trigger::cAction<Trigger::cActSubTrgSleep>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActSubTrgSleep>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C901B0  Trigger::cAction<Trigger::cActSubTrgSleep>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActSubTrgSleep> *Trigger::cAction<Trigger::cActSubTrgSleep>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C901E0  Trigger::cAction<Trigger::cActMainTrgAddFunc>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActMainTrgAddFunc>::vf00()
{
    return &DAT_01dbe30c;
}

// 00C901F0  Trigger::cAction<Trigger::cActMainTrgAddFunc>::vf08  size=1  [class]
template <>
void Trigger::cAction<Trigger::cActMainTrgAddFunc>::vf08()
{
}

// 00C90200  Trigger::cAction<Trigger::cActMainTrgAddFunc>::vf0C  size=1  [class]
template <>
void Trigger::cAction<Trigger::cActMainTrgAddFunc>::vf0C()
{
}

// 00C90210  Trigger::cAction<Trigger::cActMainTrgAddFunc>::vf10  size=1  [class]
template <>
void Trigger::cAction<Trigger::cActMainTrgAddFunc>::vf10()
{
}

// 00C90220  Trigger::cAction<Trigger::cActMainTrgAddFunc>::vf14  size=1  [class]
template <>
void Trigger::cAction<Trigger::cActMainTrgAddFunc>::vf14()
{
}

// 00C90230  Trigger::cAction<Trigger::cActMainTrgAddFunc>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActMainTrgAddFunc>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C90240  Trigger::cAction<Trigger::cActMainTrgAddFunc>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActMainTrgAddFunc>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C90250  Trigger::cAction<Trigger::cActMainTrgAddFunc>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActMainTrgAddFunc> *Trigger::cAction<Trigger::cActMainTrgAddFunc>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C90280  Trigger::cAction<Trigger::cActSubTrgAddFunc>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActSubTrgAddFunc>::vf00()
{
    return &DAT_01dbe308;
}

// 00C90290  Trigger::cAction<Trigger::cActSubTrgAddFunc>::vf08  size=1  [class]
template <>
void Trigger::cAction<Trigger::cActSubTrgAddFunc>::vf08()
{
}

// 00C902A0  Trigger::cAction<Trigger::cActSubTrgAddFunc>::vf0C  size=1  [class]
template <>
void Trigger::cAction<Trigger::cActSubTrgAddFunc>::vf0C()
{
}

// 00C902B0  Trigger::cAction<Trigger::cActSubTrgAddFunc>::vf10  size=1  [class]
template <>
void Trigger::cAction<Trigger::cActSubTrgAddFunc>::vf10()
{
}

// 00C902C0  Trigger::cAction<Trigger::cActSubTrgAddFunc>::vf14  size=1  [class]
template <>
void Trigger::cAction<Trigger::cActSubTrgAddFunc>::vf14()
{
}

// 00C902D0  Trigger::cAction<Trigger::cActSubTrgAddFunc>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActSubTrgAddFunc>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C902E0  Trigger::cAction<Trigger::cActSubTrgAddFunc>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActSubTrgAddFunc>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C902F0  Trigger::cAction<Trigger::cActSubTrgAddFunc>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActSubTrgAddFunc> *Trigger::cAction<Trigger::cActSubTrgAddFunc>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C90320  Trigger::cAction<Trigger::cActMainTrgDelFunc>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActMainTrgDelFunc>::vf00()
{
    return &DAT_01dbe304;
}

// 00C90330  Trigger::cAction<Trigger::cActMainTrgDelFunc>::vf08  size=1  [class]
template <>
void Trigger::cAction<Trigger::cActMainTrgDelFunc>::vf08()
{
}

// 00C90340  Trigger::cAction<Trigger::cActMainTrgDelFunc>::vf0C  size=1  [class]
template <>
void Trigger::cAction<Trigger::cActMainTrgDelFunc>::vf0C()
{
}

// 00C90350  Trigger::cAction<Trigger::cActMainTrgDelFunc>::vf10  size=1  [class]
template <>
void Trigger::cAction<Trigger::cActMainTrgDelFunc>::vf10()
{
}

// 00C90360  Trigger::cAction<Trigger::cActMainTrgDelFunc>::vf14  size=1  [class]
template <>
void Trigger::cAction<Trigger::cActMainTrgDelFunc>::vf14()
{
}

// 00C90370  Trigger::cAction<Trigger::cActMainTrgDelFunc>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActMainTrgDelFunc>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C90380  Trigger::cAction<Trigger::cActMainTrgDelFunc>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActMainTrgDelFunc>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C90390  Trigger::cAction<Trigger::cActMainTrgDelFunc>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActMainTrgDelFunc> *Trigger::cAction<Trigger::cActMainTrgDelFunc>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C903C0  Trigger::cAction<Trigger::cActSubTrgDelFunc>::vf00  size=6  [class]
template <>
void *Trigger::cAction<Trigger::cActSubTrgDelFunc>::vf00()
{
    return &DAT_01dbe300;
}

// 00C903D0  Trigger::cAction<Trigger::cActSubTrgDelFunc>::vf08  size=1  [class]
template <>
void Trigger::cAction<Trigger::cActSubTrgDelFunc>::vf08()
{
}

// 00C903E0  Trigger::cAction<Trigger::cActSubTrgDelFunc>::vf0C  size=1  [class]
template <>
void Trigger::cAction<Trigger::cActSubTrgDelFunc>::vf0C()
{
}

// 00C903F0  Trigger::cAction<Trigger::cActSubTrgDelFunc>::vf10  size=1  [class]
template <>
void Trigger::cAction<Trigger::cActSubTrgDelFunc>::vf10()
{
}

// 00C90400  Trigger::cAction<Trigger::cActSubTrgDelFunc>::vf14  size=1  [class]
template <>
void Trigger::cAction<Trigger::cActSubTrgDelFunc>::vf14()
{
}

// 00C90410  Trigger::cAction<Trigger::cActSubTrgDelFunc>::vf1C  size=10  [class]
template <>
void Trigger::cAction<Trigger::cActSubTrgDelFunc>::vf1C(int *newRecord)
{
    record() = newRecord;
}

// 00C90420  Trigger::cAction<Trigger::cActSubTrgDelFunc>::vf20  size=15  [class]
template <>
int Trigger::cAction<Trigger::cActSubTrgDelFunc>::vf20()
{
    if (record() == 0) {
        return -1;
    }
    return record()[1];
}

// 00C90430  Trigger::cAction<Trigger::cActSubTrgDelFunc>::vf04  size=31  [class]
template <>
Trigger::cAction<Trigger::cActSubTrgDelFunc> *Trigger::cAction<Trigger::cActSubTrgDelFunc>::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

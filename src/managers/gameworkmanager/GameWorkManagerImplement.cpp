// src/managers/gameworkmanager/GameWorkManagerImplement.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "GameWorkManagerImplement.h"

// ---------------------------------------------------------------------------------------------
// Imports / intrinsics
// ---------------------------------------------------------------------------------------------
extern "C" __declspec(dllimport) long __stdcall InterlockedIncrement(long volatile *addend);
extern "C" long __cdecl _InterlockedCompareExchange(long volatile *destination, long exchange, long comparand);
#pragma intrinsic(_InterlockedCompareExchange)

// ---------------------------------------------------------------------------------------------
// Data referenced by this part
// ---------------------------------------------------------------------------------------------
// achievement progress counters (FUN_009c6540 = unlock achievement id ?)
extern int DAT_01b71960;
extern int DAT_01b71964[];      // int[12], one per category counter (this+0x38)
extern int DAT_018aa7a4[];      // { threshold, id } pairs starting at 0x018AA7A0; this symbol is the first id
extern int DAT_01b71994;
extern int DAT_01b71998;
extern int DAT_01b7199c;
extern int DAT_01b73828;
extern int DAT_01b73840;
extern float DAT_01b737b0;      // second play-time accumulator (clamped 3599999 s)
extern int DAT_01dc08a8;        // running points total
extern int *DAT_01bea100;       // object: vfA4(points)
// total play record (0x01B76140)
extern float DAT_01b76140;      // total play time (seconds, clamped 3599999)
extern int DAT_01b76144;
extern int DAT_01b76148;
extern int DAT_01b7614c;        // total points (clamped 9999999)
extern int DAT_01b76150;        // best lastComboCount
extern int DAT_01b76154;
extern int DAT_01b76158;
extern int DAT_01b7615c;
extern int DAT_01b76160;
extern int DAT_01b76164;
extern int DAT_01b76168;
extern int DAT_01b7616c;
extern int DAT_01b76174;
extern int DAT_01b76178[];      // int[5] (this+0x94)
extern int DAT_01b7618c;
extern int DAT_01b76190;
extern int DAT_01b761e8;
extern int DAT_01b761ec;
// current chapter record (0x01B76200, 12 dwords)
extern int DAT_01b76200;        // chapter id (hash of the chapter name)
extern float DAT_01b76204;      // chapter time
extern int DAT_01b76208;
extern int DAT_01b7620c;
extern int DAT_01b76210;
extern int DAT_01b76214;
extern int DAT_01b76218;
extern int DAT_01b7621c;
extern int DAT_01b76220;
extern int DAT_01b762b8;
extern int DAT_01b762bc;
extern int DAT_01b7638c[];      // "result stored" flags, one per result slot
extern int DAT_01b7642c;
extern int DAT_01b76430;
extern int DAT_01b77de0;        // chapter active
extern char DAT_01b719b0[];     // result slots, 0xC0 bytes each (+0x00 float time)
extern char DAT_01b71a60[];     // = DAT_01b719b0 + 0xB0 (int compared per slot)
extern signed char DAT_01b391c8;  // read with movsx (signed byte)
// game state
extern int DAT_018b9174;        // current phase id (0xABCD)
extern int DAT_01bea030;
extern unsigned int DAT_01bea060;
extern unsigned int DAT_01bea064;
extern unsigned int DAT_01bea090;
extern unsigned int DAT_01bea094;
extern unsigned int DAT_01bea098;
extern int *DAT_01dc14c8;       // object: vf1E8 / vf1EC, field +0x53E8
extern int DAT_01dc1368;
extern int DAT_01dc136c;
extern int DAT_01be8e4c;
extern int DAT_01d64254;
extern GameWorkManagerImplement *DAT_01bea184;  // the GameWorkManager singleton

// ---------------------------------------------------------------------------------------------
// Helpers
// ---------------------------------------------------------------------------------------------
namespace GameWorkManagerImplement_p1 {

const int kStatMax   = 999999;   // 0xF423F
const int kPointsMax = 9999999;  // 0x98967F (Ghidra printed it as &DAT_0098967f)

// Atomic exchange written as the lock cmpxchg retry loop of the machine code; returns the old value.
inline int AtomicExchange(int *target, int value)
{
    int expected;
    int seen;
    do {
        expected = *target;
        seen = (int)_InterlockedCompareExchange((long volatile *)target, value, expected);
    } while (seen != expected);
    return seen;
}

inline void AtomicIncrement(int *target)
{
    InterlockedIncrement((long volatile *)target);
}

// Virtual call through byte offset `offset` of obj's vftable (ECX = obj).
inline void VCall0(int *obj, int offset)
{
    ((void (__thiscall *)(int *))((*(void ***)obj)[offset / 4]))(obj);
}
inline void VCall1(int *obj, int offset, int arg)
{
    ((void (__thiscall *)(int *, int))((*(void ***)obj)[offset / 4]))(obj, arg);
}

// The functions.h prototypes of these callees do not match their call sites (return value
// dropped, or an ECX argument the decompiler did not show). These wrappers call them the way the
// raw code does.
// Combo score tables (.rdata): 0x018A9AB4 float[11] (50,50,55..95) indexed by the clamped combo
// hit total; 0x018A9AE0 {float, float}[21] pairs, .first indexed by comboCount/5, .second by
// counter14/5.
extern float DAT_018a9ab4[11];
struct ComboBonusPair { float byCount; float byCounter14; };
extern ComboBonusPair DAT_018a9ae0[21];

// Body of FUN_00c2c0c0, reconstructed from the machine code (the decompiler lost the x87 part).
// The x87 temporaries are never stored, so they are evaluated in double; _ftol2 truncates.
inline int ComboScoreValue(GameWorkManagerImplement *work)
{
    int hits = work->comboHitTotal();
    int hitIndex;
    int countIndex;
    int counterIndex;
    double sum;

    if (hits < 0) {
        hitIndex = 0;
    }
    else {
        hitIndex = hits > 10 ? 10 : hits;
    }
    countIndex = work->comboCount() / 5;
    if (countIndex < 0) {
        countIndex = 0;
    }
    else if (countIndex > 20) {
        countIndex = 20;
    }
    counterIndex = work->counter14() / 5;
    if (counterIndex < 0) {
        counterIndex = 0;
    }
    else if (counterIndex > 20) {
        counterIndex = 20;
    }
    sum = (double)DAT_018a9ae0[countIndex].byCount + (double)DAT_018a9ae0[counterIndex].byCounter14;
    if (work->comboHitTotal() <= 0) {
        return (int)((double)DAT_018a9ab4[hitIndex] * sum);
    }
    return (int)((double)DAT_018a9ab4[hitIndex] * (sum + 1.0 /* float at 0x0163B5E0 */) *
                 (double)work->comboHitTotal());
}
// FUN_00c2c0c0 returns the score in EAX, but its functions.h prototype is void; callers use this.
inline int ComboScore(int self)
{
    return ComboScoreValue((GameWorkManagerImplement *)self);
}
inline bool IsPhaseD()  // FUN_00d467a0: (phase & 0xF00) == 0xD00; ECX (likely &DAT_018b9140) not shown
{
    return ((bool (*)(void))FUN_00d467a0)();
}
inline bool IsPhaseC()  // FUN_00d46780: (phase & 0xF00) == 0xC00; ECX (likely &DAT_018b9140) not shown
{
    return ((bool (*)(void))FUN_00d46780)();
}
inline void LoadChapterRecord()  // FUN_009c52e0: copies ECX+0x7220 into DAT_01b76200; ECX not shown
{
    ((void (*)(void))FUN_009c52e0)();
}
inline int CallA4AE60()  // FUN_00a4ae60 returns a value in EAX
{
    return ((int (*)(void))FUN_00a4ae60)();
}
inline int Call9C4BF0()  // FUN_009c4bf0 returns a value in EAX
{
    return ((int (*)(void))FUN_009c4bf0)();
}
inline int HashName(char *name)  // FUN_00e03ea0 returns the hash in EAX
{
    return ((int (*)(char *))FUN_00e03ea0)(name);
}
inline int CallCAAD00()  // FUN_00caad00; ECX not shown
{
    return ((int (*)(void))FUN_00caad00)();
}
inline int CallEB4300(int key)  // FUN_00eb4300; ECX not shown
{
    return ((int (*)(int))FUN_00eb4300)(key);
}
inline void Call9C8C00(int a, unsigned int b)  // FUN_009c8c00; ECX not shown
{
    ((void (*)(int, unsigned int))FUN_009c8c00)(a, b);
}
inline void *MemAlloc(unsigned int size, int *heap)  // FUN_00dd3500 returns the block in EAX
{
    return ((void *(*)(unsigned int, int *))FUN_00dd3500)(size, heap);
}
// 00C2B5F0 cXmlBinary::cXmlBinary_64: grades a chapter record (outputs through the pointers).
inline void GradeChapter(unsigned int *record, int arg2, int arg3, int *out4, int *out5, int *out6,
                         int *out7, int *out8, int *out9, int *out10, int *out11)
{
    ((void (*)(unsigned int *, int, int, int *, int *, int *, int *, int *, int *, int *, int *))0x00C2B5F0)(
        record, arg2, arg3, out4, out5, out6, out7, out8, out9, out10, out11);
}

}  // namespace GameWorkManagerImplement_p1

// 00C1B060  GameWorkManagerImplement::vf08  size=1  [class]
void GameWorkManagerImplement::vf08()
{
    return;
}

// 00C1B070  FUN_00c1b070  size=129  [between]
// Clears the per-frame counters.
void __fastcall FUN_00c1b070(int self)
{
    GameWorkManagerImplement *work = (GameWorkManagerImplement *)self;
    int i;

    for (i = 0; i < 12; i++) {
        work->categoryCounts()[i] = 0;
    }
    for (i = 0; i < 5; i++) {
        work->indexedCounts()[i] = 0;
    }
    work->flag28() = 0;
    work->flag2C() = 0;
    work->flag30() = 0;
    work->lastComboCount() = 0;
    work->counter34() = 0;
    work->counter68() = 0;
    work->counter6C() = 0;
    work->points() = 0;
    work->kindCount74() = 0;
    work->kindCount78() = 0;
    work->kindCount7C() = 0;
    work->kindCount80() = 0;
    work->counter84() = 0;
    work->hitCount() = 0;
    work->counter8C() = 0;
    work->counter90() = 0;
    work->counterA8() = 0;
    work->counterAC() = 0;
    work->counterB0() = 0;
    work->counterB4() = 0;
}

// 00C1B100  GameWorkManagerImplement::vf3C  size=98  [class]
// Atomically adds `amount` to points(), clamped to 0..9999999.
undefined * GameWorkManagerImplement::vf3C(int amount)
{
    using namespace GameWorkManagerImplement_p1;
    int *target = &points();
    int oldValue;
    int newValue;
    int seen;

    for (;;) {
        oldValue = *target;
        newValue = *target + amount;
        if (newValue < 1) {
            newValue = 0;
        }
        else if (newValue > 9999998) {
            newValue = kPointsMax;
        }
        if (oldValue == newValue) {
            break;
        }
        seen = (int)_InterlockedCompareExchange((long volatile *)target, newValue, oldValue);
        if (seen == oldValue) {
            return (undefined *)oldValue;
        }
    }
    return (undefined *)newValue;
}

// 00C1B170  FUN_00c1b170  size=72  [between]
void __fastcall FUN_00c1b170(int self)
{
    using namespace GameWorkManagerImplement_p1;
    GameWorkManagerImplement *work = (GameWorkManagerImplement *)self;

    if (0 < work->counterB4()) {
        DAT_01b73828 = DAT_01b73828 + work->counterB4();
        if ((unsigned int)DAT_01b73828 > 999998u) {  // unsigned compare (jb) in the machine code
            DAT_01b73828 = kStatMax;
            FUN_009c6540(0x37);
            return;
        }
        if ((unsigned int)DAT_01b73828 > 99u) {
            FUN_009c6540(0x37);
        }
    }
}

// 00C1B1C0  FUN_00c1b1c0  size=72  [between]
void __fastcall FUN_00c1b1c0(int self)
{
    using namespace GameWorkManagerImplement_p1;
    GameWorkManagerImplement *work = (GameWorkManagerImplement *)self;

    if (0 < work->kindCount80()) {
        DAT_01b73840 = DAT_01b73840 + work->kindCount80();
        if ((unsigned int)DAT_01b73840 > 999998u) {  // unsigned compare (jb) in the machine code
            DAT_01b73840 = kStatMax;
            FUN_009c6540(0x3b);
            return;
        }
        if ((unsigned int)DAT_01b73840 > 29u) {
            FUN_009c6540(0x3b);
        }
    }
}

// 00C1B210  FUN_00c1b210  size=431  [between]
void FUN_00c1b210(int self, float deltaTime)
{
    using namespace GameWorkManagerImplement_p1;
    GameWorkManagerImplement *work = (GameWorkManagerImplement *)self;
    int *achievement = DAT_018aa7a4;  // [0] = id, [-1] = threshold
    int *total = DAT_01b71964;
    int *count = work->categoryCounts();
    float timer;

    do {
        if (0 < *count) {
            *total = *total + *count;
            if (*total > 999998) {
                *total = kStatMax;
            }
            if (*achievement != -1 && achievement[-1] <= *total) {
                FUN_009c6540(*achievement);
            }
        }
        total = total + 1;
        count = count + 1;
        achievement = achievement + 2;
    } while ((int)total < 0x1b71994);

    if (0 < work->counter8C()) {
        if (work->streakB8() < 1) {
            work->streakTimer() = 60.0f;  // 0x42700000
        }
        work->streakB8() = work->streakB8() + work->counter8C();
        if (work->streakB8() > 9) {
            FUN_009c6540(0x22);
        }
    }
    timer = work->streakTimer() - deltaTime;
    work->streakTimer() = timer;
    if (timer <= 0.0f || work->flag2C() != 0) {
        work->streakTimer() = 0.0f;
        work->streakB8() = 0;
    }

    if (0 < work->counter6C()) {
        DAT_01b71998 = DAT_01b71998 + work->counter6C();
        if (DAT_01b71998 < 999999) {
            if (DAT_01b71998 < 50) goto check_kind80;
        }
        else {
            DAT_01b71998 = kStatMax;
        }
        FUN_009c6540(0x21);
    }
check_kind80:
    if (0 < work->kindCount80()) {
        DAT_01b7199c = DAT_01b7199c + work->kindCount80();
        if (DAT_01b7199c < 999999) {
            if (DAT_01b7199c < 30) goto check_counter34;
        }
        else {
            DAT_01b7199c = kStatMax;
        }
        FUN_009c6540(0x23);
    }
check_counter34:
    if (0 < work->counter34()) {
        DAT_01b71960 = DAT_01b71960 + work->counter34();
        if (DAT_01b71960 < 999999) {
            if (DAT_01b71960 < 50) goto check_kind78;
        }
        else {
            DAT_01b71960 = kStatMax;
        }
        FUN_009c6540(0x24);
    }
check_kind78:
    if (0 < work->kindCount78()) {
        DAT_01b71994 = DAT_01b71994 + work->kindCount78();
        if (DAT_01b71994 > 999998) {
            DAT_01b71994 = kStatMax;
            FUN_009c6540(0x27);
            return;
        }
        if (DAT_01b71994 > 99) {
            FUN_009c6540(0x27);
        }
    }
}

// 00C1B3C0  FUN_00c1b3c0  size=103  [between]
void FUN_00c1b3c0(int self, float deltaTime)
{
    using namespace GameWorkManagerImplement_p1;
    GameWorkManagerImplement *work = (GameWorkManagerImplement *)self;

    DAT_01b737b0 = DAT_01b737b0 + deltaTime;
    if (DAT_01b737b0 >= 3599999.0f) {
        DAT_01b737b0 = 3599999.0f;
    }
    if (work->points() != 0) {
        DAT_01dc08a8 = DAT_01dc08a8 + work->points();
        VCall1(DAT_01bea100, 0xa4, work->points());
    }
    if (work->flag28() != 0) {
        FUN_009c4b20();
    }
}

// 00C1B430  FUN_00c1b430  size=204  [between]
// Accumulates the frame counters into the current chapter record.
void FUN_00c1b430(int self, float deltaTime)
{
    using namespace GameWorkManagerImplement_p1;
    GameWorkManagerImplement *work = (GameWorkManagerImplement *)self;

    if (work->chapterActiveC0() == 0) {
        work->chapterActiveC0() = DAT_01b77de0;
        return;
    }
    DAT_01b76204 = DAT_01b76204 + deltaTime;
    DAT_01b76208 = DAT_01b76208 + work->points();
    DAT_01b7620c = DAT_01b7620c + work->counter6C();
    if (DAT_01b76210 <= work->lastComboCount()) {
        DAT_01b76210 = work->lastComboCount();
    }
    DAT_01b76214 = DAT_01b76214 + work->hitCount();
    if (work->flag28() != 0) {
        DAT_01b76218 = 1;
    }
    if (work->flag30() != 0) {
        DAT_01b7621c = 1;
    }
    DAT_01b76220 = DAT_01b76220 + work->counter84();
    if (IsPhaseD()) {
        DAT_01b76430 = DAT_01b76430 + work->kindCount80();
        DAT_01b7642c = DAT_01b7642c + work->counter90();
        work->chapterActiveC0() = DAT_01b77de0;
        return;
    }
    work->chapterActiveC0() = DAT_01b77de0;
}

// 00C1B540  GameWorkManagerImplement::vf18  size=10  [class]
void GameWorkManagerImplement::vf18()
{
    GameWorkManagerImplement_p1::LoadChapterRecord();
}

// 00C1B550  GameWorkManagerImplement::vf1C  size=33  [class]
void GameWorkManagerImplement::vf1C()
{
    DAT_01b76208 = 0;
    DAT_01b7620c = 0;
    DAT_01b76210 = 0;
    DAT_01b76214 = 0;
    DAT_01b76220 = 0;
    DAT_01b77de0 = 0;
}

// 00C1B580  GameWorkManagerImplement::vf20  size=6  [class]
undefined4 GameWorkManagerImplement::vf20()
{
    return DAT_01b76200;
}

// 00C1B590  GameWorkManagerImplement::vf24  size=6  [class]
undefined4 GameWorkManagerImplement::vf24()
{
    return DAT_01b77de0;
}

// 00C1B5A0  GameWorkManagerImplement::vf28  size=33  [class]
void GameWorkManagerImplement::vf28()
{
    if (flag28() != 0) {
        DAT_01b76144 = 1;
        DAT_01b76218 = 1;
        FUN_009c4b20();
        return;
    }
}

// 00C1B5D0  GameWorkManagerImplement::vf2C  size=53  [class]
int GameWorkManagerImplement::vf2C()
{
    return GameWorkManagerImplement_p1::AtomicExchange(&flag28(), 1);
}

// 00C1B610  GameWorkManagerImplement::vf30  size=53  [class]
int GameWorkManagerImplement::vf30()
{
    return GameWorkManagerImplement_p1::AtomicExchange(&flag2C(), 1);
}

// 00C1B650  GameWorkManagerImplement::vf34  size=131  [class]
int GameWorkManagerImplement::vf34(int key)
{
    using namespace GameWorkManagerImplement_p1;
    int result;

    if (key == 0 || (result = key, key != lastComboKey())) {
        InterlockedIncrement((long volatile *)&comboCount());
        AtomicExchange(&comboPending(), 1);
        result = AtomicExchange(&lastComboKey(), key);
    }
    return result;
}

// 00C1B6E0  GameWorkManagerImplement::vf38  size=72  [class]
int GameWorkManagerImplement::vf38()
{
    using namespace GameWorkManagerImplement_p1;
    InterlockedIncrement((long volatile *)&counter14());
    return AtomicExchange(&comboPending(), 1);
}

// 00C1B730  GameWorkManagerImplement::vf48  size=11  [class]
void GameWorkManagerImplement::vf48()
{
    GameWorkManagerImplement_p1::AtomicIncrement(&counter6C());
}

// 00C1B740  GameWorkManagerImplement::vf50  size=14  [class]
void GameWorkManagerImplement::vf50()
{
    GameWorkManagerImplement_p1::AtomicIncrement(&counter90());
}

// 00C1B750  GameWorkManagerImplement::vf54  size=14  [class]
void GameWorkManagerImplement::vf54()
{
    GameWorkManagerImplement_p1::AtomicIncrement(&counterB0());
}

// 00C1B760  GameWorkManagerImplement::vf58  size=14  [class]
void GameWorkManagerImplement::vf58()
{
    GameWorkManagerImplement_p1::AtomicIncrement(&counterB4());
}

// 00C1B770  GameWorkManagerImplement::vf5C  size=11  [class]
void GameWorkManagerImplement::vf5C()
{
    GameWorkManagerImplement_p1::AtomicIncrement(&kindCount80());
}

// 00C1B780  GameWorkManagerImplement::vf4C  size=14  [class]
void GameWorkManagerImplement::vf4C()
{
    GameWorkManagerImplement_p1::AtomicIncrement(&counter84());
}

// 00C1B790  GameWorkManagerImplement::vf60  size=21  [class]
void GameWorkManagerImplement::vf60(int index)
{
    // tail jump to InterlockedIncrement in the machine code
    GameWorkManagerImplement_p1::AtomicIncrement(&indexedCounts()[index]);
}

// 00C1B7B0  GameWorkManagerImplement::vf64  size=11  [class]
void GameWorkManagerImplement::vf64()
{
    GameWorkManagerImplement_p1::AtomicIncrement(&counter34());
}

// 00C1B7C0  GameWorkManagerImplement::vf68  size=11  [class]
void GameWorkManagerImplement::vf68()
{
    GameWorkManagerImplement_p1::AtomicIncrement(&counter68());
}

// 00C1B7D0  GameWorkManagerImplement::vf6C  size=14  [class]
void GameWorkManagerImplement::vf6C()
{
    GameWorkManagerImplement_p1::AtomicIncrement(&counterA8());
}

// 00C1B7E0  GameWorkManagerImplement::vf70  size=14  [class]
void GameWorkManagerImplement::vf70()
{
    GameWorkManagerImplement_p1::AtomicIncrement(&counterAC());
}

// 00C1B7F0  GameWorkManagerImplement::vf44  size=171  [class]
// Registers a hit: `category` indexes categoryCounts (0..11), `kind` selects an extra counter.
int GameWorkManagerImplement::vf44(int category, int kind)
{
    using namespace GameWorkManagerImplement_p1;
    int *counter;

    if (kind == 3) {
        vf34(0);
    }
    AtomicIncrement(&hitCount());
    AtomicIncrement(&categoryCounts()[category]);
    if (category == 0 || category == 1 || category == 2) {
        flag30() = 1;
    }
    switch (kind) {
    case 0:
        counter = &kindCount74();
        break;
    case 1:
        counter = &kindCount78();
        break;
    case 2:
        counter = &kindCount7C();
        break;
    case 3:
        counter = &kindCount80();
        break;
    case 4:
        counter = &counterB4();
        break;
    default:
        goto done;
    }
    AtomicIncrement(counter);
done:
    return AtomicExchange(&comboPending(), 1);
}

// 00C1B8B0  GameWorkManagerImplement::vf40  size=14  [class]
void GameWorkManagerImplement::vf40()
{
    GameWorkManagerImplement_p1::AtomicIncrement(&counter8C());
}

// 00C1B8C0  GameWorkManagerImplement::vf7C  size=4  [class]
undefined4 GameWorkManagerImplement::vf7C()
{
    return comboHitTotal();
}

// 00C1B8D0  GameWorkManagerImplement::vf84  size=6  [class]
undefined4 GameWorkManagerImplement::vf84()
{
    return DAT_01b7616c;
}

// 00C1B8E0  GameWorkManagerImplement::vf88  size=6  [class]
undefined4 GameWorkManagerImplement::vf88()
{
    return DAT_01b76154;
}

// 00C1B8F0  GameWorkManagerImplement::vf8C  size=6  [class]
undefined4 GameWorkManagerImplement::vf8C()
{
    return DAT_01b76164;
}

// 00C1B900  GameWorkManagerImplement::vf90  size=6  [class]
undefined4 GameWorkManagerImplement::vf90()
{
    return DAT_01b76174;
}

// 00C1B910  GameWorkManagerImplement::vf94  size=6  [class]
undefined4 GameWorkManagerImplement::vf94()
{
    return DAT_01b761ec;
}

// 00C1B920  GameWorkManagerImplement::vf98  size=7  [class]
float10 GameWorkManagerImplement::vf98()
{
    return (float10)DAT_01b76140;
}

// 00C1B930  GameWorkManagerImplement::vfB0  size=71  [class]
void GameWorkManagerImplement::vfB0()
{
    unsigned int *record = chapterRecord();

    record[1] = 0;
    record[0] = 0;
    record[2] = 0;
    record[3] = 0;
    record[4] = 0;
    record[5] = 0;
    record[6] = 0;
    record[7] = 0;
    record[8] = 0;
    chapterValue100() = 0;
    chapterValue104() = 0;
}

// 00C2C0C0  FUN_00c2c0c0  size=162  [callgraph]
// Computes the combo score and returns it in EAX (tail jump to _ftol2 = FUN_00fdbc60). The raw
// decompilation lost the x87 arithmetic; see ComboScoreValue for the body reconstructed from the
// machine code. The functions.h prototype is void, so the value is computed but not returned here.
void __fastcall FUN_00c2c0c0(int self)
{
    using namespace GameWorkManagerImplement_p1;
    (void)ComboScoreValue((GameWorkManagerImplement *)self);
}

// 00C2C170  FUN_00c2c170  size=58  [callgraph]
// Ends the current combo: awards its score and resets the combo state.
void __fastcall FUN_00c2c170(int *self)
{
    using namespace GameWorkManagerImplement_p1;
    GameWorkManagerImplement *work = (GameWorkManagerImplement *)self;
    int score;

    score = ComboScore((int)self);
    if (0 < score) {
        work->vf3C(score);
    }
    if (0 < work->comboCount()) {
        work->lastComboCount() = work->comboCount();
    }
    work->comboHitTotal() = 0;
    work->comboCount() = 0;
    work->comboTimer() = 0.0f;
    work->counter14() = 0;
    work->comboPending() = 0;
}

// 00C2C1B0  FUN_00c2c1b0  size=281  [callgraph]
// Keeps bit 6 of DAT_01bea090 in sync with the DAT_01dc14c8 object (vf1E8 = on, vf1EC = off).
void __fastcall FUN_00c2c1b0(int self)
{
    using namespace GameWorkManagerImplement_p1;
    GameWorkManagerImplement *work = (GameWorkManagerImplement *)self;
    int *target = DAT_01dc14c8;
    int phase = DAT_018b9174;
    unsigned int bit;

    if (target != 0) {
        if ((DAT_01bea090 & 0x80000000) == 0) {
            if ((DAT_01bea060 & 0x4a000000) == 0 && !FUN_00416910(9) && CallCAAD00() == 0 &&
                !FUN_00416d50(0x2b) && CallEB4300(DAT_01be8e4c) == 0 && !FUN_00cc0bd0() &&
                phase != 0xef1 && !FUN_00416d50(0x37) && !FUN_00416d50(0x24) && DAT_01dc1368 == 0) {
                if (target[0x14fa] != 0) {
                    DAT_01bea090 = DAT_01bea090 ^ 0x40;
                }
            }
            else {
                DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
                DAT_01dc136c = 1;
            }
        }
        bit = DAT_01bea090 >> 6 & 1;
        if (work->appliedFlag40() != bit) {
            if (bit != 0) {
                VCall0(target, 0x1e8);
                work->appliedFlag40() = DAT_01bea090 >> 6 & 1;
                return;
            }
            VCall0(target, 0x1ec);
        }
        work->appliedFlag40() = DAT_01bea090 >> 6 & 1;
    }
}

// 00C2C2D0  FUN_00c2c2d0  size=184  [callgraph]
// Runs the combo window timer; when it expires the combo is ended as in FUN_00c2c170.
void FUN_00c2c2d0(int *self, float deltaTime)
{
    using namespace GameWorkManagerImplement_p1;
    GameWorkManagerImplement *work = (GameWorkManagerImplement *)self;
    int score;

    if ((((unsigned char *)&DAT_01bea094)[3] & 1) != 0) {
        work->comboCount() = 0;
        work->comboPending() = 0;
    }
    if (work->comboPending() != 0) {
        work->comboTimer() = 6.0f;  // 0x40c00000
        work->comboPending() = 0;
    }
    if (work->flag28() != 0 && 1.0f < work->comboTimer()) {
        work->comboTimer() = 1.0f;  // 0x3f800000
    }
    if (0.0f < work->comboTimer()) {
        work->comboHitTotal() = work->comboHitTotal() + work->hitCount();
        if ((((unsigned char *)&DAT_01bea064)[3] & 1) == 0) {
            work->comboTimer() = work->comboTimer() - deltaTime;
        }
        else {
            work->comboTimer() = 0.0f;
        }
        if (work->comboTimer() <= 0.0f) {
            score = ComboScore((int)self);
            if (0 < score) {
                work->vf3C(score);
            }
            if (0 < work->comboCount()) {
                work->lastComboCount() = work->comboCount();
            }
            work->comboHitTotal() = 0;
            work->comboCount() = 0;
            work->comboTimer() = 0.0f;
            work->counter14() = 0;
            work->comboPending() = 0;
            return;
        }
    }
}

// 00C2C390  FUN_00c2c390  size=496  [callgraph]
// Accumulates the frame counters into the total play record (0x01B76140).
void FUN_00c2c390(int self, float deltaTime)
{
    using namespace GameWorkManagerImplement_p1;
    GameWorkManagerImplement *work = (GameWorkManagerImplement *)self;
    int value;
    int *total;
    int *count;

    DAT_01b76140 = DAT_01b76140 + deltaTime;
    DAT_01b7614c = DAT_01b7614c + work->points();
    DAT_01b76154 = DAT_01b76154 + work->counter6C();
    DAT_01b76158 = DAT_01b76158 + work->kindCount74();
    DAT_01b7615c = DAT_01b7615c + work->kindCount78();
    DAT_01b76160 = DAT_01b76160 + work->kindCount7C();
    DAT_01b76164 = DAT_01b76164 + work->kindCount80();
    DAT_01b7616c = DAT_01b7616c + work->hitCount();
    DAT_01b76168 = DAT_01b76168 + work->counter84();
    if (!IsPhaseC()) {
        value = work->counter90();
    }
    else {
        value = work->counterB0();
    }
    DAT_01b76174 = DAT_01b76174 + value;
    DAT_01b761e8 = DAT_01b761e8 + work->counterB4();
    DAT_01b761ec = DAT_01b761ec + work->kindCount80();
    DAT_01b7618c = DAT_01b7618c + work->counterA8();
    DAT_01b76190 = DAT_01b76190 + work->counterAC();
    total = DAT_01b76178;
    count = work->indexedCounts();
    do {
        *total = *total + *count;
        if (*total > 999998) {
            *total = kStatMax;
        }
        total = total + 1;
        count = count + 1;
    } while ((int)total < 0x1b7618c);
    value = work->lastComboCount();
    if (work->lastComboCount() < DAT_01b76150) {
        value = DAT_01b76150;
    }
    DAT_01b76150 = value;
    if (work->flag28() != 0) {
        DAT_01b76144 = 1;
    }
    if (work->categoryCounts()[0] + work->categoryCounts()[2] + work->categoryCounts()[1] != 0) {
        DAT_01b76148 = 1;
    }
    if (DAT_01b76140 >= 3599999.0f) {
        DAT_01b76140 = 3599999.0f;
    }
    if (DAT_01b7614c > 9999998) {
        DAT_01b7614c = kPointsMax;
    }
    if (DAT_01b76154 > 999998) {
        DAT_01b76154 = kStatMax;
    }
    if (DAT_01b76158 > 999998) {
        DAT_01b76158 = kStatMax;
    }
    if (DAT_01b7615c > 999998) {
        DAT_01b7615c = kStatMax;
    }
    if (DAT_01b76160 > 999998) {
        DAT_01b76160 = kStatMax;
    }
    if (DAT_01b76164 > 999998) {
        DAT_01b76164 = kStatMax;
    }
    if (DAT_01b7616c > 999998) {
        DAT_01b7616c = kStatMax;
    }
    if (DAT_01b76174 > 999998) {
        DAT_01b76174 = kStatMax;
    }
    if (DAT_01b7618c > 999998) {
        DAT_01b7618c = kStatMax;
    }
    if (DAT_01b76190 > 999998) {
        DAT_01b76190 = kStatMax;
    }
    if (DAT_01b761e8 > 999998) {
        DAT_01b761e8 = kStatMax;
    }
    if (DAT_01b761ec > 999998) {
        DAT_01b761ec = kStatMax;
    }
}

// 00C2C580  GameWorkManagerImplement::vf0C  size=346  [class]
// Per-frame update. param = delta time (float bits).
void GameWorkManagerImplement::vf0C(undefined4 param_2)
{
    using namespace GameWorkManagerImplement_p1;
    int self = (int)this;
    int phase;
    float deltaTime;

    if (DAT_01bea030 == 2) {
        return;
    }
    if (FUN_00a4ae30() != 0 || FUN_00a4ae70()) {
        points() = 0;
    }
    if ((DAT_01bea094 & 0x100000) != 0 ||
        (phase = (int)FUN_00932720(), 0xf03 < phase && (phase < 0xf0a || phase == 0xf30))) {
        param_2 = 0;
    }
    deltaTime = *(float *)&param_2;
    FUN_00c2c1b0(self);
    FUN_00c2c2d0((int *)this, deltaTime);
    // The next three callees are also passed deltaTime on the stack (the raw shows
    // FUN_00c1b170(param_2) / FUN_00c1b1c0(param_2)); their prototypes only take ECX = this.
    if (CallA4AE60() == 0) {
        if ((DAT_018b9174 & 0xf00) == 0xc00 || DAT_018b9174 == 0xf31 || DAT_018b9174 == 0xf32) {
            goto phase_c;
        }
        if ((DAT_018b9174 & 0xf00) != 0xd00 && DAT_018b9174 != 0xf33 && DAT_018b9174 != 0xf34) {
            FUN_00c1b210(self, deltaTime);
            goto accumulate;
        }
    }
    else {
        if ((DAT_018b9174 & 0xf00) == 0xc00 || DAT_018b9174 == 0xf31 || DAT_018b9174 == 0xf32) {
            goto phase_c;
        }
        if ((DAT_018b9174 & 0xf00) != 0xd00 && DAT_018b9174 != 0xf33 && DAT_018b9174 != 0xf34) {
            goto accumulate;
        }
    }
    FUN_00c1b1c0(self);
    goto accumulate;
phase_c:
    FUN_00c1b170(self);
accumulate:
    FUN_00c2c390(self, deltaTime);
    FUN_00c1b3c0(self, deltaTime);
    FUN_00c1b430(self, deltaTime);
    FUN_00c1b070(self);
}

// 00C2C6E0  GameWorkManagerImplement::vf10  size=230  [class]
// Begins a chapter: param_2 = chapter name (char *), forceReset != 0 resets even the same chapter.
void GameWorkManagerImplement::vf10(undefined4 param_2, int forceReset)
{
    using namespace GameWorkManagerImplement_p1;
    int chapterId;
    int i;
    int *src;
    unsigned int *dst;

    DAT_01b77de0 = 1;
    chapterId = HashName((char *)param_2);
    if (DAT_01b76200 != chapterId || (DAT_01b76200 = chapterId, forceReset != 0)) {
        DAT_01b76204 = 0.0f;
        DAT_01b76208 = 0;
        DAT_01b7620c = 0;
        DAT_01b76210 = 0;
        DAT_01b76214 = 0;
        DAT_01b76218 = 0;
        DAT_01b7621c = 0;
        DAT_01b76220 = 0;
        src = &DAT_01b76200;
        dst = chapterRecord();
        DAT_01b76200 = chapterId;
        for (i = 12; i != 0; i--) {
            *dst = (unsigned int)*src;
            src = src + 1;
            dst = dst + 1;
        }
        DAT_01b7642c = 0;
        DAT_01b76430 = 0;
        chapterValue100() = 0;
        chapterValue104() = DAT_01b7642c;
    }
    if (IsPhaseD() && (DAT_01d64254 == 2 || DAT_01d64254 == 4)) {
        DAT_01b7642c = 1;
        chapterValue104() = 1;
    }
    if (DAT_01b762b8 != -1) {
        DAT_01b76218 = DAT_01b762bc;
    }
}

// 00C2C7D0  GameWorkManagerImplement::vf14  size=690  [class]
// Ends the chapter: closes the combo, saves the chapter record, grades it and stores the result.
void GameWorkManagerImplement::vf14()
{
    using namespace GameWorkManagerImplement_p1;
    int score;
    int i;
    int *src;
    unsigned int *dst;
    unsigned int *srcU;
    unsigned int time;
    int out5;
    int out11;
    int out10;
    int out8;
    int out9;
    int out6;
    int out4;
    int out7;
    int arg2;
    int slotGroup;
    int stage;
    int arg3;
    unsigned int result[0x30];  // copy of the total play record, then patched
    int slot;
    int slotOffset;

    score = ComboScore((int)this);
    if (0 < score) {
        vf3C(score);
    }
    if (0 < comboCount()) {
        lastComboCount() = comboCount();
    }
    comboHitTotal() = 0;
    comboCount() = 0;
    comboTimer() = 0.0f;
    counter14() = 0;
    comboPending() = 0;
    FUN_00c1b430((int)this, 0.0f);
    DAT_01b77de0 = 0;
    src = &DAT_01b76200;
    dst = chapterRecord();
    for (i = 12; i != 0; i--) {
        *dst = (unsigned int)*src;
        src = src + 1;
        dst = dst + 1;
    }
    chapterValue100() = DAT_01b76430;
    chapterValue104() = DAT_01b7642c;
    DAT_01b76204 = 0.0f;
    DAT_01b76200 = 0;
    DAT_01b76208 = 0;
    DAT_01b7620c = 0;
    DAT_01b76210 = 0;
    DAT_01b76214 = 0;
    DAT_01b76218 = 0;
    DAT_01b7621c = 0;
    DAT_01b76220 = 0;
    DAT_01b76430 = 0;
    DAT_01b7642c = 0;
    if ((DAT_01bea098 & 0x80000000) != 0 && (stage = (int)DAT_01b391c8 - 10, -1 < stage)) {
        slotGroup = Call9C4BF0();
        arg3 = (unsigned int)(chapterValue104() == 0);
        arg2 = chapterValue100();
        out4 = 0;
        out5 = 0;
        out6 = 0;
        out7 = 0;
        out8 = 0;
        out9 = 0;
        out10 = 0;
        out11 = 0;
        GradeChapter(chapterRecord(), arg2, arg3, &out4, &out5, &out6, &out7, &out8, &out9, &out10,
                     &out11);
        VCall1(DAT_01bea100, 0xa4, out5);
        time = chapterRecord()[1];
        srcU = (unsigned int *)&DAT_01b76140;
        dst = result;
        for (i = 0x30; i != 0; i--) {
            *dst = *srcU;
            srcU = srcU + 1;
            dst = dst + 1;
        }
        // NOTE: Ghidra lost track of the stack by 4 bytes after the vfA4 call above (it assumed the
        // argument was not popped), so the raw decompilation reads every stack local below from the
        // wrong slot. The code here follows the machine code (00C2C94D..00C2CA76).
        result[0] = time;
        result[3] = chapterRecord()[2];
        if (out6 == 0) {
            result[4] = (unsigned int)-1;
        }
        else {
            result[4] = chapterRecord()[4];
        }
        if (out8 == 0) {
            result[11] = (unsigned int)-1;
        }
        else {
            result[11] = chapterRecord()[5];
        }
        if (out7 == 0) {
            result[5] = (unsigned int)-1;
        }
        else {
            result[5] = chapterRecord()[3];
        }
        result[43] = (unsigned int)arg2;
        result[21] = (unsigned int)(out4 + 1);
        if (out9 == 0) {
            result[1] = 1;
        }
        else {
            result[1] = chapterRecord()[6];
        }
        if (out11 == 0) {
            result[2] = 1;
        }
        else {
            result[2] = (unsigned int)(chapterRecord()[8] == 0);
        }
        if (out10 == 0) {
            result[13] = 1;
        }
        else {
            result[13] = (unsigned int)arg3;
        }
        slot = slotGroup + stage * 5;
        slotOffset = slot * 0xc0;
        result[44] = (unsigned int)out5;  // score (+0xB0 of the result slot)
        if (*(float *)(DAT_01b719b0 + slotOffset) == 0.0f ||
            *(int *)(DAT_01b71a60 + slotOffset) < out5) {
            srcU = result;
            dst = (unsigned int *)(DAT_01b719b0 + slotOffset);
            for (i = 0x30; i != 0; i--) {
                *dst = *srcU;
                srcU = srcU + 1;
                dst = dst + 1;
            }
        }
        DAT_01b7638c[slot] = 1;
        Call9C8C00(0, 0xffffffff);
    }
}

// 00C42A90  GameWorkManagerImplement::vf74  size=4  [class]
undefined4 GameWorkManagerImplement::vf74()
{
    return comboCount();
}

// 00C42AA0  GameWorkManagerImplement::vf78  size=4  [class]
undefined4 GameWorkManagerImplement::vf78()
{
    return counter14();
}

// 00C42AB0  GameWorkManagerImplement::vf80  size=21  [class]
undefined4 GameWorkManagerImplement::vf80()
{
    if (0.0f < comboTimer()) {
        return 1;
    }
    return 0;
}

// 00C42AD0  GameWorkManagerImplement::vf9C  size=10  [class]
void GameWorkManagerImplement::vf9C(undefined4 value)
{
    value08() = value;
}

// 00C42AE0  GameWorkManagerImplement::vfA0  size=4  [class]
undefined4 GameWorkManagerImplement::vfA0()
{
    return value08();
}

// 00C42AF0  GameWorkManagerImplement::vfA4  size=7  [class]
undefined4 GameWorkManagerImplement::vfA4()
{
    return chapterValue100();
}

// 00C42B00  GameWorkManagerImplement::vfA8  size=7  [class]
undefined4 GameWorkManagerImplement::vfA8()
{
    return chapterValue104();
}

// 00C42B10  GameWorkManagerImplement::vfAC  size=7  [class]
int GameWorkManagerImplement::vfAC()
{
    return (int)chapterRecord();
}

// 00C42B20  GameWorkManagerImplement::vf00  size=31  [class]
// Scalar deleting destructor.
undefined4 * GameWorkManagerImplement::vf00(byte flags)
{
    *(void **)this = (void *)0x016A3474;  // vftable = GameWorkManager::vftable (0x016A3474)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 00C42B40  GameWorkManagerImplement::vf04  size=52  [class]
void GameWorkManagerImplement::vf04()
{
    // the raw stores go through ECX after the call (extraout_ECX), which is still this
    FUN_00c1b070((int)this);
    streakTimer() = 0.0f;
    comboTimer() = 0.0f;
    streakB8() = 0;
    appliedFlag40() = 0;
    value08() = 0;
    comboPending() = 0;
    comboHitTotal() = 0;
    comboCount() = 0;
    counter14() = 0;
    lastComboKey() = 0;
    chapterActiveC0() = 0;
}

// 00C50480  GameWorkManagerImplement::~GameWorkManagerImplement  size=114  [class]
bool GameWorkManagerImplement::create(int *heap)
{
    using namespace GameWorkManagerImplement_p1;
    GameWorkManagerImplement *work;

    work = (GameWorkManagerImplement *)MemAlloc(0x110, heap);
    if (work != 0) {
        *(void **)work = (void *)0x016A678C;  // vftable = GameWorkManagerImplement::vftable (0x016A678C)
        // ? the raw stores below go through ECX after FUN_00c1b070 (extraout_ECX) = work
        FUN_00c1b070((int)work);
        work->streakTimer() = 0.0f;
        work->streakB8() = 0;
        work->appliedFlag40() = 0;
        work->comboTimer() = 0.0f;
        work->value08() = 0;
        work->comboPending() = 0;
        work->comboHitTotal() = 0;
        work->comboCount() = 0;
        work->counter14() = 0;
        work->lastComboKey() = 0;
        work->chapterActiveC0() = 0;
        DAT_01bea184 = work;
        return work != 0;
    }
    DAT_01bea184 = 0;
    return false;
}

// 00C50500  GameWorkManagerImplement::~GameWorkManagerImplement  size=5  [class]
bool GameWorkManagerImplement::createThunk(int *heap)
{
    // thunk: jmp 00C50480 (the raw shows the body of the target)
    return create(heap);
}

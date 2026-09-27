// src/managers/playermanager/PlayerManagerImplement.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "PlayerManagerImplement.h"

// ---------------------------------------------------------------------------------------------
// Imports / intrinsics
// ---------------------------------------------------------------------------------------------
extern "C" long __cdecl _InterlockedCompareExchange(long volatile *destination, long exchange, long comparand);
#pragma intrinsic(_InterlockedCompareExchange)

// ---------------------------------------------------------------------------------------------
// Data referenced by this part
// ---------------------------------------------------------------------------------------------
extern int DAT_01be9220;            // player start position index (negative: use 0)
extern int DAT_018b9174;            // current phase id
extern int DAT_01bea030;            // spawn / phase mode (2, 6, 7, 8, 9 are special)
extern int DAT_01b758a0;            // countD4 minus the base count (Ghidra: _DAT_01b758a0)
extern int DAT_01b758a4;            // countD8 minus the base count (Ghidra: _DAT_01b758a4)
extern int DAT_01b7589c;            // saved points (clamped 9999999)
extern unsigned char DAT_01b6efe0[];  // save data block (item flags at +0x4C00..)
extern unsigned char DAT_01be9db8[];  // type descriptor tested with FUN_00dd6d80
extern int DAT_01be8f14;
extern int DAT_01bea024;
extern int DAT_01bea028;
extern int DAT_01bea02c;
extern unsigned int *DAT_01bea01c;
extern unsigned char DAT_01657e1c[];  // file keys looked up with FUN_00de44b0
extern unsigned char DAT_0164518c[];
extern unsigned char DAT_01645174[];
extern unsigned char DAT_01645170[];
extern unsigned int DAT_018a9770[];   // 5 texture object ids (0x018A9770..0x018A9784)

// ---------------------------------------------------------------------------------------------
// Helpers
// ---------------------------------------------------------------------------------------------
namespace PlayerManagerImplement_p1 {

const int kPointsMax = 9999999;  // 0x98967F (Ghidra printed it as &DAT_0098967f)

// handleArray() layout: [0] vftable, [1] data pointer, [2] element count
const int kArrayData  = 1;
const int kArrayCount = 2;

// Virtual call through byte offset `offset` of obj's vftable (ECX = obj).
inline void VCall0(int *obj, int offset)
{
    ((void (__thiscall *)(int *))((*(void ***)obj)[offset / 4]))(obj);
}
template <class A> inline void VCall1(int *obj, int offset, A arg)
{
    ((void (__thiscall *)(int *, A))((*(void ***)obj)[offset / 4]))(obj, arg);
}

// The functions.h prototypes of these callees do not match their call sites here: the decompiler
// did not show the ECX argument (or dropped the return value). These wrappers call them with
// exactly the arguments the raw code shows.
inline int LookupHandle()  // FUN_00a81330: handle -> object table lookup; ECX (the handle) not shown
{
    return ((int (*)(void))FUN_00a81330)();
}
inline void ReleaseObject()  // FUN_00a805f0; ECX (the object) not shown
{
    ((void (*)(void))FUN_00a805f0)();
}
inline void ClearHandle()  // FUN_00a7c950: *ECX = 0; ECX not shown
{
    ((void (*)(void))FUN_00a7c950)();
}
inline int HandleOf()  // FUN_00a7c7f0: returns ECX + 0x2C; ECX not shown
{
    return ((int (*)(void))FUN_00a7c7f0)();
}
inline void AssignHandle(int source)  // FUN_00a7c960: *ECX = *source; ECX not shown
{
    ((void (*)(int))FUN_00a7c960)(source);
}
inline int *BehaviorOf()  // FUN_00a7c8a0: returns *(ECX + 0x48); ECX not shown
{
    return ((int *(*)(void))FUN_00a7c8a0)();
}
inline int IsInList(void *type)  // FUN_00dd6d80: walks the list at ECX looking for `type`; ECX not shown
{
    return ((int (*)(void *))FUN_00dd6d80)(type);
}
inline void SetPlayerPos(unsigned int index)  // 009FE9C0 cPlayerPosInfo::setPlayerPos; ECX not shown
{
    ((void (*)(unsigned int))0x009FE9C0)(index);
}
inline void CallDA0D70()  // FUN_00da0d70; ECX not shown
{
    ((void (*)(void))FUN_00da0d70)();
}
inline bool IsPhaseC()  // FUN_00d46780; ECX not shown
{
    return ((bool (*)(void))FUN_00d46780)();
}
inline bool IsPhaseD()  // FUN_00d467a0; ECX not shown
{
    return ((bool (*)(void))FUN_00d467a0)();
}
inline int BaseCountA(void *save)  // FUN_009c4640: number of flags > 2 at save+0x4C00 (step 0x20, 4)
{
    return ((int (*)(void *))FUN_009c4640)(save);
}
inline int BaseCountB(void *save)  // FUN_009c4680
{
    return ((int (*)(void *))FUN_009c4680)(save);
}
inline int CallA4AE60()  // FUN_00a4ae60 returns a value in EAX
{
    return ((int (*)(void))FUN_00a4ae60)();
}
inline undefined4 Call9C47F0()  // FUN_009c47f0: its stack argument is not shown by the decompiler
{
    return ((undefined4 (*)(void))FUN_009c47f0)();
}
inline undefined4 Call9C48B0()  // FUN_009c48b0: its stack argument is not shown by the decompiler
{
    return ((undefined4 (*)(void))FUN_009c48b0)();
}
inline void SetScale(int index, float value)  // FUN_00e03a70: ECX[0x3C + index * 0x10] = value; ECX not shown
{
    ((void (*)(int, float))FUN_00e03a70)(index, value);
}
inline void InitSetInfo()  // FUN_0040b190: initialises a 0x80-byte set info; ECX not shown
{
    ((void (*)(void))FUN_0040b190)();
}
inline void CallA7CA40()  // FUN_00a7ca40; ECX not shown
{
    ((void (*)(void))FUN_00a7ca40)();
}
inline void CallDE3530()  // FUN_00de3530; ECX not shown
{
    ((void (*)(void))FUN_00de3530)();
}
// cObjReadManager::getDataAtSet (00A01170) (out, id, param); ECX (presumably the cObjReadManager
// instance at 0x01B7B364) is not shown.
inline undefined4 GetDataAtSet(void *out, unsigned int id, unsigned int param)
{
    return ((undefined4 (*)(void *, unsigned int, unsigned int))0x00A01170)(out, id, param);
}
inline int FindFile(void *key, int arg)  // FUN_00de44b0: file lookup in a data set; ECX not shown
{
    return ((int (*)(void *, int))FUN_00de44b0)(key, arg);
}
inline int FindFileByName(char *name, int arg)  // FUN_00de4550; ECX not shown
{
    return ((int (*)(char *, int))FUN_00de4550)(name, arg);
}
inline int EntryModelData(int file, int arg)  // 00A19920 cModelDataManager::EntryModelData
{
    return ((int (*)(int, int))0x00A19920)(file, arg);
}
inline int SpawnObject(void *desc)  // FUN_00a81b80: creates the object described by desc; ECX not shown
{
    return ((int (*)(void *))FUN_00a81b80)(desc);
}
inline void SetupCloth(void *dataFile)  // 00A92380 Behavior::setupCloth; ECX not shown
{
    ((void (*)(void *))0x00A92380)(dataFile);
}
inline int GetHp()  // FUN_00b7c970: returns *(ECX + 0x870); ECX not shown
{
    return ((int (*)(void))FUN_00b7c970)();
}
inline void SetHp(int hp)  // FUN_00b7c9c0: sets ECX+0x870 (clamped to the maximum); ECX not shown
{
    ((void (*)(int))FUN_00b7c9c0)(hp);
}
inline void RestoreD0(int value)  // FUN_00bc3100 (float parameter); the raw code passes the dword as is
{
    ((void (*)(int))FUN_00bc3100)(value);
}
inline float10 GetD0()  // FUN_00bda020; ECX not shown
{
    return ((float10 (*)(void))FUN_00bda020)();
}
inline int Call94E9B0(unsigned int hash)  // FUN_0094e9b0 returns a value in EAX
{
    return ((int (*)(unsigned int))FUN_0094e9b0)(hash);
}
inline void CallF972F0()  // FUN_00f972f0; ECX not shown
{
    ((void (*)(void))FUN_00f972f0)();
}
inline void DestroyTexture()  // 00F972E0 Hw::cTexture::~cTexture; ECX not shown
{
    ((void (*)(void))0x00F972E0)();
}

// Object descriptor passed to FUN_00a81b80 (the raw locals local_c0..local_90, in stack order).
struct SpawnDesc {
    char *name;                    // +0x00 local_c0
    unsigned int objId;            // +0x04 local_bc
    unsigned int objId2;           // +0x08 local_b8
    void *setInfo;                 // +0x0C local_b4 (-> setInfoData)
    unsigned int flags;            // +0x10 local_b0
    unsigned int unk14[3];         // +0x14 (not written here)
    int modelData;                 // +0x20 local_a0
    int file24;                    // +0x24 local_9c
    int file28;                    // +0x28 local_98
    int paramFile;                 // +0x2C local_94 ("_param.bxm")
    unsigned char setInfoData[140]; // +0x30 local_90
};

}  // namespace PlayerManagerImplement_p1

// 00C13520  PlayerManagerImplement::vf10  size=47  [class]
void PlayerManagerImplement::vf10()
{
    using namespace PlayerManagerImplement_p1;
    if (-1 < DAT_01be9220) {
        SetPlayerPos(DAT_01be9220);
        CallDA0D70();
        return;
    }
    SetPlayerPos(0);
    CallDA0D70();
}

// 00C13550  PlayerManagerImplement::vf44  size=33  [class]
void PlayerManagerImplement::vf44()
{
    using namespace PlayerManagerImplement_p1;
    if (LookupHandle() != 0) {
        ReleaseObject();
    }
    ClearHandle();
}

// 00C13580  PlayerManagerImplement::vf48  size=11  [class]
void PlayerManagerImplement::vf48()
{
    using namespace PlayerManagerImplement_p1;
    LookupHandle();
}

// 00C13590  PlayerManagerImplement::vf4C  size=28  [class]
void PlayerManagerImplement::vf4C()
{
    using namespace PlayerManagerImplement_p1;
    int handle = HandleOf();
    AssignHandle(handle);
}

// 00C135B0  PlayerManagerImplement::vf50  size=11  [class]
void PlayerManagerImplement::vf50()
{
    using namespace PlayerManagerImplement_p1;
    ClearHandle();
}

// 00C135C0  PlayerManagerImplement::vf54  size=13  [class]
void PlayerManagerImplement::vf54(undefined4 value)
{
    setup0() = value;
}

// 00C135D0  PlayerManagerImplement::vf58  size=7  [class]
undefined4 PlayerManagerImplement::vf58()
{
    return setup0();
}

// 00C135E0  PlayerManagerImplement::vf60  size=13  [class]
void PlayerManagerImplement::vf60(undefined4 value)
{
    setup1() = value;
}

// 00C135F0  PlayerManagerImplement::vf64  size=13  [class]
void PlayerManagerImplement::vf64(undefined4 value)
{
    setup2() = value;
}

// 00C13600  PlayerManagerImplement::vf68  size=7  [class]
undefined4 PlayerManagerImplement::vf68()
{
    return setup1();
}

// 00C13610  PlayerManagerImplement::vf6C  size=7  [class]
undefined4 PlayerManagerImplement::vf6C()
{
    return setup2();
}

// 00C13620  PlayerManagerImplement::vf74  size=13  [class]
void PlayerManagerImplement::vf74(undefined4 value)
{
    setup3() = value;
}

// 00C13630  PlayerManagerImplement::vf78  size=7  [class]
undefined4 PlayerManagerImplement::vf78()
{
    return setup3();
}

// 00C13690  PlayerManagerImplement::vf7C  size=208  [class]
// Publishes the carried-over state (item counts relative to the save data, points, setup record).
void PlayerManagerImplement::vf7C()
{
    using namespace PlayerManagerImplement_p1;
    if (FUN_00a4ae30() == 0) {
        if ((FUN_00a4a3d0(DAT_018b9174) == 0) && (DAT_01bea030 != 2)) {
            if ((DAT_01bea030 != 6) && (DAT_01bea030 != 7)) {
                if (!IsPhaseC()) {
                    if (!IsPhaseD()) {
                        DAT_01b758a0 = BaseCountA(DAT_01b6efe0);
                        DAT_01b758a0 = countD4() - DAT_01b758a0;
                        DAT_01b758a4 = BaseCountB(DAT_01b6efe0);
                        DAT_01b758a4 = countD8() - DAT_01b758a4;
                    }
                }
            }
            DAT_01b7589c = points();
            if (9999998 < DAT_01b7589c) {
                DAT_01b7589c = kPointsMax;
            }
            FUN_009c69c0((undefined4 *)setupRecord(), DAT_01bea030);
        }
    }
}

// 00C13760  PlayerManagerImplement::vf80  size=23  [class]
void PlayerManagerImplement::vf80()
{
    if ((DAT_01bea030 != 6) && (DAT_01bea030 != 7)) {
        vf7C();  // tail jump through the vftable (slot 0x7C)
        return;
    }
}

// 00C13780  PlayerManagerImplement::vfA4  size=98  [class]
// Atomically adds `amount` to points(), clamped to 0..9999999; returns the old value, or the
// clamped value when it did not change.
undefined * PlayerManagerImplement::vfA4(int amount)
{
    using namespace PlayerManagerImplement_p1;
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
        else if (9999998 < newValue) {
            newValue = kPointsMax;
        }
        if (oldValue == newValue) {
            break;
        }
        seen = (int)_InterlockedCompareExchange((long volatile *)target, newValue, oldValue);
        if (seen == oldValue) {
            return (undefined *)seen;
        }
    }
    return (undefined *)newValue;
}

// 00C137F0  PlayerManagerImplement::vfA8  size=7  [class]
undefined4 PlayerManagerImplement::vfA8()
{
    return points();
}

// 00C13800  PlayerManagerImplement::vf84  size=11  [class]
void PlayerManagerImplement::vf84()
{
    skipRestore() = 1;
}

// 00C13810  PlayerManagerImplement::vf88  size=27  [class]
undefined4 PlayerManagerImplement::vf88()
{
    if (9 < countD4()) {
        return 0;
    }
    countD4() = countD4() + 1;
    return 1;
}

// 00C13830  PlayerManagerImplement::vf8C  size=26  [class]
undefined4 PlayerManagerImplement::vf8C()
{
    if (countD4() < 1) {
        return 0;
    }
    countD4() = countD4() - 1;
    return 1;
}

// 00C13850  PlayerManagerImplement::vf90  size=27  [class]
undefined4 PlayerManagerImplement::vf90()
{
    if (4 < countD8()) {
        return 0;
    }
    countD8() = countD8() + 1;
    return 1;
}

// 00C13870  PlayerManagerImplement::vf94  size=26  [class]
undefined4 PlayerManagerImplement::vf94()
{
    if (countD8() < 1) {
        return 0;
    }
    countD8() = countD8() - 1;
    return 1;
}

// 00C13890  PlayerManagerImplement::vf98  size=7  [class]
undefined4 PlayerManagerImplement::vf98()
{
    return countD4();
}

// 00C138A0  PlayerManagerImplement::vf9C  size=7  [class]
undefined4 PlayerManagerImplement::vf9C()
{
    return countD8();
}

// 00C138B0  PlayerManagerImplement::vfAC  size=19  [class]
bool PlayerManagerImplement::vfAC(uint mask)
{
    return (setupFlags() & mask) != 0;
}

// 00C138D0  PlayerManagerImplement::vfB0  size=13  [class]
void PlayerManagerImplement::vfB0(uint mask)
{
    setupFlags() = setupFlags() | mask;
}

// 00C138E0  PlayerManagerImplement::vf5C  size=29  [class]
undefined4 PlayerManagerImplement::vf5C()
{
    using namespace PlayerManagerImplement_p1;
    if (CallA4AE60() != 0) {
        return 0;
    }
    return Call9C47F0();
}

// 00C13900  PlayerManagerImplement::vf70  size=29  [class]
undefined4 PlayerManagerImplement::vf70()
{
    using namespace PlayerManagerImplement_p1;
    if (CallA4AE60() != 0) {
        return 0;
    }
    return Call9C48B0();
}

// 00C238E0  PlayerManagerImplement::vf04  size=271  [class]
// Per frame: runs the two scale timers, then copies the player position.
void PlayerManagerImplement::vf04()
{
    using namespace PlayerManagerImplement_p1;
    int remaining;

    if ((0 < applyTimer()) && (remaining = applyTimer() - 1, applyTimer() = remaining, remaining < 1)) {
        SetScale(0, scaleValue());
        SetScale(1, scaleValue());
        SetScale(2, scaleValue());
        applyTimer() = 0;
    }
    if (((applyTimer() < 1) && (0 < resetTimer())) &&
        (remaining = resetTimer() - 1, resetTimer() = remaining, remaining < 1)) {
        SetScale(0, 1.0f);  // 0x3F800000
        SetScale(1, 1.0f);
        SetScale(2, 1.0f);
        resetTimer() = 0;
    }
    int *array = handleArray();
    if ((array != 0) && (array[kArrayData] != array[kArrayData] + array[kArrayCount] * 4)) {
        if (LookupHandle() != 0) {
            int player = (int)BehaviorOf();
            playerPos()[0] = *(unsigned int *)(player + 0x40);
            playerPos()[1] = *(unsigned int *)(player + 0x44);
            playerPos()[2] = *(unsigned int *)(player + 0x48);
            playerPos()[3] = *(unsigned int *)(player + 0x4C);
        }
    }
}

// 00C239F0  PlayerManagerImplement::vf34  size=82  [class]
// Calls slot 0xFC of every player object.
void PlayerManagerImplement::vf34()
{
    using namespace PlayerManagerImplement_p1;
    int cursor = handleArray()[kArrayData];

    if (cursor != cursor + handleArray()[kArrayCount] * 4) {
        do {
            if (LookupHandle() != 0) {  // ? ECX (probably cursor) not shown
                int *player = BehaviorOf();
                if (player != 0) {
                    VCall0(player, 0xFC);
                }
            }
            cursor = cursor + 4;
        } while (cursor != handleArray()[kArrayData] + handleArray()[kArrayCount] * 4);
    }
}

// 00C23A50  PlayerManagerImplement::vf38  size=82  [class]
// Calls slot 0x100 of every player object.
void PlayerManagerImplement::vf38()
{
    using namespace PlayerManagerImplement_p1;
    int cursor = handleArray()[kArrayData];

    if (cursor != cursor + handleArray()[kArrayCount] * 4) {
        do {
            if (LookupHandle() != 0) {  // ? ECX (probably cursor) not shown
                int *player = BehaviorOf();
                if (player != 0) {
                    VCall0(player, 0x100);
                }
            }
            cursor = cursor + 4;
        } while (cursor != handleArray()[kArrayData] + handleArray()[kArrayCount] * 4);
    }
}

// 00C23AB0  PlayerManagerImplement::vf3C  size=67  [class]
void PlayerManagerImplement::vf3C()
{
    using namespace PlayerManagerImplement_p1;
    int *player;

    if ((vf28(0) != 0) && (player = BehaviorOf(), player != 0)) {
        VCall1(player, 4, (void *)DAT_01be9db8);
        if (IsInList(DAT_01be9db8) != 0) {
            VCall0(player, 0x3F4);  // tail jump
            return;
        }
    }
}

// 00C23B00  PlayerManagerImplement::vf28  size=70  [class]
// Returns the handle entry for `index` (-1, 1 or other); the three lookups differ only in their
// ECX, which the decompiler did not show.
undefined4 PlayerManagerImplement::vf28(int index)
{
    using namespace PlayerManagerImplement_p1;
    if (handleArray()[kArrayCount] == 0) {
        return 0;
    }
    if (index == -1) {
        return LookupHandle();
    }
    if (index == 1) {
        return LookupHandle();
    }
    return LookupHandle();
}

// 00C23B50  PlayerManagerImplement::vf24  size=70  [class]
undefined4 PlayerManagerImplement::vf24(int index)
{
    using namespace PlayerManagerImplement_p1;
    if (handleArray()[kArrayCount] == 0) {
        return 0;
    }
    if (index == -1) {
        return LookupHandle();
    }
    if (index == 1) {
        return LookupHandle();
    }
    return LookupHandle();
}

// 00C23BA0  PlayerManagerImplement::vf30  size=79  [class]
void PlayerManagerImplement::vf30()
{
    using namespace PlayerManagerImplement_p1;
    // ? The machine code (ret 4, mov eax,[esp+8]) stores a STACK ARGUMENT here, not ESI: vf30
    // really takes one dword parameter. The signature cannot change without also changing slot
    // 0x30 in PlayerManager.h, so the Ghidra artifact is kept.
    int unaffESI;  // ? register value on entry (Ghidra: unaff_ESI)

    if (vf28(0) != 0) {
        vf28(0);
        int *player = BehaviorOf();
        if (player != 0) {
            VCall1(player, 4, (void *)DAT_01be9db8);
            if (IsInList(DAT_01be9db8) != 0) {
                player[0x2DD] = unaffESI;  // player+0xB74
            }
        }
    }
}

// 00C23BF0  PlayerManagerImplement::vfA0  size=70  [class]
// True when the player's HP (+0x870) is above zero.
bool PlayerManagerImplement::vfA0()
{
    using namespace PlayerManagerImplement_p1;
    vf24(0);
    int *player = BehaviorOf();
    if (player != 0) {
        VCall1(player, 4, (void *)DAT_01be9db8);
        if (IsInList(DAT_01be9db8) != 0) {
            return 0 < GetHp();
        }
    }
    return false;
}

// 00C40850  FUN_00c40850  size=688  [callgraph]
// Spawns the default player "Pl0010" (object 0x10010) and restores the carried-over state.
void __fastcall FUN_00c40850(int *param_1)
{
    using namespace PlayerManagerImplement_p1;
    PlayerManagerImplement *self = (PlayerManagerImplement *)param_1;
    unsigned int objFile;
    int file;
    int *player;
    unsigned char dataSet[8];  // local_cc
    int object;                // local_c4
    SpawnDesc desc;            // local_c0 .. local_90

    InitSetInfo();
    if (self->handleArray()[kArrayData] != 0) {
        self->handleArray()[kArrayCount] = 0;
    }
    if (DAT_01bea030 == 2) {
        return;
    }
    FUN_009c7e10(self->setupRecord(), DAT_01bea030);
    if ((DAT_01bea030 == 6) || (DAT_01bea030 == 7)) {
        self->points() = 0;
    }
    else {
        self->points() = DAT_01b7589c;
    }
    if ((DAT_01bea030 == 6) || (DAT_01bea030 == 7)) {
        self->countD4() = 0;
        self->countD8() = 0;
        self->skipRestore() = 1;
    }
    else {
        self->countD4() = FUN_009c4760((int)DAT_01b6efe0);
        self->countD8() = FUN_009c47a0((int)DAT_01b6efe0);
    }
    GetDataAtSet(self->playerData(), 0x1000E, 0);
    CallA7CA40();
    CallDE3530();
    if ((DAT_01bea02c == 0) && (DAT_01bea028 == DAT_01bea024)) {
        objFile = *DAT_01bea01c;
    }
    else {
        objFile = 0xFFFFFFFF;
    }
    desc.objId = 0x10010;
    desc.objId2 = 0x10010;
    desc.setInfo = desc.setInfoData;
    desc.name = "Pl0010";
    desc.flags = 0;
    GetDataAtSet(dataSet, objFile, 0);
    objFile = FindFile(DAT_01657e1c, 0);
    desc.modelData = EntryModelData(objFile, 0);
    desc.paramFile = FindFileByName("_param.bxm", 0);
    file = FindFile(DAT_0164518c, 0);
    objFile = FindFile(DAT_01645174, 0);
    desc.file28 = FindFile(DAT_01645170, 0);
    desc.file24 = objFile;
    if (file != 0) {
        desc.file24 = 0;
        desc.file28 = file;
    }
    object = SpawnObject(&desc);
    if ((object != 0) && (BehaviorOf() != 0)) {
        SetupCloth(dataSet);
    }
    unsigned int *textureId = DAT_018a9770;
    int *slot = param_1 + 3;  // textureSlot(0), 7 dwords per slot
    do {
        FUN_00c13490((undefined4)slot, *textureId);
        textureId = textureId + 1;
        slot = slot + 7;
    } while ((int)textureId < 0x18A9784);
    int *array = self->handleArray();
    int handle = HandleOf();
    VCall1(array, 8, handle);  // push_back(handle)
    self->vf40();
    if (self->vf28(0) == 0) {
        player = 0;
    }
    else {
        player = BehaviorOf();
    }
    if (self->skipRestore() == 0) {
        if (player == 0) goto done;
        SetHp(self->savedHp());
        RestoreD0(self->savedD0());
    }
    if (player != 0) {
        self->savedHp() = GetHp();
        *(float *)&self->savedD0() = (float)GetD0();  // fstp dword [+0xD0]: float bits
    }
done:
    if (DAT_01bea030 == 7) {
        *(unsigned int *)((char *)player + 0x1400) = 1;
    }
}

// 00C40B00  FUN_00c40b00  size=664  [callgraph]
// Spawns "Pl1400" (object 0x11400) and restores the carried-over state (mode 8).
void __fastcall FUN_00c40b00(int *param_1)
{
    using namespace PlayerManagerImplement_p1;
    PlayerManagerImplement *self = (PlayerManagerImplement *)param_1;
    unsigned int objFile;
    int file;
    int *player;
    unsigned char dataSet[8];  // local_cc
    int object;                // local_c4
    SpawnDesc desc;            // local_c0 .. local_90

    InitSetInfo();
    if (self->handleArray()[kArrayData] != 0) {
        self->handleArray()[kArrayCount] = 0;
    }
    if (DAT_01bea030 != 2) {
        FUN_009c7e10(self->setupRecord(), DAT_01bea030);
        if ((DAT_01bea030 == 6) || (DAT_01bea030 == 7)) {
            self->points() = 0;
        }
        else {
            self->points() = DAT_01b7589c;
        }
        if ((DAT_01bea030 == 6) || (DAT_01bea030 == 7)) {
            self->countD4() = 0;
            self->countD8() = 0;
            self->skipRestore() = 1;
        }
        else {
            self->countD4() = Call94E9B0(0x3855170F);
            self->countD8() = Call94E9B0(0x4CBFDA41);
        }
        GetDataAtSet(self->playerData(), 0x11400, 0);
        CallA7CA40();
        CallDE3530();
        if ((DAT_01bea02c == 0) && (DAT_01bea028 == DAT_01bea024)) {
            objFile = *DAT_01bea01c;
        }
        else {
            objFile = 0xFFFFFFFF;
        }
        desc.setInfo = desc.setInfoData;
        desc.name = "Pl1400";
        desc.objId = 0x11400;
        desc.objId2 = 0x11400;
        desc.flags = 0;
        GetDataAtSet(dataSet, objFile, 0);
        objFile = FindFile(DAT_01657e1c, 0);
        desc.modelData = EntryModelData(objFile, 0);
        desc.paramFile = FindFileByName("_param.bxm", 0);
        file = FindFile(DAT_0164518c, 0);
        objFile = FindFile(DAT_01645174, 0);
        desc.file28 = FindFile(DAT_01645170, 0);
        desc.file24 = objFile;
        if (file != 0) {
            desc.file24 = 0;
            desc.file28 = file;
        }
        object = SpawnObject(&desc);
        if ((object != 0) && (BehaviorOf() != 0)) {
            SetupCloth(dataSet);
        }
        unsigned int *textureId = DAT_018a9770;
        int *slot = param_1 + 3;  // textureSlot(0), 7 dwords per slot
        do {
            FUN_00c13490((undefined4)slot, *textureId);
            textureId = textureId + 1;
            slot = slot + 7;
        } while ((int)textureId < 0x18A9784);
        int *array = self->handleArray();
        int handle = HandleOf();
        VCall1(array, 8, handle);  // push_back(handle)
        self->vf40();
        if (self->vf28(0) == 0) {
            player = 0;
        }
        else {
            player = BehaviorOf();
        }
        if (self->skipRestore() == 0) {
            if (player == 0) {
                return;
            }
            SetHp(self->savedHp());
            RestoreD0(self->savedD0());
        }
        if (player != 0) {
            self->savedHp() = GetHp();
            *(float *)&self->savedD0() = (float)GetD0();  // fstp dword [+0xD0]: float bits
        }
    }
}

// 00C40DA0  FUN_00c40da0  size=664  [callgraph]
// Spawns "Pl1500" (object 0x11500) and restores the carried-over state (mode 9).
void __fastcall FUN_00c40da0(int *param_1)
{
    using namespace PlayerManagerImplement_p1;
    PlayerManagerImplement *self = (PlayerManagerImplement *)param_1;
    unsigned int objFile;
    int file;
    int *player;
    unsigned char dataSet[8];  // local_cc
    int object;                // local_c4
    SpawnDesc desc;            // local_c0 .. local_90

    InitSetInfo();
    if (self->handleArray()[kArrayData] != 0) {
        self->handleArray()[kArrayCount] = 0;
    }
    if (DAT_01bea030 != 2) {
        FUN_009c7e10(self->setupRecord(), DAT_01bea030);
        if ((DAT_01bea030 == 6) || (DAT_01bea030 == 7)) {
            self->points() = 0;
        }
        else {
            self->points() = DAT_01b7589c;
        }
        if ((DAT_01bea030 == 6) || (DAT_01bea030 == 7)) {
            self->countD4() = 0;
            self->countD8() = 0;
            self->skipRestore() = 1;
        }
        else {
            self->countD4() = Call94E9B0(0x3855170F);
            self->countD8() = Call94E9B0(0x4CBFDA41);
        }
        GetDataAtSet(self->playerData(), 0x11500, 0);
        CallA7CA40();
        CallDE3530();
        if ((DAT_01bea02c == 0) && (DAT_01bea028 == DAT_01bea024)) {
            objFile = *DAT_01bea01c;
        }
        else {
            objFile = 0xFFFFFFFF;
        }
        desc.setInfo = desc.setInfoData;
        desc.name = "Pl1500";
        desc.objId = 0x11500;
        desc.objId2 = 0x11500;
        desc.flags = 0;
        GetDataAtSet(dataSet, objFile, 0);
        objFile = FindFile(DAT_01657e1c, 0);
        desc.modelData = EntryModelData(objFile, 0);
        desc.paramFile = FindFileByName("_param.bxm", 0);
        file = FindFile(DAT_0164518c, 0);
        objFile = FindFile(DAT_01645174, 0);
        desc.file28 = FindFile(DAT_01645170, 0);
        desc.file24 = objFile;
        if (file != 0) {
            desc.file24 = 0;
            desc.file28 = file;
        }
        object = SpawnObject(&desc);
        if ((object != 0) && (BehaviorOf() != 0)) {
            SetupCloth(dataSet);
        }
        unsigned int *textureId = DAT_018a9770;
        int *slot = param_1 + 3;  // textureSlot(0), 7 dwords per slot
        do {
            FUN_00c13490((undefined4)slot, *textureId);
            textureId = textureId + 1;
            slot = slot + 7;
        } while ((int)textureId < 0x18A9784);
        int *array = self->handleArray();
        int handle = HandleOf();
        VCall1(array, 8, handle);  // push_back(handle)
        self->vf40();
        if (self->vf28(0) == 0) {
            player = 0;
        }
        else {
            player = BehaviorOf();
        }
        if (self->skipRestore() == 0) {
            if (player == 0) {
                return;
            }
            SetHp(self->savedHp());
            RestoreD0(self->savedD0());
        }
        if (player != 0) {
            self->savedHp() = GetHp();
            *(float *)&self->savedD0() = (float)GetD0();  // fstp dword [+0xD0]: float bits
        }
    }
}

// 00C41040  PlayerManagerImplement::vf08  size=113  [class]
// Phase start: spawns the player for the current mode.
void PlayerManagerImplement::vf08()
{
    using namespace PlayerManagerImplement_p1;
    if (handleArray()[kArrayData] != 0) {
        handleArray()[kArrayCount] = 0;
    }
    if (DAT_01bea030 != 2) {
        FUN_009c7e10(setupRecord(), DAT_01bea030);
        // ? ECX of the three spawn helpers is not shown by the decompiler; they operate on this
        // object (same +0xE0 / +0xF8 fields), so `this` is passed.
        if (DAT_01bea030 == 8) {
            FUN_00c40b00((int *)this);
        }
        if (DAT_01bea030 == 9) {
            FUN_00c40da0((int *)this);
        }
        if (handleArray()[kArrayCount] == 0) {
            FUN_00c40850((int *)this);
        }
        skipRestore() = 0;
    }
}

// 00C410C0  PlayerManagerImplement::vf0C  size=322  [class]
// Phase end: saves HP / D0 / points, releases every player object, then calls slot 0x44.
void PlayerManagerImplement::vf0C()
{
    using namespace PlayerManagerImplement_p1;
    PlayerManagerImplement *self = this;
    int result;

    result = vf28(0);
    if ((DAT_01be8f14 == 0) && (result != 0)) {
        int *player = BehaviorOf();
        if (player != 0) {
            VCall1(player, 4, (void *)DAT_01be9db8);
            if (IsInList(DAT_01be9db8) != 0) {
                savedHp() = GetHp();
                *(float *)&savedD0() = (float)GetD0();  // fstp dword [+0xD0]: float bits
                DAT_01b7589c = points();
                if (9999998 < DAT_01b7589c) {
                    DAT_01b7589c = kPointsMax;
                }
            }
        }
        FUN_009c69c0((undefined4 *)setupRecord(), DAT_01bea030);
    }
    int cursor = handleArray()[kArrayData];
    if (cursor != cursor + handleArray()[kArrayCount] * 4) {
        int end;
        do {
            LookupHandle();
            ReleaseObject();
            int *array = self->handleArray();
            unsigned int count = (unsigned int)array[kArrayCount];
            int data = array[kArrayData];
            end = data + count * 4;
            if ((((cursor != end) && (data != 0)) && (count != 0)) &&
                ((unsigned int)((cursor - data) >> 2) < count)) {
                // erase(cursor): shift the following handles down by one
                int element = cursor;
                while (element != end - 4) {
                    element = element + 4;
                    AssignHandle(element);
                    // (Ghidra's "param_1 = unaff_EBX" here is an artifact: the machine code
                    // reloads `this` from its stack spill after the loop, so self is unchanged)
                }
                array[kArrayCount] = array[kArrayCount] - 1;
                end = cursor;
            }
            cursor = end;
        } while (end != self->handleArray()[kArrayData] + self->handleArray()[kArrayCount] * 4);
    }
    int i = 5;
    do {
        CallF972F0();
        i = i - 1;
    } while (i != 0);
    self->vf44();  // tail jump through the vftable (slot 0x44)
}

// 00C41210  PlayerManagerImplement::vf40  size=104  [class]
// Spawns "Balkan" (object 0x4B000) at (0, -300, 0).
void PlayerManagerImplement::vf40()
{
    using namespace PlayerManagerImplement_p1;
    // local_90: 0x80-byte set info; the position (local_40..local_38) is part of it at +0x50
    unsigned int setInfo[0x80 / 4];

    InitSetInfo();
    setInfo[0x50 / 4] = 0;           // posX
    setInfo[0x54 / 4] = 0xC3960000;  // posY = -300.0f
    setInfo[0x58 / 4] = 0;           // posZ
    ClearHandle();
    FUN_00a82090((undefined4)"Balkan", 0x4B000, (undefined4)setInfo);
    int handle = HandleOf();
    AssignHandle(handle);
}

// 00C4CDF0  PlayerManagerImplement::vf20  size=7  [class]
int PlayerManagerImplement::vf20()
{
    return (int)playerPos();
}

// 00C4CE00  PlayerManagerImplement::vf2C  size=7  [class]
int PlayerManagerImplement::vf2C()
{
    return (int)playerData();
}

// 00C4CE10  PlayerManagerImplement::vf14  size=10  [class]
void PlayerManagerImplement::vf14(undefined4 value)
{
    value08() = value;
}

// 00C4CE20  PlayerManagerImplement::vf18  size=4  [class]
undefined4 PlayerManagerImplement::vf18()
{
    return value08();
}

// 00C4CE30  PlayerManagerImplement::vf1C  size=121  [class]
// Schedules `scale` to be applied after applyFrames and reset to 1.0 resetFrames later; applies
// it at once when no apply timer is running.
void PlayerManagerImplement::vf1C(float scale, int resetFrames, int applyFrames)
{
    using namespace PlayerManagerImplement_p1;
    if (applyTimer() < 1) {
        applyTimer() = applyFrames;
    }
    if (resetTimer() < 1) {
        resetTimer() = resetFrames;
    }
    scaleValue() = scale;
    if (applyTimer() < 1) {
        SetScale(0, scale);
        SetScale(1, scale);
        SetScale(2, scale);
        return;
    }
}

// 00C4CEB0  PlayerManagerImplement::~PlayerManagerImplement  size=73  [class]
PlayerManagerImplement::~PlayerManagerImplement()
{
    using namespace PlayerManagerImplement_p1;
    // vftable = PlayerManagerImplement::vftable
    if (handleArray() != 0) {
        VCall1(handleArray(), 0, 1);  // scalar deleting destructor
        handleArray() = 0;
    }
    int i = 4;
    do {
        DestroyTexture();  // textureSlot(i)
        i = i - 1;
    } while (-1 < i);
    // vftable = PlayerManager::vftable
}

// 00C4CF00  PlayerManagerImplement::vf00  size=30  [class]
undefined4 * PlayerManagerImplement::vf00(byte flags)
{
    this->~PlayerManagerImplement();
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// src/managers/scenariomanager/ScenarioManagerImplement.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "ScenarioManagerImplement.h"

// ---------------------------------------------------------------------------------------------
// Imports
// ---------------------------------------------------------------------------------------------
extern "C" __declspec(dllimport) void __stdcall EnterCriticalSection(void *criticalSection);
extern "C" __declspec(dllimport) void __stdcall LeaveCriticalSection(void *criticalSection);

// ---------------------------------------------------------------------------------------------
// Data referenced by this part
// ---------------------------------------------------------------------------------------------
extern int DAT_018a1438[];              // room-creator table: { roomNo, create(arg) } pairs, 31 entries
extern int DAT_018a1528[];              // last entry of that table (default creator)
extern int DAT_01b7bd48;                // default heap (passed by address to the allocators)
extern int DAT_01be8e44;
extern int DAT_01be8e54;
extern unsigned int DAT_01bea060;       // global flags
extern unsigned int DAT_01bea070;       // global flags
extern int *DAT_01be9a34;               // ScenarioRegionManagerImplement singleton
extern ScenarioManager *DAT_01be9a30;   // ScenarioManager singleton

// ---------------------------------------------------------------------------------------------
// Helpers
// ---------------------------------------------------------------------------------------------
namespace ScenarioManagerImplement_p1 {

// Entry of the room-creator table at 0x018A1438.
struct RoomCreator {
    int roomNo;
    int *(*create)(undefined4 arg);
};

// Virtual call through byte offset `offset` of obj's vftable (ECX = obj).
inline int VCall0(int *obj, int offset)
{
    return ((int (__thiscall *)(int *))((*(void ***)obj)[offset / 4]))(obj);
}
inline int VCall1(int *obj, int offset, int arg)
{
    return ((int (__thiscall *)(int *, int))((*(void ***)obj)[offset / 4]))(obj, arg);
}
inline int VCall2(int *obj, int offset, int arg1, int arg2)
{
    return ((int (__thiscall *)(int *, int, int))((*(void ***)obj)[offset / 4]))(obj, arg1, arg2);
}
inline int VCall3(int *obj, int offset, int arg1, int arg2, int arg3)
{
    return ((int (__thiscall *)(int *, int, int, int))((*(void ***)obj)[offset / 4]))(obj, arg1, arg2, arg3);
}
inline char VCall1Char(int *obj, int offset, void *arg)
{
    return ((char (__thiscall *)(int *, void *))((*(void ***)obj)[offset / 4]))(obj, arg);
}

// The functions.h prototypes of these callees do not match their call sites (return value dropped,
// or an ECX argument the decompiler did not show). These wrappers call them the way the machine code
// does: every __thiscall callee gets its ECX object as the first argument.
#define SMI_THISCALL(ret, addr, ...) ((ret (__thiscall *)(__VA_ARGS__))(void *)(addr))
static void *const kFadeManager = (void *)0x01EDC6C0;   // ECX of cFade::set / FUN_00eb4340 / FUN_00ebdd50
static void *const kLockConfig = (void *)0x018B9140;    // ECX of FUN_00d466f0
inline void PlayBgmEvent(char *name)  // FUN_00e5e1b0 (cdecl)
{
    FUN_00e5e1b0((undefined4)name);
}
inline void PlaySeEvent(char *name)  // FUN_00e5e050 (cdecl)
{
    FUN_00e5e050((undefined4)name, 0);
}
inline void CallD89E90(int a, int b)  // FUN_00d89e90 (cdecl)
{
    ((void (*)(int, int))FUN_00d89e90)(a, b);
}
inline void ErrorMessage(const char *message)  // FUN_00dd5650 (cdecl)
{
    ((void (*)(const char *))FUN_00dd5650)(message);
}
inline void CallDB21E0()  // FUN_00db21e0, ECX = 0x01BEB8E0
{
    SMI_THISCALL(void, FUN_00db21e0, void *)((void *)0x01BEB8E0);
}
inline void FadeStop(int id)  // FUN_00ebdd50, ECX = fade manager
{
    SMI_THISCALL(void, FUN_00ebdd50, void *, int)(kFadeManager, id);
}
inline int IsFadeDone(int id)  // FUN_00eb4340, ECX = fade manager
{
    return SMI_THISCALL(int, FUN_00eb4340, void *, int)(kFadeManager, id);
}
// 00EC1AB0 cFade::set, ECX = fade manager.
inline int FadeSet(int id, unsigned int colorFrom, unsigned int colorTo, int frames, int arg5, int arg6,
                   int arg7)
{
    return SMI_THISCALL(int, 0x00EC1AB0, void *, int, unsigned int, unsigned int, int, int, int, int)(
        kFadeManager, id, colorFrom, colorTo, frames, arg5, arg6, arg7);
}
inline int *CallD44EB0(undefined4 roomNo)  // FUN_00d44eb0: phase-object factory for a room
{
    return FUN_00d44eb0((int)roomNo);
}
inline int *Call401110()  // FUN_00401110 (cdecl)
{
    return (int *)FUN_00401110();
}
inline float10 CallE049B0()  // FUN_00e049b0, ECX = 0x01BE939C
{
    return SMI_THISCALL(float10, FUN_00e049b0, void *)((void *)0x01BE939C);
}
inline void CallCAD2A0()  // FUN_00cad2a0, ECX = 0x01DC2010
{
    SMI_THISCALL(void, FUN_00cad2a0, void *)((void *)0x01DC2010);
}
inline void CallDD8DA0(void *self)  // FUN_00dd8da0
{
    SMI_THISCALL(void, FUN_00dd8da0, void *)(self);
}
// The thunks below (vf48/vf4C/vf50/vf54/vf5C/vf60/vf70/vf74) are `add ecx, N; jmp callee`: the callee
// also receives whatever stack arguments the caller pushed. The ScenarioManager prototypes declare
// these virtuals without parameters, so only ECX can be forwarded here. // ?
inline void CallDD73F0(void *self)  // FUN_00dd73f0
{
    SMI_THISCALL(void, FUN_00dd73f0, void *)(self);
}
inline void CallDD8520(void *self)  // FUN_00dd8520
{
    SMI_THISCALL(void, FUN_00dd8520, void *)(self);
}
inline void CallDD8570(void *self)  // FUN_00dd8570
{
    SMI_THISCALL(void, FUN_00dd8570, void *)(self);
}
inline void CallA6E770(void *self)  // FUN_00a6e770
{
    SMI_THISCALL(void, FUN_00a6e770, void *)(self);
}
inline void CallA6E7C0(void *self)  // FUN_00a6e7c0
{
    SMI_THISCALL(void, FUN_00a6e7c0, void *)(self);
}
inline void CallA701F0(void *self)  // FUN_00a701f0
{
    SMI_THISCALL(void, FUN_00a701f0, void *)(self);
}
inline void CallA70290(void *self)  // FUN_00a70290
{
    SMI_THISCALL(void, FUN_00a70290, void *)(self);
}
inline void CallDD8760(void *self)  // FUN_00dd8760
{
    SMI_THISCALL(void, FUN_00dd8760, void *)(self);
}
inline int CallDD7500(void *self)  // FUN_00dd7500
{
    return SMI_THISCALL(int, FUN_00dd7500, void *)(self);
}
inline void CallDD7510(void *self)  // FUN_00dd7510
{
    SMI_THISCALL(void, FUN_00dd7510, void *)(self);
}
inline void CallDD85C0(void *self, int id)  // FUN_00dd85c0
{
    SMI_THISCALL(void, FUN_00dd85c0, void *, int)(self, id);
}
inline int IsLockingEnabled()  // FUN_00d466f0, ECX = 0x018B9140
{
    return SMI_THISCALL(int, FUN_00d466f0, void *)(kLockConfig);
}
inline int CallA6F3C0(int self, undefined4 *value)  // FUN_00a6f3c0
{
    return SMI_THISCALL(int, FUN_00a6f3c0, int, undefined4 *)(self, value);
}
inline void CallA6F360(undefined4 *node, int flags)  // FUN_00a6f360 (node deleting destructor)
{
    SMI_THISCALL(void, FUN_00a6f360, undefined4 *, int)(node, flags);
}
inline void *MemAlloc(unsigned int size, int *heap)  // FUN_00dd3500 (cdecl) returns the block in EAX
{
    return ((void *(*)(unsigned int, int *))FUN_00dd3500)(size, heap);
}
inline void *MemAllocDD3580(unsigned int size, int *heap)  // FUN_00dd3580 (cdecl) returns the block in EAX
{
    return ((void *(*)(unsigned int, int *))FUN_00dd3580)(size, heap);
}
inline void CallEAA6E0(int *obj, float a, float b)  // FUN_00eaa6e0
{
    SMI_THISCALL(void, FUN_00eaa6e0, int *, float, float)(obj, a, b);
}
inline undefined4 HashName(undefined4 name)  // FUN_00e03ea0 (cdecl) returns the hash in EAX
{
    return ((undefined4 (*)(undefined4))FUN_00e03ea0)(name);
}
inline undefined4 CallA71830(int self, float key, undefined4 value)  // FUN_00a71830 (__thiscall)
{
    return SMI_THISCALL(undefined4, FUN_00a71830, int, float, undefined4)(self, key, value);
}
inline undefined1 CallA71770(int self, undefined4 *key, undefined4 value)  // FUN_00a71770 (__thiscall)
{
    return SMI_THISCALL(undefined1, FUN_00a71770, int, undefined4 *, undefined4)(self, key, value);
}
inline undefined4 *NewEspControler(void *block)  // 00EAA060 cEspControler::cEspControler, ECX = block
{
    return SMI_THISCALL(undefined4 *, 0x00EAA060, void *)(block);
}
inline undefined4 CallE01EB0(void *self, undefined4 *esp)  // FUN_00e01eb0
{
    return SMI_THISCALL(undefined4, FUN_00e01eb0, void *, undefined4 *)(self, esp);
}
inline int CallE01540(undefined4 roomNo, undefined4 arg, undefined4 value)  // FUN_00e01540 (cdecl)
{
    return ((int (*)(undefined4, undefined4, undefined4))FUN_00e01540)(roomNo, arg, value);
}
inline void CallDD6DF0(void *self)  // FUN_00dd6df0
{
    SMI_THISCALL(void, FUN_00dd6df0, void *)(self);
}
inline void Call92D400(void *self)  // FUN_0092d400
{
    SMI_THISCALL(void, FUN_0092d400, void *)(self);
}
inline void CallDD8A10(void *self, unsigned int a, unsigned int b, int *heap)  // FUN_00dd8a10
{
    SMI_THISCALL(void, FUN_00dd8a10, void *, unsigned int, unsigned int, int *)(self, a, b, heap);
}
// 00A76020 ScenarioRegionManagerImplement::ScenarioRegionManagerImplement, ECX = block.
inline int *NewScenarioRegionManager(void *block, int *heap)
{
    return SMI_THISCALL(int *, 0x00A76020, void *, int *)(block, heap);
}
inline void CallDD8450(void *self)  // FUN_00dd8450
{
    SMI_THISCALL(void, FUN_00dd8450, void *)(self);
}
inline void ThunkCallDD8450(void *self)  // thunk_FUN_00dd8450 (00DD8A00)
{
    SMI_THISCALL(void, thunk_FUN_00dd8450, void *)(self);
}
inline void HkMemoryAllocatorDtor(void *self)  // 0100EE50 hkMemoryAllocator::~hkMemoryAllocator
{
    SMI_THISCALL(void, 0x0100EE50, void *)(self);
}

}  // namespace ScenarioManagerImplement_p1

// 00A6D6F0  ScenarioManagerImplement::vf04  size=216  [class]
// Puts a new room object for *roomNo in the first free slot and starts it.
void ScenarioManagerImplement::vf04(int *roomNo, undefined4 createArg)
{
    using namespace ScenarioManagerImplement_p1;
    RoomSlot *slot;
    RoomCreator *entry;
    unsigned int offset;
    int *room;
    int i;
    char name[16];

    i = 0;
    slot = roomSlots();
    while (slot->room != 0) {
        i = i + 1;
        slot = slot + 1;
        if (7 < i) {
            return;
        }
    }
    entry = (RoomCreator *)DAT_018a1438;
    offset = 0;
    do {
        if (entry->roomNo == *roomNo) goto found;
        offset = offset + 8;
        entry = entry + 1;
    } while (offset < 0xf8);
    entry = (RoomCreator *)DAT_018a1528;
found:
    room = entry->create(createArg);
    if (room != 0) {
        slot->room = room;
        slot->active = 0;
        room[2] = *roomNo;
        room[3] = (int)entry;
        VCall0(room, 0);
        slot->active = 1;
        _sprintf_s(name, 0x10, "bgm_r%03x_start", room[2]);
        PlayBgmEvent(name);
        _sprintf_s(name, 0x10, "se_r%03x_start", room[2]);
        PlaySeEvent(name);
    }
    return;
}

// 00A6D7D0  ScenarioManagerImplement::vf0C  size=61  [class]
void ScenarioManagerImplement::vf0C(int *roomNo)
{
    using namespace ScenarioManagerImplement_p1;
    RoomSlot *slot = roomSlots();

    for (int n = 0; n < 8; n++) {
        int *room = slot->room;
        if (room != 0 && room[2] == *roomNo) {
            VCall0(room, 0xc);
        }
        slot = slot + 1;
    }
    CallD89E90(0x38, *roomNo);
    return;
}

// 00A6D810  ScenarioManagerImplement::vf08  size=135  [class]
// Ends and deletes the room objects of *roomNo.
void ScenarioManagerImplement::vf08(int *roomNo)
{
    using namespace ScenarioManagerImplement_p1;
    int id = *roomNo;
    RoomSlot *slot = roomSlots();
    char name[16];

    for (int n = 0; n < 8; n++) {
        int *room = slot->room;
        if (room != 0 && room[2] == id) {
            VCall0(room, 8);
            if (slot->room != 0) {
                VCall1(slot->room, 0x14, 1);  // deleting destructor
                slot->room = 0;
            }
            _sprintf_s(name, 0x10, "bgm_r%03x_end", id);
            PlayBgmEvent(name);
            _sprintf_s(name, 0x10, "se_r%03x_end", id);
            PlaySeEvent(name);
        }
        slot = slot + 1;
    }
    return;
}

// 00A6D8A0  ScenarioManagerImplement::onStartupRoom  size=107  [class]
void ScenarioManagerImplement::onStartupRoom(undefined4 roomNo)
{
    using namespace ScenarioManagerImplement_p1;
    int *factory;
    int *phaseObject;

    factory = CallD44EB0(roomNo);
    if (factory != 0) {
        // factory+4 holds the creator function (not a vftable)
        phaseObject = ((int *(*)(int *))factory[1])(&DAT_01b7bd48);
        if (phaseObject == 0) {
            ErrorMessage("ScenarioManagerImplement::onStartupRoom Phase Object creater error");
            return;
        }
        phase() = phaseObject;
        phaseStarted() = 0;
        phaseObject[1] = roomNo;
        phase()[2] = (int)factory;
        VCall0(phase(), 4);
    }
    return;
}

// 00A6D910  ScenarioManagerImplement::vf14  size=34  [class]
void ScenarioManagerImplement::vf14()
{
    using namespace ScenarioManagerImplement_p1;
    if (phase() != 0) {
        VCall0(phase(), 8);
        phaseStarted() = 1;
    }
    return;
}

// 00A6D940  ScenarioManagerImplement::vf18  size=74  [class]
void ScenarioManagerImplement::vf18(int roomNo)
{
    using namespace ScenarioManagerImplement_p1;
    int *phaseObject = phase();

    if (phaseObject != 0 && phaseObject[1] == roomNo) {
        VCall0(phaseObject, 0x10);
        VCall0(phase(), 0x2c);
        if (phase() != 0) {
            VCall1(phase(), 0, 1);  // deleting destructor
            phase() = 0;
        }
    }
    return;
}

// 00A6D990  ScenarioManagerImplement::vf1C  size=42  [class]
void ScenarioManagerImplement::vf1C(int roomNo, undefined4 arg1, undefined4 arg2)
{
    using namespace ScenarioManagerImplement_p1;
    int *phaseObject = phase();

    if (phaseObject != 0 && phaseObject[1] == roomNo) {
        VCall3(phaseObject, 0x14, roomNo, (int)arg1, (int)arg2);
    }
    return;
}

// 00A6D9C0  ScenarioManagerImplement::vf20  size=37  [class]
void ScenarioManagerImplement::vf20(int roomNo, undefined4 arg)
{
    using namespace ScenarioManagerImplement_p1;
    int *phaseObject = phase();

    if (phaseObject != 0 && phaseObject[1] == roomNo) {
        VCall2(phaseObject, 0x1c, roomNo, (int)arg);
    }
    return;
}

// 00A6D9F0  ScenarioManagerImplement::vf24  size=25  [class]
void ScenarioManagerImplement::vf24()
{
    using namespace ScenarioManagerImplement_p1;
    if (phase() != 0) {
        VCall0(phase(), 0x20);  // tail jump
        return;
    }
    return;
}

// 00A6DA10  ScenarioManagerImplement::vf28  size=25  [class]
void ScenarioManagerImplement::vf28()
{
    using namespace ScenarioManagerImplement_p1;
    if (phase() != 0) {
        VCall0(phase(), 0x24);  // tail jump
        return;
    }
    return;
}

// 00A6DA30  ScenarioManagerImplement::vf2C  size=34  [class]
void ScenarioManagerImplement::vf2C()
{
    using namespace ScenarioManagerImplement_p1;
    if (DAT_01be8e44 == 2 && phase() != 0) {
        VCall0(phase(), 0x28);  // tail jump
        return;
    }
    return;
}

// 00A6DA60  ScenarioManagerImplement::vf30  size=19  [class]
undefined4 ScenarioManagerImplement::vf30()
{
    if (phaseStarted() != 0) {
        return (undefined4)phase();
    }
    return 0;
}

// 00A6DA80  ScenarioManagerImplement::vf34  size=12  [class]
bool ScenarioManagerImplement::vf34()
{
    return DAT_01be8e54 != 0;
}

// 00A6DA90  ScenarioManagerImplement::vf38  size=89  [class]
// Enters event mode (sets global flag bits, optionally fades out).
void ScenarioManagerImplement::vf38(uint flags)
{
    using namespace ScenarioManagerImplement_p1;
    DAT_01bea060 = DAT_01bea060 | 0x80000000;
    DAT_01bea070 = DAT_01bea070 | 0x2200000;
    eventActive() = 1;
    if ((flags & 0x8000000) == 0) {
        CallDB21E0();
    }
    if ((flags & 0x4000000) != 0) {
        FadeSet(0xfffffffd, 0, 0xff000000, 0xf, 1, 0, 0x68);
    }
    return;
}

// 00A6DAF0  ScenarioManagerImplement::vf3C  size=68  [class]
void ScenarioManagerImplement::vf3C(uint flags)
{
    using namespace ScenarioManagerImplement_p1;
    if ((flags & 0x20000000) == 0) {
        while (!vf34()) {
            VCall1((int *)this, 0x50, 1);  // vf50, called with one argument
        }
    }
    vf38(flags);
    return;
}

// 00A6DB40  ScenarioManagerImplement::vf40  size=58  [class]
// Leaves event mode.
void ScenarioManagerImplement::vf40(uint flags)
{
    using namespace ScenarioManagerImplement_p1;
    DAT_01bea060 = DAT_01bea060 & 0x7fffffff;
    DAT_01bea070 = DAT_01bea070 & 0xfddfffff;
    eventActive() = 0;
    if ((flags & 0x4000000) == 0) {
        FadeStop(0xfffffffd);  // tail call: the flags argument slot is overwritten with -3
        return;
    }
    return;
}

// 00A6DB80  ScenarioManagerImplement::vf9C  size=42  [class]
// Returns the room object whose room number is roomNo, or 0.
int ScenarioManagerImplement::vf9C(int roomNo)
{
    RoomSlot *slot = roomSlots();

    for (int i = 0; i < 8; i++) {
        int *room = slot[i].room;
        if (room != 0 && room[2] == roomNo) {
            return (int)room;
        }
    }
    return 0;
}

// 00A6DBE0  ScenarioManagerImplement::vf78  size=79  [class]
void ScenarioManagerImplement::vf78(undefined4 unused, uint flags)
{
    using namespace ScenarioManagerImplement_p1;
    if ((DAT_01bea060 & 0x20000000) == 0) {
        vf38(flags);
        vf40(0);
        if ((flags & 0x4000000) != 0) {
            FadeSet(0xfffffffd, 0xff000000, 0, 0xf, 0, 0, 0x68);
        }
    }
    return;
}

// 00A6DC30  ScenarioManagerImplement::vf7C  size=95  [class]
void ScenarioManagerImplement::vf7C(undefined4 color, undefined4 frames, int flag)
{
    using namespace ScenarioManagerImplement_p1;
    FadeSet(0xfffffffd, 0, color, (int)frames, flag != 0, 0, 0x68);
    while (IsFadeDone(0xfffffffd) == 0) {
        VCall1((int *)this, 0x50, 1);  // vf50, called with one argument
    }
    return;
}

// 00A6DC90  ScenarioManagerImplement::vf80  size=95  [class]
void ScenarioManagerImplement::vf80(undefined4 color, undefined4 frames, int flag)
{
    using namespace ScenarioManagerImplement_p1;
    FadeSet(0xfffffffd, color, 0, (int)frames, flag != 0, 0, 0x68);
    while (IsFadeDone(0xfffffffd) == 0) {
        VCall1((int *)this, 0x50, 1);  // vf50, called with one argument
    }
    return;
}

// 00A6DCF0  ScenarioManagerImplement::vf84  size=95  [class]
void ScenarioManagerImplement::vf84(undefined4 color, undefined4 frames, int flag)
{
    using namespace ScenarioManagerImplement_p1;
    FadeSet(0xfffffffd, color, color, (int)frames, flag != 0, 0, 0x68);
    while (IsFadeDone(0xfffffffd) == 0) {
        VCall1((int *)this, 0x50, 1);  // vf50, called with one argument
    }
    return;
}

// 00A6DD50  ScenarioManagerImplement::vf88  size=13  [class]
void ScenarioManagerImplement::vf88()
{
    using namespace ScenarioManagerImplement_p1;
    FadeStop(0xfffffffd);
    return;
}

// 00A6DD60  ScenarioManagerImplement::vf8C  size=5  [class]
undefined4 ScenarioManagerImplement::vf8C()
{
    return 0;
}

// 00A6DD70  ScenarioManagerImplement::vf90  size=5  [class]
undefined4 ScenarioManagerImplement::vf90()
{
    return 0;
}

// 00A6F440  ScenarioManagerImplement::vf00  size=155  [class]
// Per-frame update: region manager, started phase object, active room objects.
void ScenarioManagerImplement::vf00()
{
    using namespace ScenarioManagerImplement_p1;
    RoomSlot *slot;
    int *holder;
    int *target;
    float10 value;

    VCall0(DAT_01be9a34, 4);
    if (phase() != 0 && phaseStarted() != 0) {
        VCall0(phase(), 0xc);
        VCall0(phase(), 0x18);
    }
    slot = roomSlots();
    for (int n = 0; n < 8; n++) {
        if (slot->room != 0 && slot->active != 0) {
            VCall0(slot->room, 4);
        }
        slot = slot + 1;
    }
    holder = (int *)Call401110();
    target = (int *)*holder;
    value = CallE049B0();
    SMI_THISCALL(void, *target, int *, float)(holder, (float)(value * (float10)0.016666668f));  // * 1/60, ECX = holder
    if (flagBC() == 0) {
        CallCAD2A0();
    }
    CallDD8DA0((char *)this + 0xc);  // tail jump
    return;
}

// 00A6F4E0  ScenarioManagerImplement::vf70  size=8  [class]
void ScenarioManagerImplement::vf70()
{
    using namespace ScenarioManagerImplement_p1;
    CallDD73F0((char *)this + 0xc);
    return;
}

// 00A6F4F0  ScenarioManagerImplement::vf4C  size=8  [class]
void ScenarioManagerImplement::vf4C()
{
    using namespace ScenarioManagerImplement_p1;
    CallDD8520((char *)this + 0xc);
    return;
}

// 00A6F500  ScenarioManagerImplement::vf50  size=8  [class]
void ScenarioManagerImplement::vf50()
{
    using namespace ScenarioManagerImplement_p1;
    CallDD8570((char *)this + 0xc);
    return;
}

// 00A6F510  ScenarioManagerImplement::vf5C  size=8  [class]
void ScenarioManagerImplement::vf5C()
{
    using namespace ScenarioManagerImplement_p1;
    CallA6E770((char *)this + 8);
    return;
}

// 00A6F520  ScenarioManagerImplement::vf60  size=8  [class]
void ScenarioManagerImplement::vf60()
{
    using namespace ScenarioManagerImplement_p1;
    CallA6E7C0((char *)this + 8);
    return;
}

// 00A6F530  ScenarioManagerImplement::vf64  size=44  [class]
void ScenarioManagerImplement::vf64()
{
    using namespace ScenarioManagerImplement_p1;
    CallDD8760((char *)this + 0xc);
    for (unsigned int i = 0; i < entryCount(); i++) {
        entries()[i].id = 0;
    }
    return;
}

// 00A6F560  ScenarioManagerImplement::vf68  size=55  [class]
// Returns the entry whose id is `id`, or 0.
int *ScenarioManagerImplement::vf68(int id)
{
    for (unsigned int i = 0; i < entryCount(); i++) {
        if (entries()[i].id == id) {
            return (int *)&entries()[i];
        }
    }
    return 0;
}

// 00A6F5A0  ScenarioManagerImplement::vf6C  size=64  [class]
// Returns the entry whose id is the current one (FUN_00dd7500), or 0.
int *ScenarioManagerImplement::vf6C()
{
    using namespace ScenarioManagerImplement_p1;
    int id = CallDD7500((char *)this + 0xc);

    for (unsigned int i = 0; i < entryCount(); i++) {
        if (entries()[i].id == id) {
            return (int *)&entries()[i];
        }
    }
    return 0;
}

// 00A6F5E0  ScenarioManagerImplement::vf74  size=8  [class]
void ScenarioManagerImplement::vf74()
{
    using namespace ScenarioManagerImplement_p1;
    CallDD7510((char *)this + 0xc);
    return;
}

// 00A71770  FUN_00a71770  size=181  [callgraph]
// Adds a { key, value } node to the container at self+0x10 unless value is already known
// (FUN_00a6f3c0). self: +0x10 container object, +0x60 CRITICAL_SECTION, +0x78 locking enabled.
undefined1 FUN_00a71770(int self, undefined4 key, undefined4 *value)
{
    using namespace ScenarioManagerImplement_p1;
    undefined4 *node;
    undefined1 result;
    char inserted;

    if (IsLockingEnabled() != 0 && *(int *)(self + 0x78) != 0) {
        EnterCriticalSection((void *)(self + 0x60));
    }
    result = 0;
    if (CallA6F3C0(self, value) == 0) {
        node = (undefined4 *)MemAlloc(8, &DAT_01b7bd48);
        if (node != 0) {
            node[0] = 0;
            node[1] = 0;
        }
        node[0] = key;
        node[1] = (undefined4)value;
        inserted = VCall1Char((int *)(self + 0x10), 8, &node);
        if (inserted == '\0') {
            result = 0;
            if (node != 0) {
                CallA6F360(node, 1);
            }
        }
        else {
            result = 1;
        }
    }
    if (IsLockingEnabled() != 0 && *(int *)(self + 0x78) != 0) {
        LeaveCriticalSection((void *)(self + 0x60));
    }
    return result;
}

// 00A71830  FUN_00a71830  size=306  [callgraph]
// Destroys and removes every node of the array at self+0x14 (count self+0x18) whose value is `value`.
undefined4 FUN_00a71830(int self, undefined4 key, int value)
{
    using namespace ScenarioManagerImplement_p1;
    int *node;
    unsigned int count;
    int data;
    undefined4 *it;
    undefined4 *next;
    undefined4 *p;

    if (IsLockingEnabled() != 0 && *(int *)(self + 0x78) != 0) {
        EnterCriticalSection((void *)(self + 0x60));
    }
    it = *(undefined4 **)(self + 0x14);
    if (it != it + *(int *)(self + 0x18)) {
        do {
            node = (int *)*it;
            if (node[1] == value) {
                if (node[0] != 0) {
                    CallEAA6E0((int *)node[0], *(float *)&key, 0.0f);
                    if (node[0] != 0) {
                        VCall1((int *)node[0], 0, 1);  // deleting destructor
                        node[0] = 0;
                    }
                }
                if (node[0] != 0) {
                    VCall3((int *)node[0], 8, 0x41200000 /* 10.0f */, 0, 1);
                    if (node[0] != 0) {
                        VCall1((int *)node[0], 0, 1);  // deleting destructor
                        node[0] = 0;
                    }
                }
                node[1] = 0;
                FUN_00dd4920((int)node);
                count = *(unsigned int *)(self + 0x18);
                data = *(int *)(self + 0x14);
                next = (undefined4 *)(data + count * 4);
                if (it != next && data != 0 && count != 0 &&
                    (unsigned int)(((int)it - data) >> 2) < count) {
                    for (p = it; p != next - 1; p = p + 1) {
                        *p = p[1];
                    }
                    *(int *)(self + 0x18) = *(int *)(self + 0x18) - 1;
                    next = it;
                }
            }
            else {
                next = it + 1;
            }
            it = next;
        } while (next != (undefined4 *)(*(int *)(self + 0x14) + *(int *)(self + 0x18) * 4));
    }
    if (IsLockingEnabled() != 0 && *(int *)(self + 0x78) != 0) {
        LeaveCriticalSection((void *)(self + 0x60));
    }
    return 1;
}

// 00A71970  FUN_00a71970  size=192  [callgraph]
// Destroys every node of the array at self+0x14 and empties it.
void __fastcall FUN_00a71970(int self)
{
    using namespace ScenarioManagerImplement_p1;
    int *node;
    undefined4 *it;

    if (IsLockingEnabled() != 0 && *(int *)(self + 0x78) != 0) {
        EnterCriticalSection((void *)(self + 0x60));
    }
    if (*(int *)(self + 0x18) != 0 &&
        (it = *(undefined4 **)(self + 0x14), it != it + *(int *)(self + 0x18))) {
        do {
            node = (int *)*it;
            if (node != 0) {
                if (node[0] != 0) {
                    VCall3((int *)node[0], 8, 0x41200000 /* 10.0f */, 0, 1);
                    if (node[0] != 0) {
                        VCall1((int *)node[0], 0, 1);  // deleting destructor
                        node[0] = 0;
                    }
                }
                node[1] = 0;
                FUN_00dd4920((int)node);
            }
            it = it + 1;
        } while (it != (undefined4 *)(*(int *)(self + 0x14) + *(int *)(self + 0x18) * 4));
    }
    if (*(int *)(self + 0x14) != 0) {
        *(int *)(self + 0x18) = 0;
    }
    if (IsLockingEnabled() != 0 && *(int *)(self + 0x78) != 0) {
        LeaveCriticalSection((void *)(self + 0x60));
    }
    return;
}

// 00A71A30  ScenarioManagerImplement::vfA4  size=72  [class]
// `this` is not read. The machine code takes THREE stack arguments (ret 0xC): it calls
// FUN_00a71830 with ECX = the room object, arg2 (as a float) and the hash of arg3. The ScenarioManager
// prototype declares only two, so arg3 cannot be named here: `name` (arg2) is used for both. // ?
undefined4 ScenarioManagerImplement::vfA4(undefined4 roomNo, undefined4 name)
{
    using namespace ScenarioManagerImplement_p1;
    int room;
    undefined4 hash;

    room = DAT_01be9a30->vf9C((int)roomNo);
    if (room != 0) {
        hash = HashName(name);  // ? machine: hash of the (undeclared) third argument
        return CallA71830(room, *(float *)&name, hash);
    }
    return 0;
}

// 00A71A80  ScenarioManagerImplement::vf48  size=8  [class]
void ScenarioManagerImplement::vf48()
{
    using namespace ScenarioManagerImplement_p1;
    CallA701F0((char *)this + 8);
    return;
}

// 00A71A90  ScenarioManagerImplement::vf54  size=8  [class]
void ScenarioManagerImplement::vf54()
{
    using namespace ScenarioManagerImplement_p1;
    CallA70290((char *)this + 8);
    return;
}

// 00A71AA0  ScenarioManagerImplement::vf58  size=73  [class]
// Clears the id of the entry whose id is `id`.
void ScenarioManagerImplement::vf58(int id)
{
    using namespace ScenarioManagerImplement_p1;
    unsigned int i;
    Entry *entry;

    CallDD85C0((char *)this + 0xc, id);
    i = 0;
    if (entryCount() != 0) {
        entry = entries();
        while (entry->id != id) {
            i = i + 1;
            entry = entry + 1;
            if (entryCount() <= i) {
                return;
            }
        }
        entry = &entries()[i];
        if (entry != 0) {
            entry->id = 0;
        }
    }
    return;
}

// 00A73280  ScenarioManagerImplement::vfA0  size=181  [class]
// `this` is not read.
undefined4 ScenarioManagerImplement::vfA0(undefined4 roomNo, undefined4 arg, undefined4 name)
{
    using namespace ScenarioManagerImplement_p1;
    int room;
    void *block;
    undefined4 *esp;
    undefined4 value;
    char temp[0x104];  // stack object at [esp+0x10] used as ECX of FUN_00e01eb0 // ?

    room = DAT_01be9a30->vf9C((int)roomNo);
    if (room != 0) {
        block = MemAlloc(0xb0, &DAT_01b7bd48);
        if (block != 0) {
            esp = NewEspControler(block);
            if (esp == 0) {
                return 0;
            }
            value = CallE01EB0(temp, esp);
            if (CallE01540(roomNo, arg, value) != 0) {
                value = HashName(name);
                return CallA71770(room, esp, value);
            }
            VCall1((int *)esp, 0, 1);  // deleting destructor
            return 0;
        }
    }
    return 0;
}

// 00A7BAB0  ScenarioManagerImplement::ScenarioManagerImplement  size=238  [class]
ScenarioManagerImplement::ScenarioManagerImplement(undefined4 arg)
{
    using namespace ScenarioManagerImplement_p1;
    void *block;

    // vftable = ScenarioManagerImplement::vftable
    arg04() = arg;
    CallDD6DF0((char *)this + 0xc);
    entries() = 0;
    Call92D400((char *)this + 0x30);
    flagBC() = 1;
    block = MemAllocDD3580(0x1380, &DAT_01b7bd48);
    entries() = (Entry *)block;
    if (block != 0) {
        for (unsigned int offset = 0; offset < 0x1380; offset = offset + 0x138) {
            *(undefined4 *)((char *)entries() + offset) = 0;
        }
        entryCount() = 0x10;
        CallDD8A10((char *)this + 0xc, 0x10, 0x10000, &DAT_01b7bd48);
    }
    _memset(roomSlots(), 0, 0x40);
    phase() = 0;
    phaseStarted() = 0;
    eventActive() = 0;
    block = MemAlloc(0x14434, &DAT_01b7bd48);
    if (block != 0) {
        DAT_01be9a34 = NewScenarioRegionManager(block, &DAT_01b7bd48);
        return;
    }
    DAT_01be9a34 = 0;
    return;
}

// 00A7BBA0  ScenarioManagerImplement::vf44  size=13  [class]
void ScenarioManagerImplement::vf44(undefined4 value)
{
    flagBC() = (int)value;
    return;
}

// 00A7BBB0  ScenarioManagerImplement::vf94  size=4  [class]
undefined4 ScenarioManagerImplement::vf94()
{
    return (undefined4)eventActive();
}

// 00A7BBC0  ScenarioManagerImplement::vf98  size=4  [class]
int ScenarioManagerImplement::vf98()
{
    return (int)this + 0x30;
}

// 00A7BBD0  ScenarioManagerImplement::~ScenarioManagerImplement  size=213  [class]
ScenarioManagerImplement::~ScenarioManagerImplement()
{
    using namespace ScenarioManagerImplement_p1;
    RoomSlot *slot;

    // vftable = ScenarioManagerImplement::vftable
    if (DAT_01be9a34 != 0) {
        VCall1(DAT_01be9a34, 0, 1);  // deleting destructor
        DAT_01be9a34 = 0;
    }
    if (phase() != 0 && phaseStarted() != 0) {
        VCall0(phase(), 0x10);
        if (phase() != 0) {
            VCall1(phase(), 0, 1);  // deleting destructor
            phase() = 0;
        }
    }
    slot = roomSlots();
    for (int n = 0; n < 8; n++) {
        if (slot->room != 0) {
            VCall0(slot->room, 8);
            if (slot->room != 0) {
                VCall1(slot->room, 0x14, 1);  // deleting destructor
                slot->room = 0;
            }
        }
        slot = slot + 1;
    }
    CallDD8450((char *)this + 0xc);
    if (entries() != 0) {
        FUN_00dd4940((int)entries());
        entries() = 0;
    }
    HkMemoryAllocatorDtor((char *)this + 0x30);
    CallDD8450((char *)this + 0xc);
    if (entries() != 0) {
        FUN_00dd4940((int)entries());
        entries() = 0;
    }
    ThunkCallDD8450((char *)this + 0xc);
    // vftable = ScenarioManager::vftable
    return;
}

// 00A7BCB0  ScenarioManagerImplement::vfA8  size=30  [class]
undefined4 *ScenarioManagerImplement::vfA8(byte flags)
{
    this->~ScenarioManagerImplement();
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

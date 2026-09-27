// src/player/pl0010/state/OvercomeBridgeStatePl0010.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "OvercomeBridgeStatePl0010.h"

// type records returned by vf00 / vf04 (FUN_00dd6d80(record, target) walks the parent chain)
extern unsigned char DAT_01be9e4c[];  // OvercomeBridgeStatePl0010
extern unsigned char DAT_01be9ef4[];  // StateMachineContextPl0010
extern unsigned char DAT_01be9db8[];  // Pl0000
extern unsigned char DAT_01b34b14[];  // Ba0033 (bridge objects 0xF0033..0xF0036)
extern unsigned char DAT_01be9c80[];  // BehaviorCamera (object 0x40001)
extern unsigned char DAT_01b34f20[];  // Em0190
// global objects passed in ECX
extern unsigned char DAT_01be9a98[];  // object table: FUN_00a7f600 (find by id), FUN_00a7f440 (collect by id)
extern unsigned char DAT_01c78cb0[];  // FUN_00c19cc0
// other data
extern unsigned char DAT_01b7bd48[];  // allocator tag passed to FUN_00dd3500 / FUN_0041c8e0
extern unsigned char DAT_018b92f0[];  // passed to FUN_004fede0 (zero-filled)
extern const char DAT_0163d0ac[];     // "[Hw::VecNormalize] ..." zero-vector warning (Shift-JIS)
// plain globals
extern unsigned int DAT_01bea060;  // global flags
extern unsigned int DAT_01bea070;  // global flags
extern unsigned int DAT_01bea090;  // global flags
extern unsigned int DAT_01b7b914;  // tested against 0x80

namespace OvercomeBridgeStatePl0010_p1 {

// field at an absolute byte offset
template <class T> inline T &at(const void *base, int offset)
{
    return *(T *)((char *)base + offset);
}

// virtual call through the vftable slot at byte offset `slot`
template <class R, class... A> inline R vcall(const void *obj, unsigned int slot, A... args)
{
    typedef R (__thiscall *Fn)(const void *, A...);
    return (*(Fn *)(*(char *const *)obj + slot))(obj, args...);
}

// __thiscall call of a function (symbol or address) with ECX = self
template <class R, class F, class... A> inline R thiscall(F fn, const void *self, A... args)
{
    typedef R (__thiscall *Fn)(const void *, A...);
    return ((Fn)fn)(self, args...);
}

// __cdecl call of a function (symbol or address)
template <class R, class F, class... A> inline R cdeclcall(F fn, A... args)
{
    typedef R (__cdecl *Fn)(A...);
    return ((Fn)fn)(args...);
}

// Function at 0x00A60400 (named cXml::cXml_7 in FILEMAP): tears down the member at +0x54
static void *const kReleasePathFollower = (void *)0x00A60400;
// EffectAreaScrSystem::SetEffectAreaEnable (cdecl, 3 arguments)
static void *const kSetEffectAreaEnable = (void *)0x00D81E90;
// vftable of lib::StaticArray<Entity*,64>
static void *const kStaticArrayEntity64Vftable = (void *)0x0163F6EC;

// obj when its type record (from the vftable slot at `typeSlot`) derives from `type`, else 0
inline char *downcast(const void *obj, unsigned int typeSlot, const void *type)
{
    if (obj == 0) {
        return 0;
    }
    int isKind = thiscall<int>(FUN_00dd6d80, vcall<void *>(obj, typeSlot), type);
    return isKind != 0 ? (char *)obj : 0;
}

// Checked downcasts
inline char *asContext(const void *obj) { return downcast(obj, 0x0, DAT_01be9ef4); }  // StateMachineContextPl0010
inline char *asPl0000(const void *obj)  { return downcast(obj, 0x4, DAT_01be9db8); }  // Pl0000
inline char *asBridge(const void *obj)  { return downcast(obj, 0x4, DAT_01b34b14); }  // Ba0033
inline char *asCamera(const void *obj)  { return downcast(obj, 0x4, DAT_01be9c80); }  // BehaviorCamera
inline char *asEm0190(const void *obj)  { return downcast(obj, 0x4, DAT_01b34f20); }  // Em0190

// FUN_00a7c8a0(FUN_00a7f600(objectTable, id)): the object registered under `id`
inline int findObject(int id)
{
    return (int)FUN_00a7c8a0(thiscall<int>(FUN_00a7f600, DAT_01be9a98, id));
}

// Appends (x, y, z) to the point list when there is room (placement-new style null check).
inline void pushPoint(OvercomeBridgeStatePl0010::PointList *list, float x, float y, float z)
{
    if (list->count < list->capacity) {
        float *point = list->points + list->count * 3;
        if (point == 0) {
            list->count = list->count + 1;
        }
        else {
            point[0] = x;
            point[1] = y;
            point[2] = z;
            list->count = list->count + 1;
        }
    }
}

// Frees the point list's buffer (inlined three times in vf20's machine code).
inline void clearPoints(OvercomeBridgeStatePl0010::PointList *list)
{
    if (list->points != 0) {
        list->count = 0;
        if (list->ownsBuffer != 0) {
            FUN_00dd48d0((int)list->points, 0);
            list->ownsBuffer = 0;
        }
        list->points = 0;
        list->capacity = 0;
    }
}

// lib::StaticArray<Entity*,64> on the stack
struct EntityArray64 {
    void *vftable;     // +0x0  lib::StaticArray<Entity*,64>::vftable
    int  *data;        // +0x4  -> storage
    int   count;       // +0x8
    int   capacity;    // +0xC  0x40
    int   storage[64]; // +0x10
};

// Player motion helper object at Pl0000+0x764: +0x104 mode, +0xD0 -> float at +4
inline void setMotionMode1(char *player)
{
    char *motion = at<char *>(player, 0x764);  /* Pl0000+0x764: motion helper */
    if (at<int>(motion, 0x104) != 1) {
        at<int>(motion, 0x104) = 1;
        at<float>(at<char *>(motion, 0xD0), 4) = 0.0f;
    }
}

}  // namespace OvercomeBridgeStatePl0010_p1

// 00B81F60  OvercomeBridgeStatePl0010::vf08  size=52  [class]
bool OvercomeBridgeStatePl0010::vf08(undefined4 param_1)
{
    if (StateMachineNode::vf08(param_1) == 0) {
        return 0;
    }
    exitRequested() = 0;
    holdTime() = 0.0f;
    DAT_01bea060 = DAT_01bea060 | 0x8000000;
    return 1;
}

// 00B81FA0  OvercomeBridgeStatePl0010::vf18  size=5  [class]
undefined4 OvercomeBridgeStatePl0010::vf18(undefined4 param_2)
{
    return StateMachineNode::vf18(param_2);  // jmp 0x00D822E0
}

// 00B81FB0  OvercomeBridgeStatePl0010::vf24  size=19  [class]
bool OvercomeBridgeStatePl0010::vf24(undefined4 param_1)
{
    return StateMachineNode::vf24(param_1) != 0;
}

// 00B81FD0  OvercomeBridgeStatePl0010::OvercomeBridgeStatePl0010  size=33  [class]
OvercomeBridgeStatePl0010::OvercomeBridgeStatePl0010(undefined4 param_2)
    : StateMachineNode(param_2)
{
    // vftable = OvercomeBridgeStatePl0010::vftable (0x016A1920)
    FUN_00a603a0((undefined2 *)pathFollower());
}

// 00B82000  OvercomeBridgeStatePl0010::vf00  size=6  [class]
undefined *OvercomeBridgeStatePl0010::vf00()
{
    return (undefined *)DAT_01be9e4c;  // type record
}

// 00B91140  OvercomeBridgeStatePl0010::vf04  size=39  [class]
undefined4 *OvercomeBridgeStatePl0010::vf04(byte param_2)
{
    using namespace OvercomeBridgeStatePl0010_p1;
    thiscall<void>(kReleasePathFollower, pathFollower());
    // vftable = StateMachineNode::vftable (0x01648DC8)
    if ((param_2 & 1) != 0) {
        FUN_00dd4920((int)this);  // operator delete
    }
    return (undefined4 *)this;
}

// 00BAF730  OvercomeBridgeStatePl0010::qteSafeCheck  size=643  [class]
// Steers the player towards the bridge frame while the run is in progress.
void OvercomeBridgeStatePl0010::qteSafeCheck(undefined4 *param_2)
{
    using namespace OvercomeBridgeStatePl0010_p1;
    char *context = asContext(param_2);
    char *player = asPl0000(at<void *>(context, 0xC));  /* StateMachineContext+0xC: owner */
    thiscall<void>(FUN_008e0b70, at<void *>(player, 0x764), 0);  /* Pl0000+0x764: motion helper */
    thiscall<void>(FUN_008e0ba0, at<void *>(player, 0x764), 0);

    // target point: seeded from the context, rewritten by FUN_00a581b0 below
    float target[3];
    target[0] = at<float>(context, 0xC4);  /* StateMachineContextPl0010+0xC4 */
    target[1] = at<float>(context, 0xC8);  /* StateMachineContextPl0010+0xC8 */
    char *frame = at<char *>(context, 0xCC);  /* StateMachineContextPl0010+0xCC: bridge frame object */
    float framePos[4];
    framePos[0] = at<float>(frame, 0x50);
    framePos[1] = at<float>(frame, 0x54);
    framePos[2] = at<float>(frame, 0x58);
    framePos[3] = at<float>(frame, 0x5C);
    float yaw = (float)thiscall<float10>(FUN_00a8ed10, player, framePos, (float *)(player + 0x40));  /* Pl0000+0x40: position */
    thiscall<void>(FUN_00a8e960, player, yaw);

    if (exitRequested() == 0) {
        float delta[4];
        delta[0] = framePos[0] - startPos()[0];
        delta[1] = framePos[1] - startPos()[1];
        delta[2] = framePos[2] - startPos()[2];
        delta[3] = framePos[3] - startPos()[3];
        if (delta[0] != 0.0f || delta[1] != 0.0f || delta[2] != 0.0f) {
            float lengthSq = delta[1] * delta[1] + delta[0] * delta[0] + delta[2] * delta[2];
            // inlined Hw::VecNormalize (the NaN self-comparisons are in the machine code)
            if (!(lengthSq <= 0.0f) && delta[0] == delta[0] && delta[1] == delta[1] && delta[2] == delta[2]) {
                FUN_00ddf460(delta, delta);
            }
            else {
                cdeclcall<void>(FUN_00dd5650, DAT_0163d0ac);
                delta[0] = 0.0f;
                delta[1] = 1.0f;
                delta[2] = 0.0f;
            }
        }

        char *bridge = asBridge((void *)findObject(0xF0033));
        vcall<void>(bridge, 0xC8, 0);  // no null check in the machine code

        if (thiscall<int>(FUN_00a54a60, pathFollower(), at<float>(this, 0x8) /* StateMachineNode+0x8 */) != 0) {
            char *motion = at<char *>(player, 0x764);
            if (at<int>(motion, 0x104) != 0) {
                at<int>(motion, 0x104) = 0;
            }
        }
        thiscall<float10>(FUN_00a581b0, pathFollower(), target, 0.3f, at<float>(this, 0x8));
        float moveTarget[4];
        moveTarget[0] = target[0];
        moveTarget[1] = target[1];
        moveTarget[2] = target[2];
        vcall<void>(player, 0x6C, moveTarget);
    }
    StateMachineNode::qteSafeCheck(param_2);
}

// 00BCB190  OvercomeBridgeStatePl0010::SafeCheck  size=1051  [class]
// Entry: builds the path from the player's position to the bridge frame and starts motion 0xDA.
void OvercomeBridgeStatePl0010::SafeCheck(undefined4 *param_2)
{
    using namespace OvercomeBridgeStatePl0010_p1;
    if (at<int>(this, 0x20) == 0) {  /* StateMachineNode+0x20: ? */
        char *context = asContext(param_2);
        char *player = asPl0000(at<void *>(context, 0xC));  /* StateMachineContext+0xC: owner */
        setMotionMode1(player);
        at<int>(player, 0x416C) = 1;                                 /* Pl0000+0x416C */
        at<float>(player, 0x418C) = at<float>(player, 0x4180);       /* Pl0000+0x418C = +0x4180 (saved) */
        at<float>(player, 0x4188) = at<float>(player, 0x417C);       /* Pl0000+0x4188 = +0x417C */
        at<float>(player, 0x4190) = at<float>(player, 0x4184);       /* Pl0000+0x4190 = +0x4184 */
        exitRequested() = 0;

        float framePos[3];
        framePos[0] = at<float>(context, 0xC4);  // dead stores kept from the machine code
        framePos[1] = at<float>(context, 0xC8);
        char *frame = at<char *>(context, 0xCC);  /* StateMachineContextPl0010+0xCC: bridge frame object */
        framePos[0] = at<float>(frame, 0x50);
        framePos[1] = at<float>(frame, 0x54);
        framePos[2] = at<float>(frame, 0x58);
        float frameX = framePos[0];
        float frameY = framePos[1];
        float frameZ = framePos[2];

        motionId() = 0xDA;
        thiscall<void>(FUN_00aa4080, player, 0xDA, 0, 0.2f, 1.0f, 0x8000000, -1.0f, 1.0f);
        thiscall<void>(FUN_00a96030, player, 0, 1.6f);
        thiscall<void>(FUN_00a95fb0, player, 0.0f);
        startPos()[0] = at<float>(player, 0x40);  /* Pl0000+0x40: position */
        startPos()[1] = at<float>(player, 0x44);
        startPos()[2] = at<float>(player, 0x48);
        startPos()[3] = at<float>(player, 0x4C);

        PointList *list = cdeclcall<PointList *>(FUN_00dd3500, 0x14, (int *)DAT_01b7bd48);
        if (list == 0) {
            list = 0;
        }
        else {
            list->field0 = 0;
            list->points = 0;
            list->capacity = 0;
            list->count = 0;
            list->ownsBuffer = 0;
        }
        pointList() = list;
        thiscall<undefined4>(FUN_0041c8e0, list, 4, (int *)DAT_01b7bd48);  // reserve 4 points

        pushPoint(pointList(), startPos()[0], startPos()[1], startPos()[2]);
        float raisedY = frameY + 9.0f;
        pushPoint(pointList(), (frameX - startPos()[0]) * 0.3f + startPos()[0], raisedY,
                  (frameZ - startPos()[2]) * 0.3f + startPos()[2]);
        pushPoint(pointList(), (frameX - startPos()[0]) * 0.6f + startPos()[0], raisedY,
                  (frameZ - startPos()[2]) * 0.6f + startPos()[2]);
        pushPoint(pointList(), frameX, frameY, frameZ);
        thiscall<void>(FUN_00a5e090, pathFollower(), pointList());

        DAT_01bea070 = DAT_01bea070 | 0x80000;
        char *bridge = asBridge((void *)findObject(0xF0035));
        vcall<void>(bridge, 0x304, 0, "front");  // no null check in the machine code

        char *camera = asCamera((void *)findObject(0x40001));
        FUN_00ac4f70((int)camera);
        float playerA = (float)thiscall<float10>(FUN_00a95680, player, 0);
        float playerB = (float)thiscall<float10>(FUN_00a958c0, player, 0);
        float cameraA = (float)thiscall<float10>(FUN_00a95680, camera, 0);
        float ratio = (float)((cameraA - thiscall<float10>(FUN_00a958c0, camera, 0)) / (playerA - playerB));
        thiscall<void>(FUN_00a96030, camera, 0, ratio);
        at<int>(player, 0xB74) = 1;  /* Pl0000+0xB74 */
        thiscall<void>(FUN_00a94bc0, player, 4, 0.0f);
        thiscall<void>(FUN_00a94bc0, player, 3, 0.0f);
        thiscall<void>(FUN_00a94bc0, player, 2, 0.0f);
    }
    StateMachineNode::SafeCheck(param_2);
}

// 00BCB5B0  OvercomeBridgeStatePl0010::vf14  size=2569  [class]
// Per-frame update of the bridge run: motion sequence 0xDA -> 0xD8 -> 0xDB / 0xDC.
void OvercomeBridgeStatePl0010::vf14(undefined4 *param_2)
{
    using namespace OvercomeBridgeStatePl0010_p1;
    typedef int (__fastcall *IntFastcallFn)(void *self);
    int handles[3];            // Em0190 handles; reused as the FUN_00a581b0 target point
    int ids[3];                // object ids / copy of the target point
    EntityArray64 found;
    unsigned char scratch[0x160];  // temporary object (FUN_004039a0 / FUN_00e01d00)

    char *context = asContext(param_2);
    char *player = asPl0000(at<void *>(context, 0xC));  /* StateMachineContext+0xC: owner */

    if (motionId() == 0xDA && thiscall<int>(FUN_00a94db0, player, 0xDA) != 0 &&
        at<int>(at<char *>(player, 0x764), 0x104) != 0) {  /* Pl0000+0x764: motion helper */
        at<int>(at<char *>(player, 0x764), 0x104) = 0;
    }
    if (thiscall<int>(FUN_00a54a60, pathFollower(), at<float>(this, 0x8) /* StateMachineNode+0x8 */) != 0) {
        char *motion = at<char *>(player, 0x764);
        if (at<int>(motion, 0x104) != 0 && exitRequested() == 0 && at<int>(motion, 0x104) != 0) {
            at<int>(motion, 0x104) = 0;
        }
        if ((at<int>(player, 0x41E0) != 0 && !(0.36f < at<float>(player, 0x41E4))) ||  /* Pl0000+0x41E0 / +0x41E4 */
            ((IntFastcallFn)FUN_008e2740)(at<void *>(player, 0x764)) != 0) {
            exitRequested() = 1;
        }
    }

    if (thiscall<int>(FUN_00a94db0, player, 0xD8) != 0) {
        int i = 0;
        do {
            handles[i] = thiscall<int>(FUN_00c19cc0, DAT_01c78cb0, 4, 0, 0x20190, i);
            i = i + 1;
        } while (i < 3);
        thiscall<void>(FUN_004fede0, asEm0190((void *)FUN_00a7c8a0(handles[0])), 2, (void *)DAT_018b92f0);
        thiscall<void>(FUN_004fede0, asEm0190((void *)FUN_00a7c8a0(handles[1])), 4, (void *)DAT_018b92f0);
        thiscall<void>(FUN_004fede0, asEm0190((void *)FUN_00a7c8a0(handles[2])), 6, (void *)DAT_018b92f0);

        int bridgeEntry = thiscall<int>(FUN_00a7f600, DAT_01be9a98, 0xF0035);
        if (bridgeEntry != 0) {
            thiscall<void>(FUN_00a7ce90, (void *)handles[0], FUN_00a7c8b0(bridgeEntry));
            thiscall<void>(FUN_00a7ce90, (void *)handles[1], FUN_00a7c8b0(bridgeEntry));
            thiscall<void>(FUN_00a7ce90, (void *)handles[2], FUN_00a7c8b0(bridgeEntry));

            // hide the parts named "*_hide", show the parts named "*_appear"
            char *bridge = (char *)FUN_00a7c8a0(bridgeEntry);
            for (int index = 0; index < at<short>(bridge, 0x324); index++) {
                char *part = at<char *>(bridge, 0x320) + index * 0x70;
                uint *name = at<uint *>(at<char *>(part, 0x60), 0x40);
                if (name != 0 && FUN_00fdbbd0(name, (char *)"_hide") != 0) {
                    at<unsigned int>(part, 0x38) = at<unsigned int>(part, 0x38) & 0xFFFFFFFE;
                }
            }
            bridge = (char *)FUN_00a7c8a0(bridgeEntry);
            for (int index = 0; index < at<short>(bridge, 0x324); index++) {
                char *part = at<char *>(bridge, 0x320) + index * 0x70;
                uint *name = at<uint *>(at<char *>(part, 0x60), 0x40);
                if (name != 0 && FUN_00fdbbd0(name, (char *)"_appear") != 0) {
                    at<unsigned int>(part, 0x38) = at<unsigned int>(part, 0x38) | 1;
                }
            }
        }
        void *manager = (void *)FUN_00c14bb0();
        vcall<void>(manager, 0x58, 0x11B, 1);
        manager = (void *)FUN_00c14bb0();
        vcall<void>(manager, 0x58, 0x114, 0);
        DAT_01bea090 = DAT_01bea090 & 0xFFFDFFFF;
        if (!(holdTime() <= 3.0f)) {
            motionId() = 0xDB;
        }
        else {
            motionId() = 0xDC;
            if (at<int>(at<char *>(player, 0x764), 0x104) != 0) {
                at<int>(at<char *>(player, 0x764), 0x104) = 0;
            }
            cdeclcall<void>(FUN_00c420c0, 80.0f);
        }
        thiscall<int>(FUN_00aa3f60, player, motionId());
    }

    if (thiscall<int>(FUN_00a95630, player, 0xDB, 0x1E) != 0) {
        cdeclcall<void>(FUN_00dda360, 0, 2.0f, 2.0f, 0xF);
    }
    if (thiscall<int>(FUN_00a94db0, player, 0xDB) != 0 ||
        thiscall<int>(FUN_00a95200, player, 0xDB, (float)thiscall<int>(FUN_00a95840, player, 0xDB) - 30.0f) != 0) {
        char *bridge = asBridge((void *)findObject(0xF0035));
        thiscall<int>(FUN_00a9f4c0, bridge, (char *)"BridgeRun", 0.0f, 0x8000000, 0);
        thiscall<void>(FUN_00a94640, bridge, -1, 0, 0, 0, 0, "0013" /* 0x01663E34 */, 0.0f, 0x8000000);
        thiscall<void>(FUN_00a94640, bridge, -1, 0, 0, 0, 1, "0014" /* 0x016A27D8 */, 0.0f, 0x8000000);
        thiscall<void>(FUN_00a94640, bridge, -1, 0, 0, 0, -1, "0015" /* 0x016457E4 */, 0.0f, 0x8000000);
        thiscall<void>(FUN_00404bd0, bridge, -278.0f, -262.0f);
        thiscall<void>(FUN_00a963e0, bridge, thiscall<int>(FUN_004039a0, scratch, 1, bridge, 0));

        int cameraEntry = thiscall<int>(FUN_00a7f600, DAT_01be9a98, 0x40001);
        char *camera = asCamera((void *)FUN_00a7c8a0(cameraEntry));
        thiscall<void>(FUN_00ac9cf0, camera, "a103" /* 0x016A27B8 */, "a104" /* 0x016A27C0 */, "a105" /* 0x016A27C8 */);
        thiscall<void>(FUN_00ac5020, camera, -278.0f, -262.0f);
        thiscall<void>(FUN_00a7ce90, (void *)cameraEntry, (float *)(bridge + 0x40));
        thiscall<void>(FUN_00a7cf00, (void *)cameraEntry, vcall<void *>(bridge, 0x84));

        char *bridge36 = asBridge((void *)findObject(0xF0036));
        thiscall<int>(FUN_00a9e290, bridge36, (char *)"0010" /* 0x01641BDC */, 0, 0.0f, 1.0f, 0x8000000, -1.0f, 1.0f);
        cdeclcall<void>(kSetEffectAreaEnable, 0x11C, 1, 1);
        cdeclcall<void>(FUN_00dffcd0, 0.0f, 10);
        at<float>(player, 0x53E0) = 1.0f;  /* Pl0000+0x53E0 */
        at<int>(player, 0xB74) = 1;        /* Pl0000+0xB74 */
        int nextState;
        if (vcall<int>(player, 0x3EC) == 0 ||
            !(at<float>(at<char *>(player, 0x40D4), 0x14C) * at<float>(at<char *>(player, 0x40D4), 0x14C) <
              at<float>(player, 0xD28))) {  /* Pl0000+0x40D4 -> +0x14C, Pl0000+0xD28 */
            nextState = 0x11;
        }
        else {
            nextState = 10;
        }
        thiscall<void>(FUN_00d82510, this, nextState, 100);
    }

    if (exitRequested() != 0) {
        int motion = motionId();
        if (motion != 0xD8 && motion != 0xDB && motion != 0xDC) {
            float *target = (float *)handles;
            thiscall<float10>(FUN_00a581b0, pathFollower(), target, 0.3f, at<float>(this, 0x8));
            float *moveTarget = (float *)ids;
            moveTarget[0] = target[0];
            moveTarget[1] = target[1];
            moveTarget[2] = target[2];
            vcall<void>(player, 0x6C, moveTarget);
            thiscall<void>(FUN_00a8c9b0, player, 0, 9, 0.0f, 0.0f);
            thiscall<void>(FUN_00a8c9b0, player, 0, 8, 0.0f, 0.0f);
            thiscall<undefined4 *>(FUN_00e01d00, scratch, 10);
            cdeclcall<void>(kSetEffectAreaEnable, 0x100, 4, 0);
            cdeclcall<void>(kSetEffectAreaEnable, 0x11C, 1, 0);
            // the outer call's (10, scratch) are pushed before the virtual call runs
            void *effectManager = (void *)FUN_00a6dd90();
            cdeclcall<void>(FUN_00e01f10, vcall<void *>(effectManager, 0x9C, 0x100), 10, (void *)scratch);
            motionId() = 0xD8;
            thiscall<int>(FUN_00aa3f60, player, 0xD8);
            setMotionMode1(player);
            vcall<void>(player, 0xD0, 0);
            vcall<void>(player, 0xD4, 0);
            vcall<void>(player, 0xC8, 0);
            float rotation[3];
            rotation[0] = 0.0f;
            rotation[1] = 1.5707964f;  // pi/2
            rotation[2] = 0.0f;
            vcall<void>(player, 0x88, rotation);

            int bridgeEntry = thiscall<int>(FUN_00a7f600, DAT_01be9a98, 0xF0034);
            thiscall<int>(FUN_00a9e290, (void *)FUN_00a7c8a0(bridgeEntry), (char *)"0010" /* 0x01641BDC */, 0, 0.0f, 1.0f,
                          0x8000000, 0.0f, 1.0f);
            char *bridge = asBridge((void *)FUN_00a7c8a0(bridgeEntry));

            int cameraEntry = thiscall<int>(FUN_00a7f600, DAT_01be9a98, 0x40001);
            char *camera = asCamera((void *)FUN_00a7c8a0(cameraEntry));
            FUN_00ac4f70((int)camera);
            thiscall<undefined4>(FUN_00ac9d90, camera, 0xA102, 0.0f, 0x8000000);
            at<int>(camera, 0xA30) = 0;  /* BehaviorCamera+0xA30 */
            thiscall<void>(FUN_00a7ce90, (void *)cameraEntry, (float *)(bridge + 0x40));
            thiscall<void>(FUN_00a7cf00, (void *)cameraEntry, vcall<void *>(bridge, 0x84));

            // kill the objects of these ids that are within 280 units (x of FUN_00a7c8b0)
            ids[0] = 0xE0084;
            ids[1] = 0xE0085;
            ids[2] = 0xE0086;
            unsigned int k = 0;
            do {
                found.data = found.storage;
                found.count = 0;
                found.capacity = 0x40;
                found.vftable = kStaticArrayEntity64Vftable;
                thiscall<int>(FUN_00a7f440, DAT_01be9a98, ids[k], &found);
                int *entry = found.data;
                if (entry != found.data + found.count) {
                    do {
                        float *pos = (float *)FUN_00a7c8b0(*entry);
                        if (!(280.0f < *pos)) {
                            FUN_00a805f0(*entry);
                        }
                        entry = entry + 1;
                    } while (entry != found.data + found.count);
                }
                k = k + 1;
            } while (k < 3);
        }
        if (motionId() == 0xD8) {
            if (thiscall<int>(FUN_00a95630, player, 0xD8, 0x5A) != 0) {
                cdeclcall<void>(FUN_00dda360, 0, 0.6f, 0.6f, 0x5A);
            }
            if (motionId() == 0xD8 && thiscall<int>(FUN_00a95270, player, 0xD8, 0x5A) != 0) {
                if ((DAT_01b7b914 & 0x80) != 0) {
                    holdTime() = (float)(FUN_00a93060((int)player) * 60.0f + holdTime());
                }
                DAT_01bea090 = DAT_01bea090 | 0x20000;
            }
        }
    }
    StateMachineNode::vf14(param_2);
}

// 00BDFA10  OvercomeBridgeStatePl0010::vf20  size=346  [class]
// Leave: restores the player, frees the path and clears the global flags set on entry.
undefined4 OvercomeBridgeStatePl0010::vf20(undefined4 *param_1)
{
    using namespace OvercomeBridgeStatePl0010_p1;
    if (StateMachineNode::vf20(param_1) == 0) {
        return 0;
    }
    char *context = asContext(param_1);
    char *player = asPl0000(at<void *>(context, 0xC));  /* StateMachineContext+0xC: owner */
    if (at<int>(at<char *>(player, 0x764), 0x104) != 0) {  /* Pl0000+0x764: motion helper */
        at<int>(at<char *>(player, 0x764), 0x104) = 0;
    }
    vcall<void>(player, 0xD0, 1);
    vcall<void>(player, 0xD4, 1);
    vcall<void>(player, 0xC8, 1);
    at<float>(player, 0x4180) = at<float>(player, 0x418C);  /* restore values saved by SafeCheck */
    at<int>(player, 0x416C) = 0;
    at<float>(player, 0x417C) = at<float>(player, 0x4188);
    at<float>(player, 0x4184) = at<float>(player, 0x4190);

    clearPoints(pointList());
    thiscall<void>(FUN_00a5dcc0, pathFollower(), 0);
    PointList *list = pointList();
    if (list != 0) {
        clearPoints(list);
        FUN_00dd4920((int)list);  // operator delete
        pointList() = 0;
    }
    DAT_01bea070 = DAT_01bea070 & 0xFFF7FFFF;
    DAT_01bea090 = DAT_01bea090 & 0xFFFDFFFF;
    DAT_01bea060 = DAT_01bea060 & 0xF7FFFFFF;
    return 1;
}

// src/player/pl0010/state/ZangekiStatePl0010.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "ZangekiStatePl0010.h"

// ---------------------------------------------------------------------------------------------
// Imports
// ---------------------------------------------------------------------------------------------
// d3dx9_43.dll imports
extern "C" float *__stdcall D3DXVec3TransformNormal(float *out, const float *v, const float *m);
extern "C" float *__stdcall D3DXMatrixMultiply(float *out, const float *m1, const float *m2);
extern "C" float *__stdcall D3DXMatrixRotationX(float *out, float angle);
extern "C" float *__stdcall D3DXMatrixRotationY(float *out, float angle);
extern "C" float *__stdcall D3DXMatrixRotationZ(float *out, float angle);
// CRT (the compiler emitted fsqrt / fpatan inline)
extern "C" double __cdecl sqrt(double x);
extern "C" double __cdecl atan2(double y, double x);

// ---------------------------------------------------------------------------------------------
// Data referenced by this file
// ---------------------------------------------------------------------------------------------
// type records (FUN_00dd6d80(record, target) walks the parent chain)
extern unsigned char DAT_01be9ee8[];  // ZangekiStatePl0010 (returned by vf00)
extern unsigned char DAT_01be9ef4[];  // StateMachineContextPl0010
extern unsigned char DAT_01be9db8[];  // Pl0000
extern unsigned char DAT_01b35260[];  // Et0006
// global objects passed in ECX
extern unsigned char DAT_01b36a60[];  // debug camera/controller object (FUN_009406a0, FUN_00940590, ...)
extern unsigned char DAT_01d61850[];  // FUN_0085def0
extern unsigned char DAT_01d616d0[];  // FUN_00c2ddc0
extern unsigned char DAT_01bea1d0[];  // FUN_00da9230
extern unsigned char DAT_01beb908[];  // FUN_00c58e90
extern unsigned char DAT_01b7bd48[];  // heap passed to FUN_00dd3500
// plain globals
extern unsigned int DAT_01bea010;
extern unsigned int DAT_01bea090;  // global flags
extern unsigned int DAT_01bea094;  // global flags
extern unsigned int DAT_01b7b9d4;  // debug request bits (only read while FUN_00f96420() == 0x16)
extern int          DAT_01b75898;
extern int          DAT_01bea9a0;
extern int          DAT_01d61924;
extern int          DAT_01d6192c;
extern int          DAT_01dc08bc;
extern int          DAT_01dc08d8;
extern float        DAT_018a96e8;  // 30.0

namespace ZangekiStatePl0010_p1 {

// field at an absolute byte offset
template <class T> inline T &fld(const void *base, int offset)
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

// TargetManagerImplement::createInstance (00C26530): returns the TargetManager instance
static void *const kTargetManagerInstance = (void *)0x00C26530;

// vftables stored by the inlined lib::StaticArray constructors
static void *const kStaticArrayVec2x20 = (void *)0x0164976C;   // lib::StaticArray<Hw::cVec2,20>::vftable
static void *const kStaticArrayVec4x5 = (void *)0x016495F0;    // lib::StaticArray<Hw::cVec4,5>::vftable
static void *const kStaticArrayVec4x10 = (void *)0x0164960C;   // lib::StaticArray<Hw::cVec4,10>::vftable
static void *const kStaticArrayFloatx20 = (void *)0x01649628;  // lib::StaticArray<float,20>::vftable

// obj when it is a StateMachineContextPl0010 (type record from vftable slot 0), else 0
inline StateMachineContextPl0010 *asContextPl0010(const void *obj)
{
    if (obj == 0) {
        return 0;
    }
    int isKind = thiscall<int>(FUN_00dd6d80, vcall<void *>(obj, 0x0), (undefined4 *)DAT_01be9ef4);
    return isKind != 0 ? (StateMachineContextPl0010 *)obj : 0;
}

// obj when it is a Pl0000 (type record from cObj::vf04, slot 4), else 0
inline Pl0000 *asPl0000(const void *obj)
{
    if (obj == 0) {
        return 0;
    }
    int isKind = thiscall<int>(FUN_00dd6d80, vcall<void *>(obj, 0x4), (undefined4 *)DAT_01be9db8);
    return isKind != 0 ? (Pl0000 *)obj : 0;
}

// Inlined `new lib::StaticArray<T, capacity>` (header of 0x10 bytes followed by the storage):
// +0 vftable, +4 data pointer, +8 count, +0xC capacity.
inline void *newStaticArray(unsigned int size, int capacity, void *vftable)
{
    int *array = cdeclcall<int *>(FUN_00dd3500, size, DAT_01b7bd48);
    if (array == 0) {
        return 0;
    }
    array[1] = (int)(array + 4);
    array[2] = 0;
    array[3] = capacity;
    array[0] = (int)vftable;
    return array;
}

// Inlined lib::StaticArray::clear(): count = 0 when there is storage
inline void clearStaticArray(void *array)
{
    if (fld<int>(array, 4) != 0) {
        fld<int>(array, 8) = 0;
    }
}

// Inlined push_back of a float value (vftable slot 8 takes a pointer to the element)
inline void pushFloat(void *array, float value)
{
    float element = value;
    vcall<void>(array, 0x8, &element);
}

// Euler angles of a (possibly scaled) rotation matrix, in the form FUN_00ddc1d0(..., 5) expects.
// angles[3] is left untouched.  The x87 code keeps the unstored intermediates in extended
// precision, hence the double arithmetic.
inline void matrixAngles(const float *m, float *angles)
{
    float len0 = (float)sqrt((double)m[0] * m[0] + (double)m[1] * m[1] + (double)m[2] * m[2]);
    float len1 = (float)sqrt((double)m[4] * m[4] + (double)m[5] * m[5] + (double)m[6] * m[6]);
    double len2 = sqrt((double)m[8] * m[8] + (double)m[9] * m[9] + (double)m[10] * m[10]);
    float sinX = (float)(m[6] / len2);
    float cosX = (float)(m[10] / len2);
    float angleY = (float)FUN_00ddbaa0((float)-(m[2] / len2));
    angles[0] = (float)atan2((double)sinX, (double)cosX);
    angles[1] = angleY;
    angles[2] = (float)atan2(m[1] / (double)len1, m[0] / (double)len0);
}

}  // namespace ZangekiStatePl0010_p1

// 00B83870  ZangekiStatePl0010::thunk_vf14  size=5  [class]
// A tail jump to StateMachineNode::vf14 (the raw body shown by Ghidra is the base's).
void ZangekiStatePl0010::vf14(undefined4 *context)
{
    StateMachineNode::vf14(context);
}

// 00B83880  ZangekiStatePl0010::vf18  size=5  [class]
// A tail jump to StateMachineNode::vf18.
undefined4 ZangekiStatePl0010::vf18(undefined4 arg)
{
    return StateMachineNode::vf18(arg);
}

// 00B83890  ZangekiStatePl0010::vf24  size=19  [class]
bool ZangekiStatePl0010::vf24(undefined4 arg)
{
    return StateMachineNode::vf24(arg) != 0;
}

// 00B838B0  ZangekiStatePl0010::ZangekiStatePl0010  size=33  [class]
ZangekiStatePl0010::ZangekiStatePl0010(undefined4 owner) : StateMachineNode(owner)
{
    // vftable = ZangekiStatePl0010::vftable (0x016A2028)
    FUN_009003e0((undefined4 *)((char *)this + 0x38));
}

// 00B838E0  ZangekiStatePl0010::vf00  size=6  [class]
undefined *ZangekiStatePl0010::vf00()
{
    return DAT_01be9ee8;
}

// 00B91900  ZangekiStatePl0010::vf04  size=31  [class]
// Scalar deleting destructor.
undefined4 *ZangekiStatePl0010::vf04(byte flags)
{
    // vftable = StateMachineNode::vftable (0x01648DC8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 00BD2570  ZangekiStatePl0010::qteSafeCheck  size=2543  [class]
// Per-frame update: target cone check, timers, blade orientation from the player's root matrix,
// the three slash trails and the debug requests.
void ZangekiStatePl0010::qteSafeCheck(undefined4 *context)
{
    using namespace ZangekiStatePl0010_p1;

    StateMachineContextPl0010 *ctx = asContextPl0010(context);
    Pl0000 *player = asPl0000(fld<void *>(ctx, 0xC));  /* StateMachineContext+0xC: owner */

    if (thiscall<int>(FUN_00d821d0, this, 0xB) != 0) {
        thiscall<void>(FUN_00d82510, this, 0xB, 100);
        return;  // the original returns 1 in EAX here
    }

    /* StateMachineContextPl0010+0x3F4 / +0x564: ? */
    fld<int>(ctx, 0x3F4) = (fld<int>(ctx, 0x564) <= 1) ? 1 : 0;

    // lock the target when it is within +-45 degrees of the player's heading
    if (FUN_00a81330(&fld<uint>(player, 0x3230)) != 0) {  /* Pl0000+0x3230: target handle */
        int target = FUN_00a7c8a0(FUN_00a81330(&fld<uint>(player, 0x3230)));
        if (target != 0) {
            /* cObj+0x40/+0x48: position x/z; Pl0000+0x94: heading */
            float relativeYaw = (float)(atan2((double)fld<float>((void *)target, 0x40) - fld<float>(player, 0x40),
                                              (double)fld<float>((void *)target, 0x48) - fld<float>(player, 0x48)) -
                                        fld<float>(player, 0x94));
            double wrapped = cdeclcall<double>(FUN_00ddba30, relativeYaw);
            if (wrapped * wrapped <= 0.6168503f) {  // (pi/4)^2
                targetAhead() = 1;
                void *targetManager = cdeclcall<void *>(kTargetManagerInstance);
                vcall<void>(targetManager, 0x24, target);
            }
        }
    }
    if (releaseTarget() != 0) {
        vcall<void>(cdeclcall<void *>(kTargetManagerInstance), 0x24, 0);
        vcall<void>(cdeclcall<void *>(kTargetManagerInstance), 0x2C, 0);
        vcall<void>(cdeclcall<void *>(kTargetManagerInstance), 0x1C, 0);
    }

    // keep the player at the context's height
    if (fld<int>(ctx, 0x2F4) == 0) {  /* StateMachineContextPl0010+0x2F4: ? */
        int action = fld<int>(player, 0x40C8);  /* Pl0000+0x40C8: action/state id */
        if (action != 4 && action != 9 && action != 0xC && action != 0xF && action != 0xE && action != 0xD &&
            action != 8) {
            float height = fld<float>(ctx, 0x378);  /* StateMachineContextPl0010+0x378: height */
            float *position = vcall<float *>(player, 0x84);
            float newPosition[4];  // [3] is never written (uninitialised in the original too)
            newPosition[0] = position[0];
            newPosition[1] = height;
            newPosition[2] = position[2];
            vcall<void>(player, 0x88, newPosition);
        }
    }

    // timers
    if (0.0f < fld<float>(ctx, 0x5CC)) {  /* StateMachineContextPl0010+0x5CC: countdown, -1 = off */
        float remain = fld<float>(ctx, 0x5CC) - 1.0f;
        fld<float>(ctx, 0x5CC) = remain;
        if (remain <= 0.0f) {
            fld<float>(ctx, 0x5CC) = -1.0f;
        }
    }
    if (0 < fld<int>(ctx, 0x304)) {  /* StateMachineContextPl0010+0x304: ? */
        fld<int>(ctx, 0x304) = fld<int>(ctx, 0x304) - 1;
    }
    float remain5D8 = fld<float>(ctx, 0x5D8) - 1.0f;  /* StateMachineContextPl0010+0x5D8: countdown */
    fld<int>(ctx, 0x304) = 0;
    fld<float>(ctx, 0x5D8) = remain5D8;
    if (remain5D8 < 0.0f) {
        fld<float>(ctx, 0x5D8) = 0.0f;
    }
    if (fld<int>(player, 0x870) < 1 && fld<int>(player, 0x40C8) != 8) {  /* Pl0000+0x870: hp */
        FUN_00b92be0(context, (undefined4)this, 100, 1);
    }
    FUN_00bbb500(context, (undefined4)this);
    if (fld<int>(ctx, 0x314) != 0) {  /* StateMachineContextPl0010+0x314 / +0x30C: counters */
        fld<int>(ctx, 0x314) = fld<int>(ctx, 0x314) - 1;
    }
    if (fld<int>(ctx, 0x30C) != 0) {
        fld<int>(ctx, 0x30C) = fld<int>(ctx, 0x30C) - 1;
    }
    if (fld<int>(ctx, 0x504) != 0) {  /* StateMachineContextPl0010+0x504: flag, +0x508: its timer */
        float remain508 = fld<float>(ctx, 0x508) - 1.0f;
        fld<float>(ctx, 0x508) = remain508;
        if (remain508 < 0.0f) {
            fld<float>(ctx, 0x508) = 0.0f;
            fld<int>(ctx, 0x504) = 0;
        }
    }

    if (FUN_00bbc8f0(context) != 0) {
        // Orientation of the player's root parts.
        int rootParts = thiscall<int>(FUN_00a12210, player, -1);
        const float *rootMatrix = &fld<float>((void *)rootParts, 0x10);  // cParts +0x10: float[16]
        float angles[4];      // angles[3] is never written
        float position[4];    // position[3] is never written
        float axis[4];
        float rotation[16];
        float forward[4];     // forward[3] is never written (uninitialised in the original too)
        float up[4];
        matrixAngles(rootMatrix, angles);
        position[0] = rootMatrix[12];
        position[1] = rootMatrix[13];
        position[2] = rootMatrix[14];
        axis[0] = 0.0f;
        axis[1] = 0.0f;
        axis[2] = 1.0f;
        FUN_00ddc1d0((undefined4 *)rotation, angles, 5);
        D3DXVec3TransformNormal(forward, axis, rotation);
        axis[0] = 0.0f;
        axis[1] = 1.0f;
        axis[2] = 0.0f;
        FUN_00ddc1d0((undefined4 *)rotation, angles, 5);
        D3DXVec3TransformNormal(up, axis, rotation);

        // placement = translation(position + up * 1.35)
        float placement[16];
        placement[0] = 1.0f;
        placement[1] = 0.0f;
        placement[2] = 0.0f;
        placement[3] = 0.0f;
        placement[4] = 0.0f;
        placement[5] = 1.0f;
        placement[6] = 0.0f;
        placement[7] = 0.0f;
        placement[8] = 0.0f;
        placement[9] = 0.0f;
        placement[10] = 1.0f;
        placement[11] = 0.0f;
        placement[12] = (float)((double)up[0] * 1.35f + position[0]);
        placement[13] = (float)((double)up[1] * 1.35f + position[1]);
        placement[14] = (float)((double)up[2] * 1.35f + position[2]);
        placement[15] = 1.0f;

        // local = RotZ * RotY * RotX of the root angles (identity factors skipped)
        float local[16];
        for (int i = 0; i < 16; i++) {
            local[i] = 0.0f;
        }
        local[0] = 1.0f;
        local[5] = 1.0f;
        local[10] = 1.0f;
        local[15] = 1.0f;
        if (angles[2] != 0.0f) {
            D3DXMatrixRotationZ(rotation, angles[2]);
            D3DXMatrixMultiply(local, rotation, local);
        }
        if (angles[1] != 0.0f) {
            D3DXMatrixRotationY(rotation, angles[1]);
            D3DXMatrixMultiply(local, rotation, local);
        }
        if (angles[0] != 0.0f) {
            D3DXMatrixRotationX(rotation, angles[0]);
            D3DXMatrixMultiply(local, rotation, local);
        }
        D3DXMatrixMultiply(placement, local, placement);
        D3DXMatrixRotationX(rotation, fld<float>(ctx, 0x374) * 0.5f);  /* StateMachineContextPl0010+0x374: blade angle */
        D3DXMatrixMultiply(placement, rotation, placement);

        // blade direction = forward axis of the tilted placement
        float bladeAngles[4];  // bladeAngles[3] is never written
        matrixAngles(placement, bladeAngles);
        axis[0] = 0.0f;
        axis[1] = 0.0f;
        axis[2] = 1.0f;
        FUN_00ddc1d0((undefined4 *)rotation, bladeAngles, 5);
        D3DXVec3TransformNormal(forward, axis, rotation);

        // three slash trails (Pl0000+0x2EE0: 3 trail objects of 0xE0 bytes)
        for (int i = 0; i < 3; i++) {
            FUN_00a82640((int)player + 0x2EE0 + i * 0xE0);
        }
        for (int i = 0; i < 3; i++) {
            int parts = thiscall<int>(FUN_00a12210, player, trailPartsNo()[i]);
            float point[4];
            float scaledZ = (float)((double)forward[2] * 2.6f);
            point[0] = (float)((double)forward[0] * 2.6f + fld<float>((void *)parts, 0x40));
            point[1] = (float)((double)forward[1] * 2.6f + fld<float>((void *)parts, 0x44));
            point[2] = (float)((double)fld<float>((void *)parts, 0x48) + scaledZ);
            point[3] = (float)((double)forward[3] * 2.6f + fld<float>((void *)parts, 0x4C));
            thiscall<void>(FUN_00a83330, (void *)((int)player + 0x2EE0 + i * 0xE0), point, 1);
        }
    }
    cutAngle() = fld<float>(ctx, 0x374);
    DAT_01bea090 = DAT_01bea090 & 0xFFFFFFBF;

    // debug requests
    if (FUN_00f96420() == 0x16) {
        if ((DAT_01b7b9d4 & 0x1000) != 0) {
            thiscall<void>(FUN_009406a0, DAT_01b36a60, 1);
        }
        if ((DAT_01b7b9d4 & 0x8000) != 0) {
            thiscall<void>(FUN_009406a0, DAT_01b36a60, 0);
        }
        if ((DAT_01b7b9d4 & 0x20) != 0) {
            FUN_0093db80((int)DAT_01b36a60);
        }
        if ((DAT_01b7b9d4 & 0x10) != 0) {
            thiscall<void>(FUN_00940590, DAT_01b36a60, 2.0f, 0);
        }
        if ((DAT_01b7b9d4 & 4) != 0) {
            FUN_009408b0((int)DAT_01b36a60);
        }
        if ((DAT_01b7b9d4 & 2) != 0) {
            thiscall<void>(FUN_00940a60, DAT_01b36a60, 1);
        }
        if ((DAT_01b7b9d4 & 1) != 0) {
            FUN_00940b10((int)DAT_01b36a60);
        }
        if ((DAT_01b7b9d4 & 0x40) != 0) {
            FUN_00940c10((int)DAT_01b36a60);
        }
        if ((DAT_01b7b9d4 & 0x80) != 0) {
            thiscall<void>(FUN_00940590, DAT_01b36a60, 2.0f, 1);
        }
    }
    // debug draw of the 2D trail points (FUN_00f95eb0 is an empty stub in this build)
    if (FUN_00f96420() == 0x16 && fld<unsigned int>(fld<void *>(ctx, 0x170), 8) != 0) {  /* +0x170: StaticArray<cVec2,20> */
        int offset = 0;
        unsigned int index = 1;
        bool more;
        do {
            float screenX = (float)((double)(int)FUN_00f98a90() * 0.5f);
            int screenY = FUN_00f98aa0();
            unsigned int shade = 0xFF / index;
            char *points = fld<char *>(fld<void *>(ctx, 0x170), 4);
            unsigned int color = ((shade | 0xFFFFFF00) << 8) | (shade & 0xFF);
            float y = (float)((double)fld<float>(points, offset + 4) * 0.3f + (double)screenY * 0.5f);
            float x = (float)((double)fld<float>(points, offset) * 0.3f + screenX);
            cdeclcall<void>(FUN_00f95eb0, x, y, 10.0f, color);
            offset = offset + 8;
            more = index < fld<unsigned int>(fld<void *>(ctx, 0x170), 8);
            index = index + 1;
        } while (more);
    }

    if (0.0f < fld<float>(player, 0x40C4)) {  /* Pl0000+0x40C4: remaining time */
        double elapsed = FUN_00a93060((int)player);
        double remain = (double)fld<float>(player, 0x40C4) - elapsed;
        fld<float>(player, 0x40C4) = (float)remain;
        if (remain < 0.0) {
            fld<float>(player, 0x40C4) = 0.0f;
            StateMachineNode::qteSafeCheck(context);
            return;
        }
    }
    StateMachineNode::qteSafeCheck(context);
}

// 00BD2F70  ZangekiStatePl0010::vf20  size=963  [class]
// Leave: frees the trail arrays, restores the player and plays the exit sound / music.
undefined4 ZangekiStatePl0010::vf20(undefined4 *context)
{
    using namespace ZangekiStatePl0010_p1;

    if (StateMachineNode::vf20(context) == 0) {
        return 0;
    }
    StateMachineContextPl0010 *ctx = asContextPl0010(context);
    Pl0000 *player = asPl0000(fld<void *>(ctx, 0xC));  /* StateMachineContext+0xC: owner */

    fld<float>(ctx, 0xD0) = 0.0f;  /* StateMachineContextPl0010+0xD0: ? */
    FUN_00b7aa80((int)player);
    thiscall<void>(FUN_00a95fb0, player, 1.0f);
    thiscall<void>(FUN_00e25500, (char *)player + 0x3BF0, 0.0f);  /* Pl0000+0x3BF0: embedded object */
    thiscall<void>(FUN_00a8c9b0, player, 0, 0x5F, 10.0f, 0.0f);

    // trail arrays (StateMachineContextPl0010+0x170..+0x17C, +0x318, +0x31C)
    void *array = fld<void *>(ctx, 0x318);
    if (array != 0) {
        clearStaticArray(array);
    }
    array = fld<void *>(ctx, 0x31C);
    if (array != 0) {
        clearStaticArray(array);
    }
    FUN_00a7c950(&fld<undefined4>(ctx, 0x404));  /* StateMachineContextPl0010+0x404: target handle */
    array = fld<void *>(ctx, 0x170);
    fld<int>(ctx, 0x408) = -1;  /* +0x408: target parts number */
    if (array != 0) {
        clearStaticArray(array);
    }
    array = fld<void *>(ctx, 0x174);
    if (array != 0) {
        clearStaticArray(array);
    }
    array = fld<void *>(ctx, 0x178);
    if (array != 0) {
        clearStaticArray(array);
    }
    array = fld<void *>(ctx, 0x17C);
    if (array != 0) {
        clearStaticArray(array);
    }
    array = fld<void *>(ctx, 0x318);
    if (array != 0) {
        clearStaticArray(array);
    }
    array = fld<void *>(ctx, 0x31C);
    if (array != 0) {
        clearStaticArray(array);
    }
    // deleting destructors (vftable slot 0, flag 1)
    if (fld<void *>(ctx, 0x170) != 0) {
        vcall<void>(fld<void *>(ctx, 0x170), 0x0, 1);
    }
    if (fld<void *>(ctx, 0x174) != 0) {
        vcall<void>(fld<void *>(ctx, 0x174), 0x0, 1);
    }
    if (fld<void *>(ctx, 0x178) != 0) {
        vcall<void>(fld<void *>(ctx, 0x178), 0x0, 1);
    }
    if (fld<void *>(ctx, 0x17C) != 0) {
        vcall<void>(fld<void *>(ctx, 0x17C), 0x0, 1);
    }
    if (fld<void *>(ctx, 0x318) != 0) {
        vcall<void>(fld<void *>(ctx, 0x318), 0x0, 1);
    }
    if (fld<void *>(ctx, 0x31C) != 0) {
        vcall<void>(fld<void *>(ctx, 0x31C), 0x0, 1);
    }
    fld<void *>(ctx, 0x170) = 0;
    fld<void *>(ctx, 0x174) = 0;
    fld<void *>(ctx, 0x178) = 0;
    fld<void *>(ctx, 0x17C) = 0;
    fld<void *>(ctx, 0x318) = 0;
    fld<void *>(ctx, 0x31C) = 0;

    fld<int>(player, 0x10F4) = 1;  /* Pl0000+0x10F4: ? */
    FUN_00d89e60(0x22);
    cdeclcall<void>(FUN_00e5e050, "core_se_btl_zangeki_out", 0);
    DAT_01bea9a0 = 0;
    FUN_00b8a1d0((int)player);
    vcall<void>(player, 0x1EC);
    fld<int>(ctx, 0x520) = 0;  /* StateMachineContextPl0010+0x520: ? */
    FUN_00b92d70(context);

    if ((DAT_01bea090 & 0x20) == 0) {
        int phase = (int)FUN_00932720() >> 8;
        if ((phase == 10 || phase == 0xE || (DAT_01b75898 == 0 && 3 < (unsigned int)(phase - 4))) &&
            (DAT_01bea094 & 0x800) == 0) {
            goto skipExitMusic;
        }
    }
    if (thiscall<int>(FUN_00bc3230, player, 0) == 0) {
        cdeclcall<undefined4>(FUN_00e5e1b0, "bgm_Ripper_Exit3");
    }
skipExitMusic:
    {
        StateMachineContextPl0010 *ctx2 = asContextPl0010(context);
        vcall<void>((char *)ctx2 + 0x190, 0x8, 10.0f, 0.0f, 0);  /* StateMachineContextPl0010+0x190: embedded object */
    }
    fld<float>(ctx, 0x5CC) = -1.0f;
    FUN_0085def0((int)DAT_01d61850);
    fld<int>(player, 0x1298) = 0;  /* Pl0000+0x1290..0x12B0: ? */
    fld<float>(player, 0x1294) = 0.0f;
    fld<int>(player, 0x1290) = 0;
    fld<float>(player, 0x12AC) = 0.0f;
    fld<int>(player, 0x12B0) = 0;
    fld<int>(player, 0x12A8) = 0;
    FUN_00a83990((int)player + 0x2EE0);  // the three slash trails
    FUN_00a83990((int)player + 0x2FC0);
    FUN_00a83990((int)player + 0x30A0);
    fld<int>(ctx, 0x528) = 0;  /* StateMachineContextPl0010+0x528..0x530: enter mode flags */
    fld<int>(ctx, 0x52C) = 0;
    fld<int>(ctx, 0x530) = 0;
    fld<float>(player, 0xBB8) = 0.0f;  /* Pl0000+0xBB8 / +0xBBC: ? */
    fld<int>(player, 0xBBC) = 2;
    FUN_00d89e60(0x15);
    FUN_00c2ddc0((int)DAT_01d616d0);
    DAT_01dc08bc = 0;
    FUN_00a7c950(&fld<undefined4>(player, 0x3EA0));  /* Pl0000+0x3EA0: handle */
    fld<int>(player, 0x40BC) = 0;  /* Pl0000+0x40BC, +0x3E24..0x3E5C: ? */
    fld<int>(player, 0x3E24) = 0;
    fld<float>(player, 0x3E30) = 0.0f;
    fld<float>(player, 0x3E34) = 0.0f;
    fld<float>(player, 0x3E38) = 0.0f;
    fld<float>(player, 0x3E3C) = 1.0f;
    fld<int>(player, 0x3E40) = 0;
    fld<float>(player, 0x3E50) = 0.0f;
    fld<float>(player, 0x3E54) = 0.0f;
    fld<float>(player, 0x3E58) = 0.0f;
    fld<float>(player, 0x3E5C) = 1.0f;
    fld<float>(ctx, 0x5D8) = 0.0f;
    return 1;
}

// 00BE5120  ZangekiStatePl0010::SafeCheck  size=341  [class]
// First update: resets the context flags and the player's velocity.
void ZangekiStatePl0010::SafeCheck(undefined4 *context)
{
    using namespace ZangekiStatePl0010_p1;

    if (*(int *)((char *)this + 0x20) == 0) {  /* StateMachineNode+0x20: ? */
        StateMachineContextPl0010 *ctx = asContextPl0010(context);
        Pl0000 *player = asPl0000(fld<void *>(ctx, 0xC));  /* StateMachineContext+0xC: owner */
        float uninitialisedW;  // never written in the original (stale stack slot)

        FUN_00bd7640(context);
        fld<int>(ctx, 0x504) = 0;  /* StateMachineContextPl0010+0x504: flag, +0x508: its timer */
        /* Pl0000+0x3BD4 / +0x3BD8: stick input (x, y) */
        double inputX = (double)fld<float>(player, 0x3BD4) * 0.001f;  // kept in x87 registers
        double inputY = (double)fld<float>(player, 0x3BD8) * 0.001f;
        if (0.1f < sqrt(inputX * inputX + inputY * inputY)) {
            fld<int>(ctx, 0x504) = 1;
        }
        float duration = DAT_018a96e8;
        timer48() = duration;
        fld<int>(ctx, 0x504) = 1;
        fld<float>(ctx, 0x508) = duration;
        fld<int>(ctx, 0x3F4) = 1;  /* StateMachineContextPl0010+0x3F4 / +0x564 / +0x570: ? */
        fld<int>(ctx, 0x564) = 0;
        fld<int>(ctx, 0x570) = 0;
        fld<float>(player, 0x890) = 0.0f;  /* Pl0000+0x890: float[4] velocity */
        fld<float>(player, 0x894) = 0.0f;
        fld<float>(player, 0x898) = 0.0f;
        fld<float>(player, 0x89C) = uninitialisedW;
        if (fld<int>(ctx, 0x528) != 0) {
            unsigned int entry = FUN_00a81330(&fld<uint>(ctx, 0x4BC));  /* StateMachineContextPl0010+0x4BC: handle */
            if (entry != 0) {
                void *effect = (void *)FUN_00a7c8a0(entry);
                if (effect != 0 &&
                    thiscall<int>(FUN_00dd6d80, vcall<void *>(effect, 0x4), (undefined4 *)DAT_01b35260) != 0) {
                    thiscall<void>(FUN_005ca1a0, effect, 0);
                }
            }
        }
    }
    StateMachineNode::SafeCheck(context);
}

// 00BF1210  ZangekiStatePl0010::vf08  size=2389  [class]
// Enter: allocates the trail arrays, picks the enter mode and the blade-mode motion, fills the
// angle tables and starts the three slash trails.
bool ZangekiStatePl0010::vf08(undefined4 contextArg)
{
    using namespace ZangekiStatePl0010_p1;

    if (StateMachineNode::vf08(contextArg) == 0) {
        return false;
    }
    undefined4 *context = (undefined4 *)contextArg;
    StateMachineContextPl0010 *ctx = asContextPl0010(context);
    Pl0000 *player = asPl0000(fld<void *>(ctx, 0xC));  /* StateMachineContext+0xC: owner */

    fld<void *>(ctx, 0x170) = newStaticArray(0xB0, 0x14, kStaticArrayVec2x20);   /* StateMachineContextPl0010+0x170: StaticArray<cVec2,20> */
    fld<void *>(ctx, 0x174) = newStaticArray(0xB0, 0x14, kStaticArrayVec2x20);   /* +0x174: StaticArray<cVec2,20> */
    fld<void *>(ctx, 0x178) = newStaticArray(0x60, 5, kStaticArrayVec4x5);       /* +0x178: StaticArray<cVec4,5> */
    fld<void *>(ctx, 0x17C) = newStaticArray(0xB0, 10, kStaticArrayVec4x10);     /* +0x17C: StaticArray<cVec4,10> */
    fld<float>(ctx, 0x5CC) = -1.0f;
    fld<int>(ctx, 0x300) = 0;

    // enter mode: +0x528 / +0x52C / +0x530
    if (0.0f < fld<float>(player, 0x341C) && fld<int>(player, 0x3450) != 0) {  /* Pl0000+0x341C / +0x3450: ? */
        fld<int>(ctx, 0x528) = 1;
        fld<int>(ctx, 0x52C) = 1;
        fld<int>(ctx, 0x530) = 0;
        if ((DAT_01bea090 & 0x80000000) != 0) {
            fld<float>(player, 0x3830) = fld<float>(player, 0x3834);  /* Pl0000+0x3830 / +0x3834: ? */
        }
        else if (fld<int>(player, 0x3828) != 0) {  /* Pl0000+0x3820 / +0x3828: ? */
            void *gauge = fld<void *>(player, 0x3820);
            fld<float>(gauge, 4) = fld<float>(gauge, 0xC);
        }
    }
    else if (!(0.0f < fld<float>(player, 0x341C)) && thiscall<int>(FUN_0085c0e0, player) != 2) {
        int mode = thiscall<int>(FUN_0085c0e0, player);
        fld<int>(ctx, 0x52C) = 0;
        fld<int>(ctx, 0x530) = 0;
        if (mode == 1) {
            fld<int>(ctx, 0x528) = mode;
        }
        else {
            fld<int>(ctx, 0x528) = 0;
        }
    }
    else {
        fld<int>(ctx, 0x528) = 1;
        fld<int>(ctx, 0x52C) = 0;
        fld<int>(ctx, 0x530) = 1;
    }

    // motion kind
    int kind = fld<int>(player, 0x40C8);  /* Pl0000+0x40C8: action/state id */
    if (kind != 0xC && kind != 0xE && kind != 0x12 && kind != 0x13 && kind != 4 && kind != 8) {
        fld<int>(ctx, 0x5C4) = 0;  /* StateMachineContextPl0010+0x5C4: result of FUN_00c58e90 */
        float range = (float)((double)fld<float>(ctx, 0x574) * 1.2f * 30.0f);  /* +0x574: ? */
        int objectId = fld<int>(player, 0x4F0);  /* cObj+0x4F0 */
        float *position = vcall<float *>(player, 0x84);
        thiscall<void>(FUN_00c58e90, DAT_01beb908, &fld<char>(ctx, 0x5B8), objectId, position[1], 0.7853982f,
                       range);
        if (fld<int>(ctx, 0x5C4) < 1 && FUN_00a81330(&fld<uint>(player, 0xFE0)) == 0) {  /* Pl0000+0xFE0: handle */
            if (FUN_00416db0((int)player) != 0) {
                kind = 2;
            }
            else if (fld<int>(ctx, 0x528) != 0) {
                kind = 2;
            }
        }
        else {
            kind = 0x14;
        }
    }
    int selected = 0xC;
    if (FUN_00a81330(&fld<uint>(ctx, 0x404)) == 0) {  /* StateMachineContextPl0010+0x404: target handle */
        selected = kind;
    }
    int motionNo;
    switch (selected) {
    default:
        motionNo = 0x41;
        break;
    case 2:
    case 5:
        motionNo = 0x30;
        break;
    case 8:
        motionNo = 0x34;
        break;
    case 0xC:
        motionNo = 0x42;
        break;
    case 0x14:
        motionNo = 0x3E;
    }
    int motion = vcall<int>(fld<void *>(context, 4), 0x0, motionNo);  /* StateMachineContext+0x4: motion table */
    thiscall<void>(FUN_00d82bf0, this, motion, context);

    fld<int>(ctx, 0x2F4) = 0;  /* StateMachineContextPl0010+0x2F4 / +0x2F8 / +0x304: ? */
    fld<int>(ctx, 0x2F8) = 0;
    fld<int>(ctx, 0x304) = 0;
    fld<int>(player, 0x4058) = 0;  /* Pl0000+0x4058: ? */
    fld<float>(ctx, 0x3F8) = 90.0f;  /* StateMachineContextPl0010+0x3F8 / +0x400: degrees */
    fld<float>(ctx, 0x400) = 90.0f;
    fld<int>(ctx, 0x3FC) = 1;
    if (thiscall<int>(FUN_008e2740, (void *)fld<int>(player, 0x764)) == 0 &&  /* Pl0000+0x764: controller */
        (fld<int>(ctx, 0x530) != 0 || fld<int>(ctx, 0x52C) != 0 || fld<int>(ctx, 0x528) != 0) &&
        fld<int>(ctx, 0x330) != 8) {  /* StateMachineContextPl0010+0x330: ? */
        vcall<void>(player, 0x318);
        thiscall<void>(FUN_008e0af0, (void *)fld<int>(player, 0x764), 0);
    }
    fld<int>(ctx, 0x3C4) = 0;  /* StateMachineContextPl0010+0x3C4 / +0x188: ? */
    fld<int>(ctx, 0x188) = 0;
    fld<int>(player, 0x392C) = 3;  /* Pl0000+0x392C: ? */
    cdeclcall<void>(FUN_00dda360, 0, 1.0f, 0.8f, 8);
    cdeclcall<void>(FUN_00e5e050, "core_se_btl_zangeki_in", 0);
    FUN_00d89e60(0x24);
    fld<int>(ctx, 0x308) = 0;  /* StateMachineContextPl0010+0x308..0x314: counters */
    fld<int>(ctx, 0x30C) = 0;
    fld<int>(ctx, 0x310) = 0;
    fld<int>(ctx, 0x314) = 0;

    // angle tables (degrees)
    fld<void *>(ctx, 0x318) = newStaticArray(0x60, 0x14, kStaticArrayFloatx20);  /* +0x318: StaticArray<float,20> */
    fld<void *>(ctx, 0x31C) = newStaticArray(0x60, 0x14, kStaticArrayFloatx20);  /* +0x31C: StaticArray<float,20> */
    void *table = fld<void *>(ctx, 0x318);
    clearStaticArray(table);
    pushFloat(fld<void *>(ctx, 0x318), 90.0f);
    pushFloat(fld<void *>(ctx, 0x318), -67.5f);
    pushFloat(fld<void *>(ctx, 0x318), 67.5f);
    pushFloat(fld<void *>(ctx, 0x318), -90.0f);
    pushFloat(fld<void *>(ctx, 0x318), 81.0f);
    pushFloat(fld<void *>(ctx, 0x318), -112.5f);
    pushFloat(fld<void *>(ctx, 0x318), 78.75f);
    pushFloat(fld<void *>(ctx, 0x318), -85.5f);
    pushFloat(fld<void *>(ctx, 0x318), 119.25f);
    pushFloat(fld<void *>(ctx, 0x318), -101.25f);
    pushFloat(fld<void *>(ctx, 0x318), 51.75f);
    pushFloat(fld<void *>(ctx, 0x318), -108.0f);
    pushFloat(fld<void *>(ctx, 0x318), 103.5f);
    pushFloat(fld<void *>(ctx, 0x318), -96.75f);
    table = fld<void *>(ctx, 0x31C);
    clearStaticArray(table);
    pushFloat(fld<void *>(ctx, 0x31C), 158.0f);
    pushFloat(fld<void *>(ctx, 0x31C), 5.4f);
    pushFloat(fld<void *>(ctx, 0x31C), -153.40001f);
    pushFloat(fld<void *>(ctx, 0x31C), -9.0f);
    pushFloat(fld<void *>(ctx, 0x31C), 154.55f);
    pushFloat(fld<void *>(ctx, 0x31C), -13.500001f);
    pushFloat(fld<void *>(ctx, 0x31C), -141.9f);
    pushFloat(fld<void *>(ctx, 0x31C), 14.200001f);
    pushFloat(fld<void *>(ctx, 0x31C), 153.40001f);
    pushFloat(fld<void *>(ctx, 0x31C), -4.5f);
    pushFloat(fld<void *>(ctx, 0x31C), -153.40001f);
    pushFloat(fld<void *>(ctx, 0x31C), 1.0f);

    fld<float>(player, 0x1294) = 0.0f;  /* Pl0000+0x1290..0x12B0: ? */
    fld<int>(player, 0x1298) = 0;
    fld<int>(player, 0x1290) = 0;
    fld<float>(player, 0x12AC) = 0.0f;
    fld<int>(player, 0x12B0) = 0;
    fld<int>(player, 0x12A8) = 0;
    FUN_00bd9220(context);
    fld<float>(ctx, 0x510) = 0.0f;  /* StateMachineContextPl0010+0x510: float[4] (0,0,0,1) */
    fld<float>(ctx, 0x514) = 0.0f;
    fld<float>(ctx, 0x518) = 0.0f;
    fld<float>(ctx, 0x51C) = 1.0f;
    fld<int>(ctx, 0x3EC) = 0;
    fld<int>(player, 0xB74) = 0;  /* Pl0000+0xB74: ? */
    fld<int>(ctx, 0x56C) = 0;
    fld<int>(ctx, 0x358) = 0;
    DAT_01d61924 = 0;
    DAT_01d6192c = 0;
    DAT_01dc08d8 = 1;
    thiscall<void>(FUN_00da9230, DAT_01bea1d0, 1);

    // start the three slash trails on player parts 1, 2 and 3
    trailPartsNo()[1] = 2;
    trailPartsNo()[2] = 3;
    trailPartsNo()[0] = 1;
    for (int i = 0; i < 3; i++) {
        void *trail = (void *)((int)player + 0x2EE0 + i * 0xE0);
        thiscall<void>(FUN_00a82610, trail, fld<int>(player, 0x4F0), trailPartsNo()[i], -1);
        float origin[4];  // origin[3] is never written
        origin[0] = 0.0f;
        origin[1] = 0.0f;
        origin[2] = 0.0f;
        thiscall<void>(FUN_00a832d0, trail, origin, 0.0f, 0.17453292f, 0.0f, -0.17453292f);  // +-10 degrees
    }
    fld<unsigned char>(player, 0x3460) = 0;  /* Pl0000+0x3460: byte flag */
    FUN_009403a0((int)DAT_01b36a60);
    if (fld<void *>(ctx, 0x38C) != 0) {  /* StateMachineContextPl0010+0x38C / +0x390: objects */
        thiscall<void>(FUN_005edc60, fld<void *>(ctx, 0x38C), 3.0f);
    }
    if (fld<void *>(ctx, 0x390) != 0) {
        thiscall<void>(FUN_005edc60, fld<void *>(ctx, 0x390), 3.0f);
    }
    fld<float>(player, 0x40C4) = fld<float>(player, 0x40C0);  /* Pl0000+0x40C0: duration, +0x40C4: remaining time */
    value60() = 0;
    value5C() = 0.0f;
    fld<int>(player, 0x40BC) = 0;
    fld<float>(ctx, 0x5D8) = 0.0f;
    fld<int>(ctx, 0x5D4) = 0;
    fld<int>(ctx, 0x370) = 0;
    fld<int>(ctx, 0x5DC) = 0;
    if ((int)DAT_01bea010 % 4 == 2 && (DAT_01bea094 & 0x800) == 0) {
        thiscall<void>(FUN_00bd9590, player, 0);
    }
    return true;
}

// src/behavior/BehaviorEmBase.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "BehaviorEmBase.h"

#include <math.h>     // pow (_CIpow, FUN_00fdc1f0), fabs
#include <string.h>   // strcmp (inlined in the binary), strstr (FUN_00fdbbd0)

// ---------------------------------------------------------------------------------------------
// Call helpers.  Many callees are declared in include/auto/functions.h with a prototype that
// does not match the machine code (hidden ECX, missing stack arguments, x87 return values); they
// are called through a cast so the argument list stays exactly as in the binary.  Offsets of
// base-class fields whose header is not owned by this file go through emb::fld and are tagged
// with the owning class.
// ---------------------------------------------------------------------------------------------
namespace emb {

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

}  // namespace emb

// compiler intrinsic (vf248); <intrin.h> clashes with functions.h
extern "C" void *_AddressOfReturnAddress(void);
#pragma intrinsic(_AddressOfReturnAddress)

// d3dx9_43.dll import
extern "C" float *__stdcall D3DXVec3TransformNormal(float *out, const float *v, const float *m);

// type records returned by cObj::vf04 (FUN_00dd6d80(record, target) walks the parent chain)
extern unsigned char DAT_01be9c24[];  // BehaviorAppBase
extern unsigned char DAT_01be9c78[];  // BehaviorEmBase
extern unsigned char DAT_01be9ca0[];  // BehaviorEmBody
extern unsigned char DAT_01be9db8[];  // Pl0000

// debug-print format strings (Shift-JIS)
extern const char DAT_0163fdc8[];  // "Em%04x setWait が設定されていません ソフトイベント終了時動作が指定..."
extern const char DAT_0164524c[];  // "cModelBase::getMeshAlpha メッシュがないモデルです。"
extern const char DAT_0169fcb8[];  // "強制死亡リクエストされました 死亡時に必要な処理をしてください : %s"

// global objects passed in ECX
extern unsigned char DAT_01b5d1e0[];  // FUN_009c4bf0
extern unsigned char DAT_01b7b364[];  // cObjReadManager instance (getDataAtSet)
extern unsigned char DAT_01bea1d0[];  // FUN_00d9fa80 (world -> screen)
extern unsigned char DAT_01beb908[];  // FUN_00c4ec80
extern unsigned char DAT_01bebd80[];  // FUN_00c5e220
extern unsigned char DAT_01c78cb0[];  // FUN_00c19eb0 / FUN_00c19f10 / FUN_00c19f90 / FUN_00c1a020 / FUN_00c1a4b0 / FUN_00c1a530
extern unsigned char DAT_01d61850[];  // FUN_00c45fd0
extern unsigned char DAT_01d64300[];  // FUN_00c3dac0

// plain globals
extern int          DAT_01b7bd48;  // passed by address to FUN_00410540 (holds 0)
extern unsigned int DAT_01bea060;  // global flags
extern unsigned int DAT_01bea074;  // global flags
extern int          DAT_01d5bad4;  // default sound group when soundGroupB9C() < 0

// 0043F8F0  BehaviorEmBase::vf338  size=3  [class]
void BehaviorEmBase::vf338(unsigned int unused1, unsigned int unused2, unsigned int unused3)
{
}

// 004ED820  BehaviorEmBase::vf04  size=6  [class]
undefined *BehaviorEmBase::vf04()
{
    return DAT_01be9c78;
}

// 004ED830  BehaviorEmBase::vf244  size=13  [class]
undefined4 BehaviorEmBase::vf244()
{
    return FUN_00a8c760((int)this, 0x21) == 0;
}

// 004ED840  BehaviorEmBase::vf330  size=6  [class]
undefined4 BehaviorEmBase::vf330()
{
    return 1;
}

// 004ED850  BehaviorEmBase::vf274  size=7  [class]
undefined4 BehaviorEmBase::vf274()
{
    return flagA48();
}

// 004ED860  BehaviorEmBase::vf108  size=13  [class]
void BehaviorEmBase::vf108()
{
    // ret 8 in the binary: two stack arguments, not used
    vf34C();
}

// 004ED870  BehaviorEmBase::vf350  size=10  [class]
void BehaviorEmBase::vf350()
{
    vf34C();  // tail jump
}

// 004ED880  BehaviorEmBase::vf368  size=3  [class]
undefined4 BehaviorEmBase::vf368()
{
    return 0;
}

// 004ED890  BehaviorEmBase::vf18C  size=34  [class]
void BehaviorEmBase::vf18C()
{
    // the binary returns 1 / 0 in EAX; Behavior declares this slot void
    if (vf194() != 0) {
        flagD84() = 1;
        return;  // 1
    }
    return;  // 0
}

// 004ED8C0  BehaviorEmBase::vf190  size=7  [class]
undefined4 BehaviorEmBase::vf190()
{
    return flagD84();
}

// 004ED8D0  BehaviorEmBase::vf194  size=6  [class]
undefined4 BehaviorEmBase::vf194()
{
    return 1;
}

// 004ED8E0  BehaviorEmBase::vf238  size=6  [class]
undefined4 BehaviorEmBase::vf238()
{
    return 1;
}

// 004ED8F0  BehaviorEmBase::vf23C  size=6  [class]
undefined4 BehaviorEmBase::vf23C()
{
    return 1;
}

// 004ED900  BehaviorEmBase::vf34C  size=26  [class]
void BehaviorEmBase::vf34C()
{
    // default setWait: "Em%04x setWait is not set; no action given for the end of the soft event"
    emb::cdeclcall<void>(&FUN_00dd5650, DAT_0163fdc8, modelObjId() & 0xFFFF);
}

// 004ED920  BehaviorEmBase::vf00  size=30  [class]
undefined4 BehaviorEmBase::destruct(byte flags)
{
    // destructor body (FILEMAP: cEnemyCautionStateManager::cEnemyCautionStateManager_3), ECX = this
    emb::thiscall<void>(0x004ECE70u, this);
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // operator delete
    }
    return (undefined4)this;
}

// 00AC4140  BehaviorEmBase::vf30  size=32  [class]
void BehaviorEmBase::vf30()
{
    BehaviorAppBase::vf30();
    char *obj = (char *)field588();
    if (obj != 0) {
        emb::fld<int>(obj, 0xB0) = fieldAB8();
    }
}

// 00AC4160  FUN_00ac4160  size=17  [between]
void FUN_00ac4160(void)
{
    emb::vcall<void>((void *)FUN_00c1b9a0(), 0x34, 0);
}

// 00AC4180  BehaviorEmBase::vf32C  size=3  [class]
undefined4 BehaviorEmBase::vf32C()
{
    return 0;
}

// 00AC4190  BehaviorEmBase::vf50  size=21  [class]
void BehaviorEmBase::vf50()
{
    BehaviorAppBase::vf50();
    setSeqAtk();  // tail jump through slot 0x128
}

// 00AC41B0  BehaviorEmBase::vf31C  size=721  [class]
void BehaviorEmBase::vf31C()
{
    float vec[4];
    float step[4];
    float uninitialized;  // ? stack slot that is read before any write (lands in move890()[3])
    float *move = move890();
    float dt;

    char *body = emb::fld<char *>(this, 0x764); /* Behavior+0x764: physics body */
    if (body != 0 && emb::fld<int>(body, 0x104) != 1) {
        emb::fld<int>(body, 0x104) = 1;
        emb::fld<float>(emb::fld<char *>(body, 0xD0), 4) = 0.0f;
    }

    if (flag884() != 0) {
        move[0] = 0.0f;
        move[1] = 0.0f;
        move[2] = 0.0f;
        move[3] = uninitialized;
        if (emb::fld<char *>(this, 0x764) /* Behavior+0x764 */ != 0) {
            dt = emb::fld<float>(this, 0x910); /* BehaviorAppBase+0x910: frame speed */
            vec[0] = move[0] * dt;
            vec[1] = move[1] * dt;
            vec[2] = move[2] * dt;
            vec[3] = dt * move[3];
            FUN_008e0c00((int)emb::fld<char *>(this, 0x764), (undefined4 *)vec);
        }
        return;
    }

    if (emb::fld<char *>(this, 0x764) /* Behavior+0x764 */ != 0) {
        dt = emb::fld<float>(this, 0x910); /* BehaviorAppBase+0x910 */
        vec[0] = move[0] * dt;
        vec[1] = move[1] * dt;
        vec[2] = move[2] * dt;
        vec[3] = dt * move[3];
        FUN_008e0c00((int)emb::fld<char *>(this, 0x764), (undefined4 *)vec);
    }

    if (0.0f < move[1]) {
        // rising: decelerate with 0.9 x gravity
        float vy = move[1] - emb::fld<float>(this, 0x8A8) /* BehaviorAppBase+0x8A8: gravity */ *
                                 emb::fld<float>(this, 0x910) * 0.9f;
        move[1] = vy;
        emb::fld<float>(this, 0x974) = 0.0f; /* BehaviorAppBase+0x974 */
        if (vy < 0.0f) {
            move[1] = 0.0f;
            if (hoverPending() != 0) {
                hoverPending() = 0;
                hoverTimer() = hoverDuration();
            }
        }
    }
    else {
        // falling: gravity is scaled by 0.05 while hoverTimer runs, 1.1 otherwise; then damped
        if (hoverTimer() >= 0.0f) {
            hoverTimer() = hoverTimer() - emb::fld<float>(this, 0x910);
        }
        bool hovering = !(hoverTimer() < 0.0f);
        double damping = pow((double)0.99f, (double)emb::fld<float>(this, 0x910));  // _CIpow
        double gravity;
        if (hovering) {
            gravity = (double)emb::fld<float>(this, 0x8A8) * (double)emb::fld<float>(this, 0x910) * 0.05f;
        }
        else {
            gravity = (double)emb::fld<float>(this, 0x8A8) * (double)emb::fld<float>(this, 0x910) * 1.1f;
        }
        move[1] = (float)(((double)move[1] - gravity) * damping);
    }

    if (emb::fld<char *>(this, 0x764) /* Behavior+0x764 */ != 0) {
        if (emb::fld<float>(emb::fld<char *>(emb::fld<char *>(this, 0x764), 0xD0), 4) < 0.0f &&
            FUN_008e2740((int)emb::fld<char *>(this, 0x764))) {
            field8A0() = 1;
            move[1] = 0.0f;
        }
        vec[0] = move[0];
        vec[1] = move[1];
        vec[2] = move[2];
        vec[3] = move[3];
        D3DXVec3TransformNormal(vec, vec, matrixB0());  // result is not used afterwards
        dt = emb::fld<float>(this, 0x910); /* BehaviorAppBase+0x910 */
        step[0] = dt * move[0];
        step[1] = dt * move[1];
        step[2] = dt * move[2];
        step[3] = dt * move[3];
        FUN_008e0c00((int)emb::fld<char *>(this, 0x764), (undefined4 *)step);
        if (FUN_008e2740((int)emb::fld<char *>(this, 0x764))) {
            move[0] = move[0] * 0.7f;
            move[2] = move[2] * 0.7f;
            return;
        }
    }
}

// 00AC4490  FUN_00ac4490  size=259  [between]
void BehaviorEmBase::FUN_00ac4490()
{
    float delta[4];

    BehaviorAppBase *target = player();
    playerDistSq() = 0.0f;
    playerDistSqXZ() = 0.0f;
    if (target != 0) {
        delta[0] = target->matrix()[12] - matrix()[12];
        float dy = target->matrix()[13] - matrix()[13];
        delta[2] = target->matrix()[14] - matrix()[14];
        delta[3] = target->matrix()[15] - matrix()[15];
        playerDy() = dy;
        playerAbsDy() = (float)fabs(dy);
        playerDistSq() = dy * dy + delta[0] * delta[0] + delta[2] * delta[2];
        delta[1] = 0.0f;
        playerDistSqXZ() = delta[0] * delta[0] + delta[2] * delta[2];
        float10 yawDiff = emb::cdeclcall<float10>(
            &FUN_00ddba30, (float)(FUN_00a8ec30((int)this, target->quat()) - vec90()[1]));
        playerYawDiff() = (float)yawDiff;
        playerAbsYawDiff() = (float)fabs(yawDiff);
        if (!(0.0f < delta[0] * delta[0] + delta[1] * delta[1] + delta[2] * delta[2])) {
            delta[0] = 0.0f;
            delta[1] = 0.0f;
            delta[2] = 1.0f;
            D3DXVec3TransformNormal(delta, delta, matrix());  // result is not used afterwards
            return;
        }
    }
}

// 00AC45B0  FUN_00ac45b0  size=29  [between]
undefined4 FUN_00ac45b0(void)
{
    if (FUN_00c13920() != 0) {
        return emb::vcall<undefined4>((void *)FUN_00c13920(), 0x28, 0);
    }
    return 0;
}

// 00AC45D0  FUN_00ac45d0  size=105  [between]
bool BehaviorEmBase::FUN_00ac45d0(unsigned int a1, unsigned int a2, unsigned int a3, float a4, float a5,
                                  unsigned int a6, float a7, float a8, unsigned int a9)
{
    if (vf330() != 0) {
        return emb::thiscall<int>(&FUN_00a9f180, this, a1, a2, a9, a3, a4, a5, a6, a7, a8) != -1;
    }
    return false;
}

// 00AC4640  FUN_00ac4640  size=25  [between]
void BehaviorEmBase::FUN_00ac4640(unsigned int soundId)
{
    FUN_00c19eb0((int)DAT_01c78cb0, soundGroupB9C(), soundId);
}

// 00AC4670  FUN_00ac4670  size=30  [between]
void BehaviorEmBase::FUN_00ac4670(unsigned int a, unsigned int b)
{
    FUN_00c19f10((int)DAT_01c78cb0, soundGroupB9C(), b, (undefined4 *)a);
}

// 00AC4690  FUN_00ac4690  size=27  [between]
undefined4 BehaviorEmBase::FUN_00ac4690()
{
    if (ownedObj808() != 0 && FUN_00a8d820((int)this) != 0) {
        return 1;
    }
    return 0;
}

// 00AC46B0  FUN_00ac46b0  size=30  [between]
void BehaviorEmBase::FUN_00ac46b0(unsigned int a, unsigned int b)
{
    FUN_00c19f90((int)DAT_01c78cb0, a, soundGroupB9C(), b);
}

// 00AC46D0  FUN_00ac46d0  size=10  [between]
unsigned int BehaviorEmBase::FUN_00ac46d0()
{
    return emb::fld<unsigned int>(this, 0x4A8) /* cObj+0x4A8 */ >> 31;
}

// 00AC46E0  FUN_00ac46e0  size=13  [between]
unsigned int BehaviorEmBase::FUN_00ac46e0()
{
    return emb::fld<unsigned int>(this, 0x4A8) /* cObj+0x4A8 */ >> 30 & 1;
}

// 00AC46F0  FUN_00ac46f0  size=13  [between]
unsigned int BehaviorEmBase::FUN_00ac46f0()
{
    return emb::fld<unsigned int>(this, 0x4A8) /* cObj+0x4A8 */ >> 29 & 1;
}

// 00AC4700  FUN_00ac4700  size=7  [between]
undefined4 BehaviorEmBase::FUN_00ac4700()
{
    return fieldBA4();
}

// 00AC4710  FUN_00ac4710  size=87  [between]
undefined4 BehaviorEmBase::FUN_00ac4710(int id)
{
    if (-1 < id && ownedObj808() != 0) {
        int group = soundGroupB9C();
        if (soundGroupB9C() < 0) {
            group = DAT_01d5bad4;
        }
        undefined4 entry = FUN_00c1a020((int)DAT_01c78cb0, group, id);
        if (entry != 0) {
            fieldB08() = id;
            FUN_00c9da40((undefined4 *)ownedObj808(), entry);
            return 1;
        }
    }
    return 0;
}

// 00AC4770  FUN_00ac4770  size=12  [between]
uint FUN_00ac4770(void)
{
    return DAT_01bea074 >> 15 & 1;
}

// 00AC4780  FUN_00ac4780  size=10  [between]
void FUN_00ac4780(void)
{
    emb::thiscall<void>(&FUN_009c4bf0, DAT_01b5d1e0);  // tail jump
}

// 00AC4790  FUN_00ac4790  size=118  [between]
float BehaviorEmBase::FUN_00ac4790(unsigned int arg)
{
    float result = 0.0f;
    void *obj = (void *)field754(); /* Behavior+0x754 */
    if (obj != 0) {
        // the vcalls are tail jumps that forward `arg`
        switch (emb::thiscall<int>(&FUN_009c4bf0, DAT_01b5d1e0)) {
        case 0:
            return emb::vcall<float>((void *)field754(), 0x5C, arg);
        default:  // 1 and above 4
            break;
        case 2:
            return emb::vcall<float>((void *)field754(), 0x64, arg);
        case 3:
            return emb::vcall<float>((void *)field754(), 0x6C, arg);
        case 4:
            return emb::vcall<float>((void *)field754(), 0x74, arg);
        }
    }
    return result;
}

// 00AC4820  FUN_00ac4820  size=118  [between]
float BehaviorEmBase::FUN_00ac4820(unsigned int arg)
{
    float result = 0.0f;
    void *obj = (void *)field754(); /* Behavior+0x754 */
    if (obj != 0) {
        switch (emb::thiscall<int>(&FUN_009c4bf0, DAT_01b5d1e0)) {
        case 0:
            return emb::vcall<float>((void *)field754(), 0x60, arg);
        default:  // 1 and above 4
            break;
        case 2:
            return emb::vcall<float>((void *)field754(), 0x68, arg);
        case 3:
            return emb::vcall<float>((void *)field754(), 0x70, arg);
        case 4:
            return emb::vcall<float>((void *)field754(), 0x78, arg);
        }
    }
    return result;
}

// 00AC48E0  FUN_00ac48e0  size=14  [between]
void FUN_00ac48e0(void)
{
    emb::vcall<void>((void *)FUN_00c1b9a0(), 0x4C);  // tail jump
}

// 00AC48F0  FUN_00ac48f0  size=274  [between]
undefined4 BehaviorEmBase::FUN_00ac48f0(int partsNo)
{
    cParts *parts = this;
    float screen[4];

    if (partsNo != -1) {
        parts = (cParts *)FUN_00a12210((int)this, partsNo);
        if (parts == 0) {
            return 0;
        }
    }
    int width1 = FUN_00f98a90();
    int height1 = FUN_00f98aa0();
    int width2 = FUN_00f98a90();
    int height2 = FUN_00f98aa0();
    float halfWidth1 = (float)width1 * 0.5f;
    float halfHeight1 = (float)height1 * 0.5f;
    float halfWidth2 = (float)width2 * 0.5f;
    float halfHeight2 = (float)height2 * 0.5f;
    FUN_00d9fa80((int)DAT_01bea1d0, (undefined4)screen, (undefined4)(parts->matrix() + 12));
    if (1.0f < screen[3] && halfWidth1 - halfWidth2 < screen[0] && screen[0] < halfWidth2 + halfWidth1 &&
        halfHeight1 - halfHeight2 < screen[1] && screen[1] < halfHeight2 + halfHeight1) {
        return 1;
    }
    return 0;
}

// 00AC4A90  FUN_00ac4a90  size=60  [between]
void BehaviorEmBase::FUN_00ac4a90(int amount)
{
    hpBD8() = hpBD8() - amount;
    int hp = hpBD8();
    if (hp <= hpThresholdBDC()) {
        hpFlags() = hpFlags() | 2;
    }
    if (hp <= hpThresholdBE0()) {
        hpFlags() = hpFlags() | 4;
    }
    if (hp < 1) {
        hpFlags() = hpFlags() | 8;
    }
}

// 00AC4B50  BehaviorEmBase::vf248  size=18  [class]
void BehaviorEmBase::vf248()
{
    // Behavior::vf248 is declared without parameters, but the machine code takes three stack
    // arguments (ret 0xC) and forwards the first one to slot 0x360.
    int target = ((int *)_AddressOfReturnAddress())[1];
    vf360(target);
}

// 00AC4B90  BehaviorEmBase::vf228  size=13  [class]
undefined4 BehaviorEmBase::vf228()
{
    return FUN_00a8c760((int)this, 0x1D) == 0;
}

// 00AC4BA0  BehaviorEmBase::vf33C  size=14  [class]
void BehaviorEmBase::vf33C(unsigned int unused, unsigned int *desc)
{
    desc[6] = 0x42000;  // +0x18
}

// 00AC4BB0  BehaviorEmBase::vf340  size=11  [class]
void BehaviorEmBase::vf340()
{
    flagA48() = 0;
}

// 00AC4BD0  FUN_00ac4bd0  size=42  [between]
void BehaviorEmBase::FUN_00ac4bd0()
{
    if (FUN_00a81330(&emBodyHandle()) != 0) {
        FUN_00a805f0(FUN_00a81330(&emBodyHandle()));
        FUN_00a7c950(&emBodyHandle());  // tail jump
        return;
    }
}

// 00AC4C20  BehaviorEmBase::vf36C  size=38  [class]
void BehaviorEmBase::vf36C(unsigned int arg)
{
    int value = FUN_009f8b40((int)this);
    undefined *data = vf68();
    FUN_009577e0(arg, (undefined4 *)data, value, 0);
}

// 00AC7C10  BehaviorEmBase::vf40  size=631  [class]
undefined4 BehaviorEmBase::startup()
{
    float uninitialized;  // ? stack slot that is read before any write (lands in move890()[3])
    int arrayInit[3];

    if (BehaviorAppBase::startup() == 0) {
        return 0;
    }
    fieldA2C() = 0;
    int *obj370 = (int *)ownedObject370();
    if (obj370 != 0) {
        flags364() = flags364() & 0xFFBFFFFF;
        *obj370 = 1;
    }
    flags364() = flags364() | 0x100000;
    FUN_00410540((int)((char *)this + 0x678) /* Behavior+0x678 */, 0x40, &DAT_01b7bd48);
    emb::thiscall<void>(0x00AC2010u, this);  // FILEMAP: lib::AllocatedArray<Collision*>::AllocatedArray
    field640() = 2;
    FUN_00dd7240((undefined4)embeddedA00());
    objFlags() = objFlags() | 0x20;
    FUN_00c5e220((int)DAT_01bebd80, field4F0());
    cParts *parts = (cParts *)FUN_00a12210((int)this, 0xF00);
    if (parts != 0) {
        parts->flags() = parts->flags() | 0x1000;
    }
    FUN_00a8edf0((int)this, 100);
    emb::thiscall<void>(0x00AA3920u, this, 8);  // FILEMAP: lib::StaticArray<Collision*,250>::StaticArray
    emb::fld<float>(this, 0x8A4) = 0.0f; /* BehaviorAppBase+0x8A4 */
    field8A0() = 1;
    move890()[0] = 0.0f;
    move890()[1] = -0.01f;
    move890()[2] = 0.0f;
    move890()[3] = uninitialized;
    emb::fld<float>(this, 0x8A8) = 0.01f; /* BehaviorAppBase+0x8A8: gravity */
    FUN_00e08640((int *)FUN_00a92fb0((int)this), 2);
    vf314();
    hoverTimer() = -1.0f;
    emb::fld<int>(this, 0x8AC) = 0; /* BehaviorAppBase+0x8AC */
    emb::fld<int>(this, 0x8B0) = 0; /* BehaviorAppBase+0x8B0 */
    emb::fld<int>(this, 0x68C) = 0; /* Behavior+0x68C */
    hoverPending() = 0;
    emb::fld<float>(this, 0x980) = 0.0f; /* BehaviorAppBase+0x980 */
    emb::fld<float>(this, 0x984) = 0.0f; /* BehaviorAppBase+0x984 */
    emb::fld<float>(this, 0x988) = 0.0f; /* BehaviorAppBase+0x988 */
    arrayInit[0] = 1;
    arrayInit[1] = 1;
    arrayInit[2] = 1;
    // FILEMAP: lib::StaticArray<Behavior::EffectIntegrationContainer,32>::StaticArray
    if (emb::thiscall<int>(0x00AA4980u, this, arrayInit) == 0) {
        return 0;
    }
    idsA30()[0] = -1;
    idsA30()[1] = -1;
    idsA30()[2] = -1;
    idsA30()[3] = -1;
    fieldA40() = 0;
    byteA44() = 0;
    flagA48() = 0;
    FUN_00a8d280((int)this);
    objBF0() = 0;
    hpFlags() = 0;
    fieldBE8() = 0;
    objBEC() = 0;
    FUN_00a7c950(&emBodyHandle());
    counterBF4() = 0.0f;
    offscreenTime() = 0.0f;
    fieldA50() = 0;
    fieldA54() = 0;
    fieldA58() = 0;
    flagBF8() = 0;
    fieldD88() = 0;
    if ((objFlags() & 2) == 0) {
        FUN_009fd240((int)this);
        fieldA50() = 1;
    }
    fieldD8C() = 0.0f;
    fieldD90() = 0.0f;
    setDataA6CValid() = 0;
    fieldD80() = 0;
    field840() = 0;
    field844() = 0;
    fieldBFC() = 0;
    fieldC00() = 0;
    fieldC04() = 0;
    fieldDA8() = -1;
    fieldDB0() = -1;
    byteDB4() = 0;
    shortDAC() = 0;
    FUN_00a92a30((int)this, -1);
    return 1;
}

// 00AC7E90  BehaviorEmBase::vf48  size=364  [class]
void BehaviorEmBase::vf48()
{
    int entity;
    if (FUN_00c13920() == 0) {
        entity = 0;
    }
    else {
        entity = emb::vcall<int>((void *)FUN_00c13920(), 0x28, 0);
    }
    playerEntity() = entity;
    player() = 0;
    if (entity != 0) {
        void *obj = (void *)FUN_00a7c8a0(entity);
        BehaviorAppBase *found = 0;
        if (obj != 0) {
            int isApp = FUN_00dd6d80((undefined4 *)emb::vcall<void *>(obj, 0x4), (undefined4 *)DAT_01be9c24);
            found = isApp != 0 ? (BehaviorAppBase *)obj : 0;
        }
        player() = found;
    }
    if (FUN_00a81330(&emBodyHandle()) != 0) {
        int *body = (int *)FUN_00a81330(&emBodyHandle());
        FUN_00e08600(body, (int *)FUN_00a92fb0((int)this));
    }
    emb::fld<float>(this, 0x910) = (float)FUN_00e049b0((int *)FUN_00a92fb0((int)this)); /* BehaviorAppBase+0x910 */
    flagD84() = 0;
    if (FUN_00a8c760((int)this, 0x15)) {
        FUN_00a8d280((int)this);
    }
    vf32C();
    if (objBF0() != 0) {
        emb::fld<undefined4>(objBF0(), 0x44) = FUN_00a8eea0((int)this);
    }
    if (!FUN_00a8c760((int)this, 0x18) && field878() != 0) {
        updateGroundSupportForParts((int)&groundSupportA5C(), (float *)((char *)this + 0x5B0),
                                    (int *)((char *)this + 0x594), (int *)((char *)this + 0x5F0),
                                    field87C()); /* Behavior+0x5B0/+0x594/+0x5F0 */
        updateGroundSupportForParts((int)&groundSupportA60(), (float *)((char *)this + 0x5C0),
                                    (int *)((char *)this + 0x598), (int *)((char *)this + 0x5F4),
                                    field880()); /* Behavior+0x5C0/+0x598/+0x5F4 */
    }
    FUN_00c3dac0((int)DAT_01d64300, (undefined4)(matrix() + 12), dataD94());
    BehaviorAppBase::vf48();  // tail jump
}

// 00AC8000  FUN_00ac8000  size=70  [between]
undefined4 BehaviorEmBase::FUN_00ac8000()
{
    if (field4F0() == 0) {
        return 0;
    }
    undefined4 model = FUN_00a92f90((int)this);
    emb::fld<float>(this, 0x900) = quat()[0]; /* BehaviorAppBase+0x900 */
    emb::fld<undefined4>(this, 0x918) = model; /* BehaviorAppBase+0x918 */
    emb::fld<float>(this, 0x904) = quat()[1]; /* BehaviorAppBase+0x904 */
    emb::fld<float>(this, 0x908) = quat()[2]; /* BehaviorAppBase+0x908 */
    emb::fld<float>(this, 0x90C) = quat()[3]; /* BehaviorAppBase+0x90C */
    return 1;
}

// 00AC8050  BehaviorEmBase::vf128  size=69  [class]
void BehaviorEmBase::setSeqAtk()
{
    if (field4F0() != 0) {
        undefined4 model = FUN_00a92f90((int)this);
        emb::fld<float>(this, 0x900) = quat()[0]; /* BehaviorAppBase+0x900 */
        emb::fld<undefined4>(this, 0x918) = model; /* BehaviorAppBase+0x918 */
        emb::fld<float>(this, 0x904) = quat()[1]; /* BehaviorAppBase+0x904 */
        emb::fld<float>(this, 0x908) = quat()[2]; /* BehaviorAppBase+0x908 */
        emb::fld<float>(this, 0x90C) = quat()[3]; /* BehaviorAppBase+0x90C */
        Behavior::setSeqAtk();  // tail jump
        return;
    }
}

// 00AC80A0  FUN_00ac80a0  size=127  [between]
void BehaviorEmBase::FUN_00ac80a0(float scale, float rate)
{
    float prevYaw = vec90()[1];
    int model = FUN_00a92f90((int)this);
    emb::fld<int>(this, 0x918) = model; /* BehaviorAppBase+0x918 */
    if (model != 0 && (emb::fld<unsigned char>((void *)model, 0x94) & 1) != 0) {
        FUN_00e26e90(model);
        emb::fld<float>((void *)model, 0xE4) = scale;
        emb::fld<float>((void *)model, 0xE8) = scale;
        emb::fld<float>((void *)model, 0xEC) = scale;
    }
    BehaviorAppBase::vf64();
    float10 turned = emb::cdeclcall<float10>(&FUN_00ddba30, vec90()[1] - prevYaw);
    vec90()[1] = (float)emb::cdeclcall<float10>(&FUN_00ddba30, (float)(turned * rate + prevYaw));
}

// 00AC8120  FUN_00ac8120  size=77  [between]
uint FUN_00ac8120(void)
{
    if (FUN_00c13920() != 0) {
        int entity = emb::vcall<int>((void *)FUN_00c13920(), 0x28, 0);
        if (entity != 0) {
            void *obj = (void *)FUN_00a7c8a0(entity);
            if (obj == 0) {
                return 0;
            }
            int isPlayer = FUN_00dd6d80((undefined4 *)emb::vcall<void *>(obj, 0x4), (undefined4 *)DAT_01be9db8);
            return isPlayer != 0 ? (uint)obj : 0;  // the entity's Pl0000 behaviour
        }
    }
    return 0;
}

// 00AC8170  FUN_00ac8170  size=27  [between]
unsigned char BehaviorEmBase::FUN_00ac8170(Behavior *other)
{
    if (other == 0) {
        return 0;
    }
    return (unsigned char)other->objFlags() >> 4 & 1;
}

// 00AC8190  FUN_00ac8190  size=95  [between]
undefined4 FUN_00ac8190(void)
{
    if (FUN_00c13920() != 0) {
        int entity = emb::vcall<int>((void *)FUN_00c13920(), 0x28, 0);
        if (entity != 0) {
            void *pl = (void *)FUN_00a7c8a0(entity);
            if (pl != 0 &&
                FUN_00dd6d80((undefined4 *)emb::vcall<void *>(pl, 0x4), (undefined4 *)DAT_01be9db8) != 0 &&
                emb::vcall<int>(pl, 0x354) != 0) {
                return 1;
            }
        }
    }
    return 0;
}

// 00AC81F0  FUN_00ac81f0  size=116  [between]
void BehaviorEmBase::FUN_00ac81f0(float *pos, undefined4 *outA, undefined4 *outB)
{
    *outA = 0;
    *outB = 0;
    if (FUN_00c13920() != 0) {
        int entity = emb::vcall<int>((void *)FUN_00c13920(), 0x28, 0);
        if (entity != 0) {
            void *pl = (void *)FUN_00a7c8a0(entity);
            if (pl != 0 &&
                FUN_00dd6d80((undefined4 *)emb::vcall<void *>(pl, 0x4), (undefined4 *)DAT_01be9db8) != 0) {
                // raw showed the return-address slot as the first argument; it is `pos`
                emb::thiscall<void>(&FUN_00bc3c20, pl, pos, outA, outB, 0.0f);
            }
        }
    }
}

// 00AC8270  FUN_00ac8270  size=120  [between]
void BehaviorEmBase::FUN_00ac8270(float *pos, undefined4 *outA, undefined4 *outB)
{
    *outA = 0;
    *outB = 0;
    if (FUN_00c13920() != 0) {
        int entity = emb::vcall<int>((void *)FUN_00c13920(), 0x28, 0);
        if (entity != 0) {
            void *pl = (void *)FUN_00a7c8a0(entity);
            if (pl != 0 &&
                FUN_00dd6d80((undefined4 *)emb::vcall<void *>(pl, 0x4), (undefined4 *)DAT_01be9db8) != 0) {
                emb::thiscall<void>(&FUN_00bc3c20, pl, pos, outA, outB, 2.0f);
            }
        }
    }
}

// 00AC82F0  FUN_00ac82f0  size=95  [between]
undefined4 FUN_00ac82f0(void)
{
    if (FUN_00c13920() != 0) {
        int entity = emb::vcall<int>((void *)FUN_00c13920(), 0x28, 0);
        if (entity != 0) {
            void *pl = (void *)FUN_00a7c8a0(entity);
            if (pl != 0 &&
                FUN_00dd6d80((undefined4 *)emb::vcall<void *>(pl, 0x4), (undefined4 *)DAT_01be9db8) != 0 &&
                emb::vcall<int>(pl, 0x32C) != 0) {
                return 1;
            }
        }
    }
    return 0;
}

// 00AC8350  FUN_00ac8350  size=90  [between]
undefined4 FUN_00ac8350(void)
{
    if (FUN_00c13920() != 0) {
        int entity = emb::vcall<int>((void *)FUN_00c13920(), 0x28, 0);
        if (entity != 0) {
            void *pl = (void *)FUN_00a7c8a0(entity);
            if (pl != 0 &&
                FUN_00dd6d80((undefined4 *)emb::vcall<void *>(pl, 0x4), (undefined4 *)DAT_01be9db8) != 0 &&
                FUN_00b8c050((int)pl) != 0) {
                return 1;
            }
        }
    }
    return 0;
}

// 00AC83B0  FUN_00ac83b0  size=90  [between]
undefined4 FUN_00ac83b0(void)
{
    if (FUN_00c13920() != 0) {
        int entity = emb::vcall<int>((void *)FUN_00c13920(), 0x28, 0);
        if (entity != 0) {
            void *pl = (void *)FUN_00a7c8a0(entity);
            if (pl != 0 &&
                FUN_00dd6d80((undefined4 *)emb::vcall<void *>(pl, 0x4), (undefined4 *)DAT_01be9db8) != 0 &&
                FUN_00b8c080((int)pl) != 0) {
                return 1;
            }
        }
    }
    return 0;
}

// 00AC8410  FUN_00ac8410  size=90  [between]
undefined4 FUN_00ac8410(void)
{
    if (FUN_00c13920() != 0) {
        int entity = emb::vcall<int>((void *)FUN_00c13920(), 0x28, 0);
        if (entity != 0) {
            void *pl = (void *)FUN_00a7c8a0(entity);
            if (pl != 0 &&
                FUN_00dd6d80((undefined4 *)emb::vcall<void *>(pl, 0x4), (undefined4 *)DAT_01be9db8) != 0 &&
                FUN_00b8bb10((int)pl) != 0) {
                return 1;
            }
        }
    }
    return 0;
}

// 00AC8470  FUN_00ac8470  size=95  [between]
undefined4 FUN_00ac8470(void)
{
    if (FUN_00c13920() != 0) {
        int entity = emb::vcall<int>((void *)FUN_00c13920(), 0x28, 0);
        if (entity != 0) {
            void *pl = (void *)FUN_00a7c8a0(entity);
            if (pl != 0 &&
                FUN_00dd6d80((undefined4 *)emb::vcall<void *>(pl, 0x4), (undefined4 *)DAT_01be9db8) != 0 &&
                emb::vcall<int>(pl, 0x330) != 0) {
                return 1;
            }
        }
    }
    return 0;
}

// 00AC84D0  FUN_00ac84d0  size=67  [between]
int BehaviorEmBase::FUN_00ac84d0(unsigned int arg)
{
    if ((void *)field754() == 0) {
        return 0;
    }
    int result = emb::vcall<int>((void *)field754(), 0x4, arg);
    int value = (int)FUN_00ac4790(arg);  // _ftol2 (FUN_00fdbc60)
    if (0 < value) {
        result = value;
    }
    return result;
}

// 00AC8520  FUN_00ac8520  size=67  [between]
int BehaviorEmBase::FUN_00ac8520(unsigned int arg)
{
    if ((void *)field754() == 0) {
        return 0;
    }
    int result = emb::vcall<int>((void *)field754(), 0x8, arg);
    int value = (int)FUN_00ac4820(arg);  // _ftol2 (FUN_00fdbc60)
    if (0 < value) {
        result = value;
    }
    return result;
}

// 00AC8570  FUN_00ac8570  size=71  [between]
float BehaviorEmBase::FUN_00ac8570(unsigned int arg)
{
    if ((void *)field754() == 0) {
        return 0.0f;
    }
    float base = emb::vcall<float>((void *)field754(), 0x34, arg);
    float value = FUN_00ac4790(arg);
    if (!(0.0f < value)) {
        value = base;
    }
    return value;
}

// 00AC85C0  FUN_00ac85c0  size=133  [between]
float BehaviorEmBase::FUN_00ac85c0(int which, unsigned int arg)
{
    float result = 0.0f;
    if ((void *)field754() == 0) {
        return result;
    }
    switch (which) {
    case 5:
        result = emb::vcall<float>((void *)field754(), 0x34, arg);
        break;
    case 6:
        result = emb::vcall<float>((void *)field754(), 0x3C, arg);
        break;
    case 7:
        result = emb::vcall<float>((void *)field754(), 0x44, arg);
        break;
    case 8:
        result = emb::vcall<float>((void *)field754(), 0x4C, arg);
        break;
    default:
        break;
    }
    float value = FUN_00ac4790(arg);
    if (value == 0.0f) {
        value = result;
    }
    return value;
}

// 00AC8660  FUN_00ac8660  size=143  [between]
int BehaviorEmBase::FUN_00ac8660(int which, unsigned int arg)
{
    if ((void *)field754() == 0) {
        return 0;
    }
    int result = 0;
    switch (which) {
    case 0:
        result = emb::vcall<int>((void *)field754(), 0x24, arg);
        break;
    case 1:
        result = emb::vcall<int>((void *)field754(), 0x2C, arg);
        break;
    case 2:
        result = emb::vcall<int>((void *)field754(), 0x7C, arg);
        break;
    case 3:
        result = emb::vcall<int>((void *)field754(), 0x84, arg);
        break;
    case 4:
        result = emb::vcall<int>((void *)field754(), 0x8C, arg);
        break;
    default:
        break;
    }
    int value = (int)FUN_00ac4790(arg);  // _ftol2 (FUN_00fdbc60)
    if (value != 0) {
        result = value;
    }
    return result;
}

// 00AC8710  BehaviorEmBase::vf344  size=158  [class]
void BehaviorEmBase::vf344(unsigned int arg, unsigned int mode, int notify)
{
    if (field4E8() == 0) {
        field4E8() = 1;
        int found = emb::thiscall<int>(&FUN_00c1a4b0, DAT_01c78cb0, soundGroupB9C(), (int)shortAB2(),
                                       (int)shortAB4(), field83C());
        if (found == 0) {
            unsigned int useMode = 3;
            if (fieldD88() == 0) {
                useMode = mode;
            }
            emb::thiscall<void>(&FUN_00c1a530, DAT_01c78cb0, soundGroupB9C(), (int)shortAB2(),
                                (int)shortAB4(), field83C());
            if (notify != 0) {
                emb::vcall<void>((void *)FUN_00c1b9a0(), 0x44, arg, useMode);
            }
        }
    }
}

// 00AC87B0  BehaviorEmBase::vf348  size=371  [class]
undefined4 BehaviorEmBase::vf348(float limit)
{
    float screen[4];

    unsigned int flags = DAT_01bea060;
    if ((flags & 0x2000000) != 0 || (flags & 0x40000000) != 0 || (flags & 0x8000000) != 0) {
        return 1;
    }
    if (FUN_00ac82f0() != 0) {
        return 0;
    }
    cParts *root = (cParts *)FUN_00a12210((int)this, 0);
    if (root != 0) {
        int width1 = FUN_00f98a90();
        int height1 = FUN_00f98aa0();
        int width2 = FUN_00f98a90();
        int height2 = FUN_00f98aa0();
        float halfWidth1 = (float)width1 * 0.5f;
        float halfHeight1 = (float)height1 * 0.5f;
        float halfWidth2 = (float)width2 * 0.5f;
        float halfHeight2 = (float)height2 * 0.5f;
        FUN_00d9fa80((int)DAT_01bea1d0, (undefined4)screen, (undefined4)(root->matrix() + 12));
        if (1.0f < screen[3] && halfWidth1 - halfWidth2 < screen[0] && screen[0] < halfWidth2 + halfWidth1 &&
            halfHeight1 - halfHeight2 < screen[1] && screen[1] < halfHeight2 + halfHeight1) {
            offscreenTime() = 0.0f;
            return 0;
        }
    }
    float10 total = FUN_00e049b0((int *)FUN_00a92fb0((int)this)) + offscreenTime();
    offscreenTime() = (float)total;
    if (!(total >= limit)) {
        return 0;
    }
    return 1;
}

// 00AC8930  BehaviorEmBase::vf360  size=76  [class]
void BehaviorEmBase::vf360(int target)
{
    FUN_00e00900(target);
    if (FUN_00a81330(&emBodyHandle()) != 0) {
        FUN_00e020f0(target, FUN_00a81330(&emBodyHandle()));
        return;
    }
    FUN_00e020f0(target, field4F0());
}

// 00AC8980  FUN_00ac8980  size=68  [between]
void BehaviorEmBase::FUN_00ac8980()
{
    if (emb::fld<int>(objBEC(), 0x98) != 0) {
        emb::thiscall<void>(&FUN_00eaa6e0, objBEC(), 1.0f, 0.0f);
    }
    vf358(0x1FF, 0);
    objBEC() = 0;
}

// 00AC89D0  FUN_00ac89d0  size=89  [between]
Behavior *BehaviorEmBase::FUN_00ac89d0()
{
    if (FUN_00a81330(&emBodyHandle()) != 0 && FUN_00a7c8a0(FUN_00a81330(&emBodyHandle())) != 0) {
        Behavior *body = (Behavior *)FUN_00a7c8a0(FUN_00a81330(&emBodyHandle()));
        if (body != 0) {
            int isBody = FUN_00dd6d80((undefined4 *)body->vf04(), (undefined4 *)DAT_01be9ca0);
            return isBody != 0 ? body : 0;  // BehaviorEmBody
        }
    }
    return 0;
}

// 00AC8A30  FUN_00ac8a30  size=28  [between]
undefined4 BehaviorEmBase::FUN_00ac8a30()
{
    Behavior *body = FUN_00ac89d0();
    if (body != 0) {
        return body->field330();
    }
    return field330();
}

// 00AC8A50  FUN_00ac8a50  size=47  [between]
undefined4 BehaviorEmBase::FUN_00ac8a50()
{
    Behavior *body = FUN_00ac89d0();
    int obj;
    if (body == 0) {
        obj = field330();
    }
    else {
        obj = body->field330();
    }
    if (obj != 0) {
        return emb::fld<undefined4>((void *)obj, 0xCC);
    }
    return 0;
}

// 00AC8A80  FUN_00ac8a80  size=38  [between]
void BehaviorEmBase::FUN_00ac8a80(int arg)
{
    FUN_009f8ae0((int *)this, arg);
    Behavior *body = FUN_00ac89d0();
    if (body != 0) {
        FUN_009f8ae0((int *)body, arg);
    }
}

// 00AC8AB0  FUN_00ac8ab0  size=28  [between]
void BehaviorEmBase::FUN_00ac8ab0()
{
    FUN_009f8b10((int *)this);
    Behavior *body = FUN_00ac89d0();
    if (body != 0) {
        FUN_009f8b10((int *)body);  // tail jump
        return;
    }
}

// 00AC8AD0  FUN_00ac8ad0  size=71  [between]
void BehaviorEmBase::FUN_00ac8ad0(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4,
                                  unsigned int a5, unsigned int a6)
{
    Behavior *body = FUN_00ac89d0();
    if (body != 0) {
        // tail jump with the second stack argument ([esp+8]) replaced by the body's +0x4F0
        emb::thiscall<void>(&FUN_00a8c640, body, a1, (unsigned int)body->field4F0(), a3, a4, a5, a6);
        return;
    }
    emb::thiscall<void>(&FUN_00a8c640, this, a1, a2, a3, a4, a5, a6);
}

// 00AC8B20  FUN_00ac8b20  size=36  [between]
void BehaviorEmBase::FUN_00ac8b20(unsigned int arg)
{
    Behavior *body = FUN_00ac89d0();
    if (body != 0) {
        emb::thiscall<void>(&FUN_00a9e060, body, arg);  // tail jump
        return;
    }
    emb::thiscall<void>(&FUN_00a9e060, this, arg);
}

// 00AC8B50  FUN_00ac8b50  size=36  [between]
void BehaviorEmBase::FUN_00ac8b50(unsigned int arg)
{
    Behavior *body = FUN_00ac89d0();
    if (body != 0) {
        FUN_00a9e080((int)body, arg);  // tail jump
        return;
    }
    FUN_00a9e080((int)this, arg);
}

// 00AC8B80  FUN_00ac8b80  size=36  [between]
void BehaviorEmBase::FUN_00ac8b80(unsigned int arg)
{
    Behavior *body = FUN_00ac89d0();
    if (body != 0) {
        FUN_00a9e0d0((int)body, arg);  // tail jump
        return;
    }
    FUN_00a9e0d0((int)this, arg);
}

// 00AC8BB0  FUN_00ac8bb0  size=36  [between]
undefined4 BehaviorEmBase::FUN_00ac8bb0(int arg)
{
    Behavior *body = FUN_00ac89d0();
    if (body != 0) {
        return FUN_00a94480((int)body, arg);  // tail jump
    }
    return FUN_00a94480((int)this, arg);
}

// 00AC8BE0  FUN_00ac8be0  size=41  [between]
void BehaviorEmBase::FUN_00ac8be0(unsigned int a, unsigned int b)
{
    Behavior *body = FUN_00ac89d0();
    if (body != 0) {
        emb::thiscall<void>(&FUN_00a9e140, body, a, b);  // tail jump
        return;
    }
    emb::thiscall<void>(&FUN_00a9e140, this, a, b);
}

// 00AC8C10  FUN_00ac8c10  size=36  [between]
int BehaviorEmBase::FUN_00ac8c10(unsigned int arg)
{
    Behavior *body = FUN_00ac89d0();
    if (body != 0) {
        return FUN_00a94380((int)body, arg);  // tail jump
    }
    return FUN_00a94380((int)this, arg);
}

// 00AC8C40  FUN_00ac8c40  size=36  [between]
int *BehaviorEmBase::FUN_00ac8c40(int arg)
{
    Behavior *body = FUN_00ac89d0();
    if (body != 0) {
        return FUN_00a943e0((int)body, arg);  // tail jump
    }
    return FUN_00a943e0((int)this, arg);
}

// 00AC8C70  FUN_00ac8c70  size=36  [between]
unsigned int BehaviorEmBase::FUN_00ac8c70(unsigned int arg)
{
    Behavior *body = FUN_00ac89d0();
    if (body != 0) {
        return FUN_00a9e160((int)body, arg);  // tail jump
    }
    return FUN_00a9e160((int)this, arg);
}

// 00AC8CA0  FUN_00ac8ca0  size=36  [between]
undefined4 BehaviorEmBase::FUN_00ac8ca0(int arg)
{
    Behavior *body = FUN_00ac89d0();
    if (body != 0) {
        return FUN_00a98220((int)body, arg);  // tail jump
    }
    return FUN_00a98220((int)this, arg);
}

// 00AC8CD0  FUN_00ac8cd0  size=36  [between]
undefined4 BehaviorEmBase::FUN_00ac8cd0(int arg)
{
    Behavior *body = FUN_00ac89d0();
    if (body != 0) {
        return FUN_00a9f890((int)body, arg);  // tail jump
    }
    return FUN_00a9f890((int)this, arg);
}

// 00AC8D00  FUN_00ac8d00  size=60  [between]
void BehaviorEmBase::FUN_00ac8d00(unsigned int a, int b, unsigned int c)
{
    Behavior *body = FUN_00ac89d0();
    flagA48() = 1;
    if (body != 0) {
        // tail jump with the first stack argument replaced by the body itself
        emb::thiscall<void>(&FUN_00a8e5d0, body, (unsigned int)body, b, c);
        return;
    }
    emb::thiscall<void>(&FUN_00a8e5d0, this, a, b, c);
}

// 00AC8D40  FUN_00ac8d40  size=52  [between]
undefined4 BehaviorEmBase::FUN_00ac8d40(unsigned int arg)
{
    Behavior *body = FUN_00ac89d0();
    if (body == 0) {
        if (ownedObject370() != 0) {
            return FUN_00a1abe0((int)ownedObject370(), arg);  // tail jump
        }
    }
    else if (body->ownedObject370() != 0) {
        return FUN_00a1abe0((int)body->ownedObject370(), arg);  // tail jump
    }
    return 0;
}

// 00AC8D80  FUN_00ac8d80  size=71  [between]
undefined4 BehaviorEmBase::FUN_00ac8d80(int index, unsigned int value)
{
    Behavior *body = FUN_00ac89d0();
    char *obj;
    if (body == 0) {
        obj = (char *)ownedObject370();
    }
    else {
        obj = (char *)body->ownedObject370();
    }
    if (obj != 0 && -1 < index && index < emb::fld<int>(obj, 0x24)) {
        emb::fld<unsigned int>(emb::fld<char *>(obj, 0x1C), index * 0xC) = value;
        return 1;
    }
    return 0;
}

// 00AC8DD0  FUN_00ac8dd0  size=52  [between]
undefined4 BehaviorEmBase::FUN_00ac8dd0(unsigned int a, unsigned int b)
{
    Behavior *body = FUN_00ac89d0();
    if (body == 0) {
        if (ownedObject370() != 0) {
            return FUN_00a1bd80((int)ownedObject370(), a, b);  // tail jump
        }
    }
    else if (body->ownedObject370() != 0) {
        return FUN_00a1bd80((int)body->ownedObject370(), a, b);  // tail jump
    }
    return 0;
}

// 00AC8E10  FUN_00ac8e10  size=112  [between]
void BehaviorEmBase::FUN_00ac8e10(int value)
{
    Behavior *body = FUN_00ac89d0();
    if (body == 0) {
        int *obj = (int *)ownedObject370();
        if (obj != 0) {
            if (value != 0) {
                flags364() = flags364() & 0xFFBFFFFF;
                *obj = value;
                return;
            }
            flags364() = flags364() | 0x400000;
            *obj = 0;
        }
    }
    else {
        int *obj = (int *)body->ownedObject370();
        if (obj != 0) {
            if (value != 0) {
                body->flags364() = body->flags364() & 0xFFBFFFFF;
                *obj = value;
                return;
            }
            body->flags364() = body->flags364() | 0x400000;
            *obj = 0;
            return;
        }
    }
}

// 00AC8E80  FUN_00ac8e80  size=44  [between]
undefined4 BehaviorEmBase::FUN_00ac8e80()
{
    Behavior *body = FUN_00ac89d0();
    if (body == 0) {
        if (ownedObject370() != 0) {
            return *(undefined4 *)ownedObject370();
        }
    }
    else if (body->ownedObject370() != 0) {
        return *(undefined4 *)body->ownedObject370();
    }
    return 0;
}

// 00AC8EB0  FUN_00ac8eb0  size=90  [between]
void BehaviorEmBase::FUN_00ac8eb0(unsigned int a, unsigned int b)
{
    Behavior *body = FUN_00ac89d0();
    if (body == 0) {
        if (ownedObject370() != 0) {
            emb::fld<unsigned int>(ownedObject370(), 4) = a;
            emb::fld<unsigned int>(ownedObject370(), 8) = b;
        }
    }
    else if (body->ownedObject370() != 0) {
        emb::fld<unsigned int>(body->ownedObject370(), 4) = a;
        emb::fld<unsigned int>(body->ownedObject370(), 8) = b;
        return;
    }
}

// 00AC8F10  FUN_00ac8f10  size=98  [between]
void BehaviorEmBase::FUN_00ac8f10(undefined4 *outA, undefined4 *outB)
{
    Behavior *body = FUN_00ac89d0();
    if (body == 0) {
        if (ownedObject370() != 0) {
            *outA = emb::fld<undefined4>(ownedObject370(), 4);
            *outB = emb::fld<undefined4>(ownedObject370(), 8);
        }
    }
    else if (body->ownedObject370() != 0) {
        *outA = emb::fld<undefined4>(body->ownedObject370(), 4);
        *outB = emb::fld<undefined4>(body->ownedObject370(), 8);
        return;
    }
}

// 00AC8F80  FUN_00ac8f80  size=71  [between]
float BehaviorEmBase::FUN_00ac8f80()
{
    Behavior *body = FUN_00ac89d0();
    if (body == 0) {
        if (0 < meshCount()) {
            return emb::fld<float>(meshArray(), 0x1C);
        }
    }
    else if (0 < body->meshCount()) {
        return emb::fld<float>(body->meshArray(), 0x1C);
    }
    emb::cdeclcall<void>(&FUN_00dd5650, DAT_0164524c);  // "cModelBase::getMeshAlpha: model has no mesh"
    return 0.0f;
}

// 00AC8FD0  FUN_00ac8fd0  size=108  [between]
void BehaviorEmBase::FUN_00ac8fd0(float alpha)
{
    Behavior *body = FUN_00ac89d0();
    if (body == 0) {
        for (int i = 0, offset = 0; i < meshCount(); i++, offset += 0x70) {
            emb::fld<float>(meshArray(), offset + 0x1C) = alpha;
        }
    }
    else {
        for (int i = 0, offset = 0; i < body->meshCount(); i++, offset += 0x70) {
            emb::fld<float>(body->meshArray(), offset + 0x1C) = alpha;
        }
    }
}

// 00AC9040  FUN_00ac9040  size=98  [between]
void BehaviorEmBase::FUN_00ac9040()
{
    Behavior *body = FUN_00ac89d0();
    if (body == 0) {
        for (int i = 0, offset = 0; i < meshCount(); i++, offset += 0x70) {
            emb::fld<unsigned int>(meshArray(), offset + 0x38) |= 1;
        }
    }
    else {
        for (int i = 0, offset = 0; i < body->meshCount(); i++, offset += 0x70) {
            emb::fld<unsigned int>(body->meshArray(), offset + 0x38) |= 1;
        }
    }
}

// 00AC90B0  FUN_00ac90b0  size=98  [between]
void BehaviorEmBase::FUN_00ac90b0()
{
    Behavior *body = FUN_00ac89d0();
    if (body == 0) {
        for (int i = 0, offset = 0; i < meshCount(); i++, offset += 0x70) {
            emb::fld<unsigned int>(meshArray(), offset + 0x38) &= 0xFFFFFFFE;
        }
    }
    else {
        for (int i = 0, offset = 0; i < body->meshCount(); i++, offset += 0x70) {
            emb::fld<unsigned int>(body->meshArray(), offset + 0x38) &= 0xFFFFFFFE;
        }
    }
}

// 00AC9120  FUN_00ac9120  size=84  [between]
void BehaviorEmBase::FUN_00ac9120(int mesh)
{
    Behavior *body = FUN_00ac89d0();
    if (body == 0) {
        if (-1 < mesh && mesh < meshCount()) {
            emb::fld<unsigned int>(meshArray(), mesh * 0x70 + 0x38) |= 1;
        }
    }
    else if (-1 < mesh && mesh < body->meshCount()) {
        emb::fld<unsigned int>(body->meshArray(), mesh * 0x70 + 0x38) |= 1;
        return;
    }
}

// 00AC9180  FUN_00ac9180  size=84  [between]
void BehaviorEmBase::FUN_00ac9180(int mesh)
{
    Behavior *body = FUN_00ac89d0();
    if (body == 0) {
        if (-1 < mesh && mesh < meshCount()) {
            emb::fld<unsigned int>(meshArray(), mesh * 0x70 + 0x38) &= 0xFFFFFFFE;
        }
    }
    else if (-1 < mesh && mesh < body->meshCount()) {
        emb::fld<unsigned int>(body->meshArray(), mesh * 0x70 + 0x38) &= 0xFFFFFFFE;
        return;
    }
}

// 00AC9210  FUN_00ac9210  size=227  [between]
void BehaviorEmBase::FUN_00ac9210(const char *name)
{
    // mesh entry: 0x70 bytes, +0x38 flags, +0x60 -> info whose +0x40 is the mesh name
    Behavior *body = FUN_00ac89d0();
    if (body == 0) {
        for (int i = 0, offset = 0; i < meshCount(); i++, offset += 0x70) {
            char *meshes = (char *)meshArray();
            const char *meshName = emb::fld<const char *>(emb::fld<char *>(meshes, offset + 0x60), 0x40);
            if (meshName != 0 && strcmp(meshName, name) == 0) {  // strcmp is inlined in the binary
                emb::fld<unsigned int>(meshes, offset + 0x38) |= 1;
            }
        }
    }
    else {
        for (int i = 0, offset = 0; i < body->meshCount(); i++, offset += 0x70) {
            char *meshes = (char *)body->meshArray();
            const char *meshName = emb::fld<const char *>(emb::fld<char *>(meshes, offset + 0x60), 0x40);
            if (meshName != 0 && strcmp(meshName, name) == 0) {
                emb::fld<unsigned int>(meshes, offset + 0x38) |= 1;
            }
        }
    }
}

// 00AC9300  FUN_00ac9300  size=227  [between]
void BehaviorEmBase::FUN_00ac9300(const char *name)
{
    Behavior *body = FUN_00ac89d0();
    if (body == 0) {
        for (int i = 0, offset = 0; i < meshCount(); i++, offset += 0x70) {
            char *meshes = (char *)meshArray();
            const char *meshName = emb::fld<const char *>(emb::fld<char *>(meshes, offset + 0x60), 0x40);
            if (meshName != 0 && strcmp(meshName, name) == 0) {  // strcmp is inlined in the binary
                emb::fld<unsigned int>(meshes, offset + 0x38) &= 0xFFFFFFFE;
            }
        }
    }
    else {
        for (int i = 0, offset = 0; i < body->meshCount(); i++, offset += 0x70) {
            char *meshes = (char *)body->meshArray();
            const char *meshName = emb::fld<const char *>(emb::fld<char *>(meshes, offset + 0x60), 0x40);
            if (meshName != 0 && strcmp(meshName, name) == 0) {
                emb::fld<unsigned int>(meshes, offset + 0x38) &= 0xFFFFFFFE;
            }
        }
    }
}

// 00AC9420  FUN_00ac9420  size=177  [between]
void BehaviorEmBase::FUN_00ac9420(const char *part)
{
    Behavior *body = FUN_00ac89d0();
    if (body == 0) {
        for (int i = 0, offset = 0; i < meshCount(); i++, offset += 0x70) {
            char *meshes = (char *)meshArray();
            const char *meshName = emb::fld<const char *>(emb::fld<char *>(meshes, offset + 0x60), 0x40);
            if (meshName != 0 && strstr(meshName, part) != 0) {  // FUN_00fdbbd0 = strstr
                emb::fld<unsigned int>(meshes, offset + 0x38) |= 1;
            }
        }
    }
    else {
        for (int i = 0, offset = 0; i < body->meshCount(); i++, offset += 0x70) {
            char *meshes = (char *)body->meshArray();
            const char *meshName = emb::fld<const char *>(emb::fld<char *>(meshes, offset + 0x60), 0x40);
            if (meshName != 0 && strstr(meshName, part) != 0) {
                emb::fld<unsigned int>(meshes, offset + 0x38) |= 1;
            }
        }
    }
}

// 00AC94E0  FUN_00ac94e0  size=177  [between]
void BehaviorEmBase::FUN_00ac94e0(const char *part)
{
    Behavior *body = FUN_00ac89d0();
    if (body == 0) {
        for (int i = 0, offset = 0; i < meshCount(); i++, offset += 0x70) {
            char *meshes = (char *)meshArray();
            const char *meshName = emb::fld<const char *>(emb::fld<char *>(meshes, offset + 0x60), 0x40);
            if (meshName != 0 && strstr(meshName, part) != 0) {  // FUN_00fdbbd0 = strstr
                emb::fld<unsigned int>(meshes, offset + 0x38) &= 0xFFFFFFFE;
            }
        }
    }
    else {
        for (int i = 0, offset = 0; i < body->meshCount(); i++, offset += 0x70) {
            char *meshes = (char *)body->meshArray();
            const char *meshName = emb::fld<const char *>(emb::fld<char *>(meshes, offset + 0x60), 0x40);
            if (meshName != 0 && strstr(meshName, part) != 0) {
                emb::fld<unsigned int>(meshes, offset + 0x38) &= 0xFFFFFFFE;
            }
        }
    }
}

// 00AC95A0  FUN_00ac95a0  size=33  [between]
void BehaviorEmBase::FUN_00ac95a0(const char *part, int set)
{
    if (set != 0) {
        FUN_00ac9420(part);
        return;
    }
    FUN_00ac94e0(part);
}

// 00AC95D0  FUN_00ac95d0  size=125  [between]
void BehaviorEmBase::FUN_00ac95d0()
{
    if (flagBF8() == 0) {
        float count = counterBF4() + 1.0f;
        counterBF4() = count;
        if (3.0f < count) {
            flagBF8() = 1;
            counterBF4() = 0.0f;
        }
    }
    else {
        emb::thiscall<void>(&FUN_00c45fd0, DAT_01d61850, field4F0(), counterBF4());
        float count = counterBF4() + 1.0f;
        counterBF4() = count;
        if (10000.0f < count) {
            counterBF4() = 0.0f;
            return;
        }
    }
}

// 00AC9650  FUN_00ac9650  size=104  [between]
void BehaviorEmBase::FUN_00ac9650(unsigned int unused)
{
    unsigned int id = objId();
    if (id != 0x20140 && id != 0x20142 && id != 0x20144 && id != 0x2014A && id != 0x20150 &&
        id != 0x20152 && id != 0x20160 && id != 0x20170) {
        FUN_00957930((undefined4 *)vf68(), 1);
        return;
    }
    FUN_00957930((undefined4 *)vf68(), 0);
}

// 00AC96C0  FUN_00ac96c0  size=82  [between]
void BehaviorEmBase::FUN_00ac96c0(unsigned int arg, int motion)
{
    if (motion == -1) {
        motion = objId();
    }
    if (motion == 0x20071) {
        motion = 0x20070;
    }
    else if (motion == 0x20081) {
        motion = 0x20080;
    }
    int value = FUN_009f8b40((int)this);
    undefined *data = vf68();
    FUN_00957640(motion, arg, (undefined4 *)data, value);
}

// 00AC9720  FUN_00ac9720  size=104  [between]
void BehaviorEmBase::FUN_00ac9720(unsigned int setData0, int setData1)
{
    fileA64() = filePair0();
    fileA68() = filePair1();
    emb::thiscall<void>(0x00A01170u /* cObjReadManager::getDataAtSet */, DAT_01b7b364, setDataA6C(), setData0, 0);
    setDataA6CValid() = 1;
    if (setData1 != -1) {
        emb::thiscall<void>(0x00A01170u /* cObjReadManager::getDataAtSet */, DAT_01b7b364, setDataA74(), setData1, 0);
    }
    setDataA74Valid() = 1;
}

// 00AC9790  FUN_00ac9790  size=51  [between]
undefined4 BehaviorEmBase::FUN_00ac9790()
{
    int obj = FUN_00c4ec80((int)DAT_01beb908);
    if (obj != 0 && emb::fld<int>((void *)obj, 0x50) != 0) {
        int mine = field4F0();
        if ((int)FUN_00a81330((unsigned int *)obj) == mine) {
            return 1;
        }
    }
    return 0;
}

// 00AC9900  BehaviorEmBase::vf2F8  size=67  [class]
void BehaviorEmBase::vf2F8()
{
    char name[16];
    FUN_009f8ea0(name, 0x10, modelObjId(), 0);
    emb::cdeclcall<void>(&FUN_00dd5650, DAT_0169fcb8, name);  // "forced death requested; do what is needed on death : %s"
    field6BC() = 1;
    FUN_009fdde0((int *)this);
}

// 00ACE6C0  BehaviorEmBase::vf20  size=58  [class]
void BehaviorEmBase::vf20()
{
    Behavior::vf20();  // 00A92550 (FILEMAP: Bh0064::vf20)
    vfC8(0);
    emb::vcall<void>(this, 0xD0, 0);  // Behavior::vfD0 is declared without its stack argument
    Behavior *body = FUN_00ac89d0();
    if (body != 0) {
        body->vf20();  // tail jump
        return;
    }
}

#include <math.h>  // pow (_CIpow, FUN_00fdc1f0)

// ---------------------------------------------------------------------------------------------
// Call helpers (same idea as the emb:: helpers of part 1; separate namespace so both parts can be
// joined).  Callees whose functions.h prototype does not match the machine code (hidden ECX,
// missing stack arguments) are called through a cast so the argument list stays exactly as in
// the binary.  Base-class fields whose header is not owned by this file go through emb2::fld and
// are tagged with the owning class.
// ---------------------------------------------------------------------------------------------
namespace emb2 {

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

// FUN_00dd6d80(obj->vf04(), type): nonzero when obj's type record derives from `type`
inline int isKindOf(Behavior *obj, const unsigned char *type)
{
    return FUN_00dd6d80((undefined4 *)obj->vf04(), (undefined4 *)type);
}

}  // namespace emb2

// compiler intrinsic (vf1C0 / vf1AC); <intrin.h> clashes with functions.h
extern "C" void *_AddressOfReturnAddress(void);
#pragma intrinsic(_AddressOfReturnAddress)

// d3dx9_43.dll import
extern "C" float *__stdcall D3DXVec3TransformNormal(float *out, const float *v, const float *m);

// type records returned by cObj::vf04
extern unsigned char DAT_01be9c78[];  // BehaviorEmBase
extern unsigned char DAT_01be9ca0[];  // BehaviorEmBody

// debug-print format string (Shift-JIS)
extern const char DAT_016a0220[];  // "BehaviorEmBase::setCutCrerateInfo  ワークを確保できませんでした" (could not allocate the work)

// global objects passed in ECX
extern unsigned char DAT_01b35df8[];  // RayCastManager instance (getWork)
extern unsigned char DAT_01b36a60[];  // DebrisExplodeManager instance (addHandle, FUN_0093e3f0)
extern unsigned char DAT_01c78cb0[];  // FUN_00c2a5b0

// plain globals
extern unsigned int DAT_01bea070;  // global flags (bit 29: skip the enemy update in vf4C)

// one entry of the work array built by setCutCrerateInfo (0x24 bytes)
struct EmCutWork {
    unsigned int field00;  // +0x00
    unsigned int field04;  // +0x04
    unsigned int bits08;   // +0x08 bit set (read as a word array starting here)
    unsigned int field0C;  // +0x0C
    unsigned int bits10;   // +0x10 bit set (read as a word array starting here)
    unsigned int field14;  // +0x14
    int          id;       // +0x18 object id (vf33C default: 0x42000)
    int          index;    // +0x1C index in the input list
    int          field20;  // +0x20
};

// 00ACE700  BehaviorEmBase::vf1C  size=58  [class]
void BehaviorEmBase::vf1C()
{
    Behavior::vf1C();  // 00A92520 (FILEMAP: Bh0064::vf1C)
    vfC8(1);
    emb2::vcall<void>(this, 0xD0, 1);  // Behavior::vfD0 is declared without its stack argument
    Behavior *body = FUN_00ac89d0();
    if (body != 0) {
        body->vf1C();  // tail jump
        return;
    }
}

// 00ACE740  BehaviorEmBase::vf1C0  size=902  [class]
void BehaviorEmBase::vf1C0()
{
    // Behavior::vf1C0 is declared without parameters, but the machine code takes two stack
    // arguments (ret 8): the source and the body, each kept only if it is a BehaviorEmBody.
    Behavior *sourceArg = ((Behavior **)_AddressOfReturnAddress())[1];
    Behavior *bodyArg = ((Behavior **)_AddressOfReturnAddress())[2];

    Behavior *source;
    if (sourceArg == 0) {
        source = 0;
    }
    else {
        source = emb2::isKindOf(sourceArg, DAT_01be9ca0) != 0 ? sourceArg : 0;
    }
    Behavior *body = 0;
    if (bodyArg != 0) {
        body = emb2::isKindOf(bodyArg, DAT_01be9ca0) != 0 ? bodyArg : 0;
    }

    FUN_009f8ae0((int *)this, FUN_009f8b40((int)sourceArg));
    if (body != 0) {
        undefined4 handle;  // reuses the stack slot of the second argument
        FUN_00a7c940(&handle, (undefined4 *)FUN_00a7c7f0(field4F0()));
        FUN_00a7c960((undefined4 *)((char *)body + 0x870) /* BehaviorEmBody+0x870: owner handle */, &handle);
        FUN_009f8ae0((int *)body, FUN_009f8b40((int)sourceArg));
    }

    int motion;
    int id;
    switch (modelObjId()) {
    case 0x20010:
    case 0x20050:
    case 0x20140:
    case 0x20142:
    case 0x20144:
    case 0x20160:
        motion = FUN_00a92f90((int)this);
        FUN_00e26e90(motion);
        FUN_00e272b0(motion, 0x20012, 0x20010);
        FUN_00e27330(FUN_00a92f90((int)this), 0x2014F, 0x20010);
        break;
    case 0x20030:
    case 0x20033:
    case 0x20035:
        motion = FUN_00a92f90((int)this);
        FUN_00e26e90(motion);
        FUN_00e272b0(motion, 0x2003F, 0x20030);
        break;
    case 0x20071:
        id = objId();
        motion = FUN_00a92f90((int)this);
        FUN_00e26e90(motion);
        FUN_00e272b0(motion, id, 0x20070);
        break;
    case 0x20081:
        id = objId();
        motion = FUN_00a92f90((int)this);
        FUN_00e26e90(motion);
        FUN_00e272b0(motion, id, 0x20080);
        break;
    case 0x20150:
    case 0x20152:
        motion = FUN_00a92f90((int)this);
        FUN_00e26e90(motion);
        FUN_00e272b0(motion, 0x20012, 0x20010);
        FUN_00e27330(FUN_00a92f90((int)this), 0x2015F, 0x20010);
        break;
    case 0x20170:
        motion = FUN_00a92f90((int)this);
        FUN_00e26e90(motion);
        FUN_00e272b0(motion, 0x20012, 0x20010);
        id = modelObjId();
        FUN_00e27330(FUN_00a92f90((int)this), id, 0x20010);
        break;
    }

    int value = 0;
    Behavior *linked = FUN_00ac89d0();
    int obj330;
    if (linked == 0) {
        obj330 = field330();
    }
    else {
        obj330 = linked->field330();
    }
    if (obj330 != 0) {
        value = emb2::fld<int>((void *)obj330, 0xCC);
    }
    fieldA54() = value;

    if (source != 0) {
        BehaviorEmBase *owner = emb2::thiscall<BehaviorEmBase *>(&FUN_00acdea0, source);
        if (owner != 0 && emb2::isKindOf(owner, DAT_01be9c78) != 0) {
            FUN_009f8ae0((int *)this, FUN_009f8b40((int)owner));
            field4E4() = owner->field4E4();
            vf1D4(owner->vf1D8());
            if ((owner->flagsD44() & 0x80000000) != 0) {
                FUN_00a88b50((int)subC10(), FUN_00a82d50((int)owner->subC10()), 0);
            }
            FUN_0040ac60((undefined2 *)subAB0(), (undefined2 *)owner->subAB0());
            shortDAC() = owner->shortDAC();
            fieldDB0() = owner->fieldDB0();
            byteDB4() = owner->byteDB4();
            idsA30()[0] = owner->idsA30()[0];
            idsA30()[1] = owner->idsA30()[1];
            idsA30()[2] = owner->idsA30()[2];
            idsA30()[3] = owner->idsA30()[3];
            fieldA40() = owner->fieldA40();
            byteA44() = owner->byteA44();
            flagA48() = owner->flagA48();
            emb2::fld<int>(this, 0x4A8) = emb2::fld<int>(owner, 0x4A8); /* cObj+0x4A8: flags */
            fieldA58() = owner->fieldA58();
        }
    }
    vf334(body, source);
}

// 00ACEB90  BehaviorEmBase::vf334  size=251  [class]
void BehaviorEmBase::vf334(Behavior *body, Behavior *source)
{
    FUN_00a7c960((undefined4 *)&emBodyHandle(), (undefined4 *)FUN_00a7c7f0(body->field4F0()));
    FUN_009f8ae0((int *)body, FUN_009f8b40((int)this));
    body->field51C() = field51C();
    field83C() = field51C();
    int key = field4F0();  // stored in the stack slot of `body`
    // DebrisExplodeManager::addHandle (00942E00), ECX = DebrisExplodeManager instance
    emb2::thiscall<void>(0x00942E00u, DAT_01b36a60, &key, fieldA50());

    BehaviorEmBase *owner = emb2::thiscall<BehaviorEmBase *>(&FUN_00acdea0, source);
    if (owner != 0 && emb2::isKindOf(owner, DAT_01be9c78) != 0) {
        fieldBFC() = owner->fieldBFC();
        fieldC00() = owner->fieldC00();
    }
    owner = emb2::thiscall<BehaviorEmBase *>(&FUN_00acdea0, source);
    if (owner != 0 && emb2::isKindOf(owner, DAT_01be9c78) != 0) {
        fieldC04() = owner->fieldC04();
    }
    if (fieldC04() != 0) {
        FUN_0093e3f0((int)DAT_01b36a60, field83C());
    }
}

// 00ACEC90  BehaviorEmBase::vf44  size=237  [class]
void BehaviorEmBase::vf44()
{
    FUN_00dd7270((undefined4)embeddedA00());
    FUN_00a92a90((int)this, -1);
    if (FUN_00a81330(&emBodyHandle()) != 0) {
        FUN_00a805f0(FUN_00a81330(&emBodyHandle()));
        FUN_00a7c950(&emBodyHandle());
    }
    int buffer = emb2::fld<int>(this, 0x67C); /* Behavior+0x67C */
    if (buffer != 0) {
        emb2::fld<int>(this, 0x684) = 0; /* Behavior+0x684 */
        if (emb2::fld<int>(this, 0x688) /* Behavior+0x688 */ != 0) {
            FUN_00dd48d0(buffer, 0);
            emb2::fld<int>(this, 0x688) = 0;
        }
        emb2::fld<int>(this, 0x67C) = 0;
        emb2::fld<int>(this, 0x680) = 0; /* Behavior+0x680 */
    }
    FUN_00a9d8a0((int)this);
    FUN_00a944d0((int)this);
    if (emb2::fld<int>(this, 0x764) /* Behavior+0x764: physics body */ != 0) {
        FUN_008e3c10(emb2::fld<int>(this, 0x764));
        FUN_008e1c60(emb2::fld<int>(this, 0x764));
    }
    FUN_00a8c820((int)this);
    // RayCastManager::getWork (00905E50), ECX = RayCastManager instance
    emb2::thiscall<void>(0x00905E50u, DAT_01b35df8, &groundSupportA5C());
    emb2::thiscall<void>(0x00905E50u, DAT_01b35df8, &groundSupportA60());
    if (fieldD80() != 0) {
        FUN_00dd4940(fieldD80());
        fieldD80() = 0;
    }
    Behavior::vf44();  // tail jump
}

// 00ACED80  BehaviorEmBase::vf4C  size=261  [class]
void BehaviorEmBase::vf4C()
{
    if (fieldA58() != 0 && FUN_00ac89d0() == 0) {
        FUN_009fdde0((int *)this);  // tail jump
        return;
    }
    if ((DAT_01bea070 & 0x20000000) == 0) {
        emb2::fld<float>(this, 0x910) = (float)FUN_00e049b0((int *)FUN_00a92fb0((int)this)); /* BehaviorAppBase+0x910: frame speed */
        FUN_00ac4490();
        Behavior::vf4C();
        float *velocity = (float *)((char *)this + 0x980); /* BehaviorAppBase+0x980: float[4] */
        quat()[0] = velocity[0] + quat()[0];
        quat()[1] = quat()[1] + velocity[1];
        quat()[2] = velocity[2] + quat()[2];
        quat()[3] = velocity[3] + quat()[3];
        double damping = pow((double)0.6f, (double)emb2::fld<float>(this, 0x910));  // _CIpow
        velocity[0] = (float)((double)velocity[0] * damping);
        velocity[1] = (float)((double)velocity[1] * damping);
        velocity[2] = (float)((double)velocity[2] * damping);
        velocity[3] = (float)(damping * (double)velocity[3]);
        vf31C();
        if (FUN_00a8c760((int)this, 7)) {
            FUN_00a8d280((int)this);
        }
        if (FUN_00a8c760((int)this, 0x27)) {
            emb2::vcall<void>((void *)FUN_00c1b9a0(), 0x34, 0);
        }
    }
}

// 00ACEE90  BehaviorEmBase::vf54  size=542  [class]
void BehaviorEmBase::vf54()
{
    float pos[4];
    float delta[4];
    float rot[4];  // second output of FUN_00a8ce90, not used

    bool moved = false;
    if (FUN_00ac8410() == 0) {
        float *offset = (float *)((char *)this + 0x860); /* BehaviorAppBase+0x860: float[4] */
        if (FUN_00a8c760((int)this, 0x25)) {
            int handle = FUN_00a81330(&handle91C());
            if (handle != 0) {
                Behavior *other = (Behavior *)FUN_00a7c8a0(handle);
                if (other != 0 && (offset[0] != 0.0f || offset[1] != 0.0f || offset[2] != 0.0f) &&
                    offset[0] == offset[0] && offset[1] == offset[1] && offset[2] == offset[2]) {  // not NaN
                    cParts *parts = (cParts *)FUN_00a12210((int)other, -1);
                    if (parts != 0) {
                        float *at = parts->matrix() + 12;
                        float *here = matrix() + 12;
                        pos[0] = here[0] + ((offset[0] + at[0]) - here[0]);
                        pos[1] = ((at[1] + offset[1]) - here[1]) + here[1];
                        pos[2] = ((at[2] + offset[2]) - here[2]) + here[2];
                        pos[3] = ((offset[3] + at[3]) - here[3]) + here[3];
                        vf7C((undefined4)pos, (undefined4)vf84());
                        moved = true;
                    }
                }
            }
        }
        if (FUN_00a8c760((int)this, 0x24) && FUN_00ac82f0() == 0 && !moved) {
            int handle = FUN_00a81330(&handle91C());
            if (handle != 0) {
                Behavior *other = (Behavior *)FUN_00a7c8a0(handle);
                if (other != 0) {
                    emb2::thiscall<void>(&FUN_00a8ce90, other, pos, rot);
                    D3DXVec3TransformNormal(pos, pos, other->matrix());
                    pos[0] = other->matrix()[12] + pos[0];
                    pos[1] = other->matrix()[13] + pos[1];
                    pos[2] = other->matrix()[14] + pos[2];
                    delta[0] = pos[0] - matrix()[12];
                    delta[1] = pos[1] - matrix()[13];
                    delta[2] = pos[2] - matrix()[14];
                    delta[3] = pos[3] - matrix()[15];
                    FUN_00a12310((undefined4)this, (undefined4)delta);
                }
            }
        }
    }
    Behavior::vf54();
}

// 00ACF0B0  FUN_00acf0b0  size=38  [between]
unsigned char BehaviorEmBase::FUN_00acf0b0(int handle)
{
    // ECX is not used; one stack argument (ret 4)
    if (handle != 0) {
        cObj *obj = (cObj *)FUN_00a7c8a0(handle);
        if (obj != 0) {
            return (unsigned char)obj->objFlags() >> 4 & 1;
        }
    }
    return 0;
}

// 00ACF0E0  FUN_00acf0e0  size=41  [between]
unsigned int BehaviorEmBase::FUN_00acf0e0()
{
    Behavior *body = FUN_00ac89d0();
    if (body != 0) {
        return body->field674();
    }
    unsigned int result = 0;
    if (ownedObject370() != 0) {
        result = emb2::fld<int>(ownedObject370(), 0x10) != -1;
    }
    return result;
}

// 00ACF110  FUN_00acf110  size=62  [between]
void BehaviorEmBase::FUN_00acf110(unsigned int a, unsigned int b, float c)
{
    Behavior *body = FUN_00ac89d0();
    if (body != 0) {
        emb2::thiscall<void>(&FUN_00a8e680, body, a, b, c);
        return;
    }
    emb2::thiscall<void>(&FUN_00a8e680, this, a, b, c);
}

// 00ACF150  BehaviorEmBase::vf1AC  size=59  [class]
void BehaviorEmBase::vf1AC()
{
    // Behavior::vf1AC is declared without parameters, but the machine code takes five stack
    // arguments (ret 0x14); the fifth is replaced by the linked body when there is one.
    unsigned int *args = (unsigned int *)_AddressOfReturnAddress();
    unsigned int arg1 = args[1];
    unsigned int arg2 = args[2];
    unsigned int arg3 = args[3];
    unsigned int arg4 = args[4];
    unsigned int target = args[5];
    if (FUN_00ac89d0() != 0) {
        target = (unsigned int)FUN_00ac89d0();
    }
    // Behavior::vf1AC (00A96C00, FILEMAP: Bh0064::vf1AC)
    emb2::thiscall<void>(0x00A96C00u, this, arg1, arg2, arg3, arg4, target);
}

// 00ACF190  BehaviorEmBase::vf1A8  size=49  [class]
void BehaviorEmBase::vf1A8(int arg1, uint arg2, undefined4 target)
{
    if (FUN_00ac89d0() != 0) {
        target = (undefined4)FUN_00ac89d0();
    }
    Behavior::vf1A8(arg1, arg2, target);  // 00AA07C0 (FILEMAP: Bh0064::vf1A8)
}

// 00ACF1D0  BehaviorEmBase::setCutCrerateInfo  size=1051  [class]
void BehaviorEmBase::setCutCrerateInfo(undefined4 *out, undefined4 ids, int count)
{
    int *idList = (int *)ids;
    int *entry;

    // allocate count * 0x24 bytes (0xFFFFFFFF on overflow)
    undefined *heap = FUN_00a1d5c0();
    unsigned long long bytes = (unsigned long long)(unsigned int)count * 0x24;
    unsigned int size = (unsigned int)-(int)((unsigned int)(bytes >> 32) != 0) | (unsigned int)bytes;
    EmCutWork *work = emb2::cdeclcall<EmCutWork *>(&FUN_00dd3580, size, heap);
    if (work == 0) {
        work = 0;
    }
    else {
        int remaining = count - 1;
        if (-1 < remaining) {
            EmCutWork *w = work;
            do {
                w->id = -1;
                w->index = -1;
                w->field20 = -1;
                w->field00 = 0;
                w->field04 = 0;
                w->bits08 = 0;
                w->field0C = 0;
                w->bits10 = 0;
                w->field14 = 0;
                w = w + 1;
                remaining = remaining - 1;
            } while (-1 < remaining);
        }
    }
    fieldA2C() = (int)work;

    bytesA40()[0] = emb2::thiscall<unsigned char *>(&FUN_00a95df0, this, 0)[0];
    bytesA40()[1] = emb2::thiscall<unsigned char *>(&FUN_00a95df0, this, 0)[1];
    bytesA40()[2] = emb2::thiscall<unsigned char *>(&FUN_00a95df0, this, 0)[2];
    bytesA40()[3] = emb2::thiscall<unsigned char *>(&FUN_00a95df0, this, 0)[3];
    idsA30()[0] = emb2::fld<int>(this, 0x618); /* Behavior+0x618 */
    byteA44() = 0;
    idsA30()[1] = emb2::fld<int>(this, 0x61C); /* Behavior+0x61C */
    idsA30()[2] = emb2::fld<int>(this, 0x620); /* Behavior+0x620 */
    idsA30()[3] = emb2::fld<int>(this, 0x624); /* Behavior+0x624 */

    if (fieldA2C() == 0) {
        emb2::cdeclcall<void>(&FUN_00dd5650, DAT_016a0220);  // "...could not allocate the work"
    }
    else if (FUN_00ac89d0() == 0) {
        // no linked body: every entry keeps its own id
        int *dst = (int *)out;
        for (int i = 0; i < count; i = i + 1) {
            int id = idList[i];
            EmCutWork *w = (EmCutWork *)(fieldA2C() + i * 0x24);
            emb2::thiscall<void>(&FUN_00a91d70, w, this, id);
            vf33C(id, (unsigned int *)w);
            dst[0] = w->id;
            dst = dst + 3;
        }
    }
    else {
        for (int i = 0; i < count; i = i + 1) {
            EmCutWork *w = (EmCutWork *)(fieldA2C() + i * 0x24);
            int id = idList[i];
            w->index = i;
            emb2::thiscall<void>(&FUN_00a91d70, w, this, id);
            vf33C(id, (unsigned int *)w);
        }
        vf338((unsigned int)ids, (unsigned int)fieldA2C(), (unsigned int)count);

        // among our own entries pick the one with the most bits set in bits10 but clear in bits08
        int lowest = -1;
        int chosen = -1;
        int chosenBits = -1;
        if (0 < count) {
            EmCutWork *w = (EmCutWork *)fieldA2C();
            unsigned int left = (unsigned int)count;
            do {
                if (w->id == (int)objId()) {
                    unsigned int *words = (unsigned int *)w;
                    int bits = 0;
                    for (unsigned int bit = 0; bit < 0x40; bit = bit + 1) {  // unrolled x4 in the binary (bits 0..63)
                        unsigned int mask = 0x80000000u >> (bit & 0x1F);
                        unsigned int word = bit >> 5;
                        if ((words[4 + word] & mask) != 0 && (words[2 + word] & mask) == 0) {
                            bits = bits + 1;
                        }
                    }
                    if (chosenBits <= bits) {
                        chosen = w->index;
                        chosenBits = bits;
                    }
                    if (w->field20 < lowest) {
                        lowest = w->index;
                    }
                }
                w = w + 1;
                left = left - 1;
            } while (left != 0);
            if (lowest != -1) {
                chosen = lowest;
            }
        }

        int *dst = (int *)out;
        for (int i = 0; i < count; i = i + 1) {
            int id = ((EmCutWork *)(fieldA2C() + i * 0x24))->id;
            if (id != (int)objId()) {
                dst[0] = id;
            }
            else {
                Behavior *body;
                if (FUN_00a81330(&emBodyHandle()) == 0 ||
                    FUN_00a7c8a0(FUN_00a81330(&emBodyHandle())) == 0) {
                    body = 0;
                }
                else {
                    Behavior *obj = (Behavior *)FUN_00a7c8a0(FUN_00a81330(&emBodyHandle()));
                    if (obj == 0) {
                        body = 0;
                    }
                    else {
                        body = emb2::isKindOf(obj, DAT_01be9ca0) != 0 ? obj : 0;
                    }
                }
                if (chosen == i) {
                    if (body == 0) {
                        chosen = -1;
                        dst[0] = 0x42000;
                    }
                    else {
                        dst[0] = body->objId();
                        dst[2] = 1;
                    }
                }
                else if (body == 0) {
                    dst[0] = 0x42000;
                }
                else {
                    dst[1] = modelObjId();
                    dst[0] = body->objId();
                }
            }
            dst = dst + 3;
        }
        if (chosen == -1) {
            FUN_009fdde0((int *)this);
        }
    }

    if (fieldA2C() != 0) {
        FUN_00dd4940(fieldA2C());
        fieldA2C() = 0;
    }
}

// 00ACF600  FUN_00acf600  size=223  [between]
Behavior *BehaviorEmBase::FUN_00acf600(unsigned int a, unsigned int b)
{
    __declspec(align(16)) unsigned int desc[0x20];  // 0x80-byte descriptor, set up by FUN_0040b190

    FUN_00a7c950(&emBodyHandle());
    if ((objFlags() & 2) != 0 && (field330() == 0 || emb2::fld<int>((void *)field330(), 0xCC) == 0)) {
        FUN_0040b190(desc);
        desc[0] = setFlags();
        Behavior *body = (Behavior *)FUN_00acdc90(field4F0(), a, (undefined4)desc, b);
        if (body != 0) {
            fieldA58() = 1;
            FUN_009fd240((int)body);
            FUN_009f8ae0((int *)body, FUN_009f8b40((int)this));
            FUN_00a7c960((undefined4 *)&emBodyHandle(), (undefined4 *)FUN_00a7c7f0(body->field4F0()));
            fieldA50() = 1;
            body->field51C() = field51C();
            int value = field51C();
            body->field51C() = value;
            body->field83C() = value;
        }
        return body;
    }
    return 0;
}

// 00ACF6E0  BehaviorEmBase::vf364  size=164  [class]
void BehaviorEmBase::vf364(undefined4 motion)
{
    if (fieldA50() != 0 && FUN_00c2a5b0((int)DAT_01c78cb0, (int)subAB0()) != 0) {
        unsigned int flags = emb2::fld<unsigned int>(this, 0x4A8); /* cObj+0x4A8 */
        if ((flags & 0x10000000) != 0) {
            FUN_00957bd0((undefined4 *)vf68(), fieldBA4(), byteBA8());
            return;
        }
        if (fieldBFC() == 0) {
            if (fieldBA4() != 0) {
                vf36C(fieldBA4());
                return;
            }
            if (-1 < (int)flags) {
                FUN_00ac96c0(vf368(), motion);
            }
        }
    }
}

// 00AD3A20  BehaviorEmBase::vf358  size=91  [class]
void BehaviorEmBase::vf358(undefined4 arg, int extra)
{
    __declspec(align(16)) unsigned char info[0x150];  // built by FUN_004039a0

    FUN_004039a0((int)info, arg, (int)this, 0);
    vf360((int)info);
    if (extra != 0) {
        FUN_00dffb20((int)info, extra);
    }
    FUN_00a8c8b0((int)this, modelObjId(), (int)info);
}

// 00AD3A80  BehaviorEmBase::vf354  size=116  [class]
void BehaviorEmBase::vf354(undefined4 arg, float *vec, int extra)
{
    __declspec(align(16)) unsigned char info[0x150];  // built by FUN_004039a0

    FUN_004039a0((int)info, arg, (int)this, 0);
    if (extra != 0) {
        FUN_00dffb20((int)info, extra);
    }
    float *infoVec = (float *)(info + 0x120);
    infoVec[0] = vec[0];
    infoVec[1] = vec[1];
    infoVec[2] = vec[2];
    infoVec[3] = vec[3];
    FUN_00a8c8b0((int)this, modelObjId(), (int)info);
}

// 00AD3B00  BehaviorEmBase::vf35C  size=86  [class]
void BehaviorEmBase::vf35C(undefined4 arg, int extra)
{
    __declspec(align(16)) unsigned char info[0x150];  // built by FUN_004039a0

    FUN_004039a0((int)info, arg, (int)this, 0);
    vf360((int)info);
    if (extra != 0) {
        FUN_00dffb20((int)info, extra);
    }
    FUN_00a8c930((int)this, 0, (int)info);
}

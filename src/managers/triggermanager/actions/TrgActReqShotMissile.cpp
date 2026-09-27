// src/managers/triggermanager/actions/TrgActReqShotMissile.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern char DAT_016b0374[];  // debug message: action has no parameter block

// CRT (the compiler emitted fsqrt / fpatan inline)
extern "C" double __cdecl sqrt(double x);
extern "C" double __cdecl atan2(double y, double x);

namespace Trigger { namespace Act {
int __fastcall REQ_SHOT_MISSILE(int *action);
} }

namespace TrgActReqShotMissile_p1 {

// FUN_00dd5650 is a variadic debug print (empty in the release build).
template <class... A> inline void debugPrint(const char *format, A... args)
{
    typedef void (__cdecl *Fn)(const char *, ...);
    ((Fn)FUN_00dd5650)(format, args...);
}

// Callees whose generated prototype does not match the raw call site are invoked through
// call<Sig>(fn)(args...) with exactly the raw arguments. "ECX: ?" marks an unrecovered register.
template <class Sig, class Fn> inline Sig call(Fn *fn) { return (Sig)(void *)fn; }

// Shot request built on the stack and passed to FUN_00ad3be0 (only the fields written here).
struct ShotRequest {
    unsigned int flags;         // +0x000
    unsigned int kind;          // +0x004
    unsigned char pad008[0xC];  // +0x008
    int unknown014;             // +0x014
    int unknown018;             // +0x018
    int unknown01C;             // +0x01C
    short unknown020;           // +0x020
    short pad022;               // +0x022
    int target;                 // +0x024  object found by FUN_00c19c00
    unsigned char pad028[0xE8]; // +0x028
    int unknown110;             // +0x110
    int unknown114;             // +0x114
    unsigned char pad118[0x58]; // +0x118
    undefined4 unknown170;      // +0x170
    unsigned char pad174[6];    // +0x174
    short unknown17A;           // +0x17A
};

}  // namespace TrgActReqShotMissile_p1

// 00C93FA0  Trigger::Act::REQ_SHOT_MISSILE  size=536  [class]
// Finds the shooter (params+0x8..+0x10), fills a shot request, decomposes the shooter's world
// matrix into position and Euler angles, applies the offset params+0x14..+0x1C via FUN_0043fe30
// and fires with FUN_00ad3be0. Always returns 0.
int __fastcall Trigger::Act::REQ_SHOT_MISSILE(int *action)
{
    using namespace TrgActReqShotMissile_p1;
    float position[4];
    float offset[3];
    float angles[3];
    ShotRequest request;
    int *params = (int *)action[1];  // +0x4 parameter block
    if (params == 0) {
        debugPrint(DAT_016b0374);
        return 0;
    }
    int shooter = call<int (*)(int, int, int)>(FUN_00c19c00)(params[2], params[3], params[4]); /* ECX: ? */
    if (shooter != 0) {
        call<void (*)()>(FUN_004105d0)(); /* ECX: ? (constructors of the stack request) */
        call<void (*)()>(FUN_00410710)(); /* ECX: ? */
        call<void (*)()>(FUN_0041cf30)(); /* ECX: ? */
        request.unknown114 = 0x22;
        request.kind = 0x30361;
        request.unknown110 = 0x65;
        FUN_00a7c8a0(shooter);  // machine code: ECX = shooter
        undefined4 *value = call<undefined4 *(*)()>(FUN_009f8b60)(); /* ECX: ? */
        request.unknown170 = *value;
        request.unknown014 = 0x14;
        request.unknown01C = 0x14;
        request.unknown018 = 100;
        request.unknown020 = 0x700;
        request.target = shooter;
        int arg = call<int (*)()>(FUN_00a7c7f0)(); /* ECX: ? */
        call<void (*)(int)>(FUN_00a7c960)(arg); /* ECX: ? */
        request.flags = request.flags | 0x14;
        request.unknown17A = (short)0xffff;
        undefined4 index = 0xffffffff;
        FUN_00a7c8a0(shooter);  // machine code: ECX = shooter; the -1 is FUN_00a12210's argument
        float *m = (float *)call<int (*)(undefined4)>(FUN_00a12210)(index); /* ECX: ? */  // world matrix at +0x10
        float scaleX = (float)sqrt(m[5] * m[5] + m[4] * m[4] + m[6] * m[6]);          // +0x14,+0x10,+0x18
        float scaleY = (float)sqrt(m[8] * m[8] + m[9] * m[9] + m[10] * m[10]);        // +0x20,+0x24,+0x28
        float scaleZ = (float)sqrt(m[14] * m[14] + m[13] * m[13] + m[12] * m[12]);    // +0x38,+0x34,+0x30
        float m28 = m[10];  // +0x28
        float m38 = m[14];  // +0x38
        double pitch = (double)FUN_00ddbaa0(-(m[6] / scaleZ));  // clamped asin
        double roll = atan2((double)(m28 / scaleZ), (double)(m38 / scaleZ));
        angles[0] = (float)roll;
        angles[1] = (float)pitch;
        double yaw = atan2((double)m[5] / (double)scaleY, (double)m[4] / (double)scaleX);
        angles[2] = (float)yaw;
        position[0] = m[16];  // +0x40
        position[1] = m[17];  // +0x44
        position[2] = m[18];  // +0x48
        position[3] = m[19];  // +0x4C
        offset[0] = *(float *)(params + 5);  // +0x14
        offset[1] = *(float *)(params + 6);  // +0x18
        offset[2] = *(float *)(params + 7);  // +0x1C
        call<void (*)(float *, float *, float *, float, float)>(FUN_0043fe30)(position, offset, angles, 0.8f /* 0x3f4ccccd */, 200.0f /* 0x43480000 */);
        FUN_00ad3be0(shooter, (int)&request);
    }
    return 0;
}

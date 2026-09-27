// src/managers/cobjreadmanager/cObjReadManager.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cObjReadManager.h"

// Data referenced by this part.
extern unsigned int  DAT_0189e7b8[];  // object ids without object files, 0xFFFFFFFF-terminated
extern unsigned char DAT_0165c3bc[];  // debug message: object data missing after load (%s = name)
extern unsigned char DAT_0163d0ac[];  // debug message: zero-length vector in normalize
extern int           DAT_01b7b374;    // cloth: nonzero selects the alternate position write-back

// Imports (d3dx9).
extern "C" float *__stdcall D3DXVec3TransformNormal(float *out, const float *v, const float *m);
extern "C" float *__stdcall D3DXMatrixScaling(float *out, float sx, float sy, float sz);
extern "C" float *__stdcall D3DXMatrixInverse(float *out, float *determinant, const float *m);
extern "C" float *__stdcall D3DXMatrixRotationAxis(float *out, const float *v, float angle);
extern "C" float *__stdcall D3DXMatrixMultiply(float *out, const float *m1, const float *m2);
extern "C" float *__stdcall D3DXMatrixRotationX(float *out, float angle);
// CRT.
extern "C" double __cdecl sqrt(double x);
extern "C" double __cdecl fabs(double x);
extern "C" double __cdecl atan2(double y, double x);

namespace cObjReadManager_p1 {

// Callees whose generated prototype does not match the argument list recovered at the call site
// are invoked through call<Signature>(fn)(args...), which passes exactly the arguments seen in
// the raw decompilation. "ECX: ?" marks calls whose register argument was not recovered.
template <class Sig, class Fn> inline Sig call(Fn *fn) { return (Sig)(void *)fn; }

// 0090B490 RayCastSingleHitWork::RayCastSingleHitWork_4, called as a plain function with eight
// stack arguments in the raw decompilation (calling convention not verified).
typedef int (*RayCastSingleHitFn)(float *work, int a, int b, int c, float *from, float *to, int flags,
                                  const char *name);
inline RayCastSingleHitFn rayCastSingleHit() { return (RayCastSingleHitFn)0x0090B490; }

// One node of a cloth chain (array at cloth[7], cloth[6] entries, 0x100 bytes each).
struct ClothNode {
    unsigned short no;          // +0x00
    short          parentNo;    // +0x02  0xFFF = root
    unsigned short unk04;       // +0x04
    unsigned short linkNo;      // +0x06  0xFFF = none
    unsigned short flags08;     // +0x08  0x4000: swap the side-spring order
    unsigned short fixNo;       // +0x0A  0xFFF or bit 0x2000 = free node, otherwise pinned
    float          lenScaleA;   // +0x0C
    float          lenScaleB;   // +0x10
    float          restLength;  // +0x14  lenScaleA * scale
    float          restLength2; // +0x18  scale * lenScaleB
    int            unk1C;       // +0x1C
    float          localOffset[4]; // +0x20
    float          localAxis[4];   // +0x30
    float          velocity[4];    // +0x40
    float          pos[4];         // +0x50
    float          prevPos[4];     // +0x60
    float          animPos[4];     // +0x70
    float          fixedPos[4];    // +0x80
    float          bonePos[4];     // +0x90
    float          correction[4];  // +0xA0
    float         *parent;      // +0xB0  position of the parent node
    float         *child;       // +0xB4
    float         *linkB8;      // +0xB8
    float         *linkBC;      // +0xBC
    float         *sideC0;      // +0xC0
    float         *sideC4;      // +0xC4
    float          weight;      // +0xC8
    int            unkCC;       // +0xCC
    float          angleLimit;  // +0xD0
    int            pinned;      // +0xD4
    int            hasLink;     // +0xD8
    int            unkDC;       // +0xDC
    int            unkE0;       // +0xE0
    int            unkE4;       // +0xE4
    float          linkSide;    // +0xE8
    int            unkEC;       // +0xEC
    int            bone;        // +0xF0  bone object: matrix at +0x10, flags at +0xA2
    int            fixBone;     // +0xF4
    float          velocityScale; // +0xF8
    float          blend;       // +0xFC
};
typedef char ClothNodeSizeCheck[sizeof(ClothNode) == 0x100 ? 1 : -1];

inline ClothNode *clothNode(int *cloth, int byteOffset) { return (ClothNode *)(cloth[7] + byteOffset); }
// Float fields of the cloth object, addressed by dword index like the raw code.
inline float &clothF(int *cloth, int index) { return *(float *)(cloth + index); }
// Bone object (ClothNode::bone): world matrix at +0x10, its translation row at +0x40.
inline float *boneMatrix(int bone) { return (float *)(bone + 0x10); }
inline float *boneRow3(int bone) { return (float *)(bone + 0x40); }
inline unsigned short &boneFlags(int bone) { return *(unsigned short *)(bone + 0xA2); }

// Copies `count` dwords bit for bit, in order (the raw code copies these as undefined4).
inline void copyDwords(void *dst, const void *src, int count)
{
    for (int i = 0; i < count; i++) ((unsigned int *)dst)[i] = ((const unsigned int *)src)[i];
}
// Free nodes (fixNo 0xFFF or bit 0x2000) follow the simulation, others snap to fixedPos.
inline bool isPinned(ClothNode *node) { return node->fixNo != 0xFFF && (node->fixNo & 0x2000) == 0; }

// A stack slot the decompiler used for several values of different types.
union StackSlot {
    float        f;
    int          i;
    unsigned int u;
    float       *p;
};

}  // namespace cObjReadManager_p1

// 00A01170  cObjReadManager::getDataAtSet  size=267  [class]
// Returns 1 when the files of object `id` are resident (or it has none), 0 when loading failed.
// When they are not, requests them synchronously and arms the load hook polled by
// updateHookLoading.
undefined4 cObjReadManager::getDataAtSet(unsigned int *out, unsigned int id, unsigned int param)
{
    using namespace cObjReadManager_p1;
    char name[16];

    bool noFiles = false;
    for (unsigned int *p = DAT_0189e7b8; *p != 0xFFFFFFFF; p++) {
        if (*p == id) {
            noFiles = true;
            break;
        }
    }
    if (!noFiles && (id & 0xFFFF0000) != 0x90000) {
        if (FUN_009fe6b0((undefined4)out, id) != 0) {
            return 1;
        }
        if (FUN_00a00a60(id, param) != 0) {
            hookId() = id;
            hookParam() = param;
            hookWaitFrames() = 0;
            call<void (*)(int)>(FUN_00e9c100)(1); /* ECX: ? */
            FUN_00a4a6b0();
            if (FUN_009fe6b0((undefined4)out, id) != 0) {
                FUN_00a00bd0(id, param);
                return 1;
            }
            FUN_009f8ea0(name, 0x10, id, 0);
            call<void (*)(void *, char *)>(FUN_00dd5650)(DAT_0165c3bc, name);
            FUN_00a00bd0(id, param);
        }
        call<void (*)(int, int)>(FUN_00de3540)(0, 0); /* ECX: ? */
        return 0;
    }
    call<void (*)(int, int)>(FUN_00de3540)(0, 0); /* ECX: ? */
    return 1;
}

// 00A01300  FUN_00a01300  size=65  [between]
// Frees the two buffers of a cloth object (+0x28 with count +0x24, +0x1C with count +0x18).
void __fastcall FUN_00a01300(int cloth)
{
    if (*(int *)(cloth + 0x28) != 0) {
        *(int *)(cloth + 0x24) = 0;
        if (*(int *)(cloth + 0x28) != 0) {
            FUN_00dd48d0(*(int *)(cloth + 0x28), 0);
            *(int *)(cloth + 0x28) = 0;
        }
    }
    if (*(int *)(cloth + 0x1c) != 0) {
        *(int *)(cloth + 0x18) = 0;
        if (*(int *)(cloth + 0x1c) != 0) {
            FUN_00dd48d0(*(int *)(cloth + 0x1c), 0);
            *(int *)(cloth + 0x1c) = 0;
        }
    }
}

// 00A01350  FUN_00a01350  size=9853  [between]
// Cloth simulation step (__thiscall, ECX = cloth): cloth[0] must be set, cloth[6] = node count,
// cloth[7] = nodes (ClothNode, 0x100 bytes each), cloth[700] = owner model. dt = time step,
// debugDraw draws the collision spheres.
//
// Ghidra lost track of the stack frame in this function: arguments are stored into locals just
// before calls that then appear without arguments, one stack slot holds loop counters, floats
// and pointers at once (StackSlot), register values are read uninitialized (unaffEBX, unaffEDI) and
// some addresses are raw frame offsets (stackFBE8, stackFBCC). Everything below mirrors the raw
// decompilation one to one; "stack arg" comments give the value stored for the call, and a
// "return address" comment replaces the store of the call's own return address.
void FUN_00a01350(int *cloth, float dt, int debugDraw)
{
    using namespace cObjReadManager_p1;
    float d0, d1, d2, d3;             // fVar1..fVar4: deltas / scratch
    float f8;                         // fVar8
    float f24, f25;                   // fVar24, fVar25
    unsigned short fixNo;             // uVar5
    unsigned int *src6;               // puVar6
    unsigned short *nodesBase;        // puVar7
    unsigned short *other;            // puVar10
    float *vec;                       // pfVar11
    float *vec2;                      // pfVar17
    unsigned int j;                   // uVar12
    unsigned int i;                   // uVar13
    int tmp;                          // iVar9
    int addr;                         // iVar16
    int boneMat;                      // iVar14
    int posAddr;                      // iVar15
    int argA, argB;                   // iVar22, iVar23
    double angle;                     // fVar18
    double limit;                     // fVar19
    double ex, ey;                    // fVar20, fVar21
    float unaffEBX;                   // ? register value on entry
    float unaffEDI;                   // ? register value on entry
    StackSlot slot42c, slot428, slot424, slot410, slot3f0, slot3d4, slot228;
    float f414;
    unsigned int u40c;
    unsigned int u408;
    float scale;                      // local_404
    float f400, f3fc;
    float f3ec, f3e8, f3e4, f3e0;
    float f3dc, f3d8;
    float f3d0, f3cc, f3c8, f3c4, f3c0, f3bc, f3b8, f3b4, f3b0, f3ac, f3a8, f3a4, f3a0;
    float f39c, f398, f394, f390, f38c, f388, f384, f380, f37c, f378, f374, f370, f36c;
    unsigned char out368[8];
    int i360;
    unsigned int hadModel;            // local_344
    unsigned int u33c;
    float f338;
    float axis0, axis1, axis2, axis3; // local_330, local_32c, local_328, fStack_324
    float f31c, f318, f314;
    float f30c, f308, f304;
    unsigned int u300;
    float f2fc, f2f8, f2f4;
    unsigned int u2f0;
    float f2ec, f2e8, f2e4;
    unsigned int u2e0;
    float f2dc, f2d8, f2d4;
    unsigned int u2d0;
    float f2cc, f2c8, f2c4;
    unsigned int u2bc, u2b8, u2b4;
    float f2ac, f2a8, f2a4, f2a0, f29c, f298, f294, f290, f28c, f288, f284, f280;
    float f27c, f278, f274, f270, f26c, f268, f264, f260, f25c, f258, f254;
    unsigned int u250, u24c, u248, u244, u240;
    float f23c, f238, f234;
    unsigned int u230;
    float f22c, f224;
    float af220[9];
    float f1fc, f1f8, f1f4, f1f0, f1ec, f1e8, f1e4, f1c8, f1c4;
    float f1c0, f1bc, f1b8;
    unsigned char mat1a0[40];
    unsigned char mat178[12];
    unsigned char mat16c[24];
    float f154, f150, f14c;
    unsigned char mat138[12];
    unsigned char mat12c[40];
    unsigned char mat104[12];
    float f0f8, f0f4;
    unsigned char mat0b8[12];
    unsigned char mat0ac[56];
    unsigned char mat074[8];
    unsigned char mat06c[104];
    float stackFBE8[4];               // ? frame address 0xFFFFFBE8 (not mapped to a local)
    float stackFBCC[4];               // ? frame address 0xFFFFFBCC (not mapped to a local)
    ClothNode *node;

    if (cloth[0] == 0 || cloth[6] == 0 || cloth[700] == 0 || cloth[7] == 0) {
        return;
    }
    if ((*(unsigned char *)(cloth[700] + 0x4c8) & 3) != 0) {
        cloth[700] = 0;
        return;
    }
    hadModel = 0;
    tmp = cloth[0x2f5];
    if (tmp != 0) {
        call<void (*)()>(FUN_009fb990)(); // return address 0x00A013B7
    }
    hadModel = (unsigned int)(tmp != 0);
    if ((cloth[0x2f6] & 0x80000000U) != 0) {
        return;
    }

    // Unit axis selected by cloth[0x2F2] (0: X, 2: Z, otherwise Y).
    if (cloth[0x2f2] == 0) {
        axis0 = 1.0f;
        axis2 = 0.0f;
        axis1 = 0.0f;
    }
    else {
        axis2 = 0.0f;
        axis0 = 0.0f;
        if (cloth[0x2f2] == 2) {
            axis1 = 0.0f;
            axis2 = 1.0f;
        }
        else {
            axis1 = 1.0f;
        }
    }

    // Scale of the chain = length of the axis transformed by bone cloth[0x2E6].
    slot424.i = cloth[0x2e6];                       // stack arg
    cloth[0x2c5] = *(int *)(cloth[700] + 0x74);
    tmp = call<int (*)()>(FUN_00a12210)();          // return address 0x00A01434
    if (tmp != 0) {
        slot424.i = tmp + 0x10;                     // stack arg: bone matrix
        slot428.p = &axis0;                         // stack arg
        call<float *(__stdcall *)()>(D3DXVec3TransformNormal)();
        clothF(cloth, 0x2c5) = (float)sqrt(f1b8 * f1b8 + f1c0 * f1c0 + f1bc * f1bc);
    }
    scale = clothF(cloth, 0x2c5);
    if (cloth[0x2bf] != 0) {
        slot424.i = cloth[0x2e7];                   // stack arg
        tmp = call<int (*)()>(FUN_00a12210)();      // return address 0x00A01498
        if (tmp != 0) {
            slot424.i = tmp + 0x10;                 // stack arg: bone matrix
            slot428.p = &axis0;                     // stack arg
            call<float *(__stdcall *)()>(D3DXVec3TransformNormal)();
            if (0.2 < fabs(scale - sqrt(f1e8 * f1e8 + f1f0 * f1f0 + f1ec * f1ec))) {
                call<void (*)()>(FUN_009fb990)();   // return address 0x00A014F0
                return;
            }
        }
    }

    tmp = 0;
    if (cloth[0x2ed] == 0) {
        cloth[4] = 0;
    }
    else {
        tmp = call<int (*)()>(FUN_009ffdf0)();      // return address 0x00A0150A
    }
    call<void (*)()>(FUN_009fbc50)();               // return address 0x00A01518
    slot424.f = dt;                                 // stack arg
    if (tmp == 0) {
        call<void (*)()>(FUN_009ff5b0)();           // return address 0x00A01531
    }
    else {
        call<void (*)()>(FUN_009ff680)();           // return address 0x00A0152A
    }
    slot424.f = dt;                                 // stack arg
    call<void (*)()>(FUN_009ff660)();               // return address 0x00A0153F
    slot424.i = cloth[700];                         // stack arg
    call<void (*)()>(FUN_00a07820)();               // return address 0x00A0155D

    // Pick up the animated bone positions.
    u40c = 0;
    if (cloth[6] != 0) {
        slot410.f = 0.0f;
        do {
            addr = cloth[7] + slot410.i;
            node = (ClothNode *)addr;
            tmp = node->bone;
            slot424.i = tmp + 0x10;                 // stack arg: bone matrix
            copyDwords(node->bonePos, boneRow3(tmp), 1);
            slot428.p = node->localOffset;          // stack arg
            copyDwords(&node->bonePos[1], boneRow3(tmp) + 1, 1);
            slot3d4.p = node->animPos;
            copyDwords(&node->bonePos[2], boneRow3(tmp) + 2, 2);
            call<float *(__stdcall *)()>(D3DXVec3TransformNormal)();
            *slot3d4.p = boneRow3(tmp)[0] + *slot3d4.p;
            slot3d4.p[1] = boneRow3(tmp)[1] + slot3d4.p[1];
            slot3d4.p[2] = boneRow3(tmp)[2] + slot3d4.p[2];
            if (cloth[0x2be] != 0 && node->fixNo != 0xfff && (node->fixNo & 0x2000) == 0) {
                copyDwords(node->fixedPos, boneRow3(node->fixBone), 4);
            }
            slot410.i = slot410.i + 0x100;
            u40c = u40c + 1;
            node->restLength = node->lenScaleA * scale;
            node->restLength2 = scale * node->lenScaleB;
        } while (u40c < (unsigned int)cloth[6]);
    }
    slot428.i = cloth[0x2c5];                       // stack arg
    slot424.i = cloth[0x2c5];                       // stack arg
    call<float *(__stdcall *)()>(D3DXMatrixScaling)();
    if (-2 < cloth[0x2d0]) {
        FID_conflict__memcpy(mat1a0, (void *)(cloth[700] + 0x10), 0x40);
        if (cloth[0x2bd] != 0) {
            FID_conflict__memcpy(mat1a0, (void *)(cloth[0x2bd] + 0x10), 0x40);
        }
        if (-1 < cloth[0x2d0] && (tmp = call<int (*)()>(FUN_00a12210)(), tmp != 0)) {
            FID_conflict__memcpy(mat1a0, (void *)(tmp + 0x10), 0x40);
        }
    }
    call<float *(__stdcall *)(float *, float *)>(D3DXVec3TransformNormal)(af220, (float *)(cloth + 0x2cc));

    // Verlet integration: remember the previous position, add gravity and velocity.
    if (0.0f < dt && (slot428.p = 0, cloth[6] != 0)) {
        tmp = 0;
        do {
            node = clothNode(cloth, tmp);
            copyDwords(node->prevPos, node->pos, 4);
            node->pos[0] = f22c * dt + node->pos[0];
            node->pos[1] = node->pos[1] + slot228.f * dt;
            node->pos[2] = f224 * dt + node->pos[2];
            node->pos[3] = node->pos[3] + af220[0] * dt;
            node->pos[0] = node->velocity[0] * dt + node->pos[0];
            node->pos[1] = node->pos[1] + node->velocity[1] * dt;
            node->pos[2] = node->velocity[2] * dt + node->pos[2];
            node->pos[3] = node->velocity[3] * dt + node->pos[3];
            call<void (*)(int, float)>(FUN_009ff550)((int)node, dt);
            call<void (*)(int, float)>(FUN_009fb780)((int)node, dt);
            if (isPinned(node)) {
                copyDwords(node->pos, node->fixedPos, 4);
            }
            if (node->pinned != 0) {
                copyDwords(node->pos, node->fixedPos, 4);
            }
            slot428.i = slot428.i + 1;
            *(unsigned int *)&node->velocityScale = 0x3f800000;  // 1.0f
            tmp = tmp + 0x100;
        } while (slot428.u < (unsigned int)cloth[6]);
    }

    // Axis lock (cloth[0x2F3] = 1..3 zeroes the local X/Y/Z component).
    if (cloth[0x2f3] - 1U < 3 && (slot428.p = 0, cloth[6] != 0)) {
        slot42c.f = 0.0f;
        do {
            node = clothNode(cloth, slot42c.i);
            D3DXMatrixInverse((float *)mat16c, 0, boneMatrix(node->bone));
            vec = node->pos;
            D3DXVec3TransformNormal((float *)out368, vec, (float *)mat178);
            f374 = f154 + f374;
            tmp = cloth[0x2f3];
            f370 = f150 + f370;
            f36c = f14c + f36c;
            if (tmp == 1) {
                f374 = 0.0f;
            }
            else if (tmp == 2) {
                f370 = 0.0f;
            }
            else if (tmp == 3) {
                f36c = 0.0f;
            }
            tmp = node->bone;
            D3DXVec3TransformNormal(vec, &f374, boneMatrix(tmp));
            slot42c.i = slot42c.i + 0x100;
            slot428.i = slot428.i + 1;
            *vec = *vec + boneRow3(tmp)[0];
            node->pos[1] = boneRow3(tmp)[1] + node->pos[1];
            node->pos[2] = boneRow3(tmp)[2] + node->pos[2];
        } while (slot428.u < (unsigned int)cloth[6]);
    }

    // Ground clamp: ray cast down from the owner and keep free nodes above the hit.
    cloth[0x2f1] = 0;
    if (cloth[0x2eb] != 0) {
        tmp = cloth[0x2bf];
        if (tmp == 0) {
            tmp = cloth[700];
            if (tmp != 0) {
                D3DXVec3TransformNormal(&f2fc, (float *)(tmp + 0x50), (float *)(tmp + 0xf0));
                f2fc = f2fc + *(float *)(tmp + 0x120);
                f2f8 = *(float *)(tmp + 0x124) + f2f8;
                f2f4 = *(float *)(tmp + 0x128) + f2f4;
                slot42c.f = clothF(cloth, 0x2f0) + f2f8;
                u250 = u2f0;
                u2e0 = u2f0;
                f2e8 = f2f8 + 1.0f;
                f258 = f2f8 - 5.0f;
                f2ec = f2fc;
                f2e4 = f2f4;
                f25c = f2fc;
                f254 = f2f4;
                tmp = rayCastSingleHit()(&f2ec, 0, 0, 0, &f2ec, &f25c, 0x1e, "et0502_fall");
                if (tmp != 0) {
                    slot42c.f = f2e8;
                }
                slot424.f = 0.0f;
                if (cloth[6] != 0) {
                    slot428.p = 0;
                    do {
                        vec = slot428.p;
                        tmp = cloth[7];
                        fixNo = *(unsigned short *)(slot428.i + tmp + 10);
                        if (fixNo == 0xfff || (fixNo & 0x2000) != 0) {
                            addr = cloth[700];
                            vec2 = (float *)(slot428.i + tmp + 0x50);
                            D3DXVec3TransformNormal(&f31c, vec2, (float *)(addr + 0xf0));
                            f31c = f31c + *(float *)(addr + 0x120);
                            f318 = *(float *)(addr + 0x124) + f318;
                            f314 = *(float *)(addr + 0x128) + f314;
                            if (f318 < slot42c.f) {
                                addr = cloth[700];
                                f318 = slot42c.f;
                                D3DXVec3TransformNormal(vec2, &f31c, (float *)(addr + 0xb0));
                                *vec2 = *(float *)(addr + 0xe0) + *vec2;
                                *(float *)((int)vec + tmp + 0x54) =
                                    *(float *)(addr + 0xe4) + *(float *)((int)vec + tmp + 0x54);
                                *(float *)((int)vec + tmp + 0x58) =
                                    *(float *)(addr + 0xe8) + *(float *)((int)vec + tmp + 0x58);
                                cloth[0x2f1] = 1;
                            }
                        }
                        slot428.p = slot428.p + 0x40;
                        slot424.i = slot424.i + 1;
                    } while (slot424.u < (unsigned int)cloth[6]);
                }
            }
        }
        else {
            D3DXVec3TransformNormal(&f30c, (float *)(tmp + 0x50), (float *)(tmp + 0xf0));
            f30c = *(float *)(tmp + 0x120) + f30c;
            f308 = *(float *)(tmp + 0x124) + f308;
            f304 = *(float *)(tmp + 0x128) + f304;
            slot42c.f = clothF(cloth, 0x2f0) + f308;
            u230 = u300;
            u2d0 = u300;
            f2d8 = f308 + 1.0f;
            f238 = f308 - 5.0f;
            f2dc = f30c;
            f2d4 = f304;
            f23c = f30c;
            f234 = f304;
            tmp = rayCastSingleHit()(&f2dc, 0, 0, 0, &f2dc, &f23c, 0x1e, "et0502_fall");
            if (tmp != 0) {
                slot42c.f = f2d8;
            }
            slot424.f = 0.0f;
            if (cloth[6] != 0) {
                slot428.p = 0;
                do {
                    vec = slot428.p;
                    tmp = cloth[7];
                    fixNo = *(unsigned short *)(slot428.i + tmp + 10);
                    if (fixNo == 0xfff || (fixNo & 0x2000) != 0) {
                        addr = cloth[0x2bf];
                        vec2 = (float *)(slot428.i + tmp + 0x50);
                        D3DXVec3TransformNormal(&axis1, vec2, (float *)(addr + 0xf0));
                        axis1 = *(float *)(addr + 0x120) + axis1;
                        axis2 = *(float *)(addr + 0x124) + axis2;
                        axis3 = *(float *)(addr + 0x128) + axis3;
                        if (axis2 < slot42c.f) {
                            addr = cloth[0x2bf];
                            axis2 = slot42c.f;
                            D3DXVec3TransformNormal(vec2, &axis1, (float *)(addr + 0xb0));
                            *vec2 = *(float *)(addr + 0xe0) + *vec2;
                            *(float *)((int)vec + tmp + 0x54) =
                                *(float *)(addr + 0xe4) + *(float *)((int)vec + tmp + 0x54);
                            *(float *)((int)vec + tmp + 0x58) =
                                *(float *)(addr + 0xe8) + *(float *)((int)vec + tmp + 0x58);
                        }
                    }
                    slot428.p = slot428.p + 0x40;
                    slot424.i = slot424.i + 1;
                } while (slot424.u < (unsigned int)cloth[6]);
            }
        }
    }

    // Blend towards the animated pose (per-node blend overrides the global one).
    if (1.0f < clothF(cloth, 0x2e5)) {
        cloth[0x2e5] = 0x3f800000;  // 1.0f
    }
    i = 0;
    if (cloth[6] != 0) {
        tmp = 0;
        do {
            f24 = clothF(cloth, 0x2e5);
            node = clothNode(cloth, tmp);
            if (0.0f < node->blend) {
                f24 = node->blend;
            }
            if (0.0f < f24) {
                node->pos[0] = (node->animPos[0] - node->pos[0]) * f24 + node->pos[0];
                node->pos[1] = (node->animPos[1] - node->pos[1]) * f24 + node->pos[1];
                node->pos[2] = (node->animPos[2] - node->pos[2]) * f24 + node->pos[2];
                node->pos[3] = (node->animPos[3] - node->pos[3]) * f24 + node->pos[3];
            }
            i = i + 1;
            tmp = tmp + 0x100;
        } while (i < (unsigned int)cloth[6]);
    }

    // Distance constraint to the parent (stiffness cloth[0x2D1]).
    if (0.0f < clothF(cloth, 0x2d1) && (i = 0, cloth[6] != 0)) {
        tmp = 0;
        do {
            fixNo = *(unsigned short *)(cloth[7] + 10 + tmp);
            node = clothNode(cloth, tmp);
            if (fixNo != 0xfff && (fixNo & 0x2000) == 0) {
                copyDwords(node->pos, node->fixedPos, 4);
            }
            if (node->pinned != 0) {
                copyDwords(node->pos, node->fixedPos, 4);
            }
            vec = node->parent;
            d0 = *vec - node->pos[0];
            d1 = vec[1] - node->pos[1];
            d2 = vec[2] - node->pos[2];
            f24 = vec[3];
            f25 = d2 * d2 + d1 * d1 + d0 * d0;
            if (node->restLength * node->restLength < f25) {
                f25 = (float)sqrt(f25);
                f25 = ((f25 - node->restLength) * clothF(cloth, 0x2d1)) / f25;
                node->pos[0] = d0 * f25 + node->pos[0];
                node->pos[1] = node->pos[1] + d1 * f25;
                node->pos[2] = d2 * f25 + node->pos[2];
                node->pos[3] = f25 * (f24 - node->pos[3]) + node->pos[3];
            }
            i = i + 1;
            tmp = tmp + 0x100;
        } while (i < (unsigned int)cloth[6]);
    }

    // Angle limit: rotate each bone towards its node, clamped by angleLimit. The frame offsets
    // in this loop are inconsistent in the raw decompilation (see the header comment).
    slot428.p = 0;
    if (cloth[6] != 0) {
        slot3f0.f = 1.0f / unaffEDI;
        tmp = 0;
        do {
            tmp = cloth[7] + tmp;  // ? raw adds the node base to the running offset
            node = (ClothNode *)tmp;
            addr = node->bone;
            if ((boneFlags(addr) & 0x8004) == 0) {
                call<void (*)()>(FUN_00a15310)();
            }
            boneMat = addr + 0x10;
            D3DXVec3TransformNormal((float *)&u40c, node->localAxis, (float *)boneMat);
            if (slot410.f * slot410.f + unaffEBX * unaffEBX + f414 * f414 <= 0.0f) {
                unaffEBX = 0.0f;
                f414 = 1.0f;
                slot410.f = 0.0f;
                u40c = u33c;
            }
            else {
                FUN_00ddf460(stackFBE8, stackFBE8);
            }
            vec = node->parent;
            slot428.f = node->pos[0] - *vec;
            slot424.f = node->pos[1] - vec[1];
            f25 = node->pos[2] - vec[2];
            d0 = f25 * f25 + slot428.f * slot428.f + slot424.f * slot424.f;
            f24 = (float)sqrt(d0);
            if (d0 <= 0.0f) {
                slot428.p = 0;
                slot424.f = 1.0f;
                f25 = 0.0f;
            }
            else {
                FUN_00ddf460(&slot428.f, &slot428.f);
            }
            if (f24 < node->restLength * 0.001f) {
                if (f24 == 0.0f) {
                    vec = node->localOffset;
                    if (node->localOffset[2] * node->localOffset[2] + *vec * *vec +
                            node->localOffset[1] * node->localOffset[1] <= 0.0f) {
                        slot428.p = 0;
                        slot424.f = 1.0f;
                        f25 = 0.0f;
                        f24 = node->restLength * 0.1f;
                    }
                    else {
                        f24 = node->localOffset[2] * node->localOffset[2] + *vec * *vec +
                              node->localOffset[1] * node->localOffset[1];
                        if ((f24 < 0.0f) == (f24 == 0.0f)) {
                            FUN_00ddf460(&slot428.f, vec);
                            f24 = node->restLength * 0.1f;
                        }
                        else {
                            call<void (*)(void *)>(FUN_00dd5650)(DAT_0163d0ac);
                            slot428.p = 0;
                            slot424.f = 1.0f;
                            f25 = 0.0f;
                            f24 = node->restLength * 0.1f;
                        }
                    }
                }
                else {
                    f24 = node->restLength * 0.1f;
                }
            }
            d0 = node->restLength * clothF(cloth, 0x2e8);
            if (d0 < f24) {
                f24 = d0;
            }
            angle = (double)FUN_00ddbb50(f25 * slot410.f + unaffEBX * slot428.f + slot424.f * f414);
            if (0.0001 < angle && angle < 3.1414928) {
                slot3d4.f = f25 * f414 - slot424.f * slot410.f;
                f3d0 = slot428.f * slot410.f - unaffEBX * f25;
                f3cc = unaffEBX * slot424.f - slot428.f * f414;
                limit = (double)node->angleLimit;
                if (limit < (double)clothF(cloth, 0x2e3)) {
                    limit = (double)clothF(cloth, 0x2e4) * (double)clothF(cloth, 0x2e3) +
                            (1.0 - (double)clothF(cloth, 0x2e4)) * limit;
                }
                if (limit < angle) {
                    if (1.25 * limit < angle) {
                        *(unsigned int *)&node->velocityScale = 0x3e800000;  // 0.25f
                    }
                    angle = angle * (double)clothF(cloth, 0x2c1) + (1.0 - (double)clothF(cloth, 0x2c1)) * limit;
                }
                slot228.p = slot3d4.p;
                f224 = f3d0;
                af220[0] = f3cc;
                if (slot3d4.f != 0.0f || f3d0 != 0.0f || f3cc != 0.0f) {
                    D3DXMatrixRotationAxis(&f0f8, &slot228.f, (float)angle);
                    D3DXMatrixMultiply((float *)boneMat, (float *)boneMat, (float *)mat104);
                }
            }
            src6 = (unsigned int *)node->parent;
            *(unsigned int *)(addr + 0x40) = *src6;
            *(unsigned int *)(addr + 0x44) = src6[1];
            *(unsigned int *)(addr + 0x48) = src6[2];
            f24 = f24 * f3fc;
            slot428.f = f24 * node->localAxis[0];
            slot424.f = node->localAxis[1] * f24;
            d0 = node->localAxis[2];
            f25 = node->localAxis[3];
            D3DXVec3TransformNormal(stackFBE8, &slot428.f, (float *)boneMat);
            slot424.f = slot424.f + *(float *)(addr + 0x40);
            d1 = *(float *)(addr + 0x44);
            d2 = *(float *)(addr + 0x48);
            D3DXVec3TransformNormal(stackFBCC, stackFBCC, (float *)boneMat);
            vec = node->parent;
            unaffEBX = vec[1] + unaffEBX;
            f414 = vec[2] + f414;
            slot410.f = vec[3] + slot410.f;
            if (DAT_01b7b374 == 0) {
                node->pos[0] = d2 + f24 * f25 + *vec;
                node->pos[1] = unaffEBX;
                node->pos[2] = f414;
                f25 = slot410.f;
            }
            else {
                *(unsigned int *)&node->pos[0] = u40c;
                *(unsigned int *)&node->pos[1] = u408;
                node->pos[2] = scale;
                f25 = f400;
            }
            node->pos[3] = f25;
            tmp = (int)(d1 + d0 * f24) + 0x100;  // ? as in the raw decompilation
            slot428.i = slot428.i + 1;
        } while (slot428.u < (unsigned int)cloth[6]);
    }

    // Iterations: cloth[0x2C4] low word = outer count, high word (+0xB12) = inner count.
    slot428.p = 0;
    if ((short)cloth[0x2c4] != 0) {
        do {
            i = 0;
            if (cloth[6] != 0) {
                tmp = 0;
                do {
                    addr = cloth[7];
                    *(unsigned int *)(tmp + 0xa0 + addr) = 0;
                    addr = tmp + 0xa0 + addr;
                    *(unsigned int *)(addr + 4) = 0;
                    i = i + 1;
                    *(unsigned int *)(addr + 8) = 0;
                    tmp = tmp + 0x100;
                    *(float *)(addr + 0xc) = axis0;
                } while (i < (unsigned int)cloth[6]);
            }

            // Collision against the spheres of the collision set (cloth[1]).
            if (cloth[1] != 0) {
                if (cloth[0x2ee] == 0 && (slot424.f = 0.0f, cloth[6] != 0)) {
                    tmp = 0;
                    do {
                        node = clothNode(cloth, tmp);
                        addr = (int)node->sideC0;
                        if (addr != 0 && node->sideC4 != 0) {
                            posAddr = (int)node->pos;
                            if ((node->flags08 & 0x4000) == 0) {
                                call<void (*)(undefined4, int, int, int, float)>(FUN_009fb210)(
                                    (undefined4)node->parent, posAddr, addr, cloth[0x2c6],
                                    clothF(cloth, 0x2e1) * dt);
                                f24 = clothF(cloth, 0x2e1);
                                argB = (int)node->sideC4;
                                addr = cloth[0x2c6];
                                argA = posAddr;
                            }
                            else {
                                call<void (*)(undefined4, int, int, int, float)>(FUN_009fb210)(
                                    (undefined4)node->parent, addr, posAddr, cloth[0x2c6],
                                    clothF(cloth, 0x2e1) * dt);
                                f24 = clothF(cloth, 0x2e1);
                                addr = cloth[0x2c6];
                                argA = (int)node->sideC4;
                                argB = posAddr;
                            }
                            call<void (*)(undefined4, int, int, int, float)>(FUN_009fb210)(
                                (undefined4)node->sideC0, argA, argB, addr, f24 * dt);
                        }
                        tmp = tmp + 0x100;
                        slot424.i = slot424.i + 1;
                    } while (slot424.u < (unsigned int)cloth[6]);
                }
                slot424.f = 0.0f;
                if (cloth[6] != 0) {
                    tmp = 0;
                    do {
                        node = clothNode(cloth, tmp);
                        call<void (*)(int, int, float)>(FUN_009fadb0)((int)node, cloth[0x2c6],
                                                                      clothF(cloth, 0x2e1) * dt);
                        if (cloth[0x2ee] != 0) {
                            // Segment node-parent.
                            vec = node->parent;
                            if (vec != 0) {
                                f3ac = (*vec + node->pos[0]) * 0.5f;
                                f3a8 = (vec[1] + node->pos[1]) * 0.5f;
                                f3a4 = (vec[2] + node->pos[2]) * 0.5f;
                                f3a0 = (vec[3] + node->pos[3]) * 0.5f;
                                call<void (*)(float *, float *, int, float)>(FUN_009fafb0)(
                                    &f27c, &f3ac, cloth[0x2c6], clothF(cloth, 0x2e1) * dt);
                                node->pos[0] = f27c + node->pos[0];
                                node->pos[1] = f278 + node->pos[1];
                                node->pos[2] = f274 + node->pos[2];
                                node->pos[3] = f270 + node->pos[3];
                                if (node->weight < 1.0f) {
                                    vec = node->parent;
                                    *vec = f27c + *vec;
                                    vec[1] = vec[1] + f278;
                                    vec[2] = vec[2] + f274;
                                    vec[3] = vec[3] + f270;
                                }
                                if (debugDraw != 0) {
                                    f3ac = f27c + f3ac;
                                    f3a8 = f278 + f3a8;
                                    f3a4 = f274 + f3a4;
                                    f3a0 = f270 + f3a0;
                                    call<void (*)(float *, int, unsigned int, int, int)>(FUN_00f96100)(
                                        &f3ac, 0x3c23d70a /* 0.01f */, 0xffff00ff, 0, 0);
                                }
                            }
                            // Segment node-child.
                            vec = node->child;
                            if (vec != 0) {
                                f3bc = (node->pos[0] + *vec) * 0.5f;
                                f3b8 = (node->pos[1] + vec[1]) * 0.5f;
                                f3b4 = (node->pos[2] + vec[2]) * 0.5f;
                                f3b0 = (node->pos[3] + vec[3]) * 0.5f;
                                call<void (*)(float *, float *, int, float)>(FUN_009fafb0)(
                                    &f2ac, &f3bc, cloth[0x2c6], clothF(cloth, 0x2e1) * dt);
                                node->pos[0] = node->pos[0] + f2ac;
                                node->pos[1] = f2a8 + node->pos[1];
                                node->pos[2] = f2a4 + node->pos[2];
                                node->pos[3] = f2a0 + node->pos[3];
                                vec = node->child;
                                *vec = *vec + f2ac;
                                vec[1] = f2a8 + vec[1];
                                vec[2] = f2a4 + vec[2];
                                vec[3] = f2a0 + vec[3];
                                if (debugDraw != 0) {
                                    f3bc = f2ac + f3bc;
                                    f3b8 = f2a8 + f3b8;
                                    f3b4 = f2a4 + f3b4;
                                    f3b0 = f2a0 + f3b0;
                                    call<void (*)(float *, int, unsigned int, int, int)>(FUN_00f96100)(
                                        &f3bc, 0x3c23d70a /* 0.01f */, 0xffff00ff, 0, 0);
                                }
                            }
                            // Segment node-sideC0.
                            if (node->parent != 0 && (vec = node->sideC0, vec != 0) && node->sideC4 != 0) {
                                f39c = (*vec + node->pos[0]) * 0.5f;
                                f398 = (vec[1] + node->pos[1]) * 0.5f;
                                f394 = (vec[2] + node->pos[2]) * 0.5f;
                                f390 = (vec[3] + node->pos[3]) * 0.5f;
                                call<void (*)(float *, float *, int, float)>(FUN_009fafb0)(
                                    &f29c, &f39c, cloth[0x2c6], clothF(cloth, 0x2e1) * dt);
                                node->pos[0] = node->pos[0] + f29c;
                                node->pos[1] = f298 + node->pos[1];
                                node->pos[2] = f294 + node->pos[2];
                                node->pos[3] = f290 + node->pos[3];
                                vec = node->sideC0;
                                *vec = *vec + f29c;
                                vec[1] = f298 + vec[1];
                                vec[2] = f294 + vec[2];
                                vec[3] = f290 + vec[3];
                                if (debugDraw != 0) {
                                    f39c = f29c + f39c;
                                    f398 = f298 + f398;
                                    f394 = f294 + f394;
                                    f390 = f290 + f390;
                                    call<void (*)(float *, int, unsigned int, int, int)>(FUN_00f96100)(
                                        &f39c, 0x3c23d70a /* 0.01f */, 0xffff00ff, 0, 0);
                                }
                            }
                            // Triangle node-parent-sideC0.
                            vec = node->parent;
                            if (vec != 0 && (vec2 = node->sideC0, vec2 != 0) && node->sideC4 != 0) {
                                f38c = (node->pos[0] + *vec2 + *vec) * 0.33333334f;
                                f388 = (node->pos[1] + vec[1] + vec2[1]) * 0.33333334f;
                                f384 = (node->pos[2] + vec[2] + vec2[2]) * 0.33333334f;
                                f380 = (vec[3] + vec2[3] + node->pos[3]) * 0.33333334f;
                                call<void (*)(float *, float *, int, float)>(FUN_009fafb0)(
                                    &f28c, &f38c, cloth[0x2c6], clothF(cloth, 0x2e1) * dt);
                                node->pos[0] = f28c + node->pos[0];
                                node->pos[1] = f288 + node->pos[1];
                                node->pos[2] = f284 + node->pos[2];
                                node->pos[3] = f280 + node->pos[3];
                                vec = node->parent;
                                *vec = *vec + f28c;
                                vec[1] = vec[1] + f288;
                                vec[2] = vec[2] + f284;
                                vec[3] = vec[3] + f280;
                                vec = node->sideC0;
                                *vec = f28c + *vec;
                                vec[1] = f288 + vec[1];
                                vec[2] = f284 + vec[2];
                                vec[3] = f280 + vec[3];
                                if (debugDraw != 0) {
                                    f38c = f28c + f38c;
                                    f388 = f288 + f388;
                                    f384 = f284 + f384;
                                    f380 = f280 + f380;
                                    call<void (*)(float *, int, unsigned int, int, int)>(FUN_00f96100)(
                                        &f38c, 0x3c23d70a /* 0.01f */, 0xffff00ff, 0, 0);
                                }
                            }
                            // Triangle node-sideC0-sideC4.
                            if (node->parent != 0 && (vec = node->sideC0, vec != 0) &&
                                (vec2 = node->sideC4, vec2 != 0)) {
                                f37c = (*vec2 + *vec + node->pos[0]) * 0.33333334f;
                                f378 = (node->pos[1] + vec2[1] + vec[1]) * 0.33333334f;
                                f374 = (node->pos[2] + vec2[2] + vec[2]) * 0.33333334f;
                                f370 = (node->pos[3] + vec2[3] + vec[3]) * 0.33333334f;
                                call<void (*)(float *, float *, int, float)>(FUN_009fafb0)(
                                    &f26c, &f37c, cloth[0x2c6], clothF(cloth, 0x2e1) * dt);
                                node->pos[0] = f26c + node->pos[0];
                                node->pos[1] = f268 + node->pos[1];
                                node->pos[2] = f264 + node->pos[2];
                                node->pos[3] = f260 + node->pos[3];
                                vec = node->sideC0;
                                *vec = f26c + *vec;
                                vec[1] = f268 + vec[1];
                                vec[2] = f264 + vec[2];
                                vec[3] = f260 + vec[3];
                                vec = node->sideC4;
                                *vec = f26c + *vec;
                                vec[1] = f268 + vec[1];
                                vec[2] = f264 + vec[2];
                                vec[3] = f260 + vec[3];
                                if (debugDraw != 0) {
                                    f37c = f26c + f37c;
                                    f378 = f268 + f378;
                                    f374 = f264 + f374;
                                    f370 = f260 + f370;
                                    call<void (*)(float *, int, unsigned int, int, int)>(FUN_00f96100)(
                                        &f37c, 0x3c23d70a /* 0.01f */, 0xffff00ff, 0, 0);
                                }
                            }
                        }
                        tmp = tmp + 0x100;
                        slot424.i = slot424.i + 1;
                    } while (slot424.u < (unsigned int)cloth[6]);
                }
            }

            // Inner iterations: child (restLength2, stiffness cloth[0x2C3]) and parent
            // (restLength) distance constraints, split by weight; cloth[0x2EF] accumulates
            // the corrections and applies them afterwards.
            slot424.f = 0.0f;
            if (*(short *)((int)cloth + 0xb12) != 0) {
                do {
                    i = 0;
                    if (cloth[6] != 0) {
                        tmp = 0;
                        do {
                            vec = *(float **)(cloth[7] + 0xb4 + tmp);
                            node = clothNode(cloth, tmp);
                            if (vec != 0) {
                                f25 = *vec - node->pos[0];
                                d0 = vec[1] - node->pos[1];
                                d1 = vec[2] - node->pos[2];
                                f24 = vec[3] - node->pos[3];
                                d2 = d1 * d1 + d0 * d0 + f25 * f25;
                                if (0.0f < d2 &&
                                    (node->restLength2 * node->restLength2 < d2 || cloth[0x2ec] != 0)) {
                                    d2 = (float)(((sqrt(d2) - node->restLength2) * clothF(cloth, 0x2c3)) / sqrt(d2));
                                    d3 = d2 * node->weight;
                                    f8 = d3 * d0;
                                    if (cloth[0x2ef] == 0) {
                                        node->pos[0] = d3 * f25 + node->pos[0];
                                        node->pos[1] = node->pos[1] + f8;
                                        node->pos[2] = node->pos[2] + d3 * d1;
                                        node->pos[3] = d3 * f24 + node->pos[3];
                                        vec = node->child;
                                        d2 = -((1.0f - node->weight) * d2);
                                        *vec = d2 * f25 + *vec;
                                        vec[1] = d2 * d0 + vec[1];
                                        vec[2] = d2 * d1 + vec[2];
                                        vec[3] = d2 * f24 + vec[3];
                                        f338 = f8;
                                    }
                                    else {
                                        node->correction[0] = d3 * f25 + node->correction[0];
                                        node->correction[1] = node->correction[1] + f8;
                                        node->correction[2] = node->correction[2] + d3 * d1;
                                        node->correction[3] = d3 * f24 + node->correction[3];
                                        f1b8 = f8;
                                        if (node->linkBC != 0) {
                                            vec = node->linkBC;
                                            d2 = -((1.0f - node->weight) * d2);
                                            *vec = d2 * f25 + *vec;
                                            vec[1] = d2 * d0 + vec[1];
                                            vec[2] = d2 * d1 + vec[2];
                                            vec[3] = d2 * f24 + vec[3];
                                        }
                                    }
                                }
                            }
                            vec = node->parent;
                            if (vec != 0) {
                                f24 = *vec - node->pos[0];
                                d2 = vec[1] - node->pos[1];
                                d1 = vec[2] - node->pos[2];
                                d0 = vec[3] - node->pos[3];
                                f25 = d1 * d1 + f24 * f24 + d2 * d2;
                                if (0.0f < f25 &&
                                    (node->restLength * node->restLength < f25 || cloth[0x2ec] != 0)) {
                                    f8 = (float)((sqrt(f25) - node->restLength) / sqrt(f25));
                                    d3 = f8 * node->weight;
                                    f25 = d2 * d3;
                                    if (cloth[0x2ef] == 0) {
                                        f1c4 = d1 * d3;
                                        node->pos[0] = d3 * f24 + node->pos[0];
                                        node->pos[1] = node->pos[1] + f25;
                                        node->pos[2] = node->pos[2] + f1c4;
                                        node->pos[3] = d0 * d3 + node->pos[3];
                                        d3 = node->weight;
                                        vec = node->parent;
                                        f1c8 = f25;
                                    }
                                    else {
                                        f1e4 = d1 * d3;
                                        node->correction[0] = d3 * f24 + node->correction[0];
                                        node->correction[1] = node->correction[1] + f25;
                                        node->correction[2] = node->correction[2] + f1e4;
                                        node->correction[3] = d0 * d3 + node->correction[3];
                                        f1e8 = f25;
                                        if (node->linkB8 == 0) goto next_node;
                                        d3 = node->weight;
                                        vec = node->linkB8;
                                    }
                                    f25 = -((1.0f - d3) * f8);
                                    *vec = f25 * f24 + *vec;
                                    vec[1] = vec[1] + d2 * f25;
                                    vec[2] = d1 * f25 + vec[2];
                                    vec[3] = f25 * d0 + vec[3];
                                }
                            }
                        next_node:
                            i = i + 1;
                            tmp = tmp + 0x100;
                        } while (i < (unsigned int)cloth[6]);
                    }
                    i = 0;
                    if (cloth[6] != 0) {
                        tmp = 0;
                        do {
                            node = clothNode(cloth, tmp);
                            if (cloth[0x2ef] != 0) {
                                node->pos[0] = node->correction[0] + node->pos[0];
                                node->pos[1] = node->correction[1] + node->pos[1];
                                node->pos[2] = node->correction[2] + node->pos[2];
                                node->pos[3] = node->correction[3] + node->pos[3];
                            }
                            *(unsigned int *)&node->correction[0] = 0;
                            *(unsigned int *)&node->correction[1] = 0;
                            *(unsigned int *)&node->correction[2] = 0;
                            node->correction[3] = axis0;
                            if (isPinned(node)) {
                                copyDwords(node->pos, node->fixedPos, 4);
                            }
                            if (node->pinned != 0) {
                                copyDwords(node->pos, node->fixedPos, 4);
                            }
                            i = i + 1;
                            tmp = tmp + 0x100;
                        } while (i < (unsigned int)cloth[6]);
                    }
                    slot424.i = slot424.i + 1;
                } while (slot424.u < (unsigned int)*(unsigned short *)((int)cloth + 0xb12));
            }
            slot428.i = slot428.i + 1;
        } while (slot428.u < (unsigned int)*(unsigned short *)(cloth + 0x2c4));
    }

    // Velocities from the position change, then orient the bones along the chain.
    slot424.f = 1.0f / dt;
    slot3f0.f = 0.0f;
    if (cloth[6] != 0) {
        tmp = 0;
        do {
            node = clothNode(cloth, tmp);
            if (10.0f < slot424.f) {
                slot424.f = 10.0f;
            }
            if (0.0f < dt) {
                f24 = clothF(cloth, 0x2c2);
                d0 = node->velocityScale;
                node->velocity[0] = (node->pos[0] - node->prevPos[0]) * f24 * slot424.f * d0;
                node->velocity[1] = d0 * f24 * (node->pos[1] - node->prevPos[1]) * slot424.f;
                node->velocity[2] = d0 * f24 * (node->pos[2] - node->prevPos[2]) * slot424.f;
                node->velocity[3] = d0 * f24 * (node->pos[3] - node->prevPos[3]) * slot424.f;
                if (i360 != 0) {
                    *(unsigned int *)&node->velocity[0] = 0;
                    *(unsigned int *)&node->velocity[1] = 0;
                    *(unsigned int *)&node->velocity[2] = 0;
                    node->velocity[3] = axis0;
                }
            }
            boneMat = node->bone;
            if (node->parentNo == 0xfff) {
                copyDwords(node->parent, boneRow3(boneMat), 4);
            }
            if ((boneFlags(boneMat) & 0x8004) == 0) {
                call<void (*)()>(FUN_00a15310)();
            }
            if (isPinned(node)) {
                copyDwords(node->pos, node->fixedPos, 4);
            }
            if (node->pinned != 0) {
                copyDwords(node->pos, node->fixedPos, 4);
            }
            if (node->fixNo == 0xfff || (node->fixNo & 0x2000) == 0 || cloth[0x2be] == 0 ||
                node->fixBone == 0) {
                posAddr = boneMat + 0x10;
                D3DXVec3TransformNormal(&f3dc, node->localAxis, (float *)posAddr);
                if (slot3d4.f * slot3d4.f + f3dc * f3dc + f3d8 * f3d8 <= 0.0f) {
                    f3dc = 0.0f;
                    f3d8 = 1.0f;
                    slot3d4.p = 0;
                    f3d0 = axis0;
                }
                else {
                    FUN_00ddf460(&f3dc, &f3dc);
                }
                vec = node->parent;
                f3ec = node->pos[0] - *vec;
                f3e8 = node->pos[1] - vec[1];
                f3e4 = node->pos[2] - vec[2];
                f3e0 = node->pos[3] - vec[3];
                if (f3e4 * f3e4 + f3ec * f3ec + f3e8 * f3e8 <= 0.0f) {
                    f3ec = 0.0f;
                    f3e8 = 1.0f;
                    f3e4 = 0.0f;
                    f3e0 = axis0;
                }
                else {
                    FUN_00ddf460(&f3ec, &f3ec);
                }
                angle = (double)FUN_00ddbb50(f3e4 * slot3d4.f + f3dc * f3ec + f3e8 * f3d8);
                slot428.f = (float)angle;
                if (0.0001 < angle && angle < 3.1414928) {
                    f3c8 = f3e4 * f3d8 - f3e8 * slot3d4.f;
                    f3c4 = f3ec * slot3d4.f - f3dc * f3e4;
                    f3c0 = f3dc * f3e8 - f3ec * f3d8;
                    f1fc = f3c8;
                    f1f8 = f3c4;
                    f1f4 = f3c0;
                    if (f3c8 != 0.0f || f3c4 != 0.0f || f3c0 != 0.0f) {
                        D3DXMatrixRotationAxis((float *)mat0ac, &f1fc, slot428.f);
                        D3DXMatrixMultiply((float *)posAddr, (float *)posAddr, (float *)mat0b8);
                    }
                }
                src6 = (unsigned int *)node->parent;
                *(unsigned int *)(boneMat + 0x40) = *src6;
                *(unsigned int *)(boneMat + 0x44) = src6[1];
                *(unsigned int *)(boneMat + 0x48) = src6[2];
            }
            else {
                slot428.p = boneMatrix(node->fixBone);
                FID_conflict__memcpy((void *)(boneMat + 0x10), slot428.p, 0x40);
                vec = node->pos;
                D3DXVec3TransformNormal(vec, node->localOffset, slot428.p);
                *vec = *vec + slot428.p[0xc];
                node->pos[1] = slot428.p[0xd] + node->pos[1];
                node->pos[2] = slot428.p[0xe] + node->pos[2];
            }
            boneFlags(boneMat) = boneFlags(boneMat) | 0x20;
            tmp = tmp + 0x100;
            slot3f0.i = slot3f0.i + 1;
        } while (slot3f0.u < (unsigned int)cloth[6]);
    }

    // Twist linked nodes: rotate the bone about X so it faces the linked node.
    i = 0;
    if (cloth[6] != 0) {
        slot42c.f = 0.0f;
        do {
            nodesBase = (unsigned short *)cloth[7];
            fixNo = *(unsigned short *)(slot42c.i + 6 + (int)nodesBase);
            if (fixNo != 0xfff && *(int *)(slot42c.i + 0xd8 + (int)nodesBase) != 0 &&
                (j = 0, other = nodesBase, cloth[6] != 0)) {
                do {
                    if (i != j && (fixNo & 0xfff) == *other) {
                        addr = *(int *)(slot42c.i + 0xf0 + (int)nodesBase);
                        u2bc = *(unsigned int *)(addr + 0x40);
                        boneMat = *(int *)(other + 0x78);
                        tmp = addr + 0x10;
                        u2b8 = *(unsigned int *)(addr + 0x44);
                        u2b4 = *(unsigned int *)(addr + 0x48);
                        u24c = *(unsigned int *)(boneMat + 0x40);
                        u248 = *(unsigned int *)(boneMat + 0x44);
                        u244 = *(unsigned int *)(boneMat + 0x48);
                        u240 = *(unsigned int *)(boneMat + 0x4c);
                        D3DXMatrixInverse((float *)mat12c, 0, (float *)tmp);
                        D3DXVec3TransformNormal(&f2d8, &f258, (float *)mat138);
                        limit = (double)f2c8 + (double)f0f8;
                        f2c8 = (float)limit;
                        ex = (double)f2c4 + (double)f0f4;
                        f2c4 = (float)ex;
                        angle = 0.0;
                        f2cc = (float)angle;
                        ey = limit * limit + ex * ex;
                        if ((ey < angle) == (ey == angle)) {
                            ey = 1.5707964;
                            if ((double)*(float *)(slot42c.i + 0xe8 + (int)nodesBase) < angle) {
                                ey = -1.5707964;
                            }
                            angle = atan2(ex, limit);
                            angle = (double)call<float10 (*)(float)>(FUN_00ddba30)((float)(angle - ey));
                            D3DXMatrixRotationX((float *)mat06c, (float)angle);
                            D3DXMatrixMultiply((float *)tmp, (float *)mat074, (float *)tmp);
                            *(unsigned int *)(addr + 0x40) = u2bc;
                            *(unsigned int *)(addr + 0x44) = u2b8;
                            *(unsigned int *)(addr + 0x48) = u2b4;
                        }
                        break;
                    }
                    j = j + 1;
                    other = other + 0x80;
                } while (j < (unsigned int)cloth[6]);
            }
            i = i + 1;
            slot42c.i = slot42c.i + 0x100;
        } while (i < (unsigned int)cloth[6]);
    }
    call<void (*)()>(FUN_00a17b00)();
    if (debugDraw != 0) {
        call<void (*)()>(FUN_009f7a90)();
        if (cloth[1] != 0 && cloth[9] != 0 && cloth[0x2bf] != 0 && (i = 0, cloth[9] != 0)) {
            tmp = 0;
            do {
                call<void (*)(float *, undefined4, unsigned int, int, int)>(FUN_00f96100)(
                    (float *)(cloth[10] + tmp + 0x30), *(undefined4 *)(cloth[10] + 0xc + tmp), 0xffffffff, 0, 0);
                i = i + 1;
                tmp = tmp + 0x40;
            } while (i < (unsigned int)cloth[9]);
        }
        call<void (*)(int, int)>(FUN_009fc170)(0xffffffff, 1);
    }
}

// Data referenced by this part.
extern unsigned char DAT_0163d0ac[];  // debug message: zero-length vector in normalize
extern unsigned char DAT_01b7bd48[];  // default heap / allocator object
extern unsigned char DAT_0165c40c[];  // debug message: cloth node allocation failed (?)
extern unsigned char DAT_0165c430[];  // debug message: cloth collision allocation failed (?)
extern unsigned char DAT_0163e20c[];  // debug message: unexpected effect id (?)
extern unsigned char DAT_0165c458[];  // debug message: effect controller allocation failed (?, %s = name)
extern unsigned char DAT_0165c49c[];  // debug message: effect controller already exists (?, %s = name)
extern unsigned char DAT_0165c5bc[];  // debug message: counter underflow (?)
extern unsigned int  DAT_0165c500[];  // vertex element table: pairs (+0 / +4) indexed by format
extern unsigned int  DAT_0165c504[];  // second dword of the DAT_0165c500 pairs
extern unsigned int  DAT_0189eeb8[];  // vertex element table indexed by usage
extern unsigned int  DAT_0165c548[];  // 7 vertex element flags scanned by FUN_00a04b10
extern unsigned int  DAT_01b7b39c;
extern float         DAT_01b7b3a0[];  // half-float exponent table: [0..31] = 2^(e-15), [32..63] negated

// Imports (d3dx9).
extern "C" float *__stdcall D3DXVec3TransformNormal(float *out, const float *v, const float *m);
// CRT.
extern "C" double __cdecl sqrt(double x);
extern "C" double __cdecl fabs(double x);
// Win32 / intrinsics.
extern "C" __declspec(dllimport) long __stdcall InterlockedIncrement(long volatile *addend);
extern "C" long __cdecl _InterlockedCompareExchange(long volatile *destination, long exchange, long comparand);
#pragma intrinsic(_InterlockedCompareExchange)

namespace cObjReadManager_p2 {

// Callees whose generated prototype does not match the argument list recovered at the call site
// are invoked through call<Signature>(fn)(args...), which passes exactly the arguments seen in
// the raw decompilation. "ECX: ?" marks calls whose register argument was not recovered.
// Functions that are (re)defined with a different parameter list in this file are addressed by
// their address instead of their (overloaded) name.
template <class Sig, class Fn> inline Sig call(Fn *fn) { return (Sig)(void *)fn; }
template <class Sig> inline Sig callAt(unsigned int address) { return (Sig)(void *)address; }

// cXmlBinary helpers the generated header mis-declares as constructors; called as plain
// functions with the xml object as first stack argument in the raw decompilation.
const unsigned int XML_READ_CLOTH_HEADER     = 0x009FFAE0;  // cXmlBinary::cXmlBinary_19 (xml, header*)
const unsigned int XML_READ_CLOTH_NODES      = 0x009FFB90;  // cXmlBinary::cXmlBinary_21 (xml, buf, count)
const unsigned int XML_READ_CLOTH_EXTRA      = 0x009FFCA0;  // cXmlBinary::cXmlBinary_22 (xml, buf, count)
const unsigned int XML_READ_CLOTH_COLLISIONS = 0x009FCBD0;  // cXmlBinary::cXmlBinary_31 (xml, buf, count)
const unsigned int XML_COUNT_CLOTH_COLLISIONS = 0x009FCB40; // cXmlBinary::cXmlBinary_32 (xml)
const unsigned int XML_COUNT_CLOTH_EXTRA     = 0x009FCD20;  // cXmlBinary::cXmlBinary_33 (xml)
const unsigned int ESP_CONTROLER_CTOR        = 0x00EAA060;  // cEspControler::cEspControler()
const unsigned int ADDR_FUN_00a039e0         = 0x00A039E0;
const unsigned int ADDR_FUN_00a06de0         = 0x00A06DE0;  // defined in part 3
const unsigned int ADDR_FUN_00a06ec0         = 0x00A06EC0;  // defined in part 3

// One node of a cloth chain (array at cloth[7], 0x100 bytes each); same layout as part 1.
struct ClothNode {
    unsigned short no;          // +0x00
    short          parentNo;    // +0x02  0xFFF = root
    unsigned short unk04;       // +0x04  0xFFF = none (else: reference bone for the rest offset)
    unsigned short linkNo;      // +0x06  0xFFF = none; bit 0x8000: take the link's own links
    unsigned short flags08;     // +0x08  low 12 bits: side node (0xFFF = none)
    unsigned short fixNo;       // +0x0A  0xFFF or bit 0x2000 = free node, otherwise pinned
    float          lenScaleA;   // +0x0C
    float          lenScaleB;   // +0x10
    float          restLength;  // +0x14
    float          restLength2; // +0x18
    float          angle1C;     // +0x1C  initial angle, +5 degrees per node
    float          localOffset[4]; // +0x20
    float          localAxis[4];   // +0x30
    float          velocity[4];    // +0x40
    float          pos[4];         // +0x50
    float          prevPos[4];     // +0x60
    float          animPos[4];     // +0x70
    float          fixedPos[4];    // +0x80
    float          bonePos[4];     // +0x90
    float          correction[4];  // +0xA0
    float         *parent;      // +0xB0
    float         *child;       // +0xB4
    float         *linkB8;      // +0xB8
    float         *linkBC;      // +0xBC
    float         *sideC0;      // +0xC0
    float         *sideC4;      // +0xC4
    float          weight;      // +0xC8
    unsigned int   unkCC;       // +0xCC  1.0f, 0.5f when linked
    float          angleLimit;  // +0xD0
    unsigned int   pinned;      // +0xD4
    unsigned int   hasLink;     // +0xD8
    unsigned int   unkDC;       // +0xDC
    unsigned int   unkE0;       // +0xE0
    unsigned int   unkE4;       // +0xE4
    float          linkSide;    // +0xE8
    unsigned int   unkEC;       // +0xEC
    int            bone;        // +0xF0  bone object: matrix at +0x10, translation at +0x40
    int            fixBone;     // +0xF4
    float          velocityScale; // +0xF8
    unsigned int   blend;       // +0xFC
};
typedef char ClothNodeSizeCheck[sizeof(ClothNode) == 0x100 ? 1 : -1];

// Node record as stored in the cloth file (0x20 bytes).
struct ClothNodeSrc {
    unsigned short no, parentNo, unk04, linkNo, flags08, fixNo;  // +0x00..+0x0A
    unsigned int   angleLimit;  // +0x0C
    unsigned int   offset[3];   // +0x10  float bits
    unsigned int   blend;       // +0x1C
};
typedef char ClothNodeSrcSizeCheck[sizeof(ClothNodeSrc) == 0x20 ? 1 : -1];

// Header of the cloth file as read by XML_READ_CLOTH_HEADER (0x70 bytes, raw dwords).
struct ClothHeader {
    int            nodeCount;   // +0x00
    unsigned int   u04, u08, u0C;
    unsigned short s10, s12;
    unsigned int   u14, u18, u1C, u20, u24, u28, u2C, u30, u34, u38, u3C, u40, u44, u48, u4C,
                   u50, u54, u58, u5C, u60, u64, u68, u6C;
};
typedef char ClothHeaderSizeCheck[sizeof(ClothHeader) == 0x70 ? 1 : -1];

inline ClothNode *clothNode(int *cloth, int byteOffset) { return (ClothNode *)(cloth[7] + byteOffset); }
inline unsigned int &bits(float &f) { return *(unsigned int *)&f; }
inline unsigned int &u32(int base, int offset) { return *(unsigned int *)(base + offset); }
inline unsigned short &u16(int base, int offset) { return *(unsigned short *)(base + offset); }
inline float absf(float v) { return (float)fabs(v); }

// Copies `count` dwords bit for bit, in order.
inline void copyDwords(void *dst, const void *src, int count)
{
    for (int i = 0; i < count; i++) ((unsigned int *)dst)[i] = ((const unsigned int *)src)[i];
}

inline unsigned int rotl(unsigned int v, int n) { return (v << n) | (v >> (32 - n)); }

// Jacobi rotation of the pair (x, y) with sine s and tau = s / (1 + cos).
inline void rotate(float *x, float *y, float s, float tau)
{
    float g = *x;
    float h = *y;
    *x = g - (g * tau + h) * s;
    *y = (g - h * tau) * s + h;
}

}  // namespace cObjReadManager_p2

// 00A039E0  FUN_00a039e0  size=1778  [between]
// Builds the cloth node array (cloth[7], allocated by FUN_009ffa00) from `count` file records at
// `nodeData`, then links parents, links and side nodes. model = owner model (bones are looked up
// with FUN_00a12210). Returns 1 on success, 0 when a bone is missing or allocation failed.
undefined4 FUN_00a039e0(int *cloth, int model, undefined4 rootBone, int nodeData, uint count,
                        undefined4 linkedWeight)
{
    using namespace cObjReadManager_p2;
    float angle;                // local_80
    float childPos[4];          // local_70..local_64
    float parentPos[4];         // local_60..local_54
    float refPos[4];            // local_50..local_44
    float selfPos[4];           // local_40..local_34
    float linkPos[4];           // fStack_30..
    float ownPos[4];            // fStack_20..local_14 (ownPos[3] is local_14, read uninitialized)
    float d0, d1, d2, d3;

    if (nodeData == 0) {
        return 0;
    }
    if (FUN_009ffa00((int)count, (int)DAT_01b7bd48) == 0) {
        call<void (*)(void *)>(FUN_00dd5650)(DAT_0165c40c);
        return 0;
    }

    // Copy the file records and compute each node's rest offset and axis.
    angle = 0.0f;
    const ClothNodeSrc *src = (const ClothNodeSrc *)nodeData;
    for (unsigned int i = 0; i < count; i++, src++) {
        ClothNode *node = clothNode(cloth, i * 0x100);
        node->no = src->no;
        node->parentNo = (short)src->parentNo;
        node->unk04 = src->unk04;
        node->linkNo = src->linkNo;
        node->flags08 = src->flags08;
        node->fixNo = src->fixNo;
        bits(node->angleLimit) = src->angleLimit;
        bits(node->localOffset[0]) = src->offset[0];  // raw: (float) load of the file dword
        bits(node->localOffset[1]) = src->offset[1];
        bits(node->localOffset[2]) = src->offset[2];
        bits(node->localOffset[3]) = 0x3F800000;      // 1.0f
        node->bone = 0;
        node->fixBone = 0;
        node->pinned = 0;
        node->hasLink = 0;
        node->unkE0 = 0x3F800000;                     // 1.0f
        node->unkE4 = 0;
        bits(node->linkSide) = 0;
        node->unkEC = bits(ownPos[3]);
        node->blend = src->blend;
        int bone = call<int (*)(unsigned int)>(FUN_00a12210)(node->no); /* ECX: ? */
        if (bone == 0) {
            return 0;
        }
        node->bone = bone;
        if (node->unk04 == 0xFFF) {
            if ((unsigned short)node->parentNo != 0xFFF) {
                if (call<int (*)(unsigned int)>(FUN_00a12210)((unsigned short)node->parentNo) == 0) { /* ECX: ? */
                    return 0;
                }
                if (*(int *)(model + 0x330) != 0) {
                    undefined4 index = callAt<undefined4 (*)(unsigned int)>(ADDR_FUN_00a06de0)(
                        (unsigned short)node->parentNo); /* ECX: ? */
                    callAt<void (*)(float *, undefined4)>(ADDR_FUN_00a06ec0)(parentPos, index); /* ECX: ? */
                }
                if (*(int *)(model + 0x330) != 0) {
                    undefined4 index = callAt<undefined4 (*)(unsigned int)>(ADDR_FUN_00a06de0)(node->no); /* ECX: ? */
                    callAt<void (*)(float *, undefined4)>(ADDR_FUN_00a06ec0)(childPos, index); /* ECX: ? */
                }
                d0 = childPos[0] - parentPos[0];
                d1 = childPos[1] - parentPos[1];
                d2 = childPos[2] - parentPos[2];
                d3 = childPos[3] - parentPos[3];
                node->localOffset[0] = d0;
                node->localOffset[1] = d1;
                node->localOffset[2] = d2;
                node->localOffset[3] = d3;
            }
        }
        else {
            if (call<int (*)(unsigned int)>(FUN_00a12210)(node->unk04) == 0) { /* ECX: ? */
                return 0;
            }
            if (*(int *)(model + 0x330) != 0) {
                undefined4 index = callAt<undefined4 (*)(unsigned int)>(ADDR_FUN_00a06de0)(node->no); /* ECX: ? */
                callAt<void (*)(float *, undefined4)>(ADDR_FUN_00a06ec0)(selfPos, index); /* ECX: ? */
            }
            if (*(int *)(model + 0x330) != 0) {
                undefined4 index = callAt<undefined4 (*)(unsigned int)>(ADDR_FUN_00a06de0)(node->unk04); /* ECX: ? */
                callAt<void (*)(float *, undefined4)>(ADDR_FUN_00a06ec0)(refPos, index); /* ECX: ? */
            }
            d0 = refPos[0] - selfPos[0];
            d1 = refPos[1] - selfPos[1];
            d2 = refPos[2] - selfPos[2];
            d3 = refPos[3] - selfPos[3];
            node->localOffset[0] = d0;
            node->localOffset[1] = d1;
            node->localOffset[2] = d2;
            node->localOffset[3] = d3;
        }
        node->angle1C = angle;
        angle = (float)call<float10 (*)(float)>(FUN_00ddba30)(angle + 0.08726646);  // + 5 degrees, wrapped
        float *offset = node->localOffset;
        float lenSq = offset[0] * offset[0];
        if (offset[1] * offset[1] + lenSq + offset[2] * offset[2] <= 0.0) {
            node->localAxis[0] = 0.0f;
            bits(node->localAxis[1]) = 0x3F800000;    // 1.0f
            node->localAxis[2] = 0.0f;
            bits(node->localAxis[3]) = bits(ownPos[3]);
        }
        else {
            lenSq = offset[2] * offset[2] + offset[1] * offset[1] + lenSq;
            if ((lenSq < 0.0) == (lenSq == 0.0)) {
                FUN_00ddf460(node->localAxis, offset);  // normalize
            }
            else {
                call<void (*)(void *)>(FUN_00dd5650)(DAT_0163d0ac);
                node->localAxis[0] = 0.0f;
                bits(node->localAxis[1]) = 0x3F800000;
                node->localAxis[2] = 0.0f;
            }
        }
        node->parent = node->bonePos;
        node->child = 0;
        node->sideC0 = 0;
        node->sideC4 = 0;
        node->lenScaleA = (float)sqrt(offset[1] * offset[1] + offset[0] * offset[0] + offset[2] * offset[2]);
        // Initial position = bone matrix * rest offset.
        D3DXVec3TransformNormal(node->pos, offset, (float *)(bone + 0x10));
        node->pos[0] = node->pos[0] + *(float *)(bone + 0x40);
        node->pos[1] = *(float *)(bone + 0x44) + node->pos[1];
        node->pos[2] = *(float *)(bone + 0x48) + node->pos[2];
        node->prevPos[0] = node->pos[0];
        copyDwords(&node->prevPos[1], &node->pos[1], 3);
        bits(node->velocity[0]) = 0;
        bits(node->velocity[1]) = 0;
        bits(node->velocity[2]) = 0;
        bits(node->velocity[3]) = bits(ownPos[3]);
        if (node->fixNo != 0xFFF) {
            node->fixBone = call<int (*)(unsigned int)>(FUN_00a12210)(node->fixNo & 0xFFF); /* ECX: ? */
        }
    }

    // Parent links: parent = parent's position, linkB8 = parent's correction.
    for (unsigned int i = 0; i < count; i++) {
        int nodeAddr = cloth[7] + i * 0x100;
        ClothNode *node = (ClothNode *)nodeAddr;
        bits(node->weight) = 0x3F800000;              // 1.0f
        if (node->parentNo != 0xFFF) {
            for (unsigned int j = 0; j < count; j++) {
                short *other = (short *)(cloth[7] + j * 0x100);
                if (i != j && node->parentNo == *other) {
                    bits(node->weight) = linkedWeight;
                    node->parent = ((ClothNode *)other)->pos;
                    node->linkB8 = ((ClothNode *)other)->correction;
                    break;
                }
            }
        }
    }

    // Links (linkNo): child/linkBC point at the linked node (or at its own links with 0x8000).
    for (unsigned int i = 0; i < count; i++) {
        ClothNode *node = clothNode(cloth, i * 0x100);
        node->unkCC = 0x3F800000;                     // 1.0f
        if ((node->linkNo & 0xFFF) != 0xFFF) {
            if (call<int (*)(unsigned int)>(FUN_00a12210)(node->no) == 0) { /* ECX: ? */
                return 0;
            }
            for (unsigned int j = 0; j < count; j++) {
                ClothNode *other = clothNode(cloth, j * 0x100);
                if (i != j && (node->linkNo & 0xFFF) == other->no) {
                    float *linkBC;
                    if ((node->linkNo & 0x8000) == 0) {
                        node->child = other->pos;
                        linkBC = other->correction;
                    }
                    else {
                        node->child = other->parent;
                        linkBC = other->linkB8;
                    }
                    node->linkBC = linkBC;
                    if (call<int (*)(unsigned int)>(FUN_00a12210)(other->no) == 0) { /* ECX: ? */
                        return 0;
                    }
                    if (*(int *)(model + 0x330) != 0) {
                        undefined4 index = callAt<undefined4 (*)(unsigned int)>(ADDR_FUN_00a06de0)(node->no); /* ECX: ? */
                        callAt<void (*)(float *, undefined4)>(ADDR_FUN_00a06ec0)(ownPos, index); /* ECX: ? */
                    }
                    if (*(int *)(model + 0x330) != 0) {
                        undefined4 index = callAt<undefined4 (*)(unsigned int)>(ADDR_FUN_00a06de0)(node->linkNo); /* ECX: ? */
                        callAt<void (*)(float *, undefined4)>(ADDR_FUN_00a06ec0)(linkPos, index); /* ECX: ? */
                    }
                    node->lenScaleB = (float)sqrt((linkPos[0] - ownPos[0]) * (linkPos[0] - ownPos[0]) +
                                                  (linkPos[1] - ownPos[1]) * (linkPos[1] - ownPos[1]) +
                                                  (linkPos[2] - ownPos[2]) * (linkPos[2] - ownPos[2]));
                    node->unkCC = 0x3F000000;         // 0.5f
                    break;
                }
            }
        }
    }

    // Side nodes (flags08 & 0xFFF): sideC0 = side node's parent, sideC4 = its position.
    for (unsigned int i = 0; i < count; i++) {
        ClothNode *node = clothNode(cloth, i * 0x100);
        if ((node->flags08 & 0xFFF) != 0xFFF) {
            if (call<int (*)(unsigned int)>(FUN_00a12210)(node->no) == 0) { /* ECX: ? */
                return 0;
            }
            for (unsigned int j = 0; j < count; j++) {
                ClothNode *other = clothNode(cloth, j * 0x100);
                if (i != j && (node->flags08 & 0xFFF) == other->no) {
                    node->sideC0 = other->parent;
                    node->sideC4 = other->pos;
                    break;
                }
            }
        }
    }
    cloth[0x2bd] = rootBone;
    cloth[0x2be] = rootBone;
    cloth[8] = nodeData;
    cloth[700] = model;
    cloth[0] = 1;
    return 1;
}

// 00A040E0  FUN_00a040e0  size=321  [between]
// Copies `count` collision spheres (0x24-byte file records at `data`) into the 0x40-byte array at
// cloth+0x28 (allocated by FUN_009ffa70). On a missing bone the array is freed and 0 returned.
undefined4 FUN_00a040e0(int cloth, undefined4 owner, int data, uint count)
{
    using namespace cObjReadManager_p2;
    unsigned int unsetW;  // local_14, read uninitialized

    if (FUN_009ffa70((int)count, (int)DAT_01b7bd48) == 0) {
        call<void (*)(void *)>(FUN_00dd5650)(DAT_0165c430);
        return 0;
    }
    if (data != 0) {
        int offset = 0;
        int src = data;
        for (unsigned int i = 0; i < count; i++) {
            int dst = *(int *)(cloth + 0x28) + offset;
            u16(dst, 0) = u16(src, 0);           // bone A
            u16(dst, 2) = u16(src, 2);           // bone B
            u32(dst, 0x04) = u32(src, 0x04);
            u32(dst, 0x08) = u32(src, 0x08);
            u32(dst, 0x10) = u32(src, 0x0C);
            u32(dst, 0x14) = u32(src, 0x10);
            u32(dst, 0x18) = u32(src, 0x14);
            u32(dst, 0x1C) = 0x3F800000;         // 1.0f
            u32(dst, 0x20) = u32(src, 0x18);
            u32(dst, 0x24) = u32(src, 0x1C);
            u32(dst, 0x28) = u32(src, 0x20);
            u32(dst, 0x2C) = 0x3F800000;         // 1.0f
            u32(dst, 0x30) = 0;
            u32(dst, 0x34) = 0;
            u32(dst, 0x38) = 0;
            u32(dst, 0x3C) = unsetW;
            if (call<int (*)(unsigned int)>(FUN_00a12210)(u16(dst, 0)) == 0 ||  /* ECX: ? */
                call<int (*)(unsigned int)>(FUN_00a12210)(u16(dst, 2)) == 0) {  /* ECX: ? */
                goto fail;
            }
            offset = offset + 0x40;
            src = src + 0x24;
        }
        *(undefined4 *)(cloth + 0xafc) = owner;
        return 1;
    }
fail:
    if (*(int *)(cloth + 0x28) != 0) {
        *(int *)(cloth + 0x24) = 0;
        if (*(int *)(cloth + 0x28) != 0) {
            FUN_00dd48d0(*(int *)(cloth + 0x28), 0);
            *(int *)(cloth + 0x28) = 0;
        }
    }
    return 0;
}

// 00A04230  FUN_00a04230  size=486  [between]
// Loads a cloth description from `xml`: copies the header parameters into cloth+0xB04..+0xBD0,
// reads the node records into a temporary buffer and builds the nodes with FUN_00a039e0.
undefined4 FUN_00a04230(int cloth, int xml, undefined4 model, undefined4 rootBone, undefined4 linkedWeight)
{
    using namespace cObjReadManager_p2;
    ClothHeader header;

    if (xml != 0) {
        call<void (*)()>(FUN_009fac50)(); /* ECX: ? */
        if (callAt<int (*)(int, ClothHeader *)>(XML_READ_CLOTH_HEADER)(xml, &header) != 0) {
            u32(cloth, 0xb04) = header.u04;
            u32(cloth, 0xb08) = header.u08;
            u16(cloth, 0xb10) = header.s10;
            u16(cloth, 0xb12) = header.s12;
            u32(cloth, 0xb0c) = header.u0C;
            u32(cloth, 0xb18) = header.u14;
            u32(cloth, 0xb30) = header.u18;
            u32(cloth, 0xb34) = header.u1C;
            u32(cloth, 0xb38) = header.u20;
            u32(cloth, 0xb3c) = 0x3F800000;      // 1.0f
            u32(cloth, 0xb40) = header.u24;
            u32(cloth, 0xb44) = header.u28;
            u32(cloth, 0xb50) = header.u2C;
            u32(cloth, 0xb54) = header.u30;
            u32(cloth, 0xb58) = header.u34;
            u32(cloth, 0xb5c) = 0x3F800000;      // 1.0f
            u32(cloth, 0xb60) = header.u38;
            u32(cloth, 0xb70) = header.u3C;
            u32(cloth, 0xb74) = header.u40;
            u32(cloth, 0xb78) = header.u44;
            u32(cloth, 0xb7c) = 0x3F800000;      // 1.0f
            u32(cloth, 0xbd0) = header.u54;
            u32(cloth, 0xb80) = header.u48;
            u32(cloth, 0xbb4) = header.u60;
            u32(cloth, 0xb84) = header.u4C;
            u32(cloth, 0xbb0) = header.u5C;
            u32(cloth, 0xb94) = header.u50;
            u32(cloth, 0xbcc) = header.u58;
            u32(cloth, 0xba0) = header.u6C;
            u32(cloth, 0xbbc) = header.u68;
            u32(cloth, 0xbb8) = header.u64;
            int nodes = call<int (*)(int, int, int, int)>(FUN_00dd29b0)(header.nodeCount << 5, 0x10, 0, 0);
            if (nodes != 0) {
                if (callAt<int (*)(int, int, int)>(XML_READ_CLOTH_NODES)(xml, nodes, header.nodeCount) != 0) {
                    if (callAt<int (*)(undefined4, undefined4, int, int, undefined4)>(ADDR_FUN_00a039e0)(
                            model, rootBone, nodes, header.nodeCount, linkedWeight) == 0) { /* ECX: ? */
                        call<void (*)()>(FUN_009fc5e0)(); /* ECX: ? */
                    }
                }
                FUN_00dd48d0(nodes, 0);
            }
            return 1;
        }
    }
    return 0;
}

// 00A04420  FUN_00a04420  size=102  [between]
// Reads the collision spheres of a cloth description into a temporary buffer and installs them
// with FUN_00a040e0.
void FUN_00a04420(int xml, undefined4 owner)
{
    using namespace cObjReadManager_p2;
    int count;
    int buffer;

    if (xml != 0 && (count = callAt<int (*)(int)>(XML_COUNT_CLOTH_COLLISIONS)(xml), count != 0) &&
        (buffer = call<int (*)(int, int, int, int)>(FUN_00dd29b0)(count * 0x24, 0x10, 0, 0), buffer != 0)) {
        if (callAt<int (*)(int, int, int)>(XML_READ_CLOTH_COLLISIONS)(xml, buffer, count) != 0) {
            call<undefined4 (*)(undefined4, int, int)>(FUN_00a040e0)(owner, buffer, count); /* ECX: ? */
        }
        FUN_00dd48d0(buffer, 0);
    }
}

// 00A04490  FUN_00a04490  size=104  [between]
// Same for the 0x44-byte records installed by FUN_009fbb20.
void FUN_00a04490(int xml, undefined4 owner)
{
    using namespace cObjReadManager_p2;
    int count;
    int buffer;

    if (xml != 0 && (count = callAt<int (*)(int)>(XML_COUNT_CLOTH_EXTRA)(xml), count != 0) &&
        (buffer = call<int (*)(int, int, int, int)>(FUN_00dd29b0)(count * 0x44, 0x10, 0, 0), buffer != 0)) {
        if (callAt<int (*)(int, int, int)>(XML_READ_CLOTH_EXTRA)(xml, buffer, count) != 0) {
            call<undefined4 (*)(undefined4, int, int)>(FUN_009fbb20)(owner, buffer, count); /* ECX: ? */
        }
        FUN_00dd48d0(buffer, 0);
    }
}

// 00A04500  FUN_00a04500  size=364  [between]
// Creates the effect controller (cEspControler, +0x4DC) of an object whose effect id is at
// +0x4B0 (0x7C0000 means none) and loads its effect set.
undefined4 __fastcall FUN_00a04500(int obj)
{
    using namespace cObjReadManager_p2;
    char variant;
    char flag;
    char name[16];
    unsigned char work[284];

    unsigned int effectId = *(unsigned int *)(obj + 0x4b0);
    if (effectId == 0x7c0000) {
        effectId = 0;
    }
    else if (effectId < 0x10000 || effectId + 0xe0000000 < 0x100000) {
        call<void (*)(void *, unsigned int)>(FUN_00dd5650)(DAT_0163e20c, effectId);
    }
    variant = '\0';
    if (*(int *)(obj + 0x490) != 0) {
        flag = '\0';
        call<int (*)(int, char *)>(FUN_009f9f80)(0xc4, &flag); /* ECX: ? */
        if (flag != '\0') {
            return 0;
        }
        if (call<int (*)(int, char *)>(FUN_009fa070)(0xa0, &flag) != 0 && /* ECX: ? */
            (variant = flag, flag != '\0')) {
            variant = flag + '1';
        }
    }
    if (call<int (*)(unsigned int, char)>(thunk_FUN_00e00f00)(effectId, variant) != 0) {
        if (*(int *)(obj + 0x4dc) == 0) {
            int controller = call<int (*)(int, void *)>(FUN_00dd3500)(0xb0, DAT_01b7bd48);
            if (controller == 0) {
                controller = 0;
            }
            else {
                controller = callAt<int (*)()>(ESP_CONTROLER_CTOR)(); /* ECX: ? (the block just allocated) */
            }
            *(int *)(obj + 0x4dc) = controller;
            if (controller == 0 &&
                FUN_009f8ea0(name, 0x10, *(unsigned int *)(obj + 0x4b0), 0) != 0) {
                call<void (*)(void *, char *)>(FUN_00dd5650)(DAT_0165c458, name);
            }
            call<void (*)()>(FUN_00e01ca0)(); /* ECX: ? */
            call<void (*)(int)>(FUN_00dffb20)(*(int *)(obj + 0x4dc)); /* ECX: ? */
            return call<undefined4 (*)(undefined4, char, unsigned char *)>(FUN_00e028c0)(
                *(undefined4 *)(obj + 0x4f0), variant, work);
        }
        if (FUN_009f8ea0(name, 0x10, *(unsigned int *)(obj + 0x4b0), 0) != 0) {
            call<void (*)(void *, char *)>(FUN_00dd5650)(DAT_0165c49c, name);
        }
    }
    return 0;
}

// 00A04670  cObjReadManager::updateHookLoading  size=86  [class]
// Polls the armed load hook once per frame; releases it when the files are resident or after
// 300 frames (with a timeout message).
void cObjReadManager::updateHookLoading()
{
    using namespace cObjReadManager_p2;

    if (hookId() != 0xFFFFFFFF) {
        hookWaitFrames() = hookWaitFrames() + 1;
        if (FUN_00a00ca0(hookId(), hookParam()) != 0 || 300 < hookWaitFrames()) {
            if (300 < hookWaitFrames()) {
                call<void (*)(const char *, unsigned int)>(FUN_00dd5650)(
                    "cObjReadManager::updateHookLoading ID:%08X DATA IS TIMEOUT", hookId());
            }
            hookId() = 0xFFFFFFFF;
            call<void (*)(int)>(FUN_00e9c110)(1); /* ECX: ? */
            FUN_00a4a6d0();
            return;
        }
    }
}

// 00A04770  FUN_00a04770  size=35  [callgraph]
void FUN_00a04770(void)
{
    using namespace cObjReadManager_p2;
    call<void (*)()>(FUN_00fa5be0)();          /* ECX: ? */
    call<void (*)()>(thunk_FUN_00fa45a0)();    /* ECX: ? */
    call<void (*)()>(thunk_FUN_00fa45a0)();    /* ECX: ? */
    call<void (*)()>(thunk_FUN_00fa45a0)();    /* ECX: ? */
}

// 00A047A0  FUN_00a047a0  size=36  [callgraph]
undefined4 __fastcall FUN_00a047a0(undefined4 self)
{
    using namespace cObjReadManager_p2;
    call<void (*)()>(FUN_00f9c880)();          /* ECX: ? */
    call<void (*)()>(FUN_00f9c880)();          /* ECX: ? */
    call<void (*)()>(FUN_00f9c880)();          /* ECX: ? */
    call<void (*)()>(FUN_00f9c7b0)();          /* ECX: ? */
    return self;
}

// 00A04840  FUN_00a04840  size=148  [callgraph]
// Vertex data of submesh `index`: out[0] / out[1] = addresses of vertex `first` in the two vertex
// streams of its mesh (strides = bytes +0x10 / +0x11), 0 for an absent stream. Fails when the
// range [first, first + count) does not fit.
undefined4 FUN_00a04840(int *self, int *out, int index, int first, int count)
{
    if (self[2] == 0 || index < 0 || self[3] <= index) {
        return 0;
    }
    int *submesh = (int *)(self[2] + index * 0x14);
    first = submesh[1] + first;
    int *mesh = (int *)(submesh[0] * 0xb0 + 0x98 + self[0]);
    if (mesh[2] < count + first) {
        return 0;
    }
    if (mesh[0] == 0) {
        out[0] = 0;
    }
    else {
        out[0] = (uint)*(byte *)(self + 4) * first + mesh[0];
    }
    if (mesh[1] == 0) {
        out[1] = 0;
        return 1;
    }
    out[1] = (uint)*(byte *)((int)self + 0x11) * first + mesh[1];
    return 1;
}

// 00A048E0  FUN_00a048e0  size=86  [callgraph]
// Index data of submesh `index`: *out = address of index `first` (16-bit indices).
undefined4 FUN_00a048e0(int *self, int *out, int index, int first, int count)
{
    if (self[2] != 0 && -1 < index && index < self[3]) {
        int *submesh = (int *)(self[2] + index * 0x14);
        first = submesh[2] + first;
        int mesh = submesh[0] * 0xb0 + 0x98 + self[0];
        if (count + first <= *(int *)(mesh + 0x10)) {
            *out = *(int *)(mesh + 0xc) + first * 2;
            return 1;
        }
    }
    return 0;
}

// 00A04940  FUN_00a04940  size=71  [callgraph]
// Copies the 0x14-byte submesh record `index`.
undefined4 FUN_00a04940(int self, undefined4 *out, int index)
{
    if (*(int *)(self + 8) != 0 && -1 < index && index < *(int *)(self + 0xc)) {
        undefined4 *submesh = (undefined4 *)(*(int *)(self + 8) + index * 0x14);
        out[0] = submesh[0];
        out[1] = submesh[1];
        out[2] = submesh[2];
        out[3] = submesh[3];
        out[4] = submesh[4];
        return 1;
    }
    return 0;
}

// 00A04990  FUN_00a04990  size=19  [callgraph]
undefined4 FUN_00a04990(int self, undefined2 *out)
{
    *out = *(undefined2 *)(self + 0x10);
    return 1;
}

// 00A049F0  FUN_00a049f0  size=4  [callgraph]
undefined4 __fastcall FUN_00a049f0(int self)
{
    return *(undefined4 *)(self + 0xc);
}

// 00A04A00  FUN_00a04a00  size=4  [callgraph]
undefined4 __fastcall FUN_00a04a00(int self)
{
    return *(undefined4 *)(self + 0x14);
}

// 00A04A40  FUN_00a04a40  size=196  [callgraph]
// Fills a vertex element descriptor {flag, format pair, usage} for element `flag` when it is
// present in `mask`. Returns 0 when absent or unknown.
undefined4 FUN_00a04a40(uint *out, uint mask, uint flag)
{
    int format;
    int usage;

    if ((flag & mask) == 0) {
        return 0;
    }
    if (flag < 0x31) {
        if (flag == 0x30) {
            format = 8;
            usage = 3;
        }
        else if (flag == 1) {
            format = 0;
            usage = 0;
        }
        else if (flag == 2) {
            format = 1;
            usage = format;
        }
        else {
            if (flag != 4) {
                return 0;
            }
            format = 2;
            usage = format;
        }
    }
    else if (flag == 0x100) {
        format = 3;
        usage = 4;
    }
    else {
        if (flag == 0x200) {
            usage = 5;
            format = ((mask & 0x30) != 0) + 4;
        }
        else {
            if (flag != 0x10000) {
                return 0;
            }
            usage = 6;
            format = ((mask & 0x30) != 0) + 6;
        }
        if (format == -1) {
            return 0;
        }
    }
    out[1] = DAT_0165c500[format * 2];
    out[2] = DAT_0165c504[format * 2];
    uint usageValue = DAT_0189eeb8[usage];
    out[0] = flag;
    out[3] = usageValue;
    return 1;
}

// 00A04B10  FUN_00a04b10  size=238  [callgraph]
// Builds the vertex element list (0x10-byte entries, count at +0x70) of `list` for every flag of
// DAT_0165c548 present in `mask` (same mapping as FUN_00a04a40).
void FUN_00a04b10(uint list, uint mask)
{
    int base = list;
    int format;
    int usage;

    *(undefined4 *)(base + 0x70) = 0;
    for (unsigned int i = 0; i < 7; i++) {
        uint flag = DAT_0165c548[i];
        uint *entry = (uint *)(*(int *)(base + 0x70) * 0x10 + base);
        if ((mask & flag) == 0) {
            continue;
        }
        if (flag < 0x31) {
            if (flag == 0x30) {
                format = 8;
                usage = 3;
            }
            else if (flag == 1) {
                format = 0;
                usage = 0;
            }
            else if (flag == 2) {
                format = 1;
                usage = 1;
            }
            else {
                if (flag != 4) continue;
                format = 2;
                usage = 2;
            }
        }
        else if (flag == 0x100) {
            format = 3;
            usage = 4;
        }
        else {
            if (flag == 0x200) {
                usage = 5;
                format = ((mask & 0x30) != 0) + 4;
            }
            else {
                if (flag != 0x10000) continue;
                usage = 6;
                format = ((mask & 0x30) != 0) + 6;
            }
            if (format == -1) continue;
        }
        entry[1] = DAT_0165c500[format * 2];
        entry[2] = DAT_0165c504[format * 2];
        entry[3] = DAT_0189eeb8[usage];
        entry[0] = flag;
        *(int *)(base + 0x70) = *(int *)(base + 0x70) + 1;
    }
}

// 00A04E50  FUN_00a04e50  size=23  [callgraph]
void __fastcall FUN_00a04e50(undefined4 *self)
{
    self[0] = 0;
    self[1] = 0;
    self[3] = 0;
    self[2] = 0;
    self[4] = 0;
    self[5] = 0;
    self[6] = 0;
}

// 00A04E70  FUN_00a04e70  size=1  [callgraph]
void FUN_00a04e70(void)
{
}

// 00A04EE0  FUN_00a04ee0  size=11  [callgraph]
void FUN_00a04ee0(void)
{
    DAT_01b7b39c = 0;
}

// 00A04EF0  FUN_00a04ef0  size=11  [callgraph]
void FUN_00a04ef0(void)
{
    DAT_01b7b39c = 0;
}

// 00A04F60  FUN_00a04f60  size=521  [callgraph]
// Fills the half-float exponent table: DAT_01b7b3a0[e] = 2^(e - 15) for e = 0..31 and
// DAT_01b7b3a0[32 + e] = -DAT_01b7b3a0[e]. The raw loop is unrolled 8 times; `bit` is the
// rotating one-bit register of the raw code (rotl(1, e)), rotl(bit, 17) = 2^(e - 15) for e >= 15.
void FUN_00a04f60(void)
{
    using namespace cObjReadManager_p2;
    float *table = DAT_01b7b3a0;
    unsigned int bit = 1;

    for (unsigned int e = 0; e < 32; e++) {
        float value;
        if (e < 0xf) {
            value = 1.0f / (float)(1 << ((unsigned char)(15 - e) & 0x1f));
        }
        else {
            value = (float)(int)rotl(bit, 17);
        }
        table[e] = value;
        table[e + 0x20] = table[e] * -1.0f;
        bit = rotl(bit, 1);
    }
}

// 00A05170  FUN_00a05170  size=60  [callgraph]
// Half float -> float (denormals flush to 0).
float10 FUN_00a05170(ushort half)
{
    if (((half >> 10) & 0x1f) == 0) {
        return (float10)0;
    }
    return (float10)(ushort)((half & 0x3ff) + 0x400) * (float10)0.0009765625 *
           (float10)DAT_01b7b3a0[(uint)(half >> 0xf) * 0x20 + ((half >> 10) & 0x1f)];
}

// 00A05210  FUN_00a05210  size=895  [callgraph]
// Covariance matrix (3x3, row major into out[0..8]) of `count` points (float4, stride 0x10).
// Summation order follows the 4x unrolled loops of the original.
void FUN_00a05210(float *out, int points, int count)
{
    float sumX, sumY, sumZ;
    float cxx, cyy, czz, cxy, cxz, cyz;
    float *p;
    int blocks;
    int done;

    sumX = 0.0f;
    done = 0;
    sumY = 0.0f;
    if (count < 4) {
        sumZ = 0.0f;
        sumX = 0.0f;
    }
    else {
        blocks = (int)(((count - 4U) >> 2) + 1);
        done = blocks * 4;
        p = (float *)(points + 0x18);
        sumY = sumX;
        sumZ = sumX;
        do {
            blocks = blocks - 1;
            sumX = p[6] + p[2] + p[-2] + p[-6] + sumX;
            sumY = p[7] + p[3] + p[-1] + p[-5] + sumY;
            sumZ = p[-4] + sumZ + *p + p[4] + p[8];
            p = p + 0x10;
        } while (blocks != 0);
    }
    cxx = 0.0f;
    if (done < count) {
        blocks = count - done;
        p = (float *)(done * 0x10 + points + 8);
        do {
            blocks = blocks - 1;
            sumX = p[-2] + sumX;
            sumY = p[-1] + sumY;
            sumZ = sumZ + *p;
            p = p + 4;
        } while (blocks != 0);
    }
    done = 0;
    float invCount = 1.0f / (float)count;
    float meanX = invCount * sumX;
    float meanY = invCount * sumY;
    float meanZ = invCount * sumZ;
    cyy = 0.0f;
    czz = 0.0f;
    cxy = 0.0f;
    cxz = 0.0f;
    cyz = 0.0f;
    if (count < 4) {
        cxy = 0.0f;
        cxz = 0.0f;
        cxx = 0.0f;
    }
    else {
        blocks = (int)(((count - 4U) >> 2) + 1);
        done = blocks * 4;
        p = (float *)(points + 0x18);
        do {
            float x0 = p[-6] - meanX;
            float y0 = p[-5] - meanY;
            float z0 = p[-4] - meanZ;
            float x1 = p[-2] - meanX;
            float y1 = p[-1] - meanY;
            float z1 = *p - meanZ;
            float x2 = p[2] - meanX;
            float y2 = p[3] - meanY;
            float z2 = p[4] - meanZ;
            blocks = blocks - 1;
            float x3 = p[6] - meanX;
            float y3 = p[7] - meanY;
            float z3 = p[8] - meanZ;
            cxx = x3 * x3 + x2 * x2 + x1 * x1 + x0 * x0 + cxx;
            cyy = y3 * y3 + y2 * y2 + y1 * y1 + y0 * y0 + cyy;
            czz = z3 * z3 + z2 * z2 + z1 * z1 + z0 * z0 + czz;
            cxy = y3 * x3 + y2 * x2 + y1 * x1 + y0 * x0 + cxy;
            cxz = z3 * x3 + z2 * x2 + z1 * x1 + z0 * x0 + cxz;
            cyz = z3 * y3 + y2 * z2 + y1 * z1 + y0 * z0 + cyz;
            p = p + 0x10;
        } while (blocks != 0);
    }
    if (done < count) {
        count = count - done;
        p = (float *)(points + 8 + done * 0x10);
        do {
            count = count - 1;
            float x = p[-2] - meanX;
            float y = p[-1] - meanY;
            float z = *p - meanZ;
            cxx = x * x + cxx;
            cyy = y * y + cyy;
            czz = z * z + czz;
            cxy = y * x + cxy;
            cxz = x * z + cxz;
            cyz = z * y + cyz;
            p = p + 4;
        } while (count != 0);
    }
    out[0] = cxx * invCount;
    out[1] = cxy * invCount;
    out[3] = cxy * invCount;
    out[2] = cxz * invCount;
    out[4] = cyy * invCount;
    out[5] = cyz * invCount;
    out[7] = cyz * invCount;
    out[6] = cxz * invCount;
    out[8] = invCount * czz;
}

// 00A055D0  FUN_00a055d0  size=1764  [callgraph]
// Jacobi eigen decomposition of the symmetric 3x3 matrix `a` (row major, destroyed above the
// diagonal): eigenvalues to d[0..2], eigenvectors to the 3x3 matrix `vectors` (columns).
// Returns 1 when it converged within 50 sweeps, 0 otherwise. The generic loops of the original
// (unrolled by 4, sized for n = 3) are kept as they are.
undefined4 FUN_00a055d0(float *a, undefined4 *vectors, float *d)
{
    using namespace cObjReadManager_p2;
    float *v = (float *)vectors;
    float work[6];              // local_18: [0..2] = z (accumulated updates), [3..5] = b
    float threshold;            // local_2c
    int sweep;                  // local_34
    float sum;
    float t, s, tau, h, theta, g;

    undefined4 *row = vectors;
    undefined4 *diag = vectors;
    for (int n = 3; n != 0; n--) {
        row[0] = 0;
        row[1] = 0;
        row[2] = 0;
        *diag = 0x3F800000;     // 1.0f
        row = row + 3;
        diag = diag + 4;
    }
    work[3] = a[0];
    d[0] = work[3];
    sweep = 0;
    work[0] = 0.0f;
    work[4] = a[4];
    d[1] = work[4];
    work[1] = 0.0f;
    work[5] = a[8];
    d[2] = work[5];
    work[2] = 0.0f;
    do {
        // Sum of the magnitudes of the off-diagonal elements.
        int rowsLeft = 2;
        int rowBase = 0;
        int col0 = 1;
        int rowCount = 2;
        sum = 0.0f;
        do {
            if (col0 < 3) {
                int col = col0;
                if (3 < rowsLeft) {
                    int blocks = (int)((((unsigned int)-col0 - 1U) >> 2) + 1);
                    col = col0 + blocks * 4;
                    float *p = a + col0 + rowBase;
                    do {
                        blocks = blocks - 1;
                        sum = absf(p[3]) + absf(p[2]) + absf(p[1]) + absf(*p) + sum;
                        p = p + 4;
                    } while (blocks != 0);
                }
                if (col < 3) {
                    float *p = a + col + rowBase;
                    int left = 3 - col;
                    do {
                        float value = *p;
                        p = p + 1;
                        left = left - 1;
                        sum = absf(value) + sum;
                    } while (left != 0);
                }
            }
            rowsLeft = rowsLeft - 1;
            col0 = col0 + 1;
            rowBase = rowBase + 3;
            rowCount = rowCount - 1;
        } while (rowCount != 0);
        if (sum == 0.0) {
            return 1;
        }
        if (sweep < 3) {
            threshold = sum * 0.2 * 0.11111111;
        }
        else {
            threshold = 0.0f;
        }

        float *vRow = (float *)(vectors + 6);   // local_44
        int ipBase = 0;                          // local_48: ip * 3
        int remaining = 2;                       // local_38
        float *dp = d;                           // &d[ip]
        int ip1 = 1;                             // ip + 1
        bool more;
        do {
            if (ip1 < 3) {
                float *apq = a + ipBase + ip1;   // local_50: &a[ip][iq]
                int iq = ip1;
                float *dq = dp;
                int rowQ = ipBase;               // local_40
                float *vPrev = vRow;
                float *vCur;                     // local_3c
                int inner = remaining;           // local_30
                do {
                    inner = inner - 1;
                    vCur = vPrev + 1;
                    rowQ = rowQ + 3;
                    dq = dq + 1;
                    g = absf(*apq) * 100.0;
                    if (sweep < 4 || absf(*dp) != absf(*dp) + g || absf(*dq) != absf(*dq) + g) {
                        if (threshold < absf(*apq)) {
                            h = *dq - *dp;
                            if (absf(h) == absf(h) + g) {
                                t = *apq / h;
                            }
                            else {
                                theta = (h * 0.5) / *apq;
                                t = 1.0 / (absf(theta) + sqrt(theta * theta + 1.0));
                                if (theta < 0.0) {
                                    t = -t;
                                }
                            }
                            float c = 1.0 / sqrt(t * t + 1.0);
                            s = c * t;
                            tau = s / (c + 1.0);
                            h = *apq * t;
                            work[dp - d] = work[dp - d] - h;
                            work[dq - d] = h + work[dq - d];
                            int count = ip1 - 1;
                            *dp = *dp - h;
                            *dq = *dq + h;
                            int k = 0;
                            *apq = 0.0f;
                            // Rows j < ip.
                            if (3 < count) {
                                int blocks = (int)(((ip1 - 5U) >> 2) + 1);
                                k = blocks * 4;
                                float *x = a + (vRow - v);
                                float *y = a + (vCur - v);
                                do {
                                    blocks = blocks - 1;
                                    rotate(x - 6, y - 6, s, tau);
                                    rotate(x - 3, y - 3, s, tau);
                                    rotate(x, y, s, tau);
                                    rotate(x + 3, y + 3, s, tau);
                                    x = x + 0xc;
                                    y = y + 0xc;
                                } while (blocks != 0);
                            }
                            if (k < count) {
                                int left = (ip1 - k) - 1;
                                float *x = a + count + k * 3;
                                float *y = a + iq + k * 3;
                                do {
                                    left = left - 1;
                                    rotate(x, y, s, tau);
                                    x = x + 3;
                                    y = y + 3;
                                } while (left != 0);
                            }
                            // Rows ip < j < iq.
                            if (ip1 < iq) {
                                int j = ip1;
                                if (3 < remaining + -4 + iq + 1) {
                                    int blocks = (int)(((((iq + 1) - ip1) - 5U) >> 2) + 1);
                                    j = ip1 + blocks * 4;
                                    float *x = a + ipBase + ip1 + 2;
                                    float *y = a + ipBase + iq + 9;
                                    do {
                                        blocks = blocks - 1;
                                        rotate(x - 2, y - 6, s, tau);
                                        rotate(x - 1, y - 3, s, tau);
                                        rotate(x, y, s, tau);
                                        rotate(x + 1, y + 3, s, tau);
                                        x = x + 4;
                                        y = y + 0xc;
                                    } while (blocks != 0);
                                }
                                if (j < iq) {
                                    int left = iq - j;
                                    float *x = a + ipBase + j;
                                    float *y = a + iq + j * 3;
                                    do {
                                        left = left - 1;
                                        rotate(x, y, s, tau);
                                        x = x + 1;
                                        y = y + 3;
                                    } while (left != 0);
                                }
                            }
                            // Columns j > iq.
                            int j = iq + 1;
                            if (j < 3) {
                                if (3 < inner) {
                                    int first = j + rowQ;
                                    int blocks = (int)((((unsigned int)-j - 1U) >> 2) + 1);
                                    j = j + blocks * 4;
                                    float *x = apq + 3;
                                    float *y = a + first + 2;
                                    do {
                                        blocks = blocks - 1;
                                        rotate(x - 2, y - 2, s, tau);
                                        rotate(x - 1, y - 1, s, tau);
                                        rotate(x, y, s, tau);
                                        rotate(x + 1, y + 1, s, tau);
                                        x = x + 4;
                                        y = y + 4;
                                    } while (blocks != 0);
                                }
                                if (j < 3) {
                                    int left = 3 - j;
                                    float *x = a + ipBase + j;
                                    float *y = a + rowQ + j;
                                    do {
                                        left = left - 1;
                                        rotate(x, y, s, tau);
                                        x = x + 1;
                                        y = y + 1;
                                    } while (left != 0);
                                }
                            }
                            // Eigenvector columns ip / iq.
                            rotate(vRow - 6, vPrev - 5, s, tau);
                            rotate(vRow - 3, vPrev - 2, s, tau);
                            rotate(vRow, vCur, s, tau);
                        }
                    }
                    else {
                        *apq = 0.0f;
                    }
                    apq = apq + 1;
                    iq = iq + 1;
                    vPrev = vCur;
                } while (iq < 3);
            }
            remaining = remaining - 1;
            vRow = vRow + 1;
            ipBase = ipBase + 3;
            dp = dp + 1;
            more = ip1 < 2;
            ip1 = ip1 + 1;
        } while (more);

        // b += z, d = b, z = 0.
        for (int k = 0; k < 3; k++) {
            float value = work[k] + work[3 + k];
            work[3 + k] = value;
            d[k] = value;
            *(undefined4 *)&work[k] = 0;
        }
        sweep = sweep + 1;
    } while (sweep < 0x32);
    return 0;
}

// 00A05D20  FUN_00a05d20  size=78  [callgraph]
// Volume of the tetrahedron (origin, p0, p1, p2): |det(p0, p1, p2)| / 6.
float10 FUN_00a05d20(float *p0, float *p1, float *p2)
{
    return (float10)fabs(((((float10)p2[1] * (float10)p1[0] * (float10)p0[2] +
                            (float10)p0[0] * (float10)p1[1] * (float10)p2[2] +
                            (float10)p2[0] * (float10)p1[2] * (float10)p0[1]) -
                           (float10)p2[1] * (float10)p1[2] * (float10)p0[0]) -
                          (float10)p2[2] * (float10)p1[0] * (float10)p0[1]) -
                         (float10)p1[1] * (float10)p2[2] * (float10)p0[2]) *
           (float10)0.16666667;
}

// 00A05D90  FUN_00a05d90  size=75  [callgraph]
// Releases an owned 0x18-byte buffer record (two buffers at +0/+4, one at +0xC; owned flag +0x14).
void FUN_00a05d90(int record)
{
    if (*(char *)(record + 0x14) != '\0') {
        for (int i = 0; i < 2; i++) {
            int buffer = *(int *)(record + i * 4);
            if (buffer != 0) {
                FUN_00dd4940(buffer);
            }
            *(undefined4 *)(record + i * 4) = 0;
        }
        if (*(int *)(record + 0xc) != 0) {
            FUN_00dd4940(*(int *)(record + 0xc));
            *(undefined4 *)(record + 0xc) = 0;
        }
        *(undefined1 *)(record + 0x14) = 0;
    }
}

// 00A05E40  FUN_00a05e40  size=53  [callgraph]
void FUN_00a05e40(int self)
{
    if (*(int *)(self + 0x20) != 0) {
        FUN_00dd4940(*(int *)(self + 0x20));
        *(undefined4 *)(self + 0x20) = 0;
    }
    if (*(int *)(self + 0x44) != 0) {
        FUN_00dd4940(*(int *)(self + 0x44));
        *(undefined4 *)(self + 0x44) = 0;
    }
}

// 00A05EB0  FUN_00a05eb0  size=76  [callgraph]
// Frees the array of 8-byte entries at +0xC (count +0x10), each owning the buffer at its +0.
void FUN_00a05eb0(int self)
{
    if (*(int *)(self + 0xc) != 0) {
        for (int i = 0; i < *(int *)(self + 0x10); i++) {
            int buffer = *(int *)(*(int *)(self + 0xc) + i * 8);
            if (buffer != 0) {
                FUN_00dd4940(buffer);
                *(undefined4 *)(*(int *)(self + 0xc) + i * 8) = 0;
            }
        }
        FUN_00dd4940(*(int *)(self + 0xc));
    }
    *(undefined4 *)(self + 0xc) = 0;
}

// 00A05F30  FUN_00a05f30  size=40  [callgraph]
// Releases an owned 0x50-byte record (buffer +0x30, owned flag +0x44).
void FUN_00a05f30(int record)
{
    if (*(char *)(record + 0x44) != '\0') {
        if (*(int *)(record + 0x30) != 0) {
            FUN_00dd4940(*(int *)(record + 0x30));
            *(undefined4 *)(record + 0x30) = 0;
        }
        *(undefined1 *)(record + 0x44) = 0;
    }
}

// 00A05F60  FUN_00a05f60  size=61  [callgraph]
// Releases an owned 0x14-byte record (buffers +0 and +8, owned flag +0x10).
void FUN_00a05f60(int *record)
{
    if ((char)record[4] != '\0') {
        if (record[0] != 0) {
            FUN_00dd4940(record[0]);
        }
        if (record[2] != 0) {
            FUN_00dd4940(record[2]);
        }
        record[0] = 0;
        record[2] = 0;
        *(undefined1 *)(record + 4) = 0;
    }
}

// 00A05FA0  FUN_00a05fa0  size=38  [callgraph]
// Releases an owned 0xC-byte record (buffer +0, owned flag +8).
void FUN_00a05fa0(int *record)
{
    if ((char)record[2] != '\0') {
        if (record[0] != 0) {
            FUN_00dd4940(record[0]);
            record[0] = 0;
        }
        *(undefined1 *)(record + 2) = 0;
    }
}

// 00A06470  FUN_00a06470  size=152  [callgraph]
void __fastcall FUN_00a06470(undefined4 *self)
{
    self[0x10] = 0;
    self[0x11] = 0;
    self[0x12] = 0;
    self[0x13] = 0;
    self[0x14] = 0;
    self[0x15] = 0;
    self[0x16] = 0;
    self[0x17] = 0;
    self[0] = 0;
    self[1] = 0;
    self[10] = 0;
    self[0xb] = 0;
    self[0xc] = 0;
    self[0xd] = 0;
    self[0xe] = 0;
    self[0xf] = 0;
    self[0x19] = 0;
    self[0x18] = 0;
    self[0x1a] = 0;
    self[0x1b] = 0;
    self[0x1c] = 0;
    self[0x1d] = 0;
    self[0x1e] = 0;
    self[0x1f] = 0;
    self[0x20] = 0;
    self[0x21] = 0;
    self[0x22] = 0;
    self[0x23] = 0;
    self[0x24] = 0;
    self[0x25] = 0;
    self[0x26] = 0;
    self[0x27] = 0;
    self[0x28] = 0;
    self[0x29] = 0;
    self[0x2a] = 0;
    self[0x2b] = 0;
    self[0x2c] = 0;
}

// 00A06520  FUN_00a06520  size=84  [callgraph]
// Atomically decrements *counter unless it would go negative (then prints a message and returns
// the message function's result). Returns the value before the decrement.
int __fastcall FUN_00a06520(int *counter)
{
    using namespace cObjReadManager_p2;
    int value = *counter;
    while (true) {
        if (value + -1 < 0) {
            return call<int (*)(void *)>(FUN_00dd5650)(DAT_0165c5bc);
        }
        if (_InterlockedCompareExchange((long volatile *)counter, value + -1, value) == value) {
            break;
        }
        value = *counter;
    }
    return value;
}

// 00A066B0  FUN_00a066b0  size=180  [callgraph]
void __fastcall FUN_00a066b0(int self)
{
    *(undefined4 *)(self + 0x5c) = 0;
    *(undefined4 *)(self + 0x60) = 0;
    *(undefined4 *)(self + 0x64) = 0;
    *(undefined4 *)(self + 0x68) = 0;
    *(undefined4 *)(self + 0x6c) = 0;
    *(undefined4 *)(self + 0x70) = 0;
    *(undefined4 *)(self + 0x7c) = 0;
    *(undefined4 *)(self + 0x80) = 0;
    *(undefined4 *)(self + 0x74) = 0;
    *(undefined4 *)(self + 0x78) = 0;
    *(undefined4 *)(self + 0x8c) = 0;
    *(undefined4 *)(self + 0x90) = 0;
    *(undefined4 *)(self + 0x84) = 0;
    *(undefined4 *)(self + 0x88) = 0;
    *(undefined4 *)(self + 0x9c) = 0;
    *(undefined4 *)(self + 0xa0) = 0;
    *(undefined4 *)(self + 0x94) = 0;
    *(undefined4 *)(self + 0x98) = 0;
    *(undefined4 *)(self + 0xa4) = 0;
    *(undefined4 *)(self + 0xa8) = 0;
    *(undefined4 *)(self + 0xac) = 0;
    *(undefined4 *)(self + 0xb0) = 0;
    *(undefined4 *)(self + 0xb4) = 0;
    *(undefined4 *)(self + 0xb8) = 0;
    *(undefined4 *)(self + 0xbc) = 0;
    *(undefined4 *)(self + 0xc0) = 0;
    *(undefined4 *)(self + 0xc4) = 0;
    *(undefined4 *)(self + 0xc8) = 0;
    *(undefined4 *)(self + 0xcc) = 0;
    *(undefined4 *)(self + 0xd0) = 0;
    *(undefined4 *)(self + 0x3c) = 0;
    *(undefined4 *)(self + 0x40) = 0;
    *(undefined4 *)(self + 0x44) = 0;
    *(undefined4 *)(self + 0x48) = 0;
    *(undefined4 *)(self + 0x4c) = 0;
    *(undefined4 *)(self + 0x50) = 0;
    *(undefined4 *)(self + 0x54) = 0;
    *(undefined4 *)(self + 0x58) = 0;
}

// 00A06770  FUN_00a06770  size=389  [callgraph]
// Releases the four record arrays: +0x5C (0x18-byte records, count +0x60), +0x7C (0x50, +0x80),
// +0x8C (0x14, +0x90) and +0xB4 (0xC, +0xB8); records whose "borrowed" byte is set are skipped.
void __fastcall FUN_00a06770(int self)
{
    if (*(int *)(self + 0x5c) != 0) {
        int offset = 0;
        for (int i = 0; i < *(int *)(self + 0x60); i++) {
            int record = *(int *)(self + 0x5c) + offset;
            if (*(char *)(record + 0x15) == '\0') {
                FUN_00a05d90(record);
            }
            offset = offset + 0x18;
        }
        FUN_00dd4940(*(int *)(self + 0x5c));
    }
    if (*(int *)(self + 0x7c) != 0) {
        int offset = 0;
        for (int i = 0; i < *(int *)(self + 0x80); i++) {
            int record = *(int *)(self + 0x7c) + offset;
            if (*(char *)(record + 0x45) == '\0' && *(char *)(record + 0x44) != '\0') {
                if (*(int *)(record + 0x30) != 0) {
                    FUN_00dd4940(*(int *)(record + 0x30));
                    *(undefined4 *)(record + 0x30) = 0;
                }
                *(undefined1 *)(record + 0x44) = 0;
            }
            offset = offset + 0x50;
        }
        FUN_00dd4940(*(int *)(self + 0x7c));
    }
    if (*(int *)(self + 0x8c) != 0) {
        int offset = 0;
        for (int i = 0; i < *(int *)(self + 0x90); i++) {
            int *record = (int *)(*(int *)(self + 0x8c) + offset);
            if (*(char *)((int)record + 0x11) == '\0' && (char)record[4] != '\0') {
                if (record[0] != 0) {
                    FUN_00dd4940(record[0]);
                }
                if (record[2] != 0) {
                    FUN_00dd4940(record[2]);
                }
                record[0] = 0;
                record[2] = 0;
                *(undefined1 *)(record + 4) = 0;
            }
            offset = offset + 0x14;
        }
        FUN_00dd4940(*(int *)(self + 0x8c));
    }
    if (*(int *)(self + 0xb4) != 0) {
        int offset = 0;
        for (int i = 0; i < *(int *)(self + 0xb8); i++) {
            int *record = (int *)(*(int *)(self + 0xb4) + offset);
            if (*(char *)((int)record + 9) == '\0' && (char)record[2] != '\0') {
                if (record[0] != 0) {
                    FUN_00dd4940(record[0]);
                    record[0] = 0;
                }
                *(undefined1 *)(record + 2) = 0;
            }
            offset = offset + 0xc;
        }
        FUN_00dd4940(*(int *)(self + 0xb4));
    }
    *(undefined4 *)(self + 0x5c) = 0;
    *(undefined4 *)(self + 0x7c) = 0;
    *(undefined4 *)(self + 0x8c) = 0;
    *(undefined4 *)(self + 0xb4) = 0;
}

// 00A06900  FUN_00a06900  size=19  [callgraph]
void FUN_00a06900(int self, int source)
{
    *(undefined4 *)(self + 0xd0) = *(undefined4 *)(source + 0xf8);
}

// 00A06920  FUN_00a06920  size=78  [callgraph]
// Copies the two float4 vectors at source+0xB0 and source+0x90.
void FUN_00a06920(undefined4 *out, int source)
{
    out[0] = *(undefined4 *)(source + 0xb0);
    out[1] = *(undefined4 *)(source + 0xb4);
    out[2] = *(undefined4 *)(source + 0xb8);
    out[3] = *(undefined4 *)(source + 0xbc);
    out[4] = *(undefined4 *)(source + 0x90);
    out[5] = *(undefined4 *)(source + 0x94);
    out[6] = *(undefined4 *)(source + 0x98);
    out[7] = *(undefined4 *)(source + 0x9c);
}

// 00A06970  FUN_00a06970  size=225  [callgraph]
// Bounding box of the 0x50-byte records at +0x74 (count +0x78; max corner at +0x00, min corner
// at +0x10): center to `center`, half extents to `extents` (w = 1).
void FUN_00a06970(int self, float *center, float *extents)
{
    int left = *(int *)(self + 0x78);
    float maxY = -3.4028235e+38f;
    float minZ = 3.4028235e+38f;
    float minX = 3.4028235e+38f;
    float minY = 3.4028235e+38f;
    float maxZ = -3.4028235e+38f;
    float maxX = -3.4028235e+38f;
    if (0 < left) {
        float *record = *(float **)(self + 0x74);
        do {
            if (record[4] < minX) {
                minX = record[4];
            }
            if (record[5] < minY) {
                minY = record[5];
            }
            if (record[6] < minZ) {
                minZ = record[6];
            }
            if (maxX <= record[0]) {
                maxX = record[0];
            }
            if (maxY <= record[1]) {
                maxY = record[1];
            }
            if (maxZ <= record[2]) {
                maxZ = record[2];
            }
            record = record + 0x14;
            left = left - 1;
        } while (left != 0);
    }
    float halfX = (maxX - minX) * 0.5;
    extents[0] = halfX;
    extents[1] = (maxY - minY) * 0.5;
    extents[2] = (maxZ - minZ) * 0.5;
    center[0] = halfX + minX;
    center[1] = minY + extents[1];
    center[2] = minZ + extents[2];
    extents[3] = 1.0f;
    center[3] = 1.0f;
}

// 00A06AB0  FUN_00a06ab0  size=81  [callgraph]
// Hands over record `index` of the +0x5C array (0x18 bytes): copies it to `out`, clears the
// source's owned flag (+0x14) and marks the copy borrowed (+0x15).
undefined4 FUN_00a06ab0(int self, undefined4 *out, int index)
{
    if (-1 < index && index < *(int *)(self + 0x60)) {
        int record = *(int *)(self + 0x5c) + index * 0x18;
        out[0] = *(undefined4 *)(*(int *)(self + 0x5c) + index * 0x18);
        out[1] = *(undefined4 *)(record + 4);
        out[2] = *(undefined4 *)(record + 8);
        out[3] = *(undefined4 *)(record + 0xc);
        out[4] = *(undefined4 *)(record + 0x10);
        out[5] = *(undefined4 *)(record + 0x14);
        *(undefined1 *)(record + 0x14) = 0;
        *(undefined1 *)((int)out + 0x15) = 1;
        return 1;
    }
    return 0;
}

// 00A06B50  FUN_00a06b50  size=81  [callgraph]
// Same for the +0x8C array (0x14 bytes, owned flag +0x10, borrowed +0x11).
undefined4 FUN_00a06b50(int self, undefined4 *out, int index)
{
    if (-1 < index && index < *(int *)(self + 0x90)) {
        int record = *(int *)(self + 0x8c) + index * 0x14;
        out[0] = *(undefined4 *)(*(int *)(self + 0x8c) + index * 0x14);
        out[1] = *(undefined4 *)(record + 4);
        out[2] = *(undefined4 *)(record + 8);
        out[3] = *(undefined4 *)(record + 0xc);
        out[4] = *(undefined4 *)(record + 0x10);
        *(undefined1 *)(record + 0x10) = 0;
        *(undefined1 *)((int)out + 0x11) = 1;
        return 1;
    }
    return 0;
}

// 00A06C00  FUN_00a06c00  size=182  [callgraph]
// Re-arms the owned flag of every record whose "restore" byte is set, then bumps +0xCC.
void __fastcall FUN_00a06c00(int self)
{
    int offset = 0;
    for (int i = 0; i < *(int *)(self + 0x60); i++) {
        if (*(char *)(*(int *)(self + 0x5c) + 0x16 + offset) != '\0') {
            *(undefined1 *)(*(int *)(self + 0x5c) + 0x14 + offset) = 1;
        }
        offset = offset + 0x18;
    }
    offset = 0;
    for (int i = 0; i < *(int *)(self + 0xb8); i++) {
        if (*(char *)(*(int *)(self + 0xb4) + 10 + offset) != '\0') {
            *(undefined1 *)(*(int *)(self + 0xb4) + 8 + offset) = 1;
        }
        offset = offset + 0xc;
    }
    offset = 0;
    for (int i = 0; i < *(int *)(self + 0x80); i++) {
        if (*(char *)(*(int *)(self + 0x7c) + 0x46 + offset) != '\0') {
            *(undefined1 *)(*(int *)(self + 0x7c) + 0x44 + offset) = 1;
        }
        offset = offset + 0x50;
    }
    offset = 0;
    for (int i = 0; i < *(int *)(self + 0x90); i++) {
        if (*(char *)(*(int *)(self + 0x8c) + 0x12 + offset) != '\0') {
            *(undefined1 *)(*(int *)(self + 0x8c) + 0x10 + offset) = 1;
        }
        offset = offset + 0x14;
    }
    *(int *)(self + 0xcc) = *(int *)(self + 0xcc) + 1;
}

// 00A06CD0  FUN_00a06cd0  size=219  [callgraph]
void __fastcall FUN_00a06cd0(undefined4 *self)
{
    self[0xd] = 0;
    self[0xf] = 0;
    self[0x10] = 0;
    self[0x11] = 0;
    self[0x33] = 0;
    *(undefined2 *)(self + 0xe) = 0xffff;
    self[0x12] = 0;
    self[0x13] = 0;
    self[0x14] = 0;
    self[0x15] = 0;
    self[0x16] = 0;
    self[0x17] = 0;
    self[0x18] = 0;
    self[0x19] = 0;
    self[0x1a] = 0;
    self[0x1c] = 0;
    self[0x1d] = 0;
    self[0x1e] = 0;
    self[0x20] = 0;
    self[0x21] = 0;
    self[0x1f] = 0;
    self[0x22] = 0;
    self[0x23] = 0;
    self[0x24] = 0;
    self[0x25] = 0;
    self[0x26] = 0;
    self[0x27] = 0;
    self[0x28] = 0;
    self[0x29] = 0;
    self[0x2a] = 0;
    self[0x2b] = 0;
    self[0x2c] = 0;
    self[0x2d] = 0;
    self[0x2e] = 0;
    self[0x2f] = 0;
    self[0x30] = 0;
    self[0x31] = 0;
    self[0x32] = 0;
    self[0x36] = 0;
    self[0x1b] = 0;
    self[0x3d] = 0;
    self[0x3e] = 0;
    self[0x37] = 0xffffffff;
    self[0] = 0;
    self[1] = 0;
    self[2] = 0;
    self[3] = 0;
}

// 00A06DB0  FUN_00a06db0  size=18  [callgraph]
// Adds a reference to the shared counter at +0xF8 (if any).
void __fastcall FUN_00a06db0(int self)
{
    if (*(long **)(self + 0xf8) != (long *)0x0) {
        InterlockedIncrement(*(long **)(self + 0xf8));
    }
}

// 00A06DE0  FUN_00a06de0  size=89  [callgraph]
// Looks up `id` in the three-level, 16-way lookup table at +0x48 (nibbles 8..11, 4..7, 0..3 of
// the id select the entries); 0xFFFF marks an empty branch. Returns 0xFFF when not found.
undefined2 FUN_00a06de0(int self, short id)
{
    int table = *(int *)(self + 0x48);
    if (table == 0) {
        return 0xfff;
    }
    unsigned int key = (unsigned int)id;  // sign-extended
    unsigned short entry = *(unsigned short *)(table + ((int)key >> 8 & 0xfU) * 2);
    if (entry != 0xffff) {
        entry = *(unsigned short *)(table + (((int)key >> 4 & 0xfU) + (unsigned int)entry) * 2);
        if (entry != 0xffff) {
            return *(undefined2 *)(table + ((key & 0xf) + (unsigned int)entry) * 2);
        }
    }
    return 0xfff;
}

// 00A06E70  FUN_00a06e70  size=79  [callgraph]
// Copies the first vector (+0x08..+0x10) of record `index` of the +0x40 array (0x20 bytes each,
// count at +0x44) to `out` as (x, y, z, 1.0f). Clears `out` and returns 0 when out of range.
undefined4 FUN_00a06e70(int self, undefined4 *out, int index)
{
    if (-1 < index && index < *(int *)(self + 0x44)) {
        int record = index * 0x20 + *(int *)(self + 0x40);
        if (record != 0) {
            undefined4 y = *(undefined4 *)(record + 0xc);
            undefined4 z = *(undefined4 *)(record + 0x10);
            out[0] = *(undefined4 *)(record + 8);
            out[1] = y;
            out[2] = z;
            out[3] = 0x3f800000;  // 1.0f
            return 1;
        }
    }
    out[0] = 0;
    out[1] = 0;
    out[2] = 0;
    out[3] = 0;
    return 0;
}

// 00A06EC0  FUN_00a06ec0  size=79  [callgraph]
// Same for the second vector (+0x14..+0x1C) of the record.
undefined4 FUN_00a06ec0(int self, undefined4 *out, int index)
{
    if (-1 < index && index < *(int *)(self + 0x44)) {
        int record = index * 0x20 + *(int *)(self + 0x40);
        if (record != 0) {
            undefined4 y = *(undefined4 *)(record + 0x18);
            undefined4 z = *(undefined4 *)(record + 0x1c);
            out[0] = *(undefined4 *)(record + 0x14);
            out[1] = y;
            out[2] = z;
            out[3] = 0x3f800000;  // 1.0f
            return 1;
        }
    }
    out[0] = 0;
    out[1] = 0;
    out[2] = 0;
    out[3] = 0;
    return 0;
}

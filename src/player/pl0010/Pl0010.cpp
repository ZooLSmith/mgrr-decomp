// src/player/pl0010/Pl0010.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "Pl0010.h"

// ---------------------------------------------------------------------------------------------
// Data referenced by this part
// ---------------------------------------------------------------------------------------------
extern unsigned char DAT_01b35df8[];  // collision query manager (ECX of FUN_0090eea0)
extern unsigned char DAT_018b9140[];  // ECX of FUN_00d467a0
extern const char    DAT_0163d0ac[];  // "[Hw::VecNormalize] cannot normalise a zero vector."

namespace Pl0010_p1 {

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

// __fastcall call of a function with ECX = self
template <class R, class F> inline R fastcall(F fn, const void *self)
{
    typedef R (__fastcall *Fn)(const void *);
    return ((Fn)fn)(self);
}

}  // namespace Pl0010_p1

// 00B95720  Pl0010::GroundTest  size=1028  [class]
void Pl0010::GroundTest()
{
    using namespace Pl0010_p1;
    __declspec(align(16)) float offset[4];      // cast offset: up * radius (FUN_00a8bac0)
    __declspec(align(16)) float direction[4];   // cast vector: up * (-0.5 - radius)
    __declspec(align(16)) float vec[4];

    char *shape = *(char **)((char *)this + 0x764);  /* Behavior+0x764: ground shape (radius at +0xFC) */
    if (shape == 0) {
        return;
    }
    float radius = *(float *)(shape + 0xfc);
    thiscall<float *>(FUN_00a8bac0, this, offset, *(float *)(shape + 0xfc));
    thiscall<float *>(FUN_00a8bac0, this, direction, -0.5f - *(float *)(*(char **)((char *)this + 0x764) + 0xfc));
    field41EC() = 0;
    vcall<void>(groundCollector(), 0x8);  // reset the collector
    int *filter = (int *)FUN_009f8b60((int)this);
    float *position = matrix() + 12;  // +0x40
    vec[0] = position[0] + offset[0];
    vec[1] = position[1] + offset[1];
    vec[2] = position[2] + offset[2];
    vec[3] = position[3] + offset[3];
    int hit = thiscall<int>(FUN_0090eea0, DAT_01b35df8, groundCollector(), groundPos(), vec, radius,
                            direction, *filter << 0x10, "Pl0010::GroundTest");
    if (hit == 0) {
        groundHit() = 0;
        groundHitDistance() = 0.0f;
        float dx = position[0] - groundPos()[0];
        float dy = position[1] - groundPos()[1];
        float dz = position[2] - groundPos()[2];
        groundMissDistance() = sqrtf((dx * dx + dy * dy) + dz * dz);
        vec[0] = position[0] - groundPos()[0];
        vec[1] = position[1] - groundPos()[1];
        vec[2] = position[2] - groundPos()[2];
        vec[3] = position[3] - groundPos()[3];
        float x = vec[0];
        float y = vec[1];
        float z = vec[2];
        if (vec[0] != 0.0f || vec[1] != 0.0f || vec[2] != 0.0f) {
            // inlined Hw::VecNormalize
            float lengthSq = (vec[1] * vec[1] + vec[0] * vec[0]) + vec[2] * vec[2];
            // (the machine code also rejects NaN components: x != x checks omitted by Ghidra)
            if ((lengthSq < 0.0f) == (lengthSq == 0.0f) && vec[0] == vec[0] && vec[1] == vec[1] &&
                vec[2] == vec[2]) {
                FUN_00ddf460(vec, vec);
                y = vec[1];
                z = vec[2];
                x = vec[0];
            }
            else {
                cdeclcall<void>(FUN_00dd5650, DAT_0163d0ac);  // debug print
                x = 0.0f;
                y = 1.0f;
                z = 0.0f;
            }
        }
        // below the ground position: negative distance
        if ((y + x * 0.0f) + z * 0.0f < 0.0f) {
            groundMissDistance() = groundMissDistance() * -1.0f;
        }
    }
    else {
        FUN_0112bcf0((uint)groundCollector());
        int index = 0;
        if (0 < groundHitCount()) {
            int hitOffset = 0;
            do {
                char *collidable = *(char **)(groundHits() + hitOffset + 0x28);
                char *owner = *(signed char *)(collidable + 0x10) + collidable;
                if (owner != 0) {
                    unsigned int object = *(unsigned int *)(owner + 0xc);
                    int objectId;
                    if (object == 0) {
                        objectId = 0;
                    }
                    else {
                        objectId = *(int *)(object + 0x44);
                        if (objectId == -1) {
                            goto next;
                        }
                    }
                    {
                        void *manager = (void *)FUN_00c13920();
                        vcall<void>(manager, 0x14, objectId);
                    }
                }
            next:
                hitOffset = hitOffset + 0x30;
                index = index + 1;
            } while (index < groundHitCount());
        }
        float *firstHit = (float *)groundHits();
        groundNormal()[0] = firstHit[4];
        groundNormal()[1] = firstHit[5];
        groundNormal()[2] = firstHit[6];
        groundNormal()[3] = firstHit[7];
        firstHit = (float *)groundHits();
        groundPos()[0] = firstHit[0];
        groundPos()[1] = firstHit[1];
        groundPos()[2] = firstHit[2];
        groundPos()[3] = firstHit[3];
        groundPos()[0] = groundPos()[0] - offset[0];
        groundPos()[1] = groundPos()[1] - offset[1];
        groundPos()[2] = groundPos()[2] - offset[2];
        groundPos()[3] = groundPos()[3] - offset[3];
        groundHit() = 1;
        float dx = position[0] - groundPos()[0];
        float dy = position[1] - groundPos()[1];
        float dz = position[2] - groundPos()[2];
        groundHitDistance() = sqrtf(dx * dx + dy * dy + dz * dz);
    }
    groundSupportRange() = 0.15f;  // +0x600
    if (FUN_00d467a0((int)DAT_018b9140)) {
        updateGroundSupportForParts((int)groundQuery4160(), (float *)((char *)this + 0x5b0),
                                    (int *)((char *)this + 0x594), (int *)((char *)this + 0x5f0), 0x19);
        updateGroundSupportForParts((int)groundQuery4164(), (float *)((char *)this + 0x5c0),
                                    (int *)((char *)this + 0x598), (int *)((char *)this + 0x5f4), 0x14);
        return;
    }
    /* Behavior+0x5B0 / +0x5C0: ground hit positions, +0x594 / +0x598: ground states,
       +0x5F0 / +0x5F4: hit collisions of the two parts */
    updateGroundSupportForParts((int)groundQuery4160(), (float *)((char *)this + 0x5b0),
                                (int *)((char *)this + 0x594), (int *)((char *)this + 0x5f0), 0x16);
    updateGroundSupportForParts((int)groundQuery4164(), (float *)((char *)this + 0x5c0),
                                (int *)((char *)this + 0x598), (int *)((char *)this + 0x5f4), 0x12);
}

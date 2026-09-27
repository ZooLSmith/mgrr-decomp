// src/misc/cObj.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cObj.h"

#include <math.h>

// ---------------------------------------------------------------------------------------------
// Callees whose generated prototype (include/auto/functions.h) does not match the argument list
// recovered at the call site are invoked through CALL(fn, signature)(args...), which passes
// exactly the arguments seen in the binary. "ECX: ?" marks calls whose register `this` argument
// the decompiler did not recover.
#define CALL(fn, sig) ((sig)(void *)&(fn))

// Not declared in any generated header.
namespace cModelDataManager {
int EntryModelData(unsigned int modelFile, unsigned int cutInfoFile);  // 00A19920
}
extern "C" float *__stdcall D3DXVec3TransformNormal(float *out, const float *v, const void *matrix);

// Data referenced by this file (names from the binary; strings not exported).
struct ObjCategoryPrefix { unsigned int category; char *prefix; };  // id & 0xF0000 -> folder/prefix
struct ObjDlcPrefix      { unsigned int idMask; char *name; };      // id & 0xFF000000 -> DLC folder
struct ObjFileEntry      { int id; unsigned int objA; unsigned int objB; };
struct ObjIdRemap        { unsigned int from; unsigned int to; };

extern unsigned char     DAT_01b7b380[];         // returned by cObj::vf04
extern unsigned char     DAT_0165bed8[];         // debug message (destruct)
extern unsigned char     DAT_0165c288[];         // debug message (unknown custom param)
extern unsigned char     DAT_0165c37c[];         // debug message (construct twice)
extern unsigned char     DAT_01657e1c[];         // file keys used by cObj::vf08
extern unsigned char     DAT_0164518c[];
extern unsigned char     DAT_01645174[];
extern unsigned char     DAT_01645170[];
extern char              DAT_0165bfb4[];         // file extension strings
extern char              DAT_0165bfac[];
extern char              DAT_016416fa[];         // file name suffix strings
extern char              DAT_0165c260[];
extern unsigned int      DAT_01b7bd48[];         // heap / allocator tag
extern unsigned int      DAT_01bea064;
extern unsigned int      DAT_01be9190[4];
extern unsigned int      DAT_01f6c980;           // last object id loaded
extern unsigned int      DAT_0189edb8[60];       // object ids handled by the "default load" path
extern unsigned int      DAT_01890128[28];
extern ObjCategoryPrefix DAT_01890198[12];
extern ObjDlcPrefix      DAT_018901f8[2];        // .name is PTR_DAT_018901fc
extern ObjFileEntry      DAT_0189eab8[64];
extern unsigned int      DAT_0189e7b8[];         // ids without object files, 0xFFFFFFFF-terminated
extern ObjIdRemap        DAT_0189e8a0[];         // 0xFFFFFFFF-terminated

// Model-load parameters built on the stack by FUN_009fd350 and passed to FUN_00a17c30.
struct ModelLoadParams {
    int          useDefault;     // +0x00
    unsigned int global[4];      // +0x04 copied from DAT_01be9190
    int          flag14;         // +0x14
    int          flag18;         // +0x18
    int          flag1C;         // +0x1C
    int          flag20;         // +0x20
    unsigned int isCategoryE;    // +0x24
};

// Scalar deleting destructor at vtable slot 0 of an unknown polymorphic object.
typedef void (__thiscall *DeletingDtorFn)(void *self, int flags);
// Vtable slot 0x1C of the object returned by FUN_00910da0.
typedef undefined4 (__thiscall *SpawnFn)(int *self, void *out, unsigned int *desc, int partMatrix,
                                         undefined4 a, undefined4 b, int c, undefined2 d, int e);

// 0040DE00  cObj::vf24  size=3  [class]
float10 cObj::vf24()
{
    return 1.0;
}

// 0040DE70  cObj::vf38  size=22  [class]
uint cObj::vf38()
{
    return ((stateFlags() & 3) == 0) ? (uint)this : 0;
}

// 0040E660  cObj::vf28  size=13  [class]
void cObj::vf28(undefined4 value)
{
    field4E0() = value;
}

// 009F8A30  cObj::vf10  size=1  [class]
void cObj::vf10()
{
}

// 009F8A40  cObj::vf14  size=1  [class]
void cObj::vf14()
{
}

// 009F8A50  cObj::vf18  size=5  [class]
void cObj::vf18()
{
    int owner = *(int *)((char *)this + 0x360); /* cModel+0x360: ? */
    int holder = (owner != 0) ? owner : (int)this;

    bool update = *(short *)(holder + 0x358) != 0; /* cModel+0x358: part count */
    if (!update) {
        unsigned short rootFlags =
            *(unsigned short *)(*(int *)((char *)this + 0x334) /* cModel+0x334: root part */ + 0xA2);
        update = (rootFlags & 4) == 0 || (rootFlags & 2) == 0;
    }
    if (update && owner == 0) {
        CALL(FUN_00a16680, void (*)(cObj *, char *))(this, (char *)this + 0xB0);
    }
    *(unsigned int *)((char *)this + 0x364) |= 0x10000; /* cModel+0x364: flags */
}

// 009F8A60  FUN_009f8a60  size=19  [between]
void __fastcall FUN_009f8a60(cObj *self)
{
    CALL(FUN_00a19180, void (*)(cObj *, cObj *))(self, self->linkedObj());
}

// 009F8A80  FUN_009f8a80  size=42  [between]
void __fastcall FUN_009f8a80(cObj *self)
{
    unsigned int flags = *(unsigned int *)((char *)self + 0x364); /* cModel+0x364: flags */
    if ((flags & 0x1000000) != 0 &&
        (*(unsigned int *)((char *)self + 0x364) & 0x40000) == 0) {
        CALL(FUN_00c2af30, void (*)(cObj *))(self);
    }
    CALL(FUN_00a18770, void (*)())(); /* ECX: ? */
}

// 009F8AB0  cObj::vf3C  size=3  [class]
void cObj::vf3C(undefined4 param_2)
{
}

// 009FAB30  cObj::vf04  size=6  [class]
undefined *cObj::vf04()
{
    return DAT_01b7b380;
}

// 009FAB40  cObj::vf2C  size=1  [class]
void cObj::vf2C()
{
}

// 009FAB50  cObj::vf30  size=1  [class]
void cObj::vf30()
{
}

// 009FAB60  cObj::vf34  size=1  [class]
void cObj::vf34()
{
}

// 009FAB70  FUN_009fab70  size=40  [between]
void __fastcall FUN_009fab70(cObj *self)
{
    if ((self->stateFlags() & 2) == 0) {
        self->stateFlags() |= 2;
        self->vf20();
        self->vf0C();  // tail call
    }
}

// 009FABA0  cObj::vf1C  size=8  [class]
void cObj::vf1C()
{
    objFlags() |= 1;
}

// 009FABB0  cObj::vf20  size=8  [class]
void cObj::vf20()
{
    objFlags() &= 0xFFFFFFFE;
}

// 009FD150  cObj::cObj  size=141  [class]
cObj::cObj()
{
    // cModel::cModel() -- base constructor, emitted by the compiler
    // vftable = cObj::vftable
    CALL(FUN_00de3530, void (*)())(); /* ECX: ? (embedded member ctor) */
    *(int *)&objInfo() = 0;
    field4D0() = 0;
    CALL(FUN_00a09be0, void (*)())(); /* ECX: ? (embedded member ctor) */
    objId() = 0xFFFFFFFF;
    field4E0() = -1;
    filesAcquired() = 0;
    field4F0() = 0;
    field490() = 0;
    nameHash() = 0;
    field4E4() = 0;
    field4E8() = 0;
    ownedObj4DC() = 0;
    field4C9() = 0;
    linkedObj() = 0;
    constructed() = 0;
    objFlags() = 1;
}

// 009FD1E0  cObj::destruct_2  size=93  [class]
undefined4 cObj::destruct(byte flags)
{
    // vftable = cObj::vftable
    if (constructed() != 0) {
        CALL(FUN_00dd5650, void (*)(void *))(DAT_0165bed8);
    }
    // xml() (+0x4F4): vftable = cXmlBinary::vftable
    CALL(FUN_00e04180, void (*)())(); /* ECX: ? (xml member dtor) */
    // xml() (+0x4F4): vftable = cXml::vftable
    this->cModel::~cModel();
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4)this;
}

// 009FD240  FUN_009fd240  size=269  [between]
undefined4 __fastcall FUN_009fd240(cObj *self)
{
    int *attachment = (int *)((char *)self + 0x370); /* cModel+0x370: ? */
    int modelData;

    if (*attachment != 0 ||
        (modelData = *(int *)((char *)self + 0x330) /* cModel+0x330: model data */) == 0 ||
        (*(unsigned char *)&self->objFlags() & 2) != 0 ||
        *(int *)(modelData + 0xD8) == 0) {
        return 1;
    }
    if (0 < *(int *)(modelData + 0xCC)) {
        float10 value = CALL(FUN_00a13390, float10 (*)())(); /* ECX: ? */
        if (value < 0.1) {
            return 1;
        }
    }

    int mem = CALL(FUN_00dd3500, int (*)(int, unsigned int *))(0xD0, DAT_01b7bd48);
    int created;
    if (mem == 0) {
        created = 0;
    } else {
        created = (int)CALL(FUN_00a1ad60, undefined4 *(*)())(); /* ECX: ? (constructs at mem) */
    }
    *attachment = created;
    if (created == 0) {
        return 0;
    }

    if (CALL(FUN_00a1bef0, int (*)(cObj *, int, unsigned int *))(
            self, *(int *)((char *)self + 0x330), DAT_01b7bd48) == 0) {
        int obj = *attachment;
        if (obj != 0) {
            CALL(thunk_FUN_00a1bdd0, void (*)())(); /* ECX: ? (destroys obj) */
            FUN_00dd4920(obj);
            *attachment = 0;
        }
        return 0;
    }

    unsigned int *flags364 = (unsigned int *)((char *)self + 0x364); /* cModel+0x364: flags */
    if ((int *)*attachment != 0) {
        *flags364 |= 0x400000;
        *(int *)*attachment = 0;
    }
    if (*attachment != 0) {
        *(int *)(*attachment + 4) = 1;
        *(int *)(*attachment + 8) = 1;
    }
    if ((*(unsigned char *)&self->setFlags() & 8) != 0) {
        *flags364 &= 0xFFBFFFFF;
        return 1;
    }
    *flags364 |= 0x400000;
    return 1;
}

// 009FD350  FUN_009fd350  size=641  [between]
// __thiscall in the binary: self arrives in ECX.
int FUN_009fd350(cObj *self, int modelData, undefined4 texFileA, undefined4 texFileB,
                 undefined4 paramFile)
{
    ModelLoadParams params;

    params.useDefault = 1;
    if ((self->objFlags() & 2) == 0) {
        unsigned int i = 0;
        do {
            params.useDefault = 1;
            if (DAT_0189edb8[i] == self->modelObjId()) break;
            i++;
            params.useDefault = 0;
        } while (i < 60);
    }
    if (*(int *)(modelData + 0x68) < 1) {
        params.useDefault = 1;
    }
    self->objFlags() &= 0xFFFFFFFD;
    DAT_01f6c980 = self->modelObjId();
    params.global[0] = DAT_01be9190[0];
    params.global[1] = DAT_01be9190[1];
    params.global[2] = DAT_01be9190[2];
    unsigned int idHigh = self->modelObjId() & 0xFFFF0000;
    params.global[3] = DAT_01be9190[3];
    if (idHigh == 0x90000 || idHigh == 0xF0000 || idHigh == 0xD0000) {
        params.flag1C = 1;
        params.flag14 = 1;
    } else {
        params.flag1C = 0;
        params.flag14 = 0;
    }
    params.isCategoryE = (unsigned int)((self->modelObjId() & 0xF0000) == 0xE0000);
    params.flag18 = (idHigh == 0x90000 || idHigh == 0xA0000) ? 0 : 1;
    params.flag20 = (0 < *(int *)(modelData + 0xCC) || idHigh == 0x50000) ? 0 : 1;

    if (CALL(FUN_00a17c30, int (*)(int, undefined4, undefined4, undefined4, ModelLoadParams *,
                                   unsigned int *))(modelData, texFileA, texFileB, paramFile,
                                                    &params, DAT_01b7bd48) == 0) {
        return 0;
    }
    if (self->modelObjId() == 0x11011) {
        CALL(FUN_00a0ba60, void (*)(int))(1); /* ECX: ? */
    }
    if (params.useDefault == 1) {
        self->objFlags() |= 2;
        return 1;
    }

    CALL(FUN_00a13340, void (*)(int))((self->modelObjId() & 0xFF000000) != 0); /* ECX: ? */
    unsigned int category = self->modelObjId() & 0xF0000;
    if (category == 0x10000 || category == 0x20000 || category == 0xD0000 ||
        category == 0xF0000 || category == 0xE0000 || category == 0x70000) {
        CALL(FUN_00a13340, void (*)(int))(1); /* ECX: ? */
    }
    unsigned int id = self->modelObjId();
    if ((id & 0xF0000) == 0x50000 || (id & 0xF0000) == 0xA0000) {
        *(int *)((char *)self + 0x340) = 1; /* cModel+0x340: ? */
    }
    unsigned int *entry = DAT_01890128;
    do {
        if (id == *entry) {
            CALL(FUN_00a0bf60, void (*)(int, int))(id == 0x20110, 1); /* ECX: ? */
            break;
        }
        entry++;
    } while ((int)entry < 0x1890198);

    unsigned int *flags364 = (unsigned int *)((char *)self + 0x364); /* cModel+0x364: flags */
    if (idHigh == 0x90000 || self->modelObjId() == 0xD5500) {
        *flags364 |= 0x400;
    } else {
        *flags364 &= 0xFFFFFBFF;
    }
    if ((*(unsigned char *)&self->objFlags() & 2) != 0) {
        self->vf20();
    }
    if ((self->objId() & 0xF0000) == 0x60000) {
        if (CALL(FUN_00a0bd30, int (*)())() != 0) { /* ECX: ? */
            *((unsigned char *)self + 0x44D) = 0; /* cModel+0x44D: ? */
        }
        if (CALL(FUN_00a0bce0, int (*)())() != 0 && /* ECX: ? */
            CALL(FUN_00a0bc90, int (*)())() != 0) { /* ECX: ? */
            *((unsigned char *)self + 0x44D) = 4; /* cModel+0x44D: ? */
        }
    }
    return 1;
}

// 009FD5E0  FUN_009fd5e0  size=69  [between]
// __thiscall in the binary: self arrives in ECX.
bool FUN_009fd5e0(cObj *self, unsigned int modelFile, undefined4 texFileA, undefined4 texFileB,
                  undefined4 paramFile, unsigned int cutInfoFile)
{
    int modelData = cModelDataManager::EntryModelData(modelFile, cutInfoFile);
    if (modelData == 0) {
        return false;
    }
    self->objFlags() &= 0xFFFFFFFD;
    return FUN_009fd350(self, modelData, texFileA, texFileB, paramFile) != 0;
}

// 009FD630  FUN_009fd630  size=102  [between]
// __thiscall in the binary: self arrives in ECX.
void FUN_009fd630(cObj *self, cObj *source)
{
    if ((*(unsigned char *)&self->objFlags() & 2) == 0) {
        self->objId() = source->objId();
        self->objSubId() = source->objSubId();
    }
    self->baseObjId() = source->baseObjId();
    self->field51C() = source->field51C();
    CALL(FUN_00a12890, void (*)(cObj *))(source); /* ECX: ? */
    self->field4E4() = source->field4E4();
    self->field4E8() = source->field4E8();
}

// 009FD6A0  FUN_009fd6a0  size=30  [between]
void __fastcall FUN_009fd6a0(cObj *self)
{
    if (self->linkedObj() != 0 && (self->linkedObj()->stateFlags() & 3) != 0) {
        self->linkedObj() = 0;
    }
}

// 009FD6C0  cObj::vf0C  size=62  [class]
void cObj::vf0C()
{
    if (ownedObj4DC() != 0) {
        CALL(FUN_00eaa6e0, void (*)(unsigned int, int))(0x3F800000 /* 1.0f */, 0); /* ECX: ? */
    }
    void *owned = ownedObj4DC();
    if (owned != 0) {
        (*(DeletingDtorFn *)*(void **)owned)(owned, 1);
        ownedObj4DC() = 0;
    }
}

// 009FD700  FUN_009fd700  size=323  [callgraph]
void __fastcall FUN_009fd700(cObj *self)
{
    unsigned char *kind = (unsigned char *)self + 0x44D; /* cModel+0x44D: ? */
    unsigned int id = self->objId();
    unsigned int low;

    switch (id & 0xF0000) {
    case 0x10000:
        *kind = 0;
        return;
    case 0x20000:
        *kind = 1;
        return;
    case 0x30000:
        *kind = !FUN_009f9370(id);
        return;
    case 0x90000:
        *kind = 3;
        return;
    case 0xA0000:
        *kind = 5;
        return;
    case 0xD0000:
        if ((id & 0xF000) == 0x5000) *kind = 3;
        if ((id & 0xFFFF) == 0x401) *kind = 3;
        if ((id & 0xFFFF) == 0x402) *kind = 3;
        break;
    case 0xE0000:
        if ((id & 0xF000) == 0x5000) {
            *kind = 3;
            return;
        }
        break;
    case 0xF0000:
        if ((id & 0xF000) == 0x5000) *kind = 3;
        low = id & 0xFFFF;
        if (0x3FF < low && low < 0x411) *kind = 3;
        if (low == 0x41A) *kind = 3;
        if (0xD3F < low && low < 0xD43) {
            *kind = 3;
            return;
        }
        break;
    }
}

// 009FD850  FUN_009fd850  size=33  [callgraph]
// __thiscall in the binary: self arrives in ECX.
bool FUN_009fd850(cObj *self, undefined4 name)
{
    int hash = CALL(FUN_00e03ea0, int (*)(undefined4))(name);
    return self->nameHash() == hash;
}

// 009FD880  FUN_009fd880  size=25  [callgraph]
bool __fastcall FUN_009fd880(cObj *self)
{
    if (self->ownedObj4DC() == 0) {
        return false;
    }
    return *(int *)((char *)self->ownedObj4DC() + 0x98) != 0;
}

// 009FD8A0  FUN_009fd8a0  size=695  [callgraph]
// __thiscall in the binary: self arrives in ECX.
// Tests the segment from->to against a sphere around every enabled part; keeps the hit nearest
// to `from` in outHit (4 floats) and its radius in outRadius. Returns 1 if anything was hit.
int FUN_009fd8a0(cObj *self, float *outHit, float *outRadius, float *from, float *to)
{
    int partIndex = 0;
    if (*(int *)((char *)self + 0x330) == 0) { /* cModel+0x330: model data */
        return 0;
    }

    int root = *(int *)((char *)self + 0x334);             /* cModel+0x334: root part */
    short partCount = *(short *)((char *)self + 0x324);    /* cModel+0x324: mesh count */
    int found = 0;
    float dirX = to[0] - from[0];
    float dirY = to[1] - from[1];
    float dirZ = to[2] - from[2];

    if (0 < partCount) {
        int partOffset = 0;
        do {
            int part;
            if (partIndex < 0 || *(short *)((char *)self + 0x324) <= partIndex) {
                part = 0;
            } else {
                part = *(int *)((char *)self + 0x320) /* cModel+0x320: meshes */ + partOffset;
            }

            float bmin[3];
            float bmax[3];
            if ((*(unsigned char *)(part + 0x38) & 1) != 0 &&
                CALL(FUN_00a0a890, int (*)(float *, float *, int))(bmin, bmax, partIndex) != 0) {
                float radius = bmax[0] - bmin[0];
                float sizeY = bmax[1] - bmin[1];
                float sizeZ = bmax[2] - bmin[2];
                float halfMinY = bmin[1] * 0.5f;
                float center[4];
                center[0] = bmin[0] * 0.5f + radius;
                center[1] = halfMinY + sizeY;
                center[2] = bmin[2] * 0.5f + sizeZ;
                if (radius <= sizeY) radius = sizeY;
                if (radius <= sizeZ) radius = sizeZ;
                *(unsigned int *)&center[3] = 0x3F800000;  // 1.0f
                D3DXVec3TransformNormal(center, center, (void *)(root + 0x10));
                center[0] = *(float *)(root + 0x40) + center[0];
                center[1] = *(float *)(root + 0x44) + center[1];
                center[2] = *(float *)(root + 0x48) + center[2];

                float hit[4];
                if (0.0 <= (center[2] - from[2]) * dirZ + (center[0] - from[0]) * dirX +
                               (center[1] - from[1]) * dirY &&
                    FUN_00d97a20(hit, from, to, center, radius) != 0) {
                    if (found == 0) {
                        outHit[0] = hit[0];
                        found = 1;
                        outHit[1] = hit[1];
                        outHit[2] = hit[2];
                        outHit[3] = hit[3];
                        *outRadius = radius;
                    } else if (sqrt((from[1] - hit[1]) * (from[1] - hit[1]) +
                                    (from[0] - hit[0]) * (from[0] - hit[0]) +
                                    (from[2] - hit[2]) * (from[2] - hit[2])) <
                               sqrt((from[1] - outHit[1]) * (from[1] - outHit[1]) +
                                    (from[0] - outHit[0]) * (from[0] - outHit[0]) +
                                    (from[2] - outHit[2]) * (from[2] - outHit[2]))) {
                        outHit[0] = hit[0];
                        outHit[1] = hit[1];
                        outHit[2] = hit[2];
                        outHit[3] = hit[3];
                        *outRadius = radius;
                    }
                }
            }
            partOffset += 0x70;
            partIndex++;
        } while (partIndex < partCount);
    }
    return found;
}

// 009FDB60  FUN_009fdb60  size=528  [callgraph]
// __thiscall in the binary: self arrives in ECX.
void FUN_009fdb60(cObj *self, undefined4 param_2, short *entry)
{
    unsigned char tmpA[4];
    unsigned char tmpB[4];
    unsigned int desc[55];

    CALL(FUN_0118f7b0, void (*)())(); /* ECX: ? */
    if ((char)entry[4] == '\0') {
        return;
    }

    int modelData = *(int *)((char *)self + 0x330); /* cModel+0x330: model data */
    bool hasCC;
    if (modelData == 0) {
        hasCC = false;
    } else {
        hasCC = 0 < *(int *)(modelData + 0xCC);
    }
    int records = *(int *)(modelData + 0xB0);   // 0x60-byte records
    int placements = *(int *)(modelData + 0xA0); // 0x14-byte records
    if (self->objId() != 0x2020C) {
        CALL(FUN_009f8ce0, void (*)(short *))(entry); /* ECX: ? */
    }

    int i = 0;
    if (0 < entry[3]) {
        do {
            int record = (entry[2] + i) * 0x60 + records;
            undefined4 *placement = (undefined4 *)(placements + (entry[2] + i) * 0x14);
            unsigned char mode = *(unsigned char *)(record + 0x54);
            if (mode == 0 || (mode == 2 && hasCC) || (mode == 3 && !hasCC)) {
                CALL(FUN_00930610, void (*)(int, undefined4, unsigned int *))(
                    (int)*(short *)(record + 0x50), *(undefined4 *)(record + 0x4C), desc);
                CALL(FUN_0092f970, void (*)(undefined2, unsigned char *))(
                    *(undefined2 *)(record + 0x52), tmpA);

                int partBase = (int)self;
                if (*entry != -1) {
                    int partNo = (int)*entry;
                    int holder = *(int *)((char *)self + 0x360); /* cModel+0x360: ? */
                    if (*(int *)((char *)self + 0x360) == 0) {
                        holder = (int)self;
                    }
                    if (partNo < 0 || *(short *)(holder + 0x358) <= partNo) {
                        partBase = 0;
                    } else {
                        partBase = partNo * 0xB0 + *(int *)(holder + 0x350);
                    }
                }
                int *typeId = CALL(FUN_009f8b60, int *(*)())(); /* ECX: ? */
                desc[0] = *typeId << 0x10 | 0xB;
                int *spawner = (int *)FUN_00910da0();
                SpawnFn spawn = *(SpawnFn *)(*spawner + 0x1C);
                undefined4 spawned = spawn(spawner, tmpB, desc, partBase + 0x10, placement[0],
                                           placement[2], (int)placement[3] / 3,
                                           *(undefined2 *)(placement + 1), 0);
                CALL(FUN_00910ab0, void (*)(undefined4))(spawned); /* ECX: ? */
            }
            i++;
        } while (i < entry[3]);
    }
}

// 009FDD80  FUN_009fdd80  size=87  [callgraph]
// __thiscall in the binary: self arrives in ECX.
undefined4 FUN_009fdd80(cObj *self, undefined4 param_2)
{
    CALL(FUN_00917740, void (*)())(); /* ECX: ? */
    int modelData = *(int *)((char *)self + 0x330); /* cModel+0x330: model data */
    if (modelData == 0) {
        return 0;
    }
    int entry = *(int *)(modelData + 0xB8);
    int i = 0;
    if (0 < *(int *)(modelData + 0xBC)) {
        do {
            FUN_009fdb60(self, param_2, (short *)entry);
            i++;
            entry += 0xC;
        } while (i < *(int *)(*(int *)((char *)self + 0x330) + 0xBC));
    }
    return 1;
}

// 009FDDE0  FUN_009fdde0  size=58  [callgraph]
void __fastcall FUN_009fdde0(cObj *self)
{
    if (self->field4F0() != 0) {
        CALL(FUN_00a805f0, void (*)())(); /* ECX: ? */
        return;
    }
    if ((self->stateFlags() & 2) == 0) {
        self->stateFlags() |= 2;
        self->vf20();
        self->vf0C();  // tail call
    }
}

// 009FDE20  FUN_009fde20  size=50  [callgraph]
bool __fastcall FUN_009fde20(cObj *self)
{
    unsigned int flags;
    if ((self->stateFlags() & 3) == 0 &&
        ((flags = self->objFlags()) & 4) == 0 && (flags & 2) == 0 &&
        (flags & 8) == 0 && (flags & 0x10000) == 0) {
        return 0 < *(short *)((char *)self + 0x324); /* cModel+0x324: mesh count */
    }
    return false;
}

// 009FDE60  FUN_009fde60  size=799  [callgraph]
// Parses an object name ("xx1234" or "<dlc>_xx1234") into an object id; -1 on failure.
int FUN_009fde60(char *name)
{
    auto hexDigit = [](char c) -> int {
        if ((unsigned char)(c - 0x30U) < 10) return c - 0x30;   // '0'..'9'
        if ((unsigned char)(c + 0x9FU) < 6) return c - 0x57;    // 'a'..'f'
        return -1;
    };
    char code[3];
    char *context;

    if (FUN_00fdc7b0((uint *)name, '_') != 0) {
        char buf[256];
        _strcpy_s(buf, 0x100, name);
        char *token = _strtok_s(buf, "_", &context);
        if (token == 0) {
            return -1;
        }
        unsigned int i = 0;
        do {
            if (__stricmp(DAT_018901f8[i].name, token) == 0) {
                char buf2[32];
                char *context2;
                _strcpy_s(buf2, 0x20, name);
                char *dlcName = _strtok_s(buf2, "_", &context2);
                char *rest = _strtok_s(0, "_", &context2);
                unsigned int dlc = 0;
                while (__stricmp(DAT_018901f8[dlc].name, dlcName) != 0) {
                    dlc++;
                    if (1 < dlc) {
                        return -1;
                    }
                }
                unsigned int dlcBase = DAT_018901f8[dlc].idMask;
                if (dlcBase == 0xFFFFFFFF) {
                    return -1;
                }
                ObjCategoryPrefix *category = DAT_01890198;
                unsigned int k = 0;
                while (true) {
                    code[0] = rest[0];
                    code[1] = rest[1];
                    code[2] = 0;
                    if (__stricmp(category->prefix, code) == 0) break;
                    k += 8;
                    category++;
                    if (0x5F < k) {
                        return -1;
                    }
                }
                int d0 = hexDigit(rest[2]);
                int d1 = hexDigit(rest[3]);
                int d2 = hexDigit(rest[4]);
                int d3 = hexDigit(rest[5]);
                if (d0 < 0) return -1;
                if (d1 < 0) return -1;
                if (d2 < 0) return -1;
                if (d3 < 0) return -1;
                return (int)(dlcBase + category->category + ((d0 * 0x10 + d1) * 0x10 + d2) * 0x10 + d3);
            }
            i++;
        } while (i < 2);
    }

    ObjCategoryPrefix *category = DAT_01890198;
    unsigned int k = 0;
    while (true) {
        code[0] = name[0];
        code[1] = name[1];
        code[2] = 0;
        if (__stricmp(category->prefix, code) == 0) break;
        k += 8;
        category++;
        if (0x5F < k) {
            return -1;
        }
    }
    int d0 = hexDigit(name[2]);
    int d1 = hexDigit(name[3]);
    int d2 = hexDigit(name[4]);
    int d3 = hexDigit(name[5]);
    if (d0 < 0) return -1;
    if (d1 < 0) return -1;
    if (d2 < 0) return -1;
    if (d3 < 0) return -1;
    return ((d0 * 0x10 + d1) * 0x10 + d2) * 0x10 + category->category + d3;
}

// 009FE180  FUN_009fe180  size=457  [callgraph]
// Formats the file path of object `id` ("<dir>\<prefix><id:04x><suffix><ext>"); 1 on success.
undefined4 FUN_009fe180(char *out, size_t outSize, uint id, int altExt)
{
    char *ext = DAT_0165bfb4;
    if (altExt != 0) {
        ext = DAT_0165bfac;
    }

    bool inColumnA = false;
    for (unsigned int i = 0; i < 64; i++) {
        if (DAT_0189eab8[i].objA == id) {
            inColumnA = true;
            break;
        }
    }
    bool inColumnB = false;
    for (unsigned int i = 0; i < 64; i++) {
        if (DAT_0189eab8[i].objB == id) {
            inColumnB = true;
            break;
        }
    }
    bool special = id == 0x1E012 || id == 0x1FFF2 || id == 0x1E013 || id == 0x1FFF3;

    char *suffix;
    if (inColumnA || inColumnB || special) {
        suffix = DAT_016416fa;
        if ((DAT_01bea064 & 0x8000) == 0) {
            suffix = DAT_0165c260;
        }
    } else {
        suffix = DAT_016416fa;
    }

    if ((id & 0xFF000000) == 0) {
        ObjCategoryPrefix *category = DAT_01890198;
        unsigned int k = 0;
        do {
            if (category->category == (id & 0xFFFF0000)) {
                _sprintf_s(out, outSize, "%s\\%s%04x%s%s", category->prefix, category->prefix,
                           id & 0xFFFF, suffix, ext);
                return 1;
            }
            k += 8;
            category++;
        } while (k < 0x60);
        return 0;
    }

    char dlcName[32] = {};
    unsigned int dlc = 0;
    do {
        if ((id & 0xFF000000) == DAT_018901f8[dlc].idMask) {
            _strcpy_s(dlcName, 0x20, DAT_018901f8[dlc].name);
            break;
        }
        dlc++;
    } while (dlc < 2);
    if (dlcName[0] != '\0') {
        ObjCategoryPrefix *category = DAT_01890198;
        unsigned int k = 0;
        do {
            if (category->category == (id & 0xF0000)) {
                _sprintf_s(out, outSize, "%s\\%s%04x%s%s", dlcName, category->prefix, id & 0xFFFF,
                           suffix, ext);
                return 1;
            }
            k += 8;
            category++;
        } while (k < 0x60);
    }
    return 0;
}

// 009FE410  FUN_009fe410  size=513  [callgraph]
// Returns the DAT_0189eab8 entry for `id` if the file of its objA exists, else null.
undefined4 *FUN_009fe410(int id)
{
    int index = 0;
    while (DAT_0189eab8[index].id == 0 || DAT_0189eab8[index].id != id) {
        index++;
        if (63 < index) {
            return 0;
        }
    }
    unsigned int objA = DAT_0189eab8[index].objA;

    bool inColumnA = false;
    for (unsigned int i = 0; i < 64; i++) {
        if (DAT_0189eab8[i].objA == objA) {
            inColumnA = true;
            break;
        }
    }
    bool inColumnB = false;
    for (unsigned int i = 0; i < 64; i++) {
        if (DAT_0189eab8[i].objB == objA) {
            inColumnB = true;
            break;
        }
    }
    bool special = objA == 0x1E012 || objA == 0x1FFF2 || objA == 0x1E013 || objA == 0x1FFF3;

    char *suffix;
    if (inColumnA || inColumnB || special) {
        suffix = DAT_016416fa;
        if ((DAT_01bea064 & 0x8000) == 0) {
            suffix = DAT_0165c260;
        }
    } else {
        suffix = DAT_016416fa;
    }

    char dlcName[32];
    char path[128];
    char *dirName = 0;
    char *prefix = 0;
    bool haveName = false;
    if ((objA & 0xFF000000) == 0) {
        ObjCategoryPrefix *category = DAT_01890198;
        unsigned int k = 0;
        do {
            if (category->category == (objA & 0xFFFF0000)) {
                dirName = category->prefix;
                prefix = dirName;
                haveName = true;
                break;
            }
            k += 8;
            category++;
        } while (k < 0x60);
    } else {
        unsigned int dlc = 0;
        for (int j = 0; j < 32; j++) dlcName[j] = '\0';
        do {
            if ((objA & 0xFF000000) == DAT_018901f8[dlc].idMask) {
                _strcpy_s(dlcName, 0x20, DAT_018901f8[dlc].name);
                break;
            }
            dlc++;
        } while (dlc < 2);
        if (dlcName[0] != '\0') {
            ObjCategoryPrefix *category = DAT_01890198;
            unsigned int k = 0;
            do {
                if (category->category == (objA & 0xF0000)) {
                    dirName = dlcName;
                    prefix = category->prefix;
                    haveName = true;
                    break;
                }
                k += 8;
                category++;
            } while (k < 0x60);
        }
    }
    if (haveName) {
        _sprintf_s(path, 0x80, "%s\\%s%04x%s%s", dirName, prefix, objA & 0xFFFF, suffix,
                   DAT_0165bfb4);
    }

    if (CALL(FUN_00dec390, int (*)(char *))(path) == 0) {
        return 0;
    }
    return (undefined4 *)&DAT_0189eab8[index];
}

// 009FE620  FUN_009fe620  size=129  [callgraph]
// Returns the DAT_0189eab8 entry for `id` if it has an objB whose file exists, else null.
undefined4 *FUN_009fe620(int id)
{
    char path[128];
    int index = 0;
    while (DAT_0189eab8[index].id == 0 || DAT_0189eab8[index].id != id ||
           DAT_0189eab8[index].objB == 0xFFFFFFFF) {
        index++;
        if (63 < index) {
            return 0;
        }
    }
    FUN_009fe180(path, 0x80, DAT_0189eab8[index].objB, 0);
    if (CALL(FUN_00dec390, int (*)(char *))(path) == 0) {
        return 0;
    }
    return (undefined4 *)&DAT_0189eab8[index];
}

// 009FE6B0  FUN_009fe6b0  size=92  [callgraph]
undefined4 FUN_009fe6b0(undefined4 param_1, uint id)
{
    bool noFiles = false;
    for (unsigned int *p = DAT_0189e7b8; *p != 0xFFFFFFFF; p++) {
        if (*p == id) {
            noFiles = true;
            break;
        }
    }
    if (!noFiles && (id & 0xFFFF0000) != 0x90000) {
        uint fileId = FUN_009f9d10(id);
        return CALL(FUN_00e9e8f0, undefined4 (*)(undefined4, uint))(param_1, fileId);
    }
    CALL(FUN_00de3540, void (*)(int, int))(0, 0); /* ECX: ? */
    return 0;
}

// 009FE710  FUN_009fe710  size=190  [callgraph]
// Acquires the files of object `id`, its dependencies and its linked entries (see FUN_009fe7d0).
void FUN_009fe710(uint id, undefined4 param_2)
{
    for (unsigned int *p = DAT_0189e7b8; *p != 0xFFFFFFFF; p++) {
        if (*p == id) {
            return;
        }
    }
    if ((id & 0xFFFF0000) != 0x90000) {
        uint fileId = FUN_009f9d10(id);
        FUN_00e9e9d0(fileId);
        undefined4 *deps = FUN_009f9ed0(fileId, param_2);
        if (deps != 0) {
            int *dep = (int *)((char *)deps + 8);
            for (int n = 0; n < 0x30; n++, dep++) {
                if (*dep == 0) break;
                FUN_00e9e9d0(FUN_009f9d10(*dep));
            }
        }
        ObjFileEntry *entry = (ObjFileEntry *)FUN_009fe410(fileId);
        if (entry != 0) {
            FUN_00e9e9d0(entry->objA);
        }
        entry = (ObjFileEntry *)FUN_009fe620(fileId);
        if (entry != 0) {
            FUN_00e9e9d0(entry->objB);
        }
    }
}

// 009FE7D0  FUN_009fe7d0  size=190  [callgraph]
// Releases what FUN_009fe710 acquired.
void FUN_009fe7d0(uint id, undefined4 param_2)
{
    for (unsigned int *p = DAT_0189e7b8; *p != 0xFFFFFFFF; p++) {
        if (*p == id) {
            return;
        }
    }
    if ((id & 0xFFFF0000) != 0x90000) {
        uint fileId = FUN_009f9d10(id);
        FUN_00e9ea80(fileId);
        undefined4 *deps = FUN_009f9ed0(fileId, param_2);
        if (deps != 0) {
            int *dep = (int *)((char *)deps + 8);
            for (int n = 0; n < 0x30; n++, dep++) {
                if (*dep == 0) break;
                FUN_00e9ea80(FUN_009f9d10(*dep));
            }
        }
        ObjFileEntry *entry = (ObjFileEntry *)FUN_009fe410(fileId);
        if (entry != 0) {
            FUN_00e9ea80(entry->objA);
        }
        entry = (ObjFileEntry *)FUN_009fe620(fileId);
        if (entry != 0) {
            FUN_00e9ea80(entry->objB);
        }
    }
}

// 009FEB00  cObj::setCustomParam  size=444  [class]
// Layout: params[0] = count, params[4..4+count) = parameter codes, then (4-byte aligned)
// the dword values, followed by word values, byte values and packed bit fields.
void cObj::setCustomParam(unsigned char *params, cObj *obj)
{
    unsigned int count = params[0];
    unsigned char *dwordCursor = params + (unsigned char)(((count + 3) >> 2) * 4) + 4;
    unsigned char bitsLeft = 8;
    int i = 0;
    unsigned char *byteCursor = dwordCursor;
    unsigned char *wordCursor = dwordCursor;

    if (count != 0) {
        do {
            switch (params[i + 4]) {
            case 1:
                obj->nameHash() = *(int *)dwordCursor;
                CALL(FUN_00a18be0, void (*)(cObj *))(obj); /* ECX: ? */
                // fall through
            case 3:
                dwordCursor += 4;
                break;
            case 2:
                dwordCursor += 4;
                *(int *)((char *)obj + 0x18C) = 0; /* cModel+0x18C: ? */
                break;
            default:
                CALL(FUN_00dd5650, void (*)(void *, unsigned char))(DAT_0165c288, params[i + 4]);
                break;
            case 0x20:
            case 0x21:
            case 0x22:
            case 0x23:
                wordCursor += 2;
                break;
            case 0x40:
                *((unsigned char *)obj + 0x44C) = *byteCursor; /* cModel+0x44C: ? */
                // fall through
            case 0x41:
            case 0x44:
                byteCursor++;
                break;
            case 0x42:
                obj->field4C9() = *byteCursor;
                byteCursor++;
                break;
            case 0x43: {
                unsigned char percent = *byteCursor;
                byteCursor++;
                int mesh = 0;
                float scale = (float)((float)percent * 0.01);
                if (0 < *(short *)((char *)obj + 0x324)) { /* cModel+0x324: mesh count */
                    int meshOffset = 0;
                    do {
                        int meshes = *(int *)((char *)obj + 0x320); /* cModel+0x320: meshes */
                        *(float *)(meshes + 0x10 + meshOffset) = scale;
                        int m = meshes + meshOffset;
                        *(float *)(m + 0x14) = scale;
                        mesh++;
                        *(float *)(m + 0x18) = scale;
                        meshOffset += 0x70;
                        *(unsigned int *)(m + 0x1C) = 0x3F800000;  // 1.0f
                    } while (mesh < *(short *)((char *)obj + 0x324));
                }
                break;
            }
            case 0x80:
                bitsLeft -= 4;
                *(unsigned int *)((char *)obj + 0x338) = /* cModel+0x338: ? */
                    *byteCursor >> (bitsLeft & 0x1F) & 0xF;
                break;
            case 0xA0:
                bitsLeft -= 2;
                break;
            case 0xC0:
                bitsLeft -= 1;
                if (*(short *)((char *)obj + 0x324) != 0) {
                    CALL(FUN_00a0ba60, void (*)(unsigned int))(
                        *byteCursor >> (bitsLeft & 0x1F) & 1); /* ECX: ? */
                }
                break;
            case 0xC1:
                bitsLeft -= 1;
                if (*(short *)((char *)obj + 0x324) != 0) {
                    CALL(FUN_00a13340, void (*)(unsigned int))(
                        *byteCursor >> (bitsLeft & 0x1F) & 1); /* ECX: ? */
                }
                break;
            case 0xC2:
                bitsLeft -= 1;
                obj->vf20();
                break;
            case 0xC3:
            case 0xC4:
                bitsLeft -= 1;
                break;
            }
            if (wordCursor < dwordCursor) {
                wordCursor = dwordCursor;
            }
            if (byteCursor < wordCursor) {
                byteCursor = wordCursor;
            }
            if (bitsLeft == 0) {
                byteCursor++;
                bitsLeft = 8;
            }
            i++;
        } while (i < (int)count);
    }
}

// 00A005F0  cObj::construct  size=172  [class]
void cObj::construct(unsigned int modelObjId, unsigned int setFlags, unsigned int objId,
                     unsigned int objSubId, unsigned int *filePair)
{
    this->modelObjId() = modelObjId;
    if (constructed() != 0) {
        CALL(FUN_00dd5650, void (*)(void *))(DAT_0165c37c);
        FUN_009fe7d0(this->objId(), this->objSubId());
    }
    this->setFlags() = setFlags;
    this->objSubId() = objSubId;
    this->objId() = objId;
    baseObjId() = objId;
    constructed() = 1;
    filePair0() = filePair[0];
    unsigned int second = filePair[1];
    field524() = 0;
    filePair1() = second;
    field51C() = -1;
    FUN_009fe710(objId, objSubId);
    filesAcquired() = 1;
}

// 00A006A0  FUN_00a006a0  size=25  [between]
// `self` is passed through in ECX.
void FUN_00a006a0(cObj *self, undefined4 id, undefined4 flags, undefined4 filePair)
{
    self->construct(id, flags, id, flags, (unsigned int *)filePair);
}

// 00A006C0  FUN_00a006c0  size=105  [between]
void __fastcall FUN_00a006c0(cObj *self)
{
    if (self->filesAcquired() != 0) {
        FUN_009fe7d0(self->objId(), self->objSubId());
    }
    if (self->nameHash() != 0) {
        CALL(FUN_00a18c30, void (*)(cObj *))(self); /* ECX: ? */
    }
    FUN_0092f760((undefined4 *)&self->objInfo());
    self->filesAcquired() = 0;
    self->field4F0() = 0;
    self->constructed() = 0;
}

// 00A00730  cObj::vf08  size=63  [class]
undefined4 cObj::vf08()
{
    unsigned int *info = CALL(FUN_0092f750, unsigned int *(*)(unsigned int))(modelObjId());
    objInfo() = info;
    this->vf3C(*info);
    if (modelObjId() == 0x700000) {
        return true;
    }

    int modelFile = CALL(FUN_00de44b0, int (*)(void *, int))(DAT_01657e1c, 0);
    int texFileA = CALL(FUN_00de44b0, int (*)(void *, int))(DAT_0164518c, 0);
    int texFileB = CALL(FUN_00de44b0, int (*)(void *, int))(DAT_01645174, 0);
    int texFileC = CALL(FUN_00de44b0, int (*)(void *, int))(DAT_01645170, 0);
    int paramFile = CALL(FUN_00de4550, int (*)(char *, int))("_param.bxm", 0);
    int cutInfoFile = CALL(FUN_00de4500, int (*)(char *))("CutInfo.bxm");
    if (texFileA == 0) {
        if (texFileB == 0 || (texFileA = texFileC, texFileC == 0)) {
            texFileB = CALL(FUN_00de4500, int (*)(char *))("dummy.wtb");
            texFileA = 0;
            if (texFileB == 0) {
                texFileB = CALL(FUN_00de4500, int (*)(char *))("dummy.wta");
                texFileA = CALL(FUN_00de4500, int (*)(char *))("dummy.wtp");
            }
        }
    } else {
        texFileB = 0;
    }
    if (modelFile == 0 && (modelFile = overrideWmb()) == 0) {
        modelFile = CALL(FUN_00de4500, int (*)(char *))("dummy.wmb");
        objFlags() |= 2;
    }
    CALL(FUN_00a09c00, void (*)(unsigned int *))(&filePair0());

    int modelData = cModelDataManager::EntryModelData(modelFile, cutInfoFile);
    if (modelData == 0) {
        return false;
    }
    objFlags() &= 0xFFFFFFFD;
    return FUN_009fd350(this, modelData, texFileA, texFileB, paramFile) != 0;
}

// 00A0076F  FUN_00a0076f  size=327  [callgraph]
// Entry point inside cObj::vf08 (after the 0x700000 check); `this` arrives in EDI and the two
// file handles live in the caller's stack slots.
bool FUN_00a0076f(void)
{
    cObj *self; // = EDI, not expressible in C

    int modelFile = CALL(FUN_00de44b0, int (*)(void *, int))(DAT_01657e1c, 0);
    int texFileA = CALL(FUN_00de44b0, int (*)(void *, int))(DAT_0164518c, 0);
    int texFileB = CALL(FUN_00de44b0, int (*)(void *, int))(DAT_01645174, 0);
    int texFileC = CALL(FUN_00de44b0, int (*)(void *, int))(DAT_01645170, 0);
    int paramFile = CALL(FUN_00de4550, int (*)(char *, int))("_param.bxm", 0);
    int cutInfoFile = CALL(FUN_00de4500, int (*)(char *))("CutInfo.bxm");
    if (texFileA == 0) {
        if (texFileB == 0 || (texFileA = texFileC, texFileC == 0)) {
            texFileB = CALL(FUN_00de4500, int (*)(char *))("dummy.wtb");
            texFileA = 0;
            if (texFileB == 0) {
                texFileB = CALL(FUN_00de4500, int (*)(char *))("dummy.wta");
                texFileA = CALL(FUN_00de4500, int (*)(char *))("dummy.wtp");
            }
        }
    } else {
        texFileB = 0;
    }
    if (modelFile == 0 && (modelFile = self->overrideWmb()) == 0) {
        modelFile = CALL(FUN_00de4500, int (*)(char *))("dummy.wmb");
        self->objFlags() |= 2;
    }
    CALL(FUN_00a09c00, void (*)(unsigned int *))(&self->filePair0());

    int modelData = cModelDataManager::EntryModelData(modelFile, cutInfoFile);
    if (modelData == 0) {
        return false;
    }
    self->objFlags() &= 0xFFFFFFFD;
    return FUN_009fd350(self, modelData, texFileA, texFileB, paramFile) != 0;
}

// 00A008C0  FUN_00a008c0  size=401  [callgraph]
// __thiscall in the binary: self arrives in ECX.
undefined4 FUN_00a008c0(cObj *self, int modelData, undefined4 texFileA, undefined4 texFileB,
                        undefined4 paramFile, cObj *source)
{
    if (modelData == 0) {
        if (self->vf08() == 0) {
            return 0;
        }
    } else {
        unsigned int *info = CALL(FUN_0092f750, unsigned int *(*)(unsigned int))(self->modelObjId());
        self->objInfo() = info;
        self->vf3C(*info);
        if (FUN_009fd350(self, modelData, texFileA, texFileB, paramFile) == 0) {
            return 0;
        }
        if (source != 0) {
            FUN_009fd630(self, source);
        }
    }

    if (source == 0) {
        // switchD_0080dbae::default (00A17A40); ECX: ?
        ((void (*)())0x00A17A40)();
        if ((*(unsigned char *)&self->objFlags() & 2) == 0) {
            CALL(FUN_009f8b80, void (*)())(); /* ECX: ? */
            FUN_009fd700(self);
        }

        unsigned int *flags364 = (unsigned int *)((char *)self + 0x364); /* cModel+0x364: flags */
        bool check;
        if (*(int *)((char *)self + 0x370) == 0) { /* cModel+0x370: ? */
            unsigned int id = self->modelObjId();
            if ((id & 0xF0000) == 0x20000) {
                check = (id & 0xFFFF) != 0x91 && (id & 0xFFFF) != 0x221;
            } else {
                check = (id & 0xF0000) == 0x30000 && (id & 0xFFFF) != 0x90;
            }
        } else {
            check = true;
        }
        if (check) {
            int id = (int)self->modelObjId();
            if (FUN_00c13980(id) == 0 && FUN_00c139a0(id) == 0 && FUN_00c139f0(id) == 0 &&
                FUN_00c13a30(id) == 0 && FUN_00c13a70(id) == 0 && FUN_00c13a90(id) == 0 &&
                FUN_00c13ab0(id) == 0) {
                *flags364 |= 0x400000;
                goto finish;
            }
        }
        *flags364 &= 0xFFBFFFFF;
    }

finish:
    if (self->field51C() == -1) {
        self->field51C() = (int)CALL(FUN_00a4af90, uint (*)(int))(1); /* ECX: ? */
    }
    return 1;
}

// 00A00A60  FUN_00a00a60  size=353  [callgraph]
// Checks FUN_00e9eeb0 for the object and all its files; on a failure after the first file,
// releases (FUN_00e9e780) the object and the dependencies checked so far and returns 0.
undefined4 FUN_00a00a60(uint id, undefined4 param_2)
{
    for (unsigned int *p = DAT_0189e7b8; *p != 0xFFFFFFFF; p++) {
        if (*p == id) {
            return 1;
        }
    }
    if ((id & 0xFFFF0000) == 0x90000) {
        return 1;
    }
    if (FUN_00e9eeb0(FUN_009f9d10(id)) == 0) {
        return 0;
    }

    int checked = 0;
    undefined4 *deps = FUN_009f9ed0(id, param_2);
    if (deps != 0) {
        int *dep = (int *)((char *)deps + 8);
        for (; checked < 0x30; checked++, dep++) {
            if (*dep == 0) break;
            if (FUN_00e9eeb0(FUN_009f9d10(*dep)) == 0) goto rollback;
        }
    }
    {
        ObjFileEntry *entry = (ObjFileEntry *)FUN_009fe410(id);
        if (entry != 0 && FUN_00e9eeb0(FUN_009f9d10(entry->objA)) == 0) goto rollback;
        entry = (ObjFileEntry *)FUN_009fe620(id);
        if (entry != 0 && FUN_00e9eeb0(FUN_009f9d10(entry->objB)) == 0) goto rollback;
    }
    return 1;

rollback:
    CALL(FUN_00e9e780, void (*)(uint))(FUN_009f9d10(id));
    checked--;
    if (-1 < checked) {
        unsigned int *dep = (unsigned int *)((char *)deps + 8 + checked * 4);
        do {
            unsigned int depId = *dep;
            if ((depId & 0xF0000) == 0x20000 || (depId & 0xF0000) == 0xF0000) {
                int k = 0;
                unsigned int from = DAT_0189e8a0[0].from;
                while (from != 0xFFFFFFFF) {
                    if (from == depId) {
                        depId = DAT_0189e8a0[k].to;
                        break;
                    }
                    k++;
                    from = DAT_0189e8a0[k].from;
                }
            }
            CALL(FUN_00e9e780, void (*)(uint))(depId);
            dep--;
            checked--;
        } while (-1 < checked);
    }
    return 0;
}

// 00A00BD0  FUN_00a00bd0  size=204  [callgraph]
void FUN_00a00bd0(uint id, undefined4 param_2)
{
    for (unsigned int *p = DAT_0189e7b8; *p != 0xFFFFFFFF; p++) {
        if (*p == id) {
            return;
        }
    }
    if ((id & 0xFFFF0000) != 0x90000) {
        CALL(FUN_00e9e780, void (*)(uint))(FUN_009f9d10(id));
        undefined4 *deps = FUN_009f9ed0(id, param_2);
        if (deps != 0) {
            int *dep = (int *)((char *)deps + 8);
            for (int n = 0; n < 0x30; n++, dep++) {
                if (*dep == 0) break;
                CALL(FUN_00e9e780, void (*)(uint))(FUN_009f9d10(*dep));
            }
        }
        ObjFileEntry *entry = (ObjFileEntry *)FUN_009fe410(id);
        if (entry != 0) {
            CALL(FUN_00e9e780, void (*)(uint))(FUN_009f9d10(entry->objA));
        }
        entry = (ObjFileEntry *)FUN_009fe620(id);
        if (entry != 0) {
            CALL(FUN_00e9e780, void (*)(uint))(FUN_009f9d10(entry->objB));
        }
    }
}

// 00A00CA0  FUN_00a00ca0  size=241  [callgraph]
undefined4 FUN_00a00ca0(uint id, undefined4 param_2)
{
    typedef int (*CheckFn)(uint);
    for (unsigned int *p = DAT_0189e7b8; *p != 0xFFFFFFFF; p++) {
        if (*p == id) {
            return 1;
        }
    }
    if ((id & 0xFFFF0000) == 0x90000) {
        return 1;
    }
    if (CALL(FUN_00e9e7c0, CheckFn)(FUN_009f9d10(id)) == 0) {
        return 0;
    }
    undefined4 *deps = FUN_009f9ed0(id, param_2);
    if (deps != 0) {
        int *dep = (int *)((char *)deps + 8);
        for (int n = 0; n < 0x30; n++, dep++) {
            if (*dep == 0) break;
            if (CALL(FUN_00e9e7c0, CheckFn)(FUN_009f9d10(*dep)) == 0) {
                return 0;
            }
        }
    }
    ObjFileEntry *entry = (ObjFileEntry *)FUN_009fe410(id);
    if (entry != 0 && CALL(FUN_00e9e7c0, CheckFn)(FUN_009f9d10(entry->objA)) == 0) {
        return 0;
    }
    entry = (ObjFileEntry *)FUN_009fe620(id);
    if (entry != 0 && CALL(FUN_00e9e7c0, CheckFn)(FUN_009f9d10(entry->objB)) == 0) {
        return 0;
    }
    return 1;
}

// 00A00DA0  FUN_00a00da0  size=205  [callgraph]
undefined4 FUN_00a00da0(uint id, undefined4 param_2)
{
    typedef int (*CheckFn)(uint);
    for (unsigned int *p = DAT_0189e7b8; *p != 0xFFFFFFFF; p++) {
        if (*p == id) {
            return 1;
        }
    }
    if ((id & 0xFFFF0000) == 0x90000) {
        return 1;
    }
    if (CALL(FUN_00e9e860, CheckFn)(FUN_009f9d10(id)) == 0) {
        return 0;
    }
    undefined4 *deps = FUN_009f9ed0(id, param_2);
    if (deps != 0) {
        int *dep = (int *)((char *)deps + 8);
        for (int n = 0; n < 0x30; n++, dep++) {
            if (*dep == 0) break;
            if (CALL(FUN_00e9e860, CheckFn)(FUN_009f9d10(*dep)) == 0) {
                return 0;
            }
        }
    }
    ObjFileEntry *entry = (ObjFileEntry *)FUN_009fe410(id);
    if (entry != 0 && CALL(FUN_00e9e860, CheckFn)(FUN_009f9d10(entry->objA)) == 0) {
        return 0;
    }
    return 1;
}

// 00A00E70  FUN_00a00e70  size=265  [callgraph]
undefined4 FUN_00a00e70(uint id, undefined4 param_2)
{
    typedef int (*CheckFn)(uint);
    typedef int (*LookupFn)(int, int);
    for (unsigned int *p = DAT_0189e7b8; *p != 0xFFFFFFFF; p++) {
        if (*p == id) {
            return 1;
        }
    }
    if ((id & 0xFFFF0000) == 0x90000) {
        return 1;
    }
    if (CALL(FUN_00e9e960, LookupFn)(id, 0) == 0 &&
        CALL(FUN_00e9e860, CheckFn)(FUN_009f9d10(id)) == 0) {
        return 0;
    }
    undefined4 *deps = FUN_009f9ed0(id, param_2);
    if (deps != 0) {
        int *dep = (int *)((char *)deps + 8);
        for (int n = 0; n < 0x30; n++, dep++) {
            int depId = *dep;
            if (depId == 0) break;
            if (CALL(FUN_00e9e960, LookupFn)(depId, 0) == 0 &&
                CALL(FUN_00e9e860, CheckFn)(FUN_009f9d10(depId)) == 0) {
                return 0;
            }
        }
    }
    ObjFileEntry *entry = (ObjFileEntry *)FUN_009fe410(id);
    if (entry != 0 && CALL(FUN_00e9e960, LookupFn)(entry->objA, 0) == 0 &&
        CALL(FUN_00e9e860, CheckFn)(FUN_009f9d10(entry->objA)) == 0) {
        return 0;
    }
    return 1;
}

// 00A00F80  FUN_00a00f80  size=241  [callgraph]
undefined4 FUN_00a00f80(uint id, undefined4 param_2)
{
    typedef int (*CheckFn)(uint);
    for (unsigned int *p = DAT_0189e7b8; *p != 0xFFFFFFFF; p++) {
        if (*p == id) {
            return 1;
        }
    }
    if ((id & 0xFFFF0000) == 0x90000) {
        return 1;
    }
    if (CALL(FUN_00e9e810, CheckFn)(FUN_009f9d10(id)) == 0) {
        return 0;
    }
    undefined4 *deps = FUN_009f9ed0(id, param_2);
    if (deps != 0) {
        int *dep = (int *)((char *)deps + 8);
        for (int n = 0; n < 0x30; n++, dep++) {
            if (*dep == 0) break;
            if (CALL(FUN_00e9e810, CheckFn)(FUN_009f9d10(*dep)) == 0) {
                return 0;
            }
        }
    }
    ObjFileEntry *entry = (ObjFileEntry *)FUN_009fe410(id);
    if (entry != 0 && CALL(FUN_00e9e810, CheckFn)(FUN_009f9d10(entry->objA)) == 0) {
        return 0;
    }
    entry = (ObjFileEntry *)FUN_009fe620(id);
    if (entry != 0 && CALL(FUN_00e9e810, CheckFn)(FUN_009f9d10(entry->objB)) == 0) {
        return 0;
    }
    return 1;
}

// 00A01080  FUN_00a01080  size=239  [callgraph]
undefined4 FUN_00a01080(uint id, undefined4 param_2)
{
    typedef int (*CheckFn)(uint);
    for (unsigned int *p = DAT_0189e7b8; *p != 0xFFFFFFFF; p++) {
        if (*p == id) {
            return 0;
        }
    }
    if ((id & 0xFFFF0000) == 0x90000) {
        return 0;
    }
    if (CALL(FUN_00e9e8b0, CheckFn)(FUN_009f9d10(id)) != 0) {
        return 1;
    }
    undefined4 *deps = FUN_009f9ed0(id, param_2);
    if (deps == 0) {
        return 0;
    }
    int *dep = (int *)((char *)deps + 8);
    for (int n = 0; n < 0x30; n++, dep++) {
        if (*dep == 0) break;
        if (CALL(FUN_00e9e8b0, CheckFn)(FUN_009f9d10(*dep)) != 0) {
            return 1;
        }
    }
    ObjFileEntry *entry = (ObjFileEntry *)FUN_009fe410(id);
    if (entry != 0 && CALL(FUN_00e9e8b0, CheckFn)(FUN_009f9d10(entry->objA)) == 0) {
        return 0;
    }
    entry = (ObjFileEntry *)FUN_009fe620(id);
    if (entry != 0) {
        CALL(FUN_00e9e8b0, CheckFn)(FUN_009f9d10(entry->objB));
    }
    return 0;
}

// src/graphics/cModelBase.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cModelBase.h"

// d3dx9: D3DXMATRIX *D3DXMatrixInverse(D3DXMATRIX *out, FLOAT *determinant, const D3DXMATRIX *m)
extern "C" float *__stdcall D3DXMatrixInverse(float *out, float *determinant, const float *m);

// Data referenced by these functions (contents not yet identified).
extern char DAT_0165c8a8[];  // format string for the "parts not found" debug print
extern char DAT_01ee11f4[];
extern char DAT_016d9de0[];
extern char DAT_016d9e14[];
extern char DAT_016d9ed0[];
extern char DAT_0164524c[];  // debug message (? "MeshNo >= %d" variant)

// Several callees are __thiscall/__fastcall in functions.h, but the decompiler lost the
// register argument at these call sites. The calls below keep exactly the stack arguments
// the raw decompilation shows, through a cast to the call shape seen here.
typedef int  (*DebugPrintFn)(const char *fmt, ...);  // FUN_00dd5650 (debug printf)
#define DebugPrint ((DebugPrintFn)FUN_00dd5650)

// 00A11C60  cModelBase::setRootPartsNo  size=187  [class]
int cModelBase::setRootPartsNo(int partsNo)
{
    cModelBase *model = parentModel();
    if (parentModel() == 0) {
        model = this;
    }

    int index;
    if (model->field330() == 0) {
        index = 0xfff;
    }
    else {
        index = ((int (*)(int))FUN_00a06de0)(partsNo);  // ? ECX not recovered
    }

    cModelBase *owner = model->parentModel();
    if (model->parentModel() == 0) {
        owner = model;
    }

    cParts *parts;
    if ((index < 0) || (owner->partsCount() <= index)) {
        parts = 0;
    }
    else {
        parts = (cParts *)(owner->partsArray() + index * 0xb0);
    }

    int result = 1;
    if (parts == 0) {
        rootParts() = model;
        if (partsNo != -1) {
            DebugPrint(DAT_0165c8a8, partsNo);
            result = 0;
        }
    }
    else {
        rootParts() = parts;
    }
    ((void (*)(cParts *, int, int))FUN_00a07ac0)(rootParts(), index, field330());  // ? ECX not recovered
    rootPartsNo() = partsNo;
    return result;
}

// 00A19210  cModelBase::cModelBase  size=419  [class]
cModelBase::cModelBase() : cParts()
{
    // vftable = cModelBase::vftable
    field150() = 0;
    field154() = 0;
    field158() = 0;
    field15C() = 0;
    field160() = 0;
    field164() = 0;
    field168() = 0;
    field16C() = 0;
    field170() = 0;
    field174() = 0;
    field178() = 0;
    field17C() = 0;
    field180() = -1.0f;
    field184() = -1.0f;
    field188() = -1.0f;
    field18C() = -1.0f;
    field1A0() = 1;
    field198() = 0;
    field190() = 0;
    field19C() = 0;
    field194() = 0.85f;  // 0x3F59999A
    field23E() = 1;
    field230() = 0;
    field23A() = 0;
    field234() = 0;
    field238() = 0;
    field240() = 0;
    meshArray() = 0;
    field35C() = 0;
    field354() = 0;
    partsArray() = 0;
    partsCount() = 0;

    // identity matrix at +0xB0 (stored in this order)
    float *m = matrixB0();
    m[14] = 0.0f;
    m[13] = 0.0f;
    m[12] = 0.0f;
    m[11] = 0.0f;
    m[9] = 0.0f;
    m[8] = 0.0f;
    m[7] = 0.0f;
    m[6] = 0.0f;
    m[4] = 0.0f;
    m[3] = 0.0f;
    m[2] = 0.0f;
    m[1] = 0.0f;
    m[15] = 1.0f;
    m[10] = 1.0f;
    m[5] = 1.0f;
    m[0] = 1.0f;
    D3DXMatrixInverse(invMatrixF0(), 0, matrixB0());

    field32C() = 0;
    rootParts() = this;
    field330() = 0;
    field34C() = 0;
    field328() = 0;
    parentModel() = 0;
    field338() = 0;
    field340() = 2;
    meshCount() = 0;
    flags364() = 0;
    rootPartsNo() = -1;
    field33C() = -1;
    field36C() = 0;
    field344() = 0;
    field348() = 0;
    flags364() = flags364() | 2;
}

// 00A196D0  cModelBase::vf00  size=30  [class]
undefined4 cModelBase::destruct(byte flags)
{
    // scalar deleting destructor
    ctor_00A193C0();  // 00A193C0 (FILEMAP: cParts::cParts; acts as the destructor body)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // operator delete
    }
    return (undefined4)this;
}

// 00EFC800  cModelBase::getMeshAlphaSystem  size=617  [class]
// ? The receiver's fields (+0x30 flags, +0x3C flags, +0x50 handle, +0x128 alpha) do not match
// the cModelBase layout (+0x128 lies inside invMatrixF0), so they are accessed raw. The model
// returned by FUN_00a7c800 is a cModelBase-derived object (cModel fields at +0x45C/+0x4B0/+0x4C0).
// The stack-cookie checks (__security_check_cookie) are compiler-generated (/GS, buffer below).
void cModelBase::getMeshAlphaSystem()
{
    char *self = (char *)this;
    float alpha;
    char nameBuf[16];

    if (*(int *)(self + 0x50) /* ?+0x50 */ == 0) {
        return;
    }

    if ((((int (*)(void *))FUN_00a7c990)(DAT_01ee11f4) == 0) &&
        (((int (*)())FUN_00a81330)() != 0)) {
        if (((int (*)())FUN_00a7c7e0)() == 0) {
            if ((*(unsigned int *)(self + 0x3c) /* ?+0x3C flags */ & 0x400) == 0) {
                return;
            }
            if (*(int *)(self + 0x50) != 0) {
                ((void (*)(int))FUN_00edc5c0)(*(int *)(self + 0x50) + 0x10);
                *(int *)(self + 0x50) = 0;
            }
            ((void (*)(int))FUN_00a7c970)(0);
            if ((*(unsigned int *)(self + 0x3c) & 0x200) != 0) {
                ((void (*)(int, int))FUN_00edbe30)(0, 0);
                return;
            }
        }
        else if ((*(unsigned char *)(self + 0x3e) /* ?+0x3E = byte 2 of +0x3C flags */ & 1) != 0) {
            cModelBase *model = (cModelBase *)((int (*)())FUN_00a7c800)();
            if (model == 0) {
                ((void (*)(void *, void *))FUN_009cca90)(this, DAT_016d9e14);
                return;
            }
            if (model->meshCount() < 1) {
                int ok = FUN_009f8ea0(nameBuf, 0x10,
                                      *(unsigned int *)((char *)model + 0x4b0) /* cModel+0x4B0: ? */, 0);
                if (ok == 0) {
                    ((void (*)(void *, void *))FUN_009cca90)(this, DAT_016d9ed0);
                }
                return;
            }

            bool translucent;
            if ((((*(unsigned char *)((char *)model + 0x4c0) /* cModel+0x4C0: ? */ & 1) == 0) ||
                 (model->field198() < 0)) ||
                ((*(unsigned int *)(self + 0x30) /* ?+0x30 flags */ & 0x200000) != 0)) {
                translucent = true;
            }
            else {
                translucent = false;
            }
            if (translucent) {
                *(unsigned int *)(self + 0x30) = *(unsigned int *)(self + 0x30) | 0x400000;
            }
            else {
                *(unsigned int *)(self + 0x30) = *(unsigned int *)(self + 0x30) & 0xffbfffff;
            }

            short meshCount = model->meshCount();
            if (0 < meshCount) {
                // inlined mesh-alpha getter (mesh 0), with its bounds check
                if (meshCount < 1) {
                    DebugPrint("cModelBase::getMeshAlphaSystem MeshNo >= %d", (int)meshCount);
                    alpha = 0.0f;
                }
                else {
                    alpha = *(float *)((char *)model->meshArray() + 0x2c);
                }
                *(float *)(self + 0x128) /* ?+0x128 */ = alpha;

                if (model->meshCount() < 1) {
                    DebugPrint(DAT_0164524c);
                    alpha = 0.0f;
                }
                else {
                    alpha = *(float *)((char *)model->meshArray() + 0x1c);
                }
                if (alpha < *(float *)(self + 0x128)) {
                    *(float *)(self + 0x128) = alpha;
                }
                *(float *)(self + 0x128) =
                    *(float *)((char *)model + 0x45c) /* cModel+0x45C: scale45C */ * *(float *)(self + 0x128);
            }
        }
        return;
    }

    if ((*(unsigned int *)(self + 0x3c) & 0x400) != 0) {
        ((void (*)(void *, void *))FUN_009cca90)(this, DAT_016d9de0);
        *(int *)(self + 0x50) = 0;
        ((void (*)(int))FUN_00a7c970)(0);
    }
}

// src/misc/cParts.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cParts.h"

// Array allocation header written in front of a cParts[] block: element count at block+0,
// elements start at block+0x10.
static const unsigned int PARTS_ARRAY_HEADER = 0x10;
static const unsigned int PARTS_SIZE = 0xB0;

// 00A07410  cParts::cParts_2  size=175  [class]
cParts::cParts()
{
    // vftable = cParts::vftable (0x0165C600)
    matrix()[14] = 0.0f;
    matrix()[13] = 0.0f;
    matrix()[12] = 0.0f;
    matrix()[11] = 0.0f;
    matrix()[9] = 0.0f;
    matrix()[8] = 0.0f;
    matrix()[7] = 0.0f;
    matrix()[6] = 0.0f;
    matrix()[4] = 0.0f;
    matrix()[3] = 0.0f;
    matrix()[2] = 0.0f;
    matrix()[1] = 0.0f;
    matrix()[15] = 1.0f;
    matrix()[10] = 1.0f;
    matrix()[5] = 1.0f;
    matrix()[0] = 1.0f;
    quat()[3] = 1.0f;
    quat()[0] = 0.0f;
    quat()[1] = 0.0f;
    quat()[2] = 0.0f;
    pos()[2] = 0.0f;
    pos()[1] = 0.0f;
    pos()[0] = 0.0f;
    pos()[3] = 1.0f;
    vec90()[3] = 1.0f;
    vec90()[0] = 0.0f;
    vec90()[1] = 0.0f;
    vec90()[2] = 0.0f;
    scale()[0] = 1.0f;
    scale()[1] = 1.0f;
    scale()[2] = 1.0f;
    scale2()[0] = 1.0f;
    scale2()[1] = 1.0f;
    scale2()[2] = 1.0f;
    flags() = 0;
    fieldA8() = 0;
    index() = -1;   // stored as 0xFFFF
    fieldA4() = 0;
}

// 00A074D0  FUN_00a074d0  size=193  [between]
// Copies the transform of `srcAddr` into `dstAddr`; flag bit 4 is kept only when copyFlags != 0.
void FUN_00a074d0(int dstAddr, int srcAddr, int copyFlags)
{
    cParts *dst = (cParts *)dstAddr;
    cParts *src = (cParts *)srcAddr;

    // dword copies (raw bit patterns, no float conversion)
    unsigned int *srcMatrix = (unsigned int *)src->matrix();
    unsigned int *dstMatrix = (unsigned int *)dst->matrix();
    for (int i = 16; i != 0; i--) {
        *dstMatrix = *srcMatrix;
        srcMatrix++;
        dstMatrix++;
    }
    unsigned int *dstQuat = (unsigned int *)dst->quat();
    unsigned int *srcQuat = (unsigned int *)src->quat();
    dstQuat[0] = srcQuat[0];
    dstQuat[1] = srcQuat[1];
    dstQuat[2] = srcQuat[2];
    dstQuat[3] = srcQuat[3];
    unsigned int *dstPos = (unsigned int *)dst->pos();
    unsigned int *srcPos = (unsigned int *)src->pos();
    dstPos[0] = srcPos[0];
    dstPos[1] = srcPos[1];
    dstPos[2] = srcPos[2];
    dstPos[3] = srcPos[3];
    unsigned int *dstScale = (unsigned int *)dst->scale();   // +0x70..+0x7C (4 dwords)
    unsigned int *srcScale = (unsigned int *)src->scale();
    dstScale[0] = srcScale[0];
    dstScale[1] = srcScale[1];
    dstScale[2] = srcScale[2];
    dstScale[3] = srcScale[3];
    unsigned int *dstVec = (unsigned int *)dst->vec90();
    unsigned int *srcVec = (unsigned int *)src->vec90();
    dstVec[0] = srcVec[0];
    dstVec[1] = srcVec[1];
    dstVec[2] = srcVec[2];
    dstVec[3] = srcVec[3];
    dst->index() = src->index();
    dst->flags() = 0;
    if (copyFlags != 0) {
        dst->flags() = src->flags() & 4;
    }
}

// 00A07600  FUN_00a07600  size=94  [between]
// Releases a parts list: { cParts *parts; int *table; short count; int owner; }.
void __fastcall FUN_00a07600(int *list)
{
    cParts *parts = (cParts *)list[0];
    if (parts != 0) {
        int *block = (int *)((char *)parts - PARTS_ARRAY_HEADER);
        if (block[0] == 0) {
            FUN_00dd4940((int)block);
        }
        else {
            parts->destruct(3);
        }
        list[0] = 0;
    }
    if (list[1] != 0) {
        FUN_00dd4940(list[1]);
        list[1] = 0;
    }
    list[3] = 0;
    list[1] = 0;
    list[0] = 0;
    *(short *)(list + 2) = 0;
}

// 00A07660  FUN_00a07660  size=225  [between]
// Allocates `count` cParts (new[] with 0x10-byte header) plus a zeroed int table of `count` entries.
undefined4 FUN_00a07660(int *list, ushort count, int owner, undefined4 heap)
{
    typedef void *(*AllocFn)(unsigned int size, undefined4 heap);
    AllocFn alloc = (AllocFn)FUN_00dd3580;

    FUN_00a07600(list);
    if (count == 0) {
        return 1;
    }
    if (owner == 0) {
        return 0;
    }

    unsigned int n = (unsigned int)(short)count;   // sign-extended

    unsigned long long partsBytes64 = (unsigned long long)n * PARTS_SIZE;
    unsigned int partsBytes = ((unsigned int)(partsBytes64 >> 32) != 0) ? 0xFFFFFFFFu
                                                                        : (unsigned int)partsBytes64;
    unsigned int blockBytes = (partsBytes > 0xFFFFFFEFu) ? 0xFFFFFFFFu : partsBytes + PARTS_ARRAY_HEADER;

    unsigned int *block = (unsigned int *)alloc(blockBytes, heap);
    unsigned int *parts;
    if (block == 0) {
        parts = 0;
    }
    else {
        parts = block + 4;
        *block = n;
        // eh vector constructor iterator (parts, 0xB0, n, cParts::cParts)
        FUN_00401040((undefined4)parts, PARTS_SIZE, n, (code *)0x00A07410 /* cParts::cParts_2 */);
    }
    list[0] = (int)parts;

    unsigned long long tableBytes64 = (unsigned long long)n * 4;
    unsigned int tableBytes = ((unsigned int)(tableBytes64 >> 32) != 0) ? 0xFFFFFFFFu
                                                                        : (unsigned int)tableBytes64;
    int table = (int)alloc(tableBytes, heap);
    list[1] = table;

    if (list[0] != 0 && table != 0) {
        int offset = 0;
        if (0 < (short)count) {
            unsigned int remaining = (unsigned int)count;
            do {
                *(int *)(offset + list[1]) = 0;
                offset += 4;
                remaining--;
            } while (remaining != 0);
        }
        *(ushort *)(list + 2) = count;
        list[3] = owner;
        return 1;
    }
    return 0;
}

// 00A07750  cParts::vf00  size=93  [class]
undefined4 cParts::destruct(byte flags)
{
    if ((flags & 2) == 0) {
        *(void **)this = (void *)0x0165C600;   // cParts::vftable
        if ((flags & 1) != 0) {
            FUN_00dd4920((int)this);
        }
        return (undefined4)this;
    }

    // vector deleting: element count lives in the 0x10-byte header before the array
    int *block = (int *)((char *)this - PARTS_ARRAY_HEADER);
    int count = block[0];
    char *element = (char *)this + count * PARTS_SIZE;
    while (count = count - 1, -1 < count) {
        element -= PARTS_SIZE;
        *(void **)element = (void *)0x0165C600;   // cParts::vftable
    }
    if ((flags & 1) != 0) {
        FUN_00dd4940((int)block);
    }
    return (undefined4)block;
}

// 00A193C0  cParts::cParts  size=185  [class]
void cParts::ctor_00A193C0()
{
    int *self = (int *)this;

    *(void **)this = (void *)0x0165CA60;   // cModelBase::vftable
    FUN_00a07600(self);   // ? Ghidra shows no argument; ECX assumed still `this`
    FUN_00a159c0((int)this);   // ? Ghidra shows no argument; ECX assumed still `this`
    *(float *)((char *)this + 0x180) = -1.0f;   /* cModelBase+0x180: ? */
    *(float *)((char *)this + 0x184) = -1.0f;   /* cModelBase+0x184: ? */
    *(float *)((char *)this + 0x188) = -1.0f;   /* cModelBase+0x188: ? */
    *(float *)((char *)this + 0x18C) = -1.0f;   /* cModelBase+0x18C: ? */
    *(int *)((char *)this + 0x1A0) = 1;         /* cModelBase+0x1A0: ? */
    *(int *)((char *)this + 0x198) = 0;         /* cModelBase+0x198: ? */
    *(int *)((char *)this + 0x190) = 0;         /* cModelBase+0x190: ? */
    *(int *)((char *)this + 0x19C) = 0;         /* cModelBase+0x19C: ? */
    *(float *)((char *)this + 0x194) = 0.85f;   /* cModelBase+0x194: ? (0x3F59999A) */
    *(void **)this = (void *)0x0165C600;   // cParts::vftable (as labelled by Ghidra)
    for (int offset = 0x150; offset <= 0x17C; offset += 4) {
        *(int *)((char *)this + offset) = 0;   /* cModelBase+0x150..0x17C: ? */
    }
}

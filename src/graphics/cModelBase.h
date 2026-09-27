// REFINED
#pragma once
#include "cParts.h"
#include "../../include/ghidra_types.h"
#include "../../include/auto/fwd.h"

// cModelBase: model = a cParts (the root, 0xB0 bytes) followed by model state.
// Fields below 0xB0 belong to cParts.
struct cModelBase : public cParts {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined4 destruct(byte flags);  // 00A196D0 slot 0x0  overrides cParts (scalar deleting destructor)
    // non-virtual members
    int setRootPartsNo(int partsNo);  // 00A11C60
    cModelBase();  // 00A19210
    void getMeshAlphaSystem();  // 00EFC800  (? receiver layout does not match cModelBase; see .cpp)

    // fields (absolute byte offsets from object start)
    float        *matrixB0()        { return (float *)((char *)this + 0xB0); }            // +0xB0  float[16], identity at ctor (? local transform)
    float        *invMatrixF0()     { return (float *)((char *)this + 0xF0); }            // +0xF0  float[16], inverse of matrixB0
    int          &field150()        { return *(int *)((char *)this + 0x150); }            // +0x150
    int          &field154()        { return *(int *)((char *)this + 0x154); }            // +0x154
    int          &field158()        { return *(int *)((char *)this + 0x158); }            // +0x158
    int          &field15C()        { return *(int *)((char *)this + 0x15C); }            // +0x15C
    int          &field160()        { return *(int *)((char *)this + 0x160); }            // +0x160
    int          &field164()        { return *(int *)((char *)this + 0x164); }            // +0x164
    int          &field168()        { return *(int *)((char *)this + 0x168); }            // +0x168
    int          &field16C()        { return *(int *)((char *)this + 0x16C); }            // +0x16C
    int          &field170()        { return *(int *)((char *)this + 0x170); }            // +0x170
    int          &field174()        { return *(int *)((char *)this + 0x174); }            // +0x174
    int          &field178()        { return *(int *)((char *)this + 0x178); }            // +0x178
    int          &field17C()        { return *(int *)((char *)this + 0x17C); }            // +0x17C
    float        &field180()        { return *(float *)((char *)this + 0x180); }          // +0x180 (-1.0f at ctor)
    float        &field184()        { return *(float *)((char *)this + 0x184); }          // +0x184 (-1.0f at ctor)
    float        &field188()        { return *(float *)((char *)this + 0x188); }          // +0x188 (-1.0f at ctor)
    float        &field18C()        { return *(float *)((char *)this + 0x18C); }          // +0x18C (-1.0f at ctor)
    int          &field190()        { return *(int *)((char *)this + 0x190); }            // +0x190
    float        &field194()        { return *(float *)((char *)this + 0x194); }          // +0x194 (0.85f at ctor)
    int          &field198()        { return *(int *)((char *)this + 0x198); }            // +0x198 (tested < 0 in getMeshAlphaSystem)
    int          &field19C()        { return *(int *)((char *)this + 0x19C); }            // +0x19C
    int          &field1A0()        { return *(int *)((char *)this + 0x1A0); }            // +0x1A0
    int          &field230()        { return *(int *)((char *)this + 0x230); }            // +0x230
    int          &field234()        { return *(int *)((char *)this + 0x234); }            // +0x234
    short        &field238()        { return *(short *)((char *)this + 0x238); }          // +0x238
    int          &field23A()        { return *(int *)((char *)this + 0x23A); }            // +0x23A (unaligned 4-byte store)
    short        &field23E()        { return *(short *)((char *)this + 0x23E); }          // +0x23E
    int          &field240()        { return *(int *)((char *)this + 0x240); }            // +0x240
    void        *&meshArray()       { return *(void **)((char *)this + 0x320); }          // +0x320 mesh entries (float at +0x1C / +0x2C)
    short        &meshCount()       { return *(short *)((char *)this + 0x324); }          // +0x324
    int          &field328()        { return *(int *)((char *)this + 0x328); }            // +0x328
    short        &field32C()        { return *(short *)((char *)this + 0x32C); }          // +0x32C
    int          &field330()        { return *(int *)((char *)this + 0x330); }            // +0x330 (0 -> parts index 0xFFF in setRootPartsNo)
    cParts      *&rootParts()       { return *(cParts **)((char *)this + 0x334); }        // +0x334 (this at ctor)
    int          &field338()        { return *(int *)((char *)this + 0x338); }            // +0x338
    int          &field33C()        { return *(int *)((char *)this + 0x33C); }            // +0x33C (-1 at ctor)
    int          &field340()        { return *(int *)((char *)this + 0x340); }            // +0x340 (2 at ctor)
    int          &field344()        { return *(int *)((char *)this + 0x344); }            // +0x344
    int          &field348()        { return *(int *)((char *)this + 0x348); }            // +0x348
    int          &field34C()        { return *(int *)((char *)this + 0x34C); }            // +0x34C
    char        *&partsArray()      { return *(char **)((char *)this + 0x350); }          // +0x350 cParts[partsCount], 0xB0 bytes each
    int          &field354()        { return *(int *)((char *)this + 0x354); }            // +0x354
    short        &partsCount()      { return *(short *)((char *)this + 0x358); }          // +0x358
    int          &field35C()        { return *(int *)((char *)this + 0x35C); }            // +0x35C
    cModelBase  *&parentModel()     { return *(cModelBase **)((char *)this + 0x360); }    // +0x360 (? model that owns the parts, null = self)
    unsigned int &flags364()        { return *(unsigned int *)((char *)this + 0x364); }   // +0x364
    int          &rootPartsNo()     { return *(int *)((char *)this + 0x368); }            // +0x368 (-1 at ctor)
    int          &field36C()        { return *(int *)((char *)this + 0x36C); }            // +0x36C
};

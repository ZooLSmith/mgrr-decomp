// REFINED
// cParts -- 0xB0-byte transform node (array element allocated by FUN_00a07660 with stride 0xB0).
#pragma once
#include "../../include/ghidra_types.h"
#include "../../include/auto/fwd.h"

struct cParts {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined4 destruct(byte flags);  // 00A07750 slot 0x0 (scalar/vector deleting dtor)
    // non-virtual members
    cParts();  // 00A07410
    void ctor_00A193C0();  // 00A193C0 (writes fields past 0xB0: really a derived-class ctor)

    // fields (absolute offsets from object start)
    float *matrix()          { return (float *)((char *)this + 0x10); }            // +0x10  float[16], init identity
    float *quat()            { return (float *)((char *)this + 0x50); }            // +0x50  float[4], init (0,0,0,1) ?
    float *pos()             { return (float *)((char *)this + 0x60); }            // +0x60  float[4], init (0,0,0,1) ?
    float *scale()           { return (float *)((char *)this + 0x70); }            // +0x70  float[3], init (1,1,1) ?
    float *scale2()          { return (float *)((char *)this + 0x80); }            // +0x80  float[3], init (1,1,1) ?
    float *vec90()           { return (float *)((char *)this + 0x90); }            // +0x90  float[4], init (0,0,0,1)
    short &index()           { return *(short *)((char *)this + 0xA0); }           // +0xA0  init -1
    unsigned short &flags()  { return *(unsigned short *)((char *)this + 0xA2); }  // +0xA2
    int &fieldA4()           { return *(int *)((char *)this + 0xA4); }             // +0xA4
    int &fieldA8()           { return *(int *)((char *)this + 0xA8); }             // +0xA8
};

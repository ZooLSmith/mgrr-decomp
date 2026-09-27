// REFINED
#pragma once
#include "cModelBase.h"
#include "../../include/ghidra_types.h"
#include "../../include/auto/fwd.h"

struct cModel : public cModelBase {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined4 destruct(byte flags);  // 00A196F0 slot 0x0  overrides cParts (scalar deleting destructor)
    // non-virtual members
    cModel();  // 00A19480
    ~cModel();  // 00A19540

    // fields (absolute byte offsets from object start)
    void         *&ownedObject370()   { return *(void **)((char *)this + 0x370); }          // +0x370 freed via thunk_FUN_00a1bdd0 + FUN_00dd4920
    void          *sub374()           { return (void *)((char *)this + 0x374); }            // +0x374 embedded struct (init by FUN_00a2b3c0)
    unsigned short &flags44C()        { return *(unsigned short *)((char *)this + 0x44C); } // +0x44C
    unsigned char  &byte44E()         { return *(unsigned char *)((char *)this + 0x44E); }  // +0x44E
    void         *&array450()         { return *(void **)((char *)this + 0x450); }          // +0x450 freed via FUN_00dd4940
    int            &field454()        { return *(int *)((char *)this + 0x454); }            // +0x454
    int            &field458()        { return *(int *)((char *)this + 0x458); }            // +0x458
    float          &scale45C()        { return *(float *)((char *)this + 0x45C); }          // +0x45C
    float          &field460()        { return *(float *)((char *)this + 0x460); }          // +0x460
    int            &field464()        { return *(int *)((char *)this + 0x464); }            // +0x464
    int            &field468()        { return *(int *)((char *)this + 0x468); }            // +0x468
    int            &field46C()        { return *(int *)((char *)this + 0x46C); }            // +0x46C
    unsigned int   &color470()        { return *(unsigned int *)((char *)this + 0x470); }   // +0x470 (4 bytes, 0x473 = alpha?)
    unsigned short &color470Lo()      { return *(unsigned short *)((char *)this + 0x470); } // +0x470 low 16 bits
    unsigned char  &color472()        { return *(unsigned char *)((char *)this + 0x472); }  // +0x472
    unsigned char  &color473()        { return *(unsigned char *)((char *)this + 0x473); }  // +0x473
    void         *&entries474()       { return *(void **)((char *)this + 0x474); }          // +0x474 array of 0x44-byte entries
    int            &field478()        { return *(int *)((char *)this + 0x478); }            // +0x478
    int            &entryCount47C()   { return *(int *)((char *)this + 0x47C); }            // +0x47C
    int            &field480()        { return *(int *)((char *)this + 0x480); }            // +0x480
    int            &field484()        { return *(int *)((char *)this + 0x484); }            // +0x484
    int            &field488()        { return *(int *)((char *)this + 0x488); }            // +0x488
    int            &handle48C()       { return *(int *)((char *)this + 0x48C); }            // +0x48C passed to FUN_00d8bc00
};

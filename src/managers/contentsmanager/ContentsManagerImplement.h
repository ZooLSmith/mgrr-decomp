// REFINED
// ContentsManagerImplement -- owns a lib::Array of content objects (+0x2C) guarded by a critical
// section (+0x8, used only while +0x20 is non-zero) and hands out ids from a counter (+0x28).
#pragma once
#include "ContentsManager.h"
#include "../../../include/ghidra_types.h"
#include "../../../include/auto/fwd.h"

struct ContentsManagerImplement : public ContentsManager {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined4 * vf00(byte flags);  // 008DF800 slot 0x0 (scalar deleting destructor)
    virtual void vf04();  // 008DF700 slot 0x4  calls vf0C of every content
    virtual void addContent(int * content);  // 008DF740 slot 0x8
    virtual void removeContent(int id);  // 008DF870 slot 0xC
    virtual undefined4 nextId();  // 008DF6D0 slot 0x10

    // fields (absolute offsets from object start)
    char *lock()            { return (char *)this + 0x08; }             // +0x08 CRITICAL_SECTION (0x18 bytes)
    int &lockEnabled()      { return *(int *)((char *)this + 0x20); }   // +0x20 non-zero: the critical section is initialised
    int &idCounter()        { return *(int *)((char *)this + 0x28); }   // +0x28 last id handed out
    int *&contents()        { return *(int **)((char *)this + 0x2C); }  // +0x2C lib::Array<content*> * (vftable, +4 data, +8 count)
};

// REFINED
// cObj -- placed game object built on cModel: object id, model/texture file loading and
// object-file reference counting. Fields below 0x490 belong to cModel/cModelBase/cParts.
#pragma once
#include "cModel.h"
#include "ghidra_types.h"
#include "auto/fwd.h"

struct cObj : public cModel {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined4 destruct(byte flags);  // 009FD1E0 slot 0x0  overrides cParts
    virtual undefined * vf04();  // 009FAB30 slot 0x4  returns &DAT_01b7b380
    virtual undefined4 vf08();  // 00A00730 slot 0x8  loads model + textures; nonzero on success
    virtual void vf0C();  // 009FD6C0 slot 0xC  deletes the object at +0x4DC
    virtual void vf10();  // 009F8A30 slot 0x10
    virtual void vf14();  // 009F8A40 slot 0x14
    virtual void vf18();  // 009F8A50 slot 0x18
    virtual void vf1C();  // 009FABA0 slot 0x1C  sets objFlags bit 0
    virtual void vf20();  // 009FABB0 slot 0x20  clears objFlags bit 0
    virtual float10 vf24();  // 0040DE00 slot 0x24  returns 1.0
    virtual void vf28(undefined4 value);  // 0040E660 slot 0x28  sets +0x4E0
    virtual void vf2C();  // 009FAB40 slot 0x2C
    virtual void vf30();  // 009FAB50 slot 0x30
    virtual void vf34();  // 009FAB60 slot 0x34
    virtual uint vf38();  // 0040DE70 slot 0x38  returns this when stateFlags & 3 == 0, else 0
    virtual void vf3C(undefined4 param_2);  // 009F8AB0 slot 0x3C

    // non-virtual members
    cObj();  // 009FD150
    // 009FEB00: the custom-parameter blob arrives in ECX, the target object on the stack.
    static void setCustomParam(unsigned char *params, cObj *obj);
    // 00A005F0
    void construct(unsigned int modelObjId, unsigned int setFlags, unsigned int objId,
                   unsigned int objSubId, unsigned int *filePair);

    // fields (absolute offsets from the object start)
    int          &field490()      { return *(int *)((char *)this + 0x490); }           // +0x490
    unsigned int &filePair0()     { return *(unsigned int *)((char *)this + 0x494); }  // +0x494 construct(filePair[0])
    unsigned int &filePair1()     { return *(unsigned int *)((char *)this + 0x498); }  // +0x498 construct(filePair[1])
    int          &overrideWmb()   { return *(int *)((char *)this + 0x49C); }           // +0x49C model file used when none is found
    unsigned int &setFlags()      { return *(unsigned int *)((char *)this + 0x4A0); }  // +0x4A0
    unsigned int &modelObjId()    { return *(unsigned int *)((char *)this + 0x4B0); }  // +0x4B0 id the model is loaded for
    unsigned int &objId()         { return *(unsigned int *)((char *)this + 0x4B4); }  // +0x4B4 id whose files are referenced
    unsigned int &objSubId()      { return *(unsigned int *)((char *)this + 0x4B8); }  // +0x4B8 ?
    unsigned int &baseObjId()     { return *(unsigned int *)((char *)this + 0x4BC); }  // +0x4BC copy of objId at construct
    unsigned int &objFlags()      { return *(unsigned int *)((char *)this + 0x4C0); }  // +0x4C0 bit1 = dummy model
    unsigned char &stateFlags()   { return *(unsigned char *)((char *)this + 0x4C8); } // +0x4C8
    unsigned char &field4C9()     { return *(unsigned char *)((char *)this + 0x4C9); } // +0x4C9
    unsigned int *&objInfo()      { return *(unsigned int **)((char *)this + 0x4CC); } // +0x4CC FUN_0092f750(modelObjId)
    int          &field4D0()      { return *(int *)((char *)this + 0x4D0); }           // +0x4D0
    void        *&ownedObj4DC()   { return *(void **)((char *)this + 0x4DC); }         // +0x4DC polymorphic, deleted by vf0C
    int          &field4E0()      { return *(int *)((char *)this + 0x4E0); }           // +0x4E0
    int          &field4E4()      { return *(int *)((char *)this + 0x4E4); }           // +0x4E4
    int          &field4E8()      { return *(int *)((char *)this + 0x4E8); }           // +0x4E8
    int          &nameHash()      { return *(int *)((char *)this + 0x4EC); }           // +0x4EC compared with FUN_00e03ea0(name)
    int          &field4F0()      { return *(int *)((char *)this + 0x4F0); }           // +0x4F0
    char         *xml()           { return (char *)this + 0x4F4; }                      // +0x4F4 embedded cXmlBinary
    int          &constructed()   { return *(int *)((char *)this + 0x514); }           // +0x514 set by construct
    cObj        *&linkedObj()     { return *(cObj **)((char *)this + 0x518); }         // +0x518
    int          &field51C()      { return *(int *)((char *)this + 0x51C); }           // +0x51C
    int          &filesAcquired() { return *(int *)((char *)this + 0x520); }           // +0x520 object files referenced
    int          &field524()      { return *(int *)((char *)this + 0x524); }           // +0x524
};

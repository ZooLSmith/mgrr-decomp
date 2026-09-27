// REFINED
// ScenarioRegionManagerImplement -- scenario trigger regions. Up to three region groups, each filled
// from a binary XML ("PRIM" list, one child per region) by setGroupResource(). Every region owns a
// collision shape (built by FUN_00d95780 into the group's heap block) and is tested once per frame
// (vf04) against the player position; the result is kept as inside / entered / left bits.
// Field names of Region come from the XML attribute names read by FUN_00a6ee80
// ("eWorkNo", "eId", "eFlag", "eValue", "eAtAttr", "eAtMask", "eUseParent", "eBaseRoom_%d",
// "eUserDataType", "eUserDataParam[_%d]", "eAtName", "eAtParent").
//
// Every virtual is __thiscall. Parameter lists are taken from the machine code (stack reads and the
// `ret N` byte counts); several differ from the Ghidra prototypes in ScenarioRegionManager.h.
// Slots whose parameter list matches the base declaration keep the base return type so that they
// still override. The slot names stay vfXX; what each one does is noted beside it.
#pragma once
#include "ScenarioRegionManager.h"
#include "../../../include/ghidra_types.h"
#include "../../../include/auto/fwd.h"

struct ScenarioRegionManagerImplement : public ScenarioRegionManager {
    // One trigger region (0x6C bytes).
    struct Region {
        unsigned short workNo;        // +0x00 "eWorkNo"   (key of vf40 = getWorkPtr)
        unsigned short id;            // +0x02 "eId"
        unsigned int   flags;         // +0x04 "eFlag": bit 0 = disabled, 0x20000000 = follows its parent
                                      //       object, 0x40000000 = checked by vf30, bit 31 = starts disabled
        int            value;         // +0x08 "eValue"
        int            atAttr;        // +0x0C "eAtAttr"
        int            atMask;        // +0x10 "eAtMask"
        int            useParent;     // +0x14 "eUseParent"
        int            baseRoom[2];   // +0x18 "eBaseRoom_0/1"  (only read when useParent == 0)
        int            userDataType;  // +0x20 "eUserDataType"
        int            userDataParam[4]; // +0x24 "eUserDataParam", "eUserDataParam_1..3"
        char           atName[16];    // +0x34 "eAtName"
        unsigned int   parentHash;    // +0x44 hash of atParent (FUN_00e03ea0)
        char           atParent[16];  // +0x48 "eAtParent"
        unsigned char *shape;         // +0x58 collision shape (byte 0 = shape type; +0x10 current position,
                                      //       +0x20 base position, +0x30 offset from the parent)
        int            parent;        // +0x5C parent object found through parentHash (0 = none)
        int            parentRetry;   // +0x60 frames since the last parent lookup
        unsigned int   state;         // +0x64 bit 0 = inside, bit 1 = just entered, bit 2 = just left
        unsigned int   prevState;     // +0x68 state of the previous frame
    };

    // One region group (0x6C0C bytes).
    struct Group {
        int            id;            // +0x0000 group id, -1 = free
        Region         regions[0x100];// +0x0004
        int            count;         // +0x6C04 number of regions in use
        unsigned char *buffer;        // +0x6C08 heap block holding the shapes
    };

    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined4 * vf00(byte flags);  // 00A76100 slot 0x0  overrides ScenarioRegionManager (scalar deleting destructor)
    virtual void vf04();  // 00A71BC0 slot 0x4  overrides ScenarioRegionManager (per-frame update)
    virtual void vf08();  // 00A6DFC0 slot 0x8  overrides ScenarioRegionManager (empty)
    virtual void vf0C(int unused1, int unused2, int unused3);  // 00A6DFD0 slot 0xC  (empty, ret 0xc)
    virtual void setGroupResource(int groupId, int xmlData, int heap);  // 00A6F870 slot 0x10
    virtual void vf14(int groupId);  // 00A6FC00 slot 0x14  overrides ScenarioRegionManager (release group)
    virtual void vf18(int room);  // 00A6FC50 slot 0x18  overrides ScenarioRegionManager (enable regions of a base room)
    virtual void vf1C(int room);  // 00A6FD10 slot 0x1C  overrides ScenarioRegionManager (disable regions of a base room)
    virtual bool vf20(unsigned int workNo, unsigned int stateMask, int groupId);  // 00A6E0E0 slot 0x20 (state test by workNo)
    virtual int vf24(unsigned int id, unsigned int stateMask, int groupId);  // 00A6E110 slot 0x24 (state test by id)
    virtual int vf28(const float *position, unsigned int workNo, int groupId);  // 00A6FE70 slot 0x28 (point test by workNo)
    virtual int vf2C(const float *position, unsigned int id, int groupId);  // 00A6FEB0 slot 0x2C (point test by id)
    virtual int vf30(const float *position, int groupId);  // 00A6FDE0 slot 0x30 (point test, flag 0x40000000 regions)
    virtual void vf34(float threshold);  // 00A76090 slot 0x34 (enable the height test)
    virtual void vf38();  // 00A760B0 slot 0x38  overrides ScenarioRegionManager (disable the height test)
    virtual int vf3C(const float *position, unsigned int id, int unused, int groupId);  // 00A6E070 slot 0x3C
    virtual ushort * vf40(uint workNo, int groupId);  // 00A6E180 slot 0x40  overrides ScenarioRegionManager (getWorkPtr; returns a Region *)
    virtual void vf44(uint id, int groupId);  // 00A6E1F0 slot 0x44  overrides ScenarioRegionManager (enable)
    virtual void vf48(uint id, int groupId);  // 00A6E250 slot 0x48  overrides ScenarioRegionManager (disable)
    virtual uint vf4C(uint id, int groupId);  // 00A6FF40 slot 0x4C  overrides ScenarioRegionManager (is enabled)
    virtual undefined4 vf50(uint id, int groupId);  // 00A6E2B0 slot 0x50  overrides ScenarioRegionManager (exists)
    virtual void vf54(int *visitor, int groupId, int userDataType);  // 00A6E310 slot 0x54 (visit inside regions of a type)
    virtual void vf58(int *visitor, int groupId, int userDataType);  // 00A6E390 slot 0x58 (visit regions of a type)
    virtual void vf5C(int *visitor, unsigned int id, int groupId, int userDataType);  // 00A6E400 slot 0x5C
    virtual int vf60(int *visitor, unsigned int id, int groupId);  // 00A6FFB0 slot 0x60 (visit regions by id)
    virtual int vf64(int unused1, int unused2, int unused3);  // 00A6E520 slot 0x64 (returns 1, ret 0xc)
    virtual void vf68(int unused);  // 00A6E530 slot 0x68 (empty, ret 4)
    virtual void vf6C(unsigned int workNo);  // 00A70030 slot 0x6C (removes objects inside region workNo of group 2)
    virtual void vf70(unsigned int workNo, unsigned int targetWorkNo);  // 00A6E4F0 slot 0x70
    virtual void vf74(unsigned int workNo, int unused);  // 00A6E480 slot 0x74
    virtual int * vf78(uint id, int groupId);  // 00A6E560 slot 0x78  overrides ScenarioRegionManager (find by id)
    virtual int * vf7C(byte * name, int groupId);  // 00A6E5C0 slot 0x7C  overrides ScenarioRegionManager (find by atName)
    virtual byte * vf80(int userDataType, int userDataParam0);  // 00A70140 slot 0x80  overrides ScenarioRegionManager
    virtual void vf84(int userDataParam0);  // 00A6E540 slot 0x84 (vf80(10, ...))
    virtual int * vf88(int groupId, int parent);  // 00A6F800 slot 0x88  overrides ScenarioRegionManager (find by parent)

    // non-virtual members
    ScenarioRegionManagerImplement(int heap);  // 00A76020 (heap = &DAT_01b7bd48, see ScenarioManagerImplement)

    // fields
    int   &ownerHeap()          { return *(int *)((char *)this + 0x4); }       // +0x4 heap given to the ctor
    Group *groups()             { return (Group *)((char *)this + 0x8); }      // +0x8 Group[3]
    float &heightThreshold()    { return *(float *)((char *)this + 0x1442C); } // +0x1442C
    int   &heightCheckEnabled() { return *(int *)((char *)this + 0x14430); }   // +0x14430
};

static_assert(sizeof(ScenarioRegionManagerImplement::Region) == 0x6C, "Region size");
static_assert(sizeof(ScenarioRegionManagerImplement::Group) == 0x6C0C, "Group size");

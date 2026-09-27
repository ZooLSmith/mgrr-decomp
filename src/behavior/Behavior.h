// REFINED
// Behavior -- base of every actor behaviour (players, enemies, bosses, objects).
// Owns the cloth simulation, three collision lists and the parts-attachment table.
// Fields below 0x528 belong to cObj / cModel / cModelBase / cParts.
#pragma once
#include "cObj.h"
#include "../../include/ghidra_types.h"
#include "../../include/auto/fwd.h"

struct Behavior : public cObj {
    // lib::Array-like container: { vftable, data, count }.
    // vftable slot 0x0 = scalar deleting destructor, slot 0x8 = push_back(const T *).
    struct Array {
        void        **vftable;  // +0x0
        char         *data;     // +0x4
        unsigned int  count;    // +0x8
    };

    // Element of the attachment table at +0x7C4 (0x50 bytes): glues the matrix of a "child"
    // object/parts to a "parent" object/parts with a fixed rotation and offset.
    struct Attachment {
        int          key;            // +0x00 looked up by FUN_00a91be0
        unsigned int parentHandle;   // +0x04 resolved by FUN_00a81330
        unsigned int childHandle;    // +0x08 resolved by FUN_00a81330
        int          parentPartsNo;  // +0x0C -1 = whole model
        int          childPartsNo;   // +0x10 -1 = whole model
        char         pad14[0x0C];
        float        rotX;           // +0x20
        float        rotY;           // +0x24
        float        rotZ;           // +0x28
        float        pad2C;
        float        offset[4];      // +0x30 (xyz used)
        int          lateUpdate;     // +0x40 0: updated by FUN_00a9ccb0, else by FUN_00a9cef0
        char         pad44[0x0C];
    };

    // Element of the animation-name table at +0x774 (0x30 bytes), filled by FUN_00a9e1e0.
    struct AnimName {
        int   animId;     // +0x00
        int   field04;    // +0x04 (-1 when created)
        char  name[0x20]; // +0x08
        float field28;    // +0x28
        int   field2C;    // +0x2C
    };

    // Element of queue63C (0x34 bytes), pushed by FUN_00a9d720 / FUN_00a9d7c0.
    struct QueueEntry {
        undefined4 words[7];   // +0x00 copied from the source record (+0x00..+0x18)
        undefined4 unset1C;    // +0x1C never written by the pushers
        float      vec[4];     // +0x20 copied from the source record (+0x20..+0x2C)
        float      extra;      // +0x30 0.0f or the caller's value
    };

    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined4 destruct(byte param_2);  // 00AA9010 slot 0x0  overrides cParts
    virtual undefined * vf04();  // 00AA3680 slot 0x4  overrides cObj
    virtual void vf1C();  // 00A92520 slot 0x1C  overrides cObj
    virtual void vf20();  // 00A92550 slot 0x20  overrides cObj
    virtual void vf2C();  // 00A964E0 slot 0x2C  overrides cObj
    virtual void vf30();  // 00A96490 slot 0x30  overrides cObj
    virtual void vf34();  // 00A96470 slot 0x34  overrides cObj
    virtual void vf3C(undefined4 param_2);  // 00A924A0 slot 0x3C  overrides cObj
    virtual undefined4 startup();  // 00A91E90 slot 0x40  resets state, creates the cloth from _0_0/_0_1 clp/clw/clh.bxm
    virtual void vf44();  // 00A9D130 slot 0x44  releases owned objects, cloth and collision helpers
    virtual void vf48();  // 00A9D2F0 slot 0x48
    virtual void vf4C();  // 00A8B7F0 slot 0x4C
    virtual void vf50();  // 00A9D380 slot 0x50
    virtual void vf54();  // 00A9D3E0 slot 0x54  per frame: attachments and cloth update
    virtual void vf58();  // 00A8B840 slot 0x58
    virtual void vf5C();  // 00A8B850 slot 0x5C
    virtual void vf60();  // 00A9D3D0 slot 0x60
    virtual void vf64();  // 00AA36F0 slot 0x64
    virtual undefined * vf68();  // 00A92780 slot 0x68
    virtual void vf6C();  // 00A927A0 slot 0x6C
    virtual void vf70();  // 00A927C0 slot 0x70
    virtual void vf74(undefined4 param_2);  // 00A927E0 slot 0x74
    virtual void vf78(undefined4 param_2, undefined4 param_3, undefined4 param_4);  // 00A928B0 slot 0x78
    virtual void vf7C(undefined4 param_2, undefined4 param_3);  // 00A92820 slot 0x7C
    virtual void vf80();  // 0040D840 slot 0x80
    virtual undefined * vf84();  // 00A92950 slot 0x84
    virtual void vf88();  // 00A92970 slot 0x88
    virtual undefined * vf8C();  // 00A92990 slot 0x8C
    virtual void vf90();  // 00A929B0 slot 0x90
    virtual undefined4 vf94();  // 0040D850 slot 0x94
    virtual undefined4 vf98();  // 0040DE20 slot 0x98  base returns modelObjId (+0x4B0)
    virtual void vf9C(char * param_2);  // 00A96360 slot 0x9C  returns a value (used by FUN_00a9e290); kept void because a derived class overrides it so
    virtual undefined4 vfA0();  // 0040D860 slot 0xA0
    virtual void vfA4();  // 00A8BF30 slot 0xA4
    virtual undefined4 vfA8();  // 00A8BF40 slot 0xA8
    virtual undefined4 vfAC();  // 00A8BF50 slot 0xAC
    virtual undefined4 vfB0();  // 00A8BF60 slot 0xB0
    virtual void vfB4(int param_2);  // 00A8C090 slot 0xB4
    virtual void vfB8(undefined4 param_2);  // 00A8C0C0 slot 0xB8
    virtual undefined4 vfBC(undefined4 param_1);  // 00A8C100 slot 0xBC
    virtual void vfC0();  // 00A92AE0 slot 0xC0
    virtual void vfC4(undefined4 param_2);  // 00A8BF70 slot 0xC4
    virtual void vfC8(undefined4 param_2);  // 00A8BFA0 slot 0xC8
    virtual void vfCC(undefined4 param_2, undefined4 param_3);  // 00A8BFF0 slot 0xCC
    virtual void vfD0();  // 00A8C020 slot 0xD0
    virtual void vfD4();  // 00A8C040 slot 0xD4
    virtual undefined4 vfD8();  // 00A8C060 slot 0xD8
    virtual undefined4 vfDC();  // 00A8C200 slot 0xDC
    virtual undefined4 vfE0();  // 00A8C210 slot 0xE0
    virtual undefined4 vfE4();  // 00A8C220 slot 0xE4
    virtual undefined4 vfE8();  // 00A8C230 slot 0xE8
    virtual undefined4 vfEC();  // 00A8C1F0 slot 0xEC
    virtual undefined4 vfF0();  // 0040D870 slot 0xF0
    virtual void vfF4();  // 00A8DA30 slot 0xF4
    virtual void vfF8(int param_2);  // 00A930F0 slot 0xF8
    virtual void vfFC();  // 00A8C110 slot 0xFC
    virtual void vf100();  // 00A8C180 slot 0x100
    virtual void vf104();  // 00A93130 slot 0x104
    virtual void vf108();  // 00A8C250 slot 0x108
    virtual undefined4 vf10C();  // 00A8C260 slot 0x10C
    virtual void vf110(undefined4 param_2);  // 00A8E710 slot 0x110
    virtual void vf114();  // 00A8B6D0 slot 0x114
    virtual bool vf118(int param_2);  // 00A91E10 slot 0x118
    virtual void vf11C();  // 0040D880 slot 0x11C
    virtual void vf120();  // 0040D890 slot 0x120
    virtual undefined4 vf124();  // 0040D8A0 slot 0x124
    virtual void setSeqAtk();  // 00A9F960 slot 0x128
    virtual undefined4 vf12C();  // 00A8CDA0 slot 0x12C
    virtual int getAttackInfo(ushort * param_2);  // 00A8CDB0 slot 0x130
    virtual undefined4 vf134();  // 00A8CE80 slot 0x134
    virtual undefined4 vf138();  // 0040D8B0 slot 0x138
    virtual undefined4 vf13C();  // 0040D8C0 slot 0x13C
    virtual float10 vf140();  // 0040D8D0 slot 0x140
    virtual float10 vf144();  // 0040D8E0 slot 0x144
    virtual float10 vf148();  // 0040D8F0 slot 0x148
    virtual undefined4 vf14C();  // 0040E5E0 slot 0x14C
    virtual void vf150();  // 0040D900 slot 0x150
    virtual void vf154();  // 0040E5F0 slot 0x154
    virtual undefined4 vf158();  // 0040D910 slot 0x158
    virtual void vf15C();  // 0040D920 slot 0x15C
    virtual void vf160();  // 0040D930 slot 0x160
    virtual bool vf164();  // 00A8CF00 slot 0x164
    virtual undefined4 vf168(int param_2, int param_3);  // 00A96C90 slot 0x168
    virtual void vf16C();  // 00A96D80 slot 0x16C
    virtual undefined4 vf170();  // 0040D940 slot 0x170
    virtual void vf174(undefined4 param_2);  // 00A96E10 slot 0x174
    virtual void vf178();  // 0040E600 slot 0x178
    virtual undefined4 vf17C();  // 0040D950 slot 0x17C
    virtual undefined4 vf180();  // 0040D960 slot 0x180
    virtual undefined4 vf184();  // 0040D970 slot 0x184
    virtual void vf188();  // 0040D980 slot 0x188
    virtual void vf18C();  // 0040D990 slot 0x18C
    virtual undefined4 vf190();  // 0040D9A0 slot 0x190
    virtual undefined4 vf194();  // 0040D9B0 slot 0x194
    virtual void vf198(undefined4 param_2, undefined4 param_3, undefined4 param_4);  // 00A8CDE0 slot 0x198
    virtual void vf19C(int param_2, undefined4 param_3);  // 00A8CE60 slot 0x19C
    virtual undefined4 vf1A0();  // 0040D9C0 slot 0x1A0
    virtual void vf1A4(undefined4 param_2, uint param_3);  // 00A8CE70 slot 0x1A4
    virtual void vf1A8(int param_2, uint param_3, undefined4 param_4);  // 00AA07C0 slot 0x1A8
    virtual void vf1AC();  // 00A96C00 slot 0x1AC
    virtual undefined4 vf1B0();  // 0040D9D0 slot 0x1B0
    virtual void vf1B4();  // 0040E610 slot 0x1B4
    virtual void setCutCrerateInfo(undefined4 * param_1, undefined4 param_2, int param_3);  // 00A8CD20 slot 0x1B8
    virtual void vf1BC(int * param_2);  // 00A964F0 slot 0x1BC
    virtual void vf1C0();  // 0040D9E0 slot 0x1C0
    virtual void vf1C4();  // 0040D9F0 slot 0x1C4
    virtual void vf1C8();  // 0040DA00 slot 0x1C8
    virtual void vf1CC();  // 0040DA10 slot 0x1CC
    virtual void vf1D0(undefined4 param_2);  // 00A96660 slot 0x1D0
    virtual void vf1D4(undefined4 param_2);  // 0040DA20 slot 0x1D4
    virtual undefined4 vf1D8();  // 0040DA30 slot 0x1D8
    virtual undefined4 vf1DC();  // 0040DA40 slot 0x1DC
    virtual void vf1E0();  // 0040DA50 slot 0x1E0
    virtual void vf1E4();  // 0040DA60 slot 0x1E4
    virtual void vf1E8();  // 0040DA70 slot 0x1E8
    virtual void vf1EC();  // 0040DA80 slot 0x1EC
    virtual void vf1F0(undefined4 param_2);  // 0040DA90 slot 0x1F0
    virtual undefined4 vf1F4();  // 0040DAA0 slot 0x1F4
    virtual void vf1F8(undefined4 param_2);  // 0040DAB0 slot 0x1F8
    virtual undefined4 vf1FC();  // 0040DAC0 slot 0x1FC
    virtual undefined4 vf200();  // 0040DAD0 slot 0x200
    virtual float * vf204(float * param_2);  // 00A97030 slot 0x204
    virtual float * vf208(float * param_2);  // 00A97190 slot 0x208
    virtual float10 vf20C();  // 0040DAE0 slot 0x20C
    virtual undefined4 vf210();  // 0040DAF0 slot 0x210
    virtual void vf214(undefined4 param_2, undefined4 param_3, int param_4);  // 00A97EF0 slot 0x214
    virtual void vf218();  // 00A97F80 slot 0x218
    virtual undefined vf21C();  // 00A8D980 slot 0x21C
    virtual void vf220();  // 0040DB00 slot 0x220
    virtual void vf224();  // 0040DB10 slot 0x224
    virtual undefined4 vf228();  // 0040DB20 slot 0x228
    virtual undefined4 vf22C();  // 0040DB30 slot 0x22C
    virtual undefined4 vf230();  // 0040DB40 slot 0x230
    virtual undefined4 vf234();  // 0040DB50 slot 0x234
    virtual undefined4 vf238();  // 0040DB60 slot 0x238
    virtual undefined4 vf23C();  // 0040DB70 slot 0x23C
    virtual void vf240(undefined4 param_2);  // 00A8B760 slot 0x240
    virtual undefined4 vf244();  // 0040DB80 slot 0x244
    virtual void vf248();  // 00A8CF20 slot 0x248
    virtual void vf24C(char *animName);  // 0040DB90 slot 0x24C  (base: ret 4)
    virtual undefined4 vf250();  // 0040DBA0 slot 0x250
    virtual void vf254();  // 0040E620 slot 0x254
    virtual void vf258();  // 0040DBB0 slot 0x258
    virtual void vf25C(undefined4 param_2, int param_3, int param_4);  // 00A94510 slot 0x25C
    virtual void vf260();  // 0040DBC0 slot 0x260
    virtual undefined4 setEmSetInfo();  // 0040DBD0 slot 0x264
    virtual undefined4 vf268();  // 0040DBE0 slot 0x268
    virtual undefined4 vf26C();  // 0040DBF0 slot 0x26C
    virtual undefined4 vf270();  // 0040DC00 slot 0x270
    virtual undefined4 vf274();  // 0040DC10 slot 0x274
    virtual void vf278();  // 0040DC20 slot 0x278
    virtual void vf27C(undefined4 * param_2);  // 0040DE30 slot 0x27C
    virtual undefined4 vf280();  // 0040DC30 slot 0x280
    virtual undefined4 vf284();  // 0040DC40 slot 0x284
    virtual undefined4 vf288();  // 0040DC50 slot 0x288
    virtual undefined4 vf28C();  // 0040DC60 slot 0x28C
    virtual undefined4 vf290();  // 0040DC70 slot 0x290
    virtual void vf294();  // 0040DC80 slot 0x294
    virtual void vf298();  // 0040DC90 slot 0x298
    virtual void vf29C();  // 0040DCA0 slot 0x29C
    virtual void vf2A0();  // 0040DCB0 slot 0x2A0
    virtual void vf2A4();  // 0040DCC0 slot 0x2A4
    virtual void vf2A8();  // 0040DCD0 slot 0x2A8
    virtual void vf2AC();  // 0040DCE0 slot 0x2AC
    virtual void vf2B0();  // 0040DCF0 slot 0x2B0
    virtual void vf2B4();  // 0040DD00 slot 0x2B4
    virtual void vf2B8();  // 0040DD10 slot 0x2B8
    virtual void vf2BC();  // 0040DD20 slot 0x2BC
    virtual void vf2C0();  // 0040DD30 slot 0x2C0
    virtual void vf2C4();  // 0040DD40 slot 0x2C4
    virtual void vf2C8();  // 0040DD50 slot 0x2C8
    virtual void vf2CC();  // 0040DD60 slot 0x2CC
    virtual void vf2D0();  // 0040DD70 slot 0x2D0
    virtual undefined4 vf2D4();  // 0040DD80 slot 0x2D4
    virtual void vf2D8(undefined4 param_2, undefined4 param_3);  // 00A8C270 slot 0x2D8
    virtual void vf2DC();  // 00A8C280 slot 0x2DC
    virtual void vf2E0();  // 0040DD90 slot 0x2E0
    virtual void vf2E4();  // 00A8E700 slot 0x2E4
    virtual void vf2E8();  // 0040DDA0 slot 0x2E8
    virtual void vf2EC();  // 0040DDB0 slot 0x2EC
    virtual undefined1 vf2F0();  // 00A8E730 slot 0x2F0
    virtual void vf2F4();  // 0040E630 slot 0x2F4
    virtual void vf2F8();  // 0040DDC0 slot 0x2F8
    virtual undefined4 vf2FC();  // 0040DDD0 slot 0x2FC
    // non-virtual members
    int setupCloth(void *dataFile);  // 00A92380 (cloth files are looked up in dataFile)
    void updateGroundSupportForParts(int queryId, float *hitPos, int *groundState, int *hitCollision,
                                     int partsNo);  // 00A92B10
    int addBodyOffenseCollisionFromRigidBody(int *rigidBodyRef, int ownerParam, int collisionId,
                                             int meshArg0, int meshArg2);  // 00A93960
    int addDefenseCollisionFromRigidBody(int *rigidBodyRef, int meshArg0, int ownerParam);  // 00A93AC0
    int addDefenseCollisionFromRigidBody_2(int *rigidBodyList, int meshArg0);  // 00A93B70
    int *createAttackImpactWave(int desc);  // 00A94010 (__thiscall: ECX = owner behaviour)
    static int *createAttackImpactVolume(int desc);  // 00A94190
    Behavior();  // 00AA3540
    void ctor_00AA3690();  // 00AA3690
    void ctor_00AA4B10();  // 00AA4B10
    void ctor_00AA7000();  // 00AA7000
    void ctor_00AA70A0();  // 00AA70A0
    void ctor_00AA7120();  // 00AA7120
    void ctor_00AA7180();  // 00AA7180
    void ctor_00AA71E0();  // 00AA71E0
    void ctor_00AA7360();  // 00AA7360
    void ctor_00AA7440();  // 00AA7440
    void ctor_00AA74E0();  // 00AA74E0
    void ctor_00AA7540();  // 00AA7540
    void ctor_00AA75A0();  // 00AA75A0
    void ctor_00AA7600();  // 00AA7600
    void ctor_00AA7660();  // 00AA7660
    void ctor_00AA76C0();  // 00AA76C0
    void ctor_00AA7720();  // 00AA7720
    void ctor_00AA7780();  // 00AA7780
    void ctor_00AA77E0();  // 00AA77E0
    void ctor_00AA7840();  // 00AA7840
    void ctor_00AA78A0();  // 00AA78A0
    void ctor_00AA7920();  // 00AA7920
    void ctor_00AA7980();  // 00AA7980
    void ctor_00AA79E0();  // 00AA79E0
    void ctor_00AA7A60();  // 00AA7A60
    void ctor_00AA7AC0();  // 00AA7AC0
    void ctor_00AA7B20();  // 00AA7B20
    void ctor_00AA7B80();  // 00AA7B80
    void ctor_00AA7C10();  // 00AA7C10
    void ctor_00AA7C70();  // 00AA7C70
    void ctor_00AA7CF0();  // 00AA7CF0
    void ctor_00AA7D50();  // 00AA7D50
    void ctor_00AA7DB0();  // 00AA7DB0
    void ctor_00AA7E10();  // 00AA7E10
    void ctor_00AA7E70();  // 00AA7E70
    void ctor_00AA7ED0();  // 00AA7ED0
    void ctor_00AA7F40();  // 00AA7F40
    void ctor_00AA7FA0();  // 00AA7FA0
    void ctor_00AA8000();  // 00AA8000
    void ctor_00AA8060();  // 00AA8060
    void ctor_00AA80C0();  // 00AA80C0
    void ctor_00AA8120();  // 00AA8120
    void ctor_00AA8180();  // 00AA8180
    void ctor_00AA81E0();  // 00AA81E0
    void ctor_00AA8240();  // 00AA8240
    void ctor_00AA82A0();  // 00AA82A0
    void ctor_00AA8300();  // 00AA8300
    void ctor_00AA8360();  // 00AA8360
    void ctor_00AA83C0();  // 00AA83C0
    void ctor_00AA8420();  // 00AA8420
    void ctor_00AA8480();  // 00AA8480
    void ctor_00AA84E0();  // 00AA84E0
    void ctor_00AA8540();  // 00AA8540
    void ctor_00AA85A0();  // 00AA85A0
    void ctor_00AA8600();  // 00AA8600
    void ctor_00AA8660();  // 00AA8660
    void ctor_00AA86C0();  // 00AA86C0
    void ctor_00AA8720();  // 00AA8720
    void ctor_00AA8780();  // 00AA8780
    void ctor_00AA87E0();  // 00AA87E0
    void ctor_00AA8840();  // 00AA8840
    void ctor_00AA88A0();  // 00AA88A0
    void ctor_00AA8900();  // 00AA8900
    void ctor_00AA8960();  // 00AA8960
    void ctor_00AA89C0();  // 00AA89C0
    void ctor_00AA8A20();  // 00AA8A20
    void ctor_00AA8A80();  // 00AA8A80
    void ctor_00AA8B20();  // 00AA8B20
    void ctor_00AA8BA0();  // 00AA8BA0
    void ctor_00AA8C80();  // 00AA8C80
    void ctor_00AA8D50();  // 00AA8D50
    void ctor_00AA8DB0();  // 00AA8DB0
    void ctor_00AA8E10();  // 00AA8E10
    void ctor_00AA8E70();  // 00AA8E70
    void ctor_00AA9350();  // 00AA9350
    void ctor_00AAB4C0();  // 00AAB4C0
    void ctor_00AAB560();  // 00AAB560
    void ctor_00AAB770();  // 00AAB770
    void ctor_00AAB8E0();  // 00AAB8E0
    void ctor_00AABE00();  // 00AABE00
    void ctor_00AAC140();  // 00AAC140
    void ctor_00AAC540();  // 00AAC540
    void ctor_00AAD110();  // 00AAD110
    void ctor_00AAE3C0();  // 00AAE3C0
    void ctor_00AAE960();  // 00AAE960
    void ctor_00AAEAA0();  // 00AAEAA0
    void ctor_00AAEB70();  // 00AAEB70
    void ctor_00AAED30();  // 00AAED30
    void ctor_00AAEE20();  // 00AAEE20
    void ctor_00AAEF40();  // 00AAEF40
    void ctor_00AAEFE0();  // 00AAEFE0
    void ctor_00AAF0B0();  // 00AAF0B0
    void ctor_00AAF160();  // 00AAF160
    void ctor_00AAF220();  // 00AAF220
    void ctor_00AAF3A0();  // 00AAF3A0
    void ctor_00AAF8B0();  // 00AAF8B0
    void ctor_00AAF960();  // 00AAF960
    void ctor_00AAF9F0();  // 00AAF9F0
    void ctor_00AAFA80();  // 00AAFA80
    void ctor_00AAFB10();  // 00AAFB10
    void ctor_00AAFBA0();  // 00AAFBA0
    void ctor_00AAFC30();  // 00AAFC30
    void ctor_00AAFCC0();  // 00AAFCC0
    void ctor_00AAFD50();  // 00AAFD50
    void ctor_00AAFDE0();  // 00AAFDE0
    void ctor_00AB0700();  // 00AB0700
    void ctor_00AB0CE0();  // 00AB0CE0
    void ctor_00AB1030();  // 00AB1030
    void ctor_00AB1160();  // 00AB1160
    void ctor_00AB1A00();  // 00AB1A00
    void ctor_00AB1BD0();  // 00AB1BD0
    void ctor_00AB2120();  // 00AB2120
    void ctor_00AB23D0();  // 00AB23D0
    void ctor_00AB29E0();  // 00AB29E0
    void ctor_00AB37E0();  // 00AB37E0
    void ctor_00AB3BF0();  // 00AB3BF0
    void ctor_00AB3EB0();  // 00AB3EB0
    void ctor_00AB4010();  // 00AB4010
    void ctor_00AB4140();  // 00AB4140
    void ctor_00AB4200();  // 00AB4200
    void ctor_00AB42C0();  // 00AB42C0
    void ctor_00AB4A50();  // 00AB4A50
    void ctor_00AB50F0();  // 00AB50F0
    void ctor_00AB5A10();  // 00AB5A10
    void ctor_00AB5AA0();  // 00AB5AA0
    void ctor_00AB5B30();  // 00AB5B30
    void ctor_00AB5E40();  // 00AB5E40
    void ctor_00AB5F50();  // 00AB5F50
    void ctor_00AB6010();  // 00AB6010
    void ctor_00AB60D0();  // 00AB60D0
    void ctor_00AB6BF0();  // 00AB6BF0
    void ctor_00ABACE0();  // 00ABACE0
    void ctor_00AC0EE0();  // 00AC0EE0
    void ctor_00AC0FE0();  // 00AC0FE0
    void ctor_00AC1850();  // 00AC1850

    // fields (absolute byte offsets from the object start)
    float *         vec560() { return (float *)((char *)this + 0x560); }                                 // +0x560 float[4], zeroed by startup
    int &           field584() { return *(int *)((char *)this + 0x584); }                                // +0x584 released with field588 via (*DAT_01be9bf4)->vf10
    int &           field588() { return *(int *)((char *)this + 0x588); }                                // +0x588
    int &           field58C() { return *(int *)((char *)this + 0x58C); }                                  // +0x58C
    unsigned char & groundAttribute() { return *(unsigned char *)((char *)this + 0x590); }               // +0x590 FUN_00915990(hit, 9) of the ground hit
    float &         groundSupportRange() { return *(float *)((char *)this + 0x600); }                    // +0x600 max ground-support distance (0.1f at startup)
    int &           field614() { return *(int *)((char *)this + 0x614); }                                  // +0x614
    void *&         queueLock() { return *(void * *)((char *)this + 0x638); }                            // +0x638 { CRITICAL_SECTION; int enabled (+0x18) }
    Array *&        queue63C() { return *(Array * *)((char *)this + 0x63C); }                            // +0x63C 0x34-byte entries, pushed under queueLock
    int &           field640() { return *(int *)((char *)this + 0x640); }                                // +0x640
    int &           field644() { return *(int *)((char *)this + 0x644); }                                  // +0x644
    int &           field648() { return *(int *)((char *)this + 0x648); }                                  // +0x648
    int &           field658() { return *(int *)((char *)this + 0x658); }                                  // +0x658
    int &           field65C() { return *(int *)((char *)this + 0x65C); }                                  // +0x65C
    int &           field660() { return *(int *)((char *)this + 0x660); }                                  // +0x660
    int &           field664() { return *(int *)((char *)this + 0x664); }                                  // +0x664
    undefined4 &    handle66C() { return *(undefined4 *)((char *)this + 0x66C); }                          // +0x66C cleared by FUN_00a7c930 in the constructor
    int &           field674() { return *(int *)((char *)this + 0x674); }                                // +0x674
    int &           field678() { return *(int *)((char *)this + 0x678); }                                  // +0x678
    int &           buffer67C() { return *(int *)((char *)this + 0x67C); }                                 // +0x67C heap block, freed with FUN_00dd48d0 by the destructor when bufferOwned688
    int &           field680() { return *(int *)((char *)this + 0x680); }                                  // +0x680 cleared with buffer67C
    int &           field684() { return *(int *)((char *)this + 0x684); }                                  // +0x684 cleared with buffer67C (? element count)
    int &           bufferOwned688() { return *(int *)((char *)this + 0x688); }                            // +0x688 non-zero: buffer67C must be freed
    int &           field68C() { return *(int *)((char *)this + 0x68C); }                                  // +0x68C
    int &           field690() { return *(int *)((char *)this + 0x690); }                                // +0x690
    unsigned char & byte6B0() { return *(unsigned char *)((char *)this + 0x6B0); }                       // +0x6B0
    int &           field6B8() { return *(int *)((char *)this + 0x6B8); }                                  // +0x6B8
    int &           field6BC() { return *(int *)((char *)this + 0x6BC); }                                // +0x6BC
    int &           field6C0() { return *(int *)((char *)this + 0x6C0); }                                // +0x6C0
    int &           field6C4() { return *(int *)((char *)this + 0x6C4); }                                // +0x6C4 -1 at startup
    float *         vec6D0() { return (float *)((char *)this + 0x6D0); }                                 // +0x6D0 float[4]
    int &           field6E0() { return *(int *)((char *)this + 0x6E0); }                                // +0x6E0 -1 at startup
    int &           field6E4() { return *(int *)((char *)this + 0x6E4); }                                // +0x6E4 -1 at startup
    float &         field6E8() { return *(float *)((char *)this + 0x6E8); }                              // +0x6E8 1.0f at startup
    int &           field6EC() { return *(int *)((char *)this + 0x6EC); }                                // +0x6EC
    void *          lockonPartsList() { return (void *)((char *)this + 0x6F0); }                           // +0x6F0 embedded cLockonPartsList (ctor 00A87D90 / dtor 00A87DC0)
    int &           field710() { return *(int *)((char *)this + 0x710); }                                // +0x710
    int &           counter730() { return *(int *)((char *)this + 0x730); }                              // +0x730 decremented by vf4C while field734 <= 0
    int &           field734() { return *(int *)((char *)this + 0x734); }                                // +0x734
    float &         field738() { return *(float *)((char *)this + 0x738); }                              // +0x738 1.0f at startup
    int &           field73C() { return *(int *)((char *)this + 0x73C); }                                // +0x73C
    int &           field748() { return *(int *)((char *)this + 0x748); }                                // +0x748
    int &           field754() { return *(int *)((char *)this + 0x754); }                                // +0x754 registered with FUN_00d72970()
    int &           field758() { return *(int *)((char *)this + 0x758); }                                  // +0x758
    int &           field75C() { return *(int *)((char *)this + 0x75C); }                                // +0x75C registered with FUN_008d7570()
    int &           attackIdBase760() { return *(int *)((char *)this + 0x760); }                           // +0x760 setSeqAtk: attack collision id = this + attack type; copied to AttackInfo+0x88
    int &           clothEnabled() { return *(int *)((char *)this + 0x768); }                            // +0x768
    int &           cloth0() { return *(int *)((char *)this + 0x76C); }                                  // +0x76C cloth object (0xBE0 bytes) from _0_0_*.bxm
    int &           cloth1() { return *(int *)((char *)this + 0x770); }                                  // +0x770 cloth object from _0_1_*.bxm (object 0x20110 only)
    Array *&        animNames() { return *(Array * *)((char *)this + 0x774); }                           // +0x774 AnimName entries
    int &           animStarted() { return *(int *)((char *)this + 0x778); }                             // +0x778 set to 1 after an animation is started
    int &           field77C() { return *(int *)((char *)this + 0x77C); }                                // +0x77C
    int &           field780() { return *(int *)((char *)this + 0x780); }                                // +0x780
    float &         field784() { return *(float *)((char *)this + 0x784); }                              // +0x784 1.0f at startup
    void *&         array788() { return *(void * *)((char *)this + 0x788); }                             // +0x788 freed with FUN_00dd4940
    int &           field78C() { return *(int *)((char *)this + 0x78C); }                                  // +0x78C
    int &           field798() { return *(int *)((char *)this + 0x798); }                                  // +0x798
    int &           field79C() { return *(int *)((char *)this + 0x79C); }                                  // +0x79C
    int &           field7A0() { return *(int *)((char *)this + 0x7A0); }                                  // +0x7A0
    Array *&        collisionList7A4() { return *(Array * *)((char *)this + 0x7A4); }                    // +0x7A4 Collision* entries (? attack collisions)
    Array *&        defenseCollisionList() { return *(Array * *)((char *)this + 0x7A8); }                // +0x7A8 Collision* entries added by FUN_00a93a00
    Array *&        bodyOffenseCollisionList() { return *(Array * *)((char *)this + 0x7AC); }            // +0x7AC Collision* entries added by FUN_00a8c3b0
    int &           field7B0() { return *(int *)((char *)this + 0x7B0); }                                  // +0x7B0
    int &           field7B4() { return *(int *)((char *)this + 0x7B4); }                                  // +0x7B4
    void *&         ownedObj7B8() { return *(void * *)((char *)this + 0x7B8); }                          // +0x7B8 polymorphic, deleted by FUN_00a9d8a0
    float &         field7C0() { return *(float *)((char *)this + 0x7C0); }                                // +0x7C0 0.0f in the constructor
    Array **&       attachments() { return *(Array ** *)((char *)this + 0x7C4); }                        // +0x7C4 points to the Array* of Attachment
    int &           field7C8() { return *(int *)((char *)this + 0x7C8); }                                // +0x7C8
    int &           field7CC() { return *(int *)((char *)this + 0x7CC); }                                // +0x7CC object used with field7D0 (FUN_00d82990 / FUN_00d829e0)
    int &           field7D0() { return *(int *)((char *)this + 0x7D0); }                                // +0x7D0
    int &           field7D4() { return *(int *)((char *)this + 0x7D4); }                                  // +0x7D4
    int &           ownedObj7D8() { return *(int *)((char *)this + 0x7D8); }                             // +0x7D8 destroyed with FUN_00c730c0 in vf44
    int &           field800() { return *(int *)((char *)this + 0x800); }                                // +0x800
    int &           ownedObj808() { return *(int *)((char *)this + 0x808); }                             // +0x808 freed in vf44
    int &           field80C() { return *(int *)((char *)this + 0x80C); }                                // +0x80C
    int &           field810() { return *(int *)((char *)this + 0x810); }                                // +0x810
    int &           field814() { return *(int *)((char *)this + 0x814); }                                // +0x814 -1 at startup
    int &           field818() { return *(int *)((char *)this + 0x818); }                                  // +0x818
    short &         field824() { return *(short *)((char *)this + 0x824); }                                // +0x824 -1 in the constructor
    int &           field830() { return *(int *)((char *)this + 0x830); }                                  // +0x830
    int &           field834() { return *(int *)((char *)this + 0x834); }                                  // +0x834
    int &           field83C() { return *(int *)((char *)this + 0x83C); }                                // +0x83C copy of field51C at startup
    int &           field840() { return *(int *)((char *)this + 0x840); }                                // +0x840
    int &           field844() { return *(int *)((char *)this + 0x844); }                                // +0x844
    unsigned char & byte849() { return *(unsigned char *)((char *)this + 0x849); }                         // +0x849
};

// src/managers/scenarioregionmanager/ScenarioRegionManagerImplement.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "ScenarioRegionManagerImplement.h"

// ---------------------------------------------------------------------------------------------
// Data referenced by this part
// ---------------------------------------------------------------------------------------------
extern int DAT_01be8e58;           // player object (ECX of FUN_00a7c8a0 in vf04)
extern char DAT_01b7b628[];        // object table: FUN_00a18cf0 finds an object by name hash
extern char DAT_01be8f30[];        // ECX of FUN_00a4c810 (room state query)
extern char DAT_01bebd80[];        // ECX of FUN_00c15900 (object list)
extern char DAT_016630d8[];        // "[ScenarioRegionManager] getFreeGroupWork :..." (Shift-JIS message)
extern char DAT_01663148[];        // "[ScenarioRegionManager] getWorkPtr :[group%d No:%d]..." (Shift-JIS format)
extern char DAT_01661874[];        // "PRIM"
extern char DAT_0164fcc8[];        // "Type"

namespace ScenarioRegionManagerImplement_p1 {

typedef ScenarioRegionManagerImplement::Region Region;
typedef ScenarioRegionManagerImplement::Group Group;

// Virtual call through slot `slot` (byte offset) of an object whose class is not known here.
inline int vcall0(int object, int slot)
{
    return ((int (__thiscall *)(int))(*(int **)object)[slot / 4])(object);
}
inline int vcall1(int object, int slot, int a)
{
    return ((int (__thiscall *)(int, int))(*(int **)object)[slot / 4])(object, a);
}
inline int vcall2(int object, int slot, int a, int b)
{
    return ((int (__thiscall *)(int, int, int))(*(int **)object)[slot / 4])(object, a, b);
}

// Region visitor: vf08 receives the address of a Region pointer.
inline void visit(int *visitor, Region **region)
{
    ((void (__thiscall *)(int *, Region **))(*(int **)visitor)[0x8 / 4])(visitor, region);
}

// FUN_00d900c0 (cdecl): non-zero when `point` lies inside `shape`.
inline int shapeContains(unsigned char *shape, const float *point)
{
    return (int)((unsigned int (__cdecl *)(unsigned char *, const float *))FUN_00d900c0)(shape, point);
}
// FUN_00d90360 (cdecl): byte size of a shape of the given type.
inline int shapeSize(unsigned char type)
{
    return (int)FUN_00d90360(type);
}
// Shape types 6 and 7 keep derived data that must be rebuilt when the position changes:
// FUN_00d9c9c0 / FUN_00d9c2f0 (__fastcall, ECX = shape) rebuild it in place,
// FUN_00d9c9a0 / FUN_00d9c2d0 (__thiscall, ECX = shape) rebuild it from a parent matrix.
inline void shapeRefresh6(unsigned char *shape) { FUN_00d9c9c0((int)shape); }
inline void shapeRefresh7(unsigned char *shape) { FUN_00d9c2f0((int)shape); }
inline void shapeAttach6(unsigned char *shape, float *parentMatrix)
{
    ((void (__thiscall *)(unsigned char *, float *))FUN_00d9c9a0)(shape, parentMatrix);
}
inline void shapeAttach7(unsigned char *shape, float *parentMatrix)
{
    ((void (__thiscall *)(unsigned char *, float *))FUN_00d9c2d0)(shape, parentMatrix);
}
inline float *shapeVec(unsigned char *shape, int offset) { return (float *)(shape + offset); }

// shape+0x10 (current position) = shape+0x20 (base position), copied as four floats.
inline void shapeResetPosition(unsigned char *shape)
{
    shapeVec(shape, 0x10)[0] = shapeVec(shape, 0x20)[0];
    shapeVec(shape, 0x10)[1] = shapeVec(shape, 0x20)[1];
    shapeVec(shape, 0x10)[2] = shapeVec(shape, 0x20)[2];
    shapeVec(shape, 0x10)[3] = shapeVec(shape, 0x20)[3];
}

// FUN_00dd5650 (cdecl, printf-style): debug message.
inline void debugPrint(const char *message)
{
    ((void (__cdecl *)(const char *, ...))FUN_00dd5650)(message);
}
inline void debugPrint2(const char *format, int a, unsigned int b)
{
    ((void (__cdecl *)(const char *, ...))FUN_00dd5650)(format, a, b);
}
// FUN_00dd29b0 (__thiscall, ECX = heap): aligned allocation.
inline unsigned char *heapAlloc(int heap, int size, int alignment, int a, int b)
{
    return ((unsigned char *(__thiscall *)(int, int, int, int, int))FUN_00dd29b0)(heap, size, alignment, a, b);
}
// FUN_00e03ea0 (cdecl): string hash.
inline unsigned int hashName(char *name)
{
    return ((unsigned int (__cdecl *)(char *))FUN_00e03ea0)(name);
}
// FUN_00a18cf0 (__thiscall, ECX = DAT_01b7b628): object whose name hash is `hash`, or 0.
inline int findObjectByHash(unsigned int hash)
{
    return ((int (__thiscall *)(char *, unsigned int))FUN_00a18cf0)(DAT_01b7b628, hash);
}
// FUN_00a4c810 (__thiscall, ECX = DAT_01be8f30).
inline int roomQuery(int room)
{
    return ((int (__thiscall *)(char *, int))FUN_00a4c810)(DAT_01be8f30, room);
}
// FUN_00a6ee80 (__thiscall, ECX = region): reads the region's attributes from an XML node.
inline void regionRead(Region *region, unsigned int *xml, int *node)
{
    ((void (__thiscall *)(Region *, unsigned int *, int *))FUN_00a6ee80)(region, xml, node);
}
// FUN_00a6f710 (__thiscall, ECX = region): places the region's shape relative to a parent matrix.
inline void regionFollow(Region *region, float *parentMatrix)
{
    ((void (__thiscall *)(Region *, float *))FUN_00a6f710)(region, parentMatrix);
}
// FUN_00a12210 (__thiscall).
inline int call_00a12210(int object, int a)
{
    return ((int (__thiscall *)(int, int))FUN_00a12210)(object, a);
}
// FUN_00a7c8a0 (__fastcall): object+0x48, the object's transform block (matrix at +0x10,
// position at +0x40).
inline int transformOf(int object) { return (int)FUN_00a7c8a0(object); }

// cXmlBinary methods called directly on a local cXmlBinary (0x20 bytes) -- all __thiscall.
inline void xmlConstruct(unsigned int *xml)  // 00E05360 cXmlBinary::cXmlBinary
{
    ((void (__thiscall *)(unsigned int *))0x00E05360)(xml);
}
inline void xmlLoad(unsigned int *xml, int data, int a)  // 00E062B0
{
    ((int (__thiscall *)(unsigned int *, int, int))FUN_00e062b0)(xml, data, a);
}
inline int xmlRoot(unsigned int *xml)  // 00E041C0 cXmlBinary::vf04
{
    return ((int (__thiscall *)(unsigned int *))0x00E041C0)(xml);
}
inline int xmlChildCount(unsigned int *xml, int node)  // 00E053E0 cXmlBinary::vf10
{
    return ((int (__thiscall *)(unsigned int *, int))0x00E053E0)(xml, node);
}
inline int xmlChildAt(unsigned int *xml, int node, int index)  // 00E05410 cXmlBinary::vf14
{
    return ((int (__thiscall *)(unsigned int *, int, int))0x00E05410)(xml, node, index);
}
inline int xmlFindChild(unsigned int *xml, int node, char *name)  // 00E06390 cXmlBinary::vf18
{
    return ((int (__thiscall *)(unsigned int *, int, char *))0x00E06390)(xml, node, name);
}
inline void xmlReadByte(unsigned int *xml, int node, unsigned char *out)  // 00E067B0 cXmlBinary::vf70
{
    ((void (__thiscall *)(unsigned int *, int, unsigned char *))0x00E067B0)(xml, node, out);
}

// The compiler's inlined strcmp: <0, 0 or >0.
inline int inlinedStrcmp(const unsigned char *a, const unsigned char *b)
{
    unsigned char c;
    bool below;
    do {
        c = a[0];
        below = c < b[0];
        if (c != b[0]) {
            return (1 - (int)below) - (int)(below != 0);
        }
        if (c == 0) break;
        c = a[1];
        below = c < b[1];
        if (c != b[1]) {
            return (1 - (int)below) - (int)(below != 0);
        }
        a = a + 2;
        b = b + 2;
    } while (c != 0);
    return 0;
}

}  // namespace ScenarioRegionManagerImplement_p1

// 00A6DFC0  ScenarioRegionManagerImplement::vf08  size=1  [class]
void ScenarioRegionManagerImplement::vf08()
{
    return;
}

// 00A6DFD0  ScenarioRegionManagerImplement::vf0C  size=3  [class]
void ScenarioRegionManagerImplement::vf0C(int unused1, int unused2, int unused3)
{
    return;
}

// 00A6E070  ScenarioRegionManagerImplement::vf3C  size=109  [class]
int ScenarioRegionManagerImplement::vf3C(const float *position, unsigned int id, int unused, int groupId)
{
    using namespace ScenarioRegionManagerImplement_p1;
    Group *group = groups();
    int i = 0;
    do {
        if (group->id == groupId) {
            for (i = 0; i < group->count; i++) {
                Region *region = &group->regions[i];
                if (region->id == id) {
                    return shapeContains(region->shape, position);
                }
            }
            return 0;
        }
        i = i + 1;
        group = group + 1;
    } while (i < 3);
    return 0;
}

// 00A6E0E0  ScenarioRegionManagerImplement::vf20  size=40  [class]
bool ScenarioRegionManagerImplement::vf20(unsigned int workNo, unsigned int stateMask, int groupId)
{
    using namespace ScenarioRegionManagerImplement_p1;
    Region *region = (Region *)this->vf40(workNo, groupId);
    if (region == 0) {
        return false;
    }
    return (region->state & stateMask) != 0;
}

// 00A6E110  ScenarioRegionManagerImplement::vf24  size=103  [class]
int ScenarioRegionManagerImplement::vf24(unsigned int id, unsigned int stateMask, int groupId)
{
    using namespace ScenarioRegionManagerImplement_p1;
    Group *group = groups();
    int i = 0;
    while (group->id != groupId) {
        i = i + 1;
        group = group + 1;
        if (2 < i) {
            return 0;
        }
    }
    for (i = 0; i < group->count; i++) {
        Region *region = &group->regions[i];
        if (region->id == id && (region->state & stateMask) != 0) {
            return 1;
        }
    }
    return 0;
}

// 00A6E180  ScenarioRegionManagerImplement::vf40  size=102  [class]
ushort *ScenarioRegionManagerImplement::vf40(uint workNo, int groupId)
{
    using namespace ScenarioRegionManagerImplement_p1;
    // getWorkPtr
    int i = 0;
    Group *group = groups();
    while (group->id != groupId) {
        i = i + 1;
        group = group + 1;
        if (2 < i) {
            return 0;
        }
    }
    for (i = 0; i < group->count; i++) {
        Region *region = &group->regions[i];
        if (region->workNo == workNo) {
            return (ushort *)region;
        }
    }
    debugPrint2(DAT_01663148, groupId, workNo);
    return 0;
}

// 00A6E1F0  ScenarioRegionManagerImplement::vf44  size=81  [class]
void ScenarioRegionManagerImplement::vf44(uint id, int groupId)
{
    using namespace ScenarioRegionManagerImplement_p1;
    Group *group = groups();
    int i = 0;
    do {
        if (group->id == groupId) {
            for (i = 0; i < group->count; i++) {
                Region *region = &group->regions[i];
                if (region->id == id) {
                    region->flags = region->flags & 0xfffffffe;
                }
            }
            return;
        }
        i = i + 1;
        group = group + 1;
    } while (i < 3);
    return;
}

// 00A6E250  ScenarioRegionManagerImplement::vf48  size=86  [class]
void ScenarioRegionManagerImplement::vf48(uint id, int groupId)
{
    using namespace ScenarioRegionManagerImplement_p1;
    int i = 0;
    Group *group = groups();
    do {
        if (group->id == groupId) {
            for (i = 0; i < group->count; i++) {
                Region *region = &group->regions[i];
                if (region->id == id) {
                    region->flags = region->flags | 1;
                    region->state = region->state & 0xfffffff8;
                }
            }
            return;
        }
        i = i + 1;
        group = group + 1;
    } while (i < 3);
    return;
}

// 00A6E2B0  ScenarioRegionManagerImplement::vf50  size=96  [class]
undefined4 ScenarioRegionManagerImplement::vf50(uint id, int groupId)
{
    using namespace ScenarioRegionManagerImplement_p1;
    int i = 0;
    Group *group = groups();
    do {
        if (group->id == groupId) {
            undefined4 found = 0;
            i = 0;
            if (0 < group->count) {
                while (group->regions[i].id != id) {
                    i = i + 1;
                    if (group->count <= i) {
                        return found;
                    }
                }
                found = 1;
            }
            return found;
        }
        i = i + 1;
        group = group + 1;
    } while (i < 3);
    return 0;
}

// 00A6E310  ScenarioRegionManagerImplement::vf54  size=110  [class]
void ScenarioRegionManagerImplement::vf54(int *visitor, int groupId, int userDataType)
{
    using namespace ScenarioRegionManagerImplement_p1;
    Group *group = groups();
    int i = 0;
    do {
        if (group->id == groupId) {
            for (i = 0; i < group->count; i++) {
                Region *region = &group->regions[i];
                if (region->userDataType == userDataType && (region->state & 1) != 0) {
                    visit(visitor, &region);
                }
            }
            return;
        }
        i = i + 1;
        group = group + 1;
    } while (i < 3);
    return;
}

// 00A6E390  ScenarioRegionManagerImplement::vf58  size=102  [class]
void ScenarioRegionManagerImplement::vf58(int *visitor, int groupId, int userDataType)
{
    using namespace ScenarioRegionManagerImplement_p1;
    Group *group = groups();
    int i = 0;
    do {
        if (group->id == groupId) {
            for (i = 0; i < group->count; i++) {
                Region *region = &group->regions[i];
                if (region->userDataType == userDataType) {
                    visit(visitor, &region);
                }
            }
            return;
        }
        i = i + 1;
        group = group + 1;
    } while (i < 3);
    return;
}

// 00A6E400  ScenarioRegionManagerImplement::vf5C  size=114  [class]
void ScenarioRegionManagerImplement::vf5C(int *visitor, unsigned int id, int groupId, int userDataType)
{
    using namespace ScenarioRegionManagerImplement_p1;
    Group *group = groups();
    int i = 0;
    do {
        if (group->id == groupId) {
            for (i = 0; i < group->count; i++) {
                Region *region = &group->regions[i];
                if (region->userDataType == userDataType && region->id == id) {
                    visit(visitor, &region);
                }
            }
            return;
        }
        i = i + 1;
        group = group + 1;
    } while (i < 3);
    return;
}

// 00A6E480  ScenarioRegionManagerImplement::vf74  size=110  [class]
void ScenarioRegionManagerImplement::vf74(unsigned int workNo, int unused)
{
    using namespace ScenarioRegionManagerImplement_p1;
    if (this->vf20(workNo, 1, 2)) {
        // Both loops only re-read the object counts; their bodies were compiled out.
        for (int i = 0; i < vcall0((int)FUN_00c14bb0(), 0x24); i++) {
        }
        for (int i = 0; i < vcall0((int)FUN_00c18350(), 0x6c); i++) {
        }
    }
    return;
}

// 00A6E4F0  ScenarioRegionManagerImplement::vf70  size=43  [class]
void ScenarioRegionManagerImplement::vf70(unsigned int workNo, unsigned int targetWorkNo)
{
    if (this->vf20(workNo, 1, 2)) {
        this->vf6C(targetWorkNo);
    }
    return;
}

// 00A6E520  ScenarioRegionManagerImplement::vf64  size=8  [class]
int ScenarioRegionManagerImplement::vf64(int unused1, int unused2, int unused3)
{
    return 1;
}

// 00A6E530  ScenarioRegionManagerImplement::vf68  size=3  [class]
void ScenarioRegionManagerImplement::vf68(int unused)
{
    return;
}

// 00A6E540  ScenarioRegionManagerImplement::vf84  size=20  [class]
void ScenarioRegionManagerImplement::vf84(int userDataParam0)
{
    this->vf80(10, userDataParam0);
    return;
}

// 00A6E560  ScenarioRegionManagerImplement::vf78  size=87  [class]
int *ScenarioRegionManagerImplement::vf78(uint id, int groupId)
{
    using namespace ScenarioRegionManagerImplement_p1;
    Group *group = groups();
    int i = 0;
    while (group->id != groupId) {
        i = i + 1;
        group = group + 1;
        if (2 < i) {
            return 0;
        }
    }
    for (i = 0; i < group->count; i++) {
        Region *region = &group->regions[i];
        if (region->id == id) {
            return (int *)region;
        }
    }
    return 0;
}

// 00A6E5C0  ScenarioRegionManagerImplement::vf7C  size=36  [class]
int *ScenarioRegionManagerImplement::vf7C(byte *name, int groupId)
{
    using namespace ScenarioRegionManagerImplement_p1;
    Group *group = groups();
    int i = 0;
    while (group->id != groupId) {
        i = i + 1;
        group = group + 1;
        if (2 < i) {
            return 0;
        }
    }
    for (i = 0; i < group->count; i++) {
        Region *region = &group->regions[i];
        if (inlinedStrcmp((unsigned char *)region->atName, name) == 0) {
            return (int *)region;
        }
    }
    return 0;
}

// 00A6F760  FUN_00a6f760  size=149  [callgraph]
void __fastcall FUN_00a6f760(undefined4 *groupAddress)
{
    using namespace ScenarioRegionManagerImplement_p1;
    // Group::clear -- empties a region group and resets every region slot to its defaults.
    Group *group = (Group *)groupAddress;
    group->count = 0;
    group->id = -1;
    Region *region = group->regions;
    for (int n = 0x100; n != 0; n--) {
        region->workNo = 0;
        region->id = 0;
        region->state = 0;
        region->prevState = 0;
        region->parent = 0;
        region->parentRetry = 0;
        region->flags = 0;
        region->value = 0;
        region->atAttr = 0;
        region->useParent = 0;
        region->atMask = 1;
        region->userDataParam[0] = -1;
        region->userDataParam[1] = -1;
        region->userDataParam[2] = -1;
        region->userDataParam[3] = -1;
        for (unsigned int offset = 0x18; offset < 0x20; offset += 4) {
            *(int *)((char *)region + offset) = -1;  // baseRoom[0], baseRoom[1]
        }
        region->userDataType = 0;
        ((unsigned int *)region->atName)[0] = 0;
        ((unsigned int *)region->atName)[1] = 0;
        ((unsigned int *)region->atName)[2] = 0;
        ((unsigned int *)region->atName)[3] = 0;
        region->parentHash = 0;
        ((unsigned int *)region->atParent)[0] = 0;
        ((unsigned int *)region->atParent)[1] = 0;
        ((unsigned int *)region->atParent)[2] = 0;
        ((unsigned int *)region->atParent)[3] = 0;
        region->flags = region->flags | 1;
        region->state = region->state & 0xfffffff8;
        region = region + 1;
    }
    return;
}

// 00A6F800  ScenarioRegionManagerImplement::vf88  size=108  [class]
int *ScenarioRegionManagerImplement::vf88(int groupId, int parent)
{
    using namespace ScenarioRegionManagerImplement_p1;
    Group *group = groups();
    int i = 0;
    while (group->id != groupId) {
        i = i + 1;
        group = group + 1;
        if (2 < i) {
            return 0;
        }
    }
    for (i = 0; i < group->count; i++) {
        Region *region = &group->regions[i];
        if (region != 0 && region->parent != 0 && parent != 0 && region->parent == parent) {
            return (int *)region;
        }
    }
    return 0;
}

// 00A6F870  ScenarioRegionManagerImplement::setGroupResource  size=900  [class]
void ScenarioRegionManagerImplement::setGroupResource(int groupId, int xmlData, int heap)
{
    using namespace ScenarioRegionManagerImplement_p1;
    Group *group = groups();
    int g = 0;
    do {
        if (group->id == -1) {
            unsigned int xml[8];  // local cXmlBinary
            int node;
            unsigned char type;

            xmlConstruct(xml);
            xmlLoad(xml, xmlData, 0);
            int prim = xmlFindChild(xml, xmlRoot(xml), DAT_01661874);  // "PRIM"
            group->id = groupId;
            group->count = xmlChildCount(xml, prim);

            // Total size of all shapes.
            int totalSize = 0;
            for (int i = 0; i < xmlChildCount(xml, prim); i++) {
                int child = xmlChildAt(xml, prim, i);
                type = 0xff;
                xmlReadByte(xml, xmlFindChild(xml, child, DAT_0164fcc8), &type);  // "Type"
                totalSize = totalSize + shapeSize(type);
            }

            unsigned char *buffer = heapAlloc(heap, totalSize, 0x20, 0, 0);
            group->buffer = buffer;
            if (buffer == 0) {
                debugPrint("ScenarioRegionManagerImplement::setGroupResource heap alloc error");
            }
            else {
                unsigned char *cursor = buffer;
                for (int i = 0; i < xmlChildCount(xml, prim); i++) {
                    Region *region = &group->regions[i];
                    node = xmlChildAt(xml, prim, i);
                    type = 0xff;
                    xmlReadByte(xml, xmlFindChild(xml, node, DAT_0164fcc8), &type);  // "Type"
                    regionRead(region, xml, &node);
                    if (region->userDataType == 3 || region->userDataType == 5) {
                        region->flags = region->flags & 0xfffffffe;
                    }
                    if ((int)region->flags < 0) {
                        region->state = region->state & 0xfffffff8;
                        region->flags = region->flags | 1;
                    }
                    region->shape = cursor;
                    FUN_00d95780((undefined4)cursor, type, (undefined4)xml, (undefined4)&node);
                    if (region->useParent != 0) {
                        region->parentHash = hashName(region->atParent);
                    }
                    cursor = cursor + shapeSize(type);
                }

                if (groupId != 2) {
                    for (int i = 0; i < group->count; i++) {
                        Region *region = &group->regions[i];
                        if (region->useParent == 0) {
                            region->flags = region->flags & 0xfffffffe;
                            shapeResetPosition(region->shape);
                            if (region->shape[0] == 6) {
                                shapeRefresh6(region->shape);
                            }
                            else if (region->shape[0] == 7) {
                                shapeRefresh7(region->shape);
                            }
                        }
                        else {
                            int parent = findObjectByHash(region->parentHash);
                            if (parent == 0) {
                                region->flags = region->flags | 1;
                                region->state = region->state & 0xfffffff8;
                                region->parent = 0;
                                shapeResetPosition(region->shape);
                                if (region->shape[0] == 6) {
                                    shapeRefresh6(region->shape);
                                    region->flags = region->flags | 0x20000000;
                                }
                                else {
                                    if (region->shape[0] == 7) {
                                        shapeRefresh7(region->shape);
                                    }
                                    region->flags = region->flags | 0x20000000;
                                }
                            }
                            else {
                                float *parentMatrix = (float *)(transformOf(parent) + 0x10);
                                unsigned char *shape = region->shape;
                                if (shape[0] == 6) {
                                    shapeAttach6(shape, parentMatrix);
                                    region->flags = region->flags & 0xfffffffe;
                                    region->flags = region->flags | 0x20000000;
                                    region->parent = parent;
                                }
                                else if (shape[0] == 7) {
                                    shapeAttach7(shape, parentMatrix);
                                    region->flags = region->flags & 0xfffffffe;
                                    region->flags = region->flags | 0x20000000;
                                    region->parent = parent;
                                }
                                else {
                                    // position = offset + parent translation (matrix row 3)
                                    float *parentPosition = parentMatrix + 0x30 / 4;
                                    float y = parentPosition[1];
                                    float z = parentPosition[2];
                                    float w = parentPosition[3];
                                    shapeVec(shape, 0x10)[0] = shapeVec(shape, 0x30)[0] + parentPosition[0];
                                    shapeVec(shape, 0x10)[1] = shapeVec(shape, 0x30)[1] + y;
                                    shapeVec(shape, 0x10)[2] = shapeVec(shape, 0x30)[2] + z;
                                    shapeVec(shape, 0x10)[3] = w + shapeVec(shape, 0x30)[3];
                                    region->flags = region->flags & 0xfffffffe;
                                    region->flags = region->flags | 0x20000000;
                                    region->parent = parent;
                                }
                            }
                        }
                    }
                }
            }
            // inlined ~cXmlBinary
            xml[0] = 0x0163E684;  // vftable = cXmlBinary::vftable (0x0163E684)
            FUN_00e04180((int)xml);
            return;
        }
        g = g + 1;
        group = group + 1;
    } while (g < 3);
    debugPrint(DAT_016630d8);  // getFreeGroupWork: no free group work
    return;
}

// 00A6FC00  ScenarioRegionManagerImplement::vf14  size=77  [class]
void ScenarioRegionManagerImplement::vf14(int groupId)
{
    using namespace ScenarioRegionManagerImplement_p1;
    // Releases a group: frees its shape block and marks it free.
    Group *group = groups();
    int g = 0;
    do {
        if (group->id == groupId) {
            if (group->buffer != 0) {
                FUN_00dd48d0((int)group->buffer, 0);
                group->buffer = 0;
            }
            group->id = -1;
            return;
        }
        g = g + 1;
        group = group + 1;
    } while (g < 3);
    return;
}

// 00A6FC50  ScenarioRegionManagerImplement::vf18  size=177  [class]
void ScenarioRegionManagerImplement::vf18(int room)
{
    using namespace ScenarioRegionManagerImplement_p1;
    // For groups 0..2: re-enable the non-parented regions whose base room is `room`, and reset the
    // position of every non-parented region.
    int groupNo = 0;
    do {
        int g = 0;
        Group *group = groups();
        do {
            if (group->id == groupNo) {
                for (int i = 0; i < group->count; i++) {
                    Region *region = &group->regions[i];
                    if (region->useParent == 0) {
                        if (region->baseRoom[0] == room || region->baseRoom[1] == room) {
                            region->flags = region->flags & 0xfffffffe;
                        }
                        shapeResetPosition(region->shape);
                        if (region->shape[0] == 6) {
                            shapeRefresh6(region->shape);
                        }
                        else if (region->shape[0] == 7) {
                            shapeRefresh7(region->shape);
                        }
                    }
                }
                break;
            }
            g = g + 1;
            group = group + 1;
        } while (g < 3);
        groupNo = groupNo + 1;
        if (2 < groupNo) {
            return;
        }
    } while (true);
}

// 00A6FD10  ScenarioRegionManagerImplement::vf1C  size=203  [class]
void ScenarioRegionManagerImplement::vf1C(int room)
{
    using namespace ScenarioRegionManagerImplement_p1;
    // For groups 0..2: disable the regions whose first base room is `room`, unless their second base
    // room is set and FUN_00a4c810 reports it.
    int groupNo = 0;
    do {
        int g = 0;
        Group *group = groups();
        do {
            if (group->id == groupNo) {
                for (int i = 0; i < group->count; i++) {
                    Region *region = &group->regions[i];
                    if (region != 0 && region->baseRoom[0] == room &&
                        (region->baseRoom[1] == -1 || roomQuery(region->baseRoom[1]) == 0)) {
                        region->flags = region->flags | 1;
                        region->state = region->state & 0xfffffff8;
                        shapeResetPosition(region->shape);
                        if (region->shape[0] == 6) {
                            shapeRefresh6(region->shape);
                        }
                        else if (region->shape[0] == 7) {
                            shapeRefresh7(region->shape);
                        }
                    }
                }
                break;
            }
            g = g + 1;
            group = group + 1;
        } while (g < 3);
        groupNo = groupNo + 1;
        if (2 < groupNo) {
            return;
        }
    } while (true);
}

// 00A6FDE0  ScenarioRegionManagerImplement::vf30  size=143  [class]
int ScenarioRegionManagerImplement::vf30(const float *position, int groupId)
{
    using namespace ScenarioRegionManagerImplement_p1;
    Group *group = groups();
    int i = 0;
    while (group->id != groupId) {
        i = i + 1;
        group = group + 1;
        if (2 < i) {
            return 0;
        }
    }
    if (vcall0((int)FUN_00c13920(), 0xa0) == 0) {
        return 0;
    }
    for (i = 0; i < group->count; i++) {
        Region *region = &group->regions[i];
        if ((region->flags & 1) == 0 && (region->flags & 0x40000000) != 0 &&
            shapeContains(region->shape, position) != 0) {
            return 1;
        }
    }
    return 0;
}

// 00A6FE70  ScenarioRegionManagerImplement::vf28  size=52  [class]
int ScenarioRegionManagerImplement::vf28(const float *position, unsigned int workNo, int groupId)
{
    using namespace ScenarioRegionManagerImplement_p1;
    Region *region = (Region *)this->vf40(workNo, groupId);
    if (region != 0 && (region->flags & 1) == 0) {
        return shapeContains(region->shape, position);
    }
    return 0;
}

// 00A6FEB0  ScenarioRegionManagerImplement::vf2C  size=129  [class]
int ScenarioRegionManagerImplement::vf2C(const float *position, unsigned int id, int groupId)
{
    using namespace ScenarioRegionManagerImplement_p1;
    Group *group = groups();
    int i = 0;
    do {
        if (group->id == groupId) {
            if (group->count < 1) {
                return 0;
            }
            i = 0;
            while (group->regions[i].id != id || (group->regions[i].flags & 1) != 0 ||
                   shapeContains(group->regions[i].shape, position) == 0) {
                i = i + 1;
                if (group->count <= i) {
                    return 0;
                }
            }
            return 1;
        }
        i = i + 1;
        group = group + 1;
    } while (i < 3);
    return 0;
}

// 00A6FF40  ScenarioRegionManagerImplement::vf4C  size=100  [class]
uint ScenarioRegionManagerImplement::vf4C(uint id, int groupId)
{
    using namespace ScenarioRegionManagerImplement_p1;
    Group *group = groups();
    int i = 0;
    do {
        if (group->id == groupId) {
            for (i = 0; i < group->count; i++) {
                Region *region = &group->regions[i];
                if (region->id == id) {
                    return ~region->flags & 1;
                }
            }
            return 0;
        }
        i = i + 1;
        group = group + 1;
    } while (i < 3);
    return 0;
}

// 00A6FFB0  ScenarioRegionManagerImplement::vf60  size=118  [class]
int ScenarioRegionManagerImplement::vf60(int *visitor, unsigned int id, int groupId)
{
    using namespace ScenarioRegionManagerImplement_p1;
    Group *group = groups();
    int i = 0;
    do {
        if (group->id == groupId) {
            for (i = 0; i < group->count; i++) {
                Region *region = &group->regions[i];
                if (region->id == id) {
                    visit(visitor, &region);
                }
            }
            return visitor[2];  // visitor+0x8
        }
        i = i + 1;
        group = group + 1;
    } while (i < 3);
    return 0;
}

// 00A70030  ScenarioRegionManagerImplement::vf6C  size=269  [class]
void ScenarioRegionManagerImplement::vf6C(unsigned int workNo)
{
    using namespace ScenarioRegionManagerImplement_p1;
    // Objects of FUN_00c14bb0's list inside region `workNo` of group 2: vf38(index) (removal; the
    // index only advances when it fails).
    int i = 0;
    while (i < vcall0((int)FUN_00c14bb0(), 0x24)) {
        int object = vcall2((int)FUN_00c14bb0(), 0x18, i, -1);
        if (object == 0 ||
            this->vf28((const float *)(FUN_00a7c800(object) + 0x130), workNo, 2) == 0 ||
            vcall1((int)FUN_00c14bb0(), 0x38, i) == 0) {
            i = i + 1;
        }
    }
    // Objects of FUN_00c18350's list (except kinds 0xF0D41, 0xF0D42, 0xF0C06) inside the region:
    // vf68(index).
    for (i = 0; i < vcall0((int)FUN_00c18350(), 0x6c); i++) {
        int object = vcall1((int)FUN_00c18350(), 0x70, i);
        if (object != 0) {
            int kind = *(int *)(transformOf(object) + 0x4b4);
            if (kind != 0xf0d41 && kind != 0xf0d42 && kind != 0xf0c06) {
                if (this->vf28((const float *)FUN_00a7c8b0(object), workNo, 2) != 0) {
                    vcall1((int)FUN_00c18350(), 0x68, i);
                }
            }
        }
    }
    return;
}

// 00A70140  ScenarioRegionManagerImplement::vf80  size=122  [class]
byte *ScenarioRegionManagerImplement::vf80(int userDataType, int userDataParam0)
{
    using namespace ScenarioRegionManagerImplement_p1;
    // First enabled region of group 0 that the player is inside, with the given user data.
    int i = 0;
    int g = 0;
    Group *group = groups();
    do {
        if (group->id == 0) {
            Region *region = 0;
            if (0 < group->count) {
                while (region = &group->regions[i],
                       (region->flags & 1) != 0 || (region->state & 1) == 0 ||
                       region->userDataType != userDataType || region->userDataParam[0] != userDataParam0) {
                    i = i + 1;
                    if (group->count <= i) {
                        return 0;
                    }
                }
            }
            return (byte *)region;
        }
        g = g + 1;
        group = group + 1;
    } while (g < 3);
    return 0;
}

// 00A71AF0  FUN_00a71af0  size=121  [callgraph]
void __fastcall FUN_00a71af0(int regionAddress)
{
    using namespace ScenarioRegionManagerImplement_p1;
    // Region::updateParent -- keeps a parented region on its parent object; looks the parent up
    // again every 11 frames while it is missing, and disables the region when the parent goes away.
    Region *region = (Region *)regionAddress;
    if ((region->flags & 0x20000000) != 0) {
        if (region->parent == 0) {
            region->parentRetry = region->parentRetry + 1;
            if (10 < region->parentRetry) {
                region->parentRetry = 0;
                int parent = findObjectByHash(region->parentHash);
                region->parent = parent;
                if (parent != 0) {
                    regionFollow(region, (float *)(transformOf(parent) + 0x10));
                    region->flags = region->flags & 0xfffffffe;
                }
            }
        }
        else {
            regionFollow(region, (float *)(transformOf(region->parent) + 0x10));
            if (FUN_00a7c7e0(region->parent) == 0) {
                region->flags = region->flags | 1;
                region->state = region->state & 0xfffffff8;
                region->parent = 0;
                return;
            }
        }
    }
    return;
}

// 00A71BC0  ScenarioRegionManagerImplement::vf04  size=458  [class]
void ScenarioRegionManagerImplement::vf04()
{
    using namespace ScenarioRegionManagerImplement_p1;
    // Per-frame update: tests every enabled region against the player position and updates its
    // inside / entered / left bits, then fires vf2F8 on objects (and the player) that are inside a
    // flag-0x40000000 region of group 2 or at or below the height threshold.
    int player;
    if (DAT_01be8e58 != 0 && (player = transformOf(DAT_01be8e58)) != 0) {
        float position[4];
        position[0] = *(float *)(player + 0x40);
        position[1] = *(float *)(player + 0x44);
        position[2] = *(float *)(player + 0x48);
        position[3] = *(float *)(player + 0x4c);
        int ground = call_00a12210(player, 1);
        position[2] = *(float *)(ground + 0x48);
        position[0] = *(float *)(ground + 0x40);

        Group *group = groups();
        int groupsLeft = 3;
        do {
            if (group->id != -1) {
                for (int i = 0; i < group->count; i++) {
                    Region *region = &group->regions[i];
                    if ((region->flags & 1) == 0) {
                        unsigned int state;
                        if (shapeContains(region->shape, position) == 0) {
                            state = region->state & 0xfffffff8;
                            region->state = state;
                            if ((region->prevState & 1) != 0) {
                                state = state | 4;  // left
                                region->state = state;
                            }
                        }
                        else {
                            state = region->state | 3;
                            region->state = state;
                            if ((region->prevState & 1) != 0) {
                                state = state & 0xfffffffd;  // still inside: not "entered"
                                region->state = state;
                            }
                        }
                        region->prevState = region->state;
                    }
                    FUN_00a71af0((int)region);
                }
            }
            groupsLeft = groupsLeft + -1;
            group = group + 1;
        } while (groupsLeft != 0);

        int list = FUN_00c15900((int)DAT_01bebd80);
        if (list != 0) {
            int node = *(int *)(list + 0x14);
            if (node != *(int *)(list + 0x18)) {
                do {
                    int object = (int)FUN_00a81330((uint *)node);
                    if (object != 0 && FUN_00a7c7e0(object)) {
                        if (this->vf30((const float *)(transformOf(object) + 0x40), 2) != 0 ||
                            (heightCheckEnabled() != 0 &&
                             *(float *)(transformOf(object) + 0x44) <= heightThreshold())) {
                            vcall0(transformOf(object), 0x2f8);
                        }
                    }
                    node = *(int *)(node + 8);
                } while (node != *(int *)(list + 0x18));
            }
        }
        if (this->vf30((const float *)(player + 0x40), 2) != 0 ||
            (heightCheckEnabled() != 0 && *(float *)(player + 0x44) <= heightThreshold())) {
            vcall0(player, 0x2f8);
        }
    }
    return;
}

// 00A76020  ScenarioRegionManagerImplement::ScenarioRegionManagerImplement  size=102  [class]
ScenarioRegionManagerImplement::ScenarioRegionManagerImplement(int heap)
{
    // vftable = ScenarioRegionManagerImplement::vftable (0x016632F4)
    ownerHeap() = heap;
    Group *group = groups();
    for (int n = 2; -1 < n; n--) {
        FUN_00a73340((int)group);
        group = group + 1;
    }
    heightCheckEnabled() = 0;
    heightThreshold() = 1.17549435e-38f;  // FLT_MIN (0x00800000), read from 0x0164D28C
    group = groups();
    for (int n = 3; n != 0; n--) {
        FUN_00a6f760((undefined4 *)group);
        group = group + 1;
    }
}

// 00A76090  ScenarioRegionManagerImplement::vf34  size=23  [class]
void ScenarioRegionManagerImplement::vf34(float threshold)
{
    heightCheckEnabled() = 1;
    heightThreshold() = threshold;
    return;
}

// 00A760B0  ScenarioRegionManagerImplement::vf38  size=11  [class]
void ScenarioRegionManagerImplement::vf38()
{
    heightCheckEnabled() = 0;
    return;
}

// 00A76100  ScenarioRegionManagerImplement::vf00  size=76  [class]
undefined4 *ScenarioRegionManagerImplement::vf00(byte flags)
{
    // scalar deleting destructor
    // vftable = ScenarioRegionManagerImplement::vftable (0x016632F4)
    // each group: id = -1 if in use
    if (groups()[0].id != -1) {
        groups()[0].id = -1;
    }
    if (groups()[1].id != -1) {
        groups()[1].id = -1;
    }
    if (groups()[2].id != -1) {
        groups()[2].id = -1;
    }
    // vftable = ScenarioRegionManager::vftable (0x01662EF4)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

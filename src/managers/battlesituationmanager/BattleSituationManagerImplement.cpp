// src/managers/battlesituationmanager/BattleSituationManagerImplement.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "BattleSituationManagerImplement.h"

// ---------------------------------------------------------------------------------------------
// Data referenced by this part
// ---------------------------------------------------------------------------------------------
extern unsigned int DAT_01dc52dc;  // init guard (bit 0) of the archive type id below
extern int          DAT_01dc52d8;  // archive type id of BattleSituationResource (function-local static)
extern int          DAT_01884314;  // next archive type id
extern char         DAT_01be91dc[];  // data directory passed to FUN_00a54ae0
extern BattleSituationManagerImplement *DAT_01dc5264;  // the BattleSituationManager instance

// ---------------------------------------------------------------------------------------------
// Helpers.  Callees whose functions.h prototype does not match the machine code are called
// through a cast so that the argument list is the binary's.
// ---------------------------------------------------------------------------------------------
namespace BattleSituationManagerImplement_p1 {

typedef BattleSituationManagerImplement::Resource Resource;

// virtual call through the vftable slot at byte offset `slot`
template <class R, class... A> inline R vcall(const void *obj, unsigned int slot, A... args)
{
    typedef R (__thiscall *Fn)(const void *, A...);
    return (*(Fn *)(*(char *const *)obj + slot))(obj, args...);
}

// __thiscall call of a function (symbol or address) with ECX = self
template <class R, class F, class... A> inline R thiscall(F fn, const void *self, A... args)
{
    typedef R (__thiscall *Fn)(const void *, A...);
    return ((Fn)fn)(self, args...);
}

// __cdecl call of a function
template <class R, class F, class... A> inline R cdeclcall(F fn, A... args)
{
    typedef R (__cdecl *Fn)(A...);
    return ((Fn)fn)(args...);
}

// Deletes the units array of a resource (vf00(1)) and clears the pointer.
inline void releaseUnits(Resource *resource)
{
    if (resource->units != 0) {
        vcall<void>(resource->units, 0x0, 1);  // scalar deleting destructor
        resource->units = 0;
    }
}

}  // namespace BattleSituationManagerImplement_p1

// 00D76A20  FUN_00d76a20  size=112  [callgraph]
// Serializes `resource` (a BattleSituationResource) as the archive node `name`: opens the node
// (archive vf10), reads it with FUN_00d765d0 and closes it (archive vf14).
// The machine code takes three stack arguments; functions.h declares two.
unsigned char FUN_00d76a20(int *archive, const char *name, int resource)
{
    using namespace BattleSituationManagerImplement_p1;
    // function-local static: typeId = DAT_01884314++ on first use
    if ((DAT_01dc52dc & 1) == 0) {
        DAT_01dc52dc = DAT_01dc52dc | 1;
        DAT_01dc52d8 = DAT_01884314;
        DAT_01884314 = DAT_01884314 + 1;
    }
    int typeId = DAT_01dc52d8;
    char opened = vcall<char>(archive, 0x10, name, typeId);
    if (opened == '\0') {
        return 0;
    }
    // FUN_00d765d0 (FILEMAP: lib::AllocatedArray<BattleSituationResource::Unit>::AllocatedArray)
    unsigned char result = thiscall<unsigned char>((void *)0x00D765D0, (void *)resource, archive);
    vcall<void>(archive, 0x14, name, typeId);
    return result;
}

// 00D76A90  BattleSituationManagerImplement::BattleSituationManagerImplement  size=214  [class]
// Loads "situation.bxm" and reads its "situation" node (under "root") into a new resource.
BattleSituationManagerImplement::BattleSituationManagerImplement(void *heap)
{
    using namespace BattleSituationManagerImplement_p1;
    // vftable = BattleSituationManagerImplement::vftable (0x016C0F54)
    this->heap() = heap;
    resource() = 0;
    int size = 0;
    int data = cdeclcall<int>(FUN_00a54ae0, &size, DAT_01be91dc, "situation.bxm");
    if (data != 0) {
        Resource *created = (Resource *)cdeclcall<void *>(FUN_00dd3500, 8, heap);
        if (created == 0) {
            created = 0;
        }
        else {
            created->heap = heap;
            created->units = 0;
        }
        resource() = created;
        if (created != 0) {
            int archive[0x74 / 4];  // lib::InputTextArchive<const char *, 32> on the stack
            thiscall<void>(0x00E916F0u, archive);  // InputTextArchive constructor
            thiscall<void>(FUN_00e91420, archive, data);  // open the bxm data
            char opened = vcall<char>(archive, 0x10, "root", 0);
            FUN_00d76a20(archive, "situation", (int)resource());
            if (opened != '\0') {
                vcall<void>(archive, 0x14, "root", 0);
            }
            thiscall<void>(0x00E91740u, archive);  // archive destructor (FILEMAP: cXml::cXml_5)
        }
    }
}

// 00D76B70  FUN_00d76b70  size=27  [between]
// BattleSituationResource destructor: deletes the units array.  `self` is ECX.
void __fastcall FUN_00d76b70(int self)
{
    using namespace BattleSituationManagerImplement_p1;
    releaseUnits((Resource *)self);
}

// 00D76B90  BattleSituationManagerImplement::vf04  size=1  [class]
void BattleSituationManagerImplement::vf04()
{
}

// 00D76BA0  BattleSituationManagerImplement::vf08  size=1  [class]
void BattleSituationManagerImplement::vf08()
{
}

// 00D76BB0  FUN_00d76bb0  size=47  [between]
// BattleSituationResource scalar deleting destructor.  `self` is ECX (__thiscall).
int FUN_00d76bb0(int self, byte flags)
{
    using namespace BattleSituationManagerImplement_p1;
    releaseUnits((Resource *)self);
    if ((flags & 1) != 0) {
        FUN_00dd4920(self);
    }
    return self;
}

// 00D76BE0  BattleSituationManagerImplement::vf00  size=68  [class]
undefined4 BattleSituationManagerImplement::vf00(float *outValue0, float *outValue1, float *outValue2,
                                                 int *outKind, int unitId, unsigned int situation)
{
    using namespace BattleSituationManagerImplement_p1;
    if (resource() == 0) {
        return 0;
    }
    int mode = thiscall<int>(FUN_009c4bf0, (void *)0x01B5D1E0);  /* ECX: global object 0x01B5D1E0 */
    return thiscall<undefined4>(FUN_00d73290, resource(), outValue0, outValue1, outValue2, outKind,
                                unitId, situation, mode);
}

// 00D76C70  BattleSituationManagerImplement::vf0C  size=84  [class]
// Scalar deleting destructor.
undefined4 *BattleSituationManagerImplement::vf0C(byte flags)
{
    using namespace BattleSituationManagerImplement_p1;
    Resource *res = resource();
    // vftable = BattleSituationManagerImplement::vftable (0x016C0F54)
    if (res != 0) {
        releaseUnits(res);
        FUN_00dd4920((int)res);
        resource() = 0;
    }
    // vftable = BattleSituationManager::vftable (0x016C0C98)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 00D76D10  FUN_00d76d10  size=62  [callgraph]
// Creates the BattleSituationManager instance (0x01DC5264); true on success.
bool FUN_00d76d10(undefined4 heap)
{
    using namespace BattleSituationManagerImplement_p1;
    void *memory = cdeclcall<void *>(FUN_00dd3500, 0xC, heap);
    if (memory != 0) {
        // placement construction: BattleSituationManagerImplement::BattleSituationManagerImplement(heap)
        DAT_01dc5264 = thiscall<BattleSituationManagerImplement *>(0x00D76A90u, memory, heap);
        return DAT_01dc5264 != 0;
    }
    DAT_01dc5264 = 0;
    return false;
}

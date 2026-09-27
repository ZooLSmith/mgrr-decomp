// src/managers/cenemycautionstatemanager/cEnemyCautionStateManager.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cEnemyCautionStateManager.h"

// ---------------------------------------------------------------------------------------------
// Helpers.  The destructors below run on the embedding enemy objects, whose headers this file
// does not include: their sub-objects are addressed by offset ("<owner>+0x...").  Destructors of
// classes whose headers are not included are called by address.
// ---------------------------------------------------------------------------------------------
namespace cEnemyCautionStateManager_p1 {

// __thiscall call of a function (symbol or address) with ECX = self
template <class R, class F, class... A> inline R thiscall(F fn, const void *self, A... args)
{
    typedef R (__thiscall *Fn)(const void *, A...);
    return ((Fn)fn)(self, args...);
}

// address of a sub-object at an absolute byte offset
inline char *at(void *base, int offset)
{
    return (char *)base + offset;
}

// FUN_00905ce0: destructor of the 4-byte handle objects (constructed by FUN_00904d60)
inline void destroyHandle(char *handle)
{
    FUN_00905ce0((int *)handle);
}

// cEspControler::~cEspControler (0x00EAA9B0)
inline void destroyEspControler(char *esp)
{
    thiscall<void>(0x00EAA9B0u, esp);
}

// Inlined cEnemyCautionStateManager destructor.
inline void destroyManager(char *manager)
{
    // vftable = cEnemyCautionStateManager::vftable (0x0163F71C)
    FUN_00a82d10((int)manager);
    char *handle = manager + 0x164;
    int index = 9;
    do {
        handle = handle - 4;  // handles13C()[index]
        destroyHandle(handle);
        index = index - 1;
    } while (-1 < index);
    destroyHandle(manager + 0x48);  // handle48()
}

// Inlined lib array destructor; `array` points at its data pointer (data, capacity, count, owns).
inline void releaseArray(char *array)
{
    int *words = (int *)array;
    if (words[0] != 0) {
        words[2] = 0;
        if (words[3] != 0) {
            FUN_00dd48d0(words[0], 0);
            words[3] = 0;
        }
        words[0] = 0;
        words[1] = 0;
    }
}

// Sub-object teardown shared by the three enemy destructors: `part` is the object at +0x20B0 /
// +0x2180 (ECX of FUN_00485560 / FUN_007b7800 / FUN_006c1cb0), followed at +4 by an object
// queried with FUN_00a81330 and at +0x64 by a RayCastManager work handle.
inline void releaseRayCastPart(char *part)
{
    if (FUN_00a81330((uint *)(part + 0x4)) != 0) {
        FUN_00a805f0(FUN_00a81330((uint *)(part + 0x4)));
    }
    thiscall<void>(0x00905E50u, (void *)0x01B35DF8, part + 0x64);  // RayCastManager::getWork (instance 0x01B35DF8)
    destroyHandle(part + 0x64);
}

}  // namespace cEnemyCautionStateManager_p1

// 004EC010  cEnemyCautionStateManager::vf00  size=74  [class]
// Scalar deleting destructor.
undefined4 *cEnemyCautionStateManager::vf00(byte flags)
{
    using namespace cEnemyCautionStateManager_p1;
    destroyManager((char *)this);
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 004EC410  cEnemyCautionStateManager::cEnemyCautionStateManager  size=420  [class]
cEnemyCautionStateManager::cEnemyCautionStateManager()
{
    // vftable = cEnemyCautionStateManager::vftable (0x0163F71C)
    field14() = 0;
    field18() = 0.0f;
    field1C() = 0.0f;
    values24()[0] = 0.0f;
    field20() = 0;
    values24()[1] = 0.0f;
    values24()[2] = 0.0f;
    values24()[3] = 0.0f;
    values24()[4] = 0.0f;
    values24()[5] = 0.0f;
    FUN_00a7c930((undefined4 *)object40());
    FUN_00904d60((undefined4 *)handle48());
    field4C() = 0.0f;
    field50() = 0.0f;
    // blocks 0..3 fully, block 4 up to values[5]
    for (int block = 0; block < 5; block = block + 1) {
        blocks()[block].flag = 0;
    }
    for (int block = 0; block < 4; block = block + 1) {
        for (int i = 0; i < 8; i = i + 1) {
            blocks()[block].values[i] = 0.0f;
        }
    }
    for (int i = 0; i < 6; i = i + 1) {
        blocks()[4].values[i] = 0.0f;
    }
    field10C() = 0;
    field108() = -1.0f;
    field114() = 0;
    field118() = 1;
    FUN_00a7c930((undefined4 *)object130());
    int index = 9;
    char *handle = handles13C();
    do {
        FUN_00904d60((undefined4 *)handle);
        handle = handle + 4;
        index = index - 1;
    } while (-1 < index);
    FUN_00a7c950((undefined4 *)object40());
    field134() = 0;
    if (FUN_00d466f0(0x018B9140) != 0) {  /* ECX: global object 0x018B9140 */
        values120()[0] = 0.0f;
        values120()[1] = 0.0f;
        values120()[2] = 0.0f;
    }
}

// 004ECE70  cEnemyCautionStateManager::~cEnemyCautionStateManager  size=106  [class]
// Destructor of the object embedding the manager at +0xC10 (`this` is that object).
void cEnemyCautionStateManager::dtor_004ECE70()
{
    using namespace cEnemyCautionStateManager_p1;
    destroyManager(at(this, 0xC10));           /* owner+0xC10: cEnemyCautionStateManager */
    destroyHandle(at(this, 0xA60));            /* owner+0xA60 */
    destroyHandle(at(this, 0xA5C));            /* owner+0xA5C */
    FUN_00dd7270((undefined4)at(this, 0xA00));  /* owner+0xA00: critical section */
    thiscall<void>(0x00AA3690u, this);         // Behavior::~Behavior (jmp)
}

// 00AACF30  cEnemyCautionStateManager::~cEnemyCautionStateManager  size=334  [class]
// Enemy destructor (`this` is the enemy; manager embedded at +0x1B90).
void cEnemyCautionStateManager::dtor_00AACF30()
{
    using namespace cEnemyCautionStateManager_p1;
    destroyHandle(at(this, 0x2354));
    destroyHandle(at(this, 0x234C));
    destroyHandle(at(this, 0x2344));
    destroyHandle(at(this, 0x233C));
    destroyEspControler(at(this, 0x2140));
    FUN_00485560((byte *)at(this, 0x20B0));
    releaseRayCastPart(at(this, 0x20B0));
    destroyEspControler(at(this, 0x1F10));
    destroyEspControler(at(this, 0x1E60));
    destroyEspControler(at(this, 0x1DB0));
    destroyEspControler(at(this, 0x1D00));
    destroyManager(at(this, 0x1B90));
    thiscall<void>(0x00A60400u, at(this, 0x1B08));  // destructor (FILEMAP: cXml::cXml_7)
    releaseArray(at(this, 0x11DC));                 /* owner+0x11DC..0x11E8: array */
    destroyEspControler(at(this, 0x1040));
    thiscall<void>(0x00E2C5D0u, at(this, 0xE50));   // Animation::PostControl::Work::~Work
    destroyHandle(at(this, 0xDC4));
    dtor_004ECE70();  // jmp 004ECE70
}

// 00AB2CD0  cEnemyCautionStateManager::~cEnemyCautionStateManager  size=345  [class]
// Enemy destructor (`this` is the enemy; manager embedded at +0x1C60).
void cEnemyCautionStateManager::dtor_00AB2CD0()
{
    using namespace cEnemyCautionStateManager_p1;
    destroyHandle(at(this, 0x2424));
    destroyHandle(at(this, 0x241C));
    destroyHandle(at(this, 0x2414));
    destroyHandle(at(this, 0x240C));
    destroyEspControler(at(this, 0x2210));
    FUN_007b7800((byte *)at(this, 0x2180));
    releaseRayCastPart(at(this, 0x2180));
    destroyEspControler(at(this, 0x1FE0));
    destroyEspControler(at(this, 0x1F30));
    destroyEspControler(at(this, 0x1E80));
    destroyEspControler(at(this, 0x1DD0));
    destroyManager(at(this, 0x1C60));
    thiscall<void>(0x00A60400u, at(this, 0x1BD8));  // destructor (FILEMAP: cXml::cXml_7)
    releaseArray(at(this, 0x12AC));                 /* owner+0x12AC..0x12B8: array */
    destroyEspControler(at(this, 0x1110));
    thiscall<void>(0x00E2C5D0u, at(this, 0xF20));   // Animation::PostControl::Work::~Work
    destroyHandle(at(this, 0xE94));
    destroyEspControler(at(this, 0xDD0));
    dtor_004ECE70();  // jmp 004ECE70
}

// 00AB5410  cEnemyCautionStateManager::~cEnemyCautionStateManager  size=345  [class]
// Enemy destructor (`this` is the enemy; manager embedded at +0x1C60).
void cEnemyCautionStateManager::dtor_00AB5410()
{
    using namespace cEnemyCautionStateManager_p1;
    destroyHandle(at(this, 0x2434));
    destroyHandle(at(this, 0x242C));
    destroyHandle(at(this, 0x2424));
    destroyHandle(at(this, 0x241C));
    destroyEspControler(at(this, 0x2210));
    FUN_006c1cb0((byte *)at(this, 0x2180));
    releaseRayCastPart(at(this, 0x2180));
    destroyEspControler(at(this, 0x1FE0));
    destroyEspControler(at(this, 0x1F30));
    destroyEspControler(at(this, 0x1E80));
    destroyEspControler(at(this, 0x1DD0));
    destroyManager(at(this, 0x1C60));
    thiscall<void>(0x00A60400u, at(this, 0x1BD8));  // destructor (FILEMAP: cXml::cXml_7)
    releaseArray(at(this, 0x12AC));                 /* owner+0x12AC..0x12B8: array */
    destroyEspControler(at(this, 0x1110));
    thiscall<void>(0x00E2C5D0u, at(this, 0xF20));   // Animation::PostControl::Work::~Work
    destroyHandle(at(this, 0xE94));
    destroyEspControler(at(this, 0xDD0));
    dtor_004ECE70();  // jmp 004ECE70
}

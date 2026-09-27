// src/managers/voicesubtitlemanager/VoiceSubtitleManagerImplement.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "VoiceSubtitleManagerImplement.h"

// ---------------------------------------------------------------------------------------------
// Data referenced by this part
// ---------------------------------------------------------------------------------------------
extern const char    DAT_0164a448[];   // "root"
extern char          DAT_01be91ac[];   // data directory of subtitleForVoice.bxm (passed to FUN_00a54ae0)
extern char          DAT_01be91dc[];   // data directory of the DLC subtitle files
extern unsigned char DAT_01b7bcf0[];   // the default heap (Hw heap object)
extern unsigned char DAT_01b7b364[];   // cObjReadManager instance (ECX of FUN_009fe6b0)
extern unsigned char DAT_01b36100[];   // ECX of FUN_00936770
extern unsigned char DAT_01dc3d08[];   // subtitle display (ECX of FUN_00ce3070)
extern unsigned char DAT_018b9140[];   // ECX of FUN_00d46780 / FUN_00d467a0 (DLC2 / DLC3 available ?)
extern unsigned int  DAT_01bea060;     // global flags; 0x40000 disables voice subtitles
extern unsigned int  DAT_01bea064;     // global flags; 0x4000 disables, 0x8000 picks the alternate subtitle
extern int           DAT_01be9f9c;
extern int           DAT_01bea004;
extern int           DAT_01bea000;
extern int           DAT_01be9ffc;
extern int          *DAT_01be9ff4;
extern VoiceSubtitleManagerImplement *DAT_01bea1a8;  // the VoiceSubtitleManager instance

// ---------------------------------------------------------------------------------------------
// Helpers.  Callees whose functions.h prototype does not match the machine code are called
// through a cast so that the argument list is the binary's.
// ---------------------------------------------------------------------------------------------
namespace VoiceSubtitleManagerImplement_p1 {

typedef VoiceSubtitleManagerImplement::UnitArray UnitArray;
typedef VoiceSubtitleManagerImplement::ActionResource ActionResource;
typedef VoiceSubtitleManagerImplement::SnakeResource SnakeResource;

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

// __cdecl call of a function (symbol or address)
template <class R, class F, class... A> inline R cdeclcall(F fn, A... args)
{
    typedef R (__cdecl *Fn)(A...);
    return ((Fn)fn)(args...);
}

// __fastcall call of a function with ECX = self
template <class R, class F> inline R fastcall(F fn, const void *self)
{
    typedef R (__fastcall *Fn)(const void *);
    return ((Fn)fn)(self);
}

// Callees known only by address
void *const INPUT_TEXT_ARCHIVE_CTOR = (void *)0x00E916F0;  // lib::InputTextArchive<char const *, 32> constructor (_4)
void *const INPUT_TEXT_ARCHIVE_DTOR = (void *)0x00E91740;  // archive destructor (FILEMAP: cXml::cXml_5)
void *const SNAKE_RESOURCE_PLAY     = (void *)0x00C49CA0;  // voiceSubtitleResourceForSnake::play (ECX, 1 stack arg)
void *const IMPLEMENT_CTOR          = (void *)0x00C67110;  // VoiceSubtitleManagerImplement::VoiceSubtitleManagerImplement

// Deletes a lib::AllocatedArray through its scalar deleting destructor (vf00(1)) and clears the pointer.
inline void deleteArray(UnitArray *&array)
{
    if (array != 0) {
        vcall<void>(array, 0x0, 1);
        array = 0;
    }
}

// Loads `fileName` from `directory` (FUN_00a54ae0, `size` is its first argument) and reads its
// "voiceSubtitle" node (under "root") into a new VoiceSubtitleResourceForAction stored in `slot`.
// Returns false only when the resource could not be allocated (the constructor then returns).
inline bool loadActionResource(void *heap, int &size, char *directory, const char *fileName,
                               ActionResource *&slot)
{
    int data = (int)FUN_00a54ae0((undefined4 *)&size, (undefined4)directory, (undefined4)fileName);
    if (data == 0) {
        return true;
    }
    ActionResource *created = (ActionResource *)cdeclcall<void *>(FUN_00dd3500, 8, heap);
    if (created == 0) {
        created = 0;
    }
    else {
        created->heap = heap;
        created->units = 0;
    }
    slot = created;
    if (created == 0) {
        return false;
    }
    int archive[0x74 / 4];  // lib::InputTextArchive<const char *, 32> on the stack
    thiscall<void>(INPUT_TEXT_ARCHIVE_CTOR, archive);
    thiscall<undefined4>(FUN_00e91420, archive, data);  // open the bxm data
    char opened = vcall<char>(archive, 0x10, DAT_0164a448, 0);
    cdeclcall<unsigned char>(FUN_00c67030, archive, "voiceSubtitle", slot);  // read the resource
    if (opened != '\0') {
        vcall<void>(archive, 0x14, DAT_0164a448, 0);
    }
    thiscall<void>(INPUT_TEXT_ARCHIVE_DTOR, archive);
    return true;
}

}  // namespace VoiceSubtitleManagerImplement_p1

// 00C20860  FUN_00c20860  size=76  [callgraph]
// VoiceSubtitleResourceForSnake constructor (__thiscall, ECX = self; returns ECX).
void FUN_00c20860(undefined4 *self, undefined4 heap)
{
    self[0] = heap;
    self[1] = 0;
    self[0x14] = 0;
    self[0x15] = 0;
    self[2] = 0;
    self[3] = 0;
    self[4] = 0;
    self[5] = 0;
    self[6] = 0;
    self[7] = 0;
    self[8] = 0;
    self[9] = 0;
    self[10] = 0;
    self[0xb] = 0;
    self[0xc] = 0;
    self[0xd] = 0;
    self[0xe] = 0;
    self[0xf] = 0;
    self[0x10] = 0;
    self[0x11] = 0;
    self[0x12] = 0;
    self[0x13] = 0;
}

// 00C208B0  FUN_00c208b0  size=116  [callgraph]
// VoiceSubtitleResourceForSnake destructor: deletes every array it owns.
void __fastcall FUN_00c208b0(int self)
{
    using namespace VoiceSubtitleManagerImplement_p1;
    SnakeResource *resource = (SnakeResource *)self;
    deleteArray(resource->list54);
    deleteArray(resource->list50);
    UnitArray **list = resource->lists;
    int left = 0x12;
    do {
        deleteArray(*list);
        list = list + 1;
        left = left + -1;
    } while (left != 0);
    deleteArray(resource->units);
}

// 00C209A0  FUN_00c209a0  size=30  [callgraph]
// VoiceSubtitleResourceForSnake scalar deleting destructor (__thiscall, ECX = self).
undefined4 FUN_00c209a0(undefined4 self, byte flags)
{
    FUN_00c208b0((int)self);
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)self);
    }
    return self;
}

// 00C209C0  VoiceSubtitleManagerImplement::vf10  size=37  [class]
// Frees the snake subtitle table.
void VoiceSubtitleManagerImplement::vf10()
{
    SnakeResource *snake = snakeResource();
    if (snake != 0) {
        FUN_00c208b0((int)snake);
        FUN_00dd4920((int)snake);
        snakeResource() = 0;
    }
}

// 00C49ED0  VoiceSubtitleManagerImplement::vf18  size=13  [class]
void VoiceSubtitleManagerImplement::vf18()
{
    if (snakeResource() != 0) {
        FUN_00c49c40((int)snakeResource());  // tail jump with ECX = the snake table
        return;
    }
}

// 00C54FE0  VoiceSubtitleManagerImplement::vf14  size=58  [class]
// (ret 4: one stack argument, passed on unchanged by the tail jump to play.)
void VoiceSubtitleManagerImplement::vf14(uint index)
{
    using namespace VoiceSubtitleManagerImplement_p1;
    if (snakeResource() != 0 && DAT_01bea004 == 0 && DAT_01bea000 == DAT_01be9ffc &&
        *DAT_01be9ff4 == 0x13007) {
        thiscall<void>(SNAKE_RESOURCE_PLAY, snakeResource(), index);
        return;
    }
}

// 00C67110  VoiceSubtitleManagerImplement::VoiceSubtitleManagerImplement  size=555  [class]
// Loads subtitleForVoice.bxm and, when present, subtitleForVoiceDLC2.bxm / subtitleForVoiceDLC3.bxm.
VoiceSubtitleManagerImplement::VoiceSubtitleManagerImplement(void *heap)
{
    using namespace VoiceSubtitleManagerImplement_p1;
    // vftable = VoiceSubtitleManagerImplement::vftable (0x016A74D0)
    this->heap() = heap;
    actionResource() = 0;
    snakeResource() = 0;
    dlc2Resource() = 0;
    dlc3Resource() = 0;
    int size = 0;  // shared by the three loads, set to 0 only once
    if (!loadActionResource(heap, size, DAT_01be91ac, "subtitleForVoice.bxm", actionResource())) {
        return;
    }
    if (!loadActionResource(heap, size, DAT_01be91dc, "subtitleForVoiceDLC2.bxm", dlc2Resource())) {
        return;
    }
    loadActionResource(heap, size, DAT_01be91dc, "subtitleForVoiceDLC3.bxm", dlc3Resource());
}

// 00C67340  FUN_00c67340  size=27  [between]
// VoiceSubtitleResourceForAction destructor: deletes the unit array.  `self` is ECX.
void __fastcall FUN_00c67340(int self)
{
    using namespace VoiceSubtitleManagerImplement_p1;
    deleteArray(((ActionResource *)self)->units);
}

// 00C67360  VoiceSubtitleManagerImplement::vf04  size=1  [class]
void VoiceSubtitleManagerImplement::vf04()
{
}

// 00C67370  VoiceSubtitleManagerImplement::vf08  size=1  [class]
void VoiceSubtitleManagerImplement::vf08()
{
}

// 00C67380  FUN_00c67380  size=47  [between]
// VoiceSubtitleResourceForAction scalar deleting destructor (__thiscall, ECX = self).
int FUN_00c67380(int self, byte flags)
{
    using namespace VoiceSubtitleManagerImplement_p1;
    deleteArray(((ActionResource *)self)->units);
    if ((flags & 1) != 0) {
        FUN_00dd4920(self);
    }
    return self;
}

// 00C673C0  FUN_00c673c0  size=147  [between]
// VoiceSubtitleResourceForAction: shows the subtitle of `voiceId` (__thiscall, ECX = self).
// Returns 1 when the voice has an entry.
undefined4 FUN_00c673c0(int self, int voiceId)
{
    using namespace VoiceSubtitleManagerImplement_p1;
    ActionResource *resource = (ActionResource *)self;
    if (resource->units != 0 && (DAT_01bea060 & 0x40000) == 0) {
        if (fastcall<char>(FUN_00936770, DAT_01b36100) == '\0') {
            if ((DAT_01bea064 & 0x4000) == 0) {
                UnitArray *units = resource->units;
                char *unit = units->data;
                if (unit != units->count * 0x2c + unit) {
                    char *end = units->count * 0x2c + unit;
                    do {
                        if (voiceId == *(int *)(unit + 0x20)) {
                            undefined4 subtitleId;
                            if ((DAT_01bea064 & 0x8000) == 0) {
                                subtitleId = *(undefined4 *)(unit + 0x28);
                            }
                            else {
                                subtitleId = *(undefined4 *)(unit + 0x24);
                            }
                            thiscall<void>(FUN_00ce3070, DAT_01dc3d08, unit, 0, subtitleId, 0);
                            return 1;
                        }
                        unit = unit + 0x2c;
                    } while (unit != end);
                }
            }
            return 0;
        }
    }
    return 0;
}

// 00C67460  FUN_00c67460  size=143  [between]
// VoiceSubtitleResourceForSnake: shows the subtitle of `voiceId` (__thiscall, ECX = self).
undefined4 FUN_00c67460(int self, int voiceId)
{
    using namespace VoiceSubtitleManagerImplement_p1;
    SnakeResource *resource = (SnakeResource *)self;
    if (resource->units != 0 && (DAT_01bea060 & 0x40000) == 0) {
        if (fastcall<char>(FUN_00936770, DAT_01b36100) == '\0' && (DAT_01bea064 & 0x4000) == 0 &&
            (DAT_01be9f9c == 0 || DAT_01be9f9c == 1)) {
            UnitArray *units = resource->units;
            char *unit = units->data;
            if (unit != units->count * 0x30 + unit) {
                char *end = units->count * 0x30 + unit;
                do {
                    if (voiceId == *(int *)(unit + 0x20)) {
                        thiscall<void>(FUN_00ce3070, DAT_01dc3d08, unit, 0, *(undefined4 *)(unit + 0x24), 0);
                        return 1;
                    }
                    unit = unit + 0x30;
                } while (unit != end);
            }
        }
    }
    return 0;
}

// 00C674F0  VoiceSubtitleManagerImplement::vf00  size=127  [class]
// Shows the subtitle of `voiceId`: snake table first, then the DLC tables when that DLC is
// available, then the main table.
undefined4 VoiceSubtitleManagerImplement::vf00(int voiceId)
{
    using namespace VoiceSubtitleManagerImplement_p1;
    if (actionResource() == 0) {
        return 0;
    }
    if (snakeResource() != 0 && FUN_00c67460((int)snakeResource(), voiceId) != 0) {
        return 1;
    }
    if (dlc2Resource() != 0 && fastcall<bool>(FUN_00d46780, DAT_018b9140) &&
        FUN_00c673c0((int)dlc2Resource(), voiceId) != 0) {
        return 1;
    }
    if (dlc3Resource() != 0 && fastcall<bool>(FUN_00d467a0, DAT_018b9140) &&
        FUN_00c673c0((int)dlc3Resource(), voiceId) != 0) {
        return 1;
    }
    return FUN_00c673c0((int)actionResource(), voiceId);
}

// 00C67610  VoiceSubtitleManagerImplement::vf1C  size=30  [class]
// Scalar deleting destructor.
undefined4 *VoiceSubtitleManagerImplement::vf1C(byte flags)
{
    implementDestructor();
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 00C67630  VoiceSubtitleManagerImplement::vf0C  size=266  [class]
// Reloads the snake subtitle table from the subtitleForVoice.bxm of object `objId`.
void VoiceSubtitleManagerImplement::vf0C(uint objId)
{
    using namespace VoiceSubtitleManagerImplement_p1;
    int size;
    char directory[8];      // path buffer filled by FUN_009fe6b0
    int archive[0x74 / 4];  // lib::InputTextArchive<const char *, 32> on the stack

    FUN_00de3530((undefined4)directory);  // trivial constructor of the path buffer (returns ECX)
    thiscall<undefined4>(FUN_009fe6b0, DAT_01b7b364, directory, objId);
    SnakeResource *snake = snakeResource();
    if (snake != 0) {
        FUN_00c208b0((int)snake);
        FUN_00dd4920((int)snake);
        snakeResource() = 0;
    }
    size = 0;
    int data = (int)FUN_00a54ae0((undefined4 *)&size, (undefined4)directory, (undefined4)"subtitleForVoice.bxm");
    if (data != 0) {
        void *memory = cdeclcall<void *>(FUN_00dd3500, 0x58, DAT_01b7bcf0);
        SnakeResource *created;
        if (memory == 0) {
            created = 0;
        }
        else {
            FUN_00c20860((undefined4 *)memory, (undefined4)DAT_01b7bcf0);
            created = (SnakeResource *)memory;  // the constructor returns ECX
        }
        snakeResource() = created;
        if (actionResource() != 0) {  // sic: tests +0x08, not the table just created
            thiscall<void>(INPUT_TEXT_ARCHIVE_CTOR, archive);
            thiscall<undefined4>(FUN_00e91420, archive, data);  // open the bxm data
            char opened = vcall<char>(archive, 0x10, DAT_0164a448, 0);
            cdeclcall<unsigned char>(FUN_00c670a0, archive, "voiceSubtitle", snakeResource());
            if (opened != '\0') {
                vcall<void>(archive, 0x14, DAT_0164a448, 0);
            }
            thiscall<void>(INPUT_TEXT_ARCHIVE_DTOR, archive);
        }
    }
}

// 00C67780  FUN_00c67780  size=62  [callgraph]
// Creates the VoiceSubtitleManager instance (0x01BEA1A8); true on success.
bool FUN_00c67780(undefined4 heap)
{
    using namespace VoiceSubtitleManagerImplement_p1;
    void *memory = cdeclcall<void *>(FUN_00dd3500, 0x18, heap);
    if (memory != 0) {
        // placement construction: VoiceSubtitleManagerImplement::VoiceSubtitleManagerImplement(heap)
        DAT_01bea1a8 = thiscall<VoiceSubtitleManagerImplement *>(IMPLEMENT_CTOR, memory, heap);
        return DAT_01bea1a8 != 0;
    }
    DAT_01bea1a8 = 0;
    return false;
}

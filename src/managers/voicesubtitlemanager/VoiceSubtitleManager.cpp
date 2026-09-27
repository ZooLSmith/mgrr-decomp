// src/managers/voicesubtitlemanager/VoiceSubtitleManager.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "VoiceSubtitleManager.h"

namespace VoiceSubtitleManager_p1 {

// Same layout as VoiceSubtitleManagerImplement::ActionResource (VoiceSubtitleManagerImplement.h is
// not included by this file): heap, then the lib::AllocatedArray of units.
struct ActionResource {
    void *heap;   // +0x0
    void *units;  // +0x4
};

// field at an absolute byte offset
template <class T> inline T &fld(void *base, int offset)
{
    return *(T *)((char *)base + offset);
}

// virtual call through the vftable slot at byte offset `slot`
template <class R, class... A> inline R vcall(const void *obj, unsigned int slot, A... args)
{
    typedef R (__thiscall *Fn)(const void *, A...);
    return (*(Fn *)(*(char *const *)obj + slot))(obj, args...);
}

// Deletes an action resource: its unit array (vf00(1)) first, then the resource itself.
inline void deleteActionResource(ActionResource *resource)
{
    if (resource->units != 0) {
        vcall<void>(resource->units, 0x0, 1);  // scalar deleting destructor
        resource->units = 0;
    }
    FUN_00dd4920((int)resource);
}

}  // namespace VoiceSubtitleManager_p1

// 00C13960  VoiceSubtitleManager::vf1C  size=31  [class]
// Scalar deleting destructor.
undefined4 *VoiceSubtitleManager::vf1C(byte flags)
{
    // vftable = VoiceSubtitleManager::vftable (0x016A32DC)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 00C67570  VoiceSubtitleManager::VoiceSubtitleManager  size=160  [class]
// Destructor body of VoiceSubtitleManagerImplement.
void VoiceSubtitleManager::implementDestructor()
{
    using namespace VoiceSubtitleManager_p1;
    // fields of VoiceSubtitleManagerImplement (see its header)
    void           *&snakeResource  = fld<void *>(this, 0xC);            // Implement+0x0C
    ActionResource *&dlc2Resource   = fld<ActionResource *>(this, 0x10);  // Implement+0x10
    ActionResource *&dlc3Resource   = fld<ActionResource *>(this, 0x14);  // Implement+0x14
    ActionResource *&actionResource = fld<ActionResource *>(this, 0x8);   // Implement+0x08

    void *snake = snakeResource;
    // vftable = VoiceSubtitleManagerImplement::vftable (0x016A74D0)
    if (snake != 0) {
        FUN_00c208b0((int)snake);  // VoiceSubtitleResourceForSnake destructor
        FUN_00dd4920((int)snake);
        snakeResource = 0;
    }
    ActionResource *resource = dlc2Resource;
    if (resource != 0) {
        deleteActionResource(resource);
        dlc2Resource = 0;
    }
    resource = dlc3Resource;
    if (resource != 0) {
        deleteActionResource(resource);
        dlc3Resource = 0;
    }
    resource = actionResource;
    if (resource != 0) {
        deleteActionResource(resource);
        actionResource = 0;
    }
    // vftable = VoiceSubtitleManager::vftable (0x016A32DC)
}

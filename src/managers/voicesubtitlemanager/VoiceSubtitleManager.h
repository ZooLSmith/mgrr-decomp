// REFINED
// VoiceSubtitleManager -- abstract interface of the voice subtitle tables ("subtitleForVoice*.bxm");
// implemented by VoiceSubtitleManagerImplement.
#pragma once
#include "../../../include/ghidra_types.h"
#include "../../../include/auto/fwd.h"

struct VoiceSubtitleManager {
    // virtual functions, in vftable order (slot = byte offset / 4)
    // Shows the subtitle of voice `voiceId`; non-zero when an entry was found.
    virtual undefined4 vf00(int voiceId) = 0;  // 00FDB68B slot 0x0
    virtual void vf04() = 0;  // 00FDB68B slot 0x4
    virtual void vf08() = 0;  // 00FDB68B slot 0x8
    // (Re)loads the snake subtitle table of object `objId` (one stack argument, ret 4).
    virtual void vf0C(uint objId) = 0;  // 00FDB68B slot 0xC
    virtual void vf10() = 0;  // 00FDB68B slot 0x10
    // one stack argument (ret 4); see VoiceSubtitleManagerImplement::vf14
    virtual void vf14(uint index) = 0;  // 00FDB68B slot 0x14
    virtual void vf18() = 0;  // 00FDB68B slot 0x18
    virtual undefined4 * vf1C(byte flags);  // 00C13960 slot 0x1C  scalar deleting destructor
    // non-virtual members
    // 00C67570 (FILEMAP: VoiceSubtitleManager::VoiceSubtitleManager): the body of
    // ~VoiceSubtitleManagerImplement (VoiceSubtitleManagerImplement::vf1C without the delete).
    void implementDestructor();
};

// REFINED
// VoiceSubtitleManagerImplement -- loads "subtitleForVoice.bxm" (+ DLC2 / DLC3 variants) into
// VoiceSubtitleResourceForAction tables and one VoiceSubtitleResourceForSnake table, and shows
// the subtitle of a voice id through the subtitle display at 0x01DC3D08 (FUN_00ce3070).
// The single instance (0x18 bytes) is created by FUN_00c67780 and stored at 0x01BEA1A8.
#pragma once
#include "../../../include/ghidra_types.h"
#include "../../../include/auto/fwd.h"
#include "VoiceSubtitleManager.h"

struct VoiceSubtitleManagerImplement : public VoiceSubtitleManager {
    // lib::AllocatedArray<T> as seen from here: vftable (slot 0x0 = scalar deleting dtor), data, count
    struct UnitArray {
        void *vftable;          // +0x0
        char *data;             // +0x4
        int   count;            // +0x8
    };
    // VoiceSubtitleResourceForAction (8 bytes): units are 0x2C bytes, +0x20 voice id,
    // +0x24 / +0x28 the two subtitle ids (chosen by flag 0x8000 of 0x01BEA064)
    struct ActionResource {
        void      *heap;        // +0x0
        UnitArray *units;       // +0x4
    };
    // VoiceSubtitleResourceForSnake (0x58 bytes): units are 0x30 bytes, +0x20 voice id, +0x24 subtitle id
    struct SnakeResource {
        void      *heap;        // +0x00
        UnitArray *units;       // +0x04
        UnitArray *lists[0x12]; // +0x08 .. +0x4C
        UnitArray *list50;      // +0x50
        UnitArray *list54;      // +0x54
    };

    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined4 vf00(int voiceId);  // 00C674F0 slot 0x0  overrides VoiceSubtitleManager
    virtual void vf04();  // 00C67360 slot 0x4  overrides VoiceSubtitleManager (empty)
    virtual void vf08();  // 00C67370 slot 0x8  overrides VoiceSubtitleManager (empty)
    virtual void vf0C(uint objId);  // 00C67630 slot 0xC  overrides VoiceSubtitleManager
    virtual void vf10();  // 00C209C0 slot 0x10  overrides VoiceSubtitleManager (frees the snake table)
    virtual void vf14(uint index);  // 00C54FE0 slot 0x14  overrides VoiceSubtitleManager
    virtual void vf18();  // 00C49ED0 slot 0x18  overrides VoiceSubtitleManager
    virtual undefined4 * vf1C(byte flags);  // 00C67610 slot 0x1C  overrides VoiceSubtitleManager (scalar deleting dtor)
    // non-virtual members
    VoiceSubtitleManagerImplement(void *heap);  // 00C67110

    // fields (absolute offsets from object start)
    void           *&heap()           { return *(void **)((char *)this + 0x4); }             // +0x04
    ActionResource *&actionResource() { return *(ActionResource **)((char *)this + 0x8); }   // +0x08
    SnakeResource  *&snakeResource()  { return *(SnakeResource **)((char *)this + 0xC); }    // +0x0C
    ActionResource *&dlc2Resource()   { return *(ActionResource **)((char *)this + 0x10); }  // +0x10
    ActionResource *&dlc3Resource()   { return *(ActionResource **)((char *)this + 0x14); }  // +0x14
};

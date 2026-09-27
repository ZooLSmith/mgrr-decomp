// REFINED
// UserManager -- no RTTI; reconstructed from its single named method. SetSigninPad takes no
// object (no ECX use visible in the decompilation) and works on the global save-data blocks.
#pragma once
#include "../../../include/ghidra_types.h"
#include "../../../include/auto/fwd.h"

struct UserManager {
    // non-virtual members
    // 009C8720: picks the pad that signs in (first pad whose button state has the confirm bit),
    // resets the working save data for it and returns 1; 0 when no pad pressed / not ready.
    static undefined4 SetSigninPad();
};

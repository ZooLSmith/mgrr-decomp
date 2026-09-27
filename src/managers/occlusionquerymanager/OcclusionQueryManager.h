// REFINED
// OcclusionQueryManager -- (Hw::OcclusionQueryManager) static occlusion-query allocator. The query
// works (_QUERY_WORK, 0x1C bytes) come from a lock-free free list at 0x018DA4A0 whose pool base is
// DAT_018da4b0 and size DAT_018da4b4.
#pragma once
#include "../../../include/ghidra_types.h"
#include "../../../include/auto/fwd.h"

struct OcclusionQueryManager {
    static uint AllocQuery();  // 00F9F540  index of the new query work, or 0xFFFFFFFF
};

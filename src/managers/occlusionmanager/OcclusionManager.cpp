// src/managers/occlusionmanager/OcclusionManager.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "OcclusionManager.h"

// Debug message formats passed to the (empty) debug print FUN_00dd5650.
extern char DAT_016a68b4[];  // "OcclusionManager::loadVCD: r%03x.vcd has the wrong version"
extern char DAT_016a687c[];  // "OcclusionManager::loadVCD: r%03x.vcd has the wrong magic"
extern char DAT_016a68ec[];  // "vcd" (file extension looked up in the room archive)
extern int *PTR_DAT_018a9b88;  // heap used for the volume array

namespace OcclusionManager_p1 {

// FUN_00dd5650 is a variadic debug print (empty in the release build).
typedef void (*DebugPrintFn)(const char *format, ...);

// Global room-archive manager (ECX of FUN_00a4c830).
const int kRoomArchives = 0x01BE8F30;
// 00C1E010 (not a named function): constructor of one 0x18-byte volume entry.
code *const kVolumeConstructor = (code *)0x00C1E010;

// FUN_00dd3580(size, heap): heap allocation (the generated prototype returns void).
inline unsigned int *allocate(unsigned int size, int *heap)
{
    return ((unsigned int *(*)(unsigned int, int *))FUN_00dd3580)(size, heap);
}

}  // namespace OcclusionManager_p1

// 00C476E0  OcclusionManager::loadVCD  size=322  [class]
// Loads the "vcd" occlusion data of room `roomNo` ("VCD\0", version 4, count, chunks).
undefined4 OcclusionManager::loadVCD(undefined4 roomNo)
{
    using namespace OcclusionManager_p1;

    if (volumes() != 0) {
        FUN_00dd4940((int)(volumes() - 4));  // delete[] (count stored before the array)
        volumes() = 0;
        volumeCount() = 0;
    }
    int archive = FUN_00a4c830(kRoomArchives, roomNo);
    if (archive == 0 || FUN_00de3560((undefined4 *)archive) == 0) {
        return 0;
    }
    char *data = (char *)FUN_00de44b0((int *)archive, (undefined4)DAT_016a68ec, 0);
    if (data == 0) {
        return 0;
    }
    if (data[0] == 'V' && data[1] == 'C' && data[2] == 'D' && data[3] == '\0') {
        if (*(int *)(data + 4) == 4) {
            unsigned int count = *(unsigned int *)(data + 8);
            volumeCount() = count;
            if (0 < (int)count) {
                // new[] size with overflow saturation: count * 0x18 + 4
                unsigned long long product = (unsigned long long)count * 0x18;
                unsigned int bytes = ((unsigned int)(product >> 32) != 0) ? 0xFFFFFFFF : (unsigned int)product;
                unsigned int size = (0xFFFFFFFB < bytes) ? 0xFFFFFFFF : bytes + 4;
                unsigned int *block = allocate(size, PTR_DAT_018a9b88);
                char *array;
                if (block == 0) {
                    array = 0;
                } else {
                    array = (char *)(block + 1);
                    *block = count;
                    FUN_00401040((undefined4)array, 0x18, count, kVolumeConstructor);
                }
                int *chunk = (int *)(data + 0xC);
                volumes() = array;
                for (int i = 0; i < volumeCount(); i++) {
                    FUN_00c1e0b0((int *)(volumes() + i * 0x18), (int)chunk, 0);  // ECX = entry i
                    chunk = (int *)((char *)chunk + *chunk);
                }
            }
            return 1;
        }
        ((DebugPrintFn)FUN_00dd5650)(DAT_016a68b4, roomNo);
        return 0;
    }
    ((DebugPrintFn)FUN_00dd5650)(DAT_016a687c, roomNo);
    return 0;
}

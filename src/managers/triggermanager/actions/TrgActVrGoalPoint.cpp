// src/managers/triggermanager/actions/TrgActVrGoalPoint.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern int DAT_018b9174;  // current phase id
extern char DAT_016b1684[];  // debug message: action has no record
extern char DAT_016b164c[];  // goal object name
extern char DAT_016b1654[];  // debug message: goal point not found

// Trigger::Act::VR_GOAL_POINT is the vf18 ("execute") body of the matching Trigger::cAct* action:
// ECX = the action object; action[1] = its record (record[1] = action type, parameters from +0x08).
namespace Trigger { namespace Act {
int __fastcall VR_GOAL_POINT(int *action);
} }

namespace TrgActVrGoalPoint_p1 {

typedef void (*DebugPrintFn)(const void *format, ...);
const DebugPrintFn debugPrint = (DebugPrintFn)FUN_00dd5650;  // debug printf (empty in release)

// object-handle list filled by the lookup functions (inline storage for 16 handles)
struct HandleList {
    unsigned int unknown00;
    int *data;          // points at the inline storage unless grown
    int capacity;
    int count;
    int heapAllocated;  // nonzero: data must be freed with FUN_00dd48d0
};

// FUN_00c77fc0: collect the objects whose name matches.
inline int findObjectsByName(char *name, HandleList *list)
{
    return ((int (*)(char *, HandleList *))FUN_00c77fc0)(name, list);
}

// FUN_00a7c8a0: handle -> object (its ECX argument was not recovered by the decompiler).
inline int *handleToObject()
{
    return ((int *(*)())FUN_00a7c8a0)();
}

// FUN_00d467a0: ? nonzero in VR mode (meaning guessed from the callers; ECX not recovered).
inline int isVrMode()
{
    return ((int (*)())FUN_00d467a0)();
}
// FUN_00e03ea0: hash of a name for the given object type.
inline int hashName(const char *name, int objectType)
{
    return ((int (*)(const char *, int))FUN_00e03ea0)(name, objectType);
}
// FUN_00a18d70: look up an object by name hash and type; nonzero when found.
inline int findObject(int hash, int objectType)
{
    return ((int (*)(int, int))FUN_00a18d70)(hash, objectType);
}

// FUN_00a7c7e0: nonzero when the handle is valid (? ECX not recovered).
inline int isValidHandle()
{
    return ((int (*)())FUN_00a7c7e0)();
}

} // namespace TrgActVrGoalPoint_p1

// 00C97B10  Trigger::Act::VR_GOAL_POINT  size=755  [class]
int __fastcall Trigger::Act::VR_GOAL_POINT(int *action)
{
    using namespace TrgActVrGoalPoint_p1;
    float point[4];         // x, y, z, rotation y (from FUN_00c78580)
    float position[4];
    float rotation[4];
    int buffer[26];         // handle-list storage, or spawn parameters (0x68 bytes)
    HandleList list;
    int result;

    int *record = (int *)action[1];
    if (record == 0) {
        debugPrint(DAT_016b1684);
        return 0;
    }
    if (((int (*)(int, float *))FUN_00c78580)(record[2], point) != 0) {
        result = 1;
        if (isVrMode() != 0 && DAT_018b9174 == 0xd30) {
            int hash = hashName(DAT_016b164c, 0xd6040);
            if (findObject(hash, 0xd6040) != 0) {
                if (record[3] == 0) {
                    if (isValidHandle() != 0) {
                        int *object = handleToObject();
                        if (((int (*)(int *))FUN_00c83b80)(object) != 0) {
                            ((void (*)(int))FUN_006042f0)(0);  // ? ECX not recovered
                            return 1;
                        }
                    }
                }
                else {
                    if (isValidHandle() != 0) {
                        int *object = handleToObject();
                        int *goal = (int *)((int (*)(int *))FUN_00c83b80)(object);
                        if (goal != 0) {
                            position[0] = point[0];
                            position[1] = point[1];
                            position[2] = point[2];
                            position[3] = 1.0f;  // 0x3f800000
                            rotation[0] = 0.0f;
                            rotation[1] = point[3];
                            rotation[2] = 0.0f;
                            rotation[3] = 1.0f;  // 0x3f800000
                            (*(void (__thiscall **)(int *, float *, float *))((char *)goal[0] + 0x7c))(goal, position, rotation);
                            ((void (*)(int))FUN_006042f0)(1);  // ? ECX not recovered
                            return 1;
                        }
                    }
                }
            }
            return 0;
        }
        if (record[3] != 1) {
            list.data = buffer;
            list.unknown00 = 0;
            list.capacity = 0x10;
            list.count = 0;
            list.heapAllocated = 0;
            findObjectsByName("Id:Bm0296", &list);
            if (list.count < 1) {
                result = 0;
            }
            else {
                int *handle = list.data;
                if (list.data != list.data + list.count) {
                    do {
                        float *objectPosition;
                        float *objectRotation;
                        if (*handle != 0 &&
                            (objectPosition = ((float *(*)())FUN_00a7c8b0)() /* ? ECX = handle */,
                             point[0] == objectPosition[0]) &&
                            point[1] == objectPosition[1] &&
                            point[2] == objectPosition[2] &&
                            (objectRotation = ((float *(*)())FUN_00a7c8d0)() /* ? ECX = handle */,
                             objectRotation[0] == 0.0) &&
                            point[3] == objectRotation[1] &&
                            objectRotation[2] == 0.0) {
                            ((void (*)())FUN_00a805f0)();  // ? ECX = handle
                        }
                        handle = handle + 1;
                    } while (handle != list.data + list.count);
                }
            }
            if (list.data != 0) {
                list.count = 0;
                if (list.heapAllocated != 0) {
                    FUN_00dd48d0((int)list.data, 0);
                }
            }
            return result;
        }
        ((void (*)())FUN_0040b190)();  // ? ECX = buffer (initialises the spawn parameters)
        ((float *)buffer)[20] = point[0];  // +0x50
        ((float *)buffer)[21] = point[1];
        ((float *)buffer)[22] = point[2];
        buffer[23] = 0;
        ((float *)buffer)[24] = point[3];
        buffer[25] = 0;
        ((void (*)(const char *, int, int *))FUN_00a82090)("goalPoint", 0xd0296, buffer);
        return 1;
    }
    debugPrint(DAT_016b1654);
    return 0;
}

// src/managers/effectresourcemanager/EffectResourceManager.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "EffectResourceManager.h"

// Notes for this file
// - /GS security-cookie checks are compiler-generated and omitted.
// - Several raw functions were decompiled with lost register arguments (ECX of __thiscall /
//   __fastcall callees) or with a confused stack frame (functions that align ESP to 16 for a
//   D3DXMATRIX local). Those were re-read from the machine code; each spot is marked "// disasm:".
// - Free functions keep the parameter types of their include/auto/functions.h declaration so
//   no ambiguous overloads appear; where the declaration has the wrong arity (Ghidra lost the
//   arguments) the definition carries the real parameters.

// D3DX9_43.DLL imports
extern "C" float *__stdcall D3DXMatrixMultiply(float *out, const float *m1, const float *m2);
extern "C" float *__stdcall D3DXMatrixRotationX(float *out, float angle);
extern "C" float *__stdcall D3DXMatrixRotationY(float *out, float angle);
extern "C" float *__stdcall D3DXMatrixRotationZ(float *out, float angle);
extern "C" float *__stdcall D3DXMatrixScaling(float *out, float sx, float sy, float sz);

// strings / tables in .rdata
extern char DAT_016ca67c[];          // "eff"
extern char DAT_016ca678[];          // "eft"
extern char DAT_016ca5bc[];          // "EFF_R: <out of range> %x"
extern char DAT_016ca5d0[];          // "EFF_F: <out of range> %x"
extern char DAT_016ca600[];          // "EFF_EV: <out of range> event_type=%x"
extern char DAT_016ca5e4[];          // "EFF_EV: <out of range> event_no=%x"
extern char DAT_016575ac[];          // "%s"
extern char DAT_0163e20c[];          // "EFF_OBJID: <out of range> %x"
extern char DAT_016ca698[];          // "[EffectCallParam] <cannot register more than this> [%d]"
extern unsigned int DAT_016ca680[];  // default call entry {target 0, arg -1, ...}
extern char DAT_01be9450[];          // "" (default effect name)
extern unsigned int DAT_016cacf0[];  // "000".."999" (4-byte entries)
extern unsigned int DAT_016d4768[];  // "sst", "est" (4-byte entries, indexed by number / 1000)
extern char DAT_016e05a4[];          // "%s"
extern char DAT_016e05fc[];          // "%s"
extern char DAT_016e0654[];          // "%s"
extern char DAT_016e06b0[];          // "%s"
extern char DAT_016e06b4[];          // "%s"
extern char DAT_016e0884[];
extern char DAT_016e09c4[];
extern char DAT_016e09f8[];
extern char DAT_016e0a2c[];
extern char DAT_016e0a60[];
extern char DAT_016e0a94[];
extern unsigned char DAT_016cabd0[]; // char -> hex digit value, 0xff = not a hex digit
extern unsigned char DAT_016caad0[]; // char -> decimal digit value, 0xff = not a digit
extern unsigned char DAT_016cbe20[]; // char -> case-folded char (?)
extern char DAT_016e0198[];          // "[EffectResourceManager::OnDestroyResource] <data freed while in use> ..."
extern char DAT_016e01e8[];          // "[EffectResourceManager::OnDestroyResource] <data freed while in use> ..."
extern char DAT_016e0758[];          // "[ESP] <common data %s is not loaded ...>(EST:%d)"
extern char DAT_016e0820[];          // "[ESP]%s <number %d of %s is not registered ...>"
extern char DAT_016e07a0[];          // "SST"
extern char DAT_016e07a4[];          // "EST"

// effect resource registry state (.data)
extern int DAT_01ee6550;             // registry initialised flag
extern unsigned char DAT_01ee6530;   // EspReadWriteLock guarding the registry
extern unsigned int *DAT_018d72ac;   // registered resource node list: data
extern int DAT_018d72b4;             //   ... count
extern unsigned char DAT_018d72c8;   // resource pool (0x58-byte elements)
extern unsigned int DAT_018d72d8;    //   ... element base
extern int DAT_018d72dc;             //   ... element count
extern unsigned char DAT_018d7288;   // node pool (0xC-byte elements)
extern unsigned int DAT_018d7298;    //   ... element base
extern int DAT_018d729c;             //   ... element count
// fixed resource slots 0..2 (0x54 bytes each, from 0x01EE5430)
extern int DAT_01ee546c;             // slot 0 +0x3C use count
extern int DAT_01ee5470;             // slot 0 +0x40
extern int DAT_01ee5474;             // slot 0 +0x44
extern unsigned short DAT_01ee5478;  // slot 0 +0x48
extern char DAT_01ee545c;            // slot 0 +0x2C name[0]
extern int DAT_01ee547c;             // slot 0 +0x4C
extern int DAT_01ee5480;             // slot 0 +0x50
extern int DAT_01ee54c0;             // slot 1 +0x3C
extern int DAT_01ee54c4;             // slot 1 +0x40
extern int DAT_01ee54c8;             // slot 1 +0x44
extern unsigned short DAT_01ee54cc;  // slot 1 +0x48
extern char DAT_01ee54b0;            // slot 1 +0x2C name[0]
extern int DAT_01ee54d0;             // slot 1 +0x4C
extern int DAT_01ee54d4;             // slot 1 +0x50
extern int DAT_01ee5514;             // slot 2 +0x3C
extern int DAT_01ee5518;             // slot 2 +0x40
extern int DAT_01ee551c;             // slot 2 +0x44
extern unsigned short DAT_01ee5520;  // slot 2 +0x48
extern int DAT_01ee5524;             // slot 2 +0x4C
extern int DAT_01ee5528;             // slot 2 +0x50
extern unsigned int DAT_01ee5504;    // slot 2 +0x2C name[0..3]
extern char DAT_01ee5508;            // slot 2 +0x30 name[4]
extern int DAT_01ee54e0;             // slot 2 +0x08 resource id

namespace EffectResourceManager_p1 {

// One registered call target of an EffectCallParam (12 bytes).
struct EffectCallEntry {
    unsigned char key;       // +0x0  0xFF = "whole object"
    unsigned char pad[3];
    int target;              // +0x4  object handle (owner +0x4F0)
    int arg;                 // +0x8  -1 = none
};

// Parameter block passed to EffectCall::EffectCallSystem::callOnce (0x104 bytes). Name from the
// "[EffectCallParam]" assertion text. Fields other than count/effectName/scale are unknown.
struct EffectCallParam {
    int field_00;                    // +0x00
    EffectCallEntry entries[10];     // +0x04
    unsigned int count;              // +0x7C
    const char *effectName;          // +0x80  0 = derive from the entry target
    unsigned int field_84;           // +0x84
    unsigned int field_88;           // +0x88
    unsigned int field_8C;           // +0x8C
    unsigned int field_90;           // +0x90
    unsigned int field_94;           // +0x94
    unsigned int field_98;           // +0x98
    unsigned int field_9C;           // +0x9C
    unsigned int field_A0;           // +0xA0
    unsigned int field_A4;           // +0xA4
    float scale;                     // +0xA8
    unsigned int field_AC;           // +0xAC
    float matrix[16];                // +0xB0  initialised to identity
    unsigned short field_F0;         // +0xF0
    unsigned short field_F2;         // +0xF2
    unsigned int field_F4;           // +0xF4
    unsigned int field_F8;           // +0xF8
    unsigned int field_FC;           // +0xFC
    unsigned int field_100;          // +0x100
};
typedef char EffectCallParamSizeCheck[sizeof(EffectCallParam) == 0x104 ? 1 : -1];

// Callees whose include/auto declaration does not fit the call (lost `this`, varargs, or an
// undeclared class member); called through their address with the argument list of the machine code.
typedef void (__cdecl *DebugPrintFn)(const void *format, ...);                   // FUN_00dd5650 (empty in release)
typedef int (__thiscall *ArchiveFindFn)(int *archive, int kind, const char *ext, int flags);  // FUN_00de3d30
typedef int (__cdecl *CallOnceFn)(unsigned int resourceId, unsigned int effectNo, unsigned int matrix,
                                  int callParam, const char *name, const void *entryTarget, char key);
typedef void (__cdecl *RequestCounterDownFn)(int resourceId);                     // cEffectData::requestCounterDown
typedef void (__thiscall *LockFn)(void *lock);                                    // EspReadWriteLock::enterWrite
typedef int (__thiscall *ResourceInRangeFn)(void *resource, unsigned int begin, unsigned int size); // FUN_00ec7630
typedef void (__thiscall *ResourceFn)(void *resource);
typedef void (__cdecl *EspPrintFn)(const void *format, ...);                      // FUN_00ec4790
typedef unsigned int (__cdecl *NameFromIdFn)(char *out, int size, unsigned int resourceId, int flags); // FUN_00f4a7a0
typedef unsigned long long (__cdecl *DivFn)(int numerator, int denominator);      // FUN_00fddccc = div(): EAX quot, EDX rem

static const DebugPrintFn debugPrint = (DebugPrintFn)0x00DD5650;
static const ArchiveFindFn archiveFind = (ArchiveFindFn)0x00DE3D30;
static const CallOnceFn callOnce = (CallOnceFn)0x00E002F0;                        // EffectCall::EffectCallSystem::callOnce
static const RequestCounterDownFn requestCounterDown = (RequestCounterDownFn)0x00F4BC40;
static const LockFn enterWrite = (LockFn)0x00EAABC0;
static const ResourceInRangeFn resourceInRange = (ResourceInRangeFn)0x00EC7630;
static const ResourceFn resourceRelease = (ResourceFn)0x00F4ACE0;   // Ghidra: ~cHwLFFreeListTemp<cEffResource<Hw::cTexture,...>> (folded name)
static const ResourceFn resourceDetach = (ResourceFn)0x00EC7600;    // Ghidra: cXml::cXml (folded name)
static const EspPrintFn espPrint = (EspPrintFn)0x00EC4790;
static const NameFromIdFn nameFromId = (NameFromIdFn)0x00F4A7A0;
static const DivFn crtDiv = (DivFn)0x00FDDCCC;

// x87 _CIsqrt (FUN_00fdef70) / _CIatan2 (FUN_00fdecda)
extern "C" double __cdecl sqrt(double x);
extern "C" double __cdecl atan2(double y, double x);

} // namespace EffectResourceManager_p1

// 00E004B0  EffectResourceManager::GetNameFromRoomNo  size=275  [class]
int EffectResourceManager::GetNameFromRoomNo(unsigned int roomNo, int *archive)
{
  using namespace EffectResourceManager_p1;
  char name[5];

  int effData = archiveFind(archive, 0, DAT_016ca67c, 0);   // "eff"
  if (effData == 0) {
    return 1;
  }
  int eftData = archiveFind(archive, 1, DAT_016ca678, 0);   // "eft"
  if ((roomNo & 0xfffff000) != 0) {
    debugPrint(DAT_016ca5bc, roomNo);
  }
  if (roomNo + 0x1000 == 0xfff) {
    return 0;
  }
  if (((int)roomNo < 0) || (0xfff < (int)roomNo)) {
    debugPrint(DAT_016575ac,
               "EffectResourceManager::GetNameFromRoomNo: (0 <= room_no) && (room_no <= 0xfff)");
  }
  name[1] = "0123456789abcdef"[roomNo >> 8 & 0xf];
  name[2] = "0123456789abcdef"[roomNo >> 4 & 0xf];
  name[3] = "0123456789abcdef"[roomNo & 0xf];
  name[0] = 'r';
  name[4] = 0;
  return SetEffectResource(roomNo + 0x1000, name, effData, eftData) != 0;
}

// 00E005D0  EffectResourceManager::GetNameFromPhaseNo  size=275  [class]
int EffectResourceManager::GetNameFromPhaseNo(unsigned int phaseNo, int *archive)
{
  using namespace EffectResourceManager_p1;
  char name[5];

  int effData = archiveFind(archive, 0, DAT_016ca67c, 0);   // "eff"
  if (effData == 0) {
    return 1;
  }
  int eftData = archiveFind(archive, 1, DAT_016ca678, 0);   // "eft"
  if ((phaseNo & 0xfffff000) != 0) {
    debugPrint(DAT_016ca5d0, phaseNo);
  }
  if (phaseNo + 0x2000 == 0xfff) {
    return 0;
  }
  if (((int)phaseNo < 0) || (0xfff < (int)phaseNo)) {
    debugPrint(DAT_016575ac,
               "EffectResourceManager::GetNameFromPhaseNo: (0 <= phase_no) && (phase_no <= 0xfff)");
  }
  name[1] = "0123456789abcdef"[phaseNo >> 8 & 0xf];
  name[2] = "0123456789abcdef"[phaseNo >> 4 & 0xf];
  name[3] = "0123456789abcdef"[phaseNo & 0xf];
  name[0] = 'p';
  name[4] = 0;
  return SetEffectResource(phaseNo + 0x2000, name, effData, eftData) != 0;
}

// 00E006F0  FUN_00e006f0  size=205  [between]
// Registers the event effect archive data as resource 0x20000000 + (eventType << 16) + eventNo.
// disasm: also returns 1 (no eff data) / 0 (invalid id) / SetEffectResource() != 0 in EAX; the
// declaration in functions.h is void.
void FUN_00e006f0(int eventType, unsigned int eventNo, int effData, unsigned int eftData)
{
  using namespace EffectResourceManager_p1;
  char name[16];

  if (effData == 0) {
    return;
  }
  if ((eventType * 0x10000 & 0xfff0ffffU) != 0) {
    debugPrint(DAT_016ca600, eventType);
  }
  if ((eventNo & 0xffff0000) != 0) {
    debugPrint(DAT_016ca5e4, eventNo);
  }
  int resourceId = eventType * 0x10000 + 0x20000000U + eventNo;
  if (resourceId == 0xfff) {
    return;
  }
  EffectResourceManager::GetNameFromEventNo(name, 0x10, eventType, eventNo);
  EffectResourceManager::SetEffectResource(resourceId, name, effData, eftData);
}

// 00E00860  FUN_00e00860  size=90  [between]
void FUN_00e00860(int eventType, unsigned int eventNo, int enabled)
{
  using namespace EffectResourceManager_p1;

  if (enabled != 0) {
    if ((eventType * 0x10000 & 0xfff0ffffU) != 0) {
      debugPrint(DAT_016ca600, eventType);
    }
    if ((eventNo & 0xffff0000) != 0) {
      debugPrint(DAT_016ca5e4, eventNo);
    }
    int resourceId = eventType * 0x10000 + 0x20000000U + eventNo;
    if (resourceId != 0xfff) {
      requestCounterDown(resourceId);
    }
  }
}

// 00E00900  FUN_00e00900  size=8  [between]
// EffectCallParam: clear the call entries.
void __fastcall FUN_00e00900(int self)
{
  using namespace EffectResourceManager_p1;
  ((EffectCallParam *)self)->count = 0;
}

// 00E00990  FUN_00e00990  size=202  [between]
// EffectCallParam: reset the parameters after the entry table (+0x7C..+0x100).
void __fastcall FUN_00e00990(int self)
{
  using namespace EffectResourceManager_p1;
  EffectCallParam *param = (EffectCallParam *)self;

  param->field_84 = 0x80000000;
  param->scale = 1.0f;
  param->field_98 = 0xff;
  param->field_AC = 0;
  param->effectName = 0;
  param->field_88 = 0;
  param->field_8C = 0;
  param->field_94 = 0;
  param->field_9C = 0;
  param->field_A0 = 0;
  param->field_A4 = 0;
  param->count = 0;
  param->field_90 = 0;
  param->matrix[14] = 0.0f;   // +0xE8
  param->matrix[13] = 0.0f;   // +0xE4
  param->matrix[12] = 0.0f;   // +0xE0
  param->matrix[11] = 0.0f;   // +0xDC
  param->matrix[9] = 0.0f;    // +0xD4
  param->matrix[8] = 0.0f;    // +0xD0
  param->matrix[7] = 0.0f;    // +0xCC
  param->matrix[6] = 0.0f;    // +0xC8
  param->matrix[4] = 0.0f;    // +0xC0
  param->matrix[3] = 0.0f;    // +0xBC
  param->matrix[2] = 0.0f;    // +0xB8
  param->matrix[1] = 0.0f;    // +0xB4
  param->matrix[15] = 1.0f;   // +0xEC
  param->matrix[10] = 1.0f;   // +0xD8
  param->matrix[5] = 1.0f;    // +0xC4
  param->matrix[0] = 1.0f;    // +0xB0
  param->field_F0 = 0xffff;
  param->field_100 = 0;
}

// 00E00A60  EffectResourceManager::GetNameFromRoomNo  size=5  [class]
// Incremental-link thunk (jmp 00E004B0); renamed so it does not collide with its target.
int EffectResourceManager::thunk_GetNameFromRoomNo(unsigned int roomNo, int *archive)
{
  return GetNameFromRoomNo(roomNo, archive);
}

// 00E00A70  EffectResourceManager::GetNameFromPhaseNo  size=5  [class]
// Incremental-link thunk (jmp 00E005D0).
int EffectResourceManager::thunk_GetNameFromPhaseNo(unsigned int phaseNo, int *archive)
{
  return GetNameFromPhaseNo(phaseNo, archive);
}

// 00E00A80  thunk_FUN_00e006f0  size=5  [callgraph]
void thunk_FUN_00e006f0(int eventType, unsigned int eventNo, int effData, unsigned int eftData)
{
  FUN_00e006f0(eventType, eventNo, effData, eftData);
}

// 00E00A90  FUN_00e00a90  size=75  [callgraph]
// Release a use of room resource 0x1000 + roomNo (only if `archive` is null or has an "eff" file).
void FUN_00e00a90(unsigned int roomNo, int archive)
{
  using namespace EffectResourceManager_p1;

  if ((archive != 0) && (archiveFind((int *)archive, 0, DAT_016ca67c, 0) == 0)) {
    return;
  }
  if ((roomNo & 0xfffff000) != 0) {
    debugPrint(DAT_016ca5bc, roomNo);
  }
  if (roomNo + 0x1000 != 0xfff) {
    requestCounterDown(roomNo + 0x1000);
  }
}

// 00E00AE0  FUN_00e00ae0  size=75  [callgraph]
// Release a use of phase resource 0x2000 + phaseNo.
void FUN_00e00ae0(unsigned int phaseNo, int archive)
{
  using namespace EffectResourceManager_p1;

  if ((archive != 0) && (archiveFind((int *)archive, 0, DAT_016ca67c, 0) == 0)) {
    return;
  }
  if ((phaseNo & 0xfffff000) != 0) {
    debugPrint(DAT_016ca5d0, phaseNo);
  }
  if (phaseNo + 0x2000 != 0xfff) {
    requestCounterDown(phaseNo + 0x2000);
  }
}

// 00E00B30  thunk_FUN_00e00860  size=5  [callgraph]
void thunk_FUN_00e00860(int eventType, unsigned int eventNo, int enabled)
{
  FUN_00e00860(eventType, eventNo, enabled);
}

// 00E00B40  FUN_00e00b40  size=56  [callgraph]
// Object id -> effect resource id (0x7C0000 maps to 0).
unsigned int FUN_00e00b40(unsigned int objId)
{
  using namespace EffectResourceManager_p1;

  if (objId == 0x7c0000) {
    return 0;
  }
  if ((objId < 0x10000) || (objId + 0xe0000000 < 0x100000)) {
    debugPrint(DAT_0163e20c, objId);
  }
  return objId;
}

// 00E00B80  FUN_00e00b80  size=206  [callgraph]
// Spawn effect `effectNo` of resource `resourceId` once for every call entry of `callParam`
// (or once with the default entry when it has none). Returns 1 if any spawn succeeded.
unsigned int FUN_00e00b80(unsigned int resourceId, unsigned int effectNo, unsigned int matrix, int callParam)
{
  using namespace EffectResourceManager_p1;
  EffectCallParam *param = (EffectCallParam *)callParam;

  if (param->count == 0) {
    const char *name = param->effectName;
    if (name == 0) {
      name = DAT_01be9450;
    }
    int spawned = callOnce(resourceId, effectNo, matrix, callParam, name, DAT_016ca680, (char)0xff);
    if (spawned != 0) {
      return 1;
    }
    return 0;
  }
  unsigned int index = 0;
  if (param->count != 0) {
    int *entryTarget = &param->entries[0].target;
    bool anySpawned = false;
    do {
      const char *name = param->effectName;
      if (name == 0) {
        if ((index == 0xff) || (*entryTarget == 0)) {
          name = DAT_01be9450;
        }
        else {
          name = (const char *)FUN_00a7c910(*entryTarget);   // disasm: ECX = entry target
        }
      }
      int spawned = callOnce(resourceId, effectNo, matrix, callParam, name, entryTarget,
                             (char)entryTarget[-1]);   // entry key
      if ((anySpawned) || (spawned != 0)) {
        anySpawned = true;
      }
      index = index + 1;
      entryTarget = entryTarget + 3;
    } while (index < param->count);
    if (anySpawned) {
      return 1;
    }
  }
  return 0;
}

// 00E00C50  FUN_00e00c50  size=260  [callgraph]
// Registers the "eff"/"eft" files of `archive` as the resource of object `objId`.
// disasm: the archive is a second stack argument (ECX of FUN_00de3d30) and the result is returned
// in EAX; functions.h declares only `void FUN_00e00c50(uint)`.
int FUN_00e00c50(unsigned int objId, int *archive)
{
  using namespace EffectResourceManager_p1;
  char name[16];
  unsigned int resourceId;

  if (FUN_009f9420(objId)) {
    return 0;
  }
  int effData = archiveFind(archive, 0, DAT_016ca67c, 0);   // "eff"
  if (effData == 0) {
    return 1;
  }
  int eftData = archiveFind(archive, 1, DAT_016ca678, 0);   // "eft"
  if (objId == 0x7c0000) {
    resourceId = 0;
  }
  else {
    if ((objId < 0x10000) || (objId + 0xe0000000 < 0x100000)) {
      debugPrint(DAT_0163e20c, objId);
    }
    resourceId = objId;
    if (objId == 0xfff) goto invalid;
  }
  if (FUN_009f8ea0(name, 0x10, objId, 1) != 0) {
    return EffectResourceManager::SetEffectResource(resourceId, name, effData, eftData) != 0;
  }
invalid:
  return 0;
}

// 00E00D60  FUN_00e00d60  size=119  [callgraph]
// Release a use of the resource of object `objId`.
void FUN_00e00d60(unsigned int objId, int archive)
{
  using namespace EffectResourceManager_p1;

  if (!FUN_009f9420(objId)) {
    if ((archive != 0) && (archiveFind((int *)archive, 0, DAT_016ca67c, 0) == 0)) {
      return;
    }
    if (objId == 0x7c0000) {
      requestCounterDown(0);
      return;
    }
    if ((objId < 0x10000) || (objId + 0xe0000000 < 0x100000)) {
      debugPrint(DAT_0163e20c, objId);
    }
    if (objId != 0xfff) {
      requestCounterDown(objId);
    }
  }
}

// 00E00DE0  FUN_00e00de0  size=93  [callgraph]
void FUN_00e00de0(unsigned int objId)
{
  using namespace EffectResourceManager_p1;

  if (!FUN_009f9420(objId)) {
    if (objId == 0x7c0000) {
      FUN_00f4b820(0);   // disasm: tail call with the resolved id (0)
      return;
    }
    if ((objId < 0x10000) || (objId + 0xe0000000 < 0x100000)) {
      debugPrint(DAT_0163e20c, objId);
    }
    if (objId != 0xfff) {
      FUN_00f4b820(objId);   // disasm: tail call with objId
      return;
    }
  }
}

// 00E00E40  FUN_00e00e40  size=93  [callgraph]
void FUN_00e00e40(unsigned int objId)
{
  using namespace EffectResourceManager_p1;

  if (!FUN_009f9420(objId)) {
    if (objId == 0x7c0000) {
      FUN_00f4b860(0);   // disasm: tail call with the resolved id (0)
      return;
    }
    if ((objId < 0x10000) || (objId + 0xe0000000 < 0x100000)) {
      debugPrint(DAT_0163e20c, objId);
    }
    if (objId != 0xfff) {
      FUN_00f4b860(objId);
      return;
    }
  }
}

// 00E00F00  FUN_00e00f00  size=166  [callgraph]
// Does resource `resourceId` contain file "NNN.sst" / "NNN.est" for `number` (0..999 sst,
// 1000..1999 est)? disasm: returns 1/0 in EAX; declared void in functions.h.
void FUN_00e00f00(unsigned int resourceId, unsigned int number)
{
  using namespace EffectResourceManager_p1;
  char fileName[8];

  FUN_009df6d0((ulonglong *)&DAT_01ee6530);   // disasm: ECX = registry lock (read lock)
  int resource = (int)FUN_00f4b0b0(resourceId);
  if (resource != 0) {
    unsigned long long quotRem = crtDiv(number, 1000);
    *(unsigned int *)fileName = DAT_016cacf0[(int)(quotRem >> 0x20)];
    *(unsigned int *)(fileName + 4) = DAT_016d4768[(int)quotRem];
    fileName[3] = '.';
    int file = FUN_00de3d80((int *)resource, 0, fileName);   // disasm: ECX = resource
    if (file != 0) {
      FUN_009df740((longlong *)&DAT_01ee6530);
      return;
    }
  }
  FUN_009df740((longlong *)&DAT_01ee6530);
}

// 00E00FB0  FUN_00e00fb0  size=104  [callgraph]
// Spawn at the origin, scaled by callParam->scale.
void FUN_00e00fb0(unsigned int resourceId, unsigned int effectNo, int callParam)
{
  using namespace EffectResourceManager_p1;
  EffectCallParam *param = (EffectCallParam *)callParam;
  float matrix[16];

  // disasm: the raw output mixed up the ESP-aligned frame; one matrix is built and passed
  D3DXMatrixScaling(matrix, param->scale, param->scale, param->scale);
  FUN_00e00b80(resourceId, effectNo, (unsigned int)matrix, callParam);
}

// 00E01020  FUN_00e01020  size=151  [callgraph]
// Spawn at `position`, scaled by callParam->scale.
void FUN_00e01020(unsigned int resourceId, unsigned int effectNo, unsigned int *position, int callParam)
{
  using namespace EffectResourceManager_p1;
  EffectCallParam *param = (EffectCallParam *)callParam;
  float scale[3];
  float matrix[16];

  scale[0] = param->scale;
  scale[1] = param->scale;
  scale[2] = param->scale;
  D3DXMatrixScaling(matrix, scale[0], scale[1], scale[2]);
  matrix[12] = ((float *)position)[0];
  matrix[13] = ((float *)position)[1];
  matrix[14] = ((float *)position)[2];
  FUN_00e00b80(resourceId, effectNo, (unsigned int)matrix, callParam);
}

// 00E010C0  FUN_00e010c0  size=407  [callgraph]
// Spawn at `position` with euler `rotation` (radians), scaled by callParam->scale.
void FUN_00e010c0(unsigned int resourceId, unsigned int effectNo, unsigned int *position, float *rotation,
                  int callParam)
{
  using namespace EffectResourceManager_p1;
  EffectCallParam *param = (EffectCallParam *)callParam;
  float scale[3];
  float matrix[16];
  float temp[16];

  // disasm: rebuilt from the machine code (the raw output confused the aligned frame)
  if (param->scale == 1.0f) {
    matrix[14] = 0.0f;
    matrix[13] = 0.0f;
    matrix[12] = 0.0f;
    matrix[11] = 0.0f;
    matrix[9] = 0.0f;
    matrix[8] = 0.0f;
    matrix[7] = 0.0f;
    matrix[6] = 0.0f;
    matrix[4] = 0.0f;
    matrix[3] = 0.0f;
    matrix[2] = 0.0f;
    matrix[1] = 0.0f;
    matrix[15] = 1.0f;
    matrix[10] = 1.0f;
    matrix[5] = 1.0f;
    matrix[0] = 1.0f;
    if (rotation[2] != 0.0f) {
      D3DXMatrixRotationZ(temp, rotation[2]);
      D3DXMatrixMultiply(matrix, temp, matrix);
    }
    if (rotation[1] != 0.0f) {
      D3DXMatrixRotationY(temp, rotation[1]);
      D3DXMatrixMultiply(matrix, temp, matrix);
    }
    if (rotation[0] == 0.0f) goto translate;
    D3DXMatrixRotationX(temp, rotation[0]);
  }
  else {
    scale[0] = param->scale;
    scale[1] = param->scale;
    scale[2] = param->scale;
    thunk_FUN_00ddc1d0((undefined4 *)matrix, rotation, 5);   // euler -> rotation matrix, order 5
    FUN_00ddd140((undefined4 *)temp, (undefined4 *)scale);   // scaling matrix
  }
  D3DXMatrixMultiply(matrix, temp, matrix);
translate:
  matrix[12] = ((float *)position)[0];
  matrix[13] = ((float *)position)[1];
  matrix[14] = ((float *)position)[2];
  FUN_00e00b80(resourceId, effectNo, (unsigned int)matrix, callParam);
}

// 00E01260  thunk_FUN_00e00b80  size=5  [callgraph]
unsigned int thunk_FUN_00e00b80(unsigned int resourceId, unsigned int effectNo, unsigned int matrix, int callParam)
{
  return FUN_00e00b80(resourceId, effectNo, matrix, callParam);
}

// 00E01270  FUN_00e01270  size=197  [callgraph]
// Spawn at `position` oriented along the vector `direction`.
void FUN_00e01270(unsigned int resourceId, unsigned int effectNo, unsigned int *position, float *direction,
                  int callParam)
{
  using namespace EffectResourceManager_p1;
  float rotation[3];

  rotation[2] = (float)((double)-direction[0] * 90.0 * 0.01745329238474369);
  float xx = direction[0] * direction[0];
  float zz = direction[2] * direction[2];
  float sumSq = xx + zz;
  float horizontal = (float)sqrt(sumSq);
  float pitch = (float)atan2(direction[1], horizontal);
  rotation[0] = (float)((1.5707963705062866 - pitch) - (double)direction[0] * 1.5707963705062866);
  rotation[1] = (float)atan2(direction[0], direction[2]);
  FUN_00e010c0(resourceId, effectNo, position, rotation, callParam);
}

// 00E01340  FUN_00e01340  size=153  [callgraph]
// Spawn at the origin for object `objId`.
void FUN_00e01340(unsigned int objId, unsigned int effectNo, int callParam)
{
  using namespace EffectResourceManager_p1;
  EffectCallParam *param = (EffectCallParam *)callParam;
  float matrix[16];

  if (objId == 0x7c0000) {
    objId = 0;
  }
  else if ((objId < 0x10000) || (objId + 0xe0000000 < 0x100000)) {
    debugPrint(DAT_0163e20c, objId);
  }
  D3DXMatrixScaling(matrix, param->scale, param->scale, param->scale);
  FUN_00e00b80(objId, effectNo, (unsigned int)matrix, callParam);
}

// 00E013E0  FUN_00e013e0  size=78  [callgraph]
void FUN_00e013e0(unsigned int objId, unsigned int effectNo, unsigned int position, unsigned int callParam)
{
  using namespace EffectResourceManager_p1;

  if (objId == 0x7c0000) {
    objId = 0;
  }
  else if ((objId < 0x10000) || (objId + 0xe0000000 < 0x100000)) {
    debugPrint(DAT_0163e20c, objId);
  }
  FUN_00e01020(objId, effectNo, (unsigned int *)position, callParam);
}

// 00E01430  FUN_00e01430  size=83  [callgraph]
void FUN_00e01430(unsigned int objId, unsigned int effectNo, unsigned int *position, float *rotation,
                  int callParam)
{
  using namespace EffectResourceManager_p1;

  if (objId == 0x7c0000) {
    objId = 0;
  }
  else if ((objId < 0x10000) || (objId + 0xe0000000 < 0x100000)) {
    debugPrint(DAT_0163e20c, objId);
  }
  FUN_00e010c0(objId, effectNo, position, rotation, callParam);
}

// 00E01490  FUN_00e01490  size=78  [callgraph]
void FUN_00e01490(unsigned int objId, unsigned int effectNo, unsigned int matrix, unsigned int callParam)
{
  using namespace EffectResourceManager_p1;

  if (objId == 0x7c0000) {
    objId = 0;
  }
  else if ((objId < 0x10000) || (objId + 0xe0000000 < 0x100000)) {
    debugPrint(DAT_0163e20c, objId);
  }
  FUN_00e00b80(objId, effectNo, matrix, callParam);
}

// 00E01540  FUN_00e01540  size=134  [callgraph]
// Spawn at the origin from room resource 0x1000 + roomNo.
void FUN_00e01540(unsigned int roomNo, unsigned int effectNo, int callParam)
{
  using namespace EffectResourceManager_p1;
  EffectCallParam *param = (EffectCallParam *)callParam;
  float matrix[16];

  if ((roomNo & 0xfffff000) != 0) {
    debugPrint(DAT_016ca5bc, roomNo);
  }
  D3DXMatrixScaling(matrix, param->scale, param->scale, param->scale);
  FUN_00e00b80(roomNo + 0x1000, effectNo, (unsigned int)matrix, callParam);
}

// 00E015D0  FUN_00e015d0  size=59  [callgraph]
void FUN_00e015d0(unsigned int roomNo, unsigned int effectNo, unsigned int position, unsigned int callParam)
{
  using namespace EffectResourceManager_p1;

  if ((roomNo & 0xfffff000) != 0) {
    debugPrint(DAT_016ca5bc, roomNo);
  }
  FUN_00e01020(roomNo + 0x1000, effectNo, (unsigned int *)position, callParam);
}

// 00E016D0  FUN_00e016d0  size=134  [callgraph]
// Spawn at the origin from phase resource 0x2000 + phaseNo.
void FUN_00e016d0(unsigned int phaseNo, unsigned int effectNo, int callParam)
{
  using namespace EffectResourceManager_p1;
  EffectCallParam *param = (EffectCallParam *)callParam;
  float matrix[16];

  if ((phaseNo & 0xfffff000) != 0) {
    debugPrint(DAT_016ca5d0, phaseNo);
  }
  D3DXMatrixScaling(matrix, param->scale, param->scale, param->scale);
  FUN_00e00b80(phaseNo + 0x2000, effectNo, (unsigned int)matrix, callParam);
}

// 00E01860  FUN_00e01860  size=167  [callgraph]
// Spawn at the origin from event resource 0x20000000 + (eventType << 16) + eventNo.
void FUN_00e01860(unsigned int eventType, unsigned int eventNo, unsigned int effectNo, int callParam)
{
  using namespace EffectResourceManager_p1;
  EffectCallParam *param = (EffectCallParam *)callParam;
  float matrix[16];

  if ((eventType * 0x10000 & 0xfff0ffff) != 0) {
    debugPrint(DAT_016ca600, eventType);
  }
  if ((eventNo & 0xffff0000) != 0) {
    debugPrint(DAT_016ca5e4, eventNo);
  }
  D3DXMatrixScaling(matrix, param->scale, param->scale, param->scale);
  FUN_00e00b80(eventType * 0x10000 + 0x20000000 + eventNo, effectNo, (unsigned int)matrix, callParam);
}

// 00E01AB0  thunk_FUN_00e00c50  size=5  [callgraph]
int thunk_FUN_00e00c50(unsigned int objId, int *archive)
{
  return FUN_00e00c50(objId, archive);
}

// 00E01AC0  thunk_FUN_00e00d60  size=5  [callgraph]
void thunk_FUN_00e00d60(unsigned int objId, int archive)
{
  FUN_00e00d60(objId, archive);
}

// 00E01AD0  thunk_FUN_00e00de0  size=5  [callgraph]
void thunk_FUN_00e00de0(unsigned int objId)
{
  FUN_00e00de0(objId);
}

// 00E01AE0  thunk_FUN_00e00e40  size=5  [callgraph]
void thunk_FUN_00e00e40(unsigned int objId)
{
  FUN_00e00e40(objId);
}

// 00E01B50  FUN_00e01b50  size=91  [callgraph]
// Effect resource id of an object (via its +0x4F0 handle); 0xFFF when there is none.
unsigned int FUN_00e01b50(int owner)
{
  using namespace EffectResourceManager_p1;

  if ((owner != 0) && (*(int *)(owner + 0x4f0) != 0)) {
    int object = FUN_00a7c800(*(int *)(owner + 0x4f0));   // disasm: ECX = owner +0x4F0
    if (object != 0) {
      unsigned int objId = *(unsigned int *)(object + 0x4b0);
      if (objId == 0x7c0000) {
        return 0;
      }
      if ((objId < 0x10000) || (objId + 0xe0000000 < 0x100000)) {
        debugPrint(DAT_0163e20c, objId);
      }
      return objId;
    }
  }
  return 0xfff;
}

// 00E01BB0  thunk_FUN_00e00f00  size=5  [callgraph]
void thunk_FUN_00e00f00(unsigned int resourceId, unsigned int number)
{
  FUN_00e00f00(resourceId, number);
}

// 00E01C40  FUN_00e01c40  size=28  [callgraph]
void FUN_00e01c40(unsigned int owner, unsigned int number)
{
  // disasm: FUN_00e01b50 takes one argument; `number` is forwarded as the 2nd argument of FUN_00e00f00
  unsigned int resourceId = FUN_00e01b50(owner);
  FUN_00e00f00(resourceId, number);
}

// 00E01CA0  FUN_00e01ca0  size=81  [callgraph]
// EffectCallParam::EffectCallParam()
unsigned int * __fastcall FUN_00e01ca0(unsigned int *self)
{
  using namespace EffectResourceManager_p1;
  EffectCallParam *param = (EffectCallParam *)self;

  param->field_00 = 0;
  param->count = 0;
  _memset(param->entries, 0, 0x78);
  param->field_8C = 0;
  param->field_F0 = 0xffff;
  param->field_F2 = 0;
  param->field_F4 = 0;
  param->field_F8 = 0;
  param->field_FC = 0;
  FUN_00e00990((int)param);
  return self;
}

// 00E01D00  FUN_00e01d00  size=93  [callgraph]
// EffectCallParam::EffectCallParam(field_84)   (__thiscall)
unsigned int * FUN_00e01d00(unsigned int *self, unsigned int value84)
{
  using namespace EffectResourceManager_p1;
  EffectCallParam *param = (EffectCallParam *)self;

  param->field_00 = 0;
  param->count = 0;
  _memset(param->entries, 0, 0x78);
  param->field_8C = 0;
  param->field_F0 = 0xffff;
  param->field_F2 = 0;
  param->field_F4 = 0;
  param->field_F8 = 0;
  param->field_FC = 0;
  FUN_00e00990((int)param);
  param->field_84 = value84;
  return self;
}

// 00E01D60  FUN_00e01d60  size=103  [callgraph]
// EffectCallParam::EffectCallParam(field_84, field_88)   (__thiscall)
unsigned int * FUN_00e01d60(unsigned int *self, unsigned int value84, unsigned int value88)
{
  using namespace EffectResourceManager_p1;
  EffectCallParam *param = (EffectCallParam *)self;

  param->field_00 = 0;
  param->count = 0;
  _memset(param->entries, 0, 0x78);
  param->field_8C = 0;
  param->field_F0 = 0xffff;
  param->field_F2 = 0;
  param->field_F4 = 0;
  param->field_F8 = 0;
  param->field_FC = 0;
  FUN_00e00990((int)param);
  param->field_84 = value84;
  param->field_88 = value88;
  return self;
}

// 00E01DD0  FUN_00e01dd0  size=113  [callgraph]
// EffectCallParam::EffectCallParam(field_84, field_88, field_8C)   (__thiscall)
unsigned int * FUN_00e01dd0(unsigned int *self, unsigned int value84, unsigned int value88, unsigned int value8C)
{
  using namespace EffectResourceManager_p1;
  EffectCallParam *param = (EffectCallParam *)self;

  param->field_00 = 0;
  param->count = 0;
  _memset(param->entries, 0, 0x78);
  param->field_8C = 0;
  param->field_F0 = 0xffff;
  param->field_F2 = 0;
  param->field_F4 = 0;
  param->field_F8 = 0;
  param->field_FC = 0;
  FUN_00e00990((int)param);
  param->field_84 = value84;
  param->field_88 = value88;
  param->field_8C = value8C;
  return self;
}

// 00E01E50  FUN_00e01e50  size=93  [callgraph]
// EffectCallParam::EffectCallParam(effectName)   (__thiscall)
unsigned int * FUN_00e01e50(unsigned int *self, unsigned int effectName)
{
  using namespace EffectResourceManager_p1;
  EffectCallParam *param = (EffectCallParam *)self;

  param->field_00 = 0;
  param->count = 0;
  _memset(param->entries, 0, 0x78);
  param->field_8C = 0;
  param->field_F0 = 0xffff;
  param->field_F2 = 0;
  param->field_F4 = 0;
  param->field_F8 = 0;
  param->field_FC = 0;
  FUN_00e00990((int)param);
  param->effectName = (const char *)effectName;
  return self;
}

// 00E01EB0  FUN_00e01eb0  size=93  [callgraph]
// EffectCallParam::EffectCallParam(field_94)   (__thiscall)
unsigned int * FUN_00e01eb0(unsigned int *self, unsigned int value94)
{
  using namespace EffectResourceManager_p1;
  EffectCallParam *param = (EffectCallParam *)self;

  param->field_00 = 0;
  param->count = 0;
  _memset(param->entries, 0, 0x78);
  param->field_8C = 0;
  param->field_F0 = 0xffff;
  param->field_F2 = 0;
  param->field_F4 = 0;
  param->field_F8 = 0;
  param->field_FC = 0;
  FUN_00e00990((int)param);
  param->field_94 = value94;
  return self;
}

// 00E01F10  FUN_00e01f10  size=16  [callgraph]
// disasm: replaces the first argument by its +0x8 field (a room number) and jumps to FUN_00e01540;
// functions.h declares it without parameters.
void FUN_00e01f10(int source, unsigned int effectNo, int callParam)
{
  FUN_00e01540(*(unsigned int *)(source + 8), effectNo, callParam);
}

// 00E01F60  FUN_00e01f60  size=67  [callgraph]
void FUN_00e01f60(int source, unsigned int effectNo, unsigned int *position, float *rotation, int callParam)
{
  using namespace EffectResourceManager_p1;

  unsigned int roomNo = *(unsigned int *)(source + 8);
  if ((roomNo & 0xfffff000) != 0) {
    debugPrint(DAT_016ca5bc, roomNo);
  }
  FUN_00e010c0(roomNo + 0x1000, effectNo, position, rotation, callParam);
}

// 00E02040  FUN_00e02040  size=72  [callgraph]
// EffectCallParam::set(target, arg): replace all entries by one "whole object" entry.   (__thiscall)
void FUN_00e02040(int self, unsigned int target, int arg)
{
  using namespace EffectResourceManager_p1;
  EffectCallParam *param = (EffectCallParam *)self;
  EffectCallEntry *entry;
  char key;

  param->count = 0;
  key = (char)0xff;
  FUN_00e03850((int *)param, (int *)&entry, &key);   // insert key -> entry
  if (entry != &param->entries[param->count]) {
    entry->target = target;
    entry->arg = arg;
  }
}

// 00E020F0  FUN_00e020f0  size=73  [callgraph]
// EffectCallParam::set(target)   (__thiscall)
void FUN_00e020f0(int self, unsigned int target)
{
  using namespace EffectResourceManager_p1;
  EffectCallParam *param = (EffectCallParam *)self;
  EffectCallEntry *entry;
  char key;

  param->count = 0;
  key = (char)0xff;
  FUN_00e03850((int *)param, (int *)&entry, &key);
  if (entry != &param->entries[param->count]) {
    entry->target = target;
    entry->arg = -1;
  }
}

// 00E02140  FUN_00e02140  size=128  [callgraph]
// EffectCallParam::add(target, arg, key): key 0xFF replaces everything; any other key removes
// the 0xFF entry first and is limited to 10 entries.   (__thiscall)
void FUN_00e02140(int self, int target, unsigned int arg, char key)
{
  using namespace EffectResourceManager_p1;
  EffectCallParam *param = (EffectCallParam *)self;
  EffectCallEntry *entry;
  unsigned int entryArg;
  char wholeKey;

  if (key == -1) {
    param->count = 0;
    key = -1;
    entryArg = 0xffffffff;
  }
  else {
    wholeKey = (char)0xff;
    FUN_00e03760((int)param, &wholeKey);   // erase key 0xFF
    entryArg = arg;
    if (9 < (int)param->count) {
      debugPrint(DAT_016ca698, 10);
      return;
    }
  }
  FUN_00e03850((int *)param, (int *)&entry, &key);
  if (entry != &param->entries[param->count]) {
    entry->arg = entryArg;
    entry->target = target;
  }
}

// 00E021C0  FUN_00e021c0  size=83  [callgraph]
// EffectCallParam::set(owner): target = owner's +0x4F0 handle.   (__thiscall)
void FUN_00e021c0(int self, int owner)
{
  using namespace EffectResourceManager_p1;
  EffectCallParam *param = (EffectCallParam *)self;
  EffectCallEntry *entry;
  char key;

  if (owner != 0) {
    int target = *(int *)(owner + 0x4f0);
    param->count = 0;
    key = (char)0xff;
    FUN_00e03850((int *)param, (int *)&entry, &key);
    if (entry != &param->entries[param->count]) {
      entry->target = target;
      entry->arg = -1;
    }
  }
}

// 00E02240  FUN_00e02240  size=344  [callgraph]
// Spawn at the origin from the resource of the object behind handle `target`.
void FUN_00e02240(int target, unsigned int effectNo)
{
  using namespace EffectResourceManager_p1;
  EffectCallParam param;
  EffectCallEntry *entry;
  char key;
  float matrix[16];
  unsigned int resourceId;

  if (target == 0) {
    resourceId = 0xfff;
  }
  else {
    int object = FUN_00a7c800(target);   // disasm: ECX = target
    if (object == 0) {
      resourceId = 0xfff;
    }
    else {
      resourceId = *(unsigned int *)(object + 0x4b0);
      if (resourceId == 0x7c0000) {
        resourceId = 0;
      }
      else if ((resourceId < 0x10000) || (resourceId + 0xe0000000 < 0x100000)) {
        debugPrint(DAT_0163e20c, resourceId);   // disasm: resourceId is pushed
      }
    }
  }
  // inlined EffectCallParam::EffectCallParam()
  param.field_00 = 0;
  param.count = 0;
  _memset(param.entries, 0, 0x78);
  param.field_8C = 0;
  param.field_F0 = 0xffff;
  param.field_F2 = 0;
  param.field_F4 = 0;
  param.field_F8 = 0;
  param.field_FC = 0;
  FUN_00e00990((int)&param);
  // inlined EffectCallParam::set(target)
  param.count = 0;
  key = (char)0xff;
  FUN_00e03850((int *)&param, (int *)&entry, &key);
  if (entry != &param.entries[param.count]) {
    entry->target = target;
    entry->arg = -1;
  }
  // disasm: the raw output confused the aligned frame; one matrix and &param are passed
  D3DXMatrixScaling(matrix, param.scale, param.scale, param.scale);
  FUN_00e00b80(resourceId, effectNo, (unsigned int)matrix, (int)&param);
}

// 00E023A0  FUN_00e023a0  size=311  [callgraph]
void FUN_00e023a0(int target, unsigned int effectNo, unsigned int position)
{
  using namespace EffectResourceManager_p1;
  EffectCallParam param;
  EffectCallEntry *entry;
  char key;
  unsigned int resourceId;

  if (target == 0) {
    resourceId = 0xfff;
  }
  else {
    int object = FUN_00a7c800(target);   // disasm: ECX = target
    if (object == 0) {
      resourceId = 0xfff;
    }
    else {
      resourceId = *(unsigned int *)(object + 0x4b0);
      if (resourceId == 0x7c0000) {
        resourceId = 0;
      }
      else if ((resourceId < 0x10000) || (resourceId + 0xe0000000 < 0x100000)) {
        debugPrint(DAT_0163e20c, resourceId);
      }
    }
  }
  param.field_00 = 0;
  param.count = 0;
  _memset(param.entries, 0, 0x78);
  param.field_F2 = 0;
  param.field_8C = 0;
  param.field_F0 = 0xffff;
  param.field_F4 = 0;
  param.field_F8 = 0;
  param.field_FC = 0;
  FUN_00e00990((int)&param);
  param.count = 0;
  key = (char)0xff;
  FUN_00e03850((int *)&param, (int *)&entry, &key);
  if (entry != &param.entries[param.count]) {
    entry->target = target;
    entry->arg = -1;
  }
  FUN_00e01020(resourceId, effectNo, (unsigned int *)position, (int)&param);
}

// 00E024E0  FUN_00e024e0  size=327  [callgraph]
void FUN_00e024e0(int target, unsigned int effectNo, unsigned int position, unsigned int rotation)
{
  using namespace EffectResourceManager_p1;
  EffectCallParam param;
  EffectCallEntry *entry;
  char key;
  unsigned int resourceId;

  if (target == 0) {
    resourceId = 0xfff;
  }
  else {
    int object = FUN_00a7c800(target);   // disasm: ECX = target
    if (object == 0) {
      resourceId = 0xfff;
    }
    else {
      resourceId = *(unsigned int *)(object + 0x4b0);
      if (resourceId == 0x7c0000) {
        resourceId = 0;
      }
      else if ((resourceId < 0x10000) || (resourceId + 0xe0000000 < 0x100000)) {
        debugPrint(DAT_0163e20c, resourceId);
      }
    }
  }
  param.field_00 = 0;
  param.count = 0;
  _memset(param.entries, 0, 0x78);
  param.field_F0 = 0xffff;
  param.field_8C = 0;
  param.field_F2 = 0;
  param.field_F4 = 0;
  param.field_F8 = 0;
  param.field_FC = 0;
  FUN_00e00990((int)&param);
  param.count = 0;
  key = (char)0xff;
  FUN_00e03850((int *)&param, (int *)&entry, &key);
  if (entry != &param.entries[param.count]) {
    entry->target = target;
    entry->arg = -1;
  }
  FUN_00e010c0(resourceId, effectNo, (unsigned int *)position, (float *)rotation, (int)&param);
}

// 00E02630  FUN_00e02630  size=311  [callgraph]
void FUN_00e02630(int target, unsigned int effectNo, unsigned int matrix)
{
  using namespace EffectResourceManager_p1;
  EffectCallParam param;
  EffectCallEntry *entry;
  char key;
  unsigned int resourceId;

  if (target == 0) {
    resourceId = 0xfff;
  }
  else {
    int object = FUN_00a7c800(target);   // disasm: ECX = target
    if (object == 0) {
      resourceId = 0xfff;
    }
    else {
      resourceId = *(unsigned int *)(object + 0x4b0);
      if (resourceId == 0x7c0000) {
        resourceId = 0;
      }
      else if ((resourceId < 0x10000) || (resourceId + 0xe0000000 < 0x100000)) {
        debugPrint(DAT_0163e20c, resourceId);
      }
    }
  }
  param.field_00 = 0;
  param.count = 0;
  _memset(param.entries, 0, 0x78);
  param.field_F2 = 0;
  param.field_8C = 0;
  param.field_F0 = 0xffff;
  param.field_F4 = 0;
  param.field_F8 = 0;
  param.field_FC = 0;
  FUN_00e00990((int)&param);
  param.count = 0;
  key = (char)0xff;
  FUN_00e03850((int *)&param, (int *)&entry, &key);
  if (entry != &param.entries[param.count]) {
    entry->target = target;
    entry->arg = -1;
  }
  FUN_00e00b80(resourceId, effectNo, matrix, (int)&param);
}

// 00E02770  FUN_00e02770  size=327  [callgraph]
void FUN_00e02770(int target, unsigned int effectNo, unsigned int position, unsigned int direction)
{
  using namespace EffectResourceManager_p1;
  EffectCallParam param;
  EffectCallEntry *entry;
  char key;
  unsigned int resourceId;

  if (target == 0) {
    resourceId = 0xfff;
  }
  else {
    int object = FUN_00a7c800(target);   // disasm: ECX = target
    if (object == 0) {
      resourceId = 0xfff;
    }
    else {
      resourceId = *(unsigned int *)(object + 0x4b0);
      if (resourceId == 0x7c0000) {
        resourceId = 0;
      }
      else if ((resourceId < 0x10000) || (resourceId + 0xe0000000 < 0x100000)) {
        debugPrint(DAT_0163e20c, resourceId);
      }
    }
  }
  param.field_00 = 0;
  param.count = 0;
  _memset(param.entries, 0, 0x78);
  param.field_F0 = 0xffff;
  param.field_8C = 0;
  param.field_F2 = 0;
  param.field_F4 = 0;
  param.field_F8 = 0;
  param.field_FC = 0;
  FUN_00e00990((int)&param);
  param.count = 0;
  key = (char)0xff;
  FUN_00e03850((int *)&param, (int *)&entry, &key);
  if (entry != &param.entries[param.count]) {
    entry->target = target;
    entry->arg = -1;
  }
  FUN_00e01270(resourceId, effectNo, (unsigned int *)position, (float *)direction, (int)&param);
}

// 00E028C0  FUN_00e028c0  size=266  [callgraph]
// Like FUN_00e02240 with a caller-supplied EffectCallParam (target entry added only if empty).
void FUN_00e028c0(int target, unsigned int effectNo, int callParam)
{
  using namespace EffectResourceManager_p1;
  EffectCallParam *param = (EffectCallParam *)callParam;
  EffectCallEntry *entry;
  char key;
  float matrix[16];
  unsigned int resourceId;

  // disasm: rebuilt from the machine code (the raw output lost the id passed to FUN_00e00b80)
  if (target == 0) {
    resourceId = 0xfff;
  }
  else {
    int object = FUN_00a7c800(target);   // ECX = target
    if (object == 0) {
      resourceId = 0xfff;
    }
    else {
      unsigned int objId = *(unsigned int *)(object + 0x4b0);
      if (objId == 0x7c0000) {
        objId = 0;
      }
      else if ((objId < 0x10000) || (objId + 0xe0000000 < 0x100000)) {
        debugPrint(DAT_0163e20c, objId);
      }
      resourceId = objId;
    }
  }
  if (param->count == 0) {
    param->count = 0;
    key = (char)0xff;
    FUN_00e03850((int *)param, (int *)&entry, &key);
    if (entry != &param->entries[param->count]) {
      entry->target = target;
      entry->arg = -1;
    }
  }
  D3DXMatrixScaling(matrix, param->scale, param->scale, param->scale);
  FUN_00e00b80(resourceId, effectNo, (unsigned int)matrix, callParam);
}

// 00E029D0  FUN_00e029d0  size=183  [callgraph]
void FUN_00e029d0(int target, unsigned int effectNo, unsigned int position, int callParam)
{
  using namespace EffectResourceManager_p1;
  EffectCallParam *param = (EffectCallParam *)callParam;
  EffectCallEntry *entry;
  char key;
  unsigned int resourceId;

  if (target == 0) {
    resourceId = 0xfff;
  }
  else {
    int object = FUN_00a7c800(target);   // disasm: ECX = target
    if (object == 0) {
      resourceId = 0xfff;
    }
    else {
      resourceId = *(unsigned int *)(object + 0x4b0);
      if (resourceId == 0x7c0000) {
        resourceId = 0;
      }
      else if ((resourceId < 0x10000) || (resourceId + 0xe0000000 < 0x100000)) {
        debugPrint(DAT_0163e20c, resourceId);
      }
    }
  }
  if (param->count == 0) {
    param->count = 0;
    key = (char)0xff;
    FUN_00e03850((int *)param, (int *)&entry, &key);
    if (entry != &param->entries[param->count]) {
      entry->target = target;
      entry->arg = -1;
    }
  }
  FUN_00e01020(resourceId, effectNo, (unsigned int *)position, callParam);
}

// 00E02CD0  FUN_00e02cd0  size=19  [callgraph]
// disasm: replaces the owner argument by its +0x4F0 handle and jumps to FUN_00e02240;
// functions.h declares these five wrappers without parameters.
void FUN_00e02cd0(int owner, unsigned int effectNo)
{
  FUN_00e02240(*(int *)(owner + 0x4f0), effectNo);
}

// 00E02CF0  FUN_00e02cf0  size=19  [callgraph]
void FUN_00e02cf0(int owner, unsigned int effectNo, unsigned int position)
{
  FUN_00e023a0(*(int *)(owner + 0x4f0), effectNo, position);
}

// 00E02D10  FUN_00e02d10  size=19  [callgraph]
void FUN_00e02d10(int owner, unsigned int effectNo, unsigned int position, unsigned int rotation)
{
  FUN_00e024e0(*(int *)(owner + 0x4f0), effectNo, position, rotation);
}

// 00E02D50  FUN_00e02d50  size=19  [callgraph]
void FUN_00e02d50(int owner, unsigned int effectNo, int callParam)
{
  FUN_00e028c0(*(int *)(owner + 0x4f0), effectNo, callParam);
}

// 00E02D70  FUN_00e02d70  size=19  [callgraph]
void FUN_00e02d70(int owner, unsigned int effectNo, unsigned int position, int callParam)
{
  FUN_00e029d0(*(int *)(owner + 0x4f0), effectNo, position, callParam);
}

// 00E02DF0  FUN_00e02df0  size=161  [callgraph]
// EffectCallParam::EffectCallParam(field_84, field_88, target)   (__thiscall)
unsigned int * FUN_00e02df0(unsigned int *self, unsigned int value84, unsigned int *value88, unsigned int target)
{
  using namespace EffectResourceManager_p1;
  EffectCallParam *param = (EffectCallParam *)self;
  EffectCallEntry *entry;
  char key;

  param->field_00 = 0;
  param->count = 0;
  _memset(param->entries, 0, 0x78);
  param->field_8C = 0;
  param->field_F0 = 0xffff;
  param->field_F2 = 0;
  param->field_F4 = 0;
  param->field_F8 = 0;
  param->field_FC = 0;
  FUN_00e00990((int)param);
  param->field_84 = value84;
  param->field_88 = (unsigned int)value88;
  param->count = 0;
  key = (char)0xff;
  FUN_00e03850((int *)param, (int *)&entry, &key);
  if (entry != &param->entries[param->count]) {
    entry->target = target;
    entry->arg = -1;
  }
  return self;
}

// 00E02EA0  FUN_00e02ea0  size=171  [callgraph]
// EffectCallParam::EffectCallParam(field_84, field_88, owner)   (__thiscall)
unsigned int * FUN_00e02ea0(unsigned int *self, unsigned int value84, unsigned int *value88, int owner)
{
  using namespace EffectResourceManager_p1;
  EffectCallParam *param = (EffectCallParam *)self;
  EffectCallEntry *entry;
  char key;

  param->field_00 = 0;
  param->count = 0;
  _memset(param->entries, 0, 0x78);
  param->field_8C = 0;
  param->field_F0 = 0xffff;
  param->field_F2 = 0;
  param->field_F4 = 0;
  param->field_F8 = 0;
  param->field_FC = 0;
  FUN_00e00990((int)param);
  param->field_84 = value84;
  param->field_88 = (unsigned int)value88;
  if (owner != 0) {
    int target = *(int *)(owner + 0x4f0);
    param->count = 0;
    key = (char)0xff;
    FUN_00e03850((int *)param, (int *)&entry, &key);
    if (entry != &param->entries[param->count]) {
      entry->target = target;
      entry->arg = -1;
    }
  }
  return self;
}

// 00E02FE0  FUN_00e02fe0  size=153  [callgraph]
// EffectCallParam::EffectCallParam(owner)   (__thiscall)
unsigned int * FUN_00e02fe0(unsigned int *self, int owner)
{
  using namespace EffectResourceManager_p1;
  EffectCallParam *param = (EffectCallParam *)self;
  EffectCallEntry *entry;
  char key;

  param->field_00 = 0;
  param->count = 0;
  _memset(param->entries, 0, 0x78);
  param->field_8C = 0;
  param->field_F0 = 0xffff;
  param->field_F2 = 0;
  param->field_F4 = 0;
  param->field_F8 = 0;
  param->field_FC = 0;
  FUN_00e00990((int)param);
  if (owner != 0) {
    int target = *(int *)(owner + 0x4f0);
    param->count = 0;
    key = (char)0xff;
    FUN_00e03850((int *)param, (int *)&entry, &key);
    if (entry != &param->entries[param->count]) {
      entry->target = target;
      entry->arg = -1;
    }
  }
  return self;
}

// 00F49E10  EffectResourceManager::GetNameFromEventNo  size=533  [class]
void EffectResourceManager::GetNameFromEventNo(char *out, int size, int eventType, unsigned int eventNo)
{
  using namespace EffectResourceManager_p1;
  char last;
  unsigned int no;

  if ((eventType < 0) || (0xf < eventType)) {
    debugPrint(DAT_016e05a4,
               "EffectResourceManager::GetNameFromEventNo: (0 <= event_type) && (event_type <= 0xf)");
  }
  if (((int)eventNo < 0) || (0xffff < (int)eventNo)) {
    debugPrint(DAT_016e05fc,
               "EffectResourceManager::GetNameFromEventNo: (0 <= event_no) && (event_no <= 0xffff)");
  }
  if (eventType == 0) {
    if (size < 6) {
      debugPrint(DAT_016e0654,
                 "EffectResourceManager::GetNameFromEventNo: size >= EFFECT_RESOURCE_NAME_SIZE_EVENT");
    }
    *(unsigned short *)out = 0x5645;   // "EV"
    out[2] = "0123456789abcdef"[eventNo >> 0xc & 0xf];
    out[3] = "0123456789abcdef"[eventNo >> 8 & 0xf];
    out[4] = "0123456789abcdef"[eventNo >> 4 & 0xf];
    out[5] = "0123456789abcdef"[eventNo & 0xf];
    out[6] = 0;
  }
  else {
    if (eventType == 1) {
      if (size < 0xb) {
        debugPrint(DAT_016e06b0,
                   "EffectResourceManager::GetNameFromEventNo: size >= EFFECT_RESOURCE_NAME_SIZE_ROOMEVENT");
      }
      out[0] = 'R';
      no = FUN_00932710();   // current room number
      out[1] = "0123456789abcdef"[no >> 8 & 0xf];
      out[2] = "0123456789abcdef"[no >> 4 & 0xf];
      out[3] = "0123456789abcdef"[no & 0xf];
      *(unsigned short *)(out + 4) = 0x5645;   // "EV"
      out[6] = "0123456789abcdef"[eventNo >> 0xc & 0xf];
      out[7] = "0123456789abcdef"[eventNo >> 8 & 0xf];
      out[8] = "0123456789abcdef"[eventNo >> 4 & 0xf];
      last = "0123456789abcdef"[eventNo & 0xf];
      out[10] = 0;
      out[9] = last;
      return;
    }
    if (eventType == 2) {
      if (size < 0xb) {
        debugPrint(DAT_016e06b4,
                   "EffectResourceManager::GetNameFromEventNo: size >= EFFECT_RESOURCE_NAME_SIZE_PHASEEVENT");
      }
      out[0] = 'P';
      no = FUN_00932720();   // current phase number
      out[1] = "0123456789abcdef"[no >> 8 & 0xf];
      out[2] = "0123456789abcdef"[no >> 4 & 0xf];
      out[3] = "0123456789abcdef"[no & 0xf];
      *(unsigned short *)(out + 4) = 0x5645;   // "EV"
      out[6] = "0123456789abcdef"[eventNo >> 0xc & 0xf];
      out[7] = "0123456789abcdef"[eventNo >> 8 & 0xf];
      out[8] = "0123456789abcdef"[eventNo >> 4 & 0xf];
      last = "0123456789abcdef"[eventNo & 0xf];
      out[10] = 0;
      out[9] = last;
      return;
    }
  }
}

// 00F4A060  FUN_00f4a060  size=146  [between]
// Static initialiser of the three fixed resource slots (slot 2 is "EDIT", id 2).
void FUN_00f4a060(void)
{
  DAT_01ee546c = 0;
  DAT_01ee5470 = 0;
  DAT_01ee5474 = 0;
  DAT_01ee5478 = 0;
  DAT_01ee545c = 0;
  DAT_01ee547c = 0;
  DAT_01ee5480 = 0;
  DAT_01ee54c0 = 0;
  DAT_01ee54c4 = 0;
  DAT_01ee54c8 = 0;
  DAT_01ee54cc = 0;
  DAT_01ee54b0 = 0;
  DAT_01ee54d0 = 0;
  DAT_01ee54d4 = 0;
  DAT_01ee5514 = 0;
  DAT_01ee551c = 0;
  DAT_01ee5520 = 0;
  DAT_01ee5524 = 0;
  DAT_01ee5528 = 0;
  DAT_01ee5518 = 1;
  DAT_01ee5504 = 0x54494445;   // "EDIT"
  DAT_01ee5508 = 0;
  DAT_01ee54e0 = 2;
}

// 00F4A100  EffectResourceManager::CheckGetId  size=371  [class]
int EffectResourceManager::CheckGetId(const char *target, const char *format, int *ids, int maxIndex)
{
  using namespace EffectResourceManager_p1;
  const unsigned char *fmt = (const unsigned char *)format;

  if (target == 0) {
    debugPrint(DAT_016e0884, "[EffectResourceManager::CheckGetId] pTarget != NULL");
  }
  if (format == 0) {
    debugPrint(DAT_016e09c4, "[EffectResourceManager::CheckGetId] pFormat != NULL");
  }
  int pos = -1;
  if (*fmt != 0) {
    int targetOffset = (int)target - (int)fmt;   // target char = fmt[targetOffset]
    unsigned char prev = 0;
    do {
      unsigned char c = fmt[targetOffset];
      unsigned char f = *fmt;
      unsigned int digit;
      const char *assertFormat;
      const char *assertText;
      if (f == '*') {
        digit = (unsigned int)DAT_016cabd0[c];
        if (digit == 0xff) {
          return 0;
        }
        if ((ids != 0) && (pos < maxIndex)) {
          if (prev == '*') {
            if (pos < 0) {
              debugPrint(DAT_016e09f8, "[EffectResourceManager::CheckGetId] posD >= 0");
            }
            ids[pos] = ids[pos] * 0x10 + digit;
          }
          else {
            if (pos + 1 < 0) {
              assertText = "[EffectResourceManager::CheckGetId] posD >= 0";
              assertFormat = DAT_016e0a2c;
report:
              debugPrint(assertFormat, assertText);
            }
storeNew:
            pos = pos + 1;
            ids[pos] = digit;
          }
        }
      }
      else if (f == '+') {
        digit = (unsigned int)DAT_016caad0[c];
        if (digit == 0xff) {
          return 0;
        }
        if ((ids != 0) && (pos < maxIndex)) {
          if (prev != '+') {
            if (pos + 1 < 0) {
              assertText = "[EffectResourceManager::CheckGetId] posD >= 0";
              assertFormat = DAT_016e0a94;
              goto report;
            }
            goto storeNew;
          }
          if (pos < 0) {
            debugPrint(DAT_016e0a60, "[EffectResourceManager::CheckGetId] posD >= 0");
          }
          ids[pos] = digit + ids[pos] * 10;
        }
      }
      else if ((f != '-') && (DAT_016cbe20[f] != DAT_016cbe20[c])) {
        return 0;
      }
      fmt = fmt + 1;
      prev = f;
    } while (*fmt != 0);
  }
  return 1;
}

// 00F4B4E0  EffectResourceManager::OnDestroyResource  size=493  [class]
void EffectResourceManager::OnDestroyResource(unsigned int memoryBegin, unsigned int memorySize)
{
  using namespace EffectResourceManager_p1;

  if (DAT_01ee6550 != 0) {
    enterWrite(&DAT_01ee6530);
    // fixed slots: resource object at slot - 0x3C (use count at +0x3C, name at +0x2C)
    int *slot = &DAT_01ee546c;
    int remaining = 3;
    do {
      if ((0 < *slot) && (*(char *)(slot + -4) != '\0')) {
        char *resource = (char *)(slot + -0xf);
        if (resourceInRange(resource, memoryBegin, memorySize) != 0) {
          debugPrint(DAT_016e0198, slot + -4);   // resource name
          FUN_009e02a0((undefined4)resource);
          *(unsigned short *)(slot + 3) = 0;      // +0x48
          *(char *)(slot + -4) = 0;               // +0x2C name
          *slot = 0;                              // +0x3C
          slot[1] = 0;                            // +0x40
          slot[2] = 0;                            // +0x44
          slot[-0xd] = 0xfff;                     // +0x08 resource id
          resourceRelease(resource);
          FUN_00f4ae70((int)resource);
        }
      }
      slot = slot + 0x15;
      remaining = remaining + -1;
    } while (remaining != 0);

    // dynamically registered resources: node list, node +4 -> resource
    unsigned int *begin = DAT_018d72ac;
    unsigned int *it = DAT_018d72ac;
    if (DAT_018d72ac != DAT_018d72ac + DAT_018d72b4) {
      do {
        unsigned int resource = *(unsigned int *)(*it + 4);
        int inRange;
        if (((*(int *)(resource + 0x3c) < 1) || (*(char *)(resource + 0x2c) == '\0')) ||
            (inRange = resourceInRange((void *)resource, memoryBegin, memorySize), begin = DAT_018d72ac,
             inRange == 0)) {
          it = it + 1;
        }
        else {
          debugPrint(DAT_016e01e8, (char *)(resource + 0x2c));
          FUN_009e02a0(resource);
          *(unsigned short *)(resource + 0x48) = 0;
          *(char *)(resource + 0x2c) = 0;
          *(int *)(resource + 0x3c) = 0;
          *(int *)(resource + 0x40) = 0;
          *(int *)(resource + 0x44) = 0;
          *(int *)(resource + 8) = 0xfff;
          resourceRelease((void *)resource);
          FUN_00f4ae70(resource);
          if (((DAT_018d72d8 != 0) && (DAT_018d72d8 <= resource)) &&
              (resource < DAT_018d72dc * 0x58 + DAT_018d72d8)) {
            resourceDetach((void *)resource);
            FUN_00f4c880((int *)&DAT_018d72c8, resource);   // return to the resource pool
          }
          unsigned int node = *it;
          if (node != 0) {
            if (((DAT_018d7298 != 0) && (DAT_018d7298 <= node)) &&
                (node < DAT_018d7298 + DAT_018d729c * 0xc)) {
              FUN_00f4ca90((int *)&DAT_018d7288, node);     // return to the node pool
            }
            *it = 0;
          }
          int index = ((int)it - (int)DAT_018d72ac) >> 2;
          int i = index;
          if (index < DAT_018d72b4 + -1) {
            do {
              DAT_018d72ac[i] = DAT_018d72ac[i + 1];
              i = i + 1;
            } while (i < DAT_018d72b4 + -1);
          }
          DAT_018d72b4 = DAT_018d72b4 + -1;
          it = DAT_018d72ac + index;
          begin = DAT_018d72ac;
        }
      } while (it != begin + DAT_018d72b4);
    }
    FUN_00eaac50((longlong *)&DAT_01ee6530);   // leave the write lock
    return;
  }
}

// 00F4B6D0  FUN_00f4b6d0  size=331  [callgraph]
// Look up resource `resourceId` and its file "NNN.sst"/"NNN.est" for `number`, reporting
// missing ones. disasm: returns 1/0 in EAX; declared void in functions.h.
void FUN_00f4b6d0(int *outFile, int *outResource, unsigned int resourceId, int number)
{
  using namespace EffectResourceManager_p1;
  char fileName[8];
  char resourceName[64];

  FUN_009df6d0((ulonglong *)&DAT_01ee6530);   // disasm: ECX = registry lock
  int resource = (int)FUN_00f4b0b0(resourceId);
  *outResource = resource;
  if (resource == 0) {
    nameFromId(resourceName, 0x40, resourceId, 0);   // disasm: 4 arguments
    espPrint(DAT_016e0758, resourceName, number);
    FUN_009df740((longlong *)&DAT_01ee6530);
    return;
  }
  unsigned long long quotRem = crtDiv(number, 1000);
  *(unsigned int *)fileName = DAT_016cacf0[(int)(quotRem >> 0x20)];
  *(unsigned int *)(fileName + 4) = DAT_016d4768[(int)quotRem];
  fileName[3] = '.';
  int file = FUN_00de3d80((int *)resource, 0, fileName);   // disasm: ECX = resource
  *outFile = file;
  if (file == 0) {
    int shownNumber = number + -1000;
    if (999 < number - 1000U) {
      shownNumber = number;
    }
    char *kind = DAT_016e07a0;   // "SST"
    if (999 < number - 1000U) {
      kind = DAT_016e07a4;       // "EST"
    }
    espPrint(DAT_016e0820, *outResource + 0x2c, shownNumber, kind);
    FUN_009df740((longlong *)&DAT_01ee6530);
    return;
  }
  FUN_009df740((longlong *)&DAT_01ee6530);
}

// 00F4B820  FUN_00f4b820  size=54  [callgraph]
void FUN_00f4b820(unsigned int resourceId)
{
  using namespace EffectResourceManager_p1;

  if (DAT_01ee6550 != 0) {
    enterWrite(&DAT_01ee6530);
    int resource = (int)FUN_00f4b0b0(resourceId);
    if (resource != 0) {
      FUN_00f4a450(resource);   // disasm: ECX = resource
    }
    FUN_00eaac50((longlong *)&DAT_01ee6530);
    return;
  }
}

// strings in .rdata
extern char DAT_016e0270[];          // "%s" (assertion format)
extern char DAT_016e02a8[];          // SetEffectResource: eff data mismatch for "%s"
extern char DAT_016e0310[];          // SetEffectResource: eff data mismatch (no name)
extern char DAT_016e0378[];          // SetEffectResource: eft data mismatch for "%s"
extern char DAT_016e03e0[];          // SetEffectResource: eft data mismatch (no name)
extern char DAT_016e0448[];          // SetEffectResource: resource pool exhausted
extern char DAT_016e0498[];          // SetEffectResource: resource initialisation failed
extern char DAT_016e015c[];          // file extension of the common eff data
extern char DAT_016e0160[];          // file extension of the common eft data
extern char DAT_016e0164[];          // name of the common resource (id 0)

// effect resource registry state (.data)
extern int DAT_01ee6550;             // registry initialised flag
extern unsigned char DAT_01ee6530;   // EspReadWriteLock guarding the registry
extern int DAT_01885e50[];           // resource id remap table: {from, to} pairs, ends with from == -1
extern unsigned char DAT_018d7280;   // registered resource map (id -> resource); data at +0x2C, count at +0x34
extern unsigned char DAT_018d72c0;   // resource free list (0x58-byte elements, base at +0x18)

namespace EffectResourceManager_p2 {

// Callees whose include/auto declaration does not fit the call (lost `this` / return value, varargs,
// or undeclared class member); called through their address with the argument list of the machine code.
typedef void (__cdecl *DebugPrintFn)(const void *format, ...);                   // FUN_00dd5650 (empty in release)
typedef void (__thiscall *LockFn)(void *lock);                                    // EspReadWriteLock::enterWrite
typedef void (__fastcall *ResourceFn)(int resource);                              // cEffectData::useCounterDown
typedef int (__cdecl *SetFixedResourceFn)(int resourceId, const char *name, int effData, int eftData); // FUN_00f4be20
typedef int (__thiscall *ResourceInitFn)(int resource, int resourceId, const char *name,
                                         int effData, int eftData);             // Fw::StringCopy (folded name)
typedef int (__thiscall *FreeListFreeFn)(void *freeList, int element);            // FUN_00f4cf80
typedef int (__thiscall *MapInsertFn)(void *map, int *key, int *value);           // FUN_00f4e660
typedef int (__thiscall *ArchiveFindFn)(int *archive, int kind, const char *ext, int flags);  // FUN_00de3d30

static const DebugPrintFn debugPrint = (DebugPrintFn)0x00DD5650;
static const LockFn enterWrite = (LockFn)0x00EAABC0;
static const ResourceFn useCounterDown = (ResourceFn)0x00F4A4A0;
static const SetFixedResourceFn setFixedResource = (SetFixedResourceFn)0x00F4BE20;
static const ResourceInitFn resourceInit = (ResourceInitFn)0x00F4B9A0;
static const FreeListFreeFn freeListFree = (FreeListFreeFn)0x00F4CF80;
static const MapInsertFn mapInsert = (MapInsertFn)0x00F4E660;
static const ArchiveFindFn archiveFind = (ArchiveFindFn)0x00DE3D30;

} // namespace EffectResourceManager_p2

// 00F4B860  FUN_00f4b860  size=54  [callgraph]
// Drops one use of resource `resourceId` (cEffectData::useCounterDown).
void FUN_00f4b860(undefined4 resourceId)
{
  using namespace EffectResourceManager_p2;

  if (DAT_01ee6550 != 0) {
    enterWrite(&DAT_01ee6530);
    int resource = (int)FUN_00f4b0b0(resourceId);
    if (resource != 0) {
      useCounterDown(resource);   // disasm: ECX = resource
    }
    FUN_00eaac50((longlong *)&DAT_01ee6530);   // leave the write lock
    return;
  }
}

// 00F4C130  EffectResourceManager::SetEffectResource  size=538  [class]
int EffectResourceManager::SetEffectResource(int resourceId, const char *name, int effData, int eftData)
{
  using namespace EffectResourceManager_p2;

  if (effData == 0) {
    debugPrint(DAT_016e0270, "EffectResourceManager::SetEffectResource: pData != NULL");
  }
  if (DAT_01ee6550 == 0) {
    return 0;
  }

  // remap the id through the {from, to} table
  int *entry = DAT_01885e50;
  int from = DAT_01885e50[0];
  while (from != -1) {
    if (resourceId == from) {
      resourceId = entry[1];
      break;
    }
    entry = entry + 2;
    from = *entry;
  }
  if (resourceId == 0xffe) {
    return 0;
  }

  if (resourceId < 4) {
    // fixed resource slots
    enterWrite(&DAT_01ee6530);
    int result = setFixedResource(resourceId, name, effData, eftData);   // disasm: returns in EAX
    FUN_00eaac50((longlong *)&DAT_01ee6530);
    return result;
  }

  enterWrite(&DAT_01ee6530);
  int resource = (int)FUN_00f4b0b0(resourceId);
  if (resource == 0) {
    FUN_00eaac50((longlong *)&DAT_01ee6530);
    int newResource = FUN_00f4a970();
    if (newResource == 0) {
      debugPrint(DAT_016e0448);
      return 0;
    }
    *(int *)(newResource + 0x44) = 0;
    *(int *)(newResource + 0x3c) = 0;              // use count
    *(int *)(newResource + 0x40) = 0;
    *(unsigned short *)(newResource + 0x48) = 0;
    *(char *)(newResource + 0x2c) = 0;             // name
    *(int *)(newResource + 0x4c) = 0;
    *(int *)(newResource + 0x50) = 0;
    if (resourceInit(newResource, resourceId, name, effData, eftData) == 0) {   // disasm: ECX = new resource
      freeListFree(&DAT_018d72c0, newResource);   // disasm: ECX = resource free list
      debugPrint(DAT_016e0498);
      return 0;
    }
    enterWrite(&DAT_01ee6530);
    mapInsert(&DAT_018d7280, &resourceId, &newResource);   // disasm: ECX = resource map
    FUN_00eaac50((longlong *)&DAT_01ee6530);
    return 1;
  }

  // already registered: the data must match
  if (effData != (int)FUN_00de3560((undefined4 *)resource)) {   // disasm: ECX = resource (+0x0 eff data)
    if (name != 0) {
      debugPrint(DAT_016e02a8, name);
      FUN_00eaac50((longlong *)&DAT_01ee6530);
      return 0;
    }
    debugPrint(DAT_016e0310);
    FUN_00eaac50((longlong *)&DAT_01ee6530);
    return 0;
  }
  if (eftData == (int)FUN_00de3550(resource)) {   // disasm: ECX = resource (+0x4 eft data)
    *(int *)(resource + 0x3c) = *(int *)(resource + 0x3c) + 1;
    FUN_00eaac50((longlong *)&DAT_01ee6530);
    return 1;
  }
  if (name != 0) {
    debugPrint(DAT_016e0378, name);
    FUN_00eaac50((longlong *)&DAT_01ee6530);
    return 0;
  }
  debugPrint(DAT_016e03e0);
  FUN_00eaac50((longlong *)&DAT_01ee6530);
  return 0;
}

// 00F4C350  FUN_00f4c350  size=69  [callgraph]
// Registers the common effect data of `archive` as resource 0.
// disasm: takes the archive as a stack argument (ECX of FUN_00de3d30); functions.h declares
// `undefined4 FUN_00f4c350(void)`.
int FUN_00f4c350(int *archive)
{
  using namespace EffectResourceManager_p2;

  int effData = archiveFind(archive, 0, DAT_016e015c, 0);
  int eftData = archiveFind(archive, 1, DAT_016e0160, 0);
  if (effData != 0) {
    EffectResourceManager::SetEffectResource(0, DAT_016e0164, effData, eftData);
  }
  return 1;
}

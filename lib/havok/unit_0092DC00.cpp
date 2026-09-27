// lib/havok/unit_0092DC00.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0092DC00..0092E020, 12 functions

#include "mgrr.h"
#include "HkRemoveContainer.h"
#include "HkRemoveEntityBatch.h"
#include "HkRemoveManager.h"
#include "HkRemoveManagerImplement.h"
#include "HkRemoveRagdoll.h"

// 0092DC00  HkRemoveManagerImplement::vf04  size=21  [run]
void HkRemoveManagerImplement::vf04(undefined4 param_1)

{
  FUN_0092dac0(0x800,param_1);
  return;
}

// 0092DD20  HkRemoveEntityBatch::vf08  size=28  [run]
void __fastcall HkRemoveEntityBatch::vf08(int param_1)

{
  FUN_01195a20(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

// 0092DD40  HkRemoveEntityBatch::vf28  size=3  [run]
undefined4 __fastcall HkRemoveEntityBatch::vf28(undefined4 param_1)

{
  return param_1;
}

// 0092DD50  HkRemoveEntityBatch::vf24  size=3  [run]
undefined4 __fastcall HkRemoveEntityBatch::vf24(undefined4 param_1)

{
  return param_1;
}

// 0092DD60  HkRemoveEntityBatch::vf00  size=31  [run]
undefined4 * __thiscall HkRemoveEntityBatch::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = HkRemoveContainer::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 0092DDC0  HkRemoveRagdoll::vf30  size=3  [run]
undefined4 __fastcall HkRemoveRagdoll::vf30(undefined4 param_1)

{
  return param_1;
}

// 0092DDD0  HkRemoveRagdoll::vf2C  size=3  [run]
undefined4 __fastcall HkRemoveRagdoll::vf2C(undefined4 param_1)

{
  return param_1;
}

// 0092DDE0  HkRemoveRagdoll::vf00  size=31  [run]
undefined4 * __thiscall HkRemoveRagdoll::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = HkRemoveContainer::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 0092DE00  HkRemoveManagerImplement::vf08  size=43  [run]
void __fastcall HkRemoveManagerImplement::vf08(int param_1)

{
  if (*(int *)(param_1 + 0x54) != 0) {
    *(undefined4 *)(param_1 + 0x5c) = 0;
    if (*(int *)(param_1 + 0x60) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x54),0);
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  return;
}

// 0092DEB0  HkRemoveContainer::HkRemoveContainer_6  size=67  [run]
undefined4 * HkRemoveContainer::HkRemoveContainer_6(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x10,&DAT_01b7c218);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = vftable;
    puVar1[1] = *(undefined4 *)(param_1 + 4);
    *puVar1 = HkRemoveEntityBatch::vftable;
    puVar1[1] = *(undefined4 *)(param_1 + 4);
    puVar1[2] = *(undefined4 *)(param_1 + 8);
    puVar1[3] = *(undefined4 *)(param_1 + 0xc);
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 0092DFC0  HkRemoveManager::HkRemoveManager  size=81  [run]
void __fastcall HkRemoveManager::HkRemoveManager(undefined4 *param_1)

{
  *param_1 = HkRemoveManagerImplement::vftable;
  FUN_00dd7340();
  if (param_1[0x15] != 0) {
    param_1[0x17] = 0;
    if (param_1[0x18] != 0) {
      FUN_00dd48d0(param_1[0x15],0);
      param_1[0x18] = 0;
    }
    param_1[0x15] = 0;
    param_1[0x16] = 0;
  }
  FUN_00dd7270();
  FUN_00dd7270();
  *param_1 = vftable;
  return;
}

// 0092E020  HkRemoveManagerImplement::vf00  size=101  [run]
undefined4 * __thiscall HkRemoveManagerImplement::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  FUN_00dd7340();
  if (param_1[0x15] != 0) {
    param_1[0x17] = 0;
    if (param_1[0x18] != 0) {
      FUN_00dd48d0(param_1[0x15],0);
      param_1[0x18] = 0;
    }
    param_1[0x15] = 0;
    param_1[0x16] = 0;
  }
  FUN_00dd7270();
  FUN_00dd7270();
  *param_1 = HkRemoveManager::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}


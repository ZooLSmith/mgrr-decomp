// src/unsorted/unit_00932780.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00932780..00932D70, 18 functions

#include "types.h"

// 00932780  FUN_00932780  size=31  [run]
undefined4 FUN_00932780(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00a30800(param_1,param_2,param_3);
  return 1;
}

// 009327A0  FUN_009327a0  size=36  [run]
undefined4 FUN_009327a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00a308f0(param_1,param_2,param_3,param_4);
  return 1;
}

// 009327D0  FUN_009327d0  size=62  [run]
void FUN_009327d0(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 != 1) {
    uVar1 = FUN_009f9d60(param_2,param_1 + 1,0);
    *param_1 = uVar1;
    return;
  }
  uVar1 = FUN_009f9d60(param_2,param_1 + 1,1);
  *param_1 = uVar1;
  return;
}

// 00932810  FUN_00932810  size=1  [run]
void FUN_00932810(void)

{
  return;
}

// 00932820  FUN_00932820  size=1  [run]
void FUN_00932820(void)

{
  return;
}

// 00932850  FUN_00932850  size=3  [run]
undefined4 FUN_00932850(void)

{
  return 0;
}

// 00932860  FUN_00932860  size=3  [run]
undefined4 FUN_00932860(void)

{
  return 0;
}

// 00932870  FUN_00932870  size=1  [run]
void FUN_00932870(void)

{
  return;
}

// 00932BB0  FUN_00932bb0  size=3  [run]
undefined4 FUN_00932bb0(void)

{
  return 0;
}

// 00932C20  FUN_00932c20  size=6  [run]
undefined4 FUN_00932c20(void)

{
  return 1;
}

// 00932C30  FUN_00932c30  size=6  [run]
undefined4 FUN_00932c30(void)

{
  return 1;
}

// 00932C40  FUN_00932c40  size=3  [run]
undefined4 FUN_00932c40(void)

{
  return 0;
}

// 00932C50  FUN_00932c50  size=86  [run]
undefined4 FUN_00932c50(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00fdbbd0(param_1,"BGM_DLC2.bnk");
  if (iVar1 == 0) {
    iVar1 = FUN_00fdbbd0(param_1,"BGM_DLC3.bnk");
    if (iVar1 == 0) {
      iVar1 = FUN_00fdbbd0(param_1,"InitDLC2.bnk");
      if (iVar1 == 0) {
        iVar1 = FUN_00fdbbd0(param_1,"InitDLC3.bnk");
        if (iVar1 == 0) {
          return 0;
        }
      }
    }
  }
  return 1;
}

// 00932CB0  FUN_00932cb0  size=6  [run]
char * FUN_00932cb0(void)

{
  return "sound/InitDLC3.bnk";
}

// 00932CC0  FUN_00932cc0  size=28  [run]
void FUN_00932cc0(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_00c209f0();
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)FUN_00c209f0();
    (**(code **)*puVar2)(param_1);
  }
  return;
}

// 00932CE0  FUN_00932ce0  size=75  [run]
/* WARNING: Removing unreachable block (ram,0x00932d16) */

undefined4 FUN_00932ce0(char *param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  
  uVar2 = AK::SoundEngine::GetIDFromString(param_1);
  uVar1 = DAT_01b35ff0;
  LOCK();
  DAT_01b35ff0 = uVar2;
  UNLOCK();
  return uVar1;
}

// 00932D30  FUN_00932d30  size=59  [run]
/* WARNING: Removing unreachable block (ram,0x00932d56) */

undefined4 FUN_00932d30(void)

{
  undefined4 uVar1;
  
  uVar1 = DAT_01b35ff0;
  LOCK();
  DAT_01b35ff0 = 0;
  UNLOCK();
  return uVar1;
}

// 00932D70  FUN_00932d70  size=90  [run]
/* WARNING: Removing unreachable block (ram,0x00932d99) */

undefined4 FUN_00932d70(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  iVar1 = DAT_01b35ff0;
  LOCK();
  DAT_01b35ff0 = 0;
  UNLOCK();
  uVar4 = 0;
  if (iVar1 != 0) {
    iVar2 = FUN_00c209f0();
    uVar4 = 0;
    if (iVar2 != 0) {
      puVar3 = (undefined4 *)FUN_00c209f0();
      uVar4 = (**(code **)*puVar3)(iVar1);
    }
  }
  return uVar4;
}


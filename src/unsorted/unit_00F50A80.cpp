// src/unsorted/unit_00F50A80.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F50A80..00F510B0, 5 functions

#include "mgrr.h"

// 00F50A80  FUN_00f50a80  size=634  [run]
void FUN_00f50a80(undefined4 param_1,int param_2,float param_3,undefined4 param_4)

{
  undefined4 uVar1;
  float fVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  float10 fVar9;
  float local_1c;
  undefined2 *local_18;
  float local_14 [4];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_1c;
  uVar6 = 0;
  local_18 = (undefined2 *)(param_2 + 4);
  do {
    iVar7 = 0;
    do {
      if ((uVar6 & 3) < 3) {
        uVar1 = 0xbf800000;
      }
      else {
        uVar1 = 0;
      }
      fVar9 = (float10)FUN_00dde300(uVar1,0x3f800000);
      local_14[iVar7] = (float)fVar9;
      iVar7 = iVar7 + 1;
    } while (iVar7 < 4);
    uVar5 = uVar6 & 3;
    if ((uVar5 == 0) || (uVar5 == 1)) {
      uVar8 = 0;
      local_1c = local_14[2] * local_14[2] + local_14[0] * local_14[0] + local_14[1] * local_14[1];
      fVar9 = (float10)FUN_00fdef70();
      while (local_1c = (float)fVar9, 1.0 < local_1c) {
        fVar9 = (float10)FUN_00dde300(0xbf800000,0x3f800000);
        local_14[0] = (float)fVar9;
        fVar9 = (float10)FUN_00dde300(0xbf800000,0x3f800000);
        local_14[1] = (float)fVar9;
        fVar9 = (float10)FUN_00dde300(0xbf800000,0x3f800000);
        local_14[2] = (float)fVar9;
        uVar8 = uVar8 + 1;
        if (10 < uVar8) {
          FUN_00dd5650(&DAT_016e1440);
          local_1c = local_14[2] * local_14[2] +
                     local_14[0] * local_14[0] + local_14[1] * local_14[1];
          fVar9 = (float10)FUN_00fdef70();
          local_1c = 1.0 / (float)fVar9;
          FUN_00dde300(0,0x3f800000);
          local_14[0] = local_1c * local_14[0];
          local_14[1] = local_1c * local_14[1];
          local_14[2] = local_1c * local_14[2];
          break;
        }
        local_1c = local_14[2] * local_14[2] + local_14[0] * local_14[0] + local_14[1] * local_14[1]
        ;
        fVar9 = (float10)FUN_00fdef70();
      }
    }
    uVar4 = FUN_00f95d30(local_14[0]);
    puVar3 = local_18;
    local_18[-2] = uVar4;
    uVar4 = FUN_00f95d30(local_14[1]);
    puVar3[-1] = uVar4;
    uVar4 = FUN_00f95d30(local_14[2]);
    *puVar3 = uVar4;
    if (uVar5 == 0) {
      uVar4 = FUN_00f95d30(param_4);
      puVar3[1] = uVar4;
      local_18 = puVar3;
    }
    else {
      fVar2 = local_14[3];
      if (uVar5 == 3) {
        local_1c = local_14[3] + param_3;
        fVar2 = local_1c;
      }
      uVar4 = FUN_00f95d30(fVar2);
      puVar3[1] = uVar4;
    }
    uVar6 = uVar6 + 1;
    local_18 = local_18 + 4;
    if (3 < (int)uVar6) {
      __security_check_cookie(local_4 ^ (uint)&local_1c);
      return;
    }
  } while( true );
}

// 00F50D80  FUN_00f50d80  size=254  [run]
void FUN_00f50d80(float param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar1 = param_1;
  FUN_00ddbbb0();
  uVar2 = FUN_00ddbbe0();
  FUN_00ddbbd0(uVar2);
  uVar3 = 0;
  do {
    uVar2 = FUN_00ddbbe0();
    FUN_00ddbbd0(uVar2);
    param_1 = (float)(int)uVar3;
    if ((int)uVar3 < 0) {
      param_1 = param_1 + 4.2949673e+09;
    }
    param_1 = param_1 / 3.0;
    if (0.999 < param_1) {
      param_1 = 0.999;
    }
    FUN_00ddbbb0();
    uVar2 = FUN_00ddbbe0();
    FUN_00ddbbd0(uVar2);
    FUN_00f50a80(uVar1,param_2,0,param_1);
    uVar2 = FUN_00ddbbe0();
    FUN_00ddbbd0(uVar2);
    FUN_00f50a80(uVar1,param_2 + 0x20,0x3f800000,param_1);
    FUN_00ddbbc0();
    uVar3 = uVar3 + 1;
    param_2 = param_2 + 0x40;
  } while (uVar3 < 4);
  FUN_00ddbbc0();
  return;
}

// 00F51000  FUN_00f51000  size=75  [run]
void FUN_00f51000(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x11);
  if ((0x4e < bVar1) && (bVar1 < 0x60)) {
    (**(code **)(*(int *)(&DAT_01ee6580)[*(int *)(&DAT_016e151c + (uint)bVar1 * 4)] + 0xc))(param_1)
    ;
    return;
  }
  if (*(int *)(&DAT_016e1600 + (uint)*(byte *)(param_1 + 0x13) * 4) != 0x10) {
    (**(code **)(*(int *)(&DAT_01ee6580)
                         [*(int *)(&DAT_016e1600 + (uint)*(byte *)(param_1 + 0x13) * 4)] + 0xc))
              (param_1);
  }
  return;
}

// 00F51070  FUN_00f51070  size=59  [run]
bool FUN_00f51070(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  FUN_00fa45a0();
  iVar1 = FUN_00f9cae0(param_2,param_3,&DAT_01ee65fc + DAT_01ee65c0 * 0x1c);
  return iVar1 != 0;
}

// 00F510B0  FUN_00f510b0  size=79  [run]
void FUN_00f510b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  FUN_00fa45a0();
  iVar1 = FUN_00f9cae0(param_2,param_3,&DAT_01ee65fc + DAT_01ee65c0 * 0x1c);
  if (iVar1 == 0) {
    return;
  }
  FUN_00f99d50(param_4,param_2,param_3);
  return;
}


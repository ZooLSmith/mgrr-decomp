// src/unsorted/unit_00F3E9E0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F3E9E0..00F3EF70, 7 functions

#include "mgrr.h"

// 00F3E9E0  FUN_00f3e9e0  size=92  [run]
void __thiscall FUN_00f3e9e0(int *param_1,int param_2)

{
  *param_1 = param_2;
  param_1[4] = *(int *)(param_2 + 400);
  param_1[5] = *(int *)(param_2 + 0x194);
  param_1[6] = *(int *)(param_2 + 0x198);
  param_1[7] = *(int *)(param_2 + 0x19c);
  param_1[8] = *(int *)(param_2 + 0x1b0);
  param_1[9] = *(int *)(param_2 + 0x1b4);
  param_1[10] = *(int *)(param_2 + 0x1b8);
  param_1[0xb] = *(int *)(param_2 + 0x1bc);
  param_1[0xc] = *(int *)(param_2 + 0x25c);
  return;
}

// 00F3EA40  FUN_00f3ea40  size=88  [run]
void __fastcall FUN_00f3ea40(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *(int *)(iVar1 + 400) = param_1[4];
  *(int *)(iVar1 + 0x194) = param_1[5];
  *(int *)(iVar1 + 0x198) = param_1[6];
  *(int *)(iVar1 + 0x19c) = param_1[7];
  iVar1 = *param_1;
  *(int *)(iVar1 + 0x1b0) = param_1[8];
  *(int *)(iVar1 + 0x1b4) = param_1[9];
  *(int *)(iVar1 + 0x1b8) = param_1[10];
  *(int *)(iVar1 + 0x1bc) = param_1[0xb];
  *(int *)(*param_1 + 0x25c) = param_1[0xc];
  return;
}

// 00F3EAA0  FUN_00f3eaa0  size=205  [run]
void __thiscall FUN_00f3eaa0(int *param_1,int param_2)

{
  *param_1 = param_2;
  param_1[4] = *(int *)(param_2 + 400);
  param_1[5] = *(int *)(param_2 + 0x194);
  param_1[6] = *(int *)(param_2 + 0x198);
  param_1[7] = *(int *)(param_2 + 0x19c);
  param_1[8] = *(int *)(param_2 + 0x1c0);
  param_1[9] = *(int *)(param_2 + 0x1c4);
  param_1[10] = *(int *)(param_2 + 0x1c8);
  param_1[0xb] = *(int *)(param_2 + 0x1cc);
  param_1[0xc] = *(int *)(param_2 + 0x250);
  param_1[0xd] = *(int *)(param_2 + 0x254);
  param_1[0xe] = *(int *)(param_2 + 600);
  param_1[0xf] = *(int *)(param_2 + 0x25c);
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x440);
  *(undefined2 *)((int)param_1 + 0x42) = *(undefined2 *)(param_2 + 0x432);
  param_1[0x11] = *(int *)(param_2 + 0x100);
  param_1[0x12] = *(int *)(param_2 + 0x104);
  param_1[0x13] = *(int *)(param_2 + 0x108);
  param_1[0x14] = *(uint *)(param_2 + 0x30) >> 8 & 1;
  param_1[0x15] = *(uint *)(param_2 + 0x30) >> 9 & 1;
  *(undefined2 *)(param_1 + 0x16) = *(undefined2 *)(param_2 + 0x4e);
  param_1[0x17] = *(int *)(param_2 + 0x420);
  return;
}

// 00F3EB70  FUN_00f3eb70  size=241  [run]
void __fastcall FUN_00f3eb70(int *param_1)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = *param_1;
  *(int *)(iVar2 + 0x250) = param_1[0xc];
  *(int *)(iVar2 + 0x254) = param_1[0xd];
  *(int *)(iVar2 + 600) = param_1[0xe];
  *(int *)(iVar2 + 0x25c) = param_1[0xf];
  *(char *)(*param_1 + 0x440) = (char)param_1[0x10];
  *(undefined2 *)(*param_1 + 0x432) = *(undefined2 *)((int)param_1 + 0x42);
  *(int *)(*param_1 + 0x100) = param_1[0x11];
  *(int *)(*param_1 + 0x104) = param_1[0x12];
  *(int *)(*param_1 + 0x108) = param_1[0x13];
  if (param_1[0x14] == 0) {
    puVar1 = (uint *)(*param_1 + 0x30);
    *puVar1 = *puVar1 & 0xfffffeff;
  }
  else {
    puVar1 = (uint *)(*param_1 + 0x30);
    *puVar1 = *puVar1 | 0x100;
  }
  if (param_1[0x15] == 0) {
    puVar1 = (uint *)(*param_1 + 0x30);
    *puVar1 = *puVar1 & 0xfffffdff;
  }
  else {
    puVar1 = (uint *)(*param_1 + 0x30);
    *puVar1 = *puVar1 | 0x200;
  }
  iVar2 = *param_1;
  *(int *)(iVar2 + 400) = param_1[4];
  *(int *)(iVar2 + 0x194) = param_1[5];
  *(int *)(iVar2 + 0x198) = param_1[6];
  *(int *)(iVar2 + 0x19c) = param_1[7];
  iVar2 = *param_1;
  *(int *)(iVar2 + 0x1c0) = param_1[8];
  *(int *)(iVar2 + 0x1c4) = param_1[9];
  *(int *)(iVar2 + 0x1c8) = param_1[10];
  *(int *)(iVar2 + 0x1cc) = param_1[0xb];
  *(short *)(*param_1 + 0x4e) = (short)param_1[0x16];
  *(int *)(*param_1 + 0x420) = param_1[0x17];
  return;
}

// 00F3EC70  FUN_00f3ec70  size=100  [run]
float * __thiscall FUN_00f3ec70(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (*param_2 < 0.0) {
    fVar1 = *(float *)(param_1 + 400) - *param_3;
    fVar2 = *(float *)(param_1 + 0x194) - param_3[1];
    fVar3 = *(float *)(param_1 + 0x198) - param_3[2];
    *param_2 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
  }
  return param_2;
}

// 00F3ED30  FUN_00f3ed30  size=563  [run]
undefined4 __thiscall FUN_00f3ed30(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined4 *puVar5;
  float10 fVar6;
  undefined1 local_44 [4];
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  local_3c = param_1 + 4;
  iVar2 = FUN_00f9cae0(8,param_3,param_4);
  if (iVar2 != 0) {
    local_34 = param_1 + 0x2c;
    iVar2 = FUN_00f9cae0(8,param_3,param_4);
    if (iVar2 != 0) {
      iVar2 = FUN_00f99ca0();
      local_38 = iVar2;
      local_40 = FUN_00f99ca0();
      FUN_00ddbbb0();
      FUN_00ddbbd0(0xdeedbeef);
      if (0 < param_3) {
        puVar3 = (undefined2 *)(local_40 + 6);
        puVar4 = (undefined2 *)(iVar2 + 4);
        puVar5 = (undefined4 *)(param_2 + 8);
        local_38 = local_40 - local_38;
        local_40 = param_3;
        do {
          local_30 = puVar5[-2];
          local_2c = puVar5[-1];
          local_28 = *puVar5;
          fVar6 = (float10)FUN_00dde300(0,0x3f800000);
          local_24 = (float)fVar6;
          FUN_00f4fec0(&local_30,local_44);
          uVar1 = FUN_00f95d30(local_30);
          puVar4[-2] = uVar1;
          uVar1 = FUN_00f95d30(local_2c);
          puVar4[-1] = uVar1;
          uVar1 = FUN_00f95d30(local_28);
          *puVar4 = uVar1;
          uVar1 = FUN_00f95d30(local_24);
          puVar4[1] = uVar1;
          fVar6 = (float10)FUN_00dde300(0xbf800000,0x3f800000);
          local_20 = (float)fVar6;
          fVar6 = (float10)FUN_00dde300(0xbf800000,0x3f800000);
          local_1c = (float)fVar6;
          fVar6 = (float10)FUN_00dde300(0xbf800000,0x3f800000);
          local_18 = (float)fVar6;
          fVar6 = (float10)FUN_00dde300(0,0x3f800000);
          local_14 = (float)fVar6;
          FUN_00f4fec0(&local_20,local_44);
          uVar1 = FUN_00f95d30(local_20);
          puVar3[-3] = uVar1;
          uVar1 = FUN_00f95d30(local_1c);
          puVar3[-2] = uVar1;
          uVar1 = FUN_00f95d30(local_18);
          *(undefined2 *)(local_38 + (int)puVar4) = uVar1;
          uVar1 = FUN_00f95d30(local_14);
          *puVar3 = uVar1;
          puVar5 = puVar5 + 3;
          puVar4 = puVar4 + 4;
          puVar3 = puVar3 + 4;
          local_40 = local_40 + -1;
        } while (local_40 != 0);
        local_40 = 0;
      }
      FUN_00ddbbc0();
      FUN_00f99d30();
      FUN_00f99d30();
      return 1;
    }
  }
  return 0;
}

// 00F3EF70  FUN_00f3ef70  size=85  [run]
void __thiscall FUN_00f3ef70(int *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  
  iVar4 = *param_1;
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *(float *)(iVar4 + 0x70) = *(float *)(iVar4 + 0x70) + *param_2;
  *(float *)(iVar4 + 0x74) = *(float *)(iVar4 + 0x74) + fVar1;
  *(float *)(iVar4 + 0x78) = *(float *)(iVar4 + 0x78) + fVar2;
  *(float *)(iVar4 + 0x7c) = *(float *)(iVar4 + 0x7c) + fVar3;
  return;
}


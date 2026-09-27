// src/unsorted/unit_00538690.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00538690..00538A90, 3 functions

#include "types.h"

// 00538690  FUN_00538690  size=359  [run]
void __thiscall
FUN_00538690(int param_1,undefined4 *param_2,float *param_3,undefined4 param_4,int param_5,
            undefined4 param_6)

{
  int iVar1;
  undefined4 *puVar2;
  float10 fVar3;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  undefined1 local_160 [348];
  
  FUN_00a7c950();
  *(ushort *)(param_1 + 0xa2) = *(ushort *)(param_1 + 0xa2) | 4;
  *(undefined4 *)(param_1 + 0x1204) = param_6;
  puVar2 = (undefined4 *)(param_1 + 0x10);
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x4c);
  *(float *)(param_1 + 0x1220) = *param_3;
  *(float *)(param_1 + 0x1224) = param_3[1];
  *(float *)(param_1 + 0x1228) = param_3[2];
  *(float *)(param_1 + 0x122c) = param_3[3];
  if ((param_5 != 0) && (*(int *)(param_1 + 0x7b0) != 0)) {
    FUN_008f40f0(param_1);
    FUN_008f3c70();
    *(undefined4 *)(param_1 + 0x1208) = 1;
    fVar3 = (float10)(**(code **)(**(int **)(param_1 + 0x7b0) + 0xd8))();
    fStack_170 = (float)((float10)*param_3 * fVar3);
    fStack_16c = (float)((float10)param_3[1] * fVar3);
    fStack_168 = (float)((float10)param_3[2] * fVar3);
    fStack_164 = (float)(fVar3 * (float10)param_3[3]);
    (**(code **)(**(int **)(param_1 + 0x7b0) + 0x8c))(&fStack_170,param_4);
    (**(code **)(**(int **)(param_1 + 0x7b0) + 0x58))(0x43480000);
  }
  *(undefined4 *)(param_1 + 0x12c0) = 0x41a00000;
  *(undefined4 *)(param_1 + 0x12c4) = 1;
  FUN_004039a0(3,param_1,0);
  if (param_1 + 0x12d0 != 0) {
    FUN_00dffb20(param_1 + 0x12d0);
  }
  FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),local_160);
  FUN_00a8caf0(1,0,0,0);
  return;
}

// 00538800  FUN_00538800  size=652  [run]
void __thiscall FUN_00538800(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined *puVar7;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float local_50;
  float local_4c;
  float fStack_48;
  float fStack_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float fStack_2c;
  float fStack_24;
  float fStack_18;
  
  iVar4 = FUN_00c13920();
  if (iVar4 != 0) {
    piVar5 = (int *)FUN_00c13920();
    iVar4 = (**(code **)(*piVar5 + 0x28))(0);
    if ((iVar4 != 0) && (piVar5 = (int *)FUN_00a7c8a0(), piVar5 != (int *)0x0)) {
      puVar7 = &DAT_01be9db8;
      (**(code **)(*piVar5 + 4))(&DAT_01be9db8);
      iVar4 = FUN_00dd6d80(puVar7);
      uVar6 = -(uint)(iVar4 != 0) & (uint)piVar5;
      goto LAB_00538856;
    }
  }
  uVar6 = 0;
LAB_00538856:
  local_40 = *(float *)(uVar6 + 0x40);
  local_38 = *(float *)(uVar6 + 0x48);
  local_34 = *(float *)(uVar6 + 0x4c);
  local_3c = *(float *)(uVar6 + 0x44) + 1.8;
  local_50 = *(float *)(param_1 + 0x40);
  local_4c = *(float *)(param_1 + 0x44);
  fStack_48 = *(float *)(param_1 + 0x48);
  fStack_44 = *(float *)(param_1 + 0x4c);
  fVar1 = local_40 - local_50;
  fStack_2c = local_3c - local_4c;
  fVar2 = local_38 - fStack_48;
  fStack_24 = local_34 - fStack_44;
  fStack_60 = *param_2 + local_50;
  fStack_5c = param_2[1] + local_4c;
  fStack_58 = param_2[2] + fStack_48;
  fStack_54 = param_2[3] + fStack_44;
  fStack_18 = fStack_58 - fStack_48;
  fVar3 = (fStack_18 * fVar2 + (fStack_5c - local_4c) * fStack_2c + fVar1 * (fStack_60 - local_50))
          / (fVar2 * fVar2 + fVar1 * fVar1 + fStack_2c * fStack_2c);
  fStack_70 = fStack_60 - (fVar1 * fVar3 + local_50);
  fStack_6c = fStack_5c - (fStack_2c * fVar3 + local_4c);
  fStack_68 = fStack_58 - (fVar2 * fVar3 + fStack_48);
  fStack_64 = fStack_54 - (fStack_24 * fVar3 + fStack_44);
  fVar1 = fStack_68 * fStack_68 + fStack_70 * fStack_70 + fStack_6c * fStack_6c;
  if (fVar1 < 0.0 == (fVar1 == 0.0)) {
    FUN_00ddf460(&fStack_70,&fStack_70);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    fStack_68 = 0.0;
    fStack_70 = 0.0;
    fStack_6c = 1.0;
  }
  fStack_70 = fStack_70 * 2.0;
  fStack_6c = fStack_6c * 2.0;
  fStack_68 = fStack_68 * 2.0;
  fStack_64 = fStack_64 * 2.0;
  fStack_60 = (local_50 + local_40) * 0.5 + fStack_70;
  fStack_5c = (local_4c + local_3c) * 0.5 + fStack_6c;
  fStack_58 = fStack_68 + (fStack_48 + local_38) * 0.5;
  fStack_54 = (fStack_44 + local_34) * 0.5 + fStack_64;
  FUN_005344f0(param_1 + 0x1230,&local_50,&fStack_60,&local_40);
  *(undefined4 *)(param_1 + 0x1290) = 0;
  return;
}

// 00538A90  FUN_00538a90  size=608  [run]
undefined4 __fastcall FUN_00538a90(int *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  float10 fVar9;
  undefined4 local_270;
  undefined1 local_260 [144];
  uint local_1d0;
  int local_1cc;
  int local_160 [12];
  float local_130;
  undefined1 auStack_60 [92];
  
  param_1[0x1a1] = 0;
  FUN_00ac2080(0);
  if (param_1[0x139] == 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x4b8);
    if (param_1[0x4be] != 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    iVar5 = param_1[0x19f];
    local_270 = 0;
    bVar3 = false;
    iVar7 = param_1[0x1a1] * 0x150 + iVar5;
    FUN_00445db0();
    FUN_004105d0();
    iVar4 = -1;
    bVar2 = false;
    if (iVar5 != iVar7) {
      do {
        iVar1 = *(int *)(iVar5 + 4);
        if (iVar4 <= iVar1) {
          FUN_00448f50(iVar5);
          bVar2 = true;
          iVar4 = iVar1;
        }
        iVar5 = iVar5 + 0x150;
      } while (iVar5 != iVar7);
      if (bVar2) {
        FUN_0043e160(local_160);
        if ((((local_160[0] != 0) && (local_160[0] != 1)) && (local_160[0] != 2)) &&
           ((local_160[0] != 0x1b0 && (local_160[0] != 0x147)))) {
          uVar6 = 0;
          iVar5 = FUN_00a81330();
          if (iVar5 != 0) {
            uVar6 = FUN_00a7c8a0();
          }
          uVar8 = 1;
          fVar9 = (float10)FUN_00ddba30(local_130 - (float)param_1[0x25]);
          param_1[0x245] = (int)(float)fVar9;
          iVar5 = FUN_00a98220(local_260);
          if (((iVar5 != 0) && (local_1cc != 0)) && ((local_1d0 & 0x10000) == 0)) {
            uVar8 = 0x101;
            bVar3 = true;
          }
          (**(code **)(*param_1 + 0x198))(uVar6,local_160,uVar8);
          local_270 = 1;
        }
        if ((((local_1cc != 0) && (bVar3)) &&
            (FUN_00a8e5d0(param_1,local_260,0), param_1[300] == 0xf00d8)) &&
           (iVar5 = FUN_0051ea10(), iVar5 != 0)) {
          FUN_0051ea10();
          FUN_00b89df0();
        }
        if (((param_1[300] != 0xf5010) && (param_1[300] != 0x201b7)) && ((local_1d0 & 0x10000) != 0)
           ) {
          FUN_005349d0(10,auStack_60,0);
          (**(code **)(*param_1 + 0x20))();
          param_1[0x139] = 1;
          iVar5 = FUN_0051ea10();
          if (iVar5 != 0) {
            FUN_0051ea10();
            FUN_00b89df0();
          }
        }
        if (param_1[0x4be] != 0) {
          LeaveCriticalSection(lpCriticalSection);
        }
        return local_270;
      }
    }
    if (param_1[0x4be] != 0) {
      LeaveCriticalSection(lpCriticalSection);
    }
  }
  return 0;
}


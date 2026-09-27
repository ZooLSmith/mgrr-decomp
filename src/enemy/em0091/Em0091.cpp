// src/enemy/em0091/Em0091.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0049CC90..00AB9220, 35 functions

#include "types.h"

// 0049CC90  FUN_0049cc90  size=31  [callgraph]
void FUN_0049cc90(uint param_1)

{
  (&DAT_01bea090)[param_1 >> 5] =
       (&DAT_01bea090)[param_1 >> 5] & ~(0x80000000U >> ((byte)param_1 & 0x1f));
  return;
}

// 0049CD00  FUN_0049cd00  size=31  [callgraph]
void FUN_0049cd00(uint param_1)

{
  (&DAT_01bea070)[param_1 >> 5] =
       (&DAT_01bea070)[param_1 >> 5] & ~(0x80000000U >> ((byte)param_1 & 0x1f));
  return;
}

// 0049CD80  FUN_0049cd80  size=77  [callgraph]
void __fastcall FUN_0049cd80(undefined4 *param_1)

{
  *param_1 = 0x3f490fdb;
  param_1[7] = 5;
  param_1[1] = 0xbf490fdb;
  param_1[2] = 0x3eb2b8c2;
  param_1[3] = 0xbe860a92;
  param_1[4] = 0x3cd67750;
  param_1[5] = 0x3e99999a;
  param_1[6] = 0x40c00000;
  param_1[8] = 0x3f800000;
  return;
}

// 0049CDD0  FUN_0049cdd0  size=168  [callgraph]
void __fastcall FUN_0049cdd0(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  if (*(undefined4 **)(param_1 + 0x370) != (undefined4 *)0x0) {
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) & 0xffbfffff;
    **(undefined4 **)(param_1 + 0x370) = 1;
  }
  if (*(int *)(param_1 + 0x370) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x370) + 4) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x370) + 8) = 0;
  }
  if (*(int *)(param_1 + 0x370) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x370) + 0xc) = 1;
  }
  iVar5 = 0;
  if (*(short *)(param_1 + 0x324) < 1) {
    *(undefined4 *)(param_1 + 0xf70) = 0;
    return;
  }
  do {
    iVar2 = *(int *)(param_1 + 800);
    iVar3 = *(int *)(*(int *)(iVar2 + 0x60 + iVar4) + 0x40);
    if ((iVar3 != 0) && (iVar3 = FUN_00fdbbd0(iVar3,"_EFD01"), iVar3 != 0)) {
      puVar1 = (uint *)(iVar2 + 0x38 + iVar4);
      *puVar1 = *puVar1 & 0xfffffffe;
    }
    iVar5 = iVar5 + 1;
    iVar4 = iVar4 + 0x70;
  } while (iVar5 < *(short *)(param_1 + 0x324));
  *(undefined4 *)(param_1 + 0xf70) = 0;
  return;
}

// 0049CE80  FUN_0049ce80  size=197  [callgraph]
void __fastcall FUN_0049ce80(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0xf70) == 0) {
    if (*(undefined4 **)(param_1 + 0x370) != (undefined4 *)0x0) {
      *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 0x400000;
      **(undefined4 **)(param_1 + 0x370) = 0;
    }
    if (*(int *)(param_1 + 0x370) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x370) + 4) = 1;
      *(undefined4 *)(*(int *)(param_1 + 0x370) + 8) = 1;
    }
    if (*(int *)(param_1 + 0x370) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x370) + 0xc) = 1;
    }
    iVar5 = 0;
    if (0 < *(short *)(param_1 + 0x324)) {
      iVar4 = 0;
      do {
        iVar2 = *(int *)(param_1 + 800);
        iVar3 = *(int *)(*(int *)(iVar2 + 0x60 + iVar4) + 0x40);
        if ((iVar3 != 0) && (iVar3 = FUN_00fdbbd0(iVar3,"_EFD01"), iVar3 != 0)) {
          puVar1 = (uint *)(iVar2 + 0x38 + iVar4);
          *puVar1 = *puVar1 | 1;
        }
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + 0x70;
      } while (iVar5 < *(short *)(param_1 + 0x324));
    }
    FUN_00aa92c0(400);
    FUN_00aa92c0(0x191);
    *(undefined4 *)(param_1 + 0xf70) = 1;
  }
  return;
}

// 0049CF50  FUN_0049cf50  size=79  [callgraph]
void __fastcall FUN_0049cf50(int param_1)

{
  *(undefined2 *)(param_1 + 0xd74) = 0;
  if ((DAT_01bea070 & 0x100000) != 0) {
    DAT_01bea070 = DAT_01bea070 & 0xffefffff;
  }
  if ((DAT_01bea070 & 0x80000) != 0) {
    DAT_01bea070 = DAT_01bea070 & 0xfff7ffff;
  }
  if ((DAT_01bea094 & 0x1000) != 0) {
    DAT_01bea094 = DAT_01bea094 & 0xffffefff;
  }
  *(undefined1 *)(param_1 + 0xd76) = 0;
  return;
}

// 0049CFA0  FUN_0049cfa0  size=289  [callgraph]
void __fastcall FUN_0049cfa0(int param_1)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  
  *(undefined1 *)(param_1 + 0xd79) = 0;
  if (*(int *)(param_1 + 0xf20) != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    (**(code **)(*piVar2 + 0x1c))();
    iVar3 = FUN_00a7c8a0();
    *(uint *)(iVar3 + 0x364) = *(uint *)(iVar3 + 0x364) & 0xffefffff;
    *(undefined4 *)(param_1 + 0xf74) = 0;
  }
  if (*(int *)(param_1 + 0x7b0) != 0) {
    FUN_008f03a0(0x8000000,1);
  }
  if (*(int *)(param_1 + 0x7b0) != 0) {
    FUN_008f03a0(0x8000000,1);
    (**(code **)(**(int **)(param_1 + 0x7b0) + 0x108))(1);
  }
  *(undefined4 *)(param_1 + 0xf48) = 0;
  if (2 < *(short *)(param_1 + 0x324)) {
    puVar1 = (uint *)(*(int *)(param_1 + 800) + 0x118);
    *puVar1 = *puVar1 & 0xfffffffe;
  }
  FUN_009f8ae0(*(undefined4 *)(param_1 + 0xf44));
  *(undefined4 *)(param_1 + 0xf4c) = 0;
  *(undefined4 *)(param_1 + 0xf50) = 0;
  *(undefined4 *)(param_1 + 0xf54) = 0;
  FUN_00eaa6e0(0x41200000,0);
  iVar3 = FUN_00a12210(3);
  if (iVar3 != 0) {
    *(undefined4 *)(iVar3 + 0x98) = 0;
  }
  if (*(char *)(param_1 + 0xd74) != '\0') {
    FUN_00e5e0c0("ba0120_se_mov_motor_stop",param_1,0xffffffff,0);
  }
  *(undefined1 *)(param_1 + 0xd76) = 0;
  FUN_00da9610();
  return;
}

// 0049D0D0  FUN_0049d0d0  size=41  [callgraph]
void __fastcall FUN_0049d0d0(int *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*param_1 + 0x220);
  param_1[0x9b5] = 0;
  (*pcVar1)(0x3f800000);
  param_1[0x9b6] = 1;
  return;
}

// 0049D100  FUN_0049d100  size=28  [callgraph]
void __fastcall FUN_0049d100(int param_1)

{
  *(undefined4 *)(param_1 + 0xb94) = 1;
  *(undefined4 *)(param_1 + 0x26d4) = 0;
  *(undefined4 *)(param_1 + 0x26d8) = 1;
  return;
}

// 0049D150  FUN_0049d150  size=41  [callgraph]
void __fastcall FUN_0049d150(int *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*param_1 + 0x220);
  param_1[0x9b5] = 0;
  (*pcVar1)(0x3f800000);
  param_1[0x9b6] = 1;
  return;
}

// 0049D180  FUN_0049d180  size=42  [callgraph]
uint FUN_0049d180(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  puVar2 = &DAT_01b34da0;
  (**(code **)(*param_1 + 4))(&DAT_01b34da0);
  iVar1 = FUN_00dd6d80(puVar2);
  return -(uint)(iVar1 != 0) & (uint)param_1;
}

// 0049D1B0  FUN_0049d1b0  size=81  [callgraph]
void FUN_0049d1b0(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined1 local_50 [76];
  
  thunk_FUN_00ddc1d0(param_1,param_3,param_5);
  FUN_00ddd140(local_50,param_4);
  D3DXMatrixMultiply(param_1,local_50,param_1);
  *(undefined4 *)(param_1 + 0x30) = *param_2;
  *(undefined4 *)(param_1 + 0x34) = param_2[1];
  *(undefined4 *)(param_1 + 0x38) = param_2[2];
  return;
}

// 0049D2C0  FUN_0049d2c0  size=79  [callgraph]
void __fastcall FUN_0049d2c0(undefined4 *param_1)

{
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = 0x3d4ccccd;
  param_1[1] = 0x3e99999a;
  param_1[2] = 0xbf9851ec;
  param_1[4] = 0x3d4ccccd;
  param_1[5] = 0x3dcccccd;
  param_1[6] = 0x3f8ccccd;
  param_1[3] = 0x3f5f66f3;
  param_1[7] = 0x41f00000;
  return;
}

// 0049D360  FUN_0049d360  size=86  [callgraph]
undefined4 FUN_0049d360(void)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  
  piVar1 = (int *)FUN_00c13920();
  iVar2 = (**(code **)(*piVar1 + 0x28))(0xffffffff);
  if (iVar2 != 0) {
    piVar1 = (int *)FUN_00a7c8a0();
    if (piVar1 != (int *)0x0) {
      puVar3 = &DAT_01be9db8;
      (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
      iVar2 = FUN_00dd6d80(puVar3);
      if (iVar2 != 0) {
        iVar2 = (**(code **)(*piVar1 + 0x32c))();
        if (iVar2 != 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}

// 0049D3C0  FUN_0049d3c0  size=88  [callgraph]
undefined4 FUN_0049d3c0(void)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  
  piVar1 = (int *)FUN_00c13920();
  iVar2 = (**(code **)(*piVar1 + 0x28))(0xffffffff);
  if (iVar2 == 0) {
    return 0;
  }
  piVar1 = (int *)FUN_00a7c8a0();
  if (piVar1 != (int *)0x0) {
    puVar3 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d80(puVar3);
    if (iVar2 != 0) {
      iVar2 = FUN_00b8c050();
      if (iVar2 != 0) {
        return 1;
      }
    }
  }
  return 0;
}

// 0049D420  FUN_0049d420  size=313  [callgraph]
void __fastcall FUN_0049d420(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if (*(int *)(param_1 + 0xf20) != 0) {
    FUN_00a7c8a0();
    puVar1 = (undefined4 *)FUN_009f8b60();
    *(undefined4 *)(param_1 + 0xf40) = *puVar1;
    iVar2 = FUN_00a7c8a0();
    *(uint *)(iVar2 + 0x364) = *(uint *)(iVar2 + 0x364) & 0xffefffff;
    piVar3 = (int *)FUN_00a7c8a0();
    uVar4 = 0;
    if (piVar3 != (int *)0x0) {
      puVar6 = &DAT_01be9db8;
      (**(code **)(*piVar3 + 4))(&DAT_01be9db8);
      iVar2 = FUN_00dd6d80(puVar6);
      uVar4 = -(uint)(iVar2 != 0) & (uint)piVar3;
    }
    *(uint *)(param_1 + 0xf74) = uVar4;
  }
  FUN_009f8ae0(*(undefined4 *)(param_1 + 0xf40));
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0xbf800000;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0x3f800000;
  uStack_24 = 0x3f5f66f3;
  uVar5 = FUN_00a12210(2);
  uStack_44 = *(undefined4 *)(param_1 + 0xa00);
  uStack_40 = *(undefined4 *)(param_1 + 0xa04);
  uStack_3c = *(undefined4 *)(param_1 + 0xa08);
  uStack_38 = 0x3f800000;
  uStack_34 = *(undefined4 *)(param_1 + 0xa10);
  uStack_30 = *(undefined4 *)(param_1 + 0xa14);
  uStack_2c = *(undefined4 *)(param_1 + 0xa18);
  uStack_28 = 0x3f800000;
  uStack_24 = *(undefined4 *)(param_1 + 0xa0c);
  FUN_00db8e60(uVar5,&uStack_44,*(undefined4 *)(param_1 + 0xa1c));
  DAT_01bea070 = DAT_01bea070 | 0x180000;
  DAT_01bea094 = DAT_01bea094 | 0x1000;
  return;
}

// 0049D560  FUN_0049d560  size=174  [callgraph]
void __fastcall FUN_0049d560(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (((*(char *)(param_1 + 0xd76) == '\0') || ((DAT_01bea060 & 0x42000000) != 0)) ||
     ((DAT_01bea094 & 0x1000) == 0)) {
    _memset((void *)(param_1 + 0xba8),0,0x30);
  }
  else {
    puVar2 = (undefined4 *)&DAT_01b7b910;
    puVar3 = (undefined4 *)(param_1 + 0xba8);
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  if (((DAT_01bea070 & 0x200000) != 0) || ((DAT_01bea060 & 0x48000000) != 0)) {
    _memset((void *)(param_1 + 0xba8),0,0x30);
  }
  if ((DAT_01bea070 & 0x20000) != 0) {
    *(undefined4 *)(param_1 + 3000) = 0;
    *(undefined4 *)(param_1 + 0xbbc) = 0;
  }
  *(float *)(param_1 + 0xbd8) =
       *(float *)(param_1 + 0xbbc) * *(float *)(param_1 + 0xbbc) +
       *(float *)(param_1 + 3000) * *(float *)(param_1 + 3000);
  return;
}

// 0049D610  FUN_0049d610  size=227  [callgraph]
void __fastcall FUN_0049d610(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  
  if ((*(int *)(param_1 + 0xf20) != 0) && (piVar1 = (int *)FUN_00a7c8a0(), piVar1 != (int *)0x0)) {
    puVar3 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d80(puVar3);
    if ((iVar2 != 0) && (iVar2 = FUN_00a81330(), iVar2 != 0)) {
      FUN_00a81330();
      iVar2 = FUN_00a7c8a0();
      if (iVar2 == param_1) {
        (**(code **)(*piVar1 + 0x15c))(0x65,*(undefined4 *)(param_1 + 0x4f0));
        (**(code **)(*piVar1 + 0x15c))(0x66,*(undefined4 *)(param_1 + 0x4f0));
      }
    }
  }
  FUN_00a9e060(0);
  FUN_0049cfa0();
  *(undefined2 *)(param_1 + 0xd74) = 0;
  if ((DAT_01bea070 & 0x100000) != 0) {
    DAT_01bea070 = DAT_01bea070 & 0xffefffff;
  }
  if ((DAT_01bea070 & 0x80000) != 0) {
    DAT_01bea070 = DAT_01bea070 & 0xfff7ffff;
  }
  if ((DAT_01bea094 & 0x1000) != 0) {
    DAT_01bea094 = DAT_01bea094 & 0xffffefff;
  }
  *(undefined1 *)(param_1 + 0xd76) = 0;
  return;
}

// 0049D700  FUN_0049d700  size=697  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0049d700(int param_1)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  undefined4 local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  uint local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined *local_30;
  undefined4 local_2c;
  undefined1 local_20 [28];
  
  if ((*(char *)(param_1 + 0xd76) != '\0') && ((DAT_01bea094 & 0x1000) != 0)) {
    fVar2 = *(float *)(param_1 + 0xf50);
    if (NAN(fVar2) || 0.0 < fVar2 == (fVar2 == 0.0)) {
      local_88 = *(float *)(param_1 + 0xf50) / *(float *)(param_1 + 0xb90);
    }
    else {
      local_88 = -(*(float *)(param_1 + 0xf50) / *(float *)(param_1 + 0xb8c));
    }
    fVar2 = *(float *)(param_1 + 0xf54);
    if (NAN(fVar2) || 0.0 < fVar2 == (fVar2 == 0.0)) {
      local_84 = -(*(float *)(param_1 + 0xf54) / *(float *)(param_1 + 0xb88));
    }
    else {
      local_84 = *(float *)(param_1 + 0xf54) / *(float *)(param_1 + 0xb84);
    }
    DAT_01dc131c = 1;
    local_a0 = DAT_01bea380;
    local_9c = DAT_01bea384;
    local_98 = DAT_01bea388;
    local_94 = DAT_01bea38c;
    local_b0 = DAT_01bea390 - DAT_01bea380;
    local_ac = DAT_01bea394 - DAT_01bea384;
    local_a8 = DAT_01bea398 - DAT_01bea388;
    local_a4 = DAT_01bea39c - DAT_01bea38c;
    fVar2 = local_a8 * local_a8 + local_b0 * local_b0 + local_ac * local_ac;
    if (fVar2 < 0.0 == (fVar2 == 0.0)) {
      FUN_00ddf460(&local_b0,&local_b0);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_a8 = 0.0;
      local_b0 = 0.0;
      local_ac = 1.0;
    }
    pfVar1 = (float *)(param_1 + 0xf60);
    local_b0 = local_b0 * 200.0;
    local_64 = 0;
    local_ac = local_ac * 200.0;
    local_a8 = local_a8 * 200.0;
    local_a4 = local_a4 * 200.0;
    local_80 = local_b0 + local_a0;
    local_7c = local_ac + local_9c;
    local_78 = local_98 + local_a8;
    local_74 = local_a4 + local_94;
    *pfVar1 = local_80;
    *(float *)(param_1 + 0xf64) = local_7c;
    *(float *)(param_1 + 0xf68) = local_78;
    *(float *)(param_1 + 0xf6c) = local_74;
    iVar3 = FUN_009f8b40();
    local_60 = local_a0;
    local_40 = iVar3 << 0x10 | 0x1e;
    local_5c = local_9c;
    local_58 = local_98;
    local_54 = local_94;
    local_50 = local_80;
    local_4c = local_7c;
    local_3c = 0;
    local_48 = local_78;
    local_38 = 0;
    local_34 = 0;
    local_44 = local_74;
    local_30 = &DAT_0163e7c8;
    local_2c = 0;
    RayCastSingleHitWork::RayCastSingleHitWork_2(pfVar1,local_20,&local_64,0,&local_60);
    _DAT_01dc4ec0 = *pfVar1;
    _DAT_01dc4ec4 = *(undefined4 *)(param_1 + 0xf64);
    _DAT_01dc4ec8 = *(undefined4 *)(param_1 + 0xf68);
    _DAT_01dc4ecc = *(undefined4 *)(param_1 + 0xf6c);
    _DAT_01dc1324 = local_84;
    _DAT_01dc1328 = local_88;
  }
  return;
}

// 0049D9C0  FUN_0049d9c0  size=84  [callgraph]
void FUN_0049d9c0(void *param_1,undefined4 param_2,void *param_3)

{
  float unaff_ESI;
  float fStack_28;
  float fStack_24;
  undefined1 local_20 [28];
  
  D3DXVec3TransformNormal(local_20,param_2,param_3);
  if (param_1 != param_3) {
    FID_conflict__memcpy(param_1,param_3,0x40);
  }
  *(float *)((int)param_1 + 0x30) = *(float *)((int)param_1 + 0x30) + unaff_ESI;
  *(float *)((int)param_1 + 0x34) = *(float *)((int)param_1 + 0x34) + fStack_28;
  *(float *)((int)param_1 + 0x38) = *(float *)((int)param_1 + 0x38) + fStack_24;
  return;
}

// 0049DA20  Em0091::vf44  size=108  [class]
void __fastcall Em0091::vf44(int param_1)

{
  if (*(char *)(param_1 + 0xd76) != '\0') {
    FUN_0049cf50();
  }
  FUN_00a944d0();
  if (*(int *)(param_1 + 0x67c) != 0) {
    *(undefined4 *)(param_1 + 0x684) = 0;
    if (*(int *)(param_1 + 0x688) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x67c),0);
      *(undefined4 *)(param_1 + 0x688) = 0;
    }
    *(undefined4 *)(param_1 + 0x67c) = 0;
    *(undefined4 *)(param_1 + 0x680) = 0;
  }
  FUN_00a8f000();
  FUN_00a9d8a0();
  FUN_00a8c820();
  Behavior::vf44();
  return;
}

// 0049DAA0  FUN_0049daa0  size=550  [between]
void __fastcall FUN_0049daa0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  float10 fVar5;
  float *pfStack_368;
  int iStack_364;
  float local_350;
  uint local_34c [3];
  undefined4 local_340;
  undefined4 local_33c;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  uint uStack_328;
  uint uStack_2ac;
  undefined4 uStack_238;
  undefined4 uStack_1ec;
  undefined4 uStack_1dc;
  undefined2 uStack_1d2;
  float fStack_1b8;
  float fStack_1b4;
  
  iStack_364 = 3;
  pfStack_368 = (float *)0x49dab8;
  iVar1 = FUN_00a12210();
  local_350 = 0.0;
  local_34c[0] = 0x3d23d70a;
  pfStack_368 = &local_350;
  local_34c[1] = 0x3f547ae1;
  local_340 = 0;
  local_33c = 0x3d23d70a;
  local_338 = 0x424b51ec;
  iStack_364 = iVar1 + 0x10;
  D3DXVec3TransformNormal(pfStack_368);
  D3DXVec3TransformNormal(local_34c,local_34c,iVar1 + 0x10);
  local_350 = *(float *)(iVar1 + 0x48) + local_350;
  FUN_004105d0();
  FUN_00410710();
  FUN_0041cf30();
  uStack_238 = 0x75;
  FUN_0043fe30(&pfStack_368,&stack0xfffffca8,param_1 + 0x90,0x3f4ccccd,0x42a00000);
  uStack_1dc = 0x3f7f7cee;
  fVar5 = (float10)FUN_00dde300(0xbc0efa35,0x3c0efa35);
  fStack_1b8 = (float)fVar5;
  fVar5 = (float10)FUN_00dde300(0xbc0efa35,0x3c0efa35);
  uStack_2ac = uStack_2ac | 0x10000000;
  fStack_1b4 = (float)fVar5;
  uStack_334 = 5;
  uStack_32c = 0xf;
  uStack_328 = uStack_328 & 0xffffff00;
  uStack_330 = 0x96;
  piVar2 = (int *)FUN_00c13920();
  uStack_328 = (**(code **)(*piVar2 + 0x28))(0xffffffff);
  uVar3 = FUN_00a7c7f0();
  FUN_00a7c960(uVar3);
  uStack_1ec = *(undefined4 *)(param_1 + 0xba4);
  local_34c[0] = local_34c[0] | 4;
  local_338 = *(undefined4 *)(param_1 + 0xba0);
  uStack_2ac = uStack_2ac | 0x8800;
  local_33c = 0x18d;
  uStack_1d2 = *(undefined2 *)(iVar1 + 0xa0);
  puVar4 = (undefined4 *)FUN_009f8b60();
  uStack_1dc = *puVar4;
  uStack_238 = 0x3e;
  FUN_00ae2bc0(*(undefined4 *)(param_1 + 0x4f0),local_34c);
  return;
}

// 0049DCD0  FUN_0049dcd0  size=1082  [between]
void __fastcall FUN_0049dcd0(int *param_1)

{
  float fVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  float unaff_ESI;
  float unaff_EDI;
  float10 fVar5;
  float10 fVar6;
  undefined1 *puVar7;
  float local_118;
  float local_114;
  undefined4 uStack_110;
  float fStack_10c;
  float fStack_108;
  undefined1 auStack_104 [4];
  int iStack_100;
  int aiStack_fc [19];
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 auStack_90 [12];
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  int iStack_78;
  float fStack_68;
  float afStack_64 [2];
  undefined1 auStack_5c [88];
  
  local_118 = (float)param_1[0x2e5];
  local_114 = (float)param_1[0x2e5] * -1.0;
  if ((char)param_1[0x35e] != '\0') {
    local_118 = local_118 * (float)param_1[0x2e6];
    local_114 = local_114 * (float)param_1[0x2e6];
  }
  fVar5 = (float10)FUN_00da7500();
  local_118 = (float)(fVar5 * (float10)local_118);
  fVar5 = (float10)FUN_00da7570();
  fVar5 = fVar5 * (float10)local_114;
  local_114 = (float)fVar5;
  fVar6 = (float10)300.0;
  if (fVar6 < (float10)(float)param_1[0x2ee] != (fVar6 == (float10)(float)param_1[0x2ee])) {
    fVar5 = (float10)FUN_00ddba30((float)(((float10)(float)param_1[0x2ee] - fVar6) *
                                          (float10)0.00125 * fVar5 + (float10)(float)param_1[0x3d5])
                                 );
    param_1[0x3d5] = (int)(float)fVar5;
    fVar5 = (float10)local_114;
  }
  if ((float)param_1[0x2ee] <= -300.0) {
    fVar5 = (float10)FUN_00ddba30((float)(((float10)(float)param_1[0x2ee] + (float10)300.0) *
                                          (float10)0.00125 * fVar5 + (float10)(float)param_1[0x3d5])
                                 );
    param_1[0x3d5] = (int)(float)fVar5;
  }
  fVar1 = (float)param_1[0x2ef];
  if (!NAN(fVar1) && 300.0 < fVar1 != (fVar1 == 300.0)) {
    fVar5 = (float10)FUN_00ddba30(((float)param_1[0x2ef] - 300.0) * 0.00125 * local_118 +
                                  (float)param_1[0x3d4]);
    param_1[0x3d4] = (int)(float)fVar5;
  }
  if ((float)param_1[0x2ef] <= -300.0) {
    fVar5 = (float10)FUN_00ddba30(((float)param_1[0x2ef] + 300.0) * 0.00125 * local_118 +
                                  (float)param_1[0x3d4]);
    param_1[0x3d4] = (int)(float)fVar5;
  }
  if ((float)param_1[0x2e3] < (float)param_1[0x3d4] !=
      ((float)param_1[0x2e3] == (float)param_1[0x3d4])) {
    param_1[0x3d4] = param_1[0x2e3];
  }
  if ((float)param_1[0x3d4] <= (float)param_1[0x2e4]) {
    param_1[0x3d4] = param_1[0x2e4];
  }
  if ((float)param_1[0x2e1] < (float)param_1[0x3d5] !=
      ((float)param_1[0x2e1] == (float)param_1[0x3d5])) {
    param_1[0x3d5] = param_1[0x2e1];
  }
  if ((float)param_1[0x3d5] <= (float)param_1[0x2e2]) {
    param_1[0x3d5] = param_1[0x2e2];
  }
  local_b0 = 0;
  local_ac = 0;
  local_a8 = 0x40a00000;
  local_a4 = 0x3f800000;
  iVar2 = FUN_00a12210(2);
  puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x68))();
  uStack_110 = *puVar3;
  fStack_10c = (float)puVar3[1];
  fStack_108 = (float)puVar3[2];
  iStack_100 = param_1[0x3d4];
  aiStack_fc[0] = param_1[0x3d5];
  if (iVar2 != 0) {
    uStack_110 = *(undefined4 *)(iVar2 + 0x40);
    fStack_10c = *(float *)(iVar2 + 0x44);
    fStack_108 = *(float *)(iVar2 + 0x48);
  }
  uStack_a0 = 0x3f800000;
  uStack_9c = 0x3f800000;
  uStack_98 = 0x3f800000;
  uStack_94 = 0x3f800000;
  uVar4 = (**(code **)(*param_1 + 0x84))();
  thunk_FUN_00ddc1d0(auStack_90,uVar4,5);
  FUN_00ddd140(aiStack_fc + 3,&uStack_a0);
  puVar7 = auStack_90;
  D3DXMatrixMultiply(puVar7,aiStack_fc + 3);
  fStack_68 = local_118;
  afStack_64[0] = local_114;
  aiStack_fc[0xe] = 0;
  aiStack_fc[0xd] = 0;
  aiStack_fc[0xc] = 0;
  aiStack_fc[0xb] = 0;
  aiStack_fc[9] = 0;
  aiStack_fc[8] = 0;
  aiStack_fc[7] = 0;
  aiStack_fc[6] = 0;
  aiStack_fc[4] = 0;
  aiStack_fc[3] = 0;
  aiStack_fc[2] = 0;
  aiStack_fc[1] = 0;
  aiStack_fc[0xf] = 0x3f800000;
  aiStack_fc[10] = 0x3f800000;
  aiStack_fc[5] = 0x3f800000;
  aiStack_fc[0] = 0x3f800000;
  if (fStack_108 != 0.0) {
    D3DXMatrixRotationY(auStack_5c,fStack_108);
    D3DXMatrixMultiply(auStack_104,afStack_64,auStack_104);
  }
  if (fStack_10c != 0.0) {
    D3DXMatrixRotationX(auStack_5c,fStack_10c);
    D3DXMatrixMultiply(auStack_104,afStack_64,auStack_104);
  }
  D3DXMatrixMultiply(&uStack_9c,aiStack_fc,&uStack_9c);
  D3DXVec3TransformNormal(&local_118,aiStack_fc + 0xd,&local_a8);
  fStack_84 = fStack_84 + (float)puVar7;
  fStack_80 = fStack_80 + unaff_EDI;
  fStack_7c = fStack_7c + unaff_ESI;
  param_1[0x3ce] = (int)fStack_7c;
  param_1[0x3cc] = (int)fStack_84;
  param_1[0x3cd] = (int)fStack_80;
  param_1[0x3cf] = iStack_78;
  FUN_0049d700();
  return;
}

// 0049E110  FUN_0049e110  size=632  [between]
void __fastcall FUN_0049e110(int *param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float10 fVar6;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_60 [4];
  int aiStack_5c [12];
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  int iStack_20;
  
  iVar2 = param_1[0x1d9];
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0x120) = 0;
    *(undefined4 *)(iVar2 + 0x124) = 0;
  }
  FUN_00a92f90();
  FUN_00e26e90();
  FUN_00e22f10(0);
  iVar2 = FUN_00a8cac0();
  if (iVar2 == 0) {
    iVar2 = FUN_00a81330();
    if (iVar2 == 0) {
      (**(code **)(*param_1 + 0x388))(0);
      return;
    }
    FUN_00a81330();
    piVar3 = (int *)FUN_00a7c8a0();
    FUN_00a9e060(0);
    uVar4 = FUN_00de4550("Pl0010_26a1.mot",0);
    uVar5 = FUN_00de4550("Pl0010_26a1_0_seq.bxm",0);
    FUN_00a9f180(uVar4,uVar5,&DAT_0163e7d8,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b94790(0x3f800000,0x3f800000);
    switchD_0080dbae::default();
    iVar2 = FUN_00a12210(0xf00);
    local_70 = *(float *)(iVar2 + 0x50) * -1.0;
    local_6c = *(float *)(iVar2 + 0x54) * -1.0;
    local_68 = *(float *)(iVar2 + 0x58) * -1.0;
    local_64 = *(float *)(iVar2 + 0x5c) * -1.0;
    D3DXVec3TransformNormal(local_60,&local_70,piVar3 + 4);
    if (aiStack_5c != piVar3 + 4) {
      FID_conflict__memcpy(aiStack_5c,piVar3 + 4,0x40);
    }
    fStack_2c = fStack_2c + local_6c;
    fStack_28 = fStack_28 + local_68;
    fStack_24 = fStack_24 + local_64;
    fVar1 = *(float *)(iVar2 + 0x94);
    iVar2 = (**(code **)(*piVar3 + 0x84))();
    fVar6 = (float10)FUN_00ddba30(*(float *)(iVar2 + 4) + fVar1);
    param_1[0x25] = (int)(float)fVar6;
    param_1[0x14] = (int)fStack_2c;
    param_1[0x15] = (int)fStack_28;
    param_1[0x16] = (int)fStack_24;
    param_1[0x17] = iStack_20;
    return;
  }
  iVar2 = FUN_00a8cac0();
  if (iVar2 == 1) {
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      iVar2 = FUN_00a81330();
      if (iVar2 != 0) {
        uVar4 = FUN_00a7c8a0();
        FUN_0049d180(uVar4);
        FUN_0049cf50();
        param_1[0x187] = param_1[0x187] + 1;
      }
      iVar2 = *param_1;
      uVar4 = FUN_00a81330();
      (**(code **)(iVar2 + 0x15c))(0x66,uVar4);
      FUN_00ba6810(1,0);
      (**(code **)(*param_1 + 0x388))(0);
    }
  }
  return;
}

// 0049E390  Em0091::vf50  size=135  [class]
void __fastcall Em0091::vf50(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  FUN_00a93170();
  BehaviorAppBase::vf50();
  FUN_00a8efe0();
  if (*(char *)(param_1 + 0xd77) != '\0') {
    fVar2 = (float10)FUN_00a92ff0();
    fVar2 = fVar2 + (float10)*(float *)(param_1 + 0xf48);
    *(float *)(param_1 + 0xf48) = (float)fVar2;
    if ((float10)1 < fVar2 != ((float10)1 == fVar2)) {
      iVar1 = FUN_00dda320(0);
      if (iVar1 != 0) {
        FUN_00dda360(0,0x3f19999a,0x3f19999a,5);
      }
      *(undefined4 *)(param_1 + 0xf48) = 0;
    }
    FUN_0049daa0();
  }
  FUN_00d9c2d0(param_1 + 0x10);
  return;
}

// 0049E420  FUN_0049e420  size=615  [between]
undefined4 __fastcall FUN_0049e420(int *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int unaff_EBP;
  int *piVar7;
  float10 fVar8;
  
  param_1[0x1a1] = 0;
  FUN_00ac2080(0);
  piVar7 = (int *)param_1[0x19f];
  piVar5 = piVar7 + param_1[0x1a1] * 0x54;
  uVar2 = 0;
  if (piVar7 != piVar5) {
    while ((((iVar3 = *piVar7, iVar3 == 0 || (iVar3 == 1)) || (iVar3 == 2)) ||
           ((iVar3 == 0x1b0 || (iVar3 == 0x147))))) {
LAB_0049e61f:
      piVar7 = piVar7 + 0x54;
      if (piVar7 == piVar5) {
        return uVar2;
      }
    }
    iVar3 = piVar7[1];
    FUN_00a8eea0();
    (**(code **)(*param_1 + 0x30c))(iVar3,0);
    iVar6 = 0;
    iVar3 = FUN_00a81330();
    if (iVar3 != 0) {
      iVar6 = FUN_00a7c8a0();
    }
    if ((0 < param_1[0x21c]) && (iVar6 != 0)) {
      if ((*(byte *)(iVar6 + 0x4c0) & 0x10) != 0) {
        (**(code **)(*param_1 + 0x21c))(iVar6,(char)piVar7[4],0x3c23d70a,0);
      }
      (**(code **)(*param_1 + 0x220))(0x40000000);
    }
    if ((*(byte *)(piVar7 + 0x23) & 2) != 0) {
      FUN_00aa92c0(399);
      FUN_0049ce80();
    }
    if (((piVar7[0x23] & 0x200U) == 0) && ((piVar7[0x24] & 0x40000U) == 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (piVar7[0x25] == 0) {
LAB_0049e5a4:
      iVar3 = FUN_00a8eea0();
      if (0 < iVar3) {
        iVar3 = param_1[0x21d];
        iVar4 = FUN_00a8eea0();
        if ((iVar4 <= iVar3 / 3) && (iVar3 / 3 <= unaff_EBP)) {
          FUN_0049ce80();
        }
      }
      fVar8 = (float10)FUN_00ddba30((float)piVar7[0xc] - (float)param_1[0x25]);
      param_1[0x245] = (int)(float)fVar8;
      if ((0 < param_1[0x21c]) || (param_1[0x139] != 0)) {
        (**(code **)(*param_1 + 0x198))(iVar6,piVar7,1);
        uVar2 = 1;
        goto LAB_0049e61f;
      }
      param_1[0x139] = 1;
      uVar2 = 1;
    }
    else {
      if (((uint)piVar7[0x23] >> 10 & 1) == 0) {
        iVar3 = FUN_00a98220(piVar7);
        if ((((iVar3 == 0) || (iVar3 = FUN_0049d360(), iVar3 == 0)) ||
            (iVar3 = FUN_0049d3c0(), iVar3 == 0)) &&
           ((iVar3 = FUN_00a98220(piVar7), iVar3 == 0 || (!bVar1)))) goto LAB_0049e5a4;
      }
      else {
        FUN_0049ce80();
        FUN_00a8e680(piVar7,0,0x3e4ccccd);
      }
      FUN_00a8e5d0(param_1,piVar7,0);
      uVar2 = 0x100;
    }
    (**(code **)(*param_1 + 0x198))(iVar6,piVar7,uVar2);
    uVar2 = 1;
  }
  return uVar2;
}

// 0049E690  Em0091::vf48  size=23  [class]
void Em0091::vf48(void)

{
  BehaviorAppBase::vf48();
  FUN_0049d560();
  FUN_0049e420();
  return;
}

// 0049E6B0  FUN_0049e6b0  size=52  [between]
void __thiscall FUN_0049e6b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 local_160 [348];
  
  FUN_004117d0(param_2,param_1,param_3);
  FUN_00a963e0(local_160);
  return;
}

// 0049E6F0  Em0091::vf40  size=1187  [class]
undefined4 __fastcall Em0091::vf40(int param_1)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  float10 fVar5;
  undefined4 uStack_184;
  undefined **local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined1 local_160 [348];
  
  iVar2 = BehaviorAppBase::vf40();
  if (iVar2 != 0) {
    local_180 = (undefined **)0x1;
    local_17c = 1;
    local_178 = 1;
    iVar2 = lib::StaticArray<Behavior::EffectIntegrationContainer,32>::
            StaticArray<Behavior::EffectIntegrationContainer,32>(&local_180);
    if (iVar2 != 0) {
      FUN_00a986d0();
      FUN_00a8efe0();
      if (*(int *)(param_1 + 0x7b0) != 0) {
        FUN_008f03a0(0x100,1);
      }
      iVar2 = lib::StaticArray<Constraints,32>::StaticArray<Constraints,32>();
      if (iVar2 != 0) {
        *(undefined4 *)(param_1 + 0xf74) = 0;
        lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>_2(2);
        uVar3 = FUN_00a8d2a0();
        puVar4 = (undefined4 *)FUN_009f8b60();
        iVar2 = CollisionCapsule::CollisionCapsule(4,*puVar4,0);
        if (iVar2 != 0) {
          *(undefined4 *)(iVar2 + 0x380) = 0;
          FUN_00d77c50(*(undefined4 *)(param_1 + 0x4f0),0xffffffff);
          *(undefined4 *)(iVar2 + 0x594) = 0x3fc00000;
          *(undefined4 *)(iVar2 + 0x590) = 0x3f000000;
          FUN_00d771d0(0xd);
          FUN_00a93a00(iVar2,uVar3);
          FUN_00d7b0f0();
          FUN_00d7b890();
        }
        FUN_00410540(0x10,&DAT_01b7bd48);
        FUN_00a82790(*(undefined4 *)(param_1 + 0x4f0),1,0);
        *(uint *)(param_1 + 0xd80) = *(uint *)(param_1 + 0xd80) | 2;
        FUN_00a82870(0x3fc90fdb,0xbfc90fdb,0x3f000000,0x3ae4c388,0x3d567750);
        FUN_00a82790(*(undefined4 *)(param_1 + 0x4f0),2,0);
        *(uint *)(param_1 + 0xe50) = *(uint *)(param_1 + 0xe50) | 2;
        FUN_00a82840(0x3fc90fdb,0xbf860a92,0x3f000000,0x3ae4c388,0x3d567750);
        FUN_004117d0(0,param_1,param_1 + 0xa20);
        FUN_00a963e0(local_160);
        if (*(undefined4 **)(param_1 + 0x370) != (undefined4 *)0x0) {
          *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) & 0xffbfffff;
          **(undefined4 **)(param_1 + 0x370) = 1;
        }
        if (*(int *)(param_1 + 0x370) != 0) {
          *(undefined4 *)(*(int *)(param_1 + 0x370) + 4) = 1;
          *(undefined4 *)(*(int *)(param_1 + 0x370) + 8) = 1;
        }
        if (*(int *)(param_1 + 0x370) != 0) {
          *(undefined4 *)(*(int *)(param_1 + 0x370) + 0xc) = 1;
        }
        *(undefined4 *)(param_1 + 0xf4c) = 0;
        *(undefined4 *)(param_1 + 0xd50) = 0x3f4ccccd;
        *(undefined4 *)(param_1 + 0xd54) = 0x3f333333;
        *(undefined4 *)(param_1 + 0xd58) = 0xbf333333;
        *(undefined4 *)(param_1 + 0xd5c) = 0x3e99999a;
        *(undefined4 *)(param_1 + 0xd60) = 0xbf800000;
        *(undefined4 *)(param_1 + 0xc10) = 0;
        *(undefined4 *)(param_1 + 0xc14) = 0xbe99999a;
        *(undefined4 *)(param_1 + 0xc18) = 0xbf333333;
        *(undefined4 *)(param_1 + 0xc1c) = local_174;
        FUN_00d9c2d0(param_1 + 0x10);
        *(undefined4 *)(param_1 + 0xf50) = 0;
        *(undefined2 *)(param_1 + 0xd74) = 0;
        *(undefined4 *)(param_1 + 0xf54) = 0;
        *(undefined1 *)(param_1 + 0xd77) = 0;
        *(undefined4 *)(param_1 + 0xf20) = 0;
        FUN_00a929d0();
        if (*(int **)(param_1 + 0x754) != (int *)0x0) {
          if (DAT_01b76230 == 4) {
            uVar3 = 8000;
          }
          else {
            uVar3 = (**(code **)(**(int **)(param_1 + 0x754) + 0x24))(10);
          }
          FUN_00a8edf0(uVar3);
          fVar5 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(5);
          *(float *)(param_1 + 0xb8c) = (float)(fVar5 * (float10)0.017453292);
          fVar5 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(6);
          *(float *)(param_1 + 0xb90) = (float)(fVar5 * (float10)0.017453292);
          fVar5 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(3);
          *(float *)(param_1 + 0xb84) = (float)(fVar5 * (float10)0.017453292);
          fVar5 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(4);
          *(float *)(param_1 + 0xb88) = (float)(fVar5 * (float10)0.017453292);
          fVar5 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(7);
          *(float *)(param_1 + 0xb94) = (float)(fVar5 * (float10)0.017453292);
          fVar5 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(8);
          *(float *)(param_1 + 0xb98) = (float)fVar5;
          fVar5 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(9);
          *(float *)(param_1 + 0xb9c) = (float)fVar5;
          uVar3 = (**(code **)(**(int **)(param_1 + 0x754) + 0x24))(0xb);
          *(undefined4 *)(param_1 + 0xba0) = uVar3;
          fVar5 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(0xc);
          *(float *)(param_1 + 0xba4) = (float)fVar5;
        }
        *(undefined1 *)(param_1 + 0xd79) = 0;
        *(undefined4 *)(param_1 + 0xf40) = 0;
        puVar4 = (undefined4 *)FUN_009f8b60();
        *(undefined4 *)(param_1 + 0xf44) = *puVar4;
        if (2 < *(short *)(param_1 + 0x324)) {
          puVar1 = (uint *)(*(int *)(param_1 + 800) + 0x118);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
        iVar2 = FUN_00de4500("CamParam.bxm");
        if (iVar2 != 0) {
          cXmlBinary::cXmlBinary_103();
          FUN_00e062b0(iVar2,0);
          uVar3 = FUN_00e041c0();
          uStack_184 = FUN_00e06390(uVar3,"Em0091Root");
          FUN_0049cb40(&local_180,&uStack_184);
          local_180 = cXmlBinary::vftable;
          FUN_00e04180();
        }
        uVar3 = 1;
        *(undefined4 *)(param_1 + 0xf48) = 0;
        *(undefined4 *)(param_1 + 0xf70) = 0;
        FUN_00a92fb0(1);
        FUN_00e08640(uVar3);
        FUN_009fd240();
        FUN_0049cdd0();
        return 1;
      }
    }
  }
  return 0;
}

// 0049EBA0  FUN_0049eba0  size=449  [between]
void __fastcall FUN_0049eba0(int *param_1)

{
  float fVar1;
  code *pcVar2;
  undefined4 local_178;
  undefined4 uStack_174;
  
  switch(param_1[0x187]) {
  case 0:
    pcVar2 = *(code **)(param_1[0x2b4] + 8);
    uStack_174 = 0;
    local_178 = 0;
    param_1[0x187] = 1;
    (*pcVar2)(0x3f800000);
    (**(code **)(param_1[0x288] + 8))(0x3f800000,0,0);
    param_1[0x248] = 0x43340000;
    FUN_004117d0(3,param_1,param_1 + 0x2b4);
    FUN_00a963e0(&local_178);
    if ((char)param_1[0x35d] != '\0') {
      FUN_00e5e0c0("ba0120_se_mov_motor_stop",param_1,0xffffffff,0);
    }
    FUN_00e5e0c0("ba0120_se_dmg_spark",param_1,0xffffffff,0);
  case 1:
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] < 0.0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    pcVar2 = *(code **)(param_1[0x2b4] + 8);
    uStack_174 = 0;
    local_178 = 0;
    param_1[0x187] = 3;
    (*pcVar2)(0x3f800000);
    param_1[0x248] = 0x42f00000;
    FUN_004117d0(4,param_1,param_1 + 0x2b4);
    FUN_00a963e0(&stack0xfffffe94);
    FUN_00a8ca50(0x191,0,0);
    (**(code **)(*param_1 + 0x20))();
    uStack_174 = 0;
    local_178 = 0x49ed0f;
    FUN_00a938c0();
    uStack_174 = 0;
    local_178 = 0xffffffff;
    FUN_00e5e0c0("ba0120_se_dmg_explosion",param_1);
    if ((int *)param_1[0x1ec] != (int *)0x0) {
      uStack_174 = 0x1f;
      local_178 = 0x49ed37;
      (**(code **)(*(int *)param_1[0x1ec] + 0x108))();
    }
  case 3:
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] < 0.0) {
      uStack_174 = 0x49ed5b;
      FUN_009fdde0();
    }
  }
  return;
}

// 0049ED80  FUN_0049ed80  size=221  [between]
void __fastcall FUN_0049ed80(int param_1)

{
  uint *puVar1;
  int *piVar2;
  undefined1 auStack_160 [348];
  
  *(undefined2 *)(param_1 + 0xd74) = 0;
  *(undefined2 *)(param_1 + 0xd78) = 0x100;
  if (*(int *)(param_1 + 0xf20) != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    (**(code **)(*piVar2 + 0x20))();
  }
  if (*(int *)(param_1 + 0x7b0) != 0) {
    FUN_008f03a0(0x8000000,0);
  }
  if (2 < *(short *)(param_1 + 0x324)) {
    puVar1 = (uint *)(*(int *)(param_1 + 800) + 0x118);
    *puVar1 = *puVar1 | 1;
  }
  DAT_01bea070 = DAT_01bea070 | 0x80000;
  DAT_01bea094 = DAT_01bea094 | 0x1000;
  *(undefined4 *)(param_1 + 0x920) = *(undefined4 *)(param_1 + 0xb9c);
  *(undefined1 *)(param_1 + 0xd76) = 1;
  FUN_004117d0(7,param_1,param_1 + 0xad0);
  FUN_00a963e0(auStack_160);
  if (*(int *)(param_1 + 0x7b0) != 0) {
    FUN_008f03a0(0x8000000,0);
    (**(code **)(**(int **)(param_1 + 0x7b0) + 0x108))(0x1e);
  }
  return;
}

// 0049EE60  FUN_0049ee60  size=876  [between]
void __fastcall FUN_0049ee60(int *param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  float10 fVar6;
  undefined *puVar7;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined1 auStack_60 [4];
  int aiStack_5c [12];
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  int iStack_20;
  
  iVar2 = param_1[0x1d9];
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0x120) = 0;
    *(undefined4 *)(iVar2 + 0x124) = 0;
  }
  (**(code **)(*param_1 + 0x318))();
  FUN_00a92f90();
  FUN_00e26e90();
  FUN_00e22f10(0);
  iVar2 = FUN_00a8cac0();
  if (iVar2 == 0) {
    iVar2 = FUN_00a81330();
    if (iVar2 == 0) {
      iVar2 = *param_1;
      uVar3 = FUN_00a81330();
      (**(code **)(iVar2 + 0x15c))(0x65,uVar3);
      (**(code **)(*param_1 + 0x388))(0);
      return;
    }
    FUN_00a81330();
    piVar4 = (int *)FUN_00a7c8a0();
    if (param_1[0x2dd] == 0) {
      uVar3 = FUN_00de4550("Pl0010_26a2.mot",0);
      uVar5 = FUN_00de4550("Pl0010_26a2_0_seq.bxm",0);
      puVar7 = &DAT_0163e884;
    }
    else {
      uVar3 = FUN_00de4550("Pl0010_26a0.mot",0);
      uVar5 = FUN_00de4550("Pl0010_26a0_0_seq.bxm",0);
      puVar7 = &DAT_0163e854;
    }
    FUN_00a9f180(uVar3,uVar5,puVar7,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x2dd] = 1;
    FUN_00b94790(0x3f800000,0x3f800000);
    switchD_0080dbae::default();
    iVar2 = FUN_00a12210(0xf00);
    fStack_70 = *(float *)(iVar2 + 0x50) * -1.0;
    fStack_6c = *(float *)(iVar2 + 0x54) * -1.0;
    fStack_68 = *(float *)(iVar2 + 0x58) * -1.0;
    fStack_64 = *(float *)(iVar2 + 0x5c) * -1.0;
    D3DXVec3TransformNormal(auStack_60,&fStack_70,piVar4 + 4);
    if (aiStack_5c != piVar4 + 4) {
      FID_conflict__memcpy(aiStack_5c,piVar4 + 4,0x40);
    }
    fStack_2c = fStack_2c + fStack_6c;
    fStack_28 = fStack_28 + fStack_68;
    fStack_24 = fStack_24 + fStack_64;
    fVar1 = *(float *)(iVar2 + 0x94);
    iVar2 = (**(code **)(*piVar4 + 0x84))();
    fVar6 = (float10)FUN_00ddba30(*(float *)(iVar2 + 4) + fVar1);
    param_1[0x25] = (int)(float)fVar6;
    param_1[0x14] = (int)fStack_2c;
    param_1[0x15] = (int)fStack_28;
    param_1[0x16] = (int)fStack_24;
    param_1[0x17] = iStack_20;
    return;
  }
  iVar2 = FUN_00a8cac0();
  if (iVar2 == 1) {
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      iVar2 = FUN_00a81330();
      if (iVar2 != 0) {
        uVar3 = FUN_00a7c8a0();
        FUN_0049d180(uVar3);
        FUN_0049ed80();
        param_1[0x187] = param_1[0x187] + 1;
        FUN_00a81330();
        FUN_00a7c8a0();
        uVar3 = FUN_00de4550("Pl0010_26a3.mot",0);
        uVar5 = FUN_00de4550("Pl0010_26a3_0_seq.bxm",0);
        FUN_00a9f180(uVar3,uVar5,&DAT_0163e824,0,0,0x3f800000,0,0xbf800000,0x3f800000);
        FUN_00a8caf0(0x138,0,0,0);
        iVar2 = *param_1;
        uVar3 = FUN_00a81330();
        (**(code **)(iVar2 + 0x15c))(0x65,uVar3);
      }
    }
  }
  return;
}

// 0049F1D0  Em0091::vf4C  size=1234  [class]
void __fastcall Em0091::vf4C(int param_1)

{
  float fVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  float10 fVar7;
  undefined4 uVar8;
  undefined *puVar9;
  
  FUN_00a92fb0();
  fVar7 = (float10)FUN_00e049b0();
  *(float *)(param_1 + 0x910) = (float)fVar7;
  piVar2 = (int *)FUN_00c13920();
  uVar3 = (**(code **)(*piVar2 + 0x28))(0xffffffff);
  *(undefined4 *)(param_1 + 0xf20) = uVar3;
  *(undefined1 *)(param_1 + 0xd77) = 0;
  Behavior::vf4C();
  FUN_0049dcd0();
  FUN_00a84720();
  FUN_00a84720();
  switchD_0080dbae::default();
  FUN_00a84780(param_1 + 0xf30,0,1,0,0,0x3f800000);
  switchD_0080dbae::default();
  FUN_00a84780(param_1 + 0xf30,1,0,0,0,0x3f800000);
  if (*(int *)(param_1 + 0x4e4) != 0) {
    FUN_0049eba0();
    if (*(char *)(param_1 + 0xd76) == '\0') {
      if ((DAT_01bea094 & 0x1000) == 0) {
        return;
      }
      if (*(char *)(param_1 + 0xd79) == '\0') {
        return;
      }
    }
    if ((*(int *)(param_1 + 0xf20) != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0))
    {
      puVar9 = &DAT_01be9db8;
      (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
      iVar4 = FUN_00dd6d80(puVar9);
      if (iVar4 != 0) {
        piVar2[0x245] = 0x40278d36;
        FUN_00a8caf0(0xc6,0,0,0);
      }
    }
    FUN_0049d610();
    return;
  }
  if ((DAT_01bea060 & 0x42000000) == 0) {
    if ((DAT_01bea094 & 0x1000) != 0) goto LAB_0049f41b;
    if ((((DAT_01bea090 & 0x800000) == 0) && (*(char *)(param_1 + 0xd76) == '\0')) &&
       (*(int *)(param_1 + 0xf20) != 0)) {
      uVar3 = FUN_00a7c8a0();
      piVar2 = (int *)FUN_00412580(uVar3);
      uVar3 = FUN_00a7c8b0();
      iVar4 = FUN_00d95c60(uVar3);
      if (((iVar4 != 0) && (piVar2 != (int *)0x0)) &&
         (iVar4 = (**(code **)(*piVar2 + 0x380))(), iVar4 != 0)) {
        DAT_01dc1300 = 1;
        DAT_01dc12fc = 4;
        if ((*(byte *)(piVar2 + 0x33f) & 0x20) != 0) {
          (**(code **)(*piVar2 + 0x220))(0x40400000);
          FUN_00be8e60();
          uVar8 = 0x40400000;
          uVar3 = (**(code **)(*piVar2 + 0x68))(0x40400000);
          FUN_00948180(uVar3,uVar8);
          FUN_0049d420();
          (**(code **)(*piVar2 + 0x150))(0x65,*(undefined4 *)(param_1 + 0x4f0));
          return;
        }
      }
    }
  }
  if ((DAT_01bea094 & 0x1000) == 0) {
    return;
  }
LAB_0049f41b:
  if (*(char *)(param_1 + 0xd76) != '\0') {
    if (*(int *)(param_1 + 0xf20) != 0) {
      uVar3 = FUN_00a7c8a0();
      piVar2 = (int *)FUN_00412580(uVar3);
      iVar4 = (**(code **)(*piVar2 + 0x1fc))();
      if (((iVar4 != 0) || (iVar4 = FUN_00a8eea0(), iVar4 < 1)) ||
         (iVar4 = FUN_00416910(6), iVar4 != 0)) {
        FUN_0049d610();
        return;
      }
    }
    if ((DAT_01bea060 & 0x40000000) == 0) {
      if ((*(byte *)(param_1 + 0xbac) & 0x20) == 0) {
        *(undefined1 *)(param_1 + 0xd78) = 0;
        iVar4 = FUN_00a12210(3);
        if (*(int *)(param_1 + 0xf74) == 0) {
          uVar5 = 0x4000;
        }
        else {
          uVar5 = *(uint *)(*(int *)(param_1 + 0xf74) + 0xe40);
        }
        if ((*(uint *)(param_1 + 0xba8) & uVar5) == 0) {
          if ((*(char *)(param_1 + 0xd75) == '\0') && (*(char *)(param_1 + 0xd74) != '\0')) {
            FUN_00e5e0c0("ba0120_se_mov_motor_stop",param_1,0xffffffff,0);
            *(undefined2 *)(param_1 + 0xd74) = 0x100;
          }
          fVar7 = (float10)FUN_00ddba30(*(float *)(param_1 + 0xf4c) * *(float *)(param_1 + 0x910) +
                                        *(float *)(iVar4 + 0x98));
          *(float *)(iVar4 + 0x98) = (float)fVar7;
          fVar7 = (float10)FUN_00ddba30(*(float *)(param_1 + 0xf4c) - 0.0052359877);
          *(float *)(param_1 + 0xf4c) = (float)fVar7;
          if (fVar7 < (float10)0) {
            *(float *)(param_1 + 0xf4c) = (float)(float10)0;
          }
        }
        else {
          if (*(int *)(param_1 + 0xf20) != 0) {
            uVar3 = FUN_00a7c8a0();
            iVar6 = FUN_00412580(uVar3);
            if (iVar6 != 0) {
              *(undefined4 *)(iVar6 + 0x53e8) = 0;
            }
          }
          FUN_0049cc90(0x19);
          *(undefined1 *)(param_1 + 0xd75) = 0;
          if (*(char *)(param_1 + 0xd74) == '\0') {
            FUN_00e5e0c0("ba0120_se_mov_motor_start",param_1,0xffffffff,0);
            *(undefined1 *)(param_1 + 0xd74) = 1;
          }
          fVar7 = (float10)FUN_00ddba30(*(float *)(param_1 + 0xf4c) * *(float *)(param_1 + 0x910) +
                                        *(float *)(iVar4 + 0x98));
          *(float *)(iVar4 + 0x98) = (float)fVar7;
          fVar7 = (float10)FUN_00ddba30(*(float *)(param_1 + 0xf4c) + 0.0052359877);
          *(float *)(param_1 + 0xf4c) = (float)fVar7;
          if ((float10)0.31415927 < fVar7) {
            *(float *)(param_1 + 0xf4c) = (float)(float10)0.31415927;
            *(undefined1 *)(param_1 + 0xd78) = 1;
          }
        }
        if ((*(char *)(param_1 + 0xd78) != '\0') &&
           (fVar1 = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910),
           *(float *)(param_1 + 0x920) = fVar1, fVar1 < 0.0)) {
          *(undefined1 *)(param_1 + 0xd77) = 1;
          *(undefined4 *)(param_1 + 0x920) = *(undefined4 *)(param_1 + 0xb9c);
        }
      }
      else if (*(int *)(param_1 + 0xf20) != 0) {
        uVar3 = FUN_00a7c8a0();
        piVar2 = (int *)FUN_00412580(uVar3);
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 0x220))(0x40400000);
          FUN_0049cfa0();
          (**(code **)(*piVar2 + 0x150))(0x66,*(undefined4 *)(param_1 + 0x4f0));
          return;
        }
      }
    }
  }
  return;
}

// 00AB06F0  Em0091::vf04  size=6  [class]
undefined * Em0091::vf04(void)

{
  return &DAT_01b34da0;
}

// 00AB9220  Em0091::vf00  size=30  [class]
undefined4 __thiscall Em0091::vf00(undefined4 param_1,byte param_2)

{
  Behavior::Behavior_13();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}


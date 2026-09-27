// src/enemy/em0110/Em0110MoveCheckLinearCastCollector.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 004D9B80..004DA0C0, 4 functions

#include "mgrr.h"
#include "Em0110MoveCheckLinearCastCollector.h"
#include "hkpCdPointCollector.h"

// 004D9B80  Em0110MoveCheckLinearCastCollector::vf04  size=67  [class]
void Em0110MoveCheckLinearCastCollector::vf04(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x34);
  for (iVar1 = *(int *)(*(int *)(param_1 + 0x34) + 0xc); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc))
  {
    iVar2 = iVar1;
  }
  if (((*(char *)(iVar2 + 0x18) == '\x01') && (iVar2 = *(char *)(iVar2 + 0x10) + iVar2, iVar2 != 0))
     && (iVar2 = FUN_00910ba0(iVar2), iVar2 == 0)) {
    hkpAllCdPointCollector::vf04(param_1);
  }
  return;
}

// 004D9BD0  hkpCdPointCollector::hkpCdPointCollector_2  size=77  [between]
void __fastcall hkpCdPointCollector::hkpCdPointCollector_2(undefined4 *param_1)

{
  *param_1 = hkpAllCdPointCollector::vftable;
  param_1[5] = 0;
  if (-1 < (int)param_1[6]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[4],(param_1[6] & 0x3fffffff) * 0x30);
  }
  param_1[4] = 0;
  param_1[6] = 0x80000000;
  *param_1 = vftable;
  return;
}

// 004D9C20  Em0110MoveCheckLinearCastCollector::vf00  size=117  [class]
undefined4 * __thiscall Em0110MoveCheckLinearCastCollector::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkpAllCdPointCollector::vftable;
  param_1[5] = 0;
  if (-1 < (int)param_1[6]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[4],(param_1[6] & 0x3fffffff) * 0x30);
  }
  param_1[4] = 0;
  param_1[6] = 0x80000000;
  *param_1 = hkpCdPointCollector::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x1a0);
  }
  return param_1;
}

// 004DA0C0  Em0110MoveCheckLinearCastCollector::Em0110MoveCheckLinearCastCollector  size=1724  [class]
void __fastcall Em0110MoveCheckLinearCastCollector::Em0110MoveCheckLinearCastCollector(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  float10 fVar5;
  float fStack_230;
  float fStack_22c;
  float fStack_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  int *local_204;
  undefined1 auStack_200 [8];
  undefined1 auStack_1f8 [8];
  undefined1 local_1f0 [64];
  undefined **ppuStack_1b0;
  undefined4 uStack_1ac;
  undefined1 *puStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined1 auStack_190 [396];
  
  iVar1 = FUN_00a81330();
  piVar4 = (int *)0x0;
  if (iVar1 != 0) {
    piVar4 = (int *)FUN_00a7c8a0();
  }
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0xa6,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    FUN_004be9b0(0xa6,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    FUN_004bed90(0x18,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    FUN_004b93e0(0x127,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    iVar1 = FUN_00a81330();
    if ((iVar1 != 0) && (local_204 = (int *)FUN_00a7c8a0(), local_204 != (int *)0x0)) {
      local_204[0xd9] = local_204[0xd9] & 0xfffffffd;
      FUN_004ba1e0();
      iVar1 = FUN_00a81330();
      if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
        (**(code **)(*local_204 + 0x20))();
        (**(code **)(*piVar2 + 0x1c))();
        FUN_00a9e290(&DAT_0163f42c,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
        piVar2[0xd9] = piVar2[0xd9] & 0xfffffffd;
      }
    }
    FUN_004cbdb0(0xfb,param_1 + 0x3d0);
    fStack_230 = (float)param_1[0x14];
    fStack_22c = (float)param_1[0x15];
    fStack_228 = (float)param_1[0x16];
    fStack_224 = (float)param_1[0x17];
    if ((piVar4 != (int *)0x0) && (iVar1 = FUN_00a12210(0xf00), iVar1 != 0)) {
      D3DXMatrixRotationY(local_1f0,piVar4[0x25]);
      D3DXVec3TransformNormal(&stack0xfffffdc8,iVar1 + 0x50,auStack_1f8);
      fStack_230 = (float)piVar4[0x14] + fStack_230;
      fStack_22c = (float)piVar4[0x15] + fStack_22c;
      fStack_228 = (float)piVar4[0x16] + fStack_228;
      fStack_224 = (float)piVar4[0x17] + fStack_224;
      fVar5 = (float10)FUN_00ddba30(*(float *)(iVar1 + 0x94) + (float)piVar4[0x25]);
      param_1[0x25] = (int)(float)fVar5;
    }
    fStack_220 = fStack_230 - (float)param_1[0x14];
    puStack_1a0 = auStack_190;
    fStack_21c = fStack_22c - (float)param_1[0x15];
    uStack_198 = 0x80000008;
    uStack_19c = 0;
    ppuStack_1b0 = vftable;
    fStack_218 = fStack_228 - (float)param_1[0x16];
    fStack_214 = fStack_224 - (float)param_1[0x17];
    uStack_1ac = 0x7f7fffee;
    iVar1 = hkpCdPointCollector::hkpCdPointCollector_14
                      (&fStack_220,auStack_200,1,&ppuStack_1b0,0x3c23d70a);
    param_1[600] = param_1[0x14];
    param_1[0x259] = param_1[0x15];
    param_1[0x25a] = param_1[0x16];
    param_1[0x25b] = param_1[0x17];
    if (iVar1 != 0) {
      iVar1 = *piVar4;
      fStack_220 = (float)piVar4[0x14] - fStack_230;
      fStack_21c = (float)piVar4[0x15] - fStack_22c;
      fStack_218 = (float)piVar4[0x16] - fStack_228;
      fStack_214 = (float)piVar4[0x17] - fStack_224;
      fStack_230 = fStack_220 + (float)piVar4[0x14];
      fStack_22c = (float)piVar4[0x15] + fStack_21c;
      fStack_228 = fStack_218 + (float)piVar4[0x16];
      fStack_224 = fStack_214 + (float)piVar4[0x17];
      uVar3 = (**(code **)(iVar1 + 0x84))();
      (**(code **)(iVar1 + 0x7c))(&fStack_230,uVar3);
    }
    FUN_008e0ae0(0);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x188] = 0;
    hkpCdPointCollector::hkpCdPointCollector_2();
  case 1:
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    if (((piVar4 != (int *)0x0) && (iVar1 = FUN_00a8c760(0x24), iVar1 != 0)) &&
       (iVar1 = FUN_00a12210(0xf00), iVar1 != 0)) {
      D3DXMatrixRotationY(local_1f0,piVar4[0x25]);
      D3DXVec3TransformNormal(&fStack_228,iVar1 + 0x50,auStack_1f8);
      param_1[0x14] = (int)(fStack_220 + (float)piVar4[0x14]);
      param_1[0x15] = (int)((float)piVar4[0x15] + fStack_21c);
      param_1[0x16] = (int)((float)piVar4[0x16] + fStack_218);
      param_1[0x17] = (int)((float)piVar4[0x17] + fStack_214);
      fVar5 = (float10)FUN_00ddba30(*(float *)(iVar1 + 0x94) + (float)piVar4[0x25]);
      param_1[0x25] = (int)(float)fVar5;
    }
    FUN_00a92f90();
    iVar1 = FUN_00e26e90();
    if (iVar1 == 0) {
      fVar5 = (float10)-1.0;
    }
    else {
      fVar5 = (float10)FUN_00e36970(0);
    }
    if ((param_1[0x188] == 0) && ((float10)100.0 <= fVar5 * (float10)60.0)) {
      iVar1 = FUN_00a81330();
      if ((iVar1 != 0) && (piVar4 = (int *)FUN_00a7c8a0(), piVar4 != (int *)0x0)) {
        (**(code **)(*piVar4 + 0x1c))();
      }
      iVar1 = FUN_00a81330();
      if ((iVar1 != 0) && (piVar4 = (int *)FUN_00a7c8a0(), piVar4 != (int *)0x0)) {
        FUN_00a9e0d0(piVar4[0x13c]);
        (**(code **)(*piVar4 + 0x20))();
        FUN_009fdde0();
        FUN_00a7c950();
      }
      FUN_008e0ae0(1);
      param_1[0x188] = param_1[0x188] + 1;
    }
    break;
  case 2:
    (**(code **)(param_1[0x3d0] + 8))(0,0,0);
    iVar1 = FUN_00a81330();
    if ((iVar1 != 0) && (piVar4 = (int *)FUN_00a7c8a0(), piVar4 != (int *)0x0)) {
      (**(code **)(*piVar4 + 0x1c))();
    }
    iVar1 = FUN_00a81330();
    if ((iVar1 != 0) && (piVar4 = (int *)FUN_00a7c8a0(), piVar4 != (int *)0x0)) {
      FUN_00a9e0d0(piVar4[0x13c]);
      (**(code **)(*piVar4 + 0x20))();
      FUN_009fdde0();
      FUN_00a7c950();
    }
    (**(code **)(*param_1 + 0x1f8))(1);
    FUN_008e0ae0(1);
    FUN_00aa4080(0xb5,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    FUN_004be9b0(0xb5,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    FUN_004bed90(0x2f,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    break;
  default:
    goto switchD_004da0fc_default;
  }
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    iVar1 = FUN_00a81330();
    if ((iVar1 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) {
      *(uint *)(iVar1 + 0x364) = *(uint *)(iVar1 + 0x364) | 2;
    }
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
switchD_004da0fc_default:
  return;
}


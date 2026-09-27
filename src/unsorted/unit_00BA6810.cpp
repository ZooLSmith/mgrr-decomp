// src/unsorted/unit_00BA6810.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00BA6810..00BA8430, 12 functions

#include "mgrr.h"

// 00BA6810  FUN_00ba6810  size=174  [run]
void __thiscall FUN_00ba6810(int *param_1,int param_2)

{
  int iVar1;
  
  if ((param_2 != 0) && (param_1[0x1d9] != 0)) {
    FUN_008e6d00();
  }
  (**(code **)(*param_1 + 0x388))(0);
  DAT_01bea060 = DAT_01bea060 & 0xfdffffff;
  FUN_00a7c950();
  FUN_00b90990();
  param_1[0x224] = 0;
  param_1[0x225] = 0;
  param_1[0x226] = 0;
  param_1[0x408] = 0;
  param_1[0x409] = 0;
  param_1[0x40a] = 0;
  iVar1 = FUN_00d467a0();
  if (((iVar1 == 0) || ((param_1[0x14fc] & 0x80000U) == 0)) && (param_2 != 0)) {
    Pl0000::qteZangekiSafeCheckForward();
    FUN_00b89850();
  }
  FUN_00e5e0c0("core_se_btl_qte_out",param_1,0xffffffff,0);
  return;
}

// 00BA68C0  FUN_00ba68c0  size=156  [run]
void __fastcall FUN_00ba68c0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  pcVar1 = *(code **)(*param_1 + 0x314);
  param_1[0x996] = 1;
  (*pcVar1)();
  if (param_1[0x187] == 0) {
    param_1[0x2dd] = 1;
    iVar2 = FUN_00a81330();
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = FUN_00a7c8a0();
    }
    FUN_00a9f3c0(iVar3 + 0x494,0x19,0,0x3e088889,0x3f800000,0,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b94ed0();
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  return;
}

// 00BA6960  FUN_00ba6960  size=535  [run]
void __fastcall FUN_00ba6960(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  float10 fVar5;
  undefined1 auStack_20 [28];
  
  pcVar1 = *(code **)(*param_1 + 0x314);
  param_1[0x997] = 1;
  (*pcVar1)();
  switch(param_1[0x187]) {
  case 0:
    iVar3 = FUN_00a81330();
    iVar2 = 0;
    if (iVar3 != 0) {
      iVar2 = FUN_00a7c8a0();
    }
    FUN_00a9f3c0(iVar2 + 0x494,0x1a,0,0x3e088889,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b94ed0();
  case 1:
    FUN_00b94790(0x3f800000,0x3f800000);
    fVar5 = (float10)FUN_00a95c80(0);
    if (fVar5 < (float10)2.0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 2:
    iVar3 = FUN_00a81330();
    iVar2 = 0;
    if (iVar3 != 0) {
      iVar2 = FUN_00a7c8a0();
    }
    FUN_00a9f3c0(iVar2 + 0x494,0x1b,0,0,0x3f800000,0,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_00b94790(0x3f800000,0x3f800000);
    break;
  case 4:
    uVar4 = 0x1d;
    iVar3 = FUN_00b8afd0(auStack_20);
    if (iVar3 == 2) {
      uVar4 = 0x1c;
    }
    iVar3 = FUN_00a81330();
    iVar2 = 0;
    if (iVar3 != 0) {
      iVar2 = FUN_00a7c8a0();
    }
    FUN_00a9f3c0(iVar2 + 0x494,uVar4,0,0x3e088889,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      (**(code **)(*param_1 + 0x388))(0);
    }
  }
  pcVar1 = *(code **)(*param_1 + 0x308);
  param_1[0x23d] = param_1[0x34c];
  (*pcVar1)(0x3e99999a,0x3ae4c388,0x3f060a92,0);
  return;
}

// 00BA6B90  FUN_00ba6b90  size=1232  [run]
void __fastcall FUN_00ba6b90(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  int iStack_54;
  undefined1 auStack_50 [76];
  
  (**(code **)(*param_1 + 0x314))();
  if (param_1[0x2dd] != 0) {
    param_1[0x4fe] = 0;
  }
  if (param_1[0x187] == 0) {
    FUN_00aa92c0(0xf);
    param_1[0x250] = 0;
    param_1[0x251] = 0;
    sVar4 = 0x67;
    if (((float)param_1[0xb18] <= -0.32000002) &&
       (iVar3 = (**(code **)(*param_1 + 0x34c))(), iVar3 == 0)) {
      sVar4 = 0x6d;
    }
    if ((810000.0 < (float)param_1[0x34a]) &&
       (iVar3 = (**(code **)(*param_1 + 0x34c))(), iVar3 == 0)) {
      sVar4 = 0x66;
      param_1[0x251] = 1;
    }
    if (((float)param_1[0xb18] <= -0.9) && (iVar3 = (**(code **)(*param_1 + 0x34c))(), iVar3 == 0))
    {
      sVar4 = 0x6f;
    }
    if (param_1[0x186] == 0xe) {
      if (sVar4 == 0x79) {
        sVar4 = 100;
      }
      if (sVar4 != 0x66) goto LAB_00ba6f3d;
      sVar4 = 100;
LAB_00ba6c97:
      FUN_00aa4080((int)sVar4,0,0x3d4ccccd,0x3f800000,0x8000000,0,0x3f800000);
      param_1[0x250] = (int)sVar4;
    }
    else {
LAB_00ba6f3d:
      if (sVar4 == 0x67) {
        iVar3 = FUN_00a81330();
        iVar2 = 0;
        if (iVar3 != 0) {
          iVar2 = FUN_00a7c8a0();
        }
        FUN_00a9f3c0(iVar2 + 0x494,0x1e,0,0x3d4ccccd,0x3f800000,0x8000000,0,0x3f800000);
        param_1[0x250] = 0x67;
      }
      else {
        if (sVar4 != 0x6d) goto LAB_00ba6c97;
        iVar3 = FUN_00a81330();
        iVar2 = 0;
        if (iVar3 != 0) {
          iVar2 = FUN_00a7c8a0();
        }
        FUN_00a9f3c0(iVar2 + 0x494,0x21,0,0x3d4ccccd,0x3f800000,0x8000000,0,0x3f800000);
        param_1[0x250] = 0x6d;
      }
    }
    if (((float)param_1[0x40d] <= -0.5) && (param_1[0x189] == 0)) {
      param_1[0x253] = 0xf;
    }
    uStack_78 = 0;
    uStack_7c = 0;
    uStack_80 = 0;
    uStack_84 = 0;
    uStack_8c = 0;
    uStack_90 = 0;
    uStack_94 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_a4 = 0;
    uStack_a8 = 0;
    uStack_ac = 0;
    uStack_74 = 0x3f800000;
    uStack_88 = 0x3f800000;
    uStack_9c = 0x3f800000;
    uStack_b0 = 0x3f800000;
    if ((float)param_1[0x26] != 0.0) {
      D3DXMatrixRotationZ(auStack_50,param_1[0x26]);
      D3DXMatrixMultiply(&stack0xffffff48,&uStack_58,&stack0xffffff48);
    }
    if ((float)param_1[0x25] != 0.0) {
      D3DXMatrixRotationY(auStack_50,param_1[0x25]);
      D3DXMatrixMultiply(&stack0xffffff48,&uStack_58,&stack0xffffff48);
    }
    if ((float)param_1[0x24] != 0.0) {
      D3DXMatrixRotationX(auStack_50,param_1[0x24]);
      D3DXMatrixMultiply(&stack0xffffff48,&uStack_58,&stack0xffffff48);
    }
    D3DXMatrixMultiply(&uStack_b0,&uStack_b0,param_1 + 0x2c);
    param_1[0x228] = 1;
    param_1[0x224] = 0;
    param_1[0x225] = 0;
    param_1[0x226] = 0;
    param_1[0x227] = iStack_54;
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b94ed0();
    uStack_60 = 0;
    uStack_5c = 0xbf800000;
    uStack_58 = 0;
    iStack_70 = param_1[0x10];
    iStack_6c = param_1[0x11];
    iStack_68 = param_1[0x12];
    iStack_64 = param_1[0x13];
    iVar3 = hkpCdPointCollector::hkpCdPointCollector_14(&uStack_60,&iStack_70,1,0,0x3c23d70a);
    if (iVar3 != 0) {
      param_1[0x14] = iStack_70;
      param_1[0x15] = iStack_6c;
      param_1[0x16] = iStack_68;
      param_1[0x17] = iStack_64;
    }
  }
  else if (param_1[0x187] != 1) goto LAB_00ba700e;
  if (param_1[0x253] != 0) {
    param_1[0x253] = param_1[0x253] + -1;
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar3 = FUN_00a92f90();
  if ((*(int *)(iVar3 + 0xd0) + *(int *)(iVar3 + 0xc4) + *(int *)(iVar3 + 0xb8) == 0) ||
     (iVar3 = FUN_00e36060(0), iVar3 != 0)) {
    iVar3 = (**(code **)(*param_1 + 0x34c))();
    if ((iVar3 == 0) && (param_1[0x251] != 0)) {
      FUN_00a8caf0(3,2,0,0);
      param_1[0x9a4] = 1;
      param_1[0x988] = 0;
      param_1[0xb0a] = 0;
      FUN_00b895d0();
    }
    else {
      (**(code **)(*param_1 + 0x388))(0);
    }
  }
LAB_00ba700e:
  iVar3 = FUN_00a8c760(0xb);
  if (iVar3 == 0) {
    pcVar1 = *(code **)(*param_1 + 0x308);
    param_1[0x23d] = param_1[0x34c];
    (*pcVar1)(0x3e99999a,0x3ae4c388,0x3f060a92,0);
  }
  return;
}

// 00BA7060  FUN_00ba7060  size=549  [run]
void __fastcall FUN_00ba7060(int *param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  (**(code **)(*param_1 + 0x314))();
  if (param_1[0x187] == 0) {
    iVar1 = param_1[0x988];
    param_1[0x250] = param_1[0x98a];
    iVar4 = iVar1 + 1;
    param_1[0x98a] = 0;
    param_1[0x988] = iVar4;
    if (3 < iVar4) {
      param_1[0x988] = 0;
    }
    FUN_00b94fc0();
    iVar4 = FUN_00a81330();
    iVar3 = 0;
    if (iVar4 != 0) {
      iVar3 = FUN_00a7c8a0();
    }
    FUN_00a9f3c0(iVar3 + 0x494,iVar1,0,0x3e088889,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b86010(1);
    iVar4 = FUN_00b86410();
    if (iVar4 != 0) {
      FUN_00b7b270(0x3f800000,0x393702d3,0x40490fdb,0);
    }
    param_1[0x2dd] = 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  param_1[0x469] = 1;
  iVar4 = FUN_00a8c760(5);
  if (iVar4 != 0) {
    iVar4 = FUN_00a81330();
    if (iVar4 != 0) {
      FUN_00a81330();
      piVar5 = (int *)FUN_00a7c8a0();
      if (((piVar5 != (int *)0x0) && (iVar4 = FUN_00b86410(), iVar4 != 0)) &&
         (iVar4 = (**(code **)(*piVar5 + 0x228))(), iVar4 != 0)) {
        FUN_00b7b270(0x3e99999a,0x393702d3,0x3e8efa35,0);
        goto LAB_00ba7235;
      }
    }
    if (90000.0 < (float)param_1[0x34a]) {
      pcVar2 = *(code **)(*param_1 + 0x308);
      param_1[0x23d] = param_1[0x34c];
      (*pcVar2)(0x3e99999a,0x3ae4c388,0x3e8efa35,0);
    }
  }
LAB_00ba7235:
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar4 = FUN_00a92f90();
  if ((*(int *)(iVar4 + 0xd0) + *(int *)(iVar4 + 0xc4) + *(int *)(iVar4 + 0xb8) != 0) &&
     (iVar4 = FUN_00e36060(0), iVar4 == 0)) {
    return;
  }
  (**(code **)(*param_1 + 0x388))(0);
  return;
}

// 00BA7290  FUN_00ba7290  size=565  [run]
void __fastcall FUN_00ba7290(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  (**(code **)(*param_1 + 0x314))();
  if (param_1[0x187] == 0) {
    param_1[0x250] = param_1[0x98a];
    if (2 < param_1[0x98a]) {
      param_1[0x98a] = 0;
    }
    iVar4 = param_1[0x98a];
    iVar2 = iVar4 + 1;
    param_1[0x988] = 0;
    param_1[0x98a] = iVar2;
    if (2 < iVar2) {
      param_1[0x98a] = 0;
    }
    FUN_00b94fc0();
    iVar2 = FUN_00a81330();
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = FUN_00a7c8a0();
    }
    FUN_00a9f3c0(iVar3 + 0x494,iVar4 + 4,0,0x3e088889,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b86010(1);
    iVar4 = FUN_00b86410();
    if (iVar4 != 0) {
      FUN_00b7b270(0x3f800000,0x393702d3,0x40490fdb,0);
    }
    param_1[0x2dd] = 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  param_1[0x469] = 1;
  iVar4 = FUN_00a8c760(5);
  if (iVar4 != 0) {
    iVar4 = FUN_00a81330();
    if (iVar4 != 0) {
      FUN_00a81330();
      piVar5 = (int *)FUN_00a7c8a0();
      if (((piVar5 != (int *)0x0) && (iVar4 = FUN_00b86410(), iVar4 != 0)) &&
         (iVar4 = (**(code **)(*piVar5 + 0x228))(), iVar4 != 0)) {
        FUN_00b7b270(0x3e99999a,0x393702d3,0x3e8efa35,0);
        goto LAB_00ba7475;
      }
    }
    if (90000.0 < (float)param_1[0x34a]) {
      pcVar1 = *(code **)(*param_1 + 0x308);
      param_1[0x23d] = param_1[0x34c];
      (*pcVar1)(0x3e99999a,0x3ae4c388,0x3e8efa35,0);
    }
  }
LAB_00ba7475:
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar4 = FUN_00a92f90();
  if ((*(int *)(iVar4 + 0xd0) + *(int *)(iVar4 + 0xc4) + *(int *)(iVar4 + 0xb8) != 0) &&
     (iVar4 = FUN_00e36060(0), iVar4 == 0)) {
    return;
  }
  (**(code **)(*param_1 + 0x388))(0);
  return;
}

// 00BA74D0  FUN_00ba74d0  size=666  [run]
void __fastcall FUN_00ba74d0(int *param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  undefined4 auStack_8 [2];
  
  (**(code **)(*param_1 + 0x314))();
  if (0.0 < (float)param_1[0x24a]) {
    param_1[0x24a] = (int)((float)param_1[0x24a] - (float)param_1[0x244]);
  }
  auStack_8[0] = 7;
  auStack_8[1] = 8;
  if (param_1[0x187] == 0) {
    param_1[0x9a2] = param_1[0x9a2] + 1;
    if (1 < param_1[0x988]) {
      param_1[0x988] = 0;
      param_1[0x9a3] = 1;
    }
    iVar4 = param_1[0x988];
    if (iVar4 == 1) {
      param_1[0x9a3] = 1;
    }
    param_1[0x250] = iVar4;
    param_1[0x988] = iVar4 + 1;
    uVar2 = auStack_8[param_1[0x250]];
    iVar4 = FUN_00a81330();
    iVar3 = 0;
    if (iVar4 != 0) {
      iVar3 = FUN_00a7c8a0();
    }
    FUN_00a9f3c0(iVar3 + 0x494,uVar2,0,0x3e088889,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x23d] = param_1[0x25];
    FUN_00b86010(1);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b94fc0();
    param_1[0x995] = param_1[0x995] | 2;
    param_1[0x225] = 0x3cf5c28f;
    param_1[0x9f4] = 0;
    param_1[0x248] = 0x3d75c28f;
    param_1[0x2dd] = 1;
    param_1[0x24a] = -0x40800000;
  }
  else if (param_1[0x187] != 1) goto LAB_00ba7738;
  param_1[0x224] = (int)((float)param_1[0x224] * 0.97);
  param_1[0x226] = (int)((float)param_1[0x226] * 0.97);
  param_1[0x225] = (int)((float)param_1[0x225] * 0.94);
  iVar4 = FUN_00a8c760(0x12);
  if (iVar4 != 0) {
    param_1[0x225] = (int)((float)param_1[0x225] - 0.004);
  }
  param_1[0x15] = (int)((float)param_1[0x248] + (float)param_1[0x15]);
  fVar5 = (float10)FUN_00fdc1f0();
  param_1[0x469] = 1;
  param_1[0x248] =
       (int)(float)(fVar5 * (float10)(float)param_1[0x248] -
                   (float10)(float)param_1[0x244] * (float10)0.005);
  param_1[0x249] = (int)((float)param_1[0x249] - (float)param_1[0x244]);
  FUN_00b8ced0(0x40800000,0x3f4ccccd,0x3da3d70a,0x3da3d70a);
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar4 = FUN_00a92f90();
  if ((*(int *)(iVar4 + 0xd0) + *(int *)(iVar4 + 0xc4) + *(int *)(iVar4 + 0xb8) == 0) ||
     (iVar4 = FUN_00e36060(0), iVar4 != 0)) {
    FUN_00a8caf0(0xb,0,0,0);
  }
LAB_00ba7738:
  iVar4 = FUN_00a8c760(0x12);
  if ((iVar4 == 0) && (fVar1 = (float)param_1[0x24a], NAN(fVar1) || 0.0 < fVar1 == (fVar1 == 0.0)))
  {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00ba7763. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x318))();
  return;
}

// 00BA79C0  FUN_00ba79c0  size=936  [run]
void __fastcall FUN_00ba79c0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  
  (**(code **)(*param_1 + 0x314))();
  iVar2 = FUN_00a8c760(0x12);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x318))();
  }
  switch(param_1[0x187]) {
  case 0:
    iVar2 = FUN_00a81330();
    if (iVar2 != 0) {
      iVar2 = FUN_00a7c8a0();
      pcVar1 = *(code **)(*param_1 + 0x308);
      fVar4 = (float10)fpatan((float10)*(float *)(iVar2 + 0x40) - (float10)(float)param_1[0x10],
                              (float10)*(float *)(iVar2 + 0x48) - (float10)(float)param_1[0x12]);
      param_1[0x23d] = (int)(float)fVar4;
      (*pcVar1)(0x3f800000,0x393702d3,0x40490fdb,0);
    }
    iVar2 = FUN_00a81330();
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = FUN_00a7c8a0();
    }
    FUN_00a9f3c0(iVar3 + 0x494,10,0,0x3e2aaaab,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x23d] = param_1[0x25];
    param_1[0x225] = 0x3e4ccccd;
    FUN_00b86010(1);
    FUN_00b94fc0();
    param_1[0x988] = param_1[0x988] + 1;
    param_1[0x409] = 0;
    if (5 < param_1[0x988]) {
      param_1[0x988] = 0;
    }
    param_1[0x995] = param_1[0x995] | 8;
    param_1[0x2dd] = 1;
    break;
  case 1:
    break;
  case 2:
    iVar2 = FUN_00a81330();
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = FUN_00a7c8a0();
    }
    FUN_00a9f3c0(iVar3 + 0x494,0xb,0,0x3d088889,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    param_1[0x224] = (int)((float)param_1[0x224] * 0.97);
    param_1[0x226] = (int)((float)param_1[0x226] * 0.97);
    param_1[0x225] = (int)((float)param_1[0x225] * 0.994);
    param_1[0x409] = (int)((float)param_1[0x244] * -0.1 + (float)param_1[0x409]);
    FUN_00b94790(0x3f800000,0x3f800000);
    return;
  case 4:
    iVar2 = FUN_00a81330();
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = FUN_00a7c8a0();
    }
    FUN_00a9f3c0(iVar3 + 0x494,0xc,0,0x3d088889,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar2 = FUN_00a92f90();
    if ((*(int *)(iVar2 + 0xd0) + *(int *)(iVar2 + 0xc4) + *(int *)(iVar2 + 0xb8) == 0) ||
       (iVar2 = FUN_00e36060(0), iVar2 != 0)) {
      (**(code **)(*param_1 + 0x388))(0);
      return;
    }
  default:
    goto switchD_00ba79fd_default;
  }
  param_1[0x224] = (int)((float)param_1[0x224] * 0.97);
  param_1[0x226] = (int)((float)param_1[0x226] * 0.97);
  param_1[0x225] = (int)((float)param_1[0x225] * 0.994);
  iVar2 = FUN_00a8c760(0x12);
  if (iVar2 == 0) {
    param_1[0x409] = (int)((float)param_1[0x244] * -0.1 + (float)param_1[0x409]);
  }
  else {
    param_1[0x225] = (int)((float)param_1[0x225] - 0.005);
    FUN_00b8ced0(0x40800000,0x3fc00000,0x3dcccccd,0x3e99999a);
  }
  param_1[0x469] = 1;
  param_1[0x249] = (int)((float)param_1[0x249] - (float)param_1[0x244]);
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar2 = FUN_00a92f90();
  if ((*(int *)(iVar2 + 0xd0) + *(int *)(iVar2 + 0xc4) + *(int *)(iVar2 + 0xb8) == 0) ||
     (iVar2 = FUN_00e36060(0), iVar2 != 0)) {
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
switchD_00ba79fd_default:
  return;
}

// 00BA7D80  FUN_00ba7d80  size=1543  [run]
void __fastcall FUN_00ba7d80(int *param_1)

{
  float *pfVar1;
  float fVar2;
  code *pcVar3;
  int iVar4;
  float10 fVar5;
  undefined4 uVar6;
  float fStack_34;
  undefined4 uStack_30;
  undefined1 auStack_2c [4];
  int iStack_28;
  float fStack_24;
  undefined1 auStack_20 [28];
  
  (**(code **)(*param_1 + 0x314))();
  iVar4 = FUN_00a8c760(0x12);
  if (iVar4 != 0) {
    (**(code **)(*param_1 + 0x318))();
  }
  switch(param_1[0x187]) {
  case 0:
    iVar4 = FUN_00a81330();
    if (iVar4 != 0) {
      iVar4 = FUN_00a7c8a0();
      pcVar3 = *(code **)(*param_1 + 0x308);
      fVar5 = (float10)fpatan((float10)*(float *)(iVar4 + 0x40) - (float10)(float)param_1[0x10],
                              (float10)*(float *)(iVar4 + 0x48) - (float10)(float)param_1[0x12]);
      param_1[0x23d] = (int)(float)fVar5;
      (*pcVar3)(0x3f800000,0x393702d3,0x40490fdb,0);
    }
    iVar4 = FUN_00b7d0c0();
    FUN_00a9f3c0(iVar4 + 0x494,0xd,0,0x3e2aaaab,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x23d] = param_1[0x25];
    FUN_00b86010(1);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x225] = 0x3e4ccccd;
    FUN_00b94fc0();
    param_1[0x988] = param_1[0x988] + 1;
    param_1[0x409] = 0;
    param_1[0x995] = param_1[0x995] | 1;
    param_1[0x9f4] = 0;
    param_1[0x2dd] = 1;
    goto LAB_00ba7eb8;
  case 1:
LAB_00ba7eb8:
    param_1[0x224] = (int)((float)param_1[0x224] * 0.97);
    param_1[0x226] = (int)((float)param_1[0x226] * 0.97);
    param_1[0x225] = (int)((float)param_1[0x225] * 0.994);
    iVar4 = FUN_00a8c760(0x12);
    if (iVar4 != 0) {
      param_1[0x225] = (int)((float)param_1[0x225] - 0.005);
    }
    iStack_28 = FUN_00a959f0(0);
    if (18.0 < (float)iStack_28) {
      iVar4 = FUN_00b7b200();
      if (iVar4 == 0) {
        fStack_24 = 0.5235988;
      }
      else {
        FUN_00b7b230(auStack_20);
        thunk_FUN_00dde510(&fStack_24,&iStack_28,auStack_20,param_1 + 0x10);
        param_1[0x25] = iStack_28;
        fStack_24 = fStack_24 * -1.0;
      }
      param_1[0x24] = (int)fStack_24;
    }
    param_1[0x469] = 1;
    param_1[0x249] = (int)((float)param_1[0x249] - (float)param_1[0x244]);
    FUN_00b94790(0x3f800000,0x3f800000);
    uVar6 = 0;
    FUN_00a92f90(0);
    iVar4 = FUN_0085be10(uVar6);
    if (iVar4 == 0) {
      return;
    }
    param_1[0x187] = param_1[0x187] + 1;
    return;
  case 2:
    iVar4 = FUN_00b7d0c0();
    FUN_00a9f3c0(iVar4 + 0x494,0xe,0,0,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x41a00000;
    goto LAB_00ba801c;
  case 3:
LAB_00ba801c:
    (**(code **)(*param_1 + 0x318))();
    param_1[0x224] = (int)((float)param_1[0x224] * 0.0);
    param_1[0x226] = (int)((float)param_1[0x226] * 0.0);
    param_1[0x225] = (int)((float)param_1[0x225] * 0.0);
    param_1[0x409] = (int)((float)param_1[0x244] * -0.03 + (float)param_1[0x409]);
    FUN_00b94790(0x3f800000,0x3f800000);
    pfVar1 = (float *)(param_1 + 0x2f8);
    *pfVar1 = 0.0;
    param_1[0x2f9] = 0;
    param_1[0x2fa] = 0x3f333333;
    D3DXVec3TransformNormal(pfVar1,pfVar1,param_1 + 4);
    param_1[0x14] = (int)(*pfVar1 + (float)param_1[0x14]);
    param_1[0x15] = (int)((float)param_1[0x15] + (float)param_1[0x2f9]);
    param_1[0x16] = (int)((float)param_1[0x16] + (float)param_1[0x2fa]);
    param_1[0x17] = (int)((float)param_1[0x2fb] + (float)param_1[0x17]);
    fVar2 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar2 - (float)param_1[0x244]);
    if (0.0 < (float)param_1[0x2f9]) {
      param_1[0x248] =
           (int)((fVar2 - (float)param_1[0x244]) - ((float)param_1[0x244] + (float)param_1[0x244]));
    }
    if ((float)param_1[0x248] < 0.0) {
      pcVar3 = *(code **)(*param_1 + 0x324);
      param_1[0x187] = param_1[0x187] + 1;
      iVar4 = (*pcVar3)();
      if (iVar4 == 0) {
        param_1[0x187] = 8;
      }
    }
    iVar4 = FUN_00a81330();
    if (iVar4 == 0) {
      return;
    }
    FUN_00a81330();
    iVar4 = FUN_00a7c8a0();
    if (iVar4 == 0) {
      return;
    }
    FUN_00b7b230(auStack_2c);
    thunk_FUN_00dde510(&fStack_34,&uStack_30,auStack_2c,param_1 + 0x10);
    FUN_00a8db10(param_1 + 0x25,param_1[0x25],uStack_30,0x3dcccccd,0x3ae4c388,0x3d567750);
    FUN_00a8db10(param_1 + 0x24,param_1[0x24],fStack_34 - 1.0,0x3dcccccd,0x3ae4c388,0x3d567750);
    return;
  case 4:
    iVar4 = FUN_00b7d0c0();
    FUN_00a9f3c0(iVar4 + 0x494,0xf,0,0,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x24] = 0;
  case 5:
    FUN_00b94790(0x3f800000,0x3f800000);
    uVar6 = 0;
    FUN_00a92f90(0);
    iVar4 = FUN_0085be10(uVar6);
    if (iVar4 == 0) {
      return;
    }
    (**(code **)(*param_1 + 0x388))(0);
    return;
  case 6:
    iVar4 = FUN_00b7d0c0();
    FUN_00a9f3c0(iVar4 + 0x494,0x10,0,0,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x24] = 0;
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x225] = 0x3e19999a;
    if (param_1[0x463] != 0) {
      FUN_0041cc40(0);
    }
    break;
  case 7:
  case 9:
    break;
  case 8:
    iVar4 = FUN_00b7d0c0();
    FUN_00a9f3c0(iVar4 + 0x494,0x11,0,0,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x24] = 0;
    param_1[0x225] = 0x3e19999a;
    break;
  default:
    goto switchD_00ba7dc7_default;
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  uVar6 = 0;
  FUN_00a92f90(0);
  iVar4 = FUN_0085be10(uVar6);
  if (iVar4 != 0) {
    FUN_00a8caf0(0xb,0,0,0);
    return;
  }
switchD_00ba7dc7_default:
  return;
}

// 00BA83B0  FUN_00ba83b0  size=63  [run]
void __fastcall FUN_00ba83b0(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 800))(0x3c888889);
  iVar1 = FUN_00a8c760(0);
  if (iVar1 != 0) {
    iVar1 = FUN_00b94500(1,1,1);
    if (iVar1 != 0) {
      return;
    }
  }
  FUN_00b8cd60();
  return;
}

// 00BA83F0  FUN_00ba83f0  size=63  [run]
void __fastcall FUN_00ba83f0(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 800))(0x3c888889);
  iVar1 = FUN_00a8c760(0);
  if (iVar1 != 0) {
    iVar1 = FUN_00b94500(1,1,1);
    if (iVar1 != 0) {
      return;
    }
  }
  FUN_00b8cd60();
  return;
}

// 00BA8430  FUN_00ba8430  size=648  [run]
void __fastcall FUN_00ba8430(int *param_1)

{
  float fVar1;
  int iVar2;
  float unaff_EBX;
  float unaff_EDI;
  undefined4 local_34;
  float fStack_30;
  undefined4 uStack_2c;
  float fStack_28;
  undefined4 uStack_24;
  undefined4 uStack_1c;
  
  iVar2 = FUN_00a81330();
  local_34 = 0;
  if (iVar2 != 0) {
    local_34 = FUN_00a7c8a0();
  }
  (**(code **)(*param_1 + 0x314))();
  (**(code **)(*param_1 + 0x220))(0x41200000);
  FUN_00a92f90();
  FUN_00e26e90();
  FUN_00e22f10(0);
  switch(param_1[0x187]) {
  case 0:
    FUN_00b94fc0();
    FUN_00db3e80(0,0,&DAT_01bea1d0);
    FUN_00aa4080(0x457,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b895d0();
    DAT_01bea070 = DAT_01bea070 | 0x20000000;
    DAT_01bea060 = DAT_01bea060 | 0x8000000;
  case 1:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar2 = FUN_00a92f90();
    if ((*(int *)(iVar2 + 0xd0) + *(int *)(iVar2 + 0xc4) + *(int *)(iVar2 + 0xb8) == 0) ||
       (iVar2 = FUN_00e36060(0), iVar2 != 0)) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 2:
    FUN_00aa4080(0x458,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar2 = FUN_00a92f90();
    if ((*(int *)(iVar2 + 0xd0) + *(int *)(iVar2 + 0xc4) + *(int *)(iVar2 + 0xb8) == 0) ||
       (iVar2 = FUN_00e36060(0), iVar2 != 0)) {
      DAT_01bea070 = DAT_01bea070 & 0xdfffffff;
      DAT_01bea060 = DAT_01bea060 & 0xf7ffffff;
      (**(code **)(*param_1 + 0x388))(0);
      goto switchD_00ba84b2_default;
    }
    break;
  default:
    goto switchD_00ba84b2_default;
  }
  iVar2 = FUN_00a8c760(0xb);
  if (iVar2 != 0) {
    FUN_00a94480(3);
    param_1[0x500] = 0;
    param_1[0x2dd] = 0;
  }
switchD_00ba84b2_default:
  iVar2 = FUN_00a8c760(5);
  if ((iVar2 != 0) && (unaff_EBX != 0.0)) {
    iVar2 = FUN_00a12210(0);
    uStack_24 = *(undefined4 *)(iVar2 + 0x40);
    uStack_1c = *(undefined4 *)(iVar2 + 0x48);
    iVar2 = FUN_00a12210(0xf00);
    if (iVar2 != 0) {
      local_34 = 0;
      fStack_30 = 0.0;
      uStack_2c = 0;
      D3DXVec3TransformNormal(&local_34,&local_34,iVar2 + 0x10);
      fVar1 = *(float *)(iVar2 + 0x48);
      param_1[0x14] =
           (int)((float)param_1[0x14] + (fStack_30 - (*(float *)(iVar2 + 0x40) + unaff_EDI)));
      param_1[0x16] = (int)((fStack_28 - (fVar1 + unaff_EBX)) + (float)param_1[0x16]);
    }
  }
  return;
}


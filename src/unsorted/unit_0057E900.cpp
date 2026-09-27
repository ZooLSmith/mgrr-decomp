// src/unsorted/unit_0057E900.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0057E900..0057F200, 12 functions

#include "mgrr.h"

// 0057E900  FUN_0057e900  size=70  [run]
void __fastcall FUN_0057e900(int *param_1)

{
  code *pcVar1;
  int *piVar2;
  
  pcVar1 = *(code **)(*param_1 + 0xf8);
  param_1[0x1bb] = 0;
  (*pcVar1)(1);
  FUN_0057c950();
  FUN_0057c840(0xffffffff,1);
  piVar2 = (int *)FUN_00ac89d0();
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0xf8))(1);
  }
  return;
}

// 0057E970  FUN_0057e970  size=16  [run]
bool __fastcall FUN_0057e970(int param_1)

{
  return *(int *)(param_1 + 0x618) == 0x13d;
}

// 0057E980  FUN_0057e980  size=10  [run]
void __fastcall FUN_0057e980(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0057e988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x3f0))();
  return;
}

// 0057E990  FUN_0057e990  size=1  [run]
void FUN_0057e990(void)

{
  return;
}

// 0057E9A0  FUN_0057e9a0  size=1  [run]
void FUN_0057e9a0(void)

{
  return;
}

// 0057E9B0  FUN_0057e9b0  size=77  [run]
void __fastcall FUN_0057e9b0(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0xef0) + 4))();
  FUN_00a944d0();
  FUN_00a9d8a0();
  FUN_00a92a00();
  RayCastManager::getWork(param_1 + 0x1558);
  RayCastManager::getWork(param_1 + 0x155c);
  return;
}

// 0057EA10  FUN_0057ea10  size=32  [run]
void FUN_0057ea10(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_00a7c7f0();
    FUN_00a7c960(uVar1);
  }
  return;
}

// 0057EA60  FUN_0057ea60  size=377  [run]
void __fastcall FUN_0057ea60(int param_1)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  float10 fVar5;
  float10 fVar6;
  
  piVar4 = (int *)0x0;
  iVar3 = FUN_00ac8120();
  if ((iVar3 != 0) && (iVar3 = FUN_00b7ce00(), iVar3 != 0)) {
    piVar4 = (int *)FUN_00a7c8a0();
  }
  bVar2 = false;
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00a9ed60(0x20310,&DAT_0164205c,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x920) = 0;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) goto LAB_0057eb5e;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  if (piVar4 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar4 + 0x84))();
    fVar1 = *(float *)(param_1 + 0x94);
    fVar6 = (float10)FUN_00ddba30(-*(float *)(iVar3 + 4) - fVar1);
    fVar5 = (float10)FUN_00fdc1f0();
    fVar6 = (float10)FUN_00ddba30((float)(((float10)1 - fVar5) * (float10)(float)fVar6 +
                                         (float10)fVar1));
    *(float *)(param_1 + 0x94) = (float)fVar6;
  }
  bVar2 = true;
LAB_0057eb5e:
  if ((DAT_01bea060 & 0x20000000) != 0) {
    (**(code **)(*(int *)(param_1 + 0xef0) + 4))();
    FUN_009fdde0();
  }
  if (bVar2) {
    fVar6 = (float10)FUN_00a5be50(0);
    fVar6 = (float10)*(float *)(param_1 + 0x54) -
            fVar6 * (float10)*(float *)(param_1 + 0x910) * (float10)0.016666668 * (float10)0.3;
    *(float *)(param_1 + 0x54) = (float)fVar6;
    if (fVar6 <= (float10)0) {
      (**(code **)(*(int *)(param_1 + 0xef0) + 4))();
      FUN_009fdde0();
      return;
    }
  }
  return;
}

// 0057EBF0  FUN_0057ebf0  size=412  [run]
void __fastcall FUN_0057ebf0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_00a81330();
  iVar3 = 0;
  if (iVar1 != 0) {
    iVar3 = FUN_00a7c8a0();
  }
  (**(code **)(*param_1 + 0x220))(0x40a00000);
  switch(param_1[0x187]) {
  case 0:
    (**(code **)(param_1[0x3bc] + 8))(0,0,0);
    FUN_00a9ed60(0x20310,&DAT_01642074,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      uVar5 = 0;
      puVar4 = &DAT_0164206c;
LAB_0057ece0:
      FUN_00a9ed60(0x20310,puVar4,0,0x3d088889,0x3f800000,uVar5,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (iVar3 == 0) {
      return;
    }
    iVar1 = FUN_00a8cac0();
    if (iVar1 != 6) {
      return;
    }
    uVar5 = 0x8000000;
    puVar4 = &DAT_01642064;
    goto LAB_0057ece0;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00c1b9a0();
      (**(code **)(*piVar2 + 0x44))(8,0);
      (**(code **)(*param_1 + 0x20))();
      FUN_009fdde0();
      return;
    }
  }
  return;
}

// 0057EDB0  FUN_0057edb0  size=226  [run]
void __fastcall FUN_0057edb0(int *param_1)

{
  int iVar1;
  float10 fVar2;
  
  (**(code **)(*param_1 + 0x220))(0x40a00000);
  if (param_1[0x187] == 0) {
    FUN_00a9ed60(0x20310,&DAT_0164207c,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_009fdde0();
    param_1[0x187] = param_1[0x187] + 1;
  }
  fVar2 = (float10)FUN_00a5be50(0);
  fVar2 = (float10)(float)param_1[0x15] -
          fVar2 * (float10)(float)param_1[0x244] * (float10)0.016666668 * (float10)0.3;
  param_1[0x15] = (int)(float)fVar2;
  if ((float10)0 < fVar2) {
    return;
  }
  (**(code **)(param_1[0x3bc] + 4))();
  FUN_009fdde0();
  return;
}

// 0057EEB0  FUN_0057eeb0  size=792  [run]
void __fastcall FUN_0057eeb0(int param_1)

{
  int iVar1;
  undefined *puVar2;
  
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    iVar1 = FUN_00a94360();
    if (iVar1 != 0) {
      FUN_00a9e060(0);
    }
    if (*(int *)(param_1 + 0x764) != 0) {
      FUN_008e0ae0(0);
    }
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined4 *)(param_1 + 0x94) = 0;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0x9c) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    FUN_00a9ed60(0x20310,&DAT_016420ac,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined4 *)(param_1 + 0x94) = 0;
      *(undefined4 *)(param_1 + 0x98) = 0;
      *(undefined4 *)(param_1 + 0x9c) = 0;
      *(undefined4 *)(param_1 + 0x50) = 0;
      *(undefined4 *)(param_1 + 0x54) = 0;
      *(undefined4 *)(param_1 + 0x58) = 0;
      *(undefined4 *)(param_1 + 0x5c) = 0;
      puVar2 = &DAT_016420a4;
LAB_0057efbe:
      FUN_00a9ed60(0x20310,puVar2,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      return;
    }
    break;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 == 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined4 *)(param_1 + 0x94) = 0;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0x9c) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    puVar2 = &DAT_0164209c;
    goto LAB_0057efbe;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined4 *)(param_1 + 0x94) = 0;
      *(undefined4 *)(param_1 + 0x98) = 0;
      *(undefined4 *)(param_1 + 0x9c) = 0;
      *(undefined4 *)(param_1 + 0x50) = 0;
      *(undefined4 *)(param_1 + 0x54) = 0;
      *(undefined4 *)(param_1 + 0x58) = 0;
      *(undefined4 *)(param_1 + 0x5c) = 0;
      puVar2 = &DAT_01642094;
      goto LAB_0057efbe;
    }
    break;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined4 *)(param_1 + 0x94) = 0;
      *(undefined4 *)(param_1 + 0x98) = 0;
      *(undefined4 *)(param_1 + 0x9c) = 0;
      *(undefined4 *)(param_1 + 0x50) = 0;
      *(undefined4 *)(param_1 + 0x54) = 0;
      *(undefined4 *)(param_1 + 0x58) = 0;
      *(undefined4 *)(param_1 + 0x5c) = 0;
      puVar2 = &DAT_0164208c;
      goto LAB_0057efbe;
    }
    break;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined4 *)(param_1 + 0x94) = 0;
      *(undefined4 *)(param_1 + 0x98) = 0;
      *(undefined4 *)(param_1 + 0x9c) = 0;
      *(undefined4 *)(param_1 + 0x50) = 0;
      *(undefined4 *)(param_1 + 0x54) = 0;
      *(undefined4 *)(param_1 + 0x58) = 0;
      *(undefined4 *)(param_1 + 0x5c) = 0;
      puVar2 = &DAT_01642084;
      goto LAB_0057efbe;
    }
    break;
  case 6:
    FUN_00ac80a0(0x3f800000,0x3f800000);
  }
  return;
}

// 0057F200  FUN_0057f200  size=597  [run]
void __fastcall FUN_0057f200(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  switch(param_1[0x187]) {
  case 0:
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    FUN_00a9ed60(0x20310,&DAT_016420cc,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_0057f281;
  case 1:
LAB_0057f281:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      param_1[0x24] = 0;
      param_1[0x25] = 0;
      param_1[0x26] = 0;
      param_1[0x27] = 0;
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      puVar2 = &DAT_016420c4;
LAB_0057f2f1:
      FUN_00a9ed60(0x20310,puVar2,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 == 0) {
      return;
    }
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    puVar2 = &DAT_016420bc;
    goto LAB_0057f2f1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      param_1[0x24] = 0;
      param_1[0x25] = 0;
      param_1[0x26] = 0;
      param_1[0x27] = 0;
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      puVar2 = &DAT_016420b4;
      goto LAB_0057f2f1;
    }
    break;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a8c760(10);
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x20))();
    }
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x20))();
      FUN_009fdde0();
      return;
    }
  }
  return;
}


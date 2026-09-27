// src/managers/targetmanager/TargetManagerImplement.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C15740..00C59850, 25 functions

#include "mgrr.h"
#include "TargetManagerImplement.h"

// 00C15740  TargetManagerImplement::TargetManagerImplement  size=29  [class]
undefined4 * __fastcall TargetManagerImplement::TargetManagerImplement(undefined4 *param_1)

{
  *param_1 = vftable;
  FUN_00a7c930();
  param_1[5] = 0;
  param_1[7] = 0;
  return param_1;
}

// 00C15760  TargetManagerImplement::vf00  size=12  [class]
void __fastcall TargetManagerImplement::vf00(int param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}

// 00C15770  TargetManagerImplement::vf04  size=30  [class]
void TargetManagerImplement::vf04(void)

{
  if (DAT_01bea108 != (int *)0x0) {
    (**(code **)(*DAT_01bea108 + 8))(1);
    DAT_01bea108 = (int *)0x0;
  }
  return;
}

// 00C157A0  TargetManagerImplement::vf08  size=31  [class]
undefined4 * __thiscall TargetManagerImplement::vf08(undefined4 *param_1,byte param_2)

{
  *param_1 = TargetManager::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C157C0  TargetManagerImplement::vf40  size=43  [class]
void __thiscall TargetManagerImplement::vf40(int param_1,int param_2)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 4) = 1;
  FUN_00a7c950();
  if (param_2 != 0) {
    uVar1 = FUN_00a7c7f0();
    FUN_00a7c960(uVar1);
  }
  return;
}

// 00C157F0  TargetManagerImplement::vf48  size=4  [class]
undefined4 __fastcall TargetManagerImplement::vf48(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}

// 00C15800  TargetManagerImplement::vf4C  size=8  [class]
void TargetManagerImplement::vf4C(void)

{
  FUN_00a81330();
  return;
}

// 00C26530  TargetManagerImplement::TargetManagerImplement_2  size=77  [class]
void TargetManagerImplement::TargetManagerImplement_2(void)

{
  undefined4 *puVar1;
  
  if (DAT_01bea108 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_00dd3500(0x24,&DAT_01b7bcf0);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = vftable;
      FUN_00a7c930();
      puVar1[5] = 0;
      puVar1[7] = 0;
      DAT_01bea108 = puVar1;
      return;
    }
    DAT_01bea108 = (undefined4 *)0x0;
  }
  return;
}

// 00C26580  TargetManagerImplement::vf0C  size=246  [class]
void __fastcall TargetManagerImplement::vf0C(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    if (*(int *)(param_1 + 0x10) != 0) {
      iVar1 = FUN_00a7ca30();
      piVar4 = *(int **)(iVar1 + 4);
      iVar1 = FUN_00a7ca30();
      for (; piVar4 != (int *)(*(int *)(iVar1 + 4) + *(int *)(iVar1 + 8) * 4); piVar4 = piVar4 + 1)
      {
        if ((*piVar4 != 0) && (*(int *)(param_1 + 0xc) == *piVar4)) goto LAB_00c265ce;
      }
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
LAB_00c265ce:
  if (*(int *)(param_1 + 0x1c) != 0) {
    if (*(int *)(param_1 + 0x20) != 0) {
      iVar1 = FUN_00a7ca30();
      piVar4 = *(int **)(iVar1 + 4);
      iVar2 = FUN_00a7ca30();
      iVar1 = *(int *)(iVar2 + 8);
      iVar2 = *(int *)(iVar2 + 4);
      for (; piVar4 != (int *)(iVar2 + iVar1 * 4); piVar4 = piVar4 + 1) {
        if (((*piVar4 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) &&
           (*(int *)(param_1 + 0x1c) == iVar3)) goto LAB_00c26621;
      }
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
LAB_00c26621:
  if (*(int *)(param_1 + 0x14) != 0) {
    if (*(int *)(param_1 + 0x18) != 0) {
      iVar1 = FUN_00a7ca30();
      piVar4 = *(int **)(iVar1 + 4);
      iVar2 = FUN_00a7ca30();
      iVar1 = *(int *)(iVar2 + 8);
      iVar2 = *(int *)(iVar2 + 4);
      for (; piVar4 != (int *)(iVar2 + iVar1 * 4); piVar4 = piVar4 + 1) {
        if (((*piVar4 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) &&
           (*(int *)(param_1 + 0x14) == iVar3)) {
          return;
        }
      }
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return;
}

// 00C26680  TargetManagerImplement::vf10  size=209  [class]
void TargetManagerImplement::vf10(void)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined1 local_40 [32];
  undefined1 local_20 [32];
  
  iVar5 = 0;
  FUN_00f96550(0x43c80000,0x42aa0000,&DAT_016575ac,&DAT_016a3db4);
  iVar2 = FUN_00a7ca30();
  piVar4 = *(int **)(iVar2 + 4);
  iVar3 = FUN_00a7ca30();
  iVar2 = *(int *)(iVar3 + 8);
  iVar3 = *(int *)(iVar3 + 4);
  for (; piVar4 != (int *)(iVar3 + iVar2 * 4); piVar4 = piVar4 + 1) {
    FUN_009f92a0(local_20,0x20,*(undefined4 *)(*piVar4 + 0x24));
    FUN_009f92f0(local_40,0x20,*(undefined4 *)(*piVar4 + 0x24));
    fVar1 = (float)iVar5;
    if (iVar5 < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    FUN_00f96550(0x43c80000,fVar1 * 15.0 + 100.0,&DAT_0165864c,local_20,local_40);
    iVar5 = iVar5 + 1;
  }
  return;
}

// 00C26760  TargetManagerImplement::vf14  size=898  [class]
void __fastcall TargetManagerImplement::vf14(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  float fStack_60;
  undefined4 uStack_5c;
  undefined1 local_50 [32];
  undefined1 local_30 [44];
  
  iVar1 = FUN_00a7ca30();
  piVar5 = *(int **)(iVar1 + 4);
  iVar2 = FUN_00a7ca30();
  iVar1 = *(int *)(iVar2 + 8);
  iVar2 = *(int *)(iVar2 + 4);
  for (; piVar5 != (int *)(iVar2 + iVar1 * 4); piVar5 = piVar5 + 1) {
    if (*piVar5 != 0) {
      puVar3 = (undefined4 *)FUN_00a7c8b0();
      local_70 = *puVar3;
      local_6c = puVar3[1];
      local_68 = puVar3[2];
      local_64 = puVar3[3];
      piVar4 = (int *)FUN_00a7c8a0();
      if (piVar4 != (int *)0x0) {
        FUN_009f92a0(local_50,0x20,piVar4[300]);
        FUN_009f92f0(local_30,0x20,piVar4[300]);
        puVar3 = (undefined4 *)(**(code **)(*piVar4 + 0x68))();
        local_70 = *puVar3;
        local_6c = puVar3[1];
        local_68 = puVar3[2];
        local_64 = puVar3[3];
        FUN_00d9fa80(&fStack_60,&local_70);
        FUN_00f95eb0(ABS(fStack_60),uStack_5c,0x40a00000,
                     (-(uint)(piVar4[0x1a4] != 0) & 0xfe0100) - 0xff0100);
      }
    }
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_009f92a0(local_30,0x20,*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x24));
    FUN_009f92f0(local_50,0x20,*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x24));
    puVar3 = (undefined4 *)FUN_00a7c8b0();
    local_70 = *puVar3;
    local_6c = puVar3[1];
    local_68 = puVar3[2];
    local_64 = puVar3[3];
    FUN_00d9fa80(&fStack_60,&local_70);
    FUN_00f95eb0(fStack_60,uStack_5c,0x41a00000,0xffff0000);
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    FUN_009f92a0(local_30,0x20,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x4b0));
    FUN_009f92f0(local_50,0x20,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x4b0));
    puVar3 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0x1c) + 0x68))();
    local_70 = *puVar3;
    iVar1 = *(int *)(param_1 + 0x1c);
    local_6c = puVar3[1];
    local_68 = puVar3[2];
    local_64 = puVar3[3];
    iVar2 = FUN_00a12290(3);
    if (iVar2 == 0) {
      local_70 = *(undefined4 *)(iVar1 + 0x40);
      local_6c = *(undefined4 *)(iVar1 + 0x44);
      local_68 = *(undefined4 *)(iVar1 + 0x48);
      local_64 = *(undefined4 *)(iVar1 + 0x4c);
    }
    else {
      local_70 = *(undefined4 *)(iVar2 + 0x40);
      local_6c = *(undefined4 *)(iVar2 + 0x44);
      local_68 = *(undefined4 *)(iVar2 + 0x48);
      local_64 = *(undefined4 *)(iVar2 + 0x4c);
    }
    FUN_00d9fa80(&fStack_60,&local_70);
    FUN_00f95eb0(fStack_60,uStack_5c,0x41200000,0xff0000ff);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_009f92a0(local_30,0x20,*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x4b0));
    FUN_009f92f0(local_50,0x20,*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x4b0));
    puVar3 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0x14) + 0x68))();
    local_70 = *puVar3;
    iVar1 = *(int *)(param_1 + 0x14);
    local_6c = puVar3[1];
    local_68 = puVar3[2];
    local_64 = puVar3[3];
    iVar2 = FUN_00a12290(3);
    if (iVar2 == 0) {
      local_70 = *(undefined4 *)(iVar1 + 0x40);
      local_6c = *(undefined4 *)(iVar1 + 0x44);
      local_68 = *(undefined4 *)(iVar1 + 0x48);
      local_64 = *(undefined4 *)(iVar1 + 0x4c);
    }
    else {
      local_70 = *(undefined4 *)(iVar2 + 0x40);
      local_6c = *(undefined4 *)(iVar2 + 0x44);
      local_68 = *(undefined4 *)(iVar2 + 0x48);
      local_64 = *(undefined4 *)(iVar2 + 0x4c);
    }
    FUN_00d9fa80(&fStack_60,&local_70);
    FUN_00f95eb0(fStack_60,uStack_5c,0x41700000,0xff00ff00);
  }
  return;
}

// 00C26AF0  TargetManagerImplement::vf18  size=102  [class]
undefined4 __fastcall TargetManagerImplement::vf18(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    if (*(int *)(param_1 + 0x10) == 0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      return *(undefined4 *)(param_1 + 0xc);
    }
    iVar1 = FUN_00a7ca30();
    piVar2 = *(int **)(iVar1 + 4);
    iVar1 = FUN_00a7ca30();
    for (; piVar2 != (int *)(*(int *)(iVar1 + 4) + *(int *)(iVar1 + 8) * 4); piVar2 = piVar2 + 1) {
      if ((*piVar2 != 0) && (*(int *)(param_1 + 0xc) == *piVar2)) goto LAB_00c26b45;
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
LAB_00c26b45:
  return *(undefined4 *)(param_1 + 0xc);
}

// 00C26B60  TargetManagerImplement::vf1C  size=95  [class]
void __thiscall TargetManagerImplement::vf1C(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (param_2 != 0) {
    iVar1 = FUN_00a7ca30();
    piVar3 = *(int **)(iVar1 + 4);
    iVar2 = FUN_00a7ca30();
    iVar1 = *(int *)(iVar2 + 8);
    iVar2 = *(int *)(iVar2 + 4);
    for (; piVar3 != (int *)(iVar2 + iVar1 * 4); piVar3 = piVar3 + 1) {
      if ((*piVar3 != 0) && (param_2 == *piVar3)) {
        *(int *)(param_1 + 0xc) = param_2;
        *(undefined4 *)(param_1 + 0x10) = 1;
      }
    }
    return;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}

// 00C26BC0  TargetManagerImplement::vf20  size=113  [class]
undefined4 __fastcall TargetManagerImplement::vf20(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    if (*(int *)(param_1 + 0x18) == 0) {
      *(undefined4 *)(param_1 + 0x14) = 0;
      return *(undefined4 *)(param_1 + 0x14);
    }
    iVar1 = FUN_00a7ca30();
    piVar4 = *(int **)(iVar1 + 4);
    iVar2 = FUN_00a7ca30();
    iVar1 = *(int *)(iVar2 + 8);
    iVar2 = *(int *)(iVar2 + 4);
    for (; piVar4 != (int *)(iVar2 + iVar1 * 4); piVar4 = piVar4 + 1) {
      if (((*piVar4 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) &&
         (*(int *)(param_1 + 0x14) == iVar3)) goto LAB_00c26c20;
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
LAB_00c26c20:
  return *(undefined4 *)(param_1 + 0x14);
}

// 00C26C40  TargetManagerImplement::vf24  size=105  [class]
void __thiscall TargetManagerImplement::vf24(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    return;
  }
  iVar1 = FUN_00a7ca30();
  piVar4 = *(int **)(iVar1 + 4);
  iVar2 = FUN_00a7ca30();
  iVar1 = *(int *)(iVar2 + 8);
  iVar2 = *(int *)(iVar2 + 4);
  for (; piVar4 != (int *)(iVar2 + iVar1 * 4); piVar4 = piVar4 + 1) {
    if (((*piVar4 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) && (param_2 == iVar3)) {
      *(int *)(param_1 + 0x14) = param_2;
      *(undefined4 *)(param_1 + 0x18) = 1;
    }
  }
  return;
}

// 00C26CB0  TargetManagerImplement::vf28  size=113  [class]
undefined4 __fastcall TargetManagerImplement::vf28(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    if (*(int *)(param_1 + 0x20) == 0) {
      *(undefined4 *)(param_1 + 0x1c) = 0;
      return *(undefined4 *)(param_1 + 0x1c);
    }
    iVar1 = FUN_00a7ca30();
    piVar4 = *(int **)(iVar1 + 4);
    iVar2 = FUN_00a7ca30();
    iVar1 = *(int *)(iVar2 + 8);
    iVar2 = *(int *)(iVar2 + 4);
    for (; piVar4 != (int *)(iVar2 + iVar1 * 4); piVar4 = piVar4 + 1) {
      if (((*piVar4 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) &&
         (*(int *)(param_1 + 0x1c) == iVar3)) goto LAB_00c26d10;
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
LAB_00c26d10:
  return *(undefined4 *)(param_1 + 0x1c);
}

// 00C26D30  TargetManagerImplement::vf2C  size=105  [class]
void __thiscall TargetManagerImplement::vf2C(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    return;
  }
  iVar1 = FUN_00a7ca30();
  piVar4 = *(int **)(iVar1 + 4);
  iVar2 = FUN_00a7ca30();
  iVar1 = *(int *)(iVar2 + 8);
  iVar2 = *(int *)(iVar2 + 4);
  for (; piVar4 != (int *)(iVar2 + iVar1 * 4); piVar4 = piVar4 + 1) {
    if (((*piVar4 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) && (param_2 == iVar3)) {
      *(int *)(param_1 + 0x1c) = param_2;
      *(undefined4 *)(param_1 + 0x20) = 1;
    }
  }
  return;
}

// 00C26DA0  TargetManagerImplement::vf30  size=14  [class]
undefined4 TargetManagerImplement::vf30(void)

{
  int iVar1;
  
  iVar1 = FUN_00a7ca30();
  return *(undefined4 *)(iVar1 + 8);
}

// 00C26DB0  TargetManagerImplement::vf34  size=390  [class]
int TargetManagerImplement::vf34
              (int param_1,float param_2,float param_3,float param_4,int param_5,int param_6)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  float10 fVar11;
  float local_30;
  int local_2c;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  if (param_1 != 0) {
    local_2c = 0;
    iVar5 = FUN_00a7c800();
    if (iVar5 != 0) {
      iVar6 = FUN_00a7ca30();
      piVar10 = *(int **)(iVar6 + 4);
      iVar7 = FUN_00a7ca30();
      iVar6 = *(int *)(iVar7 + 8);
      iVar7 = *(int *)(iVar7 + 4);
      local_30 = param_3;
      do {
        if (piVar10 == (int *)(iVar7 + iVar6 * 4)) {
          return local_2c;
        }
        iVar1 = *piVar10;
        if (((iVar1 != 0) && (iVar1 != param_1)) && ((*(byte *)(iVar1 + 0x28) & 2) == 0)) {
          if ((param_5 != 0) && (iVar8 = 0, 0 < param_6)) {
            do {
              if (*(int *)(param_5 + iVar8 * 4) == iVar1) goto LAB_00c26f18;
              iVar8 = iVar8 + 1;
            } while (iVar8 < param_6);
          }
          piVar9 = (int *)FUN_00a7c8a0();
          if (((piVar9 != (int *)0x0) && (iVar8 = (**(code **)(*piVar9 + 0x200))(), iVar8 != 0)) &&
             ((iVar8 = FUN_00a7c800(), iVar8 != 0 &&
              ((**(code **)(*piVar9 + 0x204))(&fStack_20),
              fVar2 = fStack_20 - *(float *)(iVar5 + 0x50),
              fVar4 = fStack_1c - *(float *)(iVar5 + 0x54),
              fVar3 = fStack_18 - *(float *)(iVar5 + 0x58),
              fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3 <= param_4 * param_4)))) {
            fVar11 = (float10)FUN_009f8c60(iVar8 + 0x50);
            fVar11 = (float10)FUN_00ddba30((float)(fVar11 - (float10)param_2));
            if (ABS(fVar11) <= (float10)local_30) {
              local_30 = (float)ABS(fVar11);
              local_2c = iVar1;
            }
          }
        }
LAB_00c26f18:
        piVar10 = piVar10 + 1;
      } while( true );
    }
  }
  return 0;
}

// 00C26F40  TargetManagerImplement::vf38  size=116  [class]
undefined4 TargetManagerImplement::vf38(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  if ((param_1 != 0) && (iVar2 = FUN_00a7c800(), iVar2 != 0)) {
    iVar2 = FUN_00a7ca30();
    piVar5 = *(int **)(iVar2 + 4);
    iVar3 = FUN_00a7ca30();
    iVar2 = *(int *)(iVar3 + 8);
    iVar3 = *(int *)(iVar3 + 4);
    for (; piVar5 != (int *)(iVar3 + iVar2 * 4); piVar5 = piVar5 + 1) {
      iVar1 = *piVar5;
      if ((((iVar1 != 0) && (iVar1 != param_1)) && ((*(byte *)(iVar1 + 0x28) & 2) == 0)) &&
         (piVar4 = (int *)FUN_00a7c8a0(), piVar4 != (int *)0x0)) {
        (**(code **)(*piVar4 + 0x200))();
      }
    }
  }
  return 0;
}

// 00C26FC0  TargetManagerImplement::vf3C  size=118  [class]
undefined4 TargetManagerImplement::vf3C(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  if (DAT_01be8e54 != 0) {
    iVar1 = FUN_00a7ca30();
    piVar5 = *(int **)(iVar1 + 4);
    iVar2 = FUN_00a7ca30();
    iVar1 = *(int *)(iVar2 + 8);
    iVar2 = *(int *)(iVar2 + 4);
    for (; piVar5 != (int *)(iVar2 + iVar1 * 4); piVar5 = piVar5 + 1) {
      if ((((*piVar5 != 0) && ((*(byte *)(*piVar5 + 0x28) & 2) == 0)) &&
          (iVar3 = FUN_00a7c800(), iVar3 != 0)) &&
         (((*(byte *)(iVar3 + 0x4c0) & 0x20) != 0 &&
          (piVar4 = (int *)FUN_00a7c8a0(), piVar4 != (int *)0x0)))) {
        (**(code **)(*piVar4 + 0x200))();
      }
    }
  }
  return 0;
}

// 00C27040  TargetManagerImplement::vf44  size=237  [class]
undefined4 TargetManagerImplement::vf44(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  if (DAT_01be8e54 == 0) {
    return 0;
  }
  iVar1 = FUN_00a7ca30();
  piVar5 = *(int **)(iVar1 + 4);
  iVar2 = FUN_00a7ca30();
  iVar1 = *(int *)(iVar2 + 8);
  iVar2 = *(int *)(iVar2 + 4);
  do {
    if (piVar5 == (int *)(iVar2 + iVar1 * 4)) {
      return 0;
    }
    if ((((*piVar5 != 0) && ((*(byte *)(*piVar5 + 0x28) & 2) == 0)) &&
        (iVar3 = FUN_00a7c800(), iVar3 != 0)) &&
       ((((*(byte *)(iVar3 + 0x4c0) & 0x20) != 0 &&
         (piVar4 = (int *)FUN_00a7c8a0(), piVar4 != (int *)0x0)) &&
        ((iVar3 = (**(code **)(*piVar4 + 0x200))(), iVar3 != 0 && (piVar4[0x1bb] != 0)))))) {
      iVar3 = piVar4[300];
      if (iVar3 == 0x20200) {
        *param_1 = 0xbe860a92;
        return 1;
      }
      if (iVar3 == 0x20030) {
        *param_1 = 0xbd0efa35;
        return 1;
      }
      if (iVar3 == 0x20040) {
        *param_1 = 0x3e567750;
        return 1;
      }
    }
    piVar5 = piVar5 + 1;
  } while( true );
}

// 00C27130  TargetManagerImplement::vf58  size=300  [class]
int TargetManagerImplement::vf58(int param_1,float param_2,float param_3,float param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  int *piVar11;
  float10 fVar12;
  int local_8;
  
  if (param_1 != 0) {
    local_8 = 0;
    iVar6 = FUN_00a7c800();
    if (iVar6 != 0) {
      fVar2 = param_4 * param_4;
      iVar7 = FUN_00a7ca30();
      piVar11 = *(int **)(iVar7 + 4);
      iVar8 = FUN_00a7ca30();
      iVar7 = *(int *)(iVar8 + 8);
      iVar8 = *(int *)(iVar8 + 4);
      param_4 = param_3;
      for (; piVar11 != (int *)(iVar8 + iVar7 * 4); piVar11 = piVar11 + 1) {
        iVar1 = *piVar11;
        if ((((iVar1 != 0) && (iVar1 != param_1)) && ((*(byte *)(iVar1 + 0x28) & 2) == 0)) &&
           ((iVar9 = FUN_00a7c800(), iVar9 != 0 &&
            (pfVar10 = (float *)FUN_00a7c8b0(), fVar3 = *pfVar10 - *(float *)(iVar6 + 0x50),
            fVar5 = pfVar10[1] - *(float *)(iVar6 + 0x54),
            fVar4 = pfVar10[2] - *(float *)(iVar6 + 0x58),
            fVar5 * fVar5 + fVar3 * fVar3 + fVar4 * fVar4 <= fVar2)))) {
          fVar12 = (float10)FUN_009f8c60(iVar9 + 0x50);
          fVar12 = (float10)FUN_00ddba30((float)(fVar12 - (float10)param_2));
          if (ABS(fVar12) <= (float10)param_4) {
            param_4 = (float)ABS(fVar12);
            local_8 = iVar1;
          }
        }
      }
      return local_8;
    }
  }
  return 0;
}

// 00C595E0  TargetManagerImplement::vf50  size=608  [class]
undefined4 TargetManagerImplement::vf50(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  float10 fVar9;
  undefined4 *local_1c;
  uint local_18;
  uint local_14;
  float fStack_8;
  int iStack_4;
  
  local_1c = (undefined4 *)0x0;
  local_18 = 0;
  local_14 = 0x80000000;
  FUN_0100a210(&PTR_vftable_018e9b94,&local_1c,0x40,0x10);
  iVar6 = 0x40 - local_18;
  if (0 < iVar6) {
    puVar2 = local_1c + local_18 * 4 + 2;
    do {
      if (puVar2 != (undefined4 *)&DAT_00000008) {
        *puVar2 = 0;
        puVar2[-2] = 0;
        puVar2[1] = 0;
        puVar2[-1] = 0;
      }
      puVar2 = puVar2 + 4;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  local_18 = 0;
  iVar6 = FUN_00a7ca30();
  if (*(uint *)(iVar6 + 8) < 2) {
    local_18 = 0;
    if (-1 < (int)local_14) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_1c,local_14 << 4);
    }
    return 0;
  }
  iVar6 = FUN_00a7ca30();
  piVar8 = *(int **)(iVar6 + 4);
  iVar3 = FUN_00a7ca30();
  iVar6 = *(int *)(iVar3 + 8);
  iVar3 = *(int *)(iVar3 + 4);
  uVar7 = local_14;
  for (; piVar8 != (int *)(iVar3 + iVar6 * 4); piVar8 = piVar8 + 1) {
    iVar1 = *piVar8;
    if ((((iVar1 != 0) && ((*(byte *)(iVar1 + 0x28) & 2) == 0)) && (iVar1 != param_3)) &&
       (((piVar4 = (int *)FUN_00a7c8a0(), uVar7 = local_14, piVar4 != (int *)0x0 &&
         (iVar5 = (**(code **)(*piVar4 + 0x200))(), uVar7 = local_14, iVar5 != 0)) &&
        (piVar4[0x1bb] != 0)))) {
      iStack_4 = 0;
      fVar9 = (float10)FUN_00dc0f70(piVar4,0x41000000);
      fStack_8 = (float)fVar9;
      if (local_18 == (local_14 & 0x3fffffff)) {
        FUN_0100a290(&PTR_vftable_018e9b94,&local_1c,0x10);
      }
      piVar4 = local_1c + local_18 * 4;
      if (piVar4 != (int *)0x0) {
        *piVar4 = iVar1;
        piVar4[1] = 0;
        piVar4[2] = (int)fStack_8;
        piVar4[3] = iStack_4;
      }
      local_18 = local_18 + 1;
      uVar7 = local_14;
    }
  }
  if (1 < (int)local_18) {
    FUN_00c3fa00(local_1c,0,local_18 - 1,&LAB_00c15810);
    uVar7 = local_14;
  }
  if (local_18 == 0) {
    local_18 = 0;
    if (-1 < (int)uVar7) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_1c,uVar7 << 4);
    }
    return 0;
  }
  if (0 < (int)local_18) {
    *param_1 = *local_1c;
  }
  if (1 < (int)local_18) {
    *param_2 = local_1c[4];
  }
  local_18 = 0;
  if (-1 < (int)uVar7) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_1c,uVar7 << 4);
  }
  return 1;
}

// 00C59850  TargetManagerImplement::vf54  size=632  [class]
undefined4 TargetManagerImplement::vf54(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  float10 fVar9;
  undefined4 *local_1c;
  uint local_18;
  uint local_14;
  float fStack_8;
  int iStack_4;
  
  local_1c = (undefined4 *)0x0;
  local_18 = 0;
  local_14 = 0x80000000;
  FUN_0100a210(&PTR_vftable_018e9b94,&local_1c,0x40,0x10);
  iVar6 = 0x40 - local_18;
  if (0 < iVar6) {
    puVar2 = local_1c + local_18 * 4 + 2;
    do {
      if (puVar2 != (undefined4 *)&DAT_00000008) {
        *puVar2 = 0;
        puVar2[-2] = 0;
        puVar2[1] = 0;
        puVar2[-1] = 0;
      }
      puVar2 = puVar2 + 4;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  local_18 = 0;
  iVar6 = FUN_00a7ca30();
  if (*(int *)(iVar6 + 8) == 0) {
    local_18 = 0;
    if (-1 < (int)local_14) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_1c,local_14 << 4);
    }
    return 0;
  }
  iVar6 = FUN_00a7ca30();
  piVar8 = *(int **)(iVar6 + 4);
  iVar3 = FUN_00a7ca30();
  iVar6 = *(int *)(iVar3 + 8);
  iVar3 = *(int *)(iVar3 + 4);
  uVar7 = local_14;
  for (; piVar8 != (int *)(iVar3 + iVar6 * 4); piVar8 = piVar8 + 1) {
    iVar1 = *piVar8;
    if ((((iVar1 != 0) && ((*(byte *)(iVar1 + 0x28) & 2) == 0)) &&
        (piVar4 = (int *)FUN_00a7c8a0(), uVar7 = local_14, piVar4 != (int *)0x0)) &&
       ((iVar5 = (**(code **)(*piVar4 + 0x200))(), uVar7 = local_14, iVar5 != 0 &&
        (piVar4[0x1bb] != 0)))) {
      iStack_4 = 0;
      fVar9 = (float10)FUN_00dc0f70(piVar4,0x41000000);
      fStack_8 = (float)fVar9;
      if (local_18 == (local_14 & 0x3fffffff)) {
        FUN_0100a290(&PTR_vftable_018e9b94,&local_1c,0x10);
      }
      piVar4 = local_1c + local_18 * 4;
      if (piVar4 != (int *)0x0) {
        *piVar4 = iVar1;
        piVar4[1] = 0;
        piVar4[2] = (int)fStack_8;
        piVar4[3] = iStack_4;
      }
      local_18 = local_18 + 1;
      uVar7 = local_14;
    }
  }
  if (1 < (int)local_18) {
    FUN_00c3fa00(local_1c,0,local_18 - 1,&LAB_00c15810);
    uVar7 = local_14;
  }
  if (local_18 == 0) {
    local_18 = 0;
    if (-1 < (int)uVar7) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_1c,uVar7 << 4);
    }
    return 0;
  }
  if ((0 < (int)local_18) && (param_1 != (undefined4 *)0x0)) {
    *param_1 = *local_1c;
  }
  if ((1 < (int)local_18) && (param_2 != (undefined4 *)0x0)) {
    *param_2 = local_1c[4];
  }
  if ((2 < (int)local_18) && (param_3 != (undefined4 *)0x0)) {
    *param_3 = local_1c[8];
  }
  local_18 = 0;
  if (-1 < (int)uVar7) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_1c,uVar7 << 4);
  }
  return 1;
}


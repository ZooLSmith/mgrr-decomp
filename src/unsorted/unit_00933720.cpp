// src/unsorted/unit_00933720.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00933720..009350A0, 43 functions

#include "mgrr.h"

// 00933720  FUN_00933720  size=14  [run]
void __fastcall FUN_00933720(int param_1)

{
  if (*(int *)(param_1 + 0xc) == 1) {
    *(undefined4 *)(param_1 + 0xc) = 2;
  }
  return;
}

// 00933750  FUN_00933750  size=14  [run]
bool __fastcall FUN_00933750(int param_1)

{
  return *(int *)(param_1 + 0xc) == 4;
}

// 00933840  FUN_00933840  size=76  [run]
void __fastcall FUN_00933840(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  bVar1 = true;
  piVar3 = (int *)(param_1 + 0x2278);
  iVar4 = 0x10;
  do {
    if (*piVar3 != -1) {
      iVar2 = FUN_00a00ca0(*piVar3,0);
      if (iVar2 == 0) {
        bVar1 = false;
      }
      else {
        *piVar3 = -1;
      }
    }
    piVar3 = piVar3 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  if (bVar1) {
    *(undefined4 *)(param_1 + 0xc) = 4;
  }
  return;
}

// 00933890  FUN_00933890  size=22  [run]
void __thiscall FUN_00933890(int param_1,int param_2)

{
  if (param_2 != 0) {
    *(int *)(param_1 + 4) = param_2;
  }
  *(undefined4 *)(param_1 + 0xc) = 1;
  return;
}

// 009338B0  FUN_009338b0  size=1  [run]
void FUN_009338b0(void)

{
  return;
}

// 009338C0  FUN_009338c0  size=1  [run]
void FUN_009338c0(void)

{
  return;
}

// 009338D0  FUN_009338d0  size=1  [run]
void FUN_009338d0(void)

{
  return;
}

// 009338E0  FUN_009338e0  size=12  [run]
void __fastcall FUN_009338e0(int param_1)

{
  *(undefined4 *)(param_1 + 0x50) = 1;
  *(undefined4 *)(param_1 + 0x4c) = 1;
  return;
}

// 009338F0  FUN_009338f0  size=8  [run]
void __fastcall FUN_009338f0(int param_1)

{
  *(undefined4 *)(param_1 + 0x4c) = 0;
  return;
}

// 00933900  FUN_00933900  size=8  [run]
void __fastcall FUN_00933900(int param_1)

{
  *(undefined4 *)(param_1 + 0x54) = 1;
  return;
}

// 00933910  FUN_00933910  size=8  [run]
void __fastcall FUN_00933910(int param_1)

{
  *(undefined4 *)(param_1 + 0x54) = 0;
  return;
}

// 00933BF0  FUN_00933bf0  size=120  [run]
undefined4 * __thiscall
FUN_00933bf0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5,undefined4 param_6)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_6;
  FUN_00a7c930();
  param_1[5] = 0;
  param_1[6] = param_5[0x14];
  param_1[7] = param_5[0x15];
  param_1[8] = param_5[0x16];
  param_1[9] = param_5[0x17];
  param_1[10] = param_5[0x18];
  param_1[0xb] = param_5[0x19];
  param_1[0xc] = param_5[0x1a];
  param_1[0xd] = param_5[0x1b];
  param_1[0xe] = param_5[0x1c];
  param_1[0xf] = *param_5;
  param_1[0x10] = param_5[0x1f];
  return param_1;
}

// 00933C70  FUN_00933c70  size=230  [run]
void FUN_00933c70(float *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  float10 fVar3;
  float10 fVar4;
  
  uVar1 = param_2[1];
  uVar2 = *param_2;
  fVar3 = (float10)6.2831855;
  fVar4 = (float10)9.536743e-07;
  *param_1 = (float)((-(float10)0 + (float10)(uVar2 & 0xfffff)) * fVar3 * fVar4);
  param_1[1] = (float)((-(float10)0 + (float10)(uVar2 >> 0x14 | (uVar1 & 0xff) << 0xc)) * fVar3 *
                      fVar4);
  param_1[2] = (float)((-(float10)0 + (float10)(uVar1 >> 8 & 0xfffff)) * fVar3 * fVar4);
  return;
}

// 00933D60  FUN_00933d60  size=78  [run]
undefined4 __thiscall FUN_00933d60(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x14))) &&
     (param_2 < *(int *)(param_1 + 0x70))) {
    iVar1 = *(int *)(param_1 + 0x6c);
    iVar2 = FUN_00a81330();
    if (iVar2 != 0) {
      FUN_00a805f0();
      *(undefined4 *)(iVar1 + param_2 * 0x44 + 0x14) = 3;
      return 1;
    }
    return 0;
  }
  return 0;
}

// 00933DB0  FUN_00933db0  size=83  [run]
void __fastcall FUN_00933db0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x6c);
  if (iVar2 != iVar2 + *(int *)(param_1 + 0x70) * 0x44) {
    do {
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        FUN_00a805f0();
        *(undefined4 *)(iVar2 + 0x14) = 3;
      }
      iVar2 = iVar2 + 0x44;
    } while (iVar2 != *(int *)(param_1 + 0x6c) + *(int *)(param_1 + 0x70) * 0x44);
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  return;
}

// 00933E10  FUN_00933e10  size=84  [run]
void __thiscall FUN_00933e10(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x6c);
  if (iVar2 != iVar2 + *(int *)(param_1 + 0x70) * 0x44) {
    do {
      iVar1 = FUN_00a81330();
      if ((iVar1 != 0) && (iVar1 == param_2)) {
        *(undefined4 *)(iVar2 + 0x14) = 3;
      }
      iVar2 = iVar2 + 0x44;
    } while (iVar2 != *(int *)(param_1 + 0x6c) + *(int *)(param_1 + 0x70) * 0x44);
  }
  return;
}

// 00933E80  FUN_00933e80  size=32  [run]
undefined4 __thiscall FUN_00933e80(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x14))) {
    uVar1 = FUN_00a81330();
    return uVar1;
  }
  return 0;
}

// 00933F00  FUN_00933f00  size=14  [run]
void __fastcall FUN_00933f00(int param_1)

{
  if (*(int *)(param_1 + 0x6c) != 0) {
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  return;
}

// 00933F10  FUN_00933f10  size=65  [run]
void __fastcall FUN_00933f10(undefined4 *param_1)

{
  if (param_1[1] != 0) {
    if (param_1[1] != 0) {
      FUN_00dd48d0(param_1[1],0);
      param_1[1] = 0;
    }
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = *param_1;
    param_1[5] = *param_1;
    param_1[6] = *param_1;
  }
  return;
}

// 00933F60  FUN_00933f60  size=83  [run]
void __fastcall FUN_00933f60(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    piVar1 = (int *)(*(int *)(param_1 + 4) + 4);
    do {
      *piVar1 = (int)(piVar1 + -4);
      piVar1[1] = (int)(piVar1 + 2);
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 3;
    } while (iVar2 < *(int *)(param_1 + 8));
  }
  iVar2 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar2 + 4) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + -4 + *(int *)(param_1 + 8) * 0xc) = 0;
  *(int *)(param_1 + 0x10) = iVar2;
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 4) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

// 00933FF0  FUN_00933ff0  size=78  [run]
void __fastcall FUN_00933ff0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x38);
  if (iVar2 != iVar2 + *(int *)(param_1 + 0x40) * 4) {
    do {
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        iVar1 = FUN_00a7c8a0();
        *(uint *)(iVar1 + 0x4c0) = *(uint *)(iVar1 + 0x4c0) & 0xfffbffff | 0x30000;
      }
      iVar2 = iVar2 + 4;
    } while (iVar2 != *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x40) * 4);
  }
  return;
}

// 00934040  FUN_00934040  size=136  [run]
undefined4 __fastcall FUN_00934040(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((DAT_01bea064 & 0x20000000) != 0) {
    return 1;
  }
  iVar2 = *(int *)(param_1 + 0x38);
  iVar3 = 0;
  if (iVar2 != iVar2 + *(int *)(param_1 + 0x40) * 4) {
    do {
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        iVar1 = FUN_00a7c8a0();
        if (((*(uint *)(iVar1 + 0x4c0) & 0x20000) != 0) &&
           ((*(uint *)(iVar1 + 0x4c0) & 0x40000) == 0)) {
          iVar1 = FUN_00a7c8a0();
          *(uint *)(iVar1 + 0x4c0) = *(uint *)(iVar1 + 0x4c0) | 0x40000;
          iVar3 = iVar3 + 1;
          if (1 < iVar3) {
            return 1;
          }
        }
      }
      iVar2 = iVar2 + 4;
    } while (iVar2 != *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x40) * 4);
  }
  return 0;
}

// 009340D0  FUN_009340d0  size=85  [run]
int __thiscall FUN_009340d0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x38);
  if (iVar3 != iVar3 + *(int *)(param_1 + 0x40) * 4) {
    do {
      iVar1 = FUN_00a81330();
      if ((iVar1 != 0) && (iVar2 = FUN_00a7c8a0(), *(int *)(iVar2 + 0x4ec) == param_2)) {
        return iVar1;
      }
      iVar3 = iVar3 + 4;
    } while (iVar3 != *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x40) * 4);
  }
  return 0;
}

// 00934130  FUN_00934130  size=156  [run]
void __thiscall FUN_00934130(int param_1,float *param_2)

{
  undefined4 uVar1;
  int iVar2;
  float *pfVar3;
  int *piVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x38);
  if (iVar5 != iVar5 + *(int *)(param_1 + 0x40) * 4) {
    do {
      iVar2 = FUN_00a81330();
      if ((iVar2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
        uVar1 = *(undefined4 *)(iVar2 + 0x4b0);
        iVar2 = FUN_009f9480(uVar1);
        if (((iVar2 != 0) ||
            ((iVar2 = FUN_009f94a0(uVar1), iVar2 != 0 || (iVar2 = FUN_009f9460(uVar1), iVar2 != 0)))
            ) && (pfVar3 = (float *)FUN_00a7c8b0(), *param_2 < *pfVar3 != (*param_2 == *pfVar3))) {
          piVar4 = (int *)FUN_00a7c8a0();
          (**(code **)(*piVar4 + 0xc0))();
        }
      }
      iVar5 = iVar5 + 4;
    } while (iVar5 != *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x40) * 4);
  }
  return;
}

// 009341D0  FUN_009341d0  size=158  [run]
void __thiscall FUN_009341d0(int param_1,float *param_2)

{
  undefined4 uVar1;
  int iVar2;
  float *pfVar3;
  int *piVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x38);
  if (iVar5 != iVar5 + *(int *)(param_1 + 0x40) * 4) {
    do {
      iVar2 = FUN_00a81330();
      if ((iVar2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
        uVar1 = *(undefined4 *)(iVar2 + 0x4b0);
        iVar2 = FUN_009f9480(uVar1);
        if (((iVar2 != 0) ||
            ((iVar2 = FUN_009f94a0(uVar1), iVar2 != 0 || (iVar2 = FUN_009f9460(uVar1), iVar2 != 0)))
            ) && (pfVar3 = (float *)FUN_00a7c8b0(), *param_2 < *pfVar3 != (*param_2 == *pfVar3))) {
          piVar4 = (int *)FUN_00a7c8a0();
          (**(code **)(*piVar4 + 0xc4))(1);
        }
      }
      iVar5 = iVar5 + 4;
    } while (iVar5 != *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x40) * 4);
  }
  return;
}

// 00934270  FUN_00934270  size=167  [run]
void __thiscall FUN_00934270(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x38);
  if (iVar4 != iVar4 + *(int *)(param_1 + 0x40) * 4) {
    do {
      iVar1 = FUN_00a81330();
      if ((iVar1 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) {
        iVar1 = *(int *)(iVar1 + 0x4b0);
        iVar2 = FUN_009f9480(iVar1);
        if ((((iVar2 != 0) ||
             ((iVar2 = FUN_009f94a0(iVar1), iVar2 != 0 || (iVar2 = FUN_009f9460(iVar1), iVar2 != 0))
             )) && (iVar1 != 0xf0051)) &&
           (iVar1 = FUN_00a7c8b0(),
           *(float *)(param_2 + 8) < *(float *)(iVar1 + 8) !=
           (*(float *)(param_2 + 8) == *(float *)(iVar1 + 8)))) {
          piVar3 = (int *)FUN_00a7c8a0();
          (**(code **)(*piVar3 + 0x1c))();
        }
      }
      iVar4 = iVar4 + 4;
    } while (iVar4 != *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x40) * 4);
  }
  return;
}

// 00934320  FUN_00934320  size=167  [run]
void __thiscall FUN_00934320(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x38);
  if (iVar4 != iVar4 + *(int *)(param_1 + 0x40) * 4) {
    do {
      iVar1 = FUN_00a81330();
      if ((iVar1 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) {
        iVar1 = *(int *)(iVar1 + 0x4b0);
        iVar2 = FUN_009f9480(iVar1);
        if ((((iVar2 != 0) ||
             ((iVar2 = FUN_009f94a0(iVar1), iVar2 != 0 || (iVar2 = FUN_009f9460(iVar1), iVar2 != 0))
             )) && (iVar1 != 0xf0051)) &&
           (iVar1 = FUN_00a7c8b0(),
           *(float *)(param_2 + 8) < *(float *)(iVar1 + 8) !=
           (*(float *)(param_2 + 8) == *(float *)(iVar1 + 8)))) {
          piVar3 = (int *)FUN_00a7c8a0();
          (**(code **)(*piVar3 + 0x20))();
        }
      }
      iVar4 = iVar4 + 4;
    } while (iVar4 != *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x40) * 4);
  }
  return;
}

// 009343D0  FUN_009343d0  size=149  [run]
void __thiscall FUN_009343d0(int param_1,float *param_2)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = *(int *)(param_1 + 0x38);
  if (iVar3 != iVar3 + *(int *)(param_1 + 0x40) * 4) {
    do {
      iVar1 = FUN_00a81330();
      if ((iVar1 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) {
        uVar4 = *(undefined4 *)(iVar1 + 0x4b0);
        iVar1 = FUN_009f9480(uVar4);
        if (((iVar1 != 0) ||
            ((iVar1 = FUN_009f94a0(uVar4), iVar1 != 0 || (iVar1 = FUN_009f9460(uVar4), iVar1 != 0)))
            ) && (pfVar2 = (float *)FUN_00a7c8b0(), *param_2 < *pfVar2 != (*param_2 == *pfVar2))) {
          uVar4 = 0x10;
          FUN_00a7c8a0(0x10);
          FUN_00a93090(uVar4);
        }
      }
      iVar3 = iVar3 + 4;
    } while (iVar3 != *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x40) * 4);
  }
  return;
}

// 00934470  FUN_00934470  size=147  [run]
void __thiscall FUN_00934470(int param_1,float *param_2)

{
  undefined4 uVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x38);
  if (iVar4 != iVar4 + *(int *)(param_1 + 0x40) * 4) {
    do {
      iVar2 = FUN_00a81330();
      if ((iVar2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
        uVar1 = *(undefined4 *)(iVar2 + 0x4b0);
        iVar2 = FUN_009f9480(uVar1);
        if (((iVar2 != 0) ||
            ((iVar2 = FUN_009f94a0(uVar1), iVar2 != 0 || (iVar2 = FUN_009f9460(uVar1), iVar2 != 0)))
            ) && (pfVar3 = (float *)FUN_00a7c8b0(), *param_2 < *pfVar3 != (*param_2 == *pfVar3))) {
          FUN_00a7c8a0();
          FUN_00a930c0();
        }
      }
      iVar4 = iVar4 + 4;
    } while (iVar4 != *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x40) * 4);
  }
  return;
}

// 00934510  FUN_00934510  size=429  [run]
int * __thiscall FUN_00934510(undefined4 *param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 unaff_retaddr;
  undefined *puVar6;
  undefined4 uStack_c;
  undefined2 auStack_8 [4];
  
  iVar1 = FUN_00a82090("byBgManager",param_2,param_3);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00a7c800();
    if (piVar2 != (int *)0x0) {
      uVar3 = FUN_00a7c7f0();
      if ((int)param_1[0x10] < (int)param_1[0xf]) {
        iVar1 = param_1[0x10] * 4;
        if (param_1[0xe] + iVar1 != 0) {
          FUN_00a7c940(uVar3);
        }
        param_1[0x10] = param_1[0x10] + 1;
        iVar1 = param_1[0xe] + iVar1;
      }
      else {
        iVar1 = param_1[0xd];
      }
      if (iVar1 == param_1[0xd]) {
        FUN_00dd5650(&DAT_0164ecb8,*param_1);
      }
      iVar1 = *(int *)(param_3 + 0x7c);
      piVar4 = (int *)FUN_00a7c8a0();
      if (piVar4 != (int *)0x0) {
        puVar6 = &DAT_01be9c28;
        (**(code **)(*piVar4 + 4))(&DAT_01be9c28);
        iVar5 = FUN_00dd6d80(puVar6);
        if (iVar5 != 0) {
          (**(code **)(*piVar4 + 0x308))(param_4);
        }
      }
      param_1[5] = param_1[5] + 1;
      (**(code **)(*piVar2 + 0x28))(*param_1);
      uStack_c = 0;
      auStack_8[0] = 0;
      if (param_2 != 0) {
        FUN_009fee10(&uStack_c,auStack_8);
      }
      iVar5 = FUN_009f9480(unaff_retaddr);
      if (((iVar5 != 0) && (piVar2[0x13b] == 0)) && (iVar1 != 0)) {
        FUN_009f8bf0(iVar1);
      }
      iVar1 = FUN_009f9480(unaff_retaddr);
      if (iVar1 == 0) {
        iVar1 = FUN_009f94a0(unaff_retaddr);
        if (((iVar1 == 0) && ((piVar2[0x130] & 0x180000U) == 0)) && (piVar2[0x13b] != 0)) {
          iVar1 = FUN_00a7c8a0();
          if ((iVar1 != 0) && (*(int *)(iVar1 + 0x604) == 0xf)) {
            FUN_00a93090(0x10);
          }
        }
      }
      if ((param_1[(*(byte *)((int)piVar2 + 0x4c9) >> 5) + 0x16] &
          0x80000000U >> (*(byte *)((int)piVar2 + 0x4c9) & 0x1f)) != 0) {
        piVar2[0x130] = piVar2[0x130] | 4;
      }
      return piVar2;
    }
  }
  return (int *)0x0;
}

// 009346C0  FUN_009346c0  size=334  [run]
int __thiscall FUN_009346c0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  byte local_e5;
  int local_e4;
  uint local_e0 [20];
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  int local_64;
  undefined1 local_60 [92];
  
  iVar3 = 0;
  if (param_2[9] != -1) {
    iVar3 = param_2[9] + param_4;
  }
  if (param_4 == 0) {
    iVar3 = 0;
  }
  FUN_0040b190();
  local_90 = *param_2;
  local_8c = param_2[1];
  local_88 = param_2[2];
  puVar1 = (undefined4 *)FUN_00933c70(local_60,param_2 + 6);
  local_84 = *puVar1;
  local_80 = puVar1[1];
  local_7c = puVar1[2];
  local_e0[0] = 0;
  local_78 = param_2[3];
  local_74 = param_2[4];
  local_70 = param_2[5];
  local_64 = iVar3;
  if (iVar3 != 0) {
    local_e5 = 0;
    FUN_009fee60(&local_e5);
    local_e0[0] = (uint)local_e5;
  }
  local_e4 = param_1[0x1a];
  uVar2 = FUN_00933bf0(*param_1,param_1[0x1c],param_3,local_e0,param_2[8]);
  (**(code **)(local_e4 + 8))(uVar2);
  iVar3 = FUN_00934510(param_3,&local_e4,param_2[8]);
  if (iVar3 != 0) {
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
    return iVar3;
  }
  return 0;
}

// 00934810  FUN_00934810  size=63  [run]
void __fastcall FUN_00934810(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x38);
  if (iVar3 != iVar3 + *(int *)(param_1 + 0x40) * 4) {
    do {
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        piVar2 = (int *)FUN_00a7c8a0();
        (**(code **)(*piVar2 + 0x20))();
      }
      iVar3 = iVar3 + 4;
    } while (iVar3 != *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x40) * 4);
  }
  return;
}

// 00934850  FUN_00934850  size=63  [run]
void __fastcall FUN_00934850(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x38);
  if (iVar3 != iVar3 + *(int *)(param_1 + 0x40) * 4) {
    do {
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        piVar2 = (int *)FUN_00a7c8a0();
        (**(code **)(*piVar2 + 0x1c))();
      }
      iVar3 = iVar3 + 4;
    } while (iVar3 != *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x40) * 4);
  }
  return;
}

// 00934890  FUN_00934890  size=159  [run]
void __thiscall FUN_00934890(int param_1,uint param_2,int param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x38);
  if (iVar3 != iVar3 + *(int *)(param_1 + 0x40) * 4) {
    do {
      iVar2 = FUN_00a81330();
      if (((iVar2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) &&
         (*(byte *)(iVar2 + 0x4c9) == param_2)) {
        if (param_3 == 0) {
          *(uint *)(iVar2 + 0x4c0) = *(uint *)(iVar2 + 0x4c0) | 4;
        }
        else {
          *(uint *)(iVar2 + 0x4c0) = *(uint *)(iVar2 + 0x4c0) & 0xfffffffb;
        }
      }
      iVar3 = iVar3 + 4;
    } while (iVar3 != *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x40) * 4);
  }
  if (param_3 == 0) {
    puVar1 = (uint *)(param_1 + 0x58 + (param_2 >> 5) * 4);
    *puVar1 = *puVar1 & ~(0x80000000U >> ((byte)param_2 & 0x1f));
    return;
  }
  puVar1 = (uint *)(param_1 + 0x58 + (param_2 >> 5) * 4);
  *puVar1 = *puVar1 | 0x80000000U >> ((byte)param_2 & 0x1f);
  return;
}

// 00934940  FUN_00934940  size=289  [run]
void __fastcall FUN_00934940(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_34;
  int local_30;
  int local_2c;
  char local_20 [32];
  
  if ((*(int *)(param_1 + 0xc) == 4) && (iVar3 = *(int *)(param_1 + 4), iVar3 != 0)) {
    local_30 = *(int *)(iVar3 + 0xc) + iVar3;
    if (*(ushort *)(iVar3 + 4) < 4) {
      local_30 = 0;
    }
    local_2c = 0;
    if (0 < *(int *)(iVar3 + 8)) {
      local_34 = 0;
      do {
        _sprintf_s(local_20,0x20,"%c%c%04x",(int)*(char *)(local_34 + 0x1c + iVar3),
                   (int)*(char *)(local_34 + 0x1d + iVar3),
                   (uint)*(ushort *)(local_34 + 0x1e + iVar3));
        iVar2 = FUN_009fde60(local_20);
        if ((iVar2 != -1) && (iVar2 != 0xd0404)) {
          for (piVar1 = *(int **)(param_1 + 0x2c); piVar1 != *(int **)(param_1 + 0x30);
              piVar1 = (int *)piVar1[2]) {
            if (*piVar1 == iVar2) {
              piVar1 = (int *)(local_34 + 0x24 + iVar3);
              iVar5 = 0;
              if (0 < *piVar1) {
                iVar4 = 0;
                do {
                  FUN_009346c0(*(int *)(local_34 + 0x20 + iVar3) + iVar4 + *(int *)(param_1 + 4),
                               iVar2,local_30,*(undefined1 *)(*(int *)(param_1 + 4) + 7));
                  iVar5 = iVar5 + 1;
                  iVar4 = iVar4 + 0x28;
                } while (iVar5 < *piVar1);
              }
              break;
            }
          }
        }
        iVar3 = *(int *)(param_1 + 4);
        local_2c = local_2c + 1;
        local_34 = local_34 + 0x14;
      } while (local_2c < *(int *)(iVar3 + 8));
    }
  }
  return;
}

// 00934A70  FUN_00934a70  size=61  [run]
void __fastcall FUN_00934a70(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x38);
  if (iVar2 != iVar2 + *(int *)(param_1 + 0x40) * 4) {
    do {
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        FUN_00a805f0();
      }
      iVar2 = iVar2 + 4;
    } while (iVar2 != *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x40) * 4);
  }
  *(undefined4 *)(param_1 + 0x48) = 1;
  return;
}

// 00934AB0  FUN_00934ab0  size=334  [run]
void __fastcall FUN_00934ab0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_90;
  int local_8c;
  int local_88;
  int local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  
  iVar3 = *(int *)(param_1 + 0x6c);
  if (iVar3 != iVar3 + *(int *)(param_1 + 0x70) * 0x44) {
    puVar4 = (undefined4 *)(iVar3 + 0x20);
    do {
      iVar1 = FUN_00a81330();
      if (iVar1 == 0) {
        local_90 = puVar4[7];
        local_48 = 0;
        local_14 = puVar4[8];
        local_4c = 0;
        local_50 = 0;
        local_54 = 0;
        local_5c = 0;
        local_60 = 0;
        local_64 = 0;
        local_68 = 0;
        local_70 = 0;
        local_74 = 0;
        local_78 = 0;
        local_7c = 0;
        local_44 = 0x3f800000;
        local_58 = 0x3f800000;
        local_1c = 0xffffffff;
        local_6c = 0x3f800000;
        local_80 = 0x3f800000;
        local_40 = puVar4[-2];
        local_3c = puVar4[-1];
        local_38 = *puVar4;
        local_34 = puVar4[1];
        local_30 = puVar4[2];
        local_2c = puVar4[3];
        local_28 = puVar4[4];
        local_24 = puVar4[5];
        local_20 = puVar4[6];
        local_8c = iVar1;
        local_88 = iVar1;
        local_84 = iVar1;
        local_18 = iVar1;
        iVar1 = FUN_00934510(puVar4[-6],&local_90,puVar4[-5]);
        if (iVar1 != 0) {
          uVar2 = FUN_00a7c7f0();
          FUN_00a7c960(uVar2);
        }
      }
      iVar3 = iVar3 + 0x44;
      puVar4 = puVar4 + 0x11;
    } while (iVar3 != *(int *)(param_1 + 0x6c) + *(int *)(param_1 + 0x70) * 0x44);
  }
  return;
}

// 00934C00  FUN_00934c00  size=93  [run]
undefined4 __thiscall FUN_00934c00(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    return 0;
  }
  iVar1 = FUN_00dd29b0(param_2 * 0xc + 0xc,0x20,0,0);
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  *(int *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(int *)(param_1 + 0x18) = param_2 * 0xc + iVar1;
  FUN_00933f60();
  return 1;
}

// 00934CB0  FUN_00934cb0  size=241  [run]
void __fastcall FUN_00934cb0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = 0xffffffff;
  param_1[0x12] = 0;
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x89e] = 0xffffffff;
  param_1[0x89f] = 0xffffffff;
  param_1[0x8a0] = 0xffffffff;
  param_1[0x8a1] = 0xffffffff;
  param_1[0x8a2] = 0xffffffff;
  param_1[0x8a3] = 0xffffffff;
  param_1[0x8a4] = 0xffffffff;
  param_1[0x8a5] = 0xffffffff;
  param_1[0x8a6] = 0xffffffff;
  param_1[0x8a7] = 0xffffffff;
  param_1[0x8a8] = 0xffffffff;
  param_1[0x8a9] = 0xffffffff;
  param_1[0x8aa] = 0xffffffff;
  param_1[0x8ab] = 0xffffffff;
  param_1[0x8ac] = 0xffffffff;
  param_1[0x8ad] = 0xffffffff;
  if (param_1[7] != 0) {
    iVar2 = 0;
    if (0 < (int)param_1[8]) {
      piVar1 = (int *)(param_1[7] + 4);
      do {
        *piVar1 = (int)(piVar1 + -4);
        piVar1[1] = (int)(piVar1 + 2);
        iVar2 = iVar2 + 1;
        piVar1 = piVar1 + 3;
      } while (iVar2 < (int)param_1[8]);
    }
    iVar2 = param_1[7];
    *(undefined4 *)(iVar2 + 4) = 0;
    *(undefined4 *)(param_1[7] + -4 + param_1[8] * 0xc) = 0;
    param_1[10] = iVar2;
    *(undefined4 *)(param_1[0xc] + 4) = 0;
    *(undefined4 *)(param_1[0xc] + 8) = 0;
    param_1[0xb] = param_1[0xc];
    param_1[9] = 0;
  }
  param_1[0x10] = 0;
  if (param_1[0x1b] != 0) {
    param_1[0x1c] = 0;
  }
  return;
}

// 00934DB0  FUN_00934db0  size=352  [run]
void __fastcall FUN_00934db0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar3 = *(int *)(param_1 + 0x6c);
  if (iVar3 != iVar3 + *(int *)(param_1 + 0x70) * 0x44) {
    puVar4 = (undefined4 *)(iVar3 + 0x20);
    do {
      iVar1 = FUN_00a81330();
      if ((iVar1 == 0) && ((puVar4[-3] == 2 || (puVar4[-3] == 0)))) {
        local_14 = puVar4[8];
        local_48 = 0;
        local_4c = 0;
        local_8c = 0;
        local_50 = 0;
        local_84 = 0;
        local_54 = 0;
        local_88 = 0;
        local_5c = 0;
        local_18 = 0;
        local_60 = 0;
        local_90 = puVar4[7];
        local_64 = 0;
        local_68 = 0;
        local_70 = 0;
        local_74 = 0;
        local_78 = 0;
        local_7c = 0;
        local_44 = 0x3f800000;
        local_58 = 0x3f800000;
        local_1c = 0xffffffff;
        local_6c = 0x3f800000;
        local_80 = 0x3f800000;
        local_40 = puVar4[-2];
        local_3c = puVar4[-1];
        local_38 = *puVar4;
        local_34 = puVar4[1];
        local_30 = puVar4[2];
        local_2c = puVar4[3];
        local_28 = puVar4[4];
        local_24 = puVar4[5];
        local_20 = puVar4[6];
        iVar1 = FUN_00934510(puVar4[-6],&local_90,puVar4[-5]);
        if (iVar1 != 0) {
          uVar2 = FUN_00a7c7f0();
          FUN_00a7c960(uVar2);
        }
      }
      iVar3 = iVar3 + 0x44;
      puVar4 = puVar4 + 0x11;
    } while (iVar3 != *(int *)(param_1 + 0x6c) + *(int *)(param_1 + 0x70) * 0x44);
  }
  return;
}

// 00934F10  FUN_00934f10  size=276  [run]
void __fastcall FUN_00934f10(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)param_1[0xb];
  if (puVar3 != (undefined4 *)param_1[0xc]) {
    do {
      FUN_00a00bd0(*puVar3,0);
      puVar3 = (undefined4 *)puVar3[2];
    } while (puVar3 != (undefined4 *)param_1[0xc]);
  }
  param_1[0x12] = 0;
  param_1[3] = 0;
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x89e] = 0xffffffff;
  param_1[0x89f] = 0xffffffff;
  param_1[0x8a0] = 0xffffffff;
  param_1[0x8a1] = 0xffffffff;
  param_1[0x8a2] = 0xffffffff;
  param_1[0x8a3] = 0xffffffff;
  param_1[0x8a4] = 0xffffffff;
  param_1[0x8a5] = 0xffffffff;
  param_1[0x8a6] = 0xffffffff;
  param_1[0x8a7] = 0xffffffff;
  param_1[0x8a8] = 0xffffffff;
  param_1[0x8a9] = 0xffffffff;
  param_1[0x8aa] = 0xffffffff;
  param_1[0x8ab] = 0xffffffff;
  param_1[0x8ac] = 0xffffffff;
  param_1[0x8ad] = 0xffffffff;
  if (param_1[7] != 0) {
    iVar2 = 0;
    if (0 < (int)param_1[8]) {
      piVar1 = (int *)(param_1[7] + 4);
      do {
        *piVar1 = (int)(piVar1 + -4);
        piVar1[1] = (int)(piVar1 + 2);
        iVar2 = iVar2 + 1;
        piVar1 = piVar1 + 3;
      } while (iVar2 < (int)param_1[8]);
    }
    iVar2 = param_1[7];
    *(undefined4 *)(iVar2 + 4) = 0;
    *(undefined4 *)(param_1[7] + -4 + param_1[8] * 0xc) = 0;
    param_1[10] = iVar2;
    *(undefined4 *)(param_1[0xc] + 4) = 0;
    *(undefined4 *)(param_1[0xc] + 8) = 0;
    param_1[0xb] = param_1[0xc];
    param_1[9] = 0;
  }
  param_1[0x10] = 0;
  if (param_1[0x1b] != 0) {
    param_1[0x1c] = 0;
  }
  return;
}

// 00935030  FUN_00935030  size=102  [run]
void __fastcall FUN_00935030(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    iVar1 = FUN_00dd29b0(0xc0c,0x20,0,0);
    *(int *)(param_1 + 0x1c) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x20) = 0x100;
      *(undefined4 *)(param_1 + 0x24) = 0;
      *(int *)(param_1 + 0x30) = iVar1 + 0xc00;
      FUN_00933f60();
    }
  }
  FUN_008609b0(0x100,&DAT_01b7bd48);
  *(undefined4 *)(param_1 + 0x48) = 0;
  FUN_00934cb0();
  return;
}

// 009350A0  FUN_009350a0  size=97  [run]
void __fastcall FUN_009350a0(int param_1)

{
  FUN_00934cb0();
  if (*(int *)(param_1 + 0x1c) != 0) {
    if (*(int *)(param_1 + 0x1c) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x1c),0);
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x18);
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    *(undefined4 *)(param_1 + 0x40) = 0;
    if (*(int *)(param_1 + 0x44) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x38),0);
      *(undefined4 *)(param_1 + 0x44) = 0;
    }
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  return;
}


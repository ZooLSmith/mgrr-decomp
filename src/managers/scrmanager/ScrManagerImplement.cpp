// src/managers/scrmanager/ScrManagerImplement.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C14320..00C24C30, 31 functions

#include "types.h"

// 00C14320  ScrManagerImplement::vf24  size=122  [class]
int __fastcall ScrManagerImplement::vf24(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x854) != 0) {
    iVar1 = *(int *)(param_1 + 0x848);
  }
  if (*(int *)(param_1 + 0x10dc) != 0) {
    iVar1 = iVar1 + *(int *)(param_1 + 0x10d0);
  }
  if (*(int *)(param_1 + 0x1964) != 0) {
    iVar1 = iVar1 + *(int *)(param_1 + 0x1958);
  }
  if (*(int *)(param_1 + 0x21ec) != 0) {
    iVar1 = iVar1 + *(int *)(param_1 + 0x21e0);
  }
  if (*(int *)(param_1 + 0x2a74) != 0) {
    iVar1 = iVar1 + *(int *)(param_1 + 0x2a68);
  }
  if (*(int *)(param_1 + 0x32fc) != 0) {
    iVar1 = iVar1 + *(int *)(param_1 + 0x32f0);
  }
  if (*(int *)(param_1 + 0x3b84) != 0) {
    iVar1 = iVar1 + *(int *)(param_1 + 0x3b78);
  }
  if (*(int *)(param_1 + 0x440c) != 0) {
    iVar1 = iVar1 + *(int *)(param_1 + 0x4400);
  }
  return iVar1;
}

// 00C143A0  ScrManagerImplement::vf1C  size=71  [class]
int __thiscall ScrManagerImplement::vf1C(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  iVar1 = 0;
  uVar3 = 0;
  piVar2 = (int *)(param_1 + 0x84c);
  while ((piVar2[2] == 0 ||
         (((param_3 != 0 && (*piVar2 != param_3)) || (iVar1 = FUN_00935700(param_2), iVar1 == 0)))))
  {
    uVar3 = uVar3 + 1;
    piVar2 = piVar2 + 0x222;
    if (7 < uVar3) {
      return iVar1;
    }
  }
  return iVar1;
}

// 00C143F0  ScrManagerImplement::vf20  size=71  [class]
int __thiscall ScrManagerImplement::vf20(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  iVar1 = 0;
  uVar3 = 0;
  piVar2 = (int *)(param_1 + 0x84c);
  while ((piVar2[2] == 0 ||
         (((param_3 != 0 && (*piVar2 != param_3)) || (iVar1 = FUN_009356b0(param_2), iVar1 == 0)))))
  {
    uVar3 = uVar3 + 1;
    piVar2 = piVar2 + 0x222;
    if (7 < uVar3) {
      return iVar1;
    }
  }
  return iVar1;
}

// 00C14440  ScrManagerImplement::vf14  size=70  [class]
void __thiscall
ScrManagerImplement::vf14(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 0x84c);
  iVar2 = 8;
  do {
    if ((piVar1[2] != 0) && ((param_4 == 0 || (*piVar1 == param_4)))) {
      FUN_00936360(param_2,param_3);
    }
    piVar1 = piVar1 + 0x222;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

// 00C14490  ScrManagerImplement::vf18  size=102  [class]
int __thiscall ScrManagerImplement::vf18(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  
  iVar1 = 0;
  uVar4 = 0;
  piVar5 = (int *)(param_1 + 0x848);
  iVar2 = 0;
  do {
    iVar3 = iVar2;
    if (piVar5[3] != 0) {
      if (param_3 == -1) {
        iVar3 = *piVar5 + iVar2;
        if (param_2 < iVar3) {
          iVar2 = FUN_00935750(param_2 - iVar2);
          return iVar2;
        }
      }
      else if ((piVar5[1] == param_3) && (iVar1 = FUN_00935750(param_2), iVar1 != 0)) {
        return iVar1;
      }
    }
    uVar4 = uVar4 + 1;
    piVar5 = piVar5 + 0x222;
    iVar2 = iVar3;
    if (7 < uVar4) {
      return iVar1;
    }
  } while( true );
}

// 00C14500  ScrManagerImplement::vf28  size=71  [class]
int * __thiscall ScrManagerImplement::vf28(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = (int *)(param_1 + 0x84c);
  uVar2 = 0;
  while ((piVar1[2] == 0 || ((param_3 != 0 && (*piVar1 != param_3))))) {
    uVar2 = uVar2 + 1;
    piVar1 = piVar1 + 0x222;
    if (7 < uVar2) {
      *param_2 = 0;
      return (int *)0x0;
    }
  }
  *param_2 = piVar1[1];
  return piVar1 + -0x11;
}

// 00C14550  ScrManagerImplement::vf30  size=63  [class]
undefined4 __thiscall ScrManagerImplement::vf30(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = 0;
  piVar1 = (int *)(param_1 + 0x84c);
  while ((piVar1[2] == 0 || (*piVar1 != param_3))) {
    uVar3 = uVar3 + 1;
    piVar1 = piVar1 + 0x222;
    if (7 < uVar3) {
      return 0;
    }
  }
  uVar2 = FUN_00935ac0(param_2);
  return uVar2;
}

// 00C14590  ScrManagerImplement::vf2C  size=57  [class]
int __thiscall ScrManagerImplement::vf2C(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  param_1 = param_1 + 8;
  while ((*(int *)(param_1 + 0x84c) == 0 || (iVar1 = FUN_00935ac0(param_2), iVar1 == 0))) {
    uVar2 = uVar2 + 1;
    param_1 = param_1 + 0x888;
    if (7 < uVar2) {
      return 0;
    }
  }
  return iVar1;
}

// 00C145D0  ScrManagerImplement::vf34  size=56  [class]
int __thiscall ScrManagerImplement::vf34(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  param_1 = param_1 + 8;
  iVar3 = 8;
  do {
    if (*(int *)(param_1 + 0x84c) != 0) {
      iVar1 = FUN_00935b10(param_2);
      if (iVar1 != 0) {
        iVar2 = iVar2 + 1;
      }
    }
    param_1 = param_1 + 0x888;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return iVar2;
}

// 00C14610  ScrManagerImplement::vf48  size=48  [class]
void __thiscall ScrManagerImplement::vf48(int param_1,undefined4 param_2)

{
  int iVar1;
  
  param_1 = param_1 + 8;
  iVar1 = 8;
  do {
    if (*(int *)(param_1 + 0x84c) != 0) {
      FUN_00935760(param_2);
    }
    param_1 = param_1 + 0x888;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

// 00C14640  ScrManagerImplement::vf44  size=54  [class]
void __thiscall ScrManagerImplement::vf44(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  param_1 = param_1 + 8;
  iVar1 = 8;
  do {
    if (*(int *)(param_1 + 0x84c) != 0) {
      FUN_009357c0(param_2,param_3);
    }
    param_1 = param_1 + 0x888;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

// 00C14680  ScrManagerImplement::vf40  size=70  [class]
void __thiscall
ScrManagerImplement::vf40(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 0x84c);
  iVar2 = 8;
  do {
    if ((piVar1[2] != 0) && ((param_4 == 0 || (*piVar1 == param_4)))) {
      FUN_009357c0(param_2,param_3);
    }
    piVar1 = piVar1 + 0x222;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

// 00C146D0  ScrManagerImplement::vf50  size=80  [class]
undefined4 __thiscall ScrManagerImplement::vf50(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = param_2;
  uVar3 = 0;
  param_1 = param_1 + 8;
  do {
    if (*(int *)(param_1 + 0x84c) != 0) {
      param_2 = 0;
      iVar2 = FUN_009358e0(uVar1,&param_2);
      if (iVar2 != 0) {
        return param_2;
      }
    }
    uVar3 = uVar3 + 1;
    param_1 = param_1 + 0x888;
  } while (uVar3 < 8);
  return 0;
}

// 00C14720  ScrManagerImplement::vf4C  size=91  [class]
undefined4 __thiscall ScrManagerImplement::vf4C(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  
  iVar1 = param_3;
  uVar4 = 0;
  piVar3 = (int *)(param_1 + 0x84c);
  do {
    if ((piVar3[2] != 0) && (*piVar3 == iVar1)) {
      param_3 = 0;
      iVar2 = FUN_009358e0(param_2,&param_3);
      if (iVar2 != 0) {
        return param_3;
      }
    }
    uVar4 = uVar4 + 1;
    piVar3 = piVar3 + 0x222;
  } while (uVar4 < 8);
  return 0;
}

// 00C14780  ScrManagerImplement::vf54  size=54  [class]
void __thiscall ScrManagerImplement::vf54(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  param_1 = param_1 + 8;
  iVar1 = 8;
  do {
    if (*(int *)(param_1 + 0x84c) != 0) {
      FUN_00935880(param_2,param_3);
    }
    param_1 = param_1 + 0x888;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

// 00C147C0  ScrManagerImplement::vf38  size=99  [class]
undefined4 __thiscall ScrManagerImplement::vf38(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if (param_1 == -8) {
    return 0;
  }
  uVar3 = 0;
  piVar1 = (int *)(param_1 + 0x848);
  iVar4 = 0;
  while (((iVar2 = iVar4, piVar1 == (int *)0x840 || (piVar1[3] == 0)) ||
         (iVar2 = *piVar1 + iVar4, iVar2 <= param_2))) {
    uVar3 = uVar3 + 1;
    piVar1 = piVar1 + 0x222;
    iVar4 = iVar2;
    if (7 < uVar3) {
      return 0;
    }
  }
  FUN_009355f0(param_2 - iVar4);
  return 1;
}

// 00C14830  ScrManagerImplement::vf3C  size=68  [class]
void __thiscall ScrManagerImplement::vf3C(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != -8) {
    piVar1 = (int *)(param_1 + 0x84c);
    iVar2 = 8;
    do {
      if ((piVar1[2] != 0) && (*piVar1 == param_2)) {
        thunk_FUN_00935620();
      }
      piVar1 = piVar1 + 0x222;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

// 00C14880  ScrManagerImplement::vf58  size=61  [class]
void __thiscall ScrManagerImplement::vf58(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 0x84c);
  iVar2 = 8;
  do {
    if ((piVar1[2] != 0) && (*piVar1 == param_2)) {
      FUN_009355b0(param_3);
    }
    piVar1 = piVar1 + 0x222;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

// 00C148C0  ScrManagerImplement::vf5C  size=54  [class]
void __thiscall ScrManagerImplement::vf5C(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  param_1 = param_1 + 8;
  iVar1 = 8;
  do {
    if (*(int *)(param_1 + 0x84c) != 0) {
      FUN_00935d10(param_2,param_3);
    }
    param_1 = param_1 + 0x888;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

// 00C14900  ScrManagerImplement::vf60  size=66  [class]
void __thiscall
ScrManagerImplement::vf60(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 0x84c);
  iVar2 = 8;
  do {
    if ((piVar1[2] != 0) && (*piVar1 == param_2)) {
      FUN_00935d90(param_3,param_4);
    }
    piVar1 = piVar1 + 0x222;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

// 00C14950  ScrManagerImplement::vf64  size=66  [class]
void __thiscall
ScrManagerImplement::vf64(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 0x84c);
  iVar2 = 8;
  do {
    if ((piVar1[2] != 0) && (*piVar1 == param_2)) {
      FUN_00935de0(param_3,param_4);
    }
    piVar1 = piVar1 + 0x222;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

// 00C149A0  ScrManagerImplement::vf10  size=158  [class]
void __thiscall ScrManagerImplement::vf10(int param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  
  uVar7 = 0;
  piVar1 = (int *)(param_1 + 0x854);
  do {
    if (*piVar1 == 0) {
      puVar8 = param_2 + 2;
      uVar9 = *param_2;
      uVar2 = FUN_00de4550("_colLink.bxm",0);
      uVar3 = FUN_00de4550("scr.wtp",0);
      uVar4 = FUN_00de4550("scr.wta",0);
      uVar5 = FUN_00de4550("scr.wtb",0);
      uVar6 = FUN_00de44b0(&DAT_016a3424,0);
      FUN_00936100(uVar6,uVar5,uVar4,uVar3,uVar2,puVar8,uVar9);
      return;
    }
    uVar7 = uVar7 + 1;
    piVar1 = piVar1 + 0x222;
  } while (uVar7 < 8);
  FUN_00dd5650(&DAT_016a3450);
  return;
}

// 00C14A40  ScrManagerImplement::vf0C  size=54  [class]
void __thiscall ScrManagerImplement::vf0C(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 0x84c);
  iVar2 = 8;
  do {
    if ((piVar1[2] != 0) && (*piVar1 == param_2)) {
      FUN_00935620();
    }
    piVar1 = piVar1 + 0x222;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

// 00C14A80  ScrManagerImplement::vf08  size=76  [class]
void __fastcall ScrManagerImplement::vf08(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x4450) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x4448) = 1;
  *(undefined4 *)(param_1 + 0x444c) = 0;
  param_1 = param_1 + 8;
  iVar1 = 8;
  do {
    if (*(int *)(param_1 + 0x84c) != 0) {
      FUN_00935a00();
    }
    param_1 = param_1 + 0x888;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

// 00C14AD0  ScrManagerImplement::vf04  size=6  [class]
undefined4 ScrManagerImplement::vf04(void)

{
  return 1;
}

// 00C14AE0  ScrManagerImplement::vf00  size=156  [class]
void __fastcall ScrManagerImplement::vf00(int param_1)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  int iVar4;
  bool bVar5;
  undefined8 uVar6;
  
  if (*(int *)(param_1 + 0x4448) != 0) {
    fVar1 = *(float *)(param_1 + 0x4450) - 0.016666668;
    *(float *)(param_1 + 0x4450) = fVar1;
    if (fVar1 <= 0.0) {
      FUN_00fde300((double)(ABS(fVar1) * 60.0));
      uVar2 = FUN_00fdbc60();
      uVar2 = uVar2 & 0x80000001;
      bVar5 = uVar2 == 0;
      if ((int)uVar2 < 0) {
        bVar5 = (uVar2 - 1 | 0xfffffffe) == 0xffffffff;
      }
      if (bVar5) {
        uVar6 = CONCAT44(unaff_ESI,unaff_EDI);
        uVar2 = 0;
        iVar4 = param_1 + 8;
        while ((*(int *)(iVar4 + 0x844) == -1 || (iVar3 = FUN_00935a40(uVar6), iVar3 == 0))) {
          uVar2 = uVar2 + 1;
          iVar4 = iVar4 + 0x888;
          if (7 < uVar2) {
            *(undefined4 *)(param_1 + 0x4448) = 0;
            *(undefined4 *)(param_1 + 0x444c) = 1;
            return;
          }
        }
        return;
      }
    }
  }
  return;
}

// 00C14B80  ScrManagerImplement::vf68  size=3  [class]
void ScrManagerImplement::vf68(void)

{
  return;
}

// 00C14B90  ScrManagerImplement::vf70  size=1  [class]
void ScrManagerImplement::vf70(void)

{
  return;
}

// 00C14BA0  ScrManagerImplement::vf6C  size=3  [class]
void ScrManagerImplement::vf6C(void)

{
  return;
}

// 00C24B60  ScrManagerImplement::ScrManagerImplement  size=84  [class]
undefined4 * __thiscall
ScrManagerImplement::ScrManagerImplement(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  *param_1 = vftable;
  param_1[1] = param_2;
  iVar1 = 7;
  do {
    FUN_009354f0();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  param_1[0x1112] = 0;
  param_1[0x1114] = 0;
  param_1[0x1113] = 0;
  param_1[0x1115] = 0;
  return param_1;
}

// 00C24C30  ScrManagerImplement::vf74  size=30  [class]
undefined4 __thiscall ScrManagerImplement::vf74(undefined4 param_1,byte param_2)

{
  ScrManager::ScrManager();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}


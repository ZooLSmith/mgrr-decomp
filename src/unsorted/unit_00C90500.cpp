// src/unsorted/unit_00C90500.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C90500..00C91480, 24 functions

#include "mgrr.h"

// 00C90500  FUN_00c90500  size=72  [run]
void __fastcall FUN_00c90500(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 4);
  if (puVar2 != puVar2 + *(int *)(param_1 + 8)) {
    do {
      piVar1 = (int *)*puVar2;
      (**(code **)(*piVar1 + 8))();
      (**(code **)*piVar1)(1);
      puVar2 = puVar2 + 1;
    } while (puVar2 != (undefined4 *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 4));
  }
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00C90550  FUN_00c90550  size=132  [run]
void __fastcall FUN_00c90550(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  piVar4 = *(int **)(param_1 + 4);
  if (piVar4 != piVar4 + *(int *)(param_1 + 8)) {
    do {
      piVar5 = (int *)*piVar4;
      if ((*(byte *)(piVar5 + 2) & 2) == 0) {
        (**(code **)(*piVar5 + 0xc))();
        piVar5 = piVar4 + 1;
      }
      else {
        (**(code **)(*piVar5 + 8))();
        (**(code **)*piVar5)(1);
        uVar1 = *(uint *)(param_1 + 8);
        iVar2 = *(int *)(param_1 + 4);
        piVar5 = (int *)(iVar2 + uVar1 * 4);
        if ((((piVar4 != piVar5) && (iVar2 != 0)) && (uVar1 != 0)) &&
           ((uint)((int)piVar4 - iVar2 >> 2) < uVar1)) {
          for (piVar3 = piVar4; piVar3 != piVar5 + -1; piVar3 = piVar3 + 1) {
            *piVar3 = piVar3[1];
          }
          *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
          piVar5 = piVar4;
        }
      }
      piVar4 = piVar5;
    } while (piVar5 != (int *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 4));
  }
  return;
}

// 00C90600  FUN_00c90600  size=96  [run]
void __fastcall FUN_00c90600(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  FUN_00c84a70();
  iVar1 = FUN_00a82090("TriggerCamera",0x40001,0);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    return;
  }
  piVar2 = (int *)FUN_00a7c8a0();
  if (piVar2 == (int *)0x0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    return;
  }
  puVar3 = &DAT_01be9c80;
  (**(code **)(*piVar2 + 4))(&DAT_01be9c80);
  iVar1 = FUN_00dd6d80(puVar3);
  *(uint *)(param_1 + 0x38) = -(uint)(iVar1 != 0) & (uint)piVar2;
  return;
}

// 00C90660  FUN_00c90660  size=19  [run]
undefined4 __fastcall FUN_00c90660(int param_1)

{
  FUN_00c840a0();
  *(undefined4 *)(param_1 + 0x14) = 0;
  return 0;
}

// 00C90800  FUN_00c90800  size=55  [run]
void __fastcall FUN_00c90800(int param_1)

{
  FUN_00c840a0();
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  FUN_00dd7270();
  return;
}

// 00C908B0  FUN_00c908b0  size=61  [run]
void __fastcall FUN_00c908b0(int param_1)

{
  if (*(int *)(param_1 + 0x248) != 0) {
    *(undefined4 *)(param_1 + 0x250) = 0;
    if (*(int *)(param_1 + 0x254) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x248),0);
      *(undefined4 *)(param_1 + 0x254) = 0;
    }
    *(undefined4 *)(param_1 + 0x248) = 0;
    *(undefined4 *)(param_1 + 0x24c) = 0;
  }
  return;
}

// 00C908F0  FUN_00c908f0  size=81  [run]
int __thiscall FUN_00c908f0(int param_1,byte param_2)

{
  if (*(int *)(param_1 + 0x248) != 0) {
    *(undefined4 *)(param_1 + 0x250) = 0;
    if (*(int *)(param_1 + 0x254) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x248),0);
      *(undefined4 *)(param_1 + 0x254) = 0;
    }
    *(undefined4 *)(param_1 + 0x248) = 0;
    *(undefined4 *)(param_1 + 0x24c) = 0;
  }
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C90950  FUN_00c90950  size=168  [run]
bool FUN_00c90950(int param_1)

{
  if (DAT_01dbd1d0 != 0) {
    return true;
  }
  if (param_1 == 0) {
    return false;
  }
  DAT_01dbd1d4 = param_1;
  DAT_01dbd1d0 = FUN_00dd3500(1,param_1);
  if (DAT_01dbd1d0 != 0) {
    DAT_01dbd1d8 = (int *)FUN_00dd3500(0x14,DAT_01dbd1d4);
    if (DAT_01dbd1d8 != (int *)0x0) {
      *DAT_01dbd1d8 = param_1;
      DAT_01dbd1d8[2] = -0x40800000;
      DAT_01dbd1d8[1] = -1;
      DAT_01dbd1d8[3] = -1;
      DAT_01dbd1d8[4] = 0;
      return DAT_01dbd1d0 != 0;
    }
    DAT_01dbd1d8 = (int *)0x0;
    if (DAT_01dbd1d0 == 0) goto LAB_00c909ed;
    FUN_00dd4920(DAT_01dbd1d0);
  }
  DAT_01dbd1d0 = 0;
LAB_00c909ed:
  return DAT_01dbd1d0 != 0;
}

// 00C90A00  FUN_00c90a00  size=11  [run]
void FUN_00c90a00(void)

{
  FUN_00c90600();
  return;
}

// 00C90A60  FUN_00c90a60  size=243  [run]
void __fastcall FUN_00c90a60(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x18);
  if (piVar2 != piVar2 + *(int *)(param_1 + 0x20)) {
    do {
      iVar1 = *piVar2;
      if (iVar1 != 0) {
        if (*(int **)(iVar1 + 0x2c) != (int *)0x0) {
          (**(code **)(**(int **)(iVar1 + 0x2c) + 8))();
          if (*(undefined4 **)(iVar1 + 0x2c) != (undefined4 *)0x0) {
            (**(code **)**(undefined4 **)(iVar1 + 0x2c))(1);
          }
        }
        if (*(int **)(iVar1 + 0x30) != (int *)0x0) {
          (**(code **)(**(int **)(iVar1 + 0x30) + 0xc))();
          if (*(int **)(iVar1 + 0x30) != (int *)0x0) {
            (**(code **)(**(int **)(iVar1 + 0x30) + 4))(1);
          }
        }
        *(undefined4 *)(iVar1 + 4) = 0;
        if (*piVar2 != 0) {
          FUN_00dd4920(*piVar2);
        }
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != (int *)(*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x20) * 4));
  }
  piVar2 = *(int **)(param_1 + 0x2c);
  if (piVar2 != piVar2 + *(int *)(param_1 + 0x34)) {
    do {
      iVar1 = *piVar2;
      if (iVar1 != 0) {
        if (*(int **)(iVar1 + 0x2c) != (int *)0x0) {
          (**(code **)(**(int **)(iVar1 + 0x2c) + 8))();
          if (*(undefined4 **)(iVar1 + 0x2c) != (undefined4 *)0x0) {
            (**(code **)**(undefined4 **)(iVar1 + 0x2c))(1);
          }
        }
        if (*(int **)(iVar1 + 0x30) != (int *)0x0) {
          (**(code **)(**(int **)(iVar1 + 0x30) + 0xc))();
          if (*(int **)(iVar1 + 0x30) != (int *)0x0) {
            (**(code **)(**(int **)(iVar1 + 0x30) + 4))(1);
          }
        }
        *(undefined4 *)(iVar1 + 4) = 0;
        if (*piVar2 != 0) {
          FUN_00dd4920(*piVar2);
        }
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != (int *)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x34) * 4));
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  return;
}

// 00C90C40  FUN_00c90c40  size=448  [run]
void __fastcall FUN_00c90c40(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  
  piVar6 = *(int **)(param_1 + 0x18);
  piVar2 = piVar6 + *(int *)(param_1 + 0x20);
  for (; piVar6 != piVar2; piVar6 = piVar6 + 1) {
    iVar3 = *piVar6;
    iVar4 = *(int *)(iVar3 + 0x1c);
    if ((*(int *)(iVar3 + 0x18) != 2) &&
       ((iVar4 == *(int *)(param_1 + 0x6e4) ||
        (((iVar4 != *(int *)(param_1 + 0x6f0) &&
          ((iVar4 == *(int *)(param_1 + 0x6e8) || (iVar4 = FUN_00d4f040(iVar4,1), iVar4 != 0)))) &&
         ((*(int *)(iVar3 + 0x24) == *(int *)(param_1 + 0x6ec) ||
          (iVar4 = FUN_00d4f040(*(int *)(iVar3 + 0x24),0), iVar4 == 0)))))))) {
      piVar5 = *(int **)(param_1 + 4);
      piVar1 = piVar5 + *(int *)(param_1 + 0xc);
      for (; piVar5 != piVar1; piVar5 = piVar5 + 1) {
        if ((*piVar5 != 0) && (*piVar5 == iVar3)) goto LAB_00c90d13;
      }
      if (*(int *)(param_1 + 0xc) < *(int *)(param_1 + 8)) {
        if (piVar1 != (int *)0x0) {
          *piVar1 = iVar3;
        }
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
      }
      *(undefined4 *)(iVar3 + 4) = 1;
      if ((*(int **)(iVar3 + 0x2c) != (int *)0x0) &&
         (iVar4 = (**(code **)(**(int **)(iVar3 + 0x2c) + 0xc))(), iVar4 == 0)) {
        *(undefined4 *)(iVar3 + 4) = 4;
      }
      if (*(int **)(iVar3 + 0x30) != (int *)0x0) {
        (**(code **)(**(int **)(iVar3 + 0x30) + 0x10))();
      }
    }
LAB_00c90d13:
  }
  piVar6 = *(int **)(param_1 + 0x2c);
  piVar2 = piVar6 + *(int *)(param_1 + 0x34);
  do {
    if (piVar6 == piVar2) {
      return;
    }
    iVar3 = *piVar6;
    iVar4 = *(int *)(iVar3 + 0x1c);
    if ((*(int *)(iVar3 + 0x18) != 2) &&
       ((iVar4 == *(int *)(param_1 + 0x6e4) ||
        (((iVar4 != *(int *)(param_1 + 0x6f0) &&
          ((iVar4 == *(int *)(param_1 + 0x6e8) || (iVar4 = FUN_00d4f040(iVar4,1), iVar4 != 0)))) &&
         ((*(int *)(iVar3 + 0x24) == *(int *)(param_1 + 0x6ec) ||
          (iVar4 = FUN_00d4f040(*(int *)(iVar3 + 0x24),0), iVar4 == 0)))))))) {
      piVar5 = *(int **)(param_1 + 4);
      piVar1 = piVar5 + *(int *)(param_1 + 0xc);
      for (; piVar5 != piVar1; piVar5 = piVar5 + 1) {
        if ((*piVar5 != 0) && (*piVar5 == iVar3)) goto LAB_00c90ded;
      }
      if (*(int *)(param_1 + 0xc) < *(int *)(param_1 + 8)) {
        if (piVar1 != (int *)0x0) {
          *piVar1 = iVar3;
        }
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
      }
      *(undefined4 *)(iVar3 + 4) = 1;
      if ((*(int **)(iVar3 + 0x2c) != (int *)0x0) &&
         (iVar4 = (**(code **)(**(int **)(iVar3 + 0x2c) + 0xc))(), iVar4 == 0)) {
        *(undefined4 *)(iVar3 + 4) = 4;
      }
      if (*(int **)(iVar3 + 0x30) != (int *)0x0) {
        (**(code **)(**(int **)(iVar3 + 0x30) + 0x10))();
      }
    }
LAB_00c90ded:
    piVar6 = piVar6 + 1;
  } while( true );
}

// 00C90E00  FUN_00c90e00  size=120  [run]
undefined4 __thiscall FUN_00c90e00(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  
  piVar6 = *(int **)(param_1 + 0x18);
  piVar1 = piVar6 + *(int *)(param_1 + 0x20);
  uVar4 = 0;
  for (; piVar6 != piVar1; piVar6 = piVar6 + 1) {
    iVar3 = *piVar6;
    if (*(int *)(iVar3 + 0x1c) == param_2) {
      if (*(int *)(param_1 + 0xc) < *(int *)(param_1 + 8)) {
        piVar2 = (int *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 0xc) * 4);
        if (piVar2 != (int *)0x0) {
          *piVar2 = iVar3;
        }
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
      }
      *(undefined4 *)(iVar3 + 4) = 1;
      if ((*(int **)(iVar3 + 0x2c) != (int *)0x0) &&
         (iVar5 = (**(code **)(**(int **)(iVar3 + 0x2c) + 0xc))(), iVar5 == 0)) {
        *(undefined4 *)(iVar3 + 4) = 4;
      }
      if (*(int **)(iVar3 + 0x30) != (int *)0x0) {
        (**(code **)(**(int **)(iVar3 + 0x30) + 0x10))();
      }
      uVar4 = 1;
    }
  }
  return uVar4;
}

// 00C90E80  FUN_00c90e80  size=52  [run]
undefined4 FUN_00c90e80(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00fdc7b0(param_1,0x26);
  if (iVar1 != param_1) {
    return 0;
  }
  uVar2 = FUN_00e03ea0(param_1);
  uVar2 = FUN_00c90e00(uVar2);
  return uVar2;
}

// 00C90EC0  FUN_00c90ec0  size=120  [run]
undefined4 __thiscall FUN_00c90ec0(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  
  piVar6 = *(int **)(param_1 + 0x2c);
  piVar1 = piVar6 + *(int *)(param_1 + 0x34);
  uVar4 = 0;
  for (; piVar6 != piVar1; piVar6 = piVar6 + 1) {
    iVar3 = *piVar6;
    if (*(int *)(iVar3 + 0x1c) == param_2) {
      if (*(int *)(param_1 + 0xc) < *(int *)(param_1 + 8)) {
        piVar2 = (int *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 0xc) * 4);
        if (piVar2 != (int *)0x0) {
          *piVar2 = iVar3;
        }
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
      }
      *(undefined4 *)(iVar3 + 4) = 1;
      if ((*(int **)(iVar3 + 0x2c) != (int *)0x0) &&
         (iVar5 = (**(code **)(**(int **)(iVar3 + 0x2c) + 0xc))(), iVar5 == 0)) {
        *(undefined4 *)(iVar3 + 4) = 4;
      }
      if (*(int **)(iVar3 + 0x30) != (int *)0x0) {
        (**(code **)(**(int **)(iVar3 + 0x30) + 0x10))();
      }
      uVar4 = 1;
    }
  }
  return uVar4;
}

// 00C90F40  FUN_00c90f40  size=52  [run]
undefined4 FUN_00c90f40(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00fdc7b0(param_1,0x26);
  if (iVar1 != param_1) {
    return 0;
  }
  uVar2 = FUN_00e03ea0(param_1);
  uVar2 = FUN_00c90ec0(uVar2);
  return uVar2;
}

// 00C90F80  FUN_00c90f80  size=136  [run]
void __fastcall FUN_00c90f80(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar2 = FUN_00d4f160();
  if ((iVar2 != 1) && (piVar4 = *(int **)(param_1 + 4), piVar4 != piVar4 + *(int *)(param_1 + 0xc)))
  {
    do {
      iVar2 = *(int *)(*piVar4 + 0x24);
      if ((iVar2 == *(int *)(param_1 + 0x6ec)) ||
         ((iVar2 == *(int *)(param_1 + 0x6e4) || (iVar2 = FUN_00d4f040(iVar2,0), iVar2 == 0)))) {
        piVar4 = piVar4 + 1;
      }
      else {
        iVar3 = (int)piVar4 - *(int *)(param_1 + 4) >> 2;
        iVar2 = iVar3;
        if (iVar3 < *(int *)(param_1 + 0xc) + -1) {
          do {
            puVar1 = (undefined4 *)(*(int *)(param_1 + 4) + iVar2 * 4);
            *puVar1 = puVar1[1];
            iVar2 = iVar2 + 1;
          } while (iVar2 < *(int *)(param_1 + 0xc) + -1);
        }
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
        piVar4 = (int *)(*(int *)(param_1 + 4) + iVar3 * 4);
      }
    } while (piVar4 != (int *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 0xc) * 4));
  }
  return;
}

// 00C91010  FUN_00c91010  size=108  [run]
undefined4 __thiscall FUN_00c91010(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  piVar2 = *(int **)(param_1 + 4);
  piVar4 = piVar2;
  if (piVar2 != piVar2 + *(int *)(param_1 + 0xc)) {
    do {
      if (*(int *)(*piVar2 + 0x1c) == param_2) {
        iVar1 = (int)piVar2 - (int)piVar4 >> 2;
        iVar3 = iVar1;
        if (iVar1 < *(int *)(param_1 + 0xc) + -1) {
          do {
            *(undefined4 *)(*(int *)(param_1 + 4) + iVar3 * 4) =
                 *(undefined4 *)(*(int *)(param_1 + 4) + 4 + iVar3 * 4);
            iVar3 = iVar3 + 1;
          } while (iVar3 < *(int *)(param_1 + 0xc) + -1);
        }
        piVar4 = *(int **)(param_1 + 4);
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
        piVar2 = piVar4 + iVar1;
      }
      else {
        piVar2 = piVar2 + 1;
      }
    } while (piVar2 != (int *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 0xc) * 4));
  }
  return 1;
}

// 00C91130  FUN_00c91130  size=191  [run]
uint FUN_00c91130(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  
  piVar6 = *(int **)(param_1 + 4);
  uVar5 = 1;
  if (piVar6 != piVar6 + *(int *)(param_1 + 0xc)) {
    do {
      iVar1 = *piVar6;
      if (*(int *)(iVar1 + 0x1c) == param_2) {
        *(undefined4 *)(iVar1 + 4) = 1;
        if ((*(int **)(iVar1 + 0x2c) != (int *)0x0) &&
           (iVar3 = (**(code **)(**(int **)(iVar1 + 0x2c) + 0xc))(), iVar3 == 0)) {
          *(undefined4 *)(iVar1 + 4) = 4;
        }
        if (*(int **)(iVar1 + 0x30) != (int *)0x0) {
          (**(code **)(**(int **)(iVar1 + 0x30) + 0x10))();
        }
        if (*(int **)(iVar1 + 0x2c) != (int *)0x0) {
          (**(code **)(**(int **)(iVar1 + 0x2c) + 4))();
        }
        if (*(int **)(iVar1 + 0x30) != (int *)0x0) {
          (**(code **)(**(int **)(iVar1 + 0x30) + 8))();
        }
        *(undefined4 *)(iVar1 + 0x34) = 0xffffffff;
        *(undefined4 *)(iVar1 + 0x38) = 0xbf800000;
        piVar2 = *(int **)(iVar1 + 0x30);
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 0x14))();
          uVar4 = (**(code **)(*piVar2 + 0x18))(0);
          uVar5 = uVar5 & uVar4;
        }
      }
      piVar6 = piVar6 + 1;
    } while (piVar6 != (int *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 0xc) * 4));
  }
  return uVar5;
}

// 00C91230  FUN_00c91230  size=219  [run]
undefined4 __thiscall FUN_00c91230(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  
  _memset(param_2,0xff,0x1800);
  piVar5 = *(int **)(param_1 + 4);
  piVar1 = piVar5 + *(int *)(param_1 + 0xc);
  do {
    if (piVar5 == piVar1) {
      return 1;
    }
    puVar3 = (undefined4 *)*piVar5;
    if (puVar3 != (undefined4 *)0x0) {
      piVar4 = *(int **)(param_1 + 0x18);
      piVar2 = piVar4 + *(int *)(param_1 + 0x20);
      iVar6 = 0;
      for (; piVar4 != piVar2; piVar4 = piVar4 + 1) {
        if (((undefined4 *)*piVar4 != (undefined4 *)0x0) && ((undefined4 *)*piVar4 == puVar3)) {
          if (-1 < iVar6) {
            *param_2 = 0;
            param_2[1] = iVar6;
            param_2 = param_2 + 4;
            goto LAB_00c912c7;
          }
          break;
        }
        iVar6 = iVar6 + 1;
      }
      if (puVar3 != (undefined4 *)0x0) {
        piVar4 = *(int **)(param_1 + 0x2c);
        piVar2 = piVar4 + *(int *)(param_1 + 0x34);
        iVar6 = 0;
        for (; piVar4 != piVar2; piVar4 = piVar4 + 1) {
          if (((undefined4 *)*piVar4 != (undefined4 *)0x0) && ((undefined4 *)*piVar4 == puVar3)) {
            if (-1 < iVar6) {
              *param_2 = 1;
              param_2[1] = iVar6;
              param_2 = param_2 + 4;
              goto LAB_00c912c7;
            }
            break;
          }
          iVar6 = iVar6 + 1;
        }
      }
    }
    FUN_00dd5650(&DAT_016ae9b4,*puVar3);
LAB_00c912c7:
    piVar5 = piVar5 + 1;
  } while( true );
}

// 00C91310  FUN_00c91310  size=50  [run]
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_00c91310(void)

{
  int iVar1;
  undefined1 local_1810 [6140];
  undefined4 uStack_14;
  
  uStack_14 = 0xc91320;
  iVar1 = FUN_00c91230(local_1810);
  if (iVar1 == 1) {
    FUN_009c6820(2,local_1810);
  }
  return;
}

// 00C91350  FUN_00c91350  size=152  [run]
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

int __fastcall FUN_00c91350(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int local_1810 [1535];
  undefined4 uStack_14;
  
  uStack_14 = 0xc91360;
  iVar2 = FUN_009c44e0(2,local_1810);
  if (iVar2 == 1) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    piVar6 = local_1810 + 1;
    iVar5 = 0x180;
    do {
      iVar3 = piVar6[-1];
      if (iVar3 != -1) {
        if (iVar3 == 0) {
          iVar3 = *piVar6;
          iVar4 = 0;
          if (iVar3 < *(int *)(param_1 + 0x20)) {
            iVar4 = *(int *)(param_1 + 0x18);
LAB_00c913b9:
            iVar4 = *(int *)(iVar4 + iVar3 * 4);
          }
        }
        else {
          if (iVar3 != 1) goto LAB_00c913db;
          iVar3 = *piVar6;
          iVar4 = 0;
          if (iVar3 < *(int *)(param_1 + 0x34)) {
            iVar4 = *(int *)(param_1 + 0x2c);
            goto LAB_00c913b9;
          }
        }
        if ((iVar4 != 0) && (*(int *)(param_1 + 0xc) < *(int *)(param_1 + 8))) {
          piVar1 = (int *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 0xc) * 4);
          if (piVar1 != (int *)0x0) {
            *piVar1 = iVar4;
          }
          *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
        }
      }
LAB_00c913db:
      piVar6 = piVar6 + 4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return iVar2;
}

// 00C913F0  FUN_00c913f0  size=11  [run]
void FUN_00c913f0(void)

{
  FUN_00c90550();
  return;
}

// 00C91400  FUN_00c91400  size=114  [run]
uint __thiscall FUN_00c91400(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  
  if (0x17f < *(int *)(param_1 + 0x20)) {
    uVar1 = FUN_00dd5650(&DAT_016ae9e8);
    return uVar1 & 0xffffff00;
  }
  if (*(int *)(param_2 + 0x2c) != 0) {
    (**(code **)(**(int **)(param_2 + 0x2c) + 4))();
  }
  if (*(int *)(param_2 + 0x30) != 0) {
    (**(code **)(**(int **)(param_2 + 0x30) + 8))();
  }
  *(undefined4 *)(param_2 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_2 + 0x38) = 0xbf800000;
  piVar2 = *(int **)(param_1 + 0x20);
  if ((int)piVar2 < *(int *)(param_1 + 0x1c)) {
    piVar2 = (int *)(*(int *)(param_1 + 0x18) + (int)piVar2 * 4);
    if (piVar2 != (int *)0x0) {
      *piVar2 = param_2;
    }
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  }
  return CONCAT31((int3)((uint)piVar2 >> 8),1);
}

// 00C91480  FUN_00c91480  size=114  [run]
uint __thiscall FUN_00c91480(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  
  if (0x17f < *(int *)(param_1 + 0x34)) {
    uVar1 = FUN_00dd5650(&DAT_016aea30);
    return uVar1 & 0xffffff00;
  }
  if (*(int *)(param_2 + 0x2c) != 0) {
    (**(code **)(**(int **)(param_2 + 0x2c) + 4))();
  }
  if (*(int *)(param_2 + 0x30) != 0) {
    (**(code **)(**(int **)(param_2 + 0x30) + 8))();
  }
  *(undefined4 *)(param_2 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_2 + 0x38) = 0xbf800000;
  piVar2 = *(int **)(param_1 + 0x34);
  if ((int)piVar2 < *(int *)(param_1 + 0x30)) {
    piVar2 = (int *)(*(int *)(param_1 + 0x2c) + (int)piVar2 * 4);
    if (piVar2 != (int *)0x0) {
      *piVar2 = param_2;
    }
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  }
  return CONCAT31((int3)((uint)piVar2 >> 8),1);
}


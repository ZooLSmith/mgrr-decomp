// src/unsorted/unit_0094DF20.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0094DF20..0094E390, 9 functions

#include "mgrr.h"

// 0094DF20  FUN_0094df20  size=106  [run]
int * __thiscall FUN_0094df20(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  piVar4 = (int *)0x0;
  iVar1 = FUN_00d466f0();
  if (iVar1 == 0) {
    puVar3 = *(undefined4 **)(param_1 + 4);
    puVar2 = puVar3 + *(int *)(param_1 + 8);
    for (; puVar3 != puVar2; puVar3 = puVar3 + 1) {
      if (*(int *)*puVar3 == param_2) {
        piVar4 = (int *)*puVar3;
      }
    }
  }
  else {
    puVar2 = *(undefined4 **)(param_1 + 0x1c);
    if (puVar2 != puVar2 + *(int *)(param_1 + 0x20)) {
      puVar3 = puVar2 + *(int *)(param_1 + 0x20);
      do {
        if (*(int *)*puVar2 == param_2) {
          piVar4 = (int *)*puVar2;
        }
        puVar2 = puVar2 + 1;
      } while (puVar2 != puVar3);
      return piVar4;
    }
  }
  return piVar4;
}

// 0094DF90  FUN_0094df90  size=60  [run]
undefined4 __thiscall FUN_0094df90(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_00d466f0();
  if (iVar1 == 0) {
    if (param_2 < *(uint *)(param_1 + 8)) {
      uVar2 = *(undefined4 *)(*(int *)(param_1 + 4) + param_2 * 4);
    }
  }
  else if (param_2 < *(uint *)(param_1 + 0x20)) {
    return *(undefined4 *)(*(int *)(param_1 + 0x1c) + param_2 * 4);
  }
  return uVar2;
}

// 0094DFD0  FUN_0094dfd0  size=108  [run]
int __thiscall FUN_0094dfd0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar1 = FUN_00d466f0();
  if (iVar1 == 0) {
    piVar3 = *(int **)(param_1 + 4);
    piVar2 = piVar3 + *(int *)(param_1 + 8);
    for (; piVar3 != piVar2; piVar3 = piVar3 + 1) {
      if (*(int *)(*piVar3 + 8) == param_2) {
        iVar4 = *piVar3;
      }
    }
  }
  else {
    piVar2 = *(int **)(param_1 + 0x1c);
    if (piVar2 != piVar2 + *(int *)(param_1 + 0x20)) {
      piVar3 = piVar2 + *(int *)(param_1 + 0x20);
      do {
        if (*(int *)(*piVar2 + 8) == param_2) {
          iVar4 = *piVar2;
        }
        piVar2 = piVar2 + 1;
      } while (piVar2 != piVar3);
      return iVar4;
    }
  }
  return iVar4;
}

// 0094E040  FUN_0094e040  size=27  [run]
undefined4 __fastcall FUN_0094e040(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00d466f0();
  if (iVar1 != 0) {
    return *(undefined4 *)(param_1 + 0x20);
  }
  return *(undefined4 *)(param_1 + 8);
}

// 0094E060  FUN_0094e060  size=216  [run]
undefined4 __thiscall FUN_0094e060(int param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = 0;
  if ((param_2 & 0xf00) == 0xc00) {
    iVar2 = FUN_009c73f0(6);
    if (iVar2 == 0) {
      FUN_00dd5650(&DAT_0164ffc8);
    }
    else {
      iVar2 = FUN_00e9cfe0(*(undefined4 *)(param_1 + 0x34));
      if (iVar2 == 0) {
        uVar1 = FUN_00949cc0("coreItdlc2.dat");
        *(undefined4 *)(param_1 + 0x34) = uVar1;
      }
      if (*(int *)(param_1 + 0x34) != 0) {
        *(undefined4 *)(param_1 + 0x30) = 2;
        uVar1 = 1;
        goto LAB_0094e0d1;
      }
    }
    uVar1 = 0;
    *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  }
LAB_0094e0d1:
  if ((param_2 & 0xf00) == 0xd00) {
    iVar2 = FUN_009c73f0(7);
    if (iVar2 == 0) {
      FUN_00dd5650(&DAT_01650450);
    }
    else {
      iVar2 = FUN_00e9cfe0(*(undefined4 *)(param_1 + 0x34));
      if (iVar2 == 0) {
        uVar1 = FUN_00949cc0("coreItdlc3.dat");
        *(undefined4 *)(param_1 + 0x34) = uVar1;
      }
      if (*(int *)(param_1 + 0x34) != 0) {
        *(undefined4 *)(param_1 + 0x30) = 3;
        return 1;
      }
    }
    uVar1 = 0;
    *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  }
  return uVar1;
}

// 0094E140  FUN_0094e140  size=266  [run]
int __thiscall
FUN_0094e140(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 *param_5)

{
  int *piVar1;
  ushort uVar2;
  ushort uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  ushort *puVar7;
  uint uVar8;
  bool bVar9;
  
  piVar4 = *(int **)(param_1 + 4);
  piVar1 = piVar4 + *(int *)(param_1 + 8);
  if (piVar4 == piVar1) {
    return 0;
  }
  do {
    iVar6 = *piVar4;
    if (param_4 == 0) {
      if (*(int *)(iVar6 + 4) != -1) {
        bVar9 = *(int *)(iVar6 + 4) == param_2;
        goto LAB_0094e175;
      }
    }
    else {
      bVar9 = *(int *)(iVar6 + 8) == param_4;
LAB_0094e175:
      if (bVar9) {
        iVar5 = FUN_00a00f80(*(undefined4 *)(iVar6 + 0x10),0);
        if (iVar5 == 0) {
          return 0;
        }
        uVar2 = FUN_00dde2a0(0,100);
        uVar8 = 0;
        if (*(uint *)(iVar6 + 0xc) == 0) {
          return 0;
        }
        uVar3 = 0;
        puVar7 = (ushort *)(iVar6 + 0x16);
        while ((uVar2 < uVar3 || ((uint)*puVar7 + (uint)uVar3 <= (uint)uVar2))) {
          uVar3 = uVar3 + *puVar7;
          uVar8 = uVar8 + 1;
          puVar7 = puVar7 + 4;
          if (*(uint *)(iVar6 + 0xc) <= uVar8) {
            return 0;
          }
        }
        iVar5 = FUN_0094df20(*(undefined2 *)(iVar6 + 0x14 + uVar8 * 8));
        if (param_5 != (undefined4 *)0x0) {
          *param_5 = *(undefined4 *)(iVar6 + 0x14 + uVar8 * 8);
          param_5[1] = *(undefined4 *)(iVar6 + 0x18 + uVar8 * 8);
        }
        iVar6 = FUN_0094bbd0(*(undefined4 *)(iVar5 + 8),*(undefined2 *)(iVar6 + 0x18 + uVar8 * 8));
        if (iVar6 != 0) {
          return 0;
        }
        return iVar5;
      }
    }
    piVar4 = piVar4 + 1;
    if (piVar4 == piVar1) {
      return 0;
    }
  } while( true );
}

// 0094E250  FUN_0094e250  size=88  [run]
void __fastcall FUN_0094e250(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + -4);
    iVar4 = iVar2 + -1;
    if (-1 < iVar4) {
      puVar3 = (undefined4 *)(iVar1 + iVar2 * 0xc + 8);
      do {
        puVar3[-5] = 0;
        puVar3[-4] = 0;
        if (puVar3[-3] != 0) {
          FUN_00dd4940(puVar3[-3]);
          puVar3[-3] = 0;
        }
        iVar4 = iVar4 + -1;
        puVar3 = puVar3 + -3;
      } while (-1 < iVar4);
    }
    FUN_00dd4940((int *)(iVar1 + -4));
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}

// 0094E2B0  FUN_0094e2b0  size=30  [run]
undefined4 __thiscall FUN_0094e2b0(undefined4 param_1,byte param_2)

{
  FUN_0094e250();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 0094E390  FUN_0094e390  size=71  [run]
void __thiscall FUN_0094e390(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 4);
  if (piVar3 != piVar3 + *(int *)(param_1 + 8)) {
    do {
      iVar1 = *piVar3;
      if ((*(int *)(iVar1 + 4) == param_2) &&
         (((uVar2 = *(uint *)(iVar1 + 0x4c), (uVar2 & 1) == 0 || ((uVar2 & 0x80000000) == 0)) &&
          ((uVar2 & 2) == 0)))) {
        *(uint *)(iVar1 + 0x4c) = uVar2 | 0x28;
      }
      piVar3 = piVar3 + 1;
    } while (piVar3 != (int *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 4));
  }
  return;
}


// src/unsorted/unit_0094DB50.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0094DB50..0094F150, 37 functions

#include "mgrr.h"

// 0094DB50  FUN_0094db50  size=338  [run]
undefined4 __fastcall FUN_0094db50(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  
  uVar3 = 0;
  if (0 < param_1[0x15]) {
    piVar1 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar1 + 0x28))(0);
    if ((iVar2 != 0) && (piVar1 = (int *)FUN_00a7c8a0(), piVar1 != (int *)0x0)) {
      puVar4 = &DAT_01be9db8;
      (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
      iVar2 = FUN_00dd6d80(puVar4);
      if (iVar2 != 0) {
        if (param_1[4] == 0xd92bb0f) {
          iVar2 = FUN_00d46710();
          if ((iVar2 == 0) && ((DAT_018b9174 < 0xe00 || (0xe20 < DAT_018b9174)))) {
            uVar3 = *(undefined4 *)(param_1[0x19] + 0x3c + DAT_01b76230 * 4);
          }
          else {
            iVar2 = FUN_009c4bf0();
            uVar3 = *(undefined4 *)(param_1[0x19] + 0x3c + iVar2 * 4);
          }
          FUN_00be8310(uVar3);
          FUN_00e5e050("core_se_sys_item_electro_repair",0);
          (**(code **)(*param_1 + 0x24))();
          return 1;
        }
        if (param_1[4] == 0x23a6f56d) {
          iVar2 = FUN_00d46710();
          if ((iVar2 == 0) && ((DAT_018b9174 < 0xe00 || (0xe20 < DAT_018b9174)))) {
            uVar3 = *(undefined4 *)(param_1[0x19] + DAT_01b76230 * 4);
          }
          else {
            iVar2 = FUN_009c4bf0();
            uVar3 = *(undefined4 *)(param_1[0x19] + iVar2 * 4);
          }
          FUN_00b94770(uVar3);
          FUN_00e5e050("core_se_sys_item_repair",0);
          FUN_00949be0();
          piVar1 = (int *)FUN_00c1b9a0();
          (**(code **)(*piVar1 + 0x70))();
        }
        uVar3 = 1;
      }
    }
    (**(code **)(*param_1 + 0x24))();
  }
  return uVar3;
}

// 0094DCB0  FUN_0094dcb0  size=366  [run]
undefined4 __fastcall FUN_0094dcb0(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  
  uVar3 = 0;
  if (0 < param_1[0x15]) {
    piVar1 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar1 + 0x28))(0);
    if ((iVar2 != 0) && (piVar1 = (int *)FUN_00a7c8a0(), piVar1 != (int *)0x0)) {
      puVar4 = &DAT_01be9db8;
      (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
      iVar2 = FUN_00dd6d80(puVar4);
      if (iVar2 != 0) {
        if (param_1[4] == 0x23a6f56d) {
          iVar2 = FUN_00d46710();
          if ((iVar2 == 0) && ((DAT_018b9174 < 0xe00 || (0xe20 < DAT_018b9174)))) {
            uVar3 = *(undefined4 *)(param_1[0x19] + 0x14 + DAT_01b76230 * 4);
          }
          else {
            iVar2 = FUN_009c4bf0();
            uVar3 = *(undefined4 *)(param_1[0x19] + 0x14 + iVar2 * 4);
          }
          FUN_00b94770(uVar3);
          FUN_00e5e050("core_se_sys_item_repair",0);
          DAT_01dc08b0 = (uint)((DAT_01bea094 & 0x40000) != 0x40000);
          piVar1 = (int *)FUN_00c1b9a0();
          (**(code **)(*piVar1 + 0x70))();
          (**(code **)(*param_1 + 0x24))();
          return 1;
        }
        if (param_1[4] == 0xd92bb0f) {
          iVar2 = FUN_00d46710();
          if ((iVar2 == 0) && ((DAT_018b9174 < 0xe00 || (0xe20 < DAT_018b9174)))) {
            uVar3 = *(undefined4 *)(param_1[0x19] + 0x3c + DAT_01b76230 * 4);
          }
          else {
            iVar2 = FUN_009c4bf0();
            uVar3 = *(undefined4 *)(param_1[0x19] + 0x3c + iVar2 * 4);
          }
          FUN_00be8310(uVar3);
          FUN_00e5e050("core_se_sys_item_electro_repair",0);
        }
        uVar3 = 1;
      }
    }
    (**(code **)(*param_1 + 0x24))();
  }
  return uVar3;
}

// 0094DE20  FUN_0094de20  size=247  [run]
undefined4 __fastcall FUN_0094de20(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  
  uVar3 = 0;
  if (0 < param_1[0x15]) {
    piVar1 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar1 + 0x28))(0);
    if ((iVar2 != 0) && (piVar1 = (int *)FUN_00a7c8a0(), piVar1 != (int *)0x0)) {
      puVar4 = &DAT_01be9db8;
      (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
      iVar2 = FUN_00dd6d80(puVar4);
      if (iVar2 != 0) {
        if (param_1[4] == 0x23a6f56d) {
          iVar2 = FUN_00d46710();
          if ((iVar2 == 0) && ((DAT_018b9174 < 0xe00 || (0xe20 < DAT_018b9174)))) {
            uVar3 = *(undefined4 *)(param_1[0x19] + 0x28 + DAT_01b76230 * 4);
          }
          else {
            iVar2 = FUN_009c4bf0();
            uVar3 = *(undefined4 *)(param_1[0x19] + 0x28 + iVar2 * 4);
          }
          FUN_00b94770(uVar3);
          FUN_00e5e050("core_se_sys_item_repair",0);
          DAT_01dc08b0 = (uint)((DAT_01bea094 & 0x40000) != 0x40000);
          piVar1 = (int *)FUN_00c1b9a0();
          (**(code **)(*piVar1 + 0x70))();
        }
        uVar3 = 1;
      }
    }
    (**(code **)(*param_1 + 0x24))();
  }
  return uVar3;
}

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

// 0094E3E0  FUN_0094e3e0  size=114  [run]
void __thiscall FUN_0094e3e0(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_1 + 4);
  if (piVar4 != piVar4 + *(int *)(param_1 + 8)) {
    do {
      piVar1 = (int *)*piVar4;
      if ((*piVar1 == param_2) &&
         (piVar1[0x13] = piVar1[0x13] | 1, (piVar1[0x13] & 0x80000000U) != 0)) {
        iVar3 = 0;
        uVar2 = 0x20cc;
        do {
          if (*(int *)(&DAT_01b73860 + uVar2) == -1) {
            (&DAT_01b7592c)[iVar3] = *piVar1;
            goto LAB_0094e433;
          }
          uVar2 = uVar2 + 4;
          iVar3 = iVar3 + 1;
        } while (uVar2 < 0x210c);
        FUN_00dd5650(&DAT_016504d4);
      }
LAB_0094e433:
      piVar4 = piVar4 + 1;
    } while (piVar4 != (int *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 4));
  }
  return;
}

// 0094E460  FUN_0094e460  size=138  [run]
void __thiscall FUN_0094e460(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_1 + 4);
  if (piVar4 != piVar4 + *(int *)(param_1 + 8)) {
    do {
      piVar1 = (int *)*piVar4;
      if (*piVar1 == param_2) {
        iVar2 = piVar1[0x1f];
        if (iVar2 != 0) {
          *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 1;
          *(undefined4 *)(iVar2 + 0x58) = 0;
          piVar1[0x1f] = 0;
        }
        iVar3 = piVar1[0x1c];
        if (iVar3 != 0) {
          FUN_00a805f0();
          piVar1[0x1c] = 0;
        }
        if (piVar1[0x1d] == 0) {
          if (iVar3 == 0 && iVar2 == 0) {
            piVar1[0x13] = piVar1[0x13] | 0x10;
          }
        }
        else {
          FUN_00a805f0();
          piVar1[0x1d] = 0;
        }
        piVar1[0x13] = piVar1[0x13] & 0xefffffffU | 1;
      }
      piVar4 = piVar4 + 1;
    } while (piVar4 != (int *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 4));
  }
  return;
}

// 0094E550  FUN_0094e550  size=96  [run]
void __thiscall FUN_0094e550(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_1 + 4);
  if (piVar4 != piVar4 + *(int *)(param_1 + 8)) {
    do {
      piVar1 = (int *)*piVar4;
      if (*piVar1 == param_2) {
        iVar2 = piVar1[0x1f];
        if (iVar2 != 0) {
          piVar1[0x1f] = 0;
        }
        iVar3 = piVar1[0x1c];
        if (iVar3 != 0) {
          piVar1[0x1c] = 0;
        }
        if (piVar1[0x1d] == 0) {
          if (iVar3 == 0 && iVar2 == 0) {
            piVar1[0x13] = piVar1[0x13] | 0x10;
          }
        }
        else {
          piVar1[0x1d] = 0;
        }
      }
      piVar4 = piVar4 + 1;
    } while (piVar4 != (int *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 4));
  }
  return;
}

// 0094E5E0  FUN_0094e5e0  size=47  [run]
int __thiscall FUN_0094e5e0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 4);
  piVar1 = piVar3 + *(int *)(param_1 + 8);
  iVar2 = 0;
  if (piVar3 != piVar1) {
    while (iVar2 = *piVar3, *(int *)(iVar2 + 0x10) != param_2) {
      piVar3 = piVar3 + 1;
      if (piVar3 == piVar1) {
        return 0;
      }
    }
  }
  return iVar2;
}

// 0094E6B0  FUN_0094e6b0  size=246  [run]
void FUN_0094e6b0(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  bool bVar8;
  
  if (DAT_01bea030 == 8) {
    uVar2 = 0xb;
    iVar4 = 9;
  }
  else if (DAT_01bea030 == 9) {
    uVar2 = 0x14;
    iVar4 = 7;
  }
  else {
    uVar2 = 0;
    iVar4 = 0xb;
  }
  uVar1 = iVar4 + uVar2;
  if (uVar2 < uVar1) {
    do {
      iVar4 = (&DAT_01886950)[uVar2];
      if (iVar4 == 0) {
        (&DAT_01b758ac)[uVar2] = 0xffffffff;
      }
      else {
        iVar3 = FUN_0094dfd0(iVar4);
        if (iVar3 != 0) {
          if (param_1 == 10) {
            if (*(int *)(iVar3 + 4) == 2) goto LAB_0094e740;
          }
          else if (param_1 == 0xb) {
            if (*(int *)(iVar3 + 4) == 0xe) {
LAB_0094e740:
              uVar5 = 0;
              iVar4 = FUN_0094dfd0(iVar4);
              if (iVar4 != 0) {
                iVar3 = *(int *)(iVar4 + 4);
                if (iVar3 == 2) {
                  bVar8 = param_1 == 10;
                }
                else if (iVar3 == 0xe) {
                  bVar8 = param_1 == 0xb;
                }
                else {
                  if (iVar3 != 0) goto LAB_0094e779;
                  bVar8 = param_1 == 0xc;
                }
                if (bVar8) {
                  uVar5 = *(undefined4 *)(iVar4 + 0x44);
                }
                else {
                  uVar5 = *(undefined4 *)(iVar4 + 0x10);
                }
              }
LAB_0094e779:
              (&DAT_01b758ac)[uVar2] = uVar5;
            }
          }
          else if ((param_1 == 0xc) && (*(int *)(iVar3 + 4) == 0)) goto LAB_0094e740;
        }
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < (int)uVar1);
  }
  puVar6 = &DAT_01b758ac;
  puVar7 = &DAT_018869d0;
  for (iVar4 = 0x20; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  return;
}

// 0094E7B0  FUN_0094e7b0  size=16  [run]
void FUN_0094e7b0(undefined4 param_1)

{
  FUN_0094e390(param_1);
  return;
}

// 0094E7C0  FUN_0094e7c0  size=99  [run]
void FUN_0094e7c0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_0094b7b0(param_1,param_2);
  iVar1 = thunk_FUN_009c5800();
  if (iVar1 == 0) {
    FUN_0094b850(param_1,param_2);
  }
  iVar1 = thunk_FUN_009c5800();
  if (iVar1 == 0) {
    FUN_0094b9d0(param_1,param_2);
  }
  iVar1 = thunk_FUN_009c5800();
  if (iVar1 == 0) {
    FUN_0094e060(DAT_018b91a0,DAT_018b9148);
  }
  return;
}

// 0094E830  FUN_0094e830  size=63  [run]
undefined4 FUN_0094e830(void)

{
  int iVar1;
  uint uVar2;
  
  if (DAT_018871c0 != 0) {
    return 1;
  }
  uVar2 = 0;
  do {
    iVar1 = FUN_00a00f80(*(undefined4 *)((int)&DAT_0164fa10 + uVar2),0);
    if (iVar1 == 0) {
      return 0;
    }
    uVar2 = uVar2 + 4;
  } while (uVar2 < 0x50);
  return 1;
}

// 0094E930  FUN_0094e930  size=57  [run]
undefined4 FUN_0094e930(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0094b8d0(param_1,param_2);
  iVar2 = FUN_0094ba40(param_1,param_2);
  if ((iVar1 != 0) && (iVar2 != 0)) {
    return 1;
  }
  return 0;
}

// 0094E970  FUN_0094e970  size=57  [run]
undefined4 FUN_0094e970(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0094b970(param_1,param_2);
  iVar2 = FUN_0094bb20(param_1,param_2);
  if ((iVar1 != 0) && (iVar2 != 0)) {
    return 1;
  }
  return 0;
}

// 0094E9B0  FUN_0094e9b0  size=16  [run]
void FUN_0094e9b0(undefined4 param_1)

{
  FUN_0094c150(param_1);
  return;
}

// 0094E9C0  FUN_0094e9c0  size=21  [run]
void FUN_0094e9c0(undefined4 param_1,undefined4 param_2)

{
  FUN_0094c060(param_1,param_2);
  return;
}

// 0094E9E0  FUN_0094e9e0  size=16  [run]
void FUN_0094e9e0(undefined4 param_1)

{
  FUN_0094e460(param_1);
  return;
}

// 0094E9F0  FUN_0094e9f0  size=101  [run]
undefined4 FUN_0094e9f0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  if (DAT_01b37398 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01b37380);
  }
  uVar2 = 0;
  for (piVar1 = (int *)PTR_DAT_01886b24; piVar1 != (int *)(PTR_DAT_01886b24 + DAT_01886b28 * 4);
      piVar1 = piVar1 + 1) {
    if (((*(uint *)(*piVar1 + 4) & 0x10000) != 0) && (*(int *)(*piVar1 + 0x68) == param_1)) {
      uVar2 = 1;
    }
  }
  if (DAT_01b37398 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01b37380);
  }
  return uVar2;
}

// 0094EA60  FUN_0094ea60  size=21  [run]
void FUN_0094ea60(undefined4 param_1,undefined4 param_2)

{
  FUN_0094bbd0(param_1,param_2);
  return;
}

// 0094EA80  FUN_0094ea80  size=16  [run]
void FUN_0094ea80(undefined4 param_1)

{
  FUN_0094bc80(param_1);
  return;
}

// 0094EA90  FUN_0094ea90  size=70  [run]
void FUN_0094ea90(undefined4 param_1)

{
  undefined4 uVar1;
  
  if (DAT_01b37398 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01b37380);
  }
  uVar1 = FUN_0094bc80(param_1);
  FUN_0094bde0(param_1,uVar1);
  if (DAT_01b37398 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01b37380);
  }
  return;
}

// 0094EAE0  FUN_0094eae0  size=6  [run]
undefined4 FUN_0094eae0(void)

{
  return DAT_01886b28;
}

// 0094EC20  FUN_0094ec20  size=70  [run]
undefined4 __fastcall FUN_0094ec20(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 4);
  if (puVar2 != puVar2 + *(int *)(param_1 + 8)) {
    do {
      iVar1 = FUN_00a00f80(*puVar2,0);
      if (iVar1 == 0) {
        return 0;
      }
      puVar2 = puVar2 + 1;
    } while (puVar2 != (undefined4 *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 4));
  }
  return 1;
}

// 0094EC70  FUN_0094ec70  size=251  [run]
void FUN_0094ec70(int param_1,int param_2)

{
  byte bVar1;
  
  if (param_2 - 1U < 0x20) {
    bVar1 = (byte)(param_2 - 1U);
    if (param_1 == 0x15e901d6) {
      DAT_01b6f3a0 = DAT_01b6f3a0 | 1 << (bVar1 & 0x1f);
      FUN_009c8c00();
      return;
    }
    if (param_1 == 0x6f2396e8) {
      DAT_01b6f3b4 = DAT_01b6f3b4 | 1 << (bVar1 & 0x1f);
      FUN_009c8c00();
      return;
    }
    if (param_1 == 0x75d75fe5) {
      DAT_01b6f3b0 = DAT_01b6f3b0 | 1 << (bVar1 & 0x1f);
      FUN_009c8c00();
      return;
    }
    if (param_1 == -0x21524111) {
      DAT_01b6f3b8 = DAT_01b6f3b8 | 1 << (bVar1 & 0x1f);
      FUN_009c8c00();
      return;
    }
    if (param_1 == 0x3855170f) {
      DAT_01b758a8 = DAT_01b758a8 | 1 << (bVar1 & 0x1f);
      FUN_009c8c00();
      return;
    }
  }
  return;
}

// 0094ED90  FUN_0094ed90  size=480  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0094ed90(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  piVar2 = (int *)PTR_DAT_01886ea4;
  if (PTR_DAT_01886ea4 == PTR_DAT_01886ea4 + DAT_01886ea8 * 4) {
    return;
  }
  while (piVar1 = (int *)*piVar2, piVar1[4] != param_3) {
    piVar2 = piVar2 + 1;
    if (piVar2 == (int *)(PTR_DAT_01886ea4 + DAT_01886ea8 * 4)) {
      return;
    }
  }
  if (piVar1 == (int *)0x0) {
    return;
  }
  iVar5 = -1;
  switch(param_2) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 7:
    iVar5 = 6;
    iVar3 = piVar1[0x15];
    iVar4 = 0x18;
    break;
  case 5:
  case 6:
    iVar5 = 0;
    iVar3 = (**(code **)(*piVar1 + 0x4c))();
    bVar6 = param_1[1] != 0x19;
    param_1[1] = 0x19;
    goto LAB_0094ee0d;
  case 8:
  case 9:
    iVar5 = 0xd;
    iVar3 = piVar1[0x15];
    iVar4 = 0x17;
    break;
  case 10:
    if (piVar1[0x15] < 1) {
      return;
    }
    FUN_00c82240(7);
    return;
  default:
    goto switchD_0094ede7_default;
  }
  bVar6 = param_1[1] != iVar4;
  param_1[1] = iVar4;
LAB_0094ee0d:
  if ((1 << (sbyte)iVar5 & param_1[3]) == 0) {
    if (iVar3 >= 1) {
switchD_0094ede7_default:
      *param_1 = 1;
      if (iVar5 == 0xd) {
        if ((DAT_018b9174 & 0xf00) == 0x200) {
          _DAT_01d61384 = param_1[1];
          _DAT_01d61388 = 1;
          _DAT_01d6138c = 0;
          param_1[2] = 0;
          param_1[3] = param_1[3] | 0x2000;
          return;
        }
      }
      else if (iVar5 == 6) {
        if ((DAT_018b9174 & 0xf00) == 0x100) {
          _DAT_01d61384 = param_1[1];
          _DAT_01d61388 = 1;
          _DAT_01d6138c = 0;
          param_1[2] = 0;
          param_1[3] = param_1[3] | 0x40;
          return;
        }
      }
      else if ((iVar5 == 0) && ((DAT_018b9174 & 0xf00) == 0x100)) {
        _DAT_01d61384 = param_1[1];
        _DAT_01d61388 = 1;
        _DAT_01d6138c = 0;
        param_1[3] = param_1[3] | 1;
      }
      param_1[2] = 0;
      return;
    }
  }
  else if (((bVar6) || (iVar3 < 1)) && (*param_1 != 0)) {
    _DAT_01d61384 = -1;
    *param_1 = 0;
    param_1[1] = -1;
  }
  return;
}

// 0094EF90  FUN_0094ef90  size=69  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0094ef90(int *param_1)

{
  float10 fVar1;
  
  if (*param_1 != 0) {
    fVar1 = (float10)FUN_00e03a90(0);
    fVar1 = fVar1 * (float10)0.016666668 + (float10)(float)param_1[2];
    param_1[2] = (int)(float)fVar1;
    if (((float10)10.0 <= fVar1) && (*param_1 != 0)) {
      _DAT_01d61384 = 0xffffffff;
      *param_1 = 0;
      param_1[1] = -1;
    }
  }
  return;
}

// 0094F040  FUN_0094f040  size=78  [run]
void __fastcall FUN_0094f040(int param_1)

{
  float *pfVar1;
  int iVar2;
  float10 fVar3;
  
  pfVar1 = (float *)(param_1 + 4);
  iVar2 = 0x10;
  do {
    if (0.0 < *pfVar1) {
      fVar3 = (float10)FUN_00e03a90(0);
      fVar3 = (float10)*pfVar1 - fVar3 * (float10)0.016666668;
      *pfVar1 = (float)fVar3;
      if (fVar3 <= (float10)0) {
        *pfVar1 = (float)(float10)0;
        pfVar1[-1] = 0.0;
      }
    }
    pfVar1 = pfVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

// 0094F090  FUN_0094f090  size=99  [run]
void __thiscall FUN_0094f090(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)0x0;
  piVar1 = (int *)(param_1 + 0x10);
  iVar2 = 4;
  do {
    if (piVar1[-4] == param_2) {
      piVar3 = piVar1 + -4;
    }
    if (piVar1[-2] == param_2) {
      piVar3 = piVar1 + -2;
    }
    if (*piVar1 == param_2) {
      piVar3 = piVar1;
    }
    if (piVar1[2] == param_2) {
      piVar3 = piVar1 + 2;
    }
    piVar1 = piVar1 + 8;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if (piVar3 != (int *)0x0) {
    piVar3[1] = 0x41f00000;
    return;
  }
  piVar1 = (int *)FUN_0094bfe0(0);
  if (piVar1 != (int *)0x0) {
    *piVar1 = param_2;
    piVar1[1] = 0x41f00000;
  }
  return;
}

// 0094F150  FUN_0094f150  size=85  [run]
undefined4 __thiscall FUN_0094f150(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)0x0;
  piVar1 = (int *)(param_1 + 0x10);
  iVar3 = 4;
  do {
    if (piVar1[-4] == param_2) {
      piVar2 = piVar1 + -4;
    }
    if (piVar1[-2] == param_2) {
      piVar2 = piVar1 + -2;
    }
    if (*piVar1 == param_2) {
      piVar2 = piVar1;
    }
    if (piVar1[2] == param_2) {
      piVar2 = piVar1 + 2;
    }
    piVar1 = piVar1 + 8;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  if ((piVar2 != (int *)0x0) && (0.0 < (float)piVar2[1])) {
    return 1;
  }
  return 0;
}


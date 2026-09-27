// src/misc/WindActionImplement.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00DD22E0..00DD2710, 10 functions

#include "types.h"

// 00DD22E0  WindActionImplement::WindActionImplement  size=28  [class]
undefined4 * __fastcall WindActionImplement::WindActionImplement(undefined4 *param_1)

{
  *param_1 = vftable;
  FUN_009003e0();
  param_1[5] = 0;
  return param_1;
}

// 00DD2330  WindActionImplement::vf00  size=68  [class]
undefined4 * __fastcall WindActionImplement::vf00(undefined4 *param_1)

{
  int *piVar1;
  byte unaff_retaddr;
  
  *param_1 = vftable;
  piVar1 = (int *)FUN_008dfea0();
  (**(code **)(*piVar1 + 0x14))(0);
  param_1[5] = 0;
  FUN_00900ca0();
  *param_1 = WindAction::vftable;
  if ((unaff_retaddr & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00DD2380  FUN_00dd2380  size=6  [between]
undefined4 FUN_00dd2380(void)

{
  return DAT_01dc6430;
}

// 00DD2390  FUN_00dd2390  size=29  [between]
void FUN_00dd2390(void)

{
  if (DAT_01dc6430 != (undefined4 *)0x0) {
    (**(code **)*DAT_01dc6430)(1);
    DAT_01dc6430 = (undefined4 *)0x0;
  }
  return;
}

// 00DD2450  WindActionImplement::PhantomListener::vf04  size=3  [class]
void WindActionImplement::PhantomListener::vf04(void)

{
  return;
}

// 00DD2470  WindActionImplement::PhantomListener::vf00  size=60  [class]
void WindActionImplement::PhantomListener::vf00(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = (int)*(char *)(*(int *)(param_1 + 4) + 0x10) + *(int *)(param_1 + 4);
  if (((iVar2 != 0) && (uVar1 = *(uint *)(iVar2 + 0xc), uVar1 != 0)) &&
     ((*(uint *)((-(uint)(uVar1 != 0) & uVar1) + 0x30) & 0x200000) != 0)) {
    *(undefined4 *)(param_1 + 8) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 8) = 1;
  return;
}

// 00DD24B0  WindActionImplement::WindActionImplement_2  size=80  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool WindActionImplement::WindActionImplement_2(undefined4 param_1)

{
  undefined4 *puVar1;
  
  _DAT_01dc6434 = param_1;
  puVar1 = (undefined4 *)FUN_00dd3500(0x18,param_1);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = vftable;
    FUN_009003e0();
    puVar1[5] = 0;
    DAT_01dc6430 = puVar1;
    return puVar1 != (undefined4 *)0x0;
  }
  DAT_01dc6430 = (undefined4 *)0x0;
  return false;
}

// 00DD2550  WindActionImplement::PhantomListener::vf08  size=47  [class]
undefined4 * __thiscall WindActionImplement::PhantomListener::vf08(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkpPhantomOverlapListener::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,4);
  }
  return param_1;
}

// 00DD2580  WindActionImplement::vf08  size=387  [class]
void WindActionImplement::vf08(void)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  undefined1 local_c [4];
  undefined4 local_8;
  int local_4;
  
  FUN_004066f0();
  piVar3 = (int *)FUN_00900860();
  iVar2 = _tls_index;
  piVar6 = (int *)*piVar3;
  if (piVar6 != piVar6 + piVar3[1]) {
    do {
      iVar7 = *piVar6;
      if (((*(char *)(iVar7 + 0x18) == '\x01') &&
          (iVar7 = *(char *)(iVar7 + 0x10) + iVar7, iVar7 != 0)) &&
         ((uVar1 = *(uint *)(iVar7 + 0xc), uVar1 == 0 ||
          ((*(uint *)((-(uint)(uVar1 != 0) & uVar1) + 8) & 2) == 0)))) {
        FUN_00910a40(iVar7);
        FUN_004066f0();
        uVar1 = *(uint *)(iVar7 + 0xc);
        if (uVar1 == 0) {
          if (DAT_01885d68 != 1) {
            iVar7 = *(int *)((int)ThreadLocalStoragePointer + iVar2 * 4);
LAB_00dd2643:
            piVar5 = (int *)(iVar7 + 4);
            *piVar5 = *piVar5 + -1;
            if (((*piVar5 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
              FUN_00dd7320();
            }
          }
        }
        else {
          puVar4 = (uint *)(-(uint)(uVar1 != 0) & uVar1);
          *puVar4 = *puVar4 | 1;
          puVar4[2] = puVar4[2] | 2;
          if (DAT_01885d68 != 1) {
            iVar7 = *(int *)((int)ThreadLocalStoragePointer + iVar2 * 4);
            goto LAB_00dd2643;
          }
        }
        local_8 = 0x42c80000;
        FUN_0100b3c0(&local_8);
        iVar7 = FUN_0091a9e0();
        if (iVar7 == 0) {
          FUN_009124c0();
        }
        piVar5 = (int *)FUN_008dfea0();
        (**(code **)(*piVar5 + 0xc))(*(undefined4 *)(local_4 + 0x14),local_c);
      }
      piVar6 = piVar6 + 1;
    } while (piVar6 != (int *)(*piVar3 + piVar3[1] * 4));
  }
  if (DAT_01885d68 != 1) {
    piVar6 = (int *)(*(int *)((int)ThreadLocalStoragePointer + iVar2 * 4) + 4);
    *piVar6 = *piVar6 + -1;
    if (((*piVar6 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
      return;
    }
  }
  return;
}

// 00DD2710  WindActionImplement::vf04  size=400  [class]
undefined4 __thiscall
WindActionImplement::vf04
          (int param_1,float *param_2,float *param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6)

{
  int *piVar1;
  undefined4 uVar2;
  LPVOID pvVar3;
  undefined4 *puVar4;
  undefined4 uStack_54;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_44;
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  undefined4 uStack_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  undefined4 uStack_14;
  
  FUN_004066f0();
  local_50 = *param_2 - *param_3 * 0.5;
  local_4c = param_2[1] - param_3[1] * 0.5;
  local_48 = param_2[2] - param_3[2] * 0.5;
  local_40 = *param_2 + *param_3 * 0.5;
  local_3c = param_2[1] + param_3[1] * 0.5;
  uStack_24 = local_44;
  local_38 = param_3[2] * 0.5 + param_2[2];
  uStack_14 = local_34;
  local_30 = local_50;
  fStack_2c = local_4c;
  fStack_28 = local_48;
  local_20 = local_40;
  fStack_1c = local_3c;
  fStack_18 = local_38;
  piVar1 = (int *)FUN_00900480();
  uVar2 = (**(code **)(*piVar1 + 0x18))(&local_30,1,0,0);
  lib::AllocatedArray<hkpPhantomListener*>::AllocatedArray<hkpPhantomListener*>(uVar2);
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  puVar4 = (undefined4 *)(**(code **)(**(int **)((int)pvVar3 + 0x2c) + 4))(4);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = PhantomListener::vftable;
  }
  FUN_00900940(puVar4);
  FUN_00900bd0();
  piVar1 = (int *)FUN_008dfea0();
  uStack_54 = 0;
  local_50 = 0.0;
  local_4c = -1000.0;
  uVar2 = (**(code **)(*piVar1 + 4))(0,&uStack_54,param_5,param_6);
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return 1;
}


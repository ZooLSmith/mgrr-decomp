// lib/havok/unit_011104C0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 011104C0..01110870, 14 functions

#include "types.h"

// 011104C0  FUN_011104c0  size=389  [run]
void __thiscall FUN_011104c0(int *param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  byte bVar4;
  int iVar5;
  LPVOID pvVar6;
  undefined4 *puVar7;
  uint uVar8;
  byte bVar9;
  int *local_10;
  uint local_c;
  byte local_6;
  byte local_5;
  
  local_10 = param_1;
  if (*param_1 < 2) {
    FUN_0110fa20(&local_10,0,0);
    piVar1 = local_10;
    (**(code **)(*param_2 + 0x5c))(param_3,local_10);
    if (piVar1 != (int *)0x0) {
      *(short *)((int)piVar1 + 6) = *(short *)((int)piVar1 + 6) + -1;
      piVar2 = piVar1 + 2;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        (**(code **)*piVar1)(1);
        return;
      }
    }
  }
  else {
    FUN_01445680(&local_5,1,1);
    local_c = local_5 & 1;
    uVar8 = local_5 >> 1 & 0x7fffffbf;
    bVar9 = 6;
    while ((char)local_5 < '\0') {
      FUN_01445680(&local_6,1,1);
      bVar4 = bVar9 & 0x1f;
      bVar9 = bVar9 + 7;
      uVar8 = uVar8 | (local_6 & 0xffffff7f) << bVar4;
      local_5 = local_6;
    }
    if (local_c != 0) {
      uVar8 = -uVar8;
    }
    if (local_10[0xf] <= (int)uVar8) {
      piVar1 = local_10 + 0x11;
      iVar5 = FUN_01010ba0(&PTR_vftable_018e9b94,uVar8,0);
      puVar7 = *(undefined4 **)(*piVar1 + 4 + iVar5 * 8);
      if (puVar7 == (undefined4 *)0x0) {
        pvVar6 = TlsGetValue(DAT_01f8fc4c);
        puVar7 = (undefined4 *)(**(code **)(**(int **)((int)pvVar6 + 0x2c) + 4))(0x18);
        if (puVar7 == (undefined4 *)0x0) {
          puVar7 = (undefined4 *)0x0;
        }
        else {
          *puVar7 = 0;
          puVar7[1] = 0;
          puVar7[2] = 0x80000000;
          puVar7[3] = 0;
          puVar7[4] = 0;
          puVar7[5] = 0x80000000;
        }
        *(undefined4 **)(*piVar1 + 4 + iVar5 * 8) = puVar7;
      }
      if (puVar7[4] == (puVar7[5] & 0x3fffffff)) {
        FUN_0100a290(&PTR_vftable_018e9b94,puVar7 + 3,8);
      }
      puVar3 = (undefined4 *)(puVar7[3] + puVar7[4] * 8);
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = param_2;
        puVar3[1] = param_3;
      }
      puVar7[4] = puVar7[4] + 1;
      return;
    }
    (**(code **)(*param_2 + 0x5c))(param_3,*(undefined4 *)(local_10[0xe] + uVar8 * 4));
  }
  return;
}

// 01110650  FUN_01110650  size=14  [run]
void __thiscall FUN_01110650(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 01110660  FUN_01110660  size=114  [run]
void FUN_01110660(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  undefined4 local_14;
  undefined4 local_10;
  
  piVar1 = param_2;
  (**(code **)(*param_2 + 0x1c))(0x10);
  iVar2 = (**(code **)(*piVar1 + 0x10))(&local_14,0x10);
  if (iVar2 != 0x10) {
    *param_1 = 0;
    return;
  }
  (**(code **)(*piVar1 + 0x20))();
  pcVar3 = (char *)FUN_010da150((int)&param_2 + 3,local_14,local_10);
  if (*pcVar3 != '\0') {
    *param_1 = 2;
    return;
  }
  *param_1 = 1;
  return;
}

// 01110720  FUN_01110720  size=20  [run]
undefined4 __fastcall FUN_01110720(undefined4 param_1)

{
  FUN_010065a0();
  FUN_010065a0();
  return param_1;
}

// 01110740  hkMemoryResourceHandle::vf14  size=12  [run]
void hkMemoryResourceHandle::vf14(void)

{
  FUN_01006780();
  return;
}

// 01110750  hkMemoryResourceHandle::vf1C  size=8  [run]
void hkMemoryResourceHandle::vf1C(void)

{
  FUN_01441a80();
  return;
}

// 01110760  hkMemoryResourceHandle::vf20  size=12  [run]
void hkMemoryResourceHandle::vf20(void)

{
  FUN_01441a50();
  return;
}

// 01110770  hkMemoryResourceHandle::vf10  size=16  [run]
undefined * __fastcall hkMemoryResourceHandle::vf10(int param_1)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)(*(uint *)(param_1 + 0xc) & 0xfffffffe);
  if (puVar1 == (undefined *)0x0) {
    puVar1 = &DAT_0164cd24;
  }
  return puVar1;
}

// 01110780  hkMemoryResourceHandle::vf18  size=4  [run]
undefined4 __fastcall hkMemoryResourceHandle::vf18(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}

// 01110790  hkMemoryResourceContainer::vf10  size=9  [run]
uint __fastcall hkMemoryResourceContainer::vf10(int param_1)

{
  return *(uint *)(param_1 + 8) & 0xfffffffe;
}

// 011107A0  hkMemoryResourceContainer::vf30  size=4  [run]
undefined4 __fastcall hkMemoryResourceContainer::vf30(int param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}

// 011107B0  hkContainerResourceMap::vf00  size=74  [run]
void hkContainerResourceMap::vf00(undefined4 param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  piVar1 = (int *)FUN_01025be0(param_1,0);
  if (piVar1 == (int *)0x0) {
    return;
  }
  if (param_2 != (undefined4 *)0x0) {
    uVar2 = (**(code **)(*piVar1 + 0x1c))();
    *param_2 = uVar2;
  }
  (**(code **)(*piVar1 + 0x18))();
  return;
}

// 01110800  hkMemoryResourceContainer::vf34  size=102  [run]
int __thiscall hkMemoryResourceContainer::vf34(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  do {
    if ((param_3 == 0) || (*(int *)(param_1 + 0x20) <= iVar2)) break;
    iVar1 = iVar2 * 4;
    iVar2 = iVar2 + 1;
  } while (*(int *)(*(int *)(param_1 + 0x1c) + iVar1) != param_3);
  if (iVar2 < *(int *)(param_1 + 0x20)) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar2 * 4);
      if ((param_2 == 0) ||
         (iVar3 = FUN_01015b90(param_2,*(uint *)(iVar1 + 8) & 0xfffffffe), iVar3 == 0)) {
        return iVar1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x20));
  }
  return 0;
}

// 01110870  hkMemoryResourceHandle::vf24  size=105  [run]
void __thiscall hkMemoryResourceHandle::vf24(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(uint *)(param_1 + 0x14) == (*(uint *)(param_1 + 0x18) & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,(int *)(param_1 + 0x10),8);
  }
  if (*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x14) * 8 != 0) {
    FUN_010065a0();
    FUN_010065a0();
  }
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  FUN_01006780(param_2);
  FUN_01006780(param_3);
  return;
}


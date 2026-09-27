// src/managers/windmanager/WindManagerImplement.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008DFE40..008E07A0, 7 functions

#include "mgrr.h"
#include "WindManagerImplement.h"

// 008DFE40  WindManagerImplement::vf10  size=40  [class]
void __thiscall WindManagerImplement::vf10(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 8))(param_2);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0xc))(iVar1,param_2);
  }
  return;
}

// 008DFE90  WindManagerImplement::vf18  size=3  [class]
void WindManagerImplement::vf18(void)

{
  return;
}

// 008DFFD0  WindManagerImplement::vf08  size=51  [class]
int * __thiscall WindManagerImplement::vf08(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = *(int *)(param_1 + 4);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != puVar3 + *(int *)(iVar2 + 8)) {
    puVar1 = puVar3 + *(int *)(iVar2 + 8);
    do {
      if (*(int *)*puVar3 == param_2) {
        return (int *)*puVar3;
      }
      puVar3 = puVar3 + 1;
    } while (puVar3 != puVar1);
  }
  return (int *)0x0;
}

// 008E0210  WindManagerImplement::vf0C  size=214  [class]
void WindManagerImplement::vf0C(float param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  LPVOID pvVar3;
  int iVar4;
  int unaff_retaddr;
  
  FUN_004066f0();
  uVar2 = *param_2;
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  iVar4 = (**(code **)(**(int **)((int)pvVar3 + 0x2c) + 4))(0x28);
  *(undefined2 *)(iVar4 + 4) = 0x28;
  iVar4 = hkpWindAction::hkpWindAction
                    (uVar2,*(undefined4 *)(unaff_retaddr + 4),
                     *(float *)(unaff_retaddr + 8) * param_1,*(undefined4 *)(unaff_retaddr + 0xc));
  if (iVar4 != 0) {
    FUN_01195d90(iVar4);
    FUN_010060a0();
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return;
}

// 008E02F0  WindManagerImplement::vf04  size=200  [class]
undefined4 __thiscall
WindManagerImplement::vf04
          (int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,undefined4 param_5)

{
  LPVOID pvVar1;
  int iVar2;
  undefined4 unaff_ESI;
  undefined4 *puStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x40);
  *(undefined2 *)(iVar2 + 4) = 0x40;
  uStack_24 = *param_3;
  uStack_20 = param_3[1];
  uStack_1c = param_3[2];
  uStack_18 = param_3[3];
  iVar2 = hkpWorldPostSimulationListener::hkpWorldPostSimulationListener_2(&uStack_24);
  puStack_28 = (undefined4 *)FUN_00dd3500(0x10,DAT_01b35d94);
  if (puStack_28 == (undefined4 *)0x0) {
    puStack_28 = (undefined4 *)0x0;
  }
  else {
    puStack_28[2] = param_4;
    *puStack_28 = param_2;
    puStack_28[1] = iVar2;
    puStack_28[3] = param_5;
  }
  (**(code **)(**(int **)(param_1 + 4) + 8))(&puStack_28);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = iVar2 + 8;
  }
  FUN_011946c0(iVar2);
  return unaff_ESI;
}

// 008E03C0  WindManagerImplement::vf14  size=262  [class]
void __thiscall WindManagerImplement::vf14(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  FUN_004066f0();
  iVar5 = *(int *)(param_1 + 4);
  piVar6 = *(int **)(iVar5 + 4);
  if (piVar6 == piVar6 + *(int *)(iVar5 + 8)) {
LAB_008e03f5:
    if (DAT_01885d68 != 1) {
      piVar6 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar6 = *piVar6 + -1;
      iVar5 = *piVar6;
LAB_008e0413:
      if (((iVar5 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    return;
  }
  piVar1 = piVar6 + *(int *)(iVar5 + 8);
LAB_008e03e8:
  piVar2 = (int *)*piVar6;
  if (*piVar2 != param_2) goto code_r0x008e03ee;
  if (piVar2[1] == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = piVar2[1] + 8;
  }
  FUN_01192e80(iVar5);
  FUN_010060a0();
  FUN_00dd4920(piVar2);
  iVar5 = *(int *)(param_1 + 4);
  uVar3 = *(uint *)(iVar5 + 8);
  iVar4 = *(int *)(iVar5 + 4);
  piVar1 = (int *)(iVar4 + uVar3 * 4);
  if ((((piVar6 != piVar1) && (iVar4 != 0)) && (uVar3 != 0)) &&
     ((uint)((int)piVar6 - iVar4 >> 2) < uVar3)) {
    for (; piVar6 != piVar1 + -1; piVar6 = piVar6 + 1) {
      *piVar6 = piVar6[1];
    }
    *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + -1;
  }
  if (DAT_01885d68 == 1) {
    return;
  }
  piVar6 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
  *piVar6 = *piVar6 + -1;
  iVar5 = *piVar6;
  goto LAB_008e0413;
code_r0x008e03ee:
  piVar6 = piVar6 + 1;
  if (piVar6 == piVar1) goto LAB_008e03f5;
  goto LAB_008e03e8;
}

// 008E07A0  WindManagerImplement::vf00  size=30  [class]
undefined4 __thiscall WindManagerImplement::vf00(undefined4 param_1,byte param_2)

{
  WindManager::WindManager();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}


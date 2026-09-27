// src/misc/esp122.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009D07C0..009E2F40, 6 functions

#include "types.h"

// 009D07C0  esp122::vf14  size=80  [class]
void __fastcall esp122::vf14(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a7c990(&DAT_01ee11f4);
  if (iVar1 == 0) {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      iVar1 = FUN_00a7c800();
      if (iVar1 != 0) {
        *(undefined4 *)(iVar1 + 0x480) = 0;
      }
    }
  }
  FUN_00a33e50(*(undefined4 *)(param_1 + 0x464));
  return;
}

// 009D0810  esp122::vf08  size=5  [class]
void __fastcall esp122::vf08(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x3a0);
  FUN_00edfc20(piVar1);
  FUN_00f0b530(piVar1);
  if (*(int *)(param_1 + 0x50) != 0) {
    *piVar1 = *(int *)(param_1 + 0x50) + 0x10;
    FUN_00efb130(piVar1);
    FUN_00efbd40(piVar1);
    return;
  }
  *piVar1 = 0;
  FUN_00efb130(piVar1);
  FUN_00efbd40(piVar1);
  return;
}

// 009D4430  esp122::esp122  size=18  [class]
undefined4 * __fastcall esp122::esp122(undefined4 *param_1)

{
  cEspBase::cEspBase_4();
  *param_1 = vftable;
  return param_1;
}

// 009DA1C0  esp122::vf04  size=282  [class]
undefined4 __thiscall
esp122::vf04(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = cEspModel::vf04(param_2,param_3,param_4);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x460) = 0;
  if ((*(int *)(param_1 + 0x58) != 0) &&
     (puVar2 = (undefined4 *)(*(int *)(param_1 + 0x58) + 0x70), puVar2 != (undefined4 *)0x0)) {
    puVar2 = (undefined4 *)*puVar2;
    if ((undefined4 *)((int)puVar2 + 0xfU & 0xfffffff0) != puVar2) {
      uVar3 = FUN_00f59ed0(7);
      FUN_00dd5650(&DAT_016597b4,uVar3);
    }
    if (puVar2 != (undefined4 *)0x0) {
      *(undefined4 *)(param_1 + 0x460) = *puVar2;
      *(undefined4 *)(param_1 + 0x450) = puVar2[1];
      *(undefined4 *)(param_1 + 0x454) = puVar2[2];
      *(undefined4 *)(param_1 + 0x458) = puVar2[3];
      *(undefined4 *)(param_1 + 0x45c) = puVar2[4];
    }
  }
  iVar1 = FUN_00a7c990(&DAT_01ee11f4);
  if (iVar1 == 0) {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      iVar1 = FUN_00a7c800();
      if (((iVar1 != 0) && (*(int *)(param_1 + 0x50) != 0)) && (*(short *)(param_1 + 0x400) == -1))
      {
        iVar4 = FUN_00a33dd0(*(undefined4 *)(iVar1 + 0x480));
        *(int *)(param_1 + 0x464) = iVar4;
        if (iVar4 == 0) {
          uVar3 = FUN_00a3d440();
          *(undefined4 *)(param_1 + 0x464) = uVar3;
        }
        if (*(int *)(param_1 + 0x464) != 0) {
          *(uint *)(iVar1 + 0x480) = (uint)*(byte *)(*(int *)(param_1 + 0x464) + 0x1c8);
          return 1;
        }
      }
    }
  }
  return 0;
}

// 009DF650  esp122::vf00  size=30  [class]
undefined4 __thiscall esp122::vf00(undefined4 param_1,byte param_2)

{
  cEspBase::cEspBase_5();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 009E2F40  esp122::vf10  size=341  [class]
/* WARNING: Removing unreachable block (ram,0x009e3069) */

undefined4 __fastcall esp122::vf10(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  if ((ushort)(*(short *)(param_1 + 0x4e) + 0xdU) < 10) {
    uVar2 = FUN_009cca90(param_1,&DAT_0165ac00);
    return uVar2;
  }
  if ((DAT_01edd490 != 0) &&
     (puVar3 = (undefined4 *)cPrimHeap::allocBuffer(0xe0,0x20), puVar3 != (undefined4 *)0x0)) {
    iVar1 = param_1 + 0x3c8;
    puVar3[9] = 0;
    *puVar3 = EffectStencilMaskDrawWork::vftable;
    FUN_00edfcd0(iVar1);
    FUN_00edfcd0(iVar1);
    FUN_00f20370(puVar3 + 0x10,iVar1,DAT_01b78870);
    FUN_00f26b40(puVar3);
    FUN_00ed4fa0(puVar3,iVar1,DAT_01b78870,*(undefined4 *)(param_1 + 0x84));
    puVar3[0x34] = (uint)*(byte *)(*(int *)(param_1 + 0x464) + 0x1c8);
    puVar3[0x35] = (uint)*(byte *)(*(int *)(param_1 + 0x464) + 0x1c8);
    puVar3[0x36] = 0;
    uVar2 = FUN_00dd7ad0();
    if (0xf < *(byte *)((int)puVar3 + 0x12)) {
      FUN_00dd5650(&DAT_0165abe0);
    }
    FUN_00a308f0(puVar3,0x18,*(char *)(*(int *)(param_1 + 0x464) + 0x1c8) == '\0',uVar2);
    uVar2 = DAT_01b83ca0;
    LOCK();
    DAT_01b83ca0 = 1;
    UNLOCK();
    return uVar2;
  }
  uVar2 = FUN_009cca90(param_1,&DAT_0165ab98);
  return uVar2;
}


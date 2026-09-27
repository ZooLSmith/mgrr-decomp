// src/misc/esp42.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ECD4C0..00F37580, 5 functions

#include "types.h"

// 00ECD4C0  esp42::esp42  size=18  [class]
undefined4 * __fastcall esp42::esp42(undefined4 *param_1)

{
  cEspBase::cEspBase_4();
  *param_1 = vftable;
  return param_1;
}

// 00ED0AE0  esp42::vf00  size=30  [class]
undefined4 __thiscall esp42::vf00(undefined4 param_1,byte param_2)

{
  cEspBase::cEspBase_5();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00F24B80  esp42::vf08  size=13  [class]
void __fastcall esp42::vf08(int param_1)

{
  FUN_00f1c0f0(param_1 + 0x3a0);
  return;
}

// 00F2B960  esp42::vf10  size=335  [class]
void __fastcall esp42::vf10(int param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  
  iVar3 = FUN_00dd7ad0();
  FUN_00efed20();
  if (0.01 < *(float *)(param_1 + 0x124)) {
    if ((DAT_01edd490 == 0) ||
       (puVar4 = (undefined4 *)cPrimHeap::allocBuffer(0x140,0x20), puVar4 == (undefined4 *)0x0)) {
      FUN_009cca90(param_1,&DAT_016dce20);
      return;
    }
    puVar4[9] = 0;
    *puVar4 = cEspDrawWorkMulti::vftable;
    *(undefined1 *)(puVar4 + 4) = 0;
    FUN_00edfcd0(param_1 + 0x3c8);
    FUN_00f26b40(puVar4);
    FUN_00f204b0(puVar4,puVar4,*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x1e74),param_1 + 0x3c8,
                 *(int *)(param_1 + 0x28));
    sVar1 = *(short *)(param_1 + 0x4e);
    if ((ushort)(sVar1 + 0xdU) < 10) {
      if ((ushort)(sVar1 + 0xdU) < 10) {
        uVar5 = -(int)sVar1 - 4;
      }
      else {
        FUN_00dd5650(&DAT_01659438);
        uVar5 = 0;
      }
      uVar2 = *(uint *)(param_1 + 0x3c);
      uVar6 = uVar5 >> 5;
      uVar5 = 0x80000000 >> ((byte)uVar5 & 0x1f);
      (&DAT_01eddb60)[uVar6 + iVar3] = (&DAT_01eddb60)[uVar6 + iVar3] | uVar5;
      if ((uVar2 >> 0x16 & 1) == 0) {
        (&DAT_01eddb4c)[uVar6 + iVar3] = (&DAT_01eddb4c)[uVar6 + iVar3] & ~uVar5;
      }
      else {
        (&DAT_01eddb4c)[uVar6 + iVar3] = (&DAT_01eddb4c)[uVar6 + iVar3] | uVar5;
      }
      if ((uVar2 >> 7 & 1) == 0) {
        (&DAT_01eddb38)[uVar6 + iVar3] = (&DAT_01eddb38)[uVar6 + iVar3] & ~uVar5;
      }
      else {
        (&DAT_01eddb38)[uVar6 + iVar3] = (&DAT_01eddb38)[uVar6 + iVar3] | uVar5;
      }
    }
    if (0x6b < *(byte *)(puVar4 + 4)) {
      FUN_009cca90(param_1,&DAT_016dce48);
    }
  }
  return;
}

// 00F37580  esp42::vf04  size=357  [class]
undefined4 __thiscall
esp42::vf04(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short *psVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  iVar2 = cEspModel::vf04(param_2,param_3,param_4);
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = *(int *)(param_1 + 0x24);
  if ((*(int *)(param_1 + 0x58) != 0) &&
     (puVar3 = (undefined4 *)(*(int *)(param_1 + 0x58) + 0x80), puVar3 != (undefined4 *)0x0)) {
    psVar1 = (short *)*puVar3;
    if ((short *)((int)psVar1 + 0xfU & 0xfffffff0) != psVar1) {
      uVar4 = FUN_00f59ed0(8);
      FUN_00dd5650(&DAT_016597b4,uVar4);
    }
    if (psVar1 != (short *)0x0) {
      if (*psVar1 < 1) {
        FUN_009cca90(param_1,&DAT_016dcde8);
        return 0;
      }
      *(int *)(param_1 + 0x488) = (int)*psVar1;
      *(int *)(param_1 + 0x47c) = (int)(char)psVar1[8];
      puVar3 = (undefined4 *)FUN_009d4ac0();
      if (puVar3 != (undefined4 *)0x0) {
        *(undefined4 *)(param_1 + 0x470) = *puVar3;
        *(undefined4 *)(param_1 + 0x474) = puVar3[1];
        *(undefined4 *)(param_1 + 0x478) = puVar3[2];
      }
      if (2 < *(uint *)(param_1 + 0x47c)) {
        return 0;
      }
      *(undefined2 *)(param_1 + 0x428) =
           *(undefined2 *)(&DAT_016df7b8 + *(uint *)(param_1 + 0x47c) * 2);
      *(undefined4 *)(param_1 + 0x450) = *(undefined4 *)(param_1 + 0x180);
      *(undefined4 *)(param_1 + 0x454) = *(undefined4 *)(param_1 + 0x184);
      *(undefined4 *)(param_1 + 0x458) = *(undefined4 *)(param_1 + 0x188);
      *(undefined4 *)(param_1 + 0x45c) = *(undefined4 *)(param_1 + 0x18c);
      *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 0x100000;
      *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) | 0x8000;
      *(undefined4 *)(param_1 + 0x1fc) = *(undefined4 *)(iVar2 + 0x160);
      uVar4 = FUN_009d4ac0();
      *(undefined4 *)(param_1 + 0x490) = uVar4;
      uVar4 = FUN_009d4a80();
      *(undefined4 *)(param_1 + 0x494) = uVar4;
      return 1;
    }
  }
  FUN_009cca90(param_1,&DAT_016dce0c);
  return 0;
}


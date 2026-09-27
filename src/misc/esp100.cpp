// src/misc/esp100.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009CF8F0..009DF3C0, 5 functions

#include "mgrr.h"
#include "esp100.h"

// 009CF8F0  esp100::vf08  size=109  [class]
void __fastcall esp100::vf08(int param_1)

{
  int iVar1;
  undefined1 local_20 [28];
  
  esp39::vf08();
  *(undefined4 *)(param_1 + 0x450) = *(undefined4 *)(param_1 + 0x100);
  *(float *)(param_1 + 0x100) = *(float *)(param_1 + 0x100) * 1.5;
  *(float *)(param_1 + 0x104) = *(float *)(param_1 + 0x104) * 1.5;
  if (*(int *)(param_1 + 0x460) != 0) {
    iVar1 = FUN_00ea0000(local_20,param_1 + 400);
    *(uint *)(param_1 + 0x464) = (uint)(iVar1 != 0);
  }
  return;
}

// 009CF960  esp100::addOtTransList  size=5  [class]
void __fastcall esp100::addOtTransList(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  
  if ((ushort)(*(short *)(param_1 + 0x4e) + 0xdU) < 10) {
    iVar2 = FUN_00dd7ad0();
    if ((ushort)(*(short *)(param_1 + 0x4e) + 0xdU) < 10) {
      uVar4 = -(int)*(short *)(param_1 + 0x4e) - 4;
    }
    else {
      FUN_00dd5650(&DAT_01659438);
      uVar4 = 0;
    }
    uVar1 = *(uint *)(param_1 + 0x3c);
    uVar5 = uVar4 >> 5;
    uVar4 = 0x80000000 >> ((byte)uVar4 & 0x1f);
    (&DAT_01eddb60)[uVar5 + iVar2] = (&DAT_01eddb60)[uVar5 + iVar2] | uVar4;
    if ((uVar1 >> 0x16 & 1) == 0) {
      (&DAT_01eddb4c)[uVar5 + iVar2] = (&DAT_01eddb4c)[uVar5 + iVar2] & ~uVar4;
    }
    else {
      (&DAT_01eddb4c)[uVar5 + iVar2] = (&DAT_01eddb4c)[uVar5 + iVar2] | uVar4;
    }
    if ((uVar1 >> 7 & 1) == 0) {
      (&DAT_01eddb38)[uVar5 + iVar2] = (&DAT_01eddb38)[uVar5 + iVar2] & ~uVar4;
    }
    else {
      (&DAT_01eddb38)[uVar5 + iVar2] = (&DAT_01eddb38)[uVar5 + iVar2] | uVar4;
    }
  }
  esp107::vf10();
  if (*(float *)(param_1 + 0x124) <= 0.01) {
    return;
  }
  if ((DAT_01edd490 != 0) &&
     (puVar3 = (undefined4 *)cPrimHeap::allocBuffer(0xd0,0x20), puVar3 != (undefined4 *)0x0)) {
    *puVar3 = cEspDrawWork::vftable;
    puVar3[9] = 0;
    FUN_00edfcd0(param_1 + 0x3c8);
    FUN_00f26b40(puVar3);
    FUN_00f204b0(puVar3,puVar3,*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x1e74),param_1 + 0x3c8,
                 *(int *)(param_1 + 0x28));
    return;
  }
  FUN_009cca90(param_1,&DAT_016da558);
  return;
}

// 009D41F0  esp100::esp100  size=18  [class]
undefined4 * __fastcall esp100::esp100(undefined4 *param_1)

{
  cEsp::cEsp();
  *param_1 = vftable;
  return param_1;
}

// 009D65B0  esp100::preTrans  size=297  [class]
undefined4 __thiscall
esp100::preTrans(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  float *pfVar1;
  short *psVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  iVar3 = cEsp::preTrans(param_2,param_3,param_4);
  if (iVar3 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x454) = 0x3f800000;
  *(undefined2 *)(param_1 + 0x428) = 0x49;
  *(undefined4 *)(param_1 + 0x458) = 0x41a00000;
  *(undefined4 *)(param_1 + 0x45c) = 0x3f800000;
  if ((*(int *)(param_1 + 0x58) != 0) &&
     (puVar4 = (undefined4 *)(*(int *)(param_1 + 0x58) + 0x70), puVar4 != (undefined4 *)0x0)) {
    pfVar1 = (float *)*puVar4;
    if ((float *)((int)pfVar1 + 0xfU & 0xfffffff0) != pfVar1) {
      uVar5 = FUN_00f59ed0(7);
      FUN_00dd5650(&DAT_016597b4,uVar5);
    }
    if (pfVar1 != (float *)0x0) {
      *(float *)(param_1 + 0x454) = *(float *)(param_1 + 0x454) + *pfVar1;
      *(float *)(param_1 + 0x458) = pfVar1[1] * 10.0 + *(float *)(param_1 + 0x458);
      *(float *)(param_1 + 0x45c) = pfVar1[2] + *(float *)(param_1 + 0x45c);
    }
  }
  if ((*(int *)(param_1 + 0x58) != 0) &&
     (puVar4 = (undefined4 *)(*(int *)(param_1 + 0x58) + 0x80), puVar4 != (undefined4 *)0x0)) {
    psVar2 = (short *)*puVar4;
    if ((short *)((int)psVar2 + 0xfU & 0xfffffff0) != psVar2) {
      uVar5 = FUN_00f59ed0(8);
      FUN_00dd5650(&DAT_016597b4,uVar5);
    }
    if (psVar2 != (short *)0x0) {
      if (*psVar2 == 0) {
        *(undefined2 *)(param_1 + 0x428) = 0x49;
      }
      else if (*psVar2 == 1) {
        *(undefined2 *)(param_1 + 0x428) = 0x4a;
        *(int *)(param_1 + 0x460) = (int)(char)psVar2[8];
        return 1;
      }
      *(int *)(param_1 + 0x460) = (int)(char)psVar2[8];
    }
  }
  return 1;
}

// 009DF3C0  esp100::vf00  size=30  [class]
undefined4 __thiscall esp100::vf00(undefined4 param_1,byte param_2)

{
  cEspBase::cEspBase();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}


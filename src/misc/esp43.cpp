// src/misc/esp43.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ECD4E0..00F376F0, 5 functions

#include "mgrr.h"
#include "esp43.h"

// 00ECD4E0  esp43::esp43  size=18  [class]
undefined4 * __fastcall esp43::esp43(undefined4 *param_1)

{
  cEsp::cEsp();
  *param_1 = vftable;
  return param_1;
}

// 00ED0B00  esp43::vf00  size=30  [class]
undefined4 __thiscall esp43::vf00(undefined4 param_1,byte param_2)

{
  cEspBase::cEspBase();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00F24B90  esp43::vf08  size=16  [class]
void esp43::vf08(void)

{
  undefined1 local_8 [8];
  
  FUN_00f1c260(local_8);
  return;
}

// 00F2BAB0  esp43::addOtTransList  size=350  [class]
void __fastcall esp43::addOtTransList(int param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  
  *(undefined4 *)(param_1 + 0x4b8) = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x1ed0);
  iVar3 = FUN_00dd7ad0();
  esp107::vf10();
  if (0.01 < *(float *)(param_1 + 0x124)) {
    if ((DAT_01edd490 == 0) ||
       (puVar4 = (undefined4 *)cPrimHeap::allocBuffer(0x140,0x20), puVar4 == (undefined4 *)0x0)) {
      FUN_009cca90(param_1,&DAT_016dceb8);
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
      FUN_009cca90(param_1,&DAT_016dcee0);
    }
  }
  return;
}

// 00F376F0  esp43::preTrans  size=690  [class]
undefined4 __thiscall
esp43::preTrans(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  short *psVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  float10 fVar6;
  
  iVar3 = cEsp::preTrans(param_2,param_3,param_4);
  if (iVar3 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x48c) = 0x3f800000;
  if ((*(int *)(param_1 + 0x58) != 0) &&
     (puVar4 = (undefined4 *)(*(int *)(param_1 + 0x58) + 0x80), puVar4 != (undefined4 *)0x0)) {
    psVar2 = (short *)*puVar4;
    if ((short *)((int)psVar2 + 0xfU & 0xfffffff0) != psVar2) {
      uVar5 = FUN_00f59ed0(8);
      FUN_00dd5650(&DAT_016597b4,uVar5);
    }
    if (psVar2 != (short *)0x0) {
      if (*psVar2 < 1) {
        FUN_009cca90(param_1,&DAT_016dce68);
        return 0;
      }
      *(int *)(param_1 + 0x4a8) = (int)*psVar2;
      *(float *)(param_1 + 0x468) = (float)(int)psVar2[1];
      *(float *)(param_1 + 0x46c) = (float)(int)psVar2[2] * 0.01;
      *(float *)(param_1 + 0x48c) = *(float *)(param_1 + 0x48c) + (float)(int)psVar2[3] * 0.1;
      *(float *)(param_1 + 0x49c) = (float)(int)psVar2[5] + *(float *)(param_1 + 0x49c);
      *(float *)(param_1 + 0x4a0) = (float)(int)psVar2[6] * 0.01;
      *(float *)(param_1 + 0x494) = (float)(int)psVar2[7] * 0.1;
      *(undefined1 *)(param_1 + 0x4a4) = *(undefined1 *)((int)psVar2 + 0x17);
      *(undefined4 *)(param_1 + 0x490) = *(undefined4 *)(param_1 + 0x48c);
      *(undefined4 *)(param_1 + 0x498) = *(undefined4 *)(param_1 + 0x494);
      iVar3 = FUN_009d4ac0();
      if (iVar3 != 0) {
        *(undefined4 *)(param_1 + 0x474) = *(undefined4 *)(iVar3 + 0xc);
        *(undefined4 *)(param_1 + 0x478) = *(undefined4 *)(iVar3 + 0x10);
        *(undefined4 *)(param_1 + 0x47c) = *(undefined4 *)(iVar3 + 0x14);
      }
      if (*(float *)(param_1 + 0x46c) == 0.0) {
        *(undefined4 *)(param_1 + 0x46c) = 0x3f800000;
      }
      if (2 < *(uint *)(param_1 + 0x470)) {
        return 0;
      }
      *(undefined2 *)(param_1 + 0x428) =
           *(undefined2 *)(&DAT_016df7c8 + *(uint *)(param_1 + 0x470) * 2);
      *(undefined4 *)(param_1 + 0x450) = *(undefined4 *)(param_1 + 0x180);
      *(undefined4 *)(param_1 + 0x454) = *(undefined4 *)(param_1 + 0x184);
      *(undefined4 *)(param_1 + 0x458) = *(undefined4 *)(param_1 + 0x188);
      *(undefined4 *)(param_1 + 0x45c) = *(undefined4 *)(param_1 + 0x18c);
      *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 0x100000;
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xffffbfff;
      *(undefined4 *)(param_1 + 0x158) = 0;
      *(undefined4 *)(param_1 + 0x154) = 0;
      *(undefined4 *)(param_1 + 0x150) = 0;
      *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) | 0x8000;
      bVar1 = *(byte *)(param_1 + 0x4a4);
      if (bVar1 == 0) {
        fVar6 = (float10)FUN_00dde300(0,0x3f800000);
        param_3._0_1_ = (undefined1)(int)ROUND(fVar6 * (float10)1.899999976158142);
        *(undefined1 *)(param_1 + 0x4a4) = (undefined1)param_3;
      }
      else {
        if (2 < bVar1) {
          FUN_009cca90(param_1,&DAT_016dce94);
        }
        *(byte *)(param_1 + 0x4a4) = bVar1 - 1;
      }
      uVar5 = FUN_009d4ac0();
      *(undefined4 *)(param_1 + 0x4b0) = uVar5;
      uVar5 = FUN_009d4a80();
      *(undefined4 *)(param_1 + 0x4b4) = uVar5;
      return 1;
    }
  }
  FUN_009cca90(param_1,&DAT_016dce80);
  return 0;
}


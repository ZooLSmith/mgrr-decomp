// src/misc/esp45.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ECD520..00F37C90, 5 functions

#include "mgrr.h"
#include "esp45.h"

// 00ECD520  esp45::esp45  size=18  [class]
undefined4 * __fastcall esp45::esp45(undefined4 *param_1)

{
  cEsp::cEsp();
  *param_1 = vftable;
  return param_1;
}

// 00ED0B40  esp45::vf00  size=30  [class]
undefined4 __thiscall esp45::vf00(undefined4 param_1,byte param_2)

{
  cEspBase::cEspBase();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00F25070  esp45::vf08  size=104  [class]
void __fastcall esp45::vf08(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int local_2c;
  undefined4 *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = FUN_00e9fe50();
  local_24 = *(undefined4 *)(iVar1 + 0x94);
  puVar2 = (undefined4 *)FUN_00e9fe70();
  local_20 = *puVar2;
  local_1c = puVar2[1];
  local_18 = puVar2[2];
  local_14 = puVar2[3];
  local_28 = &local_20;
  FUN_00edfc20(param_1 + 0x3a0);
  local_2c = param_1 + 0x3a0;
  FUN_00f1c960(&local_2c);
  return;
}

// 00F2BF40  esp45::addOtTransList  size=431  [class]
void __fastcall esp45::addOtTransList(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  uint local_8;
  
  if (*(short *)(param_1 + 0x428) == 0x5e) {
    local_8 = (uint)(longlong)
                    ROUND((float)*(ushort *)(param_1 + 0x4a8) * *(float *)(param_1 + 0x484));
  }
  else {
    if (*(short *)(param_1 + 0x428) != 0x5f) {
      return;
    }
    local_8 = (uint)*(ushort *)(param_1 + 0x4a8);
  }
  if (local_8 != 0) {
    *(undefined4 *)(param_1 + 0x4b4) = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x1ed0);
    iVar2 = FUN_00dd7ad0();
    esp107::vf10();
    if (0.01 < *(float *)(param_1 + 0x124)) {
      if ((DAT_01edd490 == 0) ||
         (puVar3 = (undefined4 *)cPrimHeap::allocBuffer(0x140,0x20), puVar3 == (undefined4 *)0x0)) {
        FUN_009cca90(param_1,&DAT_016dd124);
        return;
      }
      puVar3[9] = 0;
      *puVar3 = cEspDrawWorkMulti::vftable;
      *(undefined1 *)(puVar3 + 4) = 0;
      FUN_00edfcd0(param_1 + 0x3c8);
      FUN_00f26b40(puVar3);
      FUN_00f204b0(puVar3,puVar3,*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x1e74),param_1 + 0x3c8,
                   *(int *)(param_1 + 0x28));
      if ((ushort)(*(short *)(param_1 + 0x4e) + 0xdU) < 10) {
        uVar4 = FUN_009cc5a0(*(short *)(param_1 + 0x4e));
        uVar1 = *(uint *)(param_1 + 0x3c);
        local_8 = uVar1 >> 0x16 & 1;
        uVar5 = uVar4 >> 5;
        uVar4 = 0x80000000 >> ((byte)uVar4 & 0x1f);
        (&DAT_01eddb60)[uVar5 + iVar2] = (&DAT_01eddb60)[uVar5 + iVar2] | uVar4;
        if (local_8 == 0) {
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
      if (0x6b < *(byte *)(puVar3 + 4)) {
        FUN_009cca90(param_1,&DAT_016dd14c);
      }
    }
  }
  return;
}

// 00F37C90  esp45::preTrans  size=855  [class]
undefined4 __thiscall
esp45::preTrans(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  short *psVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint *puVar6;
  uint uVar7;
  float10 fVar8;
  
  iVar3 = cEsp::preTrans(param_2,param_3,param_4);
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = *(int *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x490) = 0x3f800000;
  if ((*(int *)(param_1 + 0x58) != 0) &&
     (puVar4 = (undefined4 *)(*(int *)(param_1 + 0x58) + 0x80), puVar4 != (undefined4 *)0x0)) {
    psVar2 = (short *)*puVar4;
    if ((short *)((int)psVar2 + 0xfU & 0xfffffff0) != psVar2) {
      uVar5 = FUN_00f59ed0(8);
      FUN_00dd5650(&DAT_016597b4,uVar5);
    }
    if (psVar2 != (short *)0x0) {
      if (*psVar2 < 1) {
        FUN_009cca90(param_1,&DAT_016dd0d8);
        return 0;
      }
      *(short *)(param_1 + 0x4a8) = *psVar2;
      *(float *)(param_1 + 0x468) = (float)(int)psVar2[1];
      *(float *)(param_1 + 0x46c) = (float)(int)psVar2[2] * 0.01;
      *(float *)(param_1 + 0x490) = *(float *)(param_1 + 0x490) + (float)(int)psVar2[3] * 0.1;
      *(float *)(param_1 + 0x4a0) = (float)(int)psVar2[5] + *(float *)(param_1 + 0x4a0);
      *(float *)(param_1 + 0x4a4) = (float)(int)psVar2[6] * 0.01;
      *(float *)(param_1 + 0x498) = (float)(int)psVar2[7] * 0.1;
      *(float *)(param_1 + 0x474) = (float)(int)*(char *)((int)psVar2 + 0x11) * 0.005;
      *(int *)(param_1 + 0x470) = (int)(char)psVar2[0xb];
      *(undefined1 *)(param_1 + 0x4aa) = *(undefined1 *)((int)psVar2 + 0x17);
    }
  }
  *(undefined4 *)(param_1 + 0x494) = *(undefined4 *)(param_1 + 0x490);
  *(undefined4 *)(param_1 + 0x49c) = *(undefined4 *)(param_1 + 0x498);
  if ((*(int *)(param_1 + 0x58) != 0) &&
     (puVar6 = (uint *)(*(int *)(param_1 + 0x58) + 0x70), puVar6 != (uint *)0x0)) {
    uVar7 = *puVar6;
    if ((uVar7 + 0xf & 0xfffffff0) != uVar7) {
      uVar5 = FUN_00f59ed0(7);
      FUN_00dd5650(&DAT_016597b4,uVar5);
    }
    if (uVar7 != 0) {
      *(undefined4 *)(param_1 + 0x478) = *(undefined4 *)(uVar7 + 0xc);
      *(undefined4 *)(param_1 + 0x47c) = *(undefined4 *)(uVar7 + 0x10);
      *(undefined4 *)(param_1 + 0x480) = *(undefined4 *)(uVar7 + 0x14);
    }
  }
  if (*(float *)(param_1 + 0x46c) == 0.0) {
    *(undefined4 *)(param_1 + 0x46c) = 0x3f800000;
  }
  if (2 < *(uint *)(param_1 + 0x470)) {
    return 0;
  }
  bVar1 = *(byte *)(param_1 + 0x4aa);
  *(undefined2 *)(param_1 + 0x428) = *(undefined2 *)(&DAT_016df7d8 + *(uint *)(param_1 + 0x470) * 2)
  ;
  if (bVar1 == 0) {
    fVar8 = (float10)FUN_00dde300(0,0x3f800000);
    param_3._0_1_ = (undefined1)(int)ROUND(fVar8 * (float10)1.9900000095367432);
    *(undefined1 *)(param_1 + 0x4aa) = (undefined1)param_3;
  }
  else {
    if (2 < bVar1) {
      FUN_009cca90(param_1,&DAT_016dd100);
    }
    *(byte *)(param_1 + 0x4aa) = bVar1 - 1;
  }
  *(undefined4 *)(param_1 + 0x1f0) = *(undefined4 *)(iVar3 + 0x84);
  *(undefined4 *)(param_1 + 500) = *(undefined4 *)(iVar3 + 0x80);
  *(undefined4 *)(param_1 + 0x1fc) = *(undefined4 *)(iVar3 + 0x160);
  *(undefined4 *)(param_1 + 0x450) = *(undefined4 *)(param_1 + 0x180);
  *(undefined4 *)(param_1 + 0x454) = *(undefined4 *)(param_1 + 0x184);
  *(undefined4 *)(param_1 + 0x458) = *(undefined4 *)(param_1 + 0x188);
  *(undefined4 *)(param_1 + 0x45c) = *(undefined4 *)(param_1 + 0x18c);
  *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 0x100000;
  *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) | 0x8000;
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xffffbfff;
  *(undefined4 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x39c) = 0xbf800000;
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xfdffffff;
  *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) | 0x40000000;
  if ((*(int *)(param_1 + 0x58) == 0) ||
     (puVar6 = (uint *)(*(int *)(param_1 + 0x58) + 0x70), puVar6 == (uint *)0x0)) {
    uVar7 = 0;
  }
  else {
    uVar7 = *puVar6;
    if ((uVar7 + 0xf & 0xfffffff0) != uVar7) {
      uVar5 = FUN_00f59ed0(7);
      FUN_00dd5650(&DAT_016597b4,uVar5);
    }
  }
  *(uint *)(param_1 + 0x4ac) = uVar7;
  uVar5 = FUN_009d4a80();
  *(undefined4 *)(param_1 + 0x4b0) = uVar5;
  return 1;
}


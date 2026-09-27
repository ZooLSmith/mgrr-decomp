// src/misc/esp41.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ECD4A0..00F372B0, 5 functions

#include "types.h"

// 00ECD4A0  esp41::esp41  size=18  [class]
undefined4 * __fastcall esp41::esp41(undefined4 *param_1)

{
  cEspBase::cEspBase_4();
  *param_1 = vftable;
  return param_1;
}

// 00ED0AC0  esp41::vf00  size=30  [class]
undefined4 __thiscall esp41::vf00(undefined4 param_1,byte param_2)

{
  cEspBase::cEspBase_5();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00F24B70  esp41::vf08  size=16  [class]
void esp41::vf08(void)

{
  undefined1 local_8 [8];
  
  FUN_00f1be10(local_8);
  return;
}

// 00F2B7C0  esp41::vf10  size=403  [class]
void __fastcall esp41::vf10(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  uint local_8;
  
  local_8 = (uint)(longlong)ROUND((float)*(ushort *)(param_1 + 0x49e) * *(float *)(param_1 + 0x490))
  ;
  if (local_8 != 0) {
    *(undefined4 *)(param_1 + 0x4ac) = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x1ed0);
    iVar2 = FUN_00dd7ad0();
    FUN_00efed20();
    if (0.01 < *(float *)(param_1 + 0x124)) {
      if ((DAT_01edd490 == 0) ||
         (puVar3 = (undefined4 *)cPrimHeap::allocBuffer(0x140,0x20), puVar3 == (undefined4 *)0x0)) {
        FUN_009cca90(param_1,&DAT_016dcda0);
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
        FUN_009cca90(param_1,&DAT_016dcdc8);
      }
    }
  }
  return;
}

// 00F372B0  esp41::vf04  size=718  [class]
undefined4 __thiscall
esp41::vf04(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  short *psVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  float10 fVar6;
  float10 extraout_ST0;
  float10 extraout_ST1;
  undefined6 uVar7;
  
  iVar3 = cEspModel::vf04(param_2,param_3,param_4);
  if (iVar3 == 0) {
    return 0;
  }
  if ((*(int *)(param_1 + 0x58) != 0) &&
     (puVar4 = (undefined4 *)(*(int *)(param_1 + 0x58) + 0x80), puVar4 != (undefined4 *)0x0)) {
    psVar2 = (short *)*puVar4;
    if ((short *)((int)psVar2 + 0xfU & 0xfffffff0) != psVar2) {
      uVar5 = FUN_00f59ed0(8);
      FUN_00dd5650(&DAT_016597b4,uVar5);
    }
    if (psVar2 != (short *)0x0) {
      if (*psVar2 < 1) {
        FUN_009cca90(param_1,&DAT_016dcd48);
        return 0;
      }
      *(short *)(param_1 + 0x49e) = *psVar2;
      *(float *)(param_1 + 0x478) = (float)(int)psVar2[1];
      *(float *)(param_1 + 0x47c) = (float)(int)psVar2[2] * 0.01;
      *(int *)(param_1 + 0x480) = (int)(char)psVar2[8];
      *(undefined1 *)(param_1 + 0x49c) = *(undefined1 *)((int)psVar2 + 0x17);
      iVar3 = FUN_009d4ac0();
      if (iVar3 != 0) {
        *(undefined4 *)(param_1 + 0x484) = *(undefined4 *)(iVar3 + 0xc);
        *(undefined4 *)(param_1 + 0x488) = *(undefined4 *)(iVar3 + 0x10);
        *(undefined4 *)(param_1 + 0x48c) = *(undefined4 *)(iVar3 + 0x14);
        fVar6 = (float10)FUN_00dde300(-*(float *)(iVar3 + 0x30),*(undefined4 *)(iVar3 + 0x30));
        *(float *)(param_1 + 0x460) = (float)fVar6;
        fVar6 = (float10)FUN_00dde300(-*(float *)(iVar3 + 0x34),*(undefined4 *)(iVar3 + 0x34));
        *(float *)(param_1 + 0x464) = (float)fVar6;
        fVar6 = (float10)FUN_00dde300(-*(float *)(iVar3 + 0x38),*(undefined4 *)(iVar3 + 0x38));
        *(float *)(param_1 + 0x468) = (float)fVar6;
      }
      if (*(float *)(param_1 + 0x47c) == 0.0) {
        *(undefined4 *)(param_1 + 0x47c) = 0x3f800000;
      }
      if (5 < *(uint *)(param_1 + 0x480)) {
        return 0;
      }
      *(wchar_t *)(param_1 + 0x428) = L"RSVWX"[*(uint *)(param_1 + 0x480)];
      uVar7 = FUN_00eda090();
      if ((int)uVar7 != 0) {
        iVar3 = *(int *)(param_1 + 0x24);
        *(undefined4 *)(param_1 + 0x1f0) = *(undefined4 *)(iVar3 + 0x84);
        *(undefined4 *)(param_1 + 500) = *(undefined4 *)(iVar3 + 0x80);
        *(undefined4 *)(param_1 + 0x1fc) = *(undefined4 *)(iVar3 + 0x160);
      }
      if ((short)((uint6)uVar7 >> 0x20) == 0x58) {
        *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x1001000;
      }
      *(undefined4 *)(param_1 + 0x450) = *(undefined4 *)(param_1 + 0x180);
      *(undefined4 *)(param_1 + 0x454) = *(undefined4 *)(param_1 + 0x184);
      *(undefined4 *)(param_1 + 0x458) = *(undefined4 *)(param_1 + 0x188);
      *(undefined4 *)(param_1 + 0x45c) = *(undefined4 *)(param_1 + 0x18c);
      *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 0x100000;
      *(float *)(param_1 + 0x10c) = (float)extraout_ST0;
      *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) | 0x8000;
      bVar1 = *(byte *)(param_1 + 0x49c);
      if (bVar1 == 0) {
        fVar6 = (float10)FUN_00dde300((float)extraout_ST1,(float)extraout_ST0);
        param_3._0_1_ = (char)(int)ROUND(fVar6 * (float10)5.900000095367432);
      }
      else {
        if (6 < bVar1) {
          FUN_009cca90(param_1,&DAT_016dcd7c);
          return 0;
        }
        param_3._0_1_ = bVar1 - 1;
      }
      *(char *)(param_1 + 0x49c) = (char)param_3;
      uVar5 = FUN_009d4ac0();
      *(undefined4 *)(param_1 + 0x4a4) = uVar5;
      uVar5 = FUN_009d4a80();
      *(undefined4 *)(param_1 + 0x4a8) = uVar5;
      return 1;
    }
  }
  FUN_009cca90(param_1,&DAT_016dcd68);
  return 0;
}


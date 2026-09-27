// src/misc/esp40.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ECD480..00F37050, 5 functions

#include "mgrr.h"
#include "esp40.h"

// 00ECD480  esp40::esp40  size=18  [class]
undefined4 * __fastcall esp40::esp40(undefined4 *param_1)

{
  cEspBase::cEspBase_4();
  *param_1 = vftable;
  return param_1;
}

// 00ED0AA0  esp40::vf00  size=30  [class]
undefined4 __thiscall esp40::vf00(undefined4 param_1,byte param_2)

{
  cEspBase::cEspBase_5();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00F24B60  esp40::vf08  size=13  [class]
void __fastcall esp40::vf08(int param_1)

{
  FUN_00f1bd50(param_1 + 0x3a0);
  return;
}

// 00F2B400  esp40::vf10  size=960  [class]
void __fastcall esp40::vf10(int param_1)

{
  float fVar1;
  short sVar2;
  uint uVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  if (*(float *)(param_1 + 0x480) == -1.0) {
    *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_1 + 0x450);
    *(undefined4 *)(param_1 + 0x184) = *(undefined4 *)(param_1 + 0x454);
    *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(param_1 + 0x458);
    *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x45c);
    *(float *)(param_1 + 0x470) = *(float *)(param_1 + 0x180) * *(float *)(param_1 + 0x488);
    *(float *)(param_1 + 0x474) = *(float *)(param_1 + 0x184) * *(float *)(param_1 + 0x488);
    *(float *)(param_1 + 0x478) = *(float *)(param_1 + 0x188) * *(float *)(param_1 + 0x488);
    *(undefined4 *)(param_1 + 0x47c) = *(undefined4 *)(param_1 + 0x488);
    *(float *)(param_1 + 300) = (*(float *)(param_1 + 0x484) + 1.0) * 1.2;
  }
  else {
    pfVar4 = (float *)FUN_00e9fe70();
    pfVar5 = (float *)FUN_00e9feb0();
    local_20 = *pfVar5 - *pfVar4;
    local_1c = pfVar5[1] - pfVar4[1];
    local_18 = pfVar5[2] - pfVar4[2];
    local_14 = pfVar5[3] - pfVar4[3];
    fVar1 = local_20 * local_20 + local_1c * local_1c + local_18 * local_18;
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      FUN_00ddf460(&local_20,&local_20);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_20 = 0.0;
      local_1c = 1.0;
      local_18 = 0.0;
    }
    fVar1 = *(float *)(param_1 + 0x480);
    local_20 = fVar1 * local_20;
    local_1c = local_1c * fVar1;
    local_18 = local_18 * fVar1;
    local_14 = fVar1 * local_14;
    pfVar4 = (float *)FUN_00e9fe70();
    *(float *)(param_1 + 0x180) = *pfVar4 + local_20;
    *(float *)(param_1 + 0x184) = pfVar4[1] + local_1c;
    *(float *)(param_1 + 0x188) = pfVar4[2] + local_18;
    *(float *)(param_1 + 0x18c) = pfVar4[3] + local_14;
    *(float *)(param_1 + 0x470) = -*(float *)(param_1 + 0x180) * *(float *)(param_1 + 0x488);
    *(float *)(param_1 + 0x474) = -*(float *)(param_1 + 0x184) * *(float *)(param_1 + 0x488);
    *(float *)(param_1 + 0x478) = -*(float *)(param_1 + 0x188) * *(float *)(param_1 + 0x488);
    *(undefined4 *)(param_1 + 0x47c) = *(undefined4 *)(param_1 + 0x488);
  }
  *(float *)(param_1 + 0x470) = *(float *)(param_1 + 0x460) + *(float *)(param_1 + 0x470);
  *(float *)(param_1 + 0x474) = *(float *)(param_1 + 0x464) + *(float *)(param_1 + 0x474);
  *(float *)(param_1 + 0x478) = *(float *)(param_1 + 0x468) + *(float *)(param_1 + 0x478);
  iVar6 = FUN_00dd7ad0();
  FUN_00efed20();
  if (0.01 < *(float *)(param_1 + 0x124)) {
    if ((DAT_01edd490 == 0) ||
       (puVar7 = (undefined4 *)cPrimHeap::allocBuffer(0x140,0x20), puVar7 == (undefined4 *)0x0)) {
      FUN_009cca90(param_1,&DAT_016dcd00);
      return;
    }
    puVar7[9] = 0;
    *puVar7 = cEspDrawWorkMulti::vftable;
    *(undefined1 *)(puVar7 + 4) = 0;
    FUN_00edfcd0(param_1 + 0x3c8);
    FUN_00f26b40(puVar7);
    FUN_00f204b0(puVar7,puVar7,*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x1e74),param_1 + 0x3c8,
                 *(int *)(param_1 + 0x28));
    sVar2 = *(short *)(param_1 + 0x4e);
    if ((ushort)(sVar2 + 0xdU) < 10) {
      if ((ushort)(sVar2 + 0xdU) < 10) {
        uVar8 = -(int)sVar2 - 4;
      }
      else {
        FUN_00dd5650(&DAT_01659438);
        uVar8 = 0;
      }
      uVar3 = *(uint *)(param_1 + 0x3c);
      uVar9 = uVar8 >> 5;
      uVar8 = 0x80000000 >> ((byte)uVar8 & 0x1f);
      (&DAT_01eddb60)[uVar9 + iVar6] = (&DAT_01eddb60)[uVar9 + iVar6] | uVar8;
      if ((uVar3 >> 0x16 & 1) == 0) {
        (&DAT_01eddb4c)[uVar9 + iVar6] = (&DAT_01eddb4c)[uVar9 + iVar6] & ~uVar8;
      }
      else {
        (&DAT_01eddb4c)[uVar9 + iVar6] = (&DAT_01eddb4c)[uVar9 + iVar6] | uVar8;
      }
      if ((uVar3 >> 7 & 1) == 0) {
        (&DAT_01eddb38)[uVar9 + iVar6] = (&DAT_01eddb38)[uVar9 + iVar6] & ~uVar8;
      }
      else {
        (&DAT_01eddb38)[uVar9 + iVar6] = (&DAT_01eddb38)[uVar9 + iVar6] | uVar8;
      }
    }
    if (0x6b < *(byte *)(puVar7 + 4)) {
      FUN_009cca90(param_1,&DAT_016dcd28);
    }
  }
  return;
}

// 00F37050  esp40::vf04  size=599  [class]
undefined4 __fastcall esp40::vf04(int param_1)

{
  short *psVar1;
  float fVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  float10 fVar6;
  
  iVar3 = cEspModel::vf04();
  if (iVar3 == 0) {
    return 0;
  }
  if ((*(int *)(param_1 + 0x58) != 0) &&
     (puVar4 = (undefined4 *)(*(int *)(param_1 + 0x58) + 0x80), puVar4 != (undefined4 *)0x0)) {
    psVar1 = (short *)*puVar4;
    if ((short *)((int)psVar1 + 0xfU & 0xfffffff0) != psVar1) {
      uVar5 = FUN_00f59ed0();
      FUN_00dd5650(&DAT_016597b4,uVar5);
    }
    if (psVar1 != (short *)0x0) {
      if (*psVar1 < 1) {
        FUN_009cca90(param_1,&DAT_016dcca4);
        return 0;
      }
      *(int *)(param_1 + 0x498) = (int)*psVar1;
      *(float *)(param_1 + 0x480) = (float)(int)psVar1[1];
      *(float *)(param_1 + 0x484) = (float)(int)psVar1[2];
      *(int *)(param_1 + 0x48c) = (int)(char)psVar1[8];
      iVar3 = FUN_009d4ac0();
      if (iVar3 != 0) {
        *(undefined4 *)(param_1 + 0x460) = *(undefined4 *)(iVar3 + 0x30);
        *(undefined4 *)(param_1 + 0x464) = *(undefined4 *)(iVar3 + 0x34);
        *(undefined4 *)(param_1 + 0x468) = *(undefined4 *)(iVar3 + 0x38);
        fVar6 = (float10)FUN_00dde300(-*(float *)(param_1 + 0x460),*(undefined4 *)(param_1 + 0x460))
        ;
        *(float *)(param_1 + 0x460) = (float)fVar6;
        fVar6 = (float10)FUN_00dde300(-*(float *)(param_1 + 0x464),*(undefined4 *)(param_1 + 0x464))
        ;
        *(float *)(param_1 + 0x464) = (float)fVar6;
        fVar6 = (float10)FUN_00dde300(-*(float *)(param_1 + 0x468),*(undefined4 *)(param_1 + 0x468))
        ;
        *(float *)(param_1 + 0x468) = (float)fVar6;
      }
      if (*(float *)(param_1 + 0x484) == 0.0) {
        fVar2 = 1.0;
      }
      else {
        fVar2 = 1.0 / *(float *)(param_1 + 0x484);
      }
      *(float *)(param_1 + 0x488) = fVar2;
      if (-1.0 <= *(float *)(param_1 + 0x480)) {
        if (5 < *(uint *)(param_1 + 0x48c)) {
          return 0;
        }
        *(wchar_t *)(param_1 + 0x428) = L"OPQ[\\"[*(uint *)(param_1 + 0x48c)];
        *(undefined4 *)(param_1 + 0x450) = *(undefined4 *)(param_1 + 0x180);
        *(undefined4 *)(param_1 + 0x454) = *(undefined4 *)(param_1 + 0x184);
        *(undefined4 *)(param_1 + 0x458) = *(undefined4 *)(param_1 + 0x188);
        *(undefined4 *)(param_1 + 0x45c) = *(undefined4 *)(param_1 + 0x18c);
        *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 0x100000;
        *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) | 0x8000;
        uVar5 = FUN_009d4ac0();
        *(undefined4 *)(param_1 + 0x4a0) = uVar5;
        uVar5 = FUN_009d4a80();
        *(undefined4 *)(param_1 + 0x4a4) = uVar5;
        *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 0x200000;
        return 1;
      }
      FUN_009cca90(param_1,&DAT_016dccdc,(double)*(float *)(param_1 + 0x480));
      return 0;
    }
  }
  FUN_009cca90(param_1,&DAT_016dccc8);
  return 0;
}


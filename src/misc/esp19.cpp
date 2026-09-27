// src/misc/esp19.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ED8600..00F40810, 6 functions

#include "types.h"

// 00ED8600  esp19::vf14  size=45  [class]
void __fastcall esp19::vf14(int param_1)

{
  if (*(int *)(param_1 + 0x450) != -1) {
    FUN_00ec9eb0(*(int *)(param_1 + 0x450));
    *(undefined4 *)(param_1 + 0x450) = 0xffffffff;
  }
  *(undefined4 *)(param_1 + 0x458) = 0;
  return;
}

// 00F176A0  esp19::esp19  size=86  [class]
undefined4 * __fastcall esp19::esp19(undefined4 *param_1)

{
  cEspBase::cEspBase_4();
  param_1[0x115] = 0;
  param_1[0x116] = 0;
  *param_1 = vftable;
  param_1[0x114] = 0xffffffff;
  param_1[0x118] = 0;
  param_1[0x119] = 0;
  param_1[0x11a] = 0;
  param_1[0x11b] = 0;
  param_1[0x11c] = 0;
  param_1[0x11d] = 0;
  param_1[0x11e] = 0;
  return param_1;
}

// 00F17700  esp19::vf08  size=236  [class]
void __fastcall esp19::vf08(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x470) != 1) {
LAB_00f1779e:
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
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    iVar2 = *(int *)(param_1 + 0x474);
    iVar3 = FUN_00a7c800();
    if (iVar2 != -1) {
      if (*(int *)(iVar3 + 0x360) != 0) {
        iVar3 = *(int *)(iVar3 + 0x360);
      }
      iVar3 = iVar2 * 0xb0 + *(int *)(iVar3 + 0x350);
    }
    if (iVar3 != 0) {
      *(undefined4 *)(param_1 + 0x460) = *(undefined4 *)(iVar3 + 0x40);
      *(undefined4 *)(param_1 + 0x464) = *(undefined4 *)(iVar3 + 0x44);
      *(undefined4 *)(param_1 + 0x468) = *(undefined4 *)(iVar3 + 0x48);
      *(undefined4 *)(param_1 + 0x46c) = *(undefined4 *)(iVar3 + 0x4c);
      iVar2 = FUN_00f39810(*(undefined4 *)(param_1 + 0x478));
      if (iVar2 != 0) {
        *(undefined4 *)(param_1 + 0x470) = 2;
      }
      goto LAB_00f1779e;
    }
  }
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x80000000;
  return;
}

// 00F34080  esp19::vf04  size=557  [class]
undefined4 __thiscall
esp19::vf04(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  short sVar2;
  short *psVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  
  iVar5 = cEspModel::vf04(param_2,param_3,param_4);
  if (iVar5 == 0) {
    return 0;
  }
  if ((*(int *)(param_1 + 0x58) != 0) &&
     (puVar6 = (undefined4 *)(*(int *)(param_1 + 0x58) + 0x80), puVar6 != (undefined4 *)0x0)) {
    psVar3 = (short *)*puVar6;
    if ((short *)((int)psVar3 + 0xfU & 0xfffffff0) != psVar3) {
      uVar7 = FUN_00f59ed0(8);
      FUN_00dd5650(&DAT_016597b4,uVar7);
    }
    if ((psVar3 != (short *)0x0) && (*psVar3 == 1)) {
      if (*(short *)(param_1 + 0x4e) != -3) {
        FUN_009cca90(param_1,&DAT_016dbd0c);
        return 0;
      }
      iVar5 = FUN_00a81330();
      if (iVar5 == 0) {
        FUN_009cca90(param_1,&DAT_016dbd2c);
        return 0;
      }
      sVar2 = psVar3[1];
      if (sVar2 == -1) {
        *(undefined4 *)(param_1 + 0x474) = 0xffffffff;
      }
      else {
        iVar5 = FUN_00a7c800();
        if (sVar2 != -1) {
          if (*(int *)(iVar5 + 0x330) == 0) {
            iVar5 = 0xfff;
          }
          else {
            iVar5 = FUN_00a06de0((int)sVar2);
          }
          if (iVar5 == 0xfff) {
            FUN_009cca90(param_1,&DAT_016dbdbc,(int)psVar3[1]);
            return 0;
          }
        }
        sVar2 = psVar3[1];
        iVar5 = FUN_00a7c800();
        if (*(int *)(iVar5 + 0x330) == 0) {
          uVar7 = 0xfff;
        }
        else {
          uVar7 = FUN_00a06de0((int)sVar2);
        }
        *(undefined4 *)(param_1 + 0x474) = uVar7;
      }
      *(undefined4 *)(param_1 + 0x470) = 1;
      iVar5 = FUN_009d49d0();
      if (iVar5 != 0) {
        *(int *)(param_1 + 0x478) = (int)*(short *)(iVar5 + 0x10);
      }
    }
  }
  if ((*(int *)(param_1 + 0x58) != 0) &&
     (puVar1 = (uint *)(*(int *)(param_1 + 0x58) + 0x70), puVar1 != (uint *)0x0)) {
    uVar4 = *puVar1;
    if ((uVar4 + 0xf & 0xfffffff0) != uVar4) {
      uVar7 = FUN_00f59ed0(7);
      FUN_00dd5650(&DAT_016597b4,uVar7);
    }
    if (uVar4 != 0) {
      *(undefined4 *)(param_1 + 0x454) = *(undefined4 *)(uVar4 + 4);
    }
  }
  if (*(int *)(param_1 + 0x470) == 0) {
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x100;
  }
  *(undefined4 *)(param_1 + 0x450) = 0xffffffff;
  if (0.0 < *(float *)(param_1 + 0x454)) {
    uVar7 = FUN_00ec9d50();
    *(undefined4 *)(param_1 + 0x450) = uVar7;
  }
  if ((*(int *)(param_1 + 100) != 0) &&
     (iVar5 = FUN_00f4a2a0(0xf9,(int *)(param_1 + 0x458)), iVar5 != 0)) {
    return 1;
  }
  iVar5 = Hw::cHwLFFreeListTemp<cEffResource<Hw::cTexture,eEffDataManager>_>::
          cHwLFFreeListTemp<cEffResource<Hw::cTexture,eEffDataManager>_>_3();
  if (*(int *)(iVar5 + 0x40c) != 0) {
    *(int *)(param_1 + 0x458) = *(int *)(iVar5 + 0x40c);
    return 1;
  }
  FUN_009cca90(param_1,&DAT_016dbe78,0xf9);
  return 0;
}

// 00F342B0  esp19::vf10  size=910  [class]
void __fastcall esp19::vf10(int param_1)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  float10 fVar4;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  double local_88;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  
  if ((*(uint *)(param_1 + 0x30) & 0xc0000000) != 0) {
    return;
  }
  FUN_00f3eaa0(param_1);
  if (*(int *)(param_1 + 0x470) - 1U < 2) {
    iVar3 = FUN_00ea0000(&local_80,param_1 + 0x460);
    pfVar1 = (float *)(param_1 + 400);
    if (iVar3 == 0) {
      local_a0 = *pfVar1;
      local_9c = *(float *)(param_1 + 0x194);
      local_98 = *(float *)(param_1 + 0x198);
      local_94 = *(float *)(param_1 + 0x19c);
      iVar3 = FUN_00f98a90();
      local_80 = (float)(iVar3 / 2) + local_a0;
      iVar3 = FUN_00f98aa0();
      local_7c = (float)(iVar3 / 2) + local_9c;
      local_78 = local_98;
      local_74 = local_94;
      FUN_00ea0030(pfVar1,&local_80);
    }
    else {
      local_a0 = local_80 + *pfVar1;
      local_9c = *(float *)(param_1 + 0x194) + local_7c;
      local_98 = *(float *)(param_1 + 0x198) + local_78;
      local_94 = *(float *)(param_1 + 0x19c) + local_74;
      FUN_00ea0030(pfVar1,&local_a0);
      local_88 = (double)local_a0;
      iVar3 = FUN_00f98a90();
      local_a0 = (float)local_88 - (float)(iVar3 / 2);
      local_88 = (double)local_9c;
      iVar3 = FUN_00f98aa0();
LAB_00f3446a:
      local_9c = (float)local_88 - (float)(iVar3 / 2);
    }
  }
  else {
    FUN_00ea0000(&local_a0,param_1 + 400);
    if (local_98 != 0.0) {
      local_88 = (double)local_a0;
      iVar3 = FUN_00f98a90();
      local_a0 = (float)local_88 - (float)(iVar3 / 2);
      local_88 = (double)local_9c;
      iVar3 = FUN_00f98aa0();
      goto LAB_00f3446a;
    }
    local_a0 = 0.0;
    local_9c = 0.0;
    local_98 = 0.0;
    local_94 = 1.0;
  }
  if (*(int *)(param_1 + 0x450) != -1) {
    *(undefined4 *)(param_1 + 600) = 0;
    *(undefined4 *)(param_1 + 0x254) = 0;
    *(undefined4 *)(param_1 + 0x250) = 0;
    *(undefined2 *)(param_1 + 0x432) = 0;
    *(undefined1 *)(param_1 + 0x440) = 1;
    *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_1 + 0x454);
    *(undefined4 *)(param_1 + 0x420) = *(undefined4 *)(param_1 + 0x458);
    *(float *)(param_1 + 0x104) = *(float *)(param_1 + 0x454);
    *(undefined4 *)(param_1 + 0x1c8) = 0;
    *(undefined4 *)(param_1 + 0x1c4) = 0;
    *(undefined4 *)(param_1 + 0x1c0) = 0;
    *(undefined4 *)(param_1 + 0x25c) = 0x3f800000;
    if (*(float *)(param_1 + 0x10c) != 1.0) {
      *(float *)(param_1 + 0x100) = *(float *)(param_1 + 0x10c) * *(float *)(param_1 + 0x100);
      *(float *)(param_1 + 0x104) = *(float *)(param_1 + 0x454) * *(float *)(param_1 + 0x10c);
      *(float *)(param_1 + 0x108) = *(float *)(param_1 + 0x108) * *(float *)(param_1 + 0x10c);
    }
    *(undefined2 *)(param_1 + 0x4e) = 0xfffe;
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xfffffeff;
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x200;
    cEspDrawWork::cEspDrawWork_3(*(undefined4 *)(param_1 + 0x450));
    FUN_00f3eb70();
  }
  if (ABS(local_98) != 0.0) {
    *(float *)(param_1 + 400) = local_a0;
    *(float *)(param_1 + 0x194) = local_9c;
    *(undefined4 *)(param_1 + 0x198) = 0xc59c4000;
    *(undefined4 *)(param_1 + 0x19c) = 0x3f800000;
    local_a4 = *(float *)(param_1 + 0x25c);
    if (*(int *)(param_1 + 0x450) != -1) {
      fVar4 = (float10)FUN_00eca1e0(*(int *)(param_1 + 0x450));
      fVar2 = (float)fVar4;
      local_88 = (double)CONCAT44(local_88._4_4_,fVar2);
      if (fVar2 < 0.0 != (fVar2 == 0.0)) {
        FUN_00f3eb70();
        return;
      }
      local_88 = (double)CONCAT44(local_88._4_4_,fVar2 * 1.6666666);
      fVar4 = (float10)FUN_0043f4b0(fVar2 * 1.6666666,0x3f800000);
      local_a4 = (float)(fVar4 * (float10)local_a4);
      if (local_a4 <= 0.01) goto LAB_00f3462f;
    }
    *(float *)(param_1 + 0x25c) = local_a4;
    cEspDrawWork::cEspDrawWork_3(0xffffffff);
  }
LAB_00f3462f:
  FUN_00f3eb70();
  return;
}

// 00F40810  esp19::vf00  size=72  [class]
undefined4 * __thiscall esp19::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cEspBase::vftable;
  FUN_00eaa2b0(param_1);
  if (param_1[4] != 0) {
    FUN_00f123b0(param_1);
  }
  FUN_00ddbbc0();
  FUN_00ec4840();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}


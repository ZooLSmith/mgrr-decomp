// src/misc/esp125.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009D0830..009DA640, 5 functions

#include "mgrr.h"
#include "esp125.h"

// 009D0830  esp125::esp125  size=29  [class]
undefined4 * __fastcall esp125::esp125(undefined4 *param_1)

{
  cEsp::cEsp();
  *param_1 = vftable;
  FUN_00f5aaf0();
  return param_1;
}

// 009DA2E0  esp125::vf00  size=36  [class]
undefined4 * __thiscall esp125::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  cEspBase::cEspBase();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 009DA310  esp125::preTrans  size=492  [class]
/* WARNING: Removing unreachable block (ram,0x009da489) */

undefined4 __thiscall
esp125::preTrans(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short *psVar1;
  float *pfVar2;
  float fVar3;
  int iVar4;
  uint *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  void *_Src;
  float10 fVar9;
  
  iVar4 = cEsp::preTrans(param_2,param_3,param_4);
  if (iVar4 != 0) {
    if ((*(int *)(param_1 + 0x58) == 0) ||
       (puVar5 = (uint *)(*(int *)(param_1 + 0x58) + 0x30), puVar5 == (uint *)0x0)) {
      _Src = (void *)0x0;
    }
    else {
      _Src = (void *)*puVar5;
      if ((void *)((int)_Src + 0xfU & 0xfffffff0) != _Src) {
        uVar7 = FUN_00f59ed0(3);
        FUN_00dd5650(&DAT_016597b4,uVar7);
      }
    }
    FID_conflict__memcpy((void *)(param_1 + 0x450),_Src,0xb0);
    *(undefined4 *)(param_1 + 0x500) = *(undefined4 *)((int)_Src + 0x28);
    *(undefined4 *)(param_1 + 0x504) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x508) = 0;
    *(undefined4 *)(param_1 + 0x50c) = 0;
    *(undefined4 *)(param_1 + 0x510) = 0;
    if ((*(int *)(param_1 + 0x58) != 0) &&
       (puVar6 = (undefined4 *)(*(int *)(param_1 + 0x58) + 0x80), puVar6 != (undefined4 *)0x0)) {
      psVar1 = (short *)*puVar6;
      if ((short *)((int)psVar1 + 0xfU & 0xfffffff0) != psVar1) {
        uVar7 = FUN_00f59ed0(8);
        FUN_00dd5650(&DAT_016597b4,uVar7);
      }
      if (psVar1 != (short *)0x0) {
        fVar3 = (float)(int)*psVar1;
        *(float *)(param_1 + 0x508) = fVar3;
        if (fVar3 == 0.0) {
          fVar3 = 0.0;
        }
        else {
          fVar3 = 1.0 / fVar3;
        }
        *(float *)(param_1 + 0x50c) = fVar3;
        *(float *)(param_1 + 0x510) = (float)((int)psVar1[1] + (int)*psVar1);
      }
    }
    if ((*(int *)(param_1 + 0x58) != 0) &&
       (puVar6 = (undefined4 *)(*(int *)(param_1 + 0x58) + 0x70), puVar6 != (undefined4 *)0x0)) {
      pfVar2 = (float *)*puVar6;
      if ((float *)((int)pfVar2 + 0xfU & 0xfffffff0) != pfVar2) {
        uVar7 = FUN_00f59ed0(7);
        FUN_00dd5650(&DAT_016597b4,uVar7);
      }
      if (pfVar2 != (float *)0x0) {
        uVar8 = *(int *)(param_1 + 0x114) * 0x19660d + 0x3c6ef35f;
        *(uint *)(param_1 + 0x114) = uVar8;
        fVar3 = (float)(uVar8 >> 8) * 5.960465e-08;
        *(float *)(param_1 + 0x500) =
             (1.0 - (fVar3 + fVar3)) * *pfVar2 + *(float *)(param_1 + 0x500);
        fVar9 = (float10)FUN_00dde300(0,0x3f800000);
        *(float *)(param_1 + 0x504) = (float)((float10)pfVar2[1] - fVar9 * (float10)pfVar2[2]);
      }
    }
    if (0.0 < *(float *)(param_1 + 0x508)) {
      *(undefined4 *)(param_1 + 0x478) = 0;
    }
    *(void **)(param_1 + 0x3a8) = (void *)(param_1 + 0x450);
    *(undefined4 *)(param_1 + 0x514) = 0;
    return 1;
  }
  return 0;
}

// 009DA500  esp125::vf08  size=311  [class]
void __fastcall esp125::vf08(int param_1)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  
  esp39::vf08();
  fVar1 = *(float *)(param_1 + 0x118) + 1.0;
  if (fVar1 <= 0.0001) {
    fVar1 = 0.0001;
  }
  if (fVar1 <= *(float *)(param_1 + 0x508)) {
    *(float *)(param_1 + 0x478) = fVar1 * *(float *)(param_1 + 0x50c) * *(float *)(param_1 + 0x500);
    return;
  }
  if (*(int *)(param_1 + 0x514) == 0) {
    *(undefined4 *)(param_1 + 0x514) = 1;
    *(undefined4 *)(param_1 + 0x478) = *(undefined4 *)(param_1 + 0x500);
    return;
  }
  if (((*(byte *)(param_1 + 0x3f) & 1) == 0) && ((*(uint *)(param_1 + 0x30) & 0x2000) == 0)) {
    if (*(float *)(param_1 + 0x510) < *(float *)(param_1 + 0x118)) {
      fVar1 = *(float *)(param_1 + 0x110);
      if (fVar1 == 1.0) {
        *(float *)(param_1 + 0x478) = *(float *)(param_1 + 0x504) * *(float *)(param_1 + 0x478);
        return;
      }
      fVar2 = *(float *)(param_1 + 0x504);
      if (NAN(fVar2) || 2.0 < fVar2 == (fVar2 == 2.0)) {
        *(float *)(param_1 + 0x478) =
             (fVar2 / ((fVar1 - fVar2 * fVar1) + fVar2)) * *(float *)(param_1 + 0x478);
        return;
      }
      fVar3 = (float10)FUN_00fdc1f0();
      *(float *)(param_1 + 0x478) = (float)(fVar3 * (float10)*(float *)(param_1 + 0x478));
      return;
    }
  }
  else if (*(float *)(param_1 + 0x510) < *(float *)(param_1 + 0x118)) {
    *(float *)(param_1 + 0x478) = *(float *)(param_1 + 0x478) * *(float *)(param_1 + 0x504);
    return;
  }
  return;
}

// 009DA640  esp125::addOtTransList  size=311  [class]
void __fastcall esp125::addOtTransList(int param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  
  iVar3 = FUN_00dd7ad0();
  esp107::vf10();
  if (((0.01 < *(float *)(param_1 + 0x124)) && (DAT_01edd490 != 0)) &&
     (puVar4 = (undefined4 *)cPrimHeap::allocBuffer(0xd0,0x20), puVar4 != (undefined4 *)0x0)) {
    *puVar4 = cEspDrawWork::vftable;
    puVar4[9] = 0;
    *(undefined1 *)(puVar4 + 4) = 0;
    FUN_00edfcd0(param_1 + 0x3c8);
    *(int *)(param_1 + 0x3cc) = param_1 + 0x450;
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
      if ((uVar2 >> 7 & 1) != 0) {
        (&DAT_01eddb38)[uVar6 + iVar3] = (&DAT_01eddb38)[uVar6 + iVar3] | uVar5;
        return;
      }
      (&DAT_01eddb38)[uVar6 + iVar3] = (&DAT_01eddb38)[uVar6 + iVar3] & ~uVar5;
    }
  }
  return;
}


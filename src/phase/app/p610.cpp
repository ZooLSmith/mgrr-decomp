// src/phase/app/p610.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D4AA40..00D6E100, 7 functions

#include "mgrr.h"
#include "P610.h"

// 00D4AA40  P610::vf1C  size=3  [class]
void P610::vf1C(void)

{
  return;
}

// 00D550B0  P610::vf08  size=8  [class]
void P610::vf08(void)

{
  DAT_01bea094 = DAT_01bea094 | 0x40;
  return;
}

// 00D550C0  P610::vf0C  size=315  [class]
void __fastcall P610::vf0C(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  float *pfVar4;
  int iVar5;
  undefined *puVar6;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  *(undefined4 *)(param_1 + 0x11c) = 0;
  iVar1 = FUN_00c19c00(DAT_01d5bad4,0,0);
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00a7c8a0();
      uVar3 = 0;
      if (piVar2 != (int *)0x0) {
        puVar6 = &DAT_01b34c30;
        (**(code **)(*piVar2 + 4))(&DAT_01b34c30);
        iVar1 = FUN_00dd6d80(puVar6);
        uVar3 = -(uint)(iVar1 != 0) & (uint)piVar2;
      }
      *(uint *)(param_1 + 0x11c) = uVar3;
      if (uVar3 != 0) {
        iVar1 = FUN_00a7f600(0xd0032);
        if (iVar1 != 0) {
          iVar1 = FUN_00a7c8a0();
          if (iVar1 != 0) {
            pfVar4 = (float *)FUN_00a7c8d0();
            fStack_20 = *pfVar4;
            fStack_1c = pfVar4[1];
            fStack_18 = pfVar4[2];
            fStack_14 = pfVar4[3];
            iVar1 = FUN_00a8eea0();
            iVar5 = FUN_00a8eeb0();
            fStack_20 = (-5.0 - ((float)iVar1 / (float)(iVar5 / 10) - 10.0)) * 0.017453292;
            FUN_00a7cf00(&fStack_20);
            FUN_00a7c8a0();
            switchD_0080dbae::default();
          }
        }
      }
    }
  }
  return;
}

// 00D5B9F0  P610::vf14  size=390  [class]
void P610::vf14(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int unaff_ESI;
  undefined4 unaff_EDI;
  char *pcStack_134;
  char *local_118;
  undefined1 local_104 [4];
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e0 [36];
  undefined4 local_50;
  undefined1 local_2c;
  
  pcStack_134 = "P610_BOSS";
  iVar1 = FUN_00fdbbd0(param_2);
  if (iVar1 != 0) {
    pcStack_134 = (char *)0xd5ba26;
    iVar1 = FUN_00a7f860();
    local_118 = (char *)0x0;
    if (0 < iVar1) {
      do {
        pcStack_134 = local_118;
        iVar2 = FUN_00a7f870();
        if (iVar2 != 0) {
          pcStack_134 = (char *)0xd5ba56;
          iVar2 = FUN_00a7c8a0();
          if ((*(int *)(iVar2 + 0x4b4) == 0xd0035) || (*(int *)(iVar2 + 0x4b4) == 0xd0034)) {
            pcStack_134 = (char *)0xd5ba75;
            FUN_00a7c8a0();
            pcStack_134 = (char *)0x20;
            FUN_008f1600();
            pcStack_134 = (char *)0xd5ba8b;
            FUN_0118f7b0();
            local_50 = 0;
            local_e0[0] = 0x1b;
            local_2c = 5;
            pcStack_134 = (char *)0xd5baad;
            FUN_00a7c930();
            pcStack_134 = (char *)0xd5babc;
            pcStack_134 = (char *)FUN_00a7c7f0();
            FUN_00a7c960();
            pcStack_134 = (char *)0xd5bacb;
            piVar3 = (int *)FUN_00910da0();
            local_f0 = 0;
            pcStack_134 = (char *)0x1;
            local_ec = 0x40100000;
            local_e8 = 0;
            local_100 = 0;
            local_fc = 0;
            local_f8 = 0;
            iVar2 = *piVar3;
            uVar4 = FUN_00a7c8d0(&local_100,&local_f0,0x40100000);
            uVar4 = FUN_00a7c8b0(uVar4);
            uVar4 = (**(code **)(iVar2 + 0x10))(local_104,local_e0,uVar4);
            FUN_00910ab0(uVar4);
            FUN_00917bd0(unaff_EDI,0x800);
            (**(code **)(*(int *)(unaff_ESI + 0x120) + 8))(&pcStack_134);
          }
        }
        local_118 = local_118 + 1;
      } while ((int)local_118 < iVar1);
    }
  }
  return;
}

// 00D5BB80  P610::vf18  size=130  [class]
void __fastcall P610::vf18(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = FUN_00e03ea0("P610_BOSS");
  if ((DAT_018b9178 == iVar1) &&
     (iVar1 = *(int *)(param_1 + 0x124),
     iVar1 != *(int *)(param_1 + 0x124) + *(int *)(param_1 + 0x128) * 8)) {
    do {
      iVar2 = FUN_00a81330();
      if (iVar2 == 0) {
        if (*(int *)(iVar1 + 4) != 0) {
          piVar3 = (int *)FUN_00910da0();
          (**(code **)(*piVar3 + 0x28))(iVar1 + 4);
        }
        iVar1 = FUN_00d570e0(iVar1);
      }
      else {
        iVar1 = iVar1 + 8;
      }
    } while (iVar1 != *(int *)(param_1 + 0x124) + *(int *)(param_1 + 0x128) * 8);
  }
  return;
}

// 00D5BC10  P610::vf10  size=101  [class]
void __fastcall P610::vf10(int param_1)

{
  int *piVar1;
  int iVar2;
  
  DAT_01bea094 = DAT_01bea094 & 0xffffffbf;
  iVar2 = *(int *)(param_1 + 0x124);
  if (iVar2 != iVar2 + *(int *)(param_1 + 0x128) * 8) {
    do {
      if (*(int *)(iVar2 + 4) != 0) {
        piVar1 = (int *)FUN_00910da0();
        (**(code **)(*piVar1 + 0x28))(iVar2 + 4);
      }
      iVar2 = iVar2 + 8;
    } while (iVar2 != *(int *)(param_1 + 0x124) + *(int *)(param_1 + 0x128) * 8);
  }
  if (*(int *)(param_1 + 0x124) != 0) {
    *(undefined4 *)(param_1 + 0x128) = 0;
  }
  return;
}

// 00D6E100  P610::vf00  size=90  [class]
undefined4 * __thiscall P610::vf00(undefined4 *param_1,byte param_2)

{
  param_1[0x48] = lib::Array<P610::Obstacle>::vftable;
  if (param_1[0x49] != 0) {
    param_1[0x4a] = 0;
  }
  param_1[0x49] = 0;
  param_1[0x4b] = 0;
  *param_1 = cPhaseAbstract::vftable;
  param_1[3] = lib::Array<int>::vftable;
  if (param_1[4] != 0) {
    param_1[5] = 0;
  }
  param_1[4] = 0;
  param_1[6] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}


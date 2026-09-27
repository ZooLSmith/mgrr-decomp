// lib/havok/unit_00BEA280.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00BEA280..00BEA280, 1 functions

#include "mgrr.h"
#include "hkpAllCdPointCollector.h"

// 00BEA280  hkpAllCdPointCollector::hkpAllCdPointCollector_20  size=1143  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall hkpAllCdPointCollector::hkpAllCdPointCollector_20(int *param_1)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  float10 fVar8;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  int iStack_1dc;
  int iStack_1d8;
  int iStack_1d4;
  float afStack_1d0 [2];
  float fStack_1c8;
  float fStack_1c4;
  undefined1 auStack_1c0 [16];
  undefined **ppuStack_1b0;
  undefined4 uStack_1ac;
  undefined1 *puStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined1 auStack_190 [396];
  
  pcVar1 = *(code **)(*param_1 + 0x314);
  param_1[0x998] = 1;
  (*pcVar1)();
  param_1[0x469] = 1;
  FUN_00b884c0();
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x17e,0,0x3d888889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    fStack_1f0 = 0.0;
    fStack_1ec = 1.0;
    fStack_1e8 = 0.0;
    FUN_00b893e0(&fStack_1f0,1);
    piVar5 = param_1 + 0x2c;
    piVar6 = &DAT_01bea560;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar6 = *piVar5;
      piVar5 = piVar5 + 1;
      piVar6 = piVar6 + 1;
    }
    D3DXMatrixInverse(&DAT_01bea5a0,0,&DAT_01bea560);
    _DAT_01bea6c0 = 0;
    FUN_00b7b270(0x3e99999a,0x393702d3,0x3e860a92,0);
    param_1[0x248] = 0x41700000;
    (**(code **)(*param_1 + 0x220))(0x41700000);
    param_1[0x225] = 0;
    param_1[0x250] = 0;
    param_1[0x9b5] = 0;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  if ((param_1[0x250] == 0) && (0.0 < (float)param_1[0x248])) {
    iVar4 = FUN_00a81330();
    if (iVar4 != 0) {
      FUN_00a81330();
      iStack_1d4 = FUN_00a7c8a0();
      if (iStack_1d4 != 0) {
        iVar4 = FUN_00a81330();
        if (iVar4 != 0) {
          FUN_00c15010(afStack_1d0);
        }
        uStack_1ac = 0x7f7fffee;
        puStack_1a0 = auStack_190;
        fStack_1f0 = afStack_1d0[0] - (float)param_1[0x10];
        ppuStack_1b0 = vftable;
        uStack_198 = 0x80000008;
        uStack_19c = 0;
        fStack_1e8 = fStack_1c8 - (float)param_1[0x12];
        fStack_1e4 = fStack_1c4 - (float)param_1[0x13];
        fStack_1ec = 0.0;
        iVar4 = FUN_009f8b40();
        iStack_1d8 = FUN_0090eea0(&ppuStack_1b0,auStack_1c0,param_1 + 0x10,0x3e99999a,&fStack_1f0,
                                  iVar4 << 0x10 | 6,"Xcombo Low Check");
        if (iStack_1d8 != 0) {
          FUN_0112bcf0();
          iVar4 = *(int *)(puStack_1a0 + 0x28);
          iVar7 = 0;
          iStack_1dc = 0;
          if (*(char *)(iVar4 + 0x18) == '\x01') {
            iVar7 = FUN_00445ca0(iVar4);
          }
          if (*(char *)(iVar4 + 0x18) == '\x02') {
            iStack_1dc = FUN_00445cc0(iVar4);
          }
          if ((iVar7 != 0) && (iVar4 = FUN_008f7780(iVar7), iVar4 == iStack_1d4)) {
            iStack_1d8 = 0;
          }
          if (((iStack_1dc == 0) || (iVar4 = FUN_008f7780(iStack_1dc), iVar4 != iStack_1d4)) &&
             (iStack_1d8 != 0)) {
            param_1[0x225] = 0x3da3d70a;
            hkpCdPointCollector::hkpCdPointCollector_4();
            goto LAB_00bea55f;
          }
        }
        param_1[0x250] = 1;
        hkpCdPointCollector::hkpCdPointCollector_4();
        goto LAB_00bea55f;
      }
    }
    param_1[0x250] = 1;
  }
LAB_00bea55f:
  FUN_00b94790(0x3f800000,0x3f800000);
  param_1[0x469] = 1;
  iVar4 = FUN_00a8c760(5);
  if ((iVar4 != 0) && (iVar4 = FUN_00a81330(), iVar4 != 0)) {
    FUN_00a81330();
    iVar4 = FUN_00a7c8a0();
    if (iVar4 != 0) {
      iVar4 = FUN_00a81330();
      if (iVar4 != 0) {
        FUN_00c15010(&fStack_1f0);
      }
      FUN_00a8e880(&fStack_1f0);
      (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3e32b8c2,0);
      fVar2 = (fStack_1e8 - (float)param_1[0x12]) * (fStack_1e8 - (float)param_1[0x12]) +
              (fStack_1f0 - (float)param_1[0x10]) * (fStack_1f0 - (float)param_1[0x10]) +
              (fStack_1ec - (float)param_1[0x11]) * (fStack_1ec - (float)param_1[0x11]);
      fVar3 = ((float)param_1[0x4e0] + 4.0) * ((float)param_1[0x4e0] + 4.0);
      if ((fVar2 < fVar3 != (fVar2 == fVar3)) && (iVar4 = FUN_00a12210(0xf00), iVar4 != 0)) {
        afStack_1d0[0] = fStack_1f0 - *(float *)(iVar4 + 0x40);
        fStack_1c8 = fStack_1e8 - *(float *)(iVar4 + 0x48);
        fVar8 = (float10)FUN_00fdc1f0();
        param_1[0x14] =
             (int)(float)((float10)(float)param_1[0x14] + (float10)afStack_1d0[0] * fVar8);
        param_1[0x16] = (int)(float)(fVar8 * (float10)fStack_1c8 + (float10)(float)param_1[0x16]);
      }
    }
  }
  param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
  iVar4 = FUN_00a92f90();
  if ((*(int *)(iVar4 + 0xd0) + *(int *)(iVar4 + 0xc4) + *(int *)(iVar4 + 0xb8) == 0) ||
     (iVar4 = FUN_00e36060(0), iVar4 != 0)) {
    (**(code **)(*param_1 + 0x388))(0);
  }
  return;
}


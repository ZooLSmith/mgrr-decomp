// src/misc/esp24.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ED0530..00F34B70, 4 functions

#include "mgrr.h"
#include "esp24.h"

// 00ED0530  esp24::esp24  size=18  [class]
undefined4 * __fastcall esp24::esp24(undefined4 *param_1)

{
  cEspBase::cEspBase_4();
  *param_1 = vftable;
  return param_1;
}

// 00ED0960  esp24::vf00  size=30  [class]
undefined4 __thiscall esp24::vf00(undefined4 param_1,byte param_2)

{
  cEspBase::cEspBase_5();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00F2A260  esp24::vf08  size=740  [class]
void __fastcall esp24::vf08(int param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  float10 fVar11;
  uint local_30;
  
  piVar1 = (int *)(param_1 + 0x3a0);
  FUN_00edfc20(piVar1);
  FUN_00f0b530(piVar1);
  if (*(int *)(param_1 + 0x50) == 0) {
    *piVar1 = 0;
  }
  else {
    *piVar1 = *(int *)(param_1 + 0x50) + 0x10;
  }
  FUN_00efb130(piVar1);
  FUN_00efbd40(piVar1);
  *(undefined4 *)(param_1 + 0x464) = *(undefined4 *)(param_1 + 0x460);
  *(float *)(param_1 + 0x460) =
       *(float *)(param_1 + 0x460) +
       *(float *)(param_1 + 0x468) * *(float *)(param_1 + 0x110) * 1.001;
  *(float *)(param_1 + 0x46c) = *(float *)(param_1 + 0x46c) + 1.0;
  if ((*(uint *)(param_1 + 0x45c) == 0) ||
     (local_30 = (uint)(longlong)ROUND(*(float *)(param_1 + 0x460)),
     local_30 < *(uint *)(param_1 + 0x45c))) {
    FUN_00f233d0();
  }
  else {
    pfVar6 = *(float **)(param_1 + 0x3b0);
    if (pfVar6 != (float *)0x0) {
      fVar2 = *pfVar6;
      uVar9 = *(uint *)(param_1 + 0x450);
      iVar10 = uVar9 - 1;
      fVar3 = pfVar6[1];
      fVar4 = pfVar6[2];
      if (-1 < iVar10) {
        if (3 < (int)uVar9) {
          uVar9 = uVar9 >> 2;
          iVar8 = iVar10 * 0xc;
          iVar10 = iVar10 + uVar9 * -4;
          do {
            pfVar6 = (float *)(*(int *)(param_1 + 0x458) + iVar8);
            *pfVar6 = *(float *)(*(int *)(param_1 + 0x458) + iVar8) + fVar2;
            pfVar6[1] = pfVar6[1] + fVar3;
            pfVar6[2] = pfVar6[2] + fVar4;
            pfVar6 = (float *)(iVar8 + -0xc + *(int *)(param_1 + 0x458));
            *pfVar6 = *(float *)(iVar8 + -0xc + *(int *)(param_1 + 0x458)) + fVar2;
            pfVar6[1] = pfVar6[1] + fVar3;
            pfVar6[2] = pfVar6[2] + fVar4;
            pfVar6 = (float *)(iVar8 + -0x18 + *(int *)(param_1 + 0x458));
            *pfVar6 = *(float *)(iVar8 + -0x18 + *(int *)(param_1 + 0x458)) + fVar2;
            pfVar6[1] = pfVar6[1] + fVar3;
            pfVar6[2] = pfVar6[2] + fVar4;
            pfVar6 = (float *)(*(int *)(param_1 + 0x458) + iVar8 + -0x24);
            uVar9 = uVar9 - 1;
            *pfVar6 = *(float *)(*(int *)(param_1 + 0x458) + iVar8 + -0x24) + fVar2;
            pfVar6[1] = pfVar6[1] + fVar3;
            pfVar6[2] = pfVar6[2] + fVar4;
            iVar8 = iVar8 + -0x30;
          } while (uVar9 != 0);
        }
        if (-1 < iVar10) {
          iVar8 = iVar10 * 0xc;
          do {
            pfVar6 = (float *)(*(int *)(param_1 + 0x458) + iVar8);
            pfVar7 = (float *)(*(int *)(param_1 + 0x458) + iVar8);
            iVar8 = iVar8 + -0xc;
            iVar10 = iVar10 + -1;
            *pfVar7 = *pfVar6 + fVar2;
            pfVar7[1] = pfVar7[1] + fVar3;
            pfVar7[2] = pfVar7[2] + fVar4;
          } while (-1 < iVar10);
        }
      }
    }
  }
  pfVar6 = *(float **)(param_1 + 0x458);
  iVar10 = *(int *)(param_1 + 0x450);
  fVar2 = pfVar6[iVar10 * 3 + -2];
  fVar3 = pfVar6[1];
  fVar4 = pfVar6[iVar10 * 3 + -1];
  fVar5 = pfVar6[2];
  *(float *)(param_1 + 0x130) = (pfVar6[iVar10 * 3 + -3] + *pfVar6) * 0.5;
  *(float *)(param_1 + 0x134) = (fVar2 + fVar3) * 0.5;
  *(float *)(param_1 + 0x138) = (fVar4 + fVar5) * 0.5;
  *(undefined4 *)(param_1 + 0x13c) = 0x3f800000;
  fVar11 = (float10)FUN_00fdef70();
  *(float *)(param_1 + 300) = (float)fVar11;
  FUN_00ed6110();
  return;
}

// 00F34B70  esp24::vf04  size=442  [class]
undefined4 __thiscall
esp24::vf04(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  undefined4 uVar6;
  
  iVar4 = cEspModel::vf04(param_2,param_3,param_4);
  if (iVar4 != 0) {
    iVar4 = FUN_00f12b50();
    if (iVar4 != 0) {
      *(undefined4 *)(param_1 + 0x4b0) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x4b4) = 0;
      *(undefined4 *)(param_1 + 0x4b8) = 0;
      if ((*(int *)(param_1 + 0x58) != 0) &&
         (puVar5 = (uint *)(*(int *)(param_1 + 0x58) + 0x80), puVar5 != (uint *)0x0)) {
        uVar3 = *puVar5;
        if ((uVar3 + 0xf & 0xfffffff0) != uVar3) {
          uVar6 = FUN_00f59ed0(8);
          FUN_00dd5650(&DAT_016597b4,uVar6);
        }
        if (uVar3 != 0) {
          sVar2 = *(short *)(uVar3 + 0xc);
          *(int *)(param_1 + 0x4b0) = (int)sVar2;
          if (sVar2 < 1) {
            *(undefined4 *)(param_1 + 0x4b0) = 0xffffffff;
          }
          *(float *)(param_1 + 0x4b4) = (float)(int)*(char *)(uVar3 + 0x10);
          *(float *)(param_1 + 0x4b8) = (float)(int)*(char *)(uVar3 + 0x11);
          *(float *)(param_1 + 0x4bc) =
               (float)(int)*(short *)(uVar3 + 0xe) + *(float *)(param_1 + 0x4bc);
          *(float *)(param_1 + 0x4c0) = (float)(int)*(char *)(uVar3 + 0x12) * 0.01;
          cVar1 = *(char *)(uVar3 + 0x15);
          *(int *)(param_1 + 0x4c4) = (int)cVar1;
          if (cVar1 != 0) {
            *(undefined4 *)(param_1 + 0x4c8) = 1;
          }
        }
      }
      if (100.0 < *(float *)(param_1 + 0x4b4)) {
        FUN_009cca90(param_1,&DAT_016dc098);
        return 0;
      }
      if (100.0 < *(float *)(param_1 + 0x4b8)) {
        FUN_009cca90(param_1,&DAT_016dc0cc);
        return 0;
      }
      FUN_00edfc20(param_1 + 0x3a0);
      FUN_00efb130(param_1 + 0x3a0);
      *(undefined4 *)(param_1 + 0x4a0) = *(undefined4 *)(param_1 + 400);
      *(undefined4 *)(param_1 + 0x4a4) = *(undefined4 *)(param_1 + 0x194);
      *(undefined4 *)(param_1 + 0x4a8) = *(undefined4 *)(param_1 + 0x198);
      *(undefined4 *)(param_1 + 0x4ac) = *(undefined4 *)(param_1 + 0x19c);
      FUN_00ed54f0();
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x800000;
      return 1;
    }
  }
  return 0;
}


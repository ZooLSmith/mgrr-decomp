// src/player/pl0010/Pl0010.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00B95720..00B95720, 1 functions

#include "mgrr.h"

// 00B95720  Pl0010::GroundTest  size=1028  [class]
void __fastcall Pl0010::GroundTest(int param_1)

{
  float *pfVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  code *pcVar8;
  uint uVar9;
  float *pfVar10;
  int *piVar11;
  int iVar12;
  int iStack_4c;
  int iStack_48;
  int local_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined1 local_20 [28];
  
  iVar12 = *(int *)(param_1 + 0x764);
  if (iVar12 != 0) {
    uVar2 = *(undefined4 *)(iVar12 + 0xfc);
    FUN_00a8bac0(&local_40,*(undefined4 *)(iVar12 + 0xfc));
    FUN_00a8bac0(local_20,-0.5 - *(float *)(*(int *)(param_1 + 0x764) + 0xfc));
    pcVar8 = *(code **)(*(int *)(param_1 + 0x50a0) + 8);
    *(undefined4 *)(param_1 + 0x41ec) = 0;
    (*pcVar8)();
    piVar11 = (int *)FUN_009f8b60();
    fStack_30 = *(float *)(param_1 + 0x40) + local_40;
    fStack_2c = *(float *)(param_1 + 0x44) + fStack_3c;
    pfVar1 = (float *)(param_1 + 0x41c0);
    fStack_28 = *(float *)(param_1 + 0x48) + fStack_38;
    fStack_24 = *(float *)(param_1 + 0x4c) + fStack_34;
    iVar12 = FUN_0090eea0(param_1 + 0x50a0,pfVar1,&fStack_30,uVar2,local_20,*piVar11 << 0x10,
                          "Pl0010::GroundTest");
    if (iVar12 == 0) {
      *(undefined4 *)(param_1 + 0x41e0) = 0;
      *(undefined4 *)(param_1 + 0x41e4) = 0;
      fVar5 = *(float *)(param_1 + 0x40) - *pfVar1;
      fVar7 = *(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x41c4);
      fVar6 = *(float *)(param_1 + 0x48) - *(float *)(param_1 + 0x41c8);
      *(float *)(param_1 + 0x41e8) = SQRT(fVar6 * fVar6 + fVar7 * fVar7 + fVar5 * fVar5);
      fStack_30 = *(float *)(param_1 + 0x40) - *pfVar1;
      fStack_2c = *(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x41c4);
      fStack_28 = *(float *)(param_1 + 0x48) - *(float *)(param_1 + 0x41c8);
      fStack_24 = *(float *)(param_1 + 0x4c) - *(float *)(param_1 + 0x41cc);
      if (((fStack_30 != 0.0) || (fStack_2c != 0.0)) ||
         (fVar5 = fStack_2c, fVar6 = fStack_28, fVar7 = fStack_30, fStack_28 != 0.0)) {
        fVar5 = fStack_28 * fStack_28 + fStack_30 * fStack_30 + fStack_2c * fStack_2c;
        if (fVar5 < 0.0 == (fVar5 == 0.0)) {
          FUN_00ddf460(&fStack_30,&fStack_30);
          fVar5 = fStack_2c;
          fVar6 = fStack_28;
          fVar7 = fStack_30;
        }
        else {
          FUN_00dd5650(&DAT_0163d0ac);
          fVar7 = 0.0;
          fVar5 = 1.0;
          fVar6 = 0.0;
        }
      }
      if (fVar6 * 0.0 + fVar7 * 0.0 + fVar5 < 0.0) {
        *(float *)(param_1 + 0x41e8) = *(float *)(param_1 + 0x41e8) * -1.0;
      }
    }
    else {
      FUN_0112bcf0();
      local_44 = 0;
      if (0 < *(int *)(param_1 + 0x50b4)) {
        iStack_4c = 0;
        do {
          iVar12 = *(int *)(iStack_4c + 0x28 + *(int *)(param_1 + 0x50b0));
          iVar12 = *(char *)(iVar12 + 0x10) + iVar12;
          if (iVar12 != 0) {
            uVar9 = *(uint *)(iVar12 + 0xc);
            if (uVar9 == 0) {
              iStack_48 = 0;
            }
            else {
              iStack_48 = *(int *)((-(uint)(uVar9 != 0) & uVar9) + 0x44);
              if (iStack_48 == -1) goto LAB_00b95869;
            }
            piVar11 = (int *)FUN_00c13920();
            (**(code **)(*piVar11 + 0x14))(iStack_48);
          }
LAB_00b95869:
          iStack_4c = iStack_4c + 0x30;
          local_44 = local_44 + 1;
        } while (local_44 < *(int *)(param_1 + 0x50b4));
      }
      iVar12 = *(int *)(param_1 + 0x50b0);
      uVar2 = *(undefined4 *)(iVar12 + 0x14);
      uVar3 = *(undefined4 *)(iVar12 + 0x18);
      uVar4 = *(undefined4 *)(iVar12 + 0x1c);
      *(undefined4 *)(param_1 + 0x41d0) = *(undefined4 *)(iVar12 + 0x10);
      *(undefined4 *)(param_1 + 0x41d4) = uVar2;
      *(undefined4 *)(param_1 + 0x41d8) = uVar3;
      *(undefined4 *)(param_1 + 0x41dc) = uVar4;
      pfVar10 = *(float **)(param_1 + 0x50b0);
      fVar5 = pfVar10[1];
      fVar6 = pfVar10[2];
      fVar7 = pfVar10[3];
      *pfVar1 = *pfVar10;
      *(float *)(param_1 + 0x41c4) = fVar5;
      *(float *)(param_1 + 0x41c8) = fVar6;
      *(float *)(param_1 + 0x41cc) = fVar7;
      *pfVar1 = *pfVar1 - local_40;
      *(float *)(param_1 + 0x41c4) = *(float *)(param_1 + 0x41c4) - fStack_3c;
      *(float *)(param_1 + 0x41c8) = *(float *)(param_1 + 0x41c8) - fStack_38;
      *(float *)(param_1 + 0x41cc) = *(float *)(param_1 + 0x41cc) - fStack_34;
      *(undefined4 *)(param_1 + 0x41e0) = 1;
      fVar5 = *(float *)(param_1 + 0x40) - *pfVar1;
      fVar7 = *(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x41c4);
      fVar6 = *(float *)(param_1 + 0x48) - *(float *)(param_1 + 0x41c8);
      *(float *)(param_1 + 0x41e4) = SQRT(fVar5 * fVar5 + fVar7 * fVar7 + fVar6 * fVar6);
    }
    *(undefined4 *)(param_1 + 0x600) = 0x3e19999a;
    iVar12 = FUN_00d467a0();
    if (iVar12 != 0) {
      Behavior::updateGroundSupportForParts
                (param_1 + 0x4160,param_1 + 0x5b0,param_1 + 0x594,param_1 + 0x5f0,0x19);
      Behavior::updateGroundSupportForParts
                (param_1 + 0x4164,param_1 + 0x5c0,param_1 + 0x598,param_1 + 0x5f4,0x14);
      return;
    }
    Behavior::updateGroundSupportForParts
              (param_1 + 0x4160,param_1 + 0x5b0,param_1 + 0x594,param_1 + 0x5f0,0x16);
    Behavior::updateGroundSupportForParts
              (param_1 + 0x4164,param_1 + 0x5c0,param_1 + 0x598,param_1 + 0x5f4,0x12);
  }
  return;
}


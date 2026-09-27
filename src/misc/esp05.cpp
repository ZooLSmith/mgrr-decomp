// src/misc/esp05.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ED2C90..00F2E570, 4 functions

#include "types.h"

// 00ED2C90  esp05::esp05  size=18  [class]
undefined4 * __fastcall esp05::esp05(undefined4 *param_1)

{
  FixedSplineLerp<Hw::cVec4>::FixedSplineLerp<Hw::cVec4>();
  *param_1 = vftable;
  return param_1;
}

// 00ED2CC0  esp05::vf00  size=30  [class]
undefined4 __thiscall esp05::vf00(undefined4 param_1,byte param_2)

{
  Spline<Hw::cVec4>::Spline<Hw::cVec4>();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00F13B20  esp05::vf08  size=2428  [class]
void __fastcall esp05::vf08(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  float *pfVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  float10 fVar13;
  undefined1 auStack_54 [4];
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_54;
  piVar3 = (int *)(param_1 + 0x3a0);
  FUN_00edfc20(piVar3);
  FUN_00f0b530(piVar3);
  if (*(int *)(param_1 + 0x50) == 0) {
    *piVar3 = 0;
  }
  else {
    *piVar3 = *(int *)(param_1 + 0x50) + 0x10;
  }
  FUN_00efb130(piVar3);
  FUN_00efbd40(piVar3);
  if (*(float *)(param_1 + 0x110) <= 0.01) {
    *(undefined4 *)(param_1 + 0x534) = 2;
  }
  if (*(int *)(param_1 + 0x534) < 1) {
    local_34 = *(float *)(param_1 + 0x530) * *(float *)(param_1 + 0x110);
    *(undefined4 *)(param_1 + 0x52c) = *(undefined4 *)(param_1 + 0x528);
    *(float *)(param_1 + 0x528) = *(float *)(param_1 + 0x528) + local_34;
    iVar12 = FUN_00ed7c20();
    if (iVar12 == 0) {
      iVar12 = FUN_00fdbc60();
      iVar11 = FUN_00fdbc60();
      if ((iVar11 != iVar12) && (iVar12 = *(int *)(param_1 + 0x450) + -1, iVar12 != 0)) {
        iVar11 = iVar12 * 0xc;
        do {
          puVar10 = (undefined4 *)(*(int *)(param_1 + 0x45c) + iVar11);
          *puVar10 = *(undefined4 *)(*(int *)(param_1 + 0x45c) + -0xc + iVar11);
          puVar10[1] = puVar10[-2];
          puVar10[2] = puVar10[-1];
          puVar10 = (undefined4 *)(*(int *)(param_1 + 0x460) + iVar11);
          *puVar10 = *(undefined4 *)(*(int *)(param_1 + 0x460) + -0xc + iVar11);
          iVar11 = iVar11 + -0xc;
          iVar12 = iVar12 + -1;
          puVar10[1] = puVar10[-2];
          puVar10[2] = puVar10[-1];
        } while (iVar12 != 0);
      }
      pfVar8 = *(float **)(param_1 + 0x3b0);
      if (pfVar8 != (float *)0x0) {
        local_50 = *pfVar8;
        uVar4 = *(uint *)(param_1 + 0x450);
        iVar12 = uVar4 - 1;
        local_4c = pfVar8[1];
        local_48 = pfVar8[2];
        if (-1 < iVar12) {
          if (3 < (int)uVar4) {
            local_34 = (float)(uVar4 >> 2);
            iVar11 = iVar12 * 0xc;
            iVar12 = iVar12 + (int)local_34 * -4;
            do {
              pfVar8 = (float *)(*(int *)(param_1 + 0x45c) + iVar11);
              *pfVar8 = local_50 + *(float *)(*(int *)(param_1 + 0x45c) + iVar11);
              pfVar8[1] = local_4c + pfVar8[1];
              pfVar8[2] = local_48 + pfVar8[2];
              pfVar8 = (float *)(*(int *)(param_1 + 0x460) + iVar11);
              *pfVar8 = local_50 + *pfVar8;
              pfVar8[1] = local_4c + pfVar8[1];
              pfVar8[2] = local_48 + pfVar8[2];
              pfVar8 = (float *)(iVar11 + -0xc + *(int *)(param_1 + 0x45c));
              *pfVar8 = local_50 + *pfVar8;
              pfVar8[1] = local_4c + pfVar8[1];
              pfVar8[2] = local_48 + pfVar8[2];
              pfVar8 = (float *)(iVar11 + -0xc + *(int *)(param_1 + 0x460));
              *pfVar8 = local_50 + *pfVar8;
              pfVar8[1] = local_4c + pfVar8[1];
              pfVar8[2] = local_48 + pfVar8[2];
              pfVar8 = (float *)(*(int *)(param_1 + 0x45c) + iVar11 + -0x18);
              *pfVar8 = local_50 + *pfVar8;
              pfVar8[1] = local_4c + pfVar8[1];
              pfVar8[2] = local_48 + pfVar8[2];
              pfVar8 = (float *)(*(int *)(param_1 + 0x460) + iVar11 + -0x18);
              *pfVar8 = local_50 + *pfVar8;
              pfVar8[1] = local_4c + pfVar8[1];
              pfVar8[2] = local_48 + pfVar8[2];
              pfVar8 = (float *)(*(int *)(param_1 + 0x45c) + iVar11 + -0x24);
              *pfVar8 = local_50 + *pfVar8;
              pfVar8[1] = local_4c + pfVar8[1];
              pfVar8[2] = local_48 + pfVar8[2];
              pfVar8 = (float *)(*(int *)(param_1 + 0x460) + iVar11 + -0x24);
              iVar11 = iVar11 + -0x30;
              local_34 = (float)((int)local_34 + -1);
              *pfVar8 = local_50 + *pfVar8;
              pfVar8[1] = local_4c + pfVar8[1];
              pfVar8[2] = local_48 + pfVar8[2];
            } while (local_34 != 0.0);
          }
          if (-1 < iVar12) {
            iVar11 = iVar12 * 0xc;
            do {
              pfVar8 = (float *)(*(int *)(param_1 + 0x45c) + iVar11);
              *pfVar8 = local_50 + *(float *)(*(int *)(param_1 + 0x45c) + iVar11);
              pfVar8[1] = local_4c + pfVar8[1];
              pfVar8[2] = local_48 + pfVar8[2];
              pfVar8 = (float *)(*(int *)(param_1 + 0x460) + iVar11);
              iVar11 = iVar11 + -0xc;
              iVar12 = iVar12 + -1;
              *pfVar8 = local_50 + *pfVar8;
              pfVar8[1] = local_4c + pfVar8[1];
              pfVar8[2] = local_48 + pfVar8[2];
            } while (-1 < iVar12);
          }
        }
      }
    }
    else {
      pfVar8 = *(float **)(param_1 + 0x3b0);
      if (pfVar8 != (float *)0x0) {
        local_50 = *pfVar8;
        uVar4 = *(uint *)(param_1 + 0x450);
        iVar12 = uVar4 - 1;
        local_4c = pfVar8[1];
        local_48 = pfVar8[2];
        if (-1 < iVar12) {
          if (3 < (int)uVar4) {
            local_34 = (float)(uVar4 >> 2);
            iVar11 = iVar12 * 0xc;
            iVar12 = iVar12 + (int)local_34 * -4;
            do {
              pfVar8 = (float *)(*(int *)(param_1 + 0x45c) + iVar11);
              *pfVar8 = *(float *)(*(int *)(param_1 + 0x45c) + iVar11) + local_50;
              pfVar8[1] = pfVar8[1] + local_4c;
              pfVar8[2] = local_48 + pfVar8[2];
              pfVar8 = (float *)(*(int *)(param_1 + 0x460) + iVar11);
              *pfVar8 = local_50 + *pfVar8;
              pfVar8[1] = pfVar8[1] + local_4c;
              pfVar8[2] = local_48 + pfVar8[2];
              pfVar8 = (float *)(*(int *)(param_1 + 0x45c) + -0xc + iVar11);
              *pfVar8 = *(float *)(*(int *)(param_1 + 0x45c) + -0xc + iVar11) + local_50;
              pfVar8[1] = pfVar8[1] + local_4c;
              pfVar8[2] = local_48 + pfVar8[2];
              pfVar8 = (float *)(iVar11 + -0xc + *(int *)(param_1 + 0x460));
              iVar1 = iVar11 + -0x24;
              iVar2 = iVar11 + -0x18;
              *pfVar8 = local_50 + *pfVar8;
              pfVar8[1] = pfVar8[1] + local_4c;
              pfVar8[2] = local_48 + pfVar8[2];
              pfVar8 = (float *)(*(int *)(param_1 + 0x45c) + iVar2);
              *pfVar8 = *(float *)(*(int *)(param_1 + 0x45c) + iVar2) + local_50;
              pfVar8[1] = pfVar8[1] + local_4c;
              pfVar8[2] = local_48 + pfVar8[2];
              pfVar8 = (float *)(*(int *)(param_1 + 0x460) + iVar2);
              *pfVar8 = local_50 + *pfVar8;
              pfVar8[1] = pfVar8[1] + local_4c;
              pfVar8[2] = local_48 + pfVar8[2];
              pfVar8 = (float *)(*(int *)(param_1 + 0x45c) + iVar1);
              *pfVar8 = *(float *)(*(int *)(param_1 + 0x45c) + iVar1) + local_50;
              pfVar8[1] = pfVar8[1] + local_4c;
              pfVar8[2] = local_48 + pfVar8[2];
              pfVar8 = (float *)(*(int *)(param_1 + 0x460) + iVar1);
              iVar11 = iVar11 + -0x30;
              local_34 = (float)((int)local_34 + -1);
              *pfVar8 = local_50 + *pfVar8;
              pfVar8[1] = pfVar8[1] + local_4c;
              pfVar8[2] = local_48 + pfVar8[2];
            } while (local_34 != 0.0);
          }
          if (-1 < iVar12) {
            iVar11 = iVar12 * 0xc;
            do {
              pfVar8 = (float *)(*(int *)(param_1 + 0x45c) + iVar11);
              *pfVar8 = *(float *)(*(int *)(param_1 + 0x45c) + iVar11) + local_50;
              pfVar8[1] = pfVar8[1] + local_4c;
              pfVar8[2] = local_48 + pfVar8[2];
              pfVar8 = (float *)(*(int *)(param_1 + 0x460) + iVar11);
              iVar11 = iVar11 + -0xc;
              iVar12 = iVar12 + -1;
              *pfVar8 = local_50 + *pfVar8;
              pfVar8[1] = pfVar8[1] + local_4c;
              pfVar8[2] = local_48 + pfVar8[2];
            } while (-1 < iVar12);
          }
        }
      }
      *(undefined1 *)(param_1 + 0x5c6) = 1;
      *(undefined4 *)(param_1 + 0x530) = 0x3f800000;
    }
  }
  else {
    *(int *)(param_1 + 0x534) = *(int *)(param_1 + 0x534) + -1;
    pfVar8 = *(float **)(param_1 + 0x3b0);
    if (pfVar8 != (float *)0x0) {
      local_50 = *pfVar8;
      uVar4 = *(uint *)(param_1 + 0x450);
      iVar12 = uVar4 - 1;
      local_4c = pfVar8[1];
      local_48 = pfVar8[2];
      if (-1 < iVar12) {
        if (3 < (int)uVar4) {
          local_34 = (float)(uVar4 >> 2);
          iVar11 = iVar12 * 0xc;
          iVar12 = iVar12 + (int)local_34 * -4;
          do {
            pfVar8 = (float *)(*(int *)(param_1 + 0x45c) + iVar11);
            *pfVar8 = *(float *)(*(int *)(param_1 + 0x45c) + iVar11) + local_50;
            pfVar8[1] = local_4c + pfVar8[1];
            pfVar8[2] = local_48 + pfVar8[2];
            pfVar8 = (float *)(*(int *)(param_1 + 0x460) + iVar11);
            *pfVar8 = *(float *)(*(int *)(param_1 + 0x460) + iVar11) + local_50;
            pfVar8[1] = local_4c + pfVar8[1];
            pfVar8[2] = local_48 + pfVar8[2];
            pfVar8 = (float *)(*(int *)(param_1 + 0x45c) + -0xc + iVar11);
            *pfVar8 = *(float *)(*(int *)(param_1 + 0x45c) + -0xc + iVar11) + local_50;
            pfVar8[1] = local_4c + pfVar8[1];
            pfVar8[2] = local_48 + pfVar8[2];
            pfVar8 = (float *)(iVar11 + -0xc + *(int *)(param_1 + 0x460));
            iVar1 = iVar11 + -0x24;
            iVar2 = iVar11 + -0x18;
            *pfVar8 = *(float *)(iVar11 + -0xc + *(int *)(param_1 + 0x460)) + local_50;
            pfVar8[1] = local_4c + pfVar8[1];
            pfVar8[2] = local_48 + pfVar8[2];
            pfVar8 = (float *)(*(int *)(param_1 + 0x45c) + iVar2);
            *pfVar8 = *(float *)(*(int *)(param_1 + 0x45c) + iVar2) + local_50;
            pfVar8[1] = local_4c + pfVar8[1];
            pfVar8[2] = local_48 + pfVar8[2];
            pfVar8 = (float *)(*(int *)(param_1 + 0x460) + iVar2);
            *pfVar8 = *(float *)(*(int *)(param_1 + 0x460) + iVar2) + local_50;
            pfVar8[1] = local_4c + pfVar8[1];
            pfVar8[2] = local_48 + pfVar8[2];
            pfVar8 = (float *)(*(int *)(param_1 + 0x45c) + iVar1);
            *pfVar8 = *(float *)(*(int *)(param_1 + 0x45c) + iVar1) + local_50;
            pfVar8[1] = local_4c + pfVar8[1];
            pfVar8[2] = local_48 + pfVar8[2];
            pfVar8 = (float *)(*(int *)(param_1 + 0x460) + iVar1);
            iVar11 = iVar11 + -0x30;
            local_34 = (float)((int)local_34 + -1);
            *pfVar8 = *pfVar8 + local_50;
            pfVar8[1] = local_4c + pfVar8[1];
            pfVar8[2] = local_48 + pfVar8[2];
          } while (local_34 != 0.0);
        }
        if (-1 < iVar12) {
          iVar11 = iVar12 * 0xc;
          do {
            pfVar8 = (float *)(*(int *)(param_1 + 0x45c) + iVar11);
            *pfVar8 = *(float *)(*(int *)(param_1 + 0x45c) + iVar11) + local_50;
            pfVar8[1] = local_4c + pfVar8[1];
            pfVar8[2] = local_48 + pfVar8[2];
            pfVar8 = (float *)(*(int *)(param_1 + 0x460) + iVar11);
            pfVar9 = (float *)(*(int *)(param_1 + 0x460) + iVar11);
            iVar11 = iVar11 + -0xc;
            iVar12 = iVar12 + -1;
            *pfVar9 = *pfVar8 + local_50;
            pfVar9[1] = local_4c + pfVar9[1];
            pfVar9[2] = local_48 + pfVar9[2];
          } while (-1 < iVar12);
        }
      }
    }
  }
  if (*(char *)(param_1 + 0x5c6) == '\0') {
    iVar12 = *(int *)(param_1 + 0x50);
    pfVar9 = *(float **)(param_1 + 0x45c);
    pfVar8 = (float *)(param_1 + 0x180);
    if (iVar12 == 0) {
      local_50 = *pfVar8 + *(float *)(param_1 + 0x170);
      local_4c = *(float *)(param_1 + 0x174) + *(float *)(param_1 + 0x184);
      local_48 = *(float *)(param_1 + 0x178) + *(float *)(param_1 + 0x188);
    }
    else {
      FUN_00f00870(&local_50,pfVar8,iVar12,iVar12 + 0x10,*(undefined4 *)(param_1 + 0x84),1);
    }
    *pfVar9 = local_50;
    pfVar9[1] = local_4c;
    pfVar9[2] = local_48;
    if (*(int *)(param_1 + 0x5c8) == 1) {
      iVar12 = *(int *)(param_1 + 0x5c0);
      pfVar9 = *(float **)(param_1 + 0x460);
      local_50 = (*pfVar8 + *(float *)(param_1 + 0x590) + *(float *)(param_1 + 0x170)) -
                 *(float *)(param_1 + 0x5a0);
      local_4c = (*(float *)(param_1 + 0x184) +
                 *(float *)(param_1 + 0x174) + *(float *)(param_1 + 0x594)) -
                 *(float *)(param_1 + 0x5a4);
      local_48 = (*(float *)(param_1 + 0x188) +
                 *(float *)(param_1 + 0x178) + *(float *)(param_1 + 0x598)) -
                 *(float *)(param_1 + 0x5a8);
      local_44 = (*(float *)(param_1 + 0x18c) +
                 *(float *)(param_1 + 0x17c) + *(float *)(param_1 + 0x59c)) -
                 *(float *)(param_1 + 0x5ac);
      fVar5 = local_50;
      fVar6 = local_4c;
      fVar7 = local_48;
      if (iVar12 != 0) {
        FUN_00f00870(&local_30,&local_50,iVar12,iVar12 + 0x10,*(undefined4 *)(param_1 + 0x84),0);
        fVar5 = local_30;
        fVar6 = local_2c;
        fVar7 = local_28;
      }
      local_28 = fVar7;
      local_2c = fVar6;
      local_30 = fVar5;
      *pfVar9 = local_30;
      pfVar9[1] = local_2c;
    }
    else {
      iVar12 = *(int *)(param_1 + 0x5c0);
      pfVar9 = *(float **)(param_1 + 0x460);
      if (iVar12 == 0) {
        local_50 = *(float *)(param_1 + 0x590) + *(float *)(param_1 + 0x170);
        local_4c = *(float *)(param_1 + 0x594) + *(float *)(param_1 + 0x174);
        local_48 = *(float *)(param_1 + 0x598) + *(float *)(param_1 + 0x178);
      }
      else {
        FUN_00f00870(&local_50,(float *)(param_1 + 0x590),iVar12,iVar12 + 0x10,
                     *(undefined4 *)(param_1 + 0x84),1);
      }
      *pfVar9 = local_50;
      pfVar9[1] = local_4c;
      local_28 = local_48;
    }
    pfVar9[2] = local_28;
  }
  pfVar8 = *(float **)(param_1 + 0x45c);
  iVar12 = *(int *)(param_1 + 0x450);
  local_30 = pfVar8[iVar12 * 3 + -3] + *pfVar8;
  local_2c = pfVar8[iVar12 * 3 + -2] + pfVar8[1];
  local_28 = pfVar8[iVar12 * 3 + -1] + pfVar8[2];
  *(float *)(param_1 + 0x130) = local_30 * 0.5;
  *(float *)(param_1 + 0x134) = local_2c * 0.5;
  *(float *)(param_1 + 0x138) = local_28 * 0.5;
  *(undefined4 *)(param_1 + 0x13c) = 0x3f800000;
  pfVar8 = *(float **)(param_1 + 0x45c);
  iVar12 = *(int *)(param_1 + 0x450);
  local_50 = *pfVar8 - pfVar8[iVar12 * 3 + -3];
  local_4c = pfVar8[1] - pfVar8[iVar12 * 3 + -2];
  local_48 = pfVar8[2] - pfVar8[iVar12 * 3 + -1];
  local_34 = local_48 * local_48 + local_50 * local_50 + local_4c * local_4c;
  fVar13 = (float10)FUN_00fdef70();
  local_34 = (float)fVar13;
  *(float *)(param_1 + 300) = local_34;
  FUN_00ed7ce0();
  __security_check_cookie(local_14 ^ (uint)auStack_54);
  return;
}

// 00F2E570  esp05::vf04  size=945  [class]
undefined4 __thiscall
esp05::vf04(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar2 = cEspStrip2p::vf04(param_2,param_3,param_4);
  if (iVar2 == 0) {
    return 0;
  }
  if (*(uint **)(param_1 + 0x58) != (uint *)0x0) {
    uVar6 = **(uint **)(param_1 + 0x58);
    if ((uVar6 + 0xf & 0xfffffff0) != uVar6) {
      uVar3 = FUN_00f59ed0(0);
      FUN_00dd5650(&DAT_016597b4,uVar3);
    }
    if (uVar6 != 0) {
      if (*(short *)(uVar6 + 0x10) != -1) {
        FUN_009cca90(param_1,&DAT_016dad90);
        return 0;
      }
      iVar2 = FUN_009d4a80();
      if (iVar2 != 0) {
        *(undefined2 *)(param_1 + 0x5c4) = *(undefined2 *)(iVar2 + 6);
        uVar6 = (uint)*(char *)(iVar2 + 0x10);
        *(uint *)(param_1 + 0x5c8) = uVar6;
        if (uVar6 == 1) {
          *(undefined4 *)(param_1 + 0x5a0) = *(undefined4 *)(param_1 + 0x180);
          *(undefined4 *)(param_1 + 0x5a4) = *(undefined4 *)(param_1 + 0x184);
          *(undefined4 *)(param_1 + 0x5a8) = *(undefined4 *)(param_1 + 0x188);
          *(undefined4 *)(param_1 + 0x5ac) = *(undefined4 *)(param_1 + 0x18c);
        }
        else if (1 < uVar6) {
          FUN_009cca90(param_1,&DAT_016dad7c,uVar6);
          return 0;
        }
        *(int *)(param_1 + 0x58c) = (int)*(short *)(iVar2 + 8);
        *(int *)(param_1 + 0x588) = (int)*(char *)(iVar2 + 0x11);
        *(undefined1 *)(param_1 + 0x5c7) = *(undefined1 *)(iVar2 + 0x15);
      }
      puVar4 = (undefined4 *)FUN_009d4ac0();
      puVar1 = (undefined4 *)(param_1 + 0x590);
      if (puVar4 == (undefined4 *)0x0) {
        *puVar1 = 0;
        *(undefined4 *)(param_1 + 0x594) = 0;
        *(undefined4 *)(param_1 + 0x598) = 0;
      }
      else {
        *puVar1 = *puVar4;
        *(undefined4 *)(param_1 + 0x594) = puVar4[1];
        *(undefined4 *)(param_1 + 0x598) = puVar4[2];
        local_14 = 0x3f800000;
      }
      *(undefined4 *)(param_1 + 0x59c) = local_14;
      iVar2 = FUN_00a7c990(&DAT_01ee11f4);
      if ((((iVar2 == 0) && (iVar2 = FUN_00a81330(), iVar2 != 0)) &&
          (iVar2 = FUN_00a7c800(), iVar2 != 0)) && (-2 < *(short *)(param_1 + 0x5c4))) {
        iVar2 = (int)*(short *)(param_1 + 0x5c4);
        iVar5 = FUN_00a7c990(&DAT_01ee11f4);
        if (((iVar5 == 0) && (iVar5 = FUN_00a81330(), iVar5 != 0)) &&
           ((iVar5 = FUN_00a7c800(), iVar5 != 0 && (iVar2 != -1)))) {
          if (*(int *)(iVar5 + 0x330) == 0) {
            iVar5 = 0xfff;
          }
          else {
            iVar5 = FUN_00a06de0(iVar2);
          }
          if (iVar5 == 0xfff) {
            FUN_009cca90(param_1,&DAT_016dadd4,(int)*(short *)(param_1 + 0x5c4));
            return 0;
          }
        }
        iVar5 = FUN_00a7c990(&DAT_01ee11f4);
        if (((iVar5 == 0) && (iVar5 = FUN_00a81330(), iVar5 != 0)) &&
           (iVar5 = FUN_00a7c800(), iVar5 != 0)) {
          uVar3 = FUN_00a12290(iVar2);
        }
        else {
          uVar3 = 0;
        }
        *(undefined4 *)(param_1 + 0x5c0) = uVar3;
        FUN_00efcb90();
        *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_1 + 400);
        *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_1 + 0x194);
        *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_1 + 0x198);
        *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_1 + 0x19c);
        FUN_00f0dcb0(&local_30,param_1 + 0x180,*(undefined4 *)(param_1 + 0x50),1);
        FUN_00f0dcb0(&local_20,puVar1,*(undefined4 *)(param_1 + 0x5c0),1);
        uVar6 = 0;
        if (*(int *)(param_1 + 0x450) != 0) {
          iVar2 = 0;
          do {
            iVar5 = *(int *)(param_1 + 0x45c);
            *(undefined4 *)(iVar5 + iVar2) = local_30;
            uVar6 = uVar6 + 1;
            iVar2 = iVar2 + 0xc;
            *(undefined4 *)(iVar5 + -8 + iVar2) = local_2c;
            *(undefined4 *)(iVar5 + -4 + iVar2) = local_28;
            iVar5 = *(int *)(param_1 + 0x460);
            *(undefined4 *)(iVar5 + -0xc + iVar2) = local_20;
            *(undefined4 *)(iVar5 + -8 + iVar2) = local_1c;
            *(undefined4 *)(iVar5 + -4 + iVar2) = local_18;
          } while (uVar6 < *(uint *)(param_1 + 0x450));
        }
        if (*(char *)(param_1 + 0x5c7) == '\x01') {
          *(undefined4 *)(param_1 + 0x5b0) = local_30;
          *(undefined4 *)(param_1 + 0x5b4) = local_2c;
          *(undefined4 *)(param_1 + 0x5b8) = local_28;
          *(undefined4 *)(param_1 + 0x5bc) = local_24;
        }
        if ((*(int *)(param_1 + 0x588) != 0) && ((*(uint *)(param_1 + 0x38) & 0x8000000) != 0)) {
          FUN_00ed5150();
        }
        return 1;
      }
      FUN_009cca90(param_1,&DAT_016dae04);
      return 0;
    }
  }
  FUN_009cca90(param_1,&DAT_016dad5c);
  return 0;
}


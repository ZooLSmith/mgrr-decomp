// src/misc/esp29.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ED0580..00F35560, 5 functions

#include "mgrr.h"
#include "esp29.h"

// 00ED0580  esp29::esp29  size=18  [class]
undefined4 * __fastcall esp29::esp29(undefined4 *param_1)

{
  cEsp::cEsp();
  *param_1 = vftable;
  return param_1;
}

// 00ED09A0  esp29::vf00  size=30  [class]
undefined4 __thiscall esp29::vf00(undefined4 param_1,byte param_2)

{
  cEspBase::cEspBase();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00EF2FB0  esp29::vf14  size=45  [class]
void __fastcall esp29::vf14(int param_1)

{
  if ((*(int *)(param_1 + 0x458) != 0) && (*(int *)(param_1 + 0x458) != 0)) {
    FUN_00dd48d0(*(int *)(param_1 + 0x458),0);
    *(undefined4 *)(param_1 + 0x458) = 0;
  }
  return;
}

// 00F19B60  esp29::vf08  size=1181  [class]
void __fastcall esp29::vf08(int param_1)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  float *pfVar9;
  undefined2 in_FPUControlWord;
  float10 fVar10;
  undefined1 auStack_44 [4];
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  undefined8 local_28;
  float local_20;
  int local_18;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_44;
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
  if (*(uint *)(param_1 + 0x45c) != 0) {
    local_18 = CONCAT22(local_18._2_2_,in_FPUControlWord);
    local_28 = (longlong)ROUND(*(float *)(param_1 + 0x460));
    if (*(uint *)(param_1 + 0x45c) <= (uint)(float)local_28) goto LAB_00f19fe4;
  }
  sVar4 = *(short *)(param_1 + 0x4e);
  iVar8 = 0;
  local_28 = CONCAT44(local_28._4_4_,(int)sVar4);
  if (*(int *)(param_1 + 0x4a4) == 0) {
    if (*(int *)(param_1 + 0x4a0) != -1 && -1 < *(int *)(param_1 + 0x4a0) + 1) {
      local_18 = 0;
      do {
        iVar6 = FUN_00a7c990(&DAT_01ee11f4);
        if (iVar6 == 0) {
          iVar6 = FUN_00a81330();
          if (iVar6 == 0) goto LAB_00f19c42;
          iVar6 = FUN_00a7c800();
          if (iVar6 == 0) goto LAB_00f19c42;
          iVar6 = FUN_00a12290(iVar8 + (int)(float)local_28);
        }
        else {
LAB_00f19c42:
          iVar6 = 0;
        }
        pfVar9 = (float *)(*(int *)(param_1 + 0x458) + local_18);
        if (iVar6 == 0) {
          local_40 = *(float *)(param_1 + 0x180) + *(float *)(param_1 + 0x170);
          local_3c = *(float *)(param_1 + 0x174) + *(float *)(param_1 + 0x184);
          local_38 = *(float *)(param_1 + 0x178) + *(float *)(param_1 + 0x188);
          local_34 = *(float *)(param_1 + 0x17c) + *(float *)(param_1 + 0x18c);
        }
        else {
          FUN_00effcf0(&local_40,param_1 + 0x180,iVar6,iVar6 + 0x10,*(undefined4 *)(param_1 + 0x84),
                       1);
        }
        local_18 = local_18 + 0xc;
        *pfVar9 = local_40;
        iVar8 = iVar8 + 1;
        pfVar9[1] = local_3c;
        pfVar9[2] = local_38;
      } while (iVar8 < *(int *)(param_1 + 0x4a0) + 1);
    }
    if (iVar8 < *(int *)(param_1 + 0x450)) {
      iVar6 = iVar8 * 0xc;
      do {
        iVar5 = *(int *)(param_1 + 0x458);
        iVar2 = iVar5 + *(int *)(param_1 + 0x4a0) * 0xc;
        *(undefined4 *)(iVar6 + iVar5) = *(undefined4 *)(iVar5 + *(int *)(param_1 + 0x4a0) * 0xc);
        iVar8 = iVar8 + 1;
        *(undefined4 *)(iVar6 + 4 + iVar5) = *(undefined4 *)(iVar2 + 4);
        *(undefined4 *)(iVar6 + 8 + iVar5) = *(undefined4 *)(iVar2 + 8);
        iVar6 = iVar6 + 0xc;
      } while (iVar8 < *(int *)(param_1 + 0x450));
    }
    pfVar9 = *(float **)(param_1 + 0x458);
    iVar8 = *(int *)(param_1 + 0x4a0);
    local_28._4_4_ = pfVar9[iVar8 * 3 + 1] + pfVar9[1];
    local_20 = pfVar9[iVar8 * 3 + 2] + pfVar9[2];
    *(float *)(param_1 + 0x130) = (pfVar9[iVar8 * 3] + *pfVar9) * 0.5;
    *(float *)(param_1 + 0x134) = local_28._4_4_ * 0.5;
    *(float *)(param_1 + 0x138) = local_20 * 0.5;
    *(undefined4 *)(param_1 + 0x13c) = 0x3f800000;
    pfVar9 = *(float **)(param_1 + 0x458);
    iVar8 = *(int *)(param_1 + 0x4a0);
    local_40 = *pfVar9 - pfVar9[iVar8 * 3];
    local_3c = pfVar9[1] - pfVar9[iVar8 * 3 + 1];
    local_38 = pfVar9[2] - pfVar9[iVar8 * 3 + 2];
    local_28._0_4_ = local_38 * local_38 + local_3c * local_3c + local_40 * local_40;
    fVar10 = (float10)FUN_00fdef70();
    fVar3 = (float)fVar10;
    local_28 = CONCAT44(local_28._4_4_,fVar3);
  }
  else {
    iVar8 = FUN_00a7c990(&DAT_01ee11f4);
    if (iVar8 == 0) {
      iVar8 = FUN_00a81330();
      if (iVar8 == 0) goto LAB_00f19e3e;
      iVar8 = FUN_00a7c800();
      if (iVar8 == 0) goto LAB_00f19e3e;
      uVar7 = FUN_00a12290((int)sVar4);
    }
    else {
LAB_00f19e3e:
      uVar7 = 0;
    }
    pfVar9 = *(float **)(param_1 + 0x458);
    FUN_00f0db60(&local_40,param_1 + 0x180,uVar7,1);
    *pfVar9 = local_40;
    pfVar9[1] = local_3c;
    pfVar9[2] = local_38;
    local_28 = CONCAT44(local_28._4_4_,*(undefined4 *)(param_1 + 0x4a4));
    iVar8 = FUN_00a7c990(&DAT_01ee11f4);
    if (iVar8 == 0) {
      iVar8 = FUN_00a81330();
      if (iVar8 == 0) goto LAB_00f19eb2;
      iVar8 = FUN_00a7c800();
      if (iVar8 == 0) goto LAB_00f19eb2;
      uVar7 = FUN_00a12290((float)local_28);
    }
    else {
LAB_00f19eb2:
      uVar7 = 0;
    }
    iVar8 = *(int *)(param_1 + 0x458);
    FUN_00f0db60(&local_40,param_1 + 0x180,uVar7,1);
    *(float *)(iVar8 + 0xc) = local_40;
    *(float *)(iVar8 + 0x10) = local_3c;
    *(float *)(iVar8 + 0x14) = local_38;
    iVar8 = *(int *)(param_1 + 0x458);
    *(undefined4 *)(iVar8 + 0x18) = *(undefined4 *)(iVar8 + 0xc);
    *(undefined4 *)(iVar8 + 0x1c) = *(undefined4 *)(iVar8 + 0x10);
    *(undefined4 *)(iVar8 + 0x20) = *(undefined4 *)(iVar8 + 0x14);
    iVar8 = *(int *)(param_1 + 0x458);
    *(undefined4 *)(iVar8 + 0x24) = *(undefined4 *)(iVar8 + 0xc);
    *(undefined4 *)(iVar8 + 0x28) = *(undefined4 *)(iVar8 + 0x10);
    *(undefined4 *)(iVar8 + 0x2c) = *(undefined4 *)(iVar8 + 0x14);
    pfVar9 = *(float **)(param_1 + 0x458);
    local_28._4_4_ = (pfVar9[4] + pfVar9[1]) * 0.5;
    local_20 = (pfVar9[5] + pfVar9[2]) * 0.5;
    *(float *)(param_1 + 0x130) = (pfVar9[3] + *pfVar9) * 0.5;
    *(float *)(param_1 + 0x134) = local_28._4_4_;
    *(float *)(param_1 + 0x138) = local_20;
    *(undefined4 *)(param_1 + 0x13c) = 0x3f800000;
    pfVar9 = *(float **)(param_1 + 0x458);
    local_40 = *pfVar9 - pfVar9[3];
    local_3c = pfVar9[1] - pfVar9[4];
    local_38 = pfVar9[2] - pfVar9[5];
    local_28._0_4_ = local_38 * local_38 + local_3c * local_3c + local_40 * local_40;
    fVar10 = (float10)FUN_00fdef70();
    fVar3 = (float)fVar10;
    local_28 = CONCAT44(local_28._4_4_,fVar3);
  }
  *(float *)(param_1 + 300) = fVar3;
LAB_00f19fe4:
  FUN_00ed6110();
  __security_check_cookie(local_14 ^ (uint)auStack_44);
  return;
}

// 00F35560  esp29::preTrans  size=806  [class]
undefined4 __thiscall
esp29::preTrans(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = cEsp::preTrans(param_2,param_3,param_4);
  if (iVar3 != 0) {
    if (*(int *)(param_1 + 0x50) == 0) {
      FUN_009cca90(param_1,&DAT_016dc384);
    }
    else {
      if (*(short *)(param_1 + 0x400) != -1) {
        FUN_009cca90(param_1,&DAT_016dc460);
        return 0;
      }
      psVar4 = (short *)FUN_009d4a80();
      if (psVar4 != (short *)0x0) {
        sVar1 = psVar4[7];
        if (((sVar1 != 0) || ((char)psVar4[8] != '\0')) && (*psVar4 != 0)) {
          FUN_009cca90(param_1,&DAT_016dc488);
          return 0;
        }
        if (sVar1 == 0) {
          *(int *)(param_1 + 0x4a4) = (int)(char)psVar4[8];
        }
        else {
          *(int *)(param_1 + 0x4a4) = (int)sVar1;
        }
        if (*psVar4 < 0) {
          FUN_009cca90(param_1,&DAT_016dc4bc);
          return 0;
        }
      }
      iVar3 = FUN_00f12b50();
      if (iVar3 != 0) {
        if (*(int *)(param_1 + 0x4a4) == 0) {
          sVar1 = *(short *)(param_1 + 0x4e);
          *(int *)(param_1 + 0x4a0) = *(int *)(param_1 + 0x450) + -4;
          iVar3 = FUN_00a7c990(&DAT_01ee11f4);
          if (((iVar3 == 0) && (iVar3 = FUN_00a81330(), iVar3 != 0)) &&
             (iVar3 = FUN_00a7c800(), iVar3 != 0)) {
            iVar3 = FUN_00a12290((int)sVar1);
          }
          else {
            iVar3 = 0;
          }
          sVar1 = *(short *)(param_1 + 0x4e);
          iVar6 = *(int *)(param_1 + 0x4a0);
          iVar5 = FUN_00a7c990(&DAT_01ee11f4);
          if (((iVar5 == 0) && (iVar5 = FUN_00a81330(), iVar5 != 0)) &&
             (iVar5 = FUN_00a7c800(), iVar5 != 0)) {
            iVar6 = FUN_00a12290(sVar1 + iVar6);
          }
          else {
            iVar6 = 0;
          }
          if (iVar3 == 0) {
            iVar3 = (int)*(short *)(param_1 + 0x4e);
            if (iVar6 == 0) {
              FUN_009cca90(param_1,&DAT_016dc53c,iVar3,*(int *)(param_1 + 0x4a0) + iVar3);
              return 0;
            }
            FUN_009cca90(param_1,&DAT_016dc4e4,iVar3,*(int *)(param_1 + 0x4a0) + iVar3,iVar3);
            return 0;
          }
          if (iVar6 == 0) {
            iVar3 = *(int *)(param_1 + 0x4a0) + (int)*(short *)(param_1 + 0x4e);
            FUN_009cca90(param_1,&DAT_016dc510,(int)*(short *)(param_1 + 0x4e),iVar3,iVar3);
            return 0;
          }
          iVar3 = 0;
          if (*(int *)(param_1 + 0x4a0) != -1 && -1 < *(int *)(param_1 + 0x4a0) + 1) {
            while( true ) {
              sVar1 = *(short *)(param_1 + 0x4e);
              iVar6 = FUN_00a7c990(&DAT_01ee11f4);
              if (((iVar6 != 0) || (iVar6 = FUN_00a81330(), iVar6 == 0)) ||
                 ((iVar6 = FUN_00a7c800(), iVar6 == 0 ||
                  (iVar6 = FUN_00a12290(sVar1 + iVar3), iVar6 == 0)))) break;
              iVar3 = iVar3 + 1;
              if (*(int *)(param_1 + 0x4a0) + 1 <= iVar3) {
                *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x800000;
                return 1;
              }
            }
            FUN_009cca90(param_1,&DAT_016dc568,(int)*(short *)(param_1 + 0x4e),
                         *(int *)(param_1 + 0x4a0) + (int)*(short *)(param_1 + 0x4e),iVar3);
            return 0;
          }
        }
        else {
          sVar1 = *(short *)(param_1 + 0x4e);
          iVar3 = FUN_00a7c990(&DAT_01ee11f4);
          if (((iVar3 != 0) || (iVar3 = FUN_00a81330(), iVar3 == 0)) ||
             ((iVar3 = FUN_00a7c800(), iVar3 == 0 || (iVar3 = FUN_00a12290((int)sVar1), iVar3 == 0))
             )) {
            FUN_009cca90(param_1,&DAT_016dc594,(int)*(short *)(param_1 + 0x4e));
          }
          uVar2 = *(undefined4 *)(param_1 + 0x4a4);
          iVar3 = FUN_00a7c990(&DAT_01ee11f4);
          if (((iVar3 != 0) || (iVar3 = FUN_00a81330(), iVar3 == 0)) ||
             ((iVar3 = FUN_00a7c800(), iVar3 == 0 || (iVar3 = FUN_00a12290(uVar2), iVar3 == 0)))) {
            FUN_009cca90(param_1,&DAT_016dc5bc,(int)*(short *)(param_1 + 0x4e));
          }
        }
        *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x800000;
        return 1;
      }
    }
  }
  return 0;
}


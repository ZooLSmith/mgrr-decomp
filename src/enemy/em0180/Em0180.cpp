// src/enemy/em0180/Em0180.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 004F2340..00AB8070, 78 functions

#include "mgrr.h"
#include "Em0180.h"

// 004F2340  Em0180::vf44  size=143  [class]
void __fastcall Em0180::vf44(int param_1)

{
  int iVar1;
  
  FUN_00a5dc60();
  iVar1 = param_1;
  FUN_00c1cf50(param_1);
  FUN_00c1d1c0(iVar1);
  if (*(int *)(param_1 + 0x7b0) != 0) {
    HkRemovePhysicsSystem::HkRemovePhysicsSystem();
    if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x7b0) + 4))(1);
      *(undefined4 *)(param_1 + 0x7b0) = 0;
    }
  }
  if (*(int *)(param_1 + 0x764) != 0) {
    FUN_008e3c10();
    FUN_008e1c60();
  }
  RayCastManager::getWork(param_1 + 0xddc);
  FUN_00a9d8a0();
  FUN_00a92a00();
  FUN_00a944d0();
  BehaviorEmBase::vf44();
  return;
}

// 004F23F0  FUN_004f23f0  size=41  [between]
void __fastcall FUN_004f23f0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00ac4670(*(int *)(param_1 + 0xa84) + 0x40,1);
  if (iVar1 != 0) {
    FUN_00a8caf0(5,0,0,0);
  }
  return;
}

// 004F24B0  FUN_004f24b0  size=149  [between]
void __thiscall FUN_004f24b0(int param_1,int param_2)

{
  float fVar1;
  
  if (param_2 == 0) {
    if (*(float *)(param_1 + 0xeb4) < *(float *)(param_1 + 0xea0)) {
      fVar1 = *(float *)(param_1 + 0xea0) -
              *(float *)(param_1 + 0xe9c) * *(float *)(param_1 + 0x910);
      *(float *)(param_1 + 0xea0) = fVar1;
      if (fVar1 < *(float *)(param_1 + 0xeb4) != (fVar1 == *(float *)(param_1 + 0xeb4))) {
        *(undefined4 *)(param_1 + 0xea0) = *(undefined4 *)(param_1 + 0xeb4);
      }
    }
  }
  else if ((*(float *)(param_1 + 0xea0) < *(float *)(param_1 + 0xeb0)) &&
          (fVar1 = *(float *)(param_1 + 0xe98) * *(float *)(param_1 + 0x910) +
                   *(float *)(param_1 + 0xea0), *(float *)(param_1 + 0xea0) = fVar1,
          *(float *)(param_1 + 0xeb0) <= fVar1)) {
    *(undefined4 *)(param_1 + 0xea0) = *(undefined4 *)(param_1 + 0xeb0);
    return;
  }
  return;
}

// 004F2550  FUN_004f2550  size=291  [between]
float10 __thiscall
FUN_004f2550(int *param_1,float *param_2,undefined4 *param_3,float *param_4,float param_5,
            float param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  float local_2c;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_20 = *param_3;
  local_1c = param_3[1];
  local_18 = param_3[2];
  local_14 = 0x3f800000;
  fVar5 = (float10)FUN_00a8ec30(&local_20);
  fVar1 = (float)fVar5;
  fVar2 = (float)param_1[0x244];
  fVar3 = (float)param_1[0x244];
  fVar5 = (float10)FUN_00fdc1f0();
  local_2c = (float)((float10)1 - fVar5);
  fVar5 = (float10)FUN_00ddba30(fVar1 - *param_2);
  fVar5 = fVar5 * (float10)local_2c;
  fVar6 = (float10)(param_5 * fVar2);
  if ((fVar6 < fVar5) || (fVar6 = (float10)(param_6 * fVar3), fVar5 < fVar6)) {
    local_2c = (float)((fVar6 * (float10)local_2c) / fVar5);
  }
  fVar2 = *param_2;
  fVar5 = (float10)FUN_00ddba30(fVar1 - fVar2);
  fVar5 = (float10)FUN_00ddba30((float)(fVar5 * (float10)local_2c + (float10)fVar2));
  *param_2 = (float)fVar5;
  iVar4 = (**(code **)(*param_1 + 0x84))();
  fVar5 = (float10)FUN_00ddba30(fVar1 - *(float *)(iVar4 + 4));
  *param_4 = (float)fVar5;
  iVar4 = (**(code **)(*param_1 + 0x84))();
  fVar5 = (float10)FUN_00ddba30(fVar1 - *(float *)(iVar4 + 4));
  return ABS(fVar5);
}

// 004F2680  FUN_004f2680  size=216  [between]
void FUN_004f2680(float *param_1,float *param_2,float param_3,float param_4)

{
  float10 fVar1;
  
  if ((*param_1 * 0.5 <= param_3) || (ABS(*param_1 * 0.5 - param_3) <= 1e-07)) {
    fVar1 = (float10)FUN_00fdc1f0();
    fVar1 = ((float10)param_4 - (float10)*param_1) * ((float10)1 - fVar1) + (float10)*param_1;
  }
  else {
    fVar1 = (float10)FUN_00fdc1f0();
    fVar1 = fVar1 * (float10)*param_1;
  }
  *param_1 = (float)fVar1;
  if ((*param_2 * 0.5 < param_3) && (1e-07 < ABS(*param_2 * 0.5 - param_3))) {
    fVar1 = (float10)FUN_00fdc1f0();
    *param_2 = (float)(fVar1 * (float10)*param_2);
    return;
  }
  fVar1 = (float10)FUN_00fdc1f0();
  *param_2 = (float)((-(float10)param_4 - (float10)*param_2) * ((float10)1 - fVar1) +
                    (float10)*param_2);
  return;
}

// 004F2760  FUN_004f2760  size=138  [between]
void __thiscall FUN_004f2760(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar2 = 0.43633232;
  if ((param_2 <= 0.43633232) && (fVar2 = param_2, param_2 < -0.43633232)) {
    fVar2 = -0.43633232;
  }
  fVar1 = *(float *)(param_1 + 0xdcc);
  fVar3 = (float10)FUN_00ddba30(fVar2 - fVar1);
  fVar4 = (float10)FUN_00fdc1f0();
  fVar3 = (float10)FUN_00ddba30((float)(((float10)1 - fVar4) * (float10)(float)fVar3 +
                                       (float10)fVar1));
  *(float *)(param_1 + 0xdcc) = (float)fVar3;
  return;
}

// 004F27F0  FUN_004f27f0  size=139  [between]
undefined4 __fastcall FUN_004f27f0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float *pfVar8;
  undefined1 local_20 [28];
  
  if (*(int *)(param_1 + 0xa84) != 0) {
    iVar7 = FUN_00ac4670(*(int *)(param_1 + 0xa84) + 0x40,1);
    if (iVar7 != 0) {
      iVar7 = *(int *)(param_1 + 0xa84);
      fVar1 = *(float *)(iVar7 + 0x40);
      fVar2 = *(float *)(param_1 + 0x40);
      fVar3 = *(float *)(iVar7 + 0x44);
      fVar4 = *(float *)(param_1 + 0x44);
      fVar5 = *(float *)(iVar7 + 0x48);
      fVar6 = *(float *)(param_1 + 0x48);
      pfVar8 = (float *)FUN_00a925a0(local_20);
      fVar1 = pfVar8[2] * (fVar5 - fVar6) + (fVar1 - fVar2) * *pfVar8 + pfVar8[1] * (fVar3 - fVar4);
      if (fVar1 < 0.0 == (fVar1 == 0.0)) {
        return 0;
      }
    }
  }
  return 1;
}

// 004F28E0  Em0180::vf14  size=119  [class]
void __fastcall Em0180::vf14(int param_1)

{
  float fVar1;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  FUN_00a925a0(&local_20);
  fVar1 = *(float *)(param_1 + 0xea0) * *(float *)(param_1 + 0x910);
  *(float *)(param_1 + 0x50) = *(float *)(param_1 + 0x50) + local_20 * fVar1;
  *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x54) + local_1c * fVar1;
  *(float *)(param_1 + 0x58) = local_18 * fVar1 + *(float *)(param_1 + 0x58);
  *(float *)(param_1 + 0x5c) = local_14 * fVar1 + *(float *)(param_1 + 0x5c);
  *(float *)(param_1 + 0xdc4) =
       (fVar1 / *(float *)(param_1 + 0xea8)) * 6.2831855 + *(float *)(param_1 + 0xdc4);
  return;
}

// 004F2980  FUN_004f2980  size=122  [between]
void FUN_004f2980(void)

{
  FUN_00a9f4c0(&DAT_01640254,0x3e088889,0,0);
  FUN_00a9f600(0xffffffff,0,0,0,0,0x1b,0x3e088889,0);
  FUN_00a9f600(0xffffffff,0,0xffffffff,0,0,0x1d,0x3e088889,0);
  FUN_00a9f600(0xffffffff,0,1,0,0,0x1c,0x3e088889,0);
  return;
}

// 004F2A50  FUN_004f2a50  size=78  [between]
void __fastcall FUN_004f2a50(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x7b0) != 0) {
    if (*(int *)(param_1 + 0xa84) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_009f8b40();
    }
    (**(code **)(**(int **)(param_1 + 0x7b0) + 0x118))(uVar1,"_floor",0);
    FUN_008f16a0("_floor",0x10000);
  }
  return;
}

// 004F2AF0  FUN_004f2af0  size=77  [between]
void __fastcall FUN_004f2af0(int param_1)

{
  if (*(undefined4 **)(param_1 + 0x370) != (undefined4 *)0x0) {
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 0x400000;
    **(undefined4 **)(param_1 + 0x370) = 0;
  }
  if (*(int *)(param_1 + 0x370) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x370) + 4) = 1;
    *(undefined4 *)(*(int *)(param_1 + 0x370) + 8) = 1;
  }
  if (*(int *)(param_1 + 0x370) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x370) + 0xc) = 1;
  }
  FUN_00ac9420("_EFD01");
  return;
}

// 004F2B40  FUN_004f2b40  size=136  [between]
void __fastcall FUN_004f2b40(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  float10 fVar4;
  
  uVar1 = (**(code **)(**(int **)(param_1 + 0x754) + 0x24))(0xb);
  uVar2 = FUN_00ac4780();
  switch(uVar2) {
  case 0:
    pcVar3 = *(code **)(**(int **)(param_1 + 0x754) + 0x5c);
    break;
  default:
    goto switchD_004f2b61_caseD_1;
  case 2:
    pcVar3 = *(code **)(**(int **)(param_1 + 0x754) + 100);
    break;
  case 3:
    pcVar3 = *(code **)(**(int **)(param_1 + 0x754) + 0x6c);
    break;
  case 4:
    pcVar3 = *(code **)(**(int **)(param_1 + 0x754) + 0x74);
  }
  fVar4 = (float10)(*pcVar3)(0xb);
  if ((float10)0 < fVar4) {
    uVar1 = FUN_00fdbc60();
    FUN_00a8edf0(uVar1);
    return;
  }
switchD_004f2b61_caseD_1:
  FUN_00a8edf0(uVar1);
  return;
}

// 004F2BE0  FUN_004f2be0  size=121  [between]
void __fastcall FUN_004f2be0(int param_1)

{
  int iVar1;
  
  if (*(short *)(param_1 + 0xe38) != 0) {
    if ((*(byte *)(param_1 + 0xb00) & 2) != 0) {
      FUN_00a8caf0(0xd,0,0,0);
      return;
    }
    FUN_00a8caf0(0xc,0,0,0);
    return;
  }
  iVar1 = FUN_00ac4690();
  if (iVar1 == 0) {
    FUN_00a8caf0(0,0,0,0);
    return;
  }
  if (*(int *)(param_1 + 0x4a0) == 1) {
    FUN_00a8caf0(6,0,0,0);
    return;
  }
  if ((*(byte *)(param_1 + 0xb00) & 2) != 0) {
    FUN_00a8caf0(3,0,0,0);
    return;
  }
  FUN_00a8caf0(2,0,0,0);
  return;
}

// 004F2C90  FUN_004f2c90  size=53  [between]
void FUN_004f2c90(void)

{
  FUN_00a8c9b0(0,7,0x3f800000,0);
  FUN_00a8c9b0(0,8,0x3f800000,0);
  return;
}

// 004F2CF0  FUN_004f2cf0  size=38  [between]
void __fastcall FUN_004f2cf0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xf38) == 0) {
    uVar1 = FUN_00e5e0c0("et0050_se_mov_idle",param_1,0xffffffff,0);
    *(undefined4 *)(param_1 + 0xf38) = uVar1;
  }
  return;
}

// 004F2DD0  FUN_004f2dd0  size=19  [between]
void __fastcall FUN_004f2dd0(undefined4 param_1)

{
  FUN_00e5e0c0("et0050_se_mov_slow_m",param_1,0xffffffff,0);
  return;
}

// 004F2DF0  FUN_004f2df0  size=44  [between]
void __fastcall FUN_004f2df0(int param_1)

{
  if (*(int *)(param_1 + 0xf38) != 0) {
    FUN_00e5ca30(*(int *)(param_1 + 0xf38),0x40400000);
    *(undefined4 *)(param_1 + 0xf38) = 0;
  }
  return;
}

// 004F2E20  FUN_004f2e20  size=44  [between]
void __fastcall FUN_004f2e20(int param_1)

{
  if (*(int *)(param_1 + 0xf3c) != 0) {
    FUN_00e5ca30(*(int *)(param_1 + 0xf3c),0x40400000);
    *(undefined4 *)(param_1 + 0xf3c) = 0;
  }
  return;
}

// 004F2EC0  FUN_004f2ec0  size=23  [between]
void FUN_004f2ec0(float param_1,float param_2)

{
  if (param_2 < param_1) {
    return;
  }
  return;
}

// 004F3190  FUN_004f3190  size=33  [between]
void __thiscall FUN_004f3190(int param_1,int param_2)

{
  if (param_2 != 0) {
    *(uint *)(param_1 + 0xf58) = *(uint *)(param_1 + 0xf58) | 0x4000;
    return;
  }
  *(uint *)(param_1 + 0xf58) = *(uint *)(param_1 + 0xf58) & 0xffffbfff;
  return;
}

// 004F3340  Em0180::vf48  size=68  [class]
void __fastcall Em0180::vf48(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  iVar1 = *(int *)(param_1 + 0xa84);
  *(undefined4 *)(param_1 + 0x6ec) = 0;
  if ((iVar1 != 0) &&
     (fVar2 = *(float *)(iVar1 + 0x40) - *(float *)(param_1 + 0x40),
     fVar3 = *(float *)(iVar1 + 0x48) - *(float *)(param_1 + 0x48),
     fVar3 * fVar3 + fVar2 * fVar2 < 100.0)) {
    *(undefined4 *)(param_1 + 0x6ec) = 1;
  }
  BehaviorEmBase::vf48();
  return;
}

// 004F3390  Em0180::vf50  size=100  [class]
void __fastcall Em0180::vf50(int param_1)

{
  int iVar1;
  
  switchD_0080dbae::default();
  BehaviorEmBase::vf50();
  if (*(int *)(param_1 + 0x7b0) != 0) {
    FUN_008f5990(param_1);
  }
  iVar1 = FUN_00a93530(4);
  if (iVar1 != 0) {
    if ((*(uint *)(param_1 + 0xf58) & 0x1000) == 0) {
      if (*(int *)(iVar1 + 0x35c) != 0) {
        FUN_00d7acc0();
        return;
      }
    }
    else if (*(int *)(iVar1 + 0x35c) == 0) {
      *(uint *)(param_1 + 0xf58) = *(uint *)(param_1 + 0xf58) & 0xfffdffff;
      FUN_00d7b890();
      return;
    }
  }
  return;
}

// 004F3400  Em0180::vf268  size=90  [class]
undefined4 __thiscall Em0180::vf268(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  
  iVar1 = *param_4;
  if (iVar1 == 5) {
    *(int *)(param_1 + 0xf40) = *(int *)(param_1 + 0xf40) + 1;
    return 1;
  }
  if (iVar1 != 6) {
    if (iVar1 != 7) {
      return 0;
    }
    *(uint *)(param_1 + 0xf58) = *(uint *)(param_1 + 0xf58) | 0x80;
    return 1;
  }
  iVar1 = param_4[0xb];
  if (iVar1 == -1) {
    iVar1 = (int)*(short *)(param_1 + 0xab2);
  }
  *(int *)(param_1 + 0xee0) = iVar1;
  *(uint *)(param_1 + 0xf58) = *(uint *)(param_1 + 0xf58) | 4;
  return 1;
}

// 004F3460  FUN_004f3460  size=186  [between]
void __fastcall FUN_004f3460(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)(param_1 + 0xf58);
  if ((uVar1 & 0x20) == 0) {
    if ((uVar1 & 4) != 0) {
      *(uint *)(param_1 + 0xf58) = *(uint *)(param_1 + 0xf58) | 0x28;
      FUN_00a8caf0(7,0,0,0);
      return;
    }
  }
  else {
    if ((char)uVar1 < '\0') {
      iVar2 = FUN_00ac4690();
      if (iVar2 != 0) {
        FUN_00a8caf0(9,0,0,0);
        return;
      }
    }
    if ((*(byte *)(param_1 + 0xf58) & 8) != 0) {
      iVar2 = FUN_00c18eb0(*(undefined4 *)(param_1 + 0xb9c),*(undefined4 *)(param_1 + 0xee0));
      if (iVar2 == 0) {
        if (*(int *)(param_1 + 0x940) == 0) {
          uVar3 = FUN_00c19890(*(undefined4 *)(param_1 + 0xb9c),*(undefined4 *)(param_1 + 0xee0));
          *(undefined4 *)(param_1 + 0x940) = uVar3;
        }
        if (*(int *)(param_1 + 0x940) <= *(int *)(param_1 + 0xf40)) {
          FUN_00a8caf0(8,0,0,0);
          *(uint *)(param_1 + 0xf58) = *(uint *)(param_1 + 0xf58) & 0xfffffff7;
        }
      }
    }
  }
  return;
}

// 004F3520  FUN_004f3520  size=165  [between]
void __fastcall FUN_004f3520(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    if (*(int *)(param_1 + 0xf3c) != 0) {
      FUN_00e5ca30(*(int *)(param_1 + 0xf3c),0x40400000);
      *(undefined4 *)(param_1 + 0xf3c) = 0;
    }
    if (*(int *)(param_1 + 0xf38) == 0) {
      uVar1 = FUN_00e5e0c0("et0050_se_mov_idle",param_1,0xffffffff,0);
      *(undefined4 *)(param_1 + 0xf38) = uVar1;
    }
    FUN_00aa4080(4,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x920) = 0x40400000;
    *(undefined4 *)(param_1 + 0x940) = 0;
  }
  return;
}

// 004F35D0  FUN_004f35d0  size=67  [between]
void __fastcall FUN_004f35d0(int param_1)

{
  float fVar1;
  
  if ((*(uint *)(param_1 + 0xf58) & 0x800) == 0) {
    if ((*(uint *)(param_1 + 0xf58) & 4) != 0) {
      FUN_004f2be0();
      return;
    }
  }
  else {
    fVar1 = *(float *)(param_1 + 0xdd4) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0xdd4) = fVar1;
    if (fVar1 <= 0.0) {
      *(uint *)(param_1 + 0xf58) = *(uint *)(param_1 + 0xf58) & 0xfffff7ff;
      FUN_004f2be0();
      return;
    }
  }
  return;
}

// 004F3620  FUN_004f3620  size=139  [between]
void __fastcall FUN_004f3620(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    if (*(int *)(param_1 + 0xf3c) != 0) {
      FUN_00e5ca30(*(int *)(param_1 + 0xf3c),0x40400000);
      *(undefined4 *)(param_1 + 0xf3c) = 0;
    }
    if (*(int *)(param_1 + 0xf38) == 0) {
      uVar1 = FUN_00e5e0c0("et0050_se_mov_idle",param_1,0xffffffff,0);
      *(undefined4 *)(param_1 + 0xf38) = uVar1;
    }
    FUN_00aa4080(4,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  return;
}

// 004F36B0  FUN_004f36b0  size=133  [between]
void __fastcall FUN_004f36b0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    if (*(int *)(param_1 + 0xf3c) != 0) {
      FUN_00e5ca30(*(int *)(param_1 + 0xf3c),0x40400000);
      *(undefined4 *)(param_1 + 0xf3c) = 0;
    }
    if (*(int *)(param_1 + 0xf38) == 0) {
      uVar1 = FUN_00e5e0c0("et0050_se_mov_idle",param_1,0xffffffff,0);
      *(undefined4 *)(param_1 + 0xf38) = uVar1;
    }
    FUN_00aa4080(4,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
  }
  return;
}

// 004F3740  FUN_004f3740  size=228  [between]
void __fastcall FUN_004f3740(int param_1)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00e5e0c0("et0050_se_mov_hatch_rear_close",param_1,0xffffffff,0);
    if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x7b0) + 0xe0))(0,"_floor",0,0);
    }
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    return;
  }
  if (*(int *)(param_1 + 0x61c) == 1) {
    fVar2 = *(float *)(param_1 + 0x910) * 0.04363323;
    fVar3 = *(float *)(param_1 + 0xedc) + fVar2;
    *(float *)(param_1 + 0xedc) = fVar3;
    if (!NAN(fVar3) && -0.87266463 < fVar3 != (fVar3 == -0.87266463)) {
      *(float *)(param_1 + 0xed8) = *(float *)(param_1 + 0xed8) - fVar2;
    }
    bVar1 = *(float *)(param_1 + 0xed8) <= 0.0;
    if (bVar1) {
      *(undefined4 *)(param_1 + 0xed8) = 0;
    }
    if ((!NAN(fVar3) && 0.0 < fVar3 != (fVar3 == 0.0)) &&
       (*(undefined4 *)(param_1 + 0xedc) = 0, bVar1)) {
      *(uint *)(param_1 + 0xf58) = *(uint *)(param_1 + 0xf58) & 0xffffffdb;
      FUN_00a8caf0(0,0,0,0);
      *(uint *)(param_1 + 0xf58) = *(uint *)(param_1 + 0xf58) | 0x10;
      return;
    }
  }
  return;
}

// 004F3880  Em0180::setEmSetInfo  size=245  [class]
undefined4 __thiscall Em0180::setEmSetInfo(int param_1,int param_2)

{
  int iVar1;
  
  FUN_0040ac60(param_2);
  if ((*(int *)(param_1 + 0xb24) != -1) &&
     (iVar1 = FUN_00d46690(*(undefined1 *)(param_1 + 0xb24)), iVar1 != 0)) {
    FUN_00a5dcc0(iVar1);
  }
  FUN_00aa0ba0(*(undefined4 *)(param_1 + 0xb08),*(undefined4 *)(param_1 + 0xb9c));
  *(undefined4 *)(param_1 + 0xdd4) = *(undefined4 *)(param_1 + 0xb88);
  *(undefined4 *)(param_1 + 0xee0) = *(undefined4 *)(param_1 + 0xb20);
  iVar1 = *(int *)(param_1 + 0xb84);
  if (iVar1 == 0) {
    if (*(short *)(param_2 + 4) != -1) {
      FUN_004f2be0();
      return 1;
    }
  }
  else {
    if (iVar1 == 1) {
      FUN_00a8caf0(1,0,0,0);
      *(uint *)(param_1 + 0xf58) = *(uint *)(param_1 + 0xf58) | 0x800;
      return 1;
    }
    if (iVar1 != 2) {
      return 1;
    }
    iVar1 = FUN_00ac4640(1);
    if (iVar1 != 0) {
      FUN_00a8caf0(4,0,0,0);
      return 1;
    }
  }
  FUN_00a8caf0(1,0,0,0);
  return 1;
}

// 004F3980  Em0180::vf26C  size=667  [class]
undefined4 __thiscall Em0180::vf26C(int param_1,int param_2,int param_3,int param_4)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float unaff_EDI;
  float *pfVar5;
  undefined4 *puVar6;
  float fVar7;
  float fVar8;
  int *piStack_fc;
  undefined1 auStack_e8 [4];
  int local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  float local_a0 [18];
  undefined1 auStack_58 [8];
  undefined1 local_50 [76];
  
  local_a0[0xe] = 0.0;
  local_a0[0xd] = 0.0;
  local_a0[0xc] = 0.0;
  local_a0[0xb] = 0.0;
  local_a0[9] = 0.0;
  local_a0[8] = 0.0;
  local_a0[7] = 0.0;
  local_a0[6] = 0.0;
  local_a0[4] = 0.0;
  local_a0[3] = 0.0;
  local_a0[2] = 0.0;
  local_a0[1] = 0.0;
  local_a0[0xf] = 1.0;
  local_a0[10] = 1.0;
  local_a0[5] = 1.0;
  local_a0[0] = 1.0;
  local_e4 = param_1;
  if (*(int *)(param_3 + 4) == -1) {
    pfVar4 = (float *)(param_1 + 0x10);
    pfVar5 = local_a0;
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pfVar5 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      pfVar5 = pfVar5 + 1;
    }
  }
  else {
    iVar2 = FUN_00a12210(*(int *)(param_3 + 4));
    if (iVar2 != 0) {
      pfVar4 = (float *)(iVar2 + 0x10);
      pfVar5 = local_a0;
      for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
        *pfVar5 = *pfVar4;
        pfVar4 = pfVar4 + 1;
        pfVar5 = pfVar5 + 1;
      }
    }
  }
  local_a8 = 0;
  local_ac = 0;
  local_b0 = 0;
  local_b4 = 0;
  local_bc = 0;
  local_c0 = 0;
  local_c4 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_d4 = 0;
  local_d8 = 0;
  local_dc = 0;
  local_a4 = 0x3f800000;
  local_b8 = 0x3f800000;
  local_cc = 0x3f800000;
  local_e0 = 0x3f800000;
  if (*(float *)(param_3 + 0x10) != 0.0) {
    D3DXMatrixRotationZ(local_50,*(undefined4 *)(param_3 + 0x10));
    D3DXMatrixMultiply(auStack_e8,auStack_58,auStack_e8);
  }
  if (*(float *)(param_3 + 0xc) != 0.0) {
    D3DXMatrixRotationY(local_50,*(undefined4 *)(param_3 + 0xc));
    D3DXMatrixMultiply(auStack_e8,auStack_58,auStack_e8);
  }
  if (*(float *)(param_3 + 8) != 0.0) {
    D3DXMatrixRotationX(local_50,*(undefined4 *)(param_3 + 8));
    D3DXMatrixMultiply(auStack_e8,auStack_58,auStack_e8);
  }
  pfVar4 = local_a0;
  puVar6 = &local_e0;
  D3DXMatrixMultiply(puVar6);
  local_bc = 0;
  local_b8 = 0;
  local_b4 = 0;
  local_a0[0xf] = (float)param_2 * 0.0;
  local_a0[0xe] = local_a0[0xf] + *(float *)(param_3 + 0x14);
  local_a0[0xf] = local_a0[0xf] + *(float *)(param_3 + 0x18);
  local_a0[0x10] = (float)param_2 * 0.5 + *(float *)(param_3 + 0x1c);
  D3DXVec3TransformNormal(&stack0xfffffef4,local_a0 + 0xe,&local_ac);
  fVar7 = (float)puVar6 + local_a0[6];
  fVar8 = (float)pfVar4 + local_a0[7];
  fVar1 = unaff_EDI + local_a0[8];
  *(undefined4 *)(param_4 + 0x5c) = 0;
  iVar2 = (**(code **)(*piStack_fc + 0x84))();
  *(float *)(param_4 + 0x60) = *(float *)(iVar2 + 4) + *(float *)(param_3 + 0xc);
  *(undefined4 *)(param_4 + 100) = 0;
  *(float *)(param_4 + 0x50) = fVar7;
  *(float *)(param_4 + 0x54) = fVar8;
  *(float *)(param_4 + 0x58) = fVar1;
  *(float *)(param_4 + 0x54) = (float)piStack_fc[0x15] + 1.0;
  return 1;
}

// 004F3C20  Em0180::vf1A4  size=20  [class]
void __thiscall Em0180::vf1A4(int param_1,undefined4 param_2,byte param_3)

{
  if ((param_3 & 1) != 0) {
    *(uint *)(param_1 + 0xf58) = *(uint *)(param_1 + 0xf58) | 0x20000;
  }
  return;
}

// 004F3C40  Em0180::getAttackInfo  size=294  [class]
uint __thiscall Em0180::getAttackInfo(int param_1,ushort *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uStack_8;
  uint local_4;
  
  iVar3 = FUN_00dd3500(0x110,&DAT_01b7bd48);
  if (iVar3 != 0) {
    local_4 = CollisionAttackData::CollisionAttackData();
    if (local_4 != 0) {
      puVar1 = *(uint **)(local_4 + 8);
      puVar1[5] = *(uint *)(param_1 + 0x4f0);
      uVar4 = FUN_00a7c7f0();
      FUN_00a7c960(uVar4);
      uVar8 = 10;
      uVar5 = 10;
      uVar6 = 1;
      uVar7 = 10;
      if (*(int *)(param_1 + 0x754) != 0) {
        uVar8 = FUN_00ac8520(*param_2);
        (**(code **)(**(int **)(param_1 + 0x754) + 0x10))(*param_2);
        bVar2 = (**(code **)(**(int **)(param_1 + 0x754) + 0x20))(*param_2);
        local_4 = (uint)bVar2;
        uVar5 = (**(code **)(**(int **)(param_1 + 0x754) + 0x18))(*param_2);
        uVar6 = uStack_8;
        uVar7 = param_2._0_1_;
      }
      puVar1[1] = uVar8;
      puVar1[3] = uVar6;
      *(undefined1 *)(puVar1 + 4) = uVar7;
      puVar1[2] = uVar5;
      *puVar1 = (uint)*param_2;
      if (*param_2 == 4) {
        *puVar1 = 0xe2;
        puVar1[0x23] = puVar1[0x23] | 0x20000000;
        puVar1[0x24] = puVar1[0x24] | 0x2000000;
        puVar1[0x23] = puVar1[0x23] | 0x1000000;
        *(undefined1 *)((int)puVar1 + 0x11) = 10;
        *(undefined2 *)(puVar1 + 0x21) = 0x2000;
      }
      return local_4;
    }
  }
  FUN_00dd5650(&DAT_016402f8);
  return 0;
}

// 004F3D70  Em0180::vf34C  size=34  [class]
void __fastcall Em0180::vf34C(int param_1)

{
  if ((*(uint *)(param_1 + 0xf58) & 0x800) != 0) {
    FUN_00a8caf0(1,0,0,0);
    return;
  }
  FUN_00a8caf0(0,0,0,0);
  return;
}

// 004F3DA0  FUN_004f3da0  size=125  [between]
void __fastcall FUN_004f3da0(int param_1)

{
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_48 = *(undefined4 *)(param_1 + 0xb9c);
  local_10 = 0;
  local_c = 0;
  local_44 = (int)*(short *)(param_1 + 0xab2);
  local_8 = 0;
  local_4 = 0xffffffff;
  local_54 = 0;
  local_4c = 0xffffffff;
  local_50 = 0;
  local_38 = 0xffffffff;
  local_40 = 0xfffffffe;
  local_3c = 0;
  local_2c = 0;
  local_34 = 0x1010001;
  local_30 = 4;
  FUN_00c5e350(param_1,&local_54,&local_30);
  return;
}

// 004F3E20  FUN_004f3e20  size=149  [between]
void __fastcall FUN_004f3e20(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4e4) == 0) {
    FUN_00c1a1c0(*(undefined4 *)(param_1 + 0x4f0),*(undefined4 *)(param_1 + 0xb9c));
    *(undefined4 *)(param_1 + 0x4e4) = 1;
    if (((*(byte *)(param_1 + 0xf58) & 0x10) == 0) && (-1 < *(int *)(param_1 + 0xee0))) {
      FUN_00c18830(*(undefined4 *)(param_1 + 0xb9c),(int)*(short *)(param_1 + 0xab2));
      iVar1 = FUN_00c19890(*(undefined4 *)(param_1 + 0xb9c),(int)*(short *)(param_1 + 0xab2));
      if (iVar1 < 1) {
        FUN_00c18780(*(undefined4 *)(param_1 + 0xb9c),(int)*(short *)(param_1 + 0xab2));
      }
    }
  }
  return;
}

// 004F3EC0  FUN_004f3ec0  size=303  [between]
void __fastcall FUN_004f3ec0(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  
  iVar2 = FUN_00dd3500(0x110,&DAT_01b7c0b8);
  if ((iVar2 != 0) && (iVar2 = CollisionAttackData::CollisionAttackData(), iVar2 != 0)) {
    puVar3 = *(undefined4 **)(iVar2 + 8);
    *(undefined4 *)(iVar2 + 4) = 1;
    *(undefined1 *)(puVar3 + 4) = 1;
    puVar3[1] = 0;
    puVar3[3] = 0;
    puVar3[2] = 0x32;
    *puVar3 = 0xe1;
    puVar3[0x23] = puVar3[0x23] | 0x400000;
    *(undefined1 *)((int)puVar3 + 0x11) = 10;
    puVar3 = (undefined4 *)FUN_009f8b60();
    piVar4 = (int *)FUN_00602cb0(5,*puVar3,iVar2);
    if (piVar4 != (int *)0x0) {
      iVar2 = *piVar4;
      uVar5 = (**(code **)(*param_1 + 0x68))();
      (**(code **)(iVar2 + 0x6c))(uVar5);
      piVar1 = (int *)piVar4[0x21c];
      piVar4[0x21d] = 0x3f800000;
      puVar3 = (undefined4 *)FUN_009f8b60();
      (**(code **)(*piVar1 + 0x20))(0xb,*puVar3,0);
      piVar6 = (int *)FUN_00d773c0();
      (**(code **)(*piVar6 + 8))(piVar1);
      FUN_00d7b0f0();
      FUN_00d77c50(piVar4[0x13c],0xffffffff);
      piVar1[0x144] = 0x3dcccccd;
      FUN_00d77580(0x3f000000,0x40a80000,0x3f266666);
      piVar1[0xe0] = 0xe1;
      FUN_00d7b890();
      return;
    }
  }
  return;
}

// 004F3FF0  FUN_004f3ff0  size=43  [between]
void __thiscall
FUN_004f3ff0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  FUN_004f2550(param_1 + 0x94,param_2,param_3,param_4,param_5);
  return;
}

// 004F4020  FUN_004f4020  size=81  [between]
void __thiscall FUN_004f4020(int param_1,float param_2,undefined4 param_3,float param_4)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00fdc1f0();
  fVar1 = ((float10)param_2 - (float10)*(float *)(param_1 + 0xf48)) * ((float10)1 - fVar1) +
          (float10)*(float *)(param_1 + 0xf48);
  *(float *)(param_1 + 0xf48) = (float)fVar1;
  FUN_00a947e0(0,(float)(fVar1 * (float10)param_4),0,0);
  return;
}

// 004F4080  FUN_004f4080  size=238  [between]
/* WARNING: Removing unreachable block (ram,0x004f415f) */

void __thiscall FUN_004f4080(int param_1,float param_2)

{
  float fVar1;
  float unaff_ESI;
  undefined1 *puStack_8c;
  undefined1 *puStack_88;
  float local_84;
  float fStack_7c;
  undefined1 auStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 auStack_64 [12];
  undefined1 auStack_58 [8];
  undefined1 local_50 [76];
  
  local_70 = 0;
  local_6c = 0;
  puStack_88 = local_50;
  local_68 = 0x40100000;
  local_84 = *(float *)(param_1 + 0x94);
  puStack_8c = (undefined1 *)0x4f40b4;
  D3DXMatrixRotationY();
  puStack_8c = auStack_58;
  D3DXVec3TransformNormal();
  fVar1 = *(float *)(param_1 + 0x910);
  D3DXMatrixRotationY(auStack_64);
  D3DXVec3TransformNormal(&fStack_7c,&puStack_8c,&local_6c);
  *(float *)(param_1 + 0x50) = *(float *)(param_1 + 0x50) - ((float)puStack_88 - fVar1 * param_2);
  *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x54) - (local_84 - (float)auStack_78);
  *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0x58) - (unaff_ESI - (float)auStack_78);
  *(float *)(param_1 + 0x5c) = *(float *)(param_1 + 0x5c) - (fStack_7c - (float)puStack_8c);
  return;
}

// 004F4170  FUN_004f4170  size=539  [between]
/* WARNING: Removing unreachable block (ram,0x004f41f8) */
/* WARNING: Removing unreachable block (ram,0x004f4289) */

float10 __thiscall FUN_004f4170(int param_1,float *param_2,float *param_3,int param_4)

{
  float fVar1;
  float *pfVar2;
  float unaff_EBX;
  float *pfVar3;
  float unaff_ESI;
  float10 fVar4;
  float10 fVar5;
  float fStack_44;
  float fStack_40;
  float local_38;
  float local_34;
  float local_30;
  float fStack_2c;
  
  pfVar3 = (float *)&DAT_01640358;
  if (param_4 == 0) {
    pfVar3 = (float *)&DAT_01640348;
  }
  local_38 = *param_2 - *(float *)(param_1 + 0x40);
  local_34 = param_2[1] - *(float *)(param_1 + 0x44);
  local_30 = param_2[2] - *(float *)(param_1 + 0x48);
  fVar1 = local_30 * local_30 + local_34 * local_34 + local_38 * local_38;
  if (fVar1 < 0.0 != (fVar1 == 0.0)) {
    FUN_00dd5650(&DAT_0163d0ac);
    local_38 = 0.0;
    local_34 = 1.0;
    local_30 = 0.0;
  }
  D3DXVec3Normalize(&local_38,&local_38);
  local_34 = *param_3 - *param_2;
  local_30 = param_3[1] - param_2[1];
  fStack_2c = param_3[2] - param_2[2];
  fVar1 = fStack_2c * fStack_2c + local_30 * local_30 + local_34 * local_34;
  if (fVar1 < 0.0 != (fVar1 == 0.0)) {
    FUN_00dd5650(&DAT_0163d0ac);
    local_34 = 0.0;
    local_30 = 1.0;
    fStack_2c = 0.0;
  }
  D3DXVec3Normalize(&local_34,&local_34);
  pfVar2 = (float *)FUN_00a925a0(&local_30);
  fVar4 = (float10)fcos((float10)0.5235987901687622);
  if ((float10)pfVar2[2] * (float10)fStack_40 +
      (float10)unaff_EBX * (float10)*pfVar2 + (float10)pfVar2[1] * (float10)fStack_44 <= fVar4) {
    return (float10)unaff_ESI;
  }
  pfVar2 = (float *)FUN_00a925a0(&local_30);
  fVar5 = (float10)pfVar2[2] * (float10)local_34 +
          (float10)*pfVar2 * (float10)-1.0 + (float10)pfVar2[1] * (float10)local_38;
  fVar4 = (float10)fcos((float10)1.0471975803375244);
  if (fVar5 < fVar4) {
    return (float10)*pfVar3;
  }
  fVar4 = (float10)fcos((float10)0.8726646304130554);
  if (fVar5 < fVar4) {
    return (float10)pfVar3[1];
  }
  fVar4 = (float10)fcos((float10)0.6981316804885864);
  if (fVar5 < fVar4) {
    return (float10)pfVar3[2];
  }
  return (float10)pfVar3[3];
}

// 004F4390  FUN_004f4390  size=351  [between]
/* WARNING: Removing unreachable block (ram,0x004f447f) */

undefined4 __thiscall FUN_004f4390(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  float *pfVar2;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_c = *param_2 - *(float *)(param_1 + 0x40);
  local_8 = param_2[1] - *(float *)(param_1 + 0x44);
  local_4 = param_2[2] - *(float *)(param_1 + 0x48);
  local_18 = *param_2 - *param_3;
  local_14 = param_2[1] - param_3[1];
  local_10 = param_2[2] - param_3[2];
  fVar1 = local_10 * local_10 + local_14 * local_14 + local_18 * local_18;
  if (fVar1 < 0.0 != (fVar1 == 0.0)) {
    FUN_00dd5650(&DAT_0163d0ac);
    local_18 = 0.0;
    local_14 = 1.0;
    local_10 = 0.0;
  }
  pfVar2 = &local_18;
  D3DXVec3Normalize();
  if (local_18 * local_c + (float)pfVar2 * local_10 + local_14 * (float)&local_18 <
      (float)param_2 * (float)param_3) {
    return 1;
  }
  return 0;
}

// 004F44F0  FUN_004f44f0  size=172  [between]
undefined4 __thiscall FUN_004f44f0(int param_1,float param_2)

{
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  float local_8;
  
  fVar1 = *(float *)(param_1 + 0xea0);
  if (*(float *)(param_1 + 0xeb4) < *(float *)(param_1 + 0xea0)) {
    local_8 = 0.87266463;
    if ((*(uint *)(param_1 + 0xf58) & 0x100) != 0) {
      local_8 = 0.2617994;
    }
    fVar2 = (float10)FUN_00ca0370(param_1 + 0x40);
    if ((local_8 < param_2) && (fVar3 = (float10)(fVar1 * 10.0 + 2.5), fVar3 * fVar3 < fVar2)) {
      *(uint *)(param_1 + 0xf58) = *(uint *)(param_1 + 0xf58) | 0x100;
      return 1;
    }
    *(uint *)(param_1 + 0xf58) = *(uint *)(param_1 + 0xf58) & 0xfffffeff;
  }
  return 0;
}

// 004F45A0  FUN_004f45a0  size=342  [between]
void __thiscall FUN_004f45a0(int param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float local_30;
  float local_2c;
  float local_28;
  undefined1 local_20 [28];
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  fVar4 = *(float *)(param_1 + 0xea0) * *(float *)(param_1 + 0x910);
  *(float *)(param_1 + 0x50) = *(float *)(param_1 + 0x50) + *param_2 * fVar4;
  *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x54) + fVar1 * fVar4;
  *(float *)(param_1 + 0x58) = fVar2 * fVar4 + *(float *)(param_1 + 0x58);
  *(float *)(param_1 + 0x5c) = fVar4 * fVar3 + *(float *)(param_1 + 0x5c);
  if (param_3 == 0) {
    fVar1 = param_2[1] * param_2[1] + *param_2 * *param_2 + param_2[2] * param_2[2];
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      FUN_00ddf460(&local_30,param_2);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_30 = 0.0;
      local_2c = 1.0;
      local_28 = 0.0;
    }
    pfVar5 = (float *)FUN_00a925a0(local_20);
    fVar1 = pfVar5[2] * local_28 + *pfVar5 * local_30 + pfVar5[1] * local_2c;
    if (0.7 < fVar1) {
      *(float *)(param_1 + 0xdc4) =
           ((fVar1 * fVar4) / *(float *)(param_1 + 0xea8)) * 6.2831855 + *(float *)(param_1 + 0xdc4)
      ;
      return;
    }
  }
  return;
}

// 004F4700  FUN_004f4700  size=61  [between]
void __fastcall FUN_004f4700(int param_1)

{
  undefined4 *puVar1;
  int local_4;
  
  if ((*(uint *)(param_1 + 0xf58) & 0x400) == 0) {
    *(uint *)(param_1 + 0xf58) = *(uint *)(param_1 + 0xf58) | 0x400;
    local_4 = param_1;
    puVar1 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0x7b0) + 300))(&local_4,0);
    FUN_00917bd0(*puVar1,0x10000);
  }
  return;
}

// 004F4740  FUN_004f4740  size=64  [between]
void __fastcall FUN_004f4740(int param_1)

{
  undefined4 *puVar1;
  int local_4;
  
  if ((*(uint *)(param_1 + 0xf58) & 0x400) != 0) {
    *(uint *)(param_1 + 0xf58) = *(uint *)(param_1 + 0xf58) & 0xfffffbff;
    local_4 = param_1;
    puVar1 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0x7b0) + 300))(&local_4,0);
    FUN_00917bd0(*puVar1,0x10000);
  }
  return;
}

// 004F4780  FUN_004f4780  size=364  [between]
bool __fastcall FUN_004f4780(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char *pcVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 local_80;
  float local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  float local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60 [92];
  
  if (((*(uint *)(param_1 + 0xf58) & 0x8000) == 0) && (*(int *)(param_1 + 0x808) != 0)) {
    if (*(int *)(param_1 + 0xf4c) != 0) {
      *(uint *)(param_1 + 0xf58) = *(uint *)(param_1 + 0xf58) | 0x8000;
      iVar4 = FUN_00907560(param_1 + 0xf4c,0,0,0,0,0,0,0);
      return iVar4 == 0;
    }
    iVar4 = FUN_00c9daf0();
    if ((iVar4 != 0) &&
       (fVar1 = *(float *)(param_1 + 0xeb8) - *(float *)(param_1 + 0xec4),
       fVar2 = *(float *)(param_1 + 0xec0) - *(float *)(param_1 + 0xecc),
       fVar1 = SQRT(fVar2 * fVar2 + fVar1 * fVar1),
       fVar2 = *(float *)(param_1 + 0x40) - *(float *)(param_1 + 0xec4),
       fVar3 = *(float *)(param_1 + 0x48) - *(float *)(param_1 + 0xecc),
       fVar1 - SQRT(fVar3 * fVar3 + fVar2 * fVar2) < fVar1 * 0.35)) {
      local_70 = *(undefined4 *)(param_1 + 0x40);
      local_68 = *(undefined4 *)(param_1 + 0x48);
      local_64 = *(undefined4 *)(param_1 + 0x4c);
      local_6c = *(float *)(param_1 + 0x44) + 0.5;
      puVar5 = (undefined4 *)FUN_00c9daf0();
      local_80 = *puVar5;
      local_78 = puVar5[2];
      local_74 = 0x3f800000;
      local_7c = (float)puVar5[1] + 0.5;
      puVar5 = (undefined4 *)FUN_009f8b60();
      uVar12 = 0;
      uVar11 = 0;
      pcVar10 = "et0050_checkNext";
      uVar9 = 0;
      uVar8 = 0;
      uVar7 = 0;
      uVar6 = FUN_00410130(7,*puVar5,0,0,0,0,0,0,"et0050_checkNext",0,0);
      FUN_00468970(param_1 + 0xf4c,0,&local_70,&local_80,uVar6,uVar7,uVar8,uVar9,pcVar10,uVar11,
                   uVar12);
      HavokRayCastManager::set(local_60);
    }
  }
  return false;
}

// 004F4910  FUN_004f4910  size=894  [between]
void __thiscall FUN_004f4910(int param_1,float *param_2)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  float10 fVar5;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  float local_70 [17];
  float local_2c;
  float local_28;
  float local_24;
  
  local_90 = *(undefined4 *)(param_1 + 0xde0);
  local_8c = *(undefined4 *)(param_1 + 0xde4);
  local_88 = *(undefined4 *)(param_1 + 0xde8);
  local_84 = *(undefined4 *)(param_1 + 0xdec);
  local_80 = *(undefined4 *)(param_1 + 0xdf0);
  local_7c = *(undefined4 *)(param_1 + 0xdf4);
  local_78 = *(undefined4 *)(param_1 + 0xdf8);
  local_74 = *(undefined4 *)(param_1 + 0xdfc);
  local_a0 = (*(float *)(param_1 + 0xe00) + *(float *)(param_1 + 0xe10)) * 0.5;
  local_9c = (*(float *)(param_1 + 0xe04) + *(float *)(param_1 + 0xe14)) * 0.5;
  local_98 = (*(float *)(param_1 + 0xe08) + *(float *)(param_1 + 0xe18)) * 0.5;
  local_94 = (*(float *)(param_1 + 0xe0c) + *(float *)(param_1 + 0xe1c)) * 0.5;
  local_ac = ((*(float *)(param_1 + 0xdf4) + *(float *)(param_1 + 0xde4)) * 0.5 - local_9c) *
             *(float *)(param_1 + 0xe34) + local_9c;
  FUN_00d9e660(&local_90,&local_80,&local_a0);
  pfVar3 = (float *)(param_1 + 0xf20);
  *param_2 = (local_ac - *(float *)(param_1 + 0x44)) + *(float *)(param_1 + 0x44);
  *pfVar3 = (local_70[0x10] - *pfVar3) * 0.2 + *pfVar3;
  *(float *)(param_1 + 0xf24) =
       (local_2c - *(float *)(param_1 + 0xf24)) * 0.2 + *(float *)(param_1 + 0xf24);
  *(float *)(param_1 + 0xf28) =
       (local_28 - *(float *)(param_1 + 0xf28)) * 0.2 + *(float *)(param_1 + 0xf28);
  *(float *)(param_1 + 0xf2c) =
       (local_24 - *(float *)(param_1 + 0xf2c)) * 0.2 + *(float *)(param_1 + 0xf2c);
  fVar1 = *(float *)(param_1 + 0xf24) * *(float *)(param_1 + 0xf24) + *pfVar3 * *pfVar3 +
          *(float *)(param_1 + 0xf28) * *(float *)(param_1 + 0xf28);
  if (fVar1 < 0.0 == (fVar1 == 0.0)) {
    FUN_00ddf460(pfVar3,pfVar3);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    *pfVar3 = 0.0;
    *(undefined4 *)(param_1 + 0xf24) = 0x3f800000;
    *(undefined4 *)(param_1 + 0xf28) = 0;
  }
  local_70[0xe] = 0.0;
  local_70[0xd] = 0.0;
  local_70[0xc] = 0.0;
  local_70[0xb] = 0.0;
  local_70[9] = 0.0;
  local_70[8] = 0.0;
  local_70[7] = 0.0;
  local_70[6] = 0.0;
  local_70[4] = 0.0;
  local_70[3] = 0.0;
  local_70[2] = 0.0;
  local_70[1] = 0.0;
  local_70[0xf] = 1.0;
  local_70[10] = 1.0;
  local_70[5] = 1.0;
  local_70[0] = 1.0;
  if (*(float *)(param_1 + 0xf24) < 0.9999) {
    fVar5 = (float10)FUN_00ddbb50((*pfVar3 * 0.0 + *(float *)(param_1 + 0xf24) +
                                  *(float *)(param_1 + 0xf28) * 0.0) /
                                  (SQRT(*(float *)(param_1 + 0xf28) * *(float *)(param_1 + 0xf28) +
                                        *pfVar3 * *pfVar3 +
                                        *(float *)(param_1 + 0xf24) * *(float *)(param_1 + 0xf24)) *
                                  1.0));
    local_b8 = *(float *)(param_1 + 0xf24) * 0.0;
    local_c0 = *(float *)(param_1 + 0xf28) - local_b8;
    local_bc = *pfVar3 * 0.0 - *(float *)(param_1 + 0xf28) * 0.0;
    local_b8 = local_b8 - *pfVar3;
    fVar1 = local_b8 * local_b8 + local_c0 * local_c0 + local_bc * local_bc;
    local_b0 = local_c0;
    local_ac = local_bc;
    local_a8 = local_b8;
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      FUN_00ddf460(&local_c0,&local_c0);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_c0 = 0.0;
      local_bc = 1.0;
      local_b8 = 0.0;
    }
    D3DXMatrixRotationAxis(local_70,&local_c0,(float)fVar5);
  }
  pfVar3 = local_70;
  pfVar4 = (float *)(param_1 + 0xb0);
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar4 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    pfVar4 = pfVar4 + 1;
  }
  return;
}

// 004F4C90  FUN_004f4c90  size=43  [between]
void __fastcall FUN_004f4c90(int param_1)

{
  if ((*(byte *)(param_1 + 0xf5a) & 1) != 0) {
    *(uint *)(param_1 + 0xf58) = *(uint *)(param_1 + 0xf58) & 0xfffeffff;
    FUN_00a8c9b0(0,2,0x3f800000,0);
  }
  return;
}

// 004F4CC0  FUN_004f4cc0  size=50  [between]
void __fastcall FUN_004f4cc0(int param_1)

{
  if ((*(uint *)(param_1 + 0xf58) & 0x2000) != 0) {
    FUN_00a8c9b0(0,6,0x3f800000,0);
    *(uint *)(param_1 + 0xf58) = *(uint *)(param_1 + 0xf58) & 0xffffdfff;
  }
  return;
}

// 004F4D00  Em0180::vf30  size=74  [class]
void __fastcall Em0180::vf30(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  BehaviorEmBase::vf30();
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a805f0();
  }
  FUN_004f3e20();
  if (*(int *)(param_1 + 0x588) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x588) + 0x34) = 1;
    puVar2 = (undefined4 *)FUN_009f8b60();
    *(undefined4 *)(*(int *)(param_1 + 0x588) + 0x38) = *puVar2;
  }
  return;
}

// 004F4D50  FUN_004f4d50  size=496  [between]
void __fastcall FUN_004f4d50(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  bool bVar5;
  float local_18;
  float local_14;
  float local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    local_c = 0;
    local_8 = 0x40490fdb;
    local_4 = 0;
    local_18 = 0.0;
    local_14 = 0.0;
    local_10 = -2.0;
    iVar4 = FUN_00a12210(0x2b);
    fVar1 = *(float *)(iVar4 + 0x40) - *(float *)(param_1 + 0x40);
    fVar3 = *(float *)(iVar4 + 0x44) - *(float *)(param_1 + 0x44);
    fVar2 = *(float *)(iVar4 + 0x48) - *(float *)(param_1 + 0x48);
    local_18 = *(float *)(param_1 + 0x18) * fVar2 +
               *(float *)(param_1 + 0x10) * fVar1 + *(float *)(param_1 + 0x14) * fVar3;
    local_14 = *(float *)(param_1 + 0x28) * fVar2 +
               *(float *)(param_1 + 0x20) * fVar1 + *(float *)(param_1 + 0x24) * fVar3;
    local_10 = *(float *)(param_1 + 0x34) * fVar3 + *(float *)(param_1 + 0x30) * fVar1 +
               *(float *)(param_1 + 0x38) * fVar2;
    FUN_00c186a0(*(undefined4 *)(param_1 + 0xb9c),*(undefined4 *)(param_1 + 0xee0),
                 *(undefined4 *)(param_1 + 0x4f0),0xffffffff,&local_c,&local_18);
    *(undefined4 *)(param_1 + 0xf40) = 0;
    FUN_00e5e0c0("et0050_se_mov_hatch_rear_open",param_1,0xffffffff,0);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x620) = 0;
    if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x7b0) + 0xe0))(1,"_floor",0,0);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x61c) == 1) {
    bVar5 = false;
    iVar4 = FUN_00a94db0(0x19);
    if (iVar4 != 0) {
      FUN_00aa3f60(4);
    }
    fVar1 = *(float *)(param_1 + 0x910) * 0.061086524;
    fVar2 = fVar1 + *(float *)(param_1 + 0xed8);
    *(float *)(param_1 + 0xed8) = fVar2;
    if (!NAN(fVar2) && 0.5235988 < fVar2 != (fVar2 == 0.5235988)) {
      *(float *)(param_1 + 0xedc) = *(float *)(param_1 + 0xedc) - fVar1;
    }
    if (!NAN(fVar2) && 1.7453293 < fVar2 != (fVar2 == 1.7453293)) {
      *(undefined4 *)(param_1 + 0xed8) = 0x3fdf66f3;
      bVar5 = true;
      if (*(int *)(param_1 + 0x620) == 0) {
        *(undefined4 *)(param_1 + 0x620) = 1;
        FUN_004f3da0();
      }
    }
    if ((*(float *)(param_1 + 0xedc) <= -1.9198622) &&
       (*(undefined4 *)(param_1 + 0xedc) = 0xbff5be0b, bVar5)) {
      FUN_00a8caf0(0,0,0,0);
      return;
    }
  }
  return;
}

// 004F4F40  FUN_004f4f40  size=1540  [between]
/* WARNING: Removing unreachable block (ram,0x004f515a) */
/* WARNING: Removing unreachable block (ram,0x004f50c8) */
/* WARNING: Removing unreachable block (ram,0x004f5339) */

void __fastcall FUN_004f4f40(int *param_1)

{
  float fVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  float *pfVar5;
  undefined4 *puVar6;
  float10 fVar7;
  float10 fVar8;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [28];
  
  if (param_1[0x187] == 0) {
    if (param_1[0x3ce] != 0) {
      FUN_00e5ca30(param_1[0x3ce],0x40400000);
      param_1[0x3ce] = 0;
    }
    FUN_00aa4080(4,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a8d6c0(param_1 + 0x10);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x3a6] = 0x3a83126f;
    param_1[0x3a8] = 0;
    if ((*(byte *)(param_1 + 0x2c0) & 1) == 0) {
      iVar3 = 0x3e4ccccd;
    }
    else {
      iVar3 = 0x3df5c28f;
    }
    param_1[0x3ac] = iVar3;
    param_1[0x3ad] = 0x3c75c28f;
    param_1[0x3a7] = 0x3c03126f;
    param_1[0x3d6] = param_1[0x3d6] & 0xfffffeff;
    param_1[0x3ae] = 0;
    param_1[0x3af] = 0;
    param_1[0x3b0] = 0;
    if ((param_1[0x3d6] & 0x400U) == 0) {
      param_1[0x3d6] = param_1[0x3d6] | 0x400;
      puVar6 = (undefined4 *)(**(code **)(*(int *)param_1[0x1ec] + 300))(&local_58,0);
      FUN_00917bd0(*puVar6,0x10000);
    }
    FUN_00a8d280();
    return;
  }
  if (param_1[0x187] != 1) {
    return;
  }
  cVar2 = FUN_00c9db20(3);
  local_58 = (float)param_1[0x3a8] * 10.0 + 2.5;
  local_5c = 0.0;
  local_60 = 0.0;
  iVar3 = FUN_00a8d790(&local_54);
  if (((iVar3 != 0) && (fVar1 = (float)param_1[0x3a8], !NAN(fVar1) && 0.1 < fVar1 != (fVar1 == 0.1))
      ) && ((param_1[0x3d6] & 0x200U) == 0)) {
    fVar7 = (float10)FUN_004f2550(param_1 + 0x25,&local_54,&local_60,0x3c567750,0xbc567750);
    local_5c = (float)fVar7;
  }
  FUN_004f2760(local_60);
  if (((param_1[0x3d6] & 0x200U) == 0) && (iVar3 = FUN_004f44f0(local_5c), iVar3 == 0)) {
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  FUN_004f24b0(uVar4);
  (**(code **)(*param_1 + 0x14))();
  pfVar5 = (float *)FUN_00c9daf0();
  if (((cVar2 == '\0') && (pfVar5 != (float *)0x0)) && (iVar3 = FUN_00a8d800(), iVar3 != 0)) {
    fStack_48 = local_54 - (float)param_1[0x10];
    fStack_44 = fStack_50 - (float)param_1[0x11];
    fStack_40 = fStack_4c - (float)param_1[0x12];
    fVar1 = fStack_40 * fStack_40 + fStack_48 * fStack_48 + fStack_44 * fStack_44;
    if (fVar1 < 0.0 != (fVar1 == 0.0)) {
      FUN_00dd5650(&DAT_0163d0ac);
      fStack_48 = 0.0;
      fStack_44 = 1.0;
      fStack_40 = 0.0;
    }
    D3DXVec3Normalize(&fStack_48,&fStack_48);
    fStack_44 = *pfVar5 - local_5c;
    fStack_40 = pfVar5[1] - local_58;
    fStack_3c = pfVar5[2] - local_54;
    fVar1 = fStack_3c * fStack_3c + fStack_44 * fStack_44 + fStack_40 * fStack_40;
    if (fVar1 < 0.0 != (fVar1 == 0.0)) {
      FUN_00dd5650(&DAT_0163d0ac);
      fStack_44 = 0.0;
      fStack_40 = 1.0;
      fStack_3c = 0.0;
    }
    D3DXVec3Normalize(&fStack_44,&fStack_44);
    pfVar5 = (float *)FUN_00a925a0(auStack_30);
    fVar7 = (float10)fcos((float10)0.5235987901687622);
    if (fVar7 < (float10)pfVar5[2] * (float10)fStack_40 +
                (float10)fStack_48 * (float10)*pfVar5 + (float10)pfVar5[1] * (float10)fStack_44) {
      pfVar5 = (float *)FUN_00a925a0(auStack_20);
      fVar8 = (float10)pfVar5[2] * (float10)fStack_34 +
              (float10)*pfVar5 * (float10)fStack_3c + (float10)pfVar5[1] * (float10)fStack_38;
      fVar7 = (float10)fcos((float10)1.0471975803375244);
      if (fVar7 <= fVar8) {
        fVar7 = (float10)fcos((float10)0.8726646304130554);
        if (fVar8 < fVar7) {
          local_58 = 9.0;
        }
      }
      else {
        local_58 = 12.0;
      }
    }
  }
  if ((param_1[0x3d6] & 0x200U) == 0) {
    if (cVar2 != '\0') {
      local_60 = 1.0;
      if (local_5c <= 1.0471976) {
        if (0.7853982 < local_5c) {
          local_60 = 1.75;
        }
        else if (0.5235988 < local_5c) {
          local_60 = 1.5;
        }
        else if (0.2617994 < local_5c) {
          local_60 = 1.25;
        }
      }
      else {
        local_60 = 2.0;
      }
      fStack_3c = local_54 - (float)param_1[0x3ae];
      fStack_38 = fStack_50 - (float)param_1[0x3af];
      fStack_34 = fStack_4c - (float)param_1[0x3b0];
      fVar1 = fStack_34 * fStack_34 + fStack_38 * fStack_38 + fStack_3c * fStack_3c;
      local_5c = SQRT(fVar1);
      fStack_48 = (float)param_1[0x10] - (float)param_1[0x3ae];
      fStack_44 = (float)param_1[0x11] - (float)param_1[0x3af];
      fStack_40 = (float)param_1[0x12] - (float)param_1[0x3b0];
      if (fVar1 <= 0.0) {
        FUN_00dd5650(&DAT_0163d0ac);
        fStack_3c = 0.0;
        fStack_38 = 1.0;
        fStack_34 = 0.0;
      }
      D3DXVec3Normalize(&fStack_3c,&fStack_3c);
      if (local_5c - (fStack_40 * fStack_34 + fStack_44 * fStack_38 + fStack_48 * fStack_3c) <
          local_60 * 1.5) {
        FUN_004f4740();
        return;
      }
    }
    if (((param_1[0x3d6] & 0x200U) == 0) &&
       (fVar1 = (float)param_1[0x3a8], NAN(fVar1) || 0.15 < fVar1 == (fVar1 == 0.15)))
    goto LAB_004f53d1;
  }
  param_1[0x3d6] = param_1[0x3d6] | 0x1000;
LAB_004f53d1:
  iVar3 = FUN_00a97e60(local_58,1);
  if (iVar3 != 0) {
    param_1[0x3ae] = (int)local_54;
    param_1[0x3af] = (int)fStack_50;
    param_1[0x3b0] = (int)fStack_4c;
    cVar2 = FUN_00c9db20(5);
    if (cVar2 != '\0') {
      param_1[0x3a9] = param_1[0x3a8];
      return;
    }
  }
  return;
}

// 004F5550  FUN_004f5550  size=2191  [between]
void __fastcall FUN_004f5550(int *param_1)

{
  float fVar1;
  int iVar2;
  float unaff_ESI;
  float unaff_EDI;
  float10 fVar3;
  float10 fVar4;
  float fVar5;
  float local_8c;
  float local_88;
  float fStack_84;
  float afStack_80 [2];
  float local_78;
  float fStack_74;
  float local_70;
  float local_6c;
  undefined1 auStack_68 [8];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58 [2];
  undefined1 local_50 [76];
  
  switch(param_1[0x187]) {
  case 0:
    if ((short)param_1[0x38e] == 0) {
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    FUN_004f2df0();
    FUN_00aa4080(0x18,0,0x3e4ccccd,0x3f800000,0x8000080,0xbf800000,0x3f800000);
    FUN_00a8d710(param_1 + 0x10);
    param_1[0x3a6] = 0x3b23d70a;
    param_1[0x3a7] = 0x3b449ba6;
    param_1[0x3ac] = 0x3e75c28f;
    param_1[0x3ad] = 0x3e23d70a;
    param_1[0x3a8] = 0;
    param_1[0x3d6] = param_1[0x3d6] & 0xfffffeff;
    param_1[0x3ae] = param_1[0x14];
    param_1[0x3af] = param_1[0x15];
    param_1[0x3b0] = param_1[0x16];
    FUN_004f4700();
    FUN_00a8d280();
    if ((*(byte *)(param_1 + 0x2c0) & 4) != 0) {
      param_1[0x3a8] = param_1[0x3ac];
    }
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x249] = 0;
    param_1[0x24f] = param_1[0x25];
  case 1:
    local_8c = (float)param_1[0x3a8] * (float)param_1[0x244];
    fVar3 = (float10)FUN_00a581b0(&local_6c,local_8c,param_1[0x249]);
    param_1[0x249] = (int)(float)fVar3;
    FUN_00a585a0(&local_78,local_8c,(float)fVar3);
    fVar3 = (float10)fpatan((float10)local_78,(float10)local_70);
    param_1[0x25] = (int)(float)fVar3;
    local_60 = 0;
    local_5c = 0;
    local_58[0] = 0x40100000;
    D3DXMatrixRotationY(local_50,(float)fVar3);
    D3DXVec3TransformNormal(auStack_68,auStack_68,local_58);
    param_1[0x14] = (int)(afStack_80[0] - fStack_74);
    param_1[0x16] = (int)(local_78 - local_6c);
    FUN_00a585a0(&local_8c,(float)param_1[0x3a8] * 60.0 * 0.25,param_1[0x249]);
    fVar3 = (float10)0;
    if (fVar3 < (float10)(float)param_1[0x3a8]) {
      fVar3 = (float10)fpatan((float10)local_8c,(float10)fStack_84);
      fVar3 = (float10)FUN_00ddba30((float)(fVar3 - (float10)(float)param_1[0x25]));
      fVar3 = (float10)FUN_00ddba30((float)fVar3);
    }
    FUN_004f2760((float)fVar3);
    param_1[0x24f] = param_1[0x25];
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x3ae] = param_1[0x10];
      param_1[0x3af] = param_1[0x11];
      param_1[0x3b0] = param_1[0x12];
      FUN_004f2980();
      param_1[0x187] = param_1[0x187] + 1;
    }
    param_1[0x371] = (int)((unaff_EDI / (float)param_1[0x3aa]) * 6.2831855 + (float)param_1[0x371]);
    if (((float)param_1[0x3a8] < (float)param_1[0x3ac]) &&
       (fVar5 = (float)param_1[0x3a6] * (float)param_1[0x244] + (float)param_1[0x3a8],
       param_1[0x3a8] = (int)fVar5, (float)param_1[0x3ac] <= fVar5)) {
      param_1[0x3a8] = param_1[0x3ac];
      return;
    }
    break;
  case 2:
    local_88 = (float)param_1[0x3a8] * (float)param_1[0x244];
    fVar3 = (float10)FUN_00a581b0(&local_6c,local_88,param_1[0x249]);
    param_1[0x249] = (int)(float)fVar3;
    FUN_00a585a0(&local_78,local_88,(float)fVar3);
    fVar3 = (float10)fpatan((float10)local_78,(float10)local_70);
    param_1[0x25] = (int)(float)fVar3;
    local_60 = 0;
    local_5c = 0;
    local_58[0] = 0x40100000;
    D3DXMatrixRotationY(local_50,(float)fVar3);
    D3DXVec3TransformNormal(auStack_68,auStack_68,local_58);
    param_1[0x14] = (int)(afStack_80[0] - fStack_74);
    param_1[0x16] = (int)(local_78 - local_6c);
    FUN_00a585a0(&local_8c,(float)param_1[0x3a8] * 60.0 * 0.25,param_1[0x249]);
    fVar3 = (float10)FUN_00ddba30((float)param_1[0x25] - (float)param_1[0x24f]);
    fVar5 = 0.0;
    if (0.0 < (float)param_1[0x3a8]) {
      fVar4 = (float10)fpatan((float10)local_8c,(float10)fStack_84);
      fVar4 = (float10)FUN_00ddba30((float)(fVar4 - (float10)(float)param_1[0x25]));
      fVar4 = (float10)FUN_00ddba30((float)fVar4);
      fVar5 = (float)fVar4;
    }
    fVar3 = (float10)FUN_00ddba30((float)fVar3 / (float)param_1[0x244]);
    fVar4 = -fVar3 * (float10)114.59156;
    fVar3 = (float10)-1.0;
    if ((fVar3 < fVar4) && (fVar3 = fVar4, (float10)1 < fVar4)) {
      fVar3 = (float10)1;
    }
    param_1[0x24f] = param_1[0x25];
    FUN_004f4020((float)fVar3,0x3d0f5c29,0x3f333333);
    FUN_004f2760(fVar5);
    fVar3 = (float10)FUN_00a581b0(afStack_80,
                                  ((float)param_1[0x3a8] / (float)param_1[0x3a7] - 2.0) *
                                  (float)param_1[0x3a8] * 0.5,param_1[0x249]);
    iVar2 = FUN_00a54a60((float)fVar3);
    if (iVar2 != 0) {
      param_1[0x3ad] = 0;
      FUN_00e5e0c0("et0050_se_mov_slow_m",param_1,0xffffffff,0);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    param_1[0x371] = (int)((unaff_ESI / (float)param_1[0x3aa]) * 6.2831855 + (float)param_1[0x371]);
    FUN_004f24b0(1);
    if (((param_1[0x3d6] & 0x200U) != 0) ||
       (fVar5 = (float)param_1[0x3a8], !NAN(fVar5) && 0.15 < fVar5 != (fVar5 == 0.15))) {
      param_1[0x3d6] = param_1[0x3d6] | 0x1000;
      return;
    }
    break;
  case 3:
    local_8c = (float)param_1[0x3a8] * (float)param_1[0x244];
    fVar3 = (float10)FUN_00a581b0(&local_6c,local_8c,param_1[0x249]);
    param_1[0x249] = (int)(float)fVar3;
    FUN_00a585a0(&local_78,local_8c,(float)fVar3);
    fVar3 = (float10)fpatan((float10)local_78,(float10)local_70);
    param_1[0x25] = (int)(float)fVar3;
    local_60 = 0;
    local_5c = 0;
    local_58[0] = 0x40100000;
    D3DXMatrixRotationY(local_50,(float)fVar3);
    D3DXVec3TransformNormal(auStack_68,auStack_68,local_58);
    param_1[0x14] = (int)(afStack_80[0] - fStack_74);
    param_1[0x16] = (int)(local_78 - local_6c);
    FUN_00a585a0(&local_8c,(float)param_1[0x3a8] * 60.0 * 0.25,param_1[0x249]);
    fVar1 = local_8c;
    fVar3 = (float10)FUN_00ddba30((float)param_1[0x25] - (float)param_1[0x24f]);
    fVar5 = 0.0;
    if (0.0 < (float)param_1[0x3a8]) {
      fVar4 = (float10)fpatan((float10)fVar1,(float10)fStack_84);
      fVar4 = (float10)FUN_00ddba30((float)(fVar4 - (float10)(float)param_1[0x25]));
      fVar4 = (float10)FUN_00ddba30((float)fVar4);
      fVar5 = (float)fVar4;
    }
    fVar3 = (float10)FUN_00ddba30((float)fVar3 / (float)param_1[0x244]);
    fVar4 = -fVar3 * (float10)114.59156;
    fVar3 = (float10)-1.0;
    if ((fVar3 < fVar4) && (fVar3 = fVar4, (float10)1 < fVar4)) {
      fVar3 = (float10)1;
    }
    param_1[0x24f] = param_1[0x25];
    FUN_004f4020((float)fVar3,0x3d0f5c29,0x3f333333);
    FUN_004f2760(fVar5);
    iVar2 = FUN_00a54a60(param_1[0x249]);
    if ((iVar2 == 0) && (unaff_EDI < 0.0 == (unaff_EDI == 0.0))) {
      if (!NAN(unaff_EDI) && 0.01 < unaff_EDI != (unaff_EDI == 0.01)) {
        param_1[0x3d6] = param_1[0x3d6] | 0x1000;
      }
      param_1[0x371] =
           (int)((unaff_EDI / (float)param_1[0x3aa]) * 6.2831855 + (float)param_1[0x371]);
      FUN_004f24b0(0);
      return;
    }
    FUN_00aa4080(0x19,0,0x3f000000,0x3f800000,0x8000080,0xbf800000,0x3f800000);
    FUN_004f4740();
    param_1[0x187] = param_1[0x187] + 1;
    if (((param_1[0x3d6] & 0x20U) == 0) && ((param_1[0x3d6] & 4U) != 0)) {
      if (param_1[0x129] != 1) {
        FUN_004f4c90();
      }
      param_1[0x3d6] = param_1[0x3d6] | 0x28;
      if (param_1[0x129] != 1) {
        FUN_004f4c90();
      }
      FUN_00a8caf0(7,0,0,0);
      return;
    }
    break;
  case 4:
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      if (param_1[0x129] != 1) {
        FUN_004f4c90();
      }
      FUN_00a8caf0(0,0,0,0);
    }
  }
  return;
}

// 004F5E00  FUN_004f5e00  size=2191  [between]
void __fastcall FUN_004f5e00(int *param_1)

{
  float fVar1;
  int iVar2;
  float unaff_ESI;
  float unaff_EDI;
  float10 fVar3;
  float10 fVar4;
  float fVar5;
  float local_8c;
  float local_88;
  float fStack_84;
  float afStack_80 [2];
  float local_78;
  float fStack_74;
  float local_70;
  float local_6c;
  undefined1 auStack_68 [8];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58 [2];
  undefined1 local_50 [76];
  
  switch(param_1[0x187]) {
  case 0:
    if ((short)param_1[0x38e] == 0) {
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    FUN_004f2df0();
    FUN_00aa4080(0x18,0,0x3e4ccccd,0x3f800000,0x8000080,0xbf800000,0x3f800000);
    FUN_00a8d710(param_1 + 0x10);
    param_1[0x3a6] = 0x3b449ba6;
    param_1[0x3a7] = 0x3ba3d70a;
    param_1[0x3ac] = 0x3ea3d70a;
    param_1[0x3ad] = 0x3e4ccccd;
    param_1[0x3a8] = 0;
    param_1[0x3d6] = param_1[0x3d6] & 0xfffffeff;
    param_1[0x3ae] = param_1[0x14];
    param_1[0x3af] = param_1[0x15];
    param_1[0x3b0] = param_1[0x16];
    FUN_004f4700();
    FUN_00a8d280();
    if ((*(byte *)(param_1 + 0x2c0) & 4) != 0) {
      param_1[0x3a8] = param_1[0x3ac];
    }
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x249] = 0;
    param_1[0x24f] = param_1[0x25];
  case 1:
    local_8c = (float)param_1[0x3a8] * (float)param_1[0x244];
    fVar3 = (float10)FUN_00a581b0(&local_6c,local_8c,param_1[0x249]);
    param_1[0x249] = (int)(float)fVar3;
    FUN_00a585a0(&local_78,local_8c,(float)fVar3);
    fVar3 = (float10)fpatan((float10)local_78,(float10)local_70);
    param_1[0x25] = (int)(float)fVar3;
    local_60 = 0;
    local_5c = 0;
    local_58[0] = 0x40100000;
    D3DXMatrixRotationY(local_50,(float)fVar3);
    D3DXVec3TransformNormal(auStack_68,auStack_68,local_58);
    param_1[0x14] = (int)(afStack_80[0] - fStack_74);
    param_1[0x16] = (int)(local_78 - local_6c);
    FUN_00a585a0(&local_8c,(float)param_1[0x3a8] * 60.0 * 0.25,param_1[0x249]);
    fVar3 = (float10)0;
    if (fVar3 < (float10)(float)param_1[0x3a8]) {
      fVar3 = (float10)fpatan((float10)local_8c,(float10)fStack_84);
      fVar3 = (float10)FUN_00ddba30((float)(fVar3 - (float10)(float)param_1[0x25]));
      fVar3 = (float10)FUN_00ddba30((float)fVar3);
    }
    FUN_004f2760((float)fVar3);
    param_1[0x24f] = param_1[0x25];
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x3ae] = param_1[0x10];
      param_1[0x3af] = param_1[0x11];
      param_1[0x3b0] = param_1[0x12];
      FUN_004f2980();
      param_1[0x187] = param_1[0x187] + 1;
    }
    param_1[0x371] = (int)((unaff_EDI / (float)param_1[0x3aa]) * 6.2831855 + (float)param_1[0x371]);
    if (((float)param_1[0x3a8] < (float)param_1[0x3ac]) &&
       (fVar5 = (float)param_1[0x3a6] * (float)param_1[0x244] + (float)param_1[0x3a8],
       param_1[0x3a8] = (int)fVar5, (float)param_1[0x3ac] <= fVar5)) {
      param_1[0x3a8] = param_1[0x3ac];
      return;
    }
    break;
  case 2:
    local_88 = (float)param_1[0x3a8] * (float)param_1[0x244];
    fVar3 = (float10)FUN_00a581b0(&local_6c,local_88,param_1[0x249]);
    param_1[0x249] = (int)(float)fVar3;
    FUN_00a585a0(&local_78,local_88,(float)fVar3);
    fVar3 = (float10)fpatan((float10)local_78,(float10)local_70);
    param_1[0x25] = (int)(float)fVar3;
    local_60 = 0;
    local_5c = 0;
    local_58[0] = 0x40100000;
    D3DXMatrixRotationY(local_50,(float)fVar3);
    D3DXVec3TransformNormal(auStack_68,auStack_68,local_58);
    param_1[0x14] = (int)(afStack_80[0] - fStack_74);
    param_1[0x16] = (int)(local_78 - local_6c);
    FUN_00a585a0(&local_8c,(float)param_1[0x3a8] * 60.0 * 0.25,param_1[0x249]);
    fVar3 = (float10)FUN_00ddba30((float)param_1[0x25] - (float)param_1[0x24f]);
    fVar5 = 0.0;
    if (0.0 < (float)param_1[0x3a8]) {
      fVar4 = (float10)fpatan((float10)local_8c,(float10)fStack_84);
      fVar4 = (float10)FUN_00ddba30((float)(fVar4 - (float10)(float)param_1[0x25]));
      fVar4 = (float10)FUN_00ddba30((float)fVar4);
      fVar5 = (float)fVar4;
    }
    fVar3 = (float10)FUN_00ddba30((float)fVar3 / (float)param_1[0x244]);
    fVar4 = -fVar3 * (float10)114.59156;
    fVar3 = (float10)-1.0;
    if ((fVar3 < fVar4) && (fVar3 = fVar4, (float10)1 < fVar4)) {
      fVar3 = (float10)1;
    }
    param_1[0x24f] = param_1[0x25];
    FUN_004f4020((float)fVar3,0x3d0f5c29,0x3f333333);
    FUN_004f2760(fVar5);
    fVar3 = (float10)FUN_00a581b0(afStack_80,
                                  ((float)param_1[0x3a8] / (float)param_1[0x3a7] - 2.0) *
                                  (float)param_1[0x3a8] * 0.5,param_1[0x249]);
    iVar2 = FUN_00a54a60((float)fVar3);
    if (iVar2 != 0) {
      param_1[0x3ad] = 0;
      FUN_00e5e0c0("et0050_se_mov_slow_m",param_1,0xffffffff,0);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    param_1[0x371] = (int)((unaff_ESI / (float)param_1[0x3aa]) * 6.2831855 + (float)param_1[0x371]);
    FUN_004f24b0(1);
    if (((param_1[0x3d6] & 0x200U) != 0) ||
       (fVar5 = (float)param_1[0x3a8], !NAN(fVar5) && 0.15 < fVar5 != (fVar5 == 0.15))) {
      param_1[0x3d6] = param_1[0x3d6] | 0x1000;
      return;
    }
    break;
  case 3:
    local_8c = (float)param_1[0x3a8] * (float)param_1[0x244];
    fVar3 = (float10)FUN_00a581b0(&local_6c,local_8c,param_1[0x249]);
    param_1[0x249] = (int)(float)fVar3;
    FUN_00a585a0(&local_78,local_8c,(float)fVar3);
    fVar3 = (float10)fpatan((float10)local_78,(float10)local_70);
    param_1[0x25] = (int)(float)fVar3;
    local_60 = 0;
    local_5c = 0;
    local_58[0] = 0x40100000;
    D3DXMatrixRotationY(local_50,(float)fVar3);
    D3DXVec3TransformNormal(auStack_68,auStack_68,local_58);
    param_1[0x14] = (int)(afStack_80[0] - fStack_74);
    param_1[0x16] = (int)(local_78 - local_6c);
    FUN_00a585a0(&local_8c,(float)param_1[0x3a8] * 60.0 * 0.25,param_1[0x249]);
    fVar1 = local_8c;
    fVar3 = (float10)FUN_00ddba30((float)param_1[0x25] - (float)param_1[0x24f]);
    fVar5 = 0.0;
    if (0.0 < (float)param_1[0x3a8]) {
      fVar4 = (float10)fpatan((float10)fVar1,(float10)fStack_84);
      fVar4 = (float10)FUN_00ddba30((float)(fVar4 - (float10)(float)param_1[0x25]));
      fVar4 = (float10)FUN_00ddba30((float)fVar4);
      fVar5 = (float)fVar4;
    }
    fVar3 = (float10)FUN_00ddba30((float)fVar3 / (float)param_1[0x244]);
    fVar4 = -fVar3 * (float10)114.59156;
    fVar3 = (float10)-1.0;
    if ((fVar3 < fVar4) && (fVar3 = fVar4, (float10)1 < fVar4)) {
      fVar3 = (float10)1;
    }
    param_1[0x24f] = param_1[0x25];
    FUN_004f4020((float)fVar3,0x3d0f5c29,0x3f333333);
    FUN_004f2760(fVar5);
    iVar2 = FUN_00a54a60(param_1[0x249]);
    if ((iVar2 == 0) && (unaff_EDI < 0.0 == (unaff_EDI == 0.0))) {
      if (!NAN(unaff_EDI) && 0.01 < unaff_EDI != (unaff_EDI == 0.01)) {
        param_1[0x3d6] = param_1[0x3d6] | 0x1000;
      }
      param_1[0x371] =
           (int)((unaff_EDI / (float)param_1[0x3aa]) * 6.2831855 + (float)param_1[0x371]);
      FUN_004f24b0(0);
      return;
    }
    FUN_00aa4080(0x19,0,0x3f000000,0x3f800000,0x8000080,0xbf800000,0x3f800000);
    FUN_004f4740();
    param_1[0x187] = param_1[0x187] + 1;
    if (((param_1[0x3d6] & 0x20U) == 0) && ((param_1[0x3d6] & 4U) != 0)) {
      if (param_1[0x129] != 1) {
        FUN_004f4c90();
      }
      param_1[0x3d6] = param_1[0x3d6] | 0x28;
      if (param_1[0x129] != 1) {
        FUN_004f4c90();
      }
      FUN_00a8caf0(7,0,0,0);
      return;
    }
    break;
  case 4:
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      if (param_1[0x129] != 1) {
        FUN_004f4c90();
      }
      FUN_00a8caf0(0,0,0,0);
    }
  }
  return;
}

// 004F66B0  FUN_004f66b0  size=528  [between]
void __fastcall FUN_004f66b0(int *param_1)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  float *pfVar6;
  int local_84;
  int local_80;
  float local_7c;
  int local_78;
  undefined4 local_74;
  undefined1 local_70 [4];
  float local_6c;
  int *local_60;
  undefined4 local_5c;
  int local_50;
  float local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  float local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  char *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  if (param_1[0x377] != 0) {
    iVar3 = param_1[0x38c];
    local_84 = FUN_00a12210((&DAT_0164021c)[*(int *)(&DAT_016403c0 + iVar3 * 4)]);
    pfVar6 = (float *)(param_1 + (iVar3 + 0xde) * 4);
    pfVar2 = (float *)FUN_00a8b8a0(local_70,(float)param_1[0x3a8] * 4.0 * (float)param_1[0x244]);
    *pfVar6 = *pfVar2 + *pfVar6;
    pfVar6[1] = pfVar2[1] + pfVar6[1];
    pfVar6[2] = pfVar2[2] + pfVar6[2];
    pfVar6[3] = pfVar2[3] + pfVar6[3];
    if (local_84 != 0) {
      iVar3 = FUN_00907560(param_1 + 0x377,pfVar6,0,0,0,0,&local_80,0);
      if (iVar3 == 0) {
        pfVar6[1] = local_7c;
      }
      else {
        param_1[param_1[0x38c] + 0x388] = 0;
      }
    }
    param_1[0x38c] = param_1[0x38c] + 1;
    if (3 < (uint)param_1[0x38c]) {
      param_1[0x38c] = 0;
    }
  }
  iVar3 = param_1[0x38c];
  iVar4 = FUN_00a12210((&DAT_0164021c)[*(int *)(&DAT_016403c0 + iVar3 * 4)]);
  local_80 = *(int *)(iVar4 + 0x40);
  local_6c = *(float *)(iVar4 + 0x44);
  local_78 = *(undefined4 *)(iVar4 + 0x48);
  local_74 = *(undefined4 *)(iVar4 + 0x4c);
  local_7c = local_6c + 1.0;
  fVar1 = (float)param_1[iVar3 + 0x388];
  param_1[iVar3 + 0x388] = (int)(fVar1 + 0.1);
  local_6c = local_6c - (fVar1 + 0.1 + (float)param_1[0x3ab]);
  iVar3 = FUN_009f8b40();
  local_60 = param_1 + 0x377;
  local_50 = local_80;
  local_4c = local_7c;
  local_30 = iVar3 << 0x10 | 0x1e;
  local_48 = local_78;
  local_44 = local_74;
  local_5c = 0;
  local_40 = local_80;
  local_2c = 0;
  local_28 = 0;
  local_3c = local_6c;
  local_24 = 0;
  local_20 = "et0050_ground";
  local_38 = local_78;
  local_1c = 0;
  local_18 = 0;
  local_34 = local_74;
  HavokRayCastManager::set(&local_60);
  local_84 = param_1[0x11];
  piVar5 = (int *)(**(code **)(*param_1 + 0x84))();
  local_80 = *piVar5;
  local_78 = piVar5[2];
  FUN_004f4910(&local_84,&local_80);
  param_1[0x15] = local_84;
  param_1[0x24] = local_80;
  param_1[0x26] = local_78;
  return;
}

// 004F68C0  FUN_004f68c0  size=301  [between]
void __fastcall FUN_004f68c0(int *param_1)

{
  int iVar1;
  undefined1 local_160 [348];
  
  iVar1 = param_1[0x187];
  if (iVar1 == 0) {
    FUN_00a8c9b0(0,1,0x3f800000,0);
    if ((*(byte *)((int)param_1 + 0xf5a) & 1) != 0) {
      param_1[0x3d6] = param_1[0x3d6] & 0xfffeffff;
      FUN_00a8c9b0(0,2,0x3f800000,0);
    }
    FUN_00e5e0c0("et0050_se_dmg_explosion",param_1,0xffffffff,0);
    FUN_004f3ec0();
    FUN_004039a0(10,param_1,0);
    FUN_00a963e0(local_160);
    (**(code **)(*param_1 + 0x20))();
    (**(code **)(*param_1 + 200))(0);
    (**(code **)(*(int *)param_1[0x1ec] + 0xdc))(0);
    (**(code **)(*param_1 + 0x318))();
    if (param_1[0x1d9] != 0) {
      FUN_008e3c10();
      FUN_008e1c60();
      param_1[0x1d9] = 0;
    }
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (iVar1 == 1) {
    iVar1 = FUN_00a8c890(0);
    if (*(int *)(iVar1 + 0x98) == 0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
  }
  else if (iVar1 == 2) {
    FUN_00a805f0();
    return;
  }
  return;
}

// 004F69F0  FUN_004f69f0  size=290  [between]
void __fastcall FUN_004f69f0(int param_1)

{
  int iVar1;
  uint uVar2;
  float10 fVar3;
  undefined1 local_160 [348];
  
  fVar3 = (float10)FUN_00ddba30(*(undefined4 *)(param_1 + 0xdc4));
  *(float *)(param_1 + 0xdc4) = (float)fVar3;
  uVar2 = 0;
  do {
    iVar1 = FUN_00a12210((&DAT_0164021c)[uVar2]);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0x90) = *(undefined4 *)(param_1 + 0xdc4);
      if (uVar2 < 2) {
        *(undefined4 *)(iVar1 + 0x94) = *(undefined4 *)(param_1 + 0xdcc);
      }
      *(undefined4 *)(iVar1 + 0x98) = 0;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 8);
  iVar1 = FUN_00a12210(0x30);
  if (iVar1 != 0) {
    fVar3 = (float10)FUN_00ddba30(*(undefined4 *)(param_1 + 0xed8));
    *(float *)(param_1 + 0xed8) = (float)fVar3;
    *(float *)(iVar1 + 0x90) = (float)fVar3;
  }
  iVar1 = FUN_00a12210(0x2b);
  if (iVar1 != 0) {
    fVar3 = (float10)FUN_00ddba30(*(undefined4 *)(param_1 + 0xedc));
    *(float *)(param_1 + 0xedc) = (float)fVar3;
    *(float *)(iVar1 + 0x90) = (float)fVar3;
  }
  if (2.3561945 < ABS(*(float *)(param_1 + 0xdc4) - *(float *)(param_1 + 0xdc8))) {
    *(undefined4 *)(param_1 + 0xdc8) = *(undefined4 *)(param_1 + 0xdc4);
    if ((DAT_018b9174 != 0xe23) && (DAT_018b9174 != 0xe27)) {
      FUN_004039a0(0x14,param_1,0);
      FUN_00a963e0(local_160);
    }
  }
  return;
}

// 004F6B20  Em0180::vf32C  size=977  [class]
undefined4 __fastcall Em0180::vf32C(int *param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  int *piVar5;
  int *piVar6;
  int unaff_ESI;
  int iVar7;
  int *piVar8;
  float10 fVar9;
  int *piStack_4;
  
  piVar6 = (int *)0x0;
  param_1[0x1a1] = 0;
  piStack_4 = param_1;
  iVar2 = FUN_00a8eea0();
  if ((iVar2 < 1) || ((*(byte *)(param_1 + 0x130) & 1) == 0)) {
    return 0;
  }
  if ((int *)param_1[0x1ec] != (int *)0x0) {
    iVar7 = 0;
    iVar2 = (**(code **)(*(int *)param_1[0x1ec] + 0xc))();
    if (0 < iVar2) {
      do {
        (**(code **)(*(int *)param_1[0x1ec] + 300))(&piStack_4,iVar7);
        if (unaff_ESI != 0) {
          FUN_00ac2080(iVar7);
        }
        iVar7 = iVar7 + 1;
        iVar2 = (**(code **)(*(int *)param_1[0x1ec] + 0xc))();
      } while (iVar7 < iVar2);
    }
  }
  iVar2 = FUN_00a8ef10();
  if ((iVar2 != 0) || (param_1[0x139] != 0)) {
    return 0;
  }
  piVar8 = (int *)param_1[0x19f];
  piVar5 = piVar8 + param_1[0x1a1] * 0x54;
  piStack_4 = (int *)0x0;
  if (piVar8 == piVar5) {
    return 0;
  }
  do {
    iVar2 = *piVar8;
    if (((((iVar2 != 0) && (iVar2 != 1)) && (iVar2 != 2)) && ((iVar2 != 0x1b0 && (iVar2 != 0x147))))
       && ((iVar2 != 0xe2 && (iVar2 = FUN_00a81330(), iVar2 != param_1[0x13c])))) {
      if (iVar2 != 0) {
        piVar6 = (int *)FUN_00a7c8a0();
      }
      iVar2 = FUN_00a8eea0();
      if (iVar2 < 1) {
LAB_004f6c65:
        if (((piVar6 != (int *)0x0) && (iVar2 = (**(code **)(*piVar6 + 0x17c))(), iVar2 != 0)) &&
           (iVar2 = (**(code **)(*piVar6 + 0x184))(*piVar8,param_1[0x13c],piVar8), iVar2 == 9))
        goto LAB_004f6ca7;
      }
      else if (piVar6 != (int *)0x0) {
        if ((*(byte *)(piVar6 + 0x130) & 0x10) != 0) {
          (**(code **)(*param_1 + 0x21c))(piVar6,(char)piVar8[4],0x3c23d70a,0);
        }
        goto LAB_004f6c65;
      }
      piStack_4 = (int *)0x1;
      if (*piVar8 != 0x146) {
        (**(code **)(*param_1 + 0x30c))(piVar8[1],0);
        (**(code **)(*param_1 + 0x220))(0x41200000);
        if (((piVar8[0x23] & 0x600U) == 0) && ((piVar8[0x24] & 0x40000U) == 0)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (piVar8[0x25] == 0) {
LAB_004f6d5d:
          (**(code **)(*param_1 + 0x198))(piVar6,piVar8,1);
          fVar9 = (float10)FUN_00ddba30((float)piVar8[0xc] - (float)param_1[0x25]);
          param_1[0x245] = (int)(float)fVar9;
          iVar2 = FUN_00a8eea0();
          if (iVar2 < 1) {
            FUN_004f3e20();
            FUN_004f2df0();
            FUN_004f2e20();
            if (*piVar8 != 0x189) {
              FUN_00a8caf0(10,0,0,0);
              return piStack_4;
            }
            FUN_00a8caf0(0xb,0,0,0);
            return piStack_4;
          }
          if (*(byte *)((int)piVar8 + 0x11) < 5) {
            return piStack_4;
          }
          cVar4 = '\x14';
          if (((float)param_1[0x245] <= 0.7853982) || (2.3561945 <= (float)param_1[0x245])) {
            if (((float)param_1[0x245] < -0.7853982) && (-2.3561945 < (float)param_1[0x245])) {
              uVar3 = FUN_00dde2a0(0,100);
              cVar4 = ((uVar3 & 3) != 0) + '\x14';
            }
          }
          else {
            uVar3 = FUN_00dde2a0(0,100);
            cVar4 = ((uVar3 & 3) != 0) * '\x02' + '\x14';
          }
          FUN_00aa4080(cVar4,4,0,0x3f800000,0x8000010,0xbf800000,0x3f800000);
          return piStack_4;
        }
        if (((uint)piVar8[0x24] >> 0x11 & 1) == 0) {
          iVar2 = FUN_00a98220(piVar8);
          if ((((iVar2 == 0) || (iVar2 = FUN_00ac82f0(), iVar2 == 0)) ||
              (iVar2 = FUN_00ac8350(), iVar2 == 0)) &&
             ((iVar2 = FUN_00a98220(piVar8), iVar2 == 0 || (!bVar1)))) goto LAB_004f6d5d;
        }
        else {
          FUN_004f2af0();
          FUN_00a8e680(piVar8,0,0x3e4ccccd);
        }
        FUN_00a8e5d0(param_1,piVar8,0);
        (**(code **)(*param_1 + 0x198))(piVar6,piVar8,0x100);
        return 1;
      }
    }
LAB_004f6ca7:
    piVar8 = piVar8 + 0x54;
    if (piVar8 == piVar5) {
      return piStack_4;
    }
  } while( true );
}

// 004F6F00  FUN_004f6f00  size=65  [between]
void __fastcall FUN_004f6f00(int param_1)

{
  undefined1 local_160 [348];
  
  if ((*(byte *)(param_1 + 0xf5a) & 1) == 0) {
    FUN_004039a0(2,param_1,0);
    FUN_00a963e0(local_160);
    *(uint *)(param_1 + 0xf58) = *(uint *)(param_1 + 0xf58) | 0x10000;
  }
  return;
}

// 004F6F50  FUN_004f6f50  size=46  [between]
void __fastcall FUN_004f6f50(undefined4 param_1)

{
  undefined1 local_160 [348];
  
  FUN_004039a0(1,param_1,0);
  FUN_00a963e0(local_160);
  return;
}

// 004F6F80  FUN_004f6f80  size=50  [between]
void __thiscall FUN_004f6f80(undefined4 param_1,undefined4 param_2)

{
  undefined1 local_160 [348];
  
  FUN_004039a0(param_2,param_1,0);
  FUN_00a963e0(local_160);
  return;
}

// 004F6FC0  FUN_004f6fc0  size=46  [between]
void __fastcall FUN_004f6fc0(undefined4 param_1)

{
  undefined1 local_160 [348];
  
  FUN_004039a0(9,param_1,0);
  FUN_00a963e0(local_160);
  return;
}

// 004F6FF0  FUN_004f6ff0  size=68  [between]
void __fastcall FUN_004f6ff0(int param_1)

{
  undefined1 local_160 [348];
  
  if ((*(uint *)(param_1 + 0xf58) & 0x2000) == 0) {
    FUN_004039a0(6,param_1,0);
    FUN_00a963e0(local_160);
    *(uint *)(param_1 + 0xf58) = *(uint *)(param_1 + 0xf58) | 0x2000;
  }
  return;
}

// 004F7040  Em0180::startup  size=1271  [class]
undefined4 __fastcall Em0180::startup(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int unaff_EBX;
  uint uVar9;
  float *pfVar10;
  float10 fVar11;
  undefined4 uStack_184;
  undefined1 auStack_180 [4];
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined1 auStack_164 [352];
  
  iVar5 = BehaviorEmBase::startup();
  if (iVar5 == 0) {
    return 0;
  }
  uVar9 = 0;
  (**(code **)(*param_1 + 0x1f0))(0);
  param_1[400] = 5;
  uStack_184 = 0;
  iVar5 = FUN_00a54ae0(&uStack_184,param_1 + 0x125,"_col.hkx");
  if (iVar5 != 0) {
    iVar6 = FUN_00dd3500(0x3c,&DAT_01b7bd48);
    if (iVar6 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = RigidBodyCollision::RigidBodyCollision();
    }
    param_1[0x1ec] = iVar6;
    if (iVar6 != 0) {
      FUN_008f6410(param_1[0x13c],iVar5,uStack_184);
      FUN_008f2cd0(1);
      (**(code **)(*(int *)param_1[0x1ec] + 0x108))(8);
      puVar7 = (undefined4 *)FUN_009f8b60();
      (**(code **)(*(int *)param_1[0x1ec] + 0x114))(*puVar7);
      FUN_008f16a0("_floor",0x20);
      FUN_004f2a50();
      if ((int *)param_1[0x1ec] != (int *)0x0) {
        (**(code **)(*(int *)param_1[0x1ec] + 0xe0))(0,"_floor",0,0);
      }
    }
  }
  if (param_1[0x1ec] != 0) {
    lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>_2(8);
    Behavior::addDefenseCollisionFromRigidBody_2(param_1[0x1ec],2);
    iVar6 = 0;
    iVar5 = (**(code **)(*(int *)param_1[0x1ec] + 0xc))();
    if (0 < iVar5) {
      do {
        (**(code **)(*(int *)param_1[0x1ec] + 300))(auStack_180,iVar6);
        if (unaff_EBX != 0) {
          uVar8 = FUN_009124a0();
          lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(iVar6,uVar8);
        }
        iVar6 = iVar6 + 1;
        iVar5 = (**(code **)(*(int *)param_1[0x1ec] + 0xc))();
      } while (iVar6 < iVar5);
    }
  }
  param_1[0x38d] = 0x3f000000;
  param_1[0x3ab] = 0x3f000000;
  param_1[0x3aa] = 0x40490fdb;
  iVar5 = FUN_00a12210(7);
  if (iVar5 != 0) {
    fVar1 = *(float *)(iVar5 + 0x44) - (float)param_1[0x11];
    param_1[0x3ab] = (int)fVar1;
    param_1[0x3aa] = (int)(fVar1 * 6.2831855);
  }
  pfVar10 = (float *)(param_1 + 0x379);
  do {
    iVar5 = FUN_00a12210((&DAT_0164021c)[*(int *)((int)&DAT_016403d0 + uVar9)]);
    if (iVar5 != 0) {
      pfVar10[-1] = *(float *)(iVar5 + 0x40);
      *pfVar10 = *(float *)(iVar5 + 0x44);
      pfVar10[1] = *(float *)(iVar5 + 0x48);
      pfVar10[2] = *(float *)(iVar5 + 0x4c);
      *pfVar10 = *pfVar10 - (float)param_1[0x3ab];
    }
    uVar9 = uVar9 + 4;
    pfVar10 = pfVar10 + 4;
  } while (uVar9 < 0x10);
  fVar1 = ((float)param_1[900] + (float)param_1[0x380]) * 0.5;
  fVar4 = ((float)param_1[0x386] + (float)param_1[0x382]) * 0.5;
  fVar2 = fVar1 - ((float)param_1[0x378] + (float)param_1[0x37c]) * 0.5;
  fVar3 = fVar4 - ((float)param_1[0x37a] + (float)param_1[0x37e]) * 0.5;
  fVar1 = fVar1 - (float)param_1[0x10];
  fVar4 = fVar4 - (float)param_1[0x12];
  param_1[0x3d6] = 0;
  param_1[0x38d] = (int)(SQRT(fVar4 * fVar4 + fVar1 * fVar1) / SQRT(fVar3 * fVar3 + fVar2 * fVar2));
  param_1[0x3d6] = param_1[0x3d6] | 0x40;
  param_1[0x3b6] = 0;
  param_1[0x3b7] = 0;
  param_1[0x3b8] = -1;
  param_1[0x3ba] = 0;
  param_1[0x3cd] = 0;
  param_1[0x3bd] = 0;
  param_1[0x3b9] = 2;
  param_1[0x373] = 0;
  param_1[0x3ce] = 0;
  param_1[0x3cf] = 0;
  param_1[0x370] = param_1[0x25];
  param_1[0x38c] = 0;
  param_1[0x3c4] = 0;
  param_1[0x3a8] = 0;
  param_1[0x374] = 0x3f800000;
  param_1[0x375] = 0;
  param_1[0x3b4] = 0;
  param_1[0x388] = 0;
  param_1[0x389] = 0;
  param_1[0x38a] = 0;
  param_1[0x38b] = 0;
  if (param_1[300] == 0x20182) {
    FUN_00a960d0(param_1);
    FUN_00a92f90();
    FUN_00e26e90();
    uVar8 = 0x20182;
  }
  else {
    if (param_1[300] != 0x20181) goto LAB_004f73db;
    FUN_00a960d0(param_1);
    FUN_00a92f90();
    FUN_00e26e90();
    uVar8 = 0x20181;
  }
  FUN_00e272b0(uVar8,0x20180);
LAB_004f73db:
  FUN_00a929d0();
  fVar11 = (float10)FUN_00ac8570(0xd);
  param_1[0x3d4] = (int)(float)fVar11;
  fVar11 = (float10)FUN_00ac8570(0xe);
  param_1[0x3d5] = (int)(float)fVar11;
  FUN_004f2b40();
  if ((undefined4 *)param_1[0xdc] != (undefined4 *)0x0) {
    param_1[0xd9] = param_1[0xd9] | 0x400000;
    *(undefined4 *)param_1[0xdc] = 0;
  }
  if (param_1[0xdc] != 0) {
    *(undefined4 *)(param_1[0xdc] + 4) = 0;
    *(undefined4 *)(param_1[0xdc] + 8) = 1;
  }
  FUN_009fd240();
  param_1[0x3bc] = 0x40a00000;
  param_1[0x3ba] = 0;
  param_1[0x3bb] = 0;
  FUN_004039a0(1,param_1,0);
  FUN_00a963e0(auStack_164);
  if ((param_1[0x129] == 1) && ((*(byte *)((int)param_1 + 0xf5a) & 1) == 0)) {
    FUN_004039a0(2,param_1,0);
    FUN_00a963e0(auStack_164);
    param_1[0x3d6] = param_1[0x3d6] | 0x10000;
  }
  if ((undefined4 *)param_1[0xdc] != (undefined4 *)0x0) {
    param_1[0xd9] = param_1[0xd9] & 0xffbfffff;
    *(undefined4 *)param_1[0xdc] = 1;
  }
  if (param_1[0xdc] != 0) {
    *(undefined4 *)(param_1[0xdc] + 4) = 0;
    *(undefined4 *)(param_1[0xdc] + 8) = 0;
  }
  if (param_1[0xdc] != 0) {
    *(undefined4 *)(param_1[0xdc] + 0xc) = 1;
  }
  FUN_00ac94e0("_EFD01");
  uStack_17c = 0x3f666666;
  uStack_178 = 0x3f99999a;
  uStack_174 = 0x3f8ccccd;
  uStack_170 = 0x3e4ccccd;
  uStack_16c = 0x40400000;
  uStack_168 = 0x40000000;
  FUN_00a8e4d0(&uStack_170,&uStack_17c);
  return 1;
}

// 004F7550  FUN_004f7550  size=1992  [between]
void __fastcall FUN_004f7550(int *param_1)

{
  int *piVar1;
  float *pfVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  float local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  undefined4 local_194;
  float local_190;
  float local_18c;
  float local_188;
  uint local_174;
  float local_170;
  float local_16c;
  float local_168;
  undefined1 local_160 [348];
  
  switch(param_1[0x187]) {
  case 0:
    FUN_004f2df0();
    FUN_00aa4080(0x18,0,0x3e4ccccd,0x3f800000,0x8000080,0xbf800000,0x3f800000);
    FUN_00a8d710(param_1 + 0x10);
    param_1[0x3a6] = 0x3b23d70a;
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x3a7] = 0x3bc49ba6;
    param_1[0x3ac] = 0x3e75c28f;
    param_1[0x3ad] = 0x3e23d70a;
    param_1[0x3a8] = 0;
    param_1[0x3d6] = param_1[0x3d6] & 0xfffffeff;
    param_1[0x3ae] = 0;
    param_1[0x3af] = 0;
    param_1[0x3b0] = 0;
    FUN_004f4700();
    FUN_00a8d280();
    param_1[0x3d2] = 0;
    param_1[0x248] = (int)(1.0 / (float)param_1[0x3ad]);
    param_1[0x249] = 0x3c0efa35;
    param_1[0x24a] = -0x43f105cb;
    if (param_1[0x129] != 1) {
      FUN_004f6f00();
    }
    if ((*(byte *)(param_1 + 0x2c0) & 4) != 0) {
      param_1[0x3a8] = param_1[0x3ac];
      return;
    }
    break;
  case 1:
    iVar6 = FUN_00a94ce0(0);
    if (iVar6 != 0) {
      param_1[0x3ae] = param_1[0x10];
      param_1[0x3af] = param_1[0x11];
      param_1[0x3b0] = param_1[0x12];
      FUN_004f2980();
      param_1[0x187] = param_1[0x187] + 1;
    }
  case 2:
    local_174 = FUN_00c9db20(5);
    local_174 = local_174 & 0xff;
    piVar1 = param_1 + 0x3b1;
    local_198 = (float)param_1[0x3a8] * 10.0 + 2.5;
    local_1a0 = 0.0;
    local_194 = 0;
    local_1a4 = 0.0;
    local_19c = 0.0;
    iVar6 = FUN_00a8d790(piVar1);
    if ((iVar6 != 0) &&
       (fVar3 = (float)param_1[0x3a8], !NAN(fVar3) && 0.05 < fVar3 != (fVar3 == 0.05))) {
      fVar3 = (float)param_1[0x248] * (float)param_1[0x3a8];
      if (1.0 < fVar3) {
        fVar3 = 1.0;
      }
      local_19c = (float)param_1[0x25];
      fVar7 = (float10)FUN_004f3ff0(piVar1,&local_194,fVar3 * (float)param_1[0x249],
                                    (float)param_1[0x24a] * fVar3);
      local_1a0 = (float)fVar7;
      fVar7 = (float10)FUN_00ddba30((float)param_1[0x25] - local_19c);
      fVar7 = fVar7 / (float10)(float)param_1[0x244];
      local_19c = (float)fVar7;
      local_1a4 = (float)((float10)-127.32396 * fVar7);
      FUN_004f2680(param_1 + 0x249,param_1 + 0x24a,(float)fVar7,0x3c00adfc);
    }
    FUN_004f4020(local_1a4,0x3d23d70a,0x3f000000);
    FUN_004f2760(local_194);
    param_1[0x3d1] = (int)local_19c;
    FUN_004f4080(local_19c);
    FUN_004f24b0(ABS(local_1a4) <= 0.9);
    (**(code **)(*param_1 + 0x14))();
    iVar6 = FUN_00c9daf0();
    if (local_174 == 0) {
      if (((iVar6 == 0) || (iVar5 = FUN_00a8d800(), iVar5 == 0)) ||
         (fVar7 = (float10)FUN_004f4170(piVar1,iVar6,0), fVar7 <= (float10)0)) {
        fVar7 = (float10)local_198;
      }
      iVar6 = FUN_00a97e60((float)fVar7,1);
      if (iVar6 != 0) {
        param_1[0x3d6] = param_1[0x3d6] & 0xffff7fff;
        RayCastManager::getWork(param_1 + 0x3d3);
        param_1[0x3ae] = *piVar1;
        param_1[0x3af] = param_1[0x3b2];
        param_1[0x3b0] = param_1[0x3b3];
        cVar4 = FUN_00c9db20(5);
        if (cVar4 != '\0') {
          param_1[0x3a9] = param_1[0x3a8];
        }
      }
    }
    else {
      iVar6 = FUN_004f4390(piVar1,param_1 + 0x3ae,local_1a0,
                           (float)param_1[0x3a8] * 333.33334 * (float)param_1[0x3a8] * 0.4);
      if (((iVar6 != 0) || (10.0 < (float)param_1[0x3b4])) || ((float)param_1[0x3a8] <= 0.08)) {
        param_1[0x3d6] = param_1[0x3d6] | 0x200;
        FUN_00e5e0c0("et0050_se_mov_slow_m",param_1,0xffffffff,0);
        param_1[0x3a9] = param_1[0x3a8];
        param_1[0x187] = param_1[0x187] + 1;
        param_1[0x3a7] = 0x3b449ba6;
        param_1[0x3c4] = 0;
        param_1[0x3ad] = 0;
      }
    }
    if (((param_1[0x3d6] & 0x200U) != 0) ||
       (fVar3 = (float)param_1[0x3a8], !NAN(fVar3) && 0.15 < fVar3 != (fVar3 == 0.15))) {
      param_1[0x3d6] = param_1[0x3d6] | 0x1000;
      return;
    }
    break;
  case 3:
    param_1[0x3c4] = param_1[0x3c4] + 1;
    if (3 < param_1[0x3c4]) {
      if ((DAT_018b9174 != 0xe23) && (DAT_018b9174 != 0xe27)) {
        FUN_004039a0(0x15,param_1,0);
        FUN_00a963e0(local_160);
      }
      param_1[0x3c4] = 0;
    }
    pfVar2 = (float *)(param_1 + 0x3b1);
    local_1a0 = 0.0;
    local_1a4 = 0.0;
    iVar6 = FUN_00a8d790(pfVar2);
    if (iVar6 != 0) {
      local_190 = *pfVar2 - (float)param_1[0x3ae];
      local_18c = (float)param_1[0x3b2] - (float)param_1[0x3af];
      local_188 = (float)param_1[0x3b3] - (float)param_1[0x3b0];
      local_170 = *pfVar2 - (float)param_1[0x10];
      local_16c = (float)param_1[0x3b2] - (float)param_1[0x11];
      local_168 = (float)param_1[0x3b3] - (float)param_1[0x12];
      fVar3 = local_188 * local_188 + local_18c * local_18c + local_190 * local_190;
      if (fVar3 < 0.0 == (fVar3 == 0.0)) {
        FUN_00ddf460(&local_190,&local_190);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        local_190 = 0.0;
        local_18c = 1.0;
        local_188 = 0.0;
      }
      if (4.0 <= local_168 * local_188 + local_170 * local_190 + local_16c * local_18c) {
        fVar7 = (float10)FUN_00fdc1f0();
        local_1a4 = (float)(fVar7 * (float10)(float)param_1[0x3d1]);
        param_1[0x25] =
             (int)(float)(fVar7 * (float10)(float)param_1[0x3d1] + (float10)(float)param_1[0x25]);
      }
      else {
        fVar3 = (float)param_1[0x3a8] * (float)param_1[0x248];
        if (1.0 < fVar3) {
          fVar3 = 1.0;
        }
        local_198 = (float)param_1[0x25];
        FUN_004f3ff0(pfVar2,&local_1a0,fVar3 * (float)param_1[0x249],(float)param_1[0x24a] * fVar3);
        fVar7 = (float10)FUN_00ddba30((float)param_1[0x25] - local_198);
        local_1a4 = (float)(fVar7 / (float10)(float)param_1[0x244]);
        FUN_004f2680(param_1 + 0x249,param_1 + 0x24a,(float)(fVar7 / (float10)(float)param_1[0x244])
                     ,0x3c00adfc);
      }
    }
    FUN_004f2760(local_1a0);
    param_1[0x3d1] = (int)local_1a4;
    FUN_004f4080(local_1a4);
    if ((float)param_1[0x3ad] < (float)param_1[0x3a8]) {
      fVar3 = (float)param_1[0x3a8] - (float)param_1[0x3a7] * (float)param_1[0x244];
      param_1[0x3a8] = (int)fVar3;
      if (fVar3 < (float)param_1[0x3ad] != (fVar3 == (float)param_1[0x3ad])) {
        param_1[0x3a8] = param_1[0x3ad];
      }
    }
    (**(code **)(*param_1 + 0x14))();
    param_1[0x3a7] = (int)((float)param_1[0x3a7] * 1.0025);
    if ((float)param_1[0x3a8] <= 0.025) {
      FUN_00aa4080(0x19,0,0x3f000000,0x3f800000,0x8000080,0xbf800000,0x3f800000);
      FUN_004f4740();
      param_1[0x187] = param_1[0x187] + 1;
      if (((param_1[0x3d6] & 0x20U) == 0) && ((param_1[0x3d6] & 4U) != 0)) {
        if (param_1[0x129] != 1) {
          FUN_004f4c90();
        }
        param_1[0x3d6] = param_1[0x3d6] | 0x28;
        if (param_1[0x129] != 1) {
          FUN_004f4c90();
        }
        FUN_00a8caf0(7,0,0,0);
        return;
      }
    }
    break;
  case 4:
    iVar6 = FUN_00a94ce0(0);
    if (iVar6 != 0) {
      if (param_1[0x129] != 1) {
        FUN_004f4c90();
      }
      FUN_00a8caf0(0,0,0,0);
    }
  }
  return;
}

// 004F7D30  FUN_004f7d30  size=2577  [between]
void __fastcall FUN_004f7d30(int *param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  float unaff_EDI;
  float10 fVar9;
  uint uVar10;
  float *pfVar11;
  undefined1 *puVar12;
  float *local_248;
  float *local_244;
  float local_230;
  float local_22c;
  float local_228;
  uint local_224;
  float local_204;
  float local_200;
  float local_1fc;
  float local_1f8;
  float fStack_1e8;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  float local_1d8 [2];
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 auStack_1bc [2];
  undefined1 auStack_1b4 [12];
  undefined1 auStack_1a8 [8];
  float local_1a0 [6];
  undefined1 auStack_188 [388];
  
  switch(param_1[0x187]) {
  case 0:
    local_244 = (float *)0x4f7d5c;
    FUN_004f2df0();
    local_244 = (float *)0x3f800000;
    local_248 = (float *)0xbf800000;
    FUN_00aa4080(0x18,0,0x3e4ccccd,0x3f800000,0x8000080);
    local_244 = (float *)(param_1 + 0x10);
    local_248 = (float *)0x4f7d99;
    FUN_00a8d710();
    param_1[0x3a6] = 0x3b449ba6;
    param_1[0x3a7] = 0x3c03126f;
    param_1[0x3ac] = 0x3ea3d70a;
    param_1[0x3ad] = 0x3e4ccccd;
    param_1[0x3a8] = 0;
    param_1[0x3d6] = param_1[0x3d6] & 0xfffffeff;
    param_1[0x3ae] = 0;
    param_1[0x3af] = 0;
    param_1[0x3b0] = 0;
    local_244 = (float *)0x4f7df4;
    FUN_004f4700();
    local_244 = (float *)0x4f7dfb;
    FUN_00a8d280();
    local_244 = (float *)0x4f7e07;
    iVar8 = (**(code **)(*param_1 + 0x84))();
    param_1[0x3b5] = *(int *)(iVar8 + 4);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x24a] = 0x3c8efa35;
    param_1[0x24c] = 0x3c8efa35;
    param_1[0x24b] = 0x3d0efa35;
    param_1[0x24d] = 0x3d0efa35;
    param_1[0x3d1] = 0;
    param_1[0x3d2] = 0;
    param_1[0x3d6] = param_1[0x3d6] & 0xffffbfff;
    if (param_1[0x129] != 1) {
      local_244 = (float *)0x4f7e6a;
      FUN_004f6f00();
      return;
    }
    break;
  case 1:
    local_244 = (float *)0x0;
    local_248 = (float *)0x4f7e78;
    iVar8 = FUN_00a94ce0();
    if (iVar8 != 0) {
      local_244 = (float *)0x4f7e83;
      FUN_004f2980();
      param_1[0x3ae] = param_1[0x10];
      param_1[0x3af] = param_1[0x11];
      param_1[0x3b0] = param_1[0x12];
      param_1[0x187] = param_1[0x187] + 1;
    }
  case 2:
    local_244 = (float *)0x5;
    local_248 = (float *)0x4f7eb1;
    local_224 = FUN_00c9db20();
    local_224 = local_224 & 0xff;
    pfVar1 = (float *)(param_1 + 0x3b1);
    local_204 = (float)param_1[0x3a8] * 10.0 + 2.5;
    local_228 = 0.0;
    local_22c = 0.0;
    local_230 = 0.0;
    local_248 = (float *)0x4f7eea;
    local_244 = pfVar1;
    iVar8 = FUN_00a8d790();
    if (iVar8 != 0) {
      local_1e4 = (float)param_1[0x25];
      bVar5 = true;
      if ((param_1[0x3d6] & 0x200U) != 0) {
        local_200 = *pfVar1 - (float)param_1[0x3ae];
        local_1fc = (float)param_1[0x3b2] - (float)param_1[0x3af];
        local_1f8 = (float)param_1[0x3b3] - (float)param_1[0x3b0];
        local_1e0 = *pfVar1 - (float)param_1[0x10];
        local_1dc = (float)param_1[0x3b2] - (float)param_1[0x11];
        local_1d8[0] = (float)param_1[0x3b3] - (float)param_1[0x12];
        fVar2 = local_1f8 * local_1f8 + local_1fc * local_1fc + local_200 * local_200;
        if (fVar2 < 0.0 == (fVar2 == 0.0)) {
          local_248 = &local_200;
          local_244 = local_248;
          FUN_00ddf460();
          fVar2 = local_1f8;
          fVar3 = local_1fc;
          fVar4 = local_200;
        }
        else {
          local_244 = (float *)&DAT_0163d0ac;
          local_248 = (float *)0x4f7fc2;
          FUN_00dd5650();
          fVar2 = 0.0;
          fVar4 = 0.0;
          fVar3 = 1.0;
        }
        if (((param_1[0x3d6] & 0x4000U) != 0) ||
           (fVar4 * local_1e0 + local_1dc * fVar3 + local_1d8[0] * fVar2 < 2.0)) {
          bVar5 = false;
        }
      }
      fVar2 = (float)param_1[0x3a8];
      if ((!NAN(fVar2) && 0.05 < fVar2 != (fVar2 == 0.05)) && (bVar5)) {
        local_244 = (float *)-(float)param_1[0x24a];
        local_248 = (float *)param_1[0x24a];
        fVar9 = (float10)FUN_004f2550(param_1 + 0x3b5,pfVar1,&local_22c);
        local_228 = (float)fVar9;
        local_244 = (float *)-(float)param_1[0x24b];
        local_248 = (float *)param_1[0x24b];
        FUN_004f3ff0(pfVar1,&local_22c);
        local_244 = (float *)((float)param_1[0x25] - local_1e4);
        local_248 = (float *)0x4f808d;
        fVar9 = (float10)FUN_00ddba30();
        param_1[0x3d1] = (int)(float)(fVar9 / (float10)(float)param_1[0x244]);
        local_230 = (float)-((fVar9 / (float10)(float)param_1[0x244]) /
                            (float10)(float)param_1[0x24d]);
      }
      if ((param_1[0x3d6] & 0x200U) != 0) {
        local_244 = (float *)0x4f80c5;
        fVar9 = (float10)FUN_00fdc1f0();
        fVar2 = (float)param_1[0x3d1];
        param_1[0x3d1] = (int)(float)(fVar9 * (float10)fVar2);
        param_1[0x25] =
             (int)(float)(fVar9 * (float10)fVar2 * (float10)(float)param_1[0x244] +
                         (float10)(float)param_1[0x25]);
      }
    }
    local_244 = (float *)0x4f8113;
    fVar9 = (float10)FUN_00fdc1f0();
    fVar9 = ((float10)local_230 - (float10)(float)param_1[0x3d2]) * ((float10)1 - fVar9) +
            (float10)(float)param_1[0x3d2];
    param_1[0x3d2] = (int)(float)fVar9;
    local_244 = (float *)0x0;
    local_248 = (float *)0x0;
    FUN_00a947e0(0,(float)fVar9);
    local_244 = (float *)local_22c;
    local_248 = (float *)0x4f8157;
    FUN_004f2760();
    if ((param_1[0x3d6] & 0x200U) == 0) {
      local_244 = (float *)local_228;
      local_248 = (float *)0x4f8172;
      iVar8 = FUN_004f44f0();
      if (iVar8 != 0) goto LAB_004f817b;
      iVar8 = 1;
    }
    else {
LAB_004f817b:
      iVar8 = 0;
    }
    local_1d0 = 0;
    local_248 = local_1a0;
    local_1cc = 0;
    local_1c8 = 0x3f800000;
    local_244 = (float *)param_1[0x3b5];
    D3DXMatrixRotationY();
    puVar12 = auStack_1a8;
    pfVar11 = local_1d8;
    D3DXVec3TransformNormal(&local_228);
    uStack_1c4 = 0;
    uStack_1c0 = 0;
    auStack_1bc[0] = 0x3f800000;
    D3DXMatrixRotationY(auStack_1b4,param_1[0x25]);
    D3DXVec3TransformNormal(&local_1dc,&local_1cc,auStack_1bc);
    fVar9 = (float10)unaff_EDI * (float10)local_1e0 +
            (float10)(float)local_244 * (float10)local_1e4 +
            (float10)fStack_1e8 * (float10)(float)local_248;
    uVar10 = (uint)(fVar9 < (float10)0.8);
    if (fVar9 < (float10)0.7) {
      iVar8 = 0;
    }
    if ((float10)0 < fVar9) {
      fVar9 = (float10)FUN_00fdc1f0();
    }
    param_1[0x3a8] =
         (int)(float)((float10)(float)param_1[0x3a8] -
                     ((float10)1 - fVar9) * (float10)(float)param_1[0x3a7] * (float10)1.5);
    local_248 = (float *)(float)((float10)(float)local_248 * fVar9);
    local_244 = (float *)(float)((float10)(float)local_244 * fVar9);
    if ((param_1[0x3d6] & 0x200U) == 0) {
      FUN_004f4080(param_1[0x3d1]);
    }
    if ((iVar8 == 0) &&
       ((float)param_1[0x3ad] < (float)param_1[0x3a8] ==
        ((float)param_1[0x3ad] == (float)param_1[0x3a8]))) {
      param_1[0x24a] = (int)((float)param_1[0x24a] - (float)param_1[0x244] * 0.0013962634);
      fVar2 = (float)param_1[0x24b] - (float)param_1[0x244] * 0.0013962634;
      param_1[0x24b] = (int)fVar2;
      if (fVar2 < 0.0) {
        param_1[0x24a] = 0;
      }
      if ((float)param_1[0x24b] < 0.0) {
        param_1[0x24b] = 0;
      }
    }
    else if ((float)param_1[0x3ac] < (float)param_1[0x3a8] !=
             ((float)param_1[0x3ac] == (float)param_1[0x3a8])) {
      param_1[0x24a] = (int)((float)param_1[0x244] * 0.0013962634 + (float)param_1[0x24a]);
      param_1[0x24b] = (int)((float)param_1[0x244] * 0.0013962634 + (float)param_1[0x24b]);
      fVar2 = (float)param_1[0x24a];
      if ((float)param_1[0x24c] < fVar2) {
        fVar2 = (float)param_1[0x24c];
      }
      param_1[0x24a] = (int)fVar2;
      if ((float)param_1[0x24b] <= (float)param_1[0x24d]) {
        param_1[0x24b] = param_1[0x24b];
      }
      else {
        param_1[0x24b] = param_1[0x24d];
      }
    }
    FUN_004f24b0(iVar8);
    bVar5 = true;
    if ((((param_1[0x3d6] & 0x200U) != 0) && ((float)param_1[0x3a8] <= 0.2)) &&
       ((param_1[0x3d6] & 0x4000U) != 0)) {
      bVar5 = false;
    }
    FUN_004f45a0(&local_248,!bVar5);
    iVar8 = FUN_00c9daf0();
    if (((puVar12 == (undefined1 *)0x0) && (iVar8 != 0)) &&
       ((iVar7 = FUN_00a8d800(), iVar7 != 0 &&
        (fVar9 = (float10)FUN_004f4170(pfVar1,iVar8,1), (float10)0 < fVar9)))) {
      local_22c = (float)fVar9;
    }
    if ((param_1[0x3d6] & 0x200U) == 0) {
      if (puVar12 != (undefined1 *)0x0) {
        iVar8 = 0x3b449ba6;
        fVar2 = (float)param_1[0x3a8] * 333.33334 * (float)param_1[0x3a8] * 0.25;
        if (uVar10 == 0) {
          if (0.5235988 < (float)pfVar11) {
            fVar2 = (1.5707964 - (float)pfVar11) * 0.63661975 * fVar2;
          }
        }
        else {
          iVar8 = 0x3c4ccccd;
          fVar2 = 1.0;
        }
        iVar7 = FUN_004f4390(pfVar1,param_1 + 0x3ae,pfVar11,fVar2);
        if (((iVar7 != 0) || (10.0 < (float)param_1[0x3b4])) || ((float)param_1[0x3a8] <= 0.08)) {
          param_1[0x3d6] = param_1[0x3d6] | 0x200;
          param_1[0x3a9] = param_1[0x3a8];
          FUN_00e5e0c0("et0050_se_mov_slow_m",param_1,0xffffffff,0);
          param_1[0x3a7] = iVar8;
          param_1[0x3ad] = 0;
          param_1[0x3c4] = 0;
          FUN_004f3190(uVar10);
        }
      }
      if (((param_1[0x3d6] & 0x200U) != 0) ||
         (fVar2 = (float)param_1[0x3a8], !NAN(fVar2) && 0.15 < fVar2 != (fVar2 == 0.15)))
      goto LAB_004f8599;
    }
    else {
LAB_004f8599:
      param_1[0x3d6] = param_1[0x3d6] | 0x1000;
    }
    if ((param_1[0x3d6] & 0x200U) == 0) {
      if ((puVar12 == (undefined1 *)0x0) && (iVar8 = FUN_00a97e60(local_22c,1), iVar8 != 0)) {
        param_1[0x3ae] = (int)*pfVar1;
        param_1[0x3af] = param_1[0x3b2];
        param_1[0x3b0] = param_1[0x3b3];
        cVar6 = FUN_00c9db20(5);
        if (cVar6 != '\0') {
          param_1[0x3a9] = param_1[0x3a8];
          return;
        }
      }
    }
    else {
      if ((param_1[0x3d6] & 0x4000U) == 0) {
        param_1[0x3a7] = (int)((float)param_1[0x3a7] * 1.0025);
      }
      param_1[0x3c4] = param_1[0x3c4] + 1;
      if (3 < param_1[0x3c4]) {
        if ((DAT_018b9174 != 0xe23) && (DAT_018b9174 != 0xe27)) {
          FUN_004039a0(0x15,param_1,0);
          FUN_00a963e0(auStack_188);
        }
        param_1[0x3c4] = 0;
      }
      if ((float)param_1[0x3a8] <= 0.025) {
        FUN_00aa4080(0x19,0,0x3f4ccccd,0x3f800000,0x8000080,0xbf800000,0x3f800000);
        param_1[0x187] = param_1[0x187] + 1;
        FUN_004f4740();
        if (((param_1[0x3d6] & 0x20U) == 0) && ((param_1[0x3d6] & 4U) != 0)) {
          param_1[0x3d6] = param_1[0x3d6] | 0x28;
          if (param_1[0x129] != 1) {
            FUN_004f4c90();
          }
          FUN_00a8caf0(7,0,0,0);
          return;
        }
      }
    }
    break;
  case 3:
    local_244 = (float *)0x0;
    local_248 = (float *)0x4f8717;
    iVar8 = FUN_00a94ce0();
    if (iVar8 != 0) {
      if (param_1[0x129] != 1) {
        local_244 = (float *)0x4f872b;
        FUN_004f4c90();
      }
      local_244 = (float *)0x0;
      local_248 = (float *)0x0;
      FUN_00a8caf0(0,0);
    }
  }
  return;
}

// 004F8760  FUN_004f8760  size=1222  [between]
void __fastcall FUN_004f8760(int *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float10 fVar4;
  float local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined1 local_160 [348];
  
  switch(param_1[0x187]) {
  case 0:
    FUN_004f2df0();
    FUN_00aa4080(0x18,0,0x3e4ccccd,0x3f800000,0x8000080,0xbf800000,0x3f800000);
    FUN_00a8d710(param_1 + 0x10);
    param_1[0x3a6] = 0x3b23d70a;
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x3a7] = 0x3bc49ba6;
    param_1[0x3ac] = 0x3e75c28f;
    param_1[0x3ad] = 0x3e23d70a;
    param_1[0x3a8] = 0;
    param_1[0x3d6] = param_1[0x3d6] & 0xfffffeff;
    param_1[0x3ae] = 0;
    param_1[0x3af] = 0;
    param_1[0x3b0] = 0;
    FUN_004f4700();
    FUN_00a8d280();
    param_1[0x3d2] = 0;
    param_1[0x248] = (int)(1.0 / (float)param_1[0x3ad]);
    param_1[0x249] = 0x3c0efa35;
    param_1[0x24a] = -0x43f105cb;
    if (param_1[0x129] != 1) {
      FUN_004f6f00();
    }
    if ((*(byte *)(param_1 + 0x2c0) & 4) != 0) {
      param_1[0x3a8] = param_1[0x3ac];
      return;
    }
    break;
  case 1:
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x3ae] = param_1[0x10];
      param_1[0x3af] = param_1[0x11];
      param_1[0x3b0] = param_1[0x12];
      FUN_004f2980();
      param_1[0x187] = param_1[0x187] + 1;
    }
  case 2:
    fVar2 = 0.0;
    iVar3 = param_1[0x2a1];
    local_170 = 0;
    local_178 = 0.0;
    if (iVar3 != 0) {
      local_16c = *(undefined4 *)(iVar3 + 0x40);
      local_168 = *(undefined4 *)(iVar3 + 0x44);
      local_164 = *(undefined4 *)(iVar3 + 0x48);
      fVar1 = (float)param_1[0x3a8];
      fVar2 = 0.0;
      if (!NAN(fVar1) && 0.05 < fVar1 != (fVar1 == 0.05)) {
        fVar2 = (float)param_1[0x248] * (float)param_1[0x3a8];
        if (1.0 < fVar2) {
          fVar2 = 1.0;
        }
        fVar1 = (float)param_1[0x25];
        FUN_004f3ff0(&local_16c,&local_170,fVar2 * (float)param_1[0x249],
                     (float)param_1[0x24a] * fVar2);
        fVar4 = (float10)FUN_00ddba30((float)param_1[0x25] - fVar1);
        fVar4 = fVar4 / (float10)(float)param_1[0x244];
        local_178 = (float)fVar4;
        fVar2 = (float)((float10)-127.32396 * fVar4);
        FUN_004f2680(param_1 + 0x249,param_1 + 0x24a,(float)fVar4,0x3c00adfc);
      }
    }
    FUN_004f4020(fVar2,0x3d23d70a,0x3f000000);
    FUN_004f2760(local_170);
    param_1[0x3d1] = (int)local_178;
    FUN_004f4080(local_178);
    FUN_004f24b0(~((uint)param_1[0x3d6] >> 9) & 1);
    (**(code **)(*param_1 + 0x14))();
    if (((param_1[0x3d6] & 0x20000U) != 0) || (iVar3 = FUN_004f27f0(), iVar3 != 0)) {
      param_1[0x3d6] = param_1[0x3d6] | 0x200;
      param_1[0x3a9] = param_1[0x3a8];
      param_1[0x3a7] = 0x3b449ba6;
      param_1[0x3ad] = 0;
      param_1[0x187] = 3;
      FUN_00e5e0c0("et0050_se_mov_slow_m",param_1,0xffffffff,0);
      param_1[0x3c4] = 0;
    }
    if (((param_1[0x3d6] & 0x200U) != 0) ||
       (fVar2 = (float)param_1[0x3a8], !NAN(fVar2) && 0.15 < fVar2 != (fVar2 == 0.15))) {
      param_1[0x3d6] = param_1[0x3d6] | 0x1000;
      return;
    }
    break;
  case 3:
    fVar4 = (float10)FUN_00fdc1f0();
    fVar2 = (float)param_1[0x3d1];
    param_1[0x3c4] = param_1[0x3c4] + 1;
    param_1[0x25] = (int)(float)(fVar4 * (float10)fVar2 + (float10)(float)param_1[0x25]);
    if (3 < param_1[0x3c4]) {
      if ((DAT_018b9174 != 0xe23) && (DAT_018b9174 != 0xe27)) {
        FUN_004039a0(0x15,param_1,0);
        FUN_00a963e0(local_160);
      }
      param_1[0x3c4] = 0;
    }
    FUN_004f2760(0);
    FUN_004f4080(param_1[0x3d1]);
    param_1[0x3d1] = (int)(float)(fVar4 * (float10)fVar2);
    if ((float)param_1[0x3ad] < (float)param_1[0x3a8]) {
      fVar2 = (float)param_1[0x3a8] - (float)param_1[0x3a7] * (float)param_1[0x244];
      param_1[0x3a8] = (int)fVar2;
      if (fVar2 < (float)param_1[0x3ad] != (fVar2 == (float)param_1[0x3ad])) {
        param_1[0x3a8] = param_1[0x3ad];
      }
    }
    (**(code **)(*param_1 + 0x14))();
    param_1[0x3a7] = (int)((float)param_1[0x3a7] * 1.0025);
    if ((float)param_1[0x3a8] <= 0.025) {
      FUN_00aa4080(0x19,0,0x3f000000,0x3f800000,0x8000080,0xbf800000,0x3f800000);
      FUN_004f4740();
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 4:
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      if (param_1[0x129] != 1) {
        FUN_004f4c90();
      }
      FUN_00a8caf0(0,0,0,0);
    }
  }
  return;
}

// 004F8C50  FUN_004f8c50  size=2099  [between]
void __fastcall FUN_004f8c50(int *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  float10 fVar6;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  float fStack_194;
  undefined4 local_184;
  float local_180;
  float local_17c;
  float local_178;
  undefined1 auStack_170 [16];
  undefined1 local_160 [348];
  
  switch(param_1[0x187]) {
  case 0:
    FUN_004f2df0();
    FUN_00aa4080(0x18,0,0x3e4ccccd,0x3f800000,0x8000080,0xbf800000,0x3f800000);
    FUN_00a8d710(param_1 + 0x10);
    param_1[0x3a6] = 0x3b23d70a;
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x3a7] = 0x3bc49ba6;
    param_1[0x3ac] = 0x3e4ccccd;
    param_1[0x3ad] = 0x3dcccccd;
    param_1[0x3a8] = 0;
    param_1[0x3d6] = param_1[0x3d6] & 0xfffffeff;
    param_1[0x3ae] = 0;
    param_1[0x3af] = 0;
    param_1[0x3b0] = 0;
    FUN_004f4700();
    FUN_00a8d280();
    param_1[0x3d2] = 0;
    param_1[0x248] = (int)(1.0 / (float)param_1[0x3ad]);
    param_1[0x249] = 0x3c0efa35;
    param_1[0x24a] = -0x43f105cb;
    if (param_1[0x129] != 1) {
      FUN_004f6f00();
    }
    if ((*(byte *)(param_1 + 0x2c0) & 4) != 0) {
      param_1[0x3a8] = param_1[0x3ac];
      return;
    }
    break;
  case 1:
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      param_1[0x3ae] = param_1[0x10];
      param_1[0x3af] = param_1[0x11];
      param_1[0x3b0] = param_1[0x12];
      FUN_004f2980();
      param_1[0x187] = param_1[0x187] + 1;
    }
  case 2:
    local_1a4 = (float)param_1[0x3a8] * 10.0 + 2.5;
    local_184 = 0;
    local_1ac = 0.0;
    local_1a8 = 0.0;
    iVar5 = FUN_00a8d790(param_1 + 0x3b1);
    if ((iVar5 != 0) &&
       (fVar1 = (float)param_1[0x3a8], !NAN(fVar1) && 0.05 < fVar1 != (fVar1 == 0.05))) {
      fVar1 = (float)param_1[0x248] * (float)param_1[0x3a8];
      if (1.0 < fVar1) {
        fVar1 = 1.0;
      }
      fVar2 = (float)param_1[0x25];
      FUN_004f3ff0(param_1 + 0x3b1,&local_184,fVar1 * (float)param_1[0x249],
                   (float)param_1[0x24a] * fVar1);
      fVar6 = (float10)FUN_00ddba30((float)param_1[0x25] - fVar2);
      fVar6 = fVar6 / (float10)(float)param_1[0x244];
      local_1a8 = (float)fVar6;
      local_1ac = (float)((float10)-95.492966 * fVar6);
      FUN_004f2680(param_1 + 0x249,param_1 + 0x24a,(float)fVar6,0x3c2b92a6);
    }
    FUN_004f4020(local_1ac,0x3d23d70a,0x3f000000);
    FUN_004f2760(local_184);
    param_1[0x3d1] = (int)local_1a8;
    FUN_004f4080(local_1a8);
    FUN_004f24b0(ABS(local_1ac) <= 0.9);
    (**(code **)(*param_1 + 0x14))();
    iVar5 = FUN_00c9daf0();
    if (((iVar5 != 0) && (iVar3 = FUN_00a8d800(), iVar3 != 0)) &&
       (fVar6 = (float10)FUN_004f4170(param_1 + 0x3b1,iVar5,0), (float10)0 < fVar6)) {
      local_1a4 = (float)fVar6;
    }
    iVar5 = param_1[0x2a1];
    if ((iVar5 != 0) &&
       (fVar1 = (float)param_1[0x10] - *(float *)(iVar5 + 0x40),
       fVar2 = (float)param_1[0x12] - *(float *)(iVar5 + 0x48),
       fVar2 * fVar2 + fVar1 * fVar1 < 225.0)) {
      local_1a0 = *(float *)(iVar5 + 0x40) - (float)param_1[0x10];
      local_19c = *(float *)(iVar5 + 0x44) - (float)param_1[0x11];
      local_198 = *(float *)(iVar5 + 0x48) - (float)param_1[0x12];
      fStack_194 = *(float *)(iVar5 + 0x4c) - (float)param_1[0x13];
      fVar1 = local_198 * local_198 + local_19c * local_19c + local_1a0 * local_1a0;
      if (fVar1 < 0.0 == (fVar1 == 0.0)) {
        FUN_00ddf460(&local_1a0,&local_1a0);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        local_1a0 = 0.0;
        local_19c = 1.0;
        local_198 = 0.0;
      }
      pfVar4 = (float *)FUN_00a925a0(auStack_170);
      fVar6 = (float10)fcos((float10)0.7853981852531433);
      if (fVar6 < (float10)pfVar4[2] * (float10)local_198 +
                  (float10)local_1a0 * (float10)*pfVar4 + (float10)pfVar4[1] * (float10)local_19c) {
        param_1[0x3d6] = param_1[0x3d6] | 0x200;
        FUN_004f2dd0();
        param_1[0x187] = param_1[0x187] + 1;
        param_1[0x3a9] = param_1[0x3a8];
        param_1[0x3c4] = 0;
        param_1[0x3a7] = 0x3b449ba6;
        param_1[0x3ad] = 0;
      }
    }
    iVar5 = FUN_00a97e60(local_1a4,1);
    if (iVar5 != 0) {
      param_1[0x3d6] = param_1[0x3d6] & 0xffff7fff;
      RayCastManager::getWork(param_1 + 0x3d3);
      param_1[0x3ae] = param_1[0x3b1];
      param_1[0x3af] = param_1[0x3b2];
      param_1[0x3b0] = param_1[0x3b3];
    }
    if (((param_1[0x3d6] & 0x200U) != 0) ||
       (fVar1 = (float)param_1[0x3a8], !NAN(fVar1) && 0.15 < fVar1 != (fVar1 == 0.15))) {
      param_1[0x3d6] = param_1[0x3d6] | 0x1000;
      return;
    }
    break;
  case 3:
    pfVar4 = (float *)(param_1 + 0x3b1);
    local_1a4 = 0.0;
    local_1ac = 0.0;
    iVar5 = FUN_00a8d790(pfVar4);
    if (iVar5 != 0) {
      local_1a0 = *pfVar4 - (float)param_1[0x3ae];
      local_19c = (float)param_1[0x3b2] - (float)param_1[0x3af];
      local_198 = (float)param_1[0x3b3] - (float)param_1[0x3b0];
      local_180 = *pfVar4 - (float)param_1[0x10];
      local_17c = (float)param_1[0x3b2] - (float)param_1[0x11];
      local_178 = (float)param_1[0x3b3] - (float)param_1[0x12];
      fVar1 = local_198 * local_198 + local_1a0 * local_1a0 + local_19c * local_19c;
      if (fVar1 < 0.0 == (fVar1 == 0.0)) {
        FUN_00ddf460(&local_1a0,&local_1a0);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        local_1a0 = 0.0;
        local_19c = 1.0;
        local_198 = 0.0;
      }
      if (4.0 <= local_178 * local_198 + local_180 * local_1a0 + local_17c * local_19c) {
        fVar6 = (float10)FUN_00fdc1f0();
        local_1ac = (float)(fVar6 * (float10)(float)param_1[0x3d1]);
        param_1[0x25] =
             (int)(float)(fVar6 * (float10)(float)param_1[0x3d1] + (float10)(float)param_1[0x25]);
      }
      else {
        fVar1 = (float)param_1[0x3a8] * (float)param_1[0x248];
        if (1.0 < fVar1) {
          fVar1 = 1.0;
        }
        fVar2 = (float)param_1[0x25];
        FUN_004f3ff0(pfVar4,&local_1a4,fVar1 * (float)param_1[0x249],(float)param_1[0x24a] * fVar1);
        fVar6 = (float10)FUN_00ddba30((float)param_1[0x25] - fVar2);
        local_1ac = (float)(fVar6 / (float10)(float)param_1[0x244]);
        FUN_004f2680(param_1 + 0x249,param_1 + 0x24a,(float)(fVar6 / (float10)(float)param_1[0x244])
                     ,0x3c2b92a6);
      }
    }
    param_1[0x3c4] = param_1[0x3c4] + 1;
    if (3 < param_1[0x3c4]) {
      if ((DAT_018b9174 != 0xe23) && (DAT_018b9174 != 0xe27)) {
        FUN_004039a0(0x15,param_1,0);
        FUN_00a963e0(local_160);
      }
      param_1[0x3c4] = 0;
    }
    FUN_004f2760(local_1a4);
    param_1[0x3d1] = (int)local_1ac;
    FUN_004f4080(local_1ac);
    if ((float)param_1[0x3ad] < (float)param_1[0x3a8]) {
      fVar1 = (float)param_1[0x3a8] - (float)param_1[0x3a7] * (float)param_1[0x244];
      param_1[0x3a8] = (int)fVar1;
      if (fVar1 < (float)param_1[0x3ad] != (fVar1 == (float)param_1[0x3ad])) {
        param_1[0x3a8] = param_1[0x3ad];
      }
    }
    (**(code **)(*param_1 + 0x14))();
    param_1[0x3a7] = (int)((float)param_1[0x3a7] * 1.0025);
    if ((float)param_1[0x3a8] <= 0.025) {
      FUN_00aa4080(0x19,0,0x3f000000,0x3f800000,0x8000080,0xbf800000,0x3f800000);
      FUN_004f4740();
      param_1[0x187] = param_1[0x187] + 1;
      if (((*(byte *)(param_1 + 0x3d6) & 0x20) == 0) && ((short)param_1[0x2ad] == -1)) {
        if (param_1[0x129] != 1) {
          FUN_004f4c90();
        }
        param_1[0x3b8] = (int)*(short *)((int)param_1 + 0xab2);
        param_1[0x3d6] = param_1[0x3d6] | 8;
        param_1[0x3d6] = param_1[0x3d6] | 0x20;
        FUN_00a8caf0(7,0,0,0);
        return;
      }
    }
    break;
  case 4:
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      if (param_1[0x129] != 1) {
        FUN_004f4c90();
      }
      FUN_00a8caf0(0,0,0,0);
    }
  }
  return;
}

// 004F94A0  FUN_004f94a0  size=406  [between]
void __fastcall FUN_004f94a0(int *param_1)

{
  float fVar1;
  int iVar2;
  undefined1 local_160 [348];
  
  switch(param_1[0x187]) {
  case 0:
    FUN_004f2c90();
    FUN_004039a0(9,param_1,0);
    FUN_00a963e0(local_160);
    FUN_00e5e0c0("et0050_se_dmg_spark",param_1,0xffffffff,0);
    param_1[0x248] = 0x42f00000;
    param_1[0x187] = param_1[0x187] + 1;
    return;
  case 1:
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] <= 0.0) {
      param_1[0x187] = 2;
      return;
    }
    break;
  case 2:
    FUN_00a8c9b0(0,1,0x3f800000,0);
    FUN_004f4c90();
    FUN_00a8c9b0(0,9,0x3f800000,0);
    FUN_00e5e0c0("et0050_se_dmg_explosion",param_1,0xffffffff,0);
    FUN_004f3ec0();
    FUN_004039a0(10,param_1,0);
    FUN_00a963e0(local_160);
    (**(code **)(*param_1 + 0x20))();
    (**(code **)(*param_1 + 200))(0);
    (**(code **)(*(int *)param_1[0x1ec] + 0xdc))(0);
    (**(code **)(*param_1 + 0x318))();
    if (param_1[0x1d9] != 0) {
      FUN_008e3c10();
      FUN_008e1c60();
      param_1[0x1d9] = 0;
    }
    param_1[0x187] = param_1[0x187] + 1;
    return;
  case 3:
    iVar2 = FUN_00a8c890(0);
    if (*(int *)(iVar2 + 0x98) == 0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 4:
    FUN_00a805f0();
  }
  return;
}

// 004F9650  FUN_004f9650  size=89  [between]
void __fastcall FUN_004f9650(int param_1)

{
  switch(*(undefined4 *)(param_1 + 0x618)) {
  case 0:
    FUN_004f3520();
    return;
  case 1:
    FUN_004f3620();
    return;
  case 2:
    FUN_004f7550();
    return;
  case 3:
    FUN_004f7d30();
    return;
  case 4:
    FUN_004f36b0();
    return;
  case 5:
    FUN_004f8760();
    return;
  case 6:
    FUN_004f8c50();
    return;
  case 7:
    FUN_004f4d50();
    return;
  case 8:
    FUN_004f3740();
    return;
  case 9:
    FUN_004f4f40();
    return;
  case 10:
    FUN_004f94a0();
    return;
  case 0xb:
    FUN_004f68c0();
    return;
  case 0xc:
    FUN_004f5550();
    return;
  case 0xd:
    FUN_004f5e00();
    return;
  default:
    return;
  }
}

// 004F96F0  Em0180::vf19C  size=423  [class]
void __thiscall Em0180::vf19C(int *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  undefined1 local_1f0 [48];
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined1 auStack_174 [368];
  
  uVar1 = *(undefined4 *)(param_2 + 0x100);
  uVar2 = *(undefined4 *)(param_2 + 0x104);
  uVar3 = *(undefined4 *)(param_2 + 0x108);
  FUN_009dbcf0();
  FID_conflict__memcpy(local_1f0,(void *)(param_2 + 0x40),0x40);
  local_1c0 = uVar1;
  local_1bc = uVar2;
  local_1b8 = uVar3;
  if (*(short *)(param_2 + 0x84) == -1) {
    (**(code **)(*param_1 + 0x1ac))
              (*(undefined4 *)(param_2 + 0x144),param_2,*(undefined4 *)(param_2 + 300),local_1f0);
  }
  else {
    (**(code **)(*param_1 + 0x1a8))(param_2,param_3,param_1);
  }
  iVar5 = FUN_00a8eea0();
  fVar6 = (float)iVar5;
  iVar5 = FUN_00a8eeb0();
  fVar6 = fVar6 / (float)iVar5;
  fVar4 = 1.0 - fVar6;
  if ((float)param_1[0x3d5] < fVar4 == ((float)param_1[0x3d5] == fVar4)) {
    if (((float)param_1[0x3d4] < fVar4 != ((float)param_1[0x3d4] == fVar4)) &&
       (1.0 - (float)param_1[0x374] < (float)param_1[0x3d4])) {
      FUN_004039a0(7,param_1,0);
      FUN_00a963e0(auStack_174);
      FUN_004f2af0();
      param_1[0x374] = (int)fVar6;
      return;
    }
  }
  else if (1.0 - (float)param_1[0x374] < (float)param_1[0x3d5]) {
    FUN_004039a0(8,param_1,0);
    FUN_00a963e0(auStack_174);
    FUN_004f2af0();
    param_1[0x374] = (int)fVar6;
    return;
  }
  param_1[0x374] = (int)fVar6;
  return;
}

// 004F98A0  Em0180::vf4C  size=153  [class]
void __fastcall Em0180::vf4C(int param_1)

{
  int iVar1;
  
  BehaviorEmBase::vf4C();
  *(uint *)(param_1 + 0xf58) = *(uint *)(param_1 + 0xf58) & 0xffffefff;
  iVar1 = FUN_00ac4770();
  if (iVar1 == 0) {
    switch(*(undefined4 *)(param_1 + 0x618)) {
    case 0:
      FUN_004f3460();
      break;
    case 1:
      FUN_004f35d0();
      break;
    case 4:
      FUN_004f23f0();
    }
  }
  FUN_004f9650();
  FUN_00ac80a0(0x3f800000,0x3f800000);
  FUN_004f69f0();
  if (0.0 < *(float *)(param_1 + 0xed0)) {
    *(float *)(param_1 + 0xed0) = *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0xed0);
  }
  FUN_004f66b0();
  return;
}

// 00AAF6E0  Em0180::Em0180  size=83  [class]
undefined4 * __fastcall Em0180::Em0180(undefined4 *param_1)

{
  BehaviorEmBase::BehaviorEmBase();
  *param_1 = vftable;
  FUN_00904d60();
  FUN_00904d60();
  FUN_00a603a0();
  FUN_00a7c930();
  FUN_00904d60();
  param_1[0x3d6] = 0;
  return param_1;
}

// 00AAF740  Em0180::vf04  size=6  [class]
undefined * Em0180::vf04(void)

{
  return &DAT_01b34ef4;
}

// 00AAF750  Em0180::vf238  size=3  [class]
undefined4 Em0180::vf238(void)

{
  return 0;
}

// 00AAF760  Em0180::vf23C  size=3  [class]
undefined4 Em0180::vf23C(void)

{
  return 0;
}

// 00AB8070  Em0180::destruct  size=76  [class]
undefined4 __thiscall Em0180::destruct(undefined4 param_1,byte param_2)

{
  FUN_00905ce0();
  cXml::cXml_7();
  FUN_00905ce0();
  FUN_00905ce0();
  cEnemyCautionStateManager::~cEnemyCautionStateManager();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}


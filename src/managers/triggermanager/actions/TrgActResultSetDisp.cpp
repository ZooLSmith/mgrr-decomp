// src/managers/triggermanager/actions/TrgActResultSetDisp.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C77530..00C9D540, 2765 functions

#include "mgrr.h"

// 00C77530  Trigger::cTriggerTask::vf04  size=5  [class]
void __fastcall Trigger::cTriggerTask::vf04(int param_1)

{
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 1;
  return;
}

// 00C77540  Trigger::cTriggerTask::vf08  size=9  [class]
void __fastcall Trigger::cTriggerTask::vf08(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

// 00C775C0  FUN_00c775c0  size=12  [between]
void __fastcall FUN_00c775c0(int param_1)

{
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 1;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

// 00C775D0  FUN_00c775d0  size=12  [between]
void __fastcall FUN_00c775d0(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

// 00C775E0  FUN_00c775e0  size=1  [between]
void FUN_00c775e0(void)

{
  return;
}

// 00C775F0  FUN_00c775f0  size=219  [between]
void __fastcall FUN_00c775f0(uint *param_1)

{
  if ((*param_1 & 1) != 0) {
    if (param_1[2] == 0) {
      FUN_00da9760(2,param_1[1]);
    }
    else {
      FUN_00da9760(2,param_1[1]);
      param_1[2] = param_1[2] - 1;
      if ((int)param_1[2] < 1) {
        *param_1 = *param_1 & 0xfffffffe;
        param_1[2] = 0;
      }
    }
  }
  if ((*param_1 & 2) != 0) {
    if (param_1[0xd] == 0) {
      FUN_00da9790(2,param_1[0xb]);
    }
    else {
      FUN_00da9790(2,param_1[0xb]);
      param_1[0xd] = param_1[0xd] - 1;
      if ((int)param_1[0xd] < 1) {
        *param_1 = *param_1 & 0xfffffffd;
        param_1[0xd] = 0;
      }
    }
  }
  if ((*param_1 & 4) != 0) {
    if (param_1[10] == 0) {
      FUN_00da9760(2,param_1[8]);
      FUN_00da9660(2,param_1 + 4,param_1[9]);
      return;
    }
    FUN_00da9760(2,param_1[8]);
    FUN_00da9660(2,param_1 + 4,param_1[9]);
    param_1[10] = param_1[10] - 1;
    if ((int)param_1[10] < 1) {
      *param_1 = *param_1 & 0xfffffffb;
      param_1[10] = 0;
    }
  }
  return;
}

// 00C777E0  FUN_00c777e0  size=83  [between]
undefined4 __thiscall FUN_00c777e0(int param_1,int *param_2)

{
  int iVar1;
  
  if (param_2[0xb] == 1) {
    param_2[0xb] = 2;
    return 1;
  }
  iVar1 = FUN_00e9e570(2,param_2 + 1,*(undefined4 *)(param_1 + 0x3c),0,0);
  *param_2 = iVar1;
  if (iVar1 != 0) {
    param_2[10] = 2;
    return 1;
  }
  return 0;
}

// 00C77840  FUN_00c77840  size=138  [between]
undefined4 FUN_00c77840(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1[0xb] == 1) {
    param_1[0xb] = 0;
    param_1[10] = 6;
    return 1;
  }
  iVar1 = FUN_00e9cf60(*param_1);
  if (iVar1 == 1) {
    iVar1 = FUN_00e9cfe0(*param_1);
    if (iVar1 == 1) {
      uVar2 = FUN_00e9d0b0(*param_1);
      param_1[0xc] = uVar2;
      if (param_1[0xd] != 0) {
        FUN_00de3540(uVar2,0);
      }
      param_1[0xe] = param_1[0xe] + 1;
      FUN_00e9d710(*param_1);
      param_1[10] = 3;
      return 1;
    }
  }
  return 0;
}

// 00C778F0  FUN_00c778f0  size=68  [between]
undefined4 FUN_00c778f0(undefined4 *param_1)

{
  int iVar1;
  
  FUN_00e9d6a0(*param_1);
  iVar1 = 0;
  if (0 < (int)param_1[0xe]) {
    do {
      FUN_00e9d7a0(*param_1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)param_1[0xe]);
  }
  param_1[10] = 5;
  return 1;
}

// 00C77940  FUN_00c77940  size=48  [between]
undefined4 FUN_00c77940(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00e9d4d0(param_1 + 4);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x2c) = 2;
    return 1;
  }
  return 0;
}

// 00C779A0  FUN_00c779a0  size=47  [between]
undefined4 FUN_00c779a0(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00e9cf60(*param_1);
  if (iVar1 != 0) {
    param_1[0xb] = 2;
    return 1;
  }
  return 0;
}

// 00C77A60  FUN_00c77a60  size=59  [between]
undefined4 FUN_00c77a60(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00fdbbd0(param_1,&DAT_0165bfb4);
  if (iVar1 == 0) {
    iVar1 = FUN_00fdbbd0(param_1,&DAT_0165bfac);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}

// 00C77AE0  FUN_00c77ae0  size=12  [between]
undefined4 __fastcall FUN_00c77ae0(undefined4 param_1)

{
  FUN_00a6e670();
  return param_1;
}

// 00C77B00  FUN_00c77b00  size=18  [between]
void FUN_00c77b00(void)

{
  FUN_00a6e690(0x10,0x10000,&DAT_01b7bd48);
  return;
}

// 00C77B20  thunk_FUN_00a6e700  size=5  [between]
void thunk_FUN_00a6e700(void)

{
  FUN_00dd8da0();
  return;
}

// 00C77C20  Trigger::cCondPhaseJump::vf04  size=1  [class]
void Trigger::cCondPhaseJump::vf04(void)

{
  return;
}

// 00C77C30  Trigger::cCondPhaseJump::vf08  size=1  [class]
void Trigger::cCondPhaseJump::vf08(void)

{
  return;
}

// 00C77C40  Trigger::cCondPhaseJump::vf0C  size=6  [class]
undefined4 Trigger::cCondPhaseJump::vf0C(void)

{
  return 1;
}

// 00C77C50  Trigger::cCondPhaseJump::vf10  size=1  [class]
void Trigger::cCondPhaseJump::vf10(void)

{
  return;
}

// 00C77C60  Trigger::cCondPhaseJump::vf18  size=3  [class]
undefined4 Trigger::cCondPhaseJump::vf18(void)

{
  return 0;
}

// 00C77C70  Trigger::cCondition::vf1C  size=10  [class]
void __thiscall Trigger::cCondition::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C77C80  Trigger::cCondition::vf20  size=6  [class]
undefined4 Trigger::cCondition::vf20(void)

{
  return 1;
}

// 00C77CC0  Trigger::cCondition::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondition::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C77D10  Trigger::cCondPhaseJump::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondPhaseJump::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C77D60  Trigger::cActionAbstract::vf00  size=6  [class]
undefined * Trigger::cActionAbstract::vf00(void)

{
  return &DAT_01dbd214;
}

// 00C77D70  Trigger::cActionAbstract::vf08  size=1  [class]
void Trigger::cActionAbstract::vf08(void)

{
  return;
}

// 00C77D80  Trigger::cActionAbstract::vf0C  size=1  [class]
void Trigger::cActionAbstract::vf0C(void)

{
  return;
}

// 00C77D90  Trigger::cActionAbstract::vf10  size=1  [class]
void Trigger::cActionAbstract::vf10(void)

{
  return;
}

// 00C77DA0  Trigger::cActionAbstract::vf14  size=1  [class]
void Trigger::cActionAbstract::vf14(void)

{
  return;
}

// 00C77DB0  Trigger::cActionAbstract::vf18  size=5  [class]
undefined4 Trigger::cActionAbstract::vf18(void)

{
  return 0;
}

// 00C77DC0  Trigger::cActionAbstract::vf1C  size=3  [class]
void Trigger::cActionAbstract::vf1C(void)

{
  return;
}

// 00C77DD0  Trigger::cActionAbstract::vf20  size=4  [class]
undefined4 Trigger::cActionAbstract::vf20(void)

{
  return 0xffffffff;
}

// 00C77DE0  Trigger::cActionAbstract::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActionAbstract::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C77FC0  FUN_00c77fc0  size=161  [callgraph]
undefined4 FUN_00c77fc0(uint3 *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint local_4;
  
  local_4 = (uint)*param_1;
  iVar1 = __stricmp("Id:",(char *)&local_4);
  if (iVar1 != 0) {
    uVar3 = FUN_00e03ea0(param_1);
    FUN_00a18df0(param_2,uVar3);
    return 1;
  }
  iVar1 = 3;
  do {
    if (*(char *)(iVar1 + (int)param_1) != ' ') {
      iVar1 = (int)param_1 + iVar1;
      goto LAB_00c78003;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x10);
  iVar1 = 0;
LAB_00c78003:
  iVar2 = FUN_009fde60(iVar1);
  if (iVar2 == -1) {
    FUN_00dd5650(&DAT_016a89d0,iVar1);
    return 0;
  }
  FUN_00a814d0(param_2,iVar2);
  return 1;
}

// 00C78580  FUN_00c78580  size=80  [callgraph]
undefined4 __thiscall FUN_00c78580(int param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  uVar1 = 0;
  piVar4 = (int *)(param_1 + 0x50);
  do {
    if (*piVar4 == param_2) {
      iVar2 = (uVar1 * 3 + 6) * 0x10;
      iVar3 = iVar2 + param_1;
      *param_3 = *(undefined4 *)(iVar2 + param_1);
      param_3[1] = *(undefined4 *)(iVar3 + 4);
      param_3[2] = *(undefined4 *)(iVar3 + 8);
      param_3[3] = *(undefined4 *)(iVar3 + 0xc);
      return 1;
    }
    uVar1 = uVar1 + 1;
    piVar4 = piVar4 + 0xc;
  } while (uVar1 < 0x20);
  return 0;
}

// 00C785D0  FUN_00c785d0  size=90  [callgraph]
undefined4 FUN_00c785d0(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = FUN_00fdc7b0(param_1,0x26);
  if (iVar1 != param_1) {
    iVar1 = FUN_00fdc7b0(param_1,0x40);
    if (iVar1 != param_1) {
      *param_2 = 0;
      goto LAB_00c78614;
    }
  }
  *param_2 = 1;
LAB_00c78614:
  uVar2 = FUN_00e03ea0(param_1);
  param_2[1] = uVar2;
  return 1;
}

// 00C78800  FUN_00c78800  size=53  [callgraph]
void __fastcall FUN_00c78800(int param_1)

{
  if (*(int *)(param_1 + 0x2c) != 0) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 4))();
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    (**(code **)(**(int **)(param_1 + 0x30) + 8))();
  }
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0xbf800000;
  return;
}

// 00C78840  FUN_00c78840  size=71  [callgraph]
void __fastcall FUN_00c78840(int param_1)

{
  if (*(int **)(param_1 + 0x2c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 8))();
    if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x2c))(1);
    }
  }
  if (*(int **)(param_1 + 0x30) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x30) + 0xc))();
    if (*(int **)(param_1 + 0x30) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x30) + 4))(1);
    }
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

// 00C78890  FUN_00c78890  size=51  [callgraph]
void __fastcall FUN_00c78890(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 4) = 1;
  if (*(int **)(param_1 + 0x2c) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x2c) + 0xc))();
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 4) = 4;
    }
  }
  if (*(int **)(param_1 + 0x30) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c788c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x30) + 0x10))();
    return;
  }
  return;
}

// 00C788D0  FUN_00c788d0  size=256  [callgraph]
void __fastcall FUN_00c788d0(undefined4 *param_1)

{
  float fVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  float10 fVar5;
  
  if ((param_1[1] == 1) || (param_1[1] == 2)) {
    if ((int *)param_1[0xb] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0xb] + 0x10))();
    }
    if ((int *)param_1[0xc] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0xc] + 0x14))();
    }
    if (param_1[1] == 2) {
      fVar5 = (float10)FUN_00e03a90(0);
      fVar1 = (float)param_1[5];
      param_1[5] = (float)((float10)fVar1 - fVar5);
      if ((float10)0 < (float10)fVar1 - fVar5) {
        return;
      }
      param_1[1] = 3;
      if (((DAT_01bea070 & 0x800) == 0) && ((int)param_1[0xd] < 1)) {
        FUN_00dd5650(&DAT_016a8a40,*param_1);
      }
    }
    else {
      if ((int *)param_1[0xb] == (int *)0x0) {
        return;
      }
      uVar2 = (**(code **)(*(int *)param_1[0xb] + 0x14))();
      if (param_1[10] == 1) {
        uVar2 = uVar2 ^ 1;
      }
      if (uVar2 != 1) {
        *(undefined4 *)(param_1[0xb] + 0xc) = 0;
        return;
      }
      *(undefined4 *)(param_1[0xb] + 0xc) = 1;
      if (0.0 < (float)param_1[4]) {
        param_1[5] = param_1[4];
        param_1[1] = 2;
        return;
      }
      param_1[1] = 3;
    }
    if ((int *)param_1[0xc] != (int *)0x0) {
      iVar4 = *(int *)param_1[0xc];
      uVar3 = (**(code **)(*(int *)param_1[0xb] + 0x18))();
      iVar4 = (**(code **)(iVar4 + 0x18))(uVar3);
      if (iVar4 == 0) {
        param_1[1] = 4;
      }
    }
  }
  return;
}

// 00C789D0  FUN_00c789d0  size=348  [callgraph]
void __fastcall FUN_00c789d0(undefined4 *param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  float10 fVar5;
  
  if ((int *)param_1[0xb] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xb] + 0x10))();
  }
  if ((int *)param_1[0xc] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xc] + 0x14))();
  }
  iVar3 = param_1[1];
  if ((iVar3 == 1) || (iVar3 == 5)) {
    if (param_1[0xb] == 0) {
      return;
    }
    *(undefined4 *)(param_1[0xb] + 8) = 0;
    uVar4 = (**(code **)(*(int *)param_1[0xb] + 0x14))();
    if (param_1[10] == 1) {
      uVar4 = uVar4 ^ 1;
    }
    if (uVar4 != 1) {
      *(undefined4 *)(param_1[0xb] + 0xc) = 0;
      return;
    }
    *(undefined4 *)(param_1[0xb] + 8) = 1;
    *(undefined4 *)(param_1[0xb] + 0xc) = 1;
    if (0.0 < (float)param_1[4]) {
      param_1[5] = param_1[4];
      param_1[1] = 2;
      return;
    }
    param_1[1] = 3;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 != 3) {
        return;
      }
      if ((param_1[2] != -1) && ((int)param_1[2] <= (int)param_1[3])) {
        return;
      }
      *(undefined4 *)(param_1[0xb] + 8) = 2;
      if ((int *)param_1[0xb] == (int *)0x0) {
        return;
      }
      uVar4 = (**(code **)(*(int *)param_1[0xb] + 0x14))();
      if (param_1[10] == 1) {
        uVar4 = uVar4 ^ 1;
      }
      if (uVar4 != 0) {
        return;
      }
      param_1[1] = 1;
      (**(code **)(*(int *)param_1[0xb] + 0x20))();
      *(undefined4 *)(param_1[0xb] + 8) = 0;
      return;
    }
    fVar5 = (float10)FUN_00e03a90(0);
    fVar1 = (float)param_1[5];
    param_1[5] = (float)((float10)fVar1 - fVar5);
    if ((float10)0 < (float10)fVar1 - fVar5) {
      return;
    }
    param_1[1] = 3;
    if (((DAT_01bea070 & 0x800) == 0) && ((int)param_1[0xd] < 1)) {
      FUN_00dd5650(&DAT_016a8a40,*param_1);
    }
  }
  if ((int *)param_1[0xc] != (int *)0x0) {
    iVar3 = *(int *)param_1[0xc];
    uVar2 = (**(code **)(*(int *)param_1[0xb] + 0x18))();
    iVar3 = (**(code **)(iVar3 + 0x18))(uVar2);
    if (iVar3 == 0) {
      param_1[1] = 5;
    }
  }
  param_1[3] = param_1[3] + 1;
  return;
}

// 00C78CC0  Trigger::cCondTime::cCondTime  size=37  [class]
void __fastcall Trigger::cCondTime::cCondTime(undefined4 *param_1)

{
  param_1[4] = 0xbf800000;
  param_1[5] = 0xbf800000;
  param_1[3] = 0xffffffff;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  *param_1 = vftable;
  return;
}

// 00C78D30  Trigger::cCondTime::vf0C  size=39  [class]
undefined4 __fastcall Trigger::cCondTime::vf0C(int param_1)

{
  if (*(float *)(param_1 + 0x10) != -1.0) {
    *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x10) + 1.0;
    return 1;
  }
  return 0;
}

// 00C78D60  Trigger::cCondTime::vf10  size=45  [class]
void __fastcall Trigger::cCondTime::vf10(int param_1)

{
  float10 fVar1;
  
  if ((0.0 < *(float *)(param_1 + 0x14)) && ((DAT_01bea060 & 0x2000400) == 0)) {
    fVar1 = (float10)FUN_00e049b0();
    *(float *)(param_1 + 0x14) = (float)((float10)*(float *)(param_1 + 0x14) - fVar1);
  }
  return;
}

// 00C78D90  Trigger::cCondTime::vf14  size=21  [class]
undefined4 __fastcall Trigger::cCondTime::vf14(int param_1)

{
  if (*(float *)(param_1 + 0x14) <= 0.0) {
    return 1;
  }
  return 0;
}

// 00C78DC0  Trigger::cCondTime::vf20  size=36  [class]
undefined4 __fastcall Trigger::cCondTime::vf20(int param_1)

{
  if (*(float *)(param_1 + 0x10) != -1.0) {
    *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x10) + 1.0;
  }
  return 1;
}

// 00C78E20  Trigger::cCondArea::vf10  size=8  [class]
void __fastcall Trigger::cCondArea::vf10(int param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}

// 00C78E30  Trigger::cCondArea::vf14  size=105  [class]
undefined4 __fastcall Trigger::cCondArea::vf14(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (((DAT_01dbd1d0 == 0) || ((DAT_01bea060 & 8) != 0)) || ((DAT_01bea060 & 0x2000400) == 0)) {
    piVar1 = (int *)FUN_00a6e640();
    iVar2 = (**(code **)(*piVar1 + 0x24))(*(undefined2 *)(param_1 + 0x10),1,1);
    piVar1 = (int *)FUN_00a6e640();
    iVar3 = (**(code **)(*piVar1 + 0x24))(*(undefined2 *)(param_1 + 0x10),1,2);
    if ((iVar2 != 0) || (iVar3 != 0)) {
      *(undefined4 *)(param_1 + 0x14) = DAT_01be8e58;
      return 1;
    }
  }
  return 0;
}

// 00C78EA0  Trigger::cCondArea::vf18  size=4  [class]
undefined4 __fastcall Trigger::cCondArea::vf18(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}

// 00C78EC0  Trigger::cCondSequence::cCondSequence  size=41  [class]
void __fastcall Trigger::cCondSequence::cCondSequence(undefined4 *param_1)

{
  param_1[3] = 0xffffffff;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  *param_1 = vftable;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  return;
}

// 00C78F30  Trigger::cCondSequence::vf04  size=48  [class]
void __fastcall Trigger::cCondSequence::vf04(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x8c)) {
    piVar1 = (int *)(param_1 + 0x10);
    do {
      if (*piVar1 != 0) {
        (**(code **)(*(int *)*piVar1 + 4))();
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x8c));
  }
  return;
}

// 00C78F60  Trigger::cCondSequence::vf08  size=62  [class]
void __fastcall Trigger::cCondSequence::vf08(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x8c)) {
    piVar1 = (int *)(param_1 + 0x10);
    do {
      if (*piVar1 != 0) {
        (**(code **)(*(int *)*piVar1 + 8))();
        if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)*piVar1)(1);
        }
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x8c));
  }
  return;
}

// 00C78FA0  Trigger::Cond::SEQ  size=95  [class]
undefined4 __fastcall Trigger::Cond::SEQ(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (0 < *(int *)(param_1 + 0x8c)) {
    if (*(int *)(param_1 + 0x10) == 0) {
      FUN_00dd5650(&DAT_016a8b24,1);
      return 0;
    }
    iVar1 = (**(code **)(**(int **)(param_1 + 0x10) + 0xc))();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016a8af4,*(int *)(param_1 + 0x88) + 1);
      return 0;
    }
  }
  return 1;
}

// 00C79000  Trigger::cCondSequence::vf10  size=319  [class]
void __fastcall Trigger::cCondSequence::vf10(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  
  if (*(int *)(param_1 + 8) == 2) {
    iVar2 = 0;
    *(undefined4 *)(param_1 + 0x88) = 0;
    if (0 < *(int *)(param_1 + 0x8c)) {
      piVar3 = (int *)(param_1 + 0x10);
      do {
        if (*piVar3 != 0) {
          (**(code **)(*(int *)*piVar3 + 0x10))();
        }
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 1;
      } while (iVar2 < *(int *)(param_1 + 0x8c));
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x88);
    if (iVar2 < 0) {
      return;
    }
    if ((iVar2 < *(int *)(param_1 + 0x8c)) && (*(int *)(param_1 + 0x10 + iVar2 * 4) != 0)) {
      (**(code **)(**(int **)(param_1 + 0x10 + iVar2 * 4) + 0x10))();
    }
  }
  if (*(int *)(param_1 + 0x88) < *(int *)(param_1 + 0x8c)) {
    do {
      if (*(int *)(param_1 + 0x10 + *(int *)(param_1 + 0x88) * 4) == 0) break;
      uVar1 = (**(code **)(**(int **)(param_1 + 0x10 + *(int *)(param_1 + 0x88) * 4) + 0x14))();
      if (*(int *)(param_1 + 0x4c + *(int *)(param_1 + 0x88) * 4) == 1) {
        uVar1 = uVar1 ^ 1;
      }
      iVar2 = *(int *)(param_1 + 0x10 + *(int *)(param_1 + 0x88) * 4);
      if (uVar1 != 1) {
        *(undefined4 *)(iVar2 + 0xc) = 0;
        break;
      }
      *(undefined4 *)(iVar2 + 0xc) = 1;
      *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
      iVar2 = *(int *)(param_1 + 0x88);
      if ((iVar2 < *(int *)(param_1 + 0x8c)) && (*(int *)(param_1 + 0x10 + iVar2 * 4) != 0)) {
        (**(code **)(**(int **)(param_1 + 0x10 + iVar2 * 4) + 0xc))();
        (**(code **)(**(int **)(param_1 + 0x10 + *(int *)(param_1 + 0x88) * 4) + 0x10))();
      }
    } while (*(int *)(param_1 + 0x88) < *(int *)(param_1 + 0x8c));
  }
  if (*(int *)(param_1 + 0x88) < *(int *)(param_1 + 0x8c)) {
    *(undefined4 *)(param_1 + 0x90) = 0;
    return;
  }
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x10) + 0xc))();
  }
  *(undefined4 *)(param_1 + 0x90) = 1;
  *(undefined4 *)(param_1 + 0x88) = 0xffffffff;
  return;
}

// 00C79140  Trigger::cCondSequence::vf14  size=7  [class]
undefined4 __fastcall Trigger::cCondSequence::vf14(int param_1)

{
  return *(undefined4 *)(param_1 + 0x90);
}

// 00C79150  Trigger::cCondSequence::vf20  size=78  [class]
int __fastcall Trigger::cCondSequence::vf20(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = 0;
  iVar2 = 1;
  if (0 < *(int *)(param_1 + 0x8c)) {
    piVar4 = (int *)(param_1 + 0x10);
    do {
      if ((*piVar4 != 0) && (iVar1 = (**(code **)(*(int *)*piVar4 + 0x20))(), iVar1 == 0)) {
        iVar2 = 0;
      }
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x8c));
    if (iVar2 != 1) {
      return iVar2;
    }
  }
  *(undefined4 *)(param_1 + 0x88) = 0;
  return 1;
}

// 00C791A0  Trigger::cCondDisorderedSequence::cCondDisorderedSequence  size=31  [class]
void __fastcall Trigger::cCondDisorderedSequence::cCondDisorderedSequence(undefined4 *param_1)

{
  param_1[3] = 0xffffffff;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  *param_1 = vftable;
  param_1[0x31] = 0xffffffff;
  return;
}

// 00C791D0  Trigger::cCondDisorderedSequence::vf04  size=60  [class]
void __fastcall Trigger::cCondDisorderedSequence::vf04(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0xc4)) {
    piVar1 = (int *)(param_1 + 0x10);
    do {
      if ((int *)*piVar1 != (int *)0x0) {
        (**(code **)(*(int *)*piVar1 + 4))();
      }
      piVar1[0x1e] = 0;
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < *(int *)(param_1 + 0xc4));
  }
  *(undefined4 *)(param_1 + 200) = 0;
  return;
}

// 00C79210  Trigger::cCondDisorderedSequence::vf08  size=62  [class]
void __fastcall Trigger::cCondDisorderedSequence::vf08(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0xc4)) {
    piVar1 = (int *)(param_1 + 0x10);
    do {
      if (*piVar1 != 0) {
        (**(code **)(*(int *)*piVar1 + 8))();
        if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)*piVar1)(1);
        }
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < *(int *)(param_1 + 0xc4));
  }
  return;
}

// 00C79250  Trigger::Cond::DSEQ  size=108  [class]
undefined4 __fastcall Trigger::Cond::DSEQ(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0xc4)) {
    piVar3 = (int *)(param_1 + 0x10);
    do {
      if (*piVar3 == 0) {
        FUN_00dd5650(&DAT_016a8ba8,iVar2 + 1);
        return 0;
      }
      iVar1 = (**(code **)(*(int *)*piVar3 + 0xc))();
      iVar2 = iVar2 + 1;
      if (iVar1 == 0) {
        FUN_00dd5650(&DAT_016a8b78,iVar2);
        return 0;
      }
      piVar3 = piVar3 + 1;
    } while (iVar2 < *(int *)(param_1 + 0xc4));
  }
  *(undefined4 *)(param_1 + 200) = 0;
  return 1;
}

// 00C792C0  Trigger::cCondDisorderedSequence::vf10  size=171  [class]
void __fastcall Trigger::cCondDisorderedSequence::vf10(int param_1)

{
  uint uVar1;
  uint *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0xc4)) {
    puVar3 = (undefined4 *)(param_1 + 0x10);
    do {
      if ((*(int *)(param_1 + 8) == 2) || (puVar3[0x1e] == 0)) {
        (**(code **)(*(int *)*puVar3 + 0x10))();
      }
      iVar4 = iVar4 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar4 < *(int *)(param_1 + 0xc4));
  }
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0xc4)) {
    puVar3 = (undefined4 *)(param_1 + 0x10);
    do {
      if ((*(int *)(param_1 + 8) == 2) || (puVar3[0x1e] == 0)) {
        uVar1 = (**(code **)(*(int *)*puVar3 + 0x14))();
        if (puVar3[0xf] == 1) {
          uVar1 = uVar1 ^ 1;
        }
        puVar3[0x1e] = uVar1;
      }
      iVar4 = iVar4 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar4 < *(int *)(param_1 + 0xc4));
  }
  iVar4 = 0;
  *(undefined4 *)(param_1 + 200) = 1;
  if (0 < *(int *)(param_1 + 0xc4)) {
    puVar2 = (uint *)(param_1 + 0x88);
    do {
      if (*(uint *)(param_1 + 200) == 0) {
        return;
      }
      iVar4 = iVar4 + 1;
      *(uint *)(param_1 + 200) = *(uint *)(param_1 + 200) & *puVar2;
      puVar2 = puVar2 + 1;
    } while (iVar4 < *(int *)(param_1 + 0xc4));
  }
  return;
}

// 00C79380  Trigger::cCondDisorderedSequence::vf14  size=7  [class]
undefined4 __fastcall Trigger::cCondDisorderedSequence::vf14(int param_1)

{
  return *(undefined4 *)(param_1 + 200);
}

// 00C79390  Trigger::cCondDisorderedSequence::vf20  size=84  [class]
int __fastcall Trigger::cCondDisorderedSequence::vf20(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar2 = 1;
  if (0 < *(int *)(param_1 + 0xc4)) {
    piVar3 = (int *)(param_1 + 0x10);
    do {
      if ((int *)*piVar3 != (int *)0x0) {
        piVar3[0x1e] = 0;
        iVar1 = (**(code **)(*(int *)*piVar3 + 0x20))();
        if (iVar1 == 0) {
          iVar2 = 0;
        }
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar4 < *(int *)(param_1 + 0xc4));
    if (iVar2 != 1) {
      return iVar2;
    }
  }
  *(undefined4 *)(param_1 + 200) = 0;
  return 1;
}

// 00C793F0  Trigger::cCondAnd::cCondAnd  size=31  [class]
void __fastcall Trigger::cCondAnd::cCondAnd(undefined4 *param_1)

{
  param_1[3] = 0xffffffff;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  *param_1 = vftable;
  param_1[0x22] = 0xffffffff;
  return;
}

// 00C79420  Trigger::cCondAnd::vf04  size=48  [class]
void __fastcall Trigger::cCondAnd::vf04(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x88)) {
    piVar1 = (int *)(param_1 + 0x10);
    do {
      if (*piVar1 != 0) {
        (**(code **)(*(int *)*piVar1 + 4))();
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x88));
  }
  return;
}

// 00C79450  Trigger::cCondAnd::vf08  size=62  [class]
void __fastcall Trigger::cCondAnd::vf08(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x88)) {
    piVar1 = (int *)(param_1 + 0x10);
    do {
      if (*piVar1 != 0) {
        (**(code **)(*(int *)*piVar1 + 8))();
        if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)*piVar1)(1);
        }
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x88));
  }
  return;
}

// 00C79490  Trigger::Cond::AND  size=98  [class]
undefined4 __fastcall Trigger::Cond::AND(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x88)) {
    piVar3 = (int *)(param_1 + 0x10);
    do {
      if (*piVar3 == 0) {
        FUN_00dd5650(&DAT_016a8c2c,iVar2 + 1);
        return 0;
      }
      iVar1 = (**(code **)(*(int *)*piVar3 + 0xc))();
      iVar2 = iVar2 + 1;
      if (iVar1 == 0) {
        FUN_00dd5650(&DAT_016a8bfc,iVar2);
        return 0;
      }
      piVar3 = piVar3 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x88));
  }
  return 1;
}

// 00C79500  Trigger::cCondAnd::vf10  size=43  [class]
void __fastcall Trigger::cCondAnd::vf10(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x88)) {
    puVar2 = (undefined4 *)(param_1 + 0x10);
    do {
      (**(code **)(*(int *)*puVar2 + 0x10))();
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x88));
  }
  return;
}

// 00C79530  Trigger::cCondAnd::vf14  size=93  [class]
undefined4 __fastcall Trigger::cCondAnd::vf14(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 local_4;
  
  iVar4 = 0;
  local_4 = 1;
  uVar2 = 1;
  if (0 < *(int *)(param_1 + 0x88)) {
    piVar3 = (int *)(param_1 + 0x10);
    do {
      uVar1 = (**(code **)(*(int *)*piVar3 + 0x14))();
      if (piVar3[0xf] == 1) {
        uVar1 = uVar1 ^ 1;
      }
      if (uVar1 == 0) {
        *(undefined4 *)(*piVar3 + 0xc) = 0;
        local_4 = 0;
      }
      else {
        *(undefined4 *)(*piVar3 + 0xc) = 1;
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 1;
      uVar2 = local_4;
    } while (iVar4 < *(int *)(param_1 + 0x88));
  }
  return uVar2;
}

// 00C79590  Trigger::cCondAnd::vf20  size=63  [class]
undefined4 __fastcall Trigger::cCondAnd::vf20(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = 0;
  uVar2 = 1;
  if (0 < *(int *)(param_1 + 0x88)) {
    piVar4 = (int *)(param_1 + 0x10);
    do {
      if ((*piVar4 != 0) && (iVar1 = (**(code **)(*(int *)*piVar4 + 0x20))(), iVar1 == 0)) {
        uVar2 = 0;
      }
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x88));
  }
  return uVar2;
}

// 00C79600  Trigger::cCondOr::vf04  size=48  [class]
void __fastcall Trigger::cCondOr::vf04(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x88)) {
    piVar1 = (int *)(param_1 + 0x10);
    do {
      if (*piVar1 != 0) {
        (**(code **)(*(int *)*piVar1 + 4))();
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x88));
  }
  return;
}

// 00C79630  Trigger::cCondOr::vf08  size=62  [class]
void __fastcall Trigger::cCondOr::vf08(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x88)) {
    piVar1 = (int *)(param_1 + 0x10);
    do {
      if (*piVar1 != 0) {
        (**(code **)(*(int *)*piVar1 + 8))();
        if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)*piVar1)(1);
        }
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x88));
  }
  return;
}

// 00C79670  Trigger::Cond::OR  size=98  [class]
undefined4 __fastcall Trigger::Cond::OR(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x88)) {
    piVar3 = (int *)(param_1 + 0x10);
    do {
      if (*piVar3 == 0) {
        FUN_00dd5650(&DAT_016a8cac,iVar2 + 1);
        return 0;
      }
      iVar1 = (**(code **)(*(int *)*piVar3 + 0xc))();
      iVar2 = iVar2 + 1;
      if (iVar1 == 0) {
        FUN_00dd5650(&DAT_016a8c80,iVar2);
        return 0;
      }
      piVar3 = piVar3 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x88));
  }
  return 1;
}

// 00C796E0  Trigger::cCondOr::vf10  size=43  [class]
void __fastcall Trigger::cCondOr::vf10(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x88)) {
    puVar2 = (undefined4 *)(param_1 + 0x10);
    do {
      (**(code **)(*(int *)*puVar2 + 0x10))();
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x88));
  }
  return;
}

// 00C79710  Trigger::cCondOr::vf14  size=88  [class]
undefined4 __fastcall Trigger::cCondOr::vf14(int param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x88)) {
    piVar2 = (int *)(param_1 + 0x10);
    do {
      uVar1 = (**(code **)(*(int *)*piVar2 + 0x14))();
      if (piVar2[0xf] == 1) {
        uVar1 = uVar1 ^ 1;
      }
      if (uVar1 == 1) {
        *(undefined4 *)(*(int *)(param_1 + 0x10 + iVar3 * 4) + 0xc) = 1;
        return 1;
      }
      iVar3 = iVar3 + 1;
      *(undefined4 *)(*piVar2 + 0xc) = 0;
      piVar2 = piVar2 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x88));
  }
  return 0;
}

// 00C79770  FUN_00c79770  size=63  [between]
undefined4 __fastcall FUN_00c79770(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = 0;
  uVar2 = 1;
  if (0 < *(int *)(param_1 + 0x88)) {
    piVar4 = (int *)(param_1 + 0x10);
    do {
      if ((*piVar4 != 0) && (iVar1 = (**(code **)(*(int *)*piVar4 + 0x20))(), iVar1 == 0)) {
        uVar2 = 0;
      }
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x88));
  }
  return uVar2;
}

// 00C797B0  Trigger::cCondPhaseJump::vf14  size=10  [class]
void Trigger::cCondPhaseJump::vf14(void)

{
  FUN_00d4f160();
  return;
}

// 00C797C0  FUN_00c797c0  size=10  [between]
void __thiscall FUN_00c797c0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C79800  Trigger::cCondOnce::vf10  size=13  [class]
void __fastcall Trigger::cCondOnce::vf10(int param_1)

{
  if (*(int *)(param_1 + 0x10) < 2) {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  }
  return;
}

// 00C79810  Trigger::cCondOnce::vf14  size=10  [class]
bool __fastcall Trigger::cCondOnce::vf14(int param_1)

{
  return *(int *)(param_1 + 0x10) == 1;
}

// 00C79820  FUN_00c79820  size=10  [between]
void __thiscall FUN_00c79820(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C798E0  Trigger::cCondAreaGroup::vf04  size=30  [class]
void __fastcall Trigger::cCondAreaGroup::vf04(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00dd29b0(0x100,0x20,0,0);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  return;
}

// 00C79900  Trigger::cCondAreaGroup::vf08  size=15  [class]
void __fastcall Trigger::cCondAreaGroup::vf08(int param_1)

{
  FUN_00dd48d0(*(undefined4 *)(param_1 + 0x24),0);
  return;
}

// 00C79910  Trigger::cCondAreaGroup::vf10  size=8  [class]
void __fastcall Trigger::cCondAreaGroup::vf10(int param_1)

{
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}

// 00C79920  FUN_00c79920  size=36  [between]
void __thiscall FUN_00c79920(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x14);
  return;
}

// 00C79950  Trigger::cCondAreaGroup::vf18  size=4  [class]
undefined4 __fastcall Trigger::cCondAreaGroup::vf18(int param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}

// 00C799A0  Trigger::cCondAreaEm::vf10  size=8  [class]
void __fastcall Trigger::cCondAreaEm::vf10(int param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}

// 00C799B0  Trigger::cCondAreaEm::vf14  size=217  [class]
undefined4 __fastcall Trigger::cCondAreaEm::vf14(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *local_c;
  int local_8;
  int iStack_4;
  
  iVar1 = FUN_00c18c10(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
  if (iVar1 == 0) {
    return 0;
  }
  local_8 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    local_c = (undefined4 *)(param_1 + 0x24);
    do {
      iVar1 = FUN_00c19c00(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),*local_c)
      ;
      if (iVar1 != 0) {
        piVar2 = (int *)FUN_00a6e640();
        iVar4 = *piVar2;
        uVar3 = FUN_00a7c8b0(*(undefined2 *)(param_1 + 0x10),1);
        (**(code **)(iVar4 + 0x2c))(uVar3);
        piVar2 = (int *)FUN_00a6e640();
        iVar4 = *piVar2;
        uVar3 = FUN_00a7c8b0(*(undefined2 *)(param_1 + 0x10),2);
        iVar4 = (**(code **)(iVar4 + 0x2c))(uVar3);
        if ((iStack_4 != 0) || (iVar4 != 0)) {
          *(int *)(param_1 + 0x14) = iVar1;
          return 1;
        }
      }
      local_c = local_c + 1;
      local_8 = local_8 + 1;
    } while (local_8 < *(int *)(param_1 + 0x20));
  }
  return 0;
}

// 00C79A90  FUN_00c79a90  size=66  [between]
void __thiscall FUN_00c79a90(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x28);
  return;
}

// 00C79AE0  Trigger::cCondAreaEm::vf18  size=4  [class]
undefined4 __fastcall Trigger::cCondAreaEm::vf18(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}

// 00C79B00  Trigger::cCondIsDoorOpen::cCondIsDoorOpen  size=39  [class]
void __fastcall Trigger::cCondIsDoorOpen::cCondIsDoorOpen(undefined4 *param_1)

{
  param_1[3] = 0xffffffff;
  param_1[2] = 0xffffffff;
  param_1[1] = 0;
  *param_1 = vftable;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}

// 00C79B40  Trigger::cCondIsDoorOpen::vf10  size=1  [class]
void Trigger::cCondIsDoorOpen::vf10(void)

{
  return;
}

// 00C79B50  Trigger::cCondIsDoorOpen::vf14  size=56  [class]
uint __fastcall Trigger::cCondIsDoorOpen::vf14(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  uVar2 = 0;
  pcVar4 = (char *)(param_1 + 0x10);
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  if (pcVar4 != (char *)(param_1 + 0x11)) {
    uVar3 = FUN_00e03ea0((char *)(param_1 + 0x10));
    uVar2 = FUN_00c47c30(uVar3);
    uVar2 = ~uVar2 & 1;
  }
  return uVar2;
}

// 00C79B90  Trigger::cCondIsDoorOpen::vf1C  size=32  [class]
void __thiscall Trigger::cCondIsDoorOpen::vf1C(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  if (param_2 != 0) {
    _strcpy_s((char *)(param_1 + 0x10),0x10,(char *)(param_2 + 8));
  }
  return;
}

// 00C79BE0  Trigger::cCondBarrierEnd::vf0C  size=3  [class]
undefined4 Trigger::cCondBarrierEnd::vf0C(void)

{
  return 0;
}

// 00C79BF0  Trigger::cCondBarrierEnd::vf14  size=3  [class]
undefined4 Trigger::cCondBarrierEnd::vf14(void)

{
  return 0;
}

// 00C79C00  Trigger::cCondBarrierEnd::vf1C  size=16  [class]
void __thiscall Trigger::cCondBarrierEnd::vf1C(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  return;
}

// 00C79C40  Trigger::cCondPlayerEngGaugeFull::vf10  size=1  [class]
void Trigger::cCondPlayerEngGaugeFull::vf10(void)

{
  return;
}

// 00C79C50  FUN_00c79c50  size=10  [between]
void __thiscall FUN_00c79c50(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C79C70  Trigger::cCondTrue::vf14  size=6  [class]
undefined4 Trigger::cCondTrue::vf14(void)

{
  return 1;
}

// 00C79C80  FUN_00c79c80  size=10  [between]
void __thiscall FUN_00c79c80(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C79C90  Trigger::cCondStartAnimation::vf1C  size=22  [class]
void __thiscall Trigger::cCondStartAnimation::vf1C(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(int *)(param_1 + 0x10) = param_2 + 8;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x18);
  return;
}

// 00C79CB0  Trigger::cCondEndAnimation::vf0C  size=13  [class]
undefined4 __fastcall Trigger::cCondEndAnimation::vf0C(int param_1)

{
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return 1;
}

// 00C79CC0  Trigger::cCondEndAnimation::vf1C  size=22  [class]
void __thiscall Trigger::cCondEndAnimation::vf1C(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(int *)(param_1 + 0x10) = param_2 + 8;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x18);
  return;
}

// 00C79CE0  FUN_00c79ce0  size=12  [between]
undefined4 __fastcall FUN_00c79ce0(undefined4 param_1)

{
  FUN_00a7c930();
  return param_1;
}

// 00C79D20  Trigger::cCondAreaOut::vf10  size=8  [class]
void __fastcall Trigger::cCondAreaOut::vf10(int param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}

// 00C79D30  Trigger::cCondAreaOut::vf14  size=49  [class]
undefined4 __fastcall Trigger::cCondAreaOut::vf14(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_00a6e640();
  iVar2 = (**(code **)(*piVar1 + 0x24))(*(undefined2 *)(param_1 + 0x10),1,1);
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x14) = DAT_01be8e58;
    return 1;
  }
  return 0;
}

// 00C79D70  FUN_00c79d70  size=18  [between]
void __thiscall FUN_00c79d70(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 8);
  return;
}

// 00C79D90  Trigger::cCondAreaOut::vf18  size=4  [class]
undefined4 __fastcall Trigger::cCondAreaOut::vf18(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}

// 00C79DE0  Trigger::cCondAreaGroupOut::vf04  size=30  [class]
void __fastcall Trigger::cCondAreaGroupOut::vf04(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00dd29b0(0x100,0x20,0,0);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  return;
}

// 00C79E00  Trigger::cCondAreaGroupOut::vf08  size=15  [class]
void __fastcall Trigger::cCondAreaGroupOut::vf08(int param_1)

{
  FUN_00dd48d0(*(undefined4 *)(param_1 + 0x24),0);
  return;
}

// 00C79E10  Trigger::cCondAreaGroupOut::vf10  size=8  [class]
void __fastcall Trigger::cCondAreaGroupOut::vf10(int param_1)

{
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}

// 00C79E20  FUN_00c79e20  size=36  [between]
void __thiscall FUN_00c79e20(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x14);
  return;
}

// 00C79E50  Trigger::cCondAreaGroupOut::vf18  size=4  [class]
undefined4 __fastcall Trigger::cCondAreaGroupOut::vf18(int param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}

// 00C79EA0  Trigger::cCondAreaEmOut::vf10  size=8  [class]
void __fastcall Trigger::cCondAreaEmOut::vf10(int param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}

// 00C79EB0  Trigger::cCondAreaEmOut::vf14  size=217  [class]
undefined4 __fastcall Trigger::cCondAreaEmOut::vf14(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *local_c;
  int local_8;
  int iStack_4;
  
  iVar1 = FUN_00c18c10(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
  if (iVar1 == 0) {
    return 0;
  }
  local_8 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    local_c = (undefined4 *)(param_1 + 0x24);
    do {
      iVar1 = FUN_00c19c00(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),*local_c)
      ;
      if (iVar1 != 0) {
        piVar2 = (int *)FUN_00a6e640();
        iVar4 = *piVar2;
        uVar3 = FUN_00a7c8b0(*(undefined2 *)(param_1 + 0x10),1);
        (**(code **)(iVar4 + 0x2c))(uVar3);
        piVar2 = (int *)FUN_00a6e640();
        iVar4 = *piVar2;
        uVar3 = FUN_00a7c8b0(*(undefined2 *)(param_1 + 0x10),2);
        iVar4 = (**(code **)(iVar4 + 0x2c))(uVar3);
        if ((iStack_4 == 0) || (iVar4 == 0)) {
          *(int *)(param_1 + 0x14) = iVar1;
          return 1;
        }
      }
      local_c = local_c + 1;
      local_8 = local_8 + 1;
    } while (local_8 < *(int *)(param_1 + 0x20));
  }
  return 0;
}

// 00C79F90  FUN_00c79f90  size=66  [between]
void __thiscall FUN_00c79f90(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x28);
  return;
}

// 00C79FE0  Trigger::cCondAreaEmOut::vf18  size=4  [class]
undefined4 __fastcall Trigger::cCondAreaEmOut::vf18(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}

// 00C7A030  Trigger::cCondEnemyFinishByNumber::vf14  size=123  [class]
undefined4 __fastcall Trigger::cCondEnemyFinishByNumber::vf14(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  if ((DAT_01bea060 & 0x400) != 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
    iVar1 = FUN_00c18cc0(*(undefined4 *)(param_1 + 0x10));
    if (iVar1 == 1) {
      uVar2 = FUN_00c18cf0(*(undefined4 *)(param_1 + 0x10));
      *(undefined4 *)(param_1 + 0x1c) = uVar2;
    }
  }
  if (*(int *)(param_1 + 0x1c) == 1) {
    if (*(float *)(param_1 + 0x18) < *(float *)(param_1 + 0x14) !=
        (*(float *)(param_1 + 0x18) == *(float *)(param_1 + 0x14))) {
      *(undefined4 *)(param_1 + 0x1c) = 0;
      return 1;
    }
    fVar3 = (float10)FUN_00e03a90(0);
    *(float *)(param_1 + 0x14) = (float)(fVar3 + (float10)*(float *)(param_1 + 0x14));
  }
  return 0;
}

// 00C7A0B0  FUN_00c7a0b0  size=28  [between]
void __thiscall FUN_00c7a0b0(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  *(float *)(param_1 + 0x18) = *(float *)(param_2 + 0xc) * 60.0;
  return;
}

// 00C7A0D0  FUN_00c7a0d0  size=18  [between]
undefined4 __fastcall FUN_00c7a0d0(int param_1)

{
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return 1;
}

// 00C7A0F0  Trigger::cCondEnemyFinishByName::cCondEnemyFinishByName  size=37  [class]
void __fastcall Trigger::cCondEnemyFinishByName::cCondEnemyFinishByName(undefined4 *param_1)

{
  param_1[5] = 0;
  param_1[3] = 0xffffffff;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  *param_1 = vftable;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  return;
}

// 00C7A130  Trigger::cCondEnemyFinishByName::vf1C  size=28  [class]
void __thiscall Trigger::cCondEnemyFinishByName::vf1C(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(int *)(param_1 + 0x10) = param_2 + 8;
  *(float *)(param_1 + 0x18) = *(float *)(param_2 + 0x18) * 60.0;
  return;
}

// 00C7A150  Trigger::cCondEnemyFinishByName::vf20  size=18  [class]
undefined4 __fastcall Trigger::cCondEnemyFinishByName::vf20(int param_1)

{
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return 1;
}

// 00C7A1C0  Trigger::Cond::ENM_COUNT  size=133  [class]
bool __fastcall Trigger::Cond::ENM_COUNT(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x18) == -1) {
    FUN_00dd5650(&DAT_016a8eb4);
  }
  else {
    iVar1 = FUN_00c18cc0(*(int *)(param_1 + 0x18));
    if (iVar1 != 0) {
      iVar1 = FUN_00c198f0(*(undefined4 *)(param_1 + 0x18));
      switch(*(undefined4 *)(param_1 + 0x10)) {
      case 1:
        return iVar1 < *(int *)(param_1 + 0x14);
      case 2:
        return iVar1 <= *(int *)(param_1 + 0x14);
      case 3:
        return iVar1 == *(int *)(param_1 + 0x14);
      case 4:
        return *(int *)(param_1 + 0x14) < iVar1;
      case 5:
        return *(int *)(param_1 + 0x14) <= iVar1;
      }
    }
  }
  return false;
}

// 00C7A260  FUN_00c7a260  size=28  [between]
void __thiscall FUN_00c7a260(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x10);
  return;
}

// 00C7A280  Trigger::cCondEnemyCountByName::cCondEnemyCountByName  size=32  [class]
void __fastcall Trigger::cCondEnemyCountByName::cCondEnemyCountByName(undefined4 *param_1)

{
  param_1[3] = 0xffffffff;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  *param_1 = vftable;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}

// 00C7A2B0  Trigger::cCondEnemyCountByName::vf1C  size=28  [class]
void __thiscall Trigger::cCondEnemyCountByName::vf1C(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xc);
  *(int *)(param_1 + 0x18) = param_2 + 0x10;
  return;
}

// 00C7A320  Trigger::cCondInCamera::vf14  size=135  [class]
undefined4 __fastcall Trigger::cCondInCamera::vf14(int param_1)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    return 0;
  }
  iVar2 = FUN_00f98a90();
  iVar3 = FUN_00f98aa0();
  pfVar1 = (float *)(param_1 + 0x20);
  FUN_00d9fa80(pfVar1,param_1 + 0x30);
  if ((((0.0 < *(float *)(param_1 + 0x2c)) && (0.0 < *pfVar1)) && (*pfVar1 < (float)iVar2)) &&
     ((0.0 < *(float *)(param_1 + 0x24) && (*(float *)(param_1 + 0x24) < (float)iVar3)))) {
    return 1;
  }
  return 0;
}

// 00C7A3B0  FUN_00c7a3b0  size=16  [between]
void __thiscall FUN_00c7a3b0(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  return;
}

// 00C7A3F0  Trigger::cCondOutCamera::vf14  size=135  [class]
undefined4 __fastcall Trigger::cCondOutCamera::vf14(int param_1)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    return 0;
  }
  iVar2 = FUN_00f98a90();
  iVar3 = FUN_00f98aa0();
  pfVar1 = (float *)(param_1 + 0x20);
  FUN_00d9fa80(pfVar1,param_1 + 0x30);
  if ((((0.0 < *(float *)(param_1 + 0x2c)) && (0.0 < *pfVar1)) && (*pfVar1 < (float)iVar2)) &&
     ((0.0 < *(float *)(param_1 + 0x24) && (*(float *)(param_1 + 0x24) < (float)iVar3)))) {
    return 0;
  }
  return 1;
}

// 00C7A480  FUN_00c7a480  size=16  [between]
void __thiscall FUN_00c7a480(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  return;
}

// 00C7A4C0  Trigger::cCondEnemyFinishHP0ByNumber::vf14  size=123  [class]
undefined4 __fastcall Trigger::cCondEnemyFinishHP0ByNumber::vf14(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  if ((DAT_01bea060 & 0x400) != 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
    iVar1 = FUN_00c18cc0(*(undefined4 *)(param_1 + 0x10));
    if (iVar1 == 1) {
      uVar2 = FUN_00c18dd0(*(undefined4 *)(param_1 + 0x10));
      *(undefined4 *)(param_1 + 0x1c) = uVar2;
    }
  }
  if (*(int *)(param_1 + 0x1c) == 1) {
    if (*(float *)(param_1 + 0x18) < *(float *)(param_1 + 0x14) !=
        (*(float *)(param_1 + 0x18) == *(float *)(param_1 + 0x14))) {
      *(undefined4 *)(param_1 + 0x1c) = 0;
      return 1;
    }
    fVar3 = (float10)FUN_00e03a90(0);
    *(float *)(param_1 + 0x14) = (float)(fVar3 + (float10)*(float *)(param_1 + 0x14));
  }
  return 0;
}

// 00C7A540  FUN_00c7a540  size=28  [between]
void __thiscall FUN_00c7a540(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  *(float *)(param_1 + 0x18) = *(float *)(param_2 + 0xc) * 60.0;
  return;
}

// 00C7A560  FUN_00c7a560  size=18  [between]
undefined4 __fastcall FUN_00c7a560(int param_1)

{
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return 1;
}

// 00C7A580  Trigger::cCondEnemyFinishHP0ByName::cCondEnemyFinishHP0ByName  size=37  [class]
void __fastcall Trigger::cCondEnemyFinishHP0ByName::cCondEnemyFinishHP0ByName(undefined4 *param_1)

{
  param_1[5] = 0;
  param_1[3] = 0xffffffff;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  *param_1 = vftable;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  return;
}

// 00C7A5C0  Trigger::cCondEnemyFinishHP0ByName::vf1C  size=28  [class]
void __thiscall Trigger::cCondEnemyFinishHP0ByName::vf1C(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(int *)(param_1 + 0x10) = param_2 + 8;
  *(float *)(param_1 + 0x18) = *(float *)(param_2 + 0x18) * 60.0;
  return;
}

// 00C7A5E0  Trigger::cCondEnemyFinishHP0ByName::vf20  size=18  [class]
undefined4 __fastcall Trigger::cCondEnemyFinishHP0ByName::vf20(int param_1)

{
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return 1;
}

// 00C7A650  Trigger::Cond::ENM_HP0_COUNT  size=133  [class]
bool __fastcall Trigger::Cond::ENM_HP0_COUNT(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x18) == -1) {
    FUN_00dd5650(&DAT_016a8fd4);
  }
  else {
    iVar1 = FUN_00c18cc0(*(int *)(param_1 + 0x18));
    if (iVar1 != 0) {
      iVar1 = FUN_00c199d0(*(undefined4 *)(param_1 + 0x18));
      switch(*(undefined4 *)(param_1 + 0x10)) {
      case 1:
        return iVar1 < *(int *)(param_1 + 0x14);
      case 2:
        return iVar1 <= *(int *)(param_1 + 0x14);
      case 3:
        return iVar1 == *(int *)(param_1 + 0x14);
      case 4:
        return *(int *)(param_1 + 0x14) < iVar1;
      case 5:
        return *(int *)(param_1 + 0x14) <= iVar1;
      }
    }
  }
  return false;
}

// 00C7A6F0  FUN_00c7a6f0  size=28  [between]
void __thiscall FUN_00c7a6f0(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x10);
  return;
}

// 00C7A740  FUN_00c7a740  size=28  [between]
void __thiscall FUN_00c7a740(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xc);
  *(int *)(param_1 + 0x18) = param_2 + 0x10;
  return;
}

// 00C7A7B0  FUN_00c7a7b0  size=16  [between]
void __thiscall FUN_00c7a7b0(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  return;
}

// 00C7A7F0  Trigger::cCondIsSubstage::vf14  size=3  [class]
undefined4 Trigger::cCondIsSubstage::vf14(void)

{
  return 0;
}

// 00C7A800  FUN_00c7a800  size=16  [between]
void __thiscall FUN_00c7a800(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(int *)(param_1 + 0x10) = param_2 + 8;
  return;
}

// 00C7A840  Trigger::cCondPastSubstage::vf14  size=3  [class]
undefined4 Trigger::cCondPastSubstage::vf14(void)

{
  return 0;
}

// 00C7A850  FUN_00c7a850  size=16  [between]
void __thiscall FUN_00c7a850(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(int *)(param_1 + 0x10) = param_2 + 8;
  return;
}

// 00C7A890  Trigger::cCondNowPastSubstage::vf14  size=3  [class]
undefined4 Trigger::cCondNowPastSubstage::vf14(void)

{
  return 0;
}

// 00C7A8A0  FUN_00c7a8a0  size=16  [between]
void __thiscall FUN_00c7a8a0(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(int *)(param_1 + 0x10) = param_2 + 8;
  return;
}

// 00C7A8E0  Trigger::cCondPlayerHpGaugeFull::vf10  size=1  [class]
void Trigger::cCondPlayerHpGaugeFull::vf10(void)

{
  return;
}

// 00C7A8F0  FUN_00c7a8f0  size=10  [between]
void __thiscall FUN_00c7a8f0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C7A930  Trigger::cCondEnemyNotSetByNumber::vf14  size=20  [class]
bool __fastcall Trigger::cCondEnemyNotSetByNumber::vf14(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00c18cc0(*(undefined4 *)(param_1 + 0x10));
  return iVar1 == 0;
}

// 00C7A950  FUN_00c7a950  size=16  [between]
void __thiscall FUN_00c7a950(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  return;
}

// 00C7A990  Trigger::cCondEnemyNotSetByName::vf14  size=40  [class]
bool __fastcall Trigger::cCondEnemyNotSetByName::vf14(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_00dd5650(&DAT_016a9148);
    return false;
  }
  iVar1 = FUN_00c18c70(*(int *)(param_1 + 0x10));
  return iVar1 == 0;
}

// 00C7A9C0  FUN_00c7a9c0  size=16  [between]
void __thiscall FUN_00c7a9c0(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(int *)(param_1 + 0x10) = param_2 + 8;
  return;
}

// 00C7AA00  FUN_00c7aa00  size=16  [between]
void __thiscall FUN_00c7aa00(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  return;
}

// 00C7AA10  Trigger::cCondIsDoorClose::cCondIsDoorClose  size=39  [class]
void __fastcall Trigger::cCondIsDoorClose::cCondIsDoorClose(undefined4 *param_1)

{
  param_1[3] = 0xffffffff;
  param_1[2] = 0xffffffff;
  param_1[1] = 0;
  *param_1 = vftable;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}

// 00C7AA50  Trigger::cCondIsDoorClose::vf10  size=1  [class]
void Trigger::cCondIsDoorClose::vf10(void)

{
  return;
}

// 00C7AA60  Trigger::cCondIsDoorClose::vf14  size=51  [class]
undefined4 __fastcall Trigger::cCondIsDoorClose::vf14(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  uVar2 = 0;
  pcVar3 = (char *)(param_1 + 0x10);
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if (pcVar3 != (char *)(param_1 + 0x11)) {
    uVar2 = FUN_00e03ea0((char *)(param_1 + 0x10));
    uVar2 = FUN_00c47c30(uVar2);
  }
  return uVar2;
}

// 00C7AAA0  Trigger::cCondIsDoorClose::vf1C  size=32  [class]
void __thiscall Trigger::cCondIsDoorClose::vf1C(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  if (param_2 != 0) {
    _strcpy_s((char *)(param_1 + 0x10),0x10,(char *)(param_2 + 8));
  }
  return;
}

// 00C7AAF0  Trigger::cCondPlayerHpGaugeState::vf10  size=1  [class]
void Trigger::cCondPlayerHpGaugeState::vf10(void)

{
  return;
}

// 00C7AB00  FUN_00c7ab00  size=16  [between]
void __thiscall FUN_00c7ab00(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  return;
}

// 00C7AB40  Trigger::cCondChainBreak::vf14  size=24  [class]
bool __fastcall Trigger::cCondChainBreak::vf14(int param_1)

{
  char cVar1;
  
  cVar1 = FUN_00c1ace0(*(undefined4 *)(param_1 + 0x10));
  return cVar1 != '\0';
}

// 00C7AB60  FUN_00c7ab60  size=16  [between]
void __thiscall FUN_00c7ab60(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  return;
}

// 00C7ABA0  Trigger::cCondPlayerDie::vf10  size=1  [class]
void Trigger::cCondPlayerDie::vf10(void)

{
  return;
}

// 00C7ABB0  FUN_00c7abb0  size=16  [between]
void __thiscall FUN_00c7abb0(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  return;
}

// 00C7ABF0  Trigger::cCondRoomEvent::vf14  size=61  [class]
undefined4 __fastcall Trigger::cCondRoomEvent::vf14(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  if (*(int *)(iVar1 + 4) == 0x2b) {
    uVar2 = *(undefined4 *)(iVar1 + 8);
    uVar3 = 1;
  }
  else {
    if (*(int *)(iVar1 + 4) != 0x39) {
      return 0;
    }
    uVar2 = *(undefined4 *)(iVar1 + 8);
    uVar3 = 2;
  }
  uVar2 = FUN_00e678d0(uVar3,uVar2,0xffffffff);
  uVar2 = FUN_00e7a6e0(uVar2);
  return uVar2;
}

// 00C7AC30  FUN_00c7ac30  size=16  [between]
void __thiscall FUN_00c7ac30(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 8);
  return;
}

// 00C7AC70  Trigger::cCondRoomEventEnd::vf14  size=83  [class]
uint __fastcall Trigger::cCondRoomEventEnd::vf14(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 4);
  uVar2 = 0;
  if (iVar1 == 0x2c) {
    uVar3 = *(undefined4 *)(param_1 + 0x10);
    uVar4 = 1;
  }
  else {
    if (iVar1 != 0x3a) goto LAB_00c7acac;
    uVar3 = *(undefined4 *)(param_1 + 0x10);
    uVar4 = 2;
  }
  uVar3 = FUN_00e678d0(uVar4,uVar3,0xffffffff);
  uVar2 = FUN_00e7a6e0(uVar3);
LAB_00c7acac:
  if (*(int *)(param_1 + 0x14) == 0) {
    *(uint *)(param_1 + 0x14) = uVar2;
  }
  if (*(int *)(param_1 + 0x14) == 1) {
    uVar2 = uVar2 ^ 1;
  }
  return uVar2;
}

// 00C7ACD0  FUN_00c7acd0  size=16  [between]
void __thiscall FUN_00c7acd0(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  return;
}

// 00C7AD10  Trigger::cCondBehaviorInstruction::vf0C  size=6  [class]
undefined4 Trigger::cCondBehaviorInstruction::vf0C(void)

{
  return 1;
}

// 00C7AD20  Trigger::cCondBehaviorInstruction::vf14  size=96  [class]
undefined4 __fastcall Trigger::cCondBehaviorInstruction::vf14(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 0x10) == -1) {
    return 0;
  }
  iVar1 = FUN_00a7f600(*(int *)(param_1 + 0x10));
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    iVar1 = (**(code **)(*piVar2 + 0x124))();
    if (iVar1 != -1) {
      piVar2 = (int *)FUN_00a7c8a0();
      iVar1 = (**(code **)(*piVar2 + 0x124))();
      if (iVar1 == *(int *)(param_1 + 0x14)) {
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}

// 00C7AD80  FUN_00c7ad80  size=22  [between]
void __thiscall FUN_00c7ad80(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xc);
  return;
}

// 00C7ADD0  Trigger::cCondConversation::vf0C  size=6  [class]
undefined4 Trigger::cCondConversation::vf0C(void)

{
  return 1;
}

// 00C7ADE0  Trigger::cCondConversation::vf14  size=3  [class]
undefined4 Trigger::cCondConversation::vf14(void)

{
  return 0;
}

// 00C7ADF0  FUN_00c7adf0  size=10  [between]
void __thiscall FUN_00c7adf0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C7AE80  Trigger::cCondResultFollowMove::vf14  size=6  [class]
undefined4 Trigger::cCondResultFollowMove::vf14(void)

{
  return DAT_01dc1310;
}

// 00C7AE90  FUN_00c7ae90  size=10  [between]
void __thiscall FUN_00c7ae90(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C7AEA0  Trigger::cCondIsLoadRoom::cCondIsLoadRoom  size=33  [class]
void __fastcall Trigger::cCondIsLoadRoom::cCondIsLoadRoom(undefined4 *param_1)

{
  param_1[3] = 0xffffffff;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  *param_1 = vftable;
  param_1[4] = 0xfffffffe;
  param_1[5] = 0;
  return;
}

// 00C7AEE0  Trigger::cCondIsLoadRoom::vf14  size=163  [class]
int __fastcall Trigger::cCondIsLoadRoom::vf14(int param_1)

{
  int iVar1;
  int iVar2;
  int local_84;
  undefined4 local_80 [32];
  
  if (*(int *)(param_1 + 0x14) != 1) {
    if (-1 < *(int *)(param_1 + 0x10)) {
      iVar2 = FUN_00a4c810(*(int *)(param_1 + 0x10));
      return iVar2;
    }
    iVar2 = FUN_00a4c810(0xfffffffe);
    return iVar2;
  }
  local_84 = 0;
  PhaseManager::createReadRoomList(local_80,0x20,&local_84);
  if (local_84 == 0) {
    return 1;
  }
  iVar2 = 0;
  if (0 < local_84) {
    while (iVar1 = FUN_00a4c810(local_80[iVar2]), iVar1 != 0) {
      iVar2 = iVar2 + 1;
      if (local_84 <= iVar2) {
        return iVar1;
      }
    }
  }
  return 0;
}

// 00C7AF90  Trigger::cCondIsLoadRoom::vf1C  size=22  [class]
void __thiscall Trigger::cCondIsLoadRoom::vf1C(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xc);
  return;
}

// 00C7AFE0  Trigger::cCondHackStart::vf10  size=1  [class]
void Trigger::cCondHackStart::vf10(void)

{
  return;
}

// 00C7AFF0  Trigger::cCondHackStart::vf14  size=3  [class]
undefined4 Trigger::cCondHackStart::vf14(void)

{
  return 0;
}

// 00C7B000  FUN_00c7b000  size=16  [between]
void __thiscall FUN_00c7b000(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  return;
}

// 00C7B050  Trigger::cCondPlayerEnergyGaugeState::vf10  size=1  [class]
void Trigger::cCondPlayerEnergyGaugeState::vf10(void)

{
  return;
}

// 00C7B060  FUN_00c7b060  size=16  [between]
void __thiscall FUN_00c7b060(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  return;
}

// 00C7B0A0  Trigger::cCondIsEndPlayMovie::vf14  size=13  [class]
void __fastcall Trigger::cCondIsEndPlayMovie::vf14(int param_1)

{
  FUN_00c1d730(*(undefined4 *)(param_1 + 0x10));
  return;
}

// 00C7B0B0  FUN_00c7b0b0  size=16  [between]
void __thiscall FUN_00c7b0b0(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  return;
}

// 00C7B0F0  Trigger::cCondGimmick::vf10  size=1  [class]
void Trigger::cCondGimmick::vf10(void)

{
  return;
}

// 00C7B100  Trigger::cCondGimmick::vf14  size=53  [class]
uint __fastcall Trigger::cCondGimmick::vf14(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 4);
  uVar1 = 0;
  if (iVar2 == 0x34) {
    uVar1 = FUN_009451d0(*(undefined4 *)(param_1 + 0x10));
    return uVar1;
  }
  if (iVar2 == 0x7f) {
    iVar2 = FUN_009451d0(*(undefined4 *)(param_1 + 0x10));
    uVar1 = (uint)(iVar2 == 0);
  }
  return uVar1;
}

// 00C7B140  FUN_00c7b140  size=16  [between]
void __thiscall FUN_00c7b140(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  return;
}

// 00C7B150  Trigger::cCondIsFileExist::cCondIsFileExist  size=51  [class]
void __fastcall Trigger::cCondIsFileExist::cCondIsFileExist(undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = vftable;
  param_1[3] = 0xffffffff;
  param_1[2] = 0xffffffff;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return;
}

// 00C7B1A0  Trigger::cCondIsFileExist::vf10  size=1  [class]
void Trigger::cCondIsFileExist::vf10(void)

{
  return;
}

// 00C7B1B0  Trigger::cCondIsFileExist::vf14  size=3  [class]
undefined4 Trigger::cCondIsFileExist::vf14(void)

{
  return 0;
}

// 00C7B1C0  Trigger::cCondIsFileExist::vf1C  size=27  [class]
void __thiscall Trigger::cCondIsFileExist::vf1C(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *(int *)(param_1 + 4) = param_2;
  puVar2 = (undefined4 *)(param_2 + 8);
  puVar3 = (undefined4 *)(param_1 + 0x10);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}

// 00C7B1E0  Trigger::cCondIsNotFileExist::cCondIsNotFileExist  size=51  [class]
void __fastcall Trigger::cCondIsNotFileExist::cCondIsNotFileExist(undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = vftable;
  param_1[3] = 0xffffffff;
  param_1[2] = 0xffffffff;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return;
}

// 00C7B230  Trigger::cCondIsNotFileExist::vf10  size=1  [class]
void Trigger::cCondIsNotFileExist::vf10(void)

{
  return;
}

// 00C7B240  Trigger::cCondIsNotFileExist::vf14  size=3  [class]
undefined4 Trigger::cCondIsNotFileExist::vf14(void)

{
  return 0;
}

// 00C7B250  Trigger::cCondIsNotFileExist::vf1C  size=27  [class]
void __thiscall Trigger::cCondIsNotFileExist::vf1C(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *(int *)(param_1 + 4) = param_2;
  puVar2 = (undefined4 *)(param_2 + 8);
  puVar3 = (undefined4 *)(param_1 + 0x10);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}

// 00C7B2A0  Trigger::Cond::GAME_FLAG  size=64  [class]
bool __fastcall Trigger::Cond::GAME_FLAG(int param_1)

{
  if (-1 < *(int *)(param_1 + 0x10)) {
    return (0x80000000U >> ((byte)*(uint *)(&DAT_018ab9ac + *(int *)(param_1 + 0x10) * 8) & 0x1f) &
           (&DAT_01bea090)[*(uint *)(&DAT_018ab9ac + *(int *)(param_1 + 0x10) * 8) >> 5]) != 0;
  }
  FUN_00dd5650(&DAT_016a9438);
  return false;
}

// 00C7B2E0  FUN_00c7b2e0  size=58  [between]
void __thiscall FUN_00c7b2e0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  *(int *)(param_1 + 4) = param_2;
  uVar2 = 0;
  do {
    iVar1 = FUN_00e03ea0((&PTR_s_GAME_RECVCOMMU_018ab9a8)[uVar2 * 2]);
    if (*(int *)(param_2 + 8) == iVar1) {
      *(uint *)(param_1 + 0x10) = uVar2;
      return;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x36);
  return;
}

// 00C7B350  Trigger::Cond::NOT_GAME_FLAG  size=67  [class]
bool __fastcall Trigger::Cond::NOT_GAME_FLAG(int param_1)

{
  if (-1 < *(int *)(param_1 + 0x10)) {
    return (0x80000000U >> ((byte)*(uint *)(&DAT_018ab9ac + *(int *)(param_1 + 0x10) * 8) & 0x1f) &
           (&DAT_01bea090)[*(uint *)(&DAT_018ab9ac + *(int *)(param_1 + 0x10) * 8) >> 5]) == 0;
  }
  FUN_00dd5650(&DAT_016a9490);
  return false;
}

// 00C7B3A0  FUN_00c7b3a0  size=58  [between]
void __thiscall FUN_00c7b3a0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  *(int *)(param_1 + 4) = param_2;
  uVar2 = 0;
  do {
    iVar1 = FUN_00e03ea0((&PTR_s_GAME_RECVCOMMU_018ab9a8)[uVar2 * 2]);
    if (*(int *)(param_2 + 8) == iVar1) {
      *(uint *)(param_1 + 0x10) = uVar2;
      return;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x36);
  return;
}

// 00C7B410  Trigger::cCondCodecSeqEnd::vf14  size=35  [class]
undefined4 __fastcall Trigger::cCondCodecSeqEnd::vf14(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    uVar1 = FUN_00937e00(param_1 + 0x10);
  }
  return uVar1;
}

// 00C7B440  FUN_00c7b440  size=34  [between]
void __thiscall FUN_00c7b440(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x14);
  *(int *)(param_1 + 4) = param_2;
  return;
}

// 00C7B4A0  Trigger::Cond::ENM_ENTITY_COUNT  size=133  [class]
bool __fastcall Trigger::Cond::ENM_ENTITY_COUNT(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x18) == -1) {
    FUN_00dd5650(&DAT_016a9514);
  }
  else {
    iVar1 = FUN_00c18cc0(*(int *)(param_1 + 0x18));
    if (iVar1 != 0) {
      iVar1 = FUN_00c19730(*(undefined4 *)(param_1 + 0x18));
      switch(*(undefined4 *)(param_1 + 0x10)) {
      case 1:
        return iVar1 < *(int *)(param_1 + 0x14);
      case 2:
        return iVar1 <= *(int *)(param_1 + 0x14);
      case 3:
        return iVar1 == *(int *)(param_1 + 0x14);
      case 4:
        return *(int *)(param_1 + 0x14) < iVar1;
      case 5:
        return *(int *)(param_1 + 0x14) <= iVar1;
      }
    }
  }
  return false;
}

// 00C7B540  FUN_00c7b540  size=28  [between]
void __thiscall FUN_00c7b540(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x10);
  return;
}

// 00C7B560  Trigger::cCondEnemyEntityCountByName::cCondEnemyEntityCountByName  size=32  [class]
void __fastcall
Trigger::cCondEnemyEntityCountByName::cCondEnemyEntityCountByName(undefined4 *param_1)

{
  param_1[3] = 0xffffffff;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  *param_1 = vftable;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}

// 00C7B590  Trigger::cCondEnemyEntityCountByName::vf1C  size=28  [class]
void __thiscall Trigger::cCondEnemyEntityCountByName::vf1C(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xc);
  *(int *)(param_1 + 0x18) = param_2 + 0x10;
  return;
}

// 00C7B600  Trigger::Cond::ENM_ENTITY_HP0_COUNT  size=133  [class]
bool __fastcall Trigger::Cond::ENM_ENTITY_HP0_COUNT(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x18) == -1) {
    FUN_00dd5650(&DAT_016a959c);
  }
  else {
    iVar1 = FUN_00c18cc0(*(int *)(param_1 + 0x18));
    if (iVar1 != 0) {
      iVar1 = FUN_00c19810(*(undefined4 *)(param_1 + 0x18));
      switch(*(undefined4 *)(param_1 + 0x10)) {
      case 1:
        return iVar1 < *(int *)(param_1 + 0x14);
      case 2:
        return iVar1 <= *(int *)(param_1 + 0x14);
      case 3:
        return iVar1 == *(int *)(param_1 + 0x14);
      case 4:
        return *(int *)(param_1 + 0x14) < iVar1;
      case 5:
        return *(int *)(param_1 + 0x14) <= iVar1;
      }
    }
  }
  return false;
}

// 00C7B6A0  FUN_00c7b6a0  size=28  [between]
void __thiscall FUN_00c7b6a0(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x10);
  return;
}

// 00C7B6C0  Trigger::cCondEnemyEntityCountHP0ByName::cCondEnemyEntityCountHP0ByName  size=32  [class]
void __fastcall
Trigger::cCondEnemyEntityCountHP0ByName::cCondEnemyEntityCountHP0ByName(undefined4 *param_1)

{
  param_1[3] = 0xffffffff;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  *param_1 = vftable;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}

// 00C7B6F0  Trigger::cCondEnemyEntityCountHP0ByName::vf1C  size=28  [class]
void __thiscall Trigger::cCondEnemyEntityCountHP0ByName::vf1C(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xc);
  *(int *)(param_1 + 0x18) = param_2 + 0x10;
  return;
}

// 00C7B760  Trigger::Cond::ROOM_EVENT_NOT_END  size=87  [class]
uint __fastcall Trigger::Cond::ROOM_EVENT_NOT_END(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016a9628);
    return 0;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 4);
  if (iVar1 == 0x40) {
    uVar3 = *(undefined4 *)(param_1 + 0x10);
    uVar4 = 1;
  }
  else {
    if (iVar1 != 0x41) goto LAB_00c7b7b0;
    uVar3 = *(undefined4 *)(param_1 + 0x10);
    uVar4 = 2;
  }
  uVar3 = FUN_00e678d0(uVar4,uVar3,0xffffffff);
  uVar2 = FUN_00e7a6e0(uVar3);
LAB_00c7b7b0:
  return uVar2 ^ 1;
}

// 00C7B7C0  FUN_00c7b7c0  size=16  [between]
void __thiscall FUN_00c7b7c0(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  return;
}

// 00C7B7D0  Trigger::cCondEnemyGroupFinishByName::cCondEnemyGroupFinishByName  size=35  [class]
void __fastcall
Trigger::cCondEnemyGroupFinishByName::cCondEnemyGroupFinishByName(undefined4 *param_1)

{
  param_1[3] = 0xffffffff;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  *param_1 = vftable;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}

// 00C7B810  Trigger::cCondEnemyGroupFinishByName::vf1C  size=22  [class]
void __thiscall Trigger::cCondEnemyGroupFinishByName::vf1C(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(int *)(param_1 + 0x10) = param_2 + 0xc;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 8);
  return;
}

// 00C7B830  Trigger::cCondEnemyGroupFinishByName::vf20  size=13  [class]
undefined4 __fastcall Trigger::cCondEnemyGroupFinishByName::vf20(int param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  return 1;
}

// 00C7B860  Trigger::cCondEnemyGroupFinishByNumber::cCondEnemyGroupFinishByNumber  size=32  [class]
void __fastcall
Trigger::cCondEnemyGroupFinishByNumber::cCondEnemyGroupFinishByNumber(undefined4 *param_1)

{
  param_1[3] = 0xffffffff;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  *param_1 = vftable;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  return;
}

// 00C7B890  Trigger::cCondEnemyGroupFinishByNumber::vf14  size=95  [class]
bool __fastcall Trigger::cCondEnemyGroupFinishByNumber::vf14(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  
  if ((DAT_01bea060 & 0x400) != 0) {
    return false;
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    iVar1 = FUN_00c18c10(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
    if (iVar1 == 1) {
      uVar2 = FUN_00c18d20(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
      *(undefined4 *)(param_1 + 0x18) = uVar2;
    }
  }
  bVar3 = *(int *)(param_1 + 0x18) == 1;
  if (bVar3) {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return bVar3;
}

// 00C7B8F0  Trigger::cCondEnemyGroupFinishByNumber::vf1C  size=22  [class]
void __thiscall Trigger::cCondEnemyGroupFinishByNumber::vf1C(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xc);
  return;
}

// 00C7B910  Trigger::cCondEnemyGroupFinishByNumber::vf20  size=13  [class]
undefined4 __fastcall Trigger::cCondEnemyGroupFinishByNumber::vf20(int param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  return 1;
}

// 00C7B920  Trigger::cCondEnemyGroupFinishHP0ByName::cCondEnemyGroupFinishHP0ByName  size=35  [class]
void __fastcall
Trigger::cCondEnemyGroupFinishHP0ByName::cCondEnemyGroupFinishHP0ByName(undefined4 *param_1)

{
  param_1[3] = 0xffffffff;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  *param_1 = vftable;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}

// 00C7B960  Trigger::cCondEnemyGroupFinishHP0ByName::vf1C  size=22  [class]
void __thiscall Trigger::cCondEnemyGroupFinishHP0ByName::vf1C(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 8);
  *(int *)(param_1 + 0x10) = param_2 + 0xc;
  return;
}

// 00C7B980  Trigger::cCondEnemyGroupFinishHP0ByName::vf20  size=13  [class]
undefined4 __fastcall Trigger::cCondEnemyGroupFinishHP0ByName::vf20(int param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  return 1;
}

// 00C7B9B0  Trigger::cCondEnemyGroupFinishHP0ByNumber::cCondEnemyGroupFinishHP0ByNumber  size=32  [class]
void __fastcall
Trigger::cCondEnemyGroupFinishHP0ByNumber::cCondEnemyGroupFinishHP0ByNumber(undefined4 *param_1)

{
  param_1[3] = 0xffffffff;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  *param_1 = vftable;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  return;
}

// 00C7B9E0  Trigger::cCondEnemyGroupFinishHP0ByNumber::vf14  size=95  [class]
bool __fastcall Trigger::cCondEnemyGroupFinishHP0ByNumber::vf14(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  
  if ((DAT_01bea060 & 0x400) != 0) {
    return false;
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    iVar1 = FUN_00c18c10(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
    if (iVar1 == 1) {
      uVar2 = FUN_00c18e00(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
      *(undefined4 *)(param_1 + 0x18) = uVar2;
    }
  }
  bVar3 = *(int *)(param_1 + 0x18) == 1;
  if (bVar3) {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return bVar3;
}

// 00C7BA40  Trigger::cCondEnemyGroupFinishHP0ByNumber::vf1C  size=22  [class]
void __thiscall Trigger::cCondEnemyGroupFinishHP0ByNumber::vf1C(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xc);
  return;
}

// 00C7BA60  Trigger::cCondEnemyGroupFinishHP0ByNumber::vf20  size=13  [class]
undefined4 __fastcall Trigger::cCondEnemyGroupFinishHP0ByNumber::vf20(int param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  return 1;
}

// 00C7BAA0  Trigger::cCondEnemyGroupNotSetByName::vf14  size=44  [class]
bool __fastcall Trigger::cCondEnemyGroupNotSetByName::vf14(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    FUN_00dd5650(&DAT_016a9148);
    return false;
  }
  iVar1 = FUN_00c18c40(*(undefined4 *)(param_1 + 0x10),*(int *)(param_1 + 0x14));
  return iVar1 == 0;
}

// 00C7BAD0  FUN_00c7bad0  size=22  [between]
void __thiscall FUN_00c7bad0(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  *(int *)(param_1 + 0x14) = param_2 + 0xc;
  return;
}

// 00C7BB20  Trigger::cCondEnemyGroupNotSetByNumber::vf14  size=24  [class]
bool __fastcall Trigger::cCondEnemyGroupNotSetByNumber::vf14(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00c18c10(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
  return iVar1 == 0;
}

// 00C7BB40  FUN_00c7bb40  size=22  [between]
void __thiscall FUN_00c7bb40(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xc);
  return;
}

// 00C7BB90  Trigger::cCondIsUIAnimEnd::vf14  size=6  [class]
undefined4 Trigger::cCondIsUIAnimEnd::vf14(void)

{
  return DAT_01dc2d6c;
}

// 00C7BBA0  Trigger::cCondEnemyGroupCountByName::cCondEnemyGroupCountByName  size=35  [class]
void __fastcall Trigger::cCondEnemyGroupCountByName::cCondEnemyGroupCountByName(undefined4 *param_1)

{
  param_1[3] = 0xffffffff;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  *param_1 = vftable;
  param_1[4] = 0;
  param_1[6] = 0xffffffff;
  param_1[7] = 0;
  param_1[8] = 0;
  return;
}

// 00C7BBE0  Trigger::cCondEnemyGroupCountByName::vf14  size=162  [class]
bool __fastcall Trigger::cCondEnemyGroupCountByName::vf14(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x18) == -1) {
    FUN_00dd5650(&DAT_016a97d4);
  }
  else {
    if (*(int *)(param_1 + 0x1c) == 0) {
      FUN_00dd5650(&DAT_016a97a0);
      return false;
    }
    iVar1 = FUN_00c18c40(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c));
    if (iVar1 != 0) {
      iVar1 = FUN_00c198c0(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
      switch(*(undefined4 *)(param_1 + 0x10)) {
      case 1:
        return iVar1 < *(int *)(param_1 + 0x14);
      case 2:
        return iVar1 <= *(int *)(param_1 + 0x14);
      case 3:
        return iVar1 == *(int *)(param_1 + 0x14);
      case 4:
        return *(int *)(param_1 + 0x14) < iVar1;
      case 5:
        return *(int *)(param_1 + 0x14) <= iVar1;
      }
    }
  }
  return false;
}

// 00C7BCA0  Trigger::cCondEnemyGroupCountByName::vf1C  size=34  [class]
void __thiscall Trigger::cCondEnemyGroupCountByName::vf1C(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x10);
  *(int *)(param_1 + 0x1c) = param_2 + 0x14;
  return;
}

// 00C7BCD0  Trigger::cCondEnemyGroupCountByNumber::cCondEnemyGroupCountByNumber  size=32  [class]
void __fastcall
Trigger::cCondEnemyGroupCountByNumber::cCondEnemyGroupCountByNumber(undefined4 *param_1)

{
  param_1[3] = 0xffffffff;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  *param_1 = vftable;
  param_1[4] = 0;
  param_1[6] = 0xffffffff;
  param_1[7] = 0xffffffff;
  return;
}

// 00C7BD00  Trigger::Cond::ENM_GRP_COUNT  size=163  [class]
bool __fastcall Trigger::Cond::ENM_GRP_COUNT(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x18) == -1) {
    FUN_00dd5650(&DAT_016a9868);
  }
  else {
    if (*(int *)(param_1 + 0x1c) == -1) {
      FUN_00dd5650(&DAT_016a9830);
      return false;
    }
    iVar1 = FUN_00c18c10(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c));
    if (iVar1 != 0) {
      iVar1 = FUN_00c19890(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
      switch(*(undefined4 *)(param_1 + 0x10)) {
      case 1:
        return iVar1 < *(int *)(param_1 + 0x14);
      case 2:
        return iVar1 <= *(int *)(param_1 + 0x14);
      case 3:
        return iVar1 == *(int *)(param_1 + 0x14);
      case 4:
        return *(int *)(param_1 + 0x14) < iVar1;
      case 5:
        return *(int *)(param_1 + 0x14) <= iVar1;
      }
    }
  }
  return false;
}

// 00C7BDC0  Trigger::cCondEnemyGroupCountByNumber::vf1C  size=34  [class]
void __thiscall Trigger::cCondEnemyGroupCountByNumber::vf1C(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x14);
  return;
}

// 00C7BDF0  Trigger::cCondEnemyGroupCountHP0ByName::cCondEnemyGroupCountHP0ByName  size=32  [class]
void __fastcall
Trigger::cCondEnemyGroupCountHP0ByName::cCondEnemyGroupCountHP0ByName(undefined4 *param_1)

{
  param_1[3] = 0xffffffff;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  *param_1 = vftable;
  param_1[4] = 0;
  param_1[6] = 0xffffffff;
  param_1[7] = 0;
  return;
}

// 00C7BE20  Trigger::cCondEnemyGroupCountHP0ByName::vf14  size=162  [class]
bool __fastcall Trigger::cCondEnemyGroupCountHP0ByName::vf14(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x18) == -1) {
    FUN_00dd5650(&DAT_016a98fc);
  }
  else {
    if (*(int *)(param_1 + 0x1c) == 0) {
      FUN_00dd5650(&DAT_016a98c4);
      return false;
    }
    iVar1 = FUN_00c18c40(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c));
    if (iVar1 != 0) {
      iVar1 = FUN_00c199a0(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
      switch(*(undefined4 *)(param_1 + 0x10)) {
      case 1:
        return iVar1 < *(int *)(param_1 + 0x14);
      case 2:
        return iVar1 <= *(int *)(param_1 + 0x14);
      case 3:
        return iVar1 == *(int *)(param_1 + 0x14);
      case 4:
        return *(int *)(param_1 + 0x14) < iVar1;
      case 5:
        return *(int *)(param_1 + 0x14) <= iVar1;
      }
    }
  }
  return false;
}

// 00C7BEE0  Trigger::cCondEnemyGroupCountHP0ByName::vf1C  size=34  [class]
void __thiscall Trigger::cCondEnemyGroupCountHP0ByName::vf1C(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x10);
  *(int *)(param_1 + 0x1c) = param_2 + 0x14;
  return;
}

// 00C7BF10  Trigger::cCondEnemyGroupCountHP0ByNumber::cCondEnemyGroupCountHP0ByNumber  size=32  [class]
void __fastcall
Trigger::cCondEnemyGroupCountHP0ByNumber::cCondEnemyGroupCountHP0ByNumber(undefined4 *param_1)

{
  param_1[3] = 0xffffffff;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  *param_1 = vftable;
  param_1[4] = 0;
  param_1[6] = 0xffffffff;
  param_1[7] = 0xffffffff;
  return;
}

// 00C7BF40  Trigger::cCondEnemyGroupCountHP0ByNumber::vf14  size=163  [class]
bool __fastcall Trigger::cCondEnemyGroupCountHP0ByNumber::vf14(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x18) == -1) {
    FUN_00dd5650(&DAT_016a9994);
  }
  else {
    if (*(int *)(param_1 + 0x1c) == -1) {
      FUN_00dd5650(&DAT_016a995c);
      return false;
    }
    iVar1 = FUN_00c18c10(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c));
    if (iVar1 != 0) {
      iVar1 = FUN_00c19970(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
      switch(*(undefined4 *)(param_1 + 0x10)) {
      case 1:
        return iVar1 < *(int *)(param_1 + 0x14);
      case 2:
        return iVar1 <= *(int *)(param_1 + 0x14);
      case 3:
        return iVar1 == *(int *)(param_1 + 0x14);
      case 4:
        return *(int *)(param_1 + 0x14) < iVar1;
      case 5:
        return *(int *)(param_1 + 0x14) <= iVar1;
      }
    }
  }
  return false;
}

// 00C7C000  Trigger::cCondEnemyGroupCountHP0ByNumber::vf1C  size=34  [class]
void __thiscall Trigger::cCondEnemyGroupCountHP0ByNumber::vf1C(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x14);
  return;
}

// 00C7C030  Trigger::cCondEnemyGroupEntityCountByName::cCondEnemyGroupEntityCountByName  size=35  [class]
void __fastcall
Trigger::cCondEnemyGroupEntityCountByName::cCondEnemyGroupEntityCountByName(undefined4 *param_1)

{
  param_1[3] = 0xffffffff;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  *param_1 = vftable;
  param_1[4] = 0;
  param_1[6] = 0xffffffff;
  param_1[7] = 0;
  param_1[8] = 0;
  return;
}

// 00C7C070  Trigger::cCondEnemyGroupEntityCountByName::vf14  size=162  [class]
bool __fastcall Trigger::cCondEnemyGroupEntityCountByName::vf14(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x18) == -1) {
    FUN_00dd5650(&DAT_016a9a30);
  }
  else {
    if (*(int *)(param_1 + 0x1c) == 0) {
      FUN_00dd5650(&DAT_016a99f4);
      return false;
    }
    iVar1 = FUN_00c18c40(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c));
    if (iVar1 != 0) {
      iVar1 = FUN_00c196d0(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
      switch(*(undefined4 *)(param_1 + 0x10)) {
      case 1:
        return iVar1 < *(int *)(param_1 + 0x14);
      case 2:
        return iVar1 <= *(int *)(param_1 + 0x14);
      case 3:
        return iVar1 == *(int *)(param_1 + 0x14);
      case 4:
        return *(int *)(param_1 + 0x14) < iVar1;
      case 5:
        return *(int *)(param_1 + 0x14) <= iVar1;
      }
    }
  }
  return false;
}

// 00C7C130  Trigger::cCondEnemyGroupEntityCountByName::vf1C  size=34  [class]
void __thiscall Trigger::cCondEnemyGroupEntityCountByName::vf1C(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x10);
  *(int *)(param_1 + 0x1c) = param_2 + 0x14;
  return;
}

// 00C7C160  Trigger::cCondEnemyGroupEntityCountByNumber::cCondEnemyGroupEntityCountByNumber  size=32  [class]
void __fastcall
Trigger::cCondEnemyGroupEntityCountByNumber::cCondEnemyGroupEntityCountByNumber(undefined4 *param_1)

{
  param_1[3] = 0xffffffff;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  *param_1 = vftable;
  param_1[4] = 0;
  param_1[6] = 0xffffffff;
  param_1[7] = 0xffffffff;
  return;
}

// 00C7C190  Trigger::Cond::ENM_GROUP_ENTITY_COUNT  size=163  [class]
bool __fastcall Trigger::Cond::ENM_GROUP_ENTITY_COUNT(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x18) == -1) {
    FUN_00dd5650(&DAT_016a9ad4);
  }
  else {
    if (*(int *)(param_1 + 0x1c) == -1) {
      FUN_00dd5650(&DAT_016a9a94);
      return false;
    }
    iVar1 = FUN_00c18c10(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c));
    if (iVar1 != 0) {
      iVar1 = FUN_00c196a0(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
      switch(*(undefined4 *)(param_1 + 0x10)) {
      case 1:
        return iVar1 < *(int *)(param_1 + 0x14);
      case 2:
        return iVar1 <= *(int *)(param_1 + 0x14);
      case 3:
        return iVar1 == *(int *)(param_1 + 0x14);
      case 4:
        return *(int *)(param_1 + 0x14) < iVar1;
      case 5:
        return *(int *)(param_1 + 0x14) <= iVar1;
      }
    }
  }
  return false;
}

// 00C7C250  Trigger::cCondEnemyGroupEntityCountByNumber::vf1C  size=34  [class]
void __thiscall Trigger::cCondEnemyGroupEntityCountByNumber::vf1C(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x14);
  return;
}

// 00C7C280  Trigger::cCondEnemyGroupEntityCountHP0ByName::cCondEnemyGroupEntityCountHP0ByName  size=35  [class]
void __fastcall
Trigger::cCondEnemyGroupEntityCountHP0ByName::cCondEnemyGroupEntityCountHP0ByName
          (undefined4 *param_1)

{
  param_1[3] = 0xffffffff;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  *param_1 = vftable;
  param_1[4] = 0;
  param_1[6] = 0xffffffff;
  param_1[7] = 0;
  param_1[8] = 0;
  return;
}

// 00C7C2C0  Trigger::cCondEnemyGroupEntityCountHP0ByName::vf14  size=162  [class]
bool __fastcall Trigger::cCondEnemyGroupEntityCountHP0ByName::vf14(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x18) == -1) {
    FUN_00dd5650(&DAT_016a9b7c);
  }
  else {
    if (*(int *)(param_1 + 0x1c) == 0) {
      FUN_00dd5650(&DAT_016a9b38);
      return false;
    }
    iVar1 = FUN_00c18c40(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c));
    if (iVar1 != 0) {
      iVar1 = FUN_00c197e0(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
      switch(*(undefined4 *)(param_1 + 0x10)) {
      case 1:
        return iVar1 < *(int *)(param_1 + 0x14);
      case 2:
        return iVar1 <= *(int *)(param_1 + 0x14);
      case 3:
        return iVar1 == *(int *)(param_1 + 0x14);
      case 4:
        return *(int *)(param_1 + 0x14) < iVar1;
      case 5:
        return *(int *)(param_1 + 0x14) <= iVar1;
      }
    }
  }
  return false;
}

// 00C7C380  Trigger::cCondEnemyGroupEntityCountHP0ByName::vf1C  size=34  [class]
void __thiscall Trigger::cCondEnemyGroupEntityCountHP0ByName::vf1C(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x10);
  *(int *)(param_1 + 0x1c) = param_2 + 0x14;
  return;
}

// 00C7C3E0  Trigger::Cond::ENM_GRP_ENTITY_HP0_COUNT  size=163  [class]
bool __fastcall Trigger::Cond::ENM_GRP_ENTITY_HP0_COUNT(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x18) == -1) {
    FUN_00dd5650(&DAT_016a9c2c);
  }
  else {
    if (*(int *)(param_1 + 0x1c) == -1) {
      FUN_00dd5650(&DAT_016a9be8);
      return false;
    }
    iVar1 = FUN_00c18c10(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c));
    if (iVar1 != 0) {
      iVar1 = FUN_00c197b0(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
      switch(*(undefined4 *)(param_1 + 0x10)) {
      case 1:
        return iVar1 < *(int *)(param_1 + 0x14);
      case 2:
        return iVar1 <= *(int *)(param_1 + 0x14);
      case 3:
        return iVar1 == *(int *)(param_1 + 0x14);
      case 4:
        return *(int *)(param_1 + 0x14) < iVar1;
      case 5:
        return *(int *)(param_1 + 0x14) <= iVar1;
      }
    }
  }
  return false;
}

// 00C7C4A0  FUN_00c7c4a0  size=34  [between]
void __thiscall FUN_00c7c4a0(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x14);
  return;
}

// 00C7C4D0  Trigger::cCondEnemyFinishDebrisByName::cCondEnemyFinishDebrisByName  size=37  [class]
void __fastcall
Trigger::cCondEnemyFinishDebrisByName::cCondEnemyFinishDebrisByName(undefined4 *param_1)

{
  param_1[5] = 0;
  param_1[3] = 0xffffffff;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  *param_1 = vftable;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  return;
}

// 00C7C510  Trigger::cCondEnemyFinishDebrisByName::vf1C  size=28  [class]
void __thiscall Trigger::cCondEnemyFinishDebrisByName::vf1C(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(int *)(param_1 + 0x10) = param_2 + 8;
  *(float *)(param_1 + 0x18) = *(float *)(param_2 + 0x18) * 60.0;
  return;
}

// 00C7C530  Trigger::cCondEnemyFinishDebrisByName::vf20  size=18  [class]
undefined4 __fastcall Trigger::cCondEnemyFinishDebrisByName::vf20(int param_1)

{
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return 1;
}

// 00C7C5A0  Trigger::cCondEnemyFinishDebrisByNumber::vf14  size=123  [class]
undefined4 __fastcall Trigger::cCondEnemyFinishDebrisByNumber::vf14(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  if ((DAT_01bea060 & 0x400) != 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
    iVar1 = FUN_00c18cc0(*(undefined4 *)(param_1 + 0x10));
    if (iVar1 == 1) {
      uVar2 = FUN_00c18f40(*(undefined4 *)(param_1 + 0x10));
      *(undefined4 *)(param_1 + 0x1c) = uVar2;
    }
  }
  if (*(int *)(param_1 + 0x1c) == 1) {
    if (*(float *)(param_1 + 0x18) < *(float *)(param_1 + 0x14) !=
        (*(float *)(param_1 + 0x18) == *(float *)(param_1 + 0x14))) {
      *(undefined4 *)(param_1 + 0x1c) = 0;
      return 1;
    }
    fVar3 = (float10)FUN_00e03a90(0);
    *(float *)(param_1 + 0x14) = (float)(fVar3 + (float10)*(float *)(param_1 + 0x14));
  }
  return 0;
}

// 00C7C620  FUN_00c7c620  size=28  [between]
void __thiscall FUN_00c7c620(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  *(float *)(param_1 + 0x18) = *(float *)(param_2 + 0xc) * 60.0;
  return;
}

// 00C7C640  FUN_00c7c640  size=18  [between]
undefined4 __fastcall FUN_00c7c640(int param_1)

{
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return 1;
}

// 00C7C660  Trigger::cCondEnemyGroupFinishDebrisByName::cCondEnemyGroupFinishDebrisByName  size=35  [class]
void __fastcall
Trigger::cCondEnemyGroupFinishDebrisByName::cCondEnemyGroupFinishDebrisByName(undefined4 *param_1)

{
  param_1[3] = 0xffffffff;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  *param_1 = vftable;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}

// 00C7C6A0  Trigger::cCondEnemyGroupFinishDebrisByName::vf1C  size=22  [class]
void __thiscall Trigger::cCondEnemyGroupFinishDebrisByName::vf1C(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(int *)(param_1 + 0x10) = param_2 + 0xc;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 8);
  return;
}

// 00C7C6C0  Trigger::cCondEnemyGroupFinishDebrisByName::vf20  size=13  [class]
undefined4 __fastcall Trigger::cCondEnemyGroupFinishDebrisByName::vf20(int param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  return 1;
}

// 00C7C6F0  Trigger::cCondEnemyGroupFinishDebrisByNumber::cCondEnemyGroupFinishDebrisByNumber  size=32  [class]
void __fastcall
Trigger::cCondEnemyGroupFinishDebrisByNumber::cCondEnemyGroupFinishDebrisByNumber
          (undefined4 *param_1)

{
  param_1[3] = 0xffffffff;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  *param_1 = vftable;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  return;
}

// 00C7C720  Trigger::cCondEnemyGroupFinishDebrisByNumber::vf14  size=95  [class]
bool __fastcall Trigger::cCondEnemyGroupFinishDebrisByNumber::vf14(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  
  if ((DAT_01bea060 & 0x400) != 0) {
    return false;
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    iVar1 = FUN_00c18c10(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
    if (iVar1 == 1) {
      uVar2 = FUN_00c18f70(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
      *(undefined4 *)(param_1 + 0x18) = uVar2;
    }
  }
  bVar3 = *(int *)(param_1 + 0x18) == 1;
  if (bVar3) {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return bVar3;
}

// 00C7C780  Trigger::cCondEnemyGroupFinishDebrisByNumber::vf1C  size=22  [class]
void __thiscall Trigger::cCondEnemyGroupFinishDebrisByNumber::vf1C(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xc);
  return;
}

// 00C7C7A0  Trigger::cCondEnemyGroupFinishDebrisByNumber::vf20  size=13  [class]
undefined4 __fastcall Trigger::cCondEnemyGroupFinishDebrisByNumber::vf20(int param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  return 1;
}

// 00C7C7B0  Trigger::cCondIsScrMeshOn::cCondIsScrMeshOn  size=41  [class]
void __fastcall Trigger::cCondIsScrMeshOn::cCondIsScrMeshOn(undefined4 *param_1)

{
  param_1[3] = 0xffffffff;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  *param_1 = vftable;
  param_1[4] = 0;
  param_1[9] = 0xffffffff;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  return;
}

// 00C7C7F0  Trigger::cCondIsScrMeshOn::vf10  size=1  [class]
void Trigger::cCondIsScrMeshOn::vf10(void)

{
  return;
}

// 00C7C800  Trigger::cCondIsScrMeshOn::vf1C  size=46  [class]
void __thiscall Trigger::cCondIsScrMeshOn::vf1C(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x1c);
  return;
}

// 00C7C830  Trigger::cCondIsScrMeshOff::cCondIsScrMeshOff  size=41  [class]
void __fastcall Trigger::cCondIsScrMeshOff::cCondIsScrMeshOff(undefined4 *param_1)

{
  param_1[3] = 0xffffffff;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  *param_1 = vftable;
  param_1[4] = 0;
  param_1[9] = 0xffffffff;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  return;
}

// 00C7C870  Trigger::cCondIsScrMeshOff::vf10  size=1  [class]
void Trigger::cCondIsScrMeshOff::vf10(void)

{
  return;
}

// 00C7C880  Trigger::cCondIsScrMeshOff::vf1C  size=46  [class]
void __thiscall Trigger::cCondIsScrMeshOff::vf1C(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x1c);
  return;
}

// 00C7C8E0  Trigger::Cond::STA_FLAG  size=64  [class]
bool __fastcall Trigger::Cond::STA_FLAG(int param_1)

{
  if (-1 < *(int *)(param_1 + 0x10)) {
    return (0x80000000U >> ((byte)*(uint *)(&DAT_018abb5c + *(int *)(param_1 + 0x10) * 8) & 0x1f) &
           (&DAT_01bea060)[*(uint *)(&DAT_018abb5c + *(int *)(param_1 + 0x10) * 8) >> 5]) != 0;
  }
  FUN_00dd5650(&DAT_016a9d84);
  return false;
}

// 00C7C920  FUN_00c7c920  size=58  [between]
void __thiscall FUN_00c7c920(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  *(int *)(param_1 + 4) = param_2;
  uVar2 = 0;
  do {
    iVar1 = FUN_00e03ea0((&PTR_s_STA_SCENARIO_018abb58)[uVar2 * 2]);
    if (*(int *)(param_2 + 8) == iVar1) {
      *(uint *)(param_1 + 0x10) = uVar2;
      return;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x19);
  return;
}

// 00C7C990  Trigger::Cond::NOT_GAME_FLAG_2  size=67  [class]
bool __fastcall Trigger::Cond::NOT_GAME_FLAG_2(int param_1)

{
  if (-1 < *(int *)(param_1 + 0x10)) {
    return (0x80000000U >> ((byte)*(uint *)(&DAT_018abb5c + *(int *)(param_1 + 0x10) * 8) & 0x1f) &
           (&DAT_01bea060)[*(uint *)(&DAT_018abb5c + *(int *)(param_1 + 0x10) * 8) >> 5]) == 0;
  }
  FUN_00dd5650(&DAT_016a9490);
  return false;
}

// 00C7C9E0  FUN_00c7c9e0  size=58  [between]
void __thiscall FUN_00c7c9e0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  *(int *)(param_1 + 4) = param_2;
  uVar2 = 0;
  do {
    iVar1 = FUN_00e03ea0((&PTR_s_STA_SCENARIO_018abb58)[uVar2 * 2]);
    if (*(int *)(param_2 + 8) == iVar1) {
      *(uint *)(param_1 + 0x10) = uVar2;
      return;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x19);
  return;
}

// 00C7CA50  Trigger::Cond::STP_FLAG  size=64  [class]
bool __fastcall Trigger::Cond::STP_FLAG(int param_1)

{
  if (-1 < *(int *)(param_1 + 0x10)) {
    return (0x80000000U >> ((byte)*(uint *)(&DAT_018abc24 + *(int *)(param_1 + 0x10) * 8) & 0x1f) &
           (&DAT_01bea070)[*(uint *)(&DAT_018abc24 + *(int *)(param_1 + 0x10) * 8) >> 5]) != 0;
  }
  FUN_00dd5650(&DAT_016a9e00);
  return false;
}

// 00C7CA90  FUN_00c7ca90  size=58  [between]
void __thiscall FUN_00c7ca90(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  *(int *)(param_1 + 4) = param_2;
  uVar2 = 0;
  do {
    iVar1 = FUN_00e03ea0((&PTR_s_STP_OBJ_018abc20)[uVar2 * 2]);
    if (*(int *)(param_2 + 8) == iVar1) {
      *(uint *)(param_1 + 0x10) = uVar2;
      return;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x16);
  return;
}

// 00C7CB00  Trigger::Cond::NOT_STP_FLAG  size=67  [class]
bool __fastcall Trigger::Cond::NOT_STP_FLAG(int param_1)

{
  if (-1 < *(int *)(param_1 + 0x10)) {
    return (0x80000000U >> ((byte)*(uint *)(&DAT_018abc24 + *(int *)(param_1 + 0x10) * 8) & 0x1f) &
           (&DAT_01bea070)[*(uint *)(&DAT_018abc24 + *(int *)(param_1 + 0x10) * 8) >> 5]) == 0;
  }
  FUN_00dd5650(&DAT_016a9e54);
  return false;
}

// 00C7CB50  FUN_00c7cb50  size=58  [between]
void __thiscall FUN_00c7cb50(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  *(int *)(param_1 + 4) = param_2;
  uVar2 = 0;
  do {
    iVar1 = FUN_00e03ea0((&PTR_s_STP_OBJ_018abc20)[uVar2 * 2]);
    if (*(int *)(param_2 + 8) == iVar1) {
      *(uint *)(param_1 + 0x10) = uVar2;
      return;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x16);
  return;
}

// 00C7CB90  Trigger::cCondIsScrCollisionOn::cCondIsScrCollisionOn  size=38  [class]
void __fastcall Trigger::cCondIsScrCollisionOn::cCondIsScrCollisionOn(undefined4 *param_1)

{
  param_1[3] = 0xffffffff;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  *param_1 = vftable;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  return;
}

// 00C7CBD0  Trigger::cCondIsScrCollisionOn::vf10  size=1  [class]
void Trigger::cCondIsScrCollisionOn::vf10(void)

{
  return;
}

// 00C7CBE0  Trigger::cCondIsScrCollisionOn::vf14  size=149  [class]
undefined4 __fastcall Trigger::cCondIsScrCollisionOn::vf14(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_EBX;
  int unaff_ESI;
  int iVar4;
  int local_c [3];
  
  iVar4 = 0;
  local_c[1] = 0;
  local_c[0] = 0;
  piVar1 = (int *)FUN_00c14bb0();
  iVar2 = (**(code **)(*piVar1 + 0x28))(local_c,*(undefined4 *)(param_1 + 0x10));
  if ((iVar2 != 0) && (0 < unaff_ESI)) {
    do {
      piVar1 = *(int **)(iVar2 + iVar4 * 4);
      if (piVar1 != (int *)0x0) {
        iVar3 = (**(code **)(*piVar1 + 8))();
        if (iVar3 != 0) {
          local_c[0] = 0;
          iVar3 = (**(code **)(**(int **)(iVar2 + iVar4 * 4) + 0xe8))(param_1 + 0x14,local_c,1);
          if ((iVar3 != 0) && (local_c[0] == 1)) {
            unaff_EBX = 1;
          }
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < unaff_ESI);
    return unaff_EBX;
  }
  return 0;
}

// 00C7CC80  Trigger::cCondIsScrCollisionOn::vf1C  size=40  [class]
void __thiscall Trigger::cCondIsScrCollisionOn::vf1C(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x18);
  return;
}

// 00C7CCE0  Trigger::cCondHasItem::vf10  size=1  [class]
void Trigger::cCondHasItem::vf10(void)

{
  return;
}

// 00C7CCF0  Trigger::cCondHasItem::vf14  size=13  [class]
void __fastcall Trigger::cCondHasItem::vf14(int param_1)

{
  FUN_00951bf0(*(undefined4 *)(param_1 + 0x10));
  return;
}

// 00C7CD00  FUN_00c7cd00  size=16  [between]
void __thiscall FUN_00c7cd00(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  return;
}

// 00C7CD40  Trigger::cCondHasNotItem::vf10  size=1  [class]
void Trigger::cCondHasNotItem::vf10(void)

{
  return;
}

// 00C7CD50  Trigger::cCondHasNotItem::vf14  size=18  [class]
bool __fastcall Trigger::cCondHasNotItem::vf14(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00951bf0(*(undefined4 *)(param_1 + 0x10));
  return iVar1 == 0;
}

// 00C7CD70  FUN_00c7cd70  size=16  [between]
void __thiscall FUN_00c7cd70(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  return;
}

// 00C7CDB0  Trigger::cCondIsNowBattle::vf10  size=1  [class]
void Trigger::cCondIsNowBattle::vf10(void)

{
  return;
}

// 00C7CDC0  Trigger::cCondIsNowBattle::vf14  size=10  [class]
void Trigger::cCondIsNowBattle::vf14(void)

{
  FUN_00c1bd80();
  return;
}

// 00C7CDD0  FUN_00c7cdd0  size=10  [between]
void __thiscall FUN_00c7cdd0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C7CE10  Trigger::cCondResultEnd::vf0C  size=6  [class]
undefined4 Trigger::cCondResultEnd::vf0C(void)

{
  return 1;
}

// 00C7CE20  Trigger::cCondResultEnd::vf14  size=28  [class]
uint __fastcall Trigger::cCondResultEnd::vf14(int param_1)

{
  if (*(int *)(param_1 + 0x10) == 0) {
    *(uint *)(param_1 + 0x10) = DAT_01dc1308;
    return 0;
  }
  return ~DAT_01dc1308 & 1;
}

// 00C7CE40  FUN_00c7ce40  size=10  [between]
void __thiscall FUN_00c7ce40(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C7CE50  FUN_00c7ce50  size=13  [between]
undefined4 __fastcall FUN_00c7ce50(int param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  return 1;
}

// 00C7CE90  Trigger::cCondHostageSaved::vf14  size=23  [class]
void __fastcall Trigger::cCondHostageSaved::vf14(int param_1)

{
  FUN_00a5f6d0(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),
               *(undefined4 *)(param_1 + 0x18));
  return;
}

// 00C7CEB0  FUN_00c7ceb0  size=28  [between]
void __thiscall FUN_00c7ceb0(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x10);
  return;
}

// 00C7CF00  Trigger::cCondLineInfraredHit::vf10  size=1  [class]
void Trigger::cCondLineInfraredHit::vf10(void)

{
  return;
}

// 00C7CF10  Trigger::cCondLineInfraredHit::vf14  size=15  [class]
void __fastcall Trigger::cCondLineInfraredHit::vf14(int param_1)

{
  FUN_00c2d7f0(*(undefined4 *)(param_1 + 0x10));
  return;
}

// 00C7CF20  FUN_00c7cf20  size=16  [between]
void __thiscall FUN_00c7cf20(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  return;
}

// 00C7CF60  Trigger::cCondIsBattleAreaOn::vf10  size=1  [class]
void Trigger::cCondIsBattleAreaOn::vf10(void)

{
  return;
}

// 00C7CF70  Trigger::cCondIsBattleAreaOn::vf14  size=23  [class]
void __fastcall Trigger::cCondIsBattleAreaOn::vf14(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00401110();
  (**(code **)(*piVar1 + 0xc))(*(undefined4 *)(param_1 + 0x10));
  return;
}

// 00C7CF90  FUN_00c7cf90  size=16  [between]
void __thiscall FUN_00c7cf90(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  return;
}

// 00C7CFD0  Trigger::cCondIsAnimPlay::vf10  size=1  [class]
void Trigger::cCondIsAnimPlay::vf10(void)

{
  return;
}

// 00C7D010  Trigger::Cond::IS_ANIM_PLAY  size=33  [class]
void __thiscall Trigger::Cond::IS_ANIM_PLAY(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  if (param_2 == 0) {
    FUN_00dd5650(&DAT_016aa018);
    return;
  }
  *(int *)(param_1 + 0x10) = param_2;
  return;
}

// 00C7D080  Trigger::cCondTimeSta::vf0C  size=39  [class]
undefined4 __fastcall Trigger::cCondTimeSta::vf0C(int param_1)

{
  if (*(float *)(param_1 + 0x30) != -1.0) {
    *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) + 1.0;
    return 1;
  }
  return 0;
}

// 00C7D0B0  Trigger::Cond::STA_FLAG_2  size=134  [class]
void __fastcall Trigger::Cond::STA_FLAG_2(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  float10 fVar4;
  
  uVar3 = 1;
  piVar2 = (int *)(param_1 + 0x34);
  iVar1 = 8;
  do {
    if (piVar2[-9] != -1) {
      if (*piVar2 == -1) {
        FUN_00dd5650(&DAT_016a9d84);
      }
      else {
        uVar3 = uVar3 & (0x80000000U >> ((byte)*(uint *)(&DAT_018abb5c + *piVar2 * 8) & 0x1f) &
                        (&DAT_01bea060)[*(uint *)(&DAT_018abb5c + *piVar2 * 8) >> 5]) != 0;
      }
    }
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  *(uint *)(param_1 + 0x54) = uVar3 ^ 1;
  if (((uVar3 ^ 1) == 1) && (0.0 < *(float *)(param_1 + 0x30))) {
    fVar4 = (float10)FUN_00e049b0();
    *(float *)(param_1 + 0x30) = (float)((float10)*(float *)(param_1 + 0x30) - fVar4);
  }
  return;
}

// 00C7D140  Trigger::Cond::TIME_STA  size=40  [class]
undefined4 __fastcall Trigger::Cond::TIME_STA(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016aa070);
  }
  else if (*(float *)(param_1 + 0x30) <= 0.0) {
    return 1;
  }
  return 0;
}

// 00C7D170  FUN_00c7d170  size=117  [between]
void __thiscall FUN_00c7d170(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  piVar3 = (int *)(param_1 + 0x10);
  piVar4 = (int *)(param_2 + 8);
  piVar6 = piVar3;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar6 = *piVar4;
    piVar4 = piVar4 + 1;
    piVar6 = piVar6 + 1;
  }
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x28);
  iVar2 = 8;
  do {
    if (*piVar3 != -1) {
      uVar5 = 0;
      do {
        iVar1 = FUN_00e03ea0((&PTR_s_STA_SCENARIO_018abb58)[uVar5 * 2]);
        if (*piVar3 == iVar1) {
          piVar3[9] = uVar5;
          break;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < 0x19);
    }
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
      return;
    }
  } while( true );
}

// 00C7D220  Trigger::cCondEnemyFinishCompByNumber::vf14  size=123  [class]
undefined4 __fastcall Trigger::cCondEnemyFinishCompByNumber::vf14(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  if ((DAT_01bea060 & 0x400) != 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
    iVar1 = FUN_00c18cc0(*(undefined4 *)(param_1 + 0x10));
    if (iVar1 == 1) {
      uVar2 = FUN_00c19090(*(undefined4 *)(param_1 + 0x10));
      *(undefined4 *)(param_1 + 0x1c) = uVar2;
    }
  }
  if (*(int *)(param_1 + 0x1c) == 1) {
    if (*(float *)(param_1 + 0x18) < *(float *)(param_1 + 0x14) !=
        (*(float *)(param_1 + 0x18) == *(float *)(param_1 + 0x14))) {
      *(undefined4 *)(param_1 + 0x1c) = 0;
      return 1;
    }
    fVar3 = (float10)FUN_00e03a90(0);
    *(float *)(param_1 + 0x14) = (float)(fVar3 + (float10)*(float *)(param_1 + 0x14));
  }
  return 0;
}

// 00C7D2A0  FUN_00c7d2a0  size=28  [between]
void __thiscall FUN_00c7d2a0(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  *(float *)(param_1 + 0x18) = *(float *)(param_2 + 0xc) * 60.0;
  return;
}

// 00C7D2C0  FUN_00c7d2c0  size=18  [between]
undefined4 __fastcall FUN_00c7d2c0(int param_1)

{
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return 1;
}

// 00C7D2E0  Trigger::cCondEnemyFinishCompByName::cCondEnemyFinishCompByName  size=37  [class]
void __fastcall Trigger::cCondEnemyFinishCompByName::cCondEnemyFinishCompByName(undefined4 *param_1)

{
  param_1[5] = 0;
  param_1[3] = 0xffffffff;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  *param_1 = vftable;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  return;
}

// 00C7D320  Trigger::cCondEnemyFinishCompByName::vf1C  size=28  [class]
void __thiscall Trigger::cCondEnemyFinishCompByName::vf1C(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(int *)(param_1 + 0x10) = param_2 + 8;
  *(float *)(param_1 + 0x18) = *(float *)(param_2 + 0x18) * 60.0;
  return;
}

// 00C7D340  Trigger::cCondEnemyFinishCompByName::vf20  size=18  [class]
undefined4 __fastcall Trigger::cCondEnemyFinishCompByName::vf20(int param_1)

{
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return 1;
}

// 00C7D3B0  Trigger::cCondEnemyFinishHPCompByNumber::vf14  size=123  [class]
undefined4 __fastcall Trigger::cCondEnemyFinishHPCompByNumber::vf14(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  if ((DAT_01bea060 & 0x400) != 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
    iVar1 = FUN_00c18cc0(*(undefined4 *)(param_1 + 0x10));
    if (iVar1 == 1) {
      uVar2 = FUN_00c19110(*(undefined4 *)(param_1 + 0x10));
      *(undefined4 *)(param_1 + 0x1c) = uVar2;
    }
  }
  if (*(int *)(param_1 + 0x1c) == 1) {
    if (*(float *)(param_1 + 0x18) < *(float *)(param_1 + 0x14) !=
        (*(float *)(param_1 + 0x18) == *(float *)(param_1 + 0x14))) {
      *(undefined4 *)(param_1 + 0x1c) = 0;
      return 1;
    }
    fVar3 = (float10)FUN_00e03a90(0);
    *(float *)(param_1 + 0x14) = (float)(fVar3 + (float10)*(float *)(param_1 + 0x14));
  }
  return 0;
}

// 00C7D430  FUN_00c7d430  size=28  [between]
void __thiscall FUN_00c7d430(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  *(float *)(param_1 + 0x18) = *(float *)(param_2 + 0xc) * 60.0;
  return;
}

// 00C7D450  FUN_00c7d450  size=18  [between]
undefined4 __fastcall FUN_00c7d450(int param_1)

{
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return 1;
}

// 00C7D470  Trigger::cCondEnemyFinishHPCompByName::cCondEnemyFinishHPCompByName  size=37  [class]
void __fastcall
Trigger::cCondEnemyFinishHPCompByName::cCondEnemyFinishHPCompByName(undefined4 *param_1)

{
  param_1[5] = 0;
  param_1[3] = 0xffffffff;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  *param_1 = vftable;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  return;
}

// 00C7D4B0  Trigger::cCondEnemyFinishHPCompByName::vf1C  size=28  [class]
void __thiscall Trigger::cCondEnemyFinishHPCompByName::vf1C(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(int *)(param_1 + 0x10) = param_2 + 8;
  *(float *)(param_1 + 0x18) = *(float *)(param_2 + 0x18) * 60.0;
  return;
}

// 00C7D4D0  Trigger::cCondEnemyFinishHPCompByName::vf20  size=18  [class]
undefined4 __fastcall Trigger::cCondEnemyFinishHPCompByName::vf20(int param_1)

{
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return 1;
}

// 00C7D540  Trigger::cCondEnemyFinishDebrisCompByNumber::vf14  size=185  [class]
undefined4 __fastcall Trigger::cCondEnemyFinishDebrisCompByNumber::vf14(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  float10 fVar4;
  
  if ((DAT_01bea060 & 0x400) != 0) {
    return 0;
  }
  if ((((DAT_01dbd1d0 != 0) && (*(int *)(DAT_01dbd1d8 + 0xc) == 0x520)) &&
      (iVar2 = *(int *)(DAT_01dbd1d8 + 0x10), iVar1 = FUN_00e03ea0("P520_RUN_SAVE"), iVar2 == iVar1)
      ) && ((*(int *)(param_1 + 0x10) == 0xd && ((DAT_01bea060 & 0x2000000) != 0)))) {
    return 0;
  }
  if ((*(int *)(param_1 + 0x1c) == 0) &&
     (iVar2 = FUN_00c18cc0(*(undefined4 *)(param_1 + 0x10)), iVar2 == 1)) {
    uVar3 = FUN_00c19190(*(undefined4 *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
  }
  if (*(int *)(param_1 + 0x1c) == 1) {
    if (*(float *)(param_1 + 0x18) < *(float *)(param_1 + 0x14) !=
        (*(float *)(param_1 + 0x18) == *(float *)(param_1 + 0x14))) {
      *(undefined4 *)(param_1 + 0x1c) = 0;
      return 1;
    }
    fVar4 = (float10)FUN_00e03a90(0);
    *(float *)(param_1 + 0x14) = (float)(fVar4 + (float10)*(float *)(param_1 + 0x14));
  }
  return 0;
}

// 00C7D600  FUN_00c7d600  size=28  [between]
void __thiscall FUN_00c7d600(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  *(float *)(param_1 + 0x18) = *(float *)(param_2 + 0xc) * 60.0;
  return;
}

// 00C7D620  FUN_00c7d620  size=18  [between]
undefined4 __fastcall FUN_00c7d620(int param_1)

{
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return 1;
}

// 00C7D640  Trigger::cCondEnemyFinishDebrisCompByName::cCondEnemyFinishDebrisCompByName  size=37  [class]
void __fastcall
Trigger::cCondEnemyFinishDebrisCompByName::cCondEnemyFinishDebrisCompByName(undefined4 *param_1)

{
  param_1[5] = 0;
  param_1[3] = 0xffffffff;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  *param_1 = vftable;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  return;
}

// 00C7D680  Trigger::cCondEnemyFinishDebrisCompByName::vf1C  size=28  [class]
void __thiscall Trigger::cCondEnemyFinishDebrisCompByName::vf1C(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(int *)(param_1 + 0x10) = param_2 + 8;
  *(float *)(param_1 + 0x18) = *(float *)(param_2 + 0x18) * 60.0;
  return;
}

// 00C7D6A0  Trigger::cCondEnemyFinishDebrisCompByName::vf20  size=18  [class]
undefined4 __fastcall Trigger::cCondEnemyFinishDebrisCompByName::vf20(int param_1)

{
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return 1;
}

// 00C7D710  Trigger::cCondIsEndAntiqueScroll::vf10  size=1  [class]
void Trigger::cCondIsEndAntiqueScroll::vf10(void)

{
  return;
}

// 00C7D720  Trigger::cCondIsEndAntiqueScroll::vf14  size=20  [class]
bool Trigger::cCondIsEndAntiqueScroll::vf14(void)

{
  char cVar1;
  
  cVar1 = FUN_00a55810();
  return cVar1 != '\0';
}

// 00C7D740  FUN_00c7d740  size=10  [between]
void __thiscall FUN_00c7d740(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C7D780  Trigger::cCondIsNowVRMission::vf10  size=1  [class]
void Trigger::cCondIsNowVRMission::vf10(void)

{
  return;
}

// 00C7D790  Trigger::cCondIsNowVRMission::vf14  size=10  [class]
void Trigger::cCondIsNowVRMission::vf14(void)

{
  FUN_0095bfa0();
  FUN_0095c2a0();
  return;
}

// 00C7D7A0  FUN_00c7d7a0  size=10  [between]
void __thiscall FUN_00c7d7a0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C7D7B0  Trigger::cCondVrEnemyGroupFinishByNumber::cCondVrEnemyGroupFinishByNumber  size=32  [class]
void __fastcall
Trigger::cCondVrEnemyGroupFinishByNumber::cCondVrEnemyGroupFinishByNumber(undefined4 *param_1)

{
  param_1[3] = 0xffffffff;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  *param_1 = vftable;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  return;
}

// 00C7D7E0  Trigger::cCondVrEnemyGroupFinishByNumber::vf10  size=1  [class]
void Trigger::cCondVrEnemyGroupFinishByNumber::vf10(void)

{
  return;
}

// 00C7D7F0  Trigger::cCondVrEnemyGroupFinishByNumber::vf14  size=104  [class]
bool __fastcall Trigger::cCondVrEnemyGroupFinishByNumber::vf14(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  
  if ((DAT_01bea060 & 0x400) == 0) {
    iVar1 = FUN_0095c170();
    if (iVar1 != 0) {
      if (*(int *)(param_1 + 0x18) == 0) {
        iVar1 = FUN_00c18c10(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
        if (iVar1 == 1) {
          uVar2 = FUN_00c18d20(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
          *(undefined4 *)(param_1 + 0x18) = uVar2;
        }
      }
      bVar3 = *(int *)(param_1 + 0x18) == 1;
      if (bVar3) {
        *(undefined4 *)(param_1 + 0x18) = 0;
      }
      return bVar3;
    }
  }
  return false;
}

// 00C7D860  Trigger::cCondVrEnemyGroupFinishByNumber::vf1C  size=22  [class]
void __thiscall Trigger::cCondVrEnemyGroupFinishByNumber::vf1C(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xc);
  return;
}

// 00C7D880  Trigger::cCondVrEnemyGroupFinishByNumber::vf20  size=13  [class]
undefined4 __fastcall Trigger::cCondVrEnemyGroupFinishByNumber::vf20(int param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  return 1;
}

// 00C7D8C0  Trigger::cCondIsCodec::vf10  size=1  [class]
void Trigger::cCondIsCodec::vf10(void)

{
  return;
}

// 00C7D8D0  Trigger::cCondIsCodec::vf14  size=12  [class]
uint Trigger::cCondIsCodec::vf14(void)

{
  return DAT_01bea060 >> 0x12 & 1;
}

// 00C7D8E0  FUN_00c7d8e0  size=10  [between]
void __thiscall FUN_00c7d8e0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C7D920  Trigger::cCondIsAnyCodec::vf10  size=1  [class]
void Trigger::cCondIsAnyCodec::vf10(void)

{
  return;
}

// 00C7D930  Trigger::cCondIsAnyCodec::vf14  size=12  [class]
uint Trigger::cCondIsAnyCodec::vf14(void)

{
  return DAT_01bea060 >> 7 & 1;
}

// 00C7D940  FUN_00c7d940  size=10  [between]
void __thiscall FUN_00c7d940(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C7D950  Trigger::cCondResetSequence::cCondResetSequence  size=60  [class]
undefined4 * __fastcall Trigger::cCondResetSequence::cCondResetSequence(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[3] = 0xffffffff;
  param_1[2] = 0xffffffff;
  *param_1 = vftable;
  _memset(param_1 + 4,0,0x3c);
  return param_1;
}

// 00C7D9A0  Trigger::cCondResetSequence::vf04  size=48  [class]
void __fastcall Trigger::cCondResetSequence::vf04(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x8c)) {
    piVar1 = (int *)(param_1 + 0x10);
    do {
      if (*piVar1 != 0) {
        (**(code **)(*(int *)*piVar1 + 4))();
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x8c));
  }
  return;
}

// 00C7D9D0  Trigger::cCondResetSequence::vf08  size=67  [class]
void __fastcall Trigger::cCondResetSequence::vf08(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x8c)) {
    piVar1 = (int *)(param_1 + 0x10);
    do {
      if ((int *)*piVar1 != (int *)0x0) {
        (**(code **)(*(int *)*piVar1 + 8))();
        if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)*piVar1)(1);
          *piVar1 = 0;
        }
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x8c));
  }
  return;
}

// 00C7DA20  Trigger::cCondResetSequence::vf0C  size=1  [class]
undefined4 __fastcall Trigger::cCondResetSequence::vf0C(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (0 < *(int *)(param_1 + 0x8c)) {
    if (*(int *)(param_1 + 0x10) == 0) {
      FUN_00dd5650(&DAT_016a8b24,1);
      return 0;
    }
    iVar1 = (**(code **)(**(int **)(param_1 + 0x10) + 0xc))();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016a8af4,*(int *)(param_1 + 0x88) + 1);
      return 0;
    }
  }
  return 1;
}

// 00C7DA80  Trigger::cCondResetSequence::vf10  size=397  [class]
void __fastcall Trigger::cCondResetSequence::vf10(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  if (*(int *)(param_1 + 8) == 2) {
    *(undefined4 *)(param_1 + 0x88) = 0;
    if (0 < *(int *)(param_1 + 0x8c)) {
      piVar3 = (int *)(param_1 + 0x10);
      iVar4 = 0;
      do {
        if (*piVar3 != 0) {
          (**(code **)(*(int *)*piVar3 + 0x10))();
        }
        iVar4 = iVar4 + 1;
        piVar3 = piVar3 + 1;
      } while (iVar4 < *(int *)(param_1 + 0x8c));
    }
  }
  else {
    iVar4 = *(int *)(param_1 + 0x88);
    if (iVar4 < 0) {
      return;
    }
    if ((iVar4 < *(int *)(param_1 + 0x8c)) && (*(int *)(param_1 + 0x10 + iVar4 * 4) != 0)) {
      (**(code **)(**(int **)(param_1 + 0x10 + iVar4 * 4) + 0x10))();
    }
  }
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x8c)) {
    piVar3 = (int *)(param_1 + 0x10);
    piVar5 = (int *)(param_1 + 0x4c);
    do {
      if (*(int *)(param_1 + 0x10 + *(int *)(param_1 + 0x88) * 4) == 0) break;
      uVar1 = (**(code **)(*(int *)*piVar3 + 0x14))();
      if (*piVar5 == 1) {
        uVar1 = uVar1 ^ 1;
      }
      if (uVar1 != 1) {
        if (iVar4 != *(int *)(param_1 + 0x88)) {
          iVar4 = 0;
          if (0 < *(int *)(param_1 + 0x8c)) {
            piVar3 = (int *)(param_1 + 0x10);
            do {
              iVar4 = iVar4 + 1;
              *(undefined4 *)(*piVar3 + 0xc) = 0;
              piVar3 = piVar3 + 1;
            } while (iVar4 < *(int *)(param_1 + 0x8c));
          }
          *(undefined4 *)(param_1 + 0x88) = 0;
          if (*(int *)(param_1 + 8) != 2) {
            (**(code **)(**(int **)(param_1 + 0x10) + 0xc))();
          }
        }
        break;
      }
      *(undefined4 *)(*piVar3 + 0xc) = 1;
      piVar5 = piVar5 + 1;
      if (iVar4 == *(int *)(param_1 + 0x88)) {
        iVar2 = *(int *)(param_1 + 0x88) + 1;
        *(int *)(param_1 + 0x88) = iVar2;
        if ((iVar2 < *(int *)(param_1 + 0x8c)) && (*(int *)(param_1 + 0x10 + iVar2 * 4) != 0)) {
          if (*(int *)(param_1 + 8) != 2) {
            (**(code **)(**(int **)(param_1 + 0x10 + iVar2 * 4) + 0xc))();
          }
          (**(code **)(**(int **)(param_1 + 0x10 + *(int *)(param_1 + 0x88) * 4) + 0x10))();
        }
      }
      piVar3 = piVar3 + 1;
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x8c));
  }
  if (*(int *)(param_1 + 0x88) < *(int *)(param_1 + 0x8c)) {
    *(undefined4 *)(param_1 + 0x90) = 0;
    return;
  }
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x10) + 0xc))();
  }
  *(undefined4 *)(param_1 + 0x88) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x90) = 1;
  return;
}

// 00C7DC10  Trigger::cCondResetSequence::vf14  size=7  [class]
undefined4 __fastcall Trigger::cCondResetSequence::vf14(int param_1)

{
  return *(undefined4 *)(param_1 + 0x90);
}

// 00C7DC20  Trigger::cCondResetSequence::vf20  size=87  [class]
int __fastcall Trigger::cCondResetSequence::vf20(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar2 = 1;
  if (0 < *(int *)(param_1 + 0x8c)) {
    piVar3 = (int *)(param_1 + 0x10);
    do {
      if (*piVar3 != 0) {
        iVar1 = (**(code **)(*(int *)*piVar3 + 0x20))();
        if (iVar1 == 0) {
          iVar2 = 0;
        }
        *(undefined4 *)(*piVar3 + 0xc) = 0;
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x8c));
    if (iVar2 != 1) {
      return iVar2;
    }
  }
  *(undefined4 *)(param_1 + 0x88) = 0;
  return 1;
}

// 00C7DCB0  Trigger::cCondIsDifficulty::vf10  size=1  [class]
void Trigger::cCondIsDifficulty::vf10(void)

{
  return;
}

// 00C7DCC0  Trigger::cCondIsDifficulty::vf14  size=83  [class]
bool __fastcall Trigger::cCondIsDifficulty::vf14(int param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FUN_009c4bf0();
  bVar1 = false;
  switch(*(undefined4 *)(param_1 + 0x10)) {
  case 1:
    return iVar2 < *(int *)(param_1 + 0x14);
  case 2:
    return iVar2 <= *(int *)(param_1 + 0x14);
  case 3:
    return iVar2 == *(int *)(param_1 + 0x14);
  case 4:
    return *(int *)(param_1 + 0x14) < iVar2;
  case 5:
    bVar1 = *(int *)(param_1 + 0x14) <= iVar2;
  }
  return bVar1;
}

// 00C7DD30  FUN_00c7dd30  size=22  [between]
void __thiscall FUN_00c7dd30(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xc);
  return;
}

// 00C7DD80  Trigger::cCondIsZangeki::vf10  size=1  [class]
void Trigger::cCondIsZangeki::vf10(void)

{
  return;
}

// 00C7DD90  FUN_00c7dd90  size=10  [between]
void __thiscall FUN_00c7dd90(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C7DDD0  Trigger::cCondIsFade::vf10  size=1  [class]
void Trigger::cCondIsFade::vf10(void)

{
  return;
}

// 00C7DDE0  Trigger::cCondIsFade::vf14  size=25  [class]
uint Trigger::cCondIsFade::vf14(void)

{
  uint uVar1;
  
  if (DAT_01dbd914 == 0) {
    return 0;
  }
  uVar1 = FUN_00eb4340(DAT_01dbd914);
  return uVar1 ^ 1;
}

// 00C7DE00  FUN_00c7de00  size=10  [between]
void __thiscall FUN_00c7de00(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C7DE40  Trigger::cCondIsFadeEnd::vf10  size=1  [class]
void Trigger::cCondIsFadeEnd::vf10(void)

{
  return;
}

// 00C7DE50  Trigger::cCondIsFadeEnd::vf14  size=31  [class]
undefined4 __fastcall Trigger::cCondIsFadeEnd::vf14(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined4 *)(param_1 + 0x10) = DAT_01dbd914;
    return 0;
  }
  uVar1 = FUN_00eb4340(*(int *)(param_1 + 0x10));
  return uVar1;
}

// 00C7DE70  FUN_00c7de70  size=10  [between]
void __thiscall FUN_00c7de70(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C7DEB0  Trigger::cCondIsRipperMode::vf10  size=1  [class]
void Trigger::cCondIsRipperMode::vf10(void)

{
  return;
}

// 00C7DEC0  FUN_00c7dec0  size=10  [between]
void __thiscall FUN_00c7dec0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C7DF00  Trigger::cCondGenericFlag::vf14  size=48  [class]
uint __fastcall Trigger::cCondGenericFlag::vf14(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x10);
  if ((0 < iVar2) && (iVar2 < 0x21)) {
    if (*(int *)(*(int *)(param_1 + 4) + 4) == 0x73) {
      uVar1 = FUN_00c207d0(iVar2);
      return uVar1;
    }
    iVar2 = FUN_00c207d0(iVar2);
    return (uint)(iVar2 == 0);
  }
  return 0;
}

// 00C7DF30  FUN_00c7df30  size=19  [between]
void __thiscall FUN_00c7df30(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(int *)(param_1 + 0x14) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  return;
}

// 00C7DF90  Trigger::cCondEnemyGroupIsCautionLevelByNumber::vf10  size=1  [class]
void Trigger::cCondEnemyGroupIsCautionLevelByNumber::vf10(void)

{
  return;
}

// 00C7DFA0  FUN_00c7dfa0  size=28  [between]
void __thiscall FUN_00c7dfa0(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x10);
  return;
}

// 00C7DFF0  Trigger::cCondEnemyIsCautionLevelByNumber::vf10  size=1  [class]
void Trigger::cCondEnemyIsCautionLevelByNumber::vf10(void)

{
  return;
}

// 00C7E000  FUN_00c7e000  size=22  [between]
void __thiscall FUN_00c7e000(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xc);
  return;
}

// 00C7E050  Trigger::cCondScenarioArea::vf10  size=8  [class]
void __fastcall Trigger::cCondScenarioArea::vf10(int param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}

// 00C7E060  Trigger::cCondScenarioArea::vf14  size=74  [class]
undefined4 __fastcall Trigger::cCondScenarioArea::vf14(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (((DAT_01dbd1d0 == 0) || ((DAT_01bea060 & 8) != 0)) || ((DAT_01bea060 & 0x2000400) == 0)) {
    piVar1 = (int *)FUN_00a6e640();
    iVar2 = (**(code **)(*piVar1 + 0x24))(*(undefined2 *)(param_1 + 0x10),1,2);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x14) = DAT_01be8e58;
      return 1;
    }
  }
  return 0;
}

// 00C7E0E0  Trigger::cCondScenarioAreaGroup::vf04  size=30  [class]
void __fastcall Trigger::cCondScenarioAreaGroup::vf04(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00dd29b0(0x100,0x20,0,0);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  return;
}

// 00C7E100  Trigger::cCondScenarioAreaGroup::vf10  size=1  [class]
void Trigger::cCondScenarioAreaGroup::vf10(void)

{
  return;
}

// 00C7E110  Trigger::cCondScenarioAreaGroup::vf08  size=15  [class]
void __fastcall Trigger::cCondScenarioAreaGroup::vf08(int param_1)

{
  FUN_00dd48d0(*(undefined4 *)(param_1 + 0x24),0);
  return;
}

// 00C7E120  FUN_00c7e120  size=36  [between]
void __thiscall FUN_00c7e120(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x14);
  return;
}

// 00C7E180  Trigger::cCondScenarioAreaEm::vf10  size=8  [class]
void __fastcall Trigger::cCondScenarioAreaEm::vf10(int param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}

// 00C7E190  Trigger::cCondScenarioAreaEm::vf14  size=175  [class]
undefined4 __fastcall Trigger::cCondScenarioAreaEm::vf14(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *local_8;
  int local_4;
  
  iVar1 = FUN_00c18c10(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
  if (iVar1 == 0) {
    return 0;
  }
  local_4 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    local_8 = (undefined4 *)(param_1 + 0x24);
    do {
      iVar1 = FUN_00c19c00(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),*local_8)
      ;
      if (iVar1 != 0) {
        piVar2 = (int *)FUN_00a6e640();
        iVar4 = *piVar2;
        uVar3 = FUN_00a7c8b0(*(undefined2 *)(param_1 + 0x10),2);
        iVar4 = (**(code **)(iVar4 + 0x2c))(uVar3);
        if (iVar4 != 0) {
          *(int *)(param_1 + 0x14) = iVar1;
          return 1;
        }
      }
      local_8 = local_8 + 1;
      local_4 = local_4 + 1;
    } while (local_4 < *(int *)(param_1 + 0x20));
  }
  return 0;
}

// 00C7E240  FUN_00c7e240  size=66  [between]
void __thiscall FUN_00c7e240(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x28);
  return;
}

// 00C7E2C0  Trigger::cCondScenarioAreaOut::vf10  size=8  [class]
void __fastcall Trigger::cCondScenarioAreaOut::vf10(int param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}

// 00C7E2D0  Trigger::cCondScenarioAreaOut::vf14  size=74  [class]
undefined4 __fastcall Trigger::cCondScenarioAreaOut::vf14(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (((DAT_01dbd1d0 == 0) || ((DAT_01bea060 & 8) != 0)) || ((DAT_01bea060 & 0x2000400) == 0)) {
    piVar1 = (int *)FUN_00a6e640();
    iVar2 = (**(code **)(*piVar1 + 0x24))(*(undefined2 *)(param_1 + 0x10),1,2);
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x14) = DAT_01be8e58;
      return 1;
    }
  }
  return 0;
}

// 00C7E320  FUN_00c7e320  size=18  [between]
void __thiscall FUN_00c7e320(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 8);
  return;
}

// 00C7E370  Trigger::cCondScenarioAreaGroupOut::vf04  size=30  [class]
void __fastcall Trigger::cCondScenarioAreaGroupOut::vf04(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00dd29b0(0x100,0x20,0,0);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  return;
}

// 00C7E390  Trigger::cCondScenarioAreaGroupOut::vf08  size=15  [class]
void __fastcall Trigger::cCondScenarioAreaGroupOut::vf08(int param_1)

{
  FUN_00dd48d0(*(undefined4 *)(param_1 + 0x24),0);
  return;
}

// 00C7E3A0  Trigger::cCondScenarioAreaGroupOut::vf10  size=8  [class]
void __fastcall Trigger::cCondScenarioAreaGroupOut::vf10(int param_1)

{
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}

// 00C7E3B0  FUN_00c7e3b0  size=36  [between]
void __thiscall FUN_00c7e3b0(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x14);
  return;
}

// 00C7E410  Trigger::cCondScenarioAreaEmOut::vf10  size=8  [class]
void __fastcall Trigger::cCondScenarioAreaEmOut::vf10(int param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}

// 00C7E420  Trigger::cCondScenarioAreaEmOut::vf14  size=195  [class]
undefined4 __fastcall Trigger::cCondScenarioAreaEmOut::vf14(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *local_8;
  int local_4;
  
  if (((DAT_01dbd1d0 == 0) || ((DAT_01bea060 & 8) != 0)) || ((DAT_01bea060 & 0x2000400) == 0)) {
    iVar1 = FUN_00c18c10(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
    if (iVar1 != 0) {
      local_4 = 0;
      if (0 < *(int *)(param_1 + 0x20)) {
        local_8 = (undefined4 *)(param_1 + 0x24);
        do {
          iVar1 = FUN_00c19c00(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),
                               *local_8);
          if (iVar1 != 0) {
            piVar2 = (int *)FUN_00a6e640();
            iVar4 = *piVar2;
            uVar3 = FUN_00a7c8b0(*(undefined2 *)(param_1 + 0x10),2);
            iVar4 = (**(code **)(iVar4 + 0x2c))(uVar3);
            if (iVar4 == 0) {
              *(int *)(param_1 + 0x14) = iVar1;
              return 1;
            }
          }
          local_8 = local_8 + 1;
          local_4 = local_4 + 1;
        } while (local_4 < *(int *)(param_1 + 0x20));
      }
      return 0;
    }
  }
  return 0;
}

// 00C7E4F0  FUN_00c7e4f0  size=66  [between]
void __thiscall FUN_00c7e4f0(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x28);
  return;
}

// 00C7E570  Trigger::cCondAreaPlCam::vf10  size=1  [class]
void Trigger::cCondAreaPlCam::vf10(void)

{
  return;
}

// 00C7E580  Trigger::cCondAreaPlCam::vf14  size=132  [class]
undefined4 __fastcall Trigger::cCondAreaPlCam::vf14(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_20 = DAT_01bea380;
  local_1c = DAT_01bea384;
  local_18 = DAT_01bea388;
  local_14 = DAT_01bea38c;
  piVar1 = (int *)FUN_00a6e640();
  iVar2 = (**(code **)(*piVar1 + 0x2c))(&local_20,*(undefined2 *)(param_1 + 0x10),1);
  piVar1 = (int *)FUN_00a6e640();
  iVar3 = (**(code **)(*piVar1 + 0x2c))(&stack0xffffffd4,*(undefined2 *)(param_1 + 0x10),2);
  if ((iVar2 == 0) && (iVar3 == 0)) {
    return 0;
  }
  return 1;
}

// 00C7E610  FUN_00c7e610  size=18  [between]
void __thiscall FUN_00c7e610(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 8);
  return;
}

// 00C7E670  Trigger::cCondAreaPlCamOut::vf10  size=1  [class]
void Trigger::cCondAreaPlCamOut::vf10(void)

{
  return;
}

// 00C7E680  Trigger::cCondAreaPlCamOut::vf14  size=132  [class]
undefined4 __fastcall Trigger::cCondAreaPlCamOut::vf14(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_20 = DAT_01bea380;
  local_1c = DAT_01bea384;
  local_18 = DAT_01bea388;
  local_14 = DAT_01bea38c;
  piVar1 = (int *)FUN_00a6e640();
  iVar2 = (**(code **)(*piVar1 + 0x2c))(&local_20,*(undefined2 *)(param_1 + 0x10),1);
  piVar1 = (int *)FUN_00a6e640();
  iVar3 = (**(code **)(*piVar1 + 0x2c))(&stack0xffffffd4,*(undefined2 *)(param_1 + 0x10),2);
  if ((iVar2 == 0) && (iVar3 == 0)) {
    return 1;
  }
  return 0;
}

// 00C7E710  FUN_00c7e710  size=18  [between]
void __thiscall FUN_00c7e710(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 8);
  return;
}

// 00C7E770  Trigger::cCondKgkArea::vf10  size=8  [class]
void __fastcall Trigger::cCondKgkArea::vf10(int param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}

// 00C7E780  Trigger::cCondKgkArea::vf18  size=4  [class]
undefined4 __fastcall Trigger::cCondKgkArea::vf18(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}

// 00C7E7D0  FUN_00c7e7d0  size=16  [between]
void __thiscall FUN_00c7e7d0(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  return;
}

// 00C7E810  FUN_00c7e810  size=16  [between]
void __thiscall FUN_00c7e810(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  return;
}

// 00C7E850  FUN_00c7e850  size=16  [between]
void __thiscall FUN_00c7e850(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  return;
}

// 00C7E890  FUN_00c7e890  size=16  [between]
void __thiscall FUN_00c7e890(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  return;
}

// 00C7E8A0  Trigger::Act::CAM  size=66  [class]
undefined4 __fastcall Trigger::Act::CAM(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016aa5d4);
    return 0;
  }
  if (DAT_01dbd8a8 != 0) {
    uVar1 = FUN_00ac9d90(*(undefined4 *)(*(int *)(param_1 + 4) + 8),*(undefined4 *)(param_1 + 8),
                         0x8000000);
    return uVar1;
  }
  return 0;
}

// 00C7E8F0  Trigger::Act::SUBPHASE  size=48  [class]
undefined4 __fastcall Trigger::Act::SUBPHASE(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016aa5fc);
    return 0;
  }
  uVar2 = FUN_00d5ea40(iVar1 + 8,1,*(undefined4 *)(iVar1 + 0x28));
  return uVar2;
}

// 00C7E920  Trigger::Act::POS_PL  size=103  [class]
undefined4 __fastcall Trigger::Act::POS_PL(int param_1)

{
  int iVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016aa628);
    return 0;
  }
  local_20 = *(undefined4 *)(iVar1 + 8);
  local_1c = *(undefined4 *)(iVar1 + 0xc);
  local_18 = *(undefined4 *)(iVar1 + 0x10);
  local_14 = 0x3f800000;
  FUN_00a4ae90(&local_20,*(float *)(iVar1 + 0x14) * 0.017453292);
  return 1;
}

// 00C7E990  Trigger::Act::POS_PL_2  size=146  [class]
undefined4 __fastcall Trigger::Act::POS_PL_2(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_20 [12];
  undefined4 local_14;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016aa628);
    return 0;
  }
  iVar2 = FUN_00c78580(*(undefined4 *)(iVar1 + 8),local_20);
  if (iVar2 == 0) {
    FUN_00dd5650(&DAT_016aa654,*(undefined4 *)(iVar1 + 8));
    return 0;
  }
  local_30 = 0;
  local_2c = local_14;
  local_28 = 0;
  local_14 = 0x3f800000;
  FUN_00a4d790(local_20,&local_30,0);
  return 1;
}

// 00C7EA30  Trigger::Act::DOOR_OPEN  size=58  [class]
undefined4 __fastcall Trigger::Act::DOOR_OPEN(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016aa680);
    return 0;
  }
  uVar2 = FUN_00e03ea0(iVar1 + 8);
  uVar2 = FUN_00c478b0(uVar2,*(undefined4 *)(iVar1 + 0x18));
  return uVar2;
}

// 00C7EA70  Trigger::cActStaFlagOn::vf08  size=54  [class]
void __fastcall Trigger::cActStaFlagOn::vf08(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    uVar3 = 0;
    while( true ) {
      iVar2 = FUN_00e03ea0((&PTR_s_STA_SCENARIO_018abb58)[uVar3 * 2]);
      if (*(int *)(iVar1 + 8) == iVar2) break;
      uVar3 = uVar3 + 1;
      if (0x18 < uVar3) {
        return;
      }
    }
    *(uint *)(param_1 + 8) = uVar3;
  }
  return;
}

// 00C7EAB0  Trigger::Act::STA_FLAG_ON  size=95  [class]
undefined4 __fastcall Trigger::Act::STA_FLAG_ON(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016aa6dc);
    return 0;
  }
  if (-1 < *(int *)(param_1 + 8)) {
    (&DAT_01bea060)[*(uint *)(&DAT_018abb5c + *(int *)(param_1 + 8) * 8) >> 5] =
         (&DAT_01bea060)[*(uint *)(&DAT_018abb5c + *(int *)(param_1 + 8) * 8) >> 5] |
         0x80000000U >> ((byte)*(uint *)(&DAT_018abb5c + *(int *)(param_1 + 8) * 8) & 0x1f);
    return 1;
  }
  FUN_00dd5650(&DAT_016aa6ac);
  return 0;
}

// 00C7EB10  Trigger::cActCamOff::vf18  size=23  [class]
undefined4 Trigger::cActCamOff::vf18(void)

{
  if (DAT_01dbd8a8 != 0) {
    FUN_00ac9fe0();
  }
  return 1;
}

// 00C7EB30  Trigger::cActVerseStart::vf18  size=5  [class]
undefined4 Trigger::cActVerseStart::vf18(void)

{
  return 0;
}

// 00C7EB40  Trigger::cActVerseEnd::vf18  size=5  [class]
undefined4 Trigger::cActVerseEnd::vf18(void)

{
  return 0;
}

// 00C7EB50  Trigger::Act::SOFT_EVENT  size=40  [class]
undefined4 __fastcall Trigger::Act::SOFT_EVENT(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016aa70c);
    return 0;
  }
  uVar1 = FUN_00d7eb90(*(undefined4 *)(*(int *)(param_1 + 4) + 8));
  return uVar1;
}

// 00C7EB80  Trigger::Act::PHASE  size=44  [class]
undefined4 __fastcall Trigger::Act::PHASE(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016aa73c);
    return 0;
  }
  uVar1 = FUN_00d5e850(*(undefined4 *)(*(int *)(param_1 + 4) + 8),0);
  return uVar1;
}

// 00C7EBB0  Trigger::Act::BOSS  size=42  [class]
undefined4 __fastcall Trigger::Act::BOSS(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016aa764);
    return 0;
  }
  uVar1 = FUN_00c2a520();
  return uVar1;
}

// 00C7EBE0  FUN_00c7ebe0  size=4  [between]
undefined4 FUN_00c7ebe0(void)

{
  return 0xffffffff;
}

// 00C7EBF0  Trigger::cActEnemyByName::vf18  size=42  [class]
undefined4 __fastcall Trigger::cActEnemyByName::vf18(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016aa78c);
    return 0;
  }
  uVar1 = FUN_00c2a520();
  return uVar1;
}

// 00C7EC20  FUN_00c7ec20  size=26  [between]
undefined4 __fastcall FUN_00c7ec20(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  uVar1 = FUN_00c18740(*(int *)(param_1 + 4) + 8);
  return uVar1;
}

// 00C7EC40  Trigger::cActEnemyByNumber::vf18  size=42  [class]
undefined4 __fastcall Trigger::cActEnemyByNumber::vf18(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016aa78c);
    return 0;
  }
  uVar1 = FUN_00c185c0();
  return uVar1;
}

// 00C7EC70  FUN_00c7ec70  size=15  [between]
undefined4 __fastcall FUN_00c7ec70(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 8);
}

// 00C7EC80  Trigger::Act::ENM_FORCE  size=42  [class]
undefined4 __fastcall Trigger::Act::ENM_FORCE(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016aa7b4);
    return 0;
  }
  uVar1 = FUN_00c2a520();
  return uVar1;
}

// 00C7ECB0  FUN_00c7ecb0  size=32  [between]
undefined4 __fastcall FUN_00c7ecb0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  uVar1 = FUN_00c194f0(DAT_01d5bad4,*(int *)(param_1 + 4) + 8);
  return uVar1;
}

// 00C7ECD0  Trigger::Act::ENM_FORCE_2  size=42  [class]
undefined4 __fastcall Trigger::Act::ENM_FORCE_2(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016aa7b4);
    return 0;
  }
  uVar1 = FUN_00c185c0();
  return uVar1;
}

// 00C7ED00  FUN_00c7ed00  size=15  [between]
undefined4 __fastcall FUN_00c7ed00(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 8);
}

// 00C7ED10  Trigger::Act::ENM_RET  size=92  [class]
undefined4 __fastcall Trigger::Act::ENM_RET(int param_1)

{
  char *_Str2;
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016aa7e0);
    return 0;
  }
  _Str2 = (char *)(*(int *)(param_1 + 4) + 8);
  iVar1 = __stricmp("all",_Str2);
  if (iVar1 == 0) {
    FUN_00c19210();
    return 1;
  }
  uVar2 = FUN_00c18740(_Str2);
  FUN_00c192d0(uVar2);
  return 1;
}

// 00C7ED70  Trigger::Act::ENM_RET_2  size=47  [class]
undefined4 __fastcall Trigger::Act::ENM_RET_2(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016aa7e0);
    return 0;
  }
  FUN_00c192d0(*(undefined4 *)(*(int *)(param_1 + 4) + 8));
  return 1;
}

// 00C7EDA0  Trigger::Act::ENM_CLEAR  size=81  [class]
undefined4 __fastcall Trigger::Act::ENM_CLEAR(int param_1)

{
  char *_Str2;
  int iVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016aa80c);
    return 0;
  }
  _Str2 = (char *)(*(int *)(param_1 + 4) + 8);
  iVar1 = __stricmp("all",_Str2);
  if (iVar1 == 0) {
    FUN_00c193b0();
    return 1;
  }
  FUN_00c19430(_Str2);
  return 1;
}

// 00C7EE00  Trigger::Act::ENM_CLEAR_2  size=78  [class]
undefined4 __fastcall Trigger::Act::ENM_CLEAR_2(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016aa80c);
    return 0;
  }
  if (*(int *)(iVar1 + 0xc) == -1) {
    FUN_00c193e0(*(undefined4 *)(iVar1 + 8));
    return 1;
  }
  FUN_00c19400(*(undefined4 *)(iVar1 + 8),*(int *)(iVar1 + 0xc));
  return 1;
}

// 00C7EE50  Trigger::cActResult::vf18  size=5  [class]
undefined4 Trigger::cActResult::vf18(void)

{
  return 0;
}

// 00C7EE60  Trigger::Act::FUNCTION  size=158  [class]
undefined4 __thiscall Trigger::Act::FUNCTION(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar4 = *(int *)(param_1 + 4);
    if (iVar4 == 0) {
      FUN_00dd5650(&DAT_016aa8d8);
      return 0;
    }
    piVar1 = (int *)FUN_00a6dd90();
    piVar1 = (int *)(**(code **)(*piVar1 + 0x30))();
    if (piVar1 == (int *)0x0) {
      FUN_00dd5650(&DAT_016aa89c);
      return 0;
    }
    iVar4 = iVar4 + 8;
    iVar2 = (**(code **)(*piVar1 + 0x30))(iVar4);
    *(int *)(param_1 + 8) = iVar2;
    if (iVar2 == 0) {
      FUN_00dd5650(&DAT_016aa864,iVar4);
      return 0;
    }
  }
  if (*(code **)(param_1 + 8) == (code *)0x0) {
    FUN_00dd5650(&DAT_016aa838);
    return 0;
  }
  uVar3 = (**(code **)(param_1 + 8))(param_2);
  return uVar3;
}

// 00C7EF00  Trigger::Act::TASK  size=154  [class]
undefined4 __fastcall Trigger::Act::TASK(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016aa99c);
    return 0;
  }
  iVar1 = *(int *)(param_1 + 4) + 8;
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016aa970);
    return 0;
  }
  piVar2 = (int *)FUN_00a6dd90();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x30))();
  if (piVar2 == (int *)0x0) {
    FUN_00dd5650(&DAT_016aa938);
    return 0;
  }
  if (*(int *)(*(int *)(param_1 + 4) + 4) == 0x52) {
    pcVar4 = *(code **)(*piVar2 + 0x38);
  }
  else {
    pcVar4 = *(code **)(*piVar2 + 0x34);
  }
  iVar3 = (*pcVar4)(iVar1);
  if (iVar3 == 0) {
    FUN_00dd5650(&DAT_016aa904,iVar1);
    return 0;
  }
  return 1;
}

// 00C7EFA0  Trigger::cActAnimationOrigin::vf18  size=5  [class]
undefined4 Trigger::cActAnimationOrigin::vf18(void)

{
  return 0;
}

// 00C7EFB0  Trigger::cActFollowPath::vf18  size=5  [class]
undefined4 Trigger::cActFollowPath::vf18(void)

{
  return 0;
}

// 00C7EFC0  Trigger::Act::CAM_DIST  size=71  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall Trigger::Act::CAM_DIST(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016aa9c4);
    return 0;
  }
  _DAT_01dbd870 = _DAT_01dbd870 | 2;
  _DAT_01dbd89c = *(undefined4 *)(*(int *)(param_1 + 4) + 8);
  _DAT_01dbd8a4 = 0;
  _DAT_01dbd8a0 = _DAT_01bea3c4;
  return 1;
}

// 00C7F010  Trigger::cActCameraDistanceOff::vf18  size=18  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 Trigger::cActCameraDistanceOff::vf18(void)

{
  _DAT_01dbd8a4 = 0x78;
  return 1;
}

// 00C7F030  Trigger::cActCameraFocusOff::vf18  size=18  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 Trigger::cActCameraFocusOff::vf18(void)

{
  _DAT_01dbd898 = 0x78;
  return 1;
}

// 00C7F050  Trigger::Act::CAM_ANG  size=64  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall Trigger::Act::CAM_ANG(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016aa9f0);
    return 0;
  }
  _DAT_01dbd870 = _DAT_01dbd870 | 1;
  _DAT_01dbd878 = 0;
  _DAT_01dbd874 = *(float *)(*(int *)(param_1 + 4) + 8) * 0.017453292;
  return 1;
}

// 00C7F090  Trigger::cActCameraAngleOff::vf18  size=18  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 Trigger::cActCameraAngleOff::vf18(void)

{
  _DAT_01dbd878 = 0x78;
  return 1;
}

// 00C7F0B0  Trigger::Act::PHASE_2  size=46  [class]
undefined4 __fastcall Trigger::Act::PHASE_2(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016aa73c);
    return 0;
  }
  uVar2 = FUN_00d5e850(*(undefined4 *)(iVar1 + 8),iVar1 + 0xc);
  return uVar2;
}

// 00C7F0E0  Trigger::Act::DOOR_CLOSE  size=58  [class]
undefined4 __fastcall Trigger::Act::DOOR_CLOSE(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016aaa1c);
    return 0;
  }
  uVar2 = FUN_00e03ea0(iVar1 + 8);
  uVar2 = FUN_00c47a30(uVar2,*(undefined4 *)(iVar1 + 0x18));
  return uVar2;
}

// 00C7F120  Trigger::cActDebugMessage::vf18  size=5  [class]
undefined4 Trigger::cActDebugMessage::vf18(void)

{
  return 0;
}

// 00C7F130  Trigger::cActStage::vf18  size=5  [class]
undefined4 Trigger::cActStage::vf18(void)

{
  return 0;
}

// 00C7F140  Trigger::cActSubstage::vf18  size=5  [class]
undefined4 Trigger::cActSubstage::vf18(void)

{
  return 0;
}

// 00C7F150  Trigger::Act::TEXT  size=66  [class]
undefined4 __fastcall Trigger::Act::TEXT(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016aaa4c);
    return 0;
  }
  uVar4 = *(undefined4 *)(iVar1 + 0x2c);
  uVar3 = *(undefined4 *)(iVar1 + 0x28);
  uVar5 = 0;
  uVar2 = FUN_00e03ea0(iVar1 + 8,uVar3,uVar4,0);
  FUN_00ce3040(uVar2,uVar3,uVar4,uVar5);
  return 1;
}

// 00C7F1A0  Trigger::cActTextOut::vf18  size=18  [class]
undefined4 Trigger::cActTextOut::vf18(void)

{
  FUN_00cae000();
  return 1;
}

// 00C7F1C0  Trigger::Act::LoadRoom  size=47  [class]
undefined4 __fastcall Trigger::Act::LoadRoom(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016aaa74);
    return 0;
  }
  FUN_00a4e9e0(*(undefined4 *)(*(int *)(param_1 + 4) + 8));
  return 1;
}

// 00C7F1F0  Trigger::Act::UnloadRoom  size=47  [class]
undefined4 __fastcall Trigger::Act::UnloadRoom(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016aaaa0);
    return 0;
  }
  FUN_00a4ea90(*(undefined4 *)(*(int *)(param_1 + 4) + 8));
  return 1;
}

// 00C7F220  Trigger::cActMoveShounen::vf18  size=5  [class]
undefined4 Trigger::cActMoveShounen::vf18(void)

{
  return 0;
}

// 00C7F230  Trigger::cActEmMsg::vf10  size=29  [class]
void __fastcall Trigger::cActEmMsg::vf10(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    uVar1 = FUN_00c15c50(*(int *)(param_1 + 4) + 8);
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  return;
}

// 00C7F250  Trigger::Act::SCENE  size=145  [class]
undefined4 __fastcall Trigger::Act::SCENE(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 == 0) {
    FUN_00dd5650(&DAT_016aaad0,param_1);
    return 0;
  }
  iVar3 = *(int *)(iVar2 + 8);
  if ((iVar3 == 0xf06) && ((DAT_018b9174 & 0xf00) == 0xe00)) {
    uVar4 = FUN_00a4ac40(0xf30,iVar2 + 0xc,0xffffffff);
    return uVar4;
  }
  pcVar5 = (char *)(iVar2 + 0xc);
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  if (pcVar5 != (char *)(iVar2 + 0xd)) {
    uVar4 = FUN_00a4ac40(iVar3,(char *)(iVar2 + 0xc),0xffffffff);
    return uVar4;
  }
  uVar4 = FUN_00a4ac40(iVar3,0,0xffffffff);
  return uVar4;
}

// 00C7F2F0  Trigger::cActEmMsgDirect::vf10  size=57  [class]
void __fastcall Trigger::cActEmMsgDirect::vf10(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    uVar2 = FUN_00c15c50(piVar1 + 2);
    *(undefined4 *)(param_1 + 8) = uVar2;
    uVar2 = FUN_00e03ea0(piVar1 + 10);
    *(undefined4 *)(param_1 + 0xc) = uVar2;
    if (*piVar1 == 0x3c) {
      *(int *)(param_1 + 0x10) = piVar1[0xe];
    }
  }
  return;
}

// 00C7F330  Trigger::Act::AreaCollision  size=82  [class]
int __fastcall Trigger::Act::AreaCollision(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016aaaf8);
    return 0;
  }
  piVar2 = (int *)FUN_00a6e640();
  iVar3 = (**(code **)(*piVar2 + 0x50))(*(undefined2 *)(iVar1 + 8),1);
  if (iVar3 == 0) {
    piVar2 = (int *)FUN_00a6e640();
    iVar3 = (**(code **)(*piVar2 + 100))
                      (*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc),
                       *(undefined4 *)(iVar1 + 0x10));
  }
  return iVar3;
}

// 00C7F390  Trigger::cActSound::vf18  size=125  [class]
undefined4 __fastcall Trigger::cActSound::vf18(int param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  bool bVar6;
  
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 == 0) {
    FUN_00dd5650(&DAT_016aab54);
    return 0;
  }
  pbVar5 = &DAT_016416fa;
  pbVar3 = (byte *)(iVar2 + 8);
  do {
    bVar1 = *pbVar3;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_00c7f3d6:
      iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00c7f3db;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_00c7f3d6;
    pbVar3 = pbVar3 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_00c7f3db:
  if (iVar4 == 0) {
    FUN_00dd5650(&DAT_016aab28);
    return 0;
  }
  FUN_00e467b0((byte *)(iVar2 + 8),*(undefined4 *)(iVar2 + 0x18));
  return 1;
}

// 00C7F410  Trigger::Act::AreaCollisionOff  size=54  [class]
undefined4 __fastcall Trigger::Act::AreaCollisionOff(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016aab80);
    return 0;
  }
  piVar2 = (int *)FUN_00a6e640();
  (**(code **)(*piVar2 + 0x68))(*(undefined4 *)(iVar1 + 8));
  return 1;
}

// 00C7F450  Trigger::Act  size=76  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall Trigger::Act(int param_1)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    pcVar2 = "ROOM";
    if (_DAT_00000004 != 0x3e) {
      pcVar2 = "PHASE";
    }
    FUN_00dd5650(&DAT_016aabb4,pcVar2);
    return 0;
  }
  FUN_00c1d810(*(undefined4 *)(iVar1 + 8),*(int *)(iVar1 + 4) == 0x3e,0,0);
  return 1;
}

// 00C7F4A0  Trigger::ACT::ENM_MOVE  size=32  [class]
undefined4 __fastcall Trigger::ACT::ENM_MOVE(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016aabf0);
    return 0;
  }
  return 1;
}

// 00C7F4C0  Trigger::Act::REQ_BEH_INST  size=129  [class]
undefined4 __fastcall Trigger::Act::REQ_BEH_INST(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_40 [15];
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016aac58);
    return 0;
  }
  iVar2 = FUN_00a7f600(*(undefined4 *)(iVar1 + 8));
  if (iVar2 != 0) {
    local_40[0] = *(undefined4 *)(iVar1 + 0xc);
    puVar3 = local_40;
    FUN_00a7c8a0(puVar3);
    FUN_00a9d720(puVar3);
    return 1;
  }
  FUN_00dd5650(&DAT_016aac1c,*(undefined4 *)(iVar1 + 8));
  return 0;
}

// 00C7F550  Trigger::Act::RADERMAP  size=156  [class]
undefined4 __fastcall Trigger::Act::RADERMAP(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 local_28 [10];
  
  iVar1 = *(int *)(param_1 + 4);
  uVar3 = 0;
  local_28[0] = 0x24;
  local_28[1] = 0x22;
  local_28[2] = 0x27;
  local_28[3] = 0x29;
  local_28[4] = 0x25;
  local_28[5] = 0x23;
  local_28[6] = 0x21;
  local_28[7] = 0x28;
  local_28[8] = 0x2a;
  local_28[9] = 0x26;
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016aac88);
    return 0;
  }
  uVar2 = *(uint *)(iVar1 + 8);
  if ((uVar2 < 2) && (*(uint *)(iVar1 + 0xc) < 5)) {
    FUN_00d89e60(local_28[*(uint *)(iVar1 + 0xc) + uVar2 * 4 + uVar2]);
    uVar3 = 1;
  }
  return uVar3;
}

// 00C7F5F0  Trigger::Act::RADIO_INFO_START  size=32  [class]
undefined4 __fastcall Trigger::Act::RADIO_INFO_START(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016aacb4);
    return 0;
  }
  return 1;
}

// 00C7F610  Trigger::Act::RADIO_INFO_END  size=32  [class]
undefined4 __fastcall Trigger::Act::RADIO_INFO_END(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016aace8);
    return 0;
  }
  return 1;
}

// 00C7F630  Trigger::Act::CONVERSATION_ST  size=32  [class]
undefined4 __fastcall Trigger::Act::CONVERSATION_ST(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016aad1c);
    return 0;
  }
  return 1;
}

// 00C7F650  Trigger::Act::CONVERSATION_ED  size=32  [class]
undefined4 __fastcall Trigger::Act::CONVERSATION_ED(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016aad50);
    return 0;
  }
  return 1;
}

// 00C7F670  Trigger::Act::PATH_WAY_START  size=32  [class]
undefined4 __fastcall Trigger::Act::PATH_WAY_START(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016aad84);
    return 0;
  }
  return 1;
}

// 00C7F690  Trigger::Act::PATH_WAY_END  size=32  [class]
undefined4 __fastcall Trigger::Act::PATH_WAY_END(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016aadb8);
    return 0;
  }
  return 1;
}

// 00C7F6B0  Trigger::Act::TUTORIAL_START  size=80  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __fastcall Trigger::Act::TUTORIAL_START(int param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016aae28);
    return false;
  }
  _DAT_01d61384 = *(undefined4 *)(iVar1 + 8);
  _DAT_01d61388 = 1;
  _DAT_01d6138c = 0;
  bVar2 = *(int *)(iVar1 + 8) != 999;
  if (!bVar2) {
    FUN_00dd5650(&DAT_016aade8);
  }
  return bVar2;
}

// 00C7F700  Trigger::Act::TUTORIAL_END  size=42  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall Trigger::Act::TUTORIAL_END(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016aae5c);
    return 0;
  }
  _DAT_01d61384 = 0xffffffff;
  return 1;
}

// 00C7F730  Trigger::Act::AREA_BARRIER_OFF  size=101  [class]
bool __fastcall Trigger::Act::AREA_BARRIER_OFF(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016aae8c);
    return false;
  }
  if (*(int *)(iVar1 + 0xc) == 0) {
    iVar1 = FUN_00a7f600(*(undefined4 *)(iVar1 + 8));
  }
  else {
    iVar1 = FUN_00a18d70(*(int *)(iVar1 + 0xc),*(undefined4 *)(iVar1 + 8));
  }
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    (**(code **)(*piVar2 + 0x328))();
  }
  return iVar1 != 0;
}

// 00C7F7A0  Trigger::Act::EM_ANIM  size=543  [class]
uint __fastcall Trigger::Act::EM_ANIM(int param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  char local_28 [8];
  char local_20 [32];
  
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    FUN_00dd5650(&DAT_016aaffc);
    return 0;
  }
  iVar5 = iVar3 + 0xc;
  if (iVar5 == 0) {
    FUN_00dd5650(&DAT_016aafcc);
    return 0;
  }
  pcVar1 = (char *)(iVar3 + 0x1c);
  if (pcVar1 == (char *)0x0) {
    FUN_00dd5650(&DAT_016aafa0);
    return 0;
  }
  iVar4 = FUN_00c19da0(DAT_01d5bad4,*(undefined4 *)(iVar3 + 8),iVar5);
  if (iVar4 == 0) {
    FUN_00dd5650(&DAT_016aaf58,*(undefined4 *)(iVar3 + 8),iVar5);
    return 0;
  }
  iVar5 = FUN_00a7c8a0();
  if (iVar5 != 0) {
    if (*(int *)(iVar3 + 4) == 0x50) {
      local_28[0] = '\0';
      local_28[1] = '\0';
      local_28[2] = '\0';
      local_28[3] = '\0';
      local_28[4] = 0;
      cVar2 = *pcVar1;
      pcVar6 = pcVar1;
      while (cVar2 != '_') {
        pcVar6 = pcVar6 + 1;
        cVar2 = *pcVar6;
      }
      _strncpy_s(local_28,5,pcVar6 + 1,4);
      local_20[0] = '\0';
      local_20[1] = '\0';
      local_20[2] = '\0';
      local_20[3] = '\0';
      local_20[4] = '\0';
      local_20[5] = '\0';
      local_20[6] = '\0';
      local_20[7] = '\0';
      local_20[8] = '\0';
      local_20[9] = '\0';
      local_20[10] = '\0';
      local_20[0xb] = '\0';
      local_20[0xc] = '\0';
      local_20[0xd] = '\0';
      local_20[0xe] = '\0';
      local_20[0xf] = '\0';
      local_20[0x10] = '\0';
      local_20[0x11] = '\0';
      local_20[0x12] = '\0';
      local_20[0x13] = '\0';
      local_20[0x14] = '\0';
      local_20[0x15] = '\0';
      local_20[0x16] = '\0';
      local_20[0x17] = '\0';
      local_20[0x18] = '\0';
      local_20[0x19] = '\0';
      local_20[0x1a] = '\0';
      local_20[0x1b] = '\0';
      local_20[0x1c] = '\0';
      local_20[0x1d] = '\0';
      local_20[0x1e] = '\0';
      local_20[0x1f] = '\0';
      _sprintf_s(local_20,0x20,"%s.mot",pcVar1);
      uVar7 = FUN_00de4500(local_20);
      local_20[0] = '\0';
      local_20[1] = '\0';
      local_20[2] = '\0';
      local_20[3] = '\0';
      local_20[4] = '\0';
      local_20[5] = '\0';
      local_20[6] = '\0';
      local_20[7] = '\0';
      local_20[8] = '\0';
      local_20[9] = '\0';
      local_20[10] = '\0';
      local_20[0xb] = '\0';
      local_20[0xc] = '\0';
      local_20[0xd] = '\0';
      local_20[0xe] = '\0';
      local_20[0xf] = '\0';
      local_20[0x10] = '\0';
      local_20[0x11] = '\0';
      local_20[0x12] = '\0';
      local_20[0x13] = '\0';
      local_20[0x14] = '\0';
      local_20[0x15] = '\0';
      local_20[0x16] = '\0';
      local_20[0x17] = '\0';
      local_20[0x18] = '\0';
      local_20[0x19] = '\0';
      local_20[0x1a] = '\0';
      local_20[0x1b] = '\0';
      local_20[0x1c] = '\0';
      local_20[0x1d] = '\0';
      local_20[0x1e] = '\0';
      local_20[0x1f] = '\0';
      _sprintf_s(local_20,0x20,"%s_0_seq.bxm",pcVar1);
      uVar8 = FUN_00de4500(local_20);
      uVar9 = FUN_00ac45d0(uVar7,uVar8,0,0,0x3f800000,0,0xbf800000,0x3f800000,local_28);
      FUN_00a96070(0,0x8000000,1);
    }
    else {
      if (*(int *)(iVar3 + 4) != 0x4f) {
        FUN_00dd5650(&DAT_016aaec0);
        goto LAB_00c7f951;
      }
      iVar5 = FUN_00aa4940(pcVar1,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      uVar9 = (uint)(iVar5 != -1);
    }
    if (uVar9 != 0) {
      return uVar9;
    }
  }
LAB_00c7f951:
  FUN_00dd5650(&DAT_016aaf08,*(undefined4 *)(iVar3 + 8),iVar3 + 0xc,pcVar1);
  return 0;
}

// 00C7F9C0  Trigger::cActResultSetEndDisp::vf18  size=18  [class]
undefined4 Trigger::cActResultSetEndDisp::vf18(void)

{
  DAT_01dc130c = 0;
  return 1;
}

// 00C7F9E0  Trigger::Act::PL_DEAD_DEMO  size=32  [class]
undefined4 __fastcall Trigger::Act::PL_DEAD_DEMO(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016ab028);
    return 0;
  }
  return 1;
}

// 00C7FA00  Trigger::cActHackEnd::vf18  size=8  [class]
undefined4 Trigger::cActHackEnd::vf18(void)

{
  return 1;
}

// 00C7FA10  Trigger::Act::CAM_FLAG  size=241  [class]
undefined4 __fastcall Trigger::Act::CAM_FLAG(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  bool bVar6;
  
  iVar4 = *(int *)(param_1 + 4);
  if (iVar4 == 0) {
    FUN_00dd5650(&DAT_016ab06c);
    return 0;
  }
  pcVar5 = "HANDSHAKE";
  pbVar2 = (byte *)(iVar4 + 8);
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_00c7fa54:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00c7fa59;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_00c7fa54;
    pbVar2 = pbVar2 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00c7fa59:
  if (iVar3 == 0) {
    if (*(int *)(iVar4 + 0x18) == 0) {
      FUN_00da57a0();
      FUN_00da5790();
      return 1;
    }
    iVar4 = FUN_00da5770();
    if (iVar4 == 0) {
      FUN_00da5780(0,0x3db2b8c2);
      return 1;
    }
  }
  else {
    pcVar5 = "ANIMOFF";
    pbVar2 = (byte *)(iVar4 + 8);
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < (byte)*pcVar5;
      if (bVar1 != *pcVar5) {
LAB_00c7fae0:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00c7fae5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < (byte)pcVar5[1];
      if (bVar1 != pcVar5[1]) goto LAB_00c7fae0;
      pbVar2 = pbVar2 + 2;
      pcVar5 = pcVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00c7fae5:
    if (iVar3 == 0) {
      FUN_00da5000(*(int *)(iVar4 + 0x18) == 0);
    }
  }
  return 1;
}

// 00C7FB10  Trigger::Act::OBJ_ATTACH  size=322  [class]
undefined4 __fastcall Trigger::Act::OBJ_ATTACH(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016ab124);
    return 0;
  }
  iVar5 = iVar1 + 8;
  if (iVar5 != 0) {
    iVar2 = FUN_009fde60(iVar5);
    if (iVar2 == -1) {
      uVar3 = FUN_00e03ea0(iVar5);
      iVar2 = FUN_00a18cf0(uVar3);
    }
    else {
      iVar2 = FUN_00a7f600(iVar2);
    }
    if (iVar2 != 0) {
      iVar5 = iVar1 + 0x18;
      if (iVar5 != 0) {
        iVar4 = FUN_009fde60(iVar5);
        if (iVar4 == -1) {
          uVar3 = FUN_00e03ea0(iVar5);
          iVar4 = FUN_00a18cf0(uVar3);
        }
        else {
          iVar4 = FUN_00a7f600(iVar4);
        }
        if (iVar4 != 0) {
          iVar5 = *(int *)(*(int *)(param_1 + 4) + 4);
          if (iVar5 != 0x58) {
            if (iVar5 == 0x59) {
              FUN_00a7c8a0(iVar4);
              FUN_00a9e0d0(iVar4);
            }
            return 1;
          }
          iVar5 = FUN_00a7c8a0();
          if (*(int *)(iVar5 + 0x7c4) == 0) {
            FUN_00a7c8a0();
            iVar5 = lib::StaticArray<Constraints,32>::StaticArray<Constraints,32>();
            if (iVar5 == 0) {
              return 0;
            }
          }
          uVar3 = *(undefined4 *)(iVar1 + 0x28);
          uVar7 = 0xffffffff;
          uVar6 = 0;
          FUN_00a7c8a0(0,iVar2,iVar4,uVar3,0xffffffff);
          FUN_00a8c5f0(uVar6,iVar2,iVar4,uVar3,uVar7);
          return 1;
        }
      }
      FUN_00dd5650(&DAT_016ab098,iVar5);
      return 0;
    }
  }
  FUN_00dd5650(&DAT_016ab0e0,iVar5);
  return 0;
}

// 00C7FC60  Trigger::Act::QTE_BUTTON_DISP  size=48  [class]
undefined4 __fastcall Trigger::Act::QTE_BUTTON_DISP(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016ab154);
    return 0;
  }
  FUN_00cbc8f0((int)*(short *)(*(int *)(param_1 + 4) + 8),0);
  return 1;
}

// 00C7FC90  Trigger::cActEnemyRequestEnd::vf18  size=51  [class]
undefined4 __fastcall Trigger::cActEnemyRequestEnd::vf18(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016aa78c);
    return 0;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 8);
  if (-1 < iVar1) {
    EnemySetReader::requestEnd(iVar1);
  }
  return 1;
}

// 00C7FCD0  FUN_00c7fcd0  size=15  [between]
undefined4 __fastcall FUN_00c7fcd0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 8);
}

// 00C7FCE0  Trigger::cActEnemyRequestEndByName::vf18  size=47  [class]
undefined4 __fastcall Trigger::cActEnemyRequestEndByName::vf18(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016aa78c);
    return 0;
  }
  EnemySetReader::requestEnd_2(*(int *)(param_1 + 4) + 8);
  return 1;
}

// 00C7FD10  FUN_00c7fd10  size=32  [between]
undefined4 __fastcall FUN_00c7fd10(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  uVar1 = FUN_00c194f0(DAT_01d5bad4,*(int *)(param_1 + 4) + 8);
  return uVar1;
}

// 00C7FD30  Trigger::cActEnemyRequestEndBySubPhase::vf18  size=72  [class]
undefined4 __fastcall Trigger::cActEnemyRequestEndBySubPhase::vf18(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016aa78c);
  }
  else if ((DAT_01be9218 == 1) || (DAT_01be9218 == 0x100)) {
    FUN_00ca5b40(DAT_018b9174,*(int *)(param_1 + 4) + 8);
    return 1;
  }
  return 0;
}

// 00C7FD80  FUN_00c7fd80  size=4  [between]
undefined4 FUN_00c7fd80(void)

{
  return 0xffffffff;
}

// 00C7FD90  Trigger::cActEnemyRequestEndAll::vf18  size=42  [class]
undefined4 __fastcall Trigger::cActEnemyRequestEndAll::vf18(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016aa78c);
    return 0;
  }
  FUN_00ca5770();
  return 1;
}

// 00C7FDC0  FUN_00c7fdc0  size=4  [between]
undefined4 FUN_00c7fdc0(void)

{
  return 0xffffffff;
}

// 00C7FDD0  Trigger::cActEnemyRequest::vf18  size=51  [class]
undefined4 __fastcall Trigger::cActEnemyRequest::vf18(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016aa78c);
    return 0;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 8);
  if (-1 < iVar1) {
    EnemySetReader::requestStart(iVar1);
  }
  return 1;
}

// 00C7FE10  FUN_00c7fe10  size=15  [between]
undefined4 __fastcall FUN_00c7fe10(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 8);
}

// 00C7FE20  Trigger::cActEnemyRequestByName::vf18  size=47  [class]
undefined4 __fastcall Trigger::cActEnemyRequestByName::vf18(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016aa78c);
    return 0;
  }
  EnemySetReader::requestStart_2(*(int *)(param_1 + 4) + 8);
  return 1;
}

// 00C7FE50  FUN_00c7fe50  size=32  [between]
undefined4 __fastcall FUN_00c7fe50(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  uVar1 = FUN_00c194f0(DAT_01d5bad4,*(int *)(param_1 + 4) + 8);
  return uVar1;
}

// 00C7FE70  Trigger::cActEnemyRequestBySubPhase::vf18  size=72  [class]
undefined4 __fastcall Trigger::cActEnemyRequestBySubPhase::vf18(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016aa78c);
  }
  else if ((DAT_01be9218 == 1) || (DAT_01be9218 == 0x100)) {
    FUN_00ca6a50(DAT_018b9174,*(int *)(param_1 + 4) + 8);
    return 1;
  }
  return 0;
}

// 00C7FEC0  FUN_00c7fec0  size=4  [between]
undefined4 FUN_00c7fec0(void)

{
  return 0xffffffff;
}

// 00C7FED0  Trigger::Act::MOVIE_PLAY  size=77  [class]
undefined4 __fastcall Trigger::Act::MOVIE_PLAY(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016ab188);
    return 0;
  }
  if (*(char *)(iVar1 + 0xc) == '\0') {
    FUN_00c1d5b0(*(undefined4 *)(iVar1 + 8),0);
    return 1;
  }
  FUN_00c1d5b0(*(undefined4 *)(iVar1 + 8),iVar1 + 0xc);
  return 1;
}

// 00C7FF20  Trigger::Act::ANIM  size=47  [class]
undefined4 __fastcall Trigger::Act::ANIM(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016ab1b8);
    return 0;
  }
  FUN_00c434a0(*(undefined4 *)(*(int *)(param_1 + 4) + 8));
  return 1;
}

// 00C7FF50  Trigger::Act::ANIM_2  size=51  [class]
undefined4 __fastcall Trigger::Act::ANIM_2(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016ab1b8);
    return 0;
  }
  FUN_00945210(*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc));
  return 1;
}

// 00C7FF90  Trigger::cActFileRead::vf18  size=5  [class]
undefined4 Trigger::cActFileRead::vf18(void)

{
  return 0;
}

// 00C7FFA0  Trigger::cActFileRelease::vf18  size=5  [class]
undefined4 Trigger::cActFileRelease::vf18(void)

{
  return 0;
}

// 00C7FFB0  Trigger::cActEnemyFirstRequestEnd::vf18  size=42  [class]
undefined4 __fastcall Trigger::cActEnemyFirstRequestEnd::vf18(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016aa78c);
    return 0;
  }
  EnemySetReader::requestEnd_3();
  return 1;
}

// 00C7FFE0  FUN_00c7ffe0  size=4  [between]
undefined4 FUN_00c7ffe0(void)

{
  return 0xffffffff;
}

// 00C7FFF0  Trigger::Act::SCENE_MOVIE  size=84  [class]
undefined4 __fastcall Trigger::Act::SCENE_MOVIE(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016ab1e0);
    return 0;
  }
  if ((DAT_018b9174 == 0x520) && (*(int *)(iVar1 + 8) == 0xf07)) {
    FUN_0093db80();
  }
  uVar2 = FUN_00a4ac40(*(undefined4 *)(iVar1 + 8),iVar1 + 0xc,*(undefined4 *)(iVar1 + 0x2c));
  return uVar2;
}

// 00C80050  Trigger::cActGameFlagOn::vf08  size=54  [class]
void __fastcall Trigger::cActGameFlagOn::vf08(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    uVar3 = 0;
    while( true ) {
      iVar2 = FUN_00e03ea0((&PTR_s_GAME_RECVCOMMU_018ab9a8)[uVar3 * 2]);
      if (*(int *)(iVar1 + 8) == iVar2) break;
      uVar3 = uVar3 + 1;
      if (0x35 < uVar3) {
        return;
      }
    }
    *(uint *)(param_1 + 8) = uVar3;
  }
  return;
}

// 00C80090  Trigger::cActGameFlagOff::vf08  size=54  [class]
void __fastcall Trigger::cActGameFlagOff::vf08(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    uVar3 = 0;
    while( true ) {
      iVar2 = FUN_00e03ea0((&PTR_s_GAME_RECVCOMMU_018ab9a8)[uVar3 * 2]);
      if (*(int *)(iVar1 + 8) == iVar2) break;
      uVar3 = uVar3 + 1;
      if (0x35 < uVar3) {
        return;
      }
    }
    *(uint *)(param_1 + 8) = uVar3;
  }
  return;
}

// 00C800D0  Trigger::cActSendSignal::vf08  size=54  [class]
void __fastcall Trigger::cActSendSignal::vf08(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    uVar3 = 0;
    while( true ) {
      iVar2 = FUN_00e03ea0((&PTR_s_ON_SHOW_RADARMAP_018abcd0)[uVar3 * 2]);
      if (*(int *)(iVar1 + 8) == iVar2) break;
      uVar3 = uVar3 + 1;
      if (4 < uVar3) {
        return;
      }
    }
    *(uint *)(param_1 + 8) = uVar3;
  }
  return;
}

// 00C80110  Trigger::Act::SEND_SIGNAL  size=80  [class]
undefined4 __fastcall Trigger::Act::SEND_SIGNAL(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016ab23c);
    return 0;
  }
  if (-1 < *(int *)(param_1 + 8)) {
    FUN_00d89e60(*(undefined4 *)(&DAT_018abcd4 + *(int *)(param_1 + 8) * 8));
    return 1;
  }
  FUN_00dd5650(&DAT_016ab20c);
  return 0;
}

// 00C80160  Trigger::cActSendSignalContext::vf08  size=54  [class]
void __fastcall Trigger::cActSendSignalContext::vf08(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    uVar3 = 0;
    while( true ) {
      iVar2 = FUN_00e03ea0((&PTR_s_ON_SHOW_RADARMAP_018abcd0)[uVar3 * 2]);
      if (*(int *)(iVar1 + 8) == iVar2) break;
      uVar3 = uVar3 + 1;
      if (4 < uVar3) {
        return;
      }
    }
    *(uint *)(param_1 + 8) = uVar3;
  }
  return;
}

// 00C801A0  Trigger::Act::SEND_SIGNAL_CONTEXT  size=86  [class]
undefined4 __fastcall Trigger::Act::SEND_SIGNAL_CONTEXT(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016ab2a4);
    return 0;
  }
  if (-1 < *(int *)(param_1 + 8)) {
    FUN_00d89e90(*(undefined4 *)(&DAT_018abcd4 + *(int *)(param_1 + 8) * 8),
                 *(undefined4 *)(*(int *)(param_1 + 4) + 0xc));
    return 1;
  }
  FUN_00dd5650(&DAT_016ab26c);
  return 0;
}

// 00C80200  Trigger::Act::CODEC_START  size=77  [class]
undefined4 __fastcall Trigger::Act::CODEC_START(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016ab328);
    return 0;
  }
  iVar1 = *(int *)(param_1 + 4) + 8;
  iVar2 = FUN_0093b4a0(iVar1,0,0);
  if (iVar2 == 0) {
    FUN_00dd5650(&DAT_016ab2e0,iVar1);
    return 0;
  }
  return 1;
}

// 00C80250  Trigger::cActPlayerEffectOn::vf08  size=1  [class]
void Trigger::cActPlayerEffectOn::vf08(void)

{
  return;
}

// 00C80260  Trigger::cActPlayerEffectOn::vf18  size=185  [class]
undefined4 __fastcall Trigger::cActPlayerEffectOn::vf18(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = *(int *)(param_1 + 4);
  uVar4 = 1;
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016ab388);
  }
  else {
    piVar2 = (int *)FUN_00c13920();
    iVar3 = (**(code **)(*piVar2 + 0x28))(0xffffffff);
    if (iVar3 != 0) {
      FUN_00a7c8a0();
      switch(*(undefined4 *)(iVar1 + 8)) {
      case 0:
        FUN_00b797d0();
        return 1;
      case 1:
        DAT_01dc08d8 = 1;
        return 1;
      case 2:
        FUN_0085c270();
        return 1;
      case 3:
        FUN_0085c2a0();
        return 1;
      case 4:
        DAT_01dc08c8 = 1;
        DAT_01dc08cc = 0;
        return 1;
      case 5:
        DAT_01dc08cc = 1;
        return 1;
      case 6:
      case 7:
      case 8:
      case 9:
      case 10:
      case 0xb:
        break;
      default:
        FUN_00dd5650(&DAT_016ab358);
        uVar4 = 0;
      }
      return uVar4;
    }
  }
  return 0;
}

// 00C80350  Trigger::cActPlayerEffectOff::vf08  size=1  [class]
void Trigger::cActPlayerEffectOff::vf08(void)

{
  return;
}

// 00C80360  Trigger::Act::QTE_BUTTON_DISP_OFF  size=44  [class]
undefined4 __fastcall Trigger::Act::QTE_BUTTON_DISP_OFF(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016ab3b8);
    return 0;
  }
  FUN_00cbc9c0(1,0);
  return 1;
}

// 00C80390  Trigger::Act::OBJECTIVE_POS  size=126  [class]
undefined4 __fastcall Trigger::Act::OBJECTIVE_POS(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016ab480);
    return 0;
  }
  iVar2 = FUN_00c1c0d0(*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc));
  if (iVar2 == 0) {
    FUN_00dd5650(&DAT_016ab438,*(undefined4 *)(iVar1 + 8));
    return 0;
  }
  iVar2 = FUN_00c1bff0(*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0x10));
  if (iVar2 == 0) {
    FUN_00dd5650(&DAT_016ab3f0,*(undefined4 *)(iVar1 + 0x10));
    return 0;
  }
  return 1;
}

// 00C80410  Trigger::cActEnemyGroupByNumber::vf18  size=46  [class]
undefined4 __fastcall Trigger::cActEnemyGroupByNumber::vf18(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016aa78c);
    return 0;
  }
  uVar2 = FUN_00c18610(*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc));
  return uVar2;
}

// 00C80440  FUN_00c80440  size=15  [between]
undefined4 __fastcall FUN_00c80440(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 0xc);
}

// 00C80450  Trigger::cActEnemyGroupByName::vf18  size=46  [class]
undefined4 __fastcall Trigger::cActEnemyGroupByName::vf18(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016aa78c);
    return 0;
  }
  uVar2 = FUN_00c18650(*(undefined4 *)(iVar1 + 8),iVar1 + 0xc);
  return uVar2;
}

// 00C80480  Trigger::cActEnemyGroupByName::vf24  size=26  [class]
undefined4 __fastcall Trigger::cActEnemyGroupByName::vf24(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  uVar1 = FUN_00c18740(*(int *)(param_1 + 4) + 0xc);
  return uVar1;
}

// 00C804E0  Trigger::cActJammingDispStart::vf18  size=13  [class]
void Trigger::cActJammingDispStart::vf18(void)

{
  DAT_01dc0ec8 = 1;
  return;
}

// 00C804F0  Trigger::cActJammingDispEnd::vf18  size=18  [class]
undefined4 Trigger::cActJammingDispEnd::vf18(void)

{
  DAT_01dc0ec8 = 0;
  return 1;
}

// 00C80510  Trigger::cActStaFlagOff::vf08  size=54  [class]
void __fastcall Trigger::cActStaFlagOff::vf08(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    uVar3 = 0;
    while( true ) {
      iVar2 = FUN_00e03ea0((&PTR_s_STA_SCENARIO_018abb58)[uVar3 * 2]);
      if (*(int *)(iVar1 + 8) == iVar2) break;
      uVar3 = uVar3 + 1;
      if (0x18 < uVar3) {
        return;
      }
    }
    *(uint *)(param_1 + 8) = uVar3;
  }
  return;
}

// 00C80550  Trigger::Act::STA_FLAG_OFF  size=97  [class]
undefined4 __fastcall Trigger::Act::STA_FLAG_OFF(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016ab4e0);
    return 0;
  }
  if (-1 < *(int *)(param_1 + 8)) {
    (&DAT_01bea060)[*(uint *)(&DAT_018abb5c + *(int *)(param_1 + 8) * 8) >> 5] =
         (&DAT_01bea060)[*(uint *)(&DAT_018abb5c + *(int *)(param_1 + 8) * 8) >> 5] &
         ~(0x80000000U >> ((byte)*(uint *)(&DAT_018abb5c + *(int *)(param_1 + 8) * 8) & 0x1f));
    return 1;
  }
  FUN_00dd5650(&DAT_016ab4b0);
  return 0;
}

// 00C805C0  Trigger::Act::TRIGGER_UIANIM_START  size=47  [class]
undefined4 __fastcall Trigger::Act::TRIGGER_UIANIM_START(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016ab510);
    return 0;
  }
  FUN_00cad340(*(undefined4 *)(*(int *)(param_1 + 4) + 8));
  return 1;
}

// 00C805F0  Trigger::cActSetNextCodec::vf18  size=77  [class]
undefined4 __fastcall Trigger::cActSetNextCodec::vf18(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016ab328);
    return 0;
  }
  iVar2 = FUN_00937830(*(undefined4 *)(iVar1 + 8));
  if (iVar2 == 0) {
    FUN_00dd5650(&DAT_016ab548,*(undefined4 *)(iVar1 + 8));
    return 0;
  }
  return 1;
}

// 00C80640  Trigger::cActStpFlagOff::vf08  size=54  [class]
void __fastcall Trigger::cActStpFlagOff::vf08(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    uVar3 = 0;
    while( true ) {
      iVar2 = FUN_00e03ea0((&PTR_s_STP_OBJ_018abc20)[uVar3 * 2]);
      if (*(int *)(iVar1 + 8) == iVar2) break;
      uVar3 = uVar3 + 1;
      if (0x15 < uVar3) {
        return;
      }
    }
    *(uint *)(param_1 + 8) = uVar3;
  }
  return;
}

// 00C80680  Trigger::cActStpFlagOn::vf08  size=54  [class]
void __fastcall Trigger::cActStpFlagOn::vf08(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    uVar3 = 0;
    while( true ) {
      iVar2 = FUN_00e03ea0((&PTR_s_STP_OBJ_018abc20)[uVar3 * 2]);
      if (*(int *)(iVar1 + 8) == iVar2) break;
      uVar3 = uVar3 + 1;
      if (0x15 < uVar3) {
        return;
      }
    }
    *(uint *)(param_1 + 8) = uVar3;
  }
  return;
}

// 00C806C0  Trigger::Act::TRIGGER_SET_UISTART_ANIM_NONE  size=47  [class]
undefined4 __fastcall Trigger::Act::TRIGGER_SET_UISTART_ANIM_NONE(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016ab590);
    return 0;
  }
  FUN_00cad360(*(undefined4 *)(*(int *)(param_1 + 4) + 8));
  return 1;
}

// 00C80700  Trigger::cActSetGameoverNormalFlag::vf18  size=8  [class]
undefined4 Trigger::cActSetGameoverNormalFlag::vf18(void)

{
  return 1;
}

// 00C80710  Trigger::Act::VM_PLAY  size=47  [class]
undefined4 __fastcall Trigger::Act::VM_PLAY(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016ab5d0);
    return 0;
  }
  FUN_00c33070(*(int *)(param_1 + 4) + 8);
  return 1;
}

// 00C80740  Trigger::Act::ITEM_GET  size=45  [class]
undefined4 __fastcall Trigger::Act::ITEM_GET(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016ab5fc);
    return 0;
  }
  FUN_00953e30(*(undefined4 *)(*(int *)(param_1 + 4) + 8));
  return 1;
}

// 00C80780  Trigger::Act::ACTION_MES_START  size=45  [class]
undefined4 __fastcall Trigger::Act::ACTION_MES_START(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016ab628);
    return 0;
  }
  FUN_00cb54e0(*(undefined4 *)(*(int *)(param_1 + 4) + 8));
  return 1;
}

// 00C807B0  Trigger::Act::ACTION_MES_F_CLR  size=37  [class]
undefined4 __fastcall Trigger::Act::ACTION_MES_F_CLR(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016ab65c);
    return 0;
  }
  FUN_00cb5520();
  return 1;
}

// 00C807E0  Trigger::Act::RESULT_REC_START  size=83  [class]
undefined4 __fastcall Trigger::Act::RESULT_REC_START(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016ab6d8);
    return 0;
  }
  if (*(char *)(iVar1 + 8) == '\0') {
    FUN_00dd5650(&DAT_016ab690);
    return 1;
  }
  piVar2 = (int *)FUN_00c1b9a0();
  (**(code **)(*piVar2 + 0x10))(iVar1 + 8,0);
  return 1;
}

// 00C80840  Trigger::Act::RESULT_REC_END  size=46  [class]
undefined4 __fastcall Trigger::Act::RESULT_REC_END(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016ab70c);
    return 0;
  }
  piVar1 = (int *)FUN_00c1b9a0();
  (**(code **)(*piVar1 + 0x14))();
  return 1;
}

// 00C80870  Trigger::Act::SCR_COLI_ON  size=195  [class]
int __fastcall Trigger::Act::SCR_COLI_ON(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int unaff_ESI;
  int iVar6;
  int local_4;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar6 = 0;
  if (iVar1 == 0) {
    local_4 = param_1;
    FUN_00dd5650(&DAT_016ab7b8);
    return 0;
  }
  iVar5 = 0;
  local_4 = 0;
  piVar2 = (int *)FUN_00c14bb0();
  iVar3 = (**(code **)(*piVar2 + 0x28))(&local_4,*(undefined4 *)(iVar1 + 8));
  if (iVar3 != 0) {
    if (0 < unaff_ESI) {
      do {
        piVar2 = *(int **)(iVar3 + iVar6 * 4);
        if (((piVar2 != (int *)0x0) && (iVar4 = (**(code **)(*piVar2 + 8))(), iVar4 != 0)) &&
           (iVar4 = (**(code **)(**(int **)(iVar3 + iVar6 * 4) + 0xe0))(1,iVar1 + 0xc,0,0),
           iVar4 != 0)) {
          iVar5 = 1;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < unaff_ESI);
      if (iVar5 != 0) {
        return iVar5;
      }
    }
    FUN_00dd5650(&DAT_016ab778,iVar1 + 0xc);
    return 0;
  }
  FUN_00dd5650(&DAT_016ab740,*(undefined4 *)(iVar1 + 8));
  return 0;
}

// 00C80940  Trigger::Act::SCR_COLI_OFF  size=195  [class]
int __fastcall Trigger::Act::SCR_COLI_OFF(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int unaff_ESI;
  int iVar6;
  int local_4;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar6 = 0;
  if (iVar1 == 0) {
    local_4 = param_1;
    FUN_00dd5650(&DAT_016ab86c);
    return 0;
  }
  iVar5 = 0;
  local_4 = 0;
  piVar2 = (int *)FUN_00c14bb0();
  iVar3 = (**(code **)(*piVar2 + 0x28))(&local_4,*(undefined4 *)(iVar1 + 8));
  if (iVar3 != 0) {
    if (0 < unaff_ESI) {
      do {
        piVar2 = *(int **)(iVar3 + iVar6 * 4);
        if (((piVar2 != (int *)0x0) && (iVar4 = (**(code **)(*piVar2 + 8))(), iVar4 != 0)) &&
           (iVar4 = (**(code **)(**(int **)(iVar3 + iVar6 * 4) + 0xe0))(0,iVar1 + 0xc,0,0),
           iVar4 != 0)) {
          iVar5 = 1;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < unaff_ESI);
      if (iVar5 != 0) {
        return iVar5;
      }
    }
    FUN_00dd5650(&DAT_016ab828,iVar1 + 0xc);
    return 0;
  }
  FUN_00dd5650(&DAT_016ab7e8,*(undefined4 *)(iVar1 + 8));
  return 0;
}

// 00C80A10  Trigger::cActArray::vf08  size=43  [class]
void __fastcall Trigger::cActArray::vf08(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x44)) {
    piVar1 = (int *)(param_1 + 8);
    do {
      if (*piVar1 != 0) {
        (**(code **)(*(int *)*piVar1 + 8))();
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x44));
  }
  return;
}

// 00C80A40  Trigger::cActArray::vf0C  size=43  [class]
void __fastcall Trigger::cActArray::vf0C(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x44)) {
    piVar1 = (int *)(param_1 + 8);
    do {
      if (*piVar1 != 0) {
        (**(code **)(*(int *)*piVar1 + 0xc))();
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x44));
  }
  return;
}

// 00C80A70  Trigger::cActArray::vf10  size=43  [class]
void __fastcall Trigger::cActArray::vf10(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x44)) {
    piVar1 = (int *)(param_1 + 8);
    do {
      if (*piVar1 != 0) {
        (**(code **)(*(int *)*piVar1 + 0x10))();
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x44));
  }
  return;
}

// 00C80AA0  Trigger::cActArray::vf18  size=78  [class]
undefined4 __thiscall Trigger::cActArray::vf18(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 local_4;
  
  local_4 = 1;
  uVar2 = 1;
  if (0 < *(int *)(param_1 + 0x44)) {
    piVar3 = (int *)(param_1 + 8);
    iVar4 = 0;
    do {
      if ((int *)*piVar3 != (int *)0x0) {
        iVar1 = (**(code **)(*(int *)*piVar3 + 0x18))(param_2);
        piVar3[0x10] = iVar1;
        if (iVar1 == 0) {
          local_4 = 0;
        }
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 1;
      uVar2 = local_4;
    } while (iVar4 < *(int *)(param_1 + 0x44));
  }
  return uVar2;
}

// 00C80AF0  Trigger::Act::EFFECT_ROOM_LOOP_OFF  size=96  [class]
undefined4 __fastcall Trigger::Act::EFFECT_ROOM_LOOP_OFF(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = *(int *)(param_1 + 4);
  uVar4 = 0;
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016ab89c);
    return 0;
  }
  piVar2 = (int *)FUN_00a6dd90();
  iVar3 = (**(code **)(*piVar2 + 0x9c))(*(undefined4 *)(iVar1 + 8));
  if (iVar3 != 0) {
    uVar4 = FUN_00e03ea0(iVar1 + 0x10);
    uVar4 = FUN_00a71830(*(undefined4 *)(iVar1 + 0xc),uVar4);
  }
  return uVar4;
}

// 00C80B50  Trigger::Act::ACTMES_DISP_OFF_SKIP  size=37  [class]
undefined4 __fastcall Trigger::Act::ACTMES_DISP_OFF_SKIP(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016ab8d4);
    return 0;
  }
  DAT_01dc0744 = 1;
  return 1;
}

// 00C80B80  Trigger::cActEmMsgDirectByNumber::vf10  size=42  [class]
void __fastcall Trigger::cActEmMsgDirectByNumber::vf10(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    uVar2 = FUN_00c15c50(piVar1 + 2);
    *(undefined4 *)(param_1 + 8) = uVar2;
    if (*piVar1 == 0x38) {
      *(int *)(param_1 + 0xc) = piVar1[0xd];
    }
  }
  return;
}

// 00C80BB0  Trigger::Act::CODEC_SEQ_END  size=47  [class]
undefined4 __fastcall Trigger::Act::CODEC_SEQ_END(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016ab90c);
    return 0;
  }
  FUN_0093a210(*(int *)(param_1 + 4) + 8);
  return 1;
}

// 00C80BE0  Trigger::Act::ANTIQ_SCR_MOVE  size=44  [class]
undefined1 __fastcall Trigger::Act::ANTIQ_SCR_MOVE(int param_1)

{
  undefined1 uVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016ab93c);
    return 0;
  }
  uVar1 = FUN_00a5be00(0xffffffff,1);
  return uVar1;
}

// 00C80C10  Trigger::Act::ANTIQ_SCR_REQ_END  size=42  [class]
undefined4 __fastcall Trigger::Act::ANTIQ_SCR_REQ_END(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016ab970);
    return 0;
  }
  FUN_00a55820();
  return 1;
}

// 00C80C40  Trigger::Act::BATTLE_AREA_ON  size=54  [class]
undefined4 __fastcall Trigger::Act::BATTLE_AREA_ON(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016ab9a4);
    return 0;
  }
  piVar2 = (int *)FUN_00401110();
  (**(code **)(*piVar2 + 4))(*(undefined4 *)(iVar1 + 8));
  return 1;
}

// 00C80C80  Trigger::Act::BATTLE_AREA_OFF  size=54  [class]
undefined4 __fastcall Trigger::Act::BATTLE_AREA_OFF(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016ab9d8);
    return 0;
  }
  piVar2 = (int *)FUN_00401110();
  (**(code **)(*piVar2 + 8))(*(undefined4 *)(iVar1 + 8));
  return 1;
}

// 00C80CC0  Trigger::cActEmAnimationByNumber::vf18  size=794  [class]
uint __fastcall Trigger::cActEmAnimationByNumber::vf18(int param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  uint uVar6;
  char *local_30;
  char local_28 [8];
  char local_20 [32];
  
  iVar3 = *(int *)(param_1 + 4);
  iVar2 = *(int *)(iVar3 + 4);
  if (iVar2 != 0x94) {
    if (iVar2 == 0x95) {
      local_30 = "EM_ANIM_PHASE_NUM";
      goto LAB_00c80d08;
    }
    if (iVar2 == 0x32) {
      local_30 = "EM_ANIM_LOOP_NUM";
      goto LAB_00c80d08;
    }
    local_30 = "EM_ANIM_PHASE_LOOP_NUM";
    if (iVar2 == 0x96) goto LAB_00c80d08;
  }
  local_30 = "EM_ANIM_NUM";
LAB_00c80d08:
  iVar2 = FUN_00c19c00(*(undefined4 *)(iVar3 + 8),*(undefined4 *)(iVar3 + 0xc),
                       *(undefined4 *)(iVar3 + 0x10));
  if (iVar2 == 0) {
    FUN_00dd5650(&DAT_016abaa4,local_30,*(undefined4 *)(iVar3 + 8),*(undefined4 *)(iVar3 + 0xc),
                 *(undefined4 *)(iVar3 + 0x10));
    return 0;
  }
  uVar6 = 0;
  iVar2 = FUN_00a7c8a0();
  if (iVar2 == 0) {
    FUN_00dd5650(&DAT_016aba0c,local_30);
  }
  else {
    iVar2 = *(int *)(iVar3 + 4);
    if (iVar2 == 0x94) {
      iVar3 = FUN_00aa4940(iVar3 + 0x14,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    }
    else {
      if (iVar2 != 0x32) {
        if ((iVar2 != 0x95) && (iVar2 != 0x96)) {
          FUN_00dd5650(&DAT_016aba88,local_30);
          return 0;
        }
        pcVar1 = (char *)(iVar3 + 0x14);
        local_28[0] = '\0';
        local_28[1] = '\0';
        local_28[2] = '\0';
        local_28[3] = '\0';
        local_28[4] = 0;
        iVar2 = 0;
        pcVar4 = pcVar1;
        do {
          if (*pcVar4 == '\0') break;
          if (*pcVar4 == '_') {
            if (iVar2 < 0x10) {
              _strncpy_s(local_28,5,pcVar4 + 1,4);
              local_20[0] = '\0';
              local_20[1] = '\0';
              local_20[2] = '\0';
              local_20[3] = '\0';
              local_20[4] = '\0';
              local_20[5] = '\0';
              local_20[6] = '\0';
              local_20[7] = '\0';
              local_20[8] = '\0';
              local_20[9] = '\0';
              local_20[10] = '\0';
              local_20[0xb] = '\0';
              local_20[0xc] = '\0';
              local_20[0xd] = '\0';
              local_20[0xe] = '\0';
              local_20[0xf] = '\0';
              local_20[0x10] = '\0';
              local_20[0x11] = '\0';
              local_20[0x12] = '\0';
              local_20[0x13] = '\0';
              local_20[0x14] = '\0';
              local_20[0x15] = '\0';
              local_20[0x16] = '\0';
              local_20[0x17] = '\0';
              local_20[0x18] = '\0';
              local_20[0x19] = '\0';
              local_20[0x1a] = '\0';
              local_20[0x1b] = '\0';
              local_20[0x1c] = '\0';
              local_20[0x1d] = '\0';
              local_20[0x1e] = '\0';
              local_20[0x1f] = '\0';
              _sprintf_s(local_20,0x20,"%s.mot",pcVar1);
              iVar2 = FUN_00de4500(local_20);
              if (iVar2 == 0) {
                FUN_00dd5650(&DAT_016aba2c,local_30,local_20);
                return 0;
              }
              local_20[0] = '\0';
              local_20[1] = '\0';
              local_20[2] = '\0';
              local_20[3] = '\0';
              local_20[4] = '\0';
              local_20[5] = '\0';
              local_20[6] = '\0';
              local_20[7] = '\0';
              local_20[8] = '\0';
              local_20[9] = '\0';
              local_20[10] = '\0';
              local_20[0xb] = '\0';
              local_20[0xc] = '\0';
              local_20[0xd] = '\0';
              local_20[0xe] = '\0';
              local_20[0xf] = '\0';
              local_20[0x10] = '\0';
              local_20[0x11] = '\0';
              local_20[0x12] = '\0';
              local_20[0x13] = '\0';
              local_20[0x14] = '\0';
              local_20[0x15] = '\0';
              local_20[0x16] = '\0';
              local_20[0x17] = '\0';
              local_20[0x18] = '\0';
              local_20[0x19] = '\0';
              local_20[0x1a] = '\0';
              local_20[0x1b] = '\0';
              local_20[0x1c] = '\0';
              local_20[0x1d] = '\0';
              local_20[0x1e] = '\0';
              local_20[0x1f] = '\0';
              _sprintf_s(local_20,0x20,"%s_0_seq.bxm",pcVar1);
              uVar5 = FUN_00de4500(local_20);
              uVar6 = FUN_00ac45d0(iVar2,uVar5,0,0,0x3f800000,0,0xbf800000,0x3f800000,local_28);
              if (uVar6 != 1) {
                return uVar6;
              }
              FUN_00a95f70(0x41400000);
              if (*(int *)(iVar3 + 4) != 0x95) {
                return 1;
              }
              FUN_00a96070(0,0x8000000,1);
              return 1;
            }
            break;
          }
          iVar2 = iVar2 + 1;
          pcVar4 = pcVar4 + 1;
        } while (iVar2 < 0x10);
        FUN_00dd5650(&DAT_016aba5c,local_30,pcVar1);
        return 0;
      }
      iVar3 = FUN_00a9f2f0(iVar3 + 0x14,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    }
    uVar6 = (uint)(iVar3 != -1);
    if (uVar6 == 1) {
      FUN_00a95f70(0x41400000);
      return 1;
    }
  }
  return uVar6;
}

// 00C81010  Trigger::Act::DOOR_LOCK  size=74  [class]
undefined4 __fastcall Trigger::Act::DOOR_LOCK(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016abb18);
    return 0;
  }
  FUN_00e03ea0(iVar1 + 8);
  if (*(int *)(iVar1 + 0x18) != 0) {
    uVar2 = FUN_00c47bb0();
    return uVar2;
  }
  uVar2 = FUN_00c47bf0();
  return uVar2;
}

// 00C81060  Trigger::Act::OBJECT_COLLISION  size=35  [class]
void Trigger::Act::OBJECT_COLLISION(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 8) == -1) {
    FUN_00dd5650(&DAT_016abb44,param_1 + 0xc,param_2);
  }
  return;
}

// 00C81090  Trigger::Act::VR_COMPLETE  size=68  [class]
bool __fastcall Trigger::Act::VR_COMPLETE(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016abb74);
    return false;
  }
  iVar2 = FUN_0095bfa0();
  if (iVar2 != 0) {
    FUN_0095bfa0();
    FUN_0095c080(*(undefined4 *)(iVar1 + 8));
  }
  return iVar2 != 0;
}

// 00C810E0  Trigger::Act::VR_MISTAKE  size=65  [class]
undefined4 __fastcall Trigger::Act::VR_MISTAKE(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016abba4);
    return 0;
  }
  uVar3 = 0;
  iVar2 = FUN_0095bfa0();
  if (iVar2 != 0) {
    FUN_0095bfa0();
    uVar3 = FUN_0095c0b0(*(undefined4 *)(iVar1 + 8));
  }
  return uVar3;
}

// 00C81130  Trigger::Act::GIMMICK_FINISH  size=49  [class]
undefined4 __fastcall Trigger::Act::GIMMICK_FINISH(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016abbd4);
    return 0;
  }
  FUN_009453f0(*(undefined4 *)(*(int *)(param_1 + 4) + 8),1);
  return 1;
}

// 00C81170  Trigger::Act::GIMMICK_REVERT  size=49  [class]
undefined4 __fastcall Trigger::Act::GIMMICK_REVERT(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016abc08);
    return 0;
  }
  FUN_009453f0(*(undefined4 *)(*(int *)(param_1 + 4) + 8),0);
  return 1;
}

// 00C811B0  Trigger::Act::ENM_HIDE  size=51  [class]
undefined4 __fastcall Trigger::Act::ENM_HIDE(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016abc3c);
    return 0;
  }
  FUN_00c18a80(*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc));
  return 1;
}

// 00C811F0  Trigger::Act::ENM_APPEAR  size=51  [class]
undefined4 __fastcall Trigger::Act::ENM_APPEAR(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016abc68);
    return 0;
  }
  FUN_00c18ad0(*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc));
  return 1;
}

// 00C81230  Trigger::Act::GIMMICK_REVIVAL_CANCEL  size=51  [class]
undefined4 __fastcall Trigger::Act::GIMMICK_REVIVAL_CANCEL(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016abc98);
    return 0;
  }
  FUN_00945260(*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc));
  return 1;
}

// 00C81270  Trigger::Act::CODEC_SEQ_END_ALL  size=42  [class]
undefined4 __fastcall Trigger::Act::CODEC_SEQ_END_ALL(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016abcd4);
    return 0;
  }
  FUN_00939bc0();
  return 1;
}

// 00C812A0  Trigger::Act::SCR_MESH_ON_ALL  size=103  [class]
undefined4 __fastcall Trigger::Act::SCR_MESH_ON_ALL(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    iVar4 = 0;
    piVar2 = (int *)FUN_00c14bb0();
    iVar3 = (**(code **)(*piVar2 + 0x18))(0,*(undefined4 *)(iVar1 + 8));
    while (iVar3 != 0) {
      piVar2 = (int *)FUN_00a7c8a0();
      (**(code **)(*piVar2 + 0x1c))();
      iVar4 = iVar4 + 1;
      piVar2 = (int *)FUN_00c14bb0();
      iVar3 = (**(code **)(*piVar2 + 0x18))(iVar4,*(undefined4 *)(iVar1 + 8));
    }
    return 1;
  }
  FUN_00dd5650(&DAT_016abd08);
  return 0;
}

// 00C81310  Trigger::Act::SCR_MESH_OFF_ALL  size=103  [class]
undefined4 __fastcall Trigger::Act::SCR_MESH_OFF_ALL(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    iVar4 = 0;
    piVar2 = (int *)FUN_00c14bb0();
    iVar3 = (**(code **)(*piVar2 + 0x18))(0,*(undefined4 *)(iVar1 + 8));
    while (iVar3 != 0) {
      piVar2 = (int *)FUN_00a7c8a0();
      (**(code **)(*piVar2 + 0x20))();
      iVar4 = iVar4 + 1;
      piVar2 = (int *)FUN_00c14bb0();
      iVar3 = (**(code **)(*piVar2 + 0x18))(iVar4,*(undefined4 *)(iVar1 + 8));
    }
    return 1;
  }
  FUN_00dd5650(&DAT_016abd3c);
  return 0;
}

// 00C81380  Trigger::Act::DOOR_DISP_ON  size=42  [class]
undefined4 __fastcall Trigger::Act::DOOR_DISP_ON(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016abd70);
    return 0;
  }
  uVar1 = FUN_00c47d70();
  return uVar1;
}

// 00C813B0  Trigger::Act::DOOR_DISP_OFF  size=42  [class]
undefined4 __fastcall Trigger::Act::DOOR_DISP_OFF(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016abda0);
    return 0;
  }
  uVar1 = FUN_00c47cf0();
  return uVar1;
}

// 00C813E0  Trigger::Act::ADD_EXP  size=54  [class]
undefined4 __fastcall Trigger::Act::ADD_EXP(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016abdd0);
    return 0;
  }
  piVar2 = (int *)FUN_00c1b9a0();
  (**(code **)(*piVar2 + 0x3c))(*(undefined4 *)(iVar1 + 8));
  return 1;
}

// 00C81420  Trigger::Act::CODEC_START_FOR_SKIP  size=126  [class]
undefined4 __fastcall Trigger::Act::CODEC_START_FOR_SKIP(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 == 0) {
    FUN_00dd5650(&DAT_016abe50);
    return 0;
  }
  uVar3 = 0;
  pcVar5 = (char *)(iVar2 + 0x1c);
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  if (pcVar5 != (char *)(iVar2 + 0x1d)) {
    uVar3 = FUN_00e03ea0((char *)(iVar2 + 0x1c));
  }
  iVar4 = FUN_0093b4a0(iVar2 + 8,*(undefined4 *)(iVar2 + 0x18),uVar3);
  if (iVar4 == 0) {
    FUN_00dd5650(&DAT_016abe00,iVar2 + 8);
    return 0;
  }
  return 1;
}

// 00C814A0  Trigger::Act::ITEM_DEL_INST  size=45  [class]
undefined4 __fastcall Trigger::Act::ITEM_DEL_INST(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016abe88);
    return 0;
  }
  FUN_0094e9e0(*(undefined4 *)(*(int *)(param_1 + 4) + 8));
  return 1;
}

// 00C814D0  Trigger::Act::ITEM_DEL_DROP_ALL  size=37  [class]
undefined4 __fastcall Trigger::Act::ITEM_DEL_DROP_ALL(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016abeb8);
    return 0;
  }
  FUN_00951930();
  return 1;
}

// 00C81500  Trigger::Act::GENERIC_FLAG_  size=99  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall Trigger::Act::GENERIC_FLAG_(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    puVar3 = &DAT_0164ced4;
    if (_DAT_00000004 != 0xad) {
      puVar3 = &DAT_0164ced8;
    }
    FUN_00dd5650(&DAT_016abeec,puVar3);
  }
  else {
    iVar2 = *(int *)(iVar1 + 8);
    if ((0 < iVar2) && (iVar2 < 0x21)) {
      if (*(int *)(iVar1 + 4) == 0xad) {
        FUN_00c20790(iVar2);
        return 1;
      }
      FUN_00c207b0(iVar2);
      return 1;
    }
  }
  return 0;
}

// 00C81570  Trigger::Act::ENM_APPEAR_RESET_POS  size=47  [class]
undefined4 __fastcall Trigger::Act::ENM_APPEAR_RESET_POS(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016abf20);
    return 0;
  }
  FUN_00c18b60(*(undefined4 *)(*(int *)(param_1 + 4) + 8));
  return 1;
}

// 00C815A0  Trigger::Act::ENM_APPEAR_RESET_POS_2  size=51  [class]
undefined4 __fastcall Trigger::Act::ENM_APPEAR_RESET_POS_2(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016abf20);
    return 0;
  }
  FUN_00c18b30(*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc));
  return 1;
}

// 00C815E0  Trigger::Act::ENM_DESTROY  size=55  [class]
undefined4 __fastcall Trigger::Act::ENM_DESTROY(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016abf58);
    return 0;
  }
  FUN_00c1a5a0(*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc),*(undefined4 *)(iVar1 + 0x10)
              );
  return 1;
}

// 00C81620  Trigger::Act::REQ_VR_START  size=37  [class]
undefined4 __fastcall Trigger::Act::REQ_VR_START(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016abf88);
    return 0;
  }
  FUN_0095c2c0();
  return 1;
}

// 00C81680  Trigger::Act::ITEM_ON_OFF  size=49  [class]
undefined4 __fastcall Trigger::Act::ITEM_ON_OFF(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016abfe0);
    return 0;
  }
  FUN_00956870(*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc));
  return 1;
}

// 00C816C0  Trigger::Act::NO_CODEC_MENU  size=41  [class]
undefined4 __fastcall Trigger::Act::NO_CODEC_MENU(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016ac010);
    return 0;
  }
  DAT_01bea178 = *(undefined4 *)(*(int *)(param_1 + 4) + 8);
  return 1;
}

// 00C816F0  Trigger::Act::VR_TIMER_STOP  size=37  [class]
undefined4 __fastcall Trigger::Act::VR_TIMER_STOP(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016ac040);
    return 0;
  }
  FUN_0095c2e0();
  return 1;
}

// 00C81720  Trigger::cActVrReturn::vf18  size=56  [class]
void Trigger::cActVrReturn::vf18(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_00d46910();
  iVar1 = FUN_00d46900();
  puVar2 = (undefined4 *)FUN_00d46900();
  FUN_00a4ac40(*puVar2,iVar1 + 8,0xffffffff);
  return;
}

// 00C81760  Trigger::Act::POS_KGK_PL  size=146  [class]
undefined4 __fastcall Trigger::Act::POS_KGK_PL(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_20 [12];
  undefined4 local_14;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016ac0a0);
    return 0;
  }
  iVar2 = FUN_00c78580(*(undefined4 *)(iVar1 + 8),local_20);
  if (iVar2 == 0) {
    FUN_00dd5650(&DAT_016ac070,*(undefined4 *)(iVar1 + 8));
    return 0;
  }
  local_30 = 0;
  local_2c = local_14;
  local_28 = 0;
  local_14 = 0x3f800000;
  FUN_00a4d8a0(local_20,&local_30,0);
  return 1;
}

// 00C81800  Trigger::cActDoorCloseDelay::vf18  size=1  [class]
undefined4 __fastcall Trigger::cActDoorCloseDelay::vf18(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016aaa1c);
    return 0;
  }
  uVar2 = FUN_00e03ea0(iVar1 + 8);
  uVar2 = FUN_00c317b0(uVar2,*(undefined4 *)(iVar1 + 0x18));
  return uVar2;
}

// 00C81840  Trigger::Act::DOOR_OPEN_2  size=57  [class]
undefined4 __fastcall Trigger::Act::DOOR_OPEN_2(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016aa680);
    return 0;
  }
  uVar2 = FUN_00e03ea0(iVar1 + 8);
  uVar2 = FUN_00c31610(uVar2,*(undefined4 *)(iVar1 + 0x18));
  return uVar2;
}

// 00C81880  Trigger::Act::RESULT_REC_START_2  size=83  [class]
undefined4 __fastcall Trigger::Act::RESULT_REC_START_2(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016ab6d8);
    return 0;
  }
  if (*(char *)(iVar1 + 8) == '\0') {
    FUN_00dd5650(&DAT_016ab690);
    return 1;
  }
  piVar2 = (int *)FUN_00c1b9a0();
  (**(code **)(*piVar2 + 0x10))(iVar1 + 8,1);
  return 1;
}

// 00C818E0  Trigger::Act::MAIN_TRG_ACTIVE  size=41  [class]
undefined4 __fastcall Trigger::Act::MAIN_TRG_ACTIVE(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016ac0d0);
    return 0;
  }
  uVar1 = 0;
  FUN_00958f70(0);
  uVar1 = FUN_00959630(uVar1);
  return uVar1;
}

// 00C81910  Trigger::Act::MAIN_TRG_SLEEP  size=41  [class]
undefined4 __fastcall Trigger::Act::MAIN_TRG_SLEEP(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016ac104);
    return 0;
  }
  uVar1 = 1;
  FUN_00958f70(1);
  uVar1 = FUN_00959630(uVar1);
  return uVar1;
}

// 00C81940  Trigger::Act::SUB_TRG_ACTIVE  size=48  [class]
undefined4 __fastcall Trigger::Act::SUB_TRG_ACTIVE(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016ac138);
    return 0;
  }
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 4) + 8);
  uVar3 = 0;
  uVar2 = 0;
  FUN_00958f70(0,uVar1,0);
  uVar1 = FUN_009596e0(uVar2,uVar1,uVar3);
  return uVar1;
}

// 00C81970  Trigger::Act::SUB_TRG_SLEEP  size=48  [class]
undefined4 __fastcall Trigger::Act::SUB_TRG_SLEEP(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016ac16c);
    return 0;
  }
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 4) + 8);
  uVar3 = 1;
  uVar2 = 0;
  FUN_00958f70(0,uVar1,1);
  uVar1 = FUN_009596e0(uVar2,uVar1,uVar3);
  return uVar1;
}

// 00C819A0  Trigger::Act::MAIN_TRG_ADD_FUNC  size=46  [class]
undefined4 __fastcall Trigger::Act::MAIN_TRG_ADD_FUNC(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016ac19c);
    return 0;
  }
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 4) + 8);
  FUN_00958f70(uVar1);
  FUN_00959760(uVar1);
  return 0;
}

// 00C819D0  Trigger::Act::SUB_TRG_ADD_FUNC  size=50  [class]
undefined4 __fastcall Trigger::Act::SUB_TRG_ADD_FUNC(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016ac1d0);
    return 0;
  }
  uVar2 = *(undefined4 *)(iVar1 + 0xc);
  uVar4 = *(undefined4 *)(iVar1 + 8);
  uVar3 = 0;
  FUN_00958f70(0,uVar4,uVar2);
  uVar2 = FUN_00959810(uVar3,uVar4,uVar2);
  return uVar2;
}

// 00C81A10  Trigger::Act::MAIN_TRG_DEL_FUNC  size=44  [class]
undefined4 __fastcall Trigger::Act::MAIN_TRG_DEL_FUNC(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016ac204);
    return 0;
  }
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 4) + 8);
  FUN_00958f70(uVar1);
  uVar1 = FUN_009597b0(uVar1);
  return uVar1;
}

// 00C81A40  Trigger::Act::SUB_TRG_DEL_FUNC  size=50  [class]
undefined4 __fastcall Trigger::Act::SUB_TRG_DEL_FUNC(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016ac238);
    return 0;
  }
  uVar2 = *(undefined4 *)(iVar1 + 0xc);
  uVar4 = *(undefined4 *)(iVar1 + 8);
  uVar3 = 0;
  FUN_00958f70(0,uVar4,uVar2);
  uVar2 = FUN_009598a0(uVar3,uVar4,uVar2);
  return uVar2;
}

// 00C82CE0  FUN_00c82ce0  size=120  [callgraph]
undefined4 __thiscall FUN_00c82ce0(int param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 4) != 0) {
    return 0;
  }
  iVar1 = FUN_00dd29b0(param_2 * 4,0x20,0,0);
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    uVar2 = (**(code **)(*param_3 + 0x18))();
    uVar2 = FUN_00dd2960(param_2 * 4,uVar2);
    FUN_00dd5650(&DAT_0163cadc,uVar2);
    return 0;
  }
  *(int *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 1;
  return 1;
}

// 00C82DD0  FUN_00c82dd0  size=120  [callgraph]
undefined4 __thiscall FUN_00c82dd0(int param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 4) != 0) {
    return 0;
  }
  iVar1 = FUN_00dd29b0(param_2 * 8,0x20,0,0);
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    uVar2 = (**(code **)(*param_3 + 0x18))();
    uVar2 = FUN_00dd2960(param_2 * 8,uVar2);
    FUN_00dd5650(&DAT_0163cadc,uVar2);
    return 0;
  }
  *(int *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 1;
  return 1;
}

// 00C835D0  Trigger::cAction<Trigger::cActArray>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActArray>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C83A60  FUN_00c83a60  size=120  [between]
undefined4 __thiscall FUN_00c83a60(int param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 4) != 0) {
    return 0;
  }
  iVar1 = FUN_00dd29b0(param_2 * 4,0x20,0,0);
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    uVar2 = (**(code **)(*param_3 + 0x18))();
    uVar2 = FUN_00dd2960(param_2 * 4,uVar2);
    FUN_00dd5650(&DAT_0163cadc,uVar2);
    return 0;
  }
  *(int *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 1;
  return 1;
}

// 00C83B60  FUN_00c83b60  size=26  [between]
void FUN_00c83b60(char *param_1,char *param_2)

{
  _vsprintf_s(param_1,5,param_2,&stack0x0000000c);
  return;
}

// 00C83B80  FUN_00c83b80  size=42  [between]
uint FUN_00c83b80(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  puVar2 = &DAT_01b354f0;
  (**(code **)(*param_1 + 4))(&DAT_01b354f0);
  iVar1 = FUN_00dd6d80(puVar2);
  return -(uint)(iVar1 != 0) & (uint)param_1;
}

// 00C83BB0  FUN_00c83bb0  size=42  [between]
uint FUN_00c83bb0(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  puVar2 = &DAT_01b354d8;
  (**(code **)(*param_1 + 4))(&DAT_01b354d8);
  iVar1 = FUN_00dd6d80(puVar2);
  return -(uint)(iVar1 != 0) & (uint)param_1;
}

// 00C83D40  FUN_00c83d40  size=43  [between]
void __fastcall FUN_00c83d40(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00C83E40  Trigger::cTriggerTask::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cTriggerTask::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C83E60  Trigger::cTriggerTask_PlAnim::vf00  size=38  [class]
undefined4 * __thiscall Trigger::cTriggerTask_PlAnim::vf00(undefined4 *param_1,byte param_2)

{
  param_1[3] = 0;
  *param_1 = cTriggerTask::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C83E90  FUN_00c83e90  size=127  [between]
void __thiscall FUN_00c83e90(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 0xc) = param_2;
  piVar1 = (int *)FUN_00a7c8a0();
  iVar3 = piVar1[300];
  iVar2 = FUN_009f9350(iVar3);
  if (iVar2 == 1) {
    if ((iVar3 == 0x10100) || (iVar3 == 0x10010)) {
      iVar3 = (**(code **)(*piVar1 + 0x32c))();
      if (iVar3 == 1) {
        FUN_00b8a040(0,0,0);
      }
      (**(code **)(*piVar1 + 0x318))();
      FUN_00a8cb50(0x134);
    }
    DAT_01bea070 = DAT_01bea070 | 0x200000;
  }
  return;
}

// 00C83F10  FUN_00c83f10  size=208  [between]
void __fastcall FUN_00c83f10(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (((*(byte *)(param_1 + 8) & 2) == 0) && (*(int *)(param_1 + 0xc) != 0)) {
    iVar1 = FUN_00a7c7e0();
    if (iVar1 == 0) {
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 2;
      return;
    }
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      iVar1 = piVar2[300];
      iVar3 = FUN_00a92f90();
      if (iVar3 != 0) {
        FUN_00e26e90();
        FUN_00e22f10(0);
      }
      iVar3 = FUN_00a94ce0(0);
      if (iVar3 == 1) {
        iVar3 = FUN_009f9350(iVar1);
        if (iVar3 == 1) {
          if ((iVar1 == 0x10100) || (iVar1 == 0x10010)) {
            (**(code **)(*piVar2 + 0x388))(0);
            (**(code **)(*piVar2 + 0x314))();
          }
          DAT_01bea070 = DAT_01bea070 & 0xffdfffff;
        }
        FUN_00da8810(0x41200000);
        *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 2;
      }
    }
  }
  return;
}

// 00C84030  FUN_00c84030  size=29  [between]
undefined4 __fastcall FUN_00c84030(int param_1)

{
  FUN_00c82ce0(10,*(undefined4 *)(param_1 + 0x38));
  FUN_00dd7240();
  return 1;
}

// 00C840A0  FUN_00c840a0  size=99  [between]
void __fastcall FUN_00c840a0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0xc);
  while (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 0xc);
    if (0 < iVar1) {
      iVar1 = **(int **)(param_1 + 4);
      iVar2 = *(int *)(iVar1 + 0x34);
      if (iVar2 != 0) {
        FUN_00dd4920(iVar2);
      }
      FUN_00dd4920(iVar1);
      iVar1 = *(int *)(param_1 + 0xc);
      if (0 < iVar1) {
        iVar2 = 0;
        if (iVar1 != 1 && -1 < iVar1 + -1) {
          do {
            *(undefined4 *)(*(int *)(param_1 + 4) + iVar2 * 4) =
                 *(undefined4 *)(*(int *)(param_1 + 4) + 4 + iVar2 * 4);
            iVar2 = iVar2 + 1;
          } while (iVar2 < *(int *)(param_1 + 0xc) + -1);
        }
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
      }
      iVar1 = *(int *)(param_1 + 0xc);
    }
  }
  return;
}

// 00C84110  FUN_00c84110  size=121  [between]
void __fastcall FUN_00c84110(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  do {
    iVar1 = *(int *)(param_1 + 0xc);
    iVar4 = 0;
    if (iVar1 < 1) {
      return;
    }
    piVar3 = *(int **)(param_1 + 4);
    while (*(int *)(*piVar3 + 0x2c) != 2) {
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 1;
      if (iVar1 <= iVar4) {
        return;
      }
    }
    if (iVar4 < iVar1) {
      iVar1 = (*(int **)(param_1 + 4))[iVar4];
      iVar2 = *(int *)(iVar1 + 0x34);
      if (iVar2 != 0) {
        FUN_00dd4920(iVar2);
      }
      FUN_00dd4920(iVar1);
      if (iVar4 < *(int *)(param_1 + 0xc)) {
        if (iVar4 < *(int *)(param_1 + 0xc) + -1) {
          do {
            *(undefined4 *)(*(int *)(param_1 + 4) + iVar4 * 4) =
                 *(undefined4 *)(*(int *)(param_1 + 4) + 4 + iVar4 * 4);
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(param_1 + 0xc) + -1);
        }
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
      }
    }
  } while( true );
}

// 00C84190  FUN_00c84190  size=51  [between]
int __thiscall FUN_00c84190(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = -1;
  if (0 < *(int *)(param_1 + 0xc)) {
    piVar1 = *(int **)(param_1 + 4);
    iVar2 = 0;
    while (param_2 != *(int *)(*piVar1 + 0x24)) {
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
      if (*(int *)(param_1 + 0xc) <= iVar2) {
        return -1;
      }
    }
  }
  return iVar2;
}

// 00C84470  FUN_00c84470  size=21  [between]
void FUN_00c84470(void)

{
  FUN_00a6e770(0xfffe);
  FUN_00a6e710();
  return;
}

// 00C84490  Trigger::cCondTrue::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondTrue::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C845E0  FUN_00c845e0  size=93  [between]
void FUN_00c845e0(void)

{
  int iVar1;
  
  iVar1 = DAT_01dbd1d8;
  if (DAT_01dbd1d0 != 0) {
    *(undefined4 *)(DAT_01dbd1d8 + 0xc) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 8) = 0xbf800000;
    *(undefined4 *)(iVar1 + 4) = 0xffffffff;
    DAT_01dbd1d4 = 0;
    if (DAT_01dbd1d8 != 0) {
      FUN_00dd4920(DAT_01dbd1d8);
      DAT_01dbd1d8 = 0;
    }
    if (DAT_01dbd1d0 != 0) {
      FUN_00dd4920(DAT_01dbd1d0);
      DAT_01dbd1d0 = 0;
    }
  }
  return;
}

// 00C84690  FUN_00c84690  size=131  [between]
undefined4 __thiscall FUN_00c84690(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int local_28;
  int local_24 [5];
  undefined4 local_10;
  
  iVar2 = 0;
  local_28 = 0;
  if (0 < *(int *)(param_2 + 0xc)) {
    do {
      piVar3 = (int *)(*(int *)(param_2 + 4) + iVar2);
      piVar4 = local_24;
      for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
        *piVar4 = *piVar3;
        piVar3 = piVar3 + 1;
        piVar4 = piVar4 + 1;
      }
      if (local_24[0] == 0) {
        if (*(int *)(param_1 + 0x6f4) != 0) {
          FUN_00ebdd50(*(int *)(param_1 + 0x6f4));
          *(undefined4 *)(param_1 + 0x6f4) = 0;
        }
        *(undefined4 *)(param_1 + 0x6f4) = local_10;
      }
      local_28 = local_28 + 1;
      iVar2 = iVar2 + 0x24;
    } while (local_28 < *(int *)(param_2 + 0xc));
  }
  return 0;
}

// 00C84760  FUN_00c84760  size=43  [between]
bool __thiscall FUN_00c84760(int param_1,undefined4 param_2)

{
  bool bVar1;
  
  bVar1 = *(uint *)(param_1 + 0x698) < 0x10;
  if (bVar1) {
    (**(code **)(*(int *)(param_1 + 0x690) + 8))(&param_2);
  }
  return bVar1;
}

// 00C84790  FUN_00c84790  size=108  [between]
void __fastcall FUN_00c84790(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  
  iVar1 = FUN_00de3560();
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)(param_1 + 0x6c);
    iVar1 = 0x20;
    do {
      *puVar2 = 0x3c8efa35;
      puVar2[-7] = 0;
      puVar2[1] = 0xffffffff;
      puVar2 = puVar2 + 0xc;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    *(undefined4 *)(param_1 + 0x40) = 0;
    if (*(int *)(param_1 + 0x6e0) == 0) {
      pcVar3 = "_pos.bxm";
    }
    else {
      pcVar3 = "_VRpos.bxm";
    }
    iVar1 = FUN_00de4550(pcVar3,0);
    if (iVar1 != 0) {
      cXmlBinary::cXmlBinary_16(iVar1,&DAT_01b7bd48);
    }
  }
  return;
}

// 00C84800  FUN_00c84800  size=74  [between]
void FUN_00c84800(undefined4 param_1,undefined4 *param_2)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_20 = *param_2;
  local_1c = param_2[1];
  local_18 = param_2[2];
  FUN_00c78580(param_1,&local_20);
  *param_2 = local_20;
  param_2[1] = local_1c;
  param_2[2] = local_18;
  return;
}

// 00C848C0  FUN_00c848c0  size=152  [between]
undefined4 __thiscall FUN_00c848c0(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = DAT_018b9174;
  iVar3 = *(int *)(param_2 + 0x1c);
  if (*(int *)(param_2 + 0x18) == 2) {
    return 0;
  }
  if (iVar3 == *(int *)(param_1 + 0x6e4)) {
    return 1;
  }
  if (iVar3 == *(int *)(param_1 + 0x6f0)) {
    return 0;
  }
  iVar2 = FUN_00d45860(DAT_018b9174,param_3);
  if ((iVar3 != *(int *)(param_1 + 0x6e8)) && (iVar3 = FUN_00d45910(uVar1,iVar3), iVar2 < iVar3)) {
    return 0;
  }
  if ((*(int *)(param_2 + 0x24) != *(int *)(param_1 + 0x6ec)) &&
     (iVar3 = FUN_00d45910(uVar1,*(int *)(param_2 + 0x24)), iVar3 < iVar2)) {
    return 0;
  }
  return 1;
}

// 00C84960  FUN_00c84960  size=129  [between]
bool __thiscall FUN_00c84960(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = DAT_018b9174;
  if (param_2 == 0) {
    return false;
  }
  iVar2 = *(int *)(param_2 + 0x1c);
  if (*(int *)(param_2 + 0x18) == 2) {
    return false;
  }
  if (((iVar2 != *(int *)(param_1 + 0x6e4)) && (iVar2 != *(int *)(param_1 + 0x6e8))) &&
     (*(int *)(param_2 + 0x24) != *(int *)(param_1 + 0x6ec))) {
    iVar2 = FUN_00d45910(DAT_018b9174,iVar2);
    iVar3 = FUN_00d45910(uVar1,*(undefined4 *)(param_2 + 0x24));
    return iVar2 <= iVar3;
  }
  return true;
}

// 00C849F0  FUN_00c849f0  size=113  [between]
void __fastcall FUN_00c849f0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  float10 fVar4;
  undefined *puVar5;
  
  *(undefined4 *)(param_1 + 0x6fc) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x6f8) = 0xffffffff;
  piVar1 = (int *)FUN_00c13920();
  iVar2 = (**(code **)(*piVar1 + 0x28))(0xffffffff);
  if ((iVar2 != 0) && (piVar1 = (int *)FUN_00a7c8a0(), piVar1 != (int *)0x0)) {
    puVar5 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d80(puVar5);
    if (iVar2 != 0) {
      uVar3 = FUN_00b7c970();
      *(undefined4 *)(param_1 + 0x6f8) = uVar3;
      fVar4 = (float10)FUN_00bda020();
      *(float *)(param_1 + 0x6fc) = (float)fVar4;
    }
  }
  return;
}

// 00C84A70  FUN_00c84a70  size=96  [between]
void __fastcall FUN_00c84a70(undefined4 *param_1)

{
  int *piVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0x3f800000;
  piVar1 = (int *)param_1[0xe];
  param_1[10] = 0;
  param_1[8] = 0;
  param_1[0xd] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  if (piVar1 != (int *)0x0) {
    if ((*(byte *)(piVar1 + 0x132) & 2) == 0) {
      *(byte *)(piVar1 + 0x132) = *(byte *)(piVar1 + 0x132) | 2;
      (**(code **)(*piVar1 + 0x20))();
      (**(code **)(*piVar1 + 0xc))();
    }
    param_1[0xe] = 0;
  }
  return;
}

// 00C84B30  FUN_00c84b30  size=23  [between]
void __fastcall FUN_00c84b30(int param_1)

{
  if (*(int *)(param_1 + 4) == 4) {
    return;
  }
  if (*(int *)(param_1 + 8) == 0) {
    FUN_00c788d0();
    return;
  }
  FUN_00c789d0();
  return;
}

// 00C84CA0  Trigger::cCondTime::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondTime::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C84CC0  Trigger::cCondTime::vf1C  size=16  [class]
void __thiscall Trigger::cCondTime::vf1C(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  return;
}

// 00C84CD0  Trigger::cCondArea::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondArea::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C84CF0  FUN_00c84cf0  size=18  [between]
void __thiscall FUN_00c84cf0(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 8);
  return;
}

// 00C84D10  Trigger::cCondSequence::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondSequence::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C84D30  Trigger::cCondDisorderedSequence::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondDisorderedSequence::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C84D50  Trigger::cCondAnd::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondAnd::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C84D70  Trigger::cCondOr::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondOr::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C84D90  Trigger::cCondOnce::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondOnce::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C84DB0  Trigger::cCondAreaGroup::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondAreaGroup::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C84DD0  Trigger::cCondAreaEm::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondAreaEm::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C84DF0  Trigger::cCondIsDoorOpen::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondIsDoorOpen::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C84E10  Trigger::cCondBarrierEnd::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondBarrierEnd::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C84E30  Trigger::cCondPlayerEngGaugeFull::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondPlayerEngGaugeFull::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C84E50  Trigger::cCondPlayerEngGaugeFull::vf14  size=114  [class]
undefined4 Trigger::cCondPlayerEngGaugeFull::vf14(void)

{
  int *piVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  undefined *puVar5;
  
  piVar1 = (int *)FUN_00c13920();
  iVar2 = (**(code **)(*piVar1 + 0x28))(0xffffffff);
  if (iVar2 == 0) {
    return 0;
  }
  piVar1 = (int *)FUN_00a7c8a0();
  if (piVar1 != (int *)0x0) {
    puVar5 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d80(puVar5);
    if (iVar2 != 0) {
      fVar3 = (float10)FUN_00bc2f00(1);
      fVar4 = (float10)FUN_00bda020();
      if ((float10)(float)fVar3 == fVar4) {
        return 1;
      }
    }
  }
  return 0;
}

// 00C84ED0  Trigger::cCondStartAnimation::vf04  size=17  [class]
void Trigger::cCondStartAnimation::vf04(void)

{
  FUN_008609b0(0x10,PTR_DAT_018ab998);
  return;
}

// 00C84EF0  Trigger::cCondStartAnimation::vf14  size=173  [class]
undefined4 __fastcall Trigger::cCondStartAnimation::vf14(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 local_8 [8];
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    return 1;
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    return 0;
  }
  if (0 < *(int *)(param_1 + 0x24)) {
    iVar3 = 0;
    do {
      FUN_00a81330();
      iVar1 = FUN_00a7c890();
      if (iVar1 != 0) {
        FUN_00c83b60(local_8,&DAT_0165bfbc,*(undefined4 *)(param_1 + 0x14));
        iVar2 = FUN_00e33270(local_8);
        if (((iVar2 != -1) && ((*(uint *)(iVar1 + 0x94) & 1) != 0)) &&
           ((*(uint *)(iVar1 + 0x94) & 2) != 0)) {
          iVar1 = FUN_0085be10(iVar2);
          if (iVar1 == 0) {
            *(undefined4 *)(param_1 + 0x2c) = 1;
            return 1;
          }
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x24));
  }
  return 0;
}

// 00C84FA0  Trigger::cCondEndAnimation::vf04  size=17  [class]
void Trigger::cCondEndAnimation::vf04(void)

{
  FUN_00c82dd0(0x10,PTR_DAT_018ab998);
  return;
}

// 00C84FC0  Trigger::cCondEndAnimation::vf14  size=213  [class]
undefined4 __fastcall Trigger::cCondEndAnimation::vf14(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 local_8 [8];
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    return 1;
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    return 0;
  }
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x24)) {
    do {
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        iVar1 = FUN_00a7c890();
        if (iVar1 != 0) {
          FUN_00c83b60(local_8,&DAT_0165bfbc,*(undefined4 *)(param_1 + 0x14));
          iVar1 = FUN_00e33270(local_8);
          if (*(int *)(*(int *)(param_1 + 0x1c) + 4 + iVar2 * 8) == 0) {
            if (iVar1 != -1) {
              iVar1 = FUN_0085be10(iVar1);
              if (iVar1 == 0) {
                *(undefined4 *)(*(int *)(param_1 + 0x1c) + 4 + iVar2 * 8) = 1;
              }
            }
          }
          else {
            if (iVar1 == -1) {
LAB_00c85085:
              *(undefined4 *)(param_1 + 0x2c) = 1;
              return 1;
            }
            iVar1 = FUN_0085be10(iVar1);
            if (iVar1 != 0) goto LAB_00c85085;
          }
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x24));
  }
  return 0;
}

// 00C850A0  Trigger::cCondAreaOut::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondAreaOut::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C850C0  Trigger::cCondAreaGroupOut::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondAreaGroupOut::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C850E0  Trigger::cCondAreaEmOut::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondAreaEmOut::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C85100  Trigger::cCondEnemyFinishByNumber::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondEnemyFinishByNumber::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C85120  Trigger::cCondEnemyFinishByName::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondEnemyFinishByName::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C85140  Trigger::cCondEnemyFinishByName::vf14  size=203  [class]
undefined4 __fastcall Trigger::cCondEnemyFinishByName::vf14(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  if (*(char **)(param_1 + 0x10) == (char *)0x0) {
    FUN_00dd5650(&DAT_016ac454);
  }
  else if ((DAT_01bea060 & 0x400) == 0) {
    if (*(int *)(param_1 + 0x1c) == 0) {
      iVar1 = __stricmp("all",*(char **)(param_1 + 0x10));
      if (iVar1 == 0) {
        if (*(int *)(param_1 + 0x20) == 0) {
          uVar2 = FUN_00c18cc0(DAT_01d5bad4);
          *(undefined4 *)(param_1 + 0x20) = uVar2;
        }
        if (*(int *)(param_1 + 0x20) != 1) goto LAB_00c851d0;
        uVar2 = FUN_00c18bd0();
      }
      else {
        iVar1 = FUN_00c18c70(*(undefined4 *)(param_1 + 0x10));
        if (iVar1 != 1) goto LAB_00c851d0;
        uVar2 = FUN_00c18d80(*(undefined4 *)(param_1 + 0x10));
      }
      *(undefined4 *)(param_1 + 0x1c) = uVar2;
    }
LAB_00c851d0:
    if (*(int *)(param_1 + 0x1c) == 1) {
      if (*(float *)(param_1 + 0x18) < *(float *)(param_1 + 0x14) !=
          (*(float *)(param_1 + 0x18) == *(float *)(param_1 + 0x14))) {
        *(undefined4 *)(param_1 + 0x1c) = 0;
        return 1;
      }
      fVar3 = (float10)FUN_00e03a90(0);
      *(float *)(param_1 + 0x14) = (float)(fVar3 + (float10)*(float *)(param_1 + 0x14));
    }
    return 0;
  }
  return 0;
}

// 00C85210  Trigger::cCondEnemyCountByNumber::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondEnemyCountByNumber::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C85230  Trigger::cCondEnemyCountByName::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondEnemyCountByName::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C85250  Trigger::cCondEnemyCountByName::vf14  size=197  [class]
bool __fastcall Trigger::cCondEnemyCountByName::vf14(int param_1)

{
  int iVar1;
  
  if (*(char **)(param_1 + 0x18) == (char *)0x0) {
    FUN_00dd5650(&DAT_016ac478);
  }
  else {
    iVar1 = __stricmp("all",*(char **)(param_1 + 0x18));
    if (iVar1 == 0) {
      if (*(int *)(param_1 + 0x1c) == 0) {
        iVar1 = FUN_00c18cc0(DAT_01d5bad4);
        if (iVar1 == 0) {
          return false;
        }
        *(undefined4 *)(param_1 + 0x1c) = 1;
      }
      iVar1 = FUN_00c195b0();
    }
    else {
      iVar1 = FUN_00c18c70(*(undefined4 *)(param_1 + 0x18));
      if (iVar1 == 0) {
        return false;
      }
      iVar1 = FUN_00c19920(*(undefined4 *)(param_1 + 0x18));
    }
    switch(*(undefined4 *)(param_1 + 0x10)) {
    case 1:
      return iVar1 < *(int *)(param_1 + 0x14);
    case 2:
      return iVar1 <= *(int *)(param_1 + 0x14);
    case 3:
      return iVar1 == *(int *)(param_1 + 0x14);
    case 4:
      return *(int *)(param_1 + 0x14) < iVar1;
    case 5:
      return *(int *)(param_1 + 0x14) <= iVar1;
    }
  }
  return false;
}

// 00C85330  Trigger::cCondInCamera::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondInCamera::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C85350  Trigger::Cond::IN_CAM  size=122  [class]
undefined4 __fastcall Trigger::Cond::IN_CAM(int param_1)

{
  int iVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  iVar1 = FUN_00c78580(*(undefined4 *)(param_1 + 0x10),&local_20);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x30) = local_20;
    *(undefined4 *)(param_1 + 0x34) = local_1c;
    *(undefined4 *)(param_1 + 0x38) = local_18;
    *(undefined4 *)(param_1 + 0x3c) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x14) = 1;
    return 1;
  }
  FUN_00dd5650(&DAT_016ac4a8,*(undefined4 *)(param_1 + 0x10));
  return 0;
}

// 00C853D0  Trigger::cCondOutCamera::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondOutCamera::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C853F0  Trigger::Cond::OUT_CAM  size=122  [class]
undefined4 __fastcall Trigger::Cond::OUT_CAM(int param_1)

{
  int iVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  iVar1 = FUN_00c78580(*(undefined4 *)(param_1 + 0x10),&local_20);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x30) = local_20;
    *(undefined4 *)(param_1 + 0x34) = local_1c;
    *(undefined4 *)(param_1 + 0x38) = local_18;
    *(undefined4 *)(param_1 + 0x3c) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x14) = 1;
    return 1;
  }
  FUN_00dd5650(&DAT_016ac4e0,*(undefined4 *)(param_1 + 0x10));
  return 0;
}

// 00C85470  Trigger::cCondEnemyFinishHP0ByNumber::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondEnemyFinishHP0ByNumber::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C85490  Trigger::cCondEnemyFinishHP0ByName::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondEnemyFinishHP0ByName::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C854B0  Trigger::cCondEnemyFinishHP0ByName::vf14  size=203  [class]
undefined4 __fastcall Trigger::cCondEnemyFinishHP0ByName::vf14(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  if (*(char **)(param_1 + 0x10) == (char *)0x0) {
    FUN_00dd5650(&DAT_016ac518);
  }
  else if ((DAT_01bea060 & 0x400) == 0) {
    if (*(int *)(param_1 + 0x1c) == 0) {
      iVar1 = __stricmp("all",*(char **)(param_1 + 0x10));
      if (iVar1 == 0) {
        if (*(int *)(param_1 + 0x20) == 0) {
          uVar2 = FUN_00c18cc0(DAT_01d5bad4);
          *(undefined4 *)(param_1 + 0x20) = uVar2;
        }
        if (*(int *)(param_1 + 0x20) != 1) goto LAB_00c85540;
        uVar2 = FUN_00c18b90();
      }
      else {
        iVar1 = FUN_00c18c70(*(undefined4 *)(param_1 + 0x10));
        if (iVar1 != 1) goto LAB_00c85540;
        uVar2 = FUN_00c18e60(*(undefined4 *)(param_1 + 0x10));
      }
      *(undefined4 *)(param_1 + 0x1c) = uVar2;
    }
LAB_00c85540:
    if (*(int *)(param_1 + 0x1c) == 1) {
      if (*(float *)(param_1 + 0x18) < *(float *)(param_1 + 0x14) !=
          (*(float *)(param_1 + 0x18) == *(float *)(param_1 + 0x14))) {
        *(undefined4 *)(param_1 + 0x1c) = 0;
        return 1;
      }
      fVar3 = (float10)FUN_00e03a90(0);
      *(float *)(param_1 + 0x14) = (float)(fVar3 + (float10)*(float *)(param_1 + 0x14));
    }
    return 0;
  }
  return 0;
}

// 00C85580  Trigger::cCondEnemyCountHP0ByNumber::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondEnemyCountHP0ByNumber::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C855A0  Trigger::cCondEnemyCountHP0ByName::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondEnemyCountHP0ByName::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C855C0  Trigger::cCondEnemyCountHP0ByName::vf14  size=160  [class]
bool __fastcall Trigger::cCondEnemyCountHP0ByName::vf14(int param_1)

{
  int iVar1;
  
  if (*(char **)(param_1 + 0x18) == (char *)0x0) {
    FUN_00dd5650(&DAT_016ac540);
  }
  else {
    iVar1 = __stricmp("all",*(char **)(param_1 + 0x18));
    if (iVar1 == 0) {
      iVar1 = FUN_00c195e0();
    }
    else {
      iVar1 = FUN_00c18c70(*(undefined4 *)(param_1 + 0x18));
      if (iVar1 == 0) {
        return false;
      }
      iVar1 = FUN_00c19a00(*(undefined4 *)(param_1 + 0x18));
    }
    switch(*(undefined4 *)(param_1 + 0x10)) {
    case 1:
      return iVar1 < *(int *)(param_1 + 0x14);
    case 2:
      return iVar1 <= *(int *)(param_1 + 0x14);
    case 3:
      return iVar1 == *(int *)(param_1 + 0x14);
    case 4:
      return *(int *)(param_1 + 0x14) < iVar1;
    case 5:
      return *(int *)(param_1 + 0x14) <= iVar1;
    }
  }
  return false;
}

// 00C85680  Trigger::cCondFlag::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondFlag::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C856A0  Trigger::cCondFlag::vf14  size=34  [class]
bool __fastcall Trigger::cCondFlag::vf14(int param_1)

{
  return (0x80000000U >> ((byte)*(uint *)(param_1 + 0x10) & 0x1f) &
         *(uint *)(DAT_018abf38 + (*(uint *)(param_1 + 0x10) >> 5) * 4)) != 0;
}

// 00C856D0  Trigger::cCondIsSubstage::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondIsSubstage::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C856F0  Trigger::cCondPastSubstage::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondPastSubstage::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C85710  Trigger::cCondNowPastSubstage::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondNowPastSubstage::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C85730  Trigger::cCondPlayerHpGaugeFull::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondPlayerHpGaugeFull::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C85750  Trigger::cCondPlayerHpGaugeFull::vf14  size=101  [class]
undefined4 Trigger::cCondPlayerHpGaugeFull::vf14(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  
  piVar1 = (int *)FUN_00c13920();
  iVar2 = (**(code **)(*piVar1 + 0x28))(0xffffffff);
  if (iVar2 == 0) {
    return 0;
  }
  piVar1 = (int *)FUN_00a7c8a0();
  if (piVar1 != (int *)0x0) {
    puVar4 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d80(puVar4);
    if (iVar2 != 0) {
      iVar2 = FUN_00b7c980(1);
      iVar3 = FUN_00b7c970();
      if (iVar2 == iVar3) {
        return 1;
      }
    }
  }
  return 0;
}

// 00C857C0  Trigger::cCondEnemyNotSetByNumber::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondEnemyNotSetByNumber::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C857E0  Trigger::cCondEnemyNotSetByName::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondEnemyNotSetByName::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C85800  Trigger::cCondNotFlag::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondNotFlag::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C85820  Trigger::cCondNotFlag::vf14  size=33  [class]
bool __fastcall Trigger::cCondNotFlag::vf14(int param_1)

{
  return (0x80000000U >> ((byte)*(uint *)(param_1 + 0x10) & 0x1f) &
         *(uint *)(DAT_018abf38 + (*(uint *)(param_1 + 0x10) >> 5) * 4)) == 0;
}

// 00C85850  Trigger::cCondIsDoorClose::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondIsDoorClose::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C85870  Trigger::cCondPlayerHpGaugeState::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondPlayerHpGaugeState::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C85890  Trigger::cCondPlayerHpGaugeState::vf14  size=253  [class]
undefined4 __fastcall Trigger::cCondPlayerHpGaugeState::vf14(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  
  piVar1 = (int *)FUN_00c13920();
  iVar2 = (**(code **)(*piVar1 + 0x28))(0xffffffff);
  if (iVar2 == 0) {
    return 0;
  }
  piVar1 = (int *)FUN_00a7c8a0();
  if (piVar1 != (int *)0x0) {
    puVar4 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d80(puVar4);
    if (iVar2 != 0) {
      iVar2 = FUN_00e03ea0(&DAT_016ac580);
      if ((*(int *)(param_1 + 0x10) == iVar2) ||
         (iVar2 = FUN_00e03ea0(&DAT_016ac57c), *(int *)(param_1 + 0x10) == iVar2)) {
        iVar2 = FUN_00b7cb80();
        if ((iVar2 == 0) && (iVar2 = FUN_00b7cc20(), iVar2 == 0)) {
          return 1;
        }
        return 0;
      }
      iVar2 = FUN_00e03ea0(&DAT_01662d38);
      if ((*(int *)(param_1 + 0x10) != iVar2) &&
         (iVar2 = FUN_00e03ea0(&DAT_016ac578), *(int *)(param_1 + 0x10) != iVar2)) {
        iVar2 = FUN_00e03ea0(&DAT_0165933c);
        if ((*(int *)(param_1 + 0x10) != iVar2) &&
           (iVar2 = FUN_00e03ea0(&DAT_016ac574), *(int *)(param_1 + 0x10) != iVar2)) {
          return 0;
        }
        uVar3 = FUN_00b7cb80();
        return uVar3;
      }
      uVar3 = FUN_00b7cc20();
      return uVar3;
    }
  }
  return 0;
}

// 00C85990  Trigger::cCondChainBreak::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondChainBreak::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C859B0  Trigger::cCondPlayerDie::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondPlayerDie::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C859D0  Trigger::cCondPlayerDie::vf14  size=157  [class]
undefined4 __fastcall Trigger::cCondPlayerDie::vf14(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  
  piVar1 = (int *)FUN_00c13920();
  (**(code **)(*piVar1 + 0x28))(0);
  if (*(int *)(param_1 + 0x10) == 1) {
    piVar1 = (int *)FUN_00a7c8a0();
    if (piVar1 != (int *)0x0) {
      puVar4 = &DAT_01be9db8;
      (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
      FUN_00dd6d80(puVar4);
    }
    iVar2 = FUN_00b7c970();
    if (0 < iVar2) {
      return 0;
    }
  }
  else {
    piVar1 = (int *)FUN_00a7c8a0();
    if (piVar1 == (int *)0x0) {
      uVar3 = 0;
    }
    else {
      puVar4 = &DAT_01be9c24;
      (**(code **)(*piVar1 + 4))(&DAT_01be9c24);
      iVar2 = FUN_00dd6d80(puVar4);
      uVar3 = -(uint)(iVar2 != 0) & (uint)piVar1;
    }
    iVar2 = FUN_00a8eea0();
    if ((0 < iVar2) && (*(int *)(uVar3 + 0x4e4) != 1)) {
      return 0;
    }
  }
  return 1;
}

// 00C85A70  Trigger::cCondRoomEvent::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondRoomEvent::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C85A90  Trigger::cCondRoomEventEnd::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondRoomEventEnd::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C85AB0  Trigger::cCondBehaviorInstruction::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondBehaviorInstruction::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C85AD0  Trigger::cCondConversation::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondConversation::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C85AF0  Trigger::cCondResultFollowMove::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondResultFollowMove::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C85B10  Trigger::cCondIsLoadRoom::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondIsLoadRoom::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C85B30  Trigger::cCondHackStart::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondHackStart::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C85B50  Trigger::cCondPlayerEnergyGaugeState::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondPlayerEnergyGaugeState::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C85B70  Trigger::cCondPlayerEnergyGaugeState::vf14  size=221  [class]
undefined4 __fastcall Trigger::cCondPlayerEnergyGaugeState::vf14(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  
  piVar1 = (int *)FUN_00c13920();
  iVar2 = (**(code **)(*piVar1 + 0x28))(0xffffffff);
  if ((iVar2 != 0) && (piVar1 = (int *)FUN_00a7c8a0(), piVar1 != (int *)0x0)) {
    puVar4 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d80(puVar4);
    if (iVar2 != 0) {
      iVar2 = FUN_00e03ea0(&DAT_016ac580);
      if ((*(int *)(param_1 + 0x10) == iVar2) ||
         (iVar2 = FUN_00e03ea0(&DAT_016ac57c), *(int *)(param_1 + 0x10) == iVar2)) {
        uVar3 = FUN_00bda170();
        return uVar3;
      }
      iVar2 = FUN_00e03ea0(&DAT_01662d38);
      if ((*(int *)(param_1 + 0x10) == iVar2) ||
         (iVar2 = FUN_00e03ea0(&DAT_016ac578), *(int *)(param_1 + 0x10) == iVar2)) {
        uVar3 = FUN_00bc32b0();
        return uVar3;
      }
      iVar2 = FUN_00e03ea0(&DAT_0165933c);
      if ((*(int *)(param_1 + 0x10) == iVar2) ||
         (iVar2 = FUN_00e03ea0(&DAT_016ac574), *(int *)(param_1 + 0x10) == iVar2)) {
        uVar3 = FUN_00bda140();
        return uVar3;
      }
    }
  }
  return 0;
}

// 00C85C50  Trigger::cCondIsEndPlayMovie::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondIsEndPlayMovie::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C85C70  Trigger::cCondGimmick::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondGimmick::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C85C90  Trigger::cCondIsFileExist::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondIsFileExist::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C85CB0  Trigger::cCondIsNotFileExist::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondIsNotFileExist::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C85CD0  Trigger::cCondGameFlag::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondGameFlag::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C85CF0  Trigger::cCondNotGameFlag::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondNotGameFlag::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C85D10  Trigger::cCondCodecSeqEnd::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondCodecSeqEnd::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C85D30  Trigger::cCondEnemyEntityCountByNumber::vf00  size=31  [class]
undefined4 * __thiscall
Trigger::cCondEnemyEntityCountByNumber::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C85D50  Trigger::cCondEnemyEntityCountByName::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondEnemyEntityCountByName::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C85D70  Trigger::cCondEnemyEntityCountByName::vf14  size=197  [class]
bool __fastcall Trigger::cCondEnemyEntityCountByName::vf14(int param_1)

{
  int iVar1;
  
  if (*(char **)(param_1 + 0x18) == (char *)0x0) {
    FUN_00dd5650(&DAT_016ac584);
  }
  else {
    iVar1 = __stricmp("all",*(char **)(param_1 + 0x18));
    if (iVar1 == 0) {
      if (*(int *)(param_1 + 0x1c) == 0) {
        iVar1 = FUN_00c18cc0(DAT_01d5bad4);
        if (iVar1 == 0) {
          return false;
        }
        *(undefined4 *)(param_1 + 0x1c) = 1;
      }
      iVar1 = FUN_00c19550();
    }
    else {
      iVar1 = FUN_00c18c70(*(undefined4 *)(param_1 + 0x18));
      if (iVar1 == 0) {
        return false;
      }
      iVar1 = FUN_00c19760(*(undefined4 *)(param_1 + 0x18));
    }
    switch(*(undefined4 *)(param_1 + 0x10)) {
    case 1:
      return iVar1 < *(int *)(param_1 + 0x14);
    case 2:
      return iVar1 <= *(int *)(param_1 + 0x14);
    case 3:
      return iVar1 == *(int *)(param_1 + 0x14);
    case 4:
      return *(int *)(param_1 + 0x14) < iVar1;
    case 5:
      return *(int *)(param_1 + 0x14) <= iVar1;
    }
  }
  return false;
}

// 00C85E50  Trigger::cCondEnemyEntityCountHP0ByNumber::vf00  size=31  [class]
undefined4 * __thiscall
Trigger::cCondEnemyEntityCountHP0ByNumber::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C85E70  Trigger::cCondEnemyEntityCountHP0ByName::vf00  size=31  [class]
undefined4 * __thiscall
Trigger::cCondEnemyEntityCountHP0ByName::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C85E90  Trigger::cCondEnemyEntityCountHP0ByName::vf14  size=197  [class]
bool __fastcall Trigger::cCondEnemyEntityCountHP0ByName::vf14(int param_1)

{
  int iVar1;
  
  if (*(char **)(param_1 + 0x18) == (char *)0x0) {
    FUN_00dd5650(&DAT_016ac5bc);
  }
  else {
    iVar1 = __stricmp("all",*(char **)(param_1 + 0x18));
    if (iVar1 == 0) {
      if (*(int *)(param_1 + 0x1c) == 0) {
        iVar1 = FUN_00c18cc0(DAT_01d5bad4);
        if (iVar1 == 0) {
          return false;
        }
        *(undefined4 *)(param_1 + 0x1c) = 1;
      }
      iVar1 = FUN_00c19580();
    }
    else {
      iVar1 = FUN_00c18c70(*(undefined4 *)(param_1 + 0x18));
      if (iVar1 == 0) {
        return false;
      }
      iVar1 = FUN_00c19840(*(undefined4 *)(param_1 + 0x18));
    }
    switch(*(undefined4 *)(param_1 + 0x10)) {
    case 1:
      return iVar1 < *(int *)(param_1 + 0x14);
    case 2:
      return iVar1 <= *(int *)(param_1 + 0x14);
    case 3:
      return iVar1 == *(int *)(param_1 + 0x14);
    case 4:
      return *(int *)(param_1 + 0x14) < iVar1;
    case 5:
      return *(int *)(param_1 + 0x14) <= iVar1;
    }
  }
  return false;
}

// 00C85F70  Trigger::cCondRoomEventNotEnd::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondRoomEventNotEnd::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C85F90  Trigger::cCondEnemyGroupFinishByName::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondEnemyGroupFinishByName::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C85FB0  Trigger::cCondEnemyGroupFinishByName::vf14  size=173  [class]
bool __fastcall Trigger::cCondEnemyGroupFinishByName::vf14(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  
  if (*(char **)(param_1 + 0x10) == (char *)0x0) {
    FUN_00dd5650(&DAT_016ac5f8);
  }
  else if ((DAT_01bea060 & 0x400) == 0) {
    if (*(int *)(param_1 + 0x18) == 0) {
      iVar1 = __stricmp("all",*(char **)(param_1 + 0x10));
      if (iVar1 == 0) {
        if (*(int *)(param_1 + 0x1c) == 0) {
          uVar2 = FUN_00c18cc0(*(undefined4 *)(param_1 + 0x14));
          *(undefined4 *)(param_1 + 0x1c) = uVar2;
        }
        if (*(int *)(param_1 + 0x1c) != 1) goto LAB_00c86046;
        uVar2 = FUN_00c18cf0(*(undefined4 *)(param_1 + 0x14));
      }
      else {
        iVar1 = FUN_00c18c70(*(undefined4 *)(param_1 + 0x10));
        if (iVar1 != 1) goto LAB_00c86046;
        uVar2 = FUN_00c18d50(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x10));
      }
      *(undefined4 *)(param_1 + 0x18) = uVar2;
    }
LAB_00c86046:
    bVar3 = *(int *)(param_1 + 0x18) == 1;
    if (bVar3) {
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    return bVar3;
  }
  return false;
}

// 00C86060  Trigger::cCondEnemyGroupFinishByNumber::vf00  size=31  [class]
undefined4 * __thiscall
Trigger::cCondEnemyGroupFinishByNumber::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C86080  Trigger::cCondEnemyGroupFinishHP0ByName::vf00  size=31  [class]
undefined4 * __thiscall
Trigger::cCondEnemyGroupFinishHP0ByName::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C860A0  Trigger::cCondEnemyGroupFinishHP0ByName::vf14  size=179  [class]
bool __fastcall Trigger::cCondEnemyGroupFinishHP0ByName::vf14(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  
  if (*(char **)(param_1 + 0x10) == (char *)0x0) {
    FUN_00dd5650(&DAT_016ac620);
  }
  else if ((DAT_01bea060 & 0x400) == 0) {
    if (*(int *)(param_1 + 0x18) == 0) {
      iVar1 = __stricmp("all",*(char **)(param_1 + 0x10));
      if (iVar1 == 0) {
        if (*(int *)(param_1 + 0x1c) == 0) {
          uVar2 = FUN_00c18cc0(DAT_01d5bad4);
          *(undefined4 *)(param_1 + 0x1c) = uVar2;
        }
        if (*(int *)(param_1 + 0x1c) != 1) goto LAB_00c8613c;
        uVar2 = FUN_00c18dd0(*(undefined4 *)(param_1 + 0x14));
      }
      else {
        iVar1 = FUN_00c18c40(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x10));
        if (iVar1 != 1) goto LAB_00c8613c;
        uVar2 = FUN_00c18e30(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x10));
      }
      *(undefined4 *)(param_1 + 0x18) = uVar2;
    }
LAB_00c8613c:
    bVar3 = *(int *)(param_1 + 0x18) == 1;
    if (bVar3) {
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    return bVar3;
  }
  return false;
}

// 00C86160  Trigger::cCondEnemyGroupFinishHP0ByNumber::vf00  size=31  [class]
undefined4 * __thiscall
Trigger::cCondEnemyGroupFinishHP0ByNumber::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C86180  Trigger::cCondEnemyGroupNotSetByName::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondEnemyGroupNotSetByName::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C861A0  Trigger::cCondEnemyGroupNotSetByNumber::vf00  size=31  [class]
undefined4 * __thiscall
Trigger::cCondEnemyGroupNotSetByNumber::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C861C0  Trigger::cCondIsUIAnimEnd::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondIsUIAnimEnd::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C861E0  Trigger::cCondEnemyGroupCountByName::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondEnemyGroupCountByName::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C86200  Trigger::cCondEnemyGroupCountByNumber::vf00  size=31  [class]
undefined4 * __thiscall
Trigger::cCondEnemyGroupCountByNumber::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C86220  Trigger::cCondEnemyGroupCountHP0ByName::vf00  size=31  [class]
undefined4 * __thiscall
Trigger::cCondEnemyGroupCountHP0ByName::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C86240  Trigger::cCondEnemyGroupCountHP0ByNumber::vf00  size=31  [class]
undefined4 * __thiscall
Trigger::cCondEnemyGroupCountHP0ByNumber::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C86260  Trigger::cCondEnemyGroupEntityCountByName::vf00  size=31  [class]
undefined4 * __thiscall
Trigger::cCondEnemyGroupEntityCountByName::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C86280  Trigger::cCondEnemyGroupEntityCountByNumber::vf00  size=31  [class]
undefined4 * __thiscall
Trigger::cCondEnemyGroupEntityCountByNumber::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C862A0  Trigger::cCondEnemyGroupEntityCountHP0ByName::vf00  size=31  [class]
undefined4 * __thiscall
Trigger::cCondEnemyGroupEntityCountHP0ByName::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C862C0  Trigger::cCondEnemyGroupEntityCountHP0ByNumber::vf00  size=31  [class]
undefined4 * __thiscall
Trigger::cCondEnemyGroupEntityCountHP0ByNumber::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C862E0  Trigger::cCondEnemyFinishDebrisByName::vf00  size=31  [class]
undefined4 * __thiscall
Trigger::cCondEnemyFinishDebrisByName::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C86300  Trigger::cCondEnemyFinishDebrisByName::vf14  size=203  [class]
undefined4 __fastcall Trigger::cCondEnemyFinishDebrisByName::vf14(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  if (*(char **)(param_1 + 0x10) == (char *)0x0) {
    FUN_00dd5650(&DAT_016ac454);
  }
  else if ((DAT_01bea060 & 0x400) == 0) {
    if (*(int *)(param_1 + 0x1c) == 0) {
      iVar1 = __stricmp("all",*(char **)(param_1 + 0x10));
      if (iVar1 == 0) {
        if (*(int *)(param_1 + 0x20) == 0) {
          uVar2 = FUN_00c18cc0(DAT_01d5bad4);
          *(undefined4 *)(param_1 + 0x20) = uVar2;
        }
        if (*(int *)(param_1 + 0x20) != 1) goto LAB_00c86390;
        uVar2 = FUN_00c19020();
      }
      else {
        iVar1 = FUN_00c18c70(*(undefined4 *)(param_1 + 0x10));
        if (iVar1 != 1) goto LAB_00c86390;
        uVar2 = FUN_00c18fd0(*(undefined4 *)(param_1 + 0x10));
      }
      *(undefined4 *)(param_1 + 0x1c) = uVar2;
    }
LAB_00c86390:
    if (*(int *)(param_1 + 0x1c) == 1) {
      if (*(float *)(param_1 + 0x18) < *(float *)(param_1 + 0x14) !=
          (*(float *)(param_1 + 0x18) == *(float *)(param_1 + 0x14))) {
        *(undefined4 *)(param_1 + 0x1c) = 0;
        return 1;
      }
      fVar3 = (float10)FUN_00e03a90(0);
      *(float *)(param_1 + 0x14) = (float)(fVar3 + (float10)*(float *)(param_1 + 0x14));
    }
    return 0;
  }
  return 0;
}

// 00C863D0  Trigger::cCondEnemyFinishDebrisByNumber::vf00  size=31  [class]
undefined4 * __thiscall
Trigger::cCondEnemyFinishDebrisByNumber::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C863F0  Trigger::cCondEnemyGroupFinishDebrisByName::vf00  size=31  [class]
undefined4 * __thiscall
Trigger::cCondEnemyGroupFinishDebrisByName::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C86410  Trigger::cCondEnemyGroupFinishDebrisByName::vf14  size=173  [class]
bool __fastcall Trigger::cCondEnemyGroupFinishDebrisByName::vf14(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  
  if (*(char **)(param_1 + 0x10) == (char *)0x0) {
    FUN_00dd5650(&DAT_016ac5f8);
  }
  else if ((DAT_01bea060 & 0x400) == 0) {
    if (*(int *)(param_1 + 0x18) == 0) {
      iVar1 = __stricmp("all",*(char **)(param_1 + 0x10));
      if (iVar1 == 0) {
        if (*(int *)(param_1 + 0x1c) == 0) {
          uVar2 = FUN_00c18cc0(*(undefined4 *)(param_1 + 0x14));
          *(undefined4 *)(param_1 + 0x1c) = uVar2;
        }
        if (*(int *)(param_1 + 0x1c) != 1) goto LAB_00c864a6;
        uVar2 = FUN_00c18f40(*(undefined4 *)(param_1 + 0x14));
      }
      else {
        iVar1 = FUN_00c18c70(*(undefined4 *)(param_1 + 0x10));
        if (iVar1 != 1) goto LAB_00c864a6;
        uVar2 = FUN_00c18fa0(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x10));
      }
      *(undefined4 *)(param_1 + 0x18) = uVar2;
    }
LAB_00c864a6:
    bVar3 = *(int *)(param_1 + 0x18) == 1;
    if (bVar3) {
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    return bVar3;
  }
  return false;
}

// 00C864C0  Trigger::cCondEnemyGroupFinishDebrisByNumber::vf00  size=31  [class]
undefined4 * __thiscall
Trigger::cCondEnemyGroupFinishDebrisByNumber::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C864E0  Trigger::cCondIsScrMeshOn::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondIsScrMeshOn::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C86500  Trigger::cCondIsScrMeshOff::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondIsScrMeshOff::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C86520  Trigger::cCondStaFlag::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondStaFlag::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C86540  Trigger::cCondNotStaFlag::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondNotStaFlag::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C86560  Trigger::cCondStpFlag::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondStpFlag::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C86580  Trigger::cCondNotStpFlag::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondNotStpFlag::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C865A0  Trigger::cCondIsScrCollisionOn::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondIsScrCollisionOn::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C865C0  Trigger::cCondHasItem::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondHasItem::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C865E0  Trigger::cCondHasNotItem::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondHasNotItem::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C86600  Trigger::cCondIsNowBattle::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondIsNowBattle::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C86620  Trigger::cCondResultEnd::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondResultEnd::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C86640  Trigger::cCondHostageSaved::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondHostageSaved::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C86660  Trigger::cCondLineInfraredHit::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondLineInfraredHit::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C86680  Trigger::cCondIsBattleAreaOn::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondIsBattleAreaOn::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C866A0  Trigger::cCondIsAnimPlay::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondIsAnimPlay::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C866C0  Trigger::cCondTimeSta::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondTimeSta::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C866E0  Trigger::cCondEnemyFinishCompByNumber::vf00  size=31  [class]
undefined4 * __thiscall
Trigger::cCondEnemyFinishCompByNumber::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C86700  Trigger::cCondEnemyFinishCompByName::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondEnemyFinishCompByName::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C86720  Trigger::cCondEnemyFinishCompByName::vf14  size=196  [class]
undefined4 __fastcall Trigger::cCondEnemyFinishCompByName::vf14(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  if (*(char **)(param_1 + 0x10) == (char *)0x0) {
    FUN_00dd5650(&DAT_016ac454);
  }
  else if ((DAT_01bea060 & 0x400) == 0) {
    if (*(int *)(param_1 + 0x1c) == 0) {
      iVar1 = __stricmp("all",*(char **)(param_1 + 0x10));
      if (iVar1 == 0) {
        if (*(int *)(param_1 + 0x20) == 0) {
          uVar2 = FUN_00c18cc0(DAT_01d5bad4);
          *(undefined4 *)(param_1 + 0x20) = uVar2;
        }
        if (*(int *)(param_1 + 0x20) == 1) {
          *(undefined4 *)(param_1 + 0x1c) = 0;
        }
      }
      else {
        iVar1 = FUN_00c18c70(*(undefined4 *)(param_1 + 0x10));
        if (iVar1 == 1) {
          uVar2 = FUN_00c190c0(*(undefined4 *)(param_1 + 0x10));
          *(undefined4 *)(param_1 + 0x1c) = uVar2;
        }
      }
    }
    if (*(int *)(param_1 + 0x1c) == 1) {
      if (*(float *)(param_1 + 0x18) < *(float *)(param_1 + 0x14) !=
          (*(float *)(param_1 + 0x18) == *(float *)(param_1 + 0x14))) {
        *(undefined4 *)(param_1 + 0x1c) = 0;
        return 1;
      }
      fVar3 = (float10)FUN_00e03a90(0);
      *(float *)(param_1 + 0x14) = (float)(fVar3 + (float10)*(float *)(param_1 + 0x14));
    }
    return 0;
  }
  return 0;
}

// 00C867F0  Trigger::cCondEnemyFinishHPCompByNumber::vf00  size=31  [class]
undefined4 * __thiscall
Trigger::cCondEnemyFinishHPCompByNumber::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C86810  Trigger::cCondEnemyFinishHPCompByName::vf00  size=31  [class]
undefined4 * __thiscall
Trigger::cCondEnemyFinishHPCompByName::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C86830  Trigger::cCondEnemyFinishHPCompByName::vf14  size=196  [class]
undefined4 __fastcall Trigger::cCondEnemyFinishHPCompByName::vf14(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  if (*(char **)(param_1 + 0x10) == (char *)0x0) {
    FUN_00dd5650(&DAT_016ac518);
  }
  else if ((DAT_01bea060 & 0x400) == 0) {
    if (*(int *)(param_1 + 0x1c) == 0) {
      iVar1 = __stricmp("all",*(char **)(param_1 + 0x10));
      if (iVar1 == 0) {
        if (*(int *)(param_1 + 0x20) == 0) {
          uVar2 = FUN_00c18cc0(DAT_01d5bad4);
          *(undefined4 *)(param_1 + 0x20) = uVar2;
        }
        if (*(int *)(param_1 + 0x20) == 1) {
          *(undefined4 *)(param_1 + 0x1c) = 0;
        }
      }
      else {
        iVar1 = FUN_00c18c70(*(undefined4 *)(param_1 + 0x10));
        if (iVar1 == 1) {
          uVar2 = FUN_00c19140(*(undefined4 *)(param_1 + 0x10));
          *(undefined4 *)(param_1 + 0x1c) = uVar2;
        }
      }
    }
    if (*(int *)(param_1 + 0x1c) == 1) {
      if (*(float *)(param_1 + 0x18) < *(float *)(param_1 + 0x14) !=
          (*(float *)(param_1 + 0x18) == *(float *)(param_1 + 0x14))) {
        *(undefined4 *)(param_1 + 0x1c) = 0;
        return 1;
      }
      fVar3 = (float10)FUN_00e03a90(0);
      *(float *)(param_1 + 0x14) = (float)(fVar3 + (float10)*(float *)(param_1 + 0x14));
    }
    return 0;
  }
  return 0;
}

// 00C86900  Trigger::cCondEnemyFinishDebrisCompByNumber::vf00  size=31  [class]
undefined4 * __thiscall
Trigger::cCondEnemyFinishDebrisCompByNumber::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C86920  Trigger::cCondEnemyFinishDebrisCompByName::vf00  size=31  [class]
undefined4 * __thiscall
Trigger::cCondEnemyFinishDebrisCompByName::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C86940  Trigger::cCondEnemyFinishDebrisCompByName::vf14  size=196  [class]
undefined4 __fastcall Trigger::cCondEnemyFinishDebrisCompByName::vf14(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  if (*(char **)(param_1 + 0x10) == (char *)0x0) {
    FUN_00dd5650(&DAT_016ac454);
  }
  else if ((DAT_01bea060 & 0x400) == 0) {
    if (*(int *)(param_1 + 0x1c) == 0) {
      iVar1 = __stricmp("all",*(char **)(param_1 + 0x10));
      if (iVar1 == 0) {
        if (*(int *)(param_1 + 0x20) == 0) {
          uVar2 = FUN_00c18cc0(DAT_01d5bad4);
          *(undefined4 *)(param_1 + 0x20) = uVar2;
        }
        if (*(int *)(param_1 + 0x20) == 1) {
          *(undefined4 *)(param_1 + 0x1c) = 0;
        }
      }
      else {
        iVar1 = FUN_00c18c70(*(undefined4 *)(param_1 + 0x10));
        if (iVar1 == 1) {
          uVar2 = FUN_00c191c0(*(undefined4 *)(param_1 + 0x10));
          *(undefined4 *)(param_1 + 0x1c) = uVar2;
        }
      }
    }
    if (*(int *)(param_1 + 0x1c) == 1) {
      if (*(float *)(param_1 + 0x18) < *(float *)(param_1 + 0x14) !=
          (*(float *)(param_1 + 0x18) == *(float *)(param_1 + 0x14))) {
        *(undefined4 *)(param_1 + 0x1c) = 0;
        return 1;
      }
      fVar3 = (float10)FUN_00e03a90(0);
      *(float *)(param_1 + 0x14) = (float)(fVar3 + (float10)*(float *)(param_1 + 0x14));
    }
    return 0;
  }
  return 0;
}

// 00C86A10  Trigger::cCondIsEndAntiqueScroll::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondIsEndAntiqueScroll::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C86A30  Trigger::cCondIsNowVRMission::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondIsNowVRMission::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C86A50  Trigger::cCondVrEnemyGroupFinishByNumber::vf00  size=31  [class]
undefined4 * __thiscall
Trigger::cCondVrEnemyGroupFinishByNumber::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C86A70  Trigger::cCondIsCodec::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondIsCodec::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C86A90  Trigger::cCondIsAnyCodec::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondIsAnyCodec::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C86AB0  Trigger::cCondResetSequence::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondResetSequence::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C86AD0  Trigger::cCondIsDifficulty::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondIsDifficulty::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C86AF0  Trigger::cCondIsZangeki::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondIsZangeki::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C86B10  Trigger::cCondIsZangeki::vf14  size=108  [class]
undefined4 Trigger::cCondIsZangeki::vf14(void)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  
  piVar1 = (int *)FUN_00c13920();
  iVar2 = (**(code **)(*piVar1 + 0x28))(0xffffffff);
  if (iVar2 == 0) {
    return 0;
  }
  piVar1 = (int *)FUN_00a7c8a0();
  if (piVar1 != (int *)0x0) {
    puVar3 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d80(puVar3);
    if (iVar2 != 0) {
      iVar2 = (**(code **)(*piVar1 + 0x32c))();
      if ((iVar2 == 1) || ((DAT_01bea060 & 0x400) != 0)) {
        return 1;
      }
    }
  }
  return 0;
}

// 00C86B80  Trigger::cCondIsFade::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondIsFade::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C86BA0  Trigger::cCondIsFadeEnd::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondIsFadeEnd::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C86BC0  Trigger::cCondIsRipperMode::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondIsRipperMode::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C86BE0  Trigger::cCondIsRipperMode::vf14  size=76  [class]
undefined4 Trigger::cCondIsRipperMode::vf14(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  
  piVar1 = (int *)FUN_00c13920();
  iVar2 = (**(code **)(*piVar1 + 0x28))(0xffffffff);
  if ((iVar2 != 0) && (piVar1 = (int *)FUN_00a7c8a0(), piVar1 != (int *)0x0)) {
    puVar4 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d80(puVar4);
    if (iVar2 != 0) {
      uVar3 = FUN_00b7cda0();
      return uVar3;
    }
  }
  return 0;
}

// 00C86C30  Trigger::cCondGenericFlag::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondGenericFlag::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C86C50  Trigger::cCondEnemyGroupIsCautionLevelByNumber::vf00  size=31  [class]
undefined4 * __thiscall
Trigger::cCondEnemyGroupIsCautionLevelByNumber::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C86C70  Trigger::cCondEnemyIsCautionLevelByNumber::vf00  size=31  [class]
undefined4 * __thiscall
Trigger::cCondEnemyIsCautionLevelByNumber::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C86C90  Trigger::cCondScenarioArea::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondScenarioArea::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C86CB0  FUN_00c86cb0  size=18  [between]
void __thiscall FUN_00c86cb0(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 8);
  return;
}

// 00C86CD0  Trigger::cCondScenarioAreaGroup::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondScenarioAreaGroup::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C86CF0  Trigger::cCondScenarioAreaEm::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondScenarioAreaEm::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C86D10  Trigger::cCondScenarioAreaOut::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondScenarioAreaOut::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C86D30  Trigger::cCondScenarioAreaGroupOut::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondScenarioAreaGroupOut::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C86D50  Trigger::cCondScenarioAreaEmOut::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondScenarioAreaEmOut::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C86D70  Trigger::cCondAreaPlCam::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondAreaPlCam::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C86D90  Trigger::cCondAreaPlCamOut::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondAreaPlCamOut::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C86DB0  Trigger::cCondKgkArea::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondKgkArea::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C86DD0  Trigger::cCondKgkArea::vf14  size=177  [class]
undefined4 __fastcall Trigger::cCondKgkArea::vf14(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  
  if (((DAT_01dbd1d0 == 0) || ((DAT_01bea060 & 8) != 0)) || ((DAT_01bea060 & 0x2000400) == 0)) {
    piVar2 = (int *)FUN_00c13920();
    iVar3 = (**(code **)(*piVar2 + 0x28))(1);
    if (iVar3 != 0) {
      piVar2 = (int *)FUN_00a7c8a0();
      if (piVar2 != (int *)0x0) {
        puVar5 = &DAT_01b35420;
        (**(code **)(*piVar2 + 4))(&DAT_01b35420);
        iVar3 = FUN_00dd6d80(puVar5);
        if (iVar3 != 0) {
          iVar3 = FUN_00a8eea0();
          if (0 < iVar3) {
            uVar1 = *(undefined4 *)(param_1 + 0x10);
            piVar2 = (int *)FUN_00a6e640();
            iVar3 = (**(code **)(*piVar2 + 0x24))(uVar1,1,1);
            piVar2 = (int *)FUN_00a6e640();
            iVar4 = (**(code **)(*piVar2 + 0x24))(uVar1,1,2);
            if ((iVar3 != 0) || (iVar4 != 0)) {
              *(undefined4 *)(param_1 + 0x14) = DAT_01be8e58;
              return 1;
            }
          }
        }
      }
      return 0;
    }
  }
  return 0;
}

// 00C86E90  FUN_00c86e90  size=16  [between]
void __thiscall FUN_00c86e90(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  return;
}

// 00C86EA0  Trigger::cCondFlagDlc2::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondFlagDlc2::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C86EC0  Trigger::cCondFlagDlc2::vf14  size=34  [class]
bool __fastcall Trigger::cCondFlagDlc2::vf14(int param_1)

{
  return (0x80000000U >> ((byte)*(uint *)(param_1 + 0x10) & 0x1f) &
         *(uint *)(DAT_018abf68 + (*(uint *)(param_1 + 0x10) >> 5) * 4)) != 0;
}

// 00C86EF0  Trigger::cCondNotFlagDlc2::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondNotFlagDlc2::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C86F10  Trigger::cCondNotFlagDlc2::vf14  size=33  [class]
bool __fastcall Trigger::cCondNotFlagDlc2::vf14(int param_1)

{
  return (0x80000000U >> ((byte)*(uint *)(param_1 + 0x10) & 0x1f) &
         *(uint *)(DAT_018abf68 + (*(uint *)(param_1 + 0x10) >> 5) * 4)) == 0;
}

// 00C86F40  Trigger::cCondFlagDlc3::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondFlagDlc3::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C86F60  Trigger::cCondFlagDlc3::vf14  size=34  [class]
bool __fastcall Trigger::cCondFlagDlc3::vf14(int param_1)

{
  return (0x80000000U >> ((byte)*(uint *)(param_1 + 0x10) & 0x1f) &
         *(uint *)(DAT_018abf98 + (*(uint *)(param_1 + 0x10) >> 5) * 4)) != 0;
}

// 00C86F90  Trigger::cCondNotFlagDlc3::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondNotFlagDlc3::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C86FB0  Trigger::cCondNotFlagDlc3::vf14  size=33  [class]
bool __fastcall Trigger::cCondNotFlagDlc3::vf14(int param_1)

{
  return (0x80000000U >> ((byte)*(uint *)(param_1 + 0x10) & 0x1f) &
         *(uint *)(DAT_018abf98 + (*(uint *)(param_1 + 0x10) >> 5) * 4)) == 0;
}

// 00C87200  Trigger::Act::CAM_FOCUS  size=207  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall Trigger::Act::CAM_FOCUS(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016ac670);
    return 0;
  }
  iVar2 = FUN_00c78580(*(undefined4 *)(iVar1 + 8),&local_20);
  if (iVar2 == 0) {
    FUN_00dd5650(&DAT_016ac64c,*(undefined4 *)(iVar1 + 8));
    return 0;
  }
  _DAT_01dbd870 = _DAT_01dbd870 | 4;
  _DAT_01dbd898 = 0;
  _DAT_01dbd880 = local_20;
  _DAT_01dbd884 = local_1c;
  _DAT_01dbd888 = local_18;
  _DAT_01dbd88c = 0x3f800000;
  _DAT_01dbd890 = *(float *)(iVar1 + 0x10) * -1.0;
  _DAT_01dbd894 = *(float *)(iVar1 + 0xc) * -1.0;
  return 1;
}

// 00C87380  Trigger::Act::FlagOn  size=106  [class]
undefined4 __fastcall Trigger::Act::FlagOn(int param_1)

{
  uint *puVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016ac69c);
    return 0;
  }
  uVar2 = *(uint *)(*(int *)(param_1 + 4) + 8);
  if (DAT_018abf58 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_018abf40);
    puVar1 = (uint *)(DAT_018abf38 + (uVar2 >> 5) * 4);
    *puVar1 = *puVar1 | 0x80000000U >> ((byte)uVar2 & 0x1f);
    if (DAT_018abf58 != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_018abf40);
    }
  }
  return 1;
}

// 00C87400  Trigger::Act::FlagOff  size=108  [class]
undefined4 __fastcall Trigger::Act::FlagOff(int param_1)

{
  uint *puVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016ac6c8);
    return 0;
  }
  uVar2 = *(uint *)(*(int *)(param_1 + 4) + 8);
  if (DAT_018abf58 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_018abf40);
    puVar1 = (uint *)(DAT_018abf38 + (uVar2 >> 5) * 4);
    *puVar1 = *puVar1 & ~(0x80000000U >> ((byte)uVar2 & 0x1f));
    if (DAT_018abf58 != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_018abf40);
    }
  }
  return 1;
}

// 00C874C0  Trigger::Act::ENM_MSG  size=169  [class]
undefined4 __fastcall Trigger::Act::ENM_MSG(int param_1)

{
  int iVar1;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
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
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016ac6f4);
    return 0;
  }
  local_30 = *(undefined4 *)(param_1 + 8);
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0xffffffff;
  local_4 = 0xffffffff;
  local_40 = 0xfffffffe;
  local_3c = 0;
  local_2c = 0;
  local_34 = 0x1010000;
  local_48 = *(undefined4 *)(iVar1 + 0x28);
  local_44 = *(undefined4 *)(iVar1 + 0x2c);
  local_38 = *(undefined4 *)(iVar1 + 0x30);
  FUN_00c5e350(0,&local_54,&local_30);
  return 1;
}

// 00C87590  Trigger::Act::ENM_MSG_2  size=144  [class]
undefined4 __fastcall Trigger::Act::ENM_MSG_2(int param_1)

{
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
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
  
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016ac6f4);
    return 0;
  }
  local_4c = 0xffffffff;
  local_10 = 0;
  local_48 = 0xffffffff;
  local_c = 0;
  local_44 = 0xffffffff;
  local_8 = 0;
  local_38 = 0xffffffff;
  local_54 = 0;
  local_3c = *(undefined4 *)(param_1 + 0xc);
  local_50 = 0;
  local_30 = *(undefined4 *)(param_1 + 8);
  local_4 = *(undefined4 *)(param_1 + 0x10);
  local_40 = 0xfffffffe;
  local_2c = 0;
  local_34 = 0x1010000;
  FUN_00c5e350(0,&local_54,&local_30);
  return 1;
}

// 00C876C0  Trigger::Act::PLAYER_DIE  size=114  [class]
undefined4 __fastcall Trigger::Act::PLAYER_DIE(int param_1)

{
  int *piVar1;
  undefined *puVar2;
  
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016ac720);
    return 0;
  }
  piVar1 = (int *)FUN_00c13920();
  (**(code **)(*piVar1 + 0x28))(0);
  piVar1 = (int *)FUN_00a7c8a0();
  if (piVar1 == (int *)0x0) {
    FUN_00a8ee20(0);
    return 1;
  }
  puVar2 = &DAT_01be9c24;
  (**(code **)(*piVar1 + 4))(&DAT_01be9c24);
  FUN_00dd6d80(puVar2);
  FUN_00a8ee20(0);
  return 1;
}

// 00C87830  Trigger::Act::PL_ANIM  size=703  [class]
bool __fastcall Trigger::Act::PL_ANIM(int param_1)

{
  uint uVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  char *pcVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char *pcVar11;
  bool bVar12;
  undefined4 uStack_34;
  int local_2c;
  uint local_28;
  char acStack_24 [36];
  
  uVar1 = *(uint *)(param_1 + 4);
  local_2c = param_1;
  local_28 = uVar1;
  if (uVar1 == 0) {
    FUN_00dd5650(&DAT_016ac878);
    return false;
  }
  if (uVar1 == 0xfffffff8) {
    FUN_00dd5650(&DAT_016ac850);
    return false;
  }
  pcVar11 = (char *)(uVar1 + 0x18);
  if (pcVar11 == (char *)0x0) {
    FUN_00dd5650(&DAT_016ac824);
    return false;
  }
  piVar3 = (int *)FUN_00c13920();
  iVar4 = (**(code **)(*piVar3 + 0x28))(0);
  if (iVar4 != 0) {
    iVar5 = FUN_00a7c8a0();
    iVar5 = *(int *)(iVar5 + 0x4b0);
    iVar6 = FUN_009fde60(uStack_34);
    if (iVar5 == iVar6) {
      piVar7 = (int *)FUN_00dd3500(0x10,&DAT_01b7bd48);
      piVar3 = (int *)0x0;
      if (piVar7 != (int *)0x0) {
        piVar7[1] = 0;
        piVar7[2] = 0;
        piVar7[3] = 0;
        *piVar7 = (int)cTriggerTask_PlAnim::vftable;
        piVar3 = piVar7;
      }
      (**(code **)(*piVar3 + 4))();
      FUN_00c83e90(iVar4);
      piVar3[1] = *(int *)(*(int *)(uVar1 + 0xc) + 4);
      cVar2 = FUN_00c84760(piVar3);
      if (cVar2 == '\0') {
        (**(code **)*piVar3)(1);
      }
      if (cVar2 != '\0') {
        if (*(int *)(local_2c + 4) == 0x51) {
          local_2c = 0;
          local_28 = local_28 & 0xffffff00;
          cVar2 = *pcVar11;
          pcVar8 = pcVar11;
          while (cVar2 != '_') {
            pcVar8 = pcVar8 + 1;
            cVar2 = *pcVar8;
          }
          _strncpy_s((char *)&local_2c,5,pcVar8 + 1,4);
          acStack_24[0] = '\0';
          acStack_24[1] = '\0';
          acStack_24[2] = '\0';
          acStack_24[3] = '\0';
          acStack_24[4] = '\0';
          acStack_24[5] = '\0';
          acStack_24[6] = '\0';
          acStack_24[7] = '\0';
          acStack_24[8] = '\0';
          acStack_24[9] = '\0';
          acStack_24[10] = '\0';
          acStack_24[0xb] = '\0';
          acStack_24[0xc] = '\0';
          acStack_24[0xd] = '\0';
          acStack_24[0xe] = '\0';
          acStack_24[0xf] = '\0';
          acStack_24[0x10] = '\0';
          acStack_24[0x11] = '\0';
          acStack_24[0x12] = '\0';
          acStack_24[0x13] = '\0';
          acStack_24[0x14] = '\0';
          acStack_24[0x15] = '\0';
          acStack_24[0x16] = '\0';
          acStack_24[0x17] = '\0';
          acStack_24[0x18] = '\0';
          acStack_24[0x19] = '\0';
          acStack_24[0x1a] = '\0';
          acStack_24[0x1b] = '\0';
          acStack_24[0x1c] = '\0';
          acStack_24[0x1d] = '\0';
          acStack_24[0x1e] = '\0';
          acStack_24[0x1f] = '\0';
          _sprintf_s(acStack_24,0x20,"%s.mot",pcVar11);
          uVar9 = FUN_00de4500(acStack_24);
          acStack_24[0] = '\0';
          acStack_24[1] = '\0';
          acStack_24[2] = '\0';
          acStack_24[3] = '\0';
          acStack_24[4] = '\0';
          acStack_24[5] = '\0';
          acStack_24[6] = '\0';
          acStack_24[7] = '\0';
          acStack_24[8] = '\0';
          acStack_24[9] = '\0';
          acStack_24[10] = '\0';
          acStack_24[0xb] = '\0';
          acStack_24[0xc] = '\0';
          acStack_24[0xd] = '\0';
          acStack_24[0xe] = '\0';
          acStack_24[0xf] = '\0';
          acStack_24[0x10] = '\0';
          acStack_24[0x11] = '\0';
          acStack_24[0x12] = '\0';
          acStack_24[0x13] = '\0';
          acStack_24[0x14] = '\0';
          acStack_24[0x15] = '\0';
          acStack_24[0x16] = '\0';
          acStack_24[0x17] = '\0';
          acStack_24[0x18] = '\0';
          acStack_24[0x19] = '\0';
          acStack_24[0x1a] = '\0';
          acStack_24[0x1b] = '\0';
          acStack_24[0x1c] = '\0';
          acStack_24[0x1d] = '\0';
          acStack_24[0x1e] = '\0';
          acStack_24[0x1f] = '\0';
          _sprintf_s(acStack_24,0x20,"%s_0_seq.bxm",pcVar11);
          uVar10 = FUN_00de4500(acStack_24);
          FUN_00bc2600(uVar9,uVar10,0,0,0x3f800000,0,0xbf800000,0x3f800000,&local_2c);
          FUN_00a96070(0,0x8000000,1);
          return true;
        }
        if (*(int *)(local_2c + 4) != 0x4d) {
          return cVar2 != '\0';
        }
        iVar4 = FUN_00aa4940(pcVar11,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
        bVar12 = iVar4 != -1;
      }
      else {
        FUN_00dd5650(&DAT_016ac798);
        bVar12 = false;
      }
      if (bVar12 != false) {
        return bVar12;
      }
    }
    FUN_00dd5650(&DAT_016ac750,uStack_34,pcVar11);
    return false;
  }
  FUN_00dd5650(&DAT_016ac7e0,0);
  return false;
}

// 00C87C40  Trigger::Act::STP_OBJECT_TYPE  size=114  [class]
undefined4 __fastcall Trigger::Act::STP_OBJECT_TYPE(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    switch(*(undefined4 *)(*(int *)(param_1 + 4) + 8)) {
    case 0:
      DAT_01bea070 = DAT_01bea070 | 0x80000000;
      return 1;
    case 1:
      DAT_01bea070 = DAT_01bea070 | 0x40000000;
      return 1;
    case 2:
      DAT_01bea070 = DAT_01bea070 | 0x20000000;
      return 1;
    case 3:
      DAT_01bea070 = DAT_01bea070 | 0x60000000;
      uVar1 = 1;
    }
    return uVar1;
  }
  FUN_00dd5650(&DAT_016ac8a4);
  return 0;
}

// 00C87CE0  Trigger::Act::MV_OBJECT_TYPE  size=114  [class]
undefined4 __fastcall Trigger::Act::MV_OBJECT_TYPE(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    switch(*(undefined4 *)(*(int *)(param_1 + 4) + 8)) {
    case 0:
      DAT_01bea070 = DAT_01bea070 & 0x7fffffff;
      return 1;
    case 1:
      DAT_01bea070 = DAT_01bea070 & 0xbfffffff;
      return 1;
    case 2:
      DAT_01bea070 = DAT_01bea070 & 0xdfffffff;
      return 1;
    case 3:
      DAT_01bea070 = DAT_01bea070 & 0x9fffffff;
      uVar1 = 1;
    }
    return uVar1;
  }
  FUN_00dd5650(&DAT_016ac8d8);
  return 0;
}

// 00C87D80  Trigger::Act::GAME_FLAG_ON  size=95  [class]
undefined4 __fastcall Trigger::Act::GAME_FLAG_ON(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016ac90c);
    return 0;
  }
  if (-1 < *(int *)(param_1 + 8)) {
    (&DAT_01bea090)[*(uint *)(&DAT_018ab9ac + *(int *)(param_1 + 8) * 8) >> 5] =
         (&DAT_01bea090)[*(uint *)(&DAT_018ab9ac + *(int *)(param_1 + 8) * 8) >> 5] |
         0x80000000U >> ((byte)*(uint *)(&DAT_018ab9ac + *(int *)(param_1 + 8) * 8) & 0x1f);
    return 1;
  }
  FUN_00dd5650(&DAT_016ab358);
  return 0;
}

// 00C87DF0  Trigger::Act::GAME_FLAG_OFF  size=97  [class]
undefined4 __fastcall Trigger::Act::GAME_FLAG_OFF(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016ac96c);
    return 0;
  }
  if (-1 < *(int *)(param_1 + 8)) {
    (&DAT_01bea090)[*(uint *)(&DAT_018ab9ac + *(int *)(param_1 + 8) * 8) >> 5] =
         (&DAT_01bea090)[*(uint *)(&DAT_018ab9ac + *(int *)(param_1 + 8) * 8) >> 5] &
         ~(0x80000000U >> ((byte)*(uint *)(&DAT_018ab9ac + *(int *)(param_1 + 8) * 8) & 0x1f));
    return 1;
  }
  FUN_00dd5650(&DAT_016ac93c);
  return 0;
}

// 00C87EA0  Trigger::Act::OBJ_ATTACH_2  size=27  [class]
undefined4 __fastcall Trigger::Act::OBJ_ATTACH_2(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 == 0) {
    FUN_00dd5650(&DAT_016ab124);
    return 0;
  }
  iVar1 = iVar2 + 8;
  if (iVar1 != 0) {
    iVar3 = FUN_009fde60(iVar1);
    if (iVar3 == -1) {
      uVar4 = FUN_00e03ea0(iVar1);
      iVar3 = FUN_00a18cf0(uVar4);
      if (iVar3 == 0) goto LAB_00c87f5c;
      iVar5 = FUN_00a7c8a0();
      uVar4 = *(undefined4 *)(iVar5 + 0x4b0);
      iVar5 = FUN_009f9480(uVar4);
      if (iVar5 == 0) {
        iVar5 = FUN_009f9460(uVar4);
        if (iVar5 == 0) goto LAB_00c87f1a;
      }
    }
    else {
      iVar5 = FUN_009f9480(iVar3);
      if (iVar5 == 0) {
        iVar5 = FUN_009f9460(iVar3);
        if (iVar5 == 0) {
LAB_00c87f1a:
          FUN_00dd5650(&DAT_016ac9e0,iVar1);
          return 0;
        }
      }
      iVar3 = FUN_00a7f600(iVar3);
    }
    if (iVar3 != 0) {
      FUN_00a7c8a0();
      if (*(int *)(iVar2 + 0x18) == 1) {
        FUN_00a8f8a0();
        return 1;
      }
      FUN_00a8f920();
      return 1;
    }
  }
LAB_00c87f5c:
  FUN_00dd5650(&DAT_016ac99c,iVar1);
  return 0;
}

// 00C87EBB  Trigger::Act::OBJ_MESH_TRANS  size=233  [class]
undefined4 Trigger::Act::OBJ_MESH_TRANS(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int unaff_EBP;
  
  iVar1 = unaff_EBP + 8;
  if (iVar1 != 0) {
    iVar2 = FUN_009fde60(iVar1);
    if (iVar2 == -1) {
      uVar3 = FUN_00e03ea0(iVar1);
      iVar2 = FUN_00a18cf0(uVar3);
      if (iVar2 == 0) goto LAB_00c87f5c;
      iVar4 = FUN_00a7c8a0();
      uVar3 = *(undefined4 *)(iVar4 + 0x4b0);
      iVar4 = FUN_009f9480(uVar3);
      if (iVar4 == 0) {
        iVar4 = FUN_009f9460(uVar3);
        if (iVar4 == 0) goto LAB_00c87f1a;
      }
    }
    else {
      iVar4 = FUN_009f9480(iVar2);
      if (iVar4 == 0) {
        iVar4 = FUN_009f9460(iVar2);
        if (iVar4 == 0) {
LAB_00c87f1a:
          FUN_00dd5650(&DAT_016ac9e0,iVar1);
          return 0;
        }
      }
      iVar2 = FUN_00a7f600(iVar2);
    }
    if (iVar2 != 0) {
      FUN_00a7c8a0();
      if (*(int *)(unaff_EBP + 0x18) == 1) {
        FUN_00a8f8a0();
        return 1;
      }
      FUN_00a8f920();
      return 1;
    }
  }
LAB_00c87f5c:
  FUN_00dd5650(&DAT_016ac99c,iVar1);
  return 0;
}

// 00C87FD0  Trigger::cActPlayerEffectOff::vf18  size=157  [class]
undefined4 __fastcall Trigger::cActPlayerEffectOff::vf18(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016ab388);
  }
  else {
    piVar2 = (int *)FUN_00c13920();
    iVar3 = (**(code **)(*piVar2 + 0x28))(0xffffffff);
    if (iVar3 != 0) {
      FUN_00a7c8a0();
      switch(*(undefined4 *)(iVar1 + 8)) {
      case 0:
      case 1:
        DAT_01dc08d4 = 0;
        return 1;
      case 2:
      case 3:
        DAT_01dc08bc = 0;
        return 1;
      case 4:
      case 5:
        DAT_01dc08c8 = 0;
        return 1;
      case 6:
      case 7:
      case 8:
      case 9:
      case 10:
      case 0xb:
        return 1;
      case 0xc:
        DAT_01dc08bc = 0;
        DAT_01dc08c8 = 0;
        DAT_01dc08d4 = 0;
        return 1;
      default:
        FUN_00dd5650(&DAT_016ab358);
        return 0;
      }
    }
  }
  return 0;
}

// 00C88160  Trigger::Act::STP_FLAG_OFF  size=97  [class]
undefined4 __fastcall Trigger::Act::STP_FLAG_OFF(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016aca5c);
    return 0;
  }
  if (-1 < *(int *)(param_1 + 8)) {
    (&DAT_01bea070)[*(uint *)(&DAT_018abc24 + *(int *)(param_1 + 8) * 8) >> 5] =
         (&DAT_01bea070)[*(uint *)(&DAT_018abc24 + *(int *)(param_1 + 8) * 8) >> 5] &
         ~(0x80000000U >> ((byte)*(uint *)(&DAT_018abc24 + *(int *)(param_1 + 8) * 8) & 0x1f));
    return 1;
  }
  FUN_00dd5650(&DAT_016aca2c);
  return 0;
}

// 00C881E0  Trigger::Act::STP_FLAG_ON  size=95  [class]
undefined4 __fastcall Trigger::Act::STP_FLAG_ON(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016acabc);
    return 0;
  }
  if (-1 < *(int *)(param_1 + 8)) {
    (&DAT_01bea070)[*(uint *)(&DAT_018abc24 + *(int *)(param_1 + 8) * 8) >> 5] =
         (&DAT_01bea070)[*(uint *)(&DAT_018abc24 + *(int *)(param_1 + 8) * 8) >> 5] |
         0x80000000U >> ((byte)*(uint *)(&DAT_018abc24 + *(int *)(param_1 + 8) * 8) & 0x1f);
    return 1;
  }
  FUN_00dd5650(&DAT_016aca8c);
  return 0;
}

// 00C88350  Trigger::Act::ENM_MSG_3  size=189  [class]
undefined4 __fastcall Trigger::Act::ENM_MSG_3(int param_1)

{
  int iVar1;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
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
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016ac6f4);
    return 0;
  }
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_4c = 0xffffffff;
  local_38 = 0xffffffff;
  local_3c = 0;
  local_2c = 0;
  local_48 = *(undefined4 *)(iVar1 + 0x28);
  local_44 = *(undefined4 *)(iVar1 + 0x2c);
  local_40 = *(undefined4 *)(iVar1 + 0x30);
  local_54 = 0;
  local_30 = *(undefined4 *)(param_1 + 8);
  local_50 = 0;
  local_4 = *(undefined4 *)(param_1 + 0xc);
  local_34 = 0x1010000;
  FUN_00c5e350(0,&local_54,&local_30);
  return 1;
}

// 00C88640  Trigger::Act::PL_MAX_HP  size=115  [class]
undefined4 __fastcall Trigger::Act::PL_MAX_HP(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  
  if (*(int *)(param_1 + 4) != 0) {
    uVar3 = 0;
    piVar1 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar1 + 0x28))(0xffffffff);
    if ((iVar2 != 0) && (piVar1 = (int *)FUN_00a7c8a0(), piVar1 != (int *)0x0)) {
      puVar4 = &DAT_01be9db8;
      (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
      iVar2 = FUN_00dd6d80(puVar4);
      if (iVar2 != 0) {
        uVar3 = FUN_00b7c980(1);
        FUN_00b7c9c0(uVar3);
        uVar3 = 1;
      }
    }
    return uVar3;
  }
  FUN_00dd5650(&DAT_016acaec);
  return 0;
}

// 00C886D0  Trigger::Act::PL_MAX_DRY_CELL  size=119  [class]
undefined4 __fastcall Trigger::Act::PL_MAX_DRY_CELL(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  float10 fVar4;
  undefined *puVar5;
  
  if (*(int *)(param_1 + 4) != 0) {
    uVar3 = 0;
    piVar1 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar1 + 0x28))(0xffffffff);
    if ((iVar2 != 0) && (piVar1 = (int *)FUN_00a7c8a0(), piVar1 != (int *)0x0)) {
      puVar5 = &DAT_01be9db8;
      (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
      iVar2 = FUN_00dd6d80(puVar5);
      if (iVar2 != 0) {
        fVar4 = (float10)FUN_00bc2f00(1);
        FUN_00bda060((float)fVar4,0);
        uVar3 = 1;
      }
    }
    return uVar3;
  }
  FUN_00dd5650(&DAT_016acb18);
  return 0;
}

// 00C887A0  Trigger::Act::CAM_FOCUS_LOCK  size=297  [class]
undefined4 __fastcall Trigger::Act::CAM_FOCUS_LOCK(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined *puVar4;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 auStack_24 [4];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016acb98);
    return 0;
  }
  iVar2 = FUN_00c78580(*(undefined4 *)(iVar1 + 8),&local_30);
  if (iVar2 == 0) {
    FUN_00dd5650(&DAT_016acb70,*(undefined4 *)(iVar1 + 8));
    return 0;
  }
  local_20 = local_30;
  local_1c = local_2c;
  local_18 = local_28;
  local_14 = 0x3f800000;
  piVar3 = (int *)FUN_00c13920();
  iVar2 = (**(code **)(*piVar3 + 0x28))(0xffffffff);
  if (iVar2 != 0) {
    piVar3 = (int *)FUN_00a7c8a0();
    if (piVar3 != (int *)0x0) {
      puVar4 = &DAT_01be9db8;
      (**(code **)(*piVar3 + 4))(&DAT_01be9db8);
      iVar2 = FUN_00dd6d80(puVar4);
      if (iVar2 != 0) {
        DAT_01bea070 = DAT_01bea070 | 0x20000;
        FUN_00b7ec60();
        FUN_00c783e0(auStack_24,*(float *)(iVar1 + 0x10) * -1.0,*(float *)(iVar1 + 0xc) * -1.0);
        return 1;
      }
    }
  }
  FUN_00dd5650(&DAT_016acb4c);
  return 0;
}

// 00C888E0  Trigger::Act::CAM_FOCUS_LOCK_OFF  size=52  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall Trigger::Act::CAM_FOCUS_LOCK_OFF(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016acbcc);
    return 0;
  }
  DAT_01bea070 = DAT_01bea070 & 0xfffdffff;
  _DAT_01dbd898 = 0x78;
  return 1;
}

// 00C88950  Trigger::cActPlKgkStop::vf18  size=102  [class]
undefined4 Trigger::cActPlKgkStop::vf18(void)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  
  if ((DAT_01bea094 & 0x20000) != 0) {
    piVar1 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar1 + 0x28))(1);
    if (iVar2 != 0) {
      piVar1 = (int *)FUN_00a7c8a0();
      if (piVar1 != (int *)0x0) {
        puVar3 = &DAT_01b35420;
        (**(code **)(*piVar1 + 4))(&DAT_01b35420);
        iVar2 = FUN_00dd6d80(puVar3);
        if (iVar2 != 0) {
          FUN_005f5060();
          return 1;
        }
      }
      return 0;
    }
  }
  return 0;
}

// 00C889D0  Trigger::Act::VR_LIFT_ON  size=216  [class]
undefined4 __fastcall Trigger::Act::VR_LIFT_ON(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined *puVar7;
  
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    FUN_00dd5650(&DAT_016acc04);
    return 0;
  }
  uVar5 = 0;
  iVar1 = FUN_00d467a0();
  if ((iVar1 == 0) || (DAT_018b9174 != 0xd30)) {
    uVar6 = 0xd6000;
    uVar2 = FUN_00e03ea0(iVar3 + 8,0xd6000);
    iVar3 = FUN_00a18d70(uVar2,uVar6);
    if (iVar3 != 0) {
      piVar4 = (int *)FUN_00a7c8a0();
      if (piVar4 != (int *)0x0) {
        puVar7 = &DAT_01b354e8;
        (**(code **)(*piVar4 + 4))(&DAT_01b354e8);
        iVar3 = FUN_00dd6d80(puVar7);
        if (iVar3 != 0) {
          FUN_00603ef0();
          uVar5 = 1;
        }
      }
    }
  }
  else {
    uVar6 = 0xf5040;
    uVar2 = FUN_00e03ea0(iVar3 + 8,0xf5040);
    iVar3 = FUN_00a18d70(uVar2,uVar6);
    if (iVar3 != 0) {
      uVar2 = FUN_00a7c8a0();
      iVar3 = FUN_00c83bb0(uVar2);
      if (iVar3 != 0) {
        FUN_00603d90();
        return 1;
      }
    }
  }
  return uVar5;
}

// 00C88AC0  Trigger::Act::VR_LIFT_OFF  size=216  [class]
undefined4 __fastcall Trigger::Act::VR_LIFT_OFF(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined *puVar7;
  
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    FUN_00dd5650(&DAT_016acc34);
    return 0;
  }
  uVar5 = 0;
  iVar1 = FUN_00d467a0();
  if ((iVar1 == 0) || (DAT_018b9174 != 0xd30)) {
    uVar6 = 0xd6000;
    uVar2 = FUN_00e03ea0(iVar3 + 8,0xd6000);
    iVar3 = FUN_00a18d70(uVar2,uVar6);
    if (iVar3 != 0) {
      piVar4 = (int *)FUN_00a7c8a0();
      if (piVar4 != (int *)0x0) {
        puVar7 = &DAT_01b354e8;
        (**(code **)(*piVar4 + 4))(&DAT_01b354e8);
        iVar3 = FUN_00dd6d80(puVar7);
        if (iVar3 != 0) {
          FUN_00603f10();
          uVar5 = 1;
        }
      }
    }
  }
  else {
    uVar6 = 0xf5040;
    uVar2 = FUN_00e03ea0(iVar3 + 8,0xf5040);
    iVar3 = FUN_00a18d70(uVar2,uVar6);
    if (iVar3 != 0) {
      uVar2 = FUN_00a7c8a0();
      iVar3 = FUN_00c83bb0(uVar2);
      if (iVar3 != 0) {
        FUN_00603dc0();
        return 1;
      }
    }
  }
  return uVar5;
}

// 00C88BD0  Trigger::Act::FLAG_ON_DLC2  size=106  [class]
undefined4 __fastcall Trigger::Act::FLAG_ON_DLC2(int param_1)

{
  uint *puVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016acc64);
    return 0;
  }
  uVar2 = *(uint *)(*(int *)(param_1 + 4) + 8);
  if (DAT_018abf88 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_018abf70);
    puVar1 = (uint *)(DAT_018abf68 + (uVar2 >> 5) * 4);
    *puVar1 = *puVar1 | 0x80000000U >> ((byte)uVar2 & 0x1f);
    if (DAT_018abf88 != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_018abf70);
    }
  }
  return 1;
}

// 00C88C50  Trigger::Act::FLAG_OFF_DLC2  size=108  [class]
undefined4 __fastcall Trigger::Act::FLAG_OFF_DLC2(int param_1)

{
  uint *puVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016acc94);
    return 0;
  }
  uVar2 = *(uint *)(*(int *)(param_1 + 4) + 8);
  if (DAT_018abf88 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_018abf70);
    puVar1 = (uint *)(DAT_018abf68 + (uVar2 >> 5) * 4);
    *puVar1 = *puVar1 & ~(0x80000000U >> ((byte)uVar2 & 0x1f));
    if (DAT_018abf88 != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_018abf70);
    }
  }
  return 1;
}

// 00C88CD0  Trigger::Act::FLAG_ON_DLC3  size=106  [class]
undefined4 __fastcall Trigger::Act::FLAG_ON_DLC3(int param_1)

{
  uint *puVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016accc4);
    return 0;
  }
  uVar2 = *(uint *)(*(int *)(param_1 + 4) + 8);
  if (DAT_018abfb8 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_018abfa0);
    puVar1 = (uint *)(DAT_018abf98 + (uVar2 >> 5) * 4);
    *puVar1 = *puVar1 | 0x80000000U >> ((byte)uVar2 & 0x1f);
    if (DAT_018abfb8 != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_018abfa0);
    }
  }
  return 1;
}

// 00C88D50  Trigger::Act::FLAG_OFF_DLC2_2  size=108  [class]
undefined4 __fastcall Trigger::Act::FLAG_OFF_DLC2_2(int param_1)

{
  uint *puVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016acc94);
    return 0;
  }
  uVar2 = *(uint *)(*(int *)(param_1 + 4) + 8);
  if (DAT_018abfb8 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_018abfa0);
    puVar1 = (uint *)(DAT_018abf98 + (uVar2 >> 5) * 4);
    *puVar1 = *puVar1 & ~(0x80000000U >> ((byte)uVar2 & 0x1f));
    if (DAT_018abfb8 != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_018abfa0);
    }
  }
  return 1;
}

// 00C89000  Trigger::cAction<Trigger::cActCamera>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActCamera>::vf00(void)

{
  return &DAT_01dbe5d0;
}

// 00C89010  Trigger::cActCamera::vf08  size=1  [class]
void Trigger::cActCamera::vf08(void)

{
  return;
}

// 00C89020  Trigger::cActCamera::vf0C  size=1  [class]
void Trigger::cActCamera::vf0C(void)

{
  return;
}

// 00C89030  Trigger::cActCamera::vf10  size=1  [class]
void Trigger::cActCamera::vf10(void)

{
  return;
}

// 00C89040  Trigger::cActCamera::vf14  size=1  [class]
void Trigger::cActCamera::vf14(void)

{
  return;
}

// 00C89050  Trigger::cAction<Trigger::cActCamera>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActCamera>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C89060  Trigger::cAction<Trigger::cActCamera>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActCamera>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C89070  Trigger::cAction<Trigger::cActCamera>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActCamera>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C890A0  Trigger::cAction<Trigger::cActSubphase>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActSubphase>::vf00(void)

{
  return &DAT_01dbe5cc;
}

// 00C890B0  Trigger::cActSubphase::vf08  size=1  [class]
void Trigger::cActSubphase::vf08(void)

{
  return;
}

// 00C890C0  Trigger::cActSubphase::vf0C  size=1  [class]
void Trigger::cActSubphase::vf0C(void)

{
  return;
}

// 00C890D0  Trigger::cActSubphase::vf10  size=1  [class]
void Trigger::cActSubphase::vf10(void)

{
  return;
}

// 00C890E0  Trigger::cActSubphase::vf14  size=1  [class]
void Trigger::cActSubphase::vf14(void)

{
  return;
}

// 00C890F0  Trigger::cAction<Trigger::cActSubphase>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActSubphase>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C89100  Trigger::cAction<Trigger::cActSubphase>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActSubphase>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C89110  Trigger::cAction<Trigger::cActSubphase>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActSubphase>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C89140  Trigger::cAction<Trigger::cActTeleportExplicit>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActTeleportExplicit>::vf00(void)

{
  return &DAT_01dbe5c8;
}

// 00C89150  Trigger::cActTeleportExplicit::vf08  size=1  [class]
void Trigger::cActTeleportExplicit::vf08(void)

{
  return;
}

// 00C89160  Trigger::cActTeleportExplicit::vf0C  size=1  [class]
void Trigger::cActTeleportExplicit::vf0C(void)

{
  return;
}

// 00C89170  Trigger::cActTeleportExplicit::vf10  size=1  [class]
void Trigger::cActTeleportExplicit::vf10(void)

{
  return;
}

// 00C89180  Trigger::cActTeleportExplicit::vf14  size=1  [class]
void Trigger::cActTeleportExplicit::vf14(void)

{
  return;
}

// 00C89190  Trigger::cAction<Trigger::cActTeleportExplicit>::vf1C  size=10  [class]
void __thiscall
Trigger::cAction<Trigger::cActTeleportExplicit>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C891A0  Trigger::cAction<Trigger::cActTeleportExplicit>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActTeleportExplicit>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C891B0  Trigger::cAction<Trigger::cActTeleportExplicit>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActTeleportExplicit>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C891E0  Trigger::cAction<Trigger::cActTeleportIndex>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActTeleportIndex>::vf00(void)

{
  return &DAT_01dbe5c4;
}

// 00C891F0  Trigger::cActTeleportIndex::vf08  size=1  [class]
void Trigger::cActTeleportIndex::vf08(void)

{
  return;
}

// 00C89200  Trigger::cActTeleportIndex::vf0C  size=1  [class]
void Trigger::cActTeleportIndex::vf0C(void)

{
  return;
}

// 00C89210  Trigger::cActTeleportIndex::vf10  size=1  [class]
void Trigger::cActTeleportIndex::vf10(void)

{
  return;
}

// 00C89220  Trigger::cActTeleportIndex::vf14  size=1  [class]
void Trigger::cActTeleportIndex::vf14(void)

{
  return;
}

// 00C89230  Trigger::cAction<Trigger::cActTeleportIndex>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActTeleportIndex>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C89240  Trigger::cAction<Trigger::cActTeleportIndex>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActTeleportIndex>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C89250  Trigger::cAction<Trigger::cActTeleportIndex>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActTeleportIndex>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C89280  Trigger::cAction<Trigger::cActDoorOpen>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActDoorOpen>::vf00(void)

{
  return &DAT_01dbe5c0;
}

// 00C89290  Trigger::cActDoorOpen::vf08  size=1  [class]
void Trigger::cActDoorOpen::vf08(void)

{
  return;
}

// 00C892A0  Trigger::cActDoorOpen::vf0C  size=1  [class]
void Trigger::cActDoorOpen::vf0C(void)

{
  return;
}

// 00C892B0  Trigger::cActDoorOpen::vf10  size=1  [class]
void Trigger::cActDoorOpen::vf10(void)

{
  return;
}

// 00C892C0  Trigger::cActDoorOpen::vf14  size=1  [class]
void Trigger::cActDoorOpen::vf14(void)

{
  return;
}

// 00C892D0  Trigger::cAction<Trigger::cActDoorOpen>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActDoorOpen>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C892E0  Trigger::cAction<Trigger::cActDoorOpen>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActDoorOpen>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C892F0  Trigger::cAction<Trigger::cActDoorOpen>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActDoorOpen>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C89320  Trigger::cActStaFlagOn::vf00  size=6  [class]
undefined * Trigger::cActStaFlagOn::vf00(void)

{
  return &DAT_01dbe5bc;
}

// 00C89330  Trigger::cAction<Trigger::cActStaFlagOn>::vf08  size=1  [class]
void Trigger::cAction<Trigger::cActStaFlagOn>::vf08(void)

{
  return;
}

// 00C89340  Trigger::cActStaFlagOn::vf0C  size=1  [class]
void Trigger::cActStaFlagOn::vf0C(void)

{
  return;
}

// 00C89350  Trigger::cActStaFlagOn::vf10  size=1  [class]
void Trigger::cActStaFlagOn::vf10(void)

{
  return;
}

// 00C89360  Trigger::cActStaFlagOn::vf14  size=1  [class]
void Trigger::cActStaFlagOn::vf14(void)

{
  return;
}

// 00C89370  Trigger::cAction<Trigger::cActStaFlagOn>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActStaFlagOn>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C89380  Trigger::cAction<Trigger::cActStaFlagOn>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActStaFlagOn>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C89390  Trigger::cAction<Trigger::cActStaFlagOn>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActStaFlagOn>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C893C0  Trigger::cAction<Trigger::cActCamOff>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActCamOff>::vf00(void)

{
  return &DAT_01dbe5b8;
}

// 00C893D0  Trigger::cActCamOff::vf08  size=1  [class]
void Trigger::cActCamOff::vf08(void)

{
  return;
}

// 00C893E0  Trigger::cActCamOff::vf0C  size=1  [class]
void Trigger::cActCamOff::vf0C(void)

{
  return;
}

// 00C893F0  Trigger::cActCamOff::vf10  size=1  [class]
void Trigger::cActCamOff::vf10(void)

{
  return;
}

// 00C89400  Trigger::cActCamOff::vf14  size=1  [class]
void Trigger::cActCamOff::vf14(void)

{
  return;
}

// 00C89410  Trigger::cAction<Trigger::cActCamOff>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActCamOff>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C89420  Trigger::cAction<Trigger::cActCamOff>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActCamOff>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C89430  Trigger::cAction<Trigger::cActCamOff>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActCamOff>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C89460  Trigger::cAction<Trigger::cActVerseStart>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActVerseStart>::vf00(void)

{
  return &DAT_01dbe5b4;
}

// 00C89470  Trigger::cAction<Trigger::cActVerseStart>::vf08  size=1  [class]
void Trigger::cAction<Trigger::cActVerseStart>::vf08(void)

{
  return;
}

// 00C89480  Trigger::cAction<Trigger::cActVerseStart>::vf0C  size=1  [class]
void Trigger::cAction<Trigger::cActVerseStart>::vf0C(void)

{
  return;
}

// 00C89490  Trigger::cAction<Trigger::cActVerseStart>::vf10  size=1  [class]
void Trigger::cAction<Trigger::cActVerseStart>::vf10(void)

{
  return;
}

// 00C894A0  Trigger::cAction<Trigger::cActVerseStart>::vf14  size=1  [class]
void Trigger::cAction<Trigger::cActVerseStart>::vf14(void)

{
  return;
}

// 00C894B0  Trigger::cAction<Trigger::cActVerseStart>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActVerseStart>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C894C0  Trigger::cAction<Trigger::cActVerseStart>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActVerseStart>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C894D0  Trigger::cAction<Trigger::cActVerseStart>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActVerseStart>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C89500  Trigger::cAction<Trigger::cActVerseEnd>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActVerseEnd>::vf00(void)

{
  return &DAT_01dbe5b0;
}

// 00C89510  Trigger::cAction<Trigger::cActVerseEnd>::vf08  size=1  [class]
void Trigger::cAction<Trigger::cActVerseEnd>::vf08(void)

{
  return;
}

// 00C89520  Trigger::cAction<Trigger::cActVerseEnd>::vf0C  size=1  [class]
void Trigger::cAction<Trigger::cActVerseEnd>::vf0C(void)

{
  return;
}

// 00C89530  Trigger::cAction<Trigger::cActVerseEnd>::vf10  size=1  [class]
void Trigger::cAction<Trigger::cActVerseEnd>::vf10(void)

{
  return;
}

// 00C89540  Trigger::cAction<Trigger::cActVerseEnd>::vf14  size=1  [class]
void Trigger::cAction<Trigger::cActVerseEnd>::vf14(void)

{
  return;
}

// 00C89550  Trigger::cAction<Trigger::cActVerseEnd>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActVerseEnd>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C89560  Trigger::cAction<Trigger::cActVerseEnd>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActVerseEnd>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C89570  Trigger::cAction<Trigger::cActVerseEnd>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActVerseEnd>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C895A0  Trigger::cAction<Trigger::cActSoftEvent>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActSoftEvent>::vf00(void)

{
  return &DAT_01dbe5ac;
}

// 00C895B0  Trigger::cActSoftEvent::vf08  size=1  [class]
void Trigger::cActSoftEvent::vf08(void)

{
  return;
}

// 00C895C0  Trigger::cActSoftEvent::vf0C  size=1  [class]
void Trigger::cActSoftEvent::vf0C(void)

{
  return;
}

// 00C895D0  Trigger::cActSoftEvent::vf10  size=1  [class]
void Trigger::cActSoftEvent::vf10(void)

{
  return;
}

// 00C895E0  Trigger::cActSoftEvent::vf14  size=1  [class]
void Trigger::cActSoftEvent::vf14(void)

{
  return;
}

// 00C895F0  Trigger::cAction<Trigger::cActSoftEvent>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActSoftEvent>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C89600  Trigger::cAction<Trigger::cActSoftEvent>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActSoftEvent>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C89610  Trigger::cAction<Trigger::cActSoftEvent>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActSoftEvent>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C89640  Trigger::cAction<Trigger::cActPhase>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActPhase>::vf00(void)

{
  return &DAT_01dbe5a8;
}

// 00C89650  Trigger::cActPhase::vf08  size=1  [class]
void Trigger::cActPhase::vf08(void)

{
  return;
}

// 00C89660  Trigger::cActPhase::vf0C  size=1  [class]
void Trigger::cActPhase::vf0C(void)

{
  return;
}

// 00C89670  Trigger::cActPhase::vf10  size=1  [class]
void Trigger::cActPhase::vf10(void)

{
  return;
}

// 00C89680  Trigger::cActPhase::vf14  size=1  [class]
void Trigger::cActPhase::vf14(void)

{
  return;
}

// 00C89690  Trigger::cAction<Trigger::cActPhase>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActPhase>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C896A0  Trigger::cAction<Trigger::cActPhase>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActPhase>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C896B0  Trigger::cAction<Trigger::cActPhase>::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cAction<Trigger::cActPhase>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C896E0  Trigger::cAction<Trigger::cActEnemy>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActEnemy>::vf00(void)

{
  return &DAT_01dbe5a4;
}

// 00C896F0  Trigger::cActEnemyByName::vf08  size=1  [class]
void Trigger::cActEnemyByName::vf08(void)

{
  return;
}

// 00C89700  Trigger::cActEnemyByName::vf0C  size=1  [class]
void Trigger::cActEnemyByName::vf0C(void)

{
  return;
}

// 00C89710  Trigger::cActEnemyByName::vf10  size=1  [class]
void Trigger::cActEnemyByName::vf10(void)

{
  return;
}

// 00C89720  Trigger::cActEnemyByName::vf14  size=1  [class]
void Trigger::cActEnemyByName::vf14(void)

{
  return;
}

// 00C89730  Trigger::cAction<Trigger::cActEnemy>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActEnemy>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C89740  Trigger::cAction<Trigger::cActEnemy>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActEnemy>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C89750  Trigger::cAction<Trigger::cActEnemy>::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cAction<Trigger::cActEnemy>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C89780  Trigger::cAction<Trigger::cActEnemyRetreatByName>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActEnemyRetreatByName>::vf00(void)

{
  return &DAT_01dbe5a0;
}

// 00C89790  Trigger::cActEnemyRetreatByName::vf08  size=1  [class]
void Trigger::cActEnemyRetreatByName::vf08(void)

{
  return;
}

// 00C897A0  Trigger::cActEnemyRetreatByName::vf0C  size=1  [class]
void Trigger::cActEnemyRetreatByName::vf0C(void)

{
  return;
}

// 00C897B0  Trigger::cActEnemyRetreatByName::vf10  size=1  [class]
void Trigger::cActEnemyRetreatByName::vf10(void)

{
  return;
}

// 00C897C0  Trigger::cActEnemyRetreatByName::vf14  size=1  [class]
void Trigger::cActEnemyRetreatByName::vf14(void)

{
  return;
}

// 00C897D0  Trigger::cAction<Trigger::cActEnemyRetreatByName>::vf1C  size=10  [class]
void __thiscall
Trigger::cAction<Trigger::cActEnemyRetreatByName>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C897E0  Trigger::cAction<Trigger::cActEnemyRetreatByName>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActEnemyRetreatByName>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C897F0  Trigger::cAction<Trigger::cActEnemyRetreatByName>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActEnemyRetreatByName>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C89820  Trigger::cAction<Trigger::cActEnemyRetreatByNumber>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActEnemyRetreatByNumber>::vf00(void)

{
  return &DAT_01dbe59c;
}

// 00C89830  Trigger::cActEnemyRetreatByNumber::vf08  size=1  [class]
void Trigger::cActEnemyRetreatByNumber::vf08(void)

{
  return;
}

// 00C89840  Trigger::cActEnemyRetreatByNumber::vf0C  size=1  [class]
void Trigger::cActEnemyRetreatByNumber::vf0C(void)

{
  return;
}

// 00C89850  Trigger::cActEnemyRetreatByNumber::vf10  size=1  [class]
void Trigger::cActEnemyRetreatByNumber::vf10(void)

{
  return;
}

// 00C89860  Trigger::cActEnemyRetreatByNumber::vf14  size=1  [class]
void Trigger::cActEnemyRetreatByNumber::vf14(void)

{
  return;
}

// 00C89870  Trigger::cAction<Trigger::cActEnemyRetreatByNumber>::vf1C  size=10  [class]
void __thiscall
Trigger::cAction<Trigger::cActEnemyRetreatByNumber>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C89880  Trigger::cAction<Trigger::cActEnemyRetreatByNumber>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActEnemyRetreatByNumber>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C89890  Trigger::cAction<Trigger::cActEnemyRetreatByNumber>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActEnemyRetreatByNumber>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C898C0  Trigger::cAction<Trigger::cActEnemyClearByName>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActEnemyClearByName>::vf00(void)

{
  return &DAT_01dbe598;
}

// 00C898D0  Trigger::cActEnemyClearByName::vf08  size=1  [class]
void Trigger::cActEnemyClearByName::vf08(void)

{
  return;
}

// 00C898E0  Trigger::cActEnemyClearByName::vf0C  size=1  [class]
void Trigger::cActEnemyClearByName::vf0C(void)

{
  return;
}

// 00C898F0  Trigger::cActEnemyClearByName::vf10  size=1  [class]
void Trigger::cActEnemyClearByName::vf10(void)

{
  return;
}

// 00C89900  Trigger::cActEnemyClearByName::vf14  size=1  [class]
void Trigger::cActEnemyClearByName::vf14(void)

{
  return;
}

// 00C89910  Trigger::cAction<Trigger::cActEnemyClearByName>::vf1C  size=10  [class]
void __thiscall
Trigger::cAction<Trigger::cActEnemyClearByName>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C89920  Trigger::cAction<Trigger::cActEnemyClearByName>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActEnemyClearByName>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C89930  Trigger::cAction<Trigger::cActEnemyClearByName>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActEnemyClearByName>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C89960  Trigger::cAction<Trigger::cActEnemyClearByNumber>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActEnemyClearByNumber>::vf00(void)

{
  return &DAT_01dbe594;
}

// 00C89970  Trigger::cActEnemyClearByNumber::vf08  size=1  [class]
void Trigger::cActEnemyClearByNumber::vf08(void)

{
  return;
}

// 00C89980  Trigger::cActEnemyClearByNumber::vf0C  size=1  [class]
void Trigger::cActEnemyClearByNumber::vf0C(void)

{
  return;
}

// 00C89990  Trigger::cActEnemyClearByNumber::vf10  size=1  [class]
void Trigger::cActEnemyClearByNumber::vf10(void)

{
  return;
}

// 00C899A0  Trigger::cActEnemyClearByNumber::vf14  size=1  [class]
void Trigger::cActEnemyClearByNumber::vf14(void)

{
  return;
}

// 00C899B0  Trigger::cAction<Trigger::cActEnemyClearByNumber>::vf1C  size=10  [class]
void __thiscall
Trigger::cAction<Trigger::cActEnemyClearByNumber>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C899C0  Trigger::cAction<Trigger::cActEnemyClearByNumber>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActEnemyClearByNumber>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C899D0  Trigger::cAction<Trigger::cActEnemyClearByNumber>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActEnemyClearByNumber>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C89A00  Trigger::cAction<Trigger::cActEffect>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActEffect>::vf00(void)

{
  return &DAT_01dbe590;
}

// 00C89A10  Trigger::cActEffect::vf08  size=1  [class]
void Trigger::cActEffect::vf08(void)

{
  return;
}

// 00C89A20  Trigger::cActEffect::vf0C  size=1  [class]
void Trigger::cActEffect::vf0C(void)

{
  return;
}

// 00C89A30  Trigger::cActEffect::vf10  size=1  [class]
void Trigger::cActEffect::vf10(void)

{
  return;
}

// 00C89A40  Trigger::cActEffect::vf14  size=1  [class]
void Trigger::cActEffect::vf14(void)

{
  return;
}

// 00C89A50  Trigger::cAction<Trigger::cActEffect>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActEffect>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C89A60  Trigger::cAction<Trigger::cActEffect>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActEffect>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C89A70  Trigger::cAction<Trigger::cActEffect>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActEffect>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C89AA0  Trigger::cAction<Trigger::cActResult>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActResult>::vf00(void)

{
  return &DAT_01dbe58c;
}

// 00C89AB0  Trigger::cActResult::vf08  size=1  [class]
void Trigger::cActResult::vf08(void)

{
  return;
}

// 00C89AC0  Trigger::cActResult::vf0C  size=1  [class]
void Trigger::cActResult::vf0C(void)

{
  return;
}

// 00C89AD0  Trigger::cActResult::vf10  size=1  [class]
void Trigger::cActResult::vf10(void)

{
  return;
}

// 00C89AE0  Trigger::cActResult::vf14  size=1  [class]
void Trigger::cActResult::vf14(void)

{
  return;
}

// 00C89AF0  Trigger::cAction<Trigger::cActResult>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActResult>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C89B00  Trigger::cAction<Trigger::cActResult>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActResult>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C89B10  Trigger::cAction<Trigger::cActResult>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActResult>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C89B40  Trigger::cAction<Trigger::cActTurnOff>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActTurnOff>::vf00(void)

{
  return &DAT_01dbe588;
}

// 00C89B50  Trigger::cActTurnOff::vf08  size=1  [class]
void Trigger::cActTurnOff::vf08(void)

{
  return;
}

// 00C89B60  Trigger::cActTurnOff::vf0C  size=1  [class]
void Trigger::cActTurnOff::vf0C(void)

{
  return;
}

// 00C89B70  Trigger::cActTurnOff::vf10  size=1  [class]
void Trigger::cActTurnOff::vf10(void)

{
  return;
}

// 00C89B80  Trigger::cActTurnOff::vf14  size=1  [class]
void Trigger::cActTurnOff::vf14(void)

{
  return;
}

// 00C89B90  Trigger::cAction<Trigger::cActTurnOff>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActTurnOff>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C89BA0  Trigger::cAction<Trigger::cActTurnOff>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActTurnOff>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C89BB0  Trigger::cAction<Trigger::cActTurnOff>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActTurnOff>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C89BE0  Trigger::cAction<Trigger::cActSE>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActSE>::vf00(void)

{
  return &DAT_01b35164;
}

// 00C89BF0  Trigger::cActSE::vf08  size=1  [class]
void Trigger::cActSE::vf08(void)

{
  return;
}

// 00C89C00  Trigger::cActSE::vf0C  size=1  [class]
void Trigger::cActSE::vf0C(void)

{
  return;
}

// 00C89C10  Trigger::cActSE::vf10  size=1  [class]
void Trigger::cActSE::vf10(void)

{
  return;
}

// 00C89C20  Trigger::cActSE::vf14  size=1  [class]
void Trigger::cActSE::vf14(void)

{
  return;
}

// 00C89C30  Trigger::cAction<Trigger::cActSE>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActSE>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C89C40  Trigger::cAction<Trigger::cActSE>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActSE>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C89C50  Trigger::cAction<Trigger::cActSE>::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cAction<Trigger::cActSE>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C89C80  Trigger::cAction<Trigger::cActFuncall>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActFuncall>::vf00(void)

{
  return &DAT_01b35168;
}

// 00C89C90  Trigger::cActFuncall::vf08  size=1  [class]
void Trigger::cActFuncall::vf08(void)

{
  return;
}

// 00C89CA0  Trigger::cActFuncall::vf0C  size=1  [class]
void Trigger::cActFuncall::vf0C(void)

{
  return;
}

// 00C89CB0  Trigger::cActFuncall::vf10  size=1  [class]
void Trigger::cActFuncall::vf10(void)

{
  return;
}

// 00C89CC0  Trigger::cActFuncall::vf14  size=1  [class]
void Trigger::cActFuncall::vf14(void)

{
  return;
}

// 00C89CD0  Trigger::cAction<Trigger::cActFuncall>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActFuncall>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C89CE0  Trigger::cAction<Trigger::cActFuncall>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActFuncall>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C89CF0  Trigger::cAction<Trigger::cActFuncall>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActFuncall>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C89D20  Trigger::cAction<Trigger::cActTask>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActTask>::vf00(void)

{
  return &DAT_01dbe584;
}

// 00C89D30  Trigger::cActTask::vf08  size=1  [class]
void Trigger::cActTask::vf08(void)

{
  return;
}

// 00C89D40  Trigger::cActTask::vf0C  size=1  [class]
void Trigger::cActTask::vf0C(void)

{
  return;
}

// 00C89D50  Trigger::cActTask::vf10  size=1  [class]
void Trigger::cActTask::vf10(void)

{
  return;
}

// 00C89D60  Trigger::cActTask::vf14  size=1  [class]
void Trigger::cActTask::vf14(void)

{
  return;
}

// 00C89D70  Trigger::cAction<Trigger::cActTask>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActTask>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C89D80  Trigger::cAction<Trigger::cActTask>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActTask>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C89D90  Trigger::cAction<Trigger::cActTask>::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cAction<Trigger::cActTask>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C89DC0  Trigger::cAction<Trigger::cActAnimation>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActAnimation>::vf00(void)

{
  return &DAT_01dbe580;
}

// 00C89DD0  Trigger::cActAnimation::vf08  size=1  [class]
void Trigger::cActAnimation::vf08(void)

{
  return;
}

// 00C89DE0  Trigger::cActAnimation::vf0C  size=1  [class]
void Trigger::cActAnimation::vf0C(void)

{
  return;
}

// 00C89DF0  Trigger::cActAnimation::vf10  size=1  [class]
void Trigger::cActAnimation::vf10(void)

{
  return;
}

// 00C89E00  Trigger::cActAnimation::vf14  size=1  [class]
void Trigger::cActAnimation::vf14(void)

{
  return;
}

// 00C89E10  Trigger::cAction<Trigger::cActAnimation>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActAnimation>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C89E20  Trigger::cAction<Trigger::cActAnimation>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActAnimation>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C89E30  Trigger::cAction<Trigger::cActAnimation>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActAnimation>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C89E60  Trigger::cAction<Trigger::cActAnimationOrigin>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActAnimationOrigin>::vf00(void)

{
  return &DAT_01dbe57c;
}

// 00C89E70  Trigger::cActAnimationOrigin::vf08  size=1  [class]
void Trigger::cActAnimationOrigin::vf08(void)

{
  return;
}

// 00C89E80  Trigger::cActAnimationOrigin::vf0C  size=1  [class]
void Trigger::cActAnimationOrigin::vf0C(void)

{
  return;
}

// 00C89E90  Trigger::cActAnimationOrigin::vf10  size=1  [class]
void Trigger::cActAnimationOrigin::vf10(void)

{
  return;
}

// 00C89EA0  Trigger::cActAnimationOrigin::vf14  size=1  [class]
void Trigger::cActAnimationOrigin::vf14(void)

{
  return;
}

// 00C89EB0  Trigger::cAction<Trigger::cActAnimationOrigin>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActAnimationOrigin>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C89EC0  Trigger::cAction<Trigger::cActAnimationOrigin>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActAnimationOrigin>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C89ED0  Trigger::cAction<Trigger::cActAnimationOrigin>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActAnimationOrigin>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C89F00  Trigger::cAction<Trigger::cActTerminate>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActTerminate>::vf00(void)

{
  return &DAT_01dbe578;
}

// 00C89F10  Trigger::cActTerminate::vf08  size=1  [class]
void Trigger::cActTerminate::vf08(void)

{
  return;
}

// 00C89F20  Trigger::cActTerminate::vf0C  size=1  [class]
void Trigger::cActTerminate::vf0C(void)

{
  return;
}

// 00C89F30  Trigger::cActTerminate::vf10  size=1  [class]
void Trigger::cActTerminate::vf10(void)

{
  return;
}

// 00C89F40  Trigger::cActTerminate::vf14  size=1  [class]
void Trigger::cActTerminate::vf14(void)

{
  return;
}

// 00C89F50  Trigger::cAction<Trigger::cActTerminate>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActTerminate>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C89F60  Trigger::cAction<Trigger::cActTerminate>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActTerminate>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C89F70  Trigger::cAction<Trigger::cActTerminate>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActTerminate>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C89FA0  Trigger::cAction<Trigger::cActFollowPath>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActFollowPath>::vf00(void)

{
  return &DAT_01dbe574;
}

// 00C89FB0  Trigger::cActFollowPath::vf08  size=1  [class]
void Trigger::cActFollowPath::vf08(void)

{
  return;
}

// 00C89FC0  Trigger::cActFollowPath::vf0C  size=1  [class]
void Trigger::cActFollowPath::vf0C(void)

{
  return;
}

// 00C89FD0  Trigger::cActFollowPath::vf10  size=1  [class]
void Trigger::cActFollowPath::vf10(void)

{
  return;
}

// 00C89FE0  Trigger::cActFollowPath::vf14  size=1  [class]
void Trigger::cActFollowPath::vf14(void)

{
  return;
}

// 00C89FF0  Trigger::cAction<Trigger::cActFollowPath>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActFollowPath>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8A000  Trigger::cAction<Trigger::cActFollowPath>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActFollowPath>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8A010  Trigger::cAction<Trigger::cActFollowPath>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActFollowPath>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8A040  Trigger::cAction<Trigger::cActCameraDistance>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActCameraDistance>::vf00(void)

{
  return &DAT_01dbe570;
}

// 00C8A050  Trigger::cActCameraDistance::vf08  size=1  [class]
void Trigger::cActCameraDistance::vf08(void)

{
  return;
}

// 00C8A060  Trigger::cActCameraDistance::vf0C  size=1  [class]
void Trigger::cActCameraDistance::vf0C(void)

{
  return;
}

// 00C8A070  Trigger::cActCameraDistance::vf10  size=1  [class]
void Trigger::cActCameraDistance::vf10(void)

{
  return;
}

// 00C8A080  Trigger::cActCameraDistance::vf14  size=1  [class]
void Trigger::cActCameraDistance::vf14(void)

{
  return;
}

// 00C8A090  Trigger::cAction<Trigger::cActCameraDistance>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActCameraDistance>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8A0A0  Trigger::cAction<Trigger::cActCameraDistance>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActCameraDistance>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8A0B0  Trigger::cAction<Trigger::cActCameraDistance>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActCameraDistance>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8A0E0  Trigger::cAction<Trigger::cActCameraDistanceOff>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActCameraDistanceOff>::vf00(void)

{
  return &DAT_01dbe56c;
}

// 00C8A0F0  Trigger::cActCameraDistanceOff::vf08  size=1  [class]
void Trigger::cActCameraDistanceOff::vf08(void)

{
  return;
}

// 00C8A100  Trigger::cActCameraDistanceOff::vf0C  size=1  [class]
void Trigger::cActCameraDistanceOff::vf0C(void)

{
  return;
}

// 00C8A110  Trigger::cActCameraDistanceOff::vf10  size=1  [class]
void Trigger::cActCameraDistanceOff::vf10(void)

{
  return;
}

// 00C8A120  Trigger::cActCameraDistanceOff::vf14  size=1  [class]
void Trigger::cActCameraDistanceOff::vf14(void)

{
  return;
}

// 00C8A130  Trigger::cAction<Trigger::cActCameraDistanceOff>::vf1C  size=10  [class]
void __thiscall
Trigger::cAction<Trigger::cActCameraDistanceOff>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8A140  Trigger::cAction<Trigger::cActCameraDistanceOff>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActCameraDistanceOff>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8A150  Trigger::cAction<Trigger::cActCameraDistanceOff>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActCameraDistanceOff>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8A180  Trigger::cAction<Trigger::cActCameraFocus>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActCameraFocus>::vf00(void)

{
  return &DAT_01dbe568;
}

// 00C8A190  Trigger::cActCameraFocus::vf08  size=1  [class]
void Trigger::cActCameraFocus::vf08(void)

{
  return;
}

// 00C8A1A0  Trigger::cActCameraFocus::vf0C  size=1  [class]
void Trigger::cActCameraFocus::vf0C(void)

{
  return;
}

// 00C8A1B0  Trigger::cActCameraFocus::vf10  size=1  [class]
void Trigger::cActCameraFocus::vf10(void)

{
  return;
}

// 00C8A1C0  Trigger::cActCameraFocus::vf14  size=1  [class]
void Trigger::cActCameraFocus::vf14(void)

{
  return;
}

// 00C8A1D0  Trigger::cAction<Trigger::cActCameraFocus>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActCameraFocus>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8A1E0  Trigger::cAction<Trigger::cActCameraFocus>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActCameraFocus>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8A1F0  Trigger::cAction<Trigger::cActCameraFocus>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActCameraFocus>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8A220  Trigger::cAction<Trigger::cActCameraFocusOff>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActCameraFocusOff>::vf00(void)

{
  return &DAT_01dbe564;
}

// 00C8A230  Trigger::cActCameraFocusOff::vf08  size=1  [class]
void Trigger::cActCameraFocusOff::vf08(void)

{
  return;
}

// 00C8A240  Trigger::cActCameraFocusOff::vf0C  size=1  [class]
void Trigger::cActCameraFocusOff::vf0C(void)

{
  return;
}

// 00C8A250  Trigger::cActCameraFocusOff::vf10  size=1  [class]
void Trigger::cActCameraFocusOff::vf10(void)

{
  return;
}

// 00C8A260  Trigger::cActCameraFocusOff::vf14  size=1  [class]
void Trigger::cActCameraFocusOff::vf14(void)

{
  return;
}

// 00C8A270  Trigger::cAction<Trigger::cActCameraFocusOff>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActCameraFocusOff>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8A280  Trigger::cAction<Trigger::cActCameraFocusOff>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActCameraFocusOff>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8A290  Trigger::cAction<Trigger::cActCameraFocusOff>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActCameraFocusOff>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8A2C0  Trigger::cAction<Trigger::cActCameraAngle>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActCameraAngle>::vf00(void)

{
  return &DAT_01dbe560;
}

// 00C8A2D0  Trigger::cActCameraAngle::vf08  size=1  [class]
void Trigger::cActCameraAngle::vf08(void)

{
  return;
}

// 00C8A2E0  Trigger::cActCameraAngle::vf0C  size=1  [class]
void Trigger::cActCameraAngle::vf0C(void)

{
  return;
}

// 00C8A2F0  Trigger::cActCameraAngle::vf10  size=1  [class]
void Trigger::cActCameraAngle::vf10(void)

{
  return;
}

// 00C8A300  Trigger::cActCameraAngle::vf14  size=1  [class]
void Trigger::cActCameraAngle::vf14(void)

{
  return;
}

// 00C8A310  Trigger::cAction<Trigger::cActCameraAngle>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActCameraAngle>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8A320  Trigger::cAction<Trigger::cActCameraAngle>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActCameraAngle>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8A330  Trigger::cAction<Trigger::cActCameraAngle>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActCameraAngle>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8A360  Trigger::cAction<Trigger::cActCameraAngleOff>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActCameraAngleOff>::vf00(void)

{
  return &DAT_01dbe55c;
}

// 00C8A370  Trigger::cActCameraAngleOff::vf08  size=1  [class]
void Trigger::cActCameraAngleOff::vf08(void)

{
  return;
}

// 00C8A380  Trigger::cActCameraAngleOff::vf0C  size=1  [class]
void Trigger::cActCameraAngleOff::vf0C(void)

{
  return;
}

// 00C8A390  Trigger::cActCameraAngleOff::vf10  size=1  [class]
void Trigger::cActCameraAngleOff::vf10(void)

{
  return;
}

// 00C8A3A0  Trigger::cActCameraAngleOff::vf14  size=1  [class]
void Trigger::cActCameraAngleOff::vf14(void)

{
  return;
}

// 00C8A3B0  Trigger::cAction<Trigger::cActCameraAngleOff>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActCameraAngleOff>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8A3C0  Trigger::cAction<Trigger::cActCameraAngleOff>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActCameraAngleOff>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8A3D0  Trigger::cAction<Trigger::cActCameraAngleOff>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActCameraAngleOff>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8A400  Trigger::cAction<Trigger::cActPhaseSubphase>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActPhaseSubphase>::vf00(void)

{
  return &DAT_01dbe558;
}

// 00C8A410  Trigger::cActPhaseSubphase::vf08  size=1  [class]
void Trigger::cActPhaseSubphase::vf08(void)

{
  return;
}

// 00C8A420  Trigger::cActPhaseSubphase::vf0C  size=1  [class]
void Trigger::cActPhaseSubphase::vf0C(void)

{
  return;
}

// 00C8A430  Trigger::cActPhaseSubphase::vf10  size=1  [class]
void Trigger::cActPhaseSubphase::vf10(void)

{
  return;
}

// 00C8A440  Trigger::cActPhaseSubphase::vf14  size=1  [class]
void Trigger::cActPhaseSubphase::vf14(void)

{
  return;
}

// 00C8A450  Trigger::cAction<Trigger::cActPhaseSubphase>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActPhaseSubphase>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8A460  Trigger::cAction<Trigger::cActPhaseSubphase>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActPhaseSubphase>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8A470  Trigger::cAction<Trigger::cActPhaseSubphase>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActPhaseSubphase>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8A4A0  Trigger::cAction<Trigger::cActDoorClose>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActDoorClose>::vf00(void)

{
  return &DAT_01dbe554;
}

// 00C8A4B0  Trigger::cActDoorClose::vf08  size=1  [class]
void Trigger::cActDoorClose::vf08(void)

{
  return;
}

// 00C8A4C0  Trigger::cActDoorClose::vf0C  size=1  [class]
void Trigger::cActDoorClose::vf0C(void)

{
  return;
}

// 00C8A4D0  Trigger::cActDoorClose::vf10  size=1  [class]
void Trigger::cActDoorClose::vf10(void)

{
  return;
}

// 00C8A4E0  Trigger::cActDoorClose::vf14  size=1  [class]
void Trigger::cActDoorClose::vf14(void)

{
  return;
}

// 00C8A4F0  Trigger::cAction<Trigger::cActDoorClose>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActDoorClose>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8A500  Trigger::cAction<Trigger::cActDoorClose>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActDoorClose>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8A510  Trigger::cAction<Trigger::cActDoorClose>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActDoorClose>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8A540  Trigger::cAction<Trigger::cActDebugMessage>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActDebugMessage>::vf00(void)

{
  return &DAT_01dbe550;
}

// 00C8A550  Trigger::cActDebugMessage::vf08  size=1  [class]
void Trigger::cActDebugMessage::vf08(void)

{
  return;
}

// 00C8A560  Trigger::cActDebugMessage::vf0C  size=1  [class]
void Trigger::cActDebugMessage::vf0C(void)

{
  return;
}

// 00C8A570  Trigger::cActDebugMessage::vf10  size=1  [class]
void Trigger::cActDebugMessage::vf10(void)

{
  return;
}

// 00C8A580  Trigger::cActDebugMessage::vf14  size=1  [class]
void Trigger::cActDebugMessage::vf14(void)

{
  return;
}

// 00C8A590  Trigger::cAction<Trigger::cActDebugMessage>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActDebugMessage>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8A5A0  Trigger::cAction<Trigger::cActDebugMessage>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActDebugMessage>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8A5B0  Trigger::cAction<Trigger::cActDebugMessage>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActDebugMessage>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8A5E0  Trigger::cAction<Trigger::cActStage>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActStage>::vf00(void)

{
  return &DAT_01dbe54c;
}

// 00C8A5F0  Trigger::cActStage::vf08  size=1  [class]
void Trigger::cActStage::vf08(void)

{
  return;
}

// 00C8A600  Trigger::cActStage::vf0C  size=1  [class]
void Trigger::cActStage::vf0C(void)

{
  return;
}

// 00C8A610  Trigger::cActStage::vf10  size=1  [class]
void Trigger::cActStage::vf10(void)

{
  return;
}

// 00C8A620  Trigger::cActStage::vf14  size=1  [class]
void Trigger::cActStage::vf14(void)

{
  return;
}

// 00C8A630  Trigger::cAction<Trigger::cActStage>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActStage>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8A640  Trigger::cAction<Trigger::cActStage>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActStage>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8A650  Trigger::cAction<Trigger::cActStage>::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cAction<Trigger::cActStage>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8A680  Trigger::cAction<Trigger::cActSubstage>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActSubstage>::vf00(void)

{
  return &DAT_01dbe548;
}

// 00C8A690  Trigger::cActSubstage::vf08  size=1  [class]
void Trigger::cActSubstage::vf08(void)

{
  return;
}

// 00C8A6A0  Trigger::cActSubstage::vf0C  size=1  [class]
void Trigger::cActSubstage::vf0C(void)

{
  return;
}

// 00C8A6B0  Trigger::cActSubstage::vf10  size=1  [class]
void Trigger::cActSubstage::vf10(void)

{
  return;
}

// 00C8A6C0  Trigger::cActSubstage::vf14  size=1  [class]
void Trigger::cActSubstage::vf14(void)

{
  return;
}

// 00C8A6D0  Trigger::cAction<Trigger::cActSubstage>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActSubstage>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8A6E0  Trigger::cAction<Trigger::cActSubstage>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActSubstage>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8A6F0  Trigger::cAction<Trigger::cActSubstage>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActSubstage>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8A720  Trigger::cAction<Trigger::cActText>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActText>::vf00(void)

{
  return &DAT_01dbe544;
}

// 00C8A730  Trigger::cActText::vf08  size=1  [class]
void Trigger::cActText::vf08(void)

{
  return;
}

// 00C8A740  Trigger::cActText::vf0C  size=1  [class]
void Trigger::cActText::vf0C(void)

{
  return;
}

// 00C8A750  Trigger::cActText::vf10  size=1  [class]
void Trigger::cActText::vf10(void)

{
  return;
}

// 00C8A760  Trigger::cActText::vf14  size=1  [class]
void Trigger::cActText::vf14(void)

{
  return;
}

// 00C8A770  Trigger::cAction<Trigger::cActText>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActText>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8A780  Trigger::cAction<Trigger::cActText>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActText>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8A790  Trigger::cAction<Trigger::cActText>::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cAction<Trigger::cActText>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8A7C0  Trigger::cAction<Trigger::cActTextOut>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActTextOut>::vf00(void)

{
  return &DAT_01dbe540;
}

// 00C8A7D0  Trigger::cActTextOut::vf08  size=1  [class]
void Trigger::cActTextOut::vf08(void)

{
  return;
}

// 00C8A7E0  Trigger::cActTextOut::vf0C  size=1  [class]
void Trigger::cActTextOut::vf0C(void)

{
  return;
}

// 00C8A7F0  Trigger::cActTextOut::vf10  size=1  [class]
void Trigger::cActTextOut::vf10(void)

{
  return;
}

// 00C8A800  Trigger::cActTextOut::vf14  size=1  [class]
void Trigger::cActTextOut::vf14(void)

{
  return;
}

// 00C8A810  Trigger::cAction<Trigger::cActTextOut>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActTextOut>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8A820  Trigger::cAction<Trigger::cActTextOut>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActTextOut>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8A830  Trigger::cAction<Trigger::cActTextOut>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActTextOut>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8A860  Trigger::cActFlagOn::vf00  size=6  [class]
undefined * Trigger::cActFlagOn::vf00(void)

{
  return &DAT_01dbe53c;
}

// 00C8A870  Trigger::cActFlagOn::vf08  size=1  [class]
void Trigger::cActFlagOn::vf08(void)

{
  return;
}

// 00C8A880  Trigger::cActFlagOn::vf0C  size=1  [class]
void Trigger::cActFlagOn::vf0C(void)

{
  return;
}

// 00C8A890  Trigger::cActFlagOn::vf10  size=1  [class]
void Trigger::cActFlagOn::vf10(void)

{
  return;
}

// 00C8A8A0  Trigger::cActFlagOn::vf14  size=1  [class]
void Trigger::cActFlagOn::vf14(void)

{
  return;
}

// 00C8A8B0  Trigger::cAction<Trigger::cActFlagOn>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActFlagOn>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8A8C0  Trigger::cAction<Trigger::cActFlagOn>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActFlagOn>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8A8D0  Trigger::cAction<Trigger::cActFlagOn>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActFlagOn>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8A900  Trigger::cActFlagOff::vf00  size=6  [class]
undefined * Trigger::cActFlagOff::vf00(void)

{
  return &DAT_01dbe538;
}

// 00C8A910  Trigger::cActFlagOff::vf08  size=1  [class]
void Trigger::cActFlagOff::vf08(void)

{
  return;
}

// 00C8A920  Trigger::cActFlagOff::vf0C  size=1  [class]
void Trigger::cActFlagOff::vf0C(void)

{
  return;
}

// 00C8A930  Trigger::cActFlagOff::vf10  size=1  [class]
void Trigger::cActFlagOff::vf10(void)

{
  return;
}

// 00C8A940  Trigger::cActFlagOff::vf14  size=1  [class]
void Trigger::cActFlagOff::vf14(void)

{
  return;
}

// 00C8A950  Trigger::cAction<Trigger::cActFlagOff>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActFlagOff>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8A960  Trigger::cAction<Trigger::cActFlagOff>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActFlagOff>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8A970  Trigger::cAction<Trigger::cActFlagOff>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActFlagOff>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8A9A0  Trigger::cActLoadRoom::vf00  size=6  [class]
undefined * Trigger::cActLoadRoom::vf00(void)

{
  return &DAT_01dbe534;
}

// 00C8A9B0  Trigger::cActLoadRoom::vf08  size=1  [class]
void Trigger::cActLoadRoom::vf08(void)

{
  return;
}

// 00C8A9C0  Trigger::cActLoadRoom::vf0C  size=1  [class]
void Trigger::cActLoadRoom::vf0C(void)

{
  return;
}

// 00C8A9D0  Trigger::cActLoadRoom::vf10  size=1  [class]
void Trigger::cActLoadRoom::vf10(void)

{
  return;
}

// 00C8A9E0  Trigger::cActLoadRoom::vf14  size=1  [class]
void Trigger::cActLoadRoom::vf14(void)

{
  return;
}

// 00C8A9F0  Trigger::cAction<Trigger::cActLoadRoom>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActLoadRoom>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8AA00  Trigger::cAction<Trigger::cActLoadRoom>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActLoadRoom>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8AA10  Trigger::cAction<Trigger::cActLoadRoom>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActLoadRoom>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8AA40  Trigger::cActUnloadRoom::vf00  size=6  [class]
undefined * Trigger::cActUnloadRoom::vf00(void)

{
  return &DAT_01dbe530;
}

// 00C8AA50  Trigger::cActUnloadRoom::vf08  size=1  [class]
void Trigger::cActUnloadRoom::vf08(void)

{
  return;
}

// 00C8AA60  Trigger::cActUnloadRoom::vf0C  size=1  [class]
void Trigger::cActUnloadRoom::vf0C(void)

{
  return;
}

// 00C8AA70  Trigger::cActUnloadRoom::vf10  size=1  [class]
void Trigger::cActUnloadRoom::vf10(void)

{
  return;
}

// 00C8AA80  Trigger::cActUnloadRoom::vf14  size=1  [class]
void Trigger::cActUnloadRoom::vf14(void)

{
  return;
}

// 00C8AA90  Trigger::cAction<Trigger::cActUnloadRoom>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActUnloadRoom>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8AAA0  Trigger::cAction<Trigger::cActUnloadRoom>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActUnloadRoom>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8AAB0  Trigger::cAction<Trigger::cActUnloadRoom>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActUnloadRoom>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8AAE0  Trigger::cAction<Trigger::cActMoveShounen>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActMoveShounen>::vf00(void)

{
  return &DAT_01dbe52c;
}

// 00C8AAF0  Trigger::cAction<Trigger::cActMoveShounen>::vf08  size=1  [class]
void Trigger::cAction<Trigger::cActMoveShounen>::vf08(void)

{
  return;
}

// 00C8AB00  Trigger::cAction<Trigger::cActMoveShounen>::vf0C  size=1  [class]
void Trigger::cAction<Trigger::cActMoveShounen>::vf0C(void)

{
  return;
}

// 00C8AB10  Trigger::cAction<Trigger::cActMoveShounen>::vf10  size=1  [class]
void Trigger::cAction<Trigger::cActMoveShounen>::vf10(void)

{
  return;
}

// 00C8AB20  Trigger::cAction<Trigger::cActMoveShounen>::vf14  size=1  [class]
void Trigger::cAction<Trigger::cActMoveShounen>::vf14(void)

{
  return;
}

// 00C8AB30  Trigger::cAction<Trigger::cActMoveShounen>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActMoveShounen>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8AB40  Trigger::cAction<Trigger::cActMoveShounen>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActMoveShounen>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8AB50  Trigger::cAction<Trigger::cActMoveShounen>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActMoveShounen>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8AB80  Trigger::cAction<Trigger::cActPosIndex>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActPosIndex>::vf00(void)

{
  return &DAT_01dbe528;
}

// 00C8AB90  Trigger::cActPosIndex::vf08  size=1  [class]
void Trigger::cActPosIndex::vf08(void)

{
  return;
}

// 00C8ABA0  Trigger::cActPosIndex::vf0C  size=1  [class]
void Trigger::cActPosIndex::vf0C(void)

{
  return;
}

// 00C8ABB0  Trigger::cActPosIndex::vf10  size=1  [class]
void Trigger::cActPosIndex::vf10(void)

{
  return;
}

// 00C8ABC0  Trigger::cActPosIndex::vf14  size=1  [class]
void Trigger::cActPosIndex::vf14(void)

{
  return;
}

// 00C8ABD0  Trigger::cAction<Trigger::cActPosIndex>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActPosIndex>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8ABE0  Trigger::cAction<Trigger::cActPosIndex>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActPosIndex>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8ABF0  Trigger::cAction<Trigger::cActPosIndex>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActPosIndex>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8AC20  Trigger::cAction<Trigger::cActEmMsg>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActEmMsg>::vf00(void)

{
  return &DAT_01dbe524;
}

// 00C8AC30  Trigger::cActEmMsg::vf08  size=1  [class]
void Trigger::cActEmMsg::vf08(void)

{
  return;
}

// 00C8AC40  Trigger::cActEmMsg::vf0C  size=1  [class]
void Trigger::cActEmMsg::vf0C(void)

{
  return;
}

// 00C8AC50  Trigger::cAction<Trigger::cActEmMsg>::vf10  size=1  [class]
void Trigger::cAction<Trigger::cActEmMsg>::vf10(void)

{
  return;
}

// 00C8AC60  Trigger::cActEmMsg::vf14  size=1  [class]
void Trigger::cActEmMsg::vf14(void)

{
  return;
}

// 00C8AC70  Trigger::cAction<Trigger::cActEmMsg>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActEmMsg>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8AC80  Trigger::cAction<Trigger::cActEmMsg>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActEmMsg>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8AC90  Trigger::cAction<Trigger::cActEmMsg>::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cAction<Trigger::cActEmMsg>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8ACC0  Trigger::cAction<Trigger::cActScene>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActScene>::vf00(void)

{
  return &DAT_01dbe520;
}

// 00C8ACD0  Trigger::cActScene::vf08  size=1  [class]
void Trigger::cActScene::vf08(void)

{
  return;
}

// 00C8ACE0  Trigger::cActScene::vf0C  size=1  [class]
void Trigger::cActScene::vf0C(void)

{
  return;
}

// 00C8ACF0  Trigger::cActScene::vf10  size=1  [class]
void Trigger::cActScene::vf10(void)

{
  return;
}

// 00C8AD00  Trigger::cActScene::vf14  size=1  [class]
void Trigger::cActScene::vf14(void)

{
  return;
}

// 00C8AD10  Trigger::cAction<Trigger::cActScene>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActScene>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8AD20  Trigger::cAction<Trigger::cActScene>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActScene>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8AD30  Trigger::cAction<Trigger::cActScene>::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cAction<Trigger::cActScene>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8AD60  Trigger::cAction<Trigger::cActEmMsgDirect>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActEmMsgDirect>::vf00(void)

{
  return &DAT_01dbe51c;
}

// 00C8AD70  Trigger::cActEmMsgDirect::vf08  size=1  [class]
void Trigger::cActEmMsgDirect::vf08(void)

{
  return;
}

// 00C8AD80  Trigger::cActEmMsgDirect::vf0C  size=1  [class]
void Trigger::cActEmMsgDirect::vf0C(void)

{
  return;
}

// 00C8AD90  Trigger::cAction<Trigger::cActEmMsgDirect>::vf10  size=1  [class]
void Trigger::cAction<Trigger::cActEmMsgDirect>::vf10(void)

{
  return;
}

// 00C8ADA0  Trigger::cActEmMsgDirect::vf14  size=1  [class]
void Trigger::cActEmMsgDirect::vf14(void)

{
  return;
}

// 00C8ADB0  Trigger::cAction<Trigger::cActEmMsgDirect>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActEmMsgDirect>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8ADC0  Trigger::cAction<Trigger::cActEmMsgDirect>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActEmMsgDirect>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8ADD0  Trigger::cAction<Trigger::cActEmMsgDirect>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActEmMsgDirect>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8AE00  Trigger::cAction<Trigger::cActCollision>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActCollision>::vf00(void)

{
  return &DAT_01dbe518;
}

// 00C8AE10  Trigger::cActCollision::vf08  size=1  [class]
void Trigger::cActCollision::vf08(void)

{
  return;
}

// 00C8AE20  Trigger::cActCollision::vf0C  size=1  [class]
void Trigger::cActCollision::vf0C(void)

{
  return;
}

// 00C8AE30  Trigger::cActCollision::vf10  size=1  [class]
void Trigger::cActCollision::vf10(void)

{
  return;
}

// 00C8AE40  Trigger::cActCollision::vf14  size=1  [class]
void Trigger::cActCollision::vf14(void)

{
  return;
}

// 00C8AE50  Trigger::cAction<Trigger::cActCollision>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActCollision>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8AE60  Trigger::cAction<Trigger::cActCollision>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActCollision>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8AE70  Trigger::cAction<Trigger::cActCollision>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActCollision>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8AEA0  Trigger::cAction<Trigger::cActBgm>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActBgm>::vf00(void)

{
  return &DAT_01dbe514;
}

// 00C8AEB0  Trigger::cActBgm::vf08  size=1  [class]
void Trigger::cActBgm::vf08(void)

{
  return;
}

// 00C8AEC0  Trigger::cActBgm::vf0C  size=1  [class]
void Trigger::cActBgm::vf0C(void)

{
  return;
}

// 00C8AED0  Trigger::cActBgm::vf10  size=1  [class]
void Trigger::cActBgm::vf10(void)

{
  return;
}

// 00C8AEE0  Trigger::cActBgm::vf14  size=1  [class]
void Trigger::cActBgm::vf14(void)

{
  return;
}

// 00C8AEF0  Trigger::cAction<Trigger::cActBgm>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActBgm>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8AF00  Trigger::cAction<Trigger::cActBgm>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActBgm>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8AF10  Trigger::cAction<Trigger::cActBgm>::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cAction<Trigger::cActBgm>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8AF40  Trigger::cAction<Trigger::cActBgmSimple>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActBgmSimple>::vf00(void)

{
  return &DAT_01dbe510;
}

// 00C8AF50  Trigger::cActBgmSimple::vf08  size=1  [class]
void Trigger::cActBgmSimple::vf08(void)

{
  return;
}

// 00C8AF60  Trigger::cActBgmSimple::vf0C  size=1  [class]
void Trigger::cActBgmSimple::vf0C(void)

{
  return;
}

// 00C8AF70  Trigger::cActBgmSimple::vf10  size=1  [class]
void Trigger::cActBgmSimple::vf10(void)

{
  return;
}

// 00C8AF80  Trigger::cActBgmSimple::vf14  size=1  [class]
void Trigger::cActBgmSimple::vf14(void)

{
  return;
}

// 00C8AF90  Trigger::cAction<Trigger::cActBgmSimple>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActBgmSimple>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8AFA0  Trigger::cAction<Trigger::cActBgmSimple>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActBgmSimple>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8AFB0  Trigger::cAction<Trigger::cActBgmSimple>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActBgmSimple>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8AFE0  Trigger::cAction<Trigger::cActSESimple>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActSESimple>::vf00(void)

{
  return &DAT_01dbe50c;
}

// 00C8AFF0  Trigger::cActSESimple::vf08  size=1  [class]
void Trigger::cActSESimple::vf08(void)

{
  return;
}

// 00C8B000  Trigger::cActSESimple::vf0C  size=1  [class]
void Trigger::cActSESimple::vf0C(void)

{
  return;
}

// 00C8B010  Trigger::cActSESimple::vf10  size=1  [class]
void Trigger::cActSESimple::vf10(void)

{
  return;
}

// 00C8B020  Trigger::cActSESimple::vf14  size=1  [class]
void Trigger::cActSESimple::vf14(void)

{
  return;
}

// 00C8B030  Trigger::cAction<Trigger::cActSESimple>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActSESimple>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8B040  Trigger::cAction<Trigger::cActSESimple>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActSESimple>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8B050  Trigger::cAction<Trigger::cActSESimple>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActSESimple>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8B080  Trigger::cAction<Trigger::cActSound>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActSound>::vf00(void)

{
  return &DAT_01dbe508;
}

// 00C8B090  Trigger::cActSound::vf08  size=1  [class]
void Trigger::cActSound::vf08(void)

{
  return;
}

// 00C8B0A0  Trigger::cActSound::vf0C  size=1  [class]
void Trigger::cActSound::vf0C(void)

{
  return;
}

// 00C8B0B0  Trigger::cActSound::vf10  size=1  [class]
void Trigger::cActSound::vf10(void)

{
  return;
}

// 00C8B0C0  Trigger::cActSound::vf14  size=1  [class]
void Trigger::cActSound::vf14(void)

{
  return;
}

// 00C8B0D0  Trigger::cAction<Trigger::cActSound>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActSound>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8B0E0  Trigger::cAction<Trigger::cActSound>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActSound>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8B0F0  Trigger::cAction<Trigger::cActSound>::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cAction<Trigger::cActSound>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8B120  Trigger::cAction<Trigger::cActCollisionOff>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActCollisionOff>::vf00(void)

{
  return &DAT_01dbe504;
}

// 00C8B130  Trigger::cActCollisionOff::vf08  size=1  [class]
void Trigger::cActCollisionOff::vf08(void)

{
  return;
}

// 00C8B140  Trigger::cActCollisionOff::vf0C  size=1  [class]
void Trigger::cActCollisionOff::vf0C(void)

{
  return;
}

// 00C8B150  Trigger::cActCollisionOff::vf10  size=1  [class]
void Trigger::cActCollisionOff::vf10(void)

{
  return;
}

// 00C8B160  Trigger::cActCollisionOff::vf14  size=1  [class]
void Trigger::cActCollisionOff::vf14(void)

{
  return;
}

// 00C8B170  Trigger::cAction<Trigger::cActCollisionOff>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActCollisionOff>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8B180  Trigger::cAction<Trigger::cActCollisionOff>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActCollisionOff>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8B190  Trigger::cAction<Trigger::cActCollisionOff>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActCollisionOff>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8B1C0  Trigger::cAction<Trigger::cActSeEntity>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActSeEntity>::vf00(void)

{
  return &DAT_01dbe500;
}

// 00C8B1D0  Trigger::cActSeEntity::vf08  size=1  [class]
void Trigger::cActSeEntity::vf08(void)

{
  return;
}

// 00C8B1E0  Trigger::cActSeEntity::vf0C  size=1  [class]
void Trigger::cActSeEntity::vf0C(void)

{
  return;
}

// 00C8B1F0  Trigger::cActSeEntity::vf10  size=1  [class]
void Trigger::cActSeEntity::vf10(void)

{
  return;
}

// 00C8B200  Trigger::cActSeEntity::vf14  size=1  [class]
void Trigger::cActSeEntity::vf14(void)

{
  return;
}

// 00C8B210  Trigger::cAction<Trigger::cActSeEntity>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActSeEntity>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8B220  Trigger::cAction<Trigger::cActSeEntity>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActSeEntity>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8B230  Trigger::cAction<Trigger::cActSeEntity>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActSeEntity>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8B260  Trigger::cAction<Trigger::cActRoomEvent>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActRoomEvent>::vf00(void)

{
  return &DAT_01dbe4fc;
}

// 00C8B270  Trigger::cActRoomEvent::vf08  size=1  [class]
void Trigger::cActRoomEvent::vf08(void)

{
  return;
}

// 00C8B280  Trigger::cActRoomEvent::vf0C  size=1  [class]
void Trigger::cActRoomEvent::vf0C(void)

{
  return;
}

// 00C8B290  Trigger::cActRoomEvent::vf10  size=1  [class]
void Trigger::cActRoomEvent::vf10(void)

{
  return;
}

// 00C8B2A0  Trigger::cActRoomEvent::vf14  size=1  [class]
void Trigger::cActRoomEvent::vf14(void)

{
  return;
}

// 00C8B2B0  Trigger::cAction<Trigger::cActRoomEvent>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActRoomEvent>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8B2C0  Trigger::cAction<Trigger::cActRoomEvent>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActRoomEvent>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8B2D0  Trigger::cAction<Trigger::cActRoomEvent>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActRoomEvent>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8B300  Trigger::cAction<Trigger::cActEffectRoom>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActEffectRoom>::vf00(void)

{
  return &DAT_01dbe4f8;
}

// 00C8B310  Trigger::cActEffectRoom::vf08  size=1  [class]
void Trigger::cActEffectRoom::vf08(void)

{
  return;
}

// 00C8B320  Trigger::cActEffectRoom::vf0C  size=1  [class]
void Trigger::cActEffectRoom::vf0C(void)

{
  return;
}

// 00C8B330  Trigger::cActEffectRoom::vf10  size=1  [class]
void Trigger::cActEffectRoom::vf10(void)

{
  return;
}

// 00C8B340  Trigger::cActEffectRoom::vf14  size=1  [class]
void Trigger::cActEffectRoom::vf14(void)

{
  return;
}

// 00C8B350  Trigger::cAction<Trigger::cActEffectRoom>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActEffectRoom>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8B360  Trigger::cAction<Trigger::cActEffectRoom>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActEffectRoom>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8B370  Trigger::cAction<Trigger::cActEffectRoom>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActEffectRoom>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8B3A0  Trigger::cAction<Trigger::cActPlayerDie>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActPlayerDie>::vf00(void)

{
  return &DAT_01dbe4f4;
}

// 00C8B3B0  Trigger::cActPlayerDie::vf08  size=1  [class]
void Trigger::cActPlayerDie::vf08(void)

{
  return;
}

// 00C8B3C0  Trigger::cActPlayerDie::vf0C  size=1  [class]
void Trigger::cActPlayerDie::vf0C(void)

{
  return;
}

// 00C8B3D0  Trigger::cActPlayerDie::vf10  size=1  [class]
void Trigger::cActPlayerDie::vf10(void)

{
  return;
}

// 00C8B3E0  Trigger::cActPlayerDie::vf14  size=1  [class]
void Trigger::cActPlayerDie::vf14(void)

{
  return;
}

// 00C8B3F0  Trigger::cAction<Trigger::cActPlayerDie>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActPlayerDie>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8B400  Trigger::cAction<Trigger::cActPlayerDie>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActPlayerDie>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8B410  Trigger::cAction<Trigger::cActPlayerDie>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActPlayerDie>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8B440  Trigger::cAction<Trigger::cActEnemyMove>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActEnemyMove>::vf00(void)

{
  return &DAT_01dbe4f0;
}

// 00C8B450  Trigger::cActEnemyMove::vf08  size=1  [class]
void Trigger::cActEnemyMove::vf08(void)

{
  return;
}

// 00C8B460  Trigger::cActEnemyMove::vf0C  size=1  [class]
void Trigger::cActEnemyMove::vf0C(void)

{
  return;
}

// 00C8B470  Trigger::cActEnemyMove::vf10  size=1  [class]
void Trigger::cActEnemyMove::vf10(void)

{
  return;
}

// 00C8B480  Trigger::cActEnemyMove::vf14  size=1  [class]
void Trigger::cActEnemyMove::vf14(void)

{
  return;
}

// 00C8B490  Trigger::cAction<Trigger::cActEnemyMove>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActEnemyMove>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8B4A0  Trigger::cAction<Trigger::cActEnemyMove>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActEnemyMove>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8B4B0  Trigger::cAction<Trigger::cActEnemyMove>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActEnemyMove>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8B4E0  Trigger::cAction<Trigger::cActReqBehaviorInstruction>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActReqBehaviorInstruction>::vf00(void)

{
  return &DAT_01dbe4ec;
}

// 00C8B4F0  Trigger::cActReqBehaviorInstruction::vf08  size=1  [class]
void Trigger::cActReqBehaviorInstruction::vf08(void)

{
  return;
}

// 00C8B500  Trigger::cActReqBehaviorInstruction::vf0C  size=1  [class]
void Trigger::cActReqBehaviorInstruction::vf0C(void)

{
  return;
}

// 00C8B510  Trigger::cActReqBehaviorInstruction::vf10  size=1  [class]
void Trigger::cActReqBehaviorInstruction::vf10(void)

{
  return;
}

// 00C8B520  Trigger::cActReqBehaviorInstruction::vf14  size=1  [class]
void Trigger::cActReqBehaviorInstruction::vf14(void)

{
  return;
}

// 00C8B530  Trigger::cAction<Trigger::cActReqBehaviorInstruction>::vf1C  size=10  [class]
void __thiscall
Trigger::cAction<Trigger::cActReqBehaviorInstruction>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8B540  Trigger::cAction<Trigger::cActReqBehaviorInstruction>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActReqBehaviorInstruction>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8B550  Trigger::cAction<Trigger::cActReqBehaviorInstruction>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActReqBehaviorInstruction>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8B580  Trigger::cAction<Trigger::cActRaderMap>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActRaderMap>::vf00(void)

{
  return &DAT_01dbe4e8;
}

// 00C8B590  Trigger::cActRaderMap::vf08  size=1  [class]
void Trigger::cActRaderMap::vf08(void)

{
  return;
}

// 00C8B5A0  Trigger::cActRaderMap::vf0C  size=1  [class]
void Trigger::cActRaderMap::vf0C(void)

{
  return;
}

// 00C8B5B0  Trigger::cActRaderMap::vf10  size=1  [class]
void Trigger::cActRaderMap::vf10(void)

{
  return;
}

// 00C8B5C0  Trigger::cActRaderMap::vf14  size=1  [class]
void Trigger::cActRaderMap::vf14(void)

{
  return;
}

// 00C8B5D0  Trigger::cAction<Trigger::cActRaderMap>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActRaderMap>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8B5E0  Trigger::cAction<Trigger::cActRaderMap>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActRaderMap>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8B5F0  Trigger::cAction<Trigger::cActRaderMap>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActRaderMap>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8B620  Trigger::cAction<Trigger::cActRadioInfoStart>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActRadioInfoStart>::vf00(void)

{
  return &DAT_01dbe4e4;
}

// 00C8B630  Trigger::cActRadioInfoStart::vf08  size=1  [class]
void Trigger::cActRadioInfoStart::vf08(void)

{
  return;
}

// 00C8B640  Trigger::cActRadioInfoStart::vf0C  size=1  [class]
void Trigger::cActRadioInfoStart::vf0C(void)

{
  return;
}

// 00C8B650  Trigger::cActRadioInfoStart::vf10  size=1  [class]
void Trigger::cActRadioInfoStart::vf10(void)

{
  return;
}

// 00C8B660  Trigger::cActRadioInfoStart::vf14  size=1  [class]
void Trigger::cActRadioInfoStart::vf14(void)

{
  return;
}

// 00C8B670  Trigger::cAction<Trigger::cActRadioInfoStart>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActRadioInfoStart>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8B680  Trigger::cAction<Trigger::cActRadioInfoStart>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActRadioInfoStart>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8B690  Trigger::cAction<Trigger::cActRadioInfoStart>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActRadioInfoStart>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8B6C0  Trigger::cAction<Trigger::cActRadioInfoEnd>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActRadioInfoEnd>::vf00(void)

{
  return &DAT_01dbe4e0;
}

// 00C8B6D0  Trigger::cActRadioInfoEnd::vf08  size=1  [class]
void Trigger::cActRadioInfoEnd::vf08(void)

{
  return;
}

// 00C8B6E0  Trigger::cActRadioInfoEnd::vf0C  size=1  [class]
void Trigger::cActRadioInfoEnd::vf0C(void)

{
  return;
}

// 00C8B6F0  Trigger::cActRadioInfoEnd::vf10  size=1  [class]
void Trigger::cActRadioInfoEnd::vf10(void)

{
  return;
}

// 00C8B700  Trigger::cActRadioInfoEnd::vf14  size=1  [class]
void Trigger::cActRadioInfoEnd::vf14(void)

{
  return;
}

// 00C8B710  Trigger::cAction<Trigger::cActRadioInfoEnd>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActRadioInfoEnd>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8B720  Trigger::cAction<Trigger::cActRadioInfoEnd>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActRadioInfoEnd>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8B730  Trigger::cAction<Trigger::cActRadioInfoEnd>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActRadioInfoEnd>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8B760  Trigger::cAction<Trigger::cActConversationStart>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActConversationStart>::vf00(void)

{
  return &DAT_01dbe4dc;
}

// 00C8B770  Trigger::cActConversationStart::vf08  size=1  [class]
void Trigger::cActConversationStart::vf08(void)

{
  return;
}

// 00C8B780  Trigger::cActConversationStart::vf0C  size=1  [class]
void Trigger::cActConversationStart::vf0C(void)

{
  return;
}

// 00C8B790  Trigger::cActConversationStart::vf10  size=1  [class]
void Trigger::cActConversationStart::vf10(void)

{
  return;
}

// 00C8B7A0  Trigger::cActConversationStart::vf14  size=1  [class]
void Trigger::cActConversationStart::vf14(void)

{
  return;
}

// 00C8B7B0  Trigger::cAction<Trigger::cActConversationStart>::vf1C  size=10  [class]
void __thiscall
Trigger::cAction<Trigger::cActConversationStart>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8B7C0  Trigger::cAction<Trigger::cActConversationStart>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActConversationStart>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8B7D0  Trigger::cAction<Trigger::cActConversationStart>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActConversationStart>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8B800  Trigger::cAction<Trigger::cActConversationEnd>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActConversationEnd>::vf00(void)

{
  return &DAT_01dbe4d8;
}

// 00C8B810  Trigger::cActConversationEnd::vf08  size=1  [class]
void Trigger::cActConversationEnd::vf08(void)

{
  return;
}

// 00C8B820  Trigger::cActConversationEnd::vf0C  size=1  [class]
void Trigger::cActConversationEnd::vf0C(void)

{
  return;
}

// 00C8B830  Trigger::cActConversationEnd::vf10  size=1  [class]
void Trigger::cActConversationEnd::vf10(void)

{
  return;
}

// 00C8B840  Trigger::cActConversationEnd::vf14  size=1  [class]
void Trigger::cActConversationEnd::vf14(void)

{
  return;
}

// 00C8B850  Trigger::cAction<Trigger::cActConversationEnd>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActConversationEnd>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8B860  Trigger::cAction<Trigger::cActConversationEnd>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActConversationEnd>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8B870  Trigger::cAction<Trigger::cActConversationEnd>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActConversationEnd>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8B8A0  Trigger::cAction<Trigger::cActPathWayStart>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActPathWayStart>::vf00(void)

{
  return &DAT_01dbe4d4;
}

// 00C8B8B0  Trigger::cActPathWayStart::vf08  size=1  [class]
void Trigger::cActPathWayStart::vf08(void)

{
  return;
}

// 00C8B8C0  Trigger::cActPathWayStart::vf0C  size=1  [class]
void Trigger::cActPathWayStart::vf0C(void)

{
  return;
}

// 00C8B8D0  Trigger::cActPathWayStart::vf10  size=1  [class]
void Trigger::cActPathWayStart::vf10(void)

{
  return;
}

// 00C8B8E0  Trigger::cActPathWayStart::vf14  size=1  [class]
void Trigger::cActPathWayStart::vf14(void)

{
  return;
}

// 00C8B8F0  Trigger::cAction<Trigger::cActPathWayStart>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActPathWayStart>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8B900  Trigger::cAction<Trigger::cActPathWayStart>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActPathWayStart>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8B910  Trigger::cAction<Trigger::cActPathWayStart>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActPathWayStart>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8B940  Trigger::cAction<Trigger::cActPathWayEnd>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActPathWayEnd>::vf00(void)

{
  return &DAT_01dbe4d0;
}

// 00C8B950  Trigger::cActPathWayEnd::vf08  size=1  [class]
void Trigger::cActPathWayEnd::vf08(void)

{
  return;
}

// 00C8B960  Trigger::cActPathWayEnd::vf0C  size=1  [class]
void Trigger::cActPathWayEnd::vf0C(void)

{
  return;
}

// 00C8B970  Trigger::cActPathWayEnd::vf10  size=1  [class]
void Trigger::cActPathWayEnd::vf10(void)

{
  return;
}

// 00C8B980  Trigger::cActPathWayEnd::vf14  size=1  [class]
void Trigger::cActPathWayEnd::vf14(void)

{
  return;
}

// 00C8B990  Trigger::cAction<Trigger::cActPathWayEnd>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActPathWayEnd>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8B9A0  Trigger::cAction<Trigger::cActPathWayEnd>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActPathWayEnd>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8B9B0  Trigger::cAction<Trigger::cActPathWayEnd>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActPathWayEnd>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8B9E0  Trigger::cAction<Trigger::cActTutorialStart>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActTutorialStart>::vf00(void)

{
  return &DAT_01dbe4cc;
}

// 00C8B9F0  Trigger::cActTutorialStart::vf08  size=1  [class]
void Trigger::cActTutorialStart::vf08(void)

{
  return;
}

// 00C8BA00  Trigger::cActTutorialStart::vf0C  size=1  [class]
void Trigger::cActTutorialStart::vf0C(void)

{
  return;
}

// 00C8BA10  Trigger::cActTutorialStart::vf10  size=1  [class]
void Trigger::cActTutorialStart::vf10(void)

{
  return;
}

// 00C8BA20  Trigger::cActTutorialStart::vf14  size=1  [class]
void Trigger::cActTutorialStart::vf14(void)

{
  return;
}

// 00C8BA30  Trigger::cAction<Trigger::cActTutorialStart>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActTutorialStart>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8BA40  Trigger::cAction<Trigger::cActTutorialStart>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActTutorialStart>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8BA50  Trigger::cAction<Trigger::cActTutorialStart>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActTutorialStart>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8BA80  Trigger::cAction<Trigger::cActTutorialEnd>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActTutorialEnd>::vf00(void)

{
  return &DAT_01dbe4c8;
}

// 00C8BA90  Trigger::cActTutorialEnd::vf08  size=1  [class]
void Trigger::cActTutorialEnd::vf08(void)

{
  return;
}

// 00C8BAA0  Trigger::cActTutorialEnd::vf0C  size=1  [class]
void Trigger::cActTutorialEnd::vf0C(void)

{
  return;
}

// 00C8BAB0  Trigger::cActTutorialEnd::vf10  size=1  [class]
void Trigger::cActTutorialEnd::vf10(void)

{
  return;
}

// 00C8BAC0  Trigger::cActTutorialEnd::vf14  size=1  [class]
void Trigger::cActTutorialEnd::vf14(void)

{
  return;
}

// 00C8BAD0  Trigger::cAction<Trigger::cActTutorialEnd>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActTutorialEnd>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8BAE0  Trigger::cAction<Trigger::cActTutorialEnd>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActTutorialEnd>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8BAF0  Trigger::cAction<Trigger::cActTutorialEnd>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActTutorialEnd>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8BB20  Trigger::cAction<Trigger::cActAreaBarrierOff>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActAreaBarrierOff>::vf00(void)

{
  return &DAT_01dbe4c4;
}

// 00C8BB30  Trigger::cActAreaBarrierOff::vf08  size=1  [class]
void Trigger::cActAreaBarrierOff::vf08(void)

{
  return;
}

// 00C8BB40  Trigger::cActAreaBarrierOff::vf0C  size=1  [class]
void Trigger::cActAreaBarrierOff::vf0C(void)

{
  return;
}

// 00C8BB50  Trigger::cActAreaBarrierOff::vf10  size=1  [class]
void Trigger::cActAreaBarrierOff::vf10(void)

{
  return;
}

// 00C8BB60  Trigger::cActAreaBarrierOff::vf14  size=1  [class]
void Trigger::cActAreaBarrierOff::vf14(void)

{
  return;
}

// 00C8BB70  Trigger::cAction<Trigger::cActAreaBarrierOff>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActAreaBarrierOff>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8BB80  Trigger::cAction<Trigger::cActAreaBarrierOff>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActAreaBarrierOff>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8BB90  Trigger::cAction<Trigger::cActAreaBarrierOff>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActAreaBarrierOff>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8BBC0  Trigger::cAction<Trigger::cActResultSetDisp>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActResultSetDisp>::vf00(void)

{
  return &DAT_01b375a8;
}

// 00C8BBD0  Trigger::cActResultSetDisp::vf08  size=1  [class]
void Trigger::cActResultSetDisp::vf08(void)

{
  return;
}

// 00C8BBE0  Trigger::cActResultSetDisp::vf0C  size=1  [class]
void Trigger::cActResultSetDisp::vf0C(void)

{
  return;
}

// 00C8BBF0  Trigger::cActResultSetDisp::vf10  size=1  [class]
void Trigger::cActResultSetDisp::vf10(void)

{
  return;
}

// 00C8BC00  Trigger::cActResultSetDisp::vf14  size=1  [class]
void Trigger::cActResultSetDisp::vf14(void)

{
  return;
}

// 00C8BC10  Trigger::cAction<Trigger::cActResultSetDisp>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActResultSetDisp>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8BC20  Trigger::cAction<Trigger::cActResultSetDisp>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActResultSetDisp>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8BC30  Trigger::cAction<Trigger::cActResultSetDisp>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActResultSetDisp>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8BC90  Trigger::cAction<Trigger::cActEmAnimation>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActEmAnimation>::vf00(void)

{
  return &DAT_01dbe4c0;
}

// 00C8BCA0  Trigger::cActEmAnimation::vf08  size=1  [class]
void Trigger::cActEmAnimation::vf08(void)

{
  return;
}

// 00C8BCB0  Trigger::cActEmAnimation::vf0C  size=1  [class]
void Trigger::cActEmAnimation::vf0C(void)

{
  return;
}

// 00C8BCC0  Trigger::cActEmAnimation::vf10  size=1  [class]
void Trigger::cActEmAnimation::vf10(void)

{
  return;
}

// 00C8BCD0  Trigger::cActEmAnimation::vf14  size=1  [class]
void Trigger::cActEmAnimation::vf14(void)

{
  return;
}

// 00C8BCE0  Trigger::cAction<Trigger::cActEmAnimation>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActEmAnimation>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8BCF0  Trigger::cAction<Trigger::cActEmAnimation>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActEmAnimation>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8BD00  Trigger::cAction<Trigger::cActEmAnimation>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActEmAnimation>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8BD30  Trigger::cAction<Trigger::cActPlAnimation>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActPlAnimation>::vf00(void)

{
  return &DAT_01dbe4bc;
}

// 00C8BD40  Trigger::cActPlAnimation::vf08  size=1  [class]
void Trigger::cActPlAnimation::vf08(void)

{
  return;
}

// 00C8BD50  Trigger::cActPlAnimation::vf0C  size=1  [class]
void Trigger::cActPlAnimation::vf0C(void)

{
  return;
}

// 00C8BD60  Trigger::cActPlAnimation::vf10  size=1  [class]
void Trigger::cActPlAnimation::vf10(void)

{
  return;
}

// 00C8BD70  Trigger::cActPlAnimation::vf14  size=1  [class]
void Trigger::cActPlAnimation::vf14(void)

{
  return;
}

// 00C8BD80  Trigger::cAction<Trigger::cActPlAnimation>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActPlAnimation>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8BD90  Trigger::cAction<Trigger::cActPlAnimation>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActPlAnimation>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8BDA0  Trigger::cAction<Trigger::cActPlAnimation>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActPlAnimation>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8BDD0  Trigger::cAction<Trigger::cActResultSetEndDisp>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActResultSetEndDisp>::vf00(void)

{
  return &DAT_01dbe4b8;
}

// 00C8BDE0  Trigger::cActResultSetEndDisp::vf08  size=1  [class]
void Trigger::cActResultSetEndDisp::vf08(void)

{
  return;
}

// 00C8BDF0  Trigger::cActResultSetEndDisp::vf0C  size=1  [class]
void Trigger::cActResultSetEndDisp::vf0C(void)

{
  return;
}

// 00C8BE00  Trigger::cActResultSetEndDisp::vf10  size=1  [class]
void Trigger::cActResultSetEndDisp::vf10(void)

{
  return;
}

// 00C8BE10  Trigger::cActResultSetEndDisp::vf14  size=1  [class]
void Trigger::cActResultSetEndDisp::vf14(void)

{
  return;
}

// 00C8BE20  Trigger::cAction<Trigger::cActResultSetEndDisp>::vf1C  size=10  [class]
void __thiscall
Trigger::cAction<Trigger::cActResultSetEndDisp>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8BE30  Trigger::cAction<Trigger::cActResultSetEndDisp>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActResultSetEndDisp>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8BE40  Trigger::cAction<Trigger::cActResultSetEndDisp>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActResultSetEndDisp>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8BE70  Trigger::cAction<Trigger::cActPlayerDeadDemo>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActPlayerDeadDemo>::vf00(void)

{
  return &DAT_01dbe4b4;
}

// 00C8BE80  Trigger::cActPlayerDeadDemo::vf08  size=1  [class]
void Trigger::cActPlayerDeadDemo::vf08(void)

{
  return;
}

// 00C8BE90  Trigger::cActPlayerDeadDemo::vf0C  size=1  [class]
void Trigger::cActPlayerDeadDemo::vf0C(void)

{
  return;
}

// 00C8BEA0  Trigger::cActPlayerDeadDemo::vf10  size=1  [class]
void Trigger::cActPlayerDeadDemo::vf10(void)

{
  return;
}

// 00C8BEB0  Trigger::cActPlayerDeadDemo::vf14  size=1  [class]
void Trigger::cActPlayerDeadDemo::vf14(void)

{
  return;
}

// 00C8BEC0  Trigger::cAction<Trigger::cActPlayerDeadDemo>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActPlayerDeadDemo>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8BED0  Trigger::cAction<Trigger::cActPlayerDeadDemo>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActPlayerDeadDemo>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8BEE0  Trigger::cAction<Trigger::cActPlayerDeadDemo>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActPlayerDeadDemo>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8BF10  Trigger::cAction<Trigger::cActHackEnd>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActHackEnd>::vf00(void)

{
  return &DAT_01dbe4b0;
}

// 00C8BF20  Trigger::cActHackEnd::vf08  size=1  [class]
void Trigger::cActHackEnd::vf08(void)

{
  return;
}

// 00C8BF30  Trigger::cActHackEnd::vf0C  size=1  [class]
void Trigger::cActHackEnd::vf0C(void)

{
  return;
}

// 00C8BF40  Trigger::cActHackEnd::vf10  size=1  [class]
void Trigger::cActHackEnd::vf10(void)

{
  return;
}

// 00C8BF50  Trigger::cActHackEnd::vf14  size=1  [class]
void Trigger::cActHackEnd::vf14(void)

{
  return;
}

// 00C8BF60  Trigger::cAction<Trigger::cActHackEnd>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActHackEnd>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8BF70  Trigger::cAction<Trigger::cActHackEnd>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActHackEnd>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8BF80  Trigger::cAction<Trigger::cActHackEnd>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActHackEnd>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8BFB0  Trigger::cAction<Trigger::cActCamFlag>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActCamFlag>::vf00(void)

{
  return &DAT_01dbe4ac;
}

// 00C8BFC0  Trigger::cActCamFlag::vf08  size=1  [class]
void Trigger::cActCamFlag::vf08(void)

{
  return;
}

// 00C8BFD0  Trigger::cActCamFlag::vf0C  size=1  [class]
void Trigger::cActCamFlag::vf0C(void)

{
  return;
}

// 00C8BFE0  Trigger::cActCamFlag::vf10  size=1  [class]
void Trigger::cActCamFlag::vf10(void)

{
  return;
}

// 00C8BFF0  Trigger::cActCamFlag::vf14  size=1  [class]
void Trigger::cActCamFlag::vf14(void)

{
  return;
}

// 00C8C000  Trigger::cAction<Trigger::cActCamFlag>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActCamFlag>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8C010  Trigger::cAction<Trigger::cActCamFlag>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActCamFlag>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8C020  Trigger::cAction<Trigger::cActCamFlag>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActCamFlag>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8C050  Trigger::cAction<Trigger::cActObjAttach>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActObjAttach>::vf00(void)

{
  return &DAT_01dbe4a8;
}

// 00C8C060  Trigger::cActObjAttach::vf08  size=1  [class]
void Trigger::cActObjAttach::vf08(void)

{
  return;
}

// 00C8C070  Trigger::cActObjAttach::vf0C  size=1  [class]
void Trigger::cActObjAttach::vf0C(void)

{
  return;
}

// 00C8C080  Trigger::cActObjAttach::vf10  size=1  [class]
void Trigger::cActObjAttach::vf10(void)

{
  return;
}

// 00C8C090  Trigger::cActObjAttach::vf14  size=1  [class]
void Trigger::cActObjAttach::vf14(void)

{
  return;
}

// 00C8C0A0  Trigger::cAction<Trigger::cActObjAttach>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActObjAttach>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8C0B0  Trigger::cAction<Trigger::cActObjAttach>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActObjAttach>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8C0C0  Trigger::cAction<Trigger::cActObjAttach>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActObjAttach>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8C0F0  Trigger::cAction<Trigger::cActQTEButtonDisp>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActQTEButtonDisp>::vf00(void)

{
  return &DAT_01dbe4a4;
}

// 00C8C100  Trigger::cActQTEButtonDisp::vf08  size=1  [class]
void Trigger::cActQTEButtonDisp::vf08(void)

{
  return;
}

// 00C8C110  Trigger::cActQTEButtonDisp::vf0C  size=1  [class]
void Trigger::cActQTEButtonDisp::vf0C(void)

{
  return;
}

// 00C8C120  Trigger::cActQTEButtonDisp::vf10  size=1  [class]
void Trigger::cActQTEButtonDisp::vf10(void)

{
  return;
}

// 00C8C130  Trigger::cActQTEButtonDisp::vf14  size=1  [class]
void Trigger::cActQTEButtonDisp::vf14(void)

{
  return;
}

// 00C8C140  Trigger::cAction<Trigger::cActQTEButtonDisp>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActQTEButtonDisp>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8C150  Trigger::cAction<Trigger::cActQTEButtonDisp>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActQTEButtonDisp>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8C160  Trigger::cAction<Trigger::cActQTEButtonDisp>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActQTEButtonDisp>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8C190  Trigger::cAction<Trigger::cActMoviePlay>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActMoviePlay>::vf00(void)

{
  return &DAT_01dbe4a0;
}

// 00C8C1A0  Trigger::cActMoviePlay::vf08  size=1  [class]
void Trigger::cActMoviePlay::vf08(void)

{
  return;
}

// 00C8C1B0  Trigger::cActMoviePlay::vf0C  size=1  [class]
void Trigger::cActMoviePlay::vf0C(void)

{
  return;
}

// 00C8C1C0  Trigger::cActMoviePlay::vf10  size=1  [class]
void Trigger::cActMoviePlay::vf10(void)

{
  return;
}

// 00C8C1D0  Trigger::cActMoviePlay::vf14  size=1  [class]
void Trigger::cActMoviePlay::vf14(void)

{
  return;
}

// 00C8C1E0  Trigger::cAction<Trigger::cActMoviePlay>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActMoviePlay>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8C1F0  Trigger::cAction<Trigger::cActMoviePlay>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActMoviePlay>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8C200  Trigger::cAction<Trigger::cActMoviePlay>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActMoviePlay>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8C230  Trigger::cAction<Trigger::cActForceBattleFlag>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActForceBattleFlag>::vf00(void)

{
  return &DAT_01dbe49c;
}

// 00C8C240  Trigger::cActForceBattleFlag::vf08  size=1  [class]
void Trigger::cActForceBattleFlag::vf08(void)

{
  return;
}

// 00C8C250  Trigger::cActForceBattleFlag::vf0C  size=1  [class]
void Trigger::cActForceBattleFlag::vf0C(void)

{
  return;
}

// 00C8C260  Trigger::cActForceBattleFlag::vf10  size=1  [class]
void Trigger::cActForceBattleFlag::vf10(void)

{
  return;
}

// 00C8C270  Trigger::cActForceBattleFlag::vf14  size=1  [class]
void Trigger::cActForceBattleFlag::vf14(void)

{
  return;
}

// 00C8C280  Trigger::cAction<Trigger::cActForceBattleFlag>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActForceBattleFlag>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8C290  Trigger::cAction<Trigger::cActForceBattleFlag>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActForceBattleFlag>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8C2A0  Trigger::cAction<Trigger::cActForceBattleFlag>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActForceBattleFlag>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8C2D0  Trigger::cAction<Trigger::cActGimmickEnable>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActGimmickEnable>::vf00(void)

{
  return &DAT_01dbe498;
}

// 00C8C2E0  Trigger::cActGimmickEnable::vf08  size=1  [class]
void Trigger::cActGimmickEnable::vf08(void)

{
  return;
}

// 00C8C2F0  Trigger::cActGimmickEnable::vf0C  size=1  [class]
void Trigger::cActGimmickEnable::vf0C(void)

{
  return;
}

// 00C8C300  Trigger::cActGimmickEnable::vf10  size=1  [class]
void Trigger::cActGimmickEnable::vf10(void)

{
  return;
}

// 00C8C310  Trigger::cActGimmickEnable::vf14  size=1  [class]
void Trigger::cActGimmickEnable::vf14(void)

{
  return;
}

// 00C8C320  Trigger::cAction<Trigger::cActGimmickEnable>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActGimmickEnable>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8C330  Trigger::cAction<Trigger::cActGimmickEnable>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActGimmickEnable>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8C340  Trigger::cAction<Trigger::cActGimmickEnable>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActGimmickEnable>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8C370  Trigger::cAction<Trigger::cActFileRead>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActFileRead>::vf00(void)

{
  return &DAT_01dbe494;
}

// 00C8C380  Trigger::cActFileRead::vf08  size=1  [class]
void Trigger::cActFileRead::vf08(void)

{
  return;
}

// 00C8C390  Trigger::cActFileRead::vf0C  size=1  [class]
void Trigger::cActFileRead::vf0C(void)

{
  return;
}

// 00C8C3A0  Trigger::cActFileRead::vf10  size=1  [class]
void Trigger::cActFileRead::vf10(void)

{
  return;
}

// 00C8C3B0  Trigger::cActFileRead::vf14  size=1  [class]
void Trigger::cActFileRead::vf14(void)

{
  return;
}

// 00C8C3C0  Trigger::cAction<Trigger::cActFileRead>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActFileRead>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8C3D0  Trigger::cAction<Trigger::cActFileRead>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActFileRead>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8C3E0  Trigger::cAction<Trigger::cActFileRead>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActFileRead>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8C410  Trigger::cAction<Trigger::cActFileRelease>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActFileRelease>::vf00(void)

{
  return &DAT_01dbe490;
}

// 00C8C420  Trigger::cActFileRelease::vf08  size=1  [class]
void Trigger::cActFileRelease::vf08(void)

{
  return;
}

// 00C8C430  Trigger::cActFileRelease::vf0C  size=1  [class]
void Trigger::cActFileRelease::vf0C(void)

{
  return;
}

// 00C8C440  Trigger::cActFileRelease::vf10  size=1  [class]
void Trigger::cActFileRelease::vf10(void)

{
  return;
}

// 00C8C450  Trigger::cActFileRelease::vf14  size=1  [class]
void Trigger::cActFileRelease::vf14(void)

{
  return;
}

// 00C8C460  Trigger::cAction<Trigger::cActFileRelease>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActFileRelease>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8C470  Trigger::cAction<Trigger::cActFileRelease>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActFileRelease>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8C480  Trigger::cAction<Trigger::cActFileRelease>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActFileRelease>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8C4B0  Trigger::cAction<Trigger::cActSceneMovie>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActSceneMovie>::vf00(void)

{
  return &DAT_01dbe48c;
}

// 00C8C4C0  Trigger::cActSceneMovie::vf08  size=1  [class]
void Trigger::cActSceneMovie::vf08(void)

{
  return;
}

// 00C8C4D0  Trigger::cActSceneMovie::vf0C  size=1  [class]
void Trigger::cActSceneMovie::vf0C(void)

{
  return;
}

// 00C8C4E0  Trigger::cActSceneMovie::vf10  size=1  [class]
void Trigger::cActSceneMovie::vf10(void)

{
  return;
}

// 00C8C4F0  Trigger::cActSceneMovie::vf14  size=1  [class]
void Trigger::cActSceneMovie::vf14(void)

{
  return;
}

// 00C8C500  Trigger::cAction<Trigger::cActSceneMovie>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActSceneMovie>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8C510  Trigger::cAction<Trigger::cActSceneMovie>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActSceneMovie>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8C520  Trigger::cAction<Trigger::cActSceneMovie>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActSceneMovie>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8C550  Trigger::cAction<Trigger::cActStopObjectType>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActStopObjectType>::vf00(void)

{
  return &DAT_01dbe488;
}

// 00C8C560  Trigger::cActStopObjectType::vf08  size=1  [class]
void Trigger::cActStopObjectType::vf08(void)

{
  return;
}

// 00C8C570  Trigger::cActStopObjectType::vf0C  size=1  [class]
void Trigger::cActStopObjectType::vf0C(void)

{
  return;
}

// 00C8C580  Trigger::cActStopObjectType::vf10  size=1  [class]
void Trigger::cActStopObjectType::vf10(void)

{
  return;
}

// 00C8C590  Trigger::cActStopObjectType::vf14  size=1  [class]
void Trigger::cActStopObjectType::vf14(void)

{
  return;
}

// 00C8C5A0  Trigger::cAction<Trigger::cActStopObjectType>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActStopObjectType>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8C5B0  Trigger::cAction<Trigger::cActStopObjectType>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActStopObjectType>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8C5C0  Trigger::cAction<Trigger::cActStopObjectType>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActStopObjectType>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8C5F0  Trigger::cAction<Trigger::cActMvObjectType>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActMvObjectType>::vf00(void)

{
  return &DAT_01dbe484;
}

// 00C8C600  Trigger::cActMvObjectType::vf08  size=1  [class]
void Trigger::cActMvObjectType::vf08(void)

{
  return;
}

// 00C8C610  Trigger::cActMvObjectType::vf0C  size=1  [class]
void Trigger::cActMvObjectType::vf0C(void)

{
  return;
}

// 00C8C620  Trigger::cActMvObjectType::vf10  size=1  [class]
void Trigger::cActMvObjectType::vf10(void)

{
  return;
}

// 00C8C630  Trigger::cActMvObjectType::vf14  size=1  [class]
void Trigger::cActMvObjectType::vf14(void)

{
  return;
}

// 00C8C640  Trigger::cAction<Trigger::cActMvObjectType>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActMvObjectType>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8C650  Trigger::cAction<Trigger::cActMvObjectType>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActMvObjectType>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8C660  Trigger::cAction<Trigger::cActMvObjectType>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActMvObjectType>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8C690  Trigger::cActGameFlagOn::vf00  size=6  [class]
undefined * Trigger::cActGameFlagOn::vf00(void)

{
  return &DAT_01dbe480;
}

// 00C8C6A0  Trigger::cAction<Trigger::cActGameFlagOn>::vf08  size=1  [class]
void Trigger::cAction<Trigger::cActGameFlagOn>::vf08(void)

{
  return;
}

// 00C8C6B0  Trigger::cActGameFlagOn::vf0C  size=1  [class]
void Trigger::cActGameFlagOn::vf0C(void)

{
  return;
}

// 00C8C6C0  Trigger::cActGameFlagOn::vf10  size=1  [class]
void Trigger::cActGameFlagOn::vf10(void)

{
  return;
}

// 00C8C6D0  Trigger::cActGameFlagOn::vf14  size=1  [class]
void Trigger::cActGameFlagOn::vf14(void)

{
  return;
}

// 00C8C6E0  Trigger::cAction<Trigger::cActGameFlagOn>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActGameFlagOn>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8C6F0  Trigger::cAction<Trigger::cActGameFlagOn>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActGameFlagOn>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8C700  Trigger::cAction<Trigger::cActGameFlagOn>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActGameFlagOn>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8C730  Trigger::cActGameFlagOff::vf00  size=6  [class]
undefined * Trigger::cActGameFlagOff::vf00(void)

{
  return &DAT_01dbe47c;
}

// 00C8C740  Trigger::cAction<Trigger::cActGameFlagOff>::vf08  size=1  [class]
void Trigger::cAction<Trigger::cActGameFlagOff>::vf08(void)

{
  return;
}

// 00C8C750  Trigger::cActGameFlagOff::vf0C  size=1  [class]
void Trigger::cActGameFlagOff::vf0C(void)

{
  return;
}

// 00C8C760  Trigger::cActGameFlagOff::vf10  size=1  [class]
void Trigger::cActGameFlagOff::vf10(void)

{
  return;
}

// 00C8C770  Trigger::cActGameFlagOff::vf14  size=1  [class]
void Trigger::cActGameFlagOff::vf14(void)

{
  return;
}

// 00C8C780  Trigger::cAction<Trigger::cActGameFlagOff>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActGameFlagOff>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8C790  Trigger::cAction<Trigger::cActGameFlagOff>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActGameFlagOff>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8C7A0  Trigger::cAction<Trigger::cActGameFlagOff>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActGameFlagOff>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8C7D0  Trigger::cActSendSignal::vf00  size=6  [class]
undefined * Trigger::cActSendSignal::vf00(void)

{
  return &DAT_01dbe478;
}

// 00C8C7E0  Trigger::cAction<Trigger::cActSendSignal>::vf08  size=1  [class]
void Trigger::cAction<Trigger::cActSendSignal>::vf08(void)

{
  return;
}

// 00C8C7F0  Trigger::cActSendSignal::vf0C  size=1  [class]
void Trigger::cActSendSignal::vf0C(void)

{
  return;
}

// 00C8C800  Trigger::cActSendSignal::vf10  size=1  [class]
void Trigger::cActSendSignal::vf10(void)

{
  return;
}

// 00C8C810  Trigger::cActSendSignal::vf14  size=1  [class]
void Trigger::cActSendSignal::vf14(void)

{
  return;
}

// 00C8C820  Trigger::cAction<Trigger::cActSendSignal>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActSendSignal>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8C830  Trigger::cAction<Trigger::cActSendSignal>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActSendSignal>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8C840  Trigger::cAction<Trigger::cActSendSignal>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActSendSignal>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8C870  Trigger::cActSendSignalContext::vf00  size=6  [class]
undefined * Trigger::cActSendSignalContext::vf00(void)

{
  return &DAT_01dbe474;
}

// 00C8C880  Trigger::cAction<Trigger::cActSendSignalContext>::vf08  size=1  [class]
void Trigger::cAction<Trigger::cActSendSignalContext>::vf08(void)

{
  return;
}

// 00C8C890  Trigger::cActSendSignalContext::vf0C  size=1  [class]
void Trigger::cActSendSignalContext::vf0C(void)

{
  return;
}

// 00C8C8A0  Trigger::cActSendSignalContext::vf10  size=1  [class]
void Trigger::cActSendSignalContext::vf10(void)

{
  return;
}

// 00C8C8B0  Trigger::cActSendSignalContext::vf14  size=1  [class]
void Trigger::cActSendSignalContext::vf14(void)

{
  return;
}

// 00C8C8C0  Trigger::cAction<Trigger::cActSendSignalContext>::vf1C  size=10  [class]
void __thiscall
Trigger::cAction<Trigger::cActSendSignalContext>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8C8D0  Trigger::cAction<Trigger::cActSendSignalContext>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActSendSignalContext>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8C8E0  Trigger::cAction<Trigger::cActSendSignalContext>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActSendSignalContext>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8C910  Trigger::cAction<Trigger::cActCodecStart>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActCodecStart>::vf00(void)

{
  return &DAT_01dbe470;
}

// 00C8C920  Trigger::cActCodecStart::vf08  size=1  [class]
void Trigger::cActCodecStart::vf08(void)

{
  return;
}

// 00C8C930  Trigger::cActCodecStart::vf0C  size=1  [class]
void Trigger::cActCodecStart::vf0C(void)

{
  return;
}

// 00C8C940  Trigger::cActCodecStart::vf10  size=1  [class]
void Trigger::cActCodecStart::vf10(void)

{
  return;
}

// 00C8C950  Trigger::cActCodecStart::vf14  size=1  [class]
void Trigger::cActCodecStart::vf14(void)

{
  return;
}

// 00C8C960  Trigger::cAction<Trigger::cActCodecStart>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActCodecStart>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8C970  Trigger::cAction<Trigger::cActCodecStart>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActCodecStart>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8C980  Trigger::cAction<Trigger::cActCodecStart>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActCodecStart>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8C9B0  Trigger::cAction<Trigger::cActObjMeshTrans>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActObjMeshTrans>::vf00(void)

{
  return &DAT_01dbe46c;
}

// 00C8C9C0  Trigger::cActObjMeshTrans::vf08  size=1  [class]
void Trigger::cActObjMeshTrans::vf08(void)

{
  return;
}

// 00C8C9D0  Trigger::cActObjMeshTrans::vf0C  size=1  [class]
void Trigger::cActObjMeshTrans::vf0C(void)

{
  return;
}

// 00C8C9E0  Trigger::cActObjMeshTrans::vf10  size=1  [class]
void Trigger::cActObjMeshTrans::vf10(void)

{
  return;
}

// 00C8C9F0  Trigger::cActObjMeshTrans::vf14  size=1  [class]
void Trigger::cActObjMeshTrans::vf14(void)

{
  return;
}

// 00C8CA00  Trigger::cAction<Trigger::cActObjMeshTrans>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActObjMeshTrans>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8CA10  Trigger::cAction<Trigger::cActObjMeshTrans>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActObjMeshTrans>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8CA20  Trigger::cAction<Trigger::cActObjMeshTrans>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActObjMeshTrans>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8CA50  Trigger::cActPlayerEffectOn::vf00  size=6  [class]
undefined * Trigger::cActPlayerEffectOn::vf00(void)

{
  return &DAT_01dbe468;
}

// 00C8CA60  Trigger::cAction<Trigger::cActPlayerEffectOn>::vf08  size=1  [class]
void Trigger::cAction<Trigger::cActPlayerEffectOn>::vf08(void)

{
  return;
}

// 00C8CA70  Trigger::cActPlayerEffectOn::vf0C  size=1  [class]
void Trigger::cActPlayerEffectOn::vf0C(void)

{
  return;
}

// 00C8CA80  Trigger::cActPlayerEffectOn::vf10  size=1  [class]
void Trigger::cActPlayerEffectOn::vf10(void)

{
  return;
}

// 00C8CA90  Trigger::cActPlayerEffectOn::vf14  size=1  [class]
void Trigger::cActPlayerEffectOn::vf14(void)

{
  return;
}

// 00C8CAA0  Trigger::cAction<Trigger::cActPlayerEffectOn>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActPlayerEffectOn>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8CAB0  Trigger::cAction<Trigger::cActPlayerEffectOn>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActPlayerEffectOn>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8CAC0  Trigger::cAction<Trigger::cActPlayerEffectOn>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActPlayerEffectOn>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8CAF0  Trigger::cActPlayerEffectOff::vf00  size=6  [class]
undefined * Trigger::cActPlayerEffectOff::vf00(void)

{
  return &DAT_01dbe464;
}

// 00C8CB00  Trigger::cAction<Trigger::cActPlayerEffectOff>::vf08  size=1  [class]
void Trigger::cAction<Trigger::cActPlayerEffectOff>::vf08(void)

{
  return;
}

// 00C8CB10  Trigger::cActPlayerEffectOff::vf0C  size=1  [class]
void Trigger::cActPlayerEffectOff::vf0C(void)

{
  return;
}

// 00C8CB20  Trigger::cActPlayerEffectOff::vf10  size=1  [class]
void Trigger::cActPlayerEffectOff::vf10(void)

{
  return;
}

// 00C8CB30  Trigger::cActPlayerEffectOff::vf14  size=1  [class]
void Trigger::cActPlayerEffectOff::vf14(void)

{
  return;
}

// 00C8CB40  Trigger::cAction<Trigger::cActPlayerEffectOff>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActPlayerEffectOff>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8CB50  Trigger::cAction<Trigger::cActPlayerEffectOff>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActPlayerEffectOff>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8CB60  Trigger::cAction<Trigger::cActPlayerEffectOff>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActPlayerEffectOff>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8CB90  Trigger::cAction<Trigger::cActQTEButtonDispOff>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActQTEButtonDispOff>::vf00(void)

{
  return &DAT_01dbe460;
}

// 00C8CBA0  Trigger::cActQTEButtonDispOff::vf08  size=1  [class]
void Trigger::cActQTEButtonDispOff::vf08(void)

{
  return;
}

// 00C8CBB0  Trigger::cActQTEButtonDispOff::vf0C  size=1  [class]
void Trigger::cActQTEButtonDispOff::vf0C(void)

{
  return;
}

// 00C8CBC0  Trigger::cActQTEButtonDispOff::vf10  size=1  [class]
void Trigger::cActQTEButtonDispOff::vf10(void)

{
  return;
}

// 00C8CBD0  Trigger::cActQTEButtonDispOff::vf14  size=1  [class]
void Trigger::cActQTEButtonDispOff::vf14(void)

{
  return;
}

// 00C8CBE0  Trigger::cAction<Trigger::cActQTEButtonDispOff>::vf1C  size=10  [class]
void __thiscall
Trigger::cAction<Trigger::cActQTEButtonDispOff>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8CBF0  Trigger::cAction<Trigger::cActQTEButtonDispOff>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActQTEButtonDispOff>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8CC00  Trigger::cAction<Trigger::cActQTEButtonDispOff>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActQTEButtonDispOff>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8CC30  Trigger::cAction<Trigger::cActObjectivePosSet>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActObjectivePosSet>::vf00(void)

{
  return &DAT_01dbe45c;
}

// 00C8CC40  Trigger::cActObjectivePosSet::vf08  size=1  [class]
void Trigger::cActObjectivePosSet::vf08(void)

{
  return;
}

// 00C8CC50  Trigger::cActObjectivePosSet::vf0C  size=1  [class]
void Trigger::cActObjectivePosSet::vf0C(void)

{
  return;
}

// 00C8CC60  Trigger::cActObjectivePosSet::vf10  size=1  [class]
void Trigger::cActObjectivePosSet::vf10(void)

{
  return;
}

// 00C8CC70  Trigger::cActObjectivePosSet::vf14  size=1  [class]
void Trigger::cActObjectivePosSet::vf14(void)

{
  return;
}

// 00C8CC80  Trigger::cAction<Trigger::cActObjectivePosSet>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActObjectivePosSet>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8CC90  Trigger::cAction<Trigger::cActObjectivePosSet>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActObjectivePosSet>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8CCA0  Trigger::cAction<Trigger::cActObjectivePosSet>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActObjectivePosSet>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8CCD0  Trigger::cAction<Trigger::cActJammingDispStart>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActJammingDispStart>::vf00(void)

{
  return &DAT_01dbe458;
}

// 00C8CCE0  Trigger::cActJammingDispStart::vf08  size=1  [class]
void Trigger::cActJammingDispStart::vf08(void)

{
  return;
}

// 00C8CCF0  Trigger::cActJammingDispStart::vf0C  size=1  [class]
void Trigger::cActJammingDispStart::vf0C(void)

{
  return;
}

// 00C8CD00  Trigger::cActJammingDispStart::vf10  size=1  [class]
void Trigger::cActJammingDispStart::vf10(void)

{
  return;
}

// 00C8CD10  Trigger::cActJammingDispStart::vf14  size=1  [class]
void Trigger::cActJammingDispStart::vf14(void)

{
  return;
}

// 00C8CD20  Trigger::cAction<Trigger::cActJammingDispStart>::vf1C  size=10  [class]
void __thiscall
Trigger::cAction<Trigger::cActJammingDispStart>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8CD30  Trigger::cAction<Trigger::cActJammingDispStart>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActJammingDispStart>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8CD40  Trigger::cAction<Trigger::cActJammingDispStart>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActJammingDispStart>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8CD70  Trigger::cAction<Trigger::cActJammingDispEnd>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActJammingDispEnd>::vf00(void)

{
  return &DAT_01dbe454;
}

// 00C8CD80  Trigger::cActJammingDispEnd::vf08  size=1  [class]
void Trigger::cActJammingDispEnd::vf08(void)

{
  return;
}

// 00C8CD90  Trigger::cActJammingDispEnd::vf0C  size=1  [class]
void Trigger::cActJammingDispEnd::vf0C(void)

{
  return;
}

// 00C8CDA0  Trigger::cActJammingDispEnd::vf10  size=1  [class]
void Trigger::cActJammingDispEnd::vf10(void)

{
  return;
}

// 00C8CDB0  Trigger::cActJammingDispEnd::vf14  size=1  [class]
void Trigger::cActJammingDispEnd::vf14(void)

{
  return;
}

// 00C8CDC0  Trigger::cAction<Trigger::cActJammingDispEnd>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActJammingDispEnd>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8CDD0  Trigger::cAction<Trigger::cActJammingDispEnd>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActJammingDispEnd>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8CDE0  Trigger::cAction<Trigger::cActJammingDispEnd>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActJammingDispEnd>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8CE10  Trigger::cAction<Trigger::cActReqGpBehaviorInstruction>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActReqGpBehaviorInstruction>::vf00(void)

{
  return &DAT_01dbe450;
}

// 00C8CE20  Trigger::cActReqGpBehaviorInstruction::vf08  size=1  [class]
void Trigger::cActReqGpBehaviorInstruction::vf08(void)

{
  return;
}

// 00C8CE30  Trigger::cActReqGpBehaviorInstruction::vf0C  size=1  [class]
void Trigger::cActReqGpBehaviorInstruction::vf0C(void)

{
  return;
}

// 00C8CE40  Trigger::cActReqGpBehaviorInstruction::vf10  size=1  [class]
void Trigger::cActReqGpBehaviorInstruction::vf10(void)

{
  return;
}

// 00C8CE50  Trigger::cActReqGpBehaviorInstruction::vf14  size=1  [class]
void Trigger::cActReqGpBehaviorInstruction::vf14(void)

{
  return;
}

// 00C8CE60  Trigger::cAction<Trigger::cActReqGpBehaviorInstruction>::vf1C  size=10  [class]
void __thiscall
Trigger::cAction<Trigger::cActReqGpBehaviorInstruction>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8CE70  Trigger::cAction<Trigger::cActReqGpBehaviorInstruction>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActReqGpBehaviorInstruction>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8CE80  Trigger::cAction<Trigger::cActReqGpBehaviorInstruction>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActReqGpBehaviorInstruction>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8CEB0  Trigger::cActStaFlagOff::vf00  size=6  [class]
undefined * Trigger::cActStaFlagOff::vf00(void)

{
  return &DAT_01dbe44c;
}

// 00C8CEC0  Trigger::cAction<Trigger::cActStaFlagOff>::vf08  size=1  [class]
void Trigger::cAction<Trigger::cActStaFlagOff>::vf08(void)

{
  return;
}

// 00C8CED0  Trigger::cActStaFlagOff::vf0C  size=1  [class]
void Trigger::cActStaFlagOff::vf0C(void)

{
  return;
}

// 00C8CEE0  Trigger::cActStaFlagOff::vf10  size=1  [class]
void Trigger::cActStaFlagOff::vf10(void)

{
  return;
}

// 00C8CEF0  Trigger::cActStaFlagOff::vf14  size=1  [class]
void Trigger::cActStaFlagOff::vf14(void)

{
  return;
}

// 00C8CF00  Trigger::cAction<Trigger::cActStaFlagOff>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActStaFlagOff>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8CF10  Trigger::cAction<Trigger::cActStaFlagOff>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActStaFlagOff>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8CF20  Trigger::cAction<Trigger::cActStaFlagOff>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActStaFlagOff>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8CF50  Trigger::cAction<Trigger::cActUIAnimStart>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActUIAnimStart>::vf00(void)

{
  return &DAT_01dbe448;
}

// 00C8CF60  Trigger::cActUIAnimStart::vf08  size=1  [class]
void Trigger::cActUIAnimStart::vf08(void)

{
  return;
}

// 00C8CF70  Trigger::cActUIAnimStart::vf0C  size=1  [class]
void Trigger::cActUIAnimStart::vf0C(void)

{
  return;
}

// 00C8CF80  Trigger::cActUIAnimStart::vf10  size=1  [class]
void Trigger::cActUIAnimStart::vf10(void)

{
  return;
}

// 00C8CF90  Trigger::cActUIAnimStart::vf14  size=1  [class]
void Trigger::cActUIAnimStart::vf14(void)

{
  return;
}

// 00C8CFA0  Trigger::cAction<Trigger::cActUIAnimStart>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActUIAnimStart>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8CFB0  Trigger::cAction<Trigger::cActUIAnimStart>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActUIAnimStart>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8CFC0  Trigger::cAction<Trigger::cActUIAnimStart>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActUIAnimStart>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8CFF0  Trigger::cAction<Trigger::cActSetNextCodec>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActSetNextCodec>::vf00(void)

{
  return &DAT_01dbe444;
}

// 00C8D000  Trigger::cActSetNextCodec::vf08  size=1  [class]
void Trigger::cActSetNextCodec::vf08(void)

{
  return;
}

// 00C8D010  Trigger::cActSetNextCodec::vf0C  size=1  [class]
void Trigger::cActSetNextCodec::vf0C(void)

{
  return;
}

// 00C8D020  Trigger::cActSetNextCodec::vf10  size=1  [class]
void Trigger::cActSetNextCodec::vf10(void)

{
  return;
}

// 00C8D030  Trigger::cActSetNextCodec::vf14  size=1  [class]
void Trigger::cActSetNextCodec::vf14(void)

{
  return;
}

// 00C8D040  Trigger::cAction<Trigger::cActSetNextCodec>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActSetNextCodec>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8D050  Trigger::cAction<Trigger::cActSetNextCodec>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActSetNextCodec>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8D060  Trigger::cAction<Trigger::cActSetNextCodec>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActSetNextCodec>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8D090  Trigger::cActStpFlagOff::vf00  size=6  [class]
undefined * Trigger::cActStpFlagOff::vf00(void)

{
  return &DAT_01dbe440;
}

// 00C8D0A0  Trigger::cAction<Trigger::cActStpFlagOff>::vf08  size=1  [class]
void Trigger::cAction<Trigger::cActStpFlagOff>::vf08(void)

{
  return;
}

// 00C8D0B0  Trigger::cActStpFlagOff::vf0C  size=1  [class]
void Trigger::cActStpFlagOff::vf0C(void)

{
  return;
}

// 00C8D0C0  Trigger::cActStpFlagOff::vf10  size=1  [class]
void Trigger::cActStpFlagOff::vf10(void)

{
  return;
}

// 00C8D0D0  Trigger::cActStpFlagOff::vf14  size=1  [class]
void Trigger::cActStpFlagOff::vf14(void)

{
  return;
}

// 00C8D0E0  Trigger::cAction<Trigger::cActStpFlagOff>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActStpFlagOff>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8D0F0  Trigger::cAction<Trigger::cActStpFlagOff>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActStpFlagOff>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8D100  Trigger::cAction<Trigger::cActStpFlagOff>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActStpFlagOff>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8D130  Trigger::cActStpFlagOn::vf00  size=6  [class]
undefined * Trigger::cActStpFlagOn::vf00(void)

{
  return &DAT_01dbe43c;
}

// 00C8D140  Trigger::cAction<Trigger::cActStpFlagOn>::vf08  size=1  [class]
void Trigger::cAction<Trigger::cActStpFlagOn>::vf08(void)

{
  return;
}

// 00C8D150  Trigger::cActStpFlagOn::vf0C  size=1  [class]
void Trigger::cActStpFlagOn::vf0C(void)

{
  return;
}

// 00C8D160  Trigger::cActStpFlagOn::vf10  size=1  [class]
void Trigger::cActStpFlagOn::vf10(void)

{
  return;
}

// 00C8D170  Trigger::cActStpFlagOn::vf14  size=1  [class]
void Trigger::cActStpFlagOn::vf14(void)

{
  return;
}

// 00C8D180  Trigger::cAction<Trigger::cActStpFlagOn>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActStpFlagOn>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8D190  Trigger::cAction<Trigger::cActStpFlagOn>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActStpFlagOn>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8D1A0  Trigger::cAction<Trigger::cActStpFlagOn>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActStpFlagOn>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8D1D0  Trigger::cAction<Trigger::cActSetUIAnimStartNone>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActSetUIAnimStartNone>::vf00(void)

{
  return &DAT_01dbe438;
}

// 00C8D1E0  Trigger::cActSetUIAnimStartNone::vf08  size=1  [class]
void Trigger::cActSetUIAnimStartNone::vf08(void)

{
  return;
}

// 00C8D1F0  Trigger::cActSetUIAnimStartNone::vf0C  size=1  [class]
void Trigger::cActSetUIAnimStartNone::vf0C(void)

{
  return;
}

// 00C8D200  Trigger::cActSetUIAnimStartNone::vf10  size=1  [class]
void Trigger::cActSetUIAnimStartNone::vf10(void)

{
  return;
}

// 00C8D210  Trigger::cActSetUIAnimStartNone::vf14  size=1  [class]
void Trigger::cActSetUIAnimStartNone::vf14(void)

{
  return;
}

// 00C8D220  Trigger::cAction<Trigger::cActSetUIAnimStartNone>::vf1C  size=10  [class]
void __thiscall
Trigger::cAction<Trigger::cActSetUIAnimStartNone>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8D230  Trigger::cAction<Trigger::cActSetUIAnimStartNone>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActSetUIAnimStartNone>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8D240  Trigger::cAction<Trigger::cActSetUIAnimStartNone>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActSetUIAnimStartNone>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8D270  Trigger::cAction<Trigger::cActSetGameoverNormalFlag>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActSetGameoverNormalFlag>::vf00(void)

{
  return &DAT_01dbe434;
}

// 00C8D280  Trigger::cActSetGameoverNormalFlag::vf08  size=1  [class]
void Trigger::cActSetGameoverNormalFlag::vf08(void)

{
  return;
}

// 00C8D290  Trigger::cActSetGameoverNormalFlag::vf0C  size=1  [class]
void Trigger::cActSetGameoverNormalFlag::vf0C(void)

{
  return;
}

// 00C8D2A0  Trigger::cActSetGameoverNormalFlag::vf10  size=1  [class]
void Trigger::cActSetGameoverNormalFlag::vf10(void)

{
  return;
}

// 00C8D2B0  Trigger::cActSetGameoverNormalFlag::vf14  size=1  [class]
void Trigger::cActSetGameoverNormalFlag::vf14(void)

{
  return;
}

// 00C8D2C0  Trigger::cAction<Trigger::cActSetGameoverNormalFlag>::vf1C  size=10  [class]
void __thiscall
Trigger::cAction<Trigger::cActSetGameoverNormalFlag>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8D2D0  Trigger::cAction<Trigger::cActSetGameoverNormalFlag>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActSetGameoverNormalFlag>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8D2E0  Trigger::cAction<Trigger::cActSetGameoverNormalFlag>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActSetGameoverNormalFlag>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8D310  Trigger::cAction<Trigger::cActScrMeshOn>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActScrMeshOn>::vf00(void)

{
  return &DAT_01dbe430;
}

// 00C8D320  Trigger::cActScrMeshOn::vf08  size=1  [class]
void Trigger::cActScrMeshOn::vf08(void)

{
  return;
}

// 00C8D330  Trigger::cActScrMeshOn::vf0C  size=1  [class]
void Trigger::cActScrMeshOn::vf0C(void)

{
  return;
}

// 00C8D340  Trigger::cActScrMeshOn::vf10  size=1  [class]
void Trigger::cActScrMeshOn::vf10(void)

{
  return;
}

// 00C8D350  Trigger::cActScrMeshOn::vf14  size=1  [class]
void Trigger::cActScrMeshOn::vf14(void)

{
  return;
}

// 00C8D360  Trigger::cAction<Trigger::cActScrMeshOn>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActScrMeshOn>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8D370  Trigger::cAction<Trigger::cActScrMeshOn>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActScrMeshOn>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8D380  Trigger::cAction<Trigger::cActScrMeshOn>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActScrMeshOn>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8D3B0  Trigger::cAction<Trigger::cActScrMeshOff>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActScrMeshOff>::vf00(void)

{
  return &DAT_01dbe42c;
}

// 00C8D3C0  Trigger::cActScrMeshOff::vf08  size=1  [class]
void Trigger::cActScrMeshOff::vf08(void)

{
  return;
}

// 00C8D3D0  Trigger::cActScrMeshOff::vf0C  size=1  [class]
void Trigger::cActScrMeshOff::vf0C(void)

{
  return;
}

// 00C8D3E0  Trigger::cActScrMeshOff::vf10  size=1  [class]
void Trigger::cActScrMeshOff::vf10(void)

{
  return;
}

// 00C8D3F0  Trigger::cActScrMeshOff::vf14  size=1  [class]
void Trigger::cActScrMeshOff::vf14(void)

{
  return;
}

// 00C8D400  Trigger::cAction<Trigger::cActScrMeshOff>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActScrMeshOff>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8D410  Trigger::cAction<Trigger::cActScrMeshOff>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActScrMeshOff>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8D420  Trigger::cAction<Trigger::cActScrMeshOff>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActScrMeshOff>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8D450  Trigger::cAction<Trigger::cActVmPlay>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActVmPlay>::vf00(void)

{
  return &DAT_01dbe428;
}

// 00C8D460  Trigger::cActVmPlay::vf08  size=1  [class]
void Trigger::cActVmPlay::vf08(void)

{
  return;
}

// 00C8D470  Trigger::cActVmPlay::vf0C  size=1  [class]
void Trigger::cActVmPlay::vf0C(void)

{
  return;
}

// 00C8D480  Trigger::cActVmPlay::vf10  size=1  [class]
void Trigger::cActVmPlay::vf10(void)

{
  return;
}

// 00C8D490  Trigger::cActVmPlay::vf14  size=1  [class]
void Trigger::cActVmPlay::vf14(void)

{
  return;
}

// 00C8D4A0  Trigger::cAction<Trigger::cActVmPlay>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActVmPlay>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8D4B0  Trigger::cAction<Trigger::cActVmPlay>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActVmPlay>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8D4C0  Trigger::cAction<Trigger::cActVmPlay>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActVmPlay>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8D4F0  Trigger::cAction<Trigger::cActItemGet>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActItemGet>::vf00(void)

{
  return &DAT_01dbe424;
}

// 00C8D500  Trigger::cActItemGet::vf08  size=1  [class]
void Trigger::cActItemGet::vf08(void)

{
  return;
}

// 00C8D510  Trigger::cActItemGet::vf0C  size=1  [class]
void Trigger::cActItemGet::vf0C(void)

{
  return;
}

// 00C8D520  Trigger::cActItemGet::vf10  size=1  [class]
void Trigger::cActItemGet::vf10(void)

{
  return;
}

// 00C8D530  Trigger::cActItemGet::vf14  size=1  [class]
void Trigger::cActItemGet::vf14(void)

{
  return;
}

// 00C8D540  Trigger::cAction<Trigger::cActItemGet>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActItemGet>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8D550  Trigger::cAction<Trigger::cActItemGet>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActItemGet>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8D560  Trigger::cAction<Trigger::cActItemGet>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActItemGet>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8D590  Trigger::cAction<Trigger::cActActionMessageStart>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActActionMessageStart>::vf00(void)

{
  return &DAT_01dbe420;
}

// 00C8D5A0  Trigger::cActActionMessageStart::vf08  size=1  [class]
void Trigger::cActActionMessageStart::vf08(void)

{
  return;
}

// 00C8D5B0  Trigger::cActActionMessageStart::vf0C  size=1  [class]
void Trigger::cActActionMessageStart::vf0C(void)

{
  return;
}

// 00C8D5C0  Trigger::cActActionMessageStart::vf10  size=1  [class]
void Trigger::cActActionMessageStart::vf10(void)

{
  return;
}

// 00C8D5D0  Trigger::cActActionMessageStart::vf14  size=1  [class]
void Trigger::cActActionMessageStart::vf14(void)

{
  return;
}

// 00C8D5E0  Trigger::cAction<Trigger::cActActionMessageStart>::vf1C  size=10  [class]
void __thiscall
Trigger::cAction<Trigger::cActActionMessageStart>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8D5F0  Trigger::cAction<Trigger::cActActionMessageStart>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActActionMessageStart>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8D600  Trigger::cAction<Trigger::cActActionMessageStart>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActActionMessageStart>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8D630  Trigger::cAction<Trigger::cActActionMessageFlagClear>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActActionMessageFlagClear>::vf00(void)

{
  return &DAT_01dbe41c;
}

// 00C8D640  Trigger::cActActionMessageFlagClear::vf08  size=1  [class]
void Trigger::cActActionMessageFlagClear::vf08(void)

{
  return;
}

// 00C8D650  Trigger::cActActionMessageFlagClear::vf0C  size=1  [class]
void Trigger::cActActionMessageFlagClear::vf0C(void)

{
  return;
}

// 00C8D660  Trigger::cActActionMessageFlagClear::vf10  size=1  [class]
void Trigger::cActActionMessageFlagClear::vf10(void)

{
  return;
}

// 00C8D670  Trigger::cActActionMessageFlagClear::vf14  size=1  [class]
void Trigger::cActActionMessageFlagClear::vf14(void)

{
  return;
}

// 00C8D680  Trigger::cAction<Trigger::cActActionMessageFlagClear>::vf1C  size=10  [class]
void __thiscall
Trigger::cAction<Trigger::cActActionMessageFlagClear>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8D690  Trigger::cAction<Trigger::cActActionMessageFlagClear>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActActionMessageFlagClear>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8D6A0  Trigger::cAction<Trigger::cActActionMessageFlagClear>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActActionMessageFlagClear>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8D6D0  Trigger::cAction<Trigger::cActResultRecStart>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActResultRecStart>::vf00(void)

{
  return &DAT_01dbe418;
}

// 00C8D6E0  Trigger::cActResultRecStart::vf08  size=1  [class]
void Trigger::cActResultRecStart::vf08(void)

{
  return;
}

// 00C8D6F0  Trigger::cActResultRecStart::vf0C  size=1  [class]
void Trigger::cActResultRecStart::vf0C(void)

{
  return;
}

// 00C8D700  Trigger::cActResultRecStart::vf10  size=1  [class]
void Trigger::cActResultRecStart::vf10(void)

{
  return;
}

// 00C8D710  Trigger::cActResultRecStart::vf14  size=1  [class]
void Trigger::cActResultRecStart::vf14(void)

{
  return;
}

// 00C8D720  Trigger::cAction<Trigger::cActResultRecStart>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActResultRecStart>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8D730  Trigger::cAction<Trigger::cActResultRecStart>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActResultRecStart>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8D740  Trigger::cAction<Trigger::cActResultRecStart>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActResultRecStart>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8D770  Trigger::cAction<Trigger::cActResultRecEnd>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActResultRecEnd>::vf00(void)

{
  return &DAT_01dbe414;
}

// 00C8D780  Trigger::cActResultRecEnd::vf08  size=1  [class]
void Trigger::cActResultRecEnd::vf08(void)

{
  return;
}

// 00C8D790  Trigger::cActResultRecEnd::vf0C  size=1  [class]
void Trigger::cActResultRecEnd::vf0C(void)

{
  return;
}

// 00C8D7A0  Trigger::cActResultRecEnd::vf10  size=1  [class]
void Trigger::cActResultRecEnd::vf10(void)

{
  return;
}

// 00C8D7B0  Trigger::cActResultRecEnd::vf14  size=1  [class]
void Trigger::cActResultRecEnd::vf14(void)

{
  return;
}

// 00C8D7C0  Trigger::cAction<Trigger::cActResultRecEnd>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActResultRecEnd>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8D7D0  Trigger::cAction<Trigger::cActResultRecEnd>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActResultRecEnd>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8D7E0  Trigger::cAction<Trigger::cActResultRecEnd>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActResultRecEnd>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8D810  Trigger::cAction<Trigger::cActScrCollisionOn>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActScrCollisionOn>::vf00(void)

{
  return &DAT_01dbe410;
}

// 00C8D820  Trigger::cActScrCollisionOn::vf08  size=1  [class]
void Trigger::cActScrCollisionOn::vf08(void)

{
  return;
}

// 00C8D830  Trigger::cActScrCollisionOn::vf0C  size=1  [class]
void Trigger::cActScrCollisionOn::vf0C(void)

{
  return;
}

// 00C8D840  Trigger::cActScrCollisionOn::vf10  size=1  [class]
void Trigger::cActScrCollisionOn::vf10(void)

{
  return;
}

// 00C8D850  Trigger::cActScrCollisionOn::vf14  size=1  [class]
void Trigger::cActScrCollisionOn::vf14(void)

{
  return;
}

// 00C8D860  Trigger::cAction<Trigger::cActScrCollisionOn>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActScrCollisionOn>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8D870  Trigger::cAction<Trigger::cActScrCollisionOn>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActScrCollisionOn>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8D880  Trigger::cAction<Trigger::cActScrCollisionOn>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActScrCollisionOn>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8D8B0  Trigger::cAction<Trigger::cActScrCollisionOff>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActScrCollisionOff>::vf00(void)

{
  return &DAT_01dbe40c;
}

// 00C8D8C0  Trigger::cActScrCollisionOff::vf08  size=1  [class]
void Trigger::cActScrCollisionOff::vf08(void)

{
  return;
}

// 00C8D8D0  Trigger::cActScrCollisionOff::vf0C  size=1  [class]
void Trigger::cActScrCollisionOff::vf0C(void)

{
  return;
}

// 00C8D8E0  Trigger::cActScrCollisionOff::vf10  size=1  [class]
void Trigger::cActScrCollisionOff::vf10(void)

{
  return;
}

// 00C8D8F0  Trigger::cActScrCollisionOff::vf14  size=1  [class]
void Trigger::cActScrCollisionOff::vf14(void)

{
  return;
}

// 00C8D900  Trigger::cAction<Trigger::cActScrCollisionOff>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActScrCollisionOff>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8D910  Trigger::cAction<Trigger::cActScrCollisionOff>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActScrCollisionOff>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8D920  Trigger::cAction<Trigger::cActScrCollisionOff>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActScrCollisionOff>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8D950  Trigger::cAction<Trigger::cActArray>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActArray>::vf00(void)

{
  return &DAT_01dbe408;
}

// 00C8D960  Trigger::cAction<Trigger::cActArray>::vf08  size=1  [class]
void Trigger::cAction<Trigger::cActArray>::vf08(void)

{
  return;
}

// 00C8D970  Trigger::cAction<Trigger::cActArray>::vf0C  size=1  [class]
void Trigger::cAction<Trigger::cActArray>::vf0C(void)

{
  return;
}

// 00C8D980  Trigger::cAction<Trigger::cActArray>::vf10  size=1  [class]
void Trigger::cAction<Trigger::cActArray>::vf10(void)

{
  return;
}

// 00C8D990  Trigger::cAction<Trigger::cActArray>::vf14  size=1  [class]
void Trigger::cAction<Trigger::cActArray>::vf14(void)

{
  return;
}

// 00C8D9A0  Trigger::cAction<Trigger::cActArray>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActArray>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8D9B0  Trigger::cAction<Trigger::cActArray>::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cAction<Trigger::cActArray>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8D9E0  Trigger::cAction<Trigger::cActEffectRoomLoop>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActEffectRoomLoop>::vf00(void)

{
  return &DAT_01dbe404;
}

// 00C8D9F0  Trigger::cActEffectRoomLoop::vf08  size=1  [class]
void Trigger::cActEffectRoomLoop::vf08(void)

{
  return;
}

// 00C8DA00  Trigger::cActEffectRoomLoop::vf0C  size=1  [class]
void Trigger::cActEffectRoomLoop::vf0C(void)

{
  return;
}

// 00C8DA10  Trigger::cActEffectRoomLoop::vf10  size=1  [class]
void Trigger::cActEffectRoomLoop::vf10(void)

{
  return;
}

// 00C8DA20  Trigger::cActEffectRoomLoop::vf14  size=1  [class]
void Trigger::cActEffectRoomLoop::vf14(void)

{
  return;
}

// 00C8DA30  Trigger::cAction<Trigger::cActEffectRoomLoop>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActEffectRoomLoop>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8DA40  Trigger::cAction<Trigger::cActEffectRoomLoop>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActEffectRoomLoop>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8DA50  Trigger::cAction<Trigger::cActEffectRoomLoop>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActEffectRoomLoop>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8DA80  Trigger::cAction<Trigger::cActEffectRoomLoopOff>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActEffectRoomLoopOff>::vf00(void)

{
  return &DAT_01dbe400;
}

// 00C8DA90  Trigger::cActEffectRoomLoopOff::vf08  size=1  [class]
void Trigger::cActEffectRoomLoopOff::vf08(void)

{
  return;
}

// 00C8DAA0  Trigger::cActEffectRoomLoopOff::vf0C  size=1  [class]
void Trigger::cActEffectRoomLoopOff::vf0C(void)

{
  return;
}

// 00C8DAB0  Trigger::cActEffectRoomLoopOff::vf10  size=1  [class]
void Trigger::cActEffectRoomLoopOff::vf10(void)

{
  return;
}

// 00C8DAC0  Trigger::cActEffectRoomLoopOff::vf14  size=1  [class]
void Trigger::cActEffectRoomLoopOff::vf14(void)

{
  return;
}

// 00C8DAD0  Trigger::cAction<Trigger::cActEffectRoomLoopOff>::vf1C  size=10  [class]
void __thiscall
Trigger::cAction<Trigger::cActEffectRoomLoopOff>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8DAE0  Trigger::cAction<Trigger::cActEffectRoomLoopOff>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActEffectRoomLoopOff>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8DAF0  Trigger::cAction<Trigger::cActEffectRoomLoopOff>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActEffectRoomLoopOff>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8DB20  Trigger::cAction<Trigger::cActMesDispOffSkip>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActMesDispOffSkip>::vf00(void)

{
  return &DAT_01dbe3fc;
}

// 00C8DB30  Trigger::cActMesDispOffSkip::vf08  size=1  [class]
void Trigger::cActMesDispOffSkip::vf08(void)

{
  return;
}

// 00C8DB40  Trigger::cActMesDispOffSkip::vf0C  size=1  [class]
void Trigger::cActMesDispOffSkip::vf0C(void)

{
  return;
}

// 00C8DB50  Trigger::cActMesDispOffSkip::vf10  size=1  [class]
void Trigger::cActMesDispOffSkip::vf10(void)

{
  return;
}

// 00C8DB60  Trigger::cActMesDispOffSkip::vf14  size=1  [class]
void Trigger::cActMesDispOffSkip::vf14(void)

{
  return;
}

// 00C8DB70  Trigger::cAction<Trigger::cActMesDispOffSkip>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActMesDispOffSkip>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8DB80  Trigger::cAction<Trigger::cActMesDispOffSkip>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActMesDispOffSkip>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8DB90  Trigger::cAction<Trigger::cActMesDispOffSkip>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActMesDispOffSkip>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8DBC0  Trigger::cAction<Trigger::cActEmMsgDirectByNumber>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActEmMsgDirectByNumber>::vf00(void)

{
  return &DAT_01dbe3f8;
}

// 00C8DBD0  Trigger::cActEmMsgDirectByNumber::vf08  size=1  [class]
void Trigger::cActEmMsgDirectByNumber::vf08(void)

{
  return;
}

// 00C8DBE0  Trigger::cActEmMsgDirectByNumber::vf0C  size=1  [class]
void Trigger::cActEmMsgDirectByNumber::vf0C(void)

{
  return;
}

// 00C8DBF0  Trigger::cAction<Trigger::cActEmMsgDirectByNumber>::vf10  size=1  [class]
void Trigger::cAction<Trigger::cActEmMsgDirectByNumber>::vf10(void)

{
  return;
}

// 00C8DC00  Trigger::cActEmMsgDirectByNumber::vf14  size=1  [class]
void Trigger::cActEmMsgDirectByNumber::vf14(void)

{
  return;
}

// 00C8DC10  Trigger::cAction<Trigger::cActEmMsgDirectByNumber>::vf1C  size=10  [class]
void __thiscall
Trigger::cAction<Trigger::cActEmMsgDirectByNumber>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8DC20  Trigger::cAction<Trigger::cActEmMsgDirectByNumber>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActEmMsgDirectByNumber>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8DC30  Trigger::cAction<Trigger::cActEmMsgDirectByNumber>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActEmMsgDirectByNumber>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8DC60  Trigger::cAction<Trigger::cActCodecEnd>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActCodecEnd>::vf00(void)

{
  return &DAT_01dbe3f4;
}

// 00C8DC70  Trigger::cActCodecEnd::vf08  size=1  [class]
void Trigger::cActCodecEnd::vf08(void)

{
  return;
}

// 00C8DC80  Trigger::cActCodecEnd::vf0C  size=1  [class]
void Trigger::cActCodecEnd::vf0C(void)

{
  return;
}

// 00C8DC90  Trigger::cActCodecEnd::vf10  size=1  [class]
void Trigger::cActCodecEnd::vf10(void)

{
  return;
}

// 00C8DCA0  Trigger::cActCodecEnd::vf14  size=1  [class]
void Trigger::cActCodecEnd::vf14(void)

{
  return;
}

// 00C8DCB0  Trigger::cAction<Trigger::cActCodecEnd>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActCodecEnd>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8DCC0  Trigger::cAction<Trigger::cActCodecEnd>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActCodecEnd>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8DCD0  Trigger::cAction<Trigger::cActCodecEnd>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActCodecEnd>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8DD00  Trigger::cAction<Trigger::cActAntiqScrMove>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActAntiqScrMove>::vf00(void)

{
  return &DAT_01dbe3f0;
}

// 00C8DD10  Trigger::cActAntiqScrMove::vf08  size=1  [class]
void Trigger::cActAntiqScrMove::vf08(void)

{
  return;
}

// 00C8DD20  Trigger::cActAntiqScrMove::vf0C  size=1  [class]
void Trigger::cActAntiqScrMove::vf0C(void)

{
  return;
}

// 00C8DD30  Trigger::cActAntiqScrMove::vf10  size=1  [class]
void Trigger::cActAntiqScrMove::vf10(void)

{
  return;
}

// 00C8DD40  Trigger::cActAntiqScrMove::vf14  size=1  [class]
void Trigger::cActAntiqScrMove::vf14(void)

{
  return;
}

// 00C8DD50  Trigger::cAction<Trigger::cActAntiqScrMove>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActAntiqScrMove>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8DD60  Trigger::cAction<Trigger::cActAntiqScrMove>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActAntiqScrMove>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8DD70  Trigger::cAction<Trigger::cActAntiqScrMove>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActAntiqScrMove>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8DDA0  Trigger::cAction<Trigger::cActAntiqScrReqEnd>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActAntiqScrReqEnd>::vf00(void)

{
  return &DAT_01dbe3ec;
}

// 00C8DDB0  Trigger::cActAntiqScrReqEnd::vf08  size=1  [class]
void Trigger::cActAntiqScrReqEnd::vf08(void)

{
  return;
}

// 00C8DDC0  Trigger::cActAntiqScrReqEnd::vf0C  size=1  [class]
void Trigger::cActAntiqScrReqEnd::vf0C(void)

{
  return;
}

// 00C8DDD0  Trigger::cActAntiqScrReqEnd::vf10  size=1  [class]
void Trigger::cActAntiqScrReqEnd::vf10(void)

{
  return;
}

// 00C8DDE0  Trigger::cActAntiqScrReqEnd::vf14  size=1  [class]
void Trigger::cActAntiqScrReqEnd::vf14(void)

{
  return;
}

// 00C8DDF0  Trigger::cAction<Trigger::cActAntiqScrReqEnd>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActAntiqScrReqEnd>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8DE00  Trigger::cAction<Trigger::cActAntiqScrReqEnd>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActAntiqScrReqEnd>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8DE10  Trigger::cAction<Trigger::cActAntiqScrReqEnd>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActAntiqScrReqEnd>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8DE40  Trigger::cAction<Trigger::cActBattleAreaOn>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActBattleAreaOn>::vf00(void)

{
  return &DAT_01dbe3e8;
}

// 00C8DE50  Trigger::cActBattleAreaOn::vf08  size=1  [class]
void Trigger::cActBattleAreaOn::vf08(void)

{
  return;
}

// 00C8DE60  Trigger::cActBattleAreaOn::vf0C  size=1  [class]
void Trigger::cActBattleAreaOn::vf0C(void)

{
  return;
}

// 00C8DE70  Trigger::cActBattleAreaOn::vf10  size=1  [class]
void Trigger::cActBattleAreaOn::vf10(void)

{
  return;
}

// 00C8DE80  Trigger::cActBattleAreaOn::vf14  size=1  [class]
void Trigger::cActBattleAreaOn::vf14(void)

{
  return;
}

// 00C8DE90  Trigger::cAction<Trigger::cActBattleAreaOn>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActBattleAreaOn>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8DEA0  Trigger::cAction<Trigger::cActBattleAreaOn>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActBattleAreaOn>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8DEB0  Trigger::cAction<Trigger::cActBattleAreaOn>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActBattleAreaOn>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8DEE0  Trigger::cAction<Trigger::cActBattleAreaOff>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActBattleAreaOff>::vf00(void)

{
  return &DAT_01dbe3e4;
}

// 00C8DEF0  Trigger::cActBattleAreaOff::vf08  size=1  [class]
void Trigger::cActBattleAreaOff::vf08(void)

{
  return;
}

// 00C8DF00  Trigger::cActBattleAreaOff::vf0C  size=1  [class]
void Trigger::cActBattleAreaOff::vf0C(void)

{
  return;
}

// 00C8DF10  Trigger::cActBattleAreaOff::vf10  size=1  [class]
void Trigger::cActBattleAreaOff::vf10(void)

{
  return;
}

// 00C8DF20  Trigger::cActBattleAreaOff::vf14  size=1  [class]
void Trigger::cActBattleAreaOff::vf14(void)

{
  return;
}

// 00C8DF30  Trigger::cAction<Trigger::cActBattleAreaOff>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActBattleAreaOff>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8DF40  Trigger::cAction<Trigger::cActBattleAreaOff>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActBattleAreaOff>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8DF50  Trigger::cAction<Trigger::cActBattleAreaOff>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActBattleAreaOff>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8DF80  Trigger::cAction<Trigger::cActReqShotMissile>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActReqShotMissile>::vf00(void)

{
  return &DAT_01dbe3e0;
}

// 00C8DF90  Trigger::cActReqShotMissile::vf08  size=1  [class]
void Trigger::cActReqShotMissile::vf08(void)

{
  return;
}

// 00C8DFA0  Trigger::cActReqShotMissile::vf0C  size=1  [class]
void Trigger::cActReqShotMissile::vf0C(void)

{
  return;
}

// 00C8DFB0  Trigger::cActReqShotMissile::vf10  size=1  [class]
void Trigger::cActReqShotMissile::vf10(void)

{
  return;
}

// 00C8DFC0  Trigger::cActReqShotMissile::vf14  size=1  [class]
void Trigger::cActReqShotMissile::vf14(void)

{
  return;
}

// 00C8DFD0  Trigger::cAction<Trigger::cActReqShotMissile>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActReqShotMissile>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8DFE0  Trigger::cAction<Trigger::cActReqShotMissile>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActReqShotMissile>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8DFF0  Trigger::cAction<Trigger::cActReqShotMissile>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActReqShotMissile>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8E020  Trigger::cAction<Trigger::cActEmAnimationByNumber>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActEmAnimationByNumber>::vf00(void)

{
  return &DAT_01dbe3dc;
}

// 00C8E030  Trigger::cActEmAnimationByNumber::vf08  size=1  [class]
void Trigger::cActEmAnimationByNumber::vf08(void)

{
  return;
}

// 00C8E040  Trigger::cActEmAnimationByNumber::vf0C  size=1  [class]
void Trigger::cActEmAnimationByNumber::vf0C(void)

{
  return;
}

// 00C8E050  Trigger::cActEmAnimationByNumber::vf10  size=1  [class]
void Trigger::cActEmAnimationByNumber::vf10(void)

{
  return;
}

// 00C8E060  Trigger::cActEmAnimationByNumber::vf14  size=1  [class]
void Trigger::cActEmAnimationByNumber::vf14(void)

{
  return;
}

// 00C8E070  Trigger::cAction<Trigger::cActEmAnimationByNumber>::vf1C  size=10  [class]
void __thiscall
Trigger::cAction<Trigger::cActEmAnimationByNumber>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8E080  Trigger::cAction<Trigger::cActEmAnimationByNumber>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActEmAnimationByNumber>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8E090  Trigger::cAction<Trigger::cActEmAnimationByNumber>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActEmAnimationByNumber>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8E0C0  Trigger::cAction<Trigger::cActObjectDisp>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActObjectDisp>::vf00(void)

{
  return &DAT_01dbe3d8;
}

// 00C8E0D0  Trigger::cActObjectDisp::vf08  size=1  [class]
void Trigger::cActObjectDisp::vf08(void)

{
  return;
}

// 00C8E0E0  Trigger::cActObjectDisp::vf0C  size=1  [class]
void Trigger::cActObjectDisp::vf0C(void)

{
  return;
}

// 00C8E0F0  Trigger::cActObjectDisp::vf10  size=1  [class]
void Trigger::cActObjectDisp::vf10(void)

{
  return;
}

// 00C8E100  Trigger::cActObjectDisp::vf14  size=1  [class]
void Trigger::cActObjectDisp::vf14(void)

{
  return;
}

// 00C8E110  Trigger::cAction<Trigger::cActObjectDisp>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActObjectDisp>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8E120  Trigger::cAction<Trigger::cActObjectDisp>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActObjectDisp>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8E130  Trigger::cAction<Trigger::cActObjectDisp>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActObjectDisp>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8E160  Trigger::cAction<Trigger::cActDoorLock>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActDoorLock>::vf00(void)

{
  return &DAT_01dbe3d4;
}

// 00C8E170  Trigger::cActDoorLock::vf08  size=1  [class]
void Trigger::cActDoorLock::vf08(void)

{
  return;
}

// 00C8E180  Trigger::cActDoorLock::vf0C  size=1  [class]
void Trigger::cActDoorLock::vf0C(void)

{
  return;
}

// 00C8E190  Trigger::cActDoorLock::vf10  size=1  [class]
void Trigger::cActDoorLock::vf10(void)

{
  return;
}

// 00C8E1A0  Trigger::cActDoorLock::vf14  size=1  [class]
void Trigger::cActDoorLock::vf14(void)

{
  return;
}

// 00C8E1B0  Trigger::cAction<Trigger::cActDoorLock>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActDoorLock>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8E1C0  Trigger::cAction<Trigger::cActDoorLock>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActDoorLock>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8E1D0  Trigger::cAction<Trigger::cActDoorLock>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActDoorLock>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8E200  Trigger::cAction<Trigger::cActObjectCollision>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActObjectCollision>::vf00(void)

{
  return &DAT_01dbe3d0;
}

// 00C8E210  Trigger::cActObjectCollision::vf08  size=1  [class]
void Trigger::cActObjectCollision::vf08(void)

{
  return;
}

// 00C8E220  Trigger::cActObjectCollision::vf0C  size=1  [class]
void Trigger::cActObjectCollision::vf0C(void)

{
  return;
}

// 00C8E230  Trigger::cActObjectCollision::vf10  size=1  [class]
void Trigger::cActObjectCollision::vf10(void)

{
  return;
}

// 00C8E240  Trigger::cActObjectCollision::vf14  size=1  [class]
void Trigger::cActObjectCollision::vf14(void)

{
  return;
}

// 00C8E250  Trigger::cAction<Trigger::cActObjectCollision>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActObjectCollision>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8E260  Trigger::cAction<Trigger::cActObjectCollision>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActObjectCollision>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8E270  Trigger::cAction<Trigger::cActObjectCollision>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActObjectCollision>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8E2A0  Trigger::cAction<Trigger::cActVrComplete>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActVrComplete>::vf00(void)

{
  return &DAT_01dbe3cc;
}

// 00C8E2B0  Trigger::cActVrComplete::vf08  size=1  [class]
void Trigger::cActVrComplete::vf08(void)

{
  return;
}

// 00C8E2C0  Trigger::cActVrComplete::vf0C  size=1  [class]
void Trigger::cActVrComplete::vf0C(void)

{
  return;
}

// 00C8E2D0  Trigger::cActVrComplete::vf10  size=1  [class]
void Trigger::cActVrComplete::vf10(void)

{
  return;
}

// 00C8E2E0  Trigger::cActVrComplete::vf14  size=1  [class]
void Trigger::cActVrComplete::vf14(void)

{
  return;
}

// 00C8E2F0  Trigger::cAction<Trigger::cActVrComplete>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActVrComplete>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8E300  Trigger::cAction<Trigger::cActVrComplete>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActVrComplete>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8E310  Trigger::cAction<Trigger::cActVrComplete>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActVrComplete>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8E340  Trigger::cAction<Trigger::cActVrMistake>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActVrMistake>::vf00(void)

{
  return &DAT_01dbe3c8;
}

// 00C8E350  Trigger::cActVrMistake::vf08  size=1  [class]
void Trigger::cActVrMistake::vf08(void)

{
  return;
}

// 00C8E360  Trigger::cActVrMistake::vf0C  size=1  [class]
void Trigger::cActVrMistake::vf0C(void)

{
  return;
}

// 00C8E370  Trigger::cActVrMistake::vf10  size=1  [class]
void Trigger::cActVrMistake::vf10(void)

{
  return;
}

// 00C8E380  Trigger::cActVrMistake::vf14  size=1  [class]
void Trigger::cActVrMistake::vf14(void)

{
  return;
}

// 00C8E390  Trigger::cAction<Trigger::cActVrMistake>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActVrMistake>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8E3A0  Trigger::cAction<Trigger::cActVrMistake>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActVrMistake>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8E3B0  Trigger::cAction<Trigger::cActVrMistake>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActVrMistake>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8E3E0  Trigger::cAction<Trigger::cActGimmickFinish>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActGimmickFinish>::vf00(void)

{
  return &DAT_01dbe3c4;
}

// 00C8E3F0  Trigger::cActGimmickFinish::vf08  size=1  [class]
void Trigger::cActGimmickFinish::vf08(void)

{
  return;
}

// 00C8E400  Trigger::cActGimmickFinish::vf0C  size=1  [class]
void Trigger::cActGimmickFinish::vf0C(void)

{
  return;
}

// 00C8E410  Trigger::cActGimmickFinish::vf10  size=1  [class]
void Trigger::cActGimmickFinish::vf10(void)

{
  return;
}

// 00C8E420  Trigger::cActGimmickFinish::vf14  size=1  [class]
void Trigger::cActGimmickFinish::vf14(void)

{
  return;
}

// 00C8E430  Trigger::cAction<Trigger::cActGimmickFinish>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActGimmickFinish>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8E440  Trigger::cAction<Trigger::cActGimmickFinish>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActGimmickFinish>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8E450  Trigger::cAction<Trigger::cActGimmickFinish>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActGimmickFinish>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8E480  Trigger::cAction<Trigger::cActGimmickRevert>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActGimmickRevert>::vf00(void)

{
  return &DAT_01dbe3c0;
}

// 00C8E490  Trigger::cActGimmickRevert::vf08  size=1  [class]
void Trigger::cActGimmickRevert::vf08(void)

{
  return;
}

// 00C8E4A0  Trigger::cActGimmickRevert::vf0C  size=1  [class]
void Trigger::cActGimmickRevert::vf0C(void)

{
  return;
}

// 00C8E4B0  Trigger::cActGimmickRevert::vf10  size=1  [class]
void Trigger::cActGimmickRevert::vf10(void)

{
  return;
}

// 00C8E4C0  Trigger::cActGimmickRevert::vf14  size=1  [class]
void Trigger::cActGimmickRevert::vf14(void)

{
  return;
}

// 00C8E4D0  Trigger::cAction<Trigger::cActGimmickRevert>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActGimmickRevert>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8E4E0  Trigger::cAction<Trigger::cActGimmickRevert>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActGimmickRevert>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8E4F0  Trigger::cAction<Trigger::cActGimmickRevert>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActGimmickRevert>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8E520  Trigger::cAction<Trigger::cActEnemyHide>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActEnemyHide>::vf00(void)

{
  return &DAT_01dbe3bc;
}

// 00C8E530  Trigger::cActEnemyHide::vf08  size=1  [class]
void Trigger::cActEnemyHide::vf08(void)

{
  return;
}

// 00C8E540  Trigger::cActEnemyHide::vf0C  size=1  [class]
void Trigger::cActEnemyHide::vf0C(void)

{
  return;
}

// 00C8E550  Trigger::cActEnemyHide::vf10  size=1  [class]
void Trigger::cActEnemyHide::vf10(void)

{
  return;
}

// 00C8E560  Trigger::cActEnemyHide::vf14  size=1  [class]
void Trigger::cActEnemyHide::vf14(void)

{
  return;
}

// 00C8E570  Trigger::cAction<Trigger::cActEnemyHide>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActEnemyHide>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8E580  Trigger::cAction<Trigger::cActEnemyHide>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActEnemyHide>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8E590  Trigger::cAction<Trigger::cActEnemyHide>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActEnemyHide>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8E5C0  Trigger::cAction<Trigger::cActEnemyAppear>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActEnemyAppear>::vf00(void)

{
  return &DAT_01dbe3b8;
}

// 00C8E5D0  Trigger::cActEnemyAppear::vf08  size=1  [class]
void Trigger::cActEnemyAppear::vf08(void)

{
  return;
}

// 00C8E5E0  Trigger::cActEnemyAppear::vf0C  size=1  [class]
void Trigger::cActEnemyAppear::vf0C(void)

{
  return;
}

// 00C8E5F0  Trigger::cActEnemyAppear::vf10  size=1  [class]
void Trigger::cActEnemyAppear::vf10(void)

{
  return;
}

// 00C8E600  Trigger::cActEnemyAppear::vf14  size=1  [class]
void Trigger::cActEnemyAppear::vf14(void)

{
  return;
}

// 00C8E610  Trigger::cAction<Trigger::cActEnemyAppear>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActEnemyAppear>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8E620  Trigger::cAction<Trigger::cActEnemyAppear>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActEnemyAppear>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8E630  Trigger::cAction<Trigger::cActEnemyAppear>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActEnemyAppear>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8E660  Trigger::cAction<Trigger::cActGimmickRevivalCancel>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActGimmickRevivalCancel>::vf00(void)

{
  return &DAT_01dbe3b4;
}

// 00C8E670  Trigger::cActGimmickRevivalCancel::vf08  size=1  [class]
void Trigger::cActGimmickRevivalCancel::vf08(void)

{
  return;
}

// 00C8E680  Trigger::cActGimmickRevivalCancel::vf0C  size=1  [class]
void Trigger::cActGimmickRevivalCancel::vf0C(void)

{
  return;
}

// 00C8E690  Trigger::cActGimmickRevivalCancel::vf10  size=1  [class]
void Trigger::cActGimmickRevivalCancel::vf10(void)

{
  return;
}

// 00C8E6A0  Trigger::cActGimmickRevivalCancel::vf14  size=1  [class]
void Trigger::cActGimmickRevivalCancel::vf14(void)

{
  return;
}

// 00C8E6B0  Trigger::cAction<Trigger::cActGimmickRevivalCancel>::vf1C  size=10  [class]
void __thiscall
Trigger::cAction<Trigger::cActGimmickRevivalCancel>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8E6C0  Trigger::cAction<Trigger::cActGimmickRevivalCancel>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActGimmickRevivalCancel>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8E6D0  Trigger::cAction<Trigger::cActGimmickRevivalCancel>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActGimmickRevivalCancel>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8E700  Trigger::cAction<Trigger::cActEffectOff>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActEffectOff>::vf00(void)

{
  return &DAT_01dbe3b0;
}

// 00C8E710  Trigger::cActEffectOff::vf08  size=1  [class]
void Trigger::cActEffectOff::vf08(void)

{
  return;
}

// 00C8E720  Trigger::cActEffectOff::vf0C  size=1  [class]
void Trigger::cActEffectOff::vf0C(void)

{
  return;
}

// 00C8E730  Trigger::cActEffectOff::vf10  size=1  [class]
void Trigger::cActEffectOff::vf10(void)

{
  return;
}

// 00C8E740  Trigger::cActEffectOff::vf14  size=1  [class]
void Trigger::cActEffectOff::vf14(void)

{
  return;
}

// 00C8E750  Trigger::cAction<Trigger::cActEffectOff>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActEffectOff>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8E760  Trigger::cAction<Trigger::cActEffectOff>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActEffectOff>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8E770  Trigger::cAction<Trigger::cActEffectOff>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActEffectOff>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8E7A0  Trigger::cAction<Trigger::cActCodecEndAll>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActCodecEndAll>::vf00(void)

{
  return &DAT_01dbe3ac;
}

// 00C8E7B0  Trigger::cActCodecEndAll::vf08  size=1  [class]
void Trigger::cActCodecEndAll::vf08(void)

{
  return;
}

// 00C8E7C0  Trigger::cActCodecEndAll::vf0C  size=1  [class]
void Trigger::cActCodecEndAll::vf0C(void)

{
  return;
}

// 00C8E7D0  Trigger::cActCodecEndAll::vf10  size=1  [class]
void Trigger::cActCodecEndAll::vf10(void)

{
  return;
}

// 00C8E7E0  Trigger::cActCodecEndAll::vf14  size=1  [class]
void Trigger::cActCodecEndAll::vf14(void)

{
  return;
}

// 00C8E7F0  Trigger::cAction<Trigger::cActCodecEndAll>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActCodecEndAll>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8E800  Trigger::cAction<Trigger::cActCodecEndAll>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActCodecEndAll>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8E810  Trigger::cAction<Trigger::cActCodecEndAll>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActCodecEndAll>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8E840  Trigger::cAction<Trigger::cActVrGoalPoint>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActVrGoalPoint>::vf00(void)

{
  return &DAT_01dbe3a8;
}

// 00C8E850  Trigger::cActVrGoalPoint::vf08  size=1  [class]
void Trigger::cActVrGoalPoint::vf08(void)

{
  return;
}

// 00C8E860  Trigger::cActVrGoalPoint::vf0C  size=1  [class]
void Trigger::cActVrGoalPoint::vf0C(void)

{
  return;
}

// 00C8E870  Trigger::cActVrGoalPoint::vf10  size=1  [class]
void Trigger::cActVrGoalPoint::vf10(void)

{
  return;
}

// 00C8E880  Trigger::cActVrGoalPoint::vf14  size=1  [class]
void Trigger::cActVrGoalPoint::vf14(void)

{
  return;
}

// 00C8E890  Trigger::cAction<Trigger::cActVrGoalPoint>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActVrGoalPoint>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8E8A0  Trigger::cAction<Trigger::cActVrGoalPoint>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActVrGoalPoint>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8E8B0  Trigger::cAction<Trigger::cActVrGoalPoint>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActVrGoalPoint>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8E8E0  Trigger::cAction<Trigger::cActFade>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActFade>::vf00(void)

{
  return &DAT_01dbe3a4;
}

// 00C8E8F0  Trigger::cActFade::vf08  size=1  [class]
void Trigger::cActFade::vf08(void)

{
  return;
}

// 00C8E900  Trigger::cActFade::vf0C  size=1  [class]
void Trigger::cActFade::vf0C(void)

{
  return;
}

// 00C8E910  Trigger::cActFade::vf10  size=1  [class]
void Trigger::cActFade::vf10(void)

{
  return;
}

// 00C8E920  Trigger::cActFade::vf14  size=1  [class]
void Trigger::cActFade::vf14(void)

{
  return;
}

// 00C8E930  Trigger::cAction<Trigger::cActFade>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActFade>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8E940  Trigger::cAction<Trigger::cActFade>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActFade>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8E950  Trigger::cAction<Trigger::cActFade>::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cAction<Trigger::cActFade>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8E980  Trigger::cAction<Trigger::cActScrMeshOnAll>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActScrMeshOnAll>::vf00(void)

{
  return &DAT_01dbe3a0;
}

// 00C8E990  Trigger::cActScrMeshOnAll::vf08  size=1  [class]
void Trigger::cActScrMeshOnAll::vf08(void)

{
  return;
}

// 00C8E9A0  Trigger::cActScrMeshOnAll::vf0C  size=1  [class]
void Trigger::cActScrMeshOnAll::vf0C(void)

{
  return;
}

// 00C8E9B0  Trigger::cActScrMeshOnAll::vf10  size=1  [class]
void Trigger::cActScrMeshOnAll::vf10(void)

{
  return;
}

// 00C8E9C0  Trigger::cActScrMeshOnAll::vf14  size=1  [class]
void Trigger::cActScrMeshOnAll::vf14(void)

{
  return;
}

// 00C8E9D0  Trigger::cAction<Trigger::cActScrMeshOnAll>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActScrMeshOnAll>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8E9E0  Trigger::cAction<Trigger::cActScrMeshOnAll>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActScrMeshOnAll>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8E9F0  Trigger::cAction<Trigger::cActScrMeshOnAll>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActScrMeshOnAll>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8EA20  Trigger::cAction<Trigger::cActScrMeshOffAll>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActScrMeshOffAll>::vf00(void)

{
  return &DAT_01dbe39c;
}

// 00C8EA30  Trigger::cActScrMeshOffAll::vf08  size=1  [class]
void Trigger::cActScrMeshOffAll::vf08(void)

{
  return;
}

// 00C8EA40  Trigger::cActScrMeshOffAll::vf0C  size=1  [class]
void Trigger::cActScrMeshOffAll::vf0C(void)

{
  return;
}

// 00C8EA50  Trigger::cActScrMeshOffAll::vf10  size=1  [class]
void Trigger::cActScrMeshOffAll::vf10(void)

{
  return;
}

// 00C8EA60  Trigger::cActScrMeshOffAll::vf14  size=1  [class]
void Trigger::cActScrMeshOffAll::vf14(void)

{
  return;
}

// 00C8EA70  Trigger::cAction<Trigger::cActScrMeshOffAll>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActScrMeshOffAll>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8EA80  Trigger::cAction<Trigger::cActScrMeshOffAll>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActScrMeshOffAll>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8EA90  Trigger::cAction<Trigger::cActScrMeshOffAll>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActScrMeshOffAll>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8EAC0  Trigger::cAction<Trigger::cActDoorDispOn>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActDoorDispOn>::vf00(void)

{
  return &DAT_01dbe398;
}

// 00C8EAD0  Trigger::cActDoorDispOn::vf08  size=1  [class]
void Trigger::cActDoorDispOn::vf08(void)

{
  return;
}

// 00C8EAE0  Trigger::cActDoorDispOn::vf0C  size=1  [class]
void Trigger::cActDoorDispOn::vf0C(void)

{
  return;
}

// 00C8EAF0  Trigger::cActDoorDispOn::vf10  size=1  [class]
void Trigger::cActDoorDispOn::vf10(void)

{
  return;
}

// 00C8EB00  Trigger::cActDoorDispOn::vf14  size=1  [class]
void Trigger::cActDoorDispOn::vf14(void)

{
  return;
}

// 00C8EB10  Trigger::cAction<Trigger::cActDoorDispOn>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActDoorDispOn>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8EB20  Trigger::cAction<Trigger::cActDoorDispOn>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActDoorDispOn>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8EB30  Trigger::cAction<Trigger::cActDoorDispOn>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActDoorDispOn>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8EB60  Trigger::cAction<Trigger::cActDoorDispOff>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActDoorDispOff>::vf00(void)

{
  return &DAT_01dbe394;
}

// 00C8EB70  Trigger::cActDoorDispOff::vf08  size=1  [class]
void Trigger::cActDoorDispOff::vf08(void)

{
  return;
}

// 00C8EB80  Trigger::cActDoorDispOff::vf0C  size=1  [class]
void Trigger::cActDoorDispOff::vf0C(void)

{
  return;
}

// 00C8EB90  Trigger::cActDoorDispOff::vf10  size=1  [class]
void Trigger::cActDoorDispOff::vf10(void)

{
  return;
}

// 00C8EBA0  Trigger::cActDoorDispOff::vf14  size=1  [class]
void Trigger::cActDoorDispOff::vf14(void)

{
  return;
}

// 00C8EBB0  Trigger::cAction<Trigger::cActDoorDispOff>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActDoorDispOff>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8EBC0  Trigger::cAction<Trigger::cActDoorDispOff>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActDoorDispOff>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8EBD0  Trigger::cAction<Trigger::cActDoorDispOff>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActDoorDispOff>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8EC00  Trigger::cAction<Trigger::cActAddExp>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActAddExp>::vf00(void)

{
  return &DAT_01dbe390;
}

// 00C8EC10  Trigger::cActAddExp::vf08  size=1  [class]
void Trigger::cActAddExp::vf08(void)

{
  return;
}

// 00C8EC20  Trigger::cActAddExp::vf0C  size=1  [class]
void Trigger::cActAddExp::vf0C(void)

{
  return;
}

// 00C8EC30  Trigger::cActAddExp::vf10  size=1  [class]
void Trigger::cActAddExp::vf10(void)

{
  return;
}

// 00C8EC40  Trigger::cActAddExp::vf14  size=1  [class]
void Trigger::cActAddExp::vf14(void)

{
  return;
}

// 00C8EC50  Trigger::cAction<Trigger::cActAddExp>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActAddExp>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8EC60  Trigger::cAction<Trigger::cActAddExp>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActAddExp>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8EC70  Trigger::cAction<Trigger::cActAddExp>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActAddExp>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8ECA0  Trigger::cAction<Trigger::cActCodecStartForSkip>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActCodecStartForSkip>::vf00(void)

{
  return &DAT_01dbe38c;
}

// 00C8ECB0  Trigger::cActCodecStartForSkip::vf08  size=1  [class]
void Trigger::cActCodecStartForSkip::vf08(void)

{
  return;
}

// 00C8ECC0  Trigger::cActCodecStartForSkip::vf0C  size=1  [class]
void Trigger::cActCodecStartForSkip::vf0C(void)

{
  return;
}

// 00C8ECD0  Trigger::cActCodecStartForSkip::vf10  size=1  [class]
void Trigger::cActCodecStartForSkip::vf10(void)

{
  return;
}

// 00C8ECE0  Trigger::cActCodecStartForSkip::vf14  size=1  [class]
void Trigger::cActCodecStartForSkip::vf14(void)

{
  return;
}

// 00C8ECF0  Trigger::cAction<Trigger::cActCodecStartForSkip>::vf1C  size=10  [class]
void __thiscall
Trigger::cAction<Trigger::cActCodecStartForSkip>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8ED00  Trigger::cAction<Trigger::cActCodecStartForSkip>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActCodecStartForSkip>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8ED10  Trigger::cAction<Trigger::cActCodecStartForSkip>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActCodecStartForSkip>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8ED40  Trigger::cAction<Trigger::cActItemDelInstallation>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActItemDelInstallation>::vf00(void)

{
  return &DAT_01dbe388;
}

// 00C8ED50  Trigger::cActItemDelInstallation::vf08  size=1  [class]
void Trigger::cActItemDelInstallation::vf08(void)

{
  return;
}

// 00C8ED60  Trigger::cActItemDelInstallation::vf0C  size=1  [class]
void Trigger::cActItemDelInstallation::vf0C(void)

{
  return;
}

// 00C8ED70  Trigger::cActItemDelInstallation::vf10  size=1  [class]
void Trigger::cActItemDelInstallation::vf10(void)

{
  return;
}

// 00C8ED80  Trigger::cActItemDelInstallation::vf14  size=1  [class]
void Trigger::cActItemDelInstallation::vf14(void)

{
  return;
}

// 00C8ED90  Trigger::cAction<Trigger::cActItemDelInstallation>::vf1C  size=10  [class]
void __thiscall
Trigger::cAction<Trigger::cActItemDelInstallation>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8EDA0  Trigger::cAction<Trigger::cActItemDelInstallation>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActItemDelInstallation>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8EDB0  Trigger::cAction<Trigger::cActItemDelInstallation>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActItemDelInstallation>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8EDE0  Trigger::cAction<Trigger::cActItemDelDropAll>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActItemDelDropAll>::vf00(void)

{
  return &DAT_01dbe384;
}

// 00C8EDF0  Trigger::cActItemDelDropAll::vf08  size=1  [class]
void Trigger::cActItemDelDropAll::vf08(void)

{
  return;
}

// 00C8EE00  Trigger::cActItemDelDropAll::vf0C  size=1  [class]
void Trigger::cActItemDelDropAll::vf0C(void)

{
  return;
}

// 00C8EE10  Trigger::cActItemDelDropAll::vf10  size=1  [class]
void Trigger::cActItemDelDropAll::vf10(void)

{
  return;
}

// 00C8EE20  Trigger::cActItemDelDropAll::vf14  size=1  [class]
void Trigger::cActItemDelDropAll::vf14(void)

{
  return;
}

// 00C8EE30  Trigger::cAction<Trigger::cActItemDelDropAll>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActItemDelDropAll>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8EE40  Trigger::cAction<Trigger::cActItemDelDropAll>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActItemDelDropAll>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8EE50  Trigger::cAction<Trigger::cActItemDelDropAll>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActItemDelDropAll>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8EE80  Trigger::cActGenericFlag::vf00  size=6  [class]
undefined * Trigger::cActGenericFlag::vf00(void)

{
  return &DAT_01dbe380;
}

// 00C8EE90  Trigger::cActGenericFlag::vf08  size=1  [class]
void Trigger::cActGenericFlag::vf08(void)

{
  return;
}

// 00C8EEA0  Trigger::cActGenericFlag::vf0C  size=1  [class]
void Trigger::cActGenericFlag::vf0C(void)

{
  return;
}

// 00C8EEB0  Trigger::cActGenericFlag::vf10  size=1  [class]
void Trigger::cActGenericFlag::vf10(void)

{
  return;
}

// 00C8EEC0  Trigger::cActGenericFlag::vf14  size=1  [class]
void Trigger::cActGenericFlag::vf14(void)

{
  return;
}

// 00C8EED0  Trigger::cAction<Trigger::cActGenericFlag>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActGenericFlag>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8EEE0  Trigger::cAction<Trigger::cActGenericFlag>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActGenericFlag>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8EEF0  Trigger::cAction<Trigger::cActGenericFlag>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActGenericFlag>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8EF20  Trigger::cAction<Trigger::cActEnemyAppearResetPosByNumber>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActEnemyAppearResetPosByNumber>::vf00(void)

{
  return &DAT_01dbe37c;
}

// 00C8EF30  Trigger::cActEnemyAppearResetPosByNumber::vf08  size=1  [class]
void Trigger::cActEnemyAppearResetPosByNumber::vf08(void)

{
  return;
}

// 00C8EF40  Trigger::cActEnemyAppearResetPosByNumber::vf0C  size=1  [class]
void Trigger::cActEnemyAppearResetPosByNumber::vf0C(void)

{
  return;
}

// 00C8EF50  Trigger::cActEnemyAppearResetPosByNumber::vf10  size=1  [class]
void Trigger::cActEnemyAppearResetPosByNumber::vf10(void)

{
  return;
}

// 00C8EF60  Trigger::cActEnemyAppearResetPosByNumber::vf14  size=1  [class]
void Trigger::cActEnemyAppearResetPosByNumber::vf14(void)

{
  return;
}

// 00C8EF70  Trigger::cAction<Trigger::cActEnemyAppearResetPosByNumber>::vf1C  size=10  [class]
void __thiscall
Trigger::cAction<Trigger::cActEnemyAppearResetPosByNumber>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8EF80  Trigger::cAction<Trigger::cActEnemyAppearResetPosByNumber>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActEnemyAppearResetPosByNumber>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8EF90  Trigger::cAction<Trigger::cActEnemyAppearResetPosByNumber>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActEnemyAppearResetPosByNumber>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8EFC0  Trigger::cAction<Trigger::cActEnemyGroupAppearResetPosByNumber>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActEnemyGroupAppearResetPosByNumber>::vf00(void)

{
  return &DAT_01dbe378;
}

// 00C8EFD0  Trigger::cActEnemyGroupAppearResetPosByNumber::vf08  size=1  [class]
void Trigger::cActEnemyGroupAppearResetPosByNumber::vf08(void)

{
  return;
}

// 00C8EFE0  Trigger::cActEnemyGroupAppearResetPosByNumber::vf0C  size=1  [class]
void Trigger::cActEnemyGroupAppearResetPosByNumber::vf0C(void)

{
  return;
}

// 00C8EFF0  Trigger::cActEnemyGroupAppearResetPosByNumber::vf10  size=1  [class]
void Trigger::cActEnemyGroupAppearResetPosByNumber::vf10(void)

{
  return;
}

// 00C8F000  Trigger::cActEnemyGroupAppearResetPosByNumber::vf14  size=1  [class]
void Trigger::cActEnemyGroupAppearResetPosByNumber::vf14(void)

{
  return;
}

// 00C8F010  Trigger::cAction<Trigger::cActEnemyGroupAppearResetPosByNumber>::vf1C  size=10  [class]
void __thiscall
Trigger::cAction<Trigger::cActEnemyGroupAppearResetPosByNumber>::vf1C
          (int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8F020  Trigger::cAction<Trigger::cActEnemyGroupAppearResetPosByNumber>::vf20  size=15  [class]
undefined4 __fastcall
Trigger::cAction<Trigger::cActEnemyGroupAppearResetPosByNumber>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8F030  Trigger::cAction<Trigger::cActEnemyGroupAppearResetPosByNumber>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActEnemyGroupAppearResetPosByNumber>::vf04
          (undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8F060  Trigger::cAction<Trigger::cActEnemyDestroyByNumber>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActEnemyDestroyByNumber>::vf00(void)

{
  return &DAT_01dbe374;
}

// 00C8F070  Trigger::cActEnemyDestroyByNumber::vf08  size=1  [class]
void Trigger::cActEnemyDestroyByNumber::vf08(void)

{
  return;
}

// 00C8F080  Trigger::cActEnemyDestroyByNumber::vf0C  size=1  [class]
void Trigger::cActEnemyDestroyByNumber::vf0C(void)

{
  return;
}

// 00C8F090  Trigger::cActEnemyDestroyByNumber::vf10  size=1  [class]
void Trigger::cActEnemyDestroyByNumber::vf10(void)

{
  return;
}

// 00C8F0A0  Trigger::cActEnemyDestroyByNumber::vf14  size=1  [class]
void Trigger::cActEnemyDestroyByNumber::vf14(void)

{
  return;
}

// 00C8F0B0  Trigger::cAction<Trigger::cActEnemyDestroyByNumber>::vf1C  size=10  [class]
void __thiscall
Trigger::cAction<Trigger::cActEnemyDestroyByNumber>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8F0C0  Trigger::cAction<Trigger::cActEnemyDestroyByNumber>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActEnemyDestroyByNumber>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8F0D0  Trigger::cAction<Trigger::cActEnemyDestroyByNumber>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActEnemyDestroyByNumber>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8F100  Trigger::cAction<Trigger::cActReqVrStart>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActReqVrStart>::vf00(void)

{
  return &DAT_01dbe370;
}

// 00C8F110  Trigger::cActReqVrStart::vf08  size=1  [class]
void Trigger::cActReqVrStart::vf08(void)

{
  return;
}

// 00C8F120  Trigger::cActReqVrStart::vf0C  size=1  [class]
void Trigger::cActReqVrStart::vf0C(void)

{
  return;
}

// 00C8F130  Trigger::cActReqVrStart::vf10  size=1  [class]
void Trigger::cActReqVrStart::vf10(void)

{
  return;
}

// 00C8F140  Trigger::cActReqVrStart::vf14  size=1  [class]
void Trigger::cActReqVrStart::vf14(void)

{
  return;
}

// 00C8F150  Trigger::cAction<Trigger::cActReqVrStart>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActReqVrStart>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8F160  Trigger::cAction<Trigger::cActReqVrStart>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActReqVrStart>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8F170  Trigger::cAction<Trigger::cActReqVrStart>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActReqVrStart>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8F1A0  Trigger::cAction<Trigger::cActPlayerMaxHp>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActPlayerMaxHp>::vf00(void)

{
  return &DAT_01dbe36c;
}

// 00C8F1B0  Trigger::cActPlayerMaxHp::vf08  size=1  [class]
void Trigger::cActPlayerMaxHp::vf08(void)

{
  return;
}

// 00C8F1C0  Trigger::cActPlayerMaxHp::vf0C  size=1  [class]
void Trigger::cActPlayerMaxHp::vf0C(void)

{
  return;
}

// 00C8F1D0  Trigger::cActPlayerMaxHp::vf10  size=1  [class]
void Trigger::cActPlayerMaxHp::vf10(void)

{
  return;
}

// 00C8F1E0  Trigger::cActPlayerMaxHp::vf14  size=1  [class]
void Trigger::cActPlayerMaxHp::vf14(void)

{
  return;
}

// 00C8F1F0  Trigger::cAction<Trigger::cActPlayerMaxHp>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActPlayerMaxHp>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8F200  Trigger::cAction<Trigger::cActPlayerMaxHp>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActPlayerMaxHp>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8F210  Trigger::cAction<Trigger::cActPlayerMaxHp>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActPlayerMaxHp>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8F240  Trigger::cAction<Trigger::cActPlayerMaxDryCell>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActPlayerMaxDryCell>::vf00(void)

{
  return &DAT_01dbe368;
}

// 00C8F250  Trigger::cActPlayerMaxDryCell::vf08  size=1  [class]
void Trigger::cActPlayerMaxDryCell::vf08(void)

{
  return;
}

// 00C8F260  Trigger::cActPlayerMaxDryCell::vf0C  size=1  [class]
void Trigger::cActPlayerMaxDryCell::vf0C(void)

{
  return;
}

// 00C8F270  Trigger::cActPlayerMaxDryCell::vf10  size=1  [class]
void Trigger::cActPlayerMaxDryCell::vf10(void)

{
  return;
}

// 00C8F280  Trigger::cActPlayerMaxDryCell::vf14  size=1  [class]
void Trigger::cActPlayerMaxDryCell::vf14(void)

{
  return;
}

// 00C8F290  Trigger::cAction<Trigger::cActPlayerMaxDryCell>::vf1C  size=10  [class]
void __thiscall
Trigger::cAction<Trigger::cActPlayerMaxDryCell>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8F2A0  Trigger::cAction<Trigger::cActPlayerMaxDryCell>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActPlayerMaxDryCell>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8F2B0  Trigger::cAction<Trigger::cActPlayerMaxDryCell>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActPlayerMaxDryCell>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8F2E0  Trigger::cAction<Trigger::cActSeObject>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActSeObject>::vf00(void)

{
  return &DAT_01dbe364;
}

// 00C8F2F0  Trigger::cActSeObject::vf08  size=1  [class]
void Trigger::cActSeObject::vf08(void)

{
  return;
}

// 00C8F300  Trigger::cActSeObject::vf0C  size=1  [class]
void Trigger::cActSeObject::vf0C(void)

{
  return;
}

// 00C8F310  Trigger::cActSeObject::vf10  size=1  [class]
void Trigger::cActSeObject::vf10(void)

{
  return;
}

// 00C8F320  Trigger::cActSeObject::vf14  size=1  [class]
void Trigger::cActSeObject::vf14(void)

{
  return;
}

// 00C8F330  Trigger::cAction<Trigger::cActSeObject>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActSeObject>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8F340  Trigger::cAction<Trigger::cActSeObject>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActSeObject>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8F350  Trigger::cAction<Trigger::cActSeObject>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActSeObject>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8F380  Trigger::cAction<Trigger::cActItemOnOff>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActItemOnOff>::vf00(void)

{
  return &DAT_01dbe360;
}

// 00C8F390  Trigger::cActItemOnOff::vf08  size=1  [class]
void Trigger::cActItemOnOff::vf08(void)

{
  return;
}

// 00C8F3A0  Trigger::cActItemOnOff::vf0C  size=1  [class]
void Trigger::cActItemOnOff::vf0C(void)

{
  return;
}

// 00C8F3B0  Trigger::cActItemOnOff::vf10  size=1  [class]
void Trigger::cActItemOnOff::vf10(void)

{
  return;
}

// 00C8F3C0  Trigger::cActItemOnOff::vf14  size=1  [class]
void Trigger::cActItemOnOff::vf14(void)

{
  return;
}

// 00C8F3D0  Trigger::cAction<Trigger::cActItemOnOff>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActItemOnOff>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8F3E0  Trigger::cAction<Trigger::cActItemOnOff>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActItemOnOff>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8F3F0  Trigger::cAction<Trigger::cActItemOnOff>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActItemOnOff>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8F420  Trigger::cAction<Trigger::cActNoCodecMenu>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActNoCodecMenu>::vf00(void)

{
  return &DAT_01dbe35c;
}

// 00C8F430  Trigger::cActNoCodecMenu::vf08  size=1  [class]
void Trigger::cActNoCodecMenu::vf08(void)

{
  return;
}

// 00C8F440  Trigger::cActNoCodecMenu::vf0C  size=1  [class]
void Trigger::cActNoCodecMenu::vf0C(void)

{
  return;
}

// 00C8F450  Trigger::cActNoCodecMenu::vf10  size=1  [class]
void Trigger::cActNoCodecMenu::vf10(void)

{
  return;
}

// 00C8F460  Trigger::cActNoCodecMenu::vf14  size=1  [class]
void Trigger::cActNoCodecMenu::vf14(void)

{
  return;
}

// 00C8F470  Trigger::cAction<Trigger::cActNoCodecMenu>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActNoCodecMenu>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8F480  Trigger::cAction<Trigger::cActNoCodecMenu>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActNoCodecMenu>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8F490  Trigger::cAction<Trigger::cActNoCodecMenu>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActNoCodecMenu>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8F4C0  Trigger::cAction<Trigger::cActVrTimerStop>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActVrTimerStop>::vf00(void)

{
  return &DAT_01dbe358;
}

// 00C8F4D0  Trigger::cActVrTimerStop::vf08  size=1  [class]
void Trigger::cActVrTimerStop::vf08(void)

{
  return;
}

// 00C8F4E0  Trigger::cActVrTimerStop::vf0C  size=1  [class]
void Trigger::cActVrTimerStop::vf0C(void)

{
  return;
}

// 00C8F4F0  Trigger::cActVrTimerStop::vf10  size=1  [class]
void Trigger::cActVrTimerStop::vf10(void)

{
  return;
}

// 00C8F500  Trigger::cActVrTimerStop::vf14  size=1  [class]
void Trigger::cActVrTimerStop::vf14(void)

{
  return;
}

// 00C8F510  Trigger::cAction<Trigger::cActVrTimerStop>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActVrTimerStop>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8F520  Trigger::cAction<Trigger::cActVrTimerStop>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActVrTimerStop>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8F530  Trigger::cAction<Trigger::cActVrTimerStop>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActVrTimerStop>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8F560  Trigger::cAction<Trigger::cActCamFocusLock>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActCamFocusLock>::vf00(void)

{
  return &DAT_01dbe354;
}

// 00C8F570  Trigger::cActCamFocusLock::vf08  size=1  [class]
void Trigger::cActCamFocusLock::vf08(void)

{
  return;
}

// 00C8F580  Trigger::cActCamFocusLock::vf0C  size=1  [class]
void Trigger::cActCamFocusLock::vf0C(void)

{
  return;
}

// 00C8F590  Trigger::cActCamFocusLock::vf10  size=1  [class]
void Trigger::cActCamFocusLock::vf10(void)

{
  return;
}

// 00C8F5A0  Trigger::cActCamFocusLock::vf14  size=1  [class]
void Trigger::cActCamFocusLock::vf14(void)

{
  return;
}

// 00C8F5B0  Trigger::cAction<Trigger::cActCamFocusLock>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActCamFocusLock>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8F5C0  Trigger::cAction<Trigger::cActCamFocusLock>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActCamFocusLock>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8F5D0  Trigger::cAction<Trigger::cActCamFocusLock>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActCamFocusLock>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8F600  Trigger::cAction<Trigger::cActCamFocusLockOff>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActCamFocusLockOff>::vf00(void)

{
  return &DAT_01dbe350;
}

// 00C8F610  Trigger::cActCamFocusLockOff::vf08  size=1  [class]
void Trigger::cActCamFocusLockOff::vf08(void)

{
  return;
}

// 00C8F620  Trigger::cActCamFocusLockOff::vf0C  size=1  [class]
void Trigger::cActCamFocusLockOff::vf0C(void)

{
  return;
}

// 00C8F630  Trigger::cActCamFocusLockOff::vf10  size=1  [class]
void Trigger::cActCamFocusLockOff::vf10(void)

{
  return;
}

// 00C8F640  Trigger::cActCamFocusLockOff::vf14  size=1  [class]
void Trigger::cActCamFocusLockOff::vf14(void)

{
  return;
}

// 00C8F650  Trigger::cAction<Trigger::cActCamFocusLockOff>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActCamFocusLockOff>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8F660  Trigger::cAction<Trigger::cActCamFocusLockOff>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActCamFocusLockOff>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8F670  Trigger::cAction<Trigger::cActCamFocusLockOff>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActCamFocusLockOff>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8F6A0  Trigger::cAction<Trigger::cActVrReturn>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActVrReturn>::vf00(void)

{
  return &DAT_01dbe34c;
}

// 00C8F6B0  Trigger::cActVrReturn::vf08  size=1  [class]
void Trigger::cActVrReturn::vf08(void)

{
  return;
}

// 00C8F6C0  Trigger::cActVrReturn::vf0C  size=1  [class]
void Trigger::cActVrReturn::vf0C(void)

{
  return;
}

// 00C8F6D0  Trigger::cActVrReturn::vf10  size=1  [class]
void Trigger::cActVrReturn::vf10(void)

{
  return;
}

// 00C8F6E0  Trigger::cActVrReturn::vf14  size=1  [class]
void Trigger::cActVrReturn::vf14(void)

{
  return;
}

// 00C8F6F0  Trigger::cAction<Trigger::cActVrReturn>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActVrReturn>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8F700  Trigger::cAction<Trigger::cActVrReturn>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActVrReturn>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8F710  Trigger::cAction<Trigger::cActVrReturn>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActVrReturn>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8F740  Trigger::cAction<Trigger::cActPlKgkPos>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActPlKgkPos>::vf00(void)

{
  return &DAT_01dbe348;
}

// 00C8F750  Trigger::cActPlKgkPos::vf08  size=1  [class]
void Trigger::cActPlKgkPos::vf08(void)

{
  return;
}

// 00C8F760  Trigger::cActPlKgkPos::vf0C  size=1  [class]
void Trigger::cActPlKgkPos::vf0C(void)

{
  return;
}

// 00C8F770  Trigger::cActPlKgkPos::vf10  size=1  [class]
void Trigger::cActPlKgkPos::vf10(void)

{
  return;
}

// 00C8F780  Trigger::cActPlKgkPos::vf14  size=1  [class]
void Trigger::cActPlKgkPos::vf14(void)

{
  return;
}

// 00C8F790  Trigger::cAction<Trigger::cActPlKgkPos>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActPlKgkPos>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8F7A0  Trigger::cAction<Trigger::cActPlKgkPos>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActPlKgkPos>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8F7B0  Trigger::cAction<Trigger::cActPlKgkPos>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActPlKgkPos>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8F7E0  Trigger::cAction<Trigger::cActVrBm6000On>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActVrBm6000On>::vf00(void)

{
  return &DAT_01dbe344;
}

// 00C8F7F0  Trigger::cActVrBm6000On::vf08  size=1  [class]
void Trigger::cActVrBm6000On::vf08(void)

{
  return;
}

// 00C8F800  Trigger::cActVrBm6000On::vf0C  size=1  [class]
void Trigger::cActVrBm6000On::vf0C(void)

{
  return;
}

// 00C8F810  Trigger::cActVrBm6000On::vf10  size=1  [class]
void Trigger::cActVrBm6000On::vf10(void)

{
  return;
}

// 00C8F820  Trigger::cActVrBm6000On::vf14  size=1  [class]
void Trigger::cActVrBm6000On::vf14(void)

{
  return;
}

// 00C8F830  Trigger::cAction<Trigger::cActVrBm6000On>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActVrBm6000On>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8F840  Trigger::cAction<Trigger::cActVrBm6000On>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActVrBm6000On>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8F850  Trigger::cAction<Trigger::cActVrBm6000On>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActVrBm6000On>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8F880  Trigger::cAction<Trigger::cActVrBm6000Off>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActVrBm6000Off>::vf00(void)

{
  return &DAT_01dbe340;
}

// 00C8F890  Trigger::cActVrBm6000Off::vf08  size=1  [class]
void Trigger::cActVrBm6000Off::vf08(void)

{
  return;
}

// 00C8F8A0  Trigger::cActVrBm6000Off::vf0C  size=1  [class]
void Trigger::cActVrBm6000Off::vf0C(void)

{
  return;
}

// 00C8F8B0  Trigger::cActVrBm6000Off::vf10  size=1  [class]
void Trigger::cActVrBm6000Off::vf10(void)

{
  return;
}

// 00C8F8C0  Trigger::cActVrBm6000Off::vf14  size=1  [class]
void Trigger::cActVrBm6000Off::vf14(void)

{
  return;
}

// 00C8F8D0  Trigger::cAction<Trigger::cActVrBm6000Off>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActVrBm6000Off>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8F8E0  Trigger::cAction<Trigger::cActVrBm6000Off>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActVrBm6000Off>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8F8F0  Trigger::cAction<Trigger::cActVrBm6000Off>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActVrBm6000Off>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8F920  Trigger::cAction<Trigger::cActPlKgkStop>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActPlKgkStop>::vf00(void)

{
  return &DAT_01dbe33c;
}

// 00C8F930  Trigger::cActPlKgkStop::vf08  size=1  [class]
void Trigger::cActPlKgkStop::vf08(void)

{
  return;
}

// 00C8F940  Trigger::cActPlKgkStop::vf0C  size=1  [class]
void Trigger::cActPlKgkStop::vf0C(void)

{
  return;
}

// 00C8F950  Trigger::cActPlKgkStop::vf10  size=1  [class]
void Trigger::cActPlKgkStop::vf10(void)

{
  return;
}

// 00C8F960  Trigger::cActPlKgkStop::vf14  size=1  [class]
void Trigger::cActPlKgkStop::vf14(void)

{
  return;
}

// 00C8F970  Trigger::cAction<Trigger::cActPlKgkStop>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActPlKgkStop>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8F980  Trigger::cAction<Trigger::cActPlKgkStop>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActPlKgkStop>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8F990  Trigger::cAction<Trigger::cActPlKgkStop>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActPlKgkStop>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8F9C0  Trigger::cAction<Trigger::cActDoorCloseDelay>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActDoorCloseDelay>::vf00(void)

{
  return &DAT_01dbe338;
}

// 00C8F9D0  Trigger::cActDoorCloseDelay::vf08  size=1  [class]
void Trigger::cActDoorCloseDelay::vf08(void)

{
  return;
}

// 00C8F9E0  Trigger::cActDoorCloseDelay::vf0C  size=1  [class]
void Trigger::cActDoorCloseDelay::vf0C(void)

{
  return;
}

// 00C8F9F0  Trigger::cActDoorCloseDelay::vf10  size=1  [class]
void Trigger::cActDoorCloseDelay::vf10(void)

{
  return;
}

// 00C8FA00  Trigger::cActDoorCloseDelay::vf14  size=1  [class]
void Trigger::cActDoorCloseDelay::vf14(void)

{
  return;
}

// 00C8FA10  Trigger::cAction<Trigger::cActDoorCloseDelay>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActDoorCloseDelay>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8FA20  Trigger::cAction<Trigger::cActDoorCloseDelay>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActDoorCloseDelay>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8FA30  Trigger::cAction<Trigger::cActDoorCloseDelay>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActDoorCloseDelay>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8FA60  Trigger::cAction<Trigger::cActDoorOpenDelay>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActDoorOpenDelay>::vf00(void)

{
  return &DAT_01dbe334;
}

// 00C8FA70  Trigger::cActDoorOpenDelay::vf08  size=1  [class]
void Trigger::cActDoorOpenDelay::vf08(void)

{
  return;
}

// 00C8FA80  Trigger::cActDoorOpenDelay::vf0C  size=1  [class]
void Trigger::cActDoorOpenDelay::vf0C(void)

{
  return;
}

// 00C8FA90  Trigger::cActDoorOpenDelay::vf10  size=1  [class]
void Trigger::cActDoorOpenDelay::vf10(void)

{
  return;
}

// 00C8FAA0  Trigger::cActDoorOpenDelay::vf14  size=1  [class]
void Trigger::cActDoorOpenDelay::vf14(void)

{
  return;
}

// 00C8FAB0  Trigger::cAction<Trigger::cActDoorOpenDelay>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActDoorOpenDelay>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8FAC0  Trigger::cAction<Trigger::cActDoorOpenDelay>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActDoorOpenDelay>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8FAD0  Trigger::cAction<Trigger::cActDoorOpenDelay>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActDoorOpenDelay>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8FB00  Trigger::cActFlagOnDlc2::vf00  size=6  [class]
undefined * Trigger::cActFlagOnDlc2::vf00(void)

{
  return &DAT_01dbe330;
}

// 00C8FB10  Trigger::cActFlagOnDlc2::vf08  size=1  [class]
void Trigger::cActFlagOnDlc2::vf08(void)

{
  return;
}

// 00C8FB20  Trigger::cActFlagOnDlc2::vf0C  size=1  [class]
void Trigger::cActFlagOnDlc2::vf0C(void)

{
  return;
}

// 00C8FB30  Trigger::cActFlagOnDlc2::vf10  size=1  [class]
void Trigger::cActFlagOnDlc2::vf10(void)

{
  return;
}

// 00C8FB40  Trigger::cActFlagOnDlc2::vf14  size=1  [class]
void Trigger::cActFlagOnDlc2::vf14(void)

{
  return;
}

// 00C8FB50  Trigger::cAction<Trigger::cActFlagOnDlc2>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActFlagOnDlc2>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8FB60  Trigger::cAction<Trigger::cActFlagOnDlc2>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActFlagOnDlc2>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8FB70  Trigger::cAction<Trigger::cActFlagOnDlc2>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActFlagOnDlc2>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8FBA0  Trigger::cActFlagOffDlc2::vf00  size=6  [class]
undefined * Trigger::cActFlagOffDlc2::vf00(void)

{
  return &DAT_01dbe32c;
}

// 00C8FBB0  Trigger::cActFlagOffDlc2::vf08  size=1  [class]
void Trigger::cActFlagOffDlc2::vf08(void)

{
  return;
}

// 00C8FBC0  Trigger::cActFlagOffDlc2::vf0C  size=1  [class]
void Trigger::cActFlagOffDlc2::vf0C(void)

{
  return;
}

// 00C8FBD0  Trigger::cActFlagOffDlc2::vf10  size=1  [class]
void Trigger::cActFlagOffDlc2::vf10(void)

{
  return;
}

// 00C8FBE0  Trigger::cActFlagOffDlc2::vf14  size=1  [class]
void Trigger::cActFlagOffDlc2::vf14(void)

{
  return;
}

// 00C8FBF0  Trigger::cAction<Trigger::cActFlagOffDlc2>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActFlagOffDlc2>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8FC00  Trigger::cAction<Trigger::cActFlagOffDlc2>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActFlagOffDlc2>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8FC10  Trigger::cAction<Trigger::cActFlagOffDlc2>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActFlagOffDlc2>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8FC40  Trigger::cActFlagOnDlc3::vf00  size=6  [class]
undefined * Trigger::cActFlagOnDlc3::vf00(void)

{
  return &DAT_01dbe328;
}

// 00C8FC50  Trigger::cActFlagOnDlc3::vf08  size=1  [class]
void Trigger::cActFlagOnDlc3::vf08(void)

{
  return;
}

// 00C8FC60  Trigger::cActFlagOnDlc3::vf0C  size=1  [class]
void Trigger::cActFlagOnDlc3::vf0C(void)

{
  return;
}

// 00C8FC70  Trigger::cActFlagOnDlc3::vf10  size=1  [class]
void Trigger::cActFlagOnDlc3::vf10(void)

{
  return;
}

// 00C8FC80  Trigger::cActFlagOnDlc3::vf14  size=1  [class]
void Trigger::cActFlagOnDlc3::vf14(void)

{
  return;
}

// 00C8FC90  Trigger::cAction<Trigger::cActFlagOnDlc3>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActFlagOnDlc3>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8FCA0  Trigger::cAction<Trigger::cActFlagOnDlc3>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActFlagOnDlc3>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8FCB0  Trigger::cAction<Trigger::cActFlagOnDlc3>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActFlagOnDlc3>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8FCE0  Trigger::cActFlagOffDlc3::vf00  size=6  [class]
undefined * Trigger::cActFlagOffDlc3::vf00(void)

{
  return &DAT_01dbe324;
}

// 00C8FCF0  Trigger::cActFlagOffDlc3::vf08  size=1  [class]
void Trigger::cActFlagOffDlc3::vf08(void)

{
  return;
}

// 00C8FD00  Trigger::cActFlagOffDlc3::vf0C  size=1  [class]
void Trigger::cActFlagOffDlc3::vf0C(void)

{
  return;
}

// 00C8FD10  Trigger::cActFlagOffDlc3::vf10  size=1  [class]
void Trigger::cActFlagOffDlc3::vf10(void)

{
  return;
}

// 00C8FD20  Trigger::cActFlagOffDlc3::vf14  size=1  [class]
void Trigger::cActFlagOffDlc3::vf14(void)

{
  return;
}

// 00C8FD30  Trigger::cAction<Trigger::cActFlagOffDlc3>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActFlagOffDlc3>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8FD40  Trigger::cAction<Trigger::cActFlagOffDlc3>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActFlagOffDlc3>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8FD50  Trigger::cAction<Trigger::cActFlagOffDlc3>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActFlagOffDlc3>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8FD80  Trigger::cAction<Trigger::cActResultRecStartClear>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActResultRecStartClear>::vf00(void)

{
  return &DAT_01dbe320;
}

// 00C8FD90  Trigger::cActResultRecStartClear::vf08  size=1  [class]
void Trigger::cActResultRecStartClear::vf08(void)

{
  return;
}

// 00C8FDA0  Trigger::cActResultRecStartClear::vf0C  size=1  [class]
void Trigger::cActResultRecStartClear::vf0C(void)

{
  return;
}

// 00C8FDB0  Trigger::cActResultRecStartClear::vf10  size=1  [class]
void Trigger::cActResultRecStartClear::vf10(void)

{
  return;
}

// 00C8FDC0  Trigger::cActResultRecStartClear::vf14  size=1  [class]
void Trigger::cActResultRecStartClear::vf14(void)

{
  return;
}

// 00C8FDD0  Trigger::cAction<Trigger::cActResultRecStartClear>::vf1C  size=10  [class]
void __thiscall
Trigger::cAction<Trigger::cActResultRecStartClear>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8FDE0  Trigger::cAction<Trigger::cActResultRecStartClear>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActResultRecStartClear>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8FDF0  Trigger::cAction<Trigger::cActResultRecStartClear>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActResultRecStartClear>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C8FE10  FUN_00c8fe10  size=43  [between]
void __fastcall FUN_00c8fe10(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00C8FF60  Trigger::cAction<Trigger::cActMainTrgActive>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActMainTrgActive>::vf00(void)

{
  return &DAT_01dbe31c;
}

// 00C8FF70  Trigger::cAction<Trigger::cActMainTrgActive>::vf08  size=1  [class]
void Trigger::cAction<Trigger::cActMainTrgActive>::vf08(void)

{
  return;
}

// 00C8FF80  Trigger::cAction<Trigger::cActMainTrgActive>::vf0C  size=1  [class]
void Trigger::cAction<Trigger::cActMainTrgActive>::vf0C(void)

{
  return;
}

// 00C8FF90  Trigger::cAction<Trigger::cActMainTrgActive>::vf10  size=1  [class]
void Trigger::cAction<Trigger::cActMainTrgActive>::vf10(void)

{
  return;
}

// 00C8FFA0  Trigger::cAction<Trigger::cActMainTrgActive>::vf14  size=1  [class]
void Trigger::cAction<Trigger::cActMainTrgActive>::vf14(void)

{
  return;
}

// 00C8FFB0  Trigger::cAction<Trigger::cActMainTrgActive>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActMainTrgActive>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C8FFC0  Trigger::cAction<Trigger::cActMainTrgActive>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActMainTrgActive>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C8FFD0  Trigger::cAction<Trigger::cActMainTrgActive>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActMainTrgActive>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C90000  Trigger::cAction<Trigger::cActMainTrgSleep>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActMainTrgSleep>::vf00(void)

{
  return &DAT_01dbe318;
}

// 00C90010  Trigger::cAction<Trigger::cActMainTrgSleep>::vf08  size=1  [class]
void Trigger::cAction<Trigger::cActMainTrgSleep>::vf08(void)

{
  return;
}

// 00C90020  Trigger::cAction<Trigger::cActMainTrgSleep>::vf0C  size=1  [class]
void Trigger::cAction<Trigger::cActMainTrgSleep>::vf0C(void)

{
  return;
}

// 00C90030  Trigger::cAction<Trigger::cActMainTrgSleep>::vf10  size=1  [class]
void Trigger::cAction<Trigger::cActMainTrgSleep>::vf10(void)

{
  return;
}

// 00C90040  Trigger::cAction<Trigger::cActMainTrgSleep>::vf14  size=1  [class]
void Trigger::cAction<Trigger::cActMainTrgSleep>::vf14(void)

{
  return;
}

// 00C90050  Trigger::cAction<Trigger::cActMainTrgSleep>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActMainTrgSleep>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C90060  Trigger::cAction<Trigger::cActMainTrgSleep>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActMainTrgSleep>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C90070  Trigger::cAction<Trigger::cActMainTrgSleep>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActMainTrgSleep>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C900A0  Trigger::cAction<Trigger::cActSubTrgActive>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActSubTrgActive>::vf00(void)

{
  return &DAT_01dbe314;
}

// 00C900B0  Trigger::cAction<Trigger::cActSubTrgActive>::vf08  size=1  [class]
void Trigger::cAction<Trigger::cActSubTrgActive>::vf08(void)

{
  return;
}

// 00C900C0  Trigger::cAction<Trigger::cActSubTrgActive>::vf0C  size=1  [class]
void Trigger::cAction<Trigger::cActSubTrgActive>::vf0C(void)

{
  return;
}

// 00C900D0  Trigger::cAction<Trigger::cActSubTrgActive>::vf10  size=1  [class]
void Trigger::cAction<Trigger::cActSubTrgActive>::vf10(void)

{
  return;
}

// 00C900E0  Trigger::cAction<Trigger::cActSubTrgActive>::vf14  size=1  [class]
void Trigger::cAction<Trigger::cActSubTrgActive>::vf14(void)

{
  return;
}

// 00C900F0  Trigger::cAction<Trigger::cActSubTrgActive>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActSubTrgActive>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C90100  Trigger::cAction<Trigger::cActSubTrgActive>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActSubTrgActive>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C90110  Trigger::cAction<Trigger::cActSubTrgActive>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActSubTrgActive>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C90140  Trigger::cAction<Trigger::cActSubTrgSleep>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActSubTrgSleep>::vf00(void)

{
  return &DAT_01dbe310;
}

// 00C90150  Trigger::cAction<Trigger::cActSubTrgSleep>::vf08  size=1  [class]
void Trigger::cAction<Trigger::cActSubTrgSleep>::vf08(void)

{
  return;
}

// 00C90160  Trigger::cAction<Trigger::cActSubTrgSleep>::vf0C  size=1  [class]
void Trigger::cAction<Trigger::cActSubTrgSleep>::vf0C(void)

{
  return;
}

// 00C90170  Trigger::cAction<Trigger::cActSubTrgSleep>::vf10  size=1  [class]
void Trigger::cAction<Trigger::cActSubTrgSleep>::vf10(void)

{
  return;
}

// 00C90180  Trigger::cAction<Trigger::cActSubTrgSleep>::vf14  size=1  [class]
void Trigger::cAction<Trigger::cActSubTrgSleep>::vf14(void)

{
  return;
}

// 00C90190  Trigger::cAction<Trigger::cActSubTrgSleep>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActSubTrgSleep>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C901A0  Trigger::cAction<Trigger::cActSubTrgSleep>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActSubTrgSleep>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C901B0  Trigger::cAction<Trigger::cActSubTrgSleep>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActSubTrgSleep>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C901E0  Trigger::cAction<Trigger::cActMainTrgAddFunc>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActMainTrgAddFunc>::vf00(void)

{
  return &DAT_01dbe30c;
}

// 00C901F0  Trigger::cAction<Trigger::cActMainTrgAddFunc>::vf08  size=1  [class]
void Trigger::cAction<Trigger::cActMainTrgAddFunc>::vf08(void)

{
  return;
}

// 00C90200  Trigger::cAction<Trigger::cActMainTrgAddFunc>::vf0C  size=1  [class]
void Trigger::cAction<Trigger::cActMainTrgAddFunc>::vf0C(void)

{
  return;
}

// 00C90210  Trigger::cAction<Trigger::cActMainTrgAddFunc>::vf10  size=1  [class]
void Trigger::cAction<Trigger::cActMainTrgAddFunc>::vf10(void)

{
  return;
}

// 00C90220  Trigger::cAction<Trigger::cActMainTrgAddFunc>::vf14  size=1  [class]
void Trigger::cAction<Trigger::cActMainTrgAddFunc>::vf14(void)

{
  return;
}

// 00C90230  Trigger::cAction<Trigger::cActMainTrgAddFunc>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActMainTrgAddFunc>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C90240  Trigger::cAction<Trigger::cActMainTrgAddFunc>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActMainTrgAddFunc>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C90250  Trigger::cAction<Trigger::cActMainTrgAddFunc>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActMainTrgAddFunc>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C90280  Trigger::cAction<Trigger::cActSubTrgAddFunc>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActSubTrgAddFunc>::vf00(void)

{
  return &DAT_01dbe308;
}

// 00C90290  Trigger::cAction<Trigger::cActSubTrgAddFunc>::vf08  size=1  [class]
void Trigger::cAction<Trigger::cActSubTrgAddFunc>::vf08(void)

{
  return;
}

// 00C902A0  Trigger::cAction<Trigger::cActSubTrgAddFunc>::vf0C  size=1  [class]
void Trigger::cAction<Trigger::cActSubTrgAddFunc>::vf0C(void)

{
  return;
}

// 00C902B0  Trigger::cAction<Trigger::cActSubTrgAddFunc>::vf10  size=1  [class]
void Trigger::cAction<Trigger::cActSubTrgAddFunc>::vf10(void)

{
  return;
}

// 00C902C0  Trigger::cAction<Trigger::cActSubTrgAddFunc>::vf14  size=1  [class]
void Trigger::cAction<Trigger::cActSubTrgAddFunc>::vf14(void)

{
  return;
}

// 00C902D0  Trigger::cAction<Trigger::cActSubTrgAddFunc>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActSubTrgAddFunc>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C902E0  Trigger::cAction<Trigger::cActSubTrgAddFunc>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActSubTrgAddFunc>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C902F0  Trigger::cAction<Trigger::cActSubTrgAddFunc>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActSubTrgAddFunc>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C90320  Trigger::cAction<Trigger::cActMainTrgDelFunc>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActMainTrgDelFunc>::vf00(void)

{
  return &DAT_01dbe304;
}

// 00C90330  Trigger::cAction<Trigger::cActMainTrgDelFunc>::vf08  size=1  [class]
void Trigger::cAction<Trigger::cActMainTrgDelFunc>::vf08(void)

{
  return;
}

// 00C90340  Trigger::cAction<Trigger::cActMainTrgDelFunc>::vf0C  size=1  [class]
void Trigger::cAction<Trigger::cActMainTrgDelFunc>::vf0C(void)

{
  return;
}

// 00C90350  Trigger::cAction<Trigger::cActMainTrgDelFunc>::vf10  size=1  [class]
void Trigger::cAction<Trigger::cActMainTrgDelFunc>::vf10(void)

{
  return;
}

// 00C90360  Trigger::cAction<Trigger::cActMainTrgDelFunc>::vf14  size=1  [class]
void Trigger::cAction<Trigger::cActMainTrgDelFunc>::vf14(void)

{
  return;
}

// 00C90370  Trigger::cAction<Trigger::cActMainTrgDelFunc>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActMainTrgDelFunc>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C90380  Trigger::cAction<Trigger::cActMainTrgDelFunc>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActMainTrgDelFunc>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C90390  Trigger::cAction<Trigger::cActMainTrgDelFunc>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActMainTrgDelFunc>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C903C0  Trigger::cAction<Trigger::cActSubTrgDelFunc>::vf00  size=6  [class]
undefined * Trigger::cAction<Trigger::cActSubTrgDelFunc>::vf00(void)

{
  return &DAT_01dbe300;
}

// 00C903D0  Trigger::cAction<Trigger::cActSubTrgDelFunc>::vf08  size=1  [class]
void Trigger::cAction<Trigger::cActSubTrgDelFunc>::vf08(void)

{
  return;
}

// 00C903E0  Trigger::cAction<Trigger::cActSubTrgDelFunc>::vf0C  size=1  [class]
void Trigger::cAction<Trigger::cActSubTrgDelFunc>::vf0C(void)

{
  return;
}

// 00C903F0  Trigger::cAction<Trigger::cActSubTrgDelFunc>::vf10  size=1  [class]
void Trigger::cAction<Trigger::cActSubTrgDelFunc>::vf10(void)

{
  return;
}

// 00C90400  Trigger::cAction<Trigger::cActSubTrgDelFunc>::vf14  size=1  [class]
void Trigger::cAction<Trigger::cActSubTrgDelFunc>::vf14(void)

{
  return;
}

// 00C90410  Trigger::cAction<Trigger::cActSubTrgDelFunc>::vf1C  size=10  [class]
void __thiscall Trigger::cAction<Trigger::cActSubTrgDelFunc>::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C90420  Trigger::cAction<Trigger::cActSubTrgDelFunc>::vf20  size=15  [class]
undefined4 __fastcall Trigger::cAction<Trigger::cActSubTrgDelFunc>::vf20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
}

// 00C90430  Trigger::cAction<Trigger::cActSubTrgDelFunc>::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cAction<Trigger::cActSubTrgDelFunc>::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C90500  FUN_00c90500  size=72  [between]
void __fastcall FUN_00c90500(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 4);
  if (puVar2 != puVar2 + *(int *)(param_1 + 8)) {
    do {
      piVar1 = (int *)*puVar2;
      (**(code **)(*piVar1 + 8))();
      (**(code **)*piVar1)(1);
      puVar2 = puVar2 + 1;
    } while (puVar2 != (undefined4 *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 4));
  }
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00C90550  FUN_00c90550  size=132  [between]
void __fastcall FUN_00c90550(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  piVar4 = *(int **)(param_1 + 4);
  if (piVar4 != piVar4 + *(int *)(param_1 + 8)) {
    do {
      piVar5 = (int *)*piVar4;
      if ((*(byte *)(piVar5 + 2) & 2) == 0) {
        (**(code **)(*piVar5 + 0xc))();
        piVar5 = piVar4 + 1;
      }
      else {
        (**(code **)(*piVar5 + 8))();
        (**(code **)*piVar5)(1);
        uVar1 = *(uint *)(param_1 + 8);
        iVar2 = *(int *)(param_1 + 4);
        piVar5 = (int *)(iVar2 + uVar1 * 4);
        if ((((piVar4 != piVar5) && (iVar2 != 0)) && (uVar1 != 0)) &&
           ((uint)((int)piVar4 - iVar2 >> 2) < uVar1)) {
          for (piVar3 = piVar4; piVar3 != piVar5 + -1; piVar3 = piVar3 + 1) {
            *piVar3 = piVar3[1];
          }
          *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
          piVar5 = piVar4;
        }
      }
      piVar4 = piVar5;
    } while (piVar5 != (int *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 4));
  }
  return;
}

// 00C90600  FUN_00c90600  size=96  [between]
void __fastcall FUN_00c90600(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  FUN_00c84a70();
  iVar1 = FUN_00a82090("TriggerCamera",0x40001,0);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    return;
  }
  piVar2 = (int *)FUN_00a7c8a0();
  if (piVar2 == (int *)0x0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    return;
  }
  puVar3 = &DAT_01be9c80;
  (**(code **)(*piVar2 + 4))(&DAT_01be9c80);
  iVar1 = FUN_00dd6d80(puVar3);
  *(uint *)(param_1 + 0x38) = -(uint)(iVar1 != 0) & (uint)piVar2;
  return;
}

// 00C90660  FUN_00c90660  size=19  [between]
undefined4 __fastcall FUN_00c90660(int param_1)

{
  FUN_00c840a0();
  *(undefined4 *)(param_1 + 0x14) = 0;
  return 0;
}

// 00C90800  FUN_00c90800  size=55  [between]
void __fastcall FUN_00c90800(int param_1)

{
  FUN_00c840a0();
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  FUN_00dd7270();
  return;
}

// 00C908B0  FUN_00c908b0  size=61  [between]
void __fastcall FUN_00c908b0(int param_1)

{
  if (*(int *)(param_1 + 0x248) != 0) {
    *(undefined4 *)(param_1 + 0x250) = 0;
    if (*(int *)(param_1 + 0x254) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x248),0);
      *(undefined4 *)(param_1 + 0x254) = 0;
    }
    *(undefined4 *)(param_1 + 0x248) = 0;
    *(undefined4 *)(param_1 + 0x24c) = 0;
  }
  return;
}

// 00C908F0  FUN_00c908f0  size=81  [between]
int __thiscall FUN_00c908f0(int param_1,byte param_2)

{
  if (*(int *)(param_1 + 0x248) != 0) {
    *(undefined4 *)(param_1 + 0x250) = 0;
    if (*(int *)(param_1 + 0x254) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x248),0);
      *(undefined4 *)(param_1 + 0x254) = 0;
    }
    *(undefined4 *)(param_1 + 0x248) = 0;
    *(undefined4 *)(param_1 + 0x24c) = 0;
  }
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C90950  FUN_00c90950  size=168  [between]
bool FUN_00c90950(int param_1)

{
  if (DAT_01dbd1d0 != 0) {
    return true;
  }
  if (param_1 == 0) {
    return false;
  }
  DAT_01dbd1d4 = param_1;
  DAT_01dbd1d0 = FUN_00dd3500(1,param_1);
  if (DAT_01dbd1d0 != 0) {
    DAT_01dbd1d8 = (int *)FUN_00dd3500(0x14,DAT_01dbd1d4);
    if (DAT_01dbd1d8 != (int *)0x0) {
      *DAT_01dbd1d8 = param_1;
      DAT_01dbd1d8[2] = -0x40800000;
      DAT_01dbd1d8[1] = -1;
      DAT_01dbd1d8[3] = -1;
      DAT_01dbd1d8[4] = 0;
      return DAT_01dbd1d0 != 0;
    }
    DAT_01dbd1d8 = (int *)0x0;
    if (DAT_01dbd1d0 == 0) goto LAB_00c909ed;
    FUN_00dd4920(DAT_01dbd1d0);
  }
  DAT_01dbd1d0 = 0;
LAB_00c909ed:
  return DAT_01dbd1d0 != 0;
}

// 00C90A00  FUN_00c90a00  size=11  [between]
void FUN_00c90a00(void)

{
  FUN_00c90600();
  return;
}

// 00C90A60  FUN_00c90a60  size=243  [between]
void __fastcall FUN_00c90a60(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x18);
  if (piVar2 != piVar2 + *(int *)(param_1 + 0x20)) {
    do {
      iVar1 = *piVar2;
      if (iVar1 != 0) {
        if (*(int **)(iVar1 + 0x2c) != (int *)0x0) {
          (**(code **)(**(int **)(iVar1 + 0x2c) + 8))();
          if (*(undefined4 **)(iVar1 + 0x2c) != (undefined4 *)0x0) {
            (**(code **)**(undefined4 **)(iVar1 + 0x2c))(1);
          }
        }
        if (*(int **)(iVar1 + 0x30) != (int *)0x0) {
          (**(code **)(**(int **)(iVar1 + 0x30) + 0xc))();
          if (*(int **)(iVar1 + 0x30) != (int *)0x0) {
            (**(code **)(**(int **)(iVar1 + 0x30) + 4))(1);
          }
        }
        *(undefined4 *)(iVar1 + 4) = 0;
        if (*piVar2 != 0) {
          FUN_00dd4920(*piVar2);
        }
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != (int *)(*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x20) * 4));
  }
  piVar2 = *(int **)(param_1 + 0x2c);
  if (piVar2 != piVar2 + *(int *)(param_1 + 0x34)) {
    do {
      iVar1 = *piVar2;
      if (iVar1 != 0) {
        if (*(int **)(iVar1 + 0x2c) != (int *)0x0) {
          (**(code **)(**(int **)(iVar1 + 0x2c) + 8))();
          if (*(undefined4 **)(iVar1 + 0x2c) != (undefined4 *)0x0) {
            (**(code **)**(undefined4 **)(iVar1 + 0x2c))(1);
          }
        }
        if (*(int **)(iVar1 + 0x30) != (int *)0x0) {
          (**(code **)(**(int **)(iVar1 + 0x30) + 0xc))();
          if (*(int **)(iVar1 + 0x30) != (int *)0x0) {
            (**(code **)(**(int **)(iVar1 + 0x30) + 4))(1);
          }
        }
        *(undefined4 *)(iVar1 + 4) = 0;
        if (*piVar2 != 0) {
          FUN_00dd4920(*piVar2);
        }
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != (int *)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x34) * 4));
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  return;
}

// 00C90C40  FUN_00c90c40  size=448  [between]
void __fastcall FUN_00c90c40(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  
  piVar6 = *(int **)(param_1 + 0x18);
  piVar2 = piVar6 + *(int *)(param_1 + 0x20);
  for (; piVar6 != piVar2; piVar6 = piVar6 + 1) {
    iVar3 = *piVar6;
    iVar4 = *(int *)(iVar3 + 0x1c);
    if ((*(int *)(iVar3 + 0x18) != 2) &&
       ((iVar4 == *(int *)(param_1 + 0x6e4) ||
        (((iVar4 != *(int *)(param_1 + 0x6f0) &&
          ((iVar4 == *(int *)(param_1 + 0x6e8) || (iVar4 = FUN_00d4f040(iVar4,1), iVar4 != 0)))) &&
         ((*(int *)(iVar3 + 0x24) == *(int *)(param_1 + 0x6ec) ||
          (iVar4 = FUN_00d4f040(*(int *)(iVar3 + 0x24),0), iVar4 == 0)))))))) {
      piVar5 = *(int **)(param_1 + 4);
      piVar1 = piVar5 + *(int *)(param_1 + 0xc);
      for (; piVar5 != piVar1; piVar5 = piVar5 + 1) {
        if ((*piVar5 != 0) && (*piVar5 == iVar3)) goto LAB_00c90d13;
      }
      if (*(int *)(param_1 + 0xc) < *(int *)(param_1 + 8)) {
        if (piVar1 != (int *)0x0) {
          *piVar1 = iVar3;
        }
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
      }
      *(undefined4 *)(iVar3 + 4) = 1;
      if ((*(int **)(iVar3 + 0x2c) != (int *)0x0) &&
         (iVar4 = (**(code **)(**(int **)(iVar3 + 0x2c) + 0xc))(), iVar4 == 0)) {
        *(undefined4 *)(iVar3 + 4) = 4;
      }
      if (*(int **)(iVar3 + 0x30) != (int *)0x0) {
        (**(code **)(**(int **)(iVar3 + 0x30) + 0x10))();
      }
    }
LAB_00c90d13:
  }
  piVar6 = *(int **)(param_1 + 0x2c);
  piVar2 = piVar6 + *(int *)(param_1 + 0x34);
  do {
    if (piVar6 == piVar2) {
      return;
    }
    iVar3 = *piVar6;
    iVar4 = *(int *)(iVar3 + 0x1c);
    if ((*(int *)(iVar3 + 0x18) != 2) &&
       ((iVar4 == *(int *)(param_1 + 0x6e4) ||
        (((iVar4 != *(int *)(param_1 + 0x6f0) &&
          ((iVar4 == *(int *)(param_1 + 0x6e8) || (iVar4 = FUN_00d4f040(iVar4,1), iVar4 != 0)))) &&
         ((*(int *)(iVar3 + 0x24) == *(int *)(param_1 + 0x6ec) ||
          (iVar4 = FUN_00d4f040(*(int *)(iVar3 + 0x24),0), iVar4 == 0)))))))) {
      piVar5 = *(int **)(param_1 + 4);
      piVar1 = piVar5 + *(int *)(param_1 + 0xc);
      for (; piVar5 != piVar1; piVar5 = piVar5 + 1) {
        if ((*piVar5 != 0) && (*piVar5 == iVar3)) goto LAB_00c90ded;
      }
      if (*(int *)(param_1 + 0xc) < *(int *)(param_1 + 8)) {
        if (piVar1 != (int *)0x0) {
          *piVar1 = iVar3;
        }
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
      }
      *(undefined4 *)(iVar3 + 4) = 1;
      if ((*(int **)(iVar3 + 0x2c) != (int *)0x0) &&
         (iVar4 = (**(code **)(**(int **)(iVar3 + 0x2c) + 0xc))(), iVar4 == 0)) {
        *(undefined4 *)(iVar3 + 4) = 4;
      }
      if (*(int **)(iVar3 + 0x30) != (int *)0x0) {
        (**(code **)(**(int **)(iVar3 + 0x30) + 0x10))();
      }
    }
LAB_00c90ded:
    piVar6 = piVar6 + 1;
  } while( true );
}

// 00C90E00  FUN_00c90e00  size=120  [between]
undefined4 __thiscall FUN_00c90e00(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  
  piVar6 = *(int **)(param_1 + 0x18);
  piVar1 = piVar6 + *(int *)(param_1 + 0x20);
  uVar4 = 0;
  for (; piVar6 != piVar1; piVar6 = piVar6 + 1) {
    iVar3 = *piVar6;
    if (*(int *)(iVar3 + 0x1c) == param_2) {
      if (*(int *)(param_1 + 0xc) < *(int *)(param_1 + 8)) {
        piVar2 = (int *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 0xc) * 4);
        if (piVar2 != (int *)0x0) {
          *piVar2 = iVar3;
        }
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
      }
      *(undefined4 *)(iVar3 + 4) = 1;
      if ((*(int **)(iVar3 + 0x2c) != (int *)0x0) &&
         (iVar5 = (**(code **)(**(int **)(iVar3 + 0x2c) + 0xc))(), iVar5 == 0)) {
        *(undefined4 *)(iVar3 + 4) = 4;
      }
      if (*(int **)(iVar3 + 0x30) != (int *)0x0) {
        (**(code **)(**(int **)(iVar3 + 0x30) + 0x10))();
      }
      uVar4 = 1;
    }
  }
  return uVar4;
}

// 00C90E80  FUN_00c90e80  size=52  [between]
undefined4 FUN_00c90e80(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00fdc7b0(param_1,0x26);
  if (iVar1 != param_1) {
    return 0;
  }
  uVar2 = FUN_00e03ea0(param_1);
  uVar2 = FUN_00c90e00(uVar2);
  return uVar2;
}

// 00C90EC0  FUN_00c90ec0  size=120  [between]
undefined4 __thiscall FUN_00c90ec0(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  
  piVar6 = *(int **)(param_1 + 0x2c);
  piVar1 = piVar6 + *(int *)(param_1 + 0x34);
  uVar4 = 0;
  for (; piVar6 != piVar1; piVar6 = piVar6 + 1) {
    iVar3 = *piVar6;
    if (*(int *)(iVar3 + 0x1c) == param_2) {
      if (*(int *)(param_1 + 0xc) < *(int *)(param_1 + 8)) {
        piVar2 = (int *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 0xc) * 4);
        if (piVar2 != (int *)0x0) {
          *piVar2 = iVar3;
        }
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
      }
      *(undefined4 *)(iVar3 + 4) = 1;
      if ((*(int **)(iVar3 + 0x2c) != (int *)0x0) &&
         (iVar5 = (**(code **)(**(int **)(iVar3 + 0x2c) + 0xc))(), iVar5 == 0)) {
        *(undefined4 *)(iVar3 + 4) = 4;
      }
      if (*(int **)(iVar3 + 0x30) != (int *)0x0) {
        (**(code **)(**(int **)(iVar3 + 0x30) + 0x10))();
      }
      uVar4 = 1;
    }
  }
  return uVar4;
}

// 00C90F40  FUN_00c90f40  size=52  [between]
undefined4 FUN_00c90f40(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00fdc7b0(param_1,0x26);
  if (iVar1 != param_1) {
    return 0;
  }
  uVar2 = FUN_00e03ea0(param_1);
  uVar2 = FUN_00c90ec0(uVar2);
  return uVar2;
}

// 00C90F80  FUN_00c90f80  size=136  [between]
void __fastcall FUN_00c90f80(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar2 = FUN_00d4f160();
  if ((iVar2 != 1) && (piVar4 = *(int **)(param_1 + 4), piVar4 != piVar4 + *(int *)(param_1 + 0xc)))
  {
    do {
      iVar2 = *(int *)(*piVar4 + 0x24);
      if ((iVar2 == *(int *)(param_1 + 0x6ec)) ||
         ((iVar2 == *(int *)(param_1 + 0x6e4) || (iVar2 = FUN_00d4f040(iVar2,0), iVar2 == 0)))) {
        piVar4 = piVar4 + 1;
      }
      else {
        iVar3 = (int)piVar4 - *(int *)(param_1 + 4) >> 2;
        iVar2 = iVar3;
        if (iVar3 < *(int *)(param_1 + 0xc) + -1) {
          do {
            puVar1 = (undefined4 *)(*(int *)(param_1 + 4) + iVar2 * 4);
            *puVar1 = puVar1[1];
            iVar2 = iVar2 + 1;
          } while (iVar2 < *(int *)(param_1 + 0xc) + -1);
        }
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
        piVar4 = (int *)(*(int *)(param_1 + 4) + iVar3 * 4);
      }
    } while (piVar4 != (int *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 0xc) * 4));
  }
  return;
}

// 00C91010  FUN_00c91010  size=108  [between]
undefined4 __thiscall FUN_00c91010(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  piVar2 = *(int **)(param_1 + 4);
  piVar4 = piVar2;
  if (piVar2 != piVar2 + *(int *)(param_1 + 0xc)) {
    do {
      if (*(int *)(*piVar2 + 0x1c) == param_2) {
        iVar1 = (int)piVar2 - (int)piVar4 >> 2;
        iVar3 = iVar1;
        if (iVar1 < *(int *)(param_1 + 0xc) + -1) {
          do {
            *(undefined4 *)(*(int *)(param_1 + 4) + iVar3 * 4) =
                 *(undefined4 *)(*(int *)(param_1 + 4) + 4 + iVar3 * 4);
            iVar3 = iVar3 + 1;
          } while (iVar3 < *(int *)(param_1 + 0xc) + -1);
        }
        piVar4 = *(int **)(param_1 + 4);
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
        piVar2 = piVar4 + iVar1;
      }
      else {
        piVar2 = piVar2 + 1;
      }
    } while (piVar2 != (int *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 0xc) * 4));
  }
  return 1;
}

// 00C91130  FUN_00c91130  size=191  [between]
uint FUN_00c91130(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  
  piVar6 = *(int **)(param_1 + 4);
  uVar5 = 1;
  if (piVar6 != piVar6 + *(int *)(param_1 + 0xc)) {
    do {
      iVar1 = *piVar6;
      if (*(int *)(iVar1 + 0x1c) == param_2) {
        *(undefined4 *)(iVar1 + 4) = 1;
        if ((*(int **)(iVar1 + 0x2c) != (int *)0x0) &&
           (iVar3 = (**(code **)(**(int **)(iVar1 + 0x2c) + 0xc))(), iVar3 == 0)) {
          *(undefined4 *)(iVar1 + 4) = 4;
        }
        if (*(int **)(iVar1 + 0x30) != (int *)0x0) {
          (**(code **)(**(int **)(iVar1 + 0x30) + 0x10))();
        }
        if (*(int **)(iVar1 + 0x2c) != (int *)0x0) {
          (**(code **)(**(int **)(iVar1 + 0x2c) + 4))();
        }
        if (*(int **)(iVar1 + 0x30) != (int *)0x0) {
          (**(code **)(**(int **)(iVar1 + 0x30) + 8))();
        }
        *(undefined4 *)(iVar1 + 0x34) = 0xffffffff;
        *(undefined4 *)(iVar1 + 0x38) = 0xbf800000;
        piVar2 = *(int **)(iVar1 + 0x30);
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 0x14))();
          uVar4 = (**(code **)(*piVar2 + 0x18))(0);
          uVar5 = uVar5 & uVar4;
        }
      }
      piVar6 = piVar6 + 1;
    } while (piVar6 != (int *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 0xc) * 4));
  }
  return uVar5;
}

// 00C91230  FUN_00c91230  size=219  [between]
undefined4 __thiscall FUN_00c91230(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  
  _memset(param_2,0xff,0x1800);
  piVar5 = *(int **)(param_1 + 4);
  piVar1 = piVar5 + *(int *)(param_1 + 0xc);
  do {
    if (piVar5 == piVar1) {
      return 1;
    }
    puVar3 = (undefined4 *)*piVar5;
    if (puVar3 != (undefined4 *)0x0) {
      piVar4 = *(int **)(param_1 + 0x18);
      piVar2 = piVar4 + *(int *)(param_1 + 0x20);
      iVar6 = 0;
      for (; piVar4 != piVar2; piVar4 = piVar4 + 1) {
        if (((undefined4 *)*piVar4 != (undefined4 *)0x0) && ((undefined4 *)*piVar4 == puVar3)) {
          if (-1 < iVar6) {
            *param_2 = 0;
            param_2[1] = iVar6;
            param_2 = param_2 + 4;
            goto LAB_00c912c7;
          }
          break;
        }
        iVar6 = iVar6 + 1;
      }
      if (puVar3 != (undefined4 *)0x0) {
        piVar4 = *(int **)(param_1 + 0x2c);
        piVar2 = piVar4 + *(int *)(param_1 + 0x34);
        iVar6 = 0;
        for (; piVar4 != piVar2; piVar4 = piVar4 + 1) {
          if (((undefined4 *)*piVar4 != (undefined4 *)0x0) && ((undefined4 *)*piVar4 == puVar3)) {
            if (-1 < iVar6) {
              *param_2 = 1;
              param_2[1] = iVar6;
              param_2 = param_2 + 4;
              goto LAB_00c912c7;
            }
            break;
          }
          iVar6 = iVar6 + 1;
        }
      }
    }
    FUN_00dd5650(&DAT_016ae9b4,*puVar3);
LAB_00c912c7:
    piVar5 = piVar5 + 1;
  } while( true );
}

// 00C91310  FUN_00c91310  size=50  [between]
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_00c91310(void)

{
  int iVar1;
  undefined1 local_1810 [6140];
  undefined4 uStack_14;
  
  uStack_14 = 0xc91320;
  iVar1 = FUN_00c91230(local_1810);
  if (iVar1 == 1) {
    FUN_009c6820(2,local_1810);
  }
  return;
}

// 00C91350  FUN_00c91350  size=152  [between]
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

int __fastcall FUN_00c91350(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int local_1810 [1535];
  undefined4 uStack_14;
  
  uStack_14 = 0xc91360;
  iVar2 = FUN_009c44e0(2,local_1810);
  if (iVar2 == 1) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    piVar6 = local_1810 + 1;
    iVar5 = 0x180;
    do {
      iVar3 = piVar6[-1];
      if (iVar3 != -1) {
        if (iVar3 == 0) {
          iVar3 = *piVar6;
          iVar4 = 0;
          if (iVar3 < *(int *)(param_1 + 0x20)) {
            iVar4 = *(int *)(param_1 + 0x18);
LAB_00c913b9:
            iVar4 = *(int *)(iVar4 + iVar3 * 4);
          }
        }
        else {
          if (iVar3 != 1) goto LAB_00c913db;
          iVar3 = *piVar6;
          iVar4 = 0;
          if (iVar3 < *(int *)(param_1 + 0x34)) {
            iVar4 = *(int *)(param_1 + 0x2c);
            goto LAB_00c913b9;
          }
        }
        if ((iVar4 != 0) && (*(int *)(param_1 + 0xc) < *(int *)(param_1 + 8))) {
          piVar1 = (int *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 0xc) * 4);
          if (piVar1 != (int *)0x0) {
            *piVar1 = iVar4;
          }
          *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
        }
      }
LAB_00c913db:
      piVar6 = piVar6 + 4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return iVar2;
}

// 00C913F0  FUN_00c913f0  size=11  [between]
void FUN_00c913f0(void)

{
  FUN_00c90550();
  return;
}

// 00C91400  FUN_00c91400  size=114  [between]
uint __thiscall FUN_00c91400(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  
  if (0x17f < *(int *)(param_1 + 0x20)) {
    uVar1 = FUN_00dd5650(&DAT_016ae9e8);
    return uVar1 & 0xffffff00;
  }
  if (*(int *)(param_2 + 0x2c) != 0) {
    (**(code **)(**(int **)(param_2 + 0x2c) + 4))();
  }
  if (*(int *)(param_2 + 0x30) != 0) {
    (**(code **)(**(int **)(param_2 + 0x30) + 8))();
  }
  *(undefined4 *)(param_2 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_2 + 0x38) = 0xbf800000;
  piVar2 = *(int **)(param_1 + 0x20);
  if ((int)piVar2 < *(int *)(param_1 + 0x1c)) {
    piVar2 = (int *)(*(int *)(param_1 + 0x18) + (int)piVar2 * 4);
    if (piVar2 != (int *)0x0) {
      *piVar2 = param_2;
    }
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  }
  return CONCAT31((int3)((uint)piVar2 >> 8),1);
}

// 00C91480  FUN_00c91480  size=114  [between]
uint __thiscall FUN_00c91480(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  
  if (0x17f < *(int *)(param_1 + 0x34)) {
    uVar1 = FUN_00dd5650(&DAT_016aea30);
    return uVar1 & 0xffffff00;
  }
  if (*(int *)(param_2 + 0x2c) != 0) {
    (**(code **)(**(int **)(param_2 + 0x2c) + 4))();
  }
  if (*(int *)(param_2 + 0x30) != 0) {
    (**(code **)(**(int **)(param_2 + 0x30) + 8))();
  }
  *(undefined4 *)(param_2 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_2 + 0x38) = 0xbf800000;
  piVar2 = *(int **)(param_1 + 0x34);
  if ((int)piVar2 < *(int *)(param_1 + 0x30)) {
    piVar2 = (int *)(*(int *)(param_1 + 0x2c) + (int)piVar2 * 4);
    if (piVar2 != (int *)0x0) {
      *piVar2 = param_2;
    }
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  }
  return CONCAT31((int3)((uint)piVar2 >> 8),1);
}

// 00C915B0  Trigger::cCondStartAnimation::vf08  size=43  [class]
void __fastcall Trigger::cCondStartAnimation::vf08(int param_1)

{
  if (*(int *)(param_1 + 0x1c) != 0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
    if (*(int *)(param_1 + 0x28) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x1c),0);
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return;
}

// 00C915E0  Trigger::cCondEndAnimation::vf08  size=43  [class]
void __fastcall Trigger::cCondEndAnimation::vf08(int param_1)

{
  if (*(int *)(param_1 + 0x1c) != 0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
    if (*(int *)(param_1 + 0x28) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x1c),0);
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return;
}

// 00C91630  Trigger::cActCamera::vf00  size=6  [class]
undefined * Trigger::cActCamera::vf00(void)

{
  return &DAT_01dbd218;
}

// 00C91640  Trigger::cActCamera::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActCamera::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C91670  Trigger::cActSubphase::vf00  size=6  [class]
undefined * Trigger::cActSubphase::vf00(void)

{
  return &DAT_01dbd21c;
}

// 00C91680  Trigger::cActSubphase::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActSubphase::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C916B0  Trigger::cActTeleportExplicit::vf00  size=6  [class]
undefined * Trigger::cActTeleportExplicit::vf00(void)

{
  return &DAT_01dbe040;
}

// 00C916C0  Trigger::cActTeleportExplicit::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActTeleportExplicit::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C916F0  Trigger::cActTeleportIndex::vf00  size=6  [class]
undefined * Trigger::cActTeleportIndex::vf00(void)

{
  return &DAT_01dbe044;
}

// 00C91700  Trigger::cActTeleportIndex::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActTeleportIndex::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C91730  Trigger::cActDoorOpen::vf00  size=6  [class]
undefined * Trigger::cActDoorOpen::vf00(void)

{
  return &DAT_01dbe048;
}

// 00C91740  Trigger::cActDoorOpen::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActDoorOpen::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C91780  Trigger::cActStaFlagOn::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActStaFlagOn::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C917B0  Trigger::cActCamOff::vf00  size=6  [class]
undefined * Trigger::cActCamOff::vf00(void)

{
  return &DAT_01dbe04c;
}

// 00C917C0  Trigger::cActCamOff::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActCamOff::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C917F0  Trigger::cActVerseStart::vf00  size=6  [class]
undefined * Trigger::cActVerseStart::vf00(void)

{
  return &DAT_01dbe050;
}

// 00C91800  Trigger::cActVerseStart::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActVerseStart::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C91830  Trigger::cActVerseEnd::vf00  size=6  [class]
undefined * Trigger::cActVerseEnd::vf00(void)

{
  return &DAT_01dbe054;
}

// 00C91840  Trigger::cActVerseEnd::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActVerseEnd::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C91870  Trigger::cActSoftEvent::vf00  size=6  [class]
undefined * Trigger::cActSoftEvent::vf00(void)

{
  return &DAT_01dbe058;
}

// 00C91880  Trigger::cActSoftEvent::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActSoftEvent::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C918B0  Trigger::cActPhase::vf00  size=6  [class]
undefined * Trigger::cActPhase::vf00(void)

{
  return &DAT_01dbe05c;
}

// 00C918C0  Trigger::cActPhase::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActPhase::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C918F0  Trigger::cActEnemy::vf00  size=6  [class]
undefined * Trigger::cActEnemy::vf00(void)

{
  return &DAT_01dbd210;
}

// 00C91900  Trigger::cActEnemy::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActEnemy::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C91930  Trigger::cActEnemyByName::vf00  size=6  [class]
undefined * Trigger::cActEnemyByName::vf00(void)

{
  return &DAT_01dbe064;
}

// 00C91940  Trigger::cActEnemyByName::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActEnemyByName::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C91970  Trigger::cActEnemyByNumber::vf00  size=6  [class]
undefined * Trigger::cActEnemyByNumber::vf00(void)

{
  return &DAT_01dbe068;
}

// 00C91980  Trigger::cActEnemyByNumber::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActEnemyByNumber::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C919B0  Trigger::cActEnemyByNameForce::vf00  size=6  [class]
undefined * Trigger::cActEnemyByNameForce::vf00(void)

{
  return &DAT_01dbe06c;
}

// 00C919C0  Trigger::cActEnemyByNameForce::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActEnemyByNameForce::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C919F0  Trigger::cActEnemyByNumberForce::vf00  size=6  [class]
undefined * Trigger::cActEnemyByNumberForce::vf00(void)

{
  return &DAT_01dbe070;
}

// 00C91A00  Trigger::cActEnemyByNumberForce::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActEnemyByNumberForce::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C91A30  Trigger::cActEnemyRetreatByName::vf00  size=6  [class]
undefined * Trigger::cActEnemyRetreatByName::vf00(void)

{
  return &DAT_01dbe074;
}

// 00C91A40  Trigger::cActEnemyRetreatByName::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActEnemyRetreatByName::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C91A70  Trigger::cActEnemyRetreatByNumber::vf00  size=6  [class]
undefined * Trigger::cActEnemyRetreatByNumber::vf00(void)

{
  return &DAT_01dbe078;
}

// 00C91A80  Trigger::cActEnemyRetreatByNumber::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActEnemyRetreatByNumber::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C91AB0  Trigger::cActEnemyClearByName::vf00  size=6  [class]
undefined * Trigger::cActEnemyClearByName::vf00(void)

{
  return &DAT_01dbe07c;
}

// 00C91AC0  Trigger::cActEnemyClearByName::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActEnemyClearByName::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C91AF0  Trigger::cActEnemyClearByNumber::vf00  size=6  [class]
undefined * Trigger::cActEnemyClearByNumber::vf00(void)

{
  return &DAT_01dbe080;
}

// 00C91B00  Trigger::cActEnemyClearByNumber::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActEnemyClearByNumber::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C91B30  Trigger::cActEffect::vf00  size=6  [class]
undefined * Trigger::cActEffect::vf00(void)

{
  return &DAT_01dbe084;
}

// 00C91B40  Trigger::cActEffect::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActEffect::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C91B70  Trigger::cActResult::vf00  size=6  [class]
undefined * Trigger::cActResult::vf00(void)

{
  return &DAT_01dbe088;
}

// 00C91B80  Trigger::cActResult::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActResult::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C91BB0  Trigger::cActTurnOff::vf00  size=6  [class]
undefined * Trigger::cActTurnOff::vf00(void)

{
  return &DAT_01dbe08c;
}

// 00C91BC0  Trigger::cActTurnOff::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActTurnOff::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C91BF0  Trigger::cActSE::vf00  size=6  [class]
undefined * Trigger::cActSE::vf00(void)

{
  return &DAT_01dbe090;
}

// 00C91C00  Trigger::cActSE::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActSE::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C91C20  Trigger::Act::SE  size=314  [class]
undefined4 __fastcall Trigger::Act::SE(int param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  byte *pbVar7;
  bool bVar8;
  undefined4 local_42c;
  undefined4 local_428;
  undefined4 local_424;
  undefined4 local_420;
  undefined4 local_41c;
  undefined4 local_418;
  undefined4 local_414;
  undefined1 local_410 [1036];
  
  iVar6 = *(int *)(param_1 + 4);
  if (iVar6 == 0) {
    FUN_00dd5650(&DAT_016aeec8);
    return 0;
  }
  pbVar1 = (byte *)(iVar6 + 8);
  pbVar7 = &DAT_016416fa;
  pbVar3 = pbVar1;
  do {
    bVar2 = *pbVar3;
    bVar8 = bVar2 < *pbVar7;
    if (bVar2 != *pbVar7) {
LAB_00c91c80:
      iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_00c91c85;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar3[1];
    bVar8 = bVar2 < pbVar7[1];
    if (bVar2 != pbVar7[1]) goto LAB_00c91c80;
    pbVar3 = pbVar3 + 2;
    pbVar7 = pbVar7 + 2;
  } while (bVar2 != 0);
  iVar4 = 0;
LAB_00c91c85:
  if (iVar4 == 0) {
    FUN_00dd5650(&DAT_016aeea0);
    return 0;
  }
  uVar5 = FUN_00959930(local_410,&DAT_016575ac,pbVar1);
  if (*(int *)(iVar6 + 0x28) == -1) {
    iVar6 = FUN_00e5e050(uVar5,0);
  }
  else {
    iVar4 = FUN_00c84800(*(int *)(iVar6 + 0x28),&local_42c);
    if (iVar4 == 0) {
      FUN_00dd5650(&DAT_016aee78,*(undefined4 *)(iVar6 + 0x28));
      goto LAB_00c91cf0;
    }
    local_420 = local_42c;
    local_41c = local_428;
    local_418 = local_424;
    local_414 = 0x3f800000;
    iVar6 = FUN_00e5e080(uVar5,&local_420,0,0xffffffff,0);
  }
  if (iVar6 != 0) {
    return 1;
  }
LAB_00c91cf0:
  uVar5 = FUN_00959930(local_410,&DAT_016aee48,pbVar1);
  FUN_00dd5650(uVar5);
  return 0;
}

// 00C91D80  Trigger::cActFuncall::vf00  size=6  [class]
undefined * Trigger::cActFuncall::vf00(void)

{
  return &DAT_01dbe094;
}

// 00C91D90  Trigger::cActFuncall::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActFuncall::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C91DE0  Trigger::cActTask::vf00  size=6  [class]
undefined * Trigger::cActTask::vf00(void)

{
  return &DAT_01dbe098;
}

// 00C91DF0  Trigger::cActTask::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActTask::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C91E30  Trigger::cActAnimation::vf00  size=6  [class]
undefined * Trigger::cActAnimation::vf00(void)

{
  return &DAT_01dbe09c;
}

// 00C91E40  Trigger::cActAnimation::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActAnimation::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C91EA0  Trigger::cActAnimationOrigin::vf00  size=6  [class]
undefined * Trigger::cActAnimationOrigin::vf00(void)

{
  return &DAT_01dbe0a0;
}

// 00C91EB0  Trigger::cActAnimationOrigin::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActAnimationOrigin::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C91F00  Trigger::cActTerminate::vf00  size=6  [class]
undefined * Trigger::cActTerminate::vf00(void)

{
  return &DAT_01dbe0a4;
}

// 00C91F10  Trigger::cActTerminate::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActTerminate::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C91F40  Trigger::cActFollowPath::vf00  size=6  [class]
undefined * Trigger::cActFollowPath::vf00(void)

{
  return &DAT_01dbe0a8;
}

// 00C91F50  Trigger::cActFollowPath::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActFollowPath::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C91F80  Trigger::cActCameraDistance::vf00  size=6  [class]
undefined * Trigger::cActCameraDistance::vf00(void)

{
  return &DAT_01dbe0ac;
}

// 00C91F90  Trigger::cActCameraDistance::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActCameraDistance::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C91FC0  Trigger::cActCameraDistanceOff::vf00  size=6  [class]
undefined * Trigger::cActCameraDistanceOff::vf00(void)

{
  return &DAT_01dbe0b0;
}

// 00C91FD0  Trigger::cActCameraDistanceOff::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActCameraDistanceOff::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C92000  Trigger::cActCameraFocus::vf00  size=6  [class]
undefined * Trigger::cActCameraFocus::vf00(void)

{
  return &DAT_01dbe0b4;
}

// 00C92010  Trigger::cActCameraFocus::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActCameraFocus::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C92040  Trigger::cActCameraFocusOff::vf00  size=6  [class]
undefined * Trigger::cActCameraFocusOff::vf00(void)

{
  return &DAT_01dbe0b8;
}

// 00C92050  Trigger::cActCameraFocusOff::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActCameraFocusOff::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C92080  Trigger::cActCameraAngle::vf00  size=6  [class]
undefined * Trigger::cActCameraAngle::vf00(void)

{
  return &DAT_01dbe0bc;
}

// 00C92090  Trigger::cActCameraAngle::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActCameraAngle::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C920C0  Trigger::cActCameraAngleOff::vf00  size=6  [class]
undefined * Trigger::cActCameraAngleOff::vf00(void)

{
  return &DAT_01dbe0c0;
}

// 00C920D0  Trigger::cActCameraAngleOff::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActCameraAngleOff::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C92100  Trigger::cActPhaseSubphase::vf00  size=6  [class]
undefined * Trigger::cActPhaseSubphase::vf00(void)

{
  return &DAT_01dbe0c4;
}

// 00C92110  Trigger::cActPhaseSubphase::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActPhaseSubphase::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C92140  Trigger::cActDoorClose::vf00  size=6  [class]
undefined * Trigger::cActDoorClose::vf00(void)

{
  return &DAT_01dbe0c8;
}

// 00C92150  Trigger::cActDoorClose::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActDoorClose::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C92180  Trigger::cActDebugMessage::vf00  size=6  [class]
undefined * Trigger::cActDebugMessage::vf00(void)

{
  return &DAT_01dbe0cc;
}

// 00C92190  Trigger::cActDebugMessage::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActDebugMessage::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C921C0  Trigger::cActStage::vf00  size=6  [class]
undefined * Trigger::cActStage::vf00(void)

{
  return &DAT_01dbe0d0;
}

// 00C921D0  Trigger::cActStage::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActStage::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C92200  Trigger::cActSubstage::vf00  size=6  [class]
undefined * Trigger::cActSubstage::vf00(void)

{
  return &DAT_01dbe0d4;
}

// 00C92210  Trigger::cActSubstage::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActSubstage::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C92240  Trigger::cActText::vf00  size=6  [class]
undefined * Trigger::cActText::vf00(void)

{
  return &DAT_01dbe0d8;
}

// 00C92250  Trigger::cActText::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActText::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C92280  Trigger::cActTextOut::vf00  size=6  [class]
undefined * Trigger::cActTextOut::vf00(void)

{
  return &DAT_01dbe0dc;
}

// 00C92290  Trigger::cActTextOut::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActTextOut::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C922C0  Trigger::cActFlagOn::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActFlagOn::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C922F0  Trigger::cActFlagOff::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActFlagOff::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C92320  Trigger::cActLoadRoom::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActLoadRoom::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C92350  Trigger::cActUnloadRoom::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActUnloadRoom::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C92380  Trigger::cActMoveShounen::vf00  size=6  [class]
undefined * Trigger::cActMoveShounen::vf00(void)

{
  return &DAT_01dbe0e0;
}

// 00C92390  Trigger::cActMoveShounen::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActMoveShounen::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C923C0  Trigger::cActPosIndex::vf00  size=6  [class]
undefined * Trigger::cActPosIndex::vf00(void)

{
  return &DAT_01dbe0e4;
}

// 00C923D0  Trigger::cActPosIndex::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActPosIndex::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C92400  Trigger::cActEmMsg::vf00  size=6  [class]
undefined * Trigger::cActEmMsg::vf00(void)

{
  return &DAT_01dbe0e8;
}

// 00C92410  Trigger::cActEmMsg::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActEmMsg::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C92450  Trigger::cActScene::vf00  size=6  [class]
undefined * Trigger::cActScene::vf00(void)

{
  return &DAT_01dbe0ec;
}

// 00C92460  Trigger::cActScene::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActScene::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C92490  Trigger::cActEmMsgDirect::vf00  size=6  [class]
undefined * Trigger::cActEmMsgDirect::vf00(void)

{
  return &DAT_01dbe0f0;
}

// 00C924A0  Trigger::cActEmMsgDirect::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActEmMsgDirect::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C924D0  Trigger::cActCollision::vf00  size=6  [class]
undefined * Trigger::cActCollision::vf00(void)

{
  return &DAT_01dbe0f4;
}

// 00C924E0  Trigger::cActCollision::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActCollision::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C92510  Trigger::cActBgm::vf00  size=6  [class]
undefined * Trigger::cActBgm::vf00(void)

{
  return &DAT_01dbe0f8;
}

// 00C92520  Trigger::cActBgm::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActBgm::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C92540  Trigger::cActBgm::vf18  size=204  [class]
undefined4 __fastcall Trigger::cActBgm::vf18(int param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 uVar5;
  byte *pbVar6;
  bool bVar7;
  undefined1 local_400 [1024];
  
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016af3f8);
    return 0;
  }
  pbVar1 = (byte *)(*(int *)(param_1 + 4) + 8);
  pbVar6 = &DAT_016416fa;
  pbVar3 = pbVar1;
  do {
    bVar2 = *pbVar3;
    bVar7 = bVar2 < *pbVar6;
    if (bVar2 != *pbVar6) {
LAB_00c92594:
      iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_00c92599;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar3[1];
    bVar7 = bVar2 < pbVar6[1];
    if (bVar2 != pbVar6[1]) goto LAB_00c92594;
    pbVar3 = pbVar3 + 2;
    pbVar6 = pbVar6 + 2;
  } while (bVar2 != 0);
  iVar4 = 0;
LAB_00c92599:
  if (iVar4 == 0) {
    FUN_00dd5650(&DAT_016af3d0);
    return 0;
  }
  uVar5 = FUN_00959930(local_400,&DAT_016575ac,pbVar1);
  iVar4 = FUN_00e5e1b0(uVar5);
  if (iVar4 != 0) {
    return 1;
  }
  uVar5 = FUN_00959930(local_400,&DAT_016af3a0,pbVar1);
  FUN_00dd5650(uVar5);
  return 0;
}

// 00C92620  Trigger::cActBgmSimple::vf00  size=6  [class]
undefined * Trigger::cActBgmSimple::vf00(void)

{
  return &DAT_01dbe0fc;
}

// 00C92630  Trigger::cActBgmSimple::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActBgmSimple::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C92650  Trigger::cActBgmSimple::vf18  size=215  [class]
undefined4 __fastcall Trigger::cActBgmSimple::vf18(int param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 uVar5;
  byte *pbVar6;
  bool bVar7;
  undefined1 local_400 [1024];
  
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016af4c0);
    return 0;
  }
  pbVar1 = (byte *)(*(int *)(param_1 + 4) + 8);
  pbVar6 = &DAT_016416fa;
  pbVar3 = pbVar1;
  do {
    bVar2 = *pbVar3;
    bVar7 = bVar2 < *pbVar6;
    if (bVar2 != *pbVar6) {
LAB_00c926a4:
      iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_00c926a9;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar3[1];
    bVar7 = bVar2 < pbVar6[1];
    if (bVar2 != pbVar6[1]) goto LAB_00c926a4;
    pbVar3 = pbVar3 + 2;
    pbVar6 = pbVar6 + 2;
  } while (bVar2 != 0);
  iVar4 = 0;
LAB_00c926a9:
  if (iVar4 == 0) {
    FUN_00dd5650(&DAT_016af494);
    return 0;
  }
  uVar5 = FUN_00959930(local_400,"%s%03x_%s","bgm_p",DAT_018b9174,pbVar1);
  iVar4 = FUN_00e5e1b0(uVar5);
  if (iVar4 != 0) {
    return 1;
  }
  uVar5 = FUN_00959930(local_400,&DAT_016af448,pbVar1);
  FUN_00dd5650(uVar5);
  return 0;
}

// 00C92740  Trigger::cActSESimple::vf00  size=6  [class]
undefined * Trigger::cActSESimple::vf00(void)

{
  return &DAT_01dbe100;
}

// 00C92750  Trigger::cActSESimple::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActSESimple::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C92770  Trigger::Act::SE_SIMPLE  size=319  [class]
undefined4 __fastcall Trigger::Act::SE_SIMPLE(int param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  byte *pbVar7;
  bool bVar8;
  undefined4 local_42c;
  undefined4 local_428;
  undefined4 local_424;
  undefined4 local_420;
  undefined4 local_41c;
  undefined4 local_418;
  undefined4 local_414;
  undefined1 local_410 [1036];
  
  iVar6 = *(int *)(param_1 + 4);
  if (iVar6 == 0) {
    FUN_00dd5650(&DAT_016af5b0);
    return 0;
  }
  pbVar1 = (byte *)(iVar6 + 8);
  pbVar7 = &DAT_016416fa;
  pbVar3 = pbVar1;
  do {
    bVar2 = *pbVar3;
    bVar8 = bVar2 < *pbVar7;
    if (bVar2 != *pbVar7) {
LAB_00c927d0:
      iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_00c927d5;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar3[1];
    bVar8 = bVar2 < pbVar7[1];
    if (bVar2 != pbVar7[1]) goto LAB_00c927d0;
    pbVar3 = pbVar3 + 2;
    pbVar7 = pbVar7 + 2;
  } while (bVar2 != 0);
  iVar4 = 0;
LAB_00c927d5:
  if (iVar4 == 0) {
    FUN_00dd5650(&DAT_016af580);
    return 0;
  }
  uVar5 = FUN_00959930(local_410,&DAT_0165864c,&DAT_016af57c,pbVar1);
  if (*(int *)(iVar6 + 0x18) == -1) {
    iVar6 = FUN_00e5e050(uVar5,0);
  }
  else {
    iVar4 = FUN_00c84800(*(int *)(iVar6 + 0x18),&local_42c);
    if (iVar4 == 0) {
      FUN_00dd5650(&DAT_016af54c,*(undefined4 *)(iVar6 + 0x18));
      goto LAB_00c92845;
    }
    local_420 = local_42c;
    local_41c = local_428;
    local_418 = local_424;
    local_414 = 0x3f800000;
    iVar6 = FUN_00e5e080(uVar5,&local_420,0,0xffffffff,0);
  }
  if (iVar6 != 0) {
    return 1;
  }
LAB_00c92845:
  uVar5 = FUN_00959930(local_410,&DAT_016af518,pbVar1);
  FUN_00dd5650(uVar5);
  return 0;
}

// 00C928C0  Trigger::cActSound::vf00  size=6  [class]
undefined * Trigger::cActSound::vf00(void)

{
  return &DAT_01dbe104;
}

// 00C928D0  Trigger::cActSound::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActSound::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C92900  Trigger::cActCollisionOff::vf00  size=6  [class]
undefined * Trigger::cActCollisionOff::vf00(void)

{
  return &DAT_01dbe108;
}

// 00C92910  Trigger::cActCollisionOff::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActCollisionOff::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C92940  Trigger::cActSeEntity::vf00  size=6  [class]
undefined * Trigger::cActSeEntity::vf00(void)

{
  return &DAT_01dbe10c;
}

// 00C92950  Trigger::cActSeEntity::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActSeEntity::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C92980  Trigger::cActRoomEvent::vf00  size=6  [class]
undefined * Trigger::cActRoomEvent::vf00(void)

{
  return &DAT_01dbe110;
}

// 00C92990  Trigger::cActRoomEvent::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActRoomEvent::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C929C0  Trigger::cActEffectRoom::vf00  size=6  [class]
undefined * Trigger::cActEffectRoom::vf00(void)

{
  return &DAT_01dbe114;
}

// 00C929D0  Trigger::cActEffectRoom::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActEffectRoom::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C92A00  Trigger::cActPlayerDie::vf00  size=6  [class]
undefined * Trigger::cActPlayerDie::vf00(void)

{
  return &DAT_01dbe118;
}

// 00C92A10  Trigger::cActPlayerDie::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActPlayerDie::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C92A40  Trigger::cActEnemyMove::vf00  size=6  [class]
undefined * Trigger::cActEnemyMove::vf00(void)

{
  return &DAT_01dbe11c;
}

// 00C92A50  Trigger::cActEnemyMove::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActEnemyMove::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C92A80  Trigger::cActReqBehaviorInstruction::vf00  size=6  [class]
undefined * Trigger::cActReqBehaviorInstruction::vf00(void)

{
  return &DAT_01dbe120;
}

// 00C92A90  Trigger::cActReqBehaviorInstruction::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActReqBehaviorInstruction::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C92AC0  Trigger::cActRaderMap::vf00  size=6  [class]
undefined * Trigger::cActRaderMap::vf00(void)

{
  return &DAT_01dbe124;
}

// 00C92AD0  Trigger::cActRaderMap::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActRaderMap::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C92B00  Trigger::cActRadioInfoStart::vf00  size=6  [class]
undefined * Trigger::cActRadioInfoStart::vf00(void)

{
  return &DAT_01dbe128;
}

// 00C92B10  Trigger::cActRadioInfoStart::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActRadioInfoStart::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C92B40  Trigger::cActRadioInfoEnd::vf00  size=6  [class]
undefined * Trigger::cActRadioInfoEnd::vf00(void)

{
  return &DAT_01dbe12c;
}

// 00C92B50  Trigger::cActRadioInfoEnd::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActRadioInfoEnd::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C92B80  Trigger::cActConversationStart::vf00  size=6  [class]
undefined * Trigger::cActConversationStart::vf00(void)

{
  return &DAT_01dbe130;
}

// 00C92B90  Trigger::cActConversationStart::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActConversationStart::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C92BC0  Trigger::cActConversationEnd::vf00  size=6  [class]
undefined * Trigger::cActConversationEnd::vf00(void)

{
  return &DAT_01dbe134;
}

// 00C92BD0  Trigger::cActConversationEnd::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActConversationEnd::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C92C00  Trigger::cActPathWayStart::vf00  size=6  [class]
undefined * Trigger::cActPathWayStart::vf00(void)

{
  return &DAT_01dbe138;
}

// 00C92C10  Trigger::cActPathWayStart::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActPathWayStart::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C92C40  Trigger::cActPathWayEnd::vf00  size=6  [class]
undefined * Trigger::cActPathWayEnd::vf00(void)

{
  return &DAT_01dbe13c;
}

// 00C92C50  Trigger::cActPathWayEnd::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActPathWayEnd::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C92C80  Trigger::cActTutorialStart::vf00  size=6  [class]
undefined * Trigger::cActTutorialStart::vf00(void)

{
  return &DAT_01dbe140;
}

// 00C92C90  Trigger::cActTutorialStart::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActTutorialStart::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C92CC0  Trigger::cActTutorialEnd::vf00  size=6  [class]
undefined * Trigger::cActTutorialEnd::vf00(void)

{
  return &DAT_01dbe144;
}

// 00C92CD0  Trigger::cActTutorialEnd::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActTutorialEnd::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C92D00  Trigger::cActAreaBarrierOff::vf00  size=6  [class]
undefined * Trigger::cActAreaBarrierOff::vf00(void)

{
  return &DAT_01dbe148;
}

// 00C92D10  Trigger::cActAreaBarrierOff::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActAreaBarrierOff::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C92D40  Trigger::cActResultSetDisp::vf00  size=6  [class]
undefined * Trigger::cActResultSetDisp::vf00(void)

{
  return &DAT_01dbe14c;
}

// 00C92D50  Trigger::cActResultSetDisp::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActResultSetDisp::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C92EA0  Trigger::cActEmAnimation::vf00  size=6  [class]
undefined * Trigger::cActEmAnimation::vf00(void)

{
  return &DAT_01dbe150;
}

// 00C92EB0  Trigger::cActEmAnimation::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActEmAnimation::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C92F10  Trigger::cActPlAnimation::vf00  size=6  [class]
undefined * Trigger::cActPlAnimation::vf00(void)

{
  return &DAT_01dbe154;
}

// 00C92F20  Trigger::cActPlAnimation::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActPlAnimation::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C92F70  Trigger::cActResultSetEndDisp::vf00  size=6  [class]
undefined * Trigger::cActResultSetEndDisp::vf00(void)

{
  return &DAT_01dbe158;
}

// 00C92F80  Trigger::cActResultSetEndDisp::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActResultSetEndDisp::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C92FB0  Trigger::cActPlayerDeadDemo::vf00  size=6  [class]
undefined * Trigger::cActPlayerDeadDemo::vf00(void)

{
  return &DAT_01dbe15c;
}

// 00C92FC0  Trigger::cActPlayerDeadDemo::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActPlayerDeadDemo::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C92FF0  Trigger::cActHackEnd::vf00  size=6  [class]
undefined * Trigger::cActHackEnd::vf00(void)

{
  return &DAT_01dbe160;
}

// 00C93000  Trigger::cActHackEnd::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActHackEnd::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C93030  Trigger::cActCamFlag::vf00  size=6  [class]
undefined * Trigger::cActCamFlag::vf00(void)

{
  return &DAT_01dbe164;
}

// 00C93040  Trigger::cActCamFlag::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActCamFlag::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C93070  Trigger::cActObjAttach::vf00  size=6  [class]
undefined * Trigger::cActObjAttach::vf00(void)

{
  return &DAT_01dbe168;
}

// 00C93080  Trigger::cActObjAttach::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActObjAttach::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C930B0  Trigger::cActQTEButtonDisp::vf00  size=6  [class]
undefined * Trigger::cActQTEButtonDisp::vf00(void)

{
  return &DAT_01dbe16c;
}

// 00C930C0  Trigger::cActQTEButtonDisp::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActQTEButtonDisp::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C930F0  Trigger::cActEnemyRequestEnd::vf00  size=6  [class]
undefined * Trigger::cActEnemyRequestEnd::vf00(void)

{
  return &DAT_01dbe170;
}

// 00C93100  Trigger::cActEnemyRequestEnd::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActEnemyRequestEnd::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C93130  Trigger::cActEnemyRequestEndByName::vf00  size=6  [class]
undefined * Trigger::cActEnemyRequestEndByName::vf00(void)

{
  return &DAT_01dbe174;
}

// 00C93140  Trigger::cActEnemyRequestEndByName::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActEnemyRequestEndByName::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C93170  Trigger::cActEnemyRequestEndBySubPhase::vf00  size=6  [class]
undefined * Trigger::cActEnemyRequestEndBySubPhase::vf00(void)

{
  return &DAT_01dbe178;
}

// 00C93180  Trigger::cActEnemyRequestEndBySubPhase::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cActEnemyRequestEndBySubPhase::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C931B0  Trigger::cActEnemyRequestEndAll::vf00  size=6  [class]
undefined * Trigger::cActEnemyRequestEndAll::vf00(void)

{
  return &DAT_01dbe17c;
}

// 00C931C0  Trigger::cActEnemyRequestEndAll::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActEnemyRequestEndAll::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C931F0  Trigger::cActEnemyRequest::vf00  size=6  [class]
undefined * Trigger::cActEnemyRequest::vf00(void)

{
  return &DAT_01dbe180;
}

// 00C93200  Trigger::cActEnemyRequest::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActEnemyRequest::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C93230  Trigger::cActEnemyRequestByName::vf00  size=6  [class]
undefined * Trigger::cActEnemyRequestByName::vf00(void)

{
  return &DAT_01dbe184;
}

// 00C93240  Trigger::cActEnemyRequestByName::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActEnemyRequestByName::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C93270  Trigger::cActEnemyRequestBySubPhase::vf00  size=6  [class]
undefined * Trigger::cActEnemyRequestBySubPhase::vf00(void)

{
  return &DAT_01dbe188;
}

// 00C93280  Trigger::cActEnemyRequestBySubPhase::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActEnemyRequestBySubPhase::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C932B0  Trigger::cActMoviePlay::vf00  size=6  [class]
undefined * Trigger::cActMoviePlay::vf00(void)

{
  return &DAT_01dbe18c;
}

// 00C932C0  Trigger::cActMoviePlay::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActMoviePlay::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C932F0  Trigger::cActForceBattleFlag::vf00  size=6  [class]
undefined * Trigger::cActForceBattleFlag::vf00(void)

{
  return &DAT_01dbe190;
}

// 00C93300  Trigger::cActForceBattleFlag::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActForceBattleFlag::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C93330  Trigger::cActGimmickEnable::vf00  size=6  [class]
undefined * Trigger::cActGimmickEnable::vf00(void)

{
  return &DAT_01dbe194;
}

// 00C93340  Trigger::cActGimmickEnable::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActGimmickEnable::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C93370  Trigger::cActFileRead::vf00  size=6  [class]
undefined * Trigger::cActFileRead::vf00(void)

{
  return &DAT_01dbe198;
}

// 00C93380  Trigger::cActFileRead::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActFileRead::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C933B0  Trigger::cActFileRelease::vf00  size=6  [class]
undefined * Trigger::cActFileRelease::vf00(void)

{
  return &DAT_01dbe19c;
}

// 00C933C0  Trigger::cActFileRelease::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActFileRelease::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C933F0  Trigger::cActEnemyFirstRequestEnd::vf00  size=6  [class]
undefined * Trigger::cActEnemyFirstRequestEnd::vf00(void)

{
  return &DAT_01dbe1a0;
}

// 00C93400  Trigger::cActEnemyFirstRequestEnd::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActEnemyFirstRequestEnd::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C93430  Trigger::cActSceneMovie::vf00  size=6  [class]
undefined * Trigger::cActSceneMovie::vf00(void)

{
  return &DAT_01dbe1a4;
}

// 00C93440  Trigger::cActSceneMovie::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActSceneMovie::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C93470  Trigger::cActStopObjectType::vf00  size=6  [class]
undefined * Trigger::cActStopObjectType::vf00(void)

{
  return &DAT_01dbe1a8;
}

// 00C93480  Trigger::cActStopObjectType::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActStopObjectType::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C934B0  Trigger::cActMvObjectType::vf00  size=6  [class]
undefined * Trigger::cActMvObjectType::vf00(void)

{
  return &DAT_01dbe1ac;
}

// 00C934C0  Trigger::cActMvObjectType::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActMvObjectType::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C93500  Trigger::cActGameFlagOn::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActGameFlagOn::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C93540  Trigger::cActGameFlagOff::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActGameFlagOff::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C93580  Trigger::cActSendSignal::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActSendSignal::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C935C0  Trigger::cActSendSignalContext::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActSendSignalContext::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C935F0  Trigger::cActCodecStart::vf00  size=6  [class]
undefined * Trigger::cActCodecStart::vf00(void)

{
  return &DAT_01dbe1b0;
}

// 00C93600  Trigger::cActCodecStart::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActCodecStart::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C93630  Trigger::cActObjMeshTrans::vf00  size=6  [class]
undefined * Trigger::cActObjMeshTrans::vf00(void)

{
  return &DAT_01dbe1b4;
}

// 00C93640  Trigger::cActObjMeshTrans::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActObjMeshTrans::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C93670  Trigger::cActPlayerEffectOn::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActPlayerEffectOn::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C936A0  Trigger::cActPlayerEffectOff::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActPlayerEffectOff::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C936D0  Trigger::cActQTEButtonDispOff::vf00  size=6  [class]
undefined * Trigger::cActQTEButtonDispOff::vf00(void)

{
  return &DAT_01dbe1b8;
}

// 00C936E0  Trigger::cActQTEButtonDispOff::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActQTEButtonDispOff::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C93710  Trigger::cActObjectivePosSet::vf00  size=6  [class]
undefined * Trigger::cActObjectivePosSet::vf00(void)

{
  return &DAT_01dbe1bc;
}

// 00C93720  Trigger::cActObjectivePosSet::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActObjectivePosSet::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C93750  Trigger::cActEnemyGroupByNumber::vf00  size=6  [class]
undefined * Trigger::cActEnemyGroupByNumber::vf00(void)

{
  return &DAT_01dbe1c0;
}

// 00C93760  Trigger::cActEnemyGroupByNumber::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActEnemyGroupByNumber::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C93790  Trigger::cActEnemyGroupByName::vf00  size=6  [class]
undefined * Trigger::cActEnemyGroupByName::vf00(void)

{
  return &DAT_01dbe1c4;
}

// 00C937A0  Trigger::cActEnemyGroupByName::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActEnemyGroupByName::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C937D0  Trigger::cActJammingDispStart::vf00  size=6  [class]
undefined * Trigger::cActJammingDispStart::vf00(void)

{
  return &DAT_01dbe1c8;
}

// 00C937E0  Trigger::cActJammingDispStart::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActJammingDispStart::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C93810  Trigger::cActJammingDispEnd::vf00  size=6  [class]
undefined * Trigger::cActJammingDispEnd::vf00(void)

{
  return &DAT_01dbe1cc;
}

// 00C93820  Trigger::cActJammingDispEnd::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActJammingDispEnd::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C93850  Trigger::cActReqGpBehaviorInstruction::vf00  size=6  [class]
undefined * Trigger::cActReqGpBehaviorInstruction::vf00(void)

{
  return &DAT_01dbe1d0;
}

// 00C93860  Trigger::cActReqGpBehaviorInstruction::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cActReqGpBehaviorInstruction::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C938A0  Trigger::cActStaFlagOff::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActStaFlagOff::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C938D0  Trigger::cActUIAnimStart::vf00  size=6  [class]
undefined * Trigger::cActUIAnimStart::vf00(void)

{
  return &DAT_01dbe1d4;
}

// 00C938E0  Trigger::cActUIAnimStart::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActUIAnimStart::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C93910  Trigger::cActSetNextCodec::vf00  size=6  [class]
undefined * Trigger::cActSetNextCodec::vf00(void)

{
  return &DAT_01dbe1d8;
}

// 00C93920  Trigger::cActSetNextCodec::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActSetNextCodec::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C93960  Trigger::cActStpFlagOff::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActStpFlagOff::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C939A0  Trigger::cActStpFlagOn::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActStpFlagOn::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C939D0  Trigger::cActSetUIAnimStartNone::vf00  size=6  [class]
undefined * Trigger::cActSetUIAnimStartNone::vf00(void)

{
  return &DAT_01dbe1dc;
}

// 00C939E0  Trigger::cActSetUIAnimStartNone::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActSetUIAnimStartNone::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C93A10  Trigger::cActSetGameoverNormalFlag::vf00  size=6  [class]
undefined * Trigger::cActSetGameoverNormalFlag::vf00(void)

{
  return &DAT_01dbe1e0;
}

// 00C93A20  Trigger::cActSetGameoverNormalFlag::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActSetGameoverNormalFlag::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C93A50  Trigger::cActScrMeshOn::vf00  size=6  [class]
undefined * Trigger::cActScrMeshOn::vf00(void)

{
  return &DAT_01dbe1e4;
}

// 00C93A60  Trigger::cActScrMeshOn::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActScrMeshOn::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C93A90  Trigger::cActScrMeshOff::vf00  size=6  [class]
undefined * Trigger::cActScrMeshOff::vf00(void)

{
  return &DAT_01dbe1e8;
}

// 00C93AA0  Trigger::cActScrMeshOff::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActScrMeshOff::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C93AD0  Trigger::cActVmPlay::vf00  size=6  [class]
undefined * Trigger::cActVmPlay::vf00(void)

{
  return &DAT_01dbe1ec;
}

// 00C93AE0  Trigger::cActVmPlay::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActVmPlay::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C93B10  Trigger::cActItemGet::vf00  size=6  [class]
undefined * Trigger::cActItemGet::vf00(void)

{
  return &DAT_01dbe1f0;
}

// 00C93B20  Trigger::cActItemGet::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActItemGet::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C93B50  Trigger::cActActionMessageStart::vf00  size=6  [class]
undefined * Trigger::cActActionMessageStart::vf00(void)

{
  return &DAT_01dbe1f4;
}

// 00C93B60  Trigger::cActActionMessageStart::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActActionMessageStart::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C93B90  Trigger::cActActionMessageFlagClear::vf00  size=6  [class]
undefined * Trigger::cActActionMessageFlagClear::vf00(void)

{
  return &DAT_01dbe1f8;
}

// 00C93BA0  Trigger::cActActionMessageFlagClear::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActActionMessageFlagClear::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C93BD0  Trigger::cActResultRecStart::vf00  size=6  [class]
undefined * Trigger::cActResultRecStart::vf00(void)

{
  return &DAT_01dbe1fc;
}

// 00C93BE0  Trigger::cActResultRecStart::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActResultRecStart::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C93C10  Trigger::cActResultRecEnd::vf00  size=6  [class]
undefined * Trigger::cActResultRecEnd::vf00(void)

{
  return &DAT_01dbe200;
}

// 00C93C20  Trigger::cActResultRecEnd::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActResultRecEnd::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C93C50  Trigger::cActScrCollisionOn::vf00  size=6  [class]
undefined * Trigger::cActScrCollisionOn::vf00(void)

{
  return &DAT_01dbe204;
}

// 00C93C60  Trigger::cActScrCollisionOn::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActScrCollisionOn::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C93C90  Trigger::cActScrCollisionOff::vf00  size=6  [class]
undefined * Trigger::cActScrCollisionOff::vf00(void)

{
  return &DAT_01dbe208;
}

// 00C93CA0  Trigger::cActScrCollisionOff::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActScrCollisionOff::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C93CC0  Trigger::cActArray::cActArray  size=56  [class]
undefined4 * __fastcall Trigger::cActArray::cActArray(undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = vftable;
  param_1[0x11] = 0xffffffff;
  _memset(param_1 + 2,0,0x3c);
  _memset(param_1 + 0x12,-1,0x3c);
  return param_1;
}

// 00C93D00  Trigger::cActArray::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActArray::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C93D30  Trigger::cActEffectRoomLoop::vf00  size=6  [class]
undefined * Trigger::cActEffectRoomLoop::vf00(void)

{
  return &DAT_01dbe20c;
}

// 00C93D40  Trigger::cActEffectRoomLoop::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActEffectRoomLoop::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C93D70  Trigger::cActEffectRoomLoopOff::vf00  size=6  [class]
undefined * Trigger::cActEffectRoomLoopOff::vf00(void)

{
  return &DAT_01dbe210;
}

// 00C93D80  Trigger::cActEffectRoomLoopOff::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActEffectRoomLoopOff::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C93DB0  Trigger::cActMesDispOffSkip::vf00  size=6  [class]
undefined * Trigger::cActMesDispOffSkip::vf00(void)

{
  return &DAT_01dbe214;
}

// 00C93DC0  Trigger::cActMesDispOffSkip::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActMesDispOffSkip::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C93DF0  Trigger::cActEmMsgDirectByNumber::vf00  size=6  [class]
undefined * Trigger::cActEmMsgDirectByNumber::vf00(void)

{
  return &DAT_01dbe218;
}

// 00C93E00  Trigger::cActEmMsgDirectByNumber::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActEmMsgDirectByNumber::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C93E30  Trigger::cActCodecEnd::vf00  size=6  [class]
undefined * Trigger::cActCodecEnd::vf00(void)

{
  return &DAT_01dbe21c;
}

// 00C93E40  Trigger::cActCodecEnd::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActCodecEnd::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C93E70  Trigger::cActAntiqScrMove::vf00  size=6  [class]
undefined * Trigger::cActAntiqScrMove::vf00(void)

{
  return &DAT_01dbe220;
}

// 00C93E80  Trigger::cActAntiqScrMove::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActAntiqScrMove::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C93EB0  Trigger::cActAntiqScrReqEnd::vf00  size=6  [class]
undefined * Trigger::cActAntiqScrReqEnd::vf00(void)

{
  return &DAT_01dbe224;
}

// 00C93EC0  Trigger::cActAntiqScrReqEnd::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActAntiqScrReqEnd::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C93EF0  Trigger::cActBattleAreaOn::vf00  size=6  [class]
undefined * Trigger::cActBattleAreaOn::vf00(void)

{
  return &DAT_01dbe228;
}

// 00C93F00  Trigger::cActBattleAreaOn::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActBattleAreaOn::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C93F30  Trigger::cActBattleAreaOff::vf00  size=6  [class]
undefined * Trigger::cActBattleAreaOff::vf00(void)

{
  return &DAT_01dbe22c;
}

// 00C93F40  Trigger::cActBattleAreaOff::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActBattleAreaOff::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C93F70  Trigger::cActReqShotMissile::vf00  size=6  [class]
undefined * Trigger::cActReqShotMissile::vf00(void)

{
  return &DAT_01dbe230;
}

// 00C93F80  Trigger::cActReqShotMissile::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActReqShotMissile::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C93FA0  Trigger::Act::REQ_SHOT_MISSILE  size=536  [class]
undefined4 __fastcall Trigger::Act::REQ_SHOT_MISSILE(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  float10 fVar9;
  float10 fVar10;
  float local_360;
  float local_35c;
  undefined4 local_358;
  undefined4 local_354;
  undefined4 local_350;
  undefined4 local_34c;
  undefined4 local_348;
  float local_340;
  float local_33c;
  float local_338;
  uint local_330 [5];
  undefined4 local_31c;
  undefined4 local_318;
  undefined4 local_314;
  undefined2 local_310;
  int local_30c;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_1c0;
  undefined2 local_1b6;
  
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    FUN_00dd5650(&DAT_016b0374);
    return 0;
  }
  iVar5 = FUN_00c19c00(*(undefined4 *)(iVar3 + 8),*(undefined4 *)(iVar3 + 0xc),
                       *(undefined4 *)(iVar3 + 0x10));
  if (iVar5 != 0) {
    FUN_004105d0();
    FUN_00410710();
    FUN_0041cf30();
    local_21c = 0x22;
    local_330[1] = 0x30361;
    local_220 = 0x65;
    FUN_00a7c8a0();
    puVar6 = (undefined4 *)FUN_009f8b60();
    local_1c0 = *puVar6;
    local_31c = 0x14;
    local_314 = 0x14;
    local_318 = 100;
    local_310 = 0x700;
    local_30c = iVar5;
    uVar7 = FUN_00a7c7f0();
    FUN_00a7c960(uVar7);
    local_330[0] = local_330[0] | 0x14;
    local_1b6 = 0xffff;
    uVar7 = 0xffffffff;
    FUN_00a7c8a0(0xffffffff);
    iVar8 = FUN_00a12210(uVar7);
    local_360 = SQRT(*(float *)(iVar8 + 0x14) * *(float *)(iVar8 + 0x14) +
                     *(float *)(iVar8 + 0x10) * *(float *)(iVar8 + 0x10) +
                     *(float *)(iVar8 + 0x18) * *(float *)(iVar8 + 0x18));
    local_35c = SQRT(*(float *)(iVar8 + 0x20) * *(float *)(iVar8 + 0x20) +
                     *(float *)(iVar8 + 0x24) * *(float *)(iVar8 + 0x24) +
                     *(float *)(iVar8 + 0x28) * *(float *)(iVar8 + 0x28));
    fVar4 = SQRT(*(float *)(iVar8 + 0x38) * *(float *)(iVar8 + 0x38) +
                 *(float *)(iVar8 + 0x34) * *(float *)(iVar8 + 0x34) +
                 *(float *)(iVar8 + 0x30) * *(float *)(iVar8 + 0x30));
    fVar1 = *(float *)(iVar8 + 0x28);
    fVar2 = *(float *)(iVar8 + 0x38);
    fVar9 = (float10)FUN_00ddbaa0(-(*(float *)(iVar8 + 0x18) / fVar4));
    fVar10 = (float10)fpatan((float10)(fVar1 / fVar4),(float10)(fVar2 / fVar4));
    local_340 = (float)fVar10;
    local_33c = (float)fVar9;
    fVar9 = (float10)fpatan((float10)*(float *)(iVar8 + 0x14) / (float10)local_35c,
                            (float10)*(float *)(iVar8 + 0x10) / (float10)local_360);
    local_338 = (float)fVar9;
    local_360 = *(float *)(iVar8 + 0x40);
    local_35c = *(float *)(iVar8 + 0x44);
    local_358 = *(undefined4 *)(iVar8 + 0x48);
    local_354 = *(undefined4 *)(iVar8 + 0x4c);
    local_350 = *(undefined4 *)(iVar3 + 0x14);
    local_34c = *(undefined4 *)(iVar3 + 0x18);
    local_348 = *(undefined4 *)(iVar3 + 0x1c);
    FUN_0043fe30(&local_360,&local_350,&local_340,0x3f4ccccd,0x43480000);
    FUN_00ad3be0(iVar5,local_330);
  }
  return 0;
}

// 00C941D0  Trigger::cActEmAnimationByNumber::vf00  size=6  [class]
undefined * Trigger::cActEmAnimationByNumber::vf00(void)

{
  return &DAT_01dbe234;
}

// 00C941E0  Trigger::cActEmAnimationByNumber::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActEmAnimationByNumber::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C94210  Trigger::cActObjectDisp::vf00  size=6  [class]
undefined * Trigger::cActObjectDisp::vf00(void)

{
  return &DAT_01dbe238;
}

// 00C94220  Trigger::cActObjectDisp::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActObjectDisp::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C94250  Trigger::cActDoorLock::vf00  size=6  [class]
undefined * Trigger::cActDoorLock::vf00(void)

{
  return &DAT_01dbe23c;
}

// 00C94260  Trigger::cActDoorLock::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActDoorLock::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C94290  Trigger::cActObjectCollision::vf00  size=6  [class]
undefined * Trigger::cActObjectCollision::vf00(void)

{
  return &DAT_01dbe240;
}

// 00C942A0  Trigger::cActObjectCollision::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActObjectCollision::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C942D0  Trigger::cActVrComplete::vf00  size=6  [class]
undefined * Trigger::cActVrComplete::vf00(void)

{
  return &DAT_01dbe244;
}

// 00C942E0  Trigger::cActVrComplete::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActVrComplete::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C94310  Trigger::cActVrMistake::vf00  size=6  [class]
undefined * Trigger::cActVrMistake::vf00(void)

{
  return &DAT_01dbe248;
}

// 00C94320  Trigger::cActVrMistake::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActVrMistake::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C94350  Trigger::cActGimmickFinish::vf00  size=6  [class]
undefined * Trigger::cActGimmickFinish::vf00(void)

{
  return &DAT_01dbe24c;
}

// 00C94360  Trigger::cActGimmickFinish::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActGimmickFinish::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C94390  Trigger::cActGimmickRevert::vf00  size=6  [class]
undefined * Trigger::cActGimmickRevert::vf00(void)

{
  return &DAT_01dbe250;
}

// 00C943A0  Trigger::cActGimmickRevert::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActGimmickRevert::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C943D0  Trigger::cActEnemyHide::vf00  size=6  [class]
undefined * Trigger::cActEnemyHide::vf00(void)

{
  return &DAT_01dbe254;
}

// 00C943E0  Trigger::cActEnemyHide::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActEnemyHide::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C94410  Trigger::cActEnemyAppear::vf00  size=6  [class]
undefined * Trigger::cActEnemyAppear::vf00(void)

{
  return &DAT_01dbe258;
}

// 00C94420  Trigger::cActEnemyAppear::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActEnemyAppear::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C94450  Trigger::cActGimmickRevivalCancel::vf00  size=6  [class]
undefined * Trigger::cActGimmickRevivalCancel::vf00(void)

{
  return &DAT_01dbe25c;
}

// 00C94460  Trigger::cActGimmickRevivalCancel::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActGimmickRevivalCancel::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C94490  Trigger::cActEffectOff::vf00  size=6  [class]
undefined * Trigger::cActEffectOff::vf00(void)

{
  return &DAT_01dbe260;
}

// 00C944A0  Trigger::cActEffectOff::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActEffectOff::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C944D0  Trigger::cActCodecEndAll::vf00  size=6  [class]
undefined * Trigger::cActCodecEndAll::vf00(void)

{
  return &DAT_01dbe264;
}

// 00C944E0  Trigger::cActCodecEndAll::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActCodecEndAll::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C94510  Trigger::cActVrGoalPoint::vf00  size=6  [class]
undefined * Trigger::cActVrGoalPoint::vf00(void)

{
  return &DAT_01dbe268;
}

// 00C94520  Trigger::cActVrGoalPoint::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActVrGoalPoint::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C94550  Trigger::cActFade::vf00  size=6  [class]
undefined * Trigger::cActFade::vf00(void)

{
  return &DAT_01dbe26c;
}

// 00C94560  Trigger::cActFade::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActFade::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C94590  Trigger::cActScrMeshOnAll::vf00  size=6  [class]
undefined * Trigger::cActScrMeshOnAll::vf00(void)

{
  return &DAT_01dbe270;
}

// 00C945A0  Trigger::cActScrMeshOnAll::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActScrMeshOnAll::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C945D0  Trigger::cActScrMeshOffAll::vf00  size=6  [class]
undefined * Trigger::cActScrMeshOffAll::vf00(void)

{
  return &DAT_01dbe274;
}

// 00C945E0  Trigger::cActScrMeshOffAll::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActScrMeshOffAll::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C94610  Trigger::cActDoorDispOn::vf00  size=6  [class]
undefined * Trigger::cActDoorDispOn::vf00(void)

{
  return &DAT_01dbe278;
}

// 00C94620  Trigger::cActDoorDispOn::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActDoorDispOn::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C94650  Trigger::cActDoorDispOff::vf00  size=6  [class]
undefined * Trigger::cActDoorDispOff::vf00(void)

{
  return &DAT_01dbe27c;
}

// 00C94660  Trigger::cActDoorDispOff::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActDoorDispOff::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C94690  Trigger::cActAddExp::vf00  size=6  [class]
undefined * Trigger::cActAddExp::vf00(void)

{
  return &DAT_01dbe280;
}

// 00C946A0  Trigger::cActAddExp::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActAddExp::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C946D0  Trigger::cActCodecStartForSkip::vf00  size=6  [class]
undefined * Trigger::cActCodecStartForSkip::vf00(void)

{
  return &DAT_01dbe284;
}

// 00C946E0  Trigger::cActCodecStartForSkip::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActCodecStartForSkip::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C94710  Trigger::cActItemDelInstallation::vf00  size=6  [class]
undefined * Trigger::cActItemDelInstallation::vf00(void)

{
  return &DAT_01dbe288;
}

// 00C94720  Trigger::cActItemDelInstallation::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActItemDelInstallation::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C94750  Trigger::cActItemDelDropAll::vf00  size=6  [class]
undefined * Trigger::cActItemDelDropAll::vf00(void)

{
  return &DAT_01dbe28c;
}

// 00C94760  Trigger::cActItemDelDropAll::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActItemDelDropAll::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C94790  Trigger::cActGenericFlag::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActGenericFlag::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C947C0  Trigger::cActEnemyAppearResetPosByNumber::vf00  size=6  [class]
undefined * Trigger::cActEnemyAppearResetPosByNumber::vf00(void)

{
  return &DAT_01dbe290;
}

// 00C947D0  Trigger::cActEnemyAppearResetPosByNumber::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cActEnemyAppearResetPosByNumber::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C94800  Trigger::cActEnemyGroupAppearResetPosByNumber::vf00  size=6  [class]
undefined * Trigger::cActEnemyGroupAppearResetPosByNumber::vf00(void)

{
  return &DAT_01dbe294;
}

// 00C94810  Trigger::cActEnemyGroupAppearResetPosByNumber::vf04  size=31  [class]
undefined4 * __thiscall
Trigger::cActEnemyGroupAppearResetPosByNumber::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C94840  Trigger::cActEnemyDestroyByNumber::vf00  size=6  [class]
undefined * Trigger::cActEnemyDestroyByNumber::vf00(void)

{
  return &DAT_01dbe298;
}

// 00C94850  Trigger::cActEnemyDestroyByNumber::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActEnemyDestroyByNumber::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C94880  Trigger::cActReqVrStart::vf00  size=6  [class]
undefined * Trigger::cActReqVrStart::vf00(void)

{
  return &DAT_01dbe29c;
}

// 00C94890  Trigger::cActReqVrStart::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActReqVrStart::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C948C0  Trigger::cActPlayerMaxHp::vf00  size=6  [class]
undefined * Trigger::cActPlayerMaxHp::vf00(void)

{
  return &DAT_01dbe2a0;
}

// 00C948D0  Trigger::cActPlayerMaxHp::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActPlayerMaxHp::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C94900  Trigger::cActPlayerMaxDryCell::vf00  size=6  [class]
undefined * Trigger::cActPlayerMaxDryCell::vf00(void)

{
  return &DAT_01dbe2a4;
}

// 00C94910  Trigger::cActPlayerMaxDryCell::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActPlayerMaxDryCell::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C94940  Trigger::cActSeObject::vf00  size=6  [class]
undefined * Trigger::cActSeObject::vf00(void)

{
  return &DAT_01dbe2a8;
}

// 00C94950  Trigger::cActSeObject::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActSeObject::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C94980  Trigger::cActItemOnOff::vf00  size=6  [class]
undefined * Trigger::cActItemOnOff::vf00(void)

{
  return &DAT_01dbe2ac;
}

// 00C94990  Trigger::cActItemOnOff::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActItemOnOff::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C949C0  Trigger::cActNoCodecMenu::vf00  size=6  [class]
undefined * Trigger::cActNoCodecMenu::vf00(void)

{
  return &DAT_01dbe2b0;
}

// 00C949D0  Trigger::cActNoCodecMenu::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActNoCodecMenu::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C94A00  Trigger::cActVrTimerStop::vf00  size=6  [class]
undefined * Trigger::cActVrTimerStop::vf00(void)

{
  return &DAT_01dbe2b4;
}

// 00C94A10  Trigger::cActVrTimerStop::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActVrTimerStop::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C94A40  Trigger::cActCamFocusLock::vf00  size=6  [class]
undefined * Trigger::cActCamFocusLock::vf00(void)

{
  return &DAT_01dbe2b8;
}

// 00C94A50  Trigger::cActCamFocusLock::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActCamFocusLock::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C94A80  Trigger::cActCamFocusLockOff::vf00  size=6  [class]
undefined * Trigger::cActCamFocusLockOff::vf00(void)

{
  return &DAT_01dbe2bc;
}

// 00C94A90  Trigger::cActCamFocusLockOff::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActCamFocusLockOff::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C94AC0  Trigger::cActVrReturn::vf00  size=6  [class]
undefined * Trigger::cActVrReturn::vf00(void)

{
  return &DAT_01dbe2c0;
}

// 00C94AD0  Trigger::cActVrReturn::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActVrReturn::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C94B00  Trigger::cActPlKgkPos::vf00  size=6  [class]
undefined * Trigger::cActPlKgkPos::vf00(void)

{
  return &DAT_01dbe2c4;
}

// 00C94B10  Trigger::cActPlKgkPos::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActPlKgkPos::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C94B40  Trigger::cActPlKgkStop::vf00  size=6  [class]
undefined * Trigger::cActPlKgkStop::vf00(void)

{
  return &DAT_01dbe2c8;
}

// 00C94B50  Trigger::cActPlKgkStop::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActPlKgkStop::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C94B80  Trigger::cActVrBm6000On::vf00  size=6  [class]
undefined * Trigger::cActVrBm6000On::vf00(void)

{
  return &DAT_01dbe2cc;
}

// 00C94B90  Trigger::cActVrBm6000On::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActVrBm6000On::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C94BC0  Trigger::cActVrBm6000Off::vf00  size=6  [class]
undefined * Trigger::cActVrBm6000Off::vf00(void)

{
  return &DAT_01dbe2d0;
}

// 00C94BD0  Trigger::cActVrBm6000Off::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActVrBm6000Off::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C94C00  Trigger::cActDoorCloseDelay::vf00  size=6  [class]
undefined * Trigger::cActDoorCloseDelay::vf00(void)

{
  return &DAT_01dbe2d4;
}

// 00C94C10  Trigger::cActDoorCloseDelay::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActDoorCloseDelay::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C94C40  Trigger::cActDoorOpenDelay::vf00  size=6  [class]
undefined * Trigger::cActDoorOpenDelay::vf00(void)

{
  return &DAT_01dbe2d8;
}

// 00C94C50  Trigger::cActDoorOpenDelay::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActDoorOpenDelay::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C94C80  Trigger::cActFlagOnDlc2::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActFlagOnDlc2::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C94CB0  Trigger::cActFlagOffDlc2::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActFlagOffDlc2::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C94CE0  Trigger::cActFlagOnDlc3::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActFlagOnDlc3::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C94D10  Trigger::cActFlagOffDlc3::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActFlagOffDlc3::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C94D40  Trigger::cActResultRecStartClear::vf00  size=6  [class]
undefined * Trigger::cActResultRecStartClear::vf00(void)

{
  return &DAT_01dbe2dc;
}

// 00C94D50  Trigger::cActResultRecStartClear::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActResultRecStartClear::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C94D80  Trigger::cActMainTrgActive::vf00  size=6  [class]
undefined * Trigger::cActMainTrgActive::vf00(void)

{
  return &DAT_01dbe2e0;
}

// 00C94D90  Trigger::cActMainTrgActive::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActMainTrgActive::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C94DC0  Trigger::cActMainTrgSleep::vf00  size=6  [class]
undefined * Trigger::cActMainTrgSleep::vf00(void)

{
  return &DAT_01dbe2e4;
}

// 00C94DD0  Trigger::cActMainTrgSleep::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActMainTrgSleep::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C94E00  Trigger::cActSubTrgActive::vf00  size=6  [class]
undefined * Trigger::cActSubTrgActive::vf00(void)

{
  return &DAT_01dbe2e8;
}

// 00C94E10  Trigger::cActSubTrgActive::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActSubTrgActive::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C94E40  Trigger::cActSubTrgSleep::vf00  size=6  [class]
undefined * Trigger::cActSubTrgSleep::vf00(void)

{
  return &DAT_01dbe2ec;
}

// 00C94E50  Trigger::cActSubTrgSleep::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActSubTrgSleep::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C94E80  Trigger::cActMainTrgAddFunc::vf00  size=6  [class]
undefined * Trigger::cActMainTrgAddFunc::vf00(void)

{
  return &DAT_01dbe2f0;
}

// 00C94E90  Trigger::cActMainTrgAddFunc::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActMainTrgAddFunc::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C94EC0  Trigger::cActSubTrgAddFunc::vf00  size=6  [class]
undefined * Trigger::cActSubTrgAddFunc::vf00(void)

{
  return &DAT_01dbe2f4;
}

// 00C94ED0  Trigger::cActSubTrgAddFunc::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActSubTrgAddFunc::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C94F00  Trigger::cActMainTrgDelFunc::vf00  size=6  [class]
undefined * Trigger::cActMainTrgDelFunc::vf00(void)

{
  return &DAT_01dbe2f8;
}

// 00C94F10  Trigger::cActMainTrgDelFunc::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActMainTrgDelFunc::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C94F40  Trigger::cActSubTrgDelFunc::vf00  size=6  [class]
undefined * Trigger::cActSubTrgDelFunc::vf00(void)

{
  return &DAT_01dbe2fc;
}

// 00C94F50  Trigger::cActSubTrgDelFunc::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActSubTrgDelFunc::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C94F90  FUN_00c94f90  size=43  [between]
void __fastcall FUN_00c94f90(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00C94FC0  FUN_00c94fc0  size=60  [between]
void __thiscall FUN_00c94fc0(int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1[2] <= param_1[3]) {
    *param_2 = *param_1;
    return;
  }
  iVar1 = param_1[3] * 4;
  puVar2 = (undefined4 *)(param_1[1] + iVar1);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = *param_3;
  }
  param_1[3] = param_1[3] + 1;
  *param_2 = param_1[1] + iVar1;
  return;
}

// 00C95020  FUN_00c95020  size=43  [between]
void __fastcall FUN_00c95020(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00C95050  FUN_00c95050  size=79  [between]
void __thiscall FUN_00c95050(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_1[2] <= param_1[3]) {
    *param_2 = *param_1;
    return;
  }
  iVar1 = param_1[3] * 8;
  iVar2 = param_1[1] + iVar1;
  if (iVar2 != 0) {
    FUN_00a7c940(param_3);
    *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  param_1[3] = param_1[3] + 1;
  *param_2 = param_1[1] + iVar1;
  return;
}

// 00C950A0  FUN_00c950a0  size=267  [between]
undefined4 __thiscall
FUN_00c950a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            char *param_5,undefined4 param_6)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 unaff_retaddr;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  char local_20 [28];
  undefined4 uStack_4;
  
  pcVar2 = param_5;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = (int)pcVar2 - (int)(param_5 + 1);
  if (uVar3 < 0x18) {
    _strcpy_s((char *)&local_38,0x20,param_5);
  }
  else {
    local_38 = *(undefined4 *)(param_5 + (uVar3 - 0x17));
    local_34 = *(undefined4 *)(param_5 + (uVar3 - 0x13));
    local_30 = *(undefined4 *)(param_5 + (uVar3 - 0xf));
    local_2c = *(undefined4 *)(param_5 + (uVar3 - 0xb));
    local_28 = *(undefined4 *)(param_5 + (uVar3 - 7));
    local_24 = *(undefined4 *)(param_5 + (uVar3 - 3));
  }
  _sprintf_s(local_20,0x20,"%s(%d)",&local_38,param_6);
  pcVar2 = _strrchr(local_20,0x5c);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = local_20;
  }
  else {
    pcVar2 = pcVar2 + 1;
  }
  uVar4 = FUN_00a701f0(&LAB_00c90480,0,param_4,pcVar2);
  iVar5 = FUN_00a6e850(uVar4);
  if (iVar5 == 0) {
    FUN_00dd5650(&DAT_016b0c68);
    return uVar4;
  }
  FUN_00a6e740(uVar4,&LAB_00c83d30);
  *(undefined4 *)(iVar5 + 0x24) = 0xfffe;
  *(undefined4 *)(iVar5 + 0x28) = param_1;
  *(undefined4 *)(iVar5 + 0x2c) = uStack_4;
  *(undefined4 *)(iVar5 + 0x30) = unaff_retaddr;
  return uVar4;
}

// 00C95250  FUN_00c95250  size=51  [between]
void __fastcall FUN_00c95250(int param_1)

{
  FUN_00dd7270();
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00C95290  FUN_00c95290  size=311  [between]
undefined4 __thiscall FUN_00c95290(int param_1,char *param_2,int param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  void *_Dst;
  undefined4 uVar5;
  void *local_4;
  
  uVar5 = 0;
  if ((param_2 == (char *)0x0) || (*(int *)(param_1 + 0x14) == 1)) {
    return 0;
  }
  uVar3 = FUN_00e03ea0(param_2);
  if (*(int *)(param_1 + 0x30) != 0) {
    if (*(int *)(param_1 + 0x30) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    }
    iVar4 = FUN_00c84190(uVar3);
    if (iVar4 == -1) {
      _Dst = (void *)FUN_00dd3540(0x3c,*(undefined4 *)(param_1 + 0x38));
      local_4 = _Dst;
      if (_Dst != (void *)0x0) {
        _memset(_Dst,0,0x3c);
        iVar4 = 0;
        if ((param_3 == 1) &&
           ((iVar4 = FUN_00dd3540(8,*(undefined4 *)(param_1 + 0x38)), iVar4 == 0 ||
            (iVar4 = FUN_00de3530(), iVar4 == 0)))) {
          FUN_00dd4920(_Dst);
          return 0;
        }
        _strcpy_s((char *)((int)_Dst + 4),0x20,param_2);
        *(undefined4 *)((int)_Dst + 0x24) = uVar3;
        *(undefined4 *)((int)_Dst + 0x28) = 1;
        *(undefined4 *)((int)_Dst + 0x2c) = 0;
        *(int *)((int)_Dst + 0x34) = iVar4;
        FUN_00c94fc0(&param_2,&local_4);
        uVar5 = 1;
      }
    }
    else {
      puVar2 = *(undefined4 **)(*(int *)(param_1 + 4) + iVar4 * 4);
      uVar5 = 1;
      piVar1 = puVar2 + 0xe;
      *piVar1 = *piVar1 + 1;
      FUN_00e9d710(*puVar2);
    }
    if (*(int *)(param_1 + 0x30) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    }
  }
  return uVar5;
}

// 00C953D0  FUN_00c953d0  size=71  [between]
int __thiscall FUN_00c953d0(int param_1,byte param_2)

{
  FUN_00dd7270();
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C95470  FUN_00c95470  size=109  [between]
undefined4 __thiscall FUN_00c95470(int param_1,char *param_2)

{
  undefined4 uVar1;
  errno_t eVar2;
  char local_20 [32];
  
  uVar1 = 0;
  if ((*(int *)(param_1 + 4) != 0) && (param_2 != (char *)0x0)) {
    local_20[0] = '\0';
    local_20[1] = '\0';
    local_20[2] = '\0';
    local_20[3] = '\0';
    local_20[4] = '\0';
    local_20[5] = '\0';
    local_20[6] = '\0';
    local_20[7] = '\0';
    local_20[8] = '\0';
    local_20[9] = '\0';
    local_20[10] = '\0';
    local_20[0xb] = '\0';
    local_20[0xc] = '\0';
    local_20[0xd] = '\0';
    local_20[0xe] = '\0';
    local_20[0xf] = '\0';
    local_20[0x10] = '\0';
    local_20[0x11] = '\0';
    local_20[0x12] = '\0';
    local_20[0x13] = '\0';
    local_20[0x14] = '\0';
    local_20[0x15] = '\0';
    local_20[0x16] = '\0';
    local_20[0x17] = '\0';
    local_20[0x18] = '\0';
    local_20[0x19] = '\0';
    local_20[0x1a] = '\0';
    local_20[0x1b] = '\0';
    local_20[0x1c] = '\0';
    local_20[0x1d] = '\0';
    local_20[0x1e] = '\0';
    local_20[0x1f] = '\0';
    eVar2 = _strcat_s(local_20,0x20,param_2);
    if (eVar2 != 0) {
      return 0;
    }
    uVar1 = FUN_00c77a60(param_2);
    uVar1 = FUN_00c95290(param_2,uVar1);
  }
  return uVar1;
}

// 00C954E0  FUN_00c954e0  size=82  [between]
void __thiscall FUN_00c954e0(undefined4 *param_1,undefined4 param_2)

{
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  *param_1 = param_2;
  if (param_1[0x92] == 0) {
    param_1[0x92] = param_1 + 1;
    param_1[0x93] = 0x10;
    param_1[0x94] = 0;
    param_1[0x95] = 0;
  }
  return;
}

// 00C95590  FUN_00c95590  size=95  [between]
int __thiscall FUN_00c95590(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  iVar1 = 0;
  if (param_2 != 0) {
    if (0 < *(int *)(param_1 + 0x250)) {
      iVar3 = 0;
      do {
        if (*(int *)(param_2 + 0xc) < *(int *)(param_2 + 8)) {
          puVar5 = (undefined4 *)(*(int *)(param_2 + 4) + *(int *)(param_2 + 0xc) * 0x24);
          if (puVar5 != (undefined4 *)0x0) {
            puVar4 = (undefined4 *)(*(int *)(param_1 + 0x248) + iVar3);
            for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
              *puVar5 = *puVar4;
              puVar4 = puVar4 + 1;
              puVar5 = puVar5 + 1;
            }
          }
          *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
        }
        iVar1 = iVar1 + 1;
        iVar3 = iVar3 + 0x24;
      } while (iVar1 < *(int *)(param_1 + 0x250));
    }
    iVar1 = 1;
  }
  return iVar1;
}

// 00C955F0  FUN_00c955f0  size=157  [between]
bool FUN_00c955f0(int param_1)

{
  int iVar1;
  
  if (DAT_01dbd1c0 != 0) {
    return true;
  }
  if (param_1 == 0) {
    return false;
  }
  DAT_01dbd1c4 = param_1;
  DAT_01dbd1c0 = FUN_00dd3500(1,param_1);
  if (DAT_01dbd1c0 != 0) {
    iVar1 = FUN_00dd3500(600,DAT_01dbd1c4);
    if (iVar1 == 0) {
      DAT_01dbd1c8 = 0;
    }
    else {
      DAT_01dbd1c8 = FUN_00c954e0(DAT_01dbd1c4);
      if (DAT_01dbd1c8 != 0) goto LAB_00c95683;
    }
    if (DAT_01dbd1c0 == 0) {
LAB_00c95683:
      return DAT_01dbd1c0 != 0;
    }
    FUN_00dd4920(DAT_01dbd1c0);
  }
  DAT_01dbd1c0 = 0;
  return false;
}

// 00C95690  FUN_00c95690  size=124  [between]
void FUN_00c95690(void)

{
  int *piVar1;
  int iVar2;
  
  if (DAT_01dbd1c0 != 0) {
    *(undefined4 *)(DAT_01dbd1c8 + 0x250) = 0;
    iVar2 = DAT_01dbd1c8;
    DAT_01dbd1c4 = 0;
    if (DAT_01dbd1c8 != 0) {
      piVar1 = (int *)(DAT_01dbd1c8 + 0x248);
      if (*piVar1 != 0) {
        *(undefined4 *)(DAT_01dbd1c8 + 0x250) = 0;
        if (*(int *)(iVar2 + 0x254) != 0) {
          FUN_00dd48d0(*piVar1,0);
          *(undefined4 *)(iVar2 + 0x254) = 0;
        }
        *(undefined4 *)(iVar2 + 0x248) = 0;
        *(undefined4 *)(iVar2 + 0x24c) = 0;
      }
      FUN_00dd4920(iVar2);
      DAT_01dbd1c8 = 0;
    }
    if (DAT_01dbd1c0 != 0) {
      FUN_00dd4920(DAT_01dbd1c0);
      DAT_01dbd1c0 = 0;
    }
  }
  return;
}

// 00C95710  FUN_00c95710  size=85  [between]
undefined4 FUN_00c95710(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (DAT_01dbd1c0 == 0) {
    return 0;
  }
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  piVar1 = (int *)(DAT_01dbd1c8 + 0x250);
  if (*(int *)(DAT_01dbd1c8 + 0x250) < *(int *)(DAT_01dbd1c8 + 0x24c)) {
    puVar3 = (undefined4 *)(*(int *)(DAT_01dbd1c8 + 0x248) + *(int *)(DAT_01dbd1c8 + 0x250) * 0x24);
    if (puVar3 != (undefined4 *)0x0) {
      for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar3 = *param_1;
        param_1 = param_1 + 1;
        puVar3 = puVar3 + 1;
      }
    }
    *piVar1 = *piVar1 + 1;
  }
  return 1;
}

// 00C95790  FUN_00c95790  size=315  [between]
undefined4 FUN_00c95790(undefined2 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 local_48;
  undefined1 local_46;
  undefined1 local_45;
  undefined4 local_44;
  undefined4 *local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  undefined4 local_30 [12];
  
  local_48 = *param_1;
  local_46 = *(undefined1 *)(param_1 + 1);
  local_40 = local_30;
  local_44 = 0;
  local_3c = 0xc;
  local_38 = 0;
  local_34 = 0;
  local_45 = 0;
  iVar1 = __stricmp("Id:",(char *)&local_48);
  if (iVar1 == 0) {
    iVar1 = 3;
    do {
      if (*(char *)(iVar1 + (int)param_1) != ' ') {
        iVar1 = iVar1 + (int)param_1;
        goto LAB_00c957f4;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x10);
    iVar1 = 0;
LAB_00c957f4:
    iVar2 = FUN_009fde60(iVar1);
    if (iVar2 == -1) {
      FUN_00dd5650(&DAT_016b0cbc,iVar1);
      if (local_40 == (undefined4 *)0x0) {
        return 0;
      }
      local_38 = 0;
      if (local_34 == 0) {
        return 0;
      }
      FUN_00dd48d0(local_40,0);
      return 0;
    }
    FUN_00a814d0(&local_44,iVar2);
  }
  else {
    uVar3 = FUN_00e03ea0(param_1);
    FUN_00a18df0(&local_44,uVar3);
  }
  if (local_38 == 1) {
    *param_2 = *local_40;
    local_38 = 0;
    if (local_34 != 0) {
      FUN_00dd48d0(local_40,0);
    }
    return 1;
  }
  FUN_00dd5650(&DAT_016b0c94,param_1);
  if ((local_40 != (undefined4 *)0x0) && (local_38 = 0, local_34 != 0)) {
    FUN_00dd48d0(local_40,0);
    return 0;
  }
  return 0;
}

// 00C958D0  FUN_00c958d0  size=238  [between]
undefined4 FUN_00c958d0(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_54;
  undefined1 *local_50;
  undefined4 local_4c;
  int local_48;
  int local_44;
  undefined1 local_40 [64];
  
  if (param_1 != 0) {
    local_50 = local_40;
    local_54 = 0;
    local_4c = 0x10;
    local_48 = 0;
    local_44 = 0;
    FUN_00a814d0(&local_54,param_2);
    iVar3 = FUN_00e03ea0(param_1);
    iVar5 = 0;
    if (0 < local_48) {
      do {
        iVar2 = *(int *)(local_50 + iVar5 * 4);
        if ((((iVar2 != 0) && (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) &&
            (iVar3 == *(int *)(iVar4 + 0x4ec))) && (*(int *)(param_3 + 0xc) < *(int *)(param_3 + 8))
           ) {
          piVar1 = (int *)(*(int *)(param_3 + 4) + *(int *)(param_3 + 0xc) * 4);
          if (piVar1 != (int *)0x0) {
            *piVar1 = iVar2;
          }
          *(int *)(param_3 + 0xc) = *(int *)(param_3 + 0xc) + 1;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < local_48);
    }
    if (*(int *)(param_3 + 0xc) != 0) {
      if ((local_50 != (undefined1 *)0x0) && (local_48 = 0, local_44 != 0)) {
        FUN_00dd48d0(local_50,0);
      }
      return 1;
    }
    if ((local_50 != (undefined1 *)0x0) && (local_48 = 0, local_44 != 0)) {
      FUN_00dd48d0(local_50,0);
    }
  }
  return 0;
}

// 00C959C0  FUN_00c959c0  size=213  [between]
int FUN_00c959c0(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_54;
  undefined1 *local_50;
  undefined4 local_4c;
  int local_48;
  int local_44;
  undefined1 local_40 [64];
  
  local_50 = local_40;
  local_54 = 0;
  local_4c = 0x10;
  local_48 = 0;
  local_44 = 0;
  iVar2 = FUN_00c958d0(param_1,param_2,&local_54);
  if (iVar2 == 0) {
    if (param_1 == 0) {
      iVar2 = 0;
      goto LAB_00c95a6f;
    }
    uVar3 = FUN_00e03ea0(param_1,param_2);
    FUN_00a18e90(&local_54,uVar3,param_2);
    if (local_48 == 0) {
      iVar2 = 0;
      goto LAB_00c95a6f;
    }
    iVar2 = 1;
  }
  else if (iVar2 != 1) goto LAB_00c95a6f;
  iVar4 = 0;
  if (0 < local_48) {
    do {
      if ((*(int *)(local_50 + iVar4 * 4) != 0) && (*(int *)(param_3 + 0xc) < *(int *)(param_3 + 8))
         ) {
        piVar1 = (int *)(*(int *)(param_3 + 4) + *(int *)(param_3 + 0xc) * 4);
        if (piVar1 != (int *)0x0) {
          *piVar1 = *(int *)(local_50 + iVar4 * 4);
        }
        *(int *)(param_3 + 0xc) = *(int *)(param_3 + 0xc) + 1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < local_48);
  }
LAB_00c95a6f:
  if ((local_50 != (undefined1 *)0x0) && (local_48 = 0, local_44 != 0)) {
    FUN_00dd48d0(local_50,0);
  }
  return iVar2;
}

// 00C95BE0  FUN_00c95be0  size=276  [between]
void __fastcall FUN_00c95be0(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x3c) = DAT_018ab9a0;
  FUN_00c83a60(0x180,PTR_DAT_018ab998);
  FUN_00c83a60(0x80,PTR_DAT_018ab998);
  FUN_00c83a60(0x80,PTR_DAT_018ab998);
  FUN_00c84a70();
  if (*(int *)(param_1 + 0x694) != 0) {
    *(undefined4 *)(param_1 + 0x698) = 0;
  }
  if (DAT_01dbd1cc == (undefined4 *)0x0) {
    DAT_01dbd1cc = (undefined4 *)FUN_00dd3500(0x14,PTR_DAT_018ab998);
    if (DAT_01dbd1cc == (undefined4 *)0x0) {
      DAT_01dbd1cc = (undefined4 *)0x0;
    }
    else {
      *DAT_01dbd1cc = 0;
      DAT_01dbd1cc[1] = 0;
      DAT_01dbd1cc[2] = 0;
      DAT_01dbd1cc[3] = 0;
      DAT_01dbd1cc[4] = 0;
      FUN_00a6eda0(0x80,PTR_DAT_018ab998);
    }
  }
  iVar1 = FUN_00c90950(PTR_DAT_018ab998);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016b0d08);
  }
  iVar1 = FUN_00c955f0(PTR_DAT_018ab998);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016b0cdc);
  }
  *(undefined4 *)(param_1 + 0x6f4) = 0;
  *(undefined4 *)(param_1 + 0x6fc) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x6f8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x700) = 0;
  return;
}

// 00C95D00  FUN_00c95d00  size=63  [between]
int __thiscall FUN_00c95d00(int param_1,byte param_2)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C95D40  FUN_00c95d40  size=63  [between]
void FUN_00c95d40(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 != 0) {
    uVar2 = FUN_00e03ea0(param_2);
    iVar1 = DAT_01dbd1d8;
    if (DAT_01dbd1d0 != 0) {
      *(undefined4 *)(DAT_01dbd1d8 + 0xc) = param_1;
      *(undefined4 *)(iVar1 + 0x10) = uVar2;
    }
  }
  FUN_00c90f80();
  FUN_00c90c40();
  return;
}

// 00C95D80  FUN_00c95d80  size=80  [between]
void __fastcall FUN_00c95d80(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((0 < *(int *)(param_1 + 0xc)) && (iVar2 = **(int **)(param_1 + 4), iVar2 != 0)) {
    if (((*(int *)(iVar2 + 0x2c) != 0) &&
        (((*(int **)(iVar2 + 0x30) != (int *)0x0 && (*(float *)(iVar2 + 0x10) == 0.0)) &&
         (iVar1 = *(int *)(*(int *)(iVar2 + 0x2c) + 4), iVar1 != 0)))) &&
       ((*(int *)(iVar1 + 4) == 0xb &&
        (iVar2 = (**(code **)(**(int **)(iVar2 + 0x30) + 0x20))(), iVar2 == 99)))) {
      FUN_00c84b30();
    }
  }
  return;
}

// 00C95DD0  FUN_00c95dd0  size=27  [between]
void __fastcall FUN_00c95dd0(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_00c90a60();
  FUN_00c84a70();
  return;
}

// 00C95DF0  FUN_00c95df0  size=194  [between]
undefined4 FUN_00c95df0(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_254;
  undefined1 *local_250;
  undefined4 local_24c;
  undefined4 local_248;
  int local_244;
  undefined1 local_240 [576];
  
  if ((DAT_01dbd1c0 != 0) && (0 < *(int *)(DAT_01dbd1c8 + 0x250))) {
    local_250 = local_240;
    local_254 = 0;
    local_24c = 0x10;
    local_244 = 0;
    local_248 = 0;
    iVar1 = FUN_00c95590(&local_254);
    if (iVar1 == 0) {
      if ((local_250 != (undefined1 *)0x0) && (local_244 != 0)) {
        FUN_00dd48d0(local_250,0);
      }
      return 0;
    }
    uVar2 = FUN_00c84690(&local_254);
    if (DAT_01dbd1c0 != 0) {
      *(undefined4 *)(DAT_01dbd1c8 + 0x250) = 0;
    }
    if ((local_250 != (undefined1 *)0x0) && (local_244 != 0)) {
      FUN_00dd48d0(local_250,0);
    }
    return uVar2;
  }
  return 1;
}

// 00C95EC0  FUN_00c95ec0  size=388  [between]
undefined4 __thiscall FUN_00c95ec0(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined *puVar5;
  int iStack_8;
  undefined1 auStack_4 [4];
  
  piVar4 = *(int **)(param_1 + 0x18);
  if (piVar4 != piVar4 + *(int *)(param_1 + 0x20)) {
    do {
      iVar3 = *piVar4;
      if ((((iVar3 != 0) && (piVar1 = *(int **)(iVar3 + 0x30), piVar1 != (int *)0x0)) &&
          (((iVar2 = (**(code **)(*piVar1 + 0x20))(), iVar2 == 0xd ||
            (((iVar2 == 0xe || (iVar2 == 0xf)) || (iVar2 == 0x15)))) || (iVar2 == 0x16)))) &&
         (iVar3 = FUN_00c848c0(iVar3,param_2), iVar3 != 0)) {
        puVar5 = &DAT_01dbd210;
        (**(code **)*piVar1)(&DAT_01dbd210);
        iVar3 = FUN_00dd6d80(puVar5);
        if ((iVar3 != 0) && (iStack_8 = (**(code **)(*piVar1 + 0x24))(), iStack_8 != -1)) {
          if (*(int *)(param_3 + 8) <= *(int *)(param_3 + 0xc)) {
            return 0;
          }
          FUN_00969770(auStack_4,&iStack_8);
        }
      }
      piVar4 = piVar4 + 1;
    } while (piVar4 != (int *)(*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x20) * 4));
  }
  piVar4 = *(int **)(param_1 + 0x2c);
  if (piVar4 != piVar4 + *(int *)(param_1 + 0x34)) {
    do {
      iVar3 = *piVar4;
      if ((((iVar3 != 0) && (piVar1 = *(int **)(iVar3 + 0x30), piVar1 != (int *)0x0)) &&
          ((iVar2 = (**(code **)(*piVar1 + 0x20))(), iVar2 == 0xd ||
           ((((iVar2 == 0xe || (iVar2 == 0xf)) || (iVar2 == 0x15)) || (iVar2 == 0x16)))))) &&
         (iVar3 = FUN_00c848c0(iVar3,param_2), iVar3 != 0)) {
        puVar5 = &DAT_01dbd210;
        (**(code **)*piVar1)(&DAT_01dbd210);
        iVar3 = FUN_00dd6d80(puVar5);
        if ((iVar3 != 0) && (iVar3 = (**(code **)(*piVar1 + 0x24))(), iVar3 != -1)) {
          if (*(int *)(param_3 + 8) <= *(int *)(param_3 + 0xc)) {
            return 0;
          }
          piVar1 = (int *)(*(int *)(param_3 + 4) + *(int *)(param_3 + 0xc) * 4);
          if (piVar1 != (int *)0x0) {
            *piVar1 = iVar3;
          }
          *(int *)(param_3 + 0xc) = *(int *)(param_3 + 0xc) + 1;
        }
      }
      piVar4 = piVar4 + 1;
    } while (piVar4 != (int *)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x34) * 4));
  }
  return 1;
}

// 00C96080  Trigger::cCondStartAnimation::cCondStartAnimation  size=41  [class]
void __fastcall Trigger::cCondStartAnimation::cCondStartAnimation(undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = vftable;
  param_1[3] = 0xffffffff;
  param_1[2] = 0xffffffff;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return;
}

// 00C960B0  Trigger::cCondition::cCondition  size=55  [class]
void __fastcall Trigger::cCondition::cCondition(undefined4 *param_1)

{
  *param_1 = cCondStartAnimation::vftable;
  if (param_1[7] != 0) {
    param_1[9] = 0;
    if (param_1[10] != 0) {
      FUN_00dd48d0(param_1[7],0);
      param_1[10] = 0;
    }
    param_1[7] = 0;
    param_1[8] = 0;
  }
  *param_1 = vftable;
  return;
}

// 00C960F0  FUN_00c960f0  size=150  [between]
void __fastcall FUN_00c960f0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_54;
  undefined1 *local_50;
  undefined4 local_4c;
  int local_48;
  int local_44;
  undefined1 local_40 [64];
  
  local_50 = local_40;
  local_54 = 0;
  local_4c = 0x10;
  local_48 = 0;
  local_44 = 0;
  iVar1 = FUN_00c77fc0(*(undefined4 *)(param_1 + 0x10),&local_54);
  if ((iVar1 != 0) && (iVar1 = 0, 0 < local_48)) {
    do {
      uVar2 = FUN_00a7c7f0();
      if (*(int *)(param_1 + 0x24) < *(int *)(param_1 + 0x20)) {
        if (*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x24) * 4 != 0) {
          FUN_00a7c940(uVar2);
        }
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < local_48);
  }
  if ((local_50 != (undefined1 *)0x0) && (local_48 = 0, local_44 != 0)) {
    FUN_00dd48d0(local_50,0);
  }
  return;
}

// 00C96190  Trigger::cCondEndAnimation::cCondEndAnimation  size=41  [class]
void __fastcall Trigger::cCondEndAnimation::cCondEndAnimation(undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = vftable;
  param_1[3] = 0xffffffff;
  param_1[2] = 0xffffffff;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return;
}

// 00C961C0  Trigger::cCondition::cCondition_2  size=55  [class]
void __fastcall Trigger::cCondition::cCondition_2(undefined4 *param_1)

{
  *param_1 = cCondEndAnimation::vftable;
  if (param_1[7] != 0) {
    param_1[9] = 0;
    if (param_1[10] != 0) {
      FUN_00dd48d0(param_1[7],0);
      param_1[10] = 0;
    }
    param_1[7] = 0;
    param_1[8] = 0;
  }
  *param_1 = vftable;
  return;
}

// 00C96200  FUN_00c96200  size=200  [between]
void __fastcall FUN_00c96200(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_64 [4];
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 *local_58;
  undefined4 local_54;
  int local_50;
  int local_4c;
  undefined1 local_48 [68];
  
  local_58 = local_48;
  local_5c = 0;
  local_54 = 0x10;
  local_50 = 0;
  local_4c = 0;
  iVar2 = FUN_00c77fc0(*(undefined4 *)(param_1 + 0x10),&local_5c);
  if ((iVar2 != 0) && (0 < local_50)) {
    iVar2 = 0;
    do {
      FUN_00a7c930();
      local_60 = 0;
      uVar3 = FUN_00a7c7f0();
      FUN_00a7c960(uVar3);
      if (*(int *)(param_1 + 0x24) < *(int *)(param_1 + 0x20)) {
        iVar1 = *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x24) * 8;
        if (iVar1 != 0) {
          FUN_00a7c940(local_64);
          *(undefined4 *)(iVar1 + 4) = local_60;
        }
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_50);
  }
  if ((local_58 != (undefined1 *)0x0) && (local_50 = 0, local_4c != 0)) {
    FUN_00dd48d0(local_58,0);
  }
  return;
}

// 00C962D0  Trigger::Condition::IS_SCR_MESH_ON  size=183  [class]
undefined4 __fastcall Trigger::Condition::IS_SCR_MESH_ON(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (DAT_01dbd1cc == 0) {
    FUN_00dd5650(&DAT_016b0d88);
    return 0;
  }
  *(undefined4 *)(DAT_01dbd1cc + 0xc) = 0;
  iVar4 = DAT_01dbd1cc;
  uVar5 = *(undefined4 *)(param_1 + 0x10);
  if (param_1 + 0x14 != 0) {
    piVar1 = (int *)FUN_00c14bb0();
    (**(code **)(*piVar1 + 0x14))(iVar4,param_1 + 0x14,uVar5);
    if (*(int *)(iVar4 + 0xc) != 0) {
      iVar4 = *(int *)(DAT_01dbd1cc + 4);
      uVar5 = 1;
      if (iVar4 != iVar4 + *(int *)(DAT_01dbd1cc + 0xc) * 4) {
        do {
          iVar2 = FUN_00a7c8a0();
          iVar3 = *(int *)(param_1 + 0x24);
          if ((((-1 < iVar3) && (iVar3 < *(short *)(iVar2 + 0x324))) &&
              (iVar3 = iVar3 * 0x70 + *(int *)(iVar2 + 800), iVar3 != 0)) &&
             ((*(byte *)(iVar3 + 0x38) & 1) == 0)) {
            uVar5 = 0;
          }
          iVar4 = iVar4 + 4;
        } while (iVar4 != *(int *)(DAT_01dbd1cc + 4) + *(int *)(DAT_01dbd1cc + 0xc) * 4);
      }
      return uVar5;
    }
  }
  return 0;
}

// 00C96390  Trigger::Condition::IS_SCR_MESH_OFF  size=197  [class]
int __fastcall Trigger::Condition::IS_SCR_MESH_OFF(int param_1)

{
  undefined4 uVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (DAT_01dbd1cc == 0) {
    FUN_00dd5650(&DAT_016b0dc8);
    return 0;
  }
  *(undefined4 *)(DAT_01dbd1cc + 0xc) = 0;
  iVar6 = DAT_01dbd1cc;
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  if (param_1 + 0x14 != 0) {
    piVar3 = (int *)FUN_00c14bb0();
    (**(code **)(*piVar3 + 0x14))(iVar6,param_1 + 0x14,uVar1);
    if (*(int *)(iVar6 + 0xc) != 0) {
      iVar6 = *(int *)(DAT_01dbd1cc + 4);
      iVar7 = 0;
      bVar2 = false;
      if (iVar6 == iVar6 + *(int *)(DAT_01dbd1cc + 0xc) * 4) {
        return 0;
      }
      do {
        iVar4 = FUN_00a7c8a0();
        iVar5 = *(int *)(param_1 + 0x24);
        if (((-1 < iVar5) && (iVar5 < *(short *)(iVar4 + 0x324))) &&
           (iVar5 = iVar5 * 0x70 + *(int *)(iVar4 + 800), iVar5 != 0)) {
          if ((*(byte *)(iVar5 + 0x38) & 1) == 0) {
            iVar7 = 1;
          }
          else {
            bVar2 = true;
          }
        }
        iVar6 = iVar6 + 4;
      } while (iVar6 != *(int *)(DAT_01dbd1cc + 4) + *(int *)(DAT_01dbd1cc + 0xc) * 4);
      if (iVar7 != 1) {
        return iVar7;
      }
      if (!bVar2) {
        return 1;
      }
    }
  }
  return 0;
}

// 00C96460  Trigger::Act::OBJECT_DISP  size=450  [class]
uint __fastcall Trigger::Act::OBJECT_DISP(int param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  uint uVar6;
  undefined4 local_460;
  undefined1 *local_45c;
  undefined4 local_458;
  int local_454;
  int local_450;
  int local_44c;
  char *local_448;
  int local_444;
  undefined1 local_440 [64];
  undefined1 local_400 [1024];
  
  local_45c = local_440;
  iVar3 = *(int *)(param_1 + 0x10);
  local_460 = 0;
  local_458 = 0x10;
  local_454 = 0;
  local_450 = 0;
  pcVar2 = (char *)(iVar3 + 0xc);
  if (*(int *)(iVar3 + 8) == -1) {
    FUN_00c77fc0(pcVar2,&local_460);
  }
  else {
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    if (pcVar2 == (char *)(iVar3 + 0xd)) {
      FUN_00a814d0(&local_460,*(int *)(iVar3 + 8));
    }
    else {
      FUN_00c959c0(*(int *)(param_1 + 0x10) + 0xc,*(undefined4 *)(*(int *)(param_1 + 0x10) + 8),
                   &local_460);
    }
  }
  if (local_454 == 0) {
    if ((local_45c != (undefined1 *)0x0) && (local_454 = 0, local_450 != 0)) {
      FUN_00dd48d0(local_45c,0);
    }
    return 0;
  }
  uVar6 = 1;
  local_444 = 0;
  if (0 < local_454) {
    do {
      if ((*(int *)(local_45c + local_444 * 4) == 0) || (local_44c = FUN_00a7c8a0(), local_44c == 0)
         ) {
        uVar6 = 0;
        uVar4 = FUN_00959930(local_400,&DAT_016b0e0c,*(int *)(param_1 + 0x10) + 0xc);
        if (*(int *)(*(int *)(param_1 + 0x10) + 8) == -1) {
          FUN_00dd5650(&DAT_016a9fec,*(int *)(param_1 + 0x10) + 0xc,uVar4);
        }
      }
      else {
        iVar3 = FUN_00a92f90();
        if ((iVar3 == 0) || ((*(uint *)(iVar3 + 0x94) & 1) == 0)) {
LAB_00c965b0:
          uVar6 = 0;
        }
        else {
          pcVar5 = (char *)(*(int *)(param_1 + 0x10) + 0x1c);
          local_448 = (char *)(*(int *)(param_1 + 0x10) + 0x1d);
          pcVar2 = pcVar5;
          do {
            cVar1 = *pcVar2;
            pcVar2 = pcVar2 + 1;
          } while (cVar1 != '\0');
          if (pcVar2 == local_448) {
            uVar6 = uVar6 & *(uint *)(iVar3 + 0x94) >> 1 & 1;
          }
          else {
            iVar3 = FUN_00e33270(pcVar5);
            if (iVar3 == -1) goto LAB_00c965b0;
            iVar3 = FUN_00a92f90();
            uVar6 = uVar6 & *(uint *)(iVar3 + 0x94) >> 1 & 1;
          }
        }
      }
      local_444 = local_444 + 1;
    } while (local_444 < local_454);
  }
  if ((local_45c != (undefined1 *)0x0) && (local_454 = 0, local_450 != 0)) {
    FUN_00dd48d0(local_45c,0);
  }
  return uVar6;
}

// 00C96640  Trigger::cActBoss::vf00  size=6  [class]
undefined * Trigger::cActBoss::vf00(void)

{
  return &DAT_01dbe060;
}

// 00C96650  Trigger::cActBoss::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActBoss::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C96670  Trigger::Act::EFFECT  size=319  [class]
int __fastcall Trigger::Act::EFFECT(int param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 local_54;
  undefined1 *local_50;
  undefined4 local_4c;
  int local_48;
  int local_44;
  undefined1 local_40 [64];
  
  iVar3 = *(int *)(param_1 + 4);
  iVar6 = 0;
  if (iVar3 == 0) {
    FUN_00dd5650(&DAT_016b0e90);
    return 0;
  }
  local_50 = local_40;
  local_54 = 0;
  local_4c = 0x10;
  local_48 = 0;
  local_44 = 0;
  iVar5 = *(int *)(iVar3 + 8);
  pcVar1 = (char *)(iVar3 + 0xc);
  if (iVar5 == -1) {
    FUN_00c77fc0(pcVar1,&local_54);
  }
  else {
    pcVar4 = pcVar1;
    do {
      cVar2 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar2 != '\0');
    if (pcVar4 == (char *)(iVar3 + 0xd)) {
      FUN_00a814d0(&local_54,iVar5);
    }
    else {
      FUN_00c959c0(pcVar1,iVar5,&local_54);
    }
  }
  if (local_48 == 0) {
    if ((local_50 != (undefined1 *)0x0) && (local_48 = 0, local_44 != 0)) {
      FUN_00dd48d0(local_50,0);
    }
    return 0;
  }
  iVar5 = 1;
  if (0 < local_48) {
    do {
      if (*(int *)(local_50 + iVar6 * 4) == 0) {
        if (*(int *)(iVar3 + 8) == -1) {
          FUN_00dd5650(&DAT_016b0e54,pcVar1);
        }
LAB_00c9675f:
        iVar5 = 0;
      }
      else {
        if (iVar5 == 0) goto LAB_00c9675f;
        uVar7 = *(undefined4 *)(iVar3 + 0x1c);
        FUN_00a7c8a0(uVar7);
        iVar5 = FUN_00aa92c0(uVar7);
        if (iVar5 == 0) goto LAB_00c9675f;
        iVar5 = 1;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < local_48);
  }
  if ((local_50 != (undefined1 *)0x0) && (local_48 = 0, local_44 != 0)) {
    FUN_00dd48d0(local_50,0);
  }
  return iVar5;
}

// 00C967C0  Trigger::Act::TURN_OFF  size=266  [class]
undefined4 __fastcall Trigger::Act::TURN_OFF(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 local_54;
  undefined1 *local_50;
  undefined4 local_4c;
  int local_48;
  int local_44;
  undefined1 local_40 [64];
  
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016b0f70);
    return 0;
  }
  iVar1 = *(int *)(param_1 + 4) + 8;
  local_50 = local_40;
  local_54 = 0;
  local_4c = 0x10;
  local_48 = 0;
  local_44 = 0;
  iVar2 = FUN_00c77fc0(iVar1,&local_54);
  if (iVar2 != 0) {
    iVar2 = 0;
    uVar4 = 1;
    if (0 < local_48) {
      do {
        if (*(int *)(local_50 + iVar2 * 4) == 0) {
          FUN_00dd5650(&DAT_016b0efc,iVar1);
          uVar4 = 0;
        }
        else {
          piVar3 = (int *)FUN_00a7c8a0();
          if (piVar3 == (int *)0x0) {
            FUN_00dd5650(&DAT_016b0ebc,iVar1);
            uVar4 = 0;
          }
          else {
            (**(code **)(*piVar3 + 0x20))();
          }
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < local_48);
    }
    if ((local_50 != (undefined1 *)0x0) && (local_48 = 0, local_44 != 0)) {
      FUN_00dd48d0(local_50,0);
    }
    return uVar4;
  }
  FUN_00dd5650(&DAT_016b0f3c,iVar1);
  if ((local_50 != (undefined1 *)0x0) && (local_48 = 0, local_44 != 0)) {
    FUN_00dd48d0(local_50,0);
  }
  return 0;
}

// 00C968D0  Trigger::cActAnimation::vf18  size=990  [class]
bool __fastcall Trigger::cActAnimation::vf18(int param_1)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  bool bVar9;
  undefined *puVar10;
  int iVar11;
  char *local_70;
  int local_64;
  int local_60;
  undefined4 local_54;
  undefined1 *local_50;
  undefined4 local_4c;
  int local_48;
  int local_44;
  undefined1 local_40 [64];
  
  iVar1 = *(int *)(param_1 + 4);
  iVar7 = *(int *)(iVar1 + 4);
  if (iVar7 == 0) {
    local_70 = "ANIM";
  }
  else if (iVar7 == 7) {
    local_70 = "ANIM_LAST";
  }
  else {
    if (iVar7 != 0x4d) {
      FUN_00dd5650(&DAT_016b0f9c);
      return false;
    }
    local_70 = "PL_ANIM";
  }
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016b1124,local_70);
    return false;
  }
  if (*(int *)(iVar1 + 8) == -1) {
    pcVar3 = (char *)(iVar1 + 0xc);
    do {
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    if (pcVar3 == (char *)(iVar1 + 0xd)) {
      FUN_00dd5650(&DAT_016b10fc,local_70);
      return false;
    }
  }
  local_50 = local_40;
  local_54 = 0;
  local_4c = 0x10;
  local_48 = 0;
  local_44 = 0;
  iVar7 = *(int *)(iVar1 + 8);
  if (iVar7 == -1) {
    iVar7 = iVar1 + 0xc;
    FUN_00c77fc0(iVar7,&local_54);
    if (local_48 != 0) goto LAB_00c96a20;
    puVar10 = &DAT_016b108c;
  }
  else {
    pcVar3 = (char *)(iVar1 + 0xc);
    do {
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    if (pcVar3 == (char *)(iVar1 + 0xd)) {
      FUN_00a814d0(&local_54,iVar7);
    }
    else {
      FUN_00c959c0((char *)(iVar1 + 0xc),iVar7,&local_54);
    }
    if (local_48 != 0) {
LAB_00c96a20:
      local_64 = iVar1 + 0xc;
      bVar9 = true;
      local_60 = 0;
      if (0 < local_48) {
        do {
          iVar7 = *(int *)(local_50 + local_60 * 4);
          iVar11 = local_64;
          if (iVar7 == 0) {
            if (*(int *)(iVar1 + 8) == -1) {
              puVar10 = &DAT_016b102c;
            }
            else {
              puVar10 = &DAT_016b105c;
              iVar11 = *(int *)(iVar1 + 8);
            }
LAB_00c96c4d:
            FUN_00dd5650(puVar10,local_70,iVar11);
            bVar9 = false;
          }
          else {
            iVar4 = FUN_00a7c8a0();
            if (iVar4 == 0) {
LAB_00c96c29:
              if (*(int *)(iVar1 + 8) == -1) {
                puVar10 = &DAT_016b0fc4;
              }
              else {
                puVar10 = &DAT_016b0ff8;
                iVar11 = *(int *)(iVar1 + 8);
              }
              goto LAB_00c96c4d;
            }
            if (*(int *)(*(int *)(param_1 + 4) + 4) == 0x4d) {
              bVar9 = false;
              iVar4 = FUN_009f9350(*(undefined4 *)(iVar4 + 0x4b0));
              if (iVar4 == 1) {
                piVar5 = (int *)FUN_00dd3500(0x10,&DAT_01b7bd48);
                piVar8 = (int *)0x0;
                if (piVar5 != (int *)0x0) {
                  piVar5[1] = 0;
                  piVar5[2] = 0;
                  piVar5[3] = 0;
                  *piVar5 = (int)cTriggerTask_PlAnim::vftable;
                  piVar8 = piVar5;
                }
                (**(code **)(*piVar8 + 4))();
                FUN_00c83e90(iVar7);
                piVar8[1] = *(int *)(*(int *)(param_1 + 4) + 4);
                cVar2 = FUN_00c84760(piVar8);
                if (cVar2 == '\0') {
                  (**(code **)*piVar8)(1);
                }
                bVar9 = cVar2 != '\0';
              }
            }
            if (*(int *)(param_1 + 0xc) != 0) {
              FUN_00a92f90();
              iVar7 = iVar1 + 0x1c;
              iVar4 = FUN_00e33270(iVar7);
              if (iVar4 != -1) {
                iVar6 = FUN_00a957d0(iVar7);
                if ((float)iVar6 != 0.0) {
                  FUN_00aa4940(iVar7,iVar4,0x3e4ccccd,0x3f800000,0,(float)iVar6,0x3f800000);
                }
              }
            }
            if (*(int *)(*(int *)(param_1 + 4) + 4) == 7) {
              iVar7 = FUN_00aa4940(iVar1 + 0x1c,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
              if (iVar7 == -1) goto LAB_00c96c29;
              iVar4 = FUN_00a957b0(iVar7);
              iVar7 = FUN_00a9f2b0(iVar1 + 0x1c,iVar7,0,0x3f800000,0,(float)iVar4,0);
            }
            else {
              iVar7 = FUN_00aa4940(iVar1 + 0x1c,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
            }
            if (iVar7 == -1) goto LAB_00c96c29;
          }
          local_60 = local_60 + 1;
        } while (local_60 < local_48);
      }
      if ((local_50 != (undefined1 *)0x0) && (local_48 = 0, local_44 != 0)) {
        FUN_00dd48d0(local_50,0);
      }
      return bVar9;
    }
    iVar7 = *(int *)(iVar1 + 8);
    puVar10 = &DAT_016b10c4;
  }
  FUN_00dd5650(puVar10,local_70,iVar7);
  FUN_00948120();
  return false;
}

// 00C96CB0  Trigger::Act::DEL  size=255  [class]
undefined4 __fastcall Trigger::Act::DEL(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_54;
  undefined1 *local_50;
  undefined4 local_4c;
  int local_48;
  int local_44;
  undefined1 local_40 [64];
  
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016b11c4);
    return 0;
  }
  iVar1 = *(int *)(param_1 + 4) + 8;
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016b1198);
    return 0;
  }
  local_50 = local_40;
  local_54 = 0;
  local_4c = 0x10;
  local_48 = 0;
  local_44 = 0;
  iVar1 = FUN_00c77fc0(iVar1,&local_54);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016b1168);
    if ((local_50 != (undefined1 *)0x0) && (local_48 = 0, local_44 != 0)) {
      FUN_00dd48d0(local_50,0);
    }
    return 0;
  }
  iVar1 = 0;
  uVar2 = 1;
  if (0 < local_48) {
    do {
      if (*(int *)(local_50 + iVar1 * 4) == 0) {
        FUN_00dd5650(&DAT_016b1168);
        uVar2 = 0;
      }
      else {
        FUN_00a805f0();
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < local_48);
  }
  if ((local_50 != (undefined1 *)0x0) && (local_48 = 0, local_44 != 0)) {
    FUN_00dd48d0(local_50,0);
  }
  return uVar2;
}

// 00C96DB0  Trigger::Act::POS  size=464  [class]
undefined4 __fastcall Trigger::Act::POS(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int local_98;
  int local_94;
  undefined4 local_90;
  float local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  float local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_64;
  undefined1 *local_60;
  undefined4 local_5c;
  int local_58;
  int local_54;
  undefined1 local_50 [76];
  
  iVar4 = *(int *)(param_1 + 4);
  local_94 = iVar4;
  if (iVar4 == 0) {
    FUN_00dd5650(&DAT_016b12bc);
    return 0;
  }
  iVar1 = FUN_00c78580(*(undefined4 *)(iVar4 + 8),&local_90);
  if (iVar1 != 0) {
    local_80 = local_90;
    local_60 = local_50;
    local_7c = local_8c;
    iVar4 = iVar4 + 0x10;
    local_78 = local_88;
    local_64 = 0;
    local_74 = 0x3f800000;
    local_5c = 0x10;
    local_58 = 0;
    local_54 = 0;
    iVar1 = FUN_00c77fc0(iVar4,&local_64);
    if (iVar1 != 0) {
      uVar3 = 1;
      local_98 = 0;
      if (0 < local_58) {
        do {
          if (*(int *)(local_60 + local_98 * 4) == 0) {
            FUN_00dd5650(&DAT_016b1228,iVar4);
            uVar3 = 0;
          }
          else {
            piVar2 = (int *)FUN_00a7c8a0();
            if (piVar2 == (int *)0x0) {
              FUN_00dd5650(&DAT_016b11ec,iVar4);
              uVar3 = 0;
            }
            else {
              local_90 = 0;
              local_8c = *(float *)(local_94 + 0xc) * 0.017453292;
              local_88 = 0;
              local_84 = 0x3f800000;
              (**(code **)(*piVar2 + 0x6c))(&local_80);
              (**(code **)(*piVar2 + 0x88))(&local_94);
            }
          }
          local_98 = local_98 + 1;
        } while (local_98 < local_58);
      }
      if ((local_60 != (undefined1 *)0x0) && (local_58 = 0, local_54 != 0)) {
        FUN_00dd48d0(local_60,0);
      }
      return uVar3;
    }
    FUN_00dd5650(&DAT_016b125c,iVar4);
    if ((local_60 != (undefined1 *)0x0) && (local_58 = 0, local_54 != 0)) {
      FUN_00dd48d0(local_60,0);
    }
    return 0;
  }
  FUN_00dd5650(&DAT_016b1290,*(undefined4 *)(iVar4 + 8));
  return 0;
}

// 00C96F90  Trigger::cActSeEntity::vf18  size=426  [class]
int __fastcall Trigger::cActSeEntity::vf18(int param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  bool bVar9;
  undefined *puVar10;
  undefined4 local_54;
  undefined1 *local_50;
  undefined4 local_4c;
  int local_48;
  int local_44;
  undefined1 local_40 [64];
  
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 == 0) {
    FUN_00dd5650(&DAT_016aeec8);
    return 0;
  }
  pbVar3 = (byte *)(iVar2 + 8);
  pbVar6 = &DAT_016416fa;
  do {
    bVar1 = *pbVar3;
    bVar9 = bVar1 < *pbVar6;
    if (bVar1 != *pbVar6) {
LAB_00c96fe1:
      iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_00c96fe6;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar9 = bVar1 < pbVar6[1];
    if (bVar1 != pbVar6[1]) goto LAB_00c96fe1;
    pbVar3 = pbVar3 + 2;
    pbVar6 = pbVar6 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_00c96fe6:
  if (iVar4 == 0) {
    FUN_00dd5650(&DAT_016aeea0);
    return 0;
  }
  pbVar7 = (byte *)(iVar2 + 0x18);
  pbVar6 = &DAT_016416fa;
  pbVar3 = pbVar7;
  do {
    bVar1 = *pbVar3;
    bVar9 = bVar1 < *pbVar6;
    if (bVar1 != *pbVar6) {
LAB_00c97030:
      iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_00c97035;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar9 = bVar1 < pbVar6[1];
    if (bVar1 != pbVar6[1]) goto LAB_00c97030;
    pbVar3 = pbVar3 + 2;
    pbVar6 = pbVar6 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_00c97035:
  if (iVar4 == 0) {
    FUN_00dd5650(&DAT_016b1378);
    return 0;
  }
  local_50 = local_40;
  local_54 = 0;
  local_4c = 0x10;
  local_48 = 0;
  local_44 = 0;
  iVar4 = FUN_00c77fc0(pbVar7,&local_54);
  if (iVar4 == 0) {
    FUN_00dd5650(&DAT_016b134c,pbVar7);
    FUN_00948120();
    return 0;
  }
  iVar4 = 1;
  if (0 < local_48) {
    iVar8 = 0;
    do {
      if (*(int *)(local_50 + iVar8 * 4) == 0) {
        puVar10 = &DAT_016b1314;
LAB_00c970c1:
        FUN_00dd5650(puVar10,pbVar7);
LAB_00c970c9:
        iVar4 = 0;
      }
      else {
        iVar5 = FUN_00a7c800();
        if (iVar5 == 0) {
          puVar10 = &DAT_016b12e4;
          goto LAB_00c970c1;
        }
        if (*(int *)(iVar2 + 0x28) != -1) {
          if (iVar4 != 0) goto LAB_00c97125;
          goto LAB_00c970c9;
        }
        if (iVar4 == 0) goto LAB_00c970c9;
LAB_00c97125:
        iVar4 = FUN_00e5e0c0(iVar2 + 8,iVar5,*(int *)(iVar2 + 0x28),0);
        if (iVar4 == 0) goto LAB_00c970c9;
        iVar4 = 1;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < local_48);
  }
  if ((local_50 != (undefined1 *)0x0) && (local_48 = 0, local_44 != 0)) {
    FUN_00dd48d0(local_50,0);
  }
  return iVar4;
}

// 00C97140  Trigger::Act::EFFECT_ROOM  size=75  [class]
undefined4 __fastcall Trigger::Act::EFFECT_ROOM(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016b13a8);
    return 0;
  }
  uVar2 = FUN_00e01ca0();
  uVar2 = FUN_00e01540(*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc),uVar2);
  return uVar2;
}

// 00C97190  Trigger::Act::RESULTSETDISP  size=139  [__FILE__]
undefined4 __fastcall Trigger::Act::RESULTSETDISP(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 != 0) {
    fVar1 = *(float *)(iVar2 + 0xc);
    *(float *)(param_1 + 0xc) = fVar1;
    if (fVar1 == 0.0) {
      DAT_01dc1308 = 1;
      DAT_01dc1310 = 0;
    }
    iVar3 = *(int *)(iVar2 + 8);
    *(int *)(param_1 + 8) = iVar3;
    if ((iVar3 == 1) || (0.0 < *(float *)(param_1 + 0xc))) {
      FUN_00c950a0(&LAB_00c92d70,0,0,
                   "d:\\project\\prj_020\\p1\\common\\src\\managers\\triggermanager\\actions/TrgActResultSetDisp.cpp"
                   ,0x22);
    }
    if (*(int *)(iVar2 + 8) == 0) {
      DAT_01dc1310 = 1;
    }
    return 1;
  }
  FUN_00dd5650(&DAT_016b1434);
  return 0;
}

// 00C97220  Trigger::Act::SCR_MESH_ON  size=215  [class]
undefined4 __fastcall Trigger::Act::SCR_MESH_ON(int param_1)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 == 0) {
    FUN_00dd5650(&DAT_016b149c);
    return 0;
  }
  if (DAT_01dbd1cc == 0) {
    FUN_00dd5650(&DAT_016b1464);
    return 0;
  }
  *(undefined4 *)(DAT_01dbd1cc + 0xc) = 0;
  iVar6 = DAT_01dbd1cc;
  uVar7 = *(undefined4 *)(iVar2 + 8);
  if (iVar2 + 0xc != 0) {
    piVar3 = (int *)FUN_00c14bb0();
    (**(code **)(*piVar3 + 0x14))(iVar6,iVar2 + 0xc,uVar7);
    if (*(int *)(iVar6 + 0xc) != 0) {
      iVar6 = *(int *)(DAT_01dbd1cc + 4);
      uVar7 = 0;
      if (iVar6 != iVar6 + *(int *)(DAT_01dbd1cc + 0xc) * 4) {
        do {
          iVar4 = FUN_00a7c8a0();
          iVar5 = *(int *)(iVar2 + 0x1c);
          if (((-1 < iVar5) && (iVar5 < *(short *)(iVar4 + 0x324))) &&
             (iVar5 = iVar5 * 0x70 + *(int *)(iVar4 + 800), iVar5 != 0)) {
            puVar1 = (uint *)(iVar5 + 0x38);
            *puVar1 = *puVar1 | 1;
            uVar7 = 1;
          }
          iVar6 = iVar6 + 4;
        } while (iVar6 != *(int *)(DAT_01dbd1cc + 4) + *(int *)(DAT_01dbd1cc + 0xc) * 4);
      }
      return uVar7;
    }
  }
  return 0;
}

// 00C97300  Trigger::Act::SCR_MESH_OFF  size=218  [class]
undefined4 __fastcall Trigger::Act::SCR_MESH_OFF(int param_1)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 == 0) {
    FUN_00dd5650(&DAT_016b1504);
    return 0;
  }
  if (DAT_01dbd1cc != 0) {
    *(undefined4 *)(DAT_01dbd1cc + 0xc) = 0;
    iVar6 = DAT_01dbd1cc;
    uVar7 = *(undefined4 *)(iVar2 + 8);
    if (iVar2 + 0xc != 0) {
      piVar3 = (int *)FUN_00c14bb0();
      (**(code **)(*piVar3 + 0x14))(iVar6,iVar2 + 0xc,uVar7);
      if (*(int *)(iVar6 + 0xc) != 0) {
        iVar6 = *(int *)(DAT_01dbd1cc + 4);
        uVar7 = 0;
        if (iVar6 != iVar6 + *(int *)(DAT_01dbd1cc + 0xc) * 4) {
          do {
            iVar4 = FUN_00a7c8a0();
            iVar5 = *(int *)(iVar2 + 0x1c);
            if (((-1 < iVar5) && (iVar5 < *(short *)(iVar4 + 0x324))) &&
               (iVar5 = iVar5 * 0x70 + *(int *)(iVar4 + 800), iVar5 != 0)) {
              puVar1 = (uint *)(iVar5 + 0x38);
              *puVar1 = *puVar1 & 0xfffffffe;
              uVar7 = 1;
            }
            iVar6 = iVar6 + 4;
          } while (iVar6 != *(int *)(DAT_01dbd1cc + 4) + *(int *)(DAT_01dbd1cc + 0xc) * 4);
        }
        return uVar7;
      }
    }
    return 0;
  }
  FUN_00dd5650(&DAT_016b14cc);
  return 0;
}

// 00C973E0  Trigger::Act::EFFECT_ROOM_LOOP  size=201  [class]
int __fastcall Trigger::Act::EFFECT_ROOM_LOOP(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = *(int *)(param_1 + 4);
  iVar6 = 0;
  if (iVar5 == 0) {
    FUN_00dd5650(&DAT_016b1534);
    return 0;
  }
  piVar1 = (int *)FUN_00a6dd90();
  iVar2 = (**(code **)(*piVar1 + 0x9c))(*(undefined4 *)(iVar5 + 8));
  if (iVar2 != 0) {
    iVar2 = FUN_00dd3500(0xb0,&DAT_01b7bd48);
    if (iVar2 != 0) {
      puVar3 = (undefined4 *)cEspControler::cEspControler();
      if (puVar3 != (undefined4 *)0x0) {
        uVar4 = FUN_00e01eb0(puVar3);
        iVar6 = FUN_00e01540(*(undefined4 *)(iVar5 + 8),*(undefined4 *)(iVar5 + 0xc),uVar4);
        if (iVar6 == 1) {
          uVar4 = FUN_00e03ea0(iVar5 + 0x10);
          iVar5 = FUN_00a71770(puVar3,uVar4);
          return iVar5;
        }
        (**(code **)*puVar3)(1);
      }
    }
  }
  return iVar6;
}

// 00C974B0  Trigger::Act::OBJECT_DISP_2  size=603  [class]
int __fastcall Trigger::Act::OBJECT_DISP_2(int param_1)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  byte *pbVar7;
  int iVar8;
  undefined4 uVar9;
  byte *pbVar10;
  int iVar11;
  int *piVar12;
  bool bVar13;
  int local_464;
  undefined4 local_45c;
  undefined1 *local_458;
  undefined4 local_454;
  int local_450;
  int local_44c;
  int local_448;
  int local_444;
  undefined1 local_440 [64];
  undefined1 local_400 [1024];
  
  iVar4 = *(int *)(param_1 + 4);
  if (iVar4 == 0) {
    FUN_00dd5650(&DAT_016b15a0);
    return 0;
  }
  local_458 = local_440;
  local_45c = 0;
  local_454 = 0x10;
  local_450 = 0;
  local_44c = 0;
  iVar11 = *(int *)(iVar4 + 8);
  pcVar5 = (char *)(iVar4 + 0xc);
  if (iVar11 == -1) {
    FUN_00c77fc0(pcVar5,&local_45c);
  }
  else {
    do {
      cVar2 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
    if (pcVar5 == (char *)(iVar4 + 0xd)) {
      FUN_00a814d0(&local_45c,iVar11);
    }
    else {
      FUN_00c959c0(iVar4 + 0xc,iVar11,&local_45c);
    }
  }
  if (local_450 == 0) {
    if ((local_458 != (undefined1 *)0x0) && (local_450 = 0, local_44c != 0)) {
      FUN_00dd48d0(local_458,0);
    }
    return 0;
  }
  local_464 = 1;
  local_444 = 0;
  if (0 < local_450) {
    do {
      if ((*(int *)(local_458 + local_444 * 4) == 0) ||
         (piVar6 = (int *)FUN_00a7c800(), piVar6 == (int *)0x0)) {
        if (*(int *)(iVar4 + 8) == -1) {
          FUN_00dd5650(&DAT_016a9fec,iVar4 + 0xc,&DAT_016b1568);
        }
LAB_00c976cd:
        local_464 = 0;
      }
      else {
        pbVar1 = (byte *)(iVar4 + 0x1c);
        pbVar10 = pbVar1;
        do {
          bVar3 = *pbVar10;
          pbVar10 = pbVar10 + 1;
        } while (bVar3 != 0);
        if (pbVar10 != (byte *)(iVar4 + 0x1d)) {
          iVar11 = 0;
          if (0 < (short)piVar6[0xc9]) {
            local_448 = piVar6[200];
            piVar12 = (int *)(local_448 + 0x60);
            do {
              pbVar10 = *(byte **)(*piVar12 + 0x40);
              pbVar7 = pbVar1;
              if (pbVar10 != (byte *)0x0) {
                do {
                  bVar3 = *pbVar7;
                  bVar13 = bVar3 < *pbVar10;
                  if (bVar3 != *pbVar10) {
LAB_00c97632:
                    iVar8 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
                    goto LAB_00c97637;
                  }
                  if (bVar3 == 0) break;
                  bVar3 = pbVar7[1];
                  bVar13 = bVar3 < pbVar10[1];
                  if (bVar3 != pbVar10[1]) goto LAB_00c97632;
                  pbVar10 = pbVar10 + 2;
                  pbVar7 = pbVar7 + 2;
                } while (bVar3 != 0);
                iVar8 = 0;
LAB_00c97637:
                if (iVar8 == 0) {
                  if ((iVar11 != -1) && (iVar11 = iVar11 * 0x70 + local_448, iVar11 != 0)) {
                    if (*(int *)(iVar4 + 0x2c) == 1) {
                      *(uint *)(iVar11 + 0x38) = *(uint *)(iVar11 + 0x38) | 1;
                    }
                    else {
                      *(uint *)(iVar11 + 0x38) = *(uint *)(iVar11 + 0x38) & 0xfffffffe;
                    }
                    goto LAB_00c9769b;
                  }
                  break;
                }
              }
              iVar11 = iVar11 + 1;
              piVar12 = piVar12 + 0x1c;
            } while (iVar11 < (short)piVar6[0xc9]);
          }
          uVar9 = FUN_00959930(local_400,&DAT_016b1584,pbVar1);
          if (*(int *)(iVar4 + 8) == -1) {
            FUN_00dd5650(&DAT_016a9fec,iVar4 + 0xc,uVar9);
          }
          goto LAB_00c976cd;
        }
        if (*(int *)(iVar4 + 0x2c) == 1) {
          (**(code **)(*piVar6 + 0x1c))();
        }
        else {
          (**(code **)(*piVar6 + 0x20))();
        }
LAB_00c9769b:
        if (local_464 == 0) goto LAB_00c976cd;
        local_464 = 1;
      }
      local_444 = local_444 + 1;
    } while (local_444 < local_450);
  }
  if ((local_458 != (undefined1 *)0x0) && (local_450 = 0, local_44c != 0)) {
    FUN_00dd48d0(local_458,0);
  }
  return local_464;
}

// 00C97720  Trigger::Act::OBJECT_COLLISION_2  size=657  [class]
int __fastcall Trigger::Act::OBJECT_COLLISION_2(int param_1)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  undefined4 uVar9;
  byte *pbVar10;
  int iVar11;
  int *piVar12;
  bool bVar13;
  int local_46c;
  undefined4 local_464;
  undefined1 *local_460;
  undefined4 local_45c;
  int local_458;
  int local_454;
  int local_450;
  int *local_44c;
  int local_448;
  undefined1 local_440 [64];
  undefined1 local_400 [1024];
  
  iVar4 = *(int *)(param_1 + 4);
  local_448 = param_1;
  if (iVar4 == 0) {
    FUN_00dd5650(&DAT_016b15d0);
    return 0;
  }
  local_460 = local_440;
  local_464 = 0;
  local_45c = 0x10;
  local_458 = 0;
  local_454 = 0;
  iVar6 = *(int *)(iVar4 + 8);
  pcVar5 = (char *)(iVar4 + 0xc);
  if (iVar6 == -1) {
    FUN_00c77fc0(pcVar5,&local_464);
  }
  else {
    do {
      cVar2 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
    if (pcVar5 == (char *)(iVar4 + 0xd)) {
      FUN_00a814d0(&local_464,iVar6);
    }
    else {
      FUN_00c959c0(iVar4 + 0xc,iVar6,&local_464);
    }
  }
  if (local_458 == 0) {
    if ((local_460 != (undefined1 *)0x0) && (local_458 = 0, local_454 != 0)) {
      FUN_00dd48d0(local_460,0);
    }
    return 0;
  }
  local_46c = 1;
  local_450 = 0;
  if (0 < local_458) {
    do {
      if ((*(int *)(local_460 + local_450 * 4) == 0) || (iVar6 = FUN_00a7c800(), iVar6 == 0)) {
        if (*(int *)(iVar4 + 8) == -1) {
          FUN_00dd5650(&DAT_016abb44,iVar4 + 0xc,&DAT_016b1568);
        }
LAB_00c97973:
        local_46c = 0;
      }
      else {
        local_44c = (int *)FUN_00a7c8a0();
        if (local_44c == (int *)0x0) {
          uVar9 = FUN_00959930(local_400,&DAT_016b1584,iVar4 + 0x1c);
          if (*(int *)(iVar4 + 8) == -1) {
            FUN_00dd5650(&DAT_016abb44,iVar4 + 0xc,uVar9);
          }
        }
        else {
          pbVar1 = (byte *)(iVar4 + 0x1c);
          pbVar7 = pbVar1;
          do {
            bVar3 = *pbVar7;
            pbVar7 = pbVar7 + 1;
          } while (bVar3 != 0);
          if (pbVar7 != (byte *)(iVar4 + 0x1d)) {
            iVar11 = 0;
            if (0 < *(short *)(iVar6 + 0x324)) {
              piVar12 = (int *)(*(int *)(iVar6 + 800) + 0x60);
              do {
                pbVar7 = *(byte **)(*piVar12 + 0x40);
                pbVar10 = pbVar1;
                if (pbVar7 != (byte *)0x0) {
                  do {
                    bVar3 = *pbVar10;
                    bVar13 = bVar3 < *pbVar7;
                    if (bVar3 != *pbVar7) {
LAB_00c978b1:
                      iVar8 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
                      goto LAB_00c978b6;
                    }
                    if (bVar3 == 0) break;
                    bVar3 = pbVar10[1];
                    bVar13 = bVar3 < pbVar7[1];
                    if (bVar3 != pbVar7[1]) goto LAB_00c978b1;
                    pbVar7 = pbVar7 + 2;
                    pbVar10 = pbVar10 + 2;
                  } while (bVar3 != 0);
                  iVar8 = 0;
LAB_00c978b6:
                  if (iVar8 == 0) {
                    if (iVar11 != -1) {
                      (**(code **)(*local_44c + 0xcc))(*(undefined4 *)(iVar4 + 0x2c),iVar11);
                      goto LAB_00c97947;
                    }
                    break;
                  }
                }
                iVar11 = iVar11 + 1;
                piVar12 = piVar12 + 0x1c;
              } while (iVar11 < *(short *)(iVar6 + 0x324));
            }
            uVar9 = FUN_00959930(local_400,&DAT_016b1584,pbVar1);
            OBJECT_COLLISION(iVar4,uVar9);
            goto LAB_00c97973;
          }
          (**(code **)(*local_44c + 200))(*(undefined4 *)(iVar4 + 0x2c));
        }
LAB_00c97947:
        if (local_46c == 0) goto LAB_00c97973;
        local_46c = 1;
      }
      local_450 = local_450 + 1;
    } while (local_450 < local_458);
  }
  if ((local_460 != (undefined1 *)0x0) && (local_458 = 0, local_454 != 0)) {
    FUN_00dd48d0(local_460,0);
  }
  return local_46c;
}

// 00C979C0  Trigger::cActEffectOff::vf18  size=328  [class]
undefined4 __fastcall Trigger::cActEffectOff::vf18(int param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 local_54;
  undefined1 *local_50;
  undefined4 local_4c;
  int local_48;
  int local_44;
  undefined1 local_40 [64];
  
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    FUN_00dd5650(&DAT_016b1604);
    return 0;
  }
  local_50 = local_40;
  local_54 = 0;
  local_4c = 0x10;
  local_48 = 0;
  local_44 = 0;
  iVar6 = *(int *)(iVar3 + 8);
  pcVar1 = (char *)(iVar3 + 0xc);
  if (iVar6 == -1) {
    FUN_00c77fc0(pcVar1,&local_54);
  }
  else {
    pcVar4 = pcVar1;
    do {
      cVar2 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar2 != '\0');
    if (pcVar4 == (char *)(iVar3 + 0xd)) {
      FUN_00a814d0(&local_54,iVar6);
    }
    else {
      FUN_00c959c0(pcVar1,iVar6,&local_54);
    }
  }
  if (local_48 == 0) {
    if ((local_50 != (undefined1 *)0x0) && (local_48 = 0, local_44 != 0)) {
      FUN_00dd48d0(local_50,0);
    }
    return 0;
  }
  iVar6 = 0;
  uVar5 = 1;
  if (0 < local_48) {
    uVar5 = 1;
    do {
      if (*(int *)(local_50 + iVar6 * 4) == 0) {
        if (*(int *)(iVar3 + 8) == -1) {
          FUN_00dd5650(&DAT_016b0e54,pcVar1);
        }
        uVar5 = 0;
      }
      else {
        uVar9 = *(undefined4 *)(iVar3 + 0x24);
        uVar7 = *(undefined4 *)(iVar3 + 0x1c);
        uVar8 = *(undefined4 *)(iVar3 + 0x20);
        FUN_00a7c8a0(uVar7,uVar8,uVar9);
        FUN_00a8ca50(uVar7,uVar8,uVar9);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < local_48);
  }
  if ((local_50 != (undefined1 *)0x0) && (local_48 = 0, local_44 != 0)) {
    FUN_00dd48d0(local_50,0);
  }
  return uVar5;
}

// 00C97B10  Trigger::Act::VR_GOAL_POINT  size=755  [class]
undefined4 __fastcall Trigger::Act::VR_GOAL_POINT(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  float *pfVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uVar7;
  float local_d0;
  int *local_cc;
  float local_c8;
  int local_c4;
  int local_c0;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  undefined4 local_a0;
  float local_9c;
  undefined4 local_98;
  undefined4 local_94;
  int local_90 [20];
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  float local_30;
  undefined4 local_2c;
  
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 == 0) {
    FUN_00dd5650(&DAT_016b1684);
    return 0;
  }
  iVar1 = FUN_00c78580(*(undefined4 *)(iVar2 + 8),&local_b0);
  if (iVar1 != 0) {
    uVar5 = 1;
    iVar1 = FUN_00d467a0();
    if ((iVar1 != 0) && (DAT_018b9174 == 0xd30)) {
      uVar7 = 0xd6040;
      uVar5 = FUN_00e03ea0(&DAT_016b164c,0xd6040);
      iVar1 = FUN_00a18d70(uVar5,uVar7);
      if (iVar1 != 0) {
        if (*(int *)(iVar2 + 0xc) == 0) {
          iVar2 = FUN_00a7c7e0();
          if (iVar2 != 0) {
            uVar5 = FUN_00a7c8a0();
            iVar2 = FUN_00c83b80(uVar5);
            if (iVar2 != 0) {
              FUN_006042f0(0);
              return 1;
            }
          }
        }
        else {
          iVar2 = FUN_00a7c7e0();
          if (iVar2 != 0) {
            uVar5 = FUN_00a7c8a0();
            piVar3 = (int *)FUN_00c83b80(uVar5);
            if (piVar3 != (int *)0x0) {
              local_d0 = local_b0;
              local_cc = (int *)local_ac;
              local_c8 = local_a8;
              local_c4 = 0x3f800000;
              local_a0 = 0;
              local_9c = local_a4;
              local_98 = 0;
              local_94 = 0x3f800000;
              (**(code **)(*piVar3 + 0x7c))(&local_d0,&local_a0);
              FUN_006042f0(1);
              return 1;
            }
          }
        }
      }
      return 0;
    }
    if (*(int *)(iVar2 + 0xc) != 1) {
      local_cc = local_90;
      local_d0 = 0.0;
      local_c8 = 2.24208e-44;
      local_c4 = 0;
      local_c0 = 0;
      FUN_00c77fc0("Id:Bm0296",&local_d0);
      piVar3 = local_cc;
      if (local_c4 < 1) {
        uVar5 = 0;
      }
      else {
        piVar6 = local_cc;
        if (local_cc != local_cc + local_c4) {
          do {
            if (((((*piVar6 != 0) &&
                  (pfVar4 = (float *)FUN_00a7c8b0(), piVar3 = local_cc, local_b0 == *pfVar4)) &&
                 (local_ac == pfVar4[1])) &&
                ((local_a8 == pfVar4[2] &&
                 (pfVar4 = (float *)FUN_00a7c8d0(), piVar3 = local_cc, *pfVar4 == 0.0)))) &&
               ((local_a4 == pfVar4[1] && (pfVar4[2] == 0.0)))) {
              FUN_00a805f0();
              piVar3 = local_cc;
            }
            piVar6 = piVar6 + 1;
          } while (piVar6 != piVar3 + local_c4);
        }
      }
      if ((piVar3 != (int *)0x0) && (local_c4 = 0, local_c0 != 0)) {
        FUN_00dd48d0(piVar3,0);
      }
      return uVar5;
    }
    FUN_0040b190();
    local_40 = local_b0;
    local_3c = local_ac;
    local_38 = local_a8;
    local_34 = 0;
    local_30 = local_a4;
    local_2c = 0;
    FUN_00a82090("goalPoint",0xd0296,local_90);
    return 1;
  }
  FUN_00dd5650(&DAT_016b1654);
  return 0;
}

// 00C97E10  Trigger::Act::FADE  size=114  [class]
bool __fastcall Trigger::Act::FADE(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_24;
  int local_20;
  int local_10;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016b16b4);
    return false;
  }
  iVar2 = cFade::set(0,*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc),
                     *(undefined4 *)(iVar1 + 0x10),1,0,0x68);
  if (iVar2 != 0) {
    local_24 = 0;
    local_20 = iVar1;
    local_10 = iVar2;
    FUN_00c95710(&local_24);
  }
  return iVar2 != 0;
}

// 00C97E90  Trigger::Act::SE_OBJ  size=355  [class]
bool __fastcall Trigger::Act::SE_OBJ(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined4 local_54;
  undefined1 *local_50;
  undefined4 local_4c;
  int local_48;
  int local_44;
  undefined1 local_40 [64];
  
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 == 0) {
    FUN_00dd5650(&DAT_016b16dc);
    return false;
  }
  local_50 = local_40;
  local_54 = 0;
  local_4c = 0x10;
  local_48 = 0;
  local_44 = 0;
  iVar5 = *(int *)(iVar2 + 0x28);
  pcVar3 = (char *)(iVar2 + 0x2c);
  if (iVar5 == -1) {
    FUN_00c77fc0(pcVar3,&local_54);
  }
  else {
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    if (pcVar3 == (char *)(iVar2 + 0x2d)) {
      FUN_00a814d0(&local_54,iVar5);
    }
    else {
      FUN_00c959c0(iVar2 + 0x2c,iVar5,&local_54);
    }
  }
  if (local_48 == 0) {
    if ((local_50 != (undefined1 *)0x0) && (local_48 = 0, local_44 != 0)) {
      FUN_00dd48d0(local_50,0);
    }
    return false;
  }
  iVar5 = 0;
  bVar6 = true;
  if (0 < local_48) {
    do {
      if ((*(int *)(local_50 + iVar5 * 4) == 0) || (iVar4 = FUN_00a7c800(), iVar4 == 0)) {
        if (*(int *)(iVar2 + 0x28) == -1) {
          FUN_00dd5650(&DAT_016abfb8,iVar2 + 0x2c,&DAT_016b1568);
        }
        bVar6 = false;
      }
      else {
        iVar4 = FUN_00e5e0c0(iVar2 + 8,iVar4,*(undefined4 *)(iVar2 + 0x4c),0);
        bVar6 = (bVar6 & iVar4 != 0) != 0;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < local_48);
  }
  if ((local_50 != (undefined1 *)0x0) && (local_48 = 0, local_44 != 0)) {
    FUN_00dd48d0(local_50,0);
  }
  return bVar6;
}

// 00C980D0  Trigger::cCondPhaseJump::cCondPhaseJump  size=6021  [class]
int * Trigger::cCondPhaseJump::cCondPhaseJump(int param_1)

{
  int iVar1;
  int *piVar2;
  
  switch(*(undefined4 *)(param_1 + 4)) {
  case 0:
    iVar1 = FUN_00dd3500(0x94,PTR_DAT_018ab998);
    if (iVar1 != 0) {
      piVar2 = (int *)cCondSequence::cCondSequence();
      goto LAB_00c98112;
    }
    break;
  case 1:
    iVar1 = FUN_00dd3500(0x8c,PTR_DAT_018ab998);
    if (iVar1 != 0) {
      piVar2 = (int *)cCondAnd::cCondAnd();
      goto LAB_00c98112;
    }
    break;
  case 2:
    piVar2 = (int *)FUN_00dd3500(0x8c,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondOr::vftable;
      piVar2[0x22] = 0;
      goto LAB_00c98112;
    }
    break;
  case 3:
    iVar1 = FUN_00dd3500(0x18,PTR_DAT_018ab998);
    if (iVar1 != 0) {
      piVar2 = (int *)cCondTime::cCondTime();
      goto LAB_00c98112;
    }
    break;
  case 4:
    piVar2 = (int *)FUN_00dd3500(0x18,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondArea::vftable;
      piVar2[5] = 0;
      goto LAB_00c98112;
    }
    break;
  case 5:
    piVar2 = (int *)FUN_00dd3500(0x28,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondAreaGroup::vftable;
      piVar2[8] = 0;
      goto LAB_00c98112;
    }
    break;
  case 6:
    piVar2 = (int *)FUN_00dd3500(0x38,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondAreaEm::vftable;
      piVar2[5] = 0;
      goto LAB_00c98112;
    }
    break;
  case 7:
    iVar1 = FUN_00dd3500(0xcc,PTR_DAT_018ab998);
    if (iVar1 != 0) {
      piVar2 = (int *)cCondDisorderedSequence::cCondDisorderedSequence();
      goto LAB_00c98112;
    }
    break;
  case 8:
    iVar1 = FUN_00dd3500(0x30,PTR_DAT_018ab998);
    if (iVar1 != 0) {
      piVar2 = (int *)cCondStartAnimation::cCondStartAnimation();
      goto LAB_00c98112;
    }
    break;
  case 9:
    iVar1 = FUN_00dd3500(0x30,PTR_DAT_018ab998);
    if (iVar1 != 0) {
      piVar2 = (int *)cCondEndAnimation::cCondEndAnimation();
      goto LAB_00c98112;
    }
    break;
  case 10:
    piVar2 = (int *)FUN_00dd3500(0x10,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)vftable;
      goto LAB_00c98112;
    }
    break;
  case 0xb:
    piVar2 = (int *)FUN_00dd3500(0x14,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondOnce::vftable;
      piVar2[4] = 0;
      goto LAB_00c98112;
    }
    break;
  case 0xc:
    piVar2 = (int *)FUN_00dd3500(0x10,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondTrue::vftable;
      goto LAB_00c98112;
    }
    break;
  case 0xd:
    iVar1 = FUN_00dd3500(0x20,PTR_DAT_018ab998);
    if (iVar1 != 0) {
      piVar2 = (int *)cCondIsDoorOpen::cCondIsDoorOpen();
      goto LAB_00c98112;
    }
    break;
  case 0xe:
    piVar2 = (int *)FUN_00dd3500(0x10,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondPlayerEngGaugeFull::vftable;
      goto LAB_00c98112;
    }
    break;
  case 0xf:
    iVar1 = FUN_00dd3500(0x28,PTR_DAT_018ab998);
    if (iVar1 != 0) {
      piVar2 = (int *)cCondIsScrMeshOn::cCondIsScrMeshOn();
      goto LAB_00c98112;
    }
    break;
  case 0x10:
    iVar1 = FUN_00dd3500(0x28,PTR_DAT_018ab998);
    if (iVar1 != 0) {
      piVar2 = (int *)cCondIsScrMeshOff::cCondIsScrMeshOff();
      goto LAB_00c98112;
    }
    break;
  case 0x11:
    iVar1 = FUN_00dd3500(0x24,PTR_DAT_018ab998);
    if (iVar1 != 0) {
      piVar2 = (int *)cCondIsScrCollisionOn::cCondIsScrCollisionOn();
      goto LAB_00c98112;
    }
    break;
  case 0x12:
    piVar2 = (int *)FUN_00dd3500(0x18,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondAreaOut::vftable;
      piVar2[5] = 0;
      goto LAB_00c98112;
    }
    break;
  case 0x13:
    piVar2 = (int *)FUN_00dd3500(0x28,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondAreaGroupOut::vftable;
      piVar2[8] = 0;
      goto LAB_00c98112;
    }
    break;
  case 0x14:
    piVar2 = (int *)FUN_00dd3500(0x38,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondAreaEmOut::vftable;
      piVar2[5] = 0;
      goto LAB_00c98112;
    }
    break;
  case 0x15:
    piVar2 = (int *)FUN_00dd3500(0x20,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[5] = 0;
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondEnemyFinishByNumber::vftable;
      piVar2[7] = 0;
      goto LAB_00c98112;
    }
    break;
  case 0x16:
    iVar1 = FUN_00dd3500(0x24,PTR_DAT_018ab998);
    if (iVar1 != 0) {
      piVar2 = (int *)cCondEnemyFinishByName::cCondEnemyFinishByName();
      goto LAB_00c98112;
    }
    break;
  case 0x17:
    piVar2 = (int *)FUN_00dd3500(0x1c,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondEnemyCountByNumber::vftable;
      piVar2[4] = 0;
      piVar2[6] = -1;
      goto LAB_00c98112;
    }
    break;
  case 0x18:
    iVar1 = FUN_00dd3500(0x20,PTR_DAT_018ab998);
    if (iVar1 != 0) {
      piVar2 = (int *)cCondEnemyCountByName::cCondEnemyCountByName();
      goto LAB_00c98112;
    }
    break;
  case 0x19:
    piVar2 = (int *)FUN_00dd3500(0x40,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondInCamera::vftable;
      piVar2[4] = 0;
      piVar2[5] = 0;
      goto LAB_00c98112;
    }
    break;
  case 0x1a:
    piVar2 = (int *)FUN_00dd3500(0x40,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondOutCamera::vftable;
      piVar2[4] = 0;
      piVar2[5] = 0;
      goto LAB_00c98112;
    }
    break;
  case 0x1b:
    piVar2 = (int *)FUN_00dd3500(0x20,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[5] = 0;
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondEnemyFinishHP0ByNumber::vftable;
      piVar2[7] = 0;
      goto LAB_00c98112;
    }
    break;
  case 0x1c:
    iVar1 = FUN_00dd3500(0x24,PTR_DAT_018ab998);
    if (iVar1 != 0) {
      piVar2 = (int *)cCondEnemyFinishHP0ByName::cCondEnemyFinishHP0ByName();
      goto LAB_00c98112;
    }
    break;
  case 0x1d:
    piVar2 = (int *)FUN_00dd3500(0x1c,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondEnemyCountHP0ByNumber::vftable;
      piVar2[4] = 0;
      piVar2[6] = -1;
      goto LAB_00c98112;
    }
    break;
  case 0x1e:
    piVar2 = (int *)FUN_00dd3500(0x1c,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondEnemyCountHP0ByName::vftable;
      piVar2[4] = 0;
      piVar2[6] = 0;
      goto LAB_00c98112;
    }
    break;
  case 0x1f:
    piVar2 = (int *)FUN_00dd3500(0x14,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondFlag::vftable;
      piVar2[4] = -1;
      goto LAB_00c98112;
    }
    break;
  case 0x20:
    piVar2 = (int *)FUN_00dd3500(0x14,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondIsSubstage::vftable;
      piVar2[4] = 0;
      goto LAB_00c98112;
    }
    break;
  case 0x21:
    piVar2 = (int *)FUN_00dd3500(0x14,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondPastSubstage::vftable;
      piVar2[4] = 0;
      goto LAB_00c98112;
    }
    break;
  case 0x22:
    piVar2 = (int *)FUN_00dd3500(0x14,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondNowPastSubstage::vftable;
      piVar2[4] = 0;
      goto LAB_00c98112;
    }
    break;
  case 0x23:
    piVar2 = (int *)FUN_00dd3500(0x10,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondPlayerHpGaugeFull::vftable;
      goto LAB_00c98112;
    }
    break;
  case 0x24:
    piVar2 = (int *)FUN_00dd3500(0x14,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondEnemyNotSetByNumber::vftable;
      goto LAB_00c98112;
    }
    break;
  case 0x25:
    piVar2 = (int *)FUN_00dd3500(0x14,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondEnemyNotSetByName::vftable;
      piVar2[4] = 0;
      goto LAB_00c98112;
    }
    break;
  case 0x26:
    piVar2 = (int *)FUN_00dd3500(0x14,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondNotFlag::vftable;
      piVar2[4] = -1;
      goto LAB_00c98112;
    }
    break;
  case 0x27:
    iVar1 = FUN_00dd3500(0x20,PTR_DAT_018ab998);
    if (iVar1 != 0) {
      piVar2 = (int *)cCondIsDoorClose::cCondIsDoorClose();
      goto LAB_00c98112;
    }
    break;
  case 0x28:
    piVar2 = (int *)FUN_00dd3500(0x14,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondPlayerHpGaugeState::vftable;
      goto LAB_00c98112;
    }
    break;
  case 0x29:
    piVar2 = (int *)FUN_00dd3500(0x14,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondChainBreak::vftable;
      goto LAB_00c98112;
    }
    break;
  case 0x2a:
    piVar2 = (int *)FUN_00dd3500(0x14,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondPlayerDie::vftable;
      goto LAB_00c98112;
    }
    break;
  case 0x2b:
    goto LAB_00c988c4;
  case 0x2c:
    goto LAB_00c988f4;
  case 0x2d:
    piVar2 = (int *)FUN_00dd3500(0x18,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondBehaviorInstruction::vftable;
      goto LAB_00c98112;
    }
    break;
  case 0x2e:
    piVar2 = (int *)FUN_00dd3500(0x10,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondConversation::vftable;
      goto LAB_00c98112;
    }
    break;
  case 0x2f:
    piVar2 = (int *)FUN_00dd3500(0x10,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondResultFollowMove::vftable;
      goto LAB_00c98112;
    }
    break;
  case 0x30:
    iVar1 = FUN_00dd3500(0x18,PTR_DAT_018ab998);
    if (iVar1 != 0) {
      piVar2 = (int *)cCondIsLoadRoom::cCondIsLoadRoom();
      goto LAB_00c98112;
    }
    break;
  case 0x31:
    piVar2 = (int *)FUN_00dd3500(0x14,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondHackStart::vftable;
      goto LAB_00c98112;
    }
    break;
  case 0x32:
    piVar2 = (int *)FUN_00dd3500(0x14,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondPlayerEnergyGaugeState::vftable;
      goto LAB_00c98112;
    }
    break;
  case 0x33:
    piVar2 = (int *)FUN_00dd3500(0x14,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondIsEndPlayMovie::vftable;
      goto LAB_00c98112;
    }
    break;
  case 0x34:
  case 0x7f:
    piVar2 = (int *)FUN_00dd3500(0x14,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondGimmick::vftable;
      goto LAB_00c98112;
    }
    break;
  case 0x35:
    iVar1 = FUN_00dd3500(0x30,PTR_DAT_018ab998);
    if (iVar1 != 0) {
      piVar2 = (int *)cCondIsFileExist::cCondIsFileExist();
      goto LAB_00c98112;
    }
    break;
  case 0x36:
    iVar1 = FUN_00dd3500(0x30,PTR_DAT_018ab998);
    if (iVar1 != 0) {
      piVar2 = (int *)cCondIsNotFileExist::cCondIsNotFileExist();
      goto LAB_00c98112;
    }
    break;
  case 0x37:
    piVar2 = (int *)FUN_00dd3500(0x14,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondGameFlag::vftable;
      piVar2[4] = -1;
      goto LAB_00c98112;
    }
    break;
  case 0x38:
    piVar2 = (int *)FUN_00dd3500(0x14,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondNotGameFlag::vftable;
      piVar2[4] = -1;
      goto LAB_00c98112;
    }
    break;
  case 0x39:
LAB_00c988c4:
    piVar2 = (int *)FUN_00dd3500(0x18,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondRoomEvent::vftable;
      goto LAB_00c98112;
    }
    break;
  case 0x3a:
LAB_00c988f4:
    piVar2 = (int *)FUN_00dd3500(0x18,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondRoomEventEnd::vftable;
      piVar2[5] = 0;
      goto LAB_00c98112;
    }
    break;
  case 0x3b:
  case 0x80:
    piVar2 = (int *)FUN_00dd3500(0x20,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondCodecSeqEnd::vftable;
      goto LAB_00c98112;
    }
    break;
  case 0x3c:
    piVar2 = (int *)FUN_00dd3500(0x1c,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondEnemyEntityCountByNumber::vftable;
      piVar2[4] = 0;
      piVar2[6] = -1;
      goto LAB_00c98112;
    }
    break;
  case 0x3d:
    iVar1 = FUN_00dd3500(0x20,PTR_DAT_018ab998);
    if (iVar1 != 0) {
      piVar2 = (int *)cCondEnemyEntityCountByName::cCondEnemyEntityCountByName();
      goto LAB_00c98112;
    }
    break;
  case 0x3e:
    piVar2 = (int *)FUN_00dd3500(0x1c,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondEnemyEntityCountHP0ByNumber::vftable;
      piVar2[4] = 0;
      piVar2[6] = -1;
      goto LAB_00c98112;
    }
    break;
  case 0x3f:
    iVar1 = FUN_00dd3500(0x20,PTR_DAT_018ab998);
    if (iVar1 != 0) {
      piVar2 = (int *)cCondEnemyEntityCountHP0ByName::cCondEnemyEntityCountHP0ByName();
      goto LAB_00c98112;
    }
    break;
  case 0x40:
    goto LAB_00c98c43;
  case 0x41:
LAB_00c98c43:
    piVar2 = (int *)FUN_00dd3500(0x14,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondRoomEventNotEnd::vftable;
      goto LAB_00c98112;
    }
    break;
  case 0x42:
    iVar1 = FUN_00dd3500(0x1c,PTR_DAT_018ab998);
    if (iVar1 != 0) {
      piVar2 = (int *)cCondEnemyGroupFinishByNumber::cCondEnemyGroupFinishByNumber();
      goto LAB_00c98112;
    }
    break;
  case 0x43:
    iVar1 = FUN_00dd3500(0x20,PTR_DAT_018ab998);
    if (iVar1 != 0) {
      piVar2 = (int *)cCondEnemyGroupFinishByName::cCondEnemyGroupFinishByName();
      goto LAB_00c98112;
    }
    break;
  case 0x44:
    iVar1 = FUN_00dd3500(0x1c,PTR_DAT_018ab998);
    if (iVar1 != 0) {
      piVar2 = (int *)cCondEnemyGroupFinishHP0ByNumber::cCondEnemyGroupFinishHP0ByNumber();
      goto LAB_00c98112;
    }
    break;
  case 0x45:
    iVar1 = FUN_00dd3500(0x20,PTR_DAT_018ab998);
    if (iVar1 != 0) {
      piVar2 = (int *)cCondEnemyGroupFinishHP0ByName::cCondEnemyGroupFinishHP0ByName();
      goto LAB_00c98112;
    }
    break;
  case 0x46:
    piVar2 = (int *)FUN_00dd3500(0x18,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondEnemyGroupNotSetByNumber::vftable;
      goto LAB_00c98112;
    }
    break;
  case 0x47:
    piVar2 = (int *)FUN_00dd3500(0x18,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondEnemyGroupNotSetByName::vftable;
      piVar2[5] = 0;
      goto LAB_00c98112;
    }
    break;
  case 0x48:
    piVar2 = (int *)FUN_00dd3500(0x10,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondIsUIAnimEnd::vftable;
      goto LAB_00c98112;
    }
    break;
  case 0x49:
    iVar1 = FUN_00dd3500(0x20,PTR_DAT_018ab998);
    if (iVar1 != 0) {
      piVar2 = (int *)cCondEnemyGroupCountByNumber::cCondEnemyGroupCountByNumber();
      goto LAB_00c98112;
    }
    break;
  case 0x4a:
    iVar1 = FUN_00dd3500(0x24,PTR_DAT_018ab998);
    if (iVar1 != 0) {
      piVar2 = (int *)cCondEnemyGroupCountByName::cCondEnemyGroupCountByName();
      goto LAB_00c98112;
    }
    break;
  case 0x4b:
    iVar1 = FUN_00dd3500(0x20,PTR_DAT_018ab998);
    if (iVar1 != 0) {
      piVar2 = (int *)cCondEnemyGroupEntityCountByNumber::cCondEnemyGroupEntityCountByNumber();
      goto LAB_00c98112;
    }
    break;
  case 0x4c:
    iVar1 = FUN_00dd3500(0x24,PTR_DAT_018ab998);
    if (iVar1 != 0) {
      piVar2 = (int *)cCondEnemyGroupEntityCountByName::cCondEnemyGroupEntityCountByName();
      goto LAB_00c98112;
    }
    break;
  case 0x4d:
    iVar1 = FUN_00dd3500(0x20,PTR_DAT_018ab998);
    if (iVar1 != 0) {
      piVar2 = (int *)cCondEnemyGroupCountHP0ByNumber::cCondEnemyGroupCountHP0ByNumber();
      goto LAB_00c98112;
    }
    break;
  case 0x4e:
    iVar1 = FUN_00dd3500(0x20,PTR_DAT_018ab998);
    if (iVar1 != 0) {
      piVar2 = (int *)cCondEnemyGroupCountHP0ByName::cCondEnemyGroupCountHP0ByName();
      goto LAB_00c98112;
    }
    break;
  case 0x4f:
    piVar2 = (int *)FUN_00dd3500(0x20,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondEnemyGroupEntityCountHP0ByNumber::vftable;
      piVar2[4] = 0;
      piVar2[7] = -1;
      goto LAB_00c98112;
    }
    break;
  case 0x50:
    iVar1 = FUN_00dd3500(0x24,PTR_DAT_018ab998);
    if (iVar1 != 0) {
      piVar2 = (int *)cCondEnemyGroupEntityCountHP0ByName::cCondEnemyGroupEntityCountHP0ByName();
      goto LAB_00c98112;
    }
    break;
  case 0x51:
    piVar2 = (int *)FUN_00dd3500(0x14,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondStaFlag::vftable;
      piVar2[4] = -1;
      goto LAB_00c98112;
    }
    break;
  case 0x52:
    piVar2 = (int *)FUN_00dd3500(0x14,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondNotStaFlag::vftable;
      piVar2[4] = -1;
      goto LAB_00c98112;
    }
    break;
  case 0x53:
    piVar2 = (int *)FUN_00dd3500(0x14,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondStpFlag::vftable;
      piVar2[4] = -1;
      goto LAB_00c98112;
    }
    break;
  case 0x54:
    piVar2 = (int *)FUN_00dd3500(0x14,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondNotStpFlag::vftable;
      piVar2[4] = -1;
      goto LAB_00c98112;
    }
    break;
  case 0x55:
    piVar2 = (int *)FUN_00dd3500(0x14,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondHasItem::vftable;
      goto LAB_00c98112;
    }
    break;
  case 0x56:
    piVar2 = (int *)FUN_00dd3500(0x14,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondHasNotItem::vftable;
      goto LAB_00c98112;
    }
    break;
  case 0x57:
    piVar2 = (int *)FUN_00dd3500(0x20,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondIsNowBattle::vftable;
      goto LAB_00c98112;
    }
    break;
  case 0x58:
    piVar2 = (int *)FUN_00dd3500(0x14,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondResultEnd::vftable;
      piVar2[4] = 0;
      goto LAB_00c98112;
    }
    break;
  case 0x59:
    piVar2 = (int *)FUN_00dd3500(0x1c,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondHostageSaved::vftable;
      goto LAB_00c98112;
    }
    break;
  case 0x5a:
    piVar2 = (int *)FUN_00dd3500(0x14,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondLineInfraredHit::vftable;
      goto LAB_00c98112;
    }
    break;
  case 0x5b:
    piVar2 = (int *)FUN_00dd3500(0x14,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondIsBattleAreaOn::vftable;
      goto LAB_00c98112;
    }
    break;
  case 0x5c:
    piVar2 = (int *)FUN_00dd3500(0x20,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[5] = 0;
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondEnemyFinishDebrisByNumber::vftable;
      piVar2[7] = 0;
      goto LAB_00c98112;
    }
    break;
  case 0x5d:
    iVar1 = FUN_00dd3500(0x24,PTR_DAT_018ab998);
    if (iVar1 != 0) {
      piVar2 = (int *)cCondEnemyFinishDebrisByName::cCondEnemyFinishDebrisByName();
      goto LAB_00c98112;
    }
    break;
  case 0x5e:
    iVar1 = FUN_00dd3500(0x1c,PTR_DAT_018ab998);
    if (iVar1 != 0) {
      piVar2 = (int *)cCondEnemyGroupFinishDebrisByNumber::cCondEnemyGroupFinishDebrisByNumber();
      goto LAB_00c98112;
    }
    break;
  case 0x5f:
    iVar1 = FUN_00dd3500(0x20,PTR_DAT_018ab998);
    if (iVar1 != 0) {
      piVar2 = (int *)cCondEnemyGroupFinishDebrisByName::cCondEnemyGroupFinishDebrisByName();
      goto LAB_00c98112;
    }
    break;
  case 0x60:
    piVar2 = (int *)FUN_00dd3500(0x14,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondIsAnimPlay::vftable;
      piVar2[4] = 0;
      goto LAB_00c98112;
    }
    break;
  case 0x61:
    piVar2 = (int *)FUN_00dd3500(0x58,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[0xc] = -0x40800000;
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondTimeSta::vftable;
      piVar2[0x15] = 0;
      goto LAB_00c98112;
    }
    break;
  case 0x62:
    piVar2 = (int *)FUN_00dd3500(0x20,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[5] = 0;
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondEnemyFinishCompByNumber::vftable;
      piVar2[7] = 0;
      goto LAB_00c98112;
    }
    break;
  case 99:
    iVar1 = FUN_00dd3500(0x24,PTR_DAT_018ab998);
    if (iVar1 != 0) {
      piVar2 = (int *)cCondEnemyFinishCompByName::cCondEnemyFinishCompByName();
      goto LAB_00c98112;
    }
    break;
  case 100:
    piVar2 = (int *)FUN_00dd3500(0x20,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[5] = 0;
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondEnemyFinishHPCompByNumber::vftable;
      piVar2[7] = 0;
      goto LAB_00c98112;
    }
    break;
  case 0x65:
    iVar1 = FUN_00dd3500(0x24,PTR_DAT_018ab998);
    if (iVar1 != 0) {
      piVar2 = (int *)cCondEnemyFinishHPCompByName::cCondEnemyFinishHPCompByName();
      goto LAB_00c98112;
    }
    break;
  case 0x66:
    piVar2 = (int *)FUN_00dd3500(0x20,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[5] = 0;
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondEnemyFinishDebrisCompByNumber::vftable;
      piVar2[7] = 0;
      goto LAB_00c98112;
    }
    break;
  case 0x67:
    iVar1 = FUN_00dd3500(0x24,PTR_DAT_018ab998);
    if (iVar1 != 0) {
      piVar2 = (int *)cCondEnemyFinishDebrisCompByName::cCondEnemyFinishDebrisCompByName();
      goto LAB_00c98112;
    }
    break;
  case 0x68:
    piVar2 = (int *)FUN_00dd3500(0x10,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondIsEndAntiqueScroll::vftable;
      goto LAB_00c98112;
    }
    break;
  case 0x69:
    piVar2 = (int *)FUN_00dd3500(0x10,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondIsNowVRMission::vftable;
      goto LAB_00c98112;
    }
    break;
  case 0x6a:
    iVar1 = FUN_00dd3500(0x1c,PTR_DAT_018ab998);
    if (iVar1 != 0) {
      piVar2 = (int *)cCondVrEnemyGroupFinishByNumber::cCondVrEnemyGroupFinishByNumber();
      goto LAB_00c98112;
    }
    break;
  case 0x6b:
    piVar2 = (int *)FUN_00dd3500(0x10,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondIsCodec::vftable;
      goto LAB_00c98112;
    }
    break;
  case 0x6c:
    piVar2 = (int *)FUN_00dd3500(0x10,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondIsAnyCodec::vftable;
      goto LAB_00c98112;
    }
    break;
  case 0x6d:
    iVar1 = FUN_00dd3500(0x94,PTR_DAT_018ab998);
    if (iVar1 != 0) {
      piVar2 = (int *)cCondResetSequence::cCondResetSequence();
      goto LAB_00c98112;
    }
    break;
  case 0x6e:
    piVar2 = (int *)FUN_00dd3500(0x18,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondIsDifficulty::vftable;
      goto LAB_00c98112;
    }
    break;
  case 0x6f:
    piVar2 = (int *)FUN_00dd3500(0x10,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondIsZangeki::vftable;
      goto LAB_00c98112;
    }
    break;
  case 0x70:
    piVar2 = (int *)FUN_00dd3500(0x10,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondIsFade::vftable;
      goto LAB_00c98112;
    }
    break;
  case 0x71:
    piVar2 = (int *)FUN_00dd3500(0x14,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondIsFadeEnd::vftable;
      piVar2[4] = 0;
      goto LAB_00c98112;
    }
    break;
  case 0x72:
    piVar2 = (int *)FUN_00dd3500(0x10,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondIsRipperMode::vftable;
      goto LAB_00c98112;
    }
    break;
  case 0x73:
    goto LAB_00c99517;
  case 0x74:
LAB_00c99517:
    piVar2 = (int *)FUN_00dd3500(0x18,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondGenericFlag::vftable;
      piVar2[4] = 0;
      piVar2[5] = 0;
      goto LAB_00c98112;
    }
    break;
  case 0x75:
    piVar2 = (int *)FUN_00dd3500(0x1c,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondEnemyGroupIsCautionLevelByNumber::vftable;
      goto LAB_00c98112;
    }
    break;
  case 0x76:
    piVar2 = (int *)FUN_00dd3500(0x18,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondEnemyIsCautionLevelByNumber::vftable;
      goto LAB_00c98112;
    }
    break;
  case 0x77:
    piVar2 = (int *)FUN_00dd3500(0x18,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondScenarioArea::vftable;
      piVar2[5] = 0;
      goto LAB_00c98112;
    }
    break;
  case 0x78:
    piVar2 = (int *)FUN_00dd3500(0x28,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondScenarioAreaGroup::vftable;
      piVar2[8] = 0;
      goto LAB_00c98112;
    }
    break;
  case 0x79:
    piVar2 = (int *)FUN_00dd3500(0x38,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondScenarioAreaEm::vftable;
      piVar2[5] = 0;
      goto LAB_00c98112;
    }
    break;
  case 0x7a:
    piVar2 = (int *)FUN_00dd3500(0x18,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondScenarioAreaOut::vftable;
      piVar2[5] = 0;
      goto LAB_00c98112;
    }
    break;
  case 0x7b:
    piVar2 = (int *)FUN_00dd3500(0x28,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondScenarioAreaGroupOut::vftable;
      piVar2[8] = 0;
      goto LAB_00c98112;
    }
    break;
  case 0x7c:
    piVar2 = (int *)FUN_00dd3500(0x38,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondScenarioAreaEmOut::vftable;
      piVar2[5] = 0;
      goto LAB_00c98112;
    }
    break;
  case 0x7d:
    piVar2 = (int *)FUN_00dd3500(0x14,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondAreaPlCam::vftable;
      goto LAB_00c98112;
    }
    break;
  case 0x7e:
    piVar2 = (int *)FUN_00dd3500(0x14,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondAreaPlCamOut::vftable;
      goto LAB_00c98112;
    }
    break;
  case 0x81:
    piVar2 = (int *)FUN_00dd3500(0x18,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondKgkArea::vftable;
      piVar2[5] = 0;
      goto LAB_00c98112;
    }
    break;
  case 0x82:
    piVar2 = (int *)FUN_00dd3500(0x14,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondFlagDlc2::vftable;
      piVar2[4] = -1;
      goto LAB_00c98112;
    }
    break;
  case 0x83:
    piVar2 = (int *)FUN_00dd3500(0x14,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondNotFlagDlc2::vftable;
      piVar2[4] = -1;
      goto LAB_00c98112;
    }
    break;
  case 0x84:
    piVar2 = (int *)FUN_00dd3500(0x14,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondFlagDlc3::vftable;
      piVar2[4] = -1;
      goto LAB_00c98112;
    }
    break;
  case 0x85:
    piVar2 = (int *)FUN_00dd3500(0x14,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondNotFlagDlc3::vftable;
      piVar2[4] = -1;
      goto LAB_00c98112;
    }
    break;
  default:
    FUN_00dd5650(&DAT_016b1724,DAT_018b9254,*(undefined4 *)(param_1 + 4));
    return (int *)0x0;
  }
  piVar2 = (int *)0x0;
LAB_00c98112:
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x1c))(param_1);
  }
  return piVar2;
}

// 00C99A70  Trigger::cActCamera::cActCamera  size=7444  [class]
int * Trigger::cActCamera::cActCamera(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  
  uVar1 = *(uint *)(param_1 + 4);
  if (0x200 < uVar1) {
switchD_00c99a90_caseD_c2:
    FUN_00dd5650(&DAT_016b1764,DAT_018b9254,uVar1);
    return (int *)0x0;
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((&DAT_00c9ba90)[uVar1]) {
  case 0:
    goto LAB_00c99a9e;
  case 1:
    piVar3 = (int *)FUN_00dd3500(0xc,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      piVar3[2] = 0;
      *piVar3 = (int)vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 2:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActTeleportExplicit::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 3:
    piVar3 = (int *)FUN_00dd3500(0xc,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActStaFlagOn::vftable;
      piVar3[2] = -1;
      goto LAB_00c99ac1;
    }
    break;
  case 4:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActTerminate::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 5:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActDoorOpen::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 6:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActCamOff::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 7:
LAB_00c99a9e:
    piVar3 = (int *)FUN_00dd3500(0x10,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActAnimation::vftable;
      piVar3[2] = 0;
      piVar3[3] = 0;
      goto LAB_00c99ac1;
    }
    break;
  case 8:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActScrCollisionOn::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 9:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActScrCollisionOff::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 10:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActSoftEvent::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0xb:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActSubphase::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0xc:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActPhase::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0xd:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActBoss::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0xe:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActEnemyByNumber::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0xf:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActEnemyByName::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x10:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActEnemyRetreatByNumber::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x11:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActEnemyRetreatByName::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x12:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActEnemyClearByNumber::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x13:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActEffect::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x14:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActResult::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x15:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActEnemyByNumberForce::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x16:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActEnemyByNameForce::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x17:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActTeleportIndex::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x18:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActEnemyClearByName::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x19:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActTurnOff::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x1a:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActSE::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x1b:
    piVar3 = (int *)FUN_00dd3500(0x10,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActFuncall::vftable;
      piVar3[2] = 0;
      piVar3[3] = 1;
      goto LAB_00c99ac1;
    }
    break;
  case 0x1c:
    goto LAB_00c99eda;
  case 0x1d:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActFollowPath::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x1e:
    piVar3 = (int *)FUN_00dd3500(0xc,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      piVar3[2] = 0;
      *piVar3 = (int)cActAnimationOrigin::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x1f:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActCameraDistance::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x20:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActCameraDistanceOff::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x21:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActCameraFocusOff::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x22:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActCameraFocus::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x23:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActCameraAngle::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x24:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActCameraAngleOff::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x25:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActPhaseSubphase::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x26:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActDoorClose::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x27:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActDebugMessage::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x28:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActStage::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x29:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActSubstage::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x2a:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActText::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x2b:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActFlagOn::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x2c:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActFlagOff::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x2d:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActLoadRoom::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x2e:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActUnloadRoom::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x2f:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActTextOut::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x30:
    goto LAB_00c9a1e5;
  case 0x31:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActPosIndex::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x32:
    piVar3 = (int *)FUN_00dd3500(0xc,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActEmMsg::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x33:
    piVar3 = (int *)FUN_00dd3500(0xc,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActScene::vftable;
      piVar3[2] = 0;
      goto LAB_00c99ac1;
    }
    break;
  case 0x34:
    piVar3 = (int *)FUN_00dd3500(0x14,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActEmMsgDirect::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x35:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActCollision::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x36:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActBgm::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x37:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActBgmSimple::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x38:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActSESimple::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x39:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActSound::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x3a:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActCollisionOff::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x3b:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActSeEntity::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x3c:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActRoomEvent::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x3d:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActEffectRoom::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x3e:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActPlayerDie::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x3f:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActEnemyMove::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x40:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActReqBehaviorInstruction::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x41:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActRaderMap::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x42:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActRadioInfoStart::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x43:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActRadioInfoEnd::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x44:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActConversationStart::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x45:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActConversationEnd::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x46:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActPathWayStart::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x47:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActPathWayEnd::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x48:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActTutorialStart::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x49:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActTutorialEnd::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x4a:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActAreaBarrierOff::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x4b:
    goto LAB_00c9a5fc;
  case 0x4c:
    piVar3 = (int *)FUN_00dd3500(0x10,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActResultSetDisp::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x4d:
    goto LAB_00c9a651;
  case 0x4e:
LAB_00c9a651:
    piVar3 = (int *)FUN_00dd3500(0x10,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActEmAnimation::vftable;
      piVar3[2] = 0;
      piVar3[3] = 0;
      goto LAB_00c99ac1;
    }
    break;
  case 0x4f:
LAB_00c9a5fc:
    piVar3 = (int *)FUN_00dd3500(0x10,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActPlAnimation::vftable;
      piVar3[2] = 0;
      piVar3[3] = 0;
      goto LAB_00c99ac1;
    }
    break;
  case 0x50:
LAB_00c99eda:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActTask::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x51:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActResultSetEndDisp::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x52:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActPlayerDeadDemo::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x53:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActHackEnd::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x54:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActCamFlag::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x55:
    goto LAB_00c9a73a;
  case 0x56:
LAB_00c9a73a:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActObjAttach::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x57:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActQTEButtonDisp::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x58:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActEnemyRequestEnd::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x59:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActEnemyRequestEndByName::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x5a:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActEnemyRequestEndBySubPhase::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x5b:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActEnemyRequestEndAll::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x5c:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActEnemyRequest::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x5d:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActEnemyRequestByName::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x5e:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActEnemyRequestBySubPhase::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x5f:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActMoviePlay::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x60:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActForceBattleFlag::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x61:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActGimmickEnable::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x62:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActFileRead::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 99:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActFileRelease::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 100:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActEnemyFirstRequestEnd::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x65:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActSceneMovie::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x66:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActStopObjectType::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x67:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActMvObjectType::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x68:
    piVar3 = (int *)FUN_00dd3500(0xc,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActGameFlagOn::vftable;
      piVar3[2] = -1;
      goto LAB_00c99ac1;
    }
    break;
  case 0x69:
    piVar3 = (int *)FUN_00dd3500(0xc,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActGameFlagOff::vftable;
      piVar3[2] = -1;
      goto LAB_00c99ac1;
    }
    break;
  case 0x6a:
    piVar3 = (int *)FUN_00dd3500(0xc,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActSendSignal::vftable;
      piVar3[2] = -1;
      goto LAB_00c99ac1;
    }
    break;
  case 0x6b:
    piVar3 = (int *)FUN_00dd3500(0xc,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActSendSignalContext::vftable;
      piVar3[2] = -1;
      goto LAB_00c99ac1;
    }
    break;
  case 0x6c:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActCodecStart::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x6d:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActObjMeshTrans::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x6e:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActPlayerEffectOn::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x6f:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActPlayerEffectOff::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x70:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActQTEButtonDispOff::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x71:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActObjectivePosSet::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x72:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActEnemyGroupByNumber::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x73:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActJammingDispStart::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x74:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActJammingDispEnd::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x75:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActReqGpBehaviorInstruction::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x76:
    piVar3 = (int *)FUN_00dd3500(0xc,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActStaFlagOff::vftable;
      piVar3[2] = -1;
      goto LAB_00c99ac1;
    }
    break;
  case 0x77:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActUIAnimStart::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x78:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActSetNextCodec::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x79:
    piVar3 = (int *)FUN_00dd3500(0xc,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActStpFlagOff::vftable;
      piVar3[2] = -1;
      goto LAB_00c99ac1;
    }
    break;
  case 0x7a:
    piVar3 = (int *)FUN_00dd3500(0xc,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActStpFlagOn::vftable;
      piVar3[2] = -1;
      goto LAB_00c99ac1;
    }
    break;
  case 0x7b:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActSetUIAnimStartNone::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x7c:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActSetGameoverNormalFlag::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x7d:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActScrMeshOn::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x7e:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActScrMeshOff::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x7f:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActVmPlay::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x80:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActItemGet::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x81:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActActionMessageStart::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x82:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActActionMessageFlagClear::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x83:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActResultRecStart::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x84:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActResultRecEnd::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x85:
    iVar2 = FUN_00dd3500(0x84,PTR_DAT_018ab998);
    if (iVar2 != 0) {
      piVar3 = (int *)cActArray::cActArray();
      goto LAB_00c99ac1;
    }
    break;
  case 0x86:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActEffectRoomLoop::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x87:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActEffectRoomLoopOff::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x88:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActMesDispOffSkip::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x89:
    piVar3 = (int *)FUN_00dd3500(0x10,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActEmMsgDirectByNumber::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x8a:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActCodecEnd::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x8b:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActAntiqScrMove::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x8c:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActAntiqScrReqEnd::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x8d:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActBattleAreaOn::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x8e:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActBattleAreaOff::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x8f:
    goto LAB_00c9a1e5;
  case 0x90:
LAB_00c9a1e5:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActEmAnimationByNumber::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x91:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActObjectDisp::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x92:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActDoorLock::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x93:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActObjectCollision::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x94:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActVrComplete::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x95:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActVrMistake::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x96:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActGimmickFinish::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x97:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActGimmickRevert::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x98:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActEnemyHide::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x99:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActEnemyAppear::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x9a:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActGimmickRevivalCancel::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x9b:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActEffectOff::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x9c:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActCodecEndAll::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x9d:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActVrGoalPoint::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x9e:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActFade::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x9f:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActScrMeshOnAll::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0xa0:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActScrMeshOffAll::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0xa1:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActDoorDispOn::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0xa2:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActDoorDispOff::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0xa3:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActAddExp::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0xa4:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActCodecStartForSkip::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0xa5:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActItemDelInstallation::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0xa6:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActItemDelDropAll::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0xa7:
    goto LAB_00c9b3a1;
  case 0xa8:
LAB_00c9b3a1:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActGenericFlag::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0xa9:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActEnemyAppearResetPosByNumber::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0xaa:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActEnemyGroupAppearResetPosByNumber::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0xab:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActEnemyDestroyByNumber::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0xac:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActReqVrStart::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0xad:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActPlayerMaxHp::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0xae:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActPlayerMaxDryCell::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0xaf:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActSeObject::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0xb0:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActItemOnOff::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0xb1:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActNoCodecMenu::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0xb2:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActVrTimerStop::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0xb3:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActCamFocusLock::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0xb4:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActCamFocusLockOff::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0xb5:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActPlKgkPos::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0xb6:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActVrBm6000On::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0xb7:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActVrBm6000Off::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0xb8:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActFlagOnDlc2::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0xb9:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActFlagOffDlc2::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0xba:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActFlagOnDlc3::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0xbb:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActFlagOffDlc3::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0xbc:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActPlKgkStop::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0xbd:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActVrReturn::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0xbe:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActDoorOpenDelay::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0xbf:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActDoorCloseDelay::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0xc0:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActResultRecStartClear::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0xc1:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActReqShotMissile::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0xc2:
    goto switchD_00c99a90_caseD_c2;
  }
  piVar3 = (int *)0x0;
LAB_00c99ac1:
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x1c))(param_1);
  }
  return piVar3;
}

// 00C9BDE0  FUN_00c9bde0  size=307  [callgraph]
void __fastcall FUN_00c9bde0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x6f4) != 0) {
    FUN_00ebdd50(*(int *)(param_1 + 0x6f4));
    *(undefined4 *)(param_1 + 0x6f4) = 0;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_00c90a60();
  FUN_00c84a70();
  iVar2 = DAT_01dbd1cc;
  if (DAT_01dbd1cc != 0) {
    piVar1 = (int *)(DAT_01dbd1cc + 4);
    if (*piVar1 != 0) {
      *(undefined4 *)(DAT_01dbd1cc + 0xc) = 0;
      if (*(int *)(iVar2 + 0x10) != 0) {
        FUN_00dd48d0(*piVar1,0);
        *(undefined4 *)(iVar2 + 0x10) = 0;
      }
      *piVar1 = 0;
      *(undefined4 *)(iVar2 + 8) = 0;
    }
    iVar2 = DAT_01dbd1cc;
    if (DAT_01dbd1cc != 0) {
      piVar1 = (int *)(DAT_01dbd1cc + 4);
      if (*piVar1 != 0) {
        *(undefined4 *)(DAT_01dbd1cc + 0xc) = 0;
        if (*(int *)(iVar2 + 0x10) != 0) {
          FUN_00dd48d0(*piVar1,0);
          *(undefined4 *)(iVar2 + 0x10) = 0;
        }
        *piVar1 = 0;
        *(undefined4 *)(iVar2 + 8) = 0;
      }
      FUN_00dd4920(iVar2);
      DAT_01dbd1cc = 0;
    }
  }
  FUN_00c95690();
  FUN_00c845e0();
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    if (*(int *)(param_1 + 0x24) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x18),0);
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    *(undefined4 *)(param_1 + 0x34) = 0;
    if (*(int *)(param_1 + 0x38) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x2c),0);
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  FUN_00c84a70();
  FUN_00c90500();
  return;
}

// 00C9BF20  FUN_00c9bf20  size=146  [callgraph]
void __fastcall FUN_00c9bf20(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x6f4) != 0) {
    FUN_00ebdd50(*(int *)(param_1 + 0x6f4));
    *(undefined4 *)(param_1 + 0x6f4) = 0;
  }
  iVar1 = FUN_00c91130(param_1 + 0x14,*(undefined4 *)(param_1 + 0x6f0));
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016b17e8);
  }
  iVar1 = FUN_00c91130(param_1 + 0x28,*(undefined4 *)(param_1 + 0x6f0));
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016b17a4);
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_00c90a60();
  FUN_00c84a70();
  *(undefined4 *)(param_1 + 0x3c) = DAT_018ab9a0;
  FUN_00c84a70();
  return;
}

// 00C9BFC0  FUN_00c9bfc0  size=179  [callgraph]
void __fastcall FUN_00c9bfc0(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  if (((DAT_01bea070._2_1_ & 1) == 0) && (*(int *)(param_1 + 0x700) != 1)) {
    FUN_00c849f0();
    if (DAT_01dbd1d0 != 0) {
      *(undefined4 *)(DAT_01dbd1d8 + 4) = *(undefined4 *)(param_1 + 0x6f8);
      *(undefined4 *)(DAT_01dbd1d8 + 8) = *(undefined4 *)(param_1 + 0x6fc);
    }
    piVar3 = *(int **)(param_1 + 4);
    piVar1 = piVar3 + *(int *)(param_1 + 0xc);
    for (; piVar3 != piVar1; piVar3 = piVar3 + 1) {
      iVar2 = *piVar3;
      if (iVar2 != 0) {
        if ((undefined4 *)(param_1 + 0x6f8) != (undefined4 *)0x0) {
          *(undefined4 *)(iVar2 + 0x34) = *(undefined4 *)(param_1 + 0x6f8);
          *(undefined4 *)(iVar2 + 0x38) = *(undefined4 *)(param_1 + 0x6fc);
        }
        if (*(int *)(*piVar3 + 4) != 4) {
          if (*(int *)(*piVar3 + 8) == 0) {
            FUN_00c788d0();
          }
          else {
            FUN_00c789d0();
          }
        }
      }
    }
    FUN_00c95df0();
    FUN_00c775f0();
    return;
  }
  return;
}

// 00C9C080  FUN_00c9c080  size=463  [callgraph]
undefined4 __thiscall FUN_00c9c080(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar5 = Trigger::cCondPhaseJump::cCondPhaseJump(param_2[5]);
  uVar6 = Trigger::cActCamera::cActCamera(param_2[6]);
  fVar2 = (float)param_2[4];
  iVar10 = param_2[2];
  if (iVar10 == 0) goto LAB_00c9c0f9;
  iVar7 = FUN_00fdc7b0(iVar10,0x26);
  if (iVar7 == iVar10) {
LAB_00c9c0e4:
    local_8 = 1;
  }
  else {
    iVar7 = FUN_00fdc7b0(iVar10,0x40);
    local_8 = 0;
    if (iVar7 == iVar10) goto LAB_00c9c0e4;
  }
  local_4 = FUN_00e03ea0(iVar10);
LAB_00c9c0f9:
  iVar10 = param_2[3];
  uVar11 = local_8;
  uVar8 = local_4;
  if (iVar10 != 0) {
    iVar7 = FUN_00fdc7b0(iVar10,0x26);
    if ((iVar7 == iVar10) || (iVar7 = FUN_00fdc7b0(iVar10,0x40), iVar7 == iVar10)) {
      uVar8 = FUN_00e03ea0(iVar10);
      uVar11 = 1;
    }
    else {
      uVar8 = FUN_00e03ea0(iVar10);
      uVar11 = 0;
    }
  }
  puVar9 = (undefined4 *)FUN_00dd3500(0x3c,PTR_DAT_018ab998);
  if (puVar9 == (undefined4 *)0x0) {
    return 0;
  }
  uVar3 = param_2[1];
  uVar4 = *param_2;
  puVar9[4] = fVar2 * 60.0;
  *puVar9 = uVar4;
  puVar9[5] = fVar2 * 60.0;
  puVar9[2] = uVar3;
  puVar9[0xb] = uVar5;
  puVar9[0xc] = uVar6;
  puVar9[1] = 0;
  puVar9[3] = 0;
  puVar9[10] = 0;
  puVar9[6] = local_8;
  puVar9[7] = local_4;
  puVar9[8] = uVar11;
  puVar9[9] = uVar8;
  if ((int *)puVar9[0xb] != (int *)0x0) {
    (**(code **)(*(int *)puVar9[0xb] + 4))();
  }
  if ((int *)puVar9[0xc] != (int *)0x0) {
    (**(code **)(*(int *)puVar9[0xc] + 8))();
  }
  puVar9[0xe] = 0xbf800000;
  puVar9[0xd] = 0xffffffff;
  if (*(int *)(param_1 + 0x20) < *(int *)(param_1 + 0x1c)) {
    puVar1 = (undefined4 *)(*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x20) * 4);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = puVar9;
    }
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  }
  if (*(int *)(param_1 + 0xc) < *(int *)(param_1 + 8)) {
    puVar1 = (undefined4 *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 0xc) * 4);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = puVar9;
    }
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  }
  puVar9[1] = 1;
  if (((int *)puVar9[0xb] != (int *)0x0) &&
     (iVar10 = (**(code **)(*(int *)puVar9[0xb] + 0xc))(), iVar10 == 0)) {
    puVar9[1] = 4;
  }
  if ((int *)puVar9[0xc] != (int *)0x0) {
    (**(code **)(*(int *)puVar9[0xc] + 0x10))();
  }
  return 1;
}

// 00C9C2B0  FUN_00c9c2b0  size=301  [callgraph]
void FUN_00c9c2b0(undefined4 *param_1,int param_2)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 *puVar12;
  
  puVar12 = param_1;
  if ((param_1 != (undefined4 *)0x0) && (param_1 = (undefined4 *)0x0, 0 < param_2)) {
    do {
      iVar3 = puVar12[8];
      piVar1 = puVar12 + 8;
      uVar8 = Trigger::cCondPhaseJump::cCondPhaseJump(piVar1);
      uVar9 = Trigger::cActCamera::cActCamera((int *)(iVar3 + (int)piVar1));
      fVar2 = (float)puVar12[6];
      puVar10 = (undefined4 *)FUN_00dd3500(0x3c,PTR_DAT_018ab998);
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = (undefined4 *)0x0;
      }
      else {
        uVar4 = puVar12[7];
        uVar5 = puVar12[1];
        uVar6 = *puVar12;
        puVar10[4] = fVar2 * 60.0;
        *puVar10 = uVar6;
        puVar10[2] = uVar5;
        puVar10[10] = uVar4;
        puVar10[1] = 0;
        puVar10[3] = 0;
        puVar10[0xb] = uVar8;
        puVar10[0xc] = uVar9;
        puVar10[6] = puVar12[2];
        puVar10[7] = puVar12[3];
        puVar10[8] = puVar12[4];
        uVar8 = puVar12[5];
        puVar10[5] = fVar2 * 60.0;
        puVar10[9] = uVar8;
      }
      iVar11 = FUN_00c84960(puVar10);
      if (iVar11 == 1) {
        cVar7 = FUN_00c91400(puVar10);
        if (cVar7 != '\x01') {
          if (puVar10 == (undefined4 *)0x0) {
            return;
          }
          FUN_00dd4920(puVar10);
          return;
        }
        puVar12 = (undefined4 *)((int)puVar12 + *(int *)(iVar3 + (int)piVar1) + *piVar1 + 0x20);
      }
      else {
        FUN_00dd5650(&DAT_016b182c,*puVar10);
        FUN_00dd4920(puVar10);
      }
      param_1 = (undefined4 *)((int)param_1 + 1);
    } while ((int)param_1 < param_2);
    return;
  }
  return;
}

// 00C9C3E0  FUN_00c9c3e0  size=287  [callgraph]
void FUN_00c9c3e0(undefined4 *param_1,int param_2)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 *puVar12;
  
  puVar12 = param_1;
  param_1 = (undefined4 *)0x0;
  if (param_2 < 1) {
    return;
  }
  do {
    iVar3 = puVar12[8];
    piVar1 = puVar12 + 8;
    uVar8 = Trigger::cCondPhaseJump::cCondPhaseJump(piVar1);
    uVar9 = Trigger::cActCamera::cActCamera((int *)(iVar3 + (int)piVar1));
    fVar2 = (float)puVar12[6];
    puVar10 = (undefined4 *)FUN_00dd3500(0x3c,PTR_DAT_018ab998);
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      uVar4 = puVar12[7];
      uVar5 = puVar12[1];
      uVar6 = *puVar12;
      puVar10[4] = fVar2 * 60.0;
      *puVar10 = uVar6;
      puVar10[2] = uVar5;
      puVar10[10] = uVar4;
      puVar10[1] = 0;
      puVar10[3] = 0;
      puVar10[0xb] = uVar8;
      puVar10[0xc] = uVar9;
      puVar10[6] = puVar12[2];
      puVar10[7] = puVar12[3];
      puVar10[8] = puVar12[4];
      uVar8 = puVar12[5];
      puVar10[5] = fVar2 * 60.0;
      puVar10[9] = uVar8;
    }
    iVar11 = FUN_00c84960(puVar10);
    if (iVar11 == 1) {
      cVar7 = FUN_00c91480(puVar10);
      if (cVar7 != '\x01') {
        if (puVar10 == (undefined4 *)0x0) {
          return;
        }
        FUN_00dd4920(puVar10);
        return;
      }
      puVar12 = (undefined4 *)((int)puVar12 + *(int *)(iVar3 + (int)piVar1) + *piVar1 + 0x20);
    }
    else {
      FUN_00dd5650(&DAT_016b182c,*puVar10);
      FUN_00dd4920(puVar10);
    }
    param_1 = (undefined4 *)((int)param_1 + 1);
  } while ((int)param_1 < param_2);
  return;
}

// 00C9C500  Trigger::Cond::SEQ_2  size=109  [class]
void __thiscall Trigger::Cond::SEQ_2(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  piVar4 = (int *)(param_2 + 8);
  *(int *)(param_1 + 4) = param_2;
  iVar1 = *piVar4;
  *(int *)(param_1 + 0x8c) = iVar1;
  if (iVar1 < 0x10) {
    iVar3 = 0;
    if (0 < iVar1) {
      piVar5 = (int *)(param_1 + 0x4c);
      do {
        piVar4 = piVar4 + 1;
        iVar1 = *piVar4;
        iVar2 = cCondPhaseJump::cCondPhaseJump(piVar4);
        piVar4 = (int *)((int)piVar4 + iVar1);
        piVar5[-0xf] = iVar2;
        *piVar5 = *piVar4;
        iVar3 = iVar3 + 1;
        piVar5 = piVar5 + 1;
      } while (iVar3 < *(int *)(param_1 + 0x8c));
    }
    return;
  }
  FUN_00dd5650(&DAT_016b1868);
  return;
}

// 00C9C570  Trigger::Cond::DSEQ_2  size=109  [class]
void __thiscall Trigger::Cond::DSEQ_2(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  piVar4 = (int *)(param_2 + 8);
  *(int *)(param_1 + 4) = param_2;
  iVar1 = *piVar4;
  *(int *)(param_1 + 0xc4) = iVar1;
  if (iVar1 < 0x10) {
    iVar3 = 0;
    if (0 < iVar1) {
      piVar5 = (int *)(param_1 + 0x4c);
      do {
        piVar4 = piVar4 + 1;
        iVar1 = *piVar4;
        iVar2 = cCondPhaseJump::cCondPhaseJump(piVar4);
        piVar4 = (int *)((int)piVar4 + iVar1);
        piVar5[-0xf] = iVar2;
        *piVar5 = *piVar4;
        iVar3 = iVar3 + 1;
        piVar5 = piVar5 + 1;
      } while (iVar3 < *(int *)(param_1 + 0xc4));
    }
    return;
  }
  FUN_00dd5650(&DAT_016b1898);
  return;
}

// 00C9C5E0  Trigger::Cond::AND_2  size=109  [class]
void __thiscall Trigger::Cond::AND_2(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  piVar4 = (int *)(param_2 + 8);
  *(int *)(param_1 + 4) = param_2;
  iVar1 = *piVar4;
  *(int *)(param_1 + 0x88) = iVar1;
  if (iVar1 < 0x10) {
    iVar3 = 0;
    if (0 < iVar1) {
      piVar5 = (int *)(param_1 + 0x4c);
      do {
        piVar4 = piVar4 + 1;
        iVar1 = *piVar4;
        iVar2 = cCondPhaseJump::cCondPhaseJump(piVar4);
        piVar4 = (int *)((int)piVar4 + iVar1);
        piVar5[-0xf] = iVar2;
        *piVar5 = *piVar4;
        iVar3 = iVar3 + 1;
        piVar5 = piVar5 + 1;
      } while (iVar3 < *(int *)(param_1 + 0x88));
    }
    return;
  }
  FUN_00dd5650(&DAT_016b18c8);
  return;
}

// 00C9C650  Trigger::Cond::OR_2  size=109  [class]
void __thiscall Trigger::Cond::OR_2(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  piVar4 = (int *)(param_2 + 8);
  *(int *)(param_1 + 4) = param_2;
  iVar1 = *piVar4;
  *(int *)(param_1 + 0x88) = iVar1;
  if (iVar1 < 0x10) {
    iVar3 = 0;
    if (0 < iVar1) {
      piVar5 = (int *)(param_1 + 0x4c);
      do {
        piVar4 = piVar4 + 1;
        iVar1 = *piVar4;
        iVar2 = cCondPhaseJump::cCondPhaseJump(piVar4);
        piVar4 = (int *)((int)piVar4 + iVar1);
        piVar5[-0xf] = iVar2;
        *piVar5 = *piVar4;
        iVar3 = iVar3 + 1;
        piVar5 = piVar5 + 1;
      } while (iVar3 < *(int *)(param_1 + 0x88));
    }
    return;
  }
  FUN_00dd5650(&DAT_016b18f8);
  return;
}

// 00C9C6C0  Trigger::AREA  size=433  [class]
undefined4 __fastcall Trigger::AREA(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  uint local_18 [2];
  undefined **local_10;
  int local_c;
  uint local_8;
  undefined4 local_4;
  
  local_c = *(int *)(param_1 + 0x24);
  iVar1 = *(int *)(param_1 + 0x14);
  local_10 = lib::Array<Entity*>::vftable;
  local_8 = 0;
  local_4 = 0x10;
  if (iVar1 != -1) {
    if ((*(int *)(param_1 + 0x18) == -1) && (*(int *)(param_1 + 0x1c) == -1)) {
      iVar1 = FUN_00c18cc0(iVar1);
      if ((iVar1 != 0) &&
         (iVar1 = FUN_00c19d30(*(undefined4 *)(param_1 + 0x14),&local_10), iVar1 != 0)) {
LAB_00c9c7a0:
        local_18[0] = 0;
        if (local_8 != 0) {
          do {
            if (*(int *)(local_c + local_18[0] * 4) != 0) {
              piVar2 = (int *)FUN_00a6e640();
              iVar1 = *piVar2;
              uVar3 = FUN_00a7c8b0(*(undefined2 *)(param_1 + 0x10),1);
              iVar4 = (**(code **)(iVar1 + 0x2c))(uVar3);
              piVar2 = (int *)FUN_00a6e640();
              iVar1 = *piVar2;
              uVar3 = FUN_00a7c8b0(*(undefined2 *)(param_1 + 0x10),2);
              iVar1 = (**(code **)(iVar1 + 0x2c))(uVar3);
              if ((iVar4 != 0) || (iVar1 != 0)) {
                *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(local_c + local_18[0] * 4);
                return 1;
              }
            }
            local_18[0] = local_18[0] + 1;
          } while (local_18[0] < local_8);
        }
        return 0;
      }
    }
    else {
      if ((iVar1 == -1) || (*(int *)(param_1 + 0x18) == -1)) goto LAB_00c9c85f;
      iVar1 = FUN_00c18c10(iVar1,*(int *)(param_1 + 0x18));
      if (iVar1 != 0) {
        if (*(int *)(param_1 + 0x1c) == -1) {
          iVar1 = FUN_00c19d00(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
                               &local_10);
          if (iVar1 == 0) {
            return 0;
          }
        }
        else {
          local_18[0] = FUN_00c19c00(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18)
                                     ,*(int *)(param_1 + 0x1c));
          if (local_18[0] == 0) {
            return 0;
          }
          lib::Array<Entity*>::vf08(local_18);
        }
        goto LAB_00c9c7a0;
      }
    }
    return 0;
  }
LAB_00c9c85f:
  FUN_00dd5650(&DAT_016b1924,iVar1,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
  return 0;
}

// 00C9C880  Trigger::cCondStartAnimation::vf00  size=75  [class]
undefined4 * __thiscall Trigger::cCondStartAnimation::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if (param_1[7] != 0) {
    param_1[9] = 0;
    if (param_1[10] != 0) {
      FUN_00dd48d0(param_1[7],0);
      param_1[10] = 0;
    }
    param_1[7] = 0;
    param_1[8] = 0;
  }
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C9C8D0  Trigger::cCondStartAnimation::vf0C  size=18  [class]
undefined4 __fastcall Trigger::cCondStartAnimation::vf0C(int param_1)

{
  *(undefined4 *)(param_1 + 0x2c) = 0;
  FUN_00c960f0();
  return 1;
}

// 00C9C8F0  Trigger::cCondStartAnimation::vf10  size=12  [class]
void __fastcall Trigger::cCondStartAnimation::vf10(int param_1)

{
  if (*(int *)(param_1 + 0x24) == 0) {
    FUN_00c960f0();
    return;
  }
  return;
}

// 00C9C900  Trigger::cCondEndAnimation::vf00  size=75  [class]
undefined4 * __thiscall Trigger::cCondEndAnimation::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if (param_1[7] != 0) {
    param_1[9] = 0;
    if (param_1[10] != 0) {
      FUN_00dd48d0(param_1[7],0);
      param_1[10] = 0;
    }
    param_1[7] = 0;
    param_1[8] = 0;
  }
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C9C950  Trigger::cCondEndAnimation::vf10  size=12  [class]
void __fastcall Trigger::cCondEndAnimation::vf10(int param_1)

{
  if (*(int *)(param_1 + 0x24) == 0) {
    FUN_00c96200();
    return;
  }
  return;
}

// 00C9C960  Trigger::AREA_2  size=433  [class]
undefined4 __fastcall Trigger::AREA_2(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  uint local_18 [2];
  undefined **local_10;
  int local_c;
  uint local_8;
  undefined4 local_4;
  
  local_c = *(int *)(param_1 + 0x24);
  iVar1 = *(int *)(param_1 + 0x14);
  local_10 = lib::Array<Entity*>::vftable;
  local_8 = 0;
  local_4 = 0x10;
  if (iVar1 != -1) {
    if ((*(int *)(param_1 + 0x18) == -1) && (*(int *)(param_1 + 0x1c) == -1)) {
      iVar1 = FUN_00c18cc0(iVar1);
      if ((iVar1 != 0) &&
         (iVar1 = FUN_00c19d30(*(undefined4 *)(param_1 + 0x14),&local_10), iVar1 != 0)) {
LAB_00c9ca40:
        local_18[0] = 0;
        if (local_8 != 0) {
          do {
            if (*(int *)(local_c + local_18[0] * 4) != 0) {
              piVar2 = (int *)FUN_00a6e640();
              iVar1 = *piVar2;
              uVar3 = FUN_00a7c8b0(*(undefined2 *)(param_1 + 0x10),1);
              iVar4 = (**(code **)(iVar1 + 0x2c))(uVar3);
              piVar2 = (int *)FUN_00a6e640();
              iVar1 = *piVar2;
              uVar3 = FUN_00a7c8b0(*(undefined2 *)(param_1 + 0x10),2);
              iVar1 = (**(code **)(iVar1 + 0x2c))(uVar3);
              if ((iVar4 == 0) || (iVar1 == 0)) {
                *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(local_c + local_18[0] * 4);
                return 1;
              }
            }
            local_18[0] = local_18[0] + 1;
          } while (local_18[0] < local_8);
        }
        return 0;
      }
    }
    else {
      if ((iVar1 == -1) || (*(int *)(param_1 + 0x18) == -1)) goto LAB_00c9caff;
      iVar1 = FUN_00c18c10(iVar1,*(int *)(param_1 + 0x18));
      if (iVar1 != 0) {
        if (*(int *)(param_1 + 0x1c) == -1) {
          iVar1 = FUN_00c19d00(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
                               &local_10);
          if (iVar1 == 0) {
            return 0;
          }
        }
        else {
          local_18[0] = FUN_00c19c00(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18)
                                     ,*(int *)(param_1 + 0x1c));
          if (local_18[0] == 0) {
            return 0;
          }
          lib::Array<Entity*>::vf08(local_18);
        }
        goto LAB_00c9ca40;
      }
    }
    return 0;
  }
LAB_00c9caff:
  FUN_00dd5650(&DAT_016b1924,iVar1,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
  return 0;
}

// 00C9CB20  Trigger::Cond::RSEQ  size=115  [class]
void __thiscall Trigger::Cond::RSEQ(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  
  *(undefined4 **)(param_1 + 4) = param_2;
  iVar1 = param_2[2];
  *(int *)(param_1 + 0x8c) = iVar1;
  if (iVar1 < 0x10) {
    piVar4 = param_2 + 3;
    iVar3 = 0;
    if (0 < iVar1) {
      puVar5 = (undefined4 *)(param_1 + 0x4c);
      do {
        iVar1 = *piVar4;
        uVar2 = cCondPhaseJump::cCondPhaseJump(piVar4);
        puVar5[-0xf] = uVar2;
        *puVar5 = *param_2;
        iVar3 = iVar3 + 1;
        puVar5 = puVar5 + 1;
        piVar4 = (int *)((int)piVar4 + iVar1 + 4);
      } while (iVar3 < *(int *)(param_1 + 0x8c));
    }
    return;
  }
  FUN_00dd5650(&DAT_016b1950);
  return;
}

// 00C9CBA0  Trigger::cCondEnemyGroupIsCautionLevelByNumber::vf14  size=246  [class]
int __fastcall Trigger::cCondEnemyGroupIsCautionLevelByNumber::vf14(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined *puVar5;
  undefined **local_110;
  int *local_10c;
  int local_108;
  undefined4 local_104;
  int local_100 [64];
  
  local_10c = local_100;
  iVar4 = 0;
  local_108 = 0;
  local_104 = 0x40;
  local_110 = lib::StaticArray<Entity*,64>::vftable;
  iVar1 = FUN_00c19d00(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),&local_110);
  if (iVar1 < 1) {
    return 0;
  }
  piVar3 = local_10c;
  if (local_10c == local_10c + local_108) {
    return 0;
  }
  do {
    if ((*piVar3 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
      puVar5 = &DAT_01be9c78;
      (**(code **)(*piVar2 + 4))(&DAT_01be9c78);
      iVar1 = FUN_00dd6d80(puVar5);
      if ((iVar1 != 0) && (piVar2 != (int *)0xfffff3f0)) {
        iVar1 = *(int *)(param_1 + 0x18);
        if (iVar1 == 0) {
          iVar4 = FUN_00a82e80();
        }
        else if (iVar1 == 1) {
          iVar4 = FUN_00a82e70();
        }
        else {
          if (iVar1 != 2) {
            iVar4 = 0;
            goto LAB_00c9cc60;
          }
          iVar4 = FUN_00a82e60();
        }
        if (iVar4 == 1) {
          return 1;
        }
      }
    }
LAB_00c9cc60:
    piVar3 = piVar3 + 1;
    if (piVar3 == local_10c + local_108) {
      return iVar4;
    }
  } while( true );
}

// 00C9CCA0  Trigger::cCondEnemyIsCautionLevelByNumber::vf14  size=238  [class]
int __fastcall Trigger::cCondEnemyIsCautionLevelByNumber::vf14(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined *puVar5;
  undefined **local_110;
  int *local_10c;
  int local_108;
  undefined4 local_104;
  int local_100 [64];
  
  local_10c = local_100;
  iVar4 = 0;
  local_108 = 0;
  local_104 = 0x40;
  local_110 = lib::StaticArray<Entity*,64>::vftable;
  iVar1 = FUN_00c19d30(*(undefined4 *)(param_1 + 0x10),&local_110);
  if (iVar1 < 1) {
    return 0;
  }
  piVar3 = local_10c;
  if (local_10c == local_10c + local_108) {
    return 0;
  }
  do {
    if ((*piVar3 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
      puVar5 = &DAT_01be9c78;
      (**(code **)(*piVar2 + 4))(&DAT_01be9c78);
      iVar1 = FUN_00dd6d80(puVar5);
      if ((iVar1 != 0) && (piVar2 != (int *)0xfffff3f0)) {
        iVar1 = *(int *)(param_1 + 0x14);
        if (iVar1 == 0) {
          iVar4 = FUN_00a82e80();
        }
        else if (iVar1 == 1) {
          iVar4 = FUN_00a82e70();
        }
        else {
          if (iVar1 != 2) {
            iVar4 = 0;
            goto LAB_00c9cd58;
          }
          iVar4 = FUN_00a82e60();
        }
        if (iVar4 == 1) {
          return 1;
        }
      }
    }
LAB_00c9cd58:
    piVar3 = piVar3 + 1;
    if (piVar3 == local_10c + local_108) {
      return iVar4;
    }
  } while( true );
}

// 00C9CD90  Trigger::AREA_3  size=355  [class]
undefined4 __fastcall Trigger::AREA_3(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  int local_14;
  undefined **local_10;
  int local_c;
  uint local_8;
  undefined4 local_4;
  
  local_c = *(int *)(param_1 + 0x24);
  iVar1 = *(int *)(param_1 + 0x14);
  uVar4 = 0;
  local_10 = lib::Array<Entity*>::vftable;
  local_8 = 0;
  local_4 = 0x10;
  if (iVar1 != -1) {
    if ((*(int *)(param_1 + 0x18) == -1) && (*(int *)(param_1 + 0x1c) == -1)) {
      iVar1 = FUN_00c18cc0(iVar1);
      if ((iVar1 != 0) &&
         (iVar1 = FUN_00c19d30(*(undefined4 *)(param_1 + 0x14),&local_10), iVar1 != 0)) {
LAB_00c9ce71:
        if (local_8 != 0) {
          do {
            if (*(int *)(local_c + uVar4 * 4) != 0) {
              piVar2 = (int *)FUN_00a6e640();
              iVar1 = *piVar2;
              uVar3 = FUN_00a7c8b0(*(undefined2 *)(param_1 + 0x10),2);
              iVar1 = (**(code **)(iVar1 + 0x2c))(uVar3);
              if (iVar1 != 0) {
                *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(local_c + uVar4 * 4);
                return 1;
              }
            }
            uVar4 = uVar4 + 1;
          } while (uVar4 < local_8);
        }
        return 0;
      }
    }
    else {
      if ((iVar1 == -1) || (*(int *)(param_1 + 0x18) == -1)) goto LAB_00c9ceda;
      iVar1 = FUN_00c18c10(iVar1,*(int *)(param_1 + 0x18));
      if (iVar1 != 0) {
        if (*(int *)(param_1 + 0x1c) == -1) {
          iVar1 = FUN_00c19d00(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
                               &local_10);
          if (iVar1 == 0) {
            return 0;
          }
        }
        else {
          local_14 = FUN_00c19c00(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
                                  *(int *)(param_1 + 0x1c));
          if (local_14 == 0) {
            return 0;
          }
          lib::Array<Entity*>::vf08(&local_14);
        }
        goto LAB_00c9ce71;
      }
    }
    return 0;
  }
LAB_00c9ceda:
  FUN_00dd5650(&DAT_016b1984,iVar1,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
  return 0;
}

// 00C9CF00  Trigger::SCENARIO_AREA  size=399  [class]
undefined4 __fastcall Trigger::SCENARIO_AREA(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  int local_14;
  undefined **local_10;
  int local_c;
  uint local_8;
  undefined4 local_4;
  
  uVar4 = 0;
  if (((DAT_01dbd1d0 != 0) && ((DAT_01bea060 & 8) == 0)) && ((DAT_01bea060 & 0x2000400) != 0)) {
    return 0;
  }
  local_c = *(int *)(param_1 + 0x24);
  iVar1 = *(int *)(param_1 + 0x14);
  local_10 = lib::Array<Entity*>::vftable;
  local_8 = 0;
  local_4 = 0x10;
  if (iVar1 == -1) {
LAB_00c9d070:
    FUN_00dd5650(&DAT_016b19b0,iVar1,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c)
                );
    return 0;
  }
  if ((*(int *)(param_1 + 0x18) == -1) && (*(int *)(param_1 + 0x1c) == -1)) {
    iVar1 = FUN_00c18cc0(iVar1);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = FUN_00c19d30(*(undefined4 *)(param_1 + 0x14),&local_10);
    if (iVar1 == 0) {
      return 0;
    }
  }
  else {
    if ((iVar1 == -1) || (*(int *)(param_1 + 0x18) == -1)) goto LAB_00c9d070;
    iVar1 = FUN_00c18c10(iVar1,*(int *)(param_1 + 0x18));
    if (iVar1 == 0) {
      return 0;
    }
    if (*(int *)(param_1 + 0x1c) == -1) {
      iVar1 = FUN_00c19d00(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),&local_10
                          );
      if (iVar1 == 0) {
        return 0;
      }
    }
    else {
      local_14 = FUN_00c19c00(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
                              *(int *)(param_1 + 0x1c));
      if (local_14 == 0) {
        return 0;
      }
      lib::Array<Entity*>::vf08(&local_14);
    }
  }
  if (local_8 != 0) {
    do {
      if (*(int *)(local_c + uVar4 * 4) != 0) {
        piVar2 = (int *)FUN_00a6e640();
        iVar1 = *piVar2;
        uVar3 = FUN_00a7c8b0(*(undefined2 *)(param_1 + 0x10),2);
        iVar1 = (**(code **)(iVar1 + 0x2c))(uVar3);
        if (iVar1 == 0) {
          *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(local_c + uVar4 * 4);
          return 1;
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < local_8);
  }
  return 0;
}

// 00C9D090  Trigger::Action::Array  size=94  [class]
void __thiscall Trigger::Action::Array(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  
  *(int *)(param_1 + 4) = param_2;
  iVar1 = *(int *)(param_2 + 8);
  *(int *)(param_1 + 0x44) = iVar1;
  if (iVar1 < 0x10) {
    piVar5 = (int *)(param_2 + 0xc);
    iVar3 = 0;
    if (0 < iVar1) {
      puVar4 = (undefined4 *)(param_1 + 8);
      do {
        iVar1 = *piVar5;
        uVar2 = cActCamera::cActCamera(piVar5);
        piVar5 = (int *)((int)piVar5 + iVar1);
        *puVar4 = uVar2;
        iVar3 = iVar3 + 1;
        puVar4 = puVar4 + 1;
      } while (iVar3 < *(int *)(param_1 + 0x44));
    }
    return;
  }
  FUN_00dd5650(&DAT_016b19e4);
  return;
}

// 00C9D210  FUN_00c9d210  size=73  [callgraph]
void FUN_00c9d210(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = param_5;
  local_1c = param_1;
  local_14 = param_3;
  local_18 = param_2;
  local_8 = param_6;
  local_10 = param_4;
  local_4 = param_7;
  FUN_00c9c080(&local_1c);
  return;
}

// 00C9D260  FUN_00c9d260  size=675  [callgraph]
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __thiscall FUN_00c9d260(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined4 uVar7;
  bool bVar8;
  undefined1 *puVar9;
  char *pcVar10;
  undefined1 local_2000 [1024];
  undefined1 local_1c00 [1024];
  undefined1 local_1800 [1024];
  undefined1 local_1400 [1024];
  undefined1 local_1000 [1024];
  undefined1 local_c00 [1024];
  undefined1 local_800 [1024];
  undefined1 local_400 [1020];
  undefined4 uStack_4;
  
  uStack_4 = 0xc9d26a;
  iVar2 = FUN_00de3560();
  if (iVar2 == 0) {
    return;
  }
  puVar3 = (undefined4 *)(param_1 + 0x6c);
  iVar2 = 0x20;
  do {
    *puVar3 = 0x3c8efa35;
    puVar3[-7] = 0;
    puVar3[1] = 0xffffffff;
    puVar3 = puVar3 + 0xc;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (*(int *)(param_1 + 0x6e0) == 0) {
    pcVar10 = "_pos.bxm";
  }
  else {
    pcVar10 = "_VRpos.bxm";
  }
  iVar2 = FUN_00de4550(pcVar10,0);
  if (iVar2 != 0) {
    cXmlBinary::cXmlBinary_16(iVar2,&DAT_01b7bd48);
  }
  uVar7 = 0;
  if (*(int *)(param_1 + 0x6e0) == 0) {
    pcVar10 = "p%03x.trg";
    puVar9 = local_1800;
LAB_00c9d313:
    uVar7 = FUN_00959930(puVar9,pcVar10,param_2);
  }
  else if (*(int *)(param_1 + 0x6e0) == 1) {
    pcVar10 = "vr-p%03x.trg";
    puVar9 = local_1000;
    goto LAB_00c9d313;
  }
  pbVar4 = (byte *)FUN_00de4500(uVar7);
  if (param_2 == 0xe08) {
    pcVar10 = "pf41.trg";
    puVar9 = local_800;
LAB_00c9d384:
    uVar7 = FUN_00959930(puVar9,pcVar10,param_2);
    pbVar5 = (byte *)FUN_00de4500(uVar7);
    if (pbVar5 != (byte *)0x0) {
      pbVar4 = pbVar5;
    }
  }
  else {
    if (param_2 == 0xe10) {
      pcVar10 = "pf42.trg";
      puVar9 = local_2000;
      goto LAB_00c9d384;
    }
    if (param_2 == 0xe12) {
      pcVar10 = "pf43.trg";
      puVar9 = local_1c00;
      goto LAB_00c9d384;
    }
    if (param_2 == 0xe17) {
      pcVar10 = "pf44.trg";
      puVar9 = local_1400;
      goto LAB_00c9d384;
    }
  }
  if (pbVar4 != (byte *)0x0) {
    pbVar6 = &DAT_016509b8;
    pbVar5 = pbVar4;
    do {
      bVar1 = *pbVar5;
      bVar8 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_00c9d3d0:
        iVar2 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
        goto LAB_00c9d3d5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar8 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_00c9d3d0;
      pbVar5 = pbVar5 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar1 != 0);
    iVar2 = 0;
LAB_00c9d3d5:
    if (iVar2 != 0) {
      FUN_00dd5650(&DAT_016b1ac0,param_2);
      return;
    }
    if (*(int *)(pbVar4 + 4) != DAT_018ab99c) {
      FUN_00dd5650(&DAT_016b1a88,param_2);
      return;
    }
    FUN_00c9c2b0(pbVar4 + 0xc,*(undefined4 *)(pbVar4 + 8));
  }
  if (*(int *)(param_1 + 0x6e0) == 0) {
    pcVar10 = "p%03x.tgs";
    puVar9 = local_400;
  }
  else {
    if (*(int *)(param_1 + 0x6e0) != 1) goto LAB_00c9d467;
    pcVar10 = "vr-p%03x.tgs";
    puVar9 = local_c00;
  }
  uVar7 = FUN_00959930(puVar9,pcVar10,param_2);
LAB_00c9d467:
  pbVar4 = (byte *)FUN_00de4500(uVar7);
  if (pbVar4 != (byte *)0x0) {
    pbVar6 = &DAT_016509b8;
    pbVar5 = pbVar4;
    do {
      bVar1 = *pbVar5;
      bVar8 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_00c9d4a0:
        iVar2 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
        goto LAB_00c9d4a5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar8 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_00c9d4a0;
      pbVar5 = pbVar5 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar1 != 0);
    iVar2 = 0;
LAB_00c9d4a5:
    if (iVar2 != 0) {
      FUN_00dd5650(&DAT_016b1a58,param_2);
      return;
    }
    if (*(int *)(pbVar4 + 4) != DAT_018ab99c) {
      FUN_00dd5650(&DAT_016b1a20,param_2);
      return;
    }
    FUN_00c9c3e0(pbVar4 + 0xc,*(undefined4 *)(pbVar4 + 8));
  }
  return;
}

// 00C9D510  FUN_00c9d510  size=48  [callgraph]
void FUN_00c9d510(undefined4 param_1)

{
  if (DAT_01dbd1d0 != 0) {
    *(undefined4 *)(DAT_01dbd1d8 + 0xc) = param_1;
  }
  FUN_00c9d260(param_1);
  FUN_00c90600();
  return;
}

// 00C9D540  Trigger::Act::REQ_GP_BEH_INST  size=206  [class]
undefined4 __fastcall Trigger::Act::REQ_GP_BEH_INST(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 local_48;
  undefined4 *local_44;
  undefined4 local_40 [15];
  
  iVar1 = *(int *)(param_1 + 4);
  local_48 = 0;
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016b1b1c);
    return 0;
  }
  puVar2 = (undefined4 *)FUN_00dd3500(0x18,&DAT_01b7bd48);
  puVar4 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *puVar2 = lib::AllocatedArray<Entity*>::vftable;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar4 = puVar2;
  }
  local_44 = &DAT_01b7bd48;
  FUN_00a81e00(0x20,&local_44);
  iVar3 = FUN_00c19d00(*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc),puVar4);
  if (0 < iVar3) {
    iVar5 = puVar4[1];
    iVar3 = iVar5 + puVar4[2] * 4;
    if (iVar5 != iVar3) {
      local_48 = 1;
      do {
        FUN_00a7c8a0();
        local_40[0] = *(undefined4 *)(iVar1 + 0x10);
        FUN_00a9d720(local_40);
        iVar5 = iVar5 + 4;
      } while (iVar5 != iVar3);
    }
  }
  return local_48;
}


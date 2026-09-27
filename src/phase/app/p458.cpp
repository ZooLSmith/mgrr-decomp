// src/phase/app/p458.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D493C0..00D71330, 30 functions

#include "mgrr.h"
#include "cP458.h"

// 00D493C0  cP458::vf1C  size=3  [class]
void cP458::vf1C(void)

{
  return;
}

// 00D493D0  cP458::vf18  size=1  [class]
void cP458::vf18(void)

{
  return;
}

// 00D493E0  FUN_00d493e0  size=12  [callgraph]
undefined4 __fastcall FUN_00d493e0(undefined4 param_1)

{
  FUN_00a7c930();
  return param_1;
}

// 00D493F0  FUN_00d493f0  size=1026  [callgraph]
undefined4 __fastcall FUN_00d493f0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  undefined4 uVar12;
  
  iVar2 = FUN_00d45980();
  uVar12 = *(undefined4 *)(param_1 + 4);
  iVar3 = FUN_00d45860(uVar12,"P458_IN");
  iVar4 = FUN_00d45860(uVar12,"P458_BOMB");
  iVar5 = FUN_00d45860(uVar12,"P458_END");
  iVar6 = FUN_00d45860(uVar12,"P458_LIFT_01_DOWN");
  iVar7 = FUN_00d45860(uVar12,"P458_RIDE");
  iVar8 = FUN_00d45860(uVar12,"P458_DEAD");
  iVar9 = FUN_00d45860(uVar12,"P458_BTL_01");
  iVar10 = FUN_00a81330();
  if ((((iVar10 == 0) || (iVar10 = FUN_00a81330(), iVar10 == 0)) ||
      (iVar10 = FUN_00a81330(), iVar10 == 0)) ||
     ((iVar10 = FUN_00a81330(), iVar10 == 0 || (iVar10 = FUN_00a81330(), iVar10 == 0)))) {
    FUN_00dd5650(&DAT_016bc758);
    return 0;
  }
  cVar1 = FUN_00a557e0();
  if (cVar1 == '\x01') {
    if (iVar2 == iVar5) {
      uVar12 = 0;
    }
    else {
      if (iVar2 < iVar6) goto LAB_00d4952f;
      FUN_00a5bdc0();
      uVar12 = 1;
    }
    FUN_00a5be00(0xffffffff,uVar12);
  }
LAB_00d4952f:
  iVar10 = FUN_00c81dd0(0x21);
  if (iVar2 < iVar4) {
    if (iVar10 == 1) {
      FUN_00c81e90(0x21);
    }
  }
  else if (iVar10 == 0) {
    FUN_00c81e40(0x21);
  }
  if (iVar4 <= iVar2) {
    FUN_00a81330();
    piVar11 = (int *)FUN_00a7c8a0();
    (**(code **)(*piVar11 + 0x20))();
  }
  if (iVar7 <= iVar2) {
    FUN_00a81330();
    piVar11 = (int *)FUN_00a7c8a0();
    (**(code **)(*piVar11 + 0x20))();
    FUN_00a81330();
    piVar11 = (int *)FUN_00a7c8a0();
    (**(code **)(*piVar11 + 0x20))();
    if (iVar2 == iVar7) {
      uVar12 = 1;
      FUN_00a81330(1);
      FUN_00a7c8a0();
      FUN_00a8cb60(uVar12);
    }
  }
  if (iVar2 != iVar8) {
    if (iVar2 == iVar9) {
      FUN_00a81330();
      piVar11 = (int *)FUN_00a7c8a0();
      (**(code **)(*piVar11 + 0x20))();
      uVar12 = 4;
      FUN_00a81330(4);
      FUN_00a7c8a0();
      FUN_00a8cb80(uVar12);
      FUN_00a81330();
      iVar10 = FUN_00a7c8a0();
      if (iVar10 != 0) {
        FUN_004083c0();
      }
    }
    if ((iVar9 < iVar2) && (iVar2 < iVar5)) {
      uVar12 = 1;
      FUN_00a81330(1);
      FUN_00a7c8a0();
      FUN_00a8cb80(uVar12);
    }
  }
  if ((iVar9 <= iVar2) && (iVar2 < iVar4)) {
    uVar12 = 1;
    FUN_00a81330(1);
    FUN_00a7c8a0();
    FUN_00a8cb60(uVar12);
  }
  if (iVar2 == iVar8) goto LAB_00d49707;
  if (iVar2 < iVar9) {
    if (iVar2 < iVar4) goto LAB_00d49707;
LAB_00d496a5:
    if (iVar7 <= iVar2) goto LAB_00d49707;
    uVar12 = 2;
    FUN_00a81330(2);
    FUN_00a7c8a0();
    FUN_00a8cb70(uVar12);
    FUN_00a81330();
    iVar4 = FUN_00a7c8a0();
    if (iVar4 != 0) {
      FUN_004063f0(0);
    }
    FUN_00a33520(0,0x400,9);
    uVar12 = 0x10;
  }
  else {
    if (iVar4 <= iVar2) goto LAB_00d496a5;
    uVar12 = 2;
  }
  FUN_00a81330(uVar12);
  FUN_00a7c8a0();
  FUN_00a8cb80(uVar12);
LAB_00d49707:
  if (iVar6 <= iVar2) {
    iVar4 = 0;
    piVar11 = (int *)FUN_00c14bb0();
    iVar6 = (**(code **)(*piVar11 + 0x18))(0,0x409);
    while (iVar6 != 0) {
      piVar11 = (int *)FUN_00a7c8a0();
      (**(code **)(*piVar11 + 0x20))();
      iVar4 = iVar4 + 1;
      piVar11 = (int *)FUN_00c14bb0();
      iVar6 = (**(code **)(*piVar11 + 0x18))(iVar4,0x409);
    }
  }
  if ((iVar3 <= iVar2) && (iVar2 != iVar5)) {
    iVar3 = 0;
    piVar11 = (int *)FUN_00c14bb0();
    iVar4 = (**(code **)(*piVar11 + 0x18))(0,0x40c);
    while (iVar4 != 0) {
      piVar11 = (int *)FUN_00a7c8a0();
      (**(code **)(*piVar11 + 0x20))();
      iVar3 = iVar3 + 1;
      piVar11 = (int *)FUN_00c14bb0();
      iVar4 = (**(code **)(*piVar11 + 0x18))(iVar3,0x40c);
    }
  }
  if (iVar2 == iVar9) {
    iVar2 = FUN_00a81330();
    if (iVar2 != 0) {
      uVar12 = 1;
      FUN_00a81330(1);
      FUN_00a7c8a0();
      FUN_00a8cb50(uVar12);
    }
  }
  return 1;
}

// 00D49810  FUN_00d49810  size=88  [callgraph]
undefined4 FUN_00d49810(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      FUN_00407c50();
      uVar2 = 1;
      FUN_00a81330(1);
      FUN_00a7c8a0();
      FUN_00a8cb80(uVar2);
      *param_1 = 3;
      return 1;
    }
  }
  return 0;
}

// 00D49870  FUN_00d49870  size=124  [callgraph]
undefined4 FUN_00d49870(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      uVar2 = 0xe;
      FUN_00a81330(0xe);
      FUN_00a7c8a0();
      FUN_00a8cb80(uVar2);
      iVar1 = FUN_00dda320(0);
      if (iVar1 == 1) {
        FUN_00dda360(0,0x3f4ccccd,0x3f4ccccd,10);
      }
      *param_1 = 3;
      return 1;
    }
  }
  return 0;
}

// 00D498F0  FUN_00d498f0  size=68  [callgraph]
undefined4 FUN_00d498f0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      uVar2 = FUN_00407cf0();
      if ((char)uVar2 == '\x01') {
        *(undefined4 *)(param_1 + 4) = 1;
      }
      return uVar2;
    }
  }
  return 0;
}

// 00D49940  FUN_00d49940  size=132  [callgraph]
undefined4 __thiscall FUN_00d49940(int param_1,int param_2)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      fVar2 = (float10)FUN_004084a0();
      if (*(int *)(param_1 + 900) == 0) {
        if (fVar2 < (float10)38.0) {
          return 0;
        }
        *(undefined4 *)(param_1 + 900) = 1;
      }
      if (fVar2 <= (float10)38.0) {
        FUN_00c185c0(2);
        *(undefined4 *)(param_2 + 4) = 1;
        return 1;
      }
    }
  }
  return 0;
}

// 00D499D0  FUN_00d499d0  size=93  [callgraph]
uint FUN_00d499d0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00a81330();
  uVar2 = 0;
  if (iVar1 != 0) {
    FUN_00a81330();
    iVar1 = FUN_00a7c8a0();
    uVar2 = 0;
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 4) = 1;
      uVar2 = FUN_00408320(0x41400000);
      if ((char)uVar2 == '\x01') {
        uVar2 = FUN_00407ec0(0x41400000);
      }
    }
  }
  return uVar2 & 0xffffff00;
}

// 00D49A30  FUN_00d49a30  size=226  [callgraph]
undefined4 __fastcall FUN_00d49a30(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  
  iVar4 = FUN_00a81330();
  if (iVar4 != 0) {
    fVar2 = *(float *)(param_1 + 0x310) * *(float *)(param_1 + 0x34c);
    if (*(float *)(param_1 + 0x318) != fVar2) {
      if (fVar2 <= *(float *)(param_1 + 0x318)) {
        fVar3 = *(float *)(param_1 + 0x318) - 0.01;
        *(float *)(param_1 + 0x318) = fVar3;
        if (fVar3 < fVar2) {
          *(float *)(param_1 + 0x318) = fVar2;
        }
      }
      else {
        fVar3 = *(float *)(param_1 + 0x318) + 0.01;
        *(float *)(param_1 + 0x318) = fVar3;
        if (fVar2 < fVar3) {
          *(float *)(param_1 + 0x318) = fVar2;
        }
      }
    }
    FUN_00a55870();
    fVar2 = 1.0 - *(float *)(param_1 + 0x318);
    FUN_00a55860(fVar2);
    FUN_00a81330();
    iVar4 = FUN_00a7c8a0();
    if (iVar4 != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x34c);
      *(float *)(iVar4 + 0xb70) = fVar2;
      *(undefined4 *)(iVar4 + 0xb74) = uVar1;
    }
    return 1;
  }
  return 0;
}

// 00D49B20  FUN_00d49b20  size=973  [callgraph]
undefined4 __fastcall FUN_00d49b20(int param_1)

{
  float fVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  float10 extraout_ST0;
  float local_c;
  
  iVar4 = FUN_00a81330();
  if (iVar4 != 0) {
    FUN_00a81330();
    iVar4 = FUN_00a7c8a0();
    if (iVar4 != 0) {
      fVar1 = *(float *)(param_1 + 0x150) -
              *(float *)(param_1 + 0x350) * *(float *)(param_1 + 0x310);
      *(float *)(param_1 + 0x154) = fVar1;
      if (fVar1 < 0.0) {
        *(undefined4 *)(param_1 + 0x154) = 0;
      }
      local_c = *(float *)(param_1 + 0x154);
      fVar5 = (float10)FUN_00e049b0();
      fVar1 = (float)((float10)*(float *)(param_1 + 0x194) * (float10)0.016666668 * fVar5);
      if (*(float *)(param_1 + 0x314) == *(float *)(param_1 + 0x310)) {
        if ((*(float *)(param_1 + 0x338) <= 0.0) || (*(float *)(param_1 + 0x33c) <= 0.0)) {
          *(undefined4 *)(param_1 + 0x32c) = 0;
        }
        else {
          fVar2 = *(float *)(param_1 + 0x334);
          fVar5 = (float10)FUN_00e049b0();
          fVar6 = (float10)*(float *)(param_1 + 0x338) - fVar5 * (float10)(90.0 / (fVar2 * 60.0));
          *(float *)(param_1 + 0x338) = (float)fVar6;
          fVar5 = (float10)0;
          if (fVar6 < fVar5) {
            *(float *)(param_1 + 0x338) = (float)fVar5;
          }
          fVar6 = (float10)fsin((float10)*(float *)(param_1 + 0x338) * (float10)0.017453292);
          *(float *)(param_1 + 0x32c) =
               (float)(fVar6 * (float10)*(float *)(param_1 + 0x33c) *
                      (float10)*(float *)(param_1 + 0x330));
          if (fVar5 < (float10)*(float *)(param_1 + 0x330)) {
            fVar5 = (float10)FUN_00e049b0();
            *(float *)(param_1 + 0x32c) =
                 (float)(((float10)fVar1 - (float10)local_c * (float10)0.016666668 * fVar5) +
                        (float10)*(float *)(param_1 + 0x32c));
          }
        }
      }
      else {
        if (*(float *)(param_1 + 0x32c) == 0.0) {
          if (*(float *)(param_1 + 0x310) <= *(float *)(param_1 + 0x314)) {
            *(undefined4 *)(param_1 + 0x330) = 0x3f800000;
          }
          else {
            *(undefined4 *)(param_1 + 0x330) = 0xbf800000;
          }
          *(undefined4 *)(param_1 + 0x33c) = *(undefined4 *)(param_1 + 0x354);
          *(undefined4 *)(param_1 + 0x32c) = 0;
          *(undefined4 *)(param_1 + 0x334) = 0x3f800000;
          *(undefined4 *)(param_1 + 0x338) = 0x42b40000;
          *(undefined4 *)(param_1 + 0x328) = 0x40000000;
        }
        *(undefined4 *)(param_1 + 0x344) = 1;
      }
      if (((*(float *)(param_1 + 0x310) == 0.0) &&
          (*(float *)(param_1 + 0x158) < *(float *)(param_1 + 0x198))) &&
         (*(float *)(param_1 + 0x32c) <= 0.0)) {
        if (*(int *)(param_1 + 0x344) == 1) {
          local_c = *(float *)(param_1 + 0x154) / *(float *)(param_1 + 0x358) + local_c;
        }
        else {
          local_c = *(float *)(param_1 + 0x154) / *(float *)(param_1 + 0x35c) + local_c;
        }
      }
      fVar5 = (float10)FUN_00e049b0();
      fVar6 = (float10)local_c * (float10)0.016666668 * fVar5 + (float10)*(float *)(param_1 + 0x32c)
      ;
      fVar1 = fVar1 + *(float *)(param_1 + 0x198);
      *(float *)(param_1 + 0x198) = fVar1;
      fVar5 = (float10)0;
      if (fVar5 < fVar6) {
        *(float *)(param_1 + 0x158) = (float)((float10)*(float *)(param_1 + 0x158) + fVar6);
      }
      if (fVar1 < *(float *)(param_1 + 0x158)) {
        *(float *)(param_1 + 0x158) = fVar1;
      }
      fVar2 = fVar1 - *(float *)(param_1 + 0x158);
      if (*(float *)(param_1 + 0x31c) < fVar2) {
        if (*(float *)(param_1 + 0x31c) < fVar2) {
          do {
            fVar2 = fVar2 - *(float *)(param_1 + 0x31c);
          } while (*(float *)(param_1 + 0x31c) < fVar2);
        }
        fVar2 = fVar2 + *(float *)(param_1 + 0x158);
        *(float *)(param_1 + 0x158) = fVar2;
        fVar2 = fVar1 - fVar2;
        *(float *)(param_1 + 0x328) = (float)fVar5;
      }
      if ((float10)*(float *)(param_1 + 0x328) <= fVar5) {
        if (*(float *)(param_1 + 800) != fVar2) {
          *(float *)(param_1 + 0x328) = *(float *)(param_1 + 0x328) + 1.5;
        }
        return 1;
      }
      FUN_00408620();
      if (fVar2 <= *(float *)(param_1 + 800)) {
        FUN_00408040();
      }
      else {
        FUN_004081b0();
      }
      *(float *)(param_1 + 800) = fVar2;
      FUN_00407ec0(fVar2);
      cVar3 = FUN_00408440();
      if (cVar3 == '\x01') {
        FUN_004084a0();
        *(float *)(param_1 + 0x198) = (float)((float10)*(float *)(param_1 + 0x158) + extraout_ST0);
        *(float *)(param_1 + 800) = (float)extraout_ST0;
      }
      *(undefined4 *)(param_1 + 0x328) = 0;
      return 1;
    }
  }
  return 0;
}

// 00D49EF0  FUN_00d49ef0  size=113  [callgraph]
undefined4 __thiscall FUN_00d49ef0(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      FUN_00407d90(0);
      FUN_00408620();
      FUN_00408040();
      FUN_00407ec0(0);
      *(undefined4 *)(param_1 + 0x348) = 0;
      *param_2 = 0xe;
      return 1;
    }
  }
  return 0;
}

// 00D49F70  FUN_00d49f70  size=152  [callgraph]
undefined4 FUN_00d49f70(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_00a81330();
  if ((iVar2 != 0) && (iVar2 = FUN_00a81330(), iVar2 != 0)) {
    FUN_00a81330();
    iVar2 = FUN_00a7c8a0();
    if (iVar2 != 0) {
      cVar1 = FUN_00407cf0();
      if (cVar1 == '\x01') {
        FUN_00a81330();
        iVar2 = FUN_00a7c8a0();
        if (iVar2 == 0) {
          return 0;
        }
        iVar2 = FUN_00406350();
        if (iVar2 == 1) {
          FUN_00a81330(1);
          FUN_00a7c8a0();
          FUN_00a8cb60(iVar2);
          *(undefined4 *)(param_1 + 4) = 1;
        }
      }
      return 1;
    }
  }
  return 0;
}

// 00D4A010  FUN_00d4a010  size=156  [callgraph]
undefined4 FUN_00d4a010(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      uVar2 = 2;
      FUN_00a81330(2);
      FUN_00a7c8a0();
      FUN_00a8cb60(uVar2);
      uVar2 = 3;
      FUN_00a81330(3);
      FUN_00a7c8a0();
      FUN_00a8cb80(uVar2);
      iVar1 = FUN_00dda320(0);
      if (iVar1 == 1) {
        FUN_00dda360(0,0x3f4ccccd,0x3f4ccccd,10);
      }
      *(undefined4 *)(param_1 + 4) = 1;
      return 1;
    }
  }
  return 0;
}

// 00D4A0B0  FUN_00d4a0b0  size=113  [callgraph]
undefined4 FUN_00d4a0b0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      uVar3 = 1;
      FUN_00a81330(1);
      FUN_00a7c8a0();
      FUN_00a8cb50(uVar3);
      FUN_00a81330();
      piVar2 = (int *)FUN_00a7c8a0();
      (**(code **)(*piVar2 + 0x20))();
      *(undefined4 *)(param_1 + 4) = 1;
      return 1;
    }
  }
  return 0;
}

// 00D4A130  FUN_00d4a130  size=705  [callgraph]
void __fastcall FUN_00d4a130(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00d45980();
    uVar5 = *(undefined4 *)(param_1 + 4);
    iVar2 = FUN_00d45860(uVar5,"P458_DEAD");
    if ((iVar1 != iVar2) && (iVar2 = FUN_00d45860(uVar5,"P458_RIDE"), iVar1 < iVar2)) {
      local_20 = DAT_01bea380;
      local_1c = DAT_01bea384;
      local_18 = DAT_01bea388;
      local_14 = DAT_01bea38c;
      piVar3 = (int *)FUN_00c13920();
      iVar1 = (**(code **)(*piVar3 + 0x28))(0xffffffff);
      if (iVar1 != 0) {
        iVar1 = FUN_00a7c8a0();
        uStack_34 = *(undefined4 *)(iVar1 + 0x40);
        uStack_30 = *(undefined4 *)(iVar1 + 0x44);
        uStack_2c = *(undefined4 *)(iVar1 + 0x48);
        uStack_28 = *(undefined4 *)(iVar1 + 0x4c);
        FUN_00a81330();
        iVar1 = FUN_00a7c8a0();
        if (iVar1 != 0) {
          piVar3 = (int *)FUN_00a6e640();
          iVar1 = (**(code **)(*piVar3 + 0x2c))(&uStack_34,20000,1);
          if (iVar1 == 0) {
            piVar3 = (int *)FUN_00a6e640();
            iVar1 = (**(code **)(*piVar3 + 0x2c))(&stack0xffffffc0,0x4e2a,1);
            if (iVar1 == 0) {
              piVar3 = (int *)FUN_00a6e640();
              iVar1 = (**(code **)(*piVar3 + 0x2c))(&stack0xffffffc0,0x4e2b,1);
              if (iVar1 == 0) {
                piVar3 = (int *)FUN_00a6e640();
                iVar1 = (**(code **)(*piVar3 + 0x2c))(&stack0xffffffc0,0x4e34,1);
                if (iVar1 == 0) {
                  piVar3 = (int *)FUN_00a6e640();
                  iVar1 = (**(code **)(*piVar3 + 0x2c))(&stack0xffffffc0,0x4e3e,1);
                  if (iVar1 == 0) {
                    piVar3 = (int *)FUN_00a6e640();
                    iVar1 = (**(code **)(*piVar3 + 0x2c))(&stack0xffffffc0,0x4e3f,1);
                    if (iVar1 == 0) {
                      uVar4 = 0;
                      do {
                        switch(uVar4) {
                        case 0:
                          piVar3 = (int *)FUN_00a6e640();
                          iVar1 = (**(code **)(*piVar3 + 0x2c))(&uStack_30,20000,1);
                          uVar5 = 0;
                          break;
                        case 1:
                          piVar3 = (int *)FUN_00a6e640();
                          iVar1 = (**(code **)(*piVar3 + 0x2c))(&uStack_30,0x4e2a,1);
                          if (iVar1 == 0) {
                            piVar3 = (int *)FUN_00a6e640();
                            iVar1 = (**(code **)(*piVar3 + 0x2c))(&uStack_30,0x4e2b,1);
                          }
                          uVar5 = 1;
                          break;
                        case 2:
                          piVar3 = (int *)FUN_00a6e640();
                          iVar1 = (**(code **)(*piVar3 + 0x2c))(&uStack_30,0x4e34,1);
                          uVar5 = 2;
                          break;
                        case 3:
                          piVar3 = (int *)FUN_00a6e640();
                          iVar1 = (**(code **)(*piVar3 + 0x2c))(&uStack_30,0x4e3e,1);
                          if (iVar1 == 0) {
                            piVar3 = (int *)FUN_00a6e640();
                            iVar1 = (**(code **)(*piVar3 + 0x2c))(&uStack_30,0x4e3f,1);
                          }
                          uVar5 = 3;
                          break;
                        default:
                          goto switchD_00d4a2e9_default;
                        }
                        FUN_004063b0(uVar5,iVar1);
switchD_00d4a2e9_default:
                        uVar4 = uVar4 + 1;
                        if (3 < uVar4) {
                          return;
                        }
                      } while( true );
                    }
                  }
                }
              }
            }
          }
          FUN_004063b0(0,0);
          FUN_004063b0(1,0);
          FUN_004063b0(2,0);
          FUN_004063b0(3,0);
        }
      }
    }
  }
  return;
}

// 00D4A410  FUN_00d4a410  size=676  [callgraph]
void __fastcall FUN_00d4a410(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00d45860(*(undefined4 *)(param_1 + 4),"P458_RIDE");
    iVar2 = FUN_00d45980();
    if (iVar1 <= iVar2) {
      local_20 = DAT_01bea380;
      local_1c = DAT_01bea384;
      local_18 = DAT_01bea388;
      local_14 = DAT_01bea38c;
      piVar3 = (int *)FUN_00c13920();
      iVar1 = (**(code **)(*piVar3 + 0x28))(0xffffffff);
      if (iVar1 != 0) {
        iVar1 = FUN_00a7c8a0();
        uStack_34 = *(undefined4 *)(iVar1 + 0x40);
        uStack_30 = *(undefined4 *)(iVar1 + 0x44);
        uStack_2c = *(undefined4 *)(iVar1 + 0x48);
        uStack_28 = *(undefined4 *)(iVar1 + 0x4c);
        FUN_00a81330();
        iVar1 = FUN_00a7c8a0();
        if (iVar1 != 0) {
          piVar3 = (int *)FUN_00a6e640();
          iVar1 = (**(code **)(*piVar3 + 0x2c))(&uStack_34,30000,1);
          if (iVar1 == 0) {
            piVar3 = (int *)FUN_00a6e640();
            iVar1 = (**(code **)(*piVar3 + 0x2c))(&stack0xffffffc0,0x753a,1);
            if (iVar1 == 0) {
              piVar3 = (int *)FUN_00a6e640();
              iVar1 = (**(code **)(*piVar3 + 0x2c))(&stack0xffffffc0,0x753b,1);
              if (iVar1 == 0) {
                piVar3 = (int *)FUN_00a6e640();
                iVar1 = (**(code **)(*piVar3 + 0x2c))(&stack0xffffffc0,0x7544,1);
                if (iVar1 == 0) {
                  piVar3 = (int *)FUN_00a6e640();
                  iVar1 = (**(code **)(*piVar3 + 0x2c))(&stack0xffffffc0,0x754e,1);
                  if (iVar1 == 0) {
                    piVar3 = (int *)FUN_00a6e640();
                    iVar1 = (**(code **)(*piVar3 + 0x2c))(&stack0xffffffc0,0x754f,1);
                    if (iVar1 == 0) {
                      uVar4 = 0;
                      do {
                        switch(uVar4) {
                        case 0:
                          piVar3 = (int *)FUN_00a6e640();
                          iVar1 = (**(code **)(*piVar3 + 0x2c))(&uStack_30,30000,1);
                          uVar5 = 0;
                          break;
                        case 1:
                          piVar3 = (int *)FUN_00a6e640();
                          iVar1 = (**(code **)(*piVar3 + 0x2c))(&uStack_30,0x753a,1);
                          if (iVar1 == 0) {
                            piVar3 = (int *)FUN_00a6e640();
                            iVar1 = (**(code **)(*piVar3 + 0x2c))(&uStack_30,0x753b,1);
                          }
                          uVar5 = 1;
                          break;
                        case 2:
                          piVar3 = (int *)FUN_00a6e640();
                          iVar1 = (**(code **)(*piVar3 + 0x2c))(&uStack_30,0x7544,1);
                          uVar5 = 2;
                          break;
                        case 3:
                          piVar3 = (int *)FUN_00a6e640();
                          iVar1 = (**(code **)(*piVar3 + 0x2c))(&uStack_30,0x754e,1);
                          if (iVar1 == 0) {
                            piVar3 = (int *)FUN_00a6e640();
                            iVar1 = (**(code **)(*piVar3 + 0x2c))(&uStack_30,0x754f,1);
                          }
                          uVar5 = 3;
                          break;
                        default:
                          goto switchD_00d4a5ab_default;
                        }
                        FUN_004085c0(uVar5,iVar1);
switchD_00d4a5ab_default:
                        uVar4 = uVar4 + 1;
                        if (3 < uVar4) {
                          return;
                        }
                      } while( true );
                    }
                  }
                }
              }
            }
          }
          FUN_004085c0(0,0);
          FUN_004085c0(1,0);
          FUN_004085c0(2,0);
          FUN_004085c0(3,0);
        }
      }
    }
  }
  return;
}

// 00D54430  cP458::vf14  size=276  [class]
void cP458::vf14(undefined4 param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  char *pcVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  pcVar4 = "P458_LIFT_00_UP";
  pbVar2 = param_2;
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < (byte)*pcVar4;
    if (bVar1 != *pcVar4) {
LAB_00d54460:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_00d54465;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < (byte)pcVar4[1];
    if (bVar1 != pcVar4[1]) goto LAB_00d54460;
    pbVar2 = pbVar2 + 2;
    pcVar4 = pcVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00d54465:
  if (iVar3 == 0) {
    iVar3 = FUN_00a81330();
    if (iVar3 != 0) {
      uVar7 = 0;
      FUN_00a81330(0);
      FUN_00a7c8a0();
      iVar3 = FUN_00a8c890(uVar7);
      if (*(int *)(iVar3 + 0x98) == 0) {
        uVar7 = 1;
        FUN_00a81330(1);
        FUN_00a7c8a0();
        FUN_00a8cb60(uVar7);
      }
    }
  }
  else {
    pbVar2 = &DAT_016bd114;
    do {
      bVar1 = *param_2;
      bVar5 = bVar1 < *pbVar2;
      if (bVar1 != *pbVar2) {
LAB_00d544e0:
        iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
        goto LAB_00d544e5;
      }
      if (bVar1 == 0) break;
      bVar1 = param_2[1];
      bVar5 = bVar1 < pbVar2[1];
      if (bVar1 != pbVar2[1]) goto LAB_00d544e0;
      param_2 = param_2 + 2;
      pbVar2 = pbVar2 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00d544e5:
    if (iVar3 == 0) {
      iVar3 = FUN_00a81330();
      if (iVar3 != 0) {
        FUN_00a81330();
        iVar3 = FUN_00a7c8a0();
        if (iVar3 != 0) {
          FUN_00407c40(0);
        }
      }
    }
  }
  pcVar4 = "P458_KOGE_CLEAR";
  uVar6 = 1;
  uVar7 = FUN_00e03ea0("P458_KOGE_CLEAR",1,"P458_KOGE_CLEAR");
  iVar3 = FUN_00d4f0b0(uVar7,uVar6,pcVar4);
  DAT_01dc51c4 = (uint)(iVar3 != 0);
  return;
}

// 00D54780  FUN_00d54780  size=193  [callgraph]
undefined4 __fastcall FUN_00d54780(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_retaddr;
  undefined4 uVar3;
  
  iVar1 = FUN_00a81330();
  if (iVar1 == 0) {
    return 0;
  }
  FUN_00a81330();
  iVar1 = FUN_00a7c8a0();
  if (iVar1 != 0) {
    iVar1 = FUN_00c18540(2);
    if (iVar1 != 0) {
      FUN_00407c40(1);
      FUN_00407ca0();
      FUN_00407ec0(0x41400000);
      uVar3 = 1;
      FUN_00a81330(1);
      FUN_00a7c8a0();
      FUN_00a8cb80(uVar3);
      *(undefined4 *)(unaff_retaddr + 4) = 1;
      puVar2 = (undefined4 *)FUN_00dd2bc0();
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = 0;
        puVar2[1] = 0;
      }
      puVar2[1] = 0;
      *puVar2 = 0x11;
      *(undefined4 *)(param_1 + 900) = 0;
      return 1;
    }
  }
  return 0;
}

// 00D54850  FUN_00d54850  size=109  [callgraph]
void FUN_00d54850(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      iVar1 = FUN_00410520();
      if (iVar1 < 0) {
        iVar1 = FUN_00a7f600(0x20144);
        if (iVar1 != 0) {
          uVar2 = FUN_00a7c8a0();
          iVar1 = FUN_00445b60(uVar2);
          if (iVar1 != 0) {
            uVar2 = FUN_00ac8660(0,0x7d);
            FUN_00410530(uVar2);
          }
        }
      }
    }
  }
  return;
}

// 00D548C0  FUN_00d548c0  size=234  [callgraph]
undefined4 FUN_00d548c0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  iVar1 = FUN_00a81330();
  if ((iVar1 == 0) || (iVar1 = FUN_00a81330(), iVar1 == 0)) {
    return 0;
  }
  pcVar4 = "P458_BOMB";
  uVar3 = 1;
  uVar2 = FUN_00e03ea0("P458_BOMB",1,"P458_BOMB");
  iVar1 = FUN_00d4f0b0(uVar2,uVar3,pcVar4);
  if (iVar1 == 0) {
    FUN_00a81330();
    iVar1 = FUN_00a7c8a0();
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = FUN_00410510();
    if ((iVar1 == 1) && (iVar1 = FUN_00c81dd0(0x21), iVar1 == 0)) {
      thunk_FUN_00c81bd0(0x21,1);
      uVar2 = 1;
      FUN_00a81330(1);
      FUN_00a7c8a0();
      FUN_00a8cb70(uVar2);
      uVar2 = 0xf;
      FUN_00a81330(0xf);
      FUN_00a7c8a0();
      FUN_00a8cb80(uVar2);
      FUN_00a33520(0,0x400,9);
      return 1;
    }
  }
  else {
    *(undefined4 *)(param_1 + 4) = 1;
  }
  return 1;
}

// 00D549B0  FUN_00d549b0  size=322  [callgraph]
uint __thiscall FUN_00d549b0(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  float10 fVar3;
  float10 fVar4;
  
  iVar1 = FUN_00a81330();
  puVar2 = (undefined4 *)0x0;
  if (iVar1 != 0) {
    FUN_00a81330();
    iVar1 = FUN_00a7c8a0();
    puVar2 = (undefined4 *)0x0;
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)FUN_00407cf0();
      if ((char)puVar2 == '\x01') {
        FUN_00407d90(1);
        FUN_00407c50();
        FUN_00407ec0(0);
        FUN_00408020(0);
        fVar3 = (float10)FUN_00a95680(0);
        fVar4 = (float10)FUN_00408420();
        *(float *)(param_1 + 0x31c) = (float)fVar4;
        fVar4 = (float10)FUN_00408430();
        fVar3 = (float10)*(float *)(param_1 + 0x31c) /
                ((float10)(float)fVar3 + fVar4 * (float10)(float)fVar3);
        *(float *)(param_1 + 400) = (float)fVar3;
        *(float *)(param_1 + 0x194) = (float)fVar3;
        *(float *)(param_1 + 0x150) = (float)fVar3;
        *(float *)(param_1 + 0x154) = (float)fVar3;
        *(undefined4 *)(param_1 + 0x198) = 0;
        *(undefined4 *)(param_1 + 0x158) = 0;
        *(undefined4 *)(param_1 + 0x324) = 0;
        *(undefined4 *)(param_1 + 800) = 0;
        *(undefined4 *)(param_1 + 0x328) = 0;
        puVar2 = (undefined4 *)FUN_00dd2bc0();
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = 0;
          puVar2[1] = 0;
        }
        puVar2[1] = 0;
        *puVar2 = 10;
        puVar2 = (undefined4 *)FUN_00dd2bc0();
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = 0;
          puVar2[1] = 0;
        }
        puVar2[1] = 0;
        *puVar2 = 0xb;
        *(undefined4 *)(param_1 + 0x310) = 0;
        *(undefined4 *)(param_1 + 0x314) = 0;
        *(undefined4 *)(param_1 + 0x318) = 0;
        *(undefined4 *)(param_1 + 0x32c) = 0;
        *param_2 = 9;
        puVar2 = param_2;
      }
    }
  }
  return (uint)puVar2 & 0xffffff00;
}

// 00D68350  cP458::vf10  size=56  [class]
void __fastcall cP458::vf10(int param_1)

{
  int *piVar1;
  
  *(undefined2 *)(param_1 + 0x2a0) = 0;
  FUN_00d66220();
  FUN_00d662f0();
  piVar1 = (int *)FUN_00910da0();
  (**(code **)(*piVar1 + 0x2c))(param_1 + 0x388);
  return;
}

// 00D6D220  cP458::vf00  size=65  [class]
undefined4 * __thiscall cP458::vf00(undefined4 *param_1,byte param_2)

{
  FUN_00d662a0();
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

// 00D6D270  FUN_00d6d270  size=211  [between]
char __fastcall FUN_00d6d270(int param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int local_74 [29];
  
  *(undefined4 *)(param_1 + 0x32c) = 0;
  *(undefined4 *)(param_1 + 0x340) = 0;
  *(undefined4 *)(param_1 + 0x34c) = 0;
  *(undefined4 *)(param_1 + 0x350) = 0;
  *(undefined4 *)(param_1 + 0x354) = 0;
  *(undefined4 *)(param_1 + 0x358) = 0;
  *(undefined4 *)(param_1 + 0x35c) = 0;
  *(undefined4 *)(param_1 + 0x360) = 0;
  *(undefined4 *)(param_1 + 0x364) = 0;
  cVar2 = '\0';
  *(undefined4 *)(param_1 + 0x368) = 0;
  iVar3 = FUN_00de4550("liftInfo.bxm",0);
  if (iVar3 != 0) {
    lib::InputTextArchive<char_const*,32>::InputTextArchive<char_const*,32>_4();
    cVar1 = FUN_00e91420(iVar3);
    cVar2 = '\0';
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(local_74[0] + 0x10))(&DAT_0164a448,0);
      cVar2 = FUN_00d69960(local_74,"liftControl",(undefined4 *)(param_1 + 0x34c));
      if (cVar2 == '\x01') {
        *(undefined4 *)(param_1 + 0x310) = 0;
      }
      if (cVar1 != '\0') {
        (**(code **)(local_74[0] + 0x14))(&DAT_0164a448,0);
      }
    }
    cXml::cXml_5();
  }
  return cVar2;
}

// 00D6D350  FUN_00d6d350  size=256  [between]
void __fastcall FUN_00d6d350(int param_1)

{
  undefined4 *puVar1;
  
  for (puVar1 = (undefined4 *)(**(code **)(*(int *)(param_1 + 0x2b0) + 0x1c))(0);
      puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)(**(code **)(*(int *)puVar1[-1] + 0x1c))(puVar1)) {
    switch(*puVar1) {
    case 1:
      FUN_00d49810(puVar1);
      break;
    case 2:
      FUN_00d49870(puVar1);
      break;
    case 3:
      FUN_00d498f0(puVar1);
      break;
    case 4:
      FUN_00d54780(puVar1);
      break;
    case 5:
      FUN_00d548c0(puVar1);
      break;
    case 6:
      FUN_00d499d0(puVar1);
      break;
    case 7:
      FUN_00d5b2e0(puVar1);
      break;
    case 8:
      FUN_00d549b0(puVar1);
      break;
    case 9:
      FUN_00d63480(puVar1);
      break;
    case 10:
      FUN_00d49a30(puVar1);
      break;
    case 0xb:
      FUN_00d49b20(puVar1);
      break;
    case 0xc:
      FUN_00d68570(puVar1);
      break;
    case 0xd:
      FUN_00d49ef0(puVar1);
      break;
    case 0xe:
      FUN_00d49f70(puVar1);
      break;
    case 0xf:
      FUN_00d4a010(puVar1);
      break;
    case 0x10:
      FUN_00d4a0b0(puVar1);
      break;
    case 0x11:
      FUN_00d49940(puVar1);
    }
  }
  return;
}

// 00D6D4A0  FUN_00d6d4a0  size=93  [between]
void __fastcall FUN_00d6d4a0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x1c))(0);
  while (iVar1 != 0) {
    if (*(int *)(iVar1 + 4) == 1) {
      iVar2 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x1c))();
      FUN_00dd4920(iVar1);
      iVar1 = iVar2;
    }
    else {
      iVar1 = (**(code **)(**(int **)(iVar1 + -4) + 0x1c))(iVar1);
    }
  }
  return;
}

// 00D6D500  cP458::vf30  size=849  [class]
undefined1 * cP458::vf30(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  char *pcVar5;
  bool bVar6;
  
  pbVar4 = &DAT_016bfa34;
  pbVar2 = param_1;
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) {
LAB_00d6d530:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00d6d535;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) goto LAB_00d6d530;
    pbVar2 = pbVar2 + 2;
    pbVar4 = pbVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00d6d535:
  if (iVar3 == 0) {
    return &LAB_00d54550;
  }
  pbVar4 = &DAT_016bfa28;
  pbVar2 = param_1;
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) {
LAB_00d6d570:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00d6d575;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) goto LAB_00d6d570;
    pbVar2 = pbVar2 + 2;
    pbVar4 = pbVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00d6d575:
  if (iVar3 == 0) {
    return &LAB_00d54590;
  }
  pcVar5 = "DownLiftLeft";
  pbVar2 = param_1;
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_00d6d5b0:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00d6d5b5;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_00d6d5b0;
    pbVar2 = pbVar2 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00d6d5b5:
  if (iVar3 == 0) {
    return &LAB_00d545c0;
  }
  pcVar5 = "LiftRightCrashBox";
  pbVar2 = param_1;
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_00d6d5f0:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00d6d5f5;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_00d6d5f0;
    pbVar2 = pbVar2 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00d6d5f5:
  if (iVar3 == 0) {
    return &LAB_00d545f0;
  }
  pcVar5 = "DownLiftLeftStartStay";
  pbVar2 = param_1;
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_00d6d630:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00d6d635;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_00d6d630;
    pbVar2 = pbVar2 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00d6d635:
  if (iVar3 == 0) {
    return &LAB_00d54620;
  }
  pcVar5 = "DownEndLiftLeft";
  pbVar2 = param_1;
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_00d6d670:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00d6d675;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_00d6d670;
    pbVar2 = pbVar2 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00d6d675:
  if (iVar3 == 0) {
    return &LAB_00d54650;
  }
  pcVar5 = "KogekkoWorkInitialize";
  pbVar2 = param_1;
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_00d6d6b0:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00d6d6b5;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_00d6d6b0;
    pbVar2 = pbVar2 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00d6d6b5:
  if (iVar3 == 0) {
    return &LAB_00d54680;
  }
  pcVar5 = "PlayerLiftLeftRideNow";
  pbVar2 = param_1;
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_00d6d6f0:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00d6d6f5;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_00d6d6f0;
    pbVar2 = pbVar2 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00d6d6f5:
  if (iVar3 == 0) {
    return &LAB_00d546b0;
  }
  pcVar5 = "PlayerLiftLeftRide";
  pbVar2 = param_1;
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_00d6d730:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00d6d735;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_00d6d730;
    pbVar2 = pbVar2 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00d6d735:
  if (iVar3 == 0) {
    return &LAB_00d546f0;
  }
  pcVar5 = "LiftCrash";
  pbVar2 = param_1;
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_00d6d770:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00d6d775;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_00d6d770;
    pbVar2 = pbVar2 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00d6d775:
  if (iVar3 == 0) {
    return &LAB_00d49800;
  }
  pcVar5 = "PlayerDeadEnd";
  pbVar2 = param_1;
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_00d6d7b0:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00d6d7b5;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_00d6d7b0;
    pbVar2 = pbVar2 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00d6d7b5:
  if (iVar3 == 0) {
    return &LAB_00d68550;
  }
  pcVar5 = "AntiqueScrEnd";
  pbVar2 = param_1;
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_00d6d7f0:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00d6d7f5;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_00d6d7f0;
    pbVar2 = pbVar2 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00d6d7f5:
  if (iVar3 == 0) {
    return &LAB_00d54720;
  }
  pcVar5 = "StartUnitEffect";
  while( true ) {
    bVar1 = *param_1;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) break;
    if (bVar1 == 0) {
      return &DAT_00d54750;
    }
    bVar1 = param_1[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) break;
    param_1 = param_1 + 2;
    pcVar5 = pcVar5 + 2;
    if (bVar1 == 0) {
      return &DAT_00d54750;
    }
  }
  return (undefined1 *)(~-(uint)(1 - bVar6 != (uint)(bVar6 != 0)) & 0xd54750);
}

// 00D710D0  cP458::vf08  size=597  [class]
void __fastcall cP458::vf08(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 uVar4;
  int *piVar5;
  undefined4 uVar6;
  uint *puVar7;
  undefined1 local_114 [4];
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e0 [36];
  undefined4 local_50;
  undefined1 local_2c;
  
  FUN_0118f7b0();
  local_50 = 0;
  local_2c = 5;
  local_e0[0] = 0x14;
  piVar5 = (int *)FUN_00910da0();
  local_110 = 0x41780000;
  local_10c = 0x42c80000;
  local_108 = 0x3f800000;
  local_f0 = 0;
  local_ec = 0x3fc90fdb;
  local_e8 = 0;
  local_100 = 0xc337e8f6;
  local_fc = 0x43a8399a;
  local_f8 = 0xc1200000;
  uVar6 = (**(code **)(*piVar5 + 4))(local_114,local_e0,&local_100,&local_f0,&local_110,1);
  FUN_00910ab0(uVar6);
  iVar1 = *(int *)(param_1 + 0x388);
  if (iVar1 != 0) {
    if (DAT_01885d68 != 1) {
      iVar2 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
      if ((*(int *)(iVar2 + 4) == 0) && (DAT_01b35fac != 0)) {
        if (DAT_01885db8 == 0) {
          FUN_00dd72e0();
        }
        else {
          FUN_00dd5650(&DAT_0163b898);
        }
      }
      piVar5 = (int *)(iVar2 + 4);
      *piVar5 = *piVar5 + 1;
    }
    uVar3 = *(uint *)(iVar1 + 0xc);
    puVar7 = (uint *)(-(uint)(uVar3 != 0) & uVar3);
    *puVar7 = *puVar7 | 0x200;
    puVar7[0xb] = 0xf;
    if (DAT_01885d68 != 1) {
      piVar5 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar5 = *piVar5 + -1;
      if (((*piVar5 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  FUN_00917bd0(*(undefined4 *)(param_1 + 0x388),4);
  FUN_00917bd0(*(undefined4 *)(param_1 + 0x388),0x20);
  FUN_00917bd0(*(undefined4 *)(param_1 + 0x388),2);
  FUN_00917bd0(*(undefined4 *)(param_1 + 0x388),8);
  FUN_00917bd0(*(undefined4 *)(param_1 + 0x388),0x40);
  FUN_00911ca0("programmabled_5180");
  FUN_0091a930(0x1f);
  DAT_01dc51c4 = 0;
  *(undefined4 *)(param_1 + 0x38c) = 0;
  (**(code **)(DAT_01dc51e8 + 0x40))(4,0x10,0x10,&DAT_01b7bd48,"P458_FactoryFixed");
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0x40))(8,0x10,0x10,&DAT_01b7bd48,"P458_FactoryFixed");
  DAT_018b9128 = 0;
  *(undefined1 *)(param_1 + 0x2a0) = 0;
  uVar4 = FUN_00d6d270();
  *(undefined4 *)(param_1 + 900) = 0;
  *(undefined1 *)(param_1 + 0x2a1) = uVar4;
  return;
}

// 00D71330  cP458::vf0C  size=178  [class]
void __fastcall cP458::vf0C(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x2a0) == '\0') {
    cVar1 = FUN_00d62ff0();
    *(char *)(param_1 + 0x2a0) = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    FUN_00d493f0();
  }
  FUN_00d68490();
  if (DAT_018b9128 == 2) {
    FUN_00d63860();
  }
  FUN_00d6d350();
  FUN_00d6d4a0();
  iVar2 = FUN_00d45860(*(undefined4 *)(param_1 + 4),"P458_RPG");
  iVar3 = FUN_00d45980();
  if (iVar3 == iVar2) {
    FUN_00d54850();
  }
  if ((DAT_01dc51c4 != 0) && (*(int *)(param_1 + 0x38c) == 0)) {
    FUN_0091a930(0x14);
    *(undefined4 *)(param_1 + 0x38c) = 1;
  }
  FUN_00d4a130();
  FUN_00d4a410();
  return;
}


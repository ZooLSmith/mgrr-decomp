// src/boss/bm018f/Bm018f.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00410E20..00AC3E60, 19 functions

#include "mgrr.h"
#include "Bm018f.h"

// 00410E20  Bm018f::cCallEfBm018fSlot::vf10  size=1  [class]
void Bm018f::cCallEfBm018fSlot::vf10(void)

{
  return;
}

// 00410E30  Bm018f::cCallEfBm018fSlot::vf14  size=1  [class]
void Bm018f::cCallEfBm018fSlot::vf14(void)

{
  return;
}

// 00410E40  Bm018f::vf44  size=184  [class]
void __fastcall Bm018f::vf44(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  BehaviorBgBase::vf44();
  if (*(int *)(param_1 + 0xb70) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb58));
  }
  if (*(int *)(param_1 + 0xb44) != 0) {
    iVar1 = FUN_00a7c7e0();
    if (iVar1 != 0) {
      iVar1 = FUN_009451d0(1);
      if (iVar1 == 0) {
        FUN_009453f0(1,1);
      }
      uVar4 = 0;
      uVar3 = 0;
      uVar2 = 0;
      FUN_00a7c8a0(0,0,0);
      FUN_00a8ca80(uVar2,uVar3,uVar4);
    }
  }
  if (*(int *)(param_1 + 0xb70) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb58));
  }
  FUN_00dd7270();
  if (*(int *)(param_1 + 0xb7c) != 0) {
    FUN_00d8a1d0(0x10,*(int *)(param_1 + 0xb7c));
    if (*(undefined4 **)(param_1 + 0xb7c) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0xb7c))(1);
      *(undefined4 *)(param_1 + 0xb7c) = 0;
    }
  }
  return;
}

// 00410F00  Bm018f::vf4C  size=5  [class]
void __fastcall Bm018f::vf4C(int *param_1)

{
  float fVar1;
  
  (**(code **)(*param_1 + 0x218))();
  if ((param_1[0x1cd] < 1) && (0 < param_1[0x1cc])) {
    param_1[0x1cc] = param_1[0x1cc] + -1;
  }
  if ((param_1[499] != 0) && (param_1[500] != 0)) {
    FUN_00d82990(param_1[500]);
  }
  if (param_1[0x22c] != 0) {
    fVar1 = (float)param_1[0x22d] - 1.0;
    param_1[0x22d] = (int)fVar1;
    if (NAN(fVar1) || 0.0 < fVar1 == (fVar1 == 0.0)) {
      E3_EnemyBoardDebrisSokushi::vf4C();
    }
  }
  if (((*(byte *)(param_1 + 0x130) & 1) != 0) && (param_1[0x27d] != 0)) {
    param_1[0x206] = 1;
  }
  return;
}

// 00410F10  Bm018f::vf50  size=49  [class]
void __fastcall Bm018f::vf50(int param_1)

{
  FUN_00a93170();
  Bm0201::vf50();
  if (*(int *)(param_1 + 0x7b4) != 0) {
    FUN_0091ea00(param_1);
  }
  if (*(int *)(param_1 + 0x7b0) != 0) {
    FUN_008f3cb0(param_1);
  }
  return;
}

// 00410F50  Bm018f::setCutCrerateInfo  size=31  [class]
void Bm018f::setCutCrerateInfo(undefined4 *param_1,undefined4 param_2,int param_3)

{
  if (0 < param_3) {
    do {
      *param_1 = 0x42119;
      param_1 = param_1 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// 00410F70  FUN_00410f70  size=42  [between]
uint FUN_00410f70(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  puVar2 = &DAT_01b34b48;
  (**(code **)(*param_1 + 4))(&DAT_01b34b48);
  iVar1 = FUN_00dd6d80(puVar2);
  return -(uint)(iVar1 != 0) & (uint)param_1;
}

// 00410FA0  Bm018f::cCallEfBm018fSlot::vf00  size=38  [class]
undefined4 * __thiscall Bm018f::cCallEfBm018fSlot::vf00(undefined4 *param_1,byte param_2)

{
  param_1[1] = 0;
  *param_1 = Slot::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00410FD0  Bm018f::startup  size=133  [class]
undefined4 __fastcall Bm018f::startup(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = BehaviorBm::startup();
  if (iVar1 == 0) {
    return 0;
  }
  FUN_00dd7240();
  if (*(undefined4 **)(param_1 + 0x370) != (undefined4 *)0x0) {
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 0x400000;
    **(undefined4 **)(param_1 + 0x370) = 0;
  }
  *(undefined4 *)(param_1 + 0xb40) = 0;
  *(undefined4 *)(param_1 + 0xb44) = 0;
  uVar2 = FUN_00e03ea0(&DAT_0163cb70);
  *(undefined4 *)(param_1 + 0xb48) = uVar2;
  uVar2 = FUN_00e03ea0("d20_switch2");
  *(undefined4 *)(param_1 + 0xb4c) = uVar2;
  uVar2 = FUN_00e03ea0("P140_GOOD_OPEN");
  *(undefined4 *)(param_1 + 0xb78) = 0;
  *(undefined4 *)(param_1 + 0xb7c) = 0;
  *(undefined4 *)(param_1 + 0xb50) = uVar2;
  return 1;
}

// 00411060  FUN_00411060  size=411  [between]
void __fastcall FUN_00411060(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_11c [3];
  undefined1 local_110 [4];
  undefined2 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined1 local_c4;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined1 local_a0 [156];
  
  local_130 = 0;
  local_12c = 0;
  local_128 = 0;
  local_11c[0] = 1;
  local_11c[1] = 2;
  local_11c[2] = 3;
  local_134 = 0;
  do {
    uVar1 = local_11c[local_134];
    FUN_00405140(*(undefined4 *)(param_1 + 0x4f0),0x10,uVar1,&local_130,&local_130,0x41200000,
                 0x3f000000,0xbf800000);
    FUN_00c5abe0(local_a0);
    FUN_00a7c930();
    FUN_00a7c950();
    local_f8 = 0x41400000;
    local_100 = 0x3f000000;
    local_f0 = 0;
    local_10c = 0xffff;
    local_ec = 0;
    local_e8 = 0;
    local_d4 = 0;
    local_d8 = 0;
    local_fc = 0;
    local_108 = 0;
    local_104 = 0;
    local_e0 = 0;
    local_dc = 0;
    local_c8 = 0;
    local_cc = 0;
    local_c4 = 0;
    local_c0 = 0;
    local_b8 = 0;
    local_b4 = 0;
    local_ac = 1;
    local_b0 = 0xffffffff;
    FUN_00c151f0(1,*(undefined4 *)(param_1 + 0x4f0),uVar1,&local_130,0,0x40400000,0x3f800000,1,8);
    uVar1 = FUN_00c57830(local_110);
    iVar2 = FUN_00c4d470(uVar1);
    if (iVar2 != 0) {
      *(undefined1 *)(iVar2 + 0x4c) = 3;
    }
    local_134 = local_134 + 1;
  } while (local_134 < 3);
  return;
}

// 00411200  FUN_00411200  size=322  [between]
void __fastcall FUN_00411200(int param_1)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  int *piVar7;
  int iVar8;
  bool bVar9;
  
  if ((*(int *)(param_1 + 0xb40) != 0) && (*(char *)(param_1 + 0xb80) == '\0')) {
    iVar3 = FUN_00a7c8a0();
    if (*(int *)(iVar3 + 0x4b0) == 0xf0d01) {
      FUN_00aa92c0(1);
      iVar8 = 0;
      if (0 < *(short *)(iVar3 + 0x324)) {
        piVar7 = (int *)(*(int *)(iVar3 + 800) + 0x60);
        do {
          pbVar6 = *(byte **)(*piVar7 + 0x40);
          if (pbVar6 != (byte *)0x0) {
            pbVar4 = &DAT_0163bc14;
            do {
              bVar2 = *pbVar4;
              bVar9 = bVar2 < *pbVar6;
              if (bVar2 != *pbVar6) {
LAB_00411290:
                iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
                goto LAB_00411295;
              }
              if (bVar2 == 0) break;
              bVar2 = pbVar4[1];
              bVar9 = bVar2 < pbVar6[1];
              if (bVar2 != pbVar6[1]) goto LAB_00411290;
              pbVar4 = pbVar4 + 2;
              pbVar6 = pbVar6 + 2;
            } while (bVar2 != 0);
            iVar5 = 0;
LAB_00411295:
            if (iVar5 == 0) {
              if ((iVar8 != -1) && (iVar8 = iVar8 * 0x70 + *(int *)(iVar3 + 800), iVar8 != 0)) {
                puVar1 = (uint *)(iVar8 + 0x38);
                *puVar1 = *puVar1 | 1;
              }
              break;
            }
          }
          iVar8 = iVar8 + 1;
          piVar7 = piVar7 + 0x1c;
        } while (iVar8 < *(short *)(iVar3 + 0x324));
      }
      iVar8 = 0;
      if (0 < *(short *)(iVar3 + 0x324)) {
        piVar7 = (int *)(*(int *)(iVar3 + 800) + 0x60);
        do {
          pbVar6 = *(byte **)(*piVar7 + 0x40);
          if (pbVar6 != (byte *)0x0) {
            pbVar4 = &DAT_0163bc0c;
            do {
              bVar2 = *pbVar4;
              bVar9 = bVar2 < *pbVar6;
              if (bVar2 != *pbVar6) {
LAB_00411300:
                iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
                goto LAB_00411305;
              }
              if (bVar2 == 0) break;
              bVar2 = pbVar4[1];
              bVar9 = bVar2 < pbVar6[1];
              if (bVar2 != pbVar6[1]) goto LAB_00411300;
              pbVar4 = pbVar4 + 2;
              pbVar6 = pbVar6 + 2;
            } while (bVar2 != 0);
            iVar5 = 0;
LAB_00411305:
            if (iVar5 == 0) {
              if ((iVar8 != -1) && (iVar3 = iVar8 * 0x70 + *(int *)(iVar3 + 800), iVar3 != 0)) {
                puVar1 = (uint *)(iVar3 + 0x38);
                *puVar1 = *puVar1 | 1;
              }
              break;
            }
          }
          iVar8 = iVar8 + 1;
          piVar7 = piVar7 + 0x1c;
          if (*(short *)(iVar3 + 0x324) <= iVar8) {
            *(undefined1 *)(param_1 + 0xb80) = 1;
            return;
          }
        } while( true );
      }
    }
    *(undefined1 *)(param_1 + 0xb80) = 1;
  }
  return;
}

// 00411350  Bm018f::cCallEfBm018fSlot::vf18  size=15  [class]
void __fastcall Bm018f::cCallEfBm018fSlot::vf18(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00411200();
  }
  return;
}

// 00411360  Bm018f::vf48  size=425  [class]
void __fastcall Bm018f::vf48(int *param_1)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  undefined *puVar4;
  
  iVar1 = FUN_00932720();
  if (iVar1 == 0x140) {
    if (param_1[0x2d0] == 0) {
      iVar1 = FUN_00a18d70(param_1[0x2d2],0xf0d01);
      param_1[0x2d0] = iVar1;
      if (iVar1 != 0) {
        piVar2 = (int *)FUN_00a7c8a0();
        if (piVar2 != (int *)0x0) {
          puVar4 = &DAT_01b34b48;
          (**(code **)(*piVar2 + 4))(&DAT_01b34b48);
          FUN_00dd6d80(puVar4);
        }
        iVar1 = FUN_004090b0();
        if (iVar1 != 0) {
          FUN_004090b0();
          iVar1 = FUN_00c1e300();
          if (iVar1 == 0) {
            pcVar3 = *(code **)(*param_1 + 0x20);
          }
          else {
            pcVar3 = *(code **)(*param_1 + 0x1c);
          }
          (*pcVar3)();
        }
        FUN_00a8c5f0(0,param_1[0x2d0],param_1[0x13c],0x10,0xffffffff);
      }
    }
    else {
      piVar2 = (int *)FUN_00a7c8a0();
      if (piVar2 != (int *)0x0) {
        puVar4 = &DAT_01b34b48;
        (**(code **)(*piVar2 + 4))(&DAT_01b34b48);
        FUN_00dd6d80(puVar4);
      }
      iVar1 = FUN_004090b0();
      if (iVar1 != 0) {
        FUN_004090b0();
        iVar1 = FUN_00c1e300();
        if (iVar1 == 0) {
          (**(code **)(*param_1 + 0x20))();
        }
        else {
          iVar1 = FUN_00d4f040(param_1[0x2d4],1);
          if (iVar1 == 0) {
            (**(code **)(*param_1 + 0x1c))();
          }
        }
      }
    }
    if (param_1[0x2d1] == 0) {
      iVar1 = FUN_00a18d70(param_1[0x2d3],0xf0c00);
      param_1[0x2d1] = iVar1;
      iVar1 = FUN_00d4f120("P140_HOTEL_BTL",1);
      if (iVar1 != 0) {
        E3_EnemyBoardDebrisSokushi::vf4C();
      }
    }
    if ((param_1[0x2de] == 0) && (iVar1 = FUN_00d45a70("P140_DOGTAG_OUT"), iVar1 != 0)) {
      FUN_00411060();
      param_1[0x2de] = 1;
    }
  }
  Bm0201::thunk_vf48();
  return;
}

// 00411510  Bm018f::vf1D0  size=302  [class]
void Bm018f::vf1D0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float10 fVar8;
  
  iVar7 = FUN_00932720();
  if ((iVar7 != 0x140) || (iVar7 = FUN_00d4f120("P140_ADD_SET",1), iVar7 != 0)) {
    fVar1 = *(float *)(param_1 + 0xa0);
    fVar2 = *(float *)(param_1 + 0xa4);
    fVar3 = *(float *)(param_1 + 0xa8);
    fVar4 = *(float *)(param_1 + 0xb0);
    fVar5 = *(float *)(param_1 + 0xb4);
    fVar6 = *(float *)(param_1 + 0xb8);
    FUN_00ddbaa0(-(*(float *)(param_1 + 0xa8) /
                  SQRT(*(float *)(param_1 + 200) * *(float *)(param_1 + 200) +
                       *(float *)(param_1 + 0xc4) * *(float *)(param_1 + 0xc4) +
                       *(float *)(param_1 + 0xc0) * *(float *)(param_1 + 0xc0))));
    fVar8 = (float10)fpatan((float10)*(float *)(param_1 + 0xa4) /
                            (float10)SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6),
                            (float10)*(float *)(param_1 + 0xa0) /
                            (float10)SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3));
    fVar8 = fVar8 * (float10)57.29578;
    if ((*(int *)(param_1 + 0x94) != 0) &&
       (((*(int *)(param_1 + 0xec) != 0 && ((float10)60.0 <= fVar8)) &&
        (fVar8 < (float10)120.0 != (fVar8 == (float10)120.0))))) {
      Bm0201::vf1D0(param_1);
      return;
    }
  }
  return;
}

// 00411640  Bm018f::vf2C  size=16  [class]
void Bm018f::vf2C(void)

{
  FUN_00411200();
  Bh0056::vf2C();
  return;
}

// 00AB0100  Bm018f::Bm018f  size=28  [class]
undefined4 * __fastcall Bm018f::Bm018f(undefined4 *param_1)

{
  BehaviorBm::BehaviorBm();
  *param_1 = vftable;
  param_1[0x2dc] = 0;
  return param_1;
}

// 00AB0120  Bm018f::vf04  size=6  [class]
undefined * Bm018f::vf04(void)

{
  return &DAT_01b34b94;
}

// 00AB8E60  Bm018f::destruct  size=54  [class]
undefined4 __thiscall Bm018f::destruct(undefined4 param_1,byte param_2)

{
  FUN_00dd7270();
  cEspControler::~cEspControler();
  FUN_0040d3f0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00AC3E60  Bm018f::thunk_vf54  size=5  [class]
void __fastcall Bm018f::thunk_vf54(int param_1)

{
  Behavior::vf54();
  if (((*(byte *)(param_1 + 0x4c0) & 1) != 0) && (*(int *)(param_1 + 0x8a0) != 0)) {
    if (*(int *)(param_1 + 0x8a8) == 0) {
      if (*(int *)(param_1 + 0x7b4) != 0) {
        FUN_0091e980(param_1);
      }
      if (*(int *)(param_1 + 0x7b0) != 0) {
        FUN_008f7700(param_1);
      }
    }
    if ((*(int *)(param_1 + 0x7b4) != 0) || (*(int *)(param_1 + 0x7b0) != 0)) {
      FUN_00a17aa0();
      return;
    }
  }
  return;
}


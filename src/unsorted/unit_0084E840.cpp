// src/unsorted/unit_0084E840.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0084E840..0084EE50, 3 functions

#include "mgrr.h"

// 0084E840  FUN_0084e840  size=873  [run]
undefined4 __fastcall FUN_0084e840(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar2 = BehaviorAppBase::vf40();
  if (iVar2 != 0) {
    FUN_00dd7240();
    *(undefined4 *)(param_1 + 0x640) = 2;
    lib::StaticArray<Collision*,250>::StaticArray<Collision*,250>(8);
    uVar4 = 2;
    FUN_00a92fb0(2);
    FUN_00e08640(uVar4);
    local_c = 1;
    local_8 = 1;
    local_4 = 1;
    iVar2 = lib::StaticArray<Behavior::EffectIntegrationContainer,32>::
            StaticArray<Behavior::EffectIntegrationContainer,32>(&local_c);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x7b4) = 0;
      *(undefined4 *)(param_1 + 0x874) = 10;
      *(undefined4 *)(param_1 + 0x870) = 10;
      iVar2 = lib::StaticArray<Constraints,32>::StaticArray<Constraints,32>();
      if (iVar2 != 0) {
        iVar3 = 0;
        iVar2 = 0;
        if (0 < *(short *)(param_1 + 0x324)) {
          do {
            puVar1 = (uint *)(*(int *)(param_1 + 800) + 0x38 + iVar3);
            *puVar1 = *puVar1 & 0xfffffffe;
            iVar2 = iVar2 + 1;
            iVar3 = iVar3 + 0x70;
          } while (iVar2 < *(short *)(param_1 + 0x324));
        }
        if (*(int *)(param_1 + 0x4b0) == 0xf0070) {
          iVar2 = FUN_00a82090("ExcelParts",0xf0071,0);
          if (iVar2 != 0) {
            uVar4 = FUN_00a7c7f0();
            FUN_00a7c960(uVar4);
            FUN_00a8c5f0(0,*(undefined4 *)(param_1 + 0x4f0),iVar2,1,0xffffffff);
          }
          iVar2 = FUN_00a82090("ExcelParts",0xf0072,0);
          if (iVar2 != 0) {
            uVar4 = FUN_00a7c7f0();
            FUN_00a7c960(uVar4);
            FUN_00a8c5f0(1,*(undefined4 *)(param_1 + 0x4f0),iVar2,2,0xffffffff);
          }
          iVar2 = FUN_00a82090("ExcelParts",0xf0073,0);
          if (iVar2 != 0) {
            uVar4 = FUN_00a7c7f0();
            FUN_00a7c960(uVar4);
            FUN_00a8c5f0(2,*(undefined4 *)(param_1 + 0x4f0),iVar2,3,0xffffffff);
          }
          iVar2 = FUN_00a82090("ExcelParts",0xf0074,0);
          if (iVar2 != 0) {
            uVar4 = FUN_00a7c7f0();
            FUN_00a7c960(uVar4);
            FUN_00a8c5f0(3,*(undefined4 *)(param_1 + 0x4f0),iVar2,4,0xffffffff);
          }
          iVar2 = FUN_00a82090("ExcelParts",0xf0075,0);
          if (iVar2 != 0) {
            uVar4 = FUN_00a7c7f0();
            FUN_00a7c960(uVar4);
            FUN_00a8c5f0(4,*(undefined4 *)(param_1 + 0x4f0),iVar2,5,0xffffffff);
          }
        }
        if (*(int *)(param_1 + 0x4b0) == 0xf0076) {
          iVar2 = FUN_00a82090("ExcelParts",0xf0077,0);
          if (iVar2 != 0) {
            uVar4 = FUN_00a7c7f0();
            FUN_00a7c960(uVar4);
            FUN_00a8c5f0(0,*(undefined4 *)(param_1 + 0x4f0),iVar2,1,0xffffffff);
          }
          iVar2 = FUN_00a82090("ExcelParts",0xf0078,0);
          if (iVar2 != 0) {
            uVar4 = FUN_00a7c7f0();
            FUN_00a7c960(uVar4);
            FUN_00a8c5f0(1,*(undefined4 *)(param_1 + 0x4f0),iVar2,2,0xffffffff);
          }
          iVar2 = FUN_00a82090("ExcelParts",0xf0079,0);
          if (iVar2 != 0) {
            uVar4 = FUN_00a7c7f0();
            FUN_00a7c960(uVar4);
            FUN_00a8c5f0(2,*(undefined4 *)(param_1 + 0x4f0),iVar2,3,0xffffffff);
          }
          FUN_00a7c950();
          FUN_00a7c950();
        }
        *(undefined1 *)(param_1 + 0xae4) = 0;
        iVar2 = FUN_00a81330();
        if (iVar2 != 0) {
          FUN_00a81330();
          uVar4 = FUN_00a7c8a0();
          FUN_00843e70(uVar4);
          FUN_00848290();
        }
        FUN_00a04500();
        return 1;
      }
    }
  }
  return 0;
}

// 0084ECB0  FUN_0084ecb0  size=402  [run]
void __fastcall FUN_0084ecb0(int *param_1)

{
  float fVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  
  if (param_1[0x2ac] == 0) {
    Behavior::vf4C();
    if (param_1[300] == 0xf0070) {
      iVar3 = FUN_00a81330();
      if (iVar3 == 0) {
        piVar4 = (int *)FUN_00847d10();
        iVar3 = (**(code **)(*piVar4 + 0x32c))();
        if (iVar3 == 0) {
          cVar2 = (char)param_1[0x2b9];
          if (cVar2 < '\x04') {
            iVar3 = FUN_00a81330();
            if (iVar3 != 0) {
              FUN_00a81330();
              uVar5 = FUN_00a7c8a0();
              FUN_00843e70(uVar5);
              FUN_00848290();
              *(char *)(param_1 + 0x2b9) = (char)param_1[0x2b9] + '\x01';
            }
          }
          else if (cVar2 == '\x04') {
            *(undefined1 *)(param_1 + 0x2b9) = 0xfe;
          }
          else if (cVar2 == '\x05') {
            FUN_009fdde0();
          }
        }
      }
    }
    if (param_1[300] == 0xf0076) {
      iVar3 = FUN_00a81330();
      if (iVar3 == 0) {
        piVar4 = (int *)FUN_00847d10();
        iVar3 = (**(code **)(*piVar4 + 0x32c))();
        if (iVar3 == 0) {
          cVar2 = (char)param_1[0x2b9];
          if (cVar2 < '\x02') {
            iVar3 = FUN_00a81330();
            if (iVar3 != 0) {
              FUN_00a81330();
              uVar5 = FUN_00a7c8a0();
              FUN_00843e70(uVar5);
              FUN_00848290();
              *(char *)(param_1 + 0x2b9) = (char)param_1[0x2b9] + '\x01';
            }
          }
          else {
            if (cVar2 == '\x02') {
              *(undefined1 *)(param_1 + 0x2b9) = 0xfe;
              return;
            }
            if (cVar2 == '\x03') {
              FUN_009fdde0();
              return;
            }
          }
        }
      }
    }
  }
  else {
    (**(code **)(*param_1 + 0x20))();
    fVar1 = (float)param_1[0x2ad];
    param_1[0x2ad] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] < 0.0) {
      param_1[0x2ac] = 0;
      FUN_009fdde0();
      return;
    }
  }
  return;
}

// 0084EE50  FUN_0084ee50  size=413  [run]
void __fastcall FUN_0084ee50(int *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  float unaff_ESI;
  float10 fVar6;
  undefined *puVar7;
  float fStack_28;
  float fStack_24;
  float local_20 [7];
  
  if (param_1[0x187] == 0) {
    param_1[0x187] = 1;
    param_1[0x248] = 0x43340000;
    param_1[0x249] = 0;
    param_1[0x2b0] = 0;
    param_1[0x2b1] = 0;
    param_1[0x2b2] = 0x3e19999a;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  fVar1 = (float)param_1[0x248];
  param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
  fVar2 = (float)param_1[0x249];
  param_1[0x249] = (int)(fVar2 - (float)param_1[0x244]);
  if (fVar2 - (float)param_1[0x244] < 0.0) {
    param_1[0x249] = 0x41200000;
  }
  if (fVar1 - (float)param_1[0x244] < 0.0) {
    param_1[0x2ac] = 1;
    param_1[0x2ad] = 0x42700000;
  }
  D3DXVec3TransformNormal(local_20,param_1 + 0x2b0,param_1 + 4);
  fVar1 = (float)param_1[0x244];
  param_1[0x14] = (int)((float)param_1[0x14] + unaff_ESI * fVar1);
  param_1[0x15] = (int)(fStack_28 * fVar1 + (float)param_1[0x15]);
  param_1[0x16] = (int)(fStack_24 * fVar1 + (float)param_1[0x16]);
  param_1[0x17] = (int)(local_20[0] * fVar1 + (float)param_1[0x17]);
  iVar3 = FUN_00c13920();
  if (iVar3 != 0) {
    piVar4 = (int *)FUN_00c13920();
    iVar3 = (**(code **)(*piVar4 + 0x28))(0);
    if (iVar3 != 0) {
      piVar4 = (int *)FUN_00a7c8a0();
      if (piVar4 != (int *)0x0) {
        puVar7 = &DAT_01b35b20;
        (**(code **)(*piVar4 + 4))(&DAT_01b35b20);
        iVar3 = FUN_00dd6d80(puVar7);
        uVar5 = -(uint)(iVar3 != 0) & (uint)piVar4;
        goto LAB_0084ef99;
      }
    }
  }
  uVar5 = 0;
LAB_0084ef99:
  FUN_00a8e880(uVar5 + 0x40);
  iVar3 = *param_1;
  fVar6 = (float10)FUN_00fdc1f0(0x393702d3,(float)param_1[0x244] * 0.55850536,0);
  (**(code **)(iVar3 + 0x308))((float)fVar6);
  return;
}


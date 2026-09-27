// src/unsorted/unit_005BE520.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005BE520..005BE520, 1 functions

#include "types.h"

// 005BE520  FUN_005be520  size=413  [run]
void __fastcall FUN_005be520(int *param_1)

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
        puVar7 = &DAT_01be9db8;
        (**(code **)(*piVar4 + 4))(&DAT_01be9db8);
        iVar3 = FUN_00dd6d80(puVar7);
        uVar5 = -(uint)(iVar3 != 0) & (uint)piVar4;
        goto LAB_005be669;
      }
    }
  }
  uVar5 = 0;
LAB_005be669:
  FUN_00a8e880(uVar5 + 0x40);
  iVar3 = *param_1;
  fVar6 = (float10)FUN_00fdc1f0(0x393702d3,(float)param_1[0x244] * 0.55850536,0);
  (**(code **)(iVar3 + 0x308))((float)fVar6);
  return;
}


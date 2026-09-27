// src/misc/switchD_005c85d4.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005C7630..005C7630, 1 functions

#include "types.h"

// 005C7630  switchD_005c85d4::default  size=690  [class]
void __fastcall switchD_005c85d4::default(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  float unaff_ESI;
  bool bVar5;
  float10 fVar6;
  float10 fVar7;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  undefined4 uStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  float fStack_a4;
  float afStack_a0 [3];
  undefined1 auStack_94 [24];
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined1 auStack_54 [80];
  
  bVar5 = (DAT_01bea094 & 0x20000) != 0;
  if (bVar5) {
    piVar1 = (int *)FUN_00c13920();
  }
  else {
    piVar1 = (int *)FUN_00c13920();
  }
  iVar2 = (**(code **)(*piVar1 + 0x28))(bVar5);
  piVar1 = (int *)0x0;
  if (iVar2 != 0) {
    piVar1 = (int *)FUN_00a7c8a0();
  }
  uStack_c4 = 0;
  uStack_c0 = 0;
  uStack_bc = 0;
  uStack_b8 = 0x3f800000;
  if (piVar1 != (int *)0x0) {
    puVar3 = (undefined4 *)(**(code **)(*piVar1 + 0x204))(&uStack_e4);
    uStack_c4 = *puVar3;
    uStack_c0 = puVar3[1];
    uStack_bc = puVar3[2];
    uStack_b8 = puVar3[3];
  }
  iVar2 = FUN_00a12210(1);
  fStack_ec = 0.0;
  fStack_f0 = 0.0;
  if (iVar2 != 0) {
    thunk_FUN_00dde510(&fStack_ec,&fStack_f0,&uStack_c4,iVar2 + 0x40);
  }
  fStack_ec = fStack_ec * -1.0;
  if (fStack_ec <= 0.7853982) {
    if (fStack_ec < 0.08726646) {
      fStack_ec = 0.08726646;
    }
  }
  else {
    fStack_ec = 0.7853982;
  }
  fStack_e8 = fStack_f0;
  iVar4 = (**(code **)(*param_1 + 0x84))();
  fVar6 = (float10)FUN_00ddba30(fStack_e8 - *(float *)(iVar4 + 4));
  fStack_f0 = (float)fVar6;
  fVar7 = (float10)1.3962634;
  if (fVar6 <= fVar7) {
    fVar7 = (float10)-1.3962634;
    if (fVar6 < fVar7) {
      fStack_f0 = (float)fVar7;
      fVar6 = fVar7;
    }
  }
  else {
    fStack_f0 = (float)fVar7;
    fVar6 = fVar7;
  }
  fStack_e8 = (float)fVar6;
  iVar4 = (**(code **)(*param_1 + 0x84))();
  fVar6 = (float10)FUN_00ddba30(*(float *)(iVar4 + 4) + fStack_e8);
  fStack_f0 = (float)fVar6;
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_ac = 0x40a00000;
  uStack_a8 = 0x3f800000;
  puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x68))();
  uStack_d4 = *puVar3;
  uStack_d0 = puVar3[1];
  uStack_cc = puVar3[2];
  fStack_a4 = fStack_ec;
  afStack_a0[0] = fStack_f0;
  afStack_a0[1] = 0.0;
  afStack_a0[2] = 1.0;
  if (iVar2 != 0) {
    uStack_d4 = *(undefined4 *)(iVar2 + 0x40);
    uStack_d0 = *(undefined4 *)(iVar2 + 0x44);
    uStack_cc = *(undefined4 *)(iVar2 + 0x48);
  }
  uStack_e4 = 0x3f800000;
  iStack_e0 = 0x3f800000;
  uStack_dc = 0x3f800000;
  uStack_d8 = 0x3f800000;
  thunk_FUN_00ddc1d0(auStack_94,&fStack_a4,5);
  FUN_00ddd140(auStack_54,&uStack_e4);
  D3DXMatrixMultiply(auStack_94,auStack_54,auStack_94);
  iStack_70 = iStack_e0;
  uStack_6c = uStack_dc;
  uStack_68 = uStack_d8;
  D3DXVec3TransformNormal(&fStack_f0,&uStack_c0,afStack_a0);
  param_1[0x424] = (int)(fStack_7c + unaff_ESI);
  param_1[0x425] = (int)(fStack_78 + fStack_f8);
  param_1[0x426] = (int)(fStack_74 + fStack_f4);
  param_1[0x427] = iStack_70;
  return;
}


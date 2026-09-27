// src/camera/cCameraGame.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C4CCA0..00DC7BC0, 5 functions

#include "mgrr.h"
#include "cCameraGame.h"

// 00C4CCA0  cCameraGame::cCameraGame  size=39  [class]
undefined4 * __fastcall cCameraGame::cCameraGame(undefined4 *param_1)

{
  cCameraApp::cCameraApp();
  *param_1 = vftable;
  param_1[0xb0] = vftable;
  FUN_00a7c930();
  return param_1;
}

// 00C4CCD0  cCameraGame::vf00  size=11  [class]
void cCameraGame::vf00(void)

{
  vf00();
  return;
}

// 00C4CCE0  cCameraGame::vf00  size=41  [class]
undefined4 * __thiscall cCameraGame::vf00(undefined4 *param_1,byte param_2)

{
  param_1[0xb0] = cCameraFrustum::vftable;
  *param_1 = Hw::CameraProj::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00DC0F20  cCameraGame::vf0C  size=69  [class]
void __fastcall cCameraGame::vf0C(int param_1)

{
  FUN_00a7c970(0);
  *(undefined4 *)(param_1 + 0x374) = 0;
  *(undefined4 *)(param_1 + 0x378) = 0;
  *(undefined1 *)(param_1 + 0x5d0) = 0;
  *(undefined4 *)(param_1 + 0x580) = 0;
  *(undefined4 *)(param_1 + 0x5d4) = 0;
  *(undefined4 *)(param_1 + 0x584) = 1;
  *(undefined4 *)(param_1 + 0x570) = 0;
  return;
}

// 00DC7BC0  cCameraGame::vf10  size=409  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall cCameraGame::vf10(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  FUN_00dc25c0(param_1);
  FUN_00da5990();
  if ((DAT_01bea094 & 0x20000) == 0) {
LAB_00dc7c00:
    iVar3 = FUN_00a81330();
    if (iVar3 == 0) {
      FUN_00ddafc0(param_1 + 0x720);
      goto LAB_00dc7c92;
    }
  }
  else {
    piVar2 = (int *)FUN_00c13920();
    iVar3 = (**(code **)(*piVar2 + 0x28))(1);
    if (iVar3 == 0) goto LAB_00dc7c00;
  }
  FUN_00db55c0(param_1 + 0x720,param_1);
  iVar3 = FUN_00db56a0();
  if (iVar3 == 0) {
    uVar1 = 0x3eb33333;
  }
  else {
    uVar1 = 0x3e19999a;
  }
  *(undefined4 *)(param_1 + 0x6e0) = uVar1;
  if (((*(int *)(param_1 + 0x378) != 0) && (*(int *)(*(int *)(param_1 + 0x378) + 0x4e4) != 0)) &&
     (iVar3 = *(int *)(param_1 + 0x6e8), 0.0 < *(float *)(iVar3 + 0x348))) {
    *(float *)(iVar3 + 0x348) = *(float *)(iVar3 + 0x348) - _DAT_01be942c;
  }
LAB_00dc7c92:
  if (*(int *)(param_1 + 0x8bc) == 0) {
    iVar3 = FUN_00db56a0();
    if (iVar3 != 0) {
      *(undefined4 *)(param_1 + 0x8bc) = 1;
    }
  }
  else if ((*(float *)(param_1 + 0x784) != 0.0) || (*(float *)(param_1 + 0x780) != 0.0)) {
    *(undefined4 *)(param_1 + 0x8bc) = 0;
  }
  piVar2 = *(int **)(*(int *)(param_1 + 0x6e4) + 100);
  if (piVar2 == (int *)0x0) {
    iVar3 = -1;
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x20))();
    iVar3 = *(int *)(iVar3 + 8);
  }
  if (((iVar3 != 5) && ((iVar3 < 0xc || (0xe < iVar3)))) && (*(int *)(param_1 + 0x950) != 0)) {
    FUN_00da94c0();
    return;
  }
  FUN_00db82c0();
  FUN_00dc2f50(param_1,*(undefined4 *)(param_1 + 0x6e8));
  FUN_00da41a0(param_1,*(undefined4 *)(param_1 + 0x6e8));
  FUN_00dc1410();
  return;
}


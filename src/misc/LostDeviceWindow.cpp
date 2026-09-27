// src/misc/LostDeviceWindow.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00999120..009992F0, 5 functions

#include "mgrr.h"
#include "LostDeviceWindow.h"

// 00999120  LostDeviceWindow::~LostDeviceWindow  size=39  [class]
void __fastcall LostDeviceWindow::~LostDeviceWindow(undefined4 *param_1)

{
  *param_1 = vftable;
  if ((undefined4 *)param_1[0xe] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xe])(1);
    param_1[0xe] = 0;
  }
  cCustomObjCtrlManager::~cCustomObjCtrlManager();
  return;
}

// 00999150  LostDeviceWindow::vf00  size=60  [class]
undefined4 * __thiscall LostDeviceWindow::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((undefined4 *)param_1[0xe] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xe])(1);
    param_1[0xe] = 0;
  }
  cCustomObjCtrlManager::~cCustomObjCtrlManager();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 009991E0  LostDeviceWindow::vf04  size=60  [class]
void __fastcall LostDeviceWindow::vf04(int *param_1)

{
  int iVar1;
  
  if (param_1[1] == 0) {
    iVar1 = FUN_00ccdda0(param_1[2]);
    if (iVar1 == 0) {
      param_1[1] = -1;
      return;
    }
    (**(code **)(*param_1 + 8))();
    param_1[1] = param_1[1] + 1;
  }
  else if (param_1[1] != 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0099921a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x14))();
  return;
}

// 00999220  LostDeviceWindow::vf08  size=202  [class]
void __fastcall LostDeviceWindow::vf08(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00cb25d0(0x32);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  uVar1 = FUN_00cb25d0(0x33);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  uVar1 = FUN_00cb25d0(0x34);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  uVar1 = FUN_00cb25d0(0x35);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  uVar1 = FUN_00cb25d0(0x5b);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  uVar1 = FUN_00cb25d0(0x5c);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  FUN_00cf9770(*(undefined4 *)(param_1 + 0x28),"CORE_SYS_MES_81",0,1);
  FUN_00cf9770(*(undefined4 *)(param_1 + 0x2c),"CORE_SYS_MES_81",0,1);
  FUN_00cb2600(1);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x30),0);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x34),0);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x20),1);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x24),0);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x28),1);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x2c),1);
  return;
}

// 009992F0  LostDeviceWindow::create  size=268  [class]
void __fastcall LostDeviceWindow::create(int param_1)

{
  float fVar1;
  int iVar2;
  char cVar3;
  float fStack_5c;
  float fStack_58;
  float local_54 [16];
  int iStack_14;
  float fStack_10;
  
  if (*(int **)(param_1 + 0x38) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x38) + 4))();
  }
  if (((*(int *)(param_1 + 0x1c) == 0) && (*(int *)(param_1 + 0x38) != 0)) &&
     (*(int *)(*(int *)(param_1 + 0x38) + 0x1c) != 0)) {
    *(undefined4 *)(param_1 + 0x1c) = 1;
    FUN_00988d40();
    iVar2 = FUN_00d29cc0(*(undefined4 *)(param_1 + 0x28),local_54);
    if (iVar2 != 0) {
      fVar1 = 0.0;
      cVar3 = '\0';
      if (0 < iStack_14) {
        iVar2 = 0;
        do {
          if (fVar1 < local_54[iVar2] + fStack_10) {
            fVar1 = local_54[iVar2] + fStack_10;
          }
          cVar3 = cVar3 + '\x01';
          iVar2 = (int)cVar3;
        } while (iVar2 < iStack_14);
      }
      fStack_5c = 1.0;
      if (360.0 < fVar1) {
        fStack_5c = (fVar1 * 0.0027777778 - 1.0) * 0.5 + 1.0;
      }
      fStack_58 = 1.0;
      if (3 < iStack_14) {
        fStack_58 = (float)(iStack_14 + -3) * 0.25 + 1.0;
      }
      if (*(int *)(param_1 + 0x38) != 0) {
        iVar2 = FUN_00cb2760(*(undefined4 *)(*(int *)(param_1 + 0x38) + 0x90));
        *(float *)(iVar2 + 0xd0) = fStack_5c;
        *(float *)(iVar2 + 0xd4) = fStack_58;
      }
    }
  }
  return;
}


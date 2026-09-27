// src/misc/cMessWindow.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00999A60..009AA670, 6 functions

#include "mgrr.h"
#include "cMessWindow.h"

// 00999A60  cMessWindow::cMessWindow  size=79  [class]
undefined4 * __fastcall cMessWindow::cMessWindow(undefined4 *param_1)

{
  int iVar1;
  
  cCustomObjCtrlManager::cCustomObjCtrlManager();
  *param_1 = vftable;
  *(undefined1 *)(param_1 + 0x28) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  iVar1 = 0;
  do {
    if ((&DAT_01b3921c)[iVar1] == 0) {
      (&DAT_01b3921c)[iVar1] = 1;
      param_1[0x2e] = iVar1 + 4;
      return param_1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  return param_1;
}

// 00999AB0  cMessWindow::~cMessWindow  size=81  [class]
void __fastcall cMessWindow::~cMessWindow(undefined4 *param_1)

{
  *param_1 = vftable;
  if ((undefined4 *)param_1[0x2d] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x2d])(1);
    param_1[0x2d] = 0;
  }
  FUN_00cfe0f0(param_1[0x2e]);
  if (param_1[0x2e] != 0) {
    (&DAT_01b3920c)[param_1[0x2e]] = 0;
  }
  cCustomObjCtrlManager::~cCustomObjCtrlManager();
  return;
}

// 00999B10  cMessWindow::vf08  size=525  [class]
void __fastcall cMessWindow::vf08(int param_1)

{
  undefined4 uVar1;
  bool bVar2;
  
  uVar1 = FUN_00cb25d0(1);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  uVar1 = FUN_00cb25d0(2);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  uVar1 = FUN_00cb25d0(3);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  uVar1 = FUN_00cb25d0(4);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  uVar1 = FUN_00cb25d0(5);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  uVar1 = FUN_00cb25d0(6);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  uVar1 = FUN_00cb25d0(7);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  uVar1 = FUN_00cb25d0(8);
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  uVar1 = FUN_00cb25d0(9);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  uVar1 = FUN_00cb25d0(0xb);
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  uVar1 = FUN_00cb25d0(0xc);
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  uVar1 = FUN_00cb25d0(0xd);
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  uVar1 = FUN_00cb25d0(0xe);
  *(undefined4 *)(param_1 + 0x4c) = uVar1;
  uVar1 = FUN_00cb25d0(0xf);
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  uVar1 = FUN_00cb25d0(0x10);
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  uVar1 = FUN_00cb25d0(0x11);
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  uVar1 = FUN_00cb25d0(0x12);
  *(undefined4 *)(param_1 + 0x5c) = uVar1;
  uVar1 = FUN_00cb25d0(0x13);
  *(undefined4 *)(param_1 + 0x60) = uVar1;
  uVar1 = FUN_00cb25d0(0x15);
  *(undefined4 *)(param_1 + 100) = uVar1;
  uVar1 = FUN_00cb25d0(0x16);
  *(undefined4 *)(param_1 + 0x68) = uVar1;
  uVar1 = FUN_00cb25d0(0x17);
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  uVar1 = FUN_00cb25d0(0x18);
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  uVar1 = FUN_00cb25d0(0x19);
  *(undefined4 *)(param_1 + 0x74) = uVar1;
  uVar1 = FUN_00cb25d0(0x1a);
  *(undefined4 *)(param_1 + 0x78) = uVar1;
  uVar1 = FUN_00cb25d0(0x1b);
  *(undefined4 *)(param_1 + 0x7c) = uVar1;
  uVar1 = FUN_00cb25d0(0x1c);
  *(undefined4 *)(param_1 + 0x80) = uVar1;
  uVar1 = FUN_00cb25d0(0x1d);
  *(undefined4 *)(param_1 + 0x84) = uVar1;
  uVar1 = FUN_00cb25d0(0x32);
  *(undefined4 *)(param_1 + 0x88) = uVar1;
  uVar1 = FUN_00cb25d0(0x33);
  *(undefined4 *)(param_1 + 0x8c) = uVar1;
  uVar1 = FUN_00cb25d0(0x34);
  *(undefined4 *)(param_1 + 0x90) = uVar1;
  uVar1 = FUN_00cb25d0(0x35);
  *(undefined4 *)(param_1 + 0x94) = uVar1;
  uVar1 = FUN_00cb25d0(0x5b);
  *(undefined4 *)(param_1 + 0x98) = uVar1;
  uVar1 = FUN_00cb25d0(0x5c);
  *(undefined4 *)(param_1 + 0x9c) = uVar1;
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x88),0);
  bVar2 = *(int *)(param_1 + 0xac) == 0;
  if (bVar2) {
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x98),0);
    uVar1 = *(undefined4 *)(param_1 + 0x9c);
  }
  else {
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x98),1);
    uVar1 = *(undefined4 *)(param_1 + 0x9c);
  }
  FUN_00cb2310(uVar1,bVar2);
  FUN_00cb2600(1);
  FUN_00cb2630(1);
  return;
}

// 00999D20  FUN_00999d20  size=78  [callgraph]
void FUN_00999d20(int param_1)

{
  if (param_1 == 0) {
    FUN_00ce4d70(1);
    FUN_00ce4d70(5);
  }
  else {
    if (param_1 == 1) {
      FUN_00ce4d70(2);
      FUN_00ce4d70(5);
      return;
    }
    if (param_1 == 2) {
      FUN_00ce4d70(7);
      FUN_00ce4d70(5);
      return;
    }
  }
  return;
}

// 009AA600  cMessWindow::vf00  size=102  [class]
undefined4 * __thiscall cMessWindow::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((undefined4 *)param_1[0x2d] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x2d])(1);
    param_1[0x2d] = 0;
  }
  FUN_00cfe0f0(param_1[0x2e]);
  if (param_1[0x2e] != 0) {
    (&DAT_01b3920c)[param_1[0x2e]] = 0;
  }
  cCustomObjCtrlManager::~cCustomObjCtrlManager();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 009AA670  cMessWindow::create  size=1348  [class]
void __fastcall cMessWindow::create(int param_1)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  char cVar9;
  undefined4 uVar10;
  float fVar11;
  float local_a8;
  float local_a4;
  undefined4 local_74;
  float local_68 [16];
  int local_28;
  float local_24;
  
  switch(*(undefined1 *)(param_1 + 0xa0)) {
  case 0:
    FUN_00999d20(*(undefined4 *)(param_1 + 0xa4));
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x88),1);
    *(undefined4 *)(param_1 + 0xb0) = 0;
    FUN_00cb2740(0);
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x90),
                 (&PTR_s_CORE_SYS_MES_00_0188ec60)[*(int *)(param_1 + 0xa8)],0,0xffffffff);
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x94),
                 (&PTR_s_CORE_SYS_MES_00_0188ec60)[*(int *)(param_1 + 0xa8)],0,0xffffffff);
    FUN_00988d40();
    iVar6 = FUN_00d29cc0(*(undefined4 *)(param_1 + 0x90),local_68);
    if (iVar6 != 0) {
      fVar11 = 0.0;
      cVar9 = '\0';
      if (0 < local_28) {
        iVar6 = 0;
        do {
          if (fVar11 < local_68[iVar6] + local_24) {
            fVar11 = local_68[iVar6] + local_24;
          }
          cVar9 = cVar9 + '\x01';
          iVar6 = (int)cVar9;
        } while (iVar6 < local_28);
      }
      local_a8 = 1.0;
      if (360.0 < fVar11) {
        local_a8 = (fVar11 * 0.0027777778 - 1.0) * 0.5 + 1.0;
      }
      iVar6 = FUN_00cb2760(*(undefined4 *)(param_1 + 0x8c));
      *(float *)(iVar6 + 0xd0) = local_a8;
      local_a4 = 1.0;
      if ((*(int *)(param_1 + 0xa8) == 0xd) || (*(int *)(param_1 + 0xa8) == 0x33)) {
        local_28 = local_28 + 2;
        iVar7 = cSavingIcon::cSavingIcon_2();
        *(int *)(param_1 + 0xb4) = iVar7;
        if ((iVar7 != 0) && (5 < local_28)) {
          *(undefined4 *)(iVar7 + 0x30) = 1;
          *(undefined4 *)(iVar7 + 0x50) = 0;
          *(undefined4 *)(iVar7 + 0x58) = 0;
          *(float *)(iVar7 + 0x54) = (float)(local_28 + -5) * -19.0;
          *(undefined4 *)(iVar7 + 0x5c) = local_74;
        }
      }
      if (3 < local_28) {
        local_a4 = (float)(local_28 + -3) * 0.25 + 1.0;
        *(float *)(iVar6 + 0xd4) = local_a4;
      }
      cVar9 = '\0';
      do {
        puVar1 = (undefined4 *)(param_1 + 0x40 + cVar9 * 4);
        FUN_00cb2bc0(*(undefined4 *)(param_1 + 0x40 + cVar9 * 4),local_a8);
        fVar11 = local_a8;
        if (cVar9 == '\x04') {
          uVar10 = *(undefined4 *)(param_1 + 0x50);
        }
        else if (local_a8 <= 1.0) {
          uVar10 = *puVar1;
        }
        else {
          uVar10 = *puVar1;
          fVar11 = local_a8 * 0.99;
        }
        FUN_00cb2bc0(uVar10,fVar11);
        cVar9 = cVar9 + '\x01';
      } while (cVar9 < '\t');
      pfVar8 = (float *)FUN_00cb2790(*(undefined4 *)(param_1 + 0x8c));
      fVar11 = *pfVar8;
      fVar2 = pfVar8[1];
      pfVar8 = (float *)FUN_00cb2790(*(undefined4 *)(param_1 + 0x1c));
      fVar3 = *pfVar8;
      fVar4 = pfVar8[1];
      pfVar8 = (float *)FUN_00cb2790(*(undefined4 *)(param_1 + 0x24));
      fVar5 = *pfVar8;
      fVar3 = fVar3 - fVar11;
      fVar3 = fVar3 * local_a8 - fVar3;
      if (1.0 < local_a8) {
        fVar3 = fVar3 - 1.0;
      }
      FUN_00cb28a0(*(undefined4 *)(param_1 + 0x1c),fVar3);
      FUN_00cb28a0(*(undefined4 *)(param_1 + 0x20),fVar3);
      FUN_00cb28a0(*(undefined4 *)(param_1 + 0x30),fVar3);
      FUN_00cb28a0(*(undefined4 *)(param_1 + 0x34),fVar3);
      fVar5 = fVar5 - fVar11;
      fVar5 = fVar5 * local_a8 - fVar5;
      if (1.0 < local_a8) {
        fVar5 = fVar5 + 1.0;
      }
      FUN_00cb28a0(*(undefined4 *)(param_1 + 0x24),fVar5);
      FUN_00cb28a0(*(undefined4 *)(param_1 + 0x28),fVar5);
      FUN_00cb28a0(*(undefined4 *)(param_1 + 0x38),fVar5);
      FUN_00cb28a0(*(undefined4 *)(param_1 + 0x3c),fVar5);
      if (3 < local_28) {
        fVar11 = local_a4 * (fVar4 - fVar2) - (fVar4 - fVar2);
        FUN_00cb2900(*(undefined4 *)(param_1 + 0x1c),fVar11);
        FUN_00cb2900(*(undefined4 *)(param_1 + 0x20),fVar11);
        FUN_00cb2900(*(undefined4 *)(param_1 + 0x24),fVar11);
        FUN_00cb2900(*(undefined4 *)(param_1 + 0x28),fVar11);
        FUN_00cb2900(*(undefined4 *)(param_1 + 0x2c),fVar11);
        FUN_00cb2900(*(undefined4 *)(param_1 + 0x30),fVar11);
        FUN_00cb2900(*(undefined4 *)(param_1 + 0x34),fVar11);
        FUN_00cb2900(*(undefined4 *)(param_1 + 0x38),fVar11);
        FUN_00cb2900(*(undefined4 *)(param_1 + 0x3c),fVar11);
        if ((*(int *)(param_1 + 0xa8) == 0xd) || (*(int *)(param_1 + 0xa8) == 0x33)) {
          FUN_00cb2900(*(undefined4 *)(param_1 + 0x90),0x42180000);
          FUN_00cb2900(*(undefined4 *)(param_1 + 0x94),0x42180000);
        }
      }
    }
    *(char *)(param_1 + 0xa0) = *(char *)(param_1 + 0xa0) + '\x01';
    break;
  case 1:
    fVar11 = *(float *)(param_1 + 0xb0) + 0.1;
    *(float *)(param_1 + 0xb0) = fVar11;
    if (!NAN(fVar11) && 1.0 < fVar11 != (fVar11 == 1.0)) {
      *(undefined4 *)(param_1 + 0xb0) = 0x3f800000;
      *(undefined1 *)(param_1 + 0xa1) = 1;
      FUN_00999e10();
      *(char *)(param_1 + 0xa0) = *(char *)(param_1 + 0xa0) + '\x01';
    }
    goto LAB_009aab89;
  case 2:
    if (*(int *)(param_1 + 0xb4) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0xb4) + 0x2c) = 1;
    }
    break;
  case 3:
    fVar11 = *(float *)(param_1 + 0xb0) - 0.1;
    *(float *)(param_1 + 0xb0) = fVar11;
    if (fVar11 < 0.0) {
      *(undefined4 *)(param_1 + 0xb0) = 0;
      *(undefined1 *)(param_1 + 0xa2) = 1;
      if (*(undefined4 **)(param_1 + 0xb4) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 0xb4))(1);
        *(undefined4 *)(param_1 + 0xb4) = 0;
      }
      *(char *)(param_1 + 0xa0) = *(char *)(param_1 + 0xa0) + '\x01';
    }
LAB_009aab89:
    FUN_00cb2740(*(undefined4 *)(param_1 + 0xb0));
  }
  if (*(int **)(param_1 + 0xb4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xb4) + 4))();
  }
  return;
}


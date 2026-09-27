// src/phase/app/pf02.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D46E90..00D6FC80, 4 functions

#include "types.h"

// 00D46E90  Pf02::vf0C  size=1071  [class]
void __fastcall Pf02::vf0C(int param_1)

{
  uint *puVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  
  switch(*(undefined4 *)(param_1 + 0x138)) {
  case 0:
    if ((DAT_01b3920c != 0) && (iVar5 = UserManager::SetSigninPad(), iVar5 != 0)) {
      *(undefined4 *)(*(int *)(param_1 + 0x124) + 0xb0) = 1;
      *(int *)(param_1 + 0x138) = *(int *)(param_1 + 0x138) + 1;
      *(undefined4 *)(param_1 + 0x13c) = 0;
    }
    break;
  case 1:
    *(int *)(param_1 + 0x13c) = *(int *)(param_1 + 0x13c) + 1;
    if (*(int *)(*(int *)(param_1 + 0x124) + 0x38) == 5) {
      FUN_009c6650();
      *(int *)(param_1 + 0x138) = *(int *)(param_1 + 0x138) + 1;
    }
    break;
  case 2:
    if (DAT_01b5d1d8 != 0) {
      return;
    }
    iVar5 = FUN_009a6540();
    *(int *)(param_1 + 0x128) = iVar5;
    if (iVar5 == 0) {
      FUN_00dd5650(&DAT_016bc4c8);
    }
    if (*(undefined4 **)(param_1 + 0x124) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x124))(1);
      *(undefined4 *)(param_1 + 0x124) = 0;
    }
    *(int *)(param_1 + 0x138) = *(int *)(param_1 + 0x138) + 1;
    break;
  case 3:
    if (*(int *)(param_1 + 0x128) != 0) {
      cVar2 = *(char *)(*(int *)(param_1 + 0x128) + 200);
      if (cVar2 == '\x04') {
        iVar5 = FUN_00995320();
        *(int *)(param_1 + 0x124) = iVar5;
        if (iVar5 == 0) {
          FUN_00dd5650(&DAT_016bc4b0);
        }
        else {
          DAT_01b3920c = 1;
        }
        if (*(undefined4 **)(param_1 + 0x128) != (undefined4 *)0x0) {
          (**(code **)**(undefined4 **)(param_1 + 0x128))(1);
          *(undefined4 *)(param_1 + 0x128) = 0;
        }
        *(undefined4 *)(param_1 + 0x138) = 0;
      }
      else if (cVar2 == '\x14') {
        uVar4 = cFade::set(0,0,0xff000000,0x1e,1,0,0x68);
        *(undefined4 *)(param_1 + 0x140) = uVar4;
        *(undefined4 *)(param_1 + 0x138) = 10;
      }
      else if (cVar2 == '\x1f') {
        *(undefined4 *)(param_1 + 0x138) = 0x14;
      }
    }
    break;
  case 10:
    iVar5 = FUN_00eb4340(*(undefined4 *)(param_1 + 0x140));
    if (iVar5 != 0) {
      DAT_01bea09c = DAT_01bea09c | 0x48100000;
      FUN_00ebdd50(*(undefined4 *)(param_1 + 0x140));
      uVar4 = cFade::set(0,0xff000000,0,0x1e,1,0,0x68);
      *(undefined4 *)(param_1 + 0x140) = uVar4;
      if (*(undefined4 **)(param_1 + 0x128) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 0x128))(1);
        *(undefined4 *)(param_1 + 0x128) = 0;
      }
      iVar5 = FUN_0099afa0();
      *(int *)(param_1 + 300) = iVar5;
      if (iVar5 == 0) {
        FUN_00dd5650(&DAT_016bc490);
      }
      *(undefined4 *)(param_1 + 0x138) = 0xb;
    }
    break;
  case 0xb:
    if (*(char *)(*(int *)(param_1 + 300) + 0x5f) != '\0') {
      FUN_00ebdd50(*(undefined4 *)(param_1 + 0x140));
      uVar4 = cFade::set(0,0,0xff000000,0x1e,1,0,0x68);
      *(undefined4 *)(param_1 + 0x140) = uVar4;
      *(undefined4 *)(param_1 + 0x138) = 0xc;
    }
    break;
  case 0xc:
    iVar5 = FUN_00eb4340(*(undefined4 *)(param_1 + 0x140));
    if (iVar5 == 0) break;
    FUN_00a4a410(4);
    FUN_00a4a410(1);
    FUN_00a4a410(0xb);
    FUN_00ebdd50(*(undefined4 *)(param_1 + 0x140));
    uVar4 = cFade::set(0,0xff000000,0,0x1e,1,0,0x68);
    *(undefined4 *)(param_1 + 0x140) = uVar4;
    if (*(undefined4 **)(param_1 + 300) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 300))(1);
      *(undefined4 *)(param_1 + 300) = 0;
    }
    iVar5 = FUN_009a6540();
    *(int *)(param_1 + 0x128) = iVar5;
    if (iVar5 == 0) {
      FUN_00dd5650(&DAT_016bc4c8);
    }
    FUN_00994f20(3);
    goto LAB_00d4725d;
  case 0x14:
    if (*(undefined4 **)(param_1 + 0x128) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x128))(1);
      *(undefined4 *)(param_1 + 0x128) = 0;
    }
    iVar5 = cPauseMenuBg::cPauseMenuBg_2();
    *(int *)(param_1 + 0x134) = iVar5;
    if (iVar5 == 0) {
      FUN_00dd5650(&DAT_016a3614);
    }
    iVar5 = FUN_009a8c20();
    *(int *)(param_1 + 0x130) = iVar5;
    if (iVar5 == 0) {
      FUN_00dd5650(&DAT_016bc478);
    }
    *(undefined4 *)(param_1 + 0x138) = 0x15;
    break;
  case 0x15:
    puVar1 = (uint *)(*(int *)(*(int *)(param_1 + 0x134) + 0x14) + 0x28);
    *puVar1 = *puVar1 & 0xfbffffff;
    puVar3 = *(undefined4 **)(param_1 + 0x130);
    if (*(char *)(puVar3 + 0x14f) != '\0') {
      if (puVar3 != (undefined4 *)0x0) {
        (**(code **)*puVar3)(1);
        *(undefined4 *)(param_1 + 0x130) = 0;
      }
      if (*(undefined4 **)(param_1 + 0x134) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 0x134))(1);
        *(undefined4 *)(param_1 + 0x134) = 0;
      }
      *(undefined4 *)(param_1 + 0x138) = 0x16;
    }
    break;
  case 0x16:
    iVar5 = FUN_009a6540();
    *(int *)(param_1 + 0x128) = iVar5;
    if (iVar5 == 0) {
      FUN_00dd5650(&DAT_016bc4c8);
    }
LAB_00d4725d:
    *(undefined4 *)(param_1 + 0x138) = 3;
  }
  if (*(int **)(param_1 + 0x124) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x124) + 4))();
  }
  if (*(int **)(param_1 + 0x128) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x128) + 4))();
  }
  if (*(int *)(param_1 + 300) != 0) {
    FUN_009aca10();
  }
  if (*(int **)(param_1 + 0x130) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x130) + 4))();
  }
  if (*(int **)(param_1 + 0x134) == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00d472ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x134) + 4))();
  return;
}

// 00D503E0  Pf02::vf08  size=257  [class]
void __fastcall Pf02::vf08(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  DAT_01bea084 = DAT_01bea084 | 0x200000;
  FUN_00db3e80(0,0,&DAT_01bea1d0);
  *(undefined4 *)(param_1 + 0x11c) = 0;
  uVar1 = FUN_00a82090("title",0x10110,0);
  *(undefined4 *)(param_1 + 0x11c) = uVar1;
  piVar2 = (int *)FUN_00c13920();
  iVar3 = (**(code **)(*piVar2 + 0x28))(0);
  if (iVar3 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    (**(code **)(*piVar2 + 0x20))();
  }
  *(undefined4 *)(param_1 + 0x120) = 0;
  iVar3 = FUN_00a7f600(0x10012);
  if (iVar3 != 0) {
    *(int *)(param_1 + 0x120) = iVar3;
    piVar2 = (int *)FUN_00a7c8a0();
    (**(code **)(*piVar2 + 0x20))();
  }
  DAT_01bea070 = DAT_01bea070 | 0x200000;
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  iVar3 = FUN_00995320();
  *(int *)(param_1 + 0x124) = iVar3;
  if (iVar3 == 0) {
    FUN_00dd5650(&DAT_016bc4b0);
  }
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x134) = 0;
  FUN_00c16770(0);
  FUN_009c6630();
  FUN_00f98ad0(1);
  return;
}

// 00D504F0  Pf02::vf10  size=263  [class]
void __fastcall Pf02::vf10(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(undefined4 **)(param_1 + 0x124) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x124))(1);
    *(undefined4 *)(param_1 + 0x124) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x128) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x128))(1);
    *(undefined4 *)(param_1 + 0x128) = 0;
  }
  if (*(undefined4 **)(param_1 + 300) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 300))(1);
    *(undefined4 *)(param_1 + 300) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x130) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x130))(1);
    *(undefined4 *)(param_1 + 0x130) = 0;
  }
  if (*(int *)(param_1 + 0x120) != 0) {
    piVar1 = (int *)FUN_00a7c8a0();
    (**(code **)(*piVar1 + 0x1c))();
    *(undefined4 *)(param_1 + 0x120) = 0;
  }
  piVar1 = (int *)FUN_00c13920();
  iVar2 = (**(code **)(*piVar1 + 0x28))(0);
  if (iVar2 != 0) {
    piVar1 = (int *)FUN_00a7c8a0();
    (**(code **)(*piVar1 + 0x1c))();
  }
  if (*(int *)(param_1 + 0x11c) != 0) {
    FUN_00a805f0();
    *(undefined4 *)(param_1 + 0x11c) = 0;
  }
  if (*(int *)(param_1 + 0x140) != 0) {
    FUN_00ebdd50(*(int *)(param_1 + 0x140));
    *(undefined4 *)(param_1 + 0x140) = 0;
  }
  DAT_01bea070 = DAT_01bea070 & 0xffdfffff;
  if (*(int *)(param_1 + 0x138) == 0xb) {
    DAT_01bea09c = DAT_01bea09c & 0xb7efffff;
  }
  DAT_01bea084 = DAT_01bea084 & 0xffdfffff;
  FUN_00f98ad0(0);
  return;
}

// 00D6FC80  Pf02::vf00  size=54  [class]
undefined4 * __thiscall Pf02::vf00(undefined4 *param_1,byte param_2)

{
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


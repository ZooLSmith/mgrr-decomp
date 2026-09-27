// src/phase/app/pf01.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D4F6F0..00D70C60, 5 functions

#include "types.h"

// 00D4F6F0  cPf01::vf08  size=396  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall cPf01::vf08(int param_1)

{
  int *piVar1;
  int iVar2;
  
  DAT_01bea084 = DAT_01bea084 | 0x200000;
  FUN_00db3e80(0,0,&DAT_01bea1d0);
  *(undefined4 *)(param_1 + 0x11c) = 0;
  piVar1 = (int *)FUN_00c13920();
  iVar2 = (**(code **)(*piVar1 + 0x28))(0);
  if (iVar2 != 0) {
    piVar1 = (int *)FUN_00a7c8a0();
    (**(code **)(*piVar1 + 0x20))();
  }
  *(undefined4 *)(param_1 + 0x120) = 0;
  iVar2 = FUN_00a7f600(0x10012);
  if (iVar2 != 0) {
    *(int *)(param_1 + 0x120) = iVar2;
    piVar1 = (int *)FUN_00a7c8a0();
    (**(code **)(*piVar1 + 0x20))();
  }
  DAT_01bea070 = DAT_01bea070 | 0x200000;
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x144) = 0;
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  iVar2 = FUN_00995320();
  *(int *)(param_1 + 0x124) = iVar2;
  if (iVar2 == 0) {
    FUN_00dd5650(&DAT_016bcc2c);
  }
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0x15c) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  *(undefined4 *)(param_1 + 0x170) = 0;
  *(undefined4 *)(param_1 + 0x174) = 0;
  *(undefined4 *)(param_1 + 0x178) = 0;
  *(undefined4 *)(param_1 + 0x17c) = 0;
  FUN_00c16770(0);
  FUN_009c6630();
  FUN_00c820c0(1);
  DAT_01b391ca = (_DAT_01bea098 & 0x80000000) != 0;
  DAT_01bea094 = DAT_01bea094 & 0xffffffeb;
  _DAT_01bea098 = _DAT_01bea098 & 0x3fffffff;
  FUN_00f98ad0(1);
  FUN_00cad360(0);
  FUN_00cad340(1);
  return;
}

// 00D4F880  FUN_00d4f880  size=331  [between]
void __fastcall FUN_00d4f880(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  switch(*(undefined4 *)(param_1 + 0x14c)) {
  case 0:
    FUN_00a28400(0);
    FUN_00e5e1b0("bgm_pef1_exit");
    *(int *)(param_1 + 0x14c) = *(int *)(param_1 + 0x14c) + 1;
    return;
  case 1:
    if (*(undefined4 **)(param_1 + 0x124) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x124))(1);
      *(undefined4 *)(param_1 + 0x124) = 0;
    }
    FUN_00c1d5b0(0x6030,0);
    FUN_00a28400(0x3f800000);
    *(int *)(param_1 + 0x14c) = *(int *)(param_1 + 0x14c) + 1;
    return;
  case 2:
    iVar2 = FUN_00c1d6a0();
    if (iVar2 != 0) {
      if (*(undefined4 **)(param_1 + 0x130) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 0x130))(1);
        *(undefined4 *)(param_1 + 0x130) = 0;
      }
      DAT_01bea070 = DAT_01bea070 | 0x80000000;
      *(int *)(param_1 + 0x14c) = *(int *)(param_1 + 0x14c) + 1;
      return;
    }
    break;
  case 3:
    iVar2 = FUN_00c1d6f0();
    if (iVar2 != 0) {
      if (*(int *)(param_1 + 0x148) != 0) {
        FUN_00ebdd50(*(int *)(param_1 + 0x148));
      }
      uVar1 = cFade::set(0,0xff000000,0xff000000,10,1,0,0x68);
      *(int *)(param_1 + 0x14c) = *(int *)(param_1 + 0x14c) + 1;
      *(undefined4 *)(param_1 + 0x148) = uVar1;
      return;
    }
    break;
  case 4:
    iVar2 = FUN_00c1d6c0();
    if (iVar2 == 0) {
      DAT_01bea070 = DAT_01bea070 & 0x7fffffff;
      if (*(int *)(param_1 + 300) != 0) {
        FUN_00a4d650();
        *(int *)(param_1 + 0x14c) = *(int *)(param_1 + 0x14c) + 1;
        return;
      }
      FUN_00a4ad50(0x710,&DAT_01657afc,0x7010);
      *(int *)(param_1 + 0x14c) = *(int *)(param_1 + 0x14c) + 1;
    }
  }
  return;
}

// 00D4F9E0  cPf01::vf0C  size=2161  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall cPf01::vf0C(int param_1)

{
  uint *puVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar4 = FUN_00fdbbd0(DAT_018b925c,"EV6030");
  if (iVar4 != 0) {
    FUN_00d4f880();
    return;
  }
  switch(*(undefined4 *)(param_1 + 0x140)) {
  case 0:
    iVar4 = FUN_00a00ca0(0x10110,0);
    if (iVar4 != 0) {
      uVar5 = FUN_00a82090("title",0x10110,0);
      *(undefined4 *)(param_1 + 0x11c) = uVar5;
      if (DAT_01b391ca == '\0') {
        iVar4 = FUN_00d46c60();
        if (iVar4 == 0) {
          DAT_01b391c8 = 0;
          DAT_0188dfe0 = 1;
          thunk_FUN_00dfd560();
          *(undefined4 *)(param_1 + 0x140) = 1;
        }
        else {
          FUN_009953b0();
          if (*(undefined4 **)(param_1 + 300) != (undefined4 *)0x0) {
            (**(code **)**(undefined4 **)(param_1 + 300))(1);
            *(undefined4 *)(param_1 + 300) = 0;
          }
          uVar5 = FUN_009a6540();
          *(undefined4 *)(param_1 + 300) = uVar5;
          if (DAT_01b391c9 != '\0') {
            FUN_00994f20(4);
            DAT_01b391c9 = '\0';
          }
          *(undefined4 *)(param_1 + 0x140) = 6;
          DAT_01b391c8 = 0;
          DAT_0188dfe0 = 1;
          FUN_009c80e0();
        }
      }
      else {
        DAT_01b391ca = '\0';
        FUN_009953b0();
        if (*(undefined4 **)(param_1 + 300) != (undefined4 *)0x0) {
          (**(code **)**(undefined4 **)(param_1 + 300))(1);
          *(undefined4 *)(param_1 + 300) = 0;
        }
        uVar5 = FUN_009a6540();
        *(undefined4 *)(param_1 + 300) = uVar5;
        DAT_01b391c9 = '\0';
        *(undefined4 *)(param_1 + 0x140) = 10;
        FUN_009c80e0();
      }
    }
    break;
  case 1:
    FUN_009c8280();
    *(undefined4 *)(param_1 + 0x140) = 2;
  case 2:
    if (DAT_01b3920c != 0) {
      uVar5 = FUN_00d46cc0();
      *(undefined4 *)(param_1 + 0x17c) = uVar5;
    }
    if (*(int *)(param_1 + 0x17c) != 0) {
      _DAT_01bea098 = _DAT_01bea098 | 0x20000000;
      DAT_01b39208 = 1;
    }
    if ((DAT_01b3920c != 0) && (iVar4 = UserManager::SetSigninPad(), iVar4 != 0)) {
      *(undefined4 *)(*(int *)(param_1 + 0x124) + 0xb0) = 1;
      *(undefined4 *)(param_1 + 0x144) = 0;
      *(undefined4 *)(param_1 + 0x140) = 3;
    }
    break;
  case 3:
    if (*(int *)(*(int *)(param_1 + 0x124) + 0x38) == 5) {
      *(undefined4 *)(*(int *)(param_1 + 0x124) + 0xc4) = 1;
      FUN_009c6650();
      *(undefined4 *)(param_1 + 0x140) = 4;
    }
    break;
  case 4:
    if (DAT_01b5d1d8 != 0) {
      return;
    }
    iVar4 = FUN_009c7300();
    if (iVar4 != 0) {
      iVar4 = FUN_009a5e10();
      *(int *)(param_1 + 0x128) = iVar4;
      if (iVar4 == 0) {
        FUN_00dd5650(&DAT_016bcd44);
      }
      uVar5 = FUN_00cacfb0();
      uVar5 = FUN_00cad030(uVar5);
      *(undefined4 *)(param_1 + 0x150) = uVar5;
      *(undefined4 *)(param_1 + 0x140) = 5;
      break;
    }
    iVar4 = FUN_009a6540();
    *(int *)(param_1 + 300) = iVar4;
    if (iVar4 == 0) {
      FUN_00dd5650(&DAT_016bcd08);
    }
    FUN_00994f20(1);
    if (*(int *)(param_1 + 0x124) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x124) + 0xc4) = 0;
    }
    *(undefined4 *)(param_1 + 0x140) = 6;
    FUN_009c80e0();
    goto LAB_00d4fca5;
  case 5:
    if (*(int *)(param_1 + 0x128) == 0) break;
    iVar4 = FUN_00994850();
    if (iVar4 != 1) {
      if (iVar4 != 2) break;
      FUN_00995390();
      if (*(undefined4 **)(param_1 + 0x128) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 0x128))(1);
        *(undefined4 *)(param_1 + 0x128) = 0;
      }
      thunk_FUN_00dfd560();
      *(undefined4 *)(param_1 + 0x140) = 1;
      goto LAB_00d501cb;
    }
    if (*(int *)(param_1 + 0x150) == DAT_01b77e40) {
      iVar4 = FUN_009a6540();
      *(int *)(param_1 + 300) = iVar4;
      if (iVar4 == 0) {
        FUN_00dd5650(&DAT_016bcccc);
      }
      FUN_00994f20(1);
      if (*(undefined4 **)(param_1 + 0x128) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 0x128))(1);
        *(undefined4 *)(param_1 + 0x128) = 0;
      }
      *(undefined4 *)(param_1 + 0x140) = 6;
      FUN_009c80e0();
      *(undefined4 *)(*(int *)(param_1 + 0x124) + 0xc4) = 0;
    }
    else {
      if (*(undefined4 **)(param_1 + 0x128) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 0x128))(1);
        *(undefined4 *)(param_1 + 0x128) = 0;
      }
      uVar5 = FUN_00cacfc0(DAT_01b77e40);
      FUN_00cacfa0(uVar5);
      FUN_00a4ac40(0xf01,"PF01_START",0xffffffff);
      FUN_00e5e1b0("bgm_pef1_exit");
      *(undefined4 *)(*(int *)(param_1 + 0x124) + 0xc4) = 0;
    }
LAB_00d4fca5:
    if (*(int *)(param_1 + 0x17c) != 0) {
      DAT_01b73810 = 1;
    }
    break;
  case 6:
    if ((*(int *)(param_1 + 0x148) != 0) &&
       (iVar4 = FUN_00eb4340(*(int *)(param_1 + 0x148)), iVar4 != 0)) {
      FUN_00ebdd50(*(undefined4 *)(param_1 + 0x148));
      *(undefined4 *)(param_1 + 0x148) = 0;
    }
    puVar3 = *(undefined4 **)(param_1 + 300);
    if (puVar3 != (undefined4 *)0x0) {
      cVar2 = *(char *)(puVar3 + 0x32);
      if (cVar2 == '\x04') {
        (**(code **)*puVar3)(1);
        *(undefined4 *)(param_1 + 300) = 0;
        FUN_00995390();
        thunk_FUN_00dfd560();
        *(undefined4 *)(param_1 + 0x140) = 1;
      }
      else if (cVar2 == '\x14') {
        if (*(int *)(param_1 + 0x148) != 0) {
          FUN_00ebdd50(*(int *)(param_1 + 0x148));
        }
        uVar5 = cFade::set(0,0,0xff000000,0x1e,1,0,0x68);
        *(undefined4 *)(param_1 + 0x148) = uVar5;
        *(undefined4 *)(param_1 + 0x140) = 10;
      }
      else if (cVar2 == '\x1f') {
        *(undefined4 *)(param_1 + 0x140) = 0x14;
      }
    }
    break;
  case 10:
    iVar4 = FUN_00eb4340(*(undefined4 *)(param_1 + 0x148));
    if (iVar4 != 0) {
      DAT_01bea09c = DAT_01bea09c | 0x48100000;
      if (*(undefined4 **)(param_1 + 300) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 300))(1);
        *(undefined4 *)(param_1 + 300) = 0;
      }
      iVar4 = FUN_0099afa0();
      *(int *)(param_1 + 0x130) = iVar4;
      if (iVar4 == 0) {
        FUN_00dd5650(&DAT_016bc490);
      }
      uVar5 = cNowLoadingDispParts::cNowLoadingDispParts();
      *(undefined4 *)(param_1 + 0x13c) = uVar5;
      *(undefined4 *)(*(int *)(param_1 + 0x124) + 0xc4) = 1;
      *(undefined4 *)(param_1 + 0x140) = 0xb;
    }
    break;
  case 0xb:
    if ((*(int *)(*(int *)(param_1 + 0x130) + 8) != 0) && (iVar4 = FUN_00989470(), iVar4 != 0)) {
      FUN_00ebdd50(*(undefined4 *)(param_1 + 0x148));
      uVar5 = cFade::set(0,0xff000000,0,0x1e,1,0,0x68);
      *(undefined4 *)(param_1 + 0x148) = uVar5;
      if (*(undefined4 **)(param_1 + 0x13c) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 0x13c))(1);
        *(undefined4 *)(param_1 + 0x13c) = 0;
      }
      iVar4 = *(int *)(*(int *)(param_1 + 0x130) + 4);
      if (iVar4 != 0) {
        *(undefined1 *)(iVar4 + 0x4f0) = 1;
      }
      *(undefined4 *)(param_1 + 0x140) = 0xc;
    }
  case 0xc:
    if (*(char *)(*(int *)(param_1 + 0x130) + 0x5f) != '\0') {
      FUN_00ebdd50(*(undefined4 *)(param_1 + 0x148));
      uVar5 = cFade::set(0,0,0xff000000,0x1e,1,0,0x68);
      *(undefined4 *)(param_1 + 0x148) = uVar5;
      *(undefined4 *)(param_1 + 0x140) = 0xd;
    }
    break;
  case 0xd:
    iVar4 = FUN_00eb4340(*(undefined4 *)(param_1 + 0x148));
    if (iVar4 != 0) {
      FUN_00a4a410(4);
      FUN_00a4a410(1);
      FUN_00a4a410(0xb);
      FUN_00ebdd50(*(undefined4 *)(param_1 + 0x148));
      uVar5 = cFade::set(0,0xff000000,0,0x1e,1,0,0x68);
      *(undefined4 *)(param_1 + 0x148) = uVar5;
      if (*(undefined4 **)(param_1 + 0x130) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 0x130))(1);
        *(undefined4 *)(param_1 + 0x130) = 0;
      }
      iVar4 = FUN_009a6540();
      *(int *)(param_1 + 300) = iVar4;
      if (iVar4 == 0) {
        FUN_00dd5650(&DAT_016bcc90);
      }
      FUN_00994f20(3);
      *(undefined4 *)(*(int *)(param_1 + 0x124) + 0xc4) = 0;
      *(undefined4 *)(param_1 + 0x140) = 6;
    }
    break;
  case 0x14:
    if (*(undefined4 **)(param_1 + 300) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 300))(1);
      *(undefined4 *)(param_1 + 300) = 0;
    }
    iVar4 = cPauseMenuBg::cPauseMenuBg_2();
    *(int *)(param_1 + 0x138) = iVar4;
    if (iVar4 == 0) {
      FUN_00dd5650(&DAT_016a3614);
    }
    iVar4 = FUN_009a8c20();
    *(int *)(param_1 + 0x134) = iVar4;
    if (iVar4 == 0) {
      FUN_00dd5650(&DAT_016bc478);
    }
    *(undefined4 *)(*(int *)(param_1 + 0x134) + 0x30) = *(undefined4 *)(param_1 + 0x138);
    *(undefined4 *)(param_1 + 0x140) = 0x15;
    *(undefined4 *)(*(int *)(param_1 + 0x124) + 0xc4) = 1;
    break;
  case 0x15:
    puVar1 = (uint *)(*(int *)(*(int *)(param_1 + 0x138) + 0x14) + 0x28);
    *puVar1 = *puVar1 & 0xfbffffff;
    puVar3 = *(undefined4 **)(param_1 + 0x134);
    if (*(char *)(puVar3 + 0x14f) != '\0') {
      if (puVar3 != (undefined4 *)0x0) {
        (**(code **)*puVar3)(1);
        *(undefined4 *)(param_1 + 0x134) = 0;
      }
      if (*(undefined4 **)(param_1 + 0x138) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 0x138))(1);
        *(undefined4 *)(param_1 + 0x138) = 0;
      }
      *(undefined4 *)(param_1 + 0x140) = 0x16;
    }
    break;
  case 0x16:
    iVar4 = FUN_009a6540();
    *(int *)(param_1 + 300) = iVar4;
    if (iVar4 == 0) {
      FUN_00dd5650(&DAT_016bcc54);
    }
    FUN_00994f20(4);
    *(undefined4 *)(param_1 + 0x140) = 6;
LAB_00d501cb:
    *(undefined4 *)(*(int *)(param_1 + 0x124) + 0xc4) = 0;
  }
  if (*(int **)(param_1 + 0x124) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x124) + 4))();
  }
  if (*(int **)(param_1 + 0x128) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x128) + 4))();
  }
  if (*(int **)(param_1 + 300) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 300) + 4))();
  }
  if (*(int *)(param_1 + 0x130) != 0) {
    FUN_009aca10();
  }
  if (*(int **)(param_1 + 0x134) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x134) + 4))();
  }
  if (*(int **)(param_1 + 0x138) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x138) + 4))();
  }
  if (*(int **)(param_1 + 0x13c) == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00d5024c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x13c) + 4))();
  return;
}

// 00D502B0  cPf01::vf10  size=302  [class]
void __fastcall cPf01::vf10(int param_1)

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
  if (*(undefined4 **)(param_1 + 0x134) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x134))(1);
    *(undefined4 *)(param_1 + 0x134) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x138) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x138))(1);
    *(undefined4 *)(param_1 + 0x138) = 0;
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
  if (*(int *)(param_1 + 0x148) != 0) {
    FUN_00ebdd50(*(int *)(param_1 + 0x148));
    *(undefined4 *)(param_1 + 0x148) = 0;
  }
  DAT_01bea09c = DAT_01bea09c & 0xb7efffff;
  DAT_01bea070 = DAT_01bea070 & 0xffdfffff;
  DAT_01bea084 = DAT_01bea084 & 0xffdfffff;
  FUN_00f98ad0(0);
  return;
}

// 00D70C60  cPf01::vf00  size=54  [class]
undefined4 * __thiscall cPf01::vf00(undefined4 *param_1,byte param_2)

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


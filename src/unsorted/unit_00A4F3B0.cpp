// src/unsorted/unit_00A4F3B0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A4F3B0..00A4FF30, 13 functions

#include "mgrr.h"

// 00A4F3B0  FUN_00a4f3b0  size=280  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00a4f3b0(int param_1)

{
  if (*(int *)(param_1 + 0x88) != 0) {
    FUN_00dd5650("--- CLEANUP GAME ---");
    FUN_00c20a80();
    FUN_00956710();
    FUN_0093bfe0();
    FUN_0093dec0();
    FUN_00cbf110();
    FUN_00cbbf70();
    FUN_00cb20b0();
    FUN_00ce1550();
    FUN_00d29580();
    FUN_00d13080();
    FUN_00c1d4f0();
    FUN_00e71c00();
    FUN_00c82130();
    FUN_00c82840();
    FUN_00c82c40();
    FUN_00c23c40();
    FUN_00c13930();
    FUN_00c20a00();
    FUN_008dfc50();
    FUN_00c1b980();
    if (DAT_01be8f38 != 0) {
      FUN_00a4bd40();
      DAT_01be8f38 = 0;
      _DAT_01be8f3c = 0;
    }
    _DAT_01be8f34 = 0;
    FUN_00d589d0();
    FUN_00dd8450();
    thunk_FUN_00f4ba30();
    FUN_009e86b0();
    FUN_00e51db0(param_1 + 0x2c,0);
    FUN_00e46950(param_1 + 0x2c);
    FUN_00eab080();
    FUN_00d89e20();
    *(undefined4 *)(param_1 + 0x88) = 0;
  }
  return;
}

// 00A4F4D0  FUN_00a4f4d0  size=138  [run]
void __fastcall FUN_00a4f4d0(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_00dd8da0();
  iVar1 = *(int *)(param_1 + 0x8c);
  if (iVar1 != 0) {
    FUN_00a499a0();
    iVar2 = 10;
    do {
      Hw::cTexture::cTexture_5();
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
    FUN_00dd4920(iVar1);
    *(undefined4 *)(param_1 + 0x8c) = 0;
  }
  FUN_00a4f3b0();
  FUN_00d297a0();
  FUN_00cb2040();
  FUN_00eaf6d0();
  FUN_00eb5a20();
  FUN_00a4a230();
  return;
}

// 00A4F560  FUN_00a4f560  size=205  [run]
void FUN_00a4f560(void)

{
  uint uVar1;
  
  uVar1 = DAT_01bea064 >> 0xe & 1;
  if ((uVar1 != 0) && ((DAT_01bea060 & 0x40000000) != 0)) {
    DAT_01bea064 = DAT_01bea064 | 0x2000;
  }
  FUN_00dd75d0(&LAB_00a4d130,0,0);
  FUN_00dd75d0(&LAB_00a4d150,0,1);
  FUN_00dd79a0(2);
  DAT_01bea064 = DAT_01bea064 & 0xffffdfff;
  if ((uVar1 != 0) && ((DAT_01bea060 & 0x40000000) != 0)) {
    if ((DAT_01bea060 & 0x8000) == 0) {
      FUN_00a1e8a0();
      FUN_00d20cf0();
    }
    FUN_00a4a4e0();
    thunk_FUN_00decb90();
  }
  uVar1 = DAT_01bea060 >> 0xe & 1;
  if ((uVar1 != 0) && ((DAT_01bea060 & 0x8000) == 0)) {
    DAT_01bea060 = DAT_01bea060 | 0x8000;
    FUN_00a21750();
    return;
  }
  if ((uVar1 == 0) && ((DAT_01bea060 & 0x8000) != 0)) {
    DAT_01bea060 = DAT_01bea060 & 0xffff7fff;
  }
  return;
}

// 00A4F630  FUN_00a4f630  size=59  [run]
int __fastcall FUN_00a4f630(int param_1)

{
  undefined4 local_14;
  
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = local_14;
  FUN_0092d400();
  return param_1;
}

// 00A4F680  FUN_00a4f680  size=148  [run]
void __fastcall FUN_00a4f680(int param_1)

{
  int iVar1;
  
  do {
    switch(*(undefined4 *)(param_1 + 4)) {
    case 0:
      iVar1 = FUN_00a4a740();
      break;
    case 1:
      iVar1 = FUN_00a4a8a0();
      break;
    case 2:
      iVar1 = FUN_00a4d360();
      break;
    case 3:
      iVar1 = FUN_00a4d530();
      break;
    case 4:
      FUN_00a4d360();
      iVar1 = FUN_00c1d6c0();
      if ((iVar1 != 0) && (iVar1 = FUN_00c1d6a0(), iVar1 == 0)) {
        return;
      }
      iVar1 = FUN_00eb4340(*(undefined4 *)(param_1 + 0xc));
      if (iVar1 == 0) {
        return;
      }
      FUN_00a549a0();
      *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfd;
      *(undefined4 *)(param_1 + 4) = 5;
      return;
    case 5:
      iVar1 = 0;
      if (*(code **)(param_1 + 0x84) == (code *)0x0) {
        *(undefined4 *)(param_1 + 4) = 6;
      }
      else {
        iVar1 = (**(code **)(param_1 + 0x84))();
      }
      break;
    default:
      return;
    }
    if (iVar1 == 0) {
      return;
    }
  } while( true );
}

// 00A4F770  FUN_00a4f770  size=81  [run]
void __fastcall FUN_00a4f770(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_1;
  if (*(char *)((int)puVar1 + 0xd) == '\0') {
    if (*(char *)(puVar1[1] + 0xd) == '\0') {
      FUN_00a4dd00(puVar1[1]);
    }
    if (*(char *)(puVar1[2] + 0xd) == '\0') {
      FUN_00a4dd00(puVar1[2]);
    }
    puVar1[2] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    param_1[2] = param_1;
    param_1[1] = param_1;
    *param_1 = param_1;
    *(undefined2 *)(param_1 + 3) = 0x100;
  }
  return;
}

// 00A4F7F0  FUN_00a4f7f0  size=43  [run]
void __fastcall FUN_00a4f7f0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00A4F8C0  FUN_00a4f8c0  size=65  [run]
void __fastcall FUN_00a4f8c0(undefined4 *param_1)

{
  if (param_1[1] != 0) {
    if (param_1[1] != 0) {
      FUN_00dd48d0(param_1[1],0);
      param_1[1] = 0;
    }
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = *param_1;
    param_1[5] = *param_1;
    param_1[6] = *param_1;
  }
  return;
}

// 00A4F930  FUN_00a4f930  size=65  [run]
void __fastcall FUN_00a4f930(undefined4 *param_1)

{
  if (param_1[1] != 0) {
    if (param_1[1] != 0) {
      FUN_00dd48d0(param_1[1],0);
      param_1[1] = 0;
    }
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = *param_1;
    param_1[5] = *param_1;
    param_1[6] = *param_1;
  }
  return;
}

// 00A4F9B0  FUN_00a4f9b0  size=82  [run]
void __fastcall FUN_00a4f9b0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    piVar1 = (int *)(*(int *)(param_1 + 4) + 8);
    do {
      *piVar1 = (int)(piVar1 + -6);
      piVar1[1] = (int)(piVar1 + 2);
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 4;
    } while (iVar2 < *(int *)(param_1 + 8));
  }
  iVar2 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar2 + 8) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + -4 + *(int *)(param_1 + 8) * 0x10) = 0;
  *(int *)(param_1 + 0x10) = iVar2;
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 8) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

// 00A4FA60  FUN_00a4fa60  size=82  [run]
void __fastcall FUN_00a4fa60(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    piVar1 = (int *)(*(int *)(param_1 + 4) + 8);
    do {
      *piVar1 = (int)(piVar1 + -6);
      piVar1[1] = (int)(piVar1 + 2);
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 4;
    } while (iVar2 < *(int *)(param_1 + 8));
  }
  iVar2 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar2 + 8) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + -4 + *(int *)(param_1 + 8) * 0x10) = 0;
  *(int *)(param_1 + 0x10) = iVar2;
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 8) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

// 00A4FB40  FUN_00a4fb40  size=827  [run]
undefined4 __fastcall FUN_00a4fb40(int param_1)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  int *piVar9;
  uint *puVar10;
  int extraout_ECX;
  int iVar11;
  uint *local_8;
  undefined4 local_4;
  
  iVar11 = 8;
  *(undefined4 *)(param_1 + 4) = 0;
  puVar10 = (uint *)(param_1 + 0x44);
  do {
    if ((puVar10[4] != 0) && (puVar10[3] != 0xffffffff)) {
      iVar3 = 0;
      puVar8 = (uint *)(param_1 + 8);
      do {
        bVar2 = true;
        if (puVar10[3] == *puVar8) goto LAB_00a4fb83;
        iVar3 = iVar3 + 1;
        puVar8 = puVar8 + 1;
      } while (iVar3 < 8);
      bVar2 = false;
LAB_00a4fb83:
      if (bVar2) {
        *puVar10 = *puVar10 & 0xfffffff7;
      }
      else {
        *puVar10 = *puVar10 | 8;
        *(undefined4 *)(param_1 + 4) = 1;
      }
    }
    puVar10 = puVar10 + 0xf;
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  if (*(int *)(param_1 + 4) != 0) {
    return 0;
  }
  local_8 = (uint *)(param_1 + 8);
  iVar11 = -1;
  iVar3 = 0;
  puVar10 = local_8;
  do {
    uVar4 = *puVar10;
    if (((uVar4 != 0xffffffff) && (0xff < (int)uVar4)) &&
       ((uVar4 = uVar4 & 0xff, uVar4 == 0 ||
        (((((uVar4 == 0x20 || (uVar4 == 0x40)) || (uVar4 == 0x60)) ||
          ((uVar4 == 0x80 || (uVar4 == 0xa0)))) || (uVar4 == 0xc0)))))) {
      iVar11 = *(int *)(param_1 + 8 + iVar3 * 4);
      break;
    }
    iVar3 = iVar3 + 1;
    puVar10 = puVar10 + 1;
  } while (iVar3 < 8);
  iVar3 = 0;
  piVar9 = (int *)(param_1 + 0x48);
  do {
    if ((piVar9[3] != 0) && (*piVar9 == iVar11)) {
      if (param_1 + 0x2c + iVar3 * 0x3c != 0) {
        if ((((*(int *)(param_1 + 0x1f8) != 0) && (*(int *)(param_1 + 0x1ec) == -1)) &&
            (param_1 != -0x1d0)) && (*(int *)(param_1 + 500) != -1)) {
          switch(*(undefined4 *)(param_1 + 0x1f8)) {
          case 2:
          case 3:
          case 4:
          case 5:
          case 6:
          case 7:
          case 8:
          case 9:
          case 10:
          case 0xb:
          case 0xc:
          case 0xe:
          case 0xf:
          case 0x10:
          case 0x11:
          case 0x12:
          case 0x13:
            goto switchD_00a4fc84_caseD_2;
          }
        }
        iVar11 = 0;
        puVar5 = (undefined4 *)(param_1 + 0x54);
        goto LAB_00a4fca0;
      }
      break;
    }
    iVar3 = iVar3 + 1;
    piVar9 = piVar9 + 0xf;
  } while (iVar3 < 8);
  iVar11 = 0;
  puVar5 = (undefined4 *)(param_1 + 0x54);
  do {
    if (puVar5[-1] != -1) {
      switch(*puVar5) {
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
      case 10:
      case 0xb:
      case 0xc:
      case 0xe:
      case 0xf:
      case 0x10:
      case 0x11:
      case 0x12:
      case 0x13:
        goto switchD_00a4fc3c_caseD_2;
      }
    }
    iVar11 = iVar11 + 1;
    puVar5 = puVar5 + 0xf;
  } while (iVar11 < 8);
switchD_00a4fc3c_caseD_2:
  iVar11 = FUN_00ca5a30();
  if (iVar11 != 0) {
switchD_00a4fc84_caseD_2:
    return 0;
  }
  local_4 = 1;
  iVar3 = 0;
  iVar11 = param_1;
  do {
    uVar4 = *local_8;
    if (uVar4 != 0xffffffff) {
      iVar6 = 0;
      puVar10 = (uint *)(iVar11 + 0x48);
      do {
        if ((puVar10[3] != 0) && (*puVar10 == uVar4)) {
          if (iVar11 + 0x2c + iVar6 * 0x3c != 0) goto LAB_00a4fe47;
          break;
        }
        iVar6 = iVar6 + 1;
        puVar10 = puVar10 + 0xf;
      } while (iVar6 < 8);
      uVar1 = *(undefined4 *)(iVar11 + 0x28);
      local_4 = 0;
      if (((int)uVar4 < 0x100) ||
         ((((uVar7 = uVar4 & 0xff, (char)uVar4 != '\0' && (uVar7 != 0x20)) &&
           ((uVar7 != 0x40 && (((uVar7 != 0x60 && (uVar7 != 0x80)) && (uVar7 != 0xa0)))))) &&
          (uVar7 != 0xc0)))) {
        if (((uVar4 != 0x601) || ((DAT_01bea064 & 0x4000) == 0)) &&
           (iVar6 = FUN_00a4e380(0xffffffff), iVar11 = extraout_ECX, iVar6 != 0)) {
          if ((*(int *)(iVar6 + 0x1c) == -1) && (*(int *)(iVar6 + 0x28) == 1)) {
            *(uint *)(iVar6 + 0x1c) = uVar4;
            *(undefined4 *)(iVar6 + 0x20) = uVar1;
            *(uint *)(iVar6 + 0x24) = uVar4;
            *(undefined4 *)(iVar6 + 0x38) = 0;
            *(undefined4 *)(iVar6 + 0x28) = 2;
            *(undefined4 *)(iVar6 + 0x18) = 0;
          }
          else {
            FUN_00dd5650(&DAT_01661c14);
          }
          if (DAT_01be8e44 < 2) {
            *(uint *)(iVar6 + 0x18) = *(uint *)(iVar6 + 0x18) | 1;
            iVar11 = param_1;
          }
          else {
            *(uint *)(iVar6 + 0x18) = *(uint *)(iVar6 + 0x18) & 0xfffffffe;
            iVar11 = param_1;
          }
        }
      }
      else {
        iVar6 = FUN_00a4bdd0();
        if (iVar6 != 0) {
LAB_00a4fd98:
          if ((*(int *)(iVar6 + 0x1c) == -1) && (*(int *)(iVar6 + 0x28) == 1)) {
            *(undefined4 *)(iVar6 + 0x20) = uVar1;
            *(uint *)(iVar6 + 0x1c) = uVar4;
            *(uint *)(iVar6 + 0x24) = uVar4;
            *(undefined4 *)(iVar6 + 0x38) = 0;
            *(undefined4 *)(iVar6 + 0x28) = 2;
            *(undefined4 *)(iVar6 + 0x18) = 0;
            return 0;
          }
          FUN_00dd5650(&DAT_01661c14);
          return 0;
        }
        FUN_00dd5650(&DAT_01661f34);
        iVar6 = FUN_00a4e380(0xffffffff);
        if (iVar6 != 0) goto LAB_00a4fd98;
      }
    }
LAB_00a4fe47:
    local_8 = local_8 + 1;
    iVar3 = iVar3 + 1;
    if (7 < iVar3) {
      return local_4;
    }
  } while( true );
LAB_00a4fca0:
  do {
    if (puVar5[-1] != -1) {
      switch(*puVar5) {
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
      case 10:
      case 0xb:
      case 0xc:
      case 0xe:
      case 0xf:
      case 0x10:
      case 0x11:
      case 0x12:
      case 0x13:
        goto switchD_00a4fc84_caseD_2;
      }
    }
    iVar11 = iVar11 + 1;
    puVar5 = puVar5 + 0xf;
  } while (iVar11 < 8);
  goto switchD_00a4fc3c_caseD_2;
}

// 00A4FF30  FUN_00a4ff30  size=176  [run]
void __thiscall FUN_00a4ff30(int *param_1,int param_2,int param_3)

{
  uint *puVar1;
  int iVar2;
  
  if (*param_1 != 0) {
    if (param_2 == -2) {
      puVar1 = (uint *)(param_1 + 0x20);
      iVar2 = 2;
      do {
        if (puVar1[-0xb] != 0) {
          if (param_3 == 0) {
            puVar1[-0xf] = puVar1[-0xf] & 0xfffffffe;
          }
          else {
            puVar1[-0xf] = puVar1[-0xf] | 1;
          }
        }
        if (puVar1[4] != 0) {
          if (param_3 == 0) {
            *puVar1 = *puVar1 & 0xfffffffe;
          }
          else {
            *puVar1 = *puVar1 | 1;
          }
        }
        if (puVar1[0x13] != 0) {
          if (param_3 == 0) {
            puVar1[0xf] = puVar1[0xf] & 0xfffffffe;
          }
          else {
            puVar1[0xf] = puVar1[0xf] | 1;
          }
        }
        if (puVar1[0x22] != 0) {
          if (param_3 == 0) {
            puVar1[0x1e] = puVar1[0x1e] & 0xfffffffe;
          }
          else {
            puVar1[0x1e] = puVar1[0x1e] | 1;
          }
        }
        puVar1 = puVar1 + 0x3c;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      return;
    }
    iVar2 = FUN_00a4e380(param_2);
    if (iVar2 == 0) {
      FUN_00dd5650(&DAT_01661fa8);
      return;
    }
    if (param_3 != 0) {
      *(uint *)(iVar2 + 0x18) = *(uint *)(iVar2 + 0x18) | 1;
      return;
    }
    *(uint *)(iVar2 + 0x18) = *(uint *)(iVar2 + 0x18) & 0xfffffffe;
  }
  return;
}


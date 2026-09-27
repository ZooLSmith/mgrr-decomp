// src/unsorted/unit_00F9A1D0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F9A1D0..00F9B1C0, 23 functions

#include "types.h"

// 00F9A1D0  FUN_00f9a1d0  size=91  [run]
undefined4 FUN_00f9a1d0(int param_1)

{
  int iVar1;
  
  if (((-1 < param_1) && (param_1 < DAT_018da4b4)) &&
     (iVar1 = DAT_018da4b0 + param_1 * 0x1c, iVar1 != 0)) {
    if (*(int *)(iVar1 + 4) == 0) {
      FUN_00dd5650(&DAT_016eb6a0,param_1);
      return 0;
    }
    *(undefined4 *)(iVar1 + 4) = 0;
    return 1;
  }
  FUN_00dd5650(&DAT_016eb660,param_1);
  return 0;
}

// 00F9A230  FUN_00f9a230  size=106  [run]
undefined4 FUN_00f9a230(int param_1)

{
  int iVar1;
  
  if (((-1 < param_1) && (param_1 < DAT_018da4b4)) &&
     (iVar1 = DAT_018da4b0 + param_1 * 0x1c, iVar1 != 0)) {
    if (*(int *)(iVar1 + 4) == 0) {
      FUN_00dd5650(&DAT_016eb6a0,param_1);
      return 0;
    }
    (**(code **)(*(int *)**(undefined4 **)(iVar1 + 4) + 0x18))
              ((int *)**(undefined4 **)(iVar1 + 4),2);
    *(byte *)(iVar1 + 8) = *(byte *)(iVar1 + 8) | 1;
    return 1;
  }
  FUN_00dd5650(&DAT_016eb660,param_1);
  return 0;
}

// 00F9A2A0  FUN_00f9a2a0  size=107  [run]
undefined4 FUN_00f9a2a0(int param_1)

{
  int iVar1;
  
  if (((-1 < param_1) && (param_1 < DAT_018da4b4)) &&
     (iVar1 = DAT_018da4b0 + param_1 * 0x1c, iVar1 != 0)) {
    if (*(int *)(iVar1 + 4) == 0) {
      FUN_00dd5650(&DAT_016eb6a0,param_1);
      return 0;
    }
    (**(code **)(*(int *)**(undefined4 **)(iVar1 + 4) + 0x18))
              ((int *)**(undefined4 **)(iVar1 + 4),1);
    *(byte *)(iVar1 + 8) = *(byte *)(iVar1 + 8) | 2;
    return 1;
  }
  FUN_00dd5650(&DAT_016eb660,param_1);
  return 0;
}

// 00F9A310  FUN_00f9a310  size=107  [run]
undefined4 FUN_00f9a310(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  *param_1 = 0;
  if ((-1 < param_2) && (param_2 < DAT_018da4b4)) {
    iVar1 = DAT_018da4b0 + param_2 * 0x1c;
    if (iVar1 != 0) {
      if (*(int *)(iVar1 + 4) == 0) {
        FUN_00dd5650(&DAT_016eb6a0,param_2);
      }
      else if (*(char *)(iVar1 + 9) != '\0') {
        *param_1 = *(undefined4 *)(iVar1 + 0xc);
        return 1;
      }
      return 0;
    }
  }
  FUN_00dd5650(&DAT_016eb660,param_2);
  return 0;
}

// 00F9A380  FUN_00f9a380  size=113  [run]
undefined4 FUN_00f9a380(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  *param_1 = 0;
  if ((-1 < param_2) && (param_2 < DAT_018da4b4)) {
    iVar1 = DAT_018da4b0 + param_2 * 0x1c;
    if (iVar1 != 0) {
      if (*(int *)(iVar1 + 4) == 0) {
        FUN_00dd5650(&DAT_016eb6a0,param_2);
      }
      else if ((*(char *)(iVar1 + 9) != '\0') && (*(char *)(iVar1 + 10) != '\0')) {
        *param_1 = *(undefined4 *)(iVar1 + 0xc);
        return 1;
      }
      return 0;
    }
  }
  FUN_00dd5650(&DAT_016eb660,param_2);
  return 0;
}

// 00F9A450  FUN_00f9a450  size=47  [run]
void __fastcall FUN_00f9a450(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *param_1 = 0;
  }
  piVar1 = (int *)param_1[1];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[1] = 0;
  }
  return;
}

// 00F9A480  FUN_00f9a480  size=159  [run]
undefined4 __thiscall FUN_00f9a480(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 unaff_EDI;
  undefined4 uStack_3c;
  undefined4 auStack_8 [2];
  
  *param_2 = 0xffffffff;
  param_2[1] = 0xffffffff;
  param_2[2] = 0xffffffff;
  if (*(int *)(param_1 + 4) != 0) {
    piVar1 = *(int **)(param_1 + 4);
    uStack_3c = param_3;
    iVar2 = (**(code **)(*piVar1 + 0x24))();
    if (iVar2 != 0) {
      auStack_8[0] = 1;
      iVar2 = (**(code **)(**(int **)(param_1 + 4) + 0x18))
                        (*(int **)(param_1 + 4),iVar2,&uStack_3c,auStack_8);
      if (-1 < iVar2) {
        switch(unaff_EDI) {
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 0xb:
        case 0xc:
        case 0xd:
        case 0xe:
        case 0xf:
        case 0x10:
        case 0x11:
        case 0x12:
          break;
        default:
          param_2[1] = piVar1;
          *param_2 = 0;
          param_2[2] = 0;
          return 1;
        }
      }
    }
  }
  return 0;
}

// 00F9A540  FUN_00f9a540  size=47  [run]
void __fastcall FUN_00f9a540(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *param_1 = 0;
  }
  piVar1 = (int *)param_1[1];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[1] = 0;
  }
  return;
}

// 00F9A570  FUN_00f9a570  size=159  [run]
undefined4 __thiscall FUN_00f9a570(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 unaff_EDI;
  undefined4 uStack_3c;
  undefined4 auStack_8 [2];
  
  *param_2 = 0xffffffff;
  param_2[1] = 0xffffffff;
  param_2[2] = 0xffffffff;
  if (*(int *)(param_1 + 4) != 0) {
    piVar1 = *(int **)(param_1 + 4);
    uStack_3c = param_3;
    iVar2 = (**(code **)(*piVar1 + 0x24))();
    if (iVar2 != 0) {
      auStack_8[0] = 1;
      iVar2 = (**(code **)(**(int **)(param_1 + 4) + 0x18))
                        (*(int **)(param_1 + 4),iVar2,&uStack_3c,auStack_8);
      if (-1 < iVar2) {
        switch(unaff_EDI) {
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 0xb:
        case 0xc:
        case 0xd:
        case 0xe:
        case 0xf:
        case 0x10:
        case 0x11:
        case 0x12:
          break;
        default:
          param_2[1] = piVar1;
          *param_2 = 1;
          param_2[2] = 0;
          return 1;
        }
      }
    }
  }
  return 0;
}

// 00F9A630  FUN_00f9a630  size=257  [run]
void FUN_00f9a630(int param_1,int param_2,int param_3)

{
  uint *puVar1;
  int iVar2;
  void *_Src;
  void *_Src_00;
  int local_58;
  uint local_50;
  uint local_4c;
  undefined1 local_30 [44];
  
  do {
    local_58 = param_3;
    FID_conflict__memcpy(&local_50,(void *)(((param_3 + param_2) / 2) * 0x20 + param_1),0x20);
    iVar2 = param_2;
    while( true ) {
      for (puVar1 = (uint *)(iVar2 * 0x20 + param_1);
          (*puVar1 <= local_50 && ((*puVar1 < local_50 || (puVar1[1] < local_4c))));
          puVar1 = puVar1 + 8) {
        iVar2 = iVar2 + 1;
      }
      for (puVar1 = (uint *)(local_58 * 0x20 + param_1);
          (local_50 <= *puVar1 && ((local_50 < *puVar1 || (local_4c < puVar1[1]))));
          puVar1 = puVar1 + -8) {
        local_58 = local_58 + -1;
      }
      if (local_58 <= iVar2) break;
      _Src = (void *)(iVar2 * 0x20 + param_1);
      FID_conflict__memcpy(local_30,_Src,0x20);
      _Src_00 = (void *)(param_1 + local_58 * 0x20);
      FID_conflict__memcpy(_Src,_Src_00,0x20);
      FID_conflict__memcpy(_Src_00,local_30,0x20);
      iVar2 = iVar2 + 1;
      local_58 = local_58 + -1;
    }
    if (param_2 < iVar2 + -1) {
      FUN_00f9a630(param_1,param_2,iVar2 + -1);
    }
    param_2 = local_58 + 1;
  } while (param_2 < param_3);
  return;
}

// 00F9A740  FUN_00f9a740  size=136  [run]
void __fastcall FUN_00f9a740(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  
  _memset((void *)param_1[3],0,0x30);
  if (0 < param_1[1]) {
    FUN_00f9a630(*param_1,0,param_1[1] + -1);
    iVar5 = 0;
    if (0 < param_1[1]) {
      iVar4 = 0;
      do {
        iVar2 = param_1[5];
        iVar3 = 0;
        if (0 < iVar2) {
          puVar6 = (uint *)param_1[4];
          do {
            if ((*(uint *)(iVar4 + *param_1) & 0xff800000) < *puVar6) {
              iVar3 = iVar3 + -1;
              if (iVar3 != -1) goto LAB_00f9a7a7;
              break;
            }
            iVar3 = iVar3 + 1;
            puVar6 = puVar6 + 1;
          } while (iVar3 < iVar2);
        }
        iVar3 = iVar2 + -1;
LAB_00f9a7a7:
        piVar1 = (int *)(param_1[3] + iVar3 * 8);
        if (*(int *)(param_1[3] + iVar3 * 8) == 0) {
          *piVar1 = param_1[2] + iVar4;
        }
        piVar1 = piVar1 + 1;
        *piVar1 = *piVar1 + 1;
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + 0x20;
      } while (iVar5 < param_1[1]);
    }
  }
  return;
}

// 00F9A7D0  FUN_00f9a7d0  size=214  [run]
void __fastcall FUN_00f9a7d0(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int local_20;
  int local_1c [6];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_20;
  if (0 < *(int *)(param_1 + 0x50)) {
    piVar8 = local_1c;
    for (iVar5 = *(int *)(param_1 + 0x50); iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar8 = 0;
      piVar8 = piVar8 + 1;
    }
  }
  local_20 = 0;
  while (iVar5 = -1, 0 < *(int *)(param_1 + 0x50)) {
    iVar9 = 0;
    do {
      if (local_1c[iVar9] < *(int *)(param_1 + 4 + iVar9 * 8)) {
        if (iVar5 != -1) {
          puVar6 = (uint *)(local_1c[iVar5] * 0x20 + *(int *)(param_1 + iVar5 * 8));
          puVar3 = (uint *)(local_1c[iVar9] * 0x20 + *(int *)(param_1 + iVar9 * 8));
          uVar1 = *puVar6;
          uVar2 = *puVar3;
          if ((uVar1 <= uVar2) && ((uVar1 < uVar2 || (puVar6[1] <= puVar3[1])))) goto LAB_00f9a843;
        }
        iVar5 = iVar9;
      }
LAB_00f9a843:
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)(param_1 + 0x50));
    if (iVar5 == -1) break;
    iVar9 = local_1c[iVar5];
    iVar4 = iVar9 * 0x20;
    iVar7 = *(int *)(param_1 + 0x30 + iVar5 * 4) + iVar4;
    iVar4 = *(int *)(param_1 + iVar5 * 8) + iVar4;
    if (*(int *)(param_1 + 0x48) == 0) {
      *(int *)(param_1 + 0x48) = iVar7;
    }
    if (local_20 != 0) {
      *(int *)(local_20 + 0x14) = iVar7;
    }
    *(int *)(iVar4 + 0x10) = local_20;
    *(undefined4 *)(iVar4 + 0x14) = 0;
    *(int *)(param_1 + 0x4c) = iVar7;
    local_1c[iVar5] = iVar9 + 1;
    local_20 = iVar4;
  }
  __security_check_cookie(local_4 ^ (uint)&local_20);
  return;
}

// 00F9A960  FUN_00f9a960  size=80  [run]
void __fastcall FUN_00f9a960(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 100) != 0) {
    iVar1 = param_1 + 4 + *(int *)(param_1 + 0x58) * 0x14;
    *(int *)(param_1 + 0x5c) = iVar1;
    *(undefined4 *)(iVar1 + 4) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0xc) = 0;
    iVar1 = *(int *)(param_1 + 0x54) * *(int *)(param_1 + 0x50);
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x5c) + 0x10) + iVar2 * 4) = 0;
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar1);
    }
    *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) - 1U & 1;
  }
  return;
}

// 00F9A9B0  FUN_00f9a9b0  size=145  [run]
void FUN_00f9a9b0(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_2 + 0x60);
  piVar1 = (int *)(param_2 + 0x60);
  if (iVar3 < *(int *)(param_2 + 0x40)) {
    do {
      LOCK();
      iVar2 = *piVar1;
      if (iVar3 == iVar2) {
        *piVar1 = iVar3 + 1;
      }
      UNLOCK();
      if (iVar3 == iVar2) {
        FUN_00f9a740();
      }
      iVar3 = *piVar1;
    } while (iVar3 < *(int *)(param_2 + 0x40));
  }
  return;
}

// 00F9AA50  FUN_00f9aa50  size=237  [run]
void __thiscall FUN_00f9aa50(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int local_8;
  int local_4;
  
  if (*(int *)(*(int *)(param_1 + 0x5c) + 0xc) < 7) {
    uVar2 = *(uint *)(*(int *)(param_1 + 0x5c) + 0xc);
  }
  else {
    uVar2 = *(int *)(*(int *)(param_1 + 0x5c) + 0xc) / 6;
    if (*(int *)(*(int *)(param_1 + 0x5c) + 0xc) % 6 != 0) {
      uVar2 = uVar2 + 1;
    }
    if ((uVar2 & 1) != 0) {
      uVar2 = uVar2 + 1;
    }
  }
  iVar4 = 0;
  iVar5 = 0;
  local_8 = 0;
  local_4 = 6;
  do {
    iVar1 = *(int *)(param_1 + 0x2c);
    *(int *)(iVar1 + iVar4) = iVar5 * 0x20 + *(int *)(*(int *)(param_1 + 0x5c) + 8);
    uVar3 = *(int *)(*(int *)(param_1 + 0x5c) + 0xc) - iVar5;
    *(uint *)(iVar1 + 4 + iVar4) = uVar3;
    if ((int)uVar2 < (int)uVar3) {
      uVar3 = uVar2;
    }
    *(uint *)(iVar1 + 4 + iVar4) = uVar3;
    if (0 < (int)uVar3) {
      local_8 = local_8 + 1;
      iVar5 = iVar5 + uVar3;
      iVar4 = iVar4 + 0xc;
    }
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(int *)(param_1 + 0x40) = local_8;
  if ((0 < param_3) && (1 < local_8)) {
    FUN_00dd75d0(FUN_00f9a9b0,param_1,0xffffffff);
    FUN_00dd79a0(param_3);
    return;
  }
  FUN_00f9a9b0(0,param_1);
  return;
}

// 00F9AB40  FUN_00f9ab40  size=383  [run]
void FUN_00f9ab40(undefined4 param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_6c [3];
  undefined1 local_69;
  int local_68;
  int *local_64;
  int local_60;
  int local_5c;
  int local_58 [12];
  int local_28 [10];
  
  local_28[9] = DAT_018e8764 ^ (uint)auStack_6c;
  local_60 = *(int *)(param_2 + 0x60);
  local_68 = param_2;
  if (local_60 < *(int *)(param_2 + 0x44)) {
    do {
      local_64 = (int *)(param_2 + 0x60);
      local_5c = local_60 + 1;
      LOCK();
      local_69 = local_60 == *local_64;
      if ((bool)local_69) {
        *local_64 = local_5c;
      }
      UNLOCK();
      if ((bool)local_69) {
        iVar9 = local_60 * 8;
        iVar8 = 0;
        piVar7 = (int *)(*(int *)(param_2 + 0x30) + iVar9);
        local_64 = piVar7;
        _memset(local_58,0,0x30);
        local_28[0] = 0;
        local_28[1] = 0;
        local_28[2] = 0;
        local_28[3] = 0;
        local_28[4] = 0;
        local_28[5] = 0;
        iVar6 = *(int *)(local_68 + 0x40);
        local_28[6] = 0;
        local_28[7] = 0;
        local_28[8] = 0;
        if (iVar6 < 1) {
LAB_00f9ac8f:
          iVar9 = 0;
          *piVar7 = 0;
        }
        else {
          piVar4 = local_58;
          piVar3 = (int *)(*(int *)(local_68 + 0x2c) + 8);
          do {
            piVar1 = (int *)(*piVar3 + iVar9);
            if (0 < piVar1[1]) {
              *piVar4 = *piVar1;
              iVar10 = *piVar1;
              piVar4[1] = piVar1[1];
              local_28[iVar8] = iVar10;
              iVar8 = iVar8 + 1;
              piVar4 = piVar4 + 2;
              piVar7 = local_64;
            }
            piVar3 = piVar3 + 3;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
          if (iVar8 < 1) goto LAB_00f9ac8f;
          local_28[8] = iVar8;
          if (iVar8 < 2) {
            puVar5 = (undefined4 *)0x0;
            if (local_58[1] < 1) goto LAB_00f9ac3e;
            puVar2 = (undefined4 *)(local_58[0] + 0x14);
            iVar6 = local_28[0];
            iVar8 = local_28[6];
            iVar10 = local_58[1];
            do {
              iVar9 = iVar6;
              if (iVar8 == 0) {
                iVar8 = iVar9;
              }
              if (puVar5 != (undefined4 *)0x0) {
                puVar5[5] = iVar9;
              }
              puVar2[-1] = puVar5;
              *puVar2 = 0;
              puVar5 = puVar2 + -5;
              puVar2 = puVar2 + 8;
              iVar10 = iVar10 + -1;
              iVar6 = iVar9 + 0x20;
            } while (iVar10 != 0);
            *piVar7 = iVar8;
          }
          else {
            FUN_00f9a7d0();
LAB_00f9ac3e:
            *piVar7 = local_28[6];
            iVar9 = local_28[7];
          }
        }
        piVar7[1] = iVar9;
        param_2 = local_68;
      }
      local_60 = *(int *)(param_2 + 0x60);
    } while (local_60 < *(int *)(param_2 + 0x44));
  }
  __security_check_cookie(local_28[9] ^ (uint)auStack_6c);
  return;
}

// 00F9AD00  FUN_00f9ad00  size=170  [run]
void __thiscall FUN_00f9ad00(int param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  *(undefined4 *)(param_1 + 0x3c) = 0;
  if ((*(int *)(param_1 + 100) != 0) && (0 < *(int *)(*(int *)(param_1 + 0x5c) + 0xc))) {
    FUN_00f97cf0();
    FUN_00f9aa50(param_2,param_3);
    *(undefined4 *)(param_1 + 0x60) = 0;
    if (param_3 < 1) {
      FUN_00f9ab40(0,param_1);
    }
    else {
      FUN_00dd75d0(FUN_00f9ab40,param_1,0xffffffff);
      FUN_00dd79a0(param_3);
    }
    iVar3 = 0;
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0x44)) {
      do {
        iVar2 = *(int *)(*(int *)(param_1 + 0x30) + iVar3 * 8);
        puVar1 = (undefined4 *)(*(int *)(param_1 + 0x30) + iVar3 * 8);
        if (iVar2 != 0) {
          if (*(int *)(param_1 + 0x3c) == 0) {
            *(int *)(param_1 + 0x3c) = iVar2;
          }
          if (iVar4 != 0) {
            *(undefined4 *)(iVar4 + 0x14) = *puVar1;
          }
          if (puVar1[1] != 0) {
            *(int *)(puVar1[1] + 0x10) = iVar4;
          }
          iVar4 = puVar1[1];
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 0x44));
    }
  }
  return;
}

// 00F9ADB0  FUN_00f9adb0  size=86  [run]
undefined4 __fastcall FUN_00f9adb0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_1[0x19] != 0) {
    iVar3 = 0;
    if (0 < param_1[0x14]) {
      iVar2 = param_1[0x15];
      do {
        iVar4 = 0;
        if (0 < iVar2) {
          do {
            uVar1 = (**(code **)(*param_1 + 4))(iVar3,iVar4);
            *(undefined4 *)(param_1[0xe] + (param_1[0x15] * iVar3 + iVar4) * 4) = uVar1;
            iVar2 = param_1[0x15];
            iVar4 = iVar4 + 1;
          } while (iVar4 < iVar2);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < param_1[0x14]);
    }
    return 1;
  }
  return 0;
}

// 00F9AE10  FUN_00f9ae10  size=124  [run]
void __fastcall FUN_00f9ae10(int param_1)

{
  uint *puVar1;
  ushort uVar2;
  byte bVar3;
  ushort uVar4;
  uint *puVar5;
  byte local_8;
  byte local_7;
  uint local_4;
  
  if ((*(int *)(param_1 + 100) != 0) && (*(uint **)(param_1 + 0x3c) != (uint *)0x0)) {
    uVar4 = 0xffff;
    puVar5 = *(uint **)(param_1 + 0x3c);
    do {
      puVar1 = (uint *)puVar5[5];
      if (puVar5[2] != 0) {
        local_8 = (byte)(*puVar5 >> 0x1e);
        bVar3 = (byte)(*puVar5 >> 0x17);
        local_7 = bVar3 & 0x7f;
        uVar2 = CONCAT11(local_8,bVar3) & 0x37f;
        local_4 = *puVar5 & 0xfffff;
        if (uVar2 != uVar4) {
          uVar4 = uVar2;
        }
        (*(code *)puVar5[2])(&local_8,puVar5[3]);
      }
      puVar5 = puVar1;
    } while (puVar1 != (uint *)0x0);
  }
  return;
}

// 00F9AEA0  FUN_00f9aea0  size=375  [run]
undefined4 __thiscall
FUN_00f9aea0(int param_1,byte param_2,uint param_3,byte param_4,uint param_5,uint param_6,
            uint param_7)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  uint local_8;
  
  uVar1 = param_3;
  if ((*(int *)(param_1 + 100) == 0) || (param_6 == 0)) {
    return 0;
  }
  uVar3 = (uint)param_2;
  if ((int)uVar3 < *(int *)(param_1 + 0x50)) {
    uVar4 = param_3 & 0xff;
    if ((((int)uVar4 < *(int *)(param_1 + 0x54)) && (param_4 < 3)) && (param_5 < 0xfffff)) {
      if (*(int *)(param_1 + 0x5c) == 0) {
        return 0;
      }
      if (*(int *)(*(int *)(param_1 + 0x38) + (*(int *)(param_1 + 0x54) * uVar3 + uVar4) * 4) == 0)
      {
        param_3 = *(uint *)(*(int *)(param_1 + 0x5c) + 0xc);
        local_8 = param_3 + 1;
        if ((int)local_8 < *(int *)(param_1 + 0x4c)) {
          do {
            puVar2 = (uint *)(*(int *)(param_1 + 0x5c) + 0xc);
            LOCK();
            bVar5 = param_3 == *puVar2;
            if (bVar5) {
              *puVar2 = local_8;
            }
            UNLOCK();
            if (bVar5) {
              puVar2 = (uint *)(param_3 * 0x20 + *(int *)(*(int *)(param_1 + 0x5c) + 8));
              InterlockedIncrement
                        ((LONG *)(*(int *)(*(int *)(param_1 + 0x5c) + 0x10) +
                                 (*(int *)(param_1 + 0x54) * uVar3 + uVar4) * 4));
              *puVar2 = ((uVar1 & 0x7f | uVar3 << 7) * 8 | param_4 & 7) << 0x14 | param_5 & 0xfffff;
              puVar2[1] = param_3;
              puVar2[2] = param_6;
              puVar2[3] = param_7;
              puVar2[5] = 0;
              return 1;
            }
            param_3 = *(uint *)(*(int *)(param_1 + 0x5c) + 0xc);
            local_8 = param_3 + 1;
          } while ((int)local_8 < *(int *)(param_1 + 0x4c));
        }
        FUN_00dd5650(&DAT_016eb770);
        return 0;
      }
      return 1;
    }
  }
  FUN_00dd5650(&DAT_016eb738);
  return 0;
}

// 00F9B020  FUN_00f9b020  size=9  [run]
void __fastcall FUN_00f9b020(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}

// 00F9B090  FUN_00f9b090  size=246  [run]
void __fastcall FUN_00f9b090(int param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint unaff_EDI;
  uint uStack_8;
  undefined1 auStack_4 [4];
  
  uVar3 = *(int *)(param_1 + 0x1c) - 1U & 1;
  iVar4 = param_1 + *(int *)(param_1 + 0x1c) * 0x1c;
  *(int *)(param_1 + 0x14) = iVar4 + 0x80;
  *(uint *)(param_1 + 0x1c) = uVar3;
  iVar5 = param_1 + uVar3 * 0x1c;
  *(int **)(param_1 + 0x10) = (int *)(iVar4 + 0x48);
  *(int *)(param_1 + 4) = iVar5 + 0x48;
  *(int *)(param_1 + 8) = iVar5 + 0x80;
  piVar1 = *(int **)(iVar4 + 0x48);
  if ((piVar1 != (int *)0x0) && (*(int *)(iVar4 + 0x60) != 0)) {
    (**(code **)(*piVar1 + 0x30))(piVar1);
    *(undefined4 *)(iVar4 + 0x60) = 0;
  }
  iVar4 = *(int *)(param_1 + 0x14);
  if ((*(int *)(iVar4 + 4) != 0) && (*(int *)(iVar4 + 0x18) != 0)) {
    (**(code **)(**(int **)(iVar4 + 4) + 0x30))(*(int **)(iVar4 + 4));
    *(undefined4 *)(iVar4 + 0x18) = 0;
  }
  piVar1 = *(int **)(param_1 + 4);
  piVar2 = (int *)*piVar1;
  if ((piVar2 != (int *)0x0) && (piVar1[6] == 0)) {
    iVar4 = (**(code **)(*piVar2 + 0x2c))(piVar2,0,piVar1[4],&uStack_8,0);
    piVar1[6] = (iVar4 < 0) - 1 & uStack_8;
  }
  iVar4 = *(int *)(param_1 + 8);
  if ((*(int *)(iVar4 + 4) != 0) && (*(int *)(iVar4 + 0x18) == 0)) {
    iVar5 = (**(code **)(**(int **)(iVar4 + 4) + 0x2c))
                      (*(int **)(iVar4 + 4),0,*(int *)(iVar4 + 0x10) * *(int *)(iVar4 + 0xc),
                       auStack_4,0);
    *(uint *)(iVar4 + 0x18) = (iVar5 < 0) - 1 & unaff_EDI;
  }
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x14) = 0;
  *(undefined4 *)(*(int *)(param_1 + 8) + 0x14) = 0;
  return;
}

// 00F9B1C0  FUN_00f9b1c0  size=43  [run]
void __fastcall FUN_00f9b1c0(int param_1)

{
  if ((*(int *)(param_1 + 4) != 0) && (*(int *)(param_1 + 4) != 0)) {
    FUN_00dd48d0(*(int *)(param_1 + 4),0);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}


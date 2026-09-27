// src/collision/UICollision.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CCFDA0..00D131E0, 52 functions

#include "mgrr.h"

// 00CCFDA0  FUN_00ccfda0  size=96  [callgraph]
undefined4 __thiscall FUN_00ccfda0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 8) = param_2;
  if (*(int *)(param_1 + 0x30) == 0) {
    iVar1 = FUN_00dd3580(0x900,param_2);
    *(int *)(param_1 + 0x30) = iVar1;
    if (iVar1 == 0) {
      return 0;
    }
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x3c) = 0x40;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  FUN_00dd7240();
  *(undefined4 *)(param_1 + 0x48) = 1;
  return 1;
}

// 00CCFE40  UICollision::cUICollisionManager::vf00  size=31  [class]
undefined4 * __thiscall UICollision::cUICollisionManager::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00CCFED0  FUN_00ccfed0  size=77  [between]
void __fastcall FUN_00ccfed0(int param_1)

{
  if ((*(int *)(param_1 + 0x70) != 0) && (*(int *)(param_1 + 0x28) != 0)) {
    if (*(int *)(param_1 + 0x28) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    FUN_00983250();
    if (*(int *)(param_1 + 0x28) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    }
  }
  return;
}

// 00CCFF30  FUN_00ccff30  size=92  [between]
undefined4 __thiscall FUN_00ccff30(int param_1,int param_2,ushort param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x70) != 0) {
    uVar1 = 0;
    if (*(int *)(param_1 + 0x28) != 0) {
      if (*(int *)(param_1 + 0x28) != 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
      }
      uVar1 = FUN_00982fd0(param_2 << 0x10 | (uint)param_3,0);
      if (*(int *)(param_1 + 0x28) != 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
      }
    }
    return uVar1;
  }
  return 0;
}

// 00CCFF90  FUN_00ccff90  size=204  [between]
int __thiscall FUN_00ccff90(int param_1,int param_2,uint param_3,uint *param_4)

{
  int iVar1;
  undefined1 local_3c [8];
  ushort local_34;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  
  if (*(int *)(param_1 + 0x70) == 0) {
    return 0;
  }
  if (param_4 != (uint *)0x0) {
    iVar1 = 0;
    if (*(int *)(param_1 + 0x28) != 0) {
      if (*(int *)(param_1 + 0x28) != 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
      }
      cTouchArea::cTouchArea();
      iVar1 = FUN_00982e20(param_2 << 0x10 | param_3 & 0xffff,local_3c);
      if (iVar1 == 1) {
        param_4[1] = local_24;
        *param_4 = local_34 | 0x10000;
        param_4[2] = local_20;
        param_4[3] = local_1c;
        param_4[4] = local_18;
        param_4[5] = local_14;
        param_4[6] = local_10;
        param_4[7] = local_c;
      }
      if (*(int *)(param_1 + 0x28) != 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
      }
    }
    return iVar1;
  }
  return 0;
}

// 00CD0060  FUN_00cd0060  size=62  [between]
undefined4 __thiscall FUN_00cd0060(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x44) != 1) {
    *(undefined4 *)(param_1 + 8) = param_2;
    iVar1 = FUN_00cc5800(param_3,param_2);
    if (iVar1 == 0) {
      return 0;
    }
    FUN_00dd7240();
    *(undefined4 *)(param_1 + 0x44) = 1;
  }
  return 1;
}

// 00CD00E0  FUN_00cd00e0  size=62  [between]
undefined4 __thiscall FUN_00cd00e0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x44) != 1) {
    *(undefined4 *)(param_1 + 8) = param_2;
    iVar1 = FUN_00cc58f0(param_3,param_2);
    if (iVar1 == 0) {
      return 0;
    }
    FUN_00dd7240();
    *(undefined4 *)(param_1 + 0x44) = 1;
  }
  return 1;
}

// 00CD0180  UICollision::cUIHitManager::vf00  size=31  [class]
undefined4 * __thiscall UICollision::cUIHitManager::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00CFBCE0  UICollision::cUICollision::cUICollision  size=161  [class]
void __fastcall UICollision::cUICollision::cUICollision(undefined4 *param_1)

{
  *param_1 = vftable;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  param_1[200] = 0;
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_1[0xc5] == 0) {
    param_1[0xc5] = param_1 + 4;
    param_1[0xc6] = 0x40;
    param_1[199] = 0;
    param_1[200] = 0;
  }
  if (param_1[0xda] == 0) {
    param_1[0xda] = param_1 + 0xc9;
    param_1[0xdb] = 8;
    param_1[0xdc] = 0;
    param_1[0xdd] = 0;
  }
  param_1[3] = 0;
  return;
}

// 00CFBD90  UICollision::cUICollision::~cUICollision  size=119  [class]
void __fastcall UICollision::cUICollision::~cUICollision(undefined4 *param_1)

{
  *param_1 = vftable;
  if (param_1[0xda] != 0) {
    param_1[0xdc] = 0;
    if (param_1[0xdd] != 0) {
      FUN_00dd48d0(param_1[0xda],0);
      param_1[0xdd] = 0;
    }
    param_1[0xda] = 0;
    param_1[0xdb] = 0;
  }
  if (param_1[0xc5] != 0) {
    param_1[199] = 0;
    if (param_1[200] != 0) {
      FUN_00dd48d0(param_1[0xc5],0);
      param_1[200] = 0;
    }
    param_1[0xc5] = 0;
    param_1[0xc6] = 0;
  }
  return;
}

// 00CFC0E0  FUN_00cfc0e0  size=89  [callgraph]
undefined4 __thiscall FUN_00cfc0e0(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
  uVar3 = 0;
  if ((param_3 != (int *)0x0) &&
     (piVar4 = *(int **)(param_1 + 0x368), piVar4 != piVar4 + *(int *)(param_1 + 0x370) * 2)) {
    piVar1 = piVar4 + *(int *)(param_1 + 0x370) * 2;
    while( true ) {
      iVar2 = piVar4[1];
      if (*piVar4 == param_2) break;
      piVar4 = piVar4 + 2;
      if (piVar4 == piVar1) {
        return uVar3;
      }
    }
    *param_3 = *piVar4;
    param_3[1] = iVar2;
    uVar3 = 1;
  }
  return uVar3;
}

// 00CFC3D0  UICollision::cUICollisionData::cUICollisionData_2  size=56  [class]
void __fastcall UICollision::cUICollisionData::cUICollisionData_2(undefined4 *param_1)

{
  *param_1 = vftable;
  if (param_1[0xe] != 0) {
    param_1[0x10] = 0;
    if (param_1[0x11] != 0) {
      FUN_00dd48d0(param_1[0xe],0);
      param_1[0x11] = 0;
    }
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  FUN_00dd7270();
  return;
}

// 00CFC410  FUN_00cfc410  size=171  [between]
undefined4 __thiscall FUN_00cfc410(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  int local_24 [9];
  
  iVar3 = *(int *)(param_1 + 0x40);
  piVar4 = *(int **)(param_1 + 0x38);
  piVar1 = piVar4 + iVar3 * 9;
  while( true ) {
    if (piVar4 == piVar1) {
      if (iVar3 < *(int *)(param_1 + 0x3c)) {
        if (iVar3 < *(int *)(param_1 + 0x3c)) {
          puVar7 = (undefined4 *)(*(int *)(param_1 + 0x38) + iVar3 * 0x24);
          if (puVar7 != (undefined4 *)0x0) {
            for (iVar3 = 9; register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 4),
                iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar7 = *(undefined4 *)register0x00000010;
              puVar7 = puVar7 + 1;
            }
          }
          *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
        }
        return 1;
      }
      FUN_00dd5650(&DAT_016b93f0);
      return 0;
    }
    piVar5 = piVar4;
    piVar6 = local_24;
    for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar6 = *piVar5;
      piVar5 = piVar5 + 1;
      piVar6 = piVar6 + 1;
    }
    if (local_24[0] == param_2) break;
    piVar4 = piVar4 + 9;
  }
  FUN_00dd5650(&DAT_016b9424,param_2);
  return 0;
}

// 00CFC510  FUN_00cfc510  size=295  [between]
int __thiscall FUN_00cfc510(int param_1,int *param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *local_54;
  uint local_50;
  int local_48 [9];
  int local_24 [9];
  
  if (param_2 == (int *)0x0) {
    return 0;
  }
  iVar4 = 0;
  if (*(int *)(param_1 + 0x28) != 0) {
    if (*(int *)(param_1 + 0x28) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    }
    local_50 = 0;
    if (param_3 != 0) {
      local_54 = param_2;
      do {
        iVar4 = *(int *)(param_1 + 0x40);
        piVar6 = *(int **)(param_1 + 0x38);
        piVar3 = local_54;
        piVar2 = local_48;
        for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
          *piVar2 = *piVar3;
          piVar3 = piVar3 + 1;
          piVar2 = piVar2 + 1;
        }
        piVar3 = piVar6 + iVar4 * 9;
        param_2 = (int *)0x1;
        for (; piVar6 != piVar3; piVar6 = piVar6 + 9) {
          piVar2 = piVar6;
          piVar5 = local_24;
          for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
            *piVar5 = *piVar2;
            piVar2 = piVar2 + 1;
            piVar5 = piVar5 + 1;
          }
          if (local_24[0] == local_48[0]) {
            param_2 = (int *)0x0;
            FUN_00dd5650(&DAT_016b9424,local_48[0]);
            goto LAB_00cfc5ed;
          }
        }
        if (iVar4 < *(int *)(param_1 + 0x3c)) {
          if (iVar4 < *(int *)(param_1 + 0x3c)) {
            piVar6 = (int *)(*(int *)(param_1 + 0x38) + iVar4 * 0x24);
            if (piVar6 != (int *)0x0) {
              piVar3 = local_48;
              for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
                *piVar6 = *piVar3;
                piVar3 = piVar3 + 1;
                piVar6 = piVar6 + 1;
              }
            }
            *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
          }
        }
        else {
          param_2 = (int *)0x0;
          FUN_00dd5650(&DAT_016b93f0);
        }
LAB_00cfc5ed:
        iVar4 = (int)param_2;
        if (param_2 == (int *)0x0) break;
        local_54 = local_54 + 9;
        local_50 = local_50 + 1;
      } while (local_50 < param_3);
    }
    if (*(int *)(param_1 + 0x28) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    }
  }
  return iVar4;
}

// 00CFC650  FUN_00cfc650  size=119  [between]
undefined4 __thiscall FUN_00cfc650(int param_1,int param_2,void *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int local_24 [9];
  
  uVar2 = 0;
  if ((param_3 != (void *)0x0) &&
     (piVar4 = *(int **)(param_1 + 0x38), piVar4 != piVar4 + *(int *)(param_1 + 0x40) * 9)) {
    piVar1 = piVar4 + *(int *)(param_1 + 0x40) * 9;
    while( true ) {
      piVar5 = piVar4;
      piVar6 = local_24;
      for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar6 = *piVar5;
        piVar5 = piVar5 + 1;
        piVar6 = piVar6 + 1;
      }
      if (local_24[0] == param_2) break;
      piVar4 = piVar4 + 9;
      if (piVar4 == piVar1) {
        return uVar2;
      }
    }
    FID_conflict__memcpy(param_3,local_24,0x24);
    uVar2 = 1;
  }
  return uVar2;
}

// 00CFC6D0  FUN_00cfc6d0  size=139  [between]
undefined4 __thiscall FUN_00cfc6d0(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 local_28;
  int local_24 [9];
  
  local_28 = 0;
  if (*(int *)(param_1 + 0x28) == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  }
  piVar2 = *(int **)(param_1 + 0x38);
  uVar6 = 0;
  if (piVar2 != piVar2 + *(int *)(param_1 + 0x40) * 9) {
    piVar1 = piVar2 + *(int *)(param_1 + 0x40) * 9;
    do {
      piVar4 = piVar2;
      piVar5 = local_24;
      for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar5 = *piVar4;
        piVar4 = piVar4 + 1;
        piVar5 = piVar5 + 1;
      }
      if (local_24[0] == param_2) {
        local_28 = 1;
        uVar6 = local_28;
        break;
      }
      piVar2 = piVar2 + 9;
      uVar6 = local_28;
    } while (piVar2 != piVar1);
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  }
  return uVar6;
}

// 00CFC760  FUN_00cfc760  size=184  [between]
undefined4 __thiscall FUN_00cfc760(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  LPCRITICAL_SECTION lpCriticalSection;
  int *local_30;
  undefined4 local_2c;
  LPCRITICAL_SECTION local_28;
  int local_24 [9];
  
  local_2c = 0;
  if (*(int *)(param_1 + 0x28) == 0) {
    return 0;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x10);
  local_28 = lpCriticalSection;
  if (*(int *)(param_1 + 0x28) != 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  iVar1 = *(int *)(param_1 + 0x40);
  iVar2 = *(int *)(param_1 + 0x38);
  local_30 = *(int **)(param_1 + 0x38);
  uVar4 = 0;
  do {
    if (local_30 == (int *)(iVar2 + iVar1 * 0x24)) {
LAB_00cfc7f5:
      if (lpCriticalSection[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
        LeaveCriticalSection(lpCriticalSection);
      }
      return uVar4;
    }
    piVar5 = local_30;
    piVar6 = local_24;
    for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar6 = *piVar5;
      piVar5 = piVar5 + 1;
      piVar6 = piVar6 + 1;
    }
    if (local_24[0] == param_2) {
      FUN_00cf6050(&param_2,&local_30);
      local_2c = 1;
      uVar4 = local_2c;
      lpCriticalSection = local_28;
      goto LAB_00cfc7f5;
    }
    local_30 = local_30 + 9;
    uVar4 = local_2c;
    lpCriticalSection = local_28;
  } while( true );
}

// 00CFC820  UICollision::cUICollisionData::cUICollisionData  size=209  [class]
undefined4 __thiscall
UICollision::cUICollisionData::cUICollisionData(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x10) == 1) {
    return 1;
  }
  *(undefined4 *)(param_1 + 0xc) = param_2;
  if (*(int *)(param_1 + 4) == 0) {
    puVar2 = (undefined4 *)FUN_00dd3500(0x50,param_2);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      *puVar2 = vftable;
      puVar2[10] = 0;
      puVar2[0xd] = 0;
      puVar2[0xe] = 0;
      puVar2[0xf] = 0;
      puVar2[0x10] = 0;
      puVar2[0x11] = 0;
      puVar2[2] = 0;
      puVar2[0xc] = 0;
      puVar2[0x12] = 0;
    }
    *(undefined4 **)(param_1 + 4) = puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      return 0;
    }
  }
  if (*(int *)(param_1 + 8) == 0) {
    iVar3 = FUN_00dd3500(0x378,*(undefined4 *)(param_1 + 0xc));
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = cUICollision::cUICollision();
    }
    *(int *)(param_1 + 8) = iVar3;
    if (iVar3 == 0) {
      return 0;
    }
  }
  if ((*(int *)(*(int *)(param_1 + 4) + 0x48) == 0) && (iVar3 = FUN_00ccfda0(param_2), iVar3 == 0))
  {
    return 0;
  }
  iVar3 = *(int *)(param_1 + 8);
  if (*(int *)(iVar3 + 0xc) == 0) {
    iVar1 = *(int *)(param_1 + 4);
    if (iVar1 == 0) {
      return 0;
    }
    *(undefined4 *)(iVar3 + 4) = param_2;
    *(int *)(iVar3 + 8) = iVar1;
    *(undefined4 *)(iVar3 + 0xc) = 1;
  }
  *(undefined4 *)(param_1 + 0x10) = 1;
  return 1;
}

// 00CFC960  FUN_00cfc960  size=63  [between]
undefined4 __thiscall
FUN_00cfc960(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_8 [8];
  
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar1 = FUN_00cfc0e0(param_2,local_8);
    if (iVar1 != 0) {
      uVar2 = FUN_00982f30(param_3,param_4);
      return uVar2;
    }
  }
  return 0;
}

// 00CFC9F0  FUN_00cfc9f0  size=63  [between]
undefined4 __thiscall FUN_00cfc9f0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 local_8 [8];
  
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar1 = FUN_00cfc0e0(param_2,local_8);
    if (iVar1 != 0) {
      FUN_00982f70(param_3);
      return 1;
    }
  }
  return 0;
}

// 00CFCA90  UICollision::cUIHit::cUIHit  size=79  [class]
undefined4 * __fastcall UICollision::cUIHit::cUIHit(undefined4 *param_1)

{
  *param_1 = vftable;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  cTouchManager::cTouchManager();
  param_1[0x1c] = 0;
  param_1[0xc] = 0;
  return param_1;
}

// 00CFCAE0  UICollision::cUIHit::~cUIHit  size=132  [class]
void __fastcall UICollision::cUIHit::~cUIHit(undefined4 *param_1)

{
  *param_1 = vftable;
  cTouchManager::~cTouchManager();
  if (param_1[0x18] != 0) {
    param_1[0x1a] = 0;
    if (param_1[0x1b] != 0) {
      FUN_00dd48d0(param_1[0x18],0);
      param_1[0x1b] = 0;
    }
    param_1[0x18] = 0;
    param_1[0x19] = 0;
  }
  if (param_1[0x13] != 0) {
    param_1[0x15] = 0;
    if (param_1[0x16] != 0) {
      FUN_00dd48d0(param_1[0x13],0);
      param_1[0x16] = 0;
    }
    param_1[0x13] = 0;
    param_1[0x14] = 0;
  }
  if (param_1[0xe] != 0) {
    param_1[0x10] = 0;
    if (param_1[0x11] != 0) {
      FUN_00dd48d0(param_1[0xe],0);
      param_1[0x11] = 0;
    }
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  FUN_00dd7270();
  return;
}

// 00CFCB70  FUN_00cfcb70  size=190  [between]
void __thiscall FUN_00cfcb70(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  uint *local_1c [2];
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  uint local_4;
  
  if ((*(int *)(param_1 + 0x70) != 0) && (*(int *)(param_1 + 0x28) != 0)) {
    if (*(int *)(param_1 + 0x28) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    }
    uVar1 = param_2;
    local_1c[0] = *(uint **)(param_1 + 0x38);
    if (local_1c[0] != local_1c[0] + *(int *)(param_1 + 0x40) * 6) {
      do {
        local_14 = local_1c[0][1];
        local_10 = local_1c[0][2];
        local_c = local_1c[0][3];
        local_8 = local_1c[0][4];
        local_4 = local_1c[0][5];
        if (*local_1c[0] >> 0x10 == uVar1) {
          puVar2 = (undefined4 *)FUN_00cf5c30(&param_2,local_1c);
          local_1c[0] = (uint *)*puVar2;
        }
        else {
          local_1c[0] = local_1c[0] + 6;
        }
      } while (local_1c[0] != (uint *)(*(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x40) * 0x18));
    }
    FUN_00983650(uVar1);
    if (*(int *)(param_1 + 0x28) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    }
  }
  return;
}

// 00CFCC30  FUN_00cfcc30  size=205  [between]
void __thiscall FUN_00cfcc30(int param_1,int param_2,uint param_3)

{
  undefined4 *puVar1;
  uint *local_20;
  undefined1 local_1c [8];
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  uint local_4;
  
  if ((*(int *)(param_1 + 0x70) != 0) && (*(int *)(param_1 + 0x28) != 0)) {
    if (*(int *)(param_1 + 0x28) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    }
    local_20 = *(uint **)(param_1 + 0x38);
    if (local_20 != local_20 + *(int *)(param_1 + 0x40) * 6) {
      do {
        local_14 = local_20[1];
        local_10 = local_20[2];
        local_c = local_20[3];
        local_8 = local_20[4];
        local_4 = local_20[5];
        if (*local_20 == (param_2 << 0x10 | param_3 & 0xffff)) {
          puVar1 = (undefined4 *)FUN_00cf5c30(local_1c,&local_20);
          local_20 = (uint *)*puVar1;
        }
        else {
          local_20 = local_20 + 6;
        }
      } while (local_20 != (uint *)(*(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x40) * 0x18));
    }
    FUN_009836d0(param_2,param_3);
    if (*(int *)(param_1 + 0x28) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    }
  }
  return;
}

// 00CFCD00  FUN_00cfcd00  size=468  [between]
uint __thiscall
FUN_00cfcd00(int param_1,uint param_2,uint param_3,uint param_4,uint *param_5,uint param_6,
            int param_7)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(int *)(param_1 + 0x28) == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  }
  uVar2 = param_2;
  puVar3 = *(uint **)(param_1 + 0x38);
  puVar1 = puVar3 + *(int *)(param_1 + 0x40) * 6;
  for (; puVar3 != puVar1; puVar3 = puVar3 + 6) {
    local_1c = puVar3[1];
    local_18 = puVar3[2];
    local_14 = puVar3[3];
    local_10 = puVar3[4];
    local_c = puVar3[5];
    if (*puVar3 == param_2) {
      uVar4 = 0;
      puVar6 = &DAT_016b9474;
      goto LAB_00cfceaf;
    }
  }
  uVar4 = (uint)(*(int *)(param_1 + 0x40) < *(int *)(param_1 + 0x3c));
  if (uVar4 == 0) {
    puVar6 = &DAT_016b9498;
  }
  else {
    if (uVar4 != 1) goto LAB_00cfceb7;
    local_c = 0;
    local_8 = 0;
    local_4 = 0;
    local_18 = param_5[1];
    local_20 = param_7 << 0x10 | 1;
    local_1c = *param_5;
    local_10 = param_5[3];
    local_14 = param_5[2];
    uVar4 = FUN_00cb4de0(&local_20,0,0,param_3,param_4,&local_20);
    if (uVar4 == 1) {
      iVar5 = cTouchArea::cTouchArea(uVar2,local_1c,local_18,local_14,local_10,0,1,1);
      if (iVar5 < 0) {
        uVar4 = 0;
      }
      else {
        local_1c = param_3;
        local_18 = param_4;
        local_20 = uVar2;
        local_14 = 0x1e;
        local_10 = 0;
        local_c = param_6;
        FUN_00cf5bd0(&param_2,&local_20);
      }
      goto LAB_00cfceb7;
    }
    puVar6 = &DAT_016b9454;
  }
LAB_00cfceaf:
  FUN_00dd5650(puVar6);
LAB_00cfceb7:
  if (*(int *)(param_1 + 0x28) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  }
  return uVar4;
}

// 00CFCEE0  FUN_00cfcee0  size=200  [between]
undefined4 __thiscall FUN_00cfcee0(int param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 local_3c [12];
  undefined4 local_30;
  
  uVar4 = 0;
  if (*(int *)(param_1 + 0x28) == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  }
  piVar2 = *(int **)(param_1 + 0x38);
  piVar1 = piVar2 + *(int *)(param_1 + 0x40) * 6;
  do {
    if (piVar2 == piVar1) {
LAB_00cfcf86:
      if (*(int *)(param_1 + 0x28) != 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
      }
      return uVar4;
    }
    if (*piVar2 == param_2) {
      cTouchArea::cTouchArea();
      iVar3 = FUN_00982e20(param_2,local_3c);
      if (iVar3 == 1) {
        cTouchArea::cTouchArea(param_2,*param_3,param_3[1],param_3[2],param_3[3],local_30,1,1);
        uVar4 = 1;
      }
      else {
        FUN_00dd5650(&DAT_016b94c0);
      }
      goto LAB_00cfcf86;
    }
    piVar2 = piVar2 + 6;
  } while( true );
}

// 00CFD020  FUN_00cfd020  size=106  [between]
undefined4
FUN_00cfd020(int param_1,ushort param_2,undefined4 param_3,undefined4 param_4,int param_5,
            undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (param_5 != 0) {
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    local_14 = 0;
    iVar1 = FUN_00cab860(&local_20);
    if (iVar1 != 0) {
      uVar2 = FUN_00cfcd00(param_1 << 0x10 | (uint)param_2,param_3,param_4,&local_20,0xfffffffe,
                           param_6);
      return uVar2;
    }
  }
  return 0;
}

// 00CFD090  FUN_00cfd090  size=162  [between]
undefined4 __thiscall FUN_00cfd090(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  
  piVar6 = param_3;
  if (*(int *)(param_1 + 0x70) == 0) {
    return 0;
  }
  if (param_3 != (int *)0x0) {
    piVar7 = *(int **)(param_1 + 0x38);
    param_3 = (int *)0x0;
    if (piVar7 != piVar7 + *(int *)(param_1 + 0x40) * 6) {
      do {
        iVar1 = piVar7[4];
        iVar2 = piVar7[1];
        iVar3 = piVar7[2];
        iVar4 = piVar7[3];
        iVar5 = piVar7[5];
        if (*piVar7 == param_2) {
          *piVar6 = *piVar7;
          piVar6[1] = iVar2;
          piVar6[2] = iVar3;
          piVar6[3] = iVar4;
          piVar6[4] = iVar1;
          piVar6[5] = iVar5;
          param_3 = (int *)0x1;
        }
        piVar7 = piVar7 + 6;
      } while (piVar7 != (int *)(*(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x40) * 0x18));
    }
    return param_3;
  }
  return 0;
}

// 00CFD140  FUN_00cfd140  size=177  [between]
undefined4 __thiscall FUN_00cfd140(int param_1,uint param_2,undefined4 param_3)

{
  uint *puVar1;
  uint *puVar2;
  
  if (*(int *)(param_1 + 0x70) == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    if (*(int *)(param_1 + 0x28) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    }
    puVar2 = *(uint **)(param_1 + 0x38);
    puVar1 = puVar2 + *(int *)(param_1 + 0x40) * 6;
    for (; puVar2 != puVar1; puVar2 = puVar2 + 6) {
      if (param_2 == *puVar2 >> 0x10) {
        FUN_00982f30(*puVar2,param_3);
      }
    }
    if (*(int *)(param_1 + 0x28) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    }
  }
  return 1;
}

// 00CFD350  FUN_00cfd350  size=97  [between]
int __thiscall FUN_00cfd350(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int local_50 [19];
  
  piVar2 = *(int **)(param_1 + 0x60);
  if (piVar2 != piVar2 + *(int *)(param_1 + 0x68) * 0x11) {
    piVar1 = piVar2 + *(int *)(param_1 + 0x68) * 0x11;
    do {
      piVar4 = piVar2;
      piVar5 = local_50;
      for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar5 = *piVar4;
        piVar4 = piVar4 + 1;
        piVar5 = piVar5 + 1;
      }
      if (local_50[0] == param_2) {
        return piVar2[6];
      }
      piVar2 = piVar2 + 0x11;
    } while (piVar2 != piVar1);
  }
  return 0;
}

// 00CFD440  UICollision::cUIHitData::cUIHitData  size=35  [class]
void __fastcall UICollision::cUIHitData::cUIHitData(undefined4 *param_1)

{
  *param_1 = vftable;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[2] = 0;
  param_1[0x11] = 0;
  return;
}

// 00CFD470  UICollision::cUIHitData::cUIHitData_2  size=56  [class]
void __fastcall UICollision::cUIHitData::cUIHitData_2(undefined4 *param_1)

{
  *param_1 = vftable;
  if (param_1[0xd] != 0) {
    param_1[0xf] = 0;
    if (param_1[0x10] != 0) {
      FUN_00dd48d0(param_1[0xd],0);
      param_1[0x10] = 0;
    }
    param_1[0xd] = 0;
    param_1[0xe] = 0;
  }
  FUN_00dd7270();
  return;
}

// 00CFD7F0  UICollision::cUIHitDataManager::cUIHitDataManager  size=56  [class]
void __fastcall UICollision::cUIHitDataManager::cUIHitDataManager(undefined4 *param_1)

{
  *param_1 = vftable;
  if (param_1[0xd] != 0) {
    param_1[0xf] = 0;
    if (param_1[0x10] != 0) {
      FUN_00dd48d0(param_1[0xd],0);
      param_1[0x10] = 0;
    }
    param_1[0xd] = 0;
    param_1[0xe] = 0;
  }
  FUN_00dd7270();
  return;
}

// 00D12190  UICollision::cUICollision::vf00  size=30  [class]
undefined4 __thiscall UICollision::cUICollision::vf00(undefined4 param_1,byte param_2)

{
  ~cUICollision();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D121B0  FUN_00d121b0  size=115  [callgraph]
undefined4 __thiscall FUN_00d121b0(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_24 [36];
  
  if (*(int *)(param_1 + 0xc) == 0) {
    return 0;
  }
  if (param_4 == 0) {
    return 0;
  }
  iVar1 = FUN_00cfc650(param_3,local_24);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016bad9c,param_3);
    return 0;
  }
  uVar2 = FUN_00cb4c20(param_2,local_24,param_4);
  return uVar2;
}

// 00D12275  FUN_00d12275  size=125  [callgraph]
undefined4 FUN_00d12275(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_EAX;
  int iVar3;
  uint uVar4;
  int unaff_EDI;
  int in_stack_0000002c;
  uint in_stack_00000030;
  int in_stack_00000034;
  
  uVar4 = 0;
  if (in_stack_00000030 != 0) {
    do {
      uVar1 = *(undefined4 *)(in_EAX + 4 + uVar4 * 8);
      uVar2 = *(undefined4 *)(in_EAX + uVar4 * 8);
      if ((*(int *)(unaff_EDI + 0xc) == 0) || (in_stack_00000034 == 0)) {
        return 0;
      }
      iVar3 = FUN_00cfc650(uVar1,&stack0x00000004);
      if (iVar3 == 0) {
        FUN_00dd5650(&DAT_016bad9c,uVar1);
        return 0;
      }
      iVar3 = FUN_00cb4c20(uVar2,&stack0x00000004,in_stack_00000034);
      if (iVar3 == 0) {
        return 0;
      }
      uVar4 = uVar4 + 1;
      in_EAX = in_stack_0000002c;
    } while (uVar4 < in_stack_00000030);
  }
  return 1;
}

// 00D124D0  FUN_00d124d0  size=187  [callgraph]
undefined4
FUN_00d124d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_38 [4];
  undefined4 local_34;
  undefined1 local_30 [8];
  undefined4 local_28;
  undefined1 local_24 [4];
  int local_20;
  
  iVar1 = FUN_00cfc0e0(param_1,local_38);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_00cfbe70(param_1,param_2,local_30);
  if (iVar1 != 0) {
    iVar1 = FUN_00cfc650(local_28,local_24);
    if (iVar1 != 0) {
      if (local_20 == 1) {
        FUN_00cb4c80(local_24,param_3,param_4,param_5,param_6,local_24);
      }
      uVar2 = FUN_00cb4c20(param_2,local_24,local_34);
      return uVar2;
    }
    FUN_00dd5650(&DAT_016bae04,param_2);
  }
  return 0;
}

// 00D12590  UICollision::cUICollisionData::vf00  size=77  [class]
undefined4 * __thiscall UICollision::cUICollisionData::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if (param_1[0xe] != 0) {
    param_1[0x10] = 0;
    if (param_1[0x11] != 0) {
      FUN_00dd48d0(param_1[0xe],0);
      param_1[0x11] = 0;
    }
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  FUN_00dd7270();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D126F0  UICollision::cUIHit::vf00  size=30  [class]
undefined4 __thiscall UICollision::cUIHit::vf00(undefined4 param_1,byte param_2)

{
  ~cUIHit();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D12710  FUN_00d12710  size=429  [between]
undefined4 __thiscall FUN_00d12710(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int local_44 [7];
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (param_2 < 0) {
    if (*(int *)(param_1 + 0x70) != 0) {
      local_24 = 0.0;
      local_28 = 0.0;
      local_1c = 0.0;
      local_44[1] = 0;
      local_20 = 0.0;
      local_44[2] = 0;
      local_44[4] = 0;
      local_14 = 0.0;
      local_44[5] = 0;
      local_18 = 0.0;
      local_44[0] = -1;
      local_44[3] = 0xffffffff;
      local_44[6] = 0;
      local_c = 0;
      local_10 = 0;
    }
  }
  else {
    FUN_00cfd090(param_2,local_44);
    local_44[6] = FUN_00982f00(param_2);
    if ((local_44[6] == 1) || (local_44[6] == 3)) {
      local_20 = *(float *)(param_1 + 0x9c);
      local_1c = *(float *)(param_1 + 0xa0);
    }
    else {
      local_20 = local_28;
      local_1c = local_24;
    }
    local_28 = *(float *)(param_1 + 0x9c);
    local_24 = *(float *)(param_1 + 0xa0);
    local_c = local_10;
    local_18 = local_20 - *(float *)(param_1 + 0x9c);
    local_10 = 0;
    local_14 = local_1c - *(float *)(param_1 + 0xa0);
    switch(*(undefined4 *)(param_1 + 0xd0)) {
    case 1:
      local_10 = 1;
      break;
    case 2:
      local_10 = 2;
      break;
    case 3:
      local_10 = 4;
      break;
    case 4:
      local_10 = 3;
    default:
    }
  }
  uVar1 = 0;
  local_4 = local_8;
  switch(*(undefined4 *)(param_1 + 0xcc)) {
  case 1:
    uVar1 = 1;
    break;
  case 2:
    uVar1 = 2;
    break;
  case 3:
    uVar1 = 4;
    break;
  case 4:
    uVar1 = 3;
  }
  local_8 = uVar1;
  if (*(int *)(param_1 + 100) <= *(int *)(param_1 + 0x68)) {
    return 1;
  }
  piVar4 = (int *)(*(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68) * 0x44);
  if (piVar4 != (int *)0x0) {
    piVar3 = local_44;
    for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar4 = *piVar3;
      piVar3 = piVar3 + 1;
      piVar4 = piVar4 + 1;
    }
  }
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
  return 1;
}

// 00D128E0  FUN_00d128e0  size=268  [between]
int __thiscall
FUN_00d128e0(int param_1,int param_2,ushort param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  if (*(int *)(param_1 + 0x70) != 0) {
    iVar3 = 0;
    if (*(int *)(param_1 + 0x28) != 0) {
      if (*(int *)(param_1 + 0x28) != 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
      }
      uVar2 = param_2 << 0x10 | (uint)param_3;
      iVar1 = FUN_00cfd090(uVar2,&local_20);
      if ((((iVar1 == 1) && (iVar3 = FUN_00cfd9e0(local_14,local_10,local_c,&local_20), iVar3 == 1))
          && (iVar3 = FUN_00cb4ea0(&local_20,0,0,param_4,param_5,&local_20), iVar3 == 1)) &&
         (((local_20 & 0xffff) != 1 ||
          (iVar1 = cTouchArea::cTouchArea(uVar2,local_1c,local_18,local_14,local_10,0,0,0),
          iVar1 < 0)))) {
        iVar3 = 0;
      }
      if (*(int *)(param_1 + 0x28) != 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
      }
    }
    return iVar3;
  }
  return 0;
}

// 00D129F0  FUN_00d129f0  size=453  [between]
uint __thiscall
FUN_00d129f0(int param_1,int param_2,ushort param_3,uint param_4,uint param_5,uint param_6,
            uint param_7,uint param_8)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  
  if (*(int *)(param_1 + 0x70) == 0) {
    return 0;
  }
  uVar5 = 0;
  if (*(int *)(param_1 + 0x28) != 0) {
    if (*(int *)(param_1 + 0x28) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    }
    uVar2 = param_8;
    uVar6 = param_2 << 0x10 | (uint)param_3;
    puVar3 = *(uint **)(param_1 + 0x38);
    puVar1 = puVar3 + *(int *)(param_1 + 0x40) * 6;
    for (; puVar3 != puVar1; puVar3 = puVar3 + 6) {
      local_1c = puVar3[1];
      local_18 = puVar3[2];
      local_14 = puVar3[3];
      local_10 = puVar3[4];
      local_c = puVar3[5];
      if (*puVar3 == uVar6) {
        uVar5 = 0;
        FUN_00dd5650(&DAT_016b9474);
        goto LAB_00d12b98;
      }
    }
    uVar5 = (uint)(*(int *)(param_1 + 0x40) < *(int *)(param_1 + 0x3c));
    if (uVar5 == 0) {
      FUN_00dd5650(&DAT_016b9498);
    }
    else if (((uVar5 == 1) && (uVar5 = FUN_00cfd9e0(param_6,param_7,param_8,&local_20), uVar5 == 1))
            && (uVar5 = FUN_00cb4ea0(&local_20,0,0,param_4,param_5,&local_20), uVar5 == 1)) {
      if (((local_20 & 0xffff) == 1) &&
         (iVar4 = cTouchArea::cTouchArea(uVar6,local_1c,local_18,local_14,local_10,0,1,1),
         -1 < iVar4)) {
        local_1c = param_4;
        local_18 = param_5;
        local_14 = param_6;
        local_10 = param_7;
        local_c = uVar2;
        local_20 = uVar6;
        FUN_00cf5bd0(&param_6,&local_20);
      }
      else {
        uVar5 = 0;
      }
    }
LAB_00d12b98:
    if (*(int *)(param_1 + 0x28) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    }
  }
  return uVar5;
}

// 00D12BC0  FUN_00d12bc0  size=196  [between]
undefined4 FUN_00d12bc0(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 != (undefined4 *)0x0) {
    if (param_2[1] - 1 < 99) {
      uVar2 = (uint)*(ushort *)(param_1 + 0x86 + param_2[1] * 2);
    }
    else {
      uVar2 = 0xffffffff;
    }
    if (((uVar2 < *(uint *)(param_1 + 0x80)) &&
        (piVar1 = *(int **)(uVar2 * 0x400 + 0x3f0 + *(int *)(param_1 + 0x7c)), piVar1 != (int *)0x0)
        ) && (iVar3 = (**(code **)(*piVar1 + 8))(), iVar3 == 9)) {
      if (piVar1[2] == 0) {
        return 0;
      }
      uVar4 = FUN_00d129f0(param_3,*param_2,0,0,piVar1[4],piVar1[5],piVar1[6]);
      return uVar4;
    }
    FUN_00dd5650(&DAT_016bae3c,param_2[1]);
    return 0;
  }
  return 0;
}

// 00D12C90  FUN_00d12c90  size=261  [between]
uint FUN_00d12c90(uint param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  puVar5 = param_2;
  iVar2 = param_1;
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 != (undefined4 *)0x0) {
    param_1 = 1;
    if (param_3 != 0) {
      param_2 = (undefined4 *)param_3;
      do {
        if (puVar5 == (undefined4 *)0x0) {
          uVar3 = 0;
        }
        else {
          if (puVar5[1] - 1 < 99) {
            uVar3 = (uint)*(ushort *)(iVar2 + 0x86 + puVar5[1] * 2);
          }
          else {
            uVar3 = 0xffffffff;
          }
          if (((uVar3 < *(uint *)(iVar2 + 0x80)) &&
              (piVar1 = *(int **)(uVar3 * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)),
              piVar1 != (int *)0x0)) && (iVar4 = (**(code **)(*piVar1 + 8))(), iVar4 == 9)) {
            if (piVar1[2] == 0) {
              uVar3 = 0;
            }
            else {
              uVar3 = FUN_00d129f0(param_4,*puVar5,0,0,piVar1[4],piVar1[5],piVar1[6]);
            }
          }
          else {
            FUN_00dd5650(&DAT_016bae3c,puVar5[1]);
            uVar3 = 0;
          }
        }
        param_1 = param_1 & uVar3;
        puVar5 = puVar5 + 2;
        param_2 = (undefined4 *)((int)param_2 + -1);
      } while (param_2 != (undefined4 *)0x0);
    }
    return param_1;
  }
  return 0;
}

// 00D12DA0  FUN_00d12da0  size=152  [between]
undefined4 __thiscall FUN_00d12da0(int param_1,int param_2,ushort param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_18 [12];
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(int *)(param_1 + 0x70) == 0) {
    return 0;
  }
  if (param_4 != 0) {
    uVar2 = 0;
    if (*(int *)(param_1 + 0x28) != 0) {
      if (*(int *)(param_1 + 0x28) != 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
      }
      iVar1 = FUN_00cfd090(param_2 << 0x10 | (uint)param_3,local_18);
      if ((iVar1 == 1) && (local_c != 0x1e)) {
        uVar2 = FUN_00cfd9e0(local_c,local_8,local_4,param_4);
      }
      if (*(int *)(param_1 + 0x28) != 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
      }
    }
    return uVar2;
  }
  return 0;
}

// 00D12E40  UICollision::cUIHitData::vf00  size=77  [class]
undefined4 * __thiscall UICollision::cUIHitData::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if (param_1[0xd] != 0) {
    param_1[0xf] = 0;
    if (param_1[0x10] != 0) {
      FUN_00dd48d0(param_1[0xd],0);
      param_1[0x10] = 0;
    }
    param_1[0xd] = 0;
    param_1[0xe] = 0;
  }
  FUN_00dd7270();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D12E90  UICollision::cUIHitDataManager::vf00  size=77  [class]
undefined4 * __thiscall UICollision::cUIHitDataManager::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if (param_1[0xd] != 0) {
    param_1[0xf] = 0;
    if (param_1[0x10] != 0) {
      FUN_00dd48d0(param_1[0xd],0);
      param_1[0x10] = 0;
    }
    param_1[0xd] = 0;
    param_1[0xe] = 0;
  }
  FUN_00dd7270();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D12EE0  FUN_00d12ee0  size=62  [between]
void __fastcall FUN_00d12ee0(int param_1)

{
  FUN_00cfdb20();
  if (*(int *)(param_1 + 0x34) != 0) {
    *(undefined4 *)(param_1 + 0x3c) = 0;
    if (*(int *)(param_1 + 0x40) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x34),0);
      *(undefined4 *)(param_1 + 0x40) = 0;
    }
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  FUN_00dd7270();
  *(undefined4 *)(param_1 + 0x44) = 0;
  return;
}

// 00D12F20  UICollision::cUIHitManager::cUIHitManager  size=347  [class]
bool UICollision::cUIHitManager::cUIHitManager(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (DAT_01dc0730 != (undefined4 *)0x0) {
    return true;
  }
  DAT_01dc0730 = (undefined4 *)FUN_00dd3500(4,param_1);
  if (DAT_01dc0730 != (undefined4 *)0x0) {
    *DAT_01dc0730 = vftable;
    DAT_01dc0734 = param_1;
    DAT_01dc0738 = (undefined4 *)FUN_00dd3500(0x50,param_1);
    if (DAT_01dc0738 == (undefined4 *)0x0) {
      DAT_01dc0738 = (undefined4 *)0x0;
    }
    else {
      *DAT_01dc0738 = cUIHitDataManager::vftable;
      DAT_01dc0738[10] = 0;
      DAT_01dc0738[0xc] = 0;
      DAT_01dc0738[0xd] = 0;
      DAT_01dc0738[0xe] = 0;
      DAT_01dc0738[0xf] = 0;
      DAT_01dc0738[0x10] = 0;
      DAT_01dc0738[2] = 0;
      DAT_01dc0738[0x11] = 0;
      DAT_01dc0738[0x12] = 0;
    }
    iVar1 = FUN_00dd3500(0xd8,DAT_01dc0734);
    if (iVar1 == 0) {
      DAT_01dc073c = (undefined4 *)0x0;
    }
    else {
      DAT_01dc073c = (undefined4 *)cUIHit::cUIHit();
    }
    if (DAT_01dc0738 != (undefined4 *)0x0) {
      if (DAT_01dc073c != (undefined4 *)0x0) {
        uVar2 = FUN_00cd00e0(DAT_01dc0734,0x10);
        uVar3 = FUN_00cea810(DAT_01dc0734,0x80,DAT_01dc0738);
        if ((uVar2 & 1 & uVar3) != 0) goto LAB_00d1306d;
      }
      if (DAT_01dc0738 != (undefined4 *)0x0) {
        FUN_00d12ee0();
        if (DAT_01dc0738 != (undefined4 *)0x0) {
          (**(code **)*DAT_01dc0738)(1);
        }
        DAT_01dc0738 = (undefined4 *)0x0;
      }
    }
    if (DAT_01dc073c != (undefined4 *)0x0) {
      FUN_00cea930();
      if (DAT_01dc073c != (undefined4 *)0x0) {
        (**(code **)*DAT_01dc073c)(1);
      }
      DAT_01dc073c = (undefined4 *)0x0;
    }
    if (DAT_01dc0730 != (undefined4 *)0x0) {
      (**(code **)*DAT_01dc0730)(1);
    }
  }
  DAT_01dc0730 = (undefined4 *)0x0;
LAB_00d1306d:
  return DAT_01dc0730 != (undefined4 *)0x0;
}

// 00D13080  FUN_00d13080  size=184  [callgraph]
void FUN_00d13080(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_01dc0738;
  if (DAT_01dc0730 != (undefined4 *)0x0) {
    DAT_01dc0734 = 0;
    if (DAT_01dc0738 != (undefined4 *)0x0) {
      FUN_00cfdb20();
      if (puVar1[0xd] != 0) {
        puVar1[0xf] = 0;
        if (puVar1[0x10] != 0) {
          FUN_00dd48d0(puVar1[0xd],0);
          puVar1[0x10] = 0;
        }
        puVar1[0xd] = 0;
        puVar1[0xe] = 0;
      }
      puVar1[2] = 0;
      FUN_00dd7270();
      puVar1[0x11] = 0;
      if (DAT_01dc0738 != (undefined4 *)0x0) {
        (**(code **)*DAT_01dc0738)(1);
      }
      DAT_01dc0738 = (undefined4 *)0x0;
    }
    if (DAT_01dc073c != (undefined4 *)0x0) {
      FUN_00cea930();
      if (DAT_01dc073c != (undefined4 *)0x0) {
        (**(code **)*DAT_01dc073c)(1);
      }
      DAT_01dc073c = (undefined4 *)0x0;
    }
    if (DAT_01dc0730 != (undefined4 *)0x0) {
      (**(code **)*DAT_01dc0730)(1);
      DAT_01dc0730 = (undefined4 *)0x0;
    }
  }
  return;
}

// 00D131B0  FUN_00d131b0  size=44  [callgraph]
undefined4 FUN_00d131b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (DAT_01dc0730 == 0) {
    return 0;
  }
  uVar1 = FUN_00d12c90(param_1,param_2,param_3,param_4);
  return uVar1;
}

// 00D131E0  FUN_00d131e0  size=44  [callgraph]
undefined4 FUN_00d131e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (DAT_01dc0730 == 0) {
    return 0;
  }
  uVar1 = FUN_00d128e0(param_1,param_2,param_3,param_4);
  return uVar1;
}


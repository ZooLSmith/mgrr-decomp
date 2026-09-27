// src/effect/EspControllerBullet.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009CF2E0..009F3CA0, 13 functions

#include "mgrr.h"
#include "EspControllerBullet.h"

// 009CF2E0  EspControllerBullet::EspControllerBullet_5  size=18  [class]
undefined4 * __fastcall EspControllerBullet::EspControllerBullet_5(undefined4 *param_1)

{
  EspControllerHitStrip::EspControllerHitStrip();
  *param_1 = vftable;
  return param_1;
}

// 009CF300  EspControllerBullet::EspControllerBullet_6  size=11  [class]
void __fastcall EspControllerBullet::EspControllerBullet_6(undefined4 *param_1)

{
  *param_1 = vftable;
  EspControllerHitStrip::EspControllerHitStrip_2();
  return;
}

// 009D6140  EspControllerBullet::vf00  size=36  [class]
undefined4 * __thiscall EspControllerBullet::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  EspControllerHitStrip::EspControllerHitStrip_2();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 009DE420  EspControllerBullet::EspControllerBullet  size=36  [class]
undefined4 * __thiscall EspControllerBullet::EspControllerBullet(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  EspControllerHitStrip::EspControllerHitStrip_2();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 009DE450  EspControllerBullet::EspControllerBullet_2  size=28  [class]
undefined4 * __fastcall EspControllerBullet::EspControllerBullet_2(undefined4 *param_1)

{
  EspControllerHitStrip::EspControllerHitStrip();
  *param_1 = vftable;
  param_1[0x38] = 0;
  return param_1;
}

// 009ED510  EspControllerBullet::EspControllerBullet_7  size=246  [class]
void EspControllerBullet::EspControllerBullet_7(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = DAT_01b7a998;
  if (DAT_01b7a998 != DAT_01b7a99c) {
    do {
      puVar2 = (undefined4 *)*piVar3;
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = vftable;
        EspControllerHitStrip::EspControllerHitStrip_2();
        FUN_00dd4920(puVar2);
        *piVar3 = 0;
      }
      piVar1 = piVar3 + 2;
      piVar3 = (int *)*piVar1;
    } while ((int *)*piVar1 != DAT_01b7a99c);
  }
  if (DAT_01b7a988 != (int *)0x0) {
    iVar4 = 0;
    if (0 < DAT_01b7a98c) {
      piVar3 = DAT_01b7a988 + 1;
      do {
        *piVar3 = (int)(piVar3 + -4);
        piVar3[1] = (int)(piVar3 + 2);
        iVar4 = iVar4 + 1;
        piVar3 = piVar3 + 3;
      } while (iVar4 < DAT_01b7a98c);
    }
    DAT_01b7a994 = DAT_01b7a988;
    DAT_01b7a988[1] = 0;
    DAT_01b7a988[DAT_01b7a98c * 3 + -1] = 0;
    DAT_01b7a99c[1] = 0;
    DAT_01b7a99c[2] = 0;
    DAT_01b7a998 = DAT_01b7a99c;
    DAT_01b7a990 = 0;
    if (DAT_01b7a988 != (int *)0x0) {
      FUN_00dd48d0(DAT_01b7a988,0);
      DAT_01b7a988 = (int *)0x0;
      DAT_01b7a98c = 0;
      DAT_01b7a990 = 0;
      DAT_01b7a994 = DAT_01b7a984;
      DAT_01b7a998 = DAT_01b7a984;
      DAT_01b7a99c = DAT_01b7a984;
    }
  }
  FUN_00dd7270();
  return;
}

// 009F1110  EspControllerBullet::EspControllerBullet_4  size=175  [class]
void EspControllerBullet::EspControllerBullet_4(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  piVar3 = DAT_01b7a99c;
  piVar2 = DAT_01b7a998;
  piVar4 = DAT_01b7a994;
  while (DAT_01b7a994 = piVar4, piVar4 = piVar2, piVar4 != piVar3) {
    EspBullet::Work::update();
    puVar1 = (undefined4 *)*piVar4;
    if (puVar1[0x48] == 3) {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = vftable;
        EspControllerHitStrip::EspControllerHitStrip_2();
        FUN_00dd4920(puVar1);
        *piVar4 = 0;
      }
      iVar5 = piVar4[1];
      piVar2 = (int *)piVar4[2];
      if (iVar5 != 0) {
        *(int **)(iVar5 + 8) = piVar2;
      }
      if (piVar2 != (int *)0x0) {
        piVar2[1] = iVar5;
      }
      if (DAT_01b7a998 == piVar4) {
        DAT_01b7a998 = piVar2;
      }
      DAT_01b7a990 = DAT_01b7a990 + -1;
      if (DAT_01b7a994 == (int *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = DAT_01b7a994[1];
      }
      piVar4[1] = iVar5;
      piVar4[2] = (int)DAT_01b7a994;
      if (iVar5 != 0) {
        *(int **)(iVar5 + 8) = piVar4;
      }
      if (DAT_01b7a994 != (int *)0x0) {
        DAT_01b7a994[1] = (int)piVar4;
      }
    }
    else {
      piVar2 = (int *)piVar4[2];
      piVar4 = DAT_01b7a994;
    }
  }
  return;
}

// 009F11C0  FUN_009f11c0  size=104  [callgraph]
undefined4 __thiscall FUN_009f11c0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_00f40c20(param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_00f40c30(param_2);
    if (iVar1 == 0) {
      return 0;
    }
    piVar2 = (int *)(param_1 + -0x9ebf8 + param_2 * 0x14);
  }
  else {
    piVar2 = (int *)(param_1 + 8 + param_2 * 0x14);
  }
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  *piVar2 = param_2;
  piVar2[1] = (int)&LAB_009e82d0;
  piVar2[2] = 0x4a0;
  piVar2[4] = param_3;
  piVar2[3] = 0;
  return 1;
}

// 009F1230  FUN_009f1230  size=104  [callgraph]
undefined4 __thiscall FUN_009f1230(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_00f40c20(param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_00f40c30(param_2);
    if (iVar1 == 0) {
      return 0;
    }
    piVar2 = (int *)(param_1 + -0x9ebf8 + param_2 * 0x14);
  }
  else {
    piVar2 = (int *)(param_1 + 8 + param_2 * 0x14);
  }
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  *piVar2 = param_2;
  piVar2[1] = (int)&LAB_009e8330;
  piVar2[2] = 0x550;
  piVar2[4] = param_3;
  piVar2[3] = 0;
  return 1;
}

// 009F12A0  FUN_009f12a0  size=104  [callgraph]
undefined4 __thiscall FUN_009f12a0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_00f40c20(param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_00f40c30(param_2);
    if (iVar1 == 0) {
      return 0;
    }
    piVar2 = (int *)(param_1 + -0x9ebf8 + param_2 * 0x14);
  }
  else {
    piVar2 = (int *)(param_1 + 8 + param_2 * 0x14);
  }
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  *piVar2 = param_2;
  piVar2[1] = (int)&LAB_009e8390;
  piVar2[2] = 0x4c0;
  piVar2[4] = param_3;
  piVar2[3] = 0;
  return 1;
}

// 009F1410  FUN_009f1410  size=47  [callgraph]
void FUN_009f1410(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_00dd29b0(0x7c,0x20,0,0);
  if (_Dst == (void *)0x0) {
    return;
  }
  _memset(_Dst,0,0x7c);
  EspModelShaderShellPolygon::EspModelShaderShellPolygon();
  return;
}

// 009F17E0  FUN_009f17e0  size=120  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009f17e0(void)

{
  EspControllerBullet::EspControllerBullet_7();
  FUN_00dd7270();
  _DAT_01b7a908 = 0;
  _DAT_01b7a90c = 0;
  _DAT_01b7a910 = 0;
  FUN_009f0ab0();
  FUN_00d81ad0();
  DAT_01b78874 = 0;
  FUN_00dd7270();
  FUN_00ec6910();
  FUN_00f42590();
  FUN_00ec9cb0();
  cEffectData::requestCounterDown(0);
  FUN_00f4e6f0();
  DAT_01b78864 = 0xffffffff;
  DAT_01b78860 = 0;
  DAT_01b7886c = 0;
  return;
}

// 009F3CA0  EspControllerBullet::EspControllerBullet_3  size=255  [class]
undefined4 * EspControllerBullet::EspControllerBullet_3(void)

{
  undefined4 *puVar1;
  undefined4 *local_8;
  undefined1 local_4 [4];
  
  if (DAT_01b7b238 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01b7b220);
  }
  if (DAT_01b7a98c <= DAT_01b7a990) {
    FUN_00dd5650(&DAT_0165ba40);
    if (DAT_01b7b238 != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01b7b220);
    }
    return (undefined4 *)0x0;
  }
  puVar1 = (undefined4 *)FUN_00dd3500(0x130,&DAT_01b7bdf8);
  if (puVar1 != (undefined4 *)0x0) {
    EspControllerHitStrip::EspControllerHitStrip();
    *puVar1 = vftable;
    puVar1[0x38] = 0;
    puVar1[0x48] = 0;
    puVar1[0x34] = 0;
    puVar1[0x35] = 0;
    puVar1[0x36] = 0;
    puVar1[0x37] = 0;
    local_8 = puVar1;
    cFixedList::insert_5(local_4,&DAT_01b7a99c,&local_8);
    if (DAT_01b7b238 != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01b7b220);
    }
    return puVar1;
  }
  FUN_00dd5650(&DAT_0165b9f0);
  if (DAT_01b7b238 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01b7b220);
  }
  return (undefined4 *)0x0;
}


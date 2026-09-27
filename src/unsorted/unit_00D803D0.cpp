// src/unsorted/unit_00D803D0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D803D0..00D80570, 4 functions

#include "mgrr.h"

// 00D803D0  FUN_00d803d0  size=61  [run]
void FUN_00d803d0(void)

{
  FUN_00d7fac0();
  if (DAT_01dc5354 != 0) {
    DAT_01dc535c = 0;
    if (DAT_01dc5360 != 0) {
      FUN_00dd48d0(DAT_01dc5354,0);
      DAT_01dc5360 = 0;
    }
    DAT_01dc5354 = 0;
    DAT_01dc5358 = 0;
  }
  return;
}

// 00D80410  FUN_00d80410  size=173  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00d80410(void)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = DAT_01dc5354;
  do {
    if (piVar2 == DAT_01dc5354 + DAT_01dc535c) {
LAB_00d80444:
      FUN_00dd5650(&DAT_016c1850,DAT_01dc5348);
      return 0;
    }
    iVar1 = *piVar2;
    if (*(int *)(iVar1 + 0x4c) == DAT_01dc5348) {
      if (iVar1 != 0) {
        cEventCutData::cEventCutData_2(iVar1);
        _DAT_01dc5340 = 0;
        if (*(int *)(iVar1 + 0x3c) < 1) {
          FUN_00dd5650(&DAT_016c17f8);
          return 0;
        }
        DAT_01dc534c = **(int **)(iVar1 + 0x34);
        DAT_01dc5344 = 2;
        FUN_00d7edb0();
        if (DAT_01dc534c != 0) {
          DAT_01dc533c = DAT_01dc533c | 0x10000000;
        }
        DAT_01dc533c = DAT_01dc533c | 0x88000000;
        return 1;
      }
      goto LAB_00d80444;
    }
    piVar2 = piVar2 + 1;
  } while( true );
}

// 00D804C0  FUN_00d804c0  size=77  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d804c0(void)

{
  undefined4 uVar1;
  
  if (((0 < DAT_018bbb0c) && (DAT_01dc534c != 0)) &&
     ((float)*(int *)(DAT_01dc534c + 0x34) < _DAT_01dc5340 !=
      ((float)*(int *)(DAT_01dc534c + 0x34) == _DAT_01dc5340))) {
    FUN_00d800e0();
    uVar1 = FUN_00fdbc60();
    DAT_01dc534c = FUN_00d7fe20(uVar1);
    DAT_01dc533c = DAT_01dc533c | 0x10000000;
  }
  return;
}

// 00D80570  FUN_00d80570  size=413  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d80570(void)

{
  int *piVar1;
  int iVar2;
  
  switch(DAT_01dc5344) {
  case 0:
    goto switchD_00d80580_caseD_0;
  case 1:
    DAT_01dc5344 = 4;
switchD_00d80580_caseD_4:
    iVar2 = FUN_00d801c0();
    if ((iVar2 == 0) && (DAT_01dc5330 < 3)) {
      FUN_00d80160();
      FUN_00d7edb0();
      DAT_01dc5330 = DAT_01dc5330 + 1;
      FUN_00dd1a30();
      return;
    }
    iVar2 = FUN_00d80410();
    if (iVar2 != 0) {
switchD_00d80580_caseD_2:
      if (DAT_01dc534c != 0) {
        FUN_00d7f7a0();
        if ((0 < DAT_018bbb0c) &&
           (_DAT_01dc5340 < (float)_DAT_018bbb18 != (_DAT_01dc5340 == (float)_DAT_018bbb18))) {
          _DAT_01dc5340 = _DAT_01dc5340 + 1.0;
          FUN_00d804c0();
          return;
        }
        DAT_01dc5344 = 3;
        FUN_00d804c0();
        return;
      }
    }
    DAT_01dc5344 = 3;
switchD_00d80580_caseD_0:
    return;
  default:
    goto switchD_00d80580_caseD_2;
  case 3:
    piVar1 = DAT_01dc5354;
    do {
      if (piVar1 == DAT_01dc5354 + DAT_01dc535c) {
LAB_00d8000e:
        if (_DAT_01dc5340 < (float)_DAT_018bbb18) {
          FUN_00da8810((float)_DAT_018bbb18 - _DAT_01dc5340);
        }
        cEventCutWork::vf08();
        DAT_01dc533c = DAT_01dc533c | 0x64000000;
        _DAT_01dc5340 = 0.0;
        _DAT_018bbb40 = 0;
        DAT_01dc534c = 0;
        _DAT_018bbb44 = 0;
        DAT_01dc5344 = 0;
        _DAT_018bbb48 = 0;
        _DAT_018bbb60 = 0;
        _DAT_018bbb4c = 0;
        _DAT_018bbb64 = 0;
        _DAT_018bbb50 = 0;
        _DAT_018bbb70 = 0xf0000000;
        _DAT_018bbb54 = 0;
        _DAT_018bbb58 = 0;
        _DAT_018bbb5c = 0;
        _DAT_018bbb68 = 0;
        _DAT_018bbb6c = 0x3f5f66f3;
        return;
      }
      iVar2 = *piVar1;
      if (*(int *)(iVar2 + 0x4c) == DAT_01dc5348) {
        if (iVar2 != 0) {
          *(undefined4 *)(iVar2 + 0x54) = 1;
        }
        goto LAB_00d8000e;
      }
      piVar1 = piVar1 + 1;
    } while( true );
  case 4:
    goto switchD_00d80580_caseD_4;
  }
}


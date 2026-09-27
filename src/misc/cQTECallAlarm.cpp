// src/misc/cQTECallAlarm.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CBD4B0..00CD5CD0, 4 functions

#include "mgrr.h"
#include "cQTECallAlarm.h"

// 00CBD4B0  cQTECallAlarm::cQTECallAlarm  size=326  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall cQTECallAlarm::cQTECallAlarm(undefined4 *param_1)

{
  *param_1 = vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[0xc] = 0;
  DAT_01dc1284 = 0;
  DAT_01dc12ac = 0;
  DAT_01dbf964 = 0;
  DAT_01dc12d4 = 0;
  param_1[3] = 0;
  param_1[0xd] = 0;
  DAT_01dc1288 = 0;
  DAT_01dc12b0 = 0;
  DAT_01dbf968 = 0;
  DAT_01dc12d8 = 0;
  param_1[4] = 0;
  param_1[0xe] = 0;
  DAT_01dc128c = 0;
  _DAT_01dc12b4 = 0;
  _DAT_01dbf96c = 0;
  _DAT_01dc12dc = 0;
  param_1[5] = 0;
  param_1[0xf] = 0;
  DAT_01dc1290 = 0;
  _DAT_01dc12b8 = 0;
  _DAT_01dbf970 = 0;
  _DAT_01dc12e0 = 0;
  param_1[6] = 0;
  param_1[0x10] = 0;
  DAT_01dc1294 = 0;
  _DAT_01dc12bc = 0;
  _DAT_01dbf974 = 0;
  _DAT_01dc12e4 = 0;
  param_1[7] = 0;
  param_1[0x11] = 0;
  DAT_01dc1298 = 0;
  _DAT_01dc12c0 = 0;
  _DAT_01dbf978 = 0;
  _DAT_01dc12e8 = 0;
  param_1[8] = 0;
  param_1[0x12] = 0;
  DAT_01dc129c = 0;
  _DAT_01dc12c4 = 0;
  _DAT_01dbf97c = 0;
  _DAT_01dc12ec = 0;
  param_1[9] = 0;
  param_1[0x13] = 0;
  DAT_01dc12a0 = 0;
  _DAT_01dc12c8 = 0;
  _DAT_01dbf980 = 0;
  _DAT_01dc12f0 = 0;
  param_1[10] = 0;
  param_1[0x14] = 0;
  DAT_01dc12a4 = 0;
  _DAT_01dc12cc = 0;
  _DAT_01dbf984 = 0;
  _DAT_01dc12f4 = 0;
  param_1[0xb] = 0;
  param_1[0x15] = 0;
  DAT_01dc12a8 = 0;
  _DAT_01dc12d0 = 0;
  _DAT_01dbf988 = 0;
  _DAT_01dc12f8 = 0;
  DAT_01dc12fc = 0;
  DAT_01dc1300 = 0;
  return;
}

// 00CBD600  cQTECallAlarm::~cQTECallAlarm  size=69  [class]
void __fastcall cQTECallAlarm::~cQTECallAlarm(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = vftable;
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
    param_1[1] = 0;
  }
  piVar1 = param_1 + 2;
  iVar2 = 10;
  do {
    if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar1)(1);
      *piVar1 = 0;
    }
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

// 00CD5CB0  cQTECallAlarm::vf00  size=30  [class]
undefined4 __thiscall cQTECallAlarm::vf00(undefined4 param_1,byte param_2)

{
  ~cQTECallAlarm();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00CD5CD0  FUN_00cd5cd0  size=29  [callgraph]
undefined4 FUN_00cd5cd0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00dd3500(0x58,&DAT_01b7be50);
  if (iVar1 != 0) {
    uVar2 = cQTECallAlarm::cQTECallAlarm();
    return uVar2;
  }
  return 0;
}


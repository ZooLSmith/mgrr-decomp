// src/misc/cGameAllResult.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D0AA70..00D37FA0, 4 functions

#include "mgrr.h"
#include "cGameAllResult.h"

// 00D0AA70  FUN_00d0aa70  size=756  [callgraph]
void __thiscall FUN_00d0aa70(int param_1,int param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  char *local_30 [7];
  char *local_14;
  char *local_10;
  char *local_c;
  char *local_8;
  char *local_4;
  
  local_30[6] = "RESULT_SEL_21";
  local_14 = "RESULT_SEL_16";
  local_10 = "RESULT_SEL_17";
  local_c = "RESULT_SEL_18";
  local_8 = "RESULT_SEL_19";
  local_4 = "RESULT_SEL_20";
  local_30[0] = (char *)0x4;
  local_30[1] = (char *)0x7;
  local_30[2] = (char *)0x6;
  local_30[3] = (char *)0x5;
  local_30[4] = (char *)0x4;
  local_30[5] = (char *)0x4;
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_00cded00(*(undefined4 *)(param_1 + 0x38 + param_2 * 4),local_30[param_3]);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_00cded00(*(undefined4 *)(param_1 + 0x74 + param_2 * 4),local_30[param_3]);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_00cded00(*(undefined4 *)(param_1 + 0xb0 + param_2 * 4),local_30[param_3]);
  }
  uVar1 = *(uint *)(param_1 + 0x4c + param_2 * 4);
  iVar4 = *(int *)(param_1 + 0x18);
  pcVar2 = local_30[param_3 + 6];
  if (((iVar4 != 0) && (uVar1 < *(uint *)(iVar4 + 0x80))) &&
     (piVar3 = *(int **)(uVar1 * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)), piVar3 != (int *)0x0)) {
    iVar4 = (**(code **)(*piVar3 + 8))();
    if (iVar4 == 3) {
      uVar5 = FUN_00e03ea0(pcVar2);
      piVar3[0x2a] = -1;
      piVar3[0x2b] = 1;
      if ((piVar3[5] != 0) && (*(int *)(piVar3[5] + 4) != 0)) {
        iVar4 = FUN_00cb1cd0(uVar5);
        if (-1 < iVar4) {
          piVar3[0x2a] = iVar4;
          piVar3[0x2b] = 1;
          piVar3[0x2e] = 0;
        }
      }
    }
  }
  iVar4 = *(int *)(param_1 + 0x18);
  uVar1 = *(uint *)(param_1 + 0x60 + param_2 * 4);
  if (((iVar4 != 0) && (uVar1 < *(uint *)(iVar4 + 0x80))) &&
     (piVar3 = *(int **)(uVar1 * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)), piVar3 != (int *)0x0)) {
    iVar4 = (**(code **)(*piVar3 + 8))();
    if (iVar4 == 3) {
      uVar5 = FUN_00e03ea0(pcVar2);
      piVar3[0x2a] = -1;
      piVar3[0x2b] = 1;
      if ((piVar3[5] != 0) && (*(int *)(piVar3[5] + 4) != 0)) {
        iVar4 = FUN_00cb1cd0(uVar5);
        if (-1 < iVar4) {
          piVar3[0x2a] = iVar4;
          piVar3[0x2b] = 1;
          piVar3[0x2e] = 0;
        }
      }
    }
  }
  uVar1 = *(uint *)(param_1 + 0x88 + param_2 * 4);
  iVar4 = *(int *)(param_1 + 0x18);
  if (((iVar4 != 0) && (uVar1 < *(uint *)(iVar4 + 0x80))) &&
     (piVar3 = *(int **)(uVar1 * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)), piVar3 != (int *)0x0)) {
    iVar4 = (**(code **)(*piVar3 + 8))();
    if (iVar4 == 3) {
      uVar5 = FUN_00e03ea0(pcVar2);
      piVar3[0x2a] = -1;
      piVar3[0x2b] = 1;
      if ((piVar3[5] != 0) && (*(int *)(piVar3[5] + 4) != 0)) {
        iVar4 = FUN_00cb1cd0(uVar5);
        if (-1 < iVar4) {
          piVar3[0x2a] = iVar4;
          piVar3[0x2b] = 1;
          piVar3[0x2e] = 0;
        }
      }
    }
  }
  iVar4 = *(int *)(param_1 + 0x18);
  uVar1 = *(uint *)(param_1 + 0x9c + param_2 * 4);
  if (((iVar4 != 0) && (uVar1 < *(uint *)(iVar4 + 0x80))) &&
     (piVar3 = *(int **)(uVar1 * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)), piVar3 != (int *)0x0)) {
    iVar4 = (**(code **)(*piVar3 + 8))();
    if (iVar4 == 3) {
      uVar5 = FUN_00e03ea0(pcVar2);
      piVar3[0x2a] = -1;
      piVar3[0x2b] = 1;
      if ((piVar3[5] != 0) && (*(int *)(piVar3[5] + 4) != 0)) {
        iVar4 = FUN_00cb1cd0(uVar5);
        if (-1 < iVar4) {
          piVar3[0x2a] = iVar4;
          piVar3[0x2b] = 1;
          piVar3[0x2e] = 0;
        }
      }
    }
  }
  uVar1 = *(uint *)(param_1 + 0xc4 + param_2 * 4);
  iVar4 = *(int *)(param_1 + 0x18);
  if (((iVar4 != 0) && (uVar1 < *(uint *)(iVar4 + 0x80))) &&
     (iVar4 = uVar1 * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
    *(undefined4 *)(iVar4 + 0x3b0) = param_4;
  }
  return;
}

// 00D0AD70  cGameAllResult::vf00  size=30  [class]
undefined4 __thiscall cGameAllResult::vf00(undefined4 param_1,byte param_2)

{
  cCustomObjCtrlManager::cCustomObjCtrlManager_30();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D0AD90  cGameAllResult::vf08  size=1602  [class]
void __fastcall cGameAllResult::vf08(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  char cStack_21;
  int local_1c;
  int aiStack_18 [6];
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar1 + 0xc4);
  }
  *(uint *)(param_1 + 0xa08) = uVar4;
  if (iVar1 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar1 + 0xc6);
  }
  *(uint *)(param_1 + 0xa0c) = uVar4;
  if (iVar1 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar1 + 0x9c);
  }
  *(uint *)(param_1 + 0xa10) = uVar4;
  if (iVar1 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar1 + 0x9e);
  }
  *(uint *)(param_1 + 0xa14) = uVar4;
  if (iVar1 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar1 + 0xa0);
  }
  *(uint *)(param_1 + 0xa18) = uVar4;
  if (iVar1 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar1 + 0xa2);
  }
  *(uint *)(param_1 + 0xa1c) = uVar4;
  if (iVar1 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar1 + 0xa4);
  }
  *(uint *)(param_1 + 0xa20) = uVar4;
  if (iVar1 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar1 + 0xa6);
  }
  *(uint *)(param_1 + 0xa24) = uVar4;
  if (iVar1 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar1 + 0xa8);
  }
  *(uint *)(param_1 + 0xa28) = uVar4;
  if (iVar1 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar1 + 0x14c);
  }
  *(uint *)(param_1 + 0xa2c) = uVar4;
  local_1c = 0;
  do {
    iVar1 = *(int *)(param_1 + 0x18);
    uVar4 = *(uint *)(param_1 + 0xa10 + local_1c * 4);
    if ((((iVar1 == 0) || (*(uint *)(iVar1 + 0x80) <= uVar4)) ||
        (piVar2 = *(int **)(uVar4 * 0x400 + 0x3f0 + *(int *)(iVar1 + 0x7c)), piVar2 == (int *)0x0))
       || (iVar1 = (**(code **)(*piVar2 + 8))(), iVar1 != 0)) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = piVar2 + 4;
    }
    iVar1 = local_1c * 0x1a0;
    *(int **)(iVar1 + 0x34 + param_1) = piVar2;
    FUN_00cf4990();
    *(undefined4 *)(iVar1 + param_1 + 0x1b8) = 1;
    FUN_00d0a0f0(local_1c);
    if (*(char *)(param_1 + 0xa32) != '\0') {
      *(undefined1 *)(iVar1 + 0x1b3 + param_1) = 1;
    }
    iVar5 = 0;
    iVar1 = 0;
    cStack_21 = '\0';
    piVar2 = &DAT_01b6f434 + local_1c * 0x30;
    do {
      if (cStack_21 < '\b') {
        FUN_00d0a210(iVar1,*piVar2,0);
        aiStack_18[0] = 0;
        aiStack_18[1] = 5;
        aiStack_18[2] = 4;
        aiStack_18[3] = 3;
        aiStack_18[4] = 2;
        aiStack_18[5] = 1;
        iVar5 = iVar5 + aiStack_18[*piVar2];
      }
      else {
        aiStack_18[0] = 0;
        aiStack_18[1] = 5;
        aiStack_18[2] = 4;
        aiStack_18[3] = 3;
        aiStack_18[4] = 2;
        aiStack_18[5] = 1;
        FUN_00d0a210(iVar1,aiStack_18[(int)(iVar5 + (iVar5 >> 0x1f & 7U)) >> 3],0);
      }
      cStack_21 = cStack_21 + '\x01';
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 0xf0;
    } while (cStack_21 < '\t');
    if (local_1c == 3) {
      iVar1 = FUN_009c7d30();
      if (iVar1 == 0) {
        uVar4 = *(uint *)(param_1 + 0xa1c);
LAB_00d0b00d:
        iVar1 = *(int *)(param_1 + 0x18);
        if (((iVar1 != 0) && (uVar4 < *(uint *)(iVar1 + 0x80))) &&
           (iVar1 = uVar4 * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
          *(undefined4 *)(iVar1 + 0x3b0) = 0;
        }
      }
    }
    else if ((local_1c == 4) && (iVar1 = FUN_009c7da0(), iVar1 == 0)) {
      uVar4 = *(uint *)(param_1 + 0xa20);
      goto LAB_00d0b00d;
    }
    local_1c = local_1c + 1;
    if (4 < local_1c) {
      iVar1 = *(int *)(param_1 + 0x18);
      if ((((iVar1 == 0) || (*(uint *)(iVar1 + 0x80) <= *(uint *)(param_1 + 0xa24))) ||
          (piVar2 = *(int **)(*(int *)(iVar1 + 0x7c) + 0x3f0 + *(uint *)(param_1 + 0xa24) * 0x400),
          piVar2 == (int *)0x0)) || (iVar1 = (**(code **)(*piVar2 + 8))(), iVar1 != 0)) {
        piVar2 = (int *)0x0;
      }
      else {
        piVar2 = piVar2 + 4;
      }
      *(int **)(param_1 + 0x854) = piVar2;
      FUN_00cc4e00();
      iVar1 = *(int *)(param_1 + 0x854);
      if (((iVar1 != 0) && (*(uint *)(param_1 + 0x858) < *(uint *)(iVar1 + 0x80))) &&
         (iVar1 = *(uint *)(param_1 + 0x858) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
        *(undefined4 *)(iVar1 + 0x3b0) = 1;
      }
      iVar1 = *(int *)(param_1 + 0x854);
      if (((iVar1 != 0) && (*(uint *)(param_1 + 0x85c) < *(uint *)(iVar1 + 0x80))) &&
         (iVar1 = *(uint *)(param_1 + 0x85c) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
        *(undefined4 *)(iVar1 + 0x3b0) = 0;
      }
      iVar1 = *(int *)(param_1 + 0x18);
      if ((((iVar1 == 0) || (*(uint *)(iVar1 + 0x80) <= *(uint *)(param_1 + 0xa28))) ||
          (piVar2 = *(int **)(*(uint *)(param_1 + 0xa28) * 0x400 + 0x3f0 + *(int *)(iVar1 + 0x7c)),
          piVar2 == (int *)0x0)) || (iVar1 = (**(code **)(*piVar2 + 8))(), iVar1 != 0)) {
        piVar2 = (int *)0x0;
      }
      else {
        piVar2 = piVar2 + 4;
      }
      *(int **)(param_1 + 0x938) = piVar2;
      FUN_00cc4e00();
      iVar1 = *(int *)(param_1 + 0x938);
      if (((iVar1 != 0) && (*(uint *)(param_1 + 0x93c) < *(uint *)(iVar1 + 0x80))) &&
         (iVar1 = *(uint *)(param_1 + 0x93c) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
        *(undefined4 *)(iVar1 + 0x3b0) = 0;
      }
      iVar1 = *(int *)(param_1 + 0x938);
      if (((iVar1 != 0) && (*(uint *)(param_1 + 0x940) < *(uint *)(iVar1 + 0x80))) &&
         (iVar1 = *(uint *)(param_1 + 0x940) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
        *(undefined4 *)(iVar1 + 0x3b0) = 1;
      }
      if (*(char *)(param_1 + 0xa32) != '\0') {
        *(undefined4 *)(param_1 + 0x91c) = 1;
        *(undefined4 *)(param_1 + 0xa00) = 1;
      }
      iVar1 = 0;
      do {
        FUN_00d0aa70(iVar1,(&DAT_01b71234)[iVar1 * 0x30],0);
        FUN_00d0aa70(iVar1,(&DAT_01b715f4)[iVar1 * 0x30],0);
        if (iVar1 == 3) {
          iVar5 = FUN_009c7d30();
          if (iVar5 == 0) {
            iVar5 = *(int *)(param_1 + 0x854);
            if (((iVar5 != 0) && (*(uint *)(param_1 + 0x880) < *(uint *)(iVar5 + 0x80))) &&
               (iVar5 = *(uint *)(param_1 + 0x880) * 0x400 + *(int *)(iVar5 + 0x7c), iVar5 != 0)) {
              *(undefined4 *)(iVar5 + 0x3b0) = 0;
            }
            iVar5 = *(int *)(param_1 + 0x938);
            if (((iVar5 != 0) && (*(uint *)(param_1 + 0x964) < *(uint *)(iVar5 + 0x80))) &&
               (iVar5 = *(uint *)(param_1 + 0x964) * 0x400 + *(int *)(iVar5 + 0x7c), iVar5 != 0)) {
              *(undefined4 *)(iVar5 + 0x3b0) = 0;
            }
          }
        }
        else if ((iVar1 == 4) && (iVar5 = FUN_009c7da0(), iVar5 == 0)) {
          iVar5 = *(int *)(param_1 + 0x854);
          if ((iVar5 != 0) &&
             ((*(uint *)(param_1 + 0x884) < *(uint *)(iVar5 + 0x80) &&
              (iVar5 = *(uint *)(param_1 + 0x884) * 0x400 + *(int *)(iVar5 + 0x7c), iVar5 != 0)))) {
            *(undefined4 *)(iVar5 + 0x3b0) = 0;
          }
          iVar5 = *(int *)(param_1 + 0x938);
          if (((iVar5 != 0) && (*(uint *)(param_1 + 0x968) < *(uint *)(iVar5 + 0x80))) &&
             (iVar5 = *(uint *)(param_1 + 0x968) * 0x400 + *(int *)(iVar5 + 0x7c), iVar5 != 0)) {
            *(undefined4 *)(iVar5 + 0x3b0) = 0;
          }
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < 5);
      if (*(char *)(param_1 + 0xa32) == '\0') {
        if (*(int *)(param_1 + 0x14) != 0) {
          *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 1;
        }
        FUN_00e5e050("core_se_sys_allgameresult",0);
      }
      iVar1 = *(int *)(param_1 + 0x18);
      if (((iVar1 != 0) && (*(uint *)(param_1 + 0xa24) < *(uint *)(iVar1 + 0x80))) &&
         (iVar1 = *(uint *)(param_1 + 0xa24) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
        *(undefined4 *)(iVar1 + 0x3b0) = 0;
      }
      iVar1 = *(int *)(param_1 + 0x18);
      if (((iVar1 != 0) && (*(uint *)(param_1 + 0xa28) < *(uint *)(iVar1 + 0x80))) &&
         (iVar1 = *(uint *)(param_1 + 0xa28) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
        *(undefined4 *)(iVar1 + 0x3b0) = 0;
      }
      iVar1 = FUN_009c73f0(6);
      iVar5 = FUN_009c73f0(7);
      if ((iVar5 != 0) || (iVar1 != 0)) {
        iVar1 = *(int *)(param_1 + 0x18);
        if ((iVar1 != 0) &&
           ((*(uint *)(param_1 + 0xa24) < *(uint *)(iVar1 + 0x80) &&
            (iVar1 = *(uint *)(param_1 + 0xa24) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)))) {
          *(undefined4 *)(iVar1 + 0x3b0) = 1;
        }
        if (iVar5 != 0) {
          iVar1 = *(int *)(param_1 + 0x18);
          if (((iVar1 != 0) && (*(uint *)(param_1 + 0xa28) < *(uint *)(iVar1 + 0x80))) &&
             (iVar1 = *(uint *)(param_1 + 0xa28) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
            *(undefined4 *)(iVar1 + 0x3b0) = 1;
          }
        }
      }
      if (DAT_018b9174 == 0xf07) {
        iVar1 = *(int *)(param_1 + 0x18);
        if (((iVar1 != 0) && (*(uint *)(param_1 + 0xa24) < *(uint *)(iVar1 + 0x80))) &&
           (iVar1 = *(uint *)(param_1 + 0xa24) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
          *(undefined4 *)(iVar1 + 0x3b0) = 0;
        }
        iVar1 = *(int *)(param_1 + 0x18);
        if (((iVar1 != 0) && (*(uint *)(param_1 + 0xa28) < *(uint *)(iVar1 + 0x80))) &&
           (iVar1 = *(uint *)(param_1 + 0xa28) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
          *(undefined4 *)(iVar1 + 0x3b0) = 0;
        }
      }
      uVar3 = FUN_009a29d0();
      *(undefined4 *)(param_1 + 0xa04) = uVar3;
      return;
    }
  } while( true );
}

// 00D37FA0  cGameAllResult::create  size=436  [class]
void __fastcall cGameAllResult::create(int param_1)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_00c20a50();
  if (iVar1 != 0) {
    return;
  }
  if (*(char *)(param_1 + 0xa30) == '\0') {
    if (*(char *)(param_1 + 0xa32) == '\0') {
      FUN_00ccdf90(*(undefined4 *)(param_1 + 0xa08),1,3);
      FUN_00ccdf90(*(undefined4 *)(param_1 + 0xa0c),1,3);
    }
    *(undefined1 *)(param_1 + 0x1b1) = 1;
    *(undefined1 *)(param_1 + 0x351) = 1;
    *(undefined1 *)(param_1 + 0x4f1) = 1;
    *(undefined1 *)(param_1 + 0x691) = 1;
    *(undefined1 *)(param_1 + 0x831) = 1;
    *(char *)(param_1 + 0xa30) = *(char *)(param_1 + 0xa30) + '\x01';
    *(undefined1 *)(param_1 + 0x915) = 1;
    *(undefined1 *)(param_1 + 0x9f9) = 1;
    if (*(char *)(param_1 + 0xa32) == '\0') goto LAB_00d38110;
  }
  else if (*(char *)(param_1 + 0xa30) != '\x01') goto LAB_00d38110;
  uVar2 = 0;
  pcVar3 = (char *)(param_1 + 0x1b2);
  do {
    if (*pcVar3 == '\0') goto LAB_00d38110;
    uVar2 = uVar2 + 1;
    pcVar3 = pcVar3 + 0x1a0;
  } while (uVar2 < 5);
  if (*(char *)(param_1 + 0xa32) == '\0') {
    if ((*(char *)(param_1 + 0x916) == '\0') || (*(char *)(param_1 + 0x9fa) == '\0'))
    goto LAB_00d38110;
    if (*(int *)(param_1 + 0xa04) != 0) {
      iVar1 = *(int *)(param_1 + 0x18);
      if ((iVar1 == 0) || (*(uint *)(iVar1 + 0x80) <= *(uint *)(param_1 + 0xa2c))) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(uint *)(param_1 + 0xa2c) * 0x400 + 0x2a0 + *(int *)(iVar1 + 0x7c);
      }
      uVar5 = *(undefined4 *)(iVar1 + 0x94);
      uVar4 = *(undefined4 *)(iVar1 + 0x90);
      pcVar3 = "all_result";
      goto LAB_00d380ff;
    }
  }
  else if (*(int *)(param_1 + 0xa04) != 0) {
    uVar5 = 0x44240000;
    uVar4 = 0x43580000;
    pcVar3 = "select_chapter_result";
LAB_00d380ff:
    FUN_009a2df0(pcVar3,uVar4,uVar5,0x41700000,0);
  }
  *(char *)(param_1 + 0xa30) = *(char *)(param_1 + 0xa30) + '\x01';
  *(undefined1 *)(param_1 + 0xa31) = 1;
LAB_00d38110:
  iVar1 = 5;
  do {
    FUN_00d37800();
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  FUN_00cc5290();
  FUN_00cc5290();
  if (*(int *)(param_1 + 0xa04) == 0) {
    return;
  }
  FUN_009a2a10();
  return;
}


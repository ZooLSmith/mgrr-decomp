// src/unsorted/unit_00D09750.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D09750..00D0A210, 3 functions

#include "types.h"

// 00D09750  FUN_00d09750  size=2336  [run]
void __fastcall FUN_00d09750(int param_1)

{
  uint uVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  char cVar8;
  int iVar9;
  bool bVar10;
  char *pcVar11;
  char local_169;
  int local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined1 local_150 [16];
  char local_140 [32];
  undefined1 local_120 [32];
  undefined1 local_100 [32];
  undefined1 local_e0 [32];
  undefined1 local_c0 [32];
  undefined1 local_a0 [32];
  undefined1 local_80 [32];
  undefined1 local_60 [32];
  undefined1 local_40 [32];
  undefined1 local_20 [32];
  
  if (*(char *)(param_1 + 0x10e) != '\0') {
    iVar9 = 10;
    local_168 = 10;
    if (*(char *)(param_1 + 0x10d) == '\x01') {
      iVar9 = 9;
      local_168 = 9;
    }
    iVar5 = *(int *)(param_1 + 0x210);
    if ((iVar5 != 5) && (iVar5 != 2)) {
      iVar9 = 9;
      local_168 = 9;
    }
    switch(*(undefined1 *)(param_1 + 0x10c)) {
    case 0:
      local_169 = '\0';
      cVar8 = '\0';
      if (iVar9 != 0) {
        iVar5 = 0;
        do {
          if (*(char *)(param_1 + 0x110) != '\0') {
            *(undefined4 *)(param_1 + 0x114 + iVar5 * 4) = 0x10;
          }
          iVar4 = *(int *)(param_1 + 0x114 + iVar5 * 4);
          bVar10 = false;
          if (iVar4 == 0x10) {
            if (*(char *)(param_1 + 0x110) == '\0') {
              FUN_00ccdf90(*(undefined4 *)(param_1 + 0x6c + iVar5 * 4),1,3);
              FUN_00ccdf90(*(undefined4 *)(param_1 + 0x94 + iVar5 * 4),1,3);
            }
            if (*(int *)(param_1 + 0x218) != 0) {
              if ((cVar8 == '\x01') &&
                 ((*(int *)(param_1 + 0x210) == 3 || (*(int *)(param_1 + 0x210) == 0)))) {
                FUN_00cf9770(*(undefined4 *)(param_1 + 0x70),"RESULT_ETC_16",0,0xffffffff);
                uVar6 = *(undefined4 *)(param_1 + 0x98);
                pcVar11 = "RESULT_ETC_16";
              }
              else {
                if ((*(int *)(param_1 + 0x218) == 0) ||
                   ((cVar8 != '\x01' ||
                    ((*(int *)(param_1 + 0x210) != 4 && (*(int *)(param_1 + 0x210) != 1))))))
                goto LAB_00d098a1;
                FUN_00cf9770(*(undefined4 *)(param_1 + 0x70),"RESULT_ETC_27",0,0xffffffff);
                uVar6 = *(undefined4 *)(param_1 + 0x98);
                pcVar11 = "RESULT_ETC_27";
              }
              FUN_00cf9770(uVar6,pcVar11,0,0xffffffff);
            }
LAB_00d098a1:
            iVar4 = *(int *)(param_1 + 0x18);
            uVar1 = *(uint *)(param_1 + 0x6c + iVar5 * 4);
            if (((iVar4 != 0) && (uVar1 < *(uint *)(iVar4 + 0x80))) &&
               (iVar4 = uVar1 * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
              *(undefined4 *)(iVar4 + 0x3b0) = 1;
            }
            iVar4 = *(int *)(param_1 + 0x18);
            uVar1 = *(uint *)(param_1 + 0x94 + iVar5 * 4);
            if (((iVar4 != 0) && (uVar1 < *(uint *)(iVar4 + 0x80))) &&
               (iVar4 = uVar1 * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
              *(undefined4 *)(iVar4 + 0x3b0) = 1;
            }
            iVar4 = *(int *)(param_1 + 0x114 + iVar5 * 4);
            bVar10 = iVar4 == 0x10;
          }
          if (bVar10 || iVar4 < 0x10) {
            iVar4 = *(int *)(param_1 + 0x18);
            uVar1 = *(uint *)(param_1 + 0x44 + iVar5 * 4);
            if (((iVar4 != 0) && (uVar1 < *(uint *)(iVar4 + 0x80))) &&
               ((iVar4 = uVar1 * 0x400 + 0x2a0 + *(int *)(iVar4 + 0x7c), iVar4 != 0 &&
                ((fVar3 = *(float *)(param_1 + 0x13c + iVar5 * 4) + *(float *)(iVar4 + 0xd0),
                 *(float *)(iVar4 + 0xd0) = fVar3, 1.0 < fVar3 ||
                 (*(char *)(param_1 + 0x110) != '\0')))))) {
              local_169 = local_169 + '\x01';
              *(undefined4 *)(iVar4 + 0xd0) = 0x3f800000;
            }
          }
          piVar2 = (int *)(param_1 + 0x114 + iVar5 * 4);
          *piVar2 = *piVar2 + -1;
          cVar8 = cVar8 + '\x01';
          iVar5 = (int)cVar8;
        } while (iVar5 < iVar9);
      }
      if (iVar9 <= local_169) {
        cVar8 = '\0';
        if (iVar9 != 0) {
          iVar5 = 0;
          do {
            *(undefined4 *)(param_1 + 0x164 + iVar5 * 4) = 0;
            cVar8 = cVar8 + '\x01';
            *(undefined4 *)(param_1 + 0x18c + iVar5 * 4) = 0;
            *(undefined4 *)(param_1 + 0x114 + iVar5 * 4) = 0;
            iVar5 = (int)cVar8;
          } while (iVar5 < iVar9);
        }
        if (*(char *)(param_1 + 0x10d) == '\0') {
          *(char *)(param_1 + 0x10c) = *(char *)(param_1 + 0x10c) + '\x01';
          *(float *)(param_1 + 0x18c) = *(float *)(param_1 + 0x1b4) * 0.1;
          *(float *)(param_1 + 400) = (float)*(int *)(param_1 + 0x1b8) * 0.1;
          *(float *)(param_1 + 0x194) = (float)*(int *)(param_1 + 0x1bc) * 0.1;
          *(float *)(param_1 + 0x198) = (float)*(int *)(param_1 + 0x1c0) * 0.1;
          *(float *)(param_1 + 0x19c) = (float)*(int *)(param_1 + 0x1c8) * 0.1;
          *(float *)(param_1 + 0x1a0) = (float)*(int *)(param_1 + 0x1cc) * 0.1;
          *(float *)(param_1 + 0x1a4) = (float)*(int *)(param_1 + 0x1d0) * 0.1;
          *(float *)(param_1 + 0x1a8) = (float)*(int *)(param_1 + 0x1c4) * 0.1;
          *(float *)(param_1 + 0x1ac) = (float)*(int *)(param_1 + 0x1d4) * 0.1;
          *(float *)(param_1 + 0x1b0) = (float)*(int *)(param_1 + 0x1d8) * 0.1;
          return;
        }
        *(char *)(param_1 + 0x10c) = *(char *)(param_1 + 0x10c) + '\x01';
        *(float *)(param_1 + 0x18c) = (float)*(int *)(param_1 + 0x1dc) * 0.1;
        *(float *)(param_1 + 400) = (float)*(int *)(param_1 + 0x1e0) * 0.1;
        *(float *)(param_1 + 0x194) = (float)*(int *)(param_1 + 0x1e4) * 0.1;
        *(float *)(param_1 + 0x198) = (float)*(int *)(param_1 + 0x1e8) * 0.1;
        *(float *)(param_1 + 0x19c) = (float)*(int *)(param_1 + 0x1ec) * 0.1;
        *(float *)(param_1 + 0x1a0) = (float)*(int *)(param_1 + 0x1f0) * 0.1;
        *(float *)(param_1 + 0x1a4) = (float)*(int *)(param_1 + 500) * 0.1;
        *(float *)(param_1 + 0x1a8) = (float)*(int *)(param_1 + 0x1fc) * 0.1;
        *(float *)(param_1 + 0x1ac) = (float)*(int *)(param_1 + 0x1f8) * 0.1;
        return;
      }
      break;
    case 1:
      *(int *)(param_1 + 0x114) = *(int *)(param_1 + 0x114) + 1;
      cVar8 = '\0';
      if (iVar9 != 0) {
        iVar5 = 0;
        do {
          cVar8 = cVar8 + '\x01';
          *(float *)(param_1 + 0x164 + iVar5 * 4) =
               *(float *)(param_1 + 0x18c + iVar5 * 4) + *(float *)(param_1 + 0x164 + iVar5 * 4);
          iVar5 = (int)cVar8;
        } while (iVar5 < iVar9);
      }
      if (*(char *)(param_1 + 0x10d) == '\0') {
        bVar10 = 9 < *(int *)(param_1 + 0x114);
        if (bVar10) {
          *(undefined4 *)(param_1 + 0x164) = *(undefined4 *)(param_1 + 0x1b4);
          *(float *)(param_1 + 0x168) = (float)*(int *)(param_1 + 0x1b8);
          *(float *)(param_1 + 0x16c) = (float)*(int *)(param_1 + 0x1bc);
          *(float *)(param_1 + 0x170) = (float)*(int *)(param_1 + 0x1c0);
          *(float *)(param_1 + 0x174) = (float)*(int *)(param_1 + 0x1c8);
          *(float *)(param_1 + 0x178) = (float)*(int *)(param_1 + 0x1cc);
          *(float *)(param_1 + 0x17c) = (float)*(int *)(param_1 + 0x1d0);
          *(float *)(param_1 + 0x180) = (float)*(int *)(param_1 + 0x1c4);
          *(float *)(param_1 + 0x184) = (float)*(int *)(param_1 + 0x1d4);
          *(float *)(param_1 + 0x188) = (float)*(int *)(param_1 + 0x1d8);
        }
        local_15c = 0;
        local_154 = 0;
        local_160 = 0;
        local_158 = 0;
        FUN_00cc4630(*(undefined4 *)(param_1 + 0x164),&local_15c,&local_154,&local_160,&local_158);
        _sprintf_s(local_140,0x20,"%02d:%02d:%02d.%02d",local_15c,local_154,local_160,local_158);
        uVar6 = FUN_00fdbc60(local_120,0x20);
        FUN_00ca84a0(uVar6);
        uVar6 = FUN_00fdbc60(local_100,0x20);
        FUN_00ca84a0(uVar6);
        uVar6 = FUN_00fdbc60(local_e0,0x20);
        FUN_00ca84a0(uVar6);
        uVar6 = FUN_00fdbc60(local_c0,0x20);
        FUN_00ca84a0(uVar6);
        uVar6 = FUN_00fdbc60(local_a0,0x20);
        FUN_00ca84a0(uVar6);
        uVar6 = FUN_00fdbc60(local_80,0x20);
        FUN_00ca84a0(uVar6);
        uVar6 = FUN_00fdbc60(local_60,0x20);
        FUN_00ca84a0(uVar6);
        uVar6 = FUN_00fdbc60(local_40,0x20);
        FUN_00ca84a0(uVar6);
        puVar7 = local_20;
      }
      else {
        bVar10 = 9 < *(int *)(param_1 + 0x114);
        if (bVar10) {
          *(float *)(param_1 + 0x164) = (float)*(int *)(param_1 + 0x1dc);
          *(float *)(param_1 + 0x168) = (float)*(int *)(param_1 + 0x1e0);
          *(float *)(param_1 + 0x16c) = (float)*(int *)(param_1 + 0x1e4);
          *(float *)(param_1 + 0x170) = (float)*(int *)(param_1 + 0x1e8);
          *(float *)(param_1 + 0x174) = (float)*(int *)(param_1 + 0x1ec);
          *(float *)(param_1 + 0x178) = (float)*(int *)(param_1 + 0x1f0);
          *(float *)(param_1 + 0x17c) = (float)*(int *)(param_1 + 500);
          *(float *)(param_1 + 0x180) = (float)*(int *)(param_1 + 0x1fc);
          *(float *)(param_1 + 0x184) = (float)*(int *)(param_1 + 0x1f8);
        }
        uVar6 = FUN_00fdbc60(local_140,0x20);
        FUN_00ca84a0(uVar6);
        uVar6 = FUN_00fdbc60(local_120,0x20);
        FUN_00ca84a0(uVar6);
        uVar6 = FUN_00fdbc60(local_100,0x20);
        FUN_00ca84a0(uVar6);
        uVar6 = FUN_00fdbc60(local_e0,0x20);
        FUN_00ca84a0(uVar6);
        uVar6 = FUN_00fdbc60(local_c0,0x20);
        FUN_00ca84a0(uVar6);
        uVar6 = FUN_00fdbc60(local_a0,0x20);
        FUN_00ca84a0(uVar6);
        uVar6 = FUN_00fdbc60(local_80,0x20);
        FUN_00ca84a0(uVar6);
        uVar6 = FUN_00fdbc60(local_60,0x20);
        FUN_00ca84a0(uVar6);
        puVar7 = local_40;
      }
      uVar6 = FUN_00fdbc60(puVar7,0x20);
      FUN_00ca84a0(uVar6);
      cVar8 = '\0';
      if (iVar9 != 0) {
        iVar5 = 0;
        do {
          iVar4 = *(int *)(param_1 + 0x18);
          uVar1 = *(uint *)(param_1 + 0xbc + iVar5 * 4);
          if ((((iVar4 != 0) && (uVar1 < *(uint *)(iVar4 + 0x80))) &&
              (piVar2 = *(int **)(uVar1 * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)), iVar9 = local_168
              , piVar2 != (int *)0x0)) && (iVar4 = (**(code **)(*piVar2 + 8))(), iVar4 == 4)) {
            FUN_00cb3cc0(piVar2,local_140 + iVar5 * 0x20);
          }
          iVar4 = *(int *)(param_1 + 0x18);
          uVar1 = *(uint *)(param_1 + 0xe4 + iVar5 * 4);
          if (((iVar4 != 0) && (uVar1 < *(uint *)(iVar4 + 0x80))) &&
             ((piVar2 = *(int **)(uVar1 * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)), iVar9 = local_168
              , piVar2 != (int *)0x0 && (iVar4 = (**(code **)(*piVar2 + 8))(), iVar4 == 4)))) {
            FUN_00cb3cc0(piVar2,local_140 + iVar5 * 0x20);
          }
          cVar8 = cVar8 + '\x01';
          iVar5 = (int)cVar8;
        } while (iVar5 < iVar9);
      }
      if (bVar10) {
        *(undefined1 *)(param_1 + 0x10c) = 3;
        *(undefined1 *)(param_1 + 0x10f) = 1;
        return;
      }
      break;
    case 2:
      cVar8 = '\0';
      if (local_168 != 0) {
        iVar9 = 0;
        do {
          iVar5 = *(int *)(param_1 + 0x18);
          uVar1 = *(uint *)(param_1 + 0xbc + iVar9 * 4);
          if (iVar5 == 0) {
            return;
          }
          if (*(uint *)(iVar5 + 0x80) <= uVar1) {
            return;
          }
          piVar2 = *(int **)(*(int *)(iVar5 + 0x7c) + 0x3f0 + uVar1 * 0x400);
          if (piVar2 == (int *)0x0) {
            return;
          }
          iVar5 = (**(code **)(*piVar2 + 8))();
          if (iVar5 != 4) {
            return;
          }
          if (piVar2[0x3e6] == 0) {
            return;
          }
          iVar9 = FUN_00cb31a0(*(undefined4 *)(param_1 + 0xe4 + iVar9 * 4));
          if (iVar9 == 0) {
            return;
          }
          cVar8 = cVar8 + '\x01';
          iVar9 = (int)cVar8;
        } while (iVar9 < local_168);
      }
      *(char *)(param_1 + 0x10c) = *(char *)(param_1 + 0x10c) + '\x01';
      *(undefined1 *)(param_1 + 0x10f) = 1;
      return;
    case 3:
      if (*(char *)(param_1 + 0x10d) == '\x01') {
        if ((iVar5 == 1) || (iVar5 == 4)) {
          uVar6 = FUN_009c46e0();
        }
        else if ((iVar5 == 2) || (iVar5 == 5)) {
          uVar6 = FUN_009c4700();
        }
        else {
          uVar6 = FUN_009c46c0();
        }
        FUN_00ca84a0(uVar6,local_150,0x10);
        FUN_00cce090(*(undefined4 *)(param_1 + 0xdc),local_150);
        FUN_00cce090(*(undefined4 *)(param_1 + 0x104),local_150);
      }
    }
  }
  return;
}

// 00D0A0F0  FUN_00d0a0f0  size=285  [run]
void __thiscall FUN_00d0a0f0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  char local_20 [32];
  
  _sprintf_s(local_20,0x20,"RESULT_SEL_1%d",param_2 + 1);
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0x28) < *(uint *)(iVar2 + 0x80))) &&
     (piVar1 = *(int **)(*(uint *)(param_1 + 0x28) * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)),
     piVar1 != (int *)0x0)) {
    iVar2 = (**(code **)(*piVar1 + 8))();
    if (iVar2 == 3) {
      uVar3 = FUN_00e03ea0(local_20);
      piVar1[0x2a] = -1;
      piVar1[0x2b] = 0;
      if ((piVar1[5] != 0) && (*(int *)(piVar1[5] + 4) != 0)) {
        iVar2 = FUN_00cb1cd0(uVar3);
        if (-1 < iVar2) {
          piVar1[0x2a] = iVar2;
          piVar1[0x2b] = 0;
          piVar1[0x2e] = 0;
        }
      }
    }
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0x2c) < *(uint *)(iVar2 + 0x80))) &&
     (piVar1 = *(int **)(*(uint *)(param_1 + 0x2c) * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)),
     piVar1 != (int *)0x0)) {
    iVar2 = (**(code **)(*piVar1 + 8))();
    if (iVar2 == 3) {
      uVar3 = FUN_00e03ea0(local_20);
      piVar1[0x2a] = -1;
      piVar1[0x2b] = 0;
      if ((piVar1[5] != 0) && (*(int *)(piVar1[5] + 4) != 0)) {
        iVar2 = FUN_00cb1cd0(uVar3);
        if (-1 < iVar2) {
          piVar1[0x2a] = iVar2;
          piVar1[0x2b] = 0;
          piVar1[0x2e] = 0;
        }
      }
    }
  }
  return;
}

// 00D0A210  FUN_00d0a210  size=924  [run]
void __thiscall FUN_00d0a210(int param_1,int param_2,int param_3,int param_4)

{
  char *pcVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
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
    FUN_00cded00(*(undefined4 *)(param_1 + 0x54 + param_2 * 4),local_30[param_3]);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_00cded00(*(undefined4 *)(param_1 + 0xc0 + param_2 * 4),local_30[param_3]);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_00cded00(*(undefined4 *)(param_1 + 300 + param_2 * 4),local_30[param_3]);
  }
  iVar3 = *(int *)(param_1 + 0x18);
  uVar5 = *(uint *)(param_1 + 0x78 + param_2 * 4);
  pcVar1 = local_30[param_3 + 6];
  if (((iVar3 != 0) && (uVar5 < *(uint *)(iVar3 + 0x80))) &&
     (piVar2 = *(int **)(uVar5 * 0x400 + 0x3f0 + *(int *)(iVar3 + 0x7c)), piVar2 != (int *)0x0)) {
    iVar3 = (**(code **)(*piVar2 + 8))();
    if (iVar3 == 3) {
      uVar4 = FUN_00e03ea0(pcVar1);
      piVar2[0x2a] = -1;
      piVar2[0x2b] = 1;
      if ((piVar2[5] != 0) && (*(int *)(piVar2[5] + 4) != 0)) {
        iVar3 = FUN_00cb1cd0(uVar4);
        if (-1 < iVar3) {
          piVar2[0x2a] = iVar3;
          piVar2[0x2b] = 1;
          piVar2[0x2e] = 0;
        }
      }
    }
  }
  iVar3 = *(int *)(param_1 + 0x18);
  uVar5 = *(uint *)(param_1 + 0x9c + param_2 * 4);
  if (((iVar3 != 0) && (uVar5 < *(uint *)(iVar3 + 0x80))) &&
     (piVar2 = *(int **)(uVar5 * 0x400 + 0x3f0 + *(int *)(iVar3 + 0x7c)), piVar2 != (int *)0x0)) {
    iVar3 = (**(code **)(*piVar2 + 8))();
    if (iVar3 == 3) {
      uVar4 = FUN_00e03ea0(pcVar1);
      piVar2[0x2a] = -1;
      piVar2[0x2b] = 1;
      if ((piVar2[5] != 0) && (*(int *)(piVar2[5] + 4) != 0)) {
        iVar3 = FUN_00cb1cd0(uVar4);
        if (-1 < iVar3) {
          piVar2[0x2a] = iVar3;
          piVar2[0x2b] = 1;
          piVar2[0x2e] = 0;
        }
      }
    }
  }
  iVar3 = *(int *)(param_1 + 0x18);
  uVar5 = *(uint *)(param_1 + 0xe4 + param_2 * 4);
  if (((iVar3 != 0) && (uVar5 < *(uint *)(iVar3 + 0x80))) &&
     (piVar2 = *(int **)(uVar5 * 0x400 + 0x3f0 + *(int *)(iVar3 + 0x7c)), piVar2 != (int *)0x0)) {
    iVar3 = (**(code **)(*piVar2 + 8))();
    if (iVar3 == 3) {
      uVar4 = FUN_00e03ea0(pcVar1);
      piVar2[0x2a] = -1;
      piVar2[0x2b] = 1;
      if ((piVar2[5] != 0) && (*(int *)(piVar2[5] + 4) != 0)) {
        iVar3 = FUN_00cb1cd0(uVar4);
        if (-1 < iVar3) {
          piVar2[0x2a] = iVar3;
          piVar2[0x2b] = 1;
          piVar2[0x2e] = 0;
        }
      }
    }
  }
  iVar3 = *(int *)(param_1 + 0x18);
  uVar5 = *(uint *)(param_1 + 0x108 + param_2 * 4);
  if (((iVar3 != 0) && (uVar5 < *(uint *)(iVar3 + 0x80))) &&
     (piVar2 = *(int **)(uVar5 * 0x400 + 0x3f0 + *(int *)(iVar3 + 0x7c)), piVar2 != (int *)0x0)) {
    iVar3 = (**(code **)(*piVar2 + 8))();
    if (iVar3 == 3) {
      uVar4 = FUN_00e03ea0(pcVar1);
      piVar2[0x2a] = -1;
      piVar2[0x2b] = 1;
      if ((piVar2[5] != 0) && (*(int *)(piVar2[5] + 4) != 0)) {
        iVar3 = FUN_00cb1cd0(uVar4);
        if (-1 < iVar3) {
          piVar2[0x2a] = iVar3;
          piVar2[0x2b] = 1;
          piVar2[0x2e] = 0;
        }
      }
    }
  }
  if (param_4 == 0) {
    if (param_2 < 8) {
      iVar3 = *(int *)(param_1 + 0x18);
      uVar5 = *(uint *)(param_1 + 0x150 + param_2 * 4);
      if (((iVar3 != 0) && (uVar5 < *(uint *)(iVar3 + 0x80))) &&
         (iVar3 = uVar5 * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
        *(undefined4 *)(iVar3 + 0x3b0) = 1;
      }
      uVar5 = *(uint *)(param_1 + 0x170 + param_2 * 4);
    }
    else {
      uVar5 = *(uint *)(param_1 + 400);
    }
    iVar3 = *(int *)(param_1 + 0x18);
    if (((iVar3 != 0) && (uVar5 < *(uint *)(iVar3 + 0x80))) &&
       (iVar3 = uVar5 * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
      *(undefined4 *)(iVar3 + 0x3b0) = 0;
    }
  }
  else {
    if (param_2 < 8) {
      iVar3 = *(int *)(param_1 + 0x18);
      uVar5 = *(uint *)(param_1 + 0x150 + param_2 * 4);
      if (((iVar3 != 0) && (uVar5 < *(uint *)(iVar3 + 0x80))) &&
         (iVar3 = uVar5 * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
        *(undefined4 *)(iVar3 + 0x3b0) = 0;
      }
      uVar5 = *(uint *)(param_1 + 0x170 + param_2 * 4);
    }
    else {
      uVar5 = *(uint *)(param_1 + 400);
    }
    iVar3 = *(int *)(param_1 + 0x18);
    if (((iVar3 != 0) && (uVar5 < *(uint *)(iVar3 + 0x80))) &&
       (iVar3 = uVar5 * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
      *(undefined4 *)(iVar3 + 0x3b0) = 1;
      return;
    }
  }
  return;
}


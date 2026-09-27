// src/unsorted/unit_009A2A10.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009A2A10..009A2DF0, 2 functions

#include "types.h"

// 009A2A10  FUN_009a2a10  size=978  [run]
void __fastcall FUN_009a2a10(int param_1)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  float10 fVar9;
  float10 fVar10;
  char *pcVar11;
  float local_88;
  undefined1 local_80;
  undefined1 local_7f [127];
  
  iVar3 = *(int *)(param_1 + 0x5c);
  if (iVar3 == 1) {
    bVar2 = true;
    uVar8 = 0;
    local_80 = 0;
    _memset(local_7f,0,0x7f);
    uVar7 = (uint)DAT_01dc1418;
    *(uint *)(param_1 + 0x88) = uVar7;
    if (uVar7 == 0) {
      pcVar11 = "%s";
    }
    else {
      pcVar11 = "%s_pc";
    }
    FUN_0099a440(&local_80,pcVar11,param_1 + 0x8c);
    uVar4 = FUN_00f98a90();
    *(undefined4 *)(param_1 + 0x11c) = uVar4;
    iVar3 = FUN_0099a7f0(&local_80);
    if (iVar3 == 0) {
      FUN_00dd5650(&DAT_01657578);
      *(undefined4 *)(param_1 + 0x5c) = 0;
    }
    else {
      *(int *)(param_1 + 8) = iVar3;
      if (*(int *)(iVar3 + 4) != 0) {
        piVar6 = (int *)(param_1 + 0xc);
        do {
          iVar5 = *piVar6;
          if (iVar5 == 0) {
            iVar5 = cMenuKeyInfoParts::cMenuKeyInfoParts_2();
            *piVar6 = iVar5;
            if (iVar5 != 0) goto LAB_009a2cf8;
            bVar2 = false;
          }
          else {
LAB_009a2cf8:
            uVar4 = *(undefined4 *)(iVar3 + 0xc + uVar8 * 8);
            *(undefined4 *)(iVar5 + 0x28) = *(undefined4 *)(iVar3 + 8 + uVar8 * 8);
            *(undefined4 *)(iVar5 + 0x2c) = uVar4;
            *(undefined4 *)(iVar5 + 0x1c) = 0;
          }
          uVar8 = uVar8 + 1;
          piVar6 = piVar6 + 1;
        } while (uVar8 < *(uint *)(*(int *)(param_1 + 8) + 4));
      }
      *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x10c);
      *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x110);
      *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_1 + 0x118);
      *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x114);
      uVar7 = *(uint *)(*(int *)(param_1 + 8) + 4);
      if (uVar7 < *(uint *)(param_1 + 0x7c)) {
        piVar6 = (int *)(param_1 + 0xc + uVar7 * 4);
        do {
          if ((undefined4 *)*piVar6 != (undefined4 *)0x0) {
            (*(code *)**(undefined4 **)*piVar6)(1);
            *piVar6 = 0;
          }
          uVar7 = uVar7 + 1;
          piVar6 = piVar6 + 1;
        } while (uVar7 < *(uint *)(param_1 + 0x7c));
      }
      *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(*(int *)(param_1 + 8) + 4);
      if (bVar2) {
        *(undefined4 *)(param_1 + 0x5c) = 2;
      }
      else {
        FUN_00dd5650(&DAT_0165754c);
        *(undefined4 *)(param_1 + 0x5c) = 0;
      }
    }
    goto LAB_009a2daa;
  }
  if (iVar3 == 2) {
    local_88 = *(float *)(param_1 + 0x60);
    uVar7 = 0;
    bVar2 = true;
    if (*(int *)(*(int *)(param_1 + 8) + 4) != 0) {
      piVar6 = (int *)(param_1 + 0xc);
      do {
        iVar3 = *piVar6;
        if (iVar3 != 0) {
          if (*(int *)(iVar3 + 0x1c) == 1) {
            fVar9 = (float10)FUN_00cad4b0();
            fVar10 = (float10)FUN_00cad4d0();
            fVar1 = *(float *)(param_1 + 100);
            *(float *)(iVar3 + 0x38) = (float)(fVar9 * (float10)local_88);
            *(float *)(iVar3 + 0x3c) = (float)(fVar10 * (float10)fVar1);
            fVar1 = *(float *)(*piVar6 + 0x40);
            *(float *)(param_1 + 0x80) = *(float *)(*piVar6 + 0x40) + *(float *)(param_1 + 0x80);
            iVar3 = *piVar6;
            if (0 < *(int *)(iVar3 + 0x1c)) {
              FUN_00cb2600(1);
              FUN_00cb2710(*(undefined4 *)(iVar3 + 0x38),*(undefined4 *)(iVar3 + 0x3c),0);
              *(undefined4 *)(iVar3 + 0x1c) = 2;
            }
            local_88 = *(float *)(param_1 + 0x68) + fVar1 + local_88;
          }
          if (*(int *)(*piVar6 + 0x1c) != 2) {
            bVar2 = false;
          }
        }
        uVar7 = uVar7 + 1;
        piVar6 = piVar6 + 1;
      } while (uVar7 < *(uint *)(*(int *)(param_1 + 8) + 4));
      if (!bVar2) goto LAB_009a2b9b;
    }
    if (*(int *)(param_1 + 0x84) != 0) {
      iVar3 = *(int *)(*(int *)(param_1 + 8) + 4) + -1;
      fVar1 = (float)iVar3;
      if (iVar3 < 0) {
        fVar1 = fVar1 + 4.2949673e+09;
      }
      uVar7 = 0;
      *(float *)(param_1 + 0x80) = fVar1 * *(float *)(param_1 + 0x68) + *(float *)(param_1 + 0x80);
      if (*(int *)(*(int *)(param_1 + 8) + 4) != 0) {
        piVar6 = (int *)(param_1 + 0xc);
        do {
          iVar3 = *piVar6;
          if (iVar3 != 0) {
            FUN_00cb2710(*(float *)(iVar3 + 0x38) - *(float *)(param_1 + 0x80),
                         *(undefined4 *)(iVar3 + 0x3c),0);
          }
          uVar7 = uVar7 + 1;
          piVar6 = piVar6 + 1;
        } while (uVar7 < *(uint *)(*(int *)(param_1 + 8) + 4));
      }
    }
    *(undefined4 *)(param_1 + 0x5c) = 3;
  }
  else if (iVar3 != 3) goto LAB_009a2daa;
LAB_009a2b9b:
  if (*(uint *)(param_1 + 0x88) != (uint)DAT_01dc1418) {
    *(undefined4 *)(param_1 + 0x5c) = 1;
  }
  iVar3 = FUN_00f98a90();
  if (*(int *)(param_1 + 0x11c) != iVar3) {
    piVar6 = (int *)(param_1 + 0xc);
    iVar3 = 0x14;
    do {
      if (*piVar6 != 0) {
        FUN_00cb2600(0);
      }
      piVar6 = piVar6 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    *(undefined4 *)(param_1 + 0x5c) = 1;
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    uVar7 = 0;
    if (*(int *)(*(int *)(param_1 + 8) + 4) != 0) {
      piVar6 = (int *)(param_1 + 0xc);
      do {
        if (*piVar6 != 0) {
          FUN_00ce4d70(*(undefined4 *)(param_1 + 0x6c));
        }
        uVar7 = uVar7 + 1;
        piVar6 = piVar6 + 1;
      } while (uVar7 < *(uint *)(*(int *)(param_1 + 8) + 4));
    }
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  if (*(int *)(param_1 + 0x78) != 0) {
    uVar7 = 0;
    if (*(int *)(*(int *)(param_1 + 8) + 4) != 0) {
      piVar6 = (int *)(param_1 + 0xc);
      do {
        iVar3 = *piVar6;
        if (iVar3 != 0) {
          uVar4 = *(undefined4 *)(param_1 + 0x74);
          *(undefined4 *)(iVar3 + 0x34) = 1;
          *(undefined4 *)(iVar3 + 0x30) = uVar4;
        }
        uVar7 = uVar7 + 1;
        piVar6 = piVar6 + 1;
      } while (uVar7 < *(uint *)(*(int *)(param_1 + 8) + 4));
    }
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
LAB_009a2daa:
  if ((*(int *)(param_1 + 0x5c) != 0) && (uVar7 = 0, *(int *)(*(int *)(param_1 + 8) + 4) != 0)) {
    piVar6 = (int *)(param_1 + 0xc);
    do {
      if (*piVar6 != 0) {
        (**(code **)(*(int *)*piVar6 + 4))();
      }
      uVar7 = uVar7 + 1;
      piVar6 = piVar6 + 1;
    } while (uVar7 < *(uint *)(*(int *)(param_1 + 8) + 4));
  }
  return;
}

// 009A2DF0  FUN_009a2df0  size=80  [run]
void __thiscall
FUN_009a2df0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  FUN_0099a440(param_1 + 0x8c,&DAT_016575ac,param_2);
  *(undefined4 *)(param_1 + 0x10c) = param_3;
  *(undefined4 *)(param_1 + 0x110) = param_4;
  *(undefined4 *)(param_1 + 0x118) = param_6;
  *(undefined4 *)(param_1 + 0x114) = param_5;
  *(undefined4 *)(param_1 + 0x5c) = 1;
  return;
}


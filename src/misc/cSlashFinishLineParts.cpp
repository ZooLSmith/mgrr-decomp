// src/misc/cSlashFinishLineParts.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CBF360..00D33D60, 5 functions

#include "mgrr.h"
#include "cSlashFinishLineParts.h"

// 00CBF360  cSlashFinishLineParts::create  size=134  [class]
int __fastcall cSlashFinishLineParts::create(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0x1c) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0x1c) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = *(undefined4 *)(param_1 + 0x24);
  }
  iVar3 = FUN_00cb27c0(*(undefined4 *)(param_1 + 0x20),param_1 + 0x30);
  uVar1 = *(uint *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (uVar1 < *(uint *)(iVar2 + 0x80))) &&
     (iVar3 = uVar1 * 0x400, *(int *)(iVar2 + 0x7c) + 0x2a0 + iVar3 != 0)) {
    if (uVar1 < *(uint *)(iVar2 + 0x80)) {
      iVar2 = *(int *)(iVar2 + 0x7c);
      *(undefined4 *)(iVar2 + 0x388 + iVar3) = *(undefined4 *)(param_1 + 0x40);
      return iVar2 + 0x2a0 + iVar3;
    }
    uRam000000e8 = *(undefined4 *)(param_1 + 0x40);
    return 0;
  }
  return iVar3;
}

// 00CDEA20  cSlashFinishLineParts::vf00  size=63  [class]
undefined4 * __thiscall cSlashFinishLineParts::vf00(undefined4 *param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = param_1[5];
  *param_1 = cCustomObjCtrlManager::vftable;
  param_1[6] = 0;
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[5] = 0;
  }
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00CF21F0  cSlashFinishLineParts::vf08  size=71  [class]
void __fastcall cSlashFinishLineParts::vf08(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0x88);
  }
  *(uint *)(param_1 + 0x1c) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0x14c);
  }
  *(uint *)(param_1 + 0x20) = uVar2;
  if (iVar1 != 0) {
    FUN_00cdeec0(0);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 1;
  }
  return;
}

// 00D33D00  cSlashFinishLineParts::cSlashFinishLineParts  size=89  [class]
undefined4 * cSlashFinishLineParts::cSlashFinishLineParts(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x50,&DAT_01b7be50);
  puVar3 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[4] = 1;
    puVar1[9] = 1;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *puVar1 = vftable;
    puVar1[3] = "cSlashFinishLineParts";
    puVar1[2] = 5;
    uVar2 = FUN_00d29960(0x43);
    puVar1[5] = uVar2;
    puVar3 = puVar1;
  }
  return puVar3;
}

// 00D33D60  FUN_00d33d60  size=267  [callgraph]
void __fastcall FUN_00d33d60(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  undefined4 uStack_14;
  
  piVar7 = (int *)(param_1 + 4);
  uVar9 = 0;
  piVar8 = piVar7;
  do {
    if (*(int *)((int)&DAT_01dbf950 + uVar9) == 0) {
      *(undefined4 *)((int)&DAT_01dc132c + uVar9) = 0;
    }
    if (*(int *)((int)&DAT_01dc132c + uVar9) == 0) {
      if ((undefined4 *)*piVar8 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar8)(1);
        *piVar8 = 0;
      }
    }
    else {
      if (*piVar8 == 0) {
        iVar6 = cSlashFinishLineParts::cSlashFinishLineParts();
        *piVar8 = iVar6;
      }
      else {
        iVar6 = *(int *)(*piVar8 + 0x14);
        if ((iVar6 == 0) || (*(int *)(iVar6 + 0x18) == 0)) goto LAB_00d33e2f;
      }
      fVar12 = (float10)0.5;
      iVar6 = *(int *)((int)&DAT_01dc132c + uVar9);
      iVar4 = *piVar8;
      fVar1 = *(float *)(iVar6 + 0x14);
      fVar2 = *(float *)(iVar6 + 0x18);
      fVar3 = *(float *)(iVar6 + 0x28);
      uVar5 = *(undefined4 *)(iVar6 + 0x30);
      fVar10 = (float10)*(float *)(iVar6 + 0x20) - (float10)*(float *)(iVar6 + 0x10);
      fVar11 = (float10)*(float *)(iVar6 + 0x24) - (float10)fVar1;
      *(float *)(iVar4 + 0x30) = (float)(fVar10 * fVar12 + (float10)*(float *)(iVar6 + 0x10));
      *(float *)(iVar4 + 0x34) = (float)(fVar11 * fVar12 + (float10)fVar1);
      *(float *)(iVar4 + 0x38) =
           (float)(((float10)fVar3 - (float10)fVar2) * fVar12 + (float10)fVar2);
      *(undefined4 *)(iVar4 + 0x3c) = uStack_14;
      fVar12 = (float10)fpatan(fVar11,fVar10);
      *(float *)(iVar4 + 0x40) = (float)fVar12;
      *(undefined4 *)(*piVar8 + 0x24) = uVar5;
    }
LAB_00d33e2f:
    uVar9 = uVar9 + 4;
    piVar8 = piVar8 + 1;
    if (0x13 < uVar9) {
      uVar9 = 0;
      do {
        if (*piVar7 != 0) {
          (**(code **)(*(int *)*piVar7 + 4))();
        }
        *(undefined4 *)((int)&DAT_01dbf950 + uVar9) = 0;
        uVar9 = uVar9 + 4;
        piVar7 = piVar7 + 1;
      } while (uVar9 < 0x14);
      return;
    }
  } while( true );
}


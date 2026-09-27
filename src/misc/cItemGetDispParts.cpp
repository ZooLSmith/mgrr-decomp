// src/misc/cItemGetDispParts.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CEF2E0..00D30330, 3 functions

#include "mgrr.h"
#include "cItemGetDispParts.h"

// 00CEF2E0  cItemGetDispParts::vf00  size=30  [class]
undefined4 __thiscall cItemGetDispParts::vf00(undefined4 param_1,byte param_2)

{
  cCustomObjCtrlManager::cCustomObjCtrlManager_32();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D14600  cItemGetDispParts::create  size=1999  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall cItemGetDispParts::create(int param_1)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  int iVar6;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  float unaff_EBX;
  float unaff_ESI;
  float *pfVar7;
  float10 fVar8;
  float10 fVar9;
  undefined4 uVar10;
  float local_bc;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float local_ac;
  int iStack_a0;
  undefined1 auStack_9c [4];
  undefined1 auStack_98 [8];
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [76];
  
  iVar3 = *(int *)(param_1 + 0x18);
  if (iVar3 == 0) {
    pfVar7 = (float *)0x0;
  }
  else {
    iVar6 = *(int *)(iVar3 + 0x78);
    if ((((iVar6 == 0) || (*(int *)(iVar6 + 0x10) == 0)) ||
        (iVar6 = iVar6 + *(int *)(iVar6 + 0x10), iVar6 == 0)) ||
       (*(uint *)(iVar3 + 0x80) <= *(uint *)(param_1 + 0xa8))) {
      pfVar7 = (float *)0x0;
    }
    else {
      pfVar7 = (float *)(*(uint *)(param_1 + 0xa8) * 0x1b0 + iVar6);
    }
  }
  iVar3 = FUN_00f98a90();
  *(float *)(param_1 + 0xf0) = (float)iVar3 * 0.00078125 * *pfVar7;
  iVar3 = FUN_00f98aa0();
  *(float *)(param_1 + 0xf4) = (float)iVar3 * 0.0013888889 * pfVar7[1];
  switch(*(undefined4 *)(param_1 + 0xb0)) {
  case 0:
    if (DAT_01dc1354 != 0) {
      return;
    }
    if (DAT_01dc0750 != 0) {
      return;
    }
    FUN_00d00e40();
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1;
    goto LAB_00d146cd;
  case 1:
LAB_00d146cd:
    uVar4 = *(uint *)(param_1 + 0xb4) & 0x80000003;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0xc0) + 4) = (uint)((int)uVar4 < 2);
    *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + 1;
    if (0xc < *(int *)(param_1 + 0xb4)) {
      *(undefined4 *)(param_1 + 0xb4) = 0;
      if (*(int *)(param_1 + 0x14) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 1;
      }
      *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1;
    }
    break;
  case 2:
    uVar4 = *(uint *)(param_1 + 0xb4) & 0x80000003;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0xc4) + 4) = (uint)((int)uVar4 < 2);
    uVar4 = *(uint *)(param_1 + 0xb4) & 0x80000003;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0xbc) + 4) = (uint)((int)uVar4 < 2);
    uVar4 = *(uint *)(param_1 + 0xb4) & 0x80000003;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
    }
    fVar8 = (float10)FUN_00cb2310(*(undefined4 *)(param_1 + 0xa4),(int)uVar4 < 2);
    fVar9 = (float10)*(float *)(param_1 + 0xb8) + (float10)_DAT_018b8c14;
    *(float *)(param_1 + 0xb8) = (float)fVar9;
    if (fVar8 < fVar9) {
      *(float *)(param_1 + 0xb8) = (float)fVar8;
    }
    iVar3 = FUN_00ca8620(extraout_EDX,0xc);
    if (iVar3 != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0xc4) + 4) = 1;
      *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1;
    }
    break;
  case 3:
    fVar5 = *(float *)(param_1 + 0xb8) + _DAT_018b8c14;
    *(float *)(param_1 + 0xb8) = fVar5;
    if (1.0 < fVar5) {
      *(undefined4 *)(param_1 + 0xb8) = 0x3f800000;
    }
    goto LAB_00d14803;
  case 4:
    goto LAB_00d14823;
  case 5:
    uVar10 = 0x1e;
    goto LAB_00d14805;
  case 6:
    uVar4 = *(uint *)(param_1 + 0xb4) & 0x80000003;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0xc0) + 4) = (uint)(1 < (int)uVar4);
    uVar4 = *(uint *)(param_1 + 0xb4) & 0x80000003;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0xbc) + 4) = (uint)(1 < (int)uVar4);
LAB_00d14803:
    uVar10 = 0xc;
    goto LAB_00d14805;
  case 7:
    if (*(int *)(param_1 + 0x10c) != 0) {
      FUN_00d00e40();
      *(undefined4 *)(param_1 + 0xb4) = 0;
      break;
    }
    uVar10 = 0x3c;
LAB_00d14805:
    iVar3 = FUN_00ca8620(param_1 + 0xb4,uVar10);
    if (iVar3 != 0) {
LAB_00d14816:
      *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1;
    }
    break;
  case 8:
    if (*(int *)(param_1 + 0x10c) != 0) {
      FUN_00cb2310(*(undefined4 *)(param_1 + 0xa4),1);
      *(undefined4 *)(*(int *)(param_1 + 0xc4) + 4) = 1;
      FUN_00d00e40();
      *(undefined4 *)(param_1 + 0xb4) = 0;
      *(undefined4 *)(param_1 + 0xb0) = 7;
      break;
    }
    uVar4 = *(uint *)(param_1 + 0xb4) & 0x80000003;
    puVar1 = (uint *)(param_1 + 0xb4);
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
    }
    FUN_00cb2310(*(undefined4 *)(param_1 + 0xa4),1 < (int)uVar4);
    uVar4 = *puVar1 & 0x80000003;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0xc4) + 4) = (uint)(1 < (int)uVar4);
    iVar3 = FUN_00ca8620(puVar1,8);
    if (iVar3 == 0) break;
    if (*(int *)(param_1 + 0x110) != 0) {
      *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_1 + 0x11c);
      *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_1 + 0x114);
      *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_1 + 0x118);
      FUN_00d00e40();
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x90),0);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0xa4),0);
      *(undefined4 *)(*(int *)(param_1 + 0xc4) + 4) = 0;
      *puVar1 = 1;
      *(undefined4 *)(param_1 + 0xb0) = 10;
      *(undefined4 *)(param_1 + 0x110) = 0;
      break;
    }
    if (*(int *)(param_1 + 0x14) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0;
      *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1;
      break;
    }
    goto LAB_00d14816;
  default:
    break;
  case 10:
    if (*(int *)(param_1 + 0x10c) != 0) {
      FUN_00d00e40();
    }
    uVar4 = *(uint *)(param_1 + 0xb4) & 0x80000003;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0xc4) + 4) = (uint)(1 < (int)uVar4);
    uVar4 = *(uint *)(param_1 + 0xb4) & 0x80000003;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
    }
    FUN_00cb2310(*(undefined4 *)(param_1 + 0xa4),1 < (int)uVar4);
    iVar3 = FUN_00ca8620(extraout_EDX_00,10);
    if (iVar3 == 0) break;
LAB_00d14823:
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x90),1);
    FUN_00ccdf90(*(undefined4 *)(param_1 + 0x90),1,3);
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1;
    break;
  case 0xb:
    if (*(int *)(param_1 + 0x10c) == 0) {
      cVar2 = 'Z';
      if ((DAT_01dc1354 == 0) && (DAT_01dc0750 == 0)) {
        cVar2 = ((*(int *)(param_1 + 0x110) == 0) + '\x03') * '\x1e';
      }
      iVar3 = FUN_00ca8620(param_1 + 0xb4,cVar2);
      if (iVar3 != 0) {
        *(undefined4 *)(param_1 + 0xb0) = 8;
      }
    }
    else {
      FUN_00d00e40();
      *(undefined4 *)(param_1 + 0xb4) = 0;
    }
  }
  if (*(int *)(param_1 + 0xb0) != 9) {
    *(float *)(param_1 + 0x40) =
         (*(float *)(param_1 + 0xd0) +
         (*(float *)(param_1 + 0xe0) - *(float *)(param_1 + 0xd0)) * *(float *)(param_1 + 0xb8)) -
         *(float *)(param_1 + 0xf0);
    *(float *)(param_1 + 0x44) =
         (*(float *)(param_1 + 0xb8) * (*(float *)(param_1 + 0xe4) - *(float *)(param_1 + 0xd4)) +
         *(float *)(param_1 + 0xd4)) - *(float *)(param_1 + 0xf4);
    FUN_00cb33d0(*(undefined4 *)(param_1 + 0xac),0x40c00000,0x40c00000,0x43c80000,0x43960000);
    local_bc = *(float *)(param_1 + 0x74) + *(float *)(param_1 + 0x44);
    local_b8 = *(float *)(param_1 + 0x78) + *(float *)(param_1 + 0x48);
    FUN_00f98a90();
    fVar5 = (float)FUN_00f98aa0();
    local_bc = (float)(int)fVar5 * 0.0013888889 * local_bc;
    local_b0 = *(float *)(param_1 + 0x80);
    local_ac = *(float *)(param_1 + 0x84);
    local_58 = 0;
    local_5c = 0;
    local_60 = 0;
    local_64 = 0.0;
    local_6c = 0.0;
    local_70 = 0;
    local_74 = 0;
    local_78 = 0;
    local_80 = 0;
    local_84 = 0;
    local_88 = 0;
    local_8c = 0;
    local_54 = 0x3f800000;
    local_68 = 1.0;
    local_7c = 0x3f800000;
    local_90 = 0x3f800000;
    if (*(float *)(param_1 + 0x88) != 0.0) {
      D3DXMatrixRotationZ(local_50,*(float *)(param_1 + 0x88));
      D3DXMatrixMultiply(auStack_98,&local_58,auStack_98);
    }
    if (local_ac != 0.0) {
      D3DXMatrixRotationY(local_50,local_ac);
      D3DXMatrixMultiply(auStack_98,&local_58,auStack_98);
    }
    if (local_b0 != 0.0) {
      D3DXMatrixRotationX(local_50,local_b0);
      D3DXMatrixMultiply(auStack_98,&local_58,auStack_98);
    }
    D3DXVec3TransformNormal(&local_b0,(float *)(param_1 + 0xf0),&local_90);
    local_6c = local_6c + local_bc + unaff_ESI;
    local_68 = local_b8 + local_68 + unaff_EBX;
    local_64 = fStack_b4 + local_64 + fVar5;
    iStack_a0 = FUN_00f98aa0();
    iVar6 = FUN_00f98a90();
    iVar3 = *(int *)(param_1 + 0xc0);
    local_bc = (float)iVar6 * 0.00078125 * *(float *)(param_1 + 0xd0);
    local_b8 = (float)iStack_a0 * 0.0013888889 * *(float *)(param_1 + 0xd4);
    fStack_b4 = 0.0;
    if (*(int *)(iVar3 + 0x18) != 0) {
      *(float *)(iVar3 + 0x80) = local_bc;
      *(float *)(iVar3 + 0x84) = local_b8;
    }
    FUN_00cb5540(&local_bc,&stack0xffffff34,0x3f800000);
    if (*(int *)(*(int *)(param_1 + 0xc4) + 0x18) != 0) {
      FID_conflict__memcpy((void *)(*(int *)(param_1 + 0xc4) + 0x50),auStack_9c,0x40);
    }
  }
  return;
}

// 00D30330  cItemGetDispParts::vf08  size=562  [class]
void __fastcall cItemGetDispParts::vf08(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar1 + 0x88);
  }
  *(uint *)(param_1 + 0x90) = uVar4;
  if (iVar1 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar1 + 0x9a);
  }
  *(uint *)(param_1 + 0x94) = uVar4;
  if (iVar1 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar1 + 0x106);
  }
  *(uint *)(param_1 + 0x98) = uVar5;
  if (iVar1 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar1 + 0x11a);
  }
  *(uint *)(param_1 + 0x9c) = uVar5;
  if (iVar1 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar1 + 0x13a);
  }
  *(uint *)(param_1 + 0xa0) = uVar5;
  if (iVar1 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar1 + 0x148);
  }
  *(uint *)(param_1 + 0xa4) = uVar5;
  if (iVar1 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar1 + 0x14a);
  }
  *(uint *)(param_1 + 0xa8) = uVar5;
  if (iVar1 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar1 + 0x14c);
  }
  *(uint *)(param_1 + 0xac) = uVar5;
  if (((iVar1 != 0) && (uVar4 < *(uint *)(iVar1 + 0x80))) &&
     (piVar2 = *(int **)(uVar4 * 0x400 + 0x3f0 + *(int *)(iVar1 + 0x7c)), piVar2 != (int *)0x0)) {
    iVar1 = (**(code **)(*piVar2 + 8))();
    if (iVar1 == 0) {
      piVar2 = piVar2 + 4;
      goto LAB_00d3041b;
    }
  }
  piVar2 = (int *)0x0;
LAB_00d3041b:
  iVar1 = *(int *)(param_1 + 0x18);
  *(int **)(param_1 + 0x138) = piVar2;
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0x90) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0x90) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0x94) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0x94) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0xa4) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0xa4) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0xa8) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0xa8) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
  }
  iVar1 = FUN_00d29960(4);
  *(int *)(param_1 + 0xbc) = iVar1;
  *(undefined4 *)(iVar1 + 0x210) = 0xc;
  *(undefined4 *)(*(int *)(param_1 + 0xbc) + 0x214) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0xbc) + 4) = 0;
  piVar2 = (int *)(param_1 + 0xc0);
  iVar1 = 2;
  do {
    iVar3 = FUN_00d29960(5);
    *piVar2 = iVar3;
    *(undefined4 *)(iVar3 + 0x1e4) = 0xc;
    *(undefined4 *)(*piVar2 + 0x1e8) = 0;
    iVar3 = *piVar2;
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + -1;
    *(undefined4 *)(iVar3 + 4) = 0;
  } while (iVar1 != 0);
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_00cdeec0(5);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_00cdeec0(1);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x1f8) = 1;
  }
  if (DAT_01dc2d70 != 0) {
    *(undefined4 *)(param_1 + 0xb0) = 9;
  }
  return;
}


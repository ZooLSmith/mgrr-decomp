// src/misc/Phantom.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00901900..009021A0, 4 functions

#include "mgrr.h"

// 00901900  Phantom::setTransform  size=1187  [class]
/* WARNING: Removing unreachable block (ram,0x00901cf9) */
/* WARNING: Removing unreachable block (ram,0x00901cf1) */
/* WARNING: Removing unreachable block (ram,0x00901cf3) */
/* WARNING: Removing unreachable block (ram,0x00901cfb) */
/* WARNING: Removing unreachable block (ram,0x00901cfd) */

void __thiscall Phantom::setTransform(int *param_1,float *param_2)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float *pfVar15;
  float local_e8 [2];
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  undefined4 local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  undefined4 local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  undefined4 local_a4;
  float local_a0;
  float fStack_98;
  undefined1 local_90 [56];
  undefined1 auStack_58 [8];
  undefined1 local_50 [76];
  
  if (*param_1 != 0) {
    FUN_004066f0();
    pfVar15 = param_2;
    if (((*param_1 != 0) && (uVar11 = *(uint *)(*param_1 + 0xc), uVar11 != 0)) &&
       ((*(uint *)((-(uint)(uVar11 != 0) & uVar11) + 8) & 0x1000) != 0)) {
      fVar2 = param_2[0xc];
      fVar3 = param_2[0xd];
      fVar4 = param_2[0xe];
      fVar5 = *param_2;
      fVar6 = param_2[1];
      fVar7 = param_2[2];
      local_e8[0] = SQRT(param_2[4] * param_2[4] + param_2[5] * param_2[5] + param_2[6] * param_2[6]
                        );
      fVar10 = SQRT(param_2[10] * param_2[10] + param_2[9] * param_2[9] + param_2[8] * param_2[8]);
      fVar8 = param_2[6];
      fVar9 = param_2[10];
      fVar12 = (float10)FUN_00ddbaa0(-(param_2[2] / fVar10));
      fVar13 = (float10)fpatan((float10)(fVar8 / fVar10),(float10)(fVar9 / fVar10));
      local_a0 = (float)fVar13;
      fVar14 = (float10)fpatan((float10)param_2[1] / (float10)local_e8[0],
                               (float10)*param_2 /
                               (float10)SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar7 * fVar7));
      fVar13 = (float10)0;
      local_a8 = (float)fVar13;
      local_ac = (float)fVar13;
      local_b0 = (float)fVar13;
      local_b4 = (float)fVar13;
      local_bc = (float)fVar13;
      local_c0 = (float)fVar13;
      local_c4 = (float)fVar13;
      local_c8 = (float)fVar13;
      local_d0 = (float)fVar13;
      local_d4 = (float)fVar13;
      local_d8 = (float)fVar13;
      local_dc = (float)fVar13;
      local_a4 = 0x3f800000;
      local_b8 = 0x3f800000;
      local_cc = 0x3f800000;
      local_e0 = 1.0;
      if (fVar13 != fVar14) {
        D3DXMatrixRotationZ(local_50,(float)fVar14);
        D3DXMatrixMultiply(local_e8,auStack_58,local_e8);
        fVar12 = (float10)(float)fVar12;
      }
      if ((float10)0 != fVar12) {
        D3DXMatrixRotationY(local_50,(float)fVar12);
        D3DXMatrixMultiply(local_e8,auStack_58,local_e8);
      }
      if (local_a0 != 0.0) {
        D3DXMatrixRotationX(local_50,local_a0);
        D3DXMatrixMultiply(local_e8,auStack_58,local_e8);
      }
      pfVar15 = &local_e0;
      local_b0 = fVar2;
      local_ac = fVar3;
      local_a8 = fVar4;
    }
    FUN_01005190(pfVar15);
    fVar2 = *param_2;
    fVar3 = param_2[1];
    fVar4 = param_2[2];
    local_e8[0] = SQRT(param_2[4] * param_2[4] + param_2[5] * param_2[5] + param_2[6] * param_2[6]);
    fVar7 = SQRT(param_2[10] * param_2[10] + param_2[9] * param_2[9] + param_2[8] * param_2[8]);
    fVar5 = param_2[6];
    fVar6 = param_2[10];
    FUN_00ddbaa0(-(param_2[2] / fVar7));
    fpatan((float10)(fVar5 / fVar7),(float10)(fVar6 / fVar7));
    fVar13 = (float10)fpatan((float10)param_2[1] / (float10)local_e8[0],
                             (float10)*param_2 /
                             (float10)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar4 * fVar4));
    fStack_98 = (float)fVar13;
    uVar11 = (**(code **)(*(int *)*param_1 + 0x18))();
    if (uVar11 < 2) {
      FUN_011a1220(local_90);
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  return;
}

// 00901DE0  Phantom::OverlapCollector::vf00  size=22  [class]
void __fastcall Phantom::OverlapCollector::vf00(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00901df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 4) + 8))();
  return;
}

// 00901F20  Phantom::OverlapCollector::vf04  size=116  [class]
void __thiscall Phantom::OverlapCollector::vf04(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_1 + 8);
  piVar1 = piVar4 + *(int *)(param_1 + 0xc);
  if (piVar4 != piVar1) {
    do {
      if (*piVar4 == *(int *)(param_2 + 4)) break;
      piVar4 = piVar4 + 1;
    } while (piVar4 != piVar1);
  }
  if ((int *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0xc) * 4) != piVar4) {
    uVar2 = *(uint *)(param_1 + 0xc);
    iVar3 = *(int *)(param_1 + 8);
    piVar1 = (int *)(iVar3 + uVar2 * 4);
    if ((((piVar4 != piVar1) && (iVar3 != 0)) && (uVar2 != 0)) &&
       ((uint)((int)piVar4 - iVar3 >> 2) < uVar2)) {
      for (; piVar4 != piVar1 + -1; piVar4 = piVar4 + 1) {
        *piVar4 = piVar4[1];
      }
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
    }
  }
  return;
}

// 009021A0  Phantom::OverlapCollector::vf08  size=73  [class]
undefined4 * __thiscall Phantom::OverlapCollector::vf08(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  param_1[1] = lib::Array<hkpCollidable_const*>::vftable;
  if (param_1[2] != 0) {
    param_1[3] = 0;
  }
  param_1[2] = 0;
  param_1[4] = 0;
  *param_1 = hkpPhantomOverlapListener::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x414);
  }
  return param_1;
}


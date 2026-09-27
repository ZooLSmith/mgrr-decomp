// lib/havok/unit_00615460.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00615460..00615460, 1 functions

#include "types.h"

// 00615460  hkpCdPointCollector::hkpCdPointCollector_8  size=2879  [run]
void __thiscall hkpCdPointCollector::hkpCdPointCollector_8(int param_1,int param_2)

{
  float *pfVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  float unaff_EBX;
  int iVar6;
  float unaff_ESI;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float *pfStack_360;
  float *pfStack_35c;
  int iStack_358;
  undefined1 *puStack_354;
  float *pfStack_350;
  undefined1 *puStack_34c;
  undefined1 *puStack_348;
  float fStack_344;
  float fStack_340;
  float *pfStack_33c;
  float *pfStack_338;
  float local_334;
  float fVar10;
  float fStack_324;
  undefined1 auStack_320 [4];
  int iStack_31c;
  float local_318;
  float local_314;
  undefined1 auStack_310 [4];
  float fStack_30c;
  float fStack_308;
  undefined1 auStack_304 [8];
  float fStack_2fc;
  undefined **ppuStack_2f4;
  float local_2f0;
  float local_2ec;
  float local_2e8;
  undefined1 *local_2e4;
  int iStack_2e0;
  uint uStack_2dc;
  int local_2d8;
  undefined1 auStack_2d4 [352];
  undefined1 auStack_174 [24];
  undefined1 auStack_15c [8];
  undefined1 auStack_154 [44];
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [4];
  undefined1 auStack_11c [8];
  undefined1 auStack_114 [52];
  undefined1 auStack_e0 [12];
  undefined1 auStack_d4 [12];
  undefined1 auStack_c8 [64];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [124];
  
  local_318 = *(float *)(param_2 + 0x910);
  local_314 = *(float *)(param_2 + 0xa9c);
  fVar7 = (float10)0;
  if (*(int *)(param_1 + 0x1c) == 0) {
    *(float *)(param_2 + 0x13a0) = (float)fVar7;
    *(float *)(param_2 + 0x13a8) = (float)fVar7;
    *(float *)(param_2 + 0x13b0) = (float)fVar7;
  }
  else {
    local_2d8 = param_1;
    if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
      local_334 = 8.938436e-39;
      fVar7 = (float10)FUN_00fdc1f0();
      fVar7 = fVar7 * (float10)local_314 * (float10)0.9;
    }
    pfVar1 = (float *)(param_2 + 0x13a0);
    fVar8 = SQRT((float10)*(float *)(param_2 + 0x13a8) * (float10)*(float *)(param_2 + 0x13a8) +
                 (float10)*pfVar1 * (float10)*pfVar1 +
                 (float10)*(float *)(param_2 + 0x13a4) * (float10)*(float *)(param_2 + 0x13a4));
    fVar9 = (float10)*(float *)(param_1 + 0x2c) * (float10)0.9;
    if (fVar9 < fVar8) {
      fVar9 = fVar9 / fVar8;
      *pfVar1 = (float)(fVar9 * (float10)*pfVar1);
      *(float *)(param_2 + 0x13a8) = (float)(fVar9 * (float10)*(float *)(param_2 + 0x13a8));
    }
    fVar8 = (float10)0.9 * (float10)local_318 * (float10)0;
    *pfVar1 = (float)((float10)*pfVar1 + fVar8);
    *(float *)(param_2 + 0x13a8) = (float)((float10)*(float *)(param_2 + 0x13a8) + fVar8);
    local_334 = (float)(fVar7 * (float10)local_318 + (float10)*(float *)(param_2 + 0x13b0));
    pfStack_338 = (float *)0x615549;
    fVar7 = (float10)FUN_00ddba30();
    *(float *)(param_2 + 0x13b0) = (float)fVar7;
    local_334 = (float)(param_2 + 0x10);
    local_2f0 = *(float *)(param_1 + 0x40) * 0.9;
    pfStack_33c = &local_2f0;
    local_2ec = *(float *)(param_1 + 0x44) * 0.9;
    local_2e8 = *(float *)(param_1 + 0x48) * 0.9;
    local_2e4 = (undefined1 *)(*(float *)(param_1 + 0x4c) * 0.9);
    fStack_340 = 8.938733e-39;
    pfStack_338 = pfStack_33c;
    D3DXVec3TransformNormal();
    *pfVar1 = fStack_2fc * fStack_324 + *pfVar1;
    *(float *)(param_2 + 0x13a8) = fStack_324 * (float)ppuStack_2f4 + *(float *)(param_2 + 0x13a8);
    fStack_340 = *(float *)(param_2 + 0x13b0) + *(float *)(param_1 + 0x50);
    fStack_344 = 8.938803e-39;
    fVar7 = (float10)FUN_00ddba30();
    *(float *)(param_2 + 0x13b0) = (float)fVar7;
    if ((float10)0.06283185 < fVar7) {
      *(float *)(param_2 + 0x13b0) = (float)(float10)0.06283185;
    }
    if (*(float *)(param_2 + 0x13b0) < -0.06283185) {
      *(undefined4 *)(param_2 + 0x13b0) = 0xbd80adfc;
    }
    fStack_340 = 8.938915e-39;
    fVar7 = (float10)FUN_00fdc1f0();
    *pfVar1 = (float)(fVar7 * (float10)*pfVar1);
    *(float *)(param_2 + 0x13a8) = (float)(fVar7 * (float10)*(float *)(param_2 + 0x13a8));
    fStack_340 = 8.938961e-39;
    fVar7 = (float10)FUN_00fdc1f0();
    fStack_340 = (float)(param_2 + 0x10);
    fStack_344 = 0.0;
    *(float *)(param_2 + 0x13b0) = (float)(fVar7 * (float10)*(float *)(param_2 + 0x13b0));
    puStack_348 = auStack_11c;
    puStack_34c = (undefined1 *)0x61564f;
    D3DXMatrixInverse();
    puStack_34c = auStack_128;
    puStack_354 = &stack0xfffffcd8;
    iStack_358 = 0x615662;
    pfStack_350 = pfVar1;
    D3DXVec3TransformNormal();
    fVar7 = (float10)local_334;
    if ((fVar7 < (float10)0) && ((float10)0 < (float10)*(float *)(param_1 + 0x40))) {
      iStack_358 = 0x615690;
      fVar7 = (float10)FUN_00fdc1f0();
      fVar7 = fVar7 * (float10)local_334;
      local_334 = (float)fVar7;
    }
    if (((float10)0 < fVar7) && ((float10)*(float *)(param_1 + 0x40) < (float10)0)) {
      iStack_358 = 0x6156c0;
      fVar7 = (float10)FUN_00fdc1f0();
      local_334 = (float)(fVar7 * (float10)local_334);
    }
    fVar7 = (float10)unaff_ESI;
    if ((fVar7 < (float10)0) && ((float10)0 < (float10)*(float *)(param_1 + 0x48))) {
      iStack_358 = 0x6156f6;
      fVar7 = (float10)FUN_00fdc1f0();
      fVar7 = fVar7 * (float10)unaff_ESI;
    }
    if (((float10)0 < fVar7) && ((float10)*(float *)(param_1 + 0x48) < (float10)0)) {
      iStack_358 = 0x615724;
      FUN_00fdc1f0();
    }
    if (*(int *)(param_1 + 0x54) == 0) {
      iStack_358 = 0x615745;
      fVar7 = (float10)FUN_00fdc1f0();
      local_334 = (float)(fVar7 * (float10)local_334);
    }
    if (*(int *)(param_1 + 0x58) == 0) {
      iStack_358 = 0x615762;
      FUN_00fdc1f0();
    }
    iStack_358 = param_2 + 0x10;
    pfStack_35c = &local_334;
    pfStack_360 = pfVar1;
    D3DXVec3TransformNormal();
    if ((fStack_344 < 0.7853982 != (fStack_344 == 0.7853982)) &&
       (!NAN(fStack_344) && -0.7853982 < fStack_344 != (fStack_344 == -0.7853982))) {
      fVar7 = (float10)FUN_00fdc1f0();
      *(float *)(param_2 + 0x13b0) = (float)(fVar7 * (float10)*(float *)(param_2 + 0x13b0));
    }
    if ((fStack_344 <= 0.43633232) && (-0.43633232 <= fStack_344)) {
      fVar7 = (float10)FUN_00fdc1f0();
      *(float *)(param_2 + 0x13b0) = (float)(fVar7 * (float10)*(float *)(param_2 + 0x13b0));
    }
    if ((*(byte *)(param_1 + 0x10) & 2) != 0) {
      fVar7 = (float10)FUN_00fdc1f0();
      *(float *)(param_2 + 0x13b0) = (float)(fVar7 * (float10)*(float *)(param_2 + 0x13b0));
      fVar7 = (float10)FUN_00fdc1f0();
      *pfVar1 = (float)(fVar7 * (float10)*pfVar1);
      *(float *)(param_2 + 0x13a8) = (float)(fVar7 * (float10)*(float *)(param_2 + 0x13a8));
    }
    fVar7 = (float10)0;
    if (0.0001 <= *(float *)(param_2 + 0x13a4) * *(float *)(param_2 + 0x13a4) + *pfVar1 * *pfVar1 +
                  *(float *)(param_2 + 0x13a8) * *(float *)(param_2 + 0x13a8)) {
      fVar7 = (float10)fpatan((float10)*pfVar1,(float10)*(float *)(param_2 + 0x13a8));
    }
    D3DXMatrixRotationY(auStack_80,(float)fVar7);
    D3DXMatrixInverse(auStack_c8,0,auStack_88);
    if (*(int *)(param_2 + 0x13b4) != 0) {
      FUN_004066f0();
      local_334 = 0.0;
      local_2e4 = auStack_2d4;
      fVar10 = 0.0;
      local_2f0 = 3.40282e+38;
      pfStack_33c = (float *)0x0;
      ppuStack_2f4 = hkpAllCdPointCollector::vftable;
      uStack_2dc = 0x80000008;
      iStack_2e0 = 0;
      FUN_00900350(&ppuStack_2f4);
      if ((0 < iStack_2e0) && (local_318 = 0.0, 0 < iStack_2e0)) {
        iStack_358 = 0;
        do {
          pfVar5 = (float *)(local_2e4 + iStack_358);
          fVar3 = pfVar5[10];
          if (*(char *)((int)fVar3 + 0x18) == '\x02') {
            iVar6 = (int)*(char *)((int)fVar3 + 0x10) + (int)fVar3;
          }
          else {
            iVar6 = 0;
          }
          if (*(char *)((int)fVar3 + 0x18) == '\x01') {
            iVar4 = (int)*(char *)((int)fVar3 + 0x10) + (int)fVar3;
          }
          else {
            iVar4 = 0;
          }
          if (((iVar6 == 0) && (iVar4 != 0)) &&
             (((byte)*(undefined4 *)(iVar4 + 0x2c) & 0x1f) != 0xb)) {
            fVar3 = pfVar5[7];
            *pfVar5 = fVar3 * pfVar5[4] + *pfVar5;
            pfVar5[1] = fVar3 * pfVar5[5] + pfVar5[1];
            pfVar5[2] = fVar3 * pfVar5[6] + pfVar5[2];
            pfVar5[3] = fVar3 * pfVar5[7] + pfVar5[3];
            pfVar5[4] = -pfVar5[4];
            pfVar5[5] = -pfVar5[5];
            pfVar5[6] = -pfVar5[6];
            pfVar5[7] = pfVar5[7];
            fVar3 = pfVar5[7];
            if (fVar3 < 0.0) {
              puStack_354 = (undefined1 *)(pfVar5[4] * fVar3);
              puStack_34c = (undefined1 *)(pfVar5[6] * fVar3);
              puStack_348 = (undefined1 *)(fVar3 * (float)puStack_348);
              pfStack_350 = (float *)0x0;
              fVar3 = *pfVar1 * *pfVar1;
              iVar6 = iStack_31c;
              if (0.0001 <= *(float *)(param_2 + 0x13a4) * *(float *)(param_2 + 0x13a4) + fVar3 +
                            *(float *)(param_2 + 0x13a8) * *(float *)(param_2 + 0x13a8)) {
                fVar7 = (float10)FUN_00ddbb50((*pfVar1 * (float)puStack_354 +
                                               *(float *)(param_2 + 0x13a4) * 0.0 +
                                              *(float *)(param_2 + 0x13a8) * (float)puStack_34c) /
                                              (SQRT(*(float *)(param_2 + 0x13a8) *
                                                    *(float *)(param_2 + 0x13a8) +
                                                    *(float *)(param_2 + 0x13a4) *
                                                    *(float *)(param_2 + 0x13a4) + fVar3) *
                                              SQRT((float)puStack_354 * (float)puStack_354 +
                                                   (float)puStack_34c * (float)puStack_34c)));
                pfStack_33c = (float *)(float)fVar7;
                if (((float10)1.5707964 < fVar7) && (fVar7 < (float10)2.7925267)) {
                  D3DXVec3TransformNormal(auStack_304,&puStack_354,auStack_d4);
                  fStack_308 = fStack_308 * 0.2;
                  D3DXVec3TransformNormal(&pfStack_360,auStack_310,auStack_e0);
                  fVar7 = (float10)(float)pfStack_33c;
                }
                iVar6 = iStack_31c;
                if (((float10)2.3561945 < fVar7) && (fVar7 < (float10)3.1415927)) {
                  *(float *)(iStack_31c + 8) = *(float *)(iStack_31c + 8) - (float)pfStack_35c * 5.0
                  ;
                  fVar7 = (float10)fpatan((float10)(float)puStack_354,(float10)(float)puStack_34c);
                  D3DXMatrixRotationY(auStack_154,(float)fVar7);
                  D3DXMatrixInverse(auStack_11c,0,auStack_15c);
                  D3DXVec3TransformNormal(&stack0xfffffcd8,pfVar1,auStack_128);
                  fVar7 = (float10)FUN_00fdc1f0();
                  *(float *)(param_2 + 0x13a8) =
                       (float)(fVar7 * (float10)*(float *)(param_2 + 0x13a8) * fVar7);
                  D3DXVec3TransformNormal(pfVar1,&local_334,auStack_174);
                }
              }
              pfStack_33c = (float *)0x1;
              local_334 = *(float *)(iVar6 + 0x5c) * (float)puStack_354 * 0.9 + local_334;
              fVar10 = *(float *)(iVar6 + 0x5c) * (float)puStack_34c * 0.9 + fVar10;
            }
          }
          iStack_358 = iStack_358 + 0x30;
          local_318 = (float)((int)local_318 + 1);
        } while ((int)local_318 < iStack_2e0);
      }
      D3DXMatrixInverse(auStack_114,0,param_2 + 0x10);
      D3DXVec3TransformNormal(auStack_320,&fStack_340,auStack_120);
      if (((*(float *)(iStack_31c + 0x34) * 0.1 < *(float *)(iStack_31c + 0x48)) &&
          (0.0 < fStack_30c)) && (pfStack_33c != (float *)0x0)) {
        puStack_354 = (undefined1 *)0x0;
        pfStack_350 = (float *)0x0;
        puStack_34c = (undefined1 *)(*(float *)(iStack_31c + 0x5c) * 0.9);
        D3DXVec3TransformNormal(&puStack_354,&puStack_354,param_2 + 0x10);
      }
      ppuStack_2f4 = hkpAllCdPointCollector::vftable;
      iStack_2e0 = 0;
      *pfVar1 = *pfVar1 + local_334;
      *(float *)(param_2 + 0x13a4) = *(float *)(param_2 + 0x13a4) + 0.0;
      *(float *)(param_2 + 0x13a8) = *(float *)(param_2 + 0x13a8) + fVar10;
      *(float *)(param_2 + 0x13ac) = unaff_EBX + *(float *)(param_2 + 0x13ac);
      if (-1 < (int)uStack_2dc) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_2e4,(uStack_2dc & 0x3fffffff) * 0x30);
      }
      local_2e4 = (undefined1 *)0x0;
      uStack_2dc = 0x80000000;
      ppuStack_2f4 = vftable;
      if (DAT_01885d68 != 1) {
        piVar2 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
        *piVar2 = *piVar2 + -1;
        if (((*piVar2 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
          FUN_00dd7320();
        }
      }
    }
    if (*(int *)(param_2 + 0x13c4) != 0) {
      FUN_004066f0();
      local_2f0 = 3.40282e+38;
      local_2e4 = auStack_2d4;
      ppuStack_2f4 = hkpAllCdPointCollector::vftable;
      uStack_2dc = 0x80000008;
      iStack_2e0 = 0;
      FUN_00900350(&ppuStack_2f4);
      if ((0 < iStack_2e0) && (pfStack_33c = (float *)0x0, 0 < iStack_2e0)) {
        iStack_358 = 0;
        do {
          pfVar5 = (float *)(local_2e4 + iStack_358);
          fVar10 = pfVar5[10];
          if (*(char *)((int)fVar10 + 0x18) == '\x02') {
            iVar6 = (int)*(char *)((int)fVar10 + 0x10) + (int)fVar10;
          }
          else {
            iVar6 = 0;
          }
          if (*(char *)((int)fVar10 + 0x18) == '\x01') {
            iVar4 = (int)*(char *)((int)fVar10 + 0x10) + (int)fVar10;
          }
          else {
            iVar4 = 0;
          }
          if ((iVar6 != 0) && (iVar4 == 0)) {
            fVar10 = pfVar5[7];
            *pfVar5 = fVar10 * pfVar5[4] + *pfVar5;
            pfVar5[1] = fVar10 * pfVar5[5] + pfVar5[1];
            pfVar5[2] = fVar10 * pfVar5[6] + pfVar5[2];
            pfVar5[3] = fVar10 * pfVar5[7] + pfVar5[3];
            pfVar5[4] = -pfVar5[4];
            pfVar5[5] = -pfVar5[5];
            pfVar5[6] = -pfVar5[6];
            pfVar5[7] = pfVar5[7];
            fVar7 = (float10)pfVar5[7];
            if (fVar7 < (float10)0) {
              local_334 = (float)((float10)pfVar5[4] * fVar7);
              fVar10 = (float)((float10)pfVar5[6] * fVar7);
              fVar8 = (float10)fpatan((float10)*pfVar1,(float10)*(float *)(param_2 + 0x13a8));
              fVar7 = (float10)fpatan((float10)pfVar5[6] * fVar7,(float10)pfVar5[4] * fVar7);
              fVar7 = (float10)FUN_00ddba30((float)(fVar8 - fVar7));
              if (((float10)1.5707964 < fVar7) || (fVar7 < (float10)-1.5707964)) {
                *pfVar1 = *pfVar1 - fVar10 * 0.04 * 0.9;
                *(float *)(param_2 + 0x13a8) = *(float *)(param_2 + 0x13a8) - local_334 * 0.04 * 0.9
                ;
              }
              else {
                *pfVar1 = fVar10 * 0.04 * 0.9 + *pfVar1;
                *(float *)(param_2 + 0x13a8) = local_334 * 0.04 * 0.9 + *(float *)(param_2 + 0x13a8)
                ;
              }
            }
          }
          iStack_358 = iStack_358 + 0x30;
          pfStack_33c = (float *)((int)pfStack_33c + 1);
        } while ((int)pfStack_33c < iStack_2e0);
      }
      ppuStack_2f4 = hkpAllCdPointCollector::vftable;
      iStack_2e0 = 0;
      if (-1 < (int)uStack_2dc) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_2e4,(uStack_2dc & 0x3fffffff) * 0x30);
      }
      local_2e4 = (undefined1 *)0x0;
      uStack_2dc = 0x80000000;
      ppuStack_2f4 = vftable;
      if (DAT_01885d68 != 1) {
        piVar2 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
        *piVar2 = *piVar2 + -1;
        if (((*piVar2 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
          FUN_00dd7320();
          return;
        }
      }
    }
  }
  return;
}


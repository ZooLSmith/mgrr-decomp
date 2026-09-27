// lib/havok/unit_008D07D0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008D07D0..008D07D0, 1 functions

#include "mgrr.h"
#include "hkpAllCdPointCollector.h"

// 008D07D0  hkpAllCdPointCollector::hkpAllCdPointCollector_11  size=1043  [run]
void __fastcall hkpAllCdPointCollector::hkpAllCdPointCollector_11(float param_1)

{
  int *piVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  float fVar6;
  float unaff_EBX;
  int iVar7;
  bool bVar8;
  float unaff_ESI;
  float unaff_EDI;
  int iVar9;
  int local_220;
  undefined1 auStack_21c [12];
  undefined4 local_210;
  undefined4 local_20c;
  int local_208;
  int iStack_204;
  undefined1 auStack_1fc [12];
  undefined1 local_1f0 [28];
  undefined **ppuStack_1d4;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  uint uStack_1bc;
  undefined **local_1b0;
  int local_1ac;
  int iStack_1a8;
  undefined1 *local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined1 local_190 [396];
  
  local_210 = 0;
  local_20c = 0;
  local_208 = 0;
  local_1a0 = local_190;
  local_1ac = 0x7f7fffee;
  local_1b0 = vftable;
  local_198 = 0x80000008;
  local_19c = 0;
  FUN_00900350(&local_1b0);
  fVar6 = (float)((int)param_1 + 0x10);
  D3DXMatrixInverse(local_1f0,0);
  FUN_00a7c950();
  if (0 < iStack_1a8) {
    unaff_EBX = 0.0;
    iStack_204 = 0;
    local_220 = 0;
    do {
      local_208 = local_1ac + local_220;
      iVar9 = *(int *)(local_208 + 0x28);
      if (*(char *)(iVar9 + 0x18) == '\x02') {
        iVar7 = *(char *)(iVar9 + 0x10) + iVar9;
      }
      else {
        iVar7 = 0;
      }
      if (*(char *)(iVar9 + 0x18) == '\x01') {
        iVar9 = *(char *)(iVar9 + 0x10) + iVar9;
      }
      else {
        iVar9 = 0;
      }
      bVar2 = true;
      if (iVar9 == 0) {
        if (iVar7 != 0) {
LAB_008d08e3:
          if ((DAT_01885d68 != 1) &&
             (iVar4 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4),
             *(int *)(iVar4 + 4) == 0)) {
            if ((*(int *)(iVar4 + 8) == 0) && ((DAT_01b35fac != 0 && (DAT_01885db8 == 0)))) {
              FUN_00dd72c0();
            }
            *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
          }
          if ((*(uint **)(iVar7 + 0xc) == (uint *)0x0) || ((**(uint **)(iVar7 + 0xc) & 0x100) == 0))
          {
            bVar8 = false;
          }
          else {
            bVar8 = true;
          }
          if ((DAT_01885d68 != 1) &&
             (iVar4 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4),
             *(int *)(iVar4 + 4) == 0)) {
            piVar1 = (int *)(iVar4 + 8);
            *piVar1 = *piVar1 + -1;
            if ((*piVar1 == 0) && ((DAT_01b35fac != 0 && (DAT_01885db8 == 0)))) {
              FUN_00dd7300();
            }
          }
          if (!bVar8) {
            bVar2 = false;
          }
          uVar3 = *(uint *)(iVar7 + 0xc);
          if ((uVar3 != 0) && ((*(uint *)((-(uint)(uVar3 != 0) & uVar3) + 8) & 0x8000) != 0)) {
            bVar2 = false;
          }
          goto LAB_008d09b6;
        }
      }
      else {
        uVar3 = *(uint *)(iVar9 + 0xc);
        if ((uVar3 != 0) && ((*(uint *)((-(uint)(uVar3 != 0) & uVar3) + 8) & 0x8000) != 0)) {
          bVar2 = false;
        }
        if (iVar7 != 0) goto LAB_008d08e3;
LAB_008d09b6:
        if (((((iVar9 == 0) || (uVar3 = FUN_00917cd0(iVar9), (uVar3 & 0x30000000) == 0)) ||
             (ABS(*(float *)(local_208 + 0x10) * 0.0 + *(float *)(local_208 + 0x14) +
                  *(float *)(local_208 + 0x18) * 0.0) <= 0.2)) &&
            ((bVar2 && (iVar4 = FUN_008b9780(auStack_21c,local_208,auStack_1fc), iVar4 != 0)))) &&
           (((iVar7 != 0 &&
             ((iVar4 = FUN_008f7780(iVar7), iVar4 != 0 && ((*(byte *)(iVar4 + 0x4c0) & 0x20) != 0)))
             ) || ((iVar9 != 0 &&
                   ((iVar4 = FUN_008f7780(iVar9), iVar4 != 0 &&
                    ((*(byte *)(iVar4 + 0x4c0) & 0x20) != 0)))))))) {
          *(undefined4 *)((int)unaff_ESI + 0x5428) = 1;
        }
      }
      if ((unaff_EBX == 0.0) &&
         (((((iVar7 == 0 || (iVar4 = FUN_008f7780(iVar7), iVar4 == 0)) ||
            ((*(byte *)(iVar4 + 0x4c0) & 0x20) == 0)) ||
           (unaff_EBX = (float)FUN_008f7f80(iVar7), unaff_EBX == 0.0)) &&
          (((iVar9 != 0 && (iVar7 = FUN_008f7780(iVar9), iVar7 != 0)) &&
           ((*(byte *)(iVar7 + 0x4c0) & 0x20) != 0)))))) {
        unaff_EBX = (float)FUN_008f7f80(iVar9);
      }
      local_220 = local_220 + 0x30;
      iStack_204 = iStack_204 + 1;
    } while (iStack_204 < iStack_1a8);
    param_1 = unaff_ESI;
    if (unaff_EBX != 0.0) {
      uVar5 = FUN_00a7c7f0();
      FUN_00a7c960(uVar5);
    }
  }
  D3DXVec3TransformNormal(auStack_21c,auStack_21c,auStack_1fc);
  D3DXVec3TransformNormal(&stack0xfffffdd8,&stack0xfffffdd8,(int)param_1 + 0x10);
  *(float *)((int)param_1 + 0x50) = *(float *)((int)param_1 + 0x50) + fVar6;
  *(float *)((int)param_1 + 0x54) = unaff_EDI + *(float *)((int)param_1 + 0x54);
  *(float *)((int)param_1 + 0x58) = unaff_ESI + *(float *)((int)param_1 + 0x58);
  *(float *)((int)param_1 + 0x5c) = unaff_EBX + *(float *)((int)param_1 + 0x5c);
  fVar6 = (float)FUN_00a12210(5);
  if (fVar6 != 0.0) {
    if ((*(int *)((int)fVar6 + 0xa8) != 0) && (fVar6 != param_1)) {
      FUN_008a5aa0(*(int *)((int)fVar6 + 0xa8));
    }
    if ((*(ushort *)((int)fVar6 + 0xa2) & 0x4002) == 0) {
      FUN_00ddb590((int)fVar6 + 0x60,(int)fVar6 + 0x90);
    }
    if ((*(ushort *)((int)fVar6 + 0xa2) & 0x8004) == 0) {
      FUN_00a15310();
    }
  }
  ppuStack_1d4 = vftable;
  uStack_1c0 = 0;
  if (-1 < (int)uStack_1bc) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(uStack_1c4,(uStack_1bc & 0x3fffffff) * 0x30);
  }
  return;
}


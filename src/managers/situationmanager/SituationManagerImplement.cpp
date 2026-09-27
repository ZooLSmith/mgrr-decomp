// src/managers/situationmanager/SituationManagerImplement.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C3D390..00C60BC0, 5 functions

#include "mgrr.h"
#include "SituationManagerImplement.h"

// 00C3D390  FUN_00c3d390  size=101  [callgraph]
undefined4 * __thiscall
FUN_00c3d390(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  *param_1 = param_2;
  FUN_00a7c930();
  param_1[2] = 0xffffffff;
  param_1[4] = *param_4;
  param_1[5] = param_4[1];
  param_1[6] = param_4[2];
  param_1[7] = param_4[3];
  if (param_3 != 0) {
    uVar1 = FUN_00a7c7f0();
    FUN_00a7c960(uVar1);
    iVar2 = FUN_00a7c8a0();
    param_1[2] = *(undefined4 *)(iVar2 + 0x4b4);
  }
  return param_1;
}

// 00C3D400  SituationManagerImplement::vf08  size=192  [class]
undefined4 __thiscall
SituationManagerImplement::vf08
          (int param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 *puVar1;
  
  if ((DAT_01bea070 & 0x1000) != 0) {
    return 1;
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    return 0;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 8);
  if (*(int *)(param_1 + 0x20) != 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  puVar1 = (undefined4 *)FUN_00dd3500(0x20,*(undefined4 *)(param_1 + 4));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_2;
    FUN_00a7c930();
    puVar1[2] = param_3;
    puVar1[4] = *param_4;
    puVar1[5] = param_4[1];
    puVar1[6] = param_4[2];
    puVar1[7] = param_4[3];
    param_2 = puVar1;
    if (*(int *)(param_1 + 0x28) != 0) {
      (**(code **)(**(int **)(param_1 + 0x28) + 8))(&param_2);
    }
    if (*(int *)(param_1 + 0x20) != 0) {
      LeaveCriticalSection(lpCriticalSection);
    }
    return 1;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return 0;
}

// 00C3D4C0  SituationManagerImplement::vf04  size=165  [class]
undefined4 __thiscall
SituationManagerImplement::vf04(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  
  if ((DAT_01bea070 & 0x1000) != 0) {
    return 1;
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    return 0;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 8);
  if (*(int *)(param_1 + 0x20) != 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  iVar1 = FUN_00dd3500(0x20,*(undefined4 *)(param_1 + 4));
  if (iVar1 != 0) {
    iVar1 = FUN_00c3d390(param_2,param_3,param_4);
    if (iVar1 != 0) {
      param_4 = iVar1;
      if (*(int *)(param_1 + 0x28) != 0) {
        (**(code **)(**(int **)(param_1 + 0x28) + 8))(&param_4);
      }
      if (*(int *)(param_1 + 0x20) != 0) {
        LeaveCriticalSection(lpCriticalSection);
      }
      return 1;
    }
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return 0;
}

// 00C60B90  SituationManagerImplement::vf0C  size=30  [class]
undefined4 __thiscall SituationManagerImplement::vf0C(undefined4 param_1,byte param_2)

{
  SituationManager::SituationManager();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C60BC0  SituationManagerImplement::vf00  size=2055  [class]
void __fastcall SituationManagerImplement::vf00(float param_1)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  int *piVar9;
  undefined4 *puVar10;
  int iVar11;
  int *piVar12;
  float10 fVar13;
  undefined *puVar14;
  float fStack_114;
  float local_110;
  float local_10c;
  float local_108;
  undefined4 local_104;
  float fStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  uint uStack_dc;
  undefined4 uStack_d8;
  float local_d4;
  float fStack_d0;
  float fStack_cc;
  int iStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b4;
  int iStack_b0;
  float fStack_ac;
  undefined4 uStack_a8;
  int iStack_a4;
  float fStack_a0;
  int iStack_9c;
  float fStack_98;
  int iStack_94;
  float fStack_90;
  int iStack_8c;
  float fStack_88;
  float afStack_84 [2];
  float fStack_7c;
  float fStack_78;
  float fStack_70;
  float fStack_6c;
  LPCRITICAL_SECTION p_Stack_68;
  LPCRITICAL_SECTION local_64 [4];
  undefined1 auStack_54 [80];
  
  if ((DAT_01bea070 & 0x1000) == 0) {
    local_64[0] = (LPCRITICAL_SECTION)((int)param_1 + 8);
    local_10c = param_1;
    if (*(int *)((int)param_1 + 0x20) != 0) {
      EnterCriticalSection(local_64[0]);
    }
    piVar9 = *(int **)(*(int *)((int)param_1 + 0x28) + 4);
    if (piVar9 != piVar9 + *(int *)(*(int *)((int)param_1 + 0x28) + 8)) {
      do {
        puVar10 = (undefined4 *)*piVar9;
        puVar5 = (undefined4 *)FUN_00d72b30();
        iVar6 = (**(code **)*puVar5)(&local_110,&local_104,&local_d4,&local_108,puVar10[2],*puVar10)
        ;
        if (iVar6 != 0) {
          uStack_f4 = 0;
          iStack_b0 = puVar10[4];
          fStack_d0 = local_108;
          fStack_ac = (float)puVar10[5];
          uStack_ec = 0xffffffff;
          uStack_e8 = 0xffffffff;
          uStack_a8 = puVar10[6];
          uStack_e4 = 0xfffffffe;
          uStack_e0 = 0;
          iStack_c8 = puVar10[4];
          uStack_dc = 0xffffffff;
          fStack_c4 = (float)puVar10[5];
          iStack_a4 = -1;
          fStack_c0 = (float)puVar10[6];
          uStack_d8 = 0x1010000;
          uStack_f0 = 0xffffffff;
          fStack_cc = 2.8026e-45;
          fStack_bc = local_110;
          uStack_f8 = local_104;
          iVar6 = FUN_00a81330();
          if (iVar6 == 0) {
            uVar7 = 0;
          }
          else {
            uVar7 = FUN_00a7c8a0();
          }
          FUN_00c5e350(uVar7,&uStack_f8,&fStack_d0);
        }
        FUN_00dd4920(puVar10);
        iVar6 = *(int *)((int)local_10c + 0x28);
        uVar2 = *(uint *)(iVar6 + 8);
        iVar11 = *(int *)(iVar6 + 4);
        piVar12 = (int *)(iVar11 + uVar2 * 4);
        if ((((piVar9 != piVar12) && (iVar11 != 0)) && (uVar2 != 0)) &&
           ((uint)((int)piVar9 - iVar11 >> 2) < uVar2)) {
          for (piVar8 = piVar9; piVar8 != piVar12 + -1; piVar8 = piVar8 + 1) {
            *piVar8 = piVar8[1];
          }
          *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + -1;
          piVar12 = piVar9;
        }
        piVar9 = piVar12;
      } while (piVar12 !=
               (int *)(*(int *)(*(int *)((int)local_10c + 0x28) + 4) +
                      *(int *)(*(int *)((int)local_10c + 0x28) + 8) * 4));
    }
    iVar6 = (**(code **)(*DAT_01bea100 + 0x28))(0);
    if ((iVar6 == 0) || (piVar9 = (int *)FUN_00a7c8a0(), piVar9 == (int *)0x0)) {
      piVar9 = (int *)0x0;
    }
    else {
      puVar14 = &DAT_01be9db8;
      (**(code **)(*piVar9 + 4))(&DAT_01be9db8);
      iVar6 = FUN_00dd6d80(puVar14);
      piVar9 = (int *)(-(uint)(iVar6 != 0) & (uint)piVar9);
    }
    fStack_114 = DAT_01bebdbc;
    if (DAT_01bebdbc != DAT_01bebdc0) {
      do {
        FUN_00a7c940(fStack_114);
        iVar6 = FUN_00a81330();
        if (((iVar6 != 0) && (iVar6 = FUN_00a7c7e0(), iVar6 != 0)) &&
           ((piVar9 != (int *)0x0 && ((DAT_01bea094 & 0x20000) == 0)))) {
          puVar10 = (undefined4 *)FUN_00d72b30();
          iVar6 = FUN_00a7c8a0();
          iVar6 = (**(code **)*puVar10)
                            (&local_10c,&local_104,&local_110,&fStack_100,
                             *(undefined4 *)(iVar6 + 0x4b0),7);
          if (((iVar6 != 0) && (0.0 < local_110)) && (iVar6 = FUN_00416910(0x19), iVar6 == 0)) {
            uVar7 = FUN_00a7c8a0();
            iVar6 = FUN_00445b60(uVar7);
            if (iVar6 != 0) {
              fVar1 = *(float *)(iVar6 + 0x40) - (float)piVar9[0x10];
              fVar4 = *(float *)(iVar6 + 0x44) - (float)piVar9[0x11];
              fVar3 = *(float *)(iVar6 + 0x48) - (float)piVar9[0x12];
              if (((SQRT(fVar1 * fVar1 + fVar4 * fVar4 + fVar3 * fVar3) <= local_10c) &&
                  (iVar11 = (**(code **)(*piVar9 + 0x3ec))(), iVar11 != 0)) &&
                 ((iVar11 = FUN_00416910(6), iVar11 == 0 &&
                  (iVar11 = (**(code **)(*piVar9 + 0x368))(), iVar11 == 0)))) {
                iStack_a4 = piVar9[0x10];
                fStack_a0 = (float)piVar9[0x11] + 1.8;
                iStack_9c = piVar9[0x12];
                fStack_98 = (float)piVar9[0x13] + fStack_78;
                iStack_94 = *(int *)(iVar6 + 0x40);
                fStack_90 = *(float *)(iVar6 + 0x44) + 1.8;
                iStack_8c = *(int *)(iVar6 + 0x48);
                fStack_88 = fStack_78 + *(float *)(iVar6 + 0x4c);
                FUN_00445d40(&iStack_94,&iStack_a4,3,0,0x1c,0,"dashSense",0);
                iVar11 = RayCastSingleHitWork::RayCastSingleHitWork_2(afStack_84,0,0,0,auStack_54);
                if (iVar11 == 0) {
                  FUN_00c14dc0();
                  if (local_110 <= *(float *)(iVar6 + 0xd8c)) {
                    *(undefined4 *)(iVar6 + 0xd8c) = 0;
                    FUN_0040e950();
                    uStack_f8 = 0;
                    fStack_b4 = (float)piVar9[0x10];
                    iStack_b0 = piVar9[0x11];
                    uStack_a8 = 0xffffffff;
                    uStack_f4 = 0xffffffff;
                    fStack_ac = (float)piVar9[0x12];
                    uStack_ec = 0xffffffff;
                    fStack_cc = (float)piVar9[0x10];
                    iStack_c8 = piVar9[0x11];
                    fStack_c4 = (float)piVar9[0x12];
                    local_d4 = fStack_100;
                    uStack_dc = uStack_dc & 0xffff0000;
                    fStack_d0 = 2.8026e-45;
                    fStack_c0 = local_10c;
                    uStack_fc = local_104;
                    FUN_00c5e350(piVar9,&uStack_fc,&local_d4);
                  }
                  goto LAB_00c61046;
                }
              }
              FUN_00c14de0();
            }
          }
        }
LAB_00c61046:
        fStack_114 = *(float *)((int)fStack_114 + 8);
      } while (fStack_114 != DAT_01bebdc0);
    }
    local_110 = DAT_01bebdbc;
    if (DAT_01bebdbc != DAT_01bebdc0) {
      do {
        FUN_00a7c940(local_110);
        iVar6 = FUN_00a81330();
        if (((iVar6 != 0) && (iVar6 = FUN_00a7c7e0(), iVar6 != 0)) &&
           ((piVar9 != (int *)0x0 && ((DAT_01bea094 & 0x20000) == 0)))) {
          puVar10 = (undefined4 *)FUN_00d72b30();
          iVar6 = FUN_00a7c8a0();
          iVar6 = (**(code **)*puVar10)
                            (&fStack_100,&uStack_d8,&local_10c,&fStack_70,
                             *(undefined4 *)(iVar6 + 0x4b0),8);
          if ((iVar6 != 0) && (0.0 < local_10c)) {
            uVar7 = FUN_00a7c8a0();
            iVar6 = FUN_00445b60(uVar7);
            if (iVar6 != 0) {
              fStack_114 = fStack_100;
              if (*(int *)(iVar6 + 0x764) != 0) {
                fStack_6c = *(float *)(*(int *)(iVar6 + 0x764) + 0xfc);
                fVar1 = *(float *)(piVar9[0x1d9] + 0xfc);
                fVar13 = (float10)hkBaseObject::hkBaseObject_209();
                local_108 = (float)fVar13;
                fVar13 = (float10)hkBaseObject::hkBaseObject_209();
                fStack_114 = (float)(((float10)fVar1 + (float10)fStack_6c +
                                     fVar13 + (float10)local_108) * (float10)1.1);
                iVar11 = (**(code **)(*piVar9 + 0x368))();
                if (iVar11 != 0) {
                  fStack_114 = fStack_114 + 0.6;
                }
              }
              FUN_004fc8e0(afStack_84,piVar9,5);
              fVar4 = *(float *)(iVar6 + 0x40) - afStack_84[0];
              fVar1 = *(float *)(iVar6 + 0x44) - (float)piVar9[0x11];
              fVar3 = *(float *)(iVar6 + 0x48) - fStack_7c;
              if (((SQRT(fVar1 * fVar1 + fVar4 * fVar4 + fVar3 * fVar3) <= fStack_114) &&
                  (iVar11 = (**(code **)(*piVar9 + 0x330))(), iVar11 == 0)) &&
                 (iVar11 = FUN_00416910(6), iVar11 == 0)) {
                iStack_94 = piVar9[0x10];
                fStack_90 = (float)piVar9[0x11] + 1.8;
                iStack_8c = piVar9[0x12];
                fStack_88 = (float)piVar9[0x13] + fStack_78;
                iStack_a4 = *(int *)(iVar6 + 0x40);
                fStack_a0 = *(float *)(iVar6 + 0x44) + 1.8;
                iStack_9c = *(int *)(iVar6 + 0x48);
                fStack_98 = fStack_78 + *(float *)(iVar6 + 0x4c);
                FUN_00445d40(&iStack_a4,&iStack_94,3,0,0x1c,0,"touchSense",0);
                iVar11 = RayCastSingleHitWork::RayCastSingleHitWork_2(local_64,0,0,0,auStack_54);
                if (iVar11 == 0) {
                  FUN_00c14e30();
                  if ((local_10c <= *(float *)(iVar6 + 0xd90)) ||
                     (local_10c <= *(float *)(iVar6 + 0xd8c))) {
                    *(undefined4 *)(iVar6 + 0xd90) = 0;
                    FUN_0040e950();
                    uStack_f8 = 0;
                    fStack_b4 = afStack_84[0];
                    uStack_a8 = 0xffffffff;
                    uStack_f4 = 0xffffffff;
                    fStack_ac = fStack_7c;
                    uStack_ec = 0xffffffff;
                    iStack_b0 = *(int *)(iVar6 + 0x44);
                    iStack_c8 = *(int *)(iVar6 + 0x44);
                    fStack_cc = afStack_84[0];
                    uStack_dc = uStack_dc & 0xffff0000;
                    local_d4 = fStack_70;
                    fStack_d0 = 2.8026e-45;
                    fStack_c4 = fStack_7c;
                    fStack_c0 = fStack_114;
                    uStack_fc = uStack_d8;
                    FUN_00c5e350(piVar9,&uStack_fc,&local_d4);
                  }
                  goto LAB_00c61395;
                }
              }
              FUN_00c14e50();
            }
          }
        }
LAB_00c61395:
        local_110 = *(float *)((int)local_110 + 8);
      } while (local_110 != DAT_01bebdc0);
    }
    if (p_Stack_68[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
      LeaveCriticalSection(p_Stack_68);
    }
  }
  return;
}


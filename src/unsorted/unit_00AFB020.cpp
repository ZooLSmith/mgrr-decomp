// src/unsorted/unit_00AFB020.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00AFB020..00AFB7A0, 4 functions

#include "types.h"

// 00AFB020  FUN_00afb020  size=645  [run]
undefined4 __thiscall
FUN_00afb020(int param_1,float *param_2,undefined4 param_3,float param_4,float param_5,float param_6
            )

{
  undefined4 *puVar1;
  float *pfVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  float10 fVar6;
  float10 fVar7;
  undefined4 local_74;
  float local_70;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  undefined4 local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  
  local_50 = *(float *)(param_1 + 0x40);
  iVar3 = *(int *)(param_1 + 0xa84);
  local_4c = *(float *)(param_1 + 0x44);
  local_48 = *(float *)(param_1 + 0x48);
  local_44 = *(float *)(param_1 + 0x4c);
  local_74 = 0;
  if (iVar3 != 0) {
    local_50 = *(float *)(iVar3 + 0x40);
    local_4c = *(float *)(iVar3 + 0x44);
    local_48 = *(float *)(iVar3 + 0x48);
    local_44 = *(float *)(iVar3 + 0x4c);
  }
  local_50 = local_50 + 5.0;
  local_24 = 0;
  local_20 = (undefined4 *)0x0;
  local_1c = 0;
  local_4c = local_4c + 5.0;
  local_18 = 0;
  local_14 = 0;
  local_48 = local_48 + 5.0;
  local_44 = local_44 + 5.0;
  local_40 = *(float *)(param_1 + 0x40);
  local_38 = *(float *)(param_1 + 0x48);
  local_34 = *(undefined4 *)(param_1 + 0x4c);
  local_3c = *(float *)(param_1 + 0x44) + 5.0;
  local_70 = 3.1415927;
  FUN_004fbe50(0x100,&DAT_01b7bd48);
  uVar5 = 0;
  if ((*(int *)(param_1 + 0x7d8) != 0) && (*(int *)(*(int *)(param_1 + 0x7d8) + 0x810) != 0)) {
    FUN_00c6e0b0(&local_24,param_3);
    puVar1 = local_20 + local_18;
    if (local_20 == puVar1) {
      uVar5 = 0;
    }
    else {
      puVar4 = local_20;
      do {
        pfVar2 = (float *)*puVar4;
        local_60 = *pfVar2;
        local_58 = pfVar2[2];
        local_54 = 1.0;
        local_5c = pfVar2[1] + 5.0;
        fVar6 = (float10)fpatan((float10)local_60 - (float10)local_40,
                                (float10)local_58 - (float10)local_38);
        fVar6 = (float10)FUN_00ddba30((float)(fVar6 - (float10)param_4));
        fVar7 = fVar6 * fVar6;
        if ((((fVar7 < (float10)(param_5 * param_5) != (fVar7 == (float10)(param_5 * param_5))) &&
             (param_6 * param_6 <
              (local_3c - local_5c) * (local_3c - local_5c) +
              (local_40 - local_60) * (local_40 - local_60) +
              (local_38 - local_58) * (local_38 - local_58))) &&
            (iVar3 = RayCastSingleHitWork::RayCastSingleHitWork_4
                               (0,0,0,0,&local_40,&local_60,0x1e,"em0200_ray"),
            (float)fVar7 < local_70 * local_70)) && (iVar3 == 0)) {
          local_74 = 1;
          local_50 = local_60;
          local_4c = local_5c;
          local_48 = local_58;
          local_44 = local_54;
          local_70 = (float)fVar6;
        }
        puVar4 = puVar4 + 1;
        uVar5 = local_74;
      } while (puVar4 != puVar1);
    }
  }
  if (local_20 != (undefined4 *)0x0) {
    local_18 = 0;
    if (local_14 != 0) {
      FUN_00dd48d0(local_20,0);
      local_14 = 0;
    }
    local_20 = (undefined4 *)0x0;
    local_1c = 0;
  }
  *param_2 = local_50;
  param_2[1] = local_4c - 5.0;
  param_2[2] = local_48;
  param_2[3] = local_44;
  if ((local_20 != (undefined4 *)0x0) && (local_18 = 0, local_14 != 0)) {
    FUN_00dd48d0(local_20,0);
  }
  return uVar5;
}

// 00AFB2B0  FUN_00afb2b0  size=1159  [run]
/* WARNING: Removing unreachable block (ram,0x00afb45d) */
/* WARNING: Removing unreachable block (ram,0x00afb5e0) */

void FUN_00afb2b0(float param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  float unaff_ESI;
  float **ppfVar4;
  float **ppfVar5;
  float fVar6;
  float *pfVar7;
  float fVar8;
  float *pfStack_64;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  float local_4;
  
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0.0;
  pfStack_64 = (float *)0xafb2cf;
  pfStack_64 = (float *)FUN_00a1d5c0();
  FUN_0041c8e0(8);
  local_38 = *param_2;
  local_34 = param_2[1];
  local_30 = param_2[2];
  if (local_8 < local_c) {
    pfVar7 = (float *)(local_10 + local_8 * 0xc);
    if (pfVar7 != (float *)0x0) {
      *pfVar7 = local_38;
      pfVar7[1] = local_34;
      pfVar7[2] = local_30;
    }
    local_8 = local_8 + 1;
  }
  local_44 = *param_3;
  local_40 = param_3[1];
  local_3c = param_3[2];
  local_20 = local_44 - local_38;
  local_1c = local_40 - local_34;
  local_18 = local_3c - local_30;
  param_2 = (float *)0x41f00000;
  if (60.0 < SQRT(local_20 * local_20 + local_1c * local_1c + local_18 * local_18)) {
    param_2 = (float *)0x420c0000;
  }
  local_50 = (local_38 + local_44) * 0.5;
  local_48 = (local_3c + local_30) * 0.5;
  local_4c = local_34 + (float)param_2;
  local_20 = local_20 * 0.16666667;
  local_1c = local_1c * 0.16666667;
  local_18 = local_18 * 0.16666667;
  local_2c = local_50 - local_20;
  local_28 = local_4c - local_1c;
  local_24 = local_48 - local_18;
  local_5c = local_2c - local_38;
  local_58 = local_28 - local_34;
  local_54 = local_24 - local_30;
  fVar6 = local_54 * local_54 + local_5c * local_5c + local_58 * local_58;
  if (fVar6 < 0.0 != (fVar6 == 0.0)) {
    pfStack_64 = (float *)&DAT_0163d0ac;
    FUN_00dd5650();
    local_5c = 0.0;
    local_58 = 1.0;
    local_54 = 0.0;
  }
  pfVar7 = &local_5c;
  pfStack_64 = pfVar7;
  D3DXVec3Normalize();
  iVar2 = local_10;
  if (local_10 < local_14) {
    pfVar1 = (float *)((int)local_18 + local_10 * 0xc);
    if (pfVar1 != (float *)0x0) {
      *pfVar1 = (float)pfStack_64 * param_1 + local_40;
      pfVar1[1] = unaff_ESI * param_1 + local_3c;
      pfVar1[2] = local_5c * param_1 + local_38;
    }
    iVar2 = local_10 + 1;
    if (iVar2 < local_14) {
      pfVar1 = (float *)((int)local_18 + iVar2 * 0xc);
      if (pfVar1 != (float *)0x0) {
        *pfVar1 = local_34;
        pfVar1[1] = local_30;
        pfVar1[2] = local_2c;
      }
      iVar2 = local_10 + 2;
      if (iVar2 < local_14) {
        pfVar1 = (float *)((int)local_18 + iVar2 * 0xc);
        if (pfVar1 != (float *)0x0) {
          *pfVar1 = local_58;
          pfVar1[1] = local_54;
          pfVar1[2] = local_50;
        }
        iVar2 = local_10 + 3;
      }
    }
  }
  local_10 = iVar2;
  local_34 = local_28 + local_58;
  local_30 = local_24 + local_54;
  local_2c = local_20 + local_50;
  pfStack_64 = (float *)(local_4c - local_34);
  local_5c = local_44 - local_2c;
  fVar6 = local_5c * local_5c +
          (float)pfStack_64 * (float)pfStack_64 + (local_48 - local_30) * (local_48 - local_30);
  if (fVar6 < 0.0 != (fVar6 == 0.0)) {
    FUN_00dd5650(&DAT_0163d0ac);
    pfStack_64 = (float *)0x0;
    local_5c = 0.0;
  }
  ppfVar4 = &pfStack_64;
  ppfVar5 = ppfVar4;
  D3DXVec3Normalize(ppfVar4);
  fVar6 = (float)ppfVar5 * local_4;
  fVar8 = (float)pfVar7 * local_4;
  pfStack_64 = (float *)((float)pfStack_64 * local_4);
  fVar3 = local_18;
  if ((int)local_18 < (int)local_1c) {
    pfVar7 = (float *)((int)local_20 + (int)local_18 * 0xc);
    if (pfVar7 != (float *)0x0) {
      *pfVar7 = local_3c;
      pfVar7[1] = local_38;
      pfVar7[2] = local_34;
    }
    fVar3 = (float)((int)local_18 + 1);
    if ((int)fVar3 < (int)local_1c) {
      pfVar7 = (float *)((int)local_20 + (int)fVar3 * 0xc);
      if (pfVar7 != (float *)0x0) {
        *pfVar7 = local_54 - fVar6;
        pfVar7[1] = local_50 - fVar8;
        pfVar7[2] = local_4c - (float)pfStack_64;
      }
      fVar3 = (float)((int)local_18 + 2);
      if ((int)fVar3 < (int)local_1c) {
        pfVar7 = (float *)((int)local_20 + (int)fVar3 * 0xc);
        if (pfVar7 == (float *)0x0) {
          fVar3 = (float)((int)local_18 + 3);
        }
        else {
          *pfVar7 = local_54;
          pfVar7[1] = local_50;
          pfVar7[2] = local_4c;
          fVar3 = (float)((int)local_18 + 3);
        }
      }
    }
  }
  local_18 = fVar3;
  FUN_00a5e090(&local_24);
  if ((local_20 != 0.0) && (local_18 = 0.0, local_14 != 0)) {
    FUN_00dd48d0(local_20,0,ppfVar4,fVar6,fVar8);
  }
  return;
}

// 00AFB740  FUN_00afb740  size=90  [run]
void FUN_00afb740(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 local_160 [348];
  
  uVar2 = 0;
  uVar1 = FUN_00a7c8a0(0);
  FUN_004039a0(0xce,uVar1,uVar2);
  FUN_00dffb20(param_1);
  FUN_00dffbc0(param_2);
  FUN_00a8c930(0,local_160);
  return;
}

// 00AFB7A0  FUN_00afb7a0  size=2664  [run]
void __fastcall FUN_00afb7a0(int *param_1)

{
  uint *puVar1;
  byte bVar2;
  code *pcVar3;
  undefined2 uVar4;
  int iVar5;
  int *piVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  char *pcVar11;
  byte *pbVar12;
  bool bVar13;
  undefined *puVar14;
  undefined4 uVar15;
  int iStack_1f8;
  int iStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined1 auStack_1e0 [336];
  undefined1 auStack_90 [140];
  
  (**(code **)(*param_1 + 0x318))();
  param_1[0x730] = 1;
  param_1[0x554] = 1;
  param_1[0x555] = 1;
  param_1[0x553] = 1;
  param_1[0x377] = 1;
  param_1[0x378] = 1;
  iVar5 = FUN_00a81330();
  if ((iVar5 != 0) && (piVar6 = (int *)FUN_00a7c8a0(), piVar6 != (int *)0x0)) {
    puVar14 = &DAT_01be9db8;
    (**(code **)(*piVar6 + 4))(&DAT_01be9db8);
    FUN_00dd6d80(puVar14);
  }
  param_1[0x374] = 1;
  if (param_1[0x187] == 0) {
    iVar5 = param_1[0x186];
    param_1[0x187] = 1;
    uVar4 = 0xc2;
    if (iVar5 == 0x33) {
      uVar4 = 0xc3;
    }
    if (iVar5 == 0x34) {
      uVar4 = 0xc5;
    }
    if (iVar5 == 0x35) {
      uVar4 = 0xc4;
    }
    FUN_00aa4080(uVar4,0,0x3e2aaaab,0x3f800000,0,0,0x3f800000);
    iVar5 = FUN_00a81330();
    if (iVar5 != 0) {
      FUN_00a805f0();
    }
    FUN_00a7c950();
    FUN_0040b190();
    iStack_1f4 = 0;
    if (param_1[0x370] == 0x12) {
      iStack_1f4 = FUN_00a82090("Em0200 Head",0x20209,auStack_90);
      iStack_1f8 = 0;
      if (0 < (short)param_1[0xc9]) {
        iVar5 = 0;
        do {
          pbVar7 = *(byte **)(*(int *)(iVar5 + 0x60 + param_1[200]) + 0x40);
          if (pbVar7 != (byte *)0x0) {
            pcVar11 = "head_top";
            do {
              bVar2 = *pbVar7;
              bVar13 = bVar2 < (byte)*pcVar11;
              if (bVar2 != *pcVar11) {
LAB_00afb936:
                iVar8 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
                goto LAB_00afb93b;
              }
              if (bVar2 == 0) break;
              bVar2 = pbVar7[1];
              bVar13 = bVar2 < (byte)pcVar11[1];
              if (bVar2 != pcVar11[1]) goto LAB_00afb936;
              pbVar7 = pbVar7 + 2;
              pcVar11 = pcVar11 + 2;
            } while (bVar2 != 0);
            iVar8 = 0;
LAB_00afb93b:
            if (iVar8 == 0) {
              puVar1 = (uint *)(iVar5 + param_1[200] + 0x38);
              *puVar1 = *puVar1 & 0xfffffffe;
            }
          }
          iStack_1f8 = iStack_1f8 + 1;
          iVar5 = iVar5 + 0x70;
        } while (iStack_1f8 < (short)param_1[0xc9]);
      }
      iStack_1f8 = 0;
      if (0 < (short)param_1[0xc9]) {
        iVar5 = 0;
        do {
          pbVar7 = *(byte **)(*(int *)(iVar5 + 0x60 + param_1[200]) + 0x40);
          if (pbVar7 != (byte *)0x0) {
            pcVar11 = "in_head_top";
            do {
              bVar2 = *pbVar7;
              bVar13 = bVar2 < (byte)*pcVar11;
              if (bVar2 != *pcVar11) {
LAB_00afb9a8:
                iVar8 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
                goto LAB_00afb9ad;
              }
              if (bVar2 == 0) break;
              bVar2 = pbVar7[1];
              bVar13 = bVar2 < (byte)pcVar11[1];
              if (bVar2 != pcVar11[1]) goto LAB_00afb9a8;
              pbVar7 = pbVar7 + 2;
              pcVar11 = pcVar11 + 2;
            } while (bVar2 != 0);
            iVar8 = 0;
LAB_00afb9ad:
            if (iVar8 == 0) {
              puVar1 = (uint *)(iVar5 + param_1[200] + 0x38);
              *puVar1 = *puVar1 | 1;
            }
          }
          iStack_1f8 = iStack_1f8 + 1;
          iVar5 = iVar5 + 0x70;
        } while (iStack_1f8 < (short)param_1[0xc9]);
      }
    }
    if (param_1[0x370] == 0x15) {
      iStack_1f4 = FUN_00a82090("Em0200 Tail",0x20202,auStack_90);
      iStack_1f8 = 0;
      if (0 < (short)param_1[0xc9]) {
        iVar5 = 0;
        do {
          iVar8 = param_1[200];
          iVar9 = *(int *)(*(int *)(iVar8 + 0x60 + iVar5) + 0x40);
          if ((iVar9 != 0) && (iVar9 = FUN_00fdbbd0(iVar9,"back_tail"), iVar9 != 0)) {
            puVar1 = (uint *)(iVar8 + 0x38 + iVar5);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
          iStack_1f8 = iStack_1f8 + 1;
          iVar5 = iVar5 + 0x70;
        } while (iStack_1f8 < (short)param_1[0xc9]);
      }
      iStack_1f8 = 0;
      if (0 < (short)param_1[0xc9]) {
        iVar5 = 0;
        do {
          iVar8 = param_1[200];
          iVar9 = *(int *)(*(int *)(iVar8 + 0x60 + iVar5) + 0x40);
          if ((iVar9 != 0) && (iVar9 = FUN_00fdbbd0(iVar9,"front_tail"), iVar9 != 0)) {
            puVar1 = (uint *)(iVar8 + 0x38 + iVar5);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
          iStack_1f8 = iStack_1f8 + 1;
          iVar5 = iVar5 + 0x70;
        } while (iStack_1f8 < (short)param_1[0xc9]);
      }
    }
    if (param_1[0x370] == 0x16) {
      iStack_1f4 = FUN_00a82090("Em0200 LFoot",0x20207,auStack_90);
      iVar5 = 0;
      iStack_1f8 = 0;
      if (0 < (short)param_1[0xc9]) {
        do {
          pbVar7 = *(byte **)(*(int *)(iVar5 + 0x60 + param_1[200]) + 0x40);
          if (pbVar7 != (byte *)0x0) {
            pbVar12 = (byte *)0x16413a4;
            do {
              bVar2 = *pbVar7;
              bVar13 = bVar2 < *pbVar12;
              if (bVar2 != *pbVar12) {
LAB_00afbb20:
                iVar8 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
                goto LAB_00afbb25;
              }
              if (bVar2 == 0) break;
              bVar2 = pbVar7[1];
              bVar13 = bVar2 < pbVar12[1];
              if (bVar2 != pbVar12[1]) goto LAB_00afbb20;
              pbVar7 = pbVar7 + 2;
              pbVar12 = pbVar12 + 2;
            } while (bVar2 != 0);
            iVar8 = 0;
LAB_00afbb25:
            if (iVar8 == 0) {
              puVar1 = (uint *)(iVar5 + param_1[200] + 0x38);
              *puVar1 = *puVar1 & 0xfffffffe;
            }
          }
          iStack_1f8 = iStack_1f8 + 1;
          iVar5 = iVar5 + 0x70;
        } while (iStack_1f8 < (short)param_1[0xc9]);
      }
      iStack_1f8 = 0;
      if (0 < (short)param_1[0xc9]) {
        iVar5 = 0;
        do {
          pbVar7 = *(byte **)(*(int *)(iVar5 + 0x60 + param_1[200]) + 0x40);
          if (pbVar7 != (byte *)0x0) {
            pcVar11 = "in_L_reg";
            do {
              bVar2 = *pbVar7;
              bVar13 = bVar2 < (byte)*pcVar11;
              if (bVar2 != *pcVar11) {
LAB_00afbb92:
                iVar8 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
                goto LAB_00afbb97;
              }
              if (bVar2 == 0) break;
              bVar2 = pbVar7[1];
              bVar13 = bVar2 < (byte)pcVar11[1];
              if (bVar2 != pcVar11[1]) goto LAB_00afbb92;
              pbVar7 = pbVar7 + 2;
              pcVar11 = pcVar11 + 2;
            } while (bVar2 != 0);
            iVar8 = 0;
LAB_00afbb97:
            if (iVar8 == 0) {
              puVar1 = (uint *)(iVar5 + param_1[200] + 0x38);
              *puVar1 = *puVar1 | 1;
            }
          }
          iStack_1f8 = iStack_1f8 + 1;
          iVar5 = iVar5 + 0x70;
        } while (iStack_1f8 < (short)param_1[0xc9]);
      }
    }
    if (param_1[0x370] == 0x18) {
      iStack_1f4 = FUN_00a82090("Em0200 RFoot",0x20206,auStack_90);
      iStack_1f8 = 0;
      if (0 < (short)param_1[0xc9]) {
        iVar5 = 0;
        do {
          pbVar7 = *(byte **)(*(int *)(iVar5 + 0x60 + param_1[200]) + 0x40);
          if (pbVar7 != (byte *)0x0) {
            pcVar11 = "R_reg";
            do {
              bVar2 = *pbVar7;
              bVar13 = bVar2 < (byte)*pcVar11;
              if (bVar2 != *pcVar11) {
LAB_00afbc40:
                iVar8 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
                goto LAB_00afbc45;
              }
              if (bVar2 == 0) break;
              bVar2 = pbVar7[1];
              bVar13 = bVar2 < (byte)pcVar11[1];
              if (bVar2 != pcVar11[1]) goto LAB_00afbc40;
              pbVar7 = pbVar7 + 2;
              pcVar11 = pcVar11 + 2;
            } while (bVar2 != 0);
            iVar8 = 0;
LAB_00afbc45:
            if (iVar8 == 0) {
              puVar1 = (uint *)(iVar5 + param_1[200] + 0x38);
              *puVar1 = *puVar1 & 0xfffffffe;
            }
          }
          iStack_1f8 = iStack_1f8 + 1;
          iVar5 = iVar5 + 0x70;
        } while (iStack_1f8 < (short)param_1[0xc9]);
      }
      iStack_1f8 = 0;
      if (0 < (short)param_1[0xc9]) {
        iVar5 = 0;
        do {
          pbVar7 = *(byte **)(*(int *)(iVar5 + 0x60 + param_1[200]) + 0x40);
          if (pbVar7 != (byte *)0x0) {
            pcVar11 = "in_R_reg";
            do {
              bVar2 = *pbVar7;
              bVar13 = bVar2 < (byte)*pcVar11;
              if (bVar2 != *pcVar11) {
LAB_00afbcb2:
                iVar8 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
                goto LAB_00afbcb7;
              }
              if (bVar2 == 0) break;
              bVar2 = pbVar7[1];
              bVar13 = bVar2 < (byte)pcVar11[1];
              if (bVar2 != pcVar11[1]) goto LAB_00afbcb2;
              pbVar7 = pbVar7 + 2;
              pcVar11 = pcVar11 + 2;
            } while (bVar2 != 0);
            iVar8 = 0;
LAB_00afbcb7:
            if (iVar8 == 0) {
              puVar1 = (uint *)(iVar5 + param_1[200] + 0x38);
              *puVar1 = *puVar1 | 1;
            }
          }
          iStack_1f8 = iStack_1f8 + 1;
          iVar5 = iVar5 + 0x70;
        } while (iStack_1f8 < (short)param_1[0xc9]);
      }
    }
    if (iStack_1f4 != 0) {
      iVar5 = FUN_00a7c8a0();
      if (iVar5 != 0) {
        FUN_00acf8b0(param_1[0x13c],0);
        uVar10 = FUN_009f8b40();
        FUN_009f8ae0(uVar10);
        uVar10 = FUN_009f8b40();
        FUN_00ac55a0(uVar10);
      }
      uVar10 = FUN_00a7c7f0();
      FUN_00a7c960(uVar10);
    }
    pcVar3 = *(code **)(param_1[0x6c4] + 8);
    param_1[0x815] = -0x40800000;
    param_1[0x814] = -0x40800000;
    param_1[0x813] = -1;
    (*pcVar3)(0x41200000,0,0);
    param_1[0x372] = 0;
    if ((((param_1[0x370] == 0x13) && (iVar5 = FUN_00a81330(), iVar5 != 0)) &&
        (iVar5 = FUN_00a7c8a0(), iVar5 != 0)) && (iVar5 = FUN_00a7c8a0(), iVar5 != 0)) {
      FUN_00a8caf0(5,0,0,0);
    }
    if (((param_1[0x370] == 0x14) && (iVar5 = FUN_00a81330(), iVar5 != 0)) &&
       ((iVar5 = FUN_00a7c8a0(), iVar5 != 0 && (iVar5 = FUN_00a7c8a0(), iVar5 != 0)))) {
      FUN_00a8caf0(5,0,0,0);
    }
    if (((param_1[0x370] == 0x19) && (iVar5 = FUN_00a81330(), iVar5 != 0)) &&
       ((iVar5 = FUN_00a7c8a0(), iVar5 != 0 && (iVar5 = FUN_00a7c8a0(), iVar5 != 0)))) {
      FUN_00a8caf0(5,0,0,0);
    }
    if ((((param_1[0x370] == 0x17) && (iVar5 = FUN_00a81330(), iVar5 != 0)) &&
        (iVar5 = FUN_00a7c8a0(), iVar5 != 0)) && (iVar5 = FUN_00a7c8a0(), iVar5 != 0)) {
      FUN_00a8caf0(5,0,0,0);
    }
    param_1[0x248] = 0;
    FUN_00aed150();
    FUN_00aed090();
    param_1[0x86c] = 0;
    param_1[0x250] = 0;
  }
  else if (param_1[0x187] != 1) goto LAB_00afbeae;
  param_1[0x248] = (int)((float)param_1[0x244] + (float)param_1[0x248]);
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_00afbeae:
  if (param_1[0x86c] != 0) {
    FUN_00a81330();
    if ((param_1[0x370] == 0x19) && (iVar5 = FUN_00a81330(), iVar5 != 0)) {
      if ((*(byte *)(param_1 + 0x371) & 0x80) == 0) {
        uVar15 = 0;
        uVar10 = FUN_00a7c8a0(0);
        FUN_004039a0(3,uVar10,uVar15);
        FUN_00dffbc0(0x113);
        FUN_00dffb20(param_1 + 0x6f0);
        uStack_1f0 = 0xc02ccccd;
        uStack_1ec = 0x3f000000;
        uStack_1e8 = 0;
        FUN_00dffbd0(&uStack_1f0);
        FUN_00a8c8b0(param_1[300],auStack_1e0);
      }
      if (param_1[0x370] == 0x19) {
        *(ushort *)(param_1 + 0x371) = *(ushort *)(param_1 + 0x371) | 0x80;
      }
      uVar15 = 0;
      piVar6 = param_1 + 0x818;
      uVar10 = FUN_00a7c8a0(piVar6,0);
      FUN_00a8e5d0(uVar10,piVar6,uVar15);
    }
    if ((param_1[0x370] == 0x17) && (iVar5 = FUN_00a81330(), iVar5 != 0)) {
      if ((*(byte *)(param_1 + 0x371) & 0x20) == 0) {
        uVar15 = 0;
        uVar10 = FUN_00a7c8a0(0);
        FUN_004039a0(3,uVar10,uVar15);
        FUN_00dffbc0(0x112);
        FUN_00dffb20(param_1 + 0x6f0);
        uStack_1f0 = 0x402ccccd;
        uStack_1ec = 0x3f000000;
        uStack_1e8 = 0;
        FUN_00dffbd0(&uStack_1f0);
        FUN_00a8c8b0(param_1[300],auStack_1e0);
      }
      if (param_1[0x370] == 0x17) {
        *(ushort *)(param_1 + 0x371) = *(ushort *)(param_1 + 0x371) | 0x20;
      }
      uVar15 = 0;
      piVar6 = param_1 + 0x818;
      uVar10 = FUN_00a7c8a0(piVar6,0);
      FUN_00a8e5d0(uVar10,piVar6,uVar15);
    }
    if ((param_1[0x370] == 0x13) && (iVar5 = FUN_00a81330(), iVar5 != 0)) {
      if ((*(byte *)(param_1 + 0x371) & 4) == 0) {
        uVar15 = 0;
        uVar10 = FUN_00a7c8a0(0);
        FUN_004039a0(3,uVar10,uVar15);
        FUN_00dffbc0(0x111);
        FUN_00dffb20(param_1 + 0x6f0);
        uStack_1f0 = 0;
        uStack_1ec = 0x3f800000;
        uStack_1e8 = 0;
        FUN_00dffbd0(&uStack_1f0);
        FUN_00a8c8b0(param_1[300],auStack_1e0);
      }
      if (param_1[0x370] == 0x13) {
        *(ushort *)(param_1 + 0x371) = *(ushort *)(param_1 + 0x371) | 4;
      }
      uVar15 = 0;
      piVar6 = param_1 + 0x818;
      uVar10 = FUN_00a7c8a0(piVar6,0);
      FUN_00a8e5d0(uVar10,piVar6,uVar15);
    }
    if ((param_1[0x370] == 0x14) && (iVar5 = FUN_00a81330(), iVar5 != 0)) {
      if ((*(byte *)(param_1 + 0x371) & 2) == 0) {
        uVar15 = 0;
        uVar10 = FUN_00a7c8a0(0);
        FUN_004039a0(3,uVar10,uVar15);
        FUN_00dffbc0(0x110);
        FUN_00dffb20(param_1 + 0x6f0);
        uStack_1f0 = 0;
        uStack_1ec = 0x3f800000;
        uStack_1e8 = 0;
        FUN_00dffbd0(&uStack_1f0);
        FUN_00a8c8b0(param_1[300],auStack_1e0);
      }
      if (param_1[0x370] == 0x14) {
        *(ushort *)(param_1 + 0x371) = *(ushort *)(param_1 + 0x371) | 2;
      }
      uVar15 = 0;
      piVar6 = param_1 + 0x818;
      uVar10 = FUN_00a7c8a0(piVar6,0);
      FUN_00a8e5d0(uVar10,piVar6,uVar15);
    }
  }
  switchD_0080dbae::default();
  if (param_1[0x1ec] != 0) {
    FUN_008f40f0(param_1);
  }
  return;
}


// src/unsorted/unit_00DBAFD0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00DBAFD0..00DBB4A0, 5 functions

#include "types.h"

// 00DBAFD0  FUN_00dbafd0  size=726  [run]
void __fastcall FUN_00dbafd0(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  float *pfVar5;
  uint uVar6;
  float10 fVar7;
  float10 fVar8;
  
  pfVar5 = (float *)(param_1 + 0x1e8);
  uVar6 = 0;
  do {
    uVar4 = uVar6 >> 5;
    if (*pfVar5 < pfVar5[1] == (*pfVar5 == pfVar5[1])) {
      uVar3 = 0x80000000 >> ((byte)uVar6 & 0x1f);
      iVar1 = uVar4 * 4;
      if ((*(uint *)(param_1 + 0xfc + uVar4 * 4) & uVar3) == 0) {
        puVar2 = (uint *)(iVar1 + 0x80 + param_1);
        *puVar2 = *puVar2 & ~uVar3;
      }
      else {
        puVar2 = (uint *)(iVar1 + 0x80 + param_1);
        *puVar2 = *puVar2 | uVar3;
      }
      if ((*(uint *)(param_1 + 0x100 + uVar4 * 4) & uVar3) == 0) {
        puVar2 = (uint *)(iVar1 + 0x84 + param_1);
        *puVar2 = *puVar2 & ~uVar3;
      }
      else {
        puVar2 = (uint *)(iVar1 + 0x84 + param_1);
        *puVar2 = *puVar2 | uVar3;
      }
    }
    else {
      uVar3 = 0x80000000 >> ((byte)uVar6 & 0x1f);
      iVar1 = uVar4 * 4;
      if ((*(uint *)(param_1 + 0xfc + uVar4 * 4) & uVar3) == 0) {
        puVar2 = (uint *)(param_1 + 4 + iVar1);
        *puVar2 = *puVar2 & ~uVar3;
      }
      else {
        puVar2 = (uint *)(param_1 + 4 + iVar1);
        *puVar2 = *puVar2 | uVar3;
      }
      if ((*(uint *)(param_1 + 0x100 + uVar4 * 4) & uVar3) == 0) {
        puVar2 = (uint *)(param_1 + 8 + iVar1);
        *puVar2 = *puVar2 & ~uVar3;
      }
      else {
        puVar2 = (uint *)(param_1 + 8 + iVar1);
        *puVar2 = *puVar2 | uVar3;
      }
    }
    uVar6 = uVar6 + 1;
    pfVar5 = pfVar5 + 2;
  } while ((int)uVar6 < 7);
  if (*(float *)(param_1 + 0x220) < *(float *)(param_1 + 0x224) ==
      (*(float *)(param_1 + 0x220) == *(float *)(param_1 + 0x224))) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xefffffff;
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xefffffff;
  }
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x104);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x108);
  fVar7 = (float10)FUN_00db51c0();
  *(float *)(param_1 + 0x14) =
       (float)(((float10)1 - fVar7) * (float10)*(float *)(param_1 + 0x90) +
              (float10)*(float *)(param_1 + 0x10c) * fVar7);
  fVar7 = (float10)FUN_00db51c0();
  *(float *)(param_1 + 0x18) =
       (float)(((float10)1 - fVar7) * (float10)*(float *)(param_1 + 0x94) +
              (float10)*(float *)(param_1 + 0x110) * fVar7);
  fVar7 = (float10)FUN_00db51c0();
  *(float *)(param_1 + 0x1c) =
       (float)((float10)*(float *)(param_1 + 0x114) * fVar7 +
              (float10)*(float *)(param_1 + 0x98) * ((float10)1 - fVar7));
  *(float *)(param_1 + 0x20) =
       (float)(((float10)1 - fVar7) * (float10)*(float *)(param_1 + 0x9c) +
              (float10)*(float *)(param_1 + 0x118) * fVar7);
  fVar7 = (float10)FUN_00db51c0();
  *(float *)(param_1 + 0x24) =
       (float)(((float10)*(float *)(param_1 + 0x11c) - (float10)*(float *)(param_1 + 0xa0)) * fVar7
              + (float10)*(float *)(param_1 + 0xa0));
  *(float *)(param_1 + 0x28) =
       (float)(((float10)*(float *)(param_1 + 0x120) - (float10)*(float *)(param_1 + 0xa4)) * fVar7
              + (float10)*(float *)(param_1 + 0xa4));
  *(float *)(param_1 + 0x2c) =
       (float)(((float10)*(float *)(param_1 + 0x124) - (float10)*(float *)(param_1 + 0xa8)) * fVar7
              + (float10)*(float *)(param_1 + 0xa8));
  fVar7 = (float10)FUN_00db51c0();
  *(float *)(param_1 + 0x24) = (float)(((float10)1 - fVar7) * (float10)*(float *)(param_1 + 0x24));
  fVar7 = (float10)FUN_00db51c0();
  fVar8 = (float10)1 - fVar7;
  *(float *)(param_1 + 0x30) =
       (float)((float10)*(float *)(param_1 + 0x128) * fVar7 +
              (float10)*(float *)(param_1 + 0xac) * fVar8);
  *(float *)(param_1 + 0x34) =
       (float)((float10)*(float *)(param_1 + 300) * fVar7 +
              (float10)*(float *)(param_1 + 0xb0) * fVar8);
  *(float *)(param_1 + 0x3c) =
       (float)((float10)*(float *)(param_1 + 0x134) * fVar7 +
              (float10)*(float *)(param_1 + 0xb8) * fVar8);
  *(float *)(param_1 + 0x40) =
       (float)((float10)*(float *)(param_1 + 0x138) * fVar7 +
              (float10)*(float *)(param_1 + 0xbc) * fVar8);
  *(float *)(param_1 + 0x38) =
       (float)(fVar8 * (float10)*(float *)(param_1 + 0xb4) +
              (float10)*(float *)(param_1 + 0x130) * fVar7);
  fVar7 = (float10)FUN_00db51c0();
  fVar8 = (float10)1 - fVar7;
  *(float *)(param_1 + 0x48) =
       (float)((float10)*(float *)(param_1 + 0x140) * fVar7 +
              (float10)*(float *)(param_1 + 0xc4) * fVar8);
  *(float *)(param_1 + 0x4c) =
       (float)((float10)*(float *)(param_1 + 0x144) * fVar7 +
              (float10)*(float *)(param_1 + 200) * fVar8);
  *(float *)(param_1 + 0x50) =
       (float)(fVar8 * (float10)*(float *)(param_1 + 0xcc) +
              (float10)*(float *)(param_1 + 0x148) * fVar7);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x14c);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x150);
  fVar7 = (float10)FUN_00db51c0();
  *(float *)(param_1 + 0x23c) =
       (float)((float10)*(float *)(param_1 + 0x24c) * fVar7 +
              (float10)*(float *)(param_1 + 0x244) * ((float10)1 - fVar7));
  *(float *)(param_1 + 0x240) =
       (float)(((float10)1 - fVar7) * (float10)*(float *)(param_1 + 0x248) +
              (float10)*(float *)(param_1 + 0x250) * fVar7);
  return;
}

// 00DBB300  FUN_00dbb300  size=80  [run]
float10 __thiscall FUN_00dbb300(int param_1,float param_2,float param_3,float param_4)

{
  float10 fVar1;
  float10 fVar2;
  
  if ((*(uint *)(param_1 + 0xfc) & 0x40000000) != 0) {
    param_3 = *(float *)(param_1 + 0x110);
  }
  fVar2 = (float10)FUN_00db51c0();
  fVar1 = (float10)1;
  return (fVar1 / ((fVar1 - fVar2) * (float10)*(float *)(param_1 + 0x188) + fVar1)) *
         (((float10)param_3 + (float10)param_4) - (float10)param_2) + (float10)param_2;
}

// 00DBB350  FUN_00dbb350  size=128  [run]
float10 __thiscall FUN_00dbb350(int param_1,undefined4 param_2)

{
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  if (*(float *)(param_1 + 0x220) < *(float *)(param_1 + 0x224) ==
      (*(float *)(param_1 + 0x220) == *(float *)(param_1 + 0x224))) {
    return (float10)0;
  }
  fVar2 = (float10)FUN_00db51c0();
  fVar4 = (float10)1;
  fVar1 = *(float *)(param_1 + 0x1a8);
  fVar3 = (float10)FUN_00db1ab0(param_2,param_1 + 0xfc);
  fVar4 = (float10)FUN_00dde210(0,(float)fVar3,
                                (float)(fVar4 / ((fVar4 - fVar2) * (float10)fVar1 + fVar4)),
                                0x40490fdb);
  return fVar4 * (float10)*(float *)(param_1 + 0x38);
}

// 00DBB3D0  FUN_00dbb3d0  size=202  [run]
float10 FUN_00dbb3d0(int param_1,uint *param_2)

{
  uint *puVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  
  puVar1 = param_2;
  if ((*param_2 & 0x8000000) == 0) {
    return (float10)0;
  }
  iVar2 = FUN_00db1c80(&param_2,param_1,param_2);
  if (iVar2 != 0) {
    if (*(char *)((int)puVar1 + 0x59) == '\x04') {
      fVar4 = (float10)FUN_00ddba30(((float)param_2 - (float)puVar1[0x11]) -
                                    *(float *)(param_1 + 0x364));
    }
    else {
      fVar3 = (float10)FUN_00ddba30(((float)puVar1[0x11] + (float)param_2) -
                                    *(float *)(param_1 + 0x364));
      fVar4 = (float10)FUN_00ddba30(((float)param_2 - (float)puVar1[0x11]) -
                                    *(float *)(param_1 + 0x364));
      if (ABS((float10)(float)fVar3) < ABS(fVar4)) {
        fVar4 = (float10)(float)fVar3;
      }
    }
    if ((float10)(float)puVar1[0x12] < fVar4) {
      return fVar4 - (float10)(float)puVar1[0x12];
    }
    if (fVar4 < -(float10)(float)puVar1[0x12]) {
      return fVar4 + (float10)(float)puVar1[0x12];
    }
  }
  return (float10)0;
}

// 00DBB4A0  FUN_00dbb4a0  size=370  [run]
float10 FUN_00dbb4a0(int param_1,int param_2)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_18;
  
  if ((((*(uint *)(param_2 + 0xc) & 0x2000000) != 0) && (*(char *)(param_2 + 0x59) != '\x04')) &&
     (iVar5 = *(int *)(param_1 + 0x6f8), iVar5 != 0)) {
    uVar2 = FUN_00daefb0(*(undefined4 *)(iVar5 + 0x4b0));
    iVar3 = FUN_00da2980(uVar2,8);
    pfVar4 = (float *)FUN_00da85d0();
    local_18 = *(float *)(iVar5 + 0x48);
    fVar6 = (float10)*pfVar4 - (float10)*(float *)(iVar5 + 0x40);
    fVar8 = (float10)pfVar4[1] - (float10)*(float *)(iVar5 + 0x44);
    fVar7 = (float10)pfVar4[2] - (float10)local_18;
    if (fVar7 * fVar7 + fVar6 * fVar6 + fVar8 * fVar8 <=
        (float10)*(float *)(iVar3 + 0xc) * (float10)*(float *)(iVar3 + 0xc)) {
      fVar6 = (float10)fpatan((float10)*(float *)(iVar5 + 0x40) - (float10)*pfVar4,
                              (float10)local_18 - (float10)pfVar4[2]);
      fVar6 = (float10)FUN_00ddba30((float)(fVar6 - (float10)*(float *)(param_1 + 0x364)));
      local_24 = (float)fVar6;
      local_2c = *(float *)(iVar3 + 0x10);
      if ((ABS(fVar6) < (float10)local_2c) &&
         (iVar5 = FUN_00db1c80(&local_30,param_1,param_2), iVar5 != 0)) {
        fVar6 = (float10)FUN_00ddba30((*(float *)(param_2 + 0x44) + local_30 +
                                      *(float *)(param_2 + 0x48)) - *(float *)(param_1 + 0x364));
        local_28 = (float)fVar6;
        fVar7 = (float10)FUN_00ddba30(((local_30 - *(float *)(param_2 + 0x44)) -
                                      *(float *)(param_2 + 0x48)) - *(float *)(param_1 + 0x364));
        fVar8 = (float10)local_28;
        fVar6 = fVar8;
        if (fVar7 < fVar8) {
          fVar6 = fVar7;
          fVar7 = fVar8;
        }
        if (0.0 <= local_24) {
          fVar1 = local_24 - local_2c;
        }
        else {
          fVar1 = local_24 + local_2c;
        }
        fVar6 = (float10)FUN_004fbd50(fVar1,(float)fVar6,(float)fVar7);
        return fVar6;
      }
    }
  }
  return (float10)0;
}


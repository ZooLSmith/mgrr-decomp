// src/unsorted/unit_0092EE30.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0092EE30..0092F970, 16 functions

#include "mgrr.h"

// 0092EE30  FUN_0092ee30  size=61  [run]
bool FUN_0092ee30(void)

{
  int iVar1;
  
  iVar1 = FUN_00dd3500(0xc0,&DAT_01b7c218);
  if (iVar1 != 0) {
    DAT_01b35fa0 = lib::AllocatedArray<HkDataManagerImplement::ReserveUnit>::
                   AllocatedArray<HkDataManagerImplement::ReserveUnit>();
    return DAT_01b35fa0 != 0;
  }
  DAT_01b35fa0 = 0;
  return false;
}

// 0092F020  FUN_0092f020  size=142  [run]
void __fastcall FUN_0092f020(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x14) + -1;
  if (-1 < iVar2) {
    piVar1 = (int *)(*(int *)(param_1 + 0x10) + 8 + iVar2 * 0xc);
    do {
      piVar1[-1] = 0;
      if (-1 < *piVar1) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar1[-2],*piVar1 * 4);
      }
      piVar1[-2] = 0;
      *piVar1 = -0x80000000;
      iVar2 = iVar2 + -1;
      piVar1 = piVar1 + -3;
    } while (-1 < iVar2);
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x18)) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))
              (*(undefined4 *)(param_1 + 0x10),(*(uint *)(param_1 + 0x18) & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0x80000000;
  return;
}

// 0092F0D0  FUN_0092f0d0  size=19  [run]
int __fastcall FUN_0092f0d0(int param_1)

{
  FUN_0100d300();
  *(undefined4 *)(param_1 + 0x1c) = 0x14;
  return param_1;
}

// 0092F0F0  FUN_0092f0f0  size=131  [run]
undefined4 FUN_0092f0f0(void)

{
  undefined4 local_20 [3];
  undefined4 local_14;
  undefined4 local_4;
  
  FUN_0100d300();
  local_4 = 0x14;
  local_14 = DAT_01b35fb0;
  local_20[0] = 1;
  DAT_01b35fb4 = FUN_00dd29b0(0x290,0x40,0,0);
  if (DAT_01b35fb4 == 0) {
    FUN_00dd5650(&DAT_0164d7e8,"HkThreadSystem::createJobQueue");
    FUN_0092f020();
    return 0;
  }
  DAT_01b35fb4 = FUN_0100d350(local_20);
  FUN_0092f020();
  return 1;
}

// 0092F180  FUN_0092f180  size=59  [run]
undefined4 FUN_0092f180(void)

{
  int iVar1;
  
  DAT_01b35fac = 0;
  DAT_01b35fb8 = 0;
  DAT_01b35fb4 = 0;
  DAT_01b35fb0 = 0;
  iVar1 = FUN_0092ec10();
  if (iVar1 != 0) {
    iVar1 = FUN_0092f0f0();
    if (iVar1 != 0) {
      DAT_01b35fac = 1;
      DAT_01b35fa8 = 1;
      return 1;
    }
  }
  return 0;
}

// 0092F1C0  FUN_0092f1c0  size=881  [run]
void FUN_0092f1c0(int param_1,int param_2,undefined4 *param_3,int param_4)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 uStack_178;
  undefined4 local_174;
  undefined4 local_170;
  int local_16c;
  undefined4 local_168;
  int local_164;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  
  uVar8 = 0;
  if ((((param_4 == 0) &&
       (((param_1 == 0 || (uVar7 = *(uint *)(param_1 + 0xc), uVar7 == 0)) ||
        ((*(uint *)((-(uint)(uVar7 != 0) & uVar7) + 8) & 0x100) == 0)))) &&
      (((param_2 == 0 || (uVar7 = *(uint *)(param_2 + 0xc), uVar7 == 0)) ||
       ((*(uint *)((-(uint)(uVar7 != 0) & uVar7) + 8) & 0x100) == 0)))) &&
     ((((param_1 == 0 || (uVar7 = *(uint *)(param_1 + 0xc), uVar7 == 0)) ||
       ((*(uint *)((-(uint)(uVar7 != 0) & uVar7) + 8) & 0x10) == 0)) &&
      (((param_2 == 0 || (uVar7 = *(uint *)(param_2 + 0xc), uVar7 == 0)) ||
       ((*(uint *)((-(uint)(uVar7 != 0) & uVar7) + 8) & 0x10) == 0)))))) {
    local_16c = FUN_008f7780(param_1);
    iVar4 = FUN_008f7780(param_2);
    if (param_1 == 0) {
      local_170 = 0;
    }
    else {
      uVar7 = *(uint *)(param_1 + 0xc);
      if (uVar7 == 0) {
        local_170 = 0;
      }
      else {
        local_170 = *(undefined4 *)((-(uint)(uVar7 != 0) & uVar7) + 0x2c);
      }
    }
    if (param_2 == 0) {
      local_17c = 0;
    }
    else {
      uVar7 = *(uint *)(param_2 + 0xc);
      if (uVar7 == 0) {
        local_17c = 0;
      }
      else {
        local_17c = *(undefined4 *)((-(uint)(uVar7 != 0) & uVar7) + 0x2c);
      }
    }
    if (param_1 != 0) {
      uVar7 = *(uint *)(param_1 + 0xc);
      if (uVar7 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(undefined4 *)((-(uint)(uVar7 != 0) & uVar7) + 0x20);
      }
    }
    if (param_2 == 0) {
      local_12c = 0;
    }
    else {
      uVar7 = *(uint *)(param_2 + 0xc);
      if (uVar7 == 0) {
        local_12c = 0;
      }
      else {
        local_12c = *(undefined4 *)((-(uint)(uVar7 != 0) & uVar7) + 0x20);
      }
    }
    local_128 = 0;
    local_138 = local_128;
    if (param_1 != 0) {
      uVar7 = *(uint *)(param_1 + 0xc);
      if (uVar7 == 0) {
        local_138 = 0;
      }
      else {
        local_138 = *(undefined4 *)((-(uint)(uVar7 != 0) & uVar7) + 0x90);
      }
    }
    local_124 = local_128;
    if (param_2 != 0) {
      uVar7 = *(uint *)(param_2 + 0xc);
      if (uVar7 == 0) {
        local_124 = 0;
      }
      else {
        local_124 = *(undefined4 *)((-(uint)(uVar7 != 0) & uVar7) + 0x90);
      }
    }
    local_174 = local_128;
    if (param_1 != 0) {
      uVar7 = *(uint *)(param_1 + 0xc);
      if (uVar7 == 0) {
        local_174 = 0;
      }
      else {
        local_174 = *(undefined4 *)((-(uint)(uVar7 != 0) & uVar7) + 0x94);
      }
    }
    if ((param_2 != 0) && (uVar7 = *(uint *)(param_2 + 0xc), local_128 = 0, uVar7 != 0)) {
      local_128 = *(undefined4 *)((-(uint)(uVar7 != 0) & uVar7) + 0x94);
    }
    if (local_16c == 0) {
      local_148 = 0;
    }
    else {
      if ((iVar4 != 0) && (*(int *)(local_16c + 0x4b4) == *(int *)(iVar4 + 0x4b4))) {
        return;
      }
      local_148 = *(undefined4 *)(local_16c + 0x4f0);
    }
    local_144 = local_170;
    if (iVar4 == 0) {
      local_134 = 0;
    }
    else {
      local_134 = *(undefined4 *)(iVar4 + 0x4f0);
    }
    local_130 = local_17c;
    local_164 = iVar4;
    local_140 = uVar8;
    local_13c = local_174;
    thunk_FUN_009cc2e0(&local_148);
    iVar5 = FUN_00416910(0x19);
    iVar3 = local_16c;
    if ((iVar5 == 0) &&
       ((((param_1 == 0 || (uVar7 = *(uint *)(param_1 + 0xc), uVar7 == 0)) ||
         (*(int *)((-(uint)(uVar7 != 0) & uVar7) + 0x88) == 0)) &&
        ((local_16c != 0 && (iVar4 == 0)))))) {
      local_168 = 0;
      local_180 = 0;
      puVar6 = (undefined4 *)FUN_008fe990();
      iVar4 = (**(code **)*puVar6)
                        (&local_180,&local_168,local_17c,local_174,*(undefined4 *)(iVar3 + 0x4b4),1)
      ;
      if (iVar4 != 0) {
        if (param_1 != 0) {
          FUN_004066f0();
          uVar7 = -(uint)(*(uint *)(param_1 + 0xc) != 0) & *(uint *)(param_1 + 0xc);
          puVar1 = (uint *)(uVar7 + 4);
          *puVar1 = *puVar1 | 1;
          *(undefined4 *)(uVar7 + 0x88) = 1;
          if (DAT_01885d68 != 1) {
            piVar2 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
            *piVar2 = *piVar2 + -1;
            if (((*piVar2 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
              FUN_00dd7320();
            }
          }
        }
        uStack_178 = *param_3;
        local_174 = param_3[1];
        local_170 = param_3[2];
        local_16c = param_3[3];
        uVar8 = FUN_00e01ca0();
        FUN_00e01020(0,local_180,&uStack_178,uVar8);
        return;
      }
    }
  }
  return;
}

// 0092F5B0  FUN_0092f5b0  size=23  [run]
void __fastcall FUN_0092f5b0(int param_1)

{
  FUN_0100f3d0();
  FUN_01013330();
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}

// 0092F620  FUN_0092f620  size=132  [run]
undefined4 __thiscall FUN_0092f620(int param_1,float *param_2,float param_3)

{
  float fVar1;
  
  if (param_3 - 1900.0 <= *param_2) {
    fVar1 = 1900.0 - param_3;
    if (fVar1 < *param_2) {
      return 0;
    }
    if (*(float *)(param_1 + 0x40) + param_3 <= param_2[1]) {
      if (((param_2[1] <= fVar1) && (param_3 - 1900.0 <= param_2[2])) && (param_2[2] <= fVar1)) {
        return 1;
      }
      return 0;
    }
  }
  return 0;
}

// 0092F6B0  FUN_0092f6b0  size=14  [run]
void FUN_0092f6b0(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_0092c170();
                    /* WARNING: Could not recover jumptable at 0x0092f6bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0x20))();
  return;
}

// 0092F6C0  FUN_0092f6c0  size=14  [run]
void FUN_0092f6c0(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_0092c170();
                    /* WARNING: Could not recover jumptable at 0x0092f6cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0x24))();
  return;
}

// 0092F6E0  FUN_0092f6e0  size=28  [run]
void FUN_0092f6e0(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_008e09d0();
  (**(code **)(*piVar1 + 4))();
  piVar1 = (int *)FUN_008e09d0();
                    /* WARNING: Could not recover jumptable at 0x0092f6fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 8))();
  return;
}

// 0092F700  FUN_0092f700  size=69  [run]
void FUN_0092f700(void)

{
  int iVar1;
  int *piVar2;
  float10 fVar3;
  
  piVar2 = (int *)FUN_008e09d0();
  (**(code **)(*piVar2 + 0x14))();
  FUN_00907360();
  FUN_009074a0();
  piVar2 = (int *)FUN_008e09d0();
  iVar1 = *piVar2;
  fVar3 = (float10)FUN_00e049b0();
  (**(code **)(iVar1 + 0x18))((float)fVar3);
  return;
}

// 0092F750  FUN_0092f750  size=14  [run]
void FUN_0092f750(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_008fd620();
                    /* WARNING: Could not recover jumptable at 0x0092f75c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 4))();
  return;
}

// 0092F760  FUN_0092f760  size=32  [run]
void FUN_0092f760(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_008fd620();
  (**(code **)(*piVar1 + 8))(*param_1);
  *param_1 = 0;
  return;
}

// 0092F8A0  FUN_0092f8a0  size=79  [run]
undefined4 FUN_0092f8a0(char *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  if (*param_1 == '_') {
    pcVar2 = param_1;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    if (3 < (uint)((int)pcVar2 - (int)(param_1 + 1))) {
      param_1 = (char *)(uint)*(uint3 *)(param_1 + 1);
      uVar3 = FUN_00fdd33b(&param_1);
      return uVar3;
    }
  }
  return 0xffffffff;
}

// 0092F970  FUN_0092f970  size=61  [run]
undefined4 __thiscall FUN_0092f970(int param_1,int param_2,int *param_3)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = 0;
  if (*(uint *)(param_1 + 8) != 0) {
    piVar2 = *(int **)(param_1 + 0xc);
    do {
      if (*piVar2 == param_2) {
        *param_3 = (*(int **)(param_1 + 0xc))[uVar1 * 4 + 1];
        return 1;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 4;
    } while (uVar1 < *(uint *)(param_1 + 8));
  }
  return 0;
}


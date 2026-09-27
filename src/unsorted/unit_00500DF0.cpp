// src/unsorted/unit_00500DF0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00500DF0..00501760, 7 functions

#include "mgrr.h"

// 00500DF0  FUN_00500df0  size=230  [run]
/* WARNING: Removing unreachable block (ram,0x00500e62) */

void FUN_00500df0(void)

{
  float fVar1;
  float *pfVar2;
  float local_c;
  float local_8;
  float *local_4;
  
  local_c = DAT_01bea390 - DAT_01bea380;
  local_8 = DAT_01bea394 - DAT_01bea384;
  local_4 = (float *)(DAT_01bea398 - DAT_01bea388);
  fVar1 = (float)local_4 * (float)local_4 + local_8 * local_8 + local_c * local_c;
  if (fVar1 < 0.0 != (fVar1 == 0.0)) {
    FUN_00dd5650(&DAT_0163d0ac);
    local_c = 0.0;
    local_8 = 1.0;
    local_4 = (float *)0x0;
  }
  pfVar2 = &local_c;
  D3DXVec3Normalize();
  *local_4 = DAT_01bea380 + (float)&local_c * 30.0;
  local_4[1] = DAT_01bea384 + (float)pfVar2 * 30.0;
  local_4[2] = local_c * 30.0 + DAT_01bea388;
  return;
}

// 00500EE0  FUN_00500ee0  size=440  [run]
undefined4 __fastcall FUN_00500ee0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_8c;
  undefined4 local_88;
  int *local_84;
  float local_80;
  float local_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  int *piStack_60;
  undefined4 uStack_5c;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  char *pcStack_1c;
  
  iVar3 = 0;
  local_84 = (int *)(param_1 + 0xea0);
  local_88 = 0;
  if (*local_84 != 0) {
    local_8c = 0;
    FUN_00907640(local_84,&local_8c,0);
    if (local_8c != 0) {
      FUN_0112bcf0();
      iVar2 = 0;
      if (0 < *(int *)(local_8c + 0x14)) {
        do {
          iVar1 = *(int *)(*(int *)(local_8c + 0x10) + 0x28 + iVar3);
          iVar1 = FUN_008f7780(*(char *)(iVar1 + 0x10) + iVar1);
          if ((iVar1 != 0) && (*(int *)(iVar1 + 0x4b0) == 0x20310)) {
            local_88 = 1;
            break;
          }
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + 0x30;
        } while (iVar2 < *(int *)(local_8c + 0x14));
      }
    }
  }
  if (*(int *)(param_1 + 0xa84) != 0) {
    local_80 = 0.0;
    local_7c = 0.0;
    local_78 = 2.3;
    iVar3 = FUN_00a12210(4);
    if (iVar3 == 0) {
      iVar3 = param_1;
    }
    D3DXVec3TransformNormal(&local_80,&local_80,iVar3 + 0x10);
    local_80 = *(float *)(iVar3 + 0x40) + local_80;
    iVar2 = *(int *)(param_1 + 0xa84);
    local_7c = *(float *)(iVar3 + 0x44) + local_7c;
    local_78 = *(float *)(iVar3 + 0x48) + local_78;
    fStack_70 = *(float *)(iVar2 + 0x40) - local_80;
    fStack_6c = *(float *)(iVar2 + 0x44) - local_7c;
    fStack_68 = *(float *)(iVar2 + 0x48) - local_78;
    fStack_64 = *(float *)(iVar2 + 0x4c) - fStack_74;
    iVar3 = FUN_009f8b40();
    fStack_50 = local_80;
    fStack_4c = local_7c;
    uStack_2c = iVar3 << 0x10 | 7;
    fStack_48 = local_78;
    uStack_5c = 0;
    fStack_44 = fStack_74;
    uStack_28 = 0;
    uStack_24 = 0;
    fStack_40 = fStack_70;
    uStack_20 = 0;
    fStack_3c = fStack_6c;
    piStack_60 = local_84;
    fStack_38 = fStack_68;
    pcStack_1c = "heli_line_of_fire";
    fStack_34 = fStack_64;
    uStack_30 = 0x3e800000;
    FUN_0090fb00(&piStack_60);
  }
  return local_88;
}

// 005010A0  FUN_005010a0  size=440  [run]
void __fastcall FUN_005010a0(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  undefined4 local_5c;
  float local_58;
  undefined4 local_54;
  float local_50;
  undefined4 local_4c;
  float local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_30 [44];
  
  iVar4 = *(int *)(param_1 + 0xa84);
  iVar3 = FUN_00a12210(5);
  local_70 = *(float *)(iVar3 + 0x40) + *(float *)(iVar3 + 0x30) * 150.0;
  local_6c = *(float *)(iVar3 + 0x34) * 150.0 + *(float *)(iVar3 + 0x44);
  local_68 = *(float *)(iVar3 + 0x48) + *(float *)(iVar3 + 0x38) * 150.0;
  local_64 = *(float *)(iVar3 + 0x3c) * 150.0 + *(float *)(iVar3 + 0x4c);
  FUN_00d93a30();
  local_60 = *(float *)(iVar4 + 0x40);
  local_58 = *(float *)(iVar4 + 0x48);
  local_54 = *(undefined4 *)(iVar4 + 0x4c);
  local_5c = *(undefined4 *)(iVar4 + 0x2324);
  local_40 = 0;
  local_3c = 0x3f800000;
  local_38 = 0;
  FUN_00d93a90(&local_60,&local_40);
  FUN_00d97610(&local_50,(float *)(iVar3 + 0x40),&local_70,local_30);
  fVar1 = local_50 - local_60;
  fVar2 = local_48 - local_58;
  iVar4 = FUN_00a81330();
  if (iVar4 != 0) {
    iVar4 = FUN_00a7c8a0();
    if (iVar4 != 0) {
      *(float *)(iVar4 + 0x50) = local_50;
      *(undefined4 *)(iVar4 + 0x54) = local_4c;
      *(float *)(iVar4 + 0x58) = local_48;
      *(undefined4 *)(iVar4 + 0x5c) = local_44;
      *(float *)(iVar4 + 0x54) = *(float *)(iVar4 + 0x54) + 0.05;
    }
  }
  if (12.25 <= fVar2 * fVar2 + fVar1 * fVar1) {
    fVar1 = *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0xddc);
    *(float *)(param_1 + 0xddc) = fVar1;
    if (20.0 <= fVar1) {
      *(undefined4 *)(param_1 + 0xdd8) = 0xbf800000;
    }
  }
  else {
    fVar1 = *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0xdd8);
    *(float *)(param_1 + 0xdd8) = fVar1;
    if (20.0 <= fVar1) {
      *(undefined4 *)(param_1 + 0xddc) = 0xbf800000;
      return;
    }
  }
  return;
}

// 00501260  FUN_00501260  size=136  [run]
void __thiscall FUN_00501260(int param_1,int param_2)

{
  float10 fVar1;
  
  if (*(int *)(param_1 + 0xdc4) != param_2) {
    *(int *)(param_1 + 0xdc4) = param_2;
    if (param_2 == 0) {
      fVar1 = (float10)FUN_00fdc8b0();
      *(float *)(param_1 + 0xdd0) = (float)fVar1;
      *(undefined4 *)(param_1 + 0xdd8) = 0;
    }
    else if (param_2 == 2) {
      *(undefined4 *)(param_1 + 0xdd8) = 0;
      *(undefined4 *)(param_1 + 0xddc) = 0;
      *(undefined4 *)(param_1 + 0xf40) = 0x3ecccccd;
      return;
    }
  }
  return;
}

// 005012F0  FUN_005012f0  size=63  [run]
uint FUN_005012f0(void)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00a81330();
  if (iVar1 == 0) {
    return 0;
  }
  piVar2 = (int *)FUN_00a7c8a0();
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  puVar3 = &DAT_01b35140;
  (**(code **)(*piVar2 + 4))(&DAT_01b35140);
  iVar1 = FUN_00dd6d70(puVar3);
  return -(uint)(iVar1 != 0) & (uint)piVar2;
}

// 005013F0  FUN_005013f0  size=844  [run]
void __fastcall FUN_005013f0(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  switch(param_1[0x187]) {
  case 0:
    if (param_1[0x1d9] != 0) {
      FUN_008e6c60(0);
      FUN_008e0ae0(0);
    }
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    param_1[0x3b3] = param_1[0x3b3] | 0x1000000;
    FUN_00a9ed60(0x20310,&DAT_01640804,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_005014a3;
  case 1:
LAB_005014a3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      param_1[0x24] = 0;
      param_1[0x25] = 0;
      param_1[0x26] = 0;
      param_1[0x27] = 0;
      puVar2 = &DAT_016407fc;
LAB_00501513:
      FUN_00a9ed60(0x20310,puVar2,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 == 0) {
      return;
    }
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    puVar2 = &DAT_016407f4;
    goto LAB_00501513;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      param_1[0x24] = 0;
      param_1[0x25] = 0;
      param_1[0x26] = 0;
      param_1[0x27] = 0;
      puVar2 = &DAT_016407ec;
      goto LAB_00501513;
    }
    break;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      param_1[0x24] = 0;
      param_1[0x25] = 0;
      param_1[0x26] = 0;
      param_1[0x27] = 0;
      puVar2 = &DAT_016407e4;
      goto LAB_00501513;
    }
    break;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x20))();
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      param_1[0x24] = 0;
      param_1[0x25] = 0;
      param_1[0x26] = 0;
      param_1[0x27] = 0;
      puVar2 = &DAT_016407dc;
      goto LAB_00501513;
    }
    break;
  case 6:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  }
  return;
}

// 00501760  FUN_00501760  size=778  [run]
void __fastcall FUN_00501760(int *param_1)

{
  float fVar1;
  int iVar2;
  undefined *puVar3;
  
  switch(param_1[0x187]) {
  case 0:
    param_1[0xd9] = param_1[0xd9] & 0xfffffffd;
    param_1[0x3b3] = param_1[0x3b3] | 0x1000000;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    FUN_00a9ed60(0x20310,&DAT_0164082c,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_005017f2;
  case 1:
LAB_005017f2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      param_1[0x24] = 0;
      param_1[0x25] = 0;
      param_1[0x26] = 0;
      param_1[0x27] = 0;
      puVar3 = &DAT_01640824;
LAB_00501862:
      FUN_00a9ed60(0x20310,puVar3,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 == 0) {
      return;
    }
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    puVar3 = &DAT_0164081c;
    goto LAB_00501862;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      param_1[0x24] = 0;
      param_1[0x25] = 0;
      param_1[0x26] = 0;
      param_1[0x27] = 0;
      puVar3 = &DAT_01640814;
      goto LAB_00501862;
    }
    break;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      param_1[0x24] = 0;
      param_1[0x25] = 0;
      param_1[0x26] = 0;
      param_1[0x27] = 0;
      puVar3 = &DAT_0164080c;
      goto LAB_00501862;
    }
    break;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      (**(code **)(*param_1 + 0x20))();
      FUN_004fa990();
      FUN_004fa970();
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x248] = 0x44e10000;
      return;
    }
    break;
  case 6:
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] <= 0.0) {
      FUN_009fdde0();
      return;
    }
  }
  return;
}


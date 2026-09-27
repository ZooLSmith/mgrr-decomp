// src/enemy/emc100/Emc100.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 007CAA00..00AB9F00, 123 functions

#include "types.h"

// 007CAA00  Emc100::vf184  size=6  [class]
undefined4 Emc100::vf184(void)

{
  return 0xffffffff;
}

// 007CAA10  Emc100::vf188  size=43  [class]
void Emc100::vf188(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 != 0) {
    FUN_00a7c950();
    uVar1 = FUN_00a7c7f0();
    FUN_00a7c960(uVar1);
  }
  return;
}

// 007CAA50  FUN_007caa50  size=413  [between]
void __fastcall FUN_007caa50(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_24 [4];
  undefined1 local_20 [28];
  
  if (*(int *)(param_1 + 0x1ca0) != 0) {
    iVar1 = FUN_00a8cab0();
    if (iVar1 != 0x60002) {
      (**(code **)(**(int **)(param_1 + 0xa84) + 0x204))(local_20);
      FUN_00a84720();
      FUN_00a84720();
      switchD_0080dbae::default();
      FUN_00a84780(local_20,1,0,0,0,0x3f800000);
      switchD_0080dbae::default();
      FUN_00a84780(local_20,0,1,0,0,0x3f800000);
      switchD_0080dbae::default();
      goto LAB_007cab35;
    }
  }
  iVar1 = FUN_00a8cab0();
  if (iVar1 != 0x10000) {
    iVar1 = FUN_00a8cab0();
    if (iVar1 != 0x10009) {
      iVar1 = FUN_00a8cab0();
      if (iVar1 != 0x1000a) goto LAB_007cab35;
    }
  }
  FUN_00a84720();
  FUN_00a84720();
LAB_007cab35:
  FUN_00a84720();
  FUN_00a84720();
  if ((*(int *)(param_1 + 0xa84) != 0) && (*(int *)(param_1 + 0x20b0) != 0)) {
    (**(code **)(**(int **)(param_1 + 0xa84) + 0x204))(local_20);
    uVar2 = 0;
    if ((2 < *(byte *)(param_1 + 0x1e30)) && (*(byte *)(param_1 + 0x1e30) < 5)) {
      uVar2 = 1;
    }
    switchD_0080dbae::default();
    FUN_00a84780(auStack_24,0,uVar2,0,0,0x3f000000);
    switchD_0080dbae::default();
    FUN_00a84780(auStack_24,uVar2,0,0,0,0x3f000000);
    switchD_0080dbae::default();
  }
  return;
}

// 007CABF0  Emc100::vf50  size=50  [class]
void __fastcall Emc100::vf50(int param_1)

{
  int iVar1;
  
  FUN_00a93170();
  BehaviorEmBase::vf50();
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x7b0) + 8))();
    if (iVar1 != 0) {
      FUN_008f3cb0(param_1);
    }
  }
  return;
}

// 007CAC30  Emc100::vf54  size=5  [class]
void __fastcall Emc100::vf54(int *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined1 auStack_20 [28];
  
  bVar2 = false;
  iVar3 = FUN_00ac8410();
  if (iVar3 == 0) {
    iVar3 = FUN_00a8c760(0x25);
    if ((((iVar3 != 0) && (iVar3 = FUN_00a81330(), iVar3 != 0)) &&
        (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) &&
       (((((float)param_1[0x218] != 0.0 || ((float)param_1[0x219] != 0.0)) ||
         ((float)param_1[0x21a] != 0.0)) && (iVar3 = FUN_00a12210(0xffffffff), iVar3 != 0)))) {
      iVar1 = *param_1;
      fStack_40 = (float)param_1[0x10] +
                  (((float)param_1[0x218] + *(float *)(iVar3 + 0x40)) - (float)param_1[0x10]);
      fStack_3c = ((*(float *)(iVar3 + 0x44) + (float)param_1[0x219]) - (float)param_1[0x11]) +
                  (float)param_1[0x11];
      fStack_38 = ((*(float *)(iVar3 + 0x48) + (float)param_1[0x21a]) - (float)param_1[0x12]) +
                  (float)param_1[0x12];
      fStack_34 = (((float)param_1[0x21b] + *(float *)(iVar3 + 0x4c)) - (float)param_1[0x13]) +
                  (float)param_1[0x13];
      uVar4 = (**(code **)(iVar1 + 0x84))();
      (**(code **)(iVar1 + 0x7c))(&fStack_40,uVar4);
      bVar2 = true;
    }
    iVar3 = FUN_00a8c760(0x24);
    if (((iVar3 != 0) && (iVar3 = FUN_00ac82f0(), iVar3 == 0)) &&
       ((!bVar2 && ((iVar3 = FUN_00a81330(), iVar3 != 0 && (iVar3 = FUN_00a7c8a0(), iVar3 != 0))))))
    {
      FUN_00a8ce90(&fStack_40,auStack_20);
      D3DXVec3TransformNormal(&fStack_40,&fStack_40,iVar3 + 0x10);
      fStack_40 = *(float *)(iVar3 + 0x40) + fStack_40;
      fStack_3c = *(float *)(iVar3 + 0x44) + fStack_3c;
      fStack_38 = *(float *)(iVar3 + 0x48) + fStack_38;
      fStack_30 = fStack_40 - (float)param_1[0x10];
      fStack_2c = fStack_3c - (float)param_1[0x11];
      fStack_28 = fStack_38 - (float)param_1[0x12];
      fStack_24 = fStack_34 - (float)param_1[0x13];
      FUN_00a12310(&fStack_30);
    }
  }
  Behavior::vf54();
  return;
}

// 007CAC40  FUN_007cac40  size=439  [between]
void __fastcall FUN_007cac40(int param_1)

{
  float fVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0xec4) = 0x10000;
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(6,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x1d54) = 0;
LAB_007cac6c:
    FUN_00ac80a0(0x3f800000,0x3f800000);
  }
  else if (*(int *)(param_1 + 0x61c) == 1) goto LAB_007cac6c;
  switch(*(undefined4 *)(param_1 + 0x620)) {
  case 0:
    FUN_00aa4080(0x36,1,0x3e4ccccd,0x3f800000,0x8040000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x620) = *(int *)(param_1 + 0x620) + 1;
    break;
  case 1:
    break;
  case 2:
    *(undefined4 *)(param_1 + 0x620) = 3;
    *(undefined4 *)(param_1 + 0x920) = 0x42700000;
    goto LAB_007cad7c;
  case 3:
LAB_007cad7c:
    fVar1 = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x920) = fVar1;
    if (0.0 < fVar1) {
      return;
    }
    *(int *)(param_1 + 0x620) = *(int *)(param_1 + 0x620) + 1;
    return;
  case 4:
    FUN_00aa4080(0x38,1,0,0x3f800000,0x8040000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x620) = *(int *)(param_1 + 0x620) + 1;
    goto LAB_007cadd7;
  case 5:
LAB_007cadd7:
    iVar2 = FUN_00a94ce0(1);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x620) = 0;
      return;
    }
  default:
    goto switchD_007cac94_default;
  }
  iVar2 = FUN_00a94ce0(1);
  if (iVar2 != 0) {
    FUN_00aa4080(0x37,1,0,0x3f800000,0x40200,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x620) = *(int *)(param_1 + 0x620) + 1;
    return;
  }
switchD_007cac94_default:
  return;
}

// 007CAE70  FUN_007cae70  size=242  [between]
void __fastcall FUN_007cae70(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x1d54) = 0;
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    FUN_00aa4120(6,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    *(undefined4 *)(param_1 + 0x1ca4) = *(undefined4 *)(param_1 + 0x1ca0);
    return;
  case 2:
    FUN_00aa4080(0x29,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x61c) = 0;
      *(undefined4 *)(param_1 + 0x1ca4) = *(undefined4 *)(param_1 + 0x1ca0);
      return;
    }
  default:
    *(undefined4 *)(param_1 + 0x1ca4) = *(undefined4 *)(param_1 + 0x1ca0);
    return;
  }
}

// 007CAF80  FUN_007caf80  size=127  [between]
void __fastcall FUN_007caf80(int param_1)

{
  *(undefined4 *)(param_1 + 0xec4) = 0x1000a;
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4120(6,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    *(undefined4 *)(param_1 + 0x1ca4) = *(undefined4 *)(param_1 + 0x1ca0);
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  *(undefined4 *)(param_1 + 0x1ca4) = *(undefined4 *)(param_1 + 0x1ca0);
  return;
}

// 007CB020  FUN_007cb020  size=93  [between]
void __fastcall FUN_007cb020(int param_1)

{
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(6,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 007CB090  FUN_007cb090  size=345  [between]
undefined4 __thiscall FUN_007cb090(int param_1,float *param_2,int param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  int iVar6;
  
  pfVar5 = param_2;
  pfVar1 = (float *)(param_1 + 0x1d00);
  iVar6 = FUN_00907640(param_1 + 0x1cd4,0,pfVar1);
  param_2 = (float *)0x1;
  if (iVar6 != 0) {
    fVar2 = *(float *)(param_1 + 0x40) - *pfVar1;
    fVar4 = *(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x1d04);
    fVar3 = *(float *)(param_1 + 0x48) - *(float *)(param_1 + 0x1d08);
    *pfVar5 = SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2);
  }
  iVar6 = FUN_00907640(param_1 + 0x1cdc,0,pfVar1);
  if (iVar6 == 0) {
LAB_007cb12a:
    param_2 = (float *)0x3;
  }
  else {
    fVar2 = *(float *)(param_1 + 0x40) - *pfVar1;
    fVar4 = *(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x1d04);
    fVar3 = *(float *)(param_1 + 0x48) - *(float *)(param_1 + 0x1d08);
    fVar2 = SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2);
    if (*pfVar5 <= fVar2) {
      *pfVar5 = fVar2;
      goto LAB_007cb12a;
    }
  }
  iVar6 = FUN_00907640(param_1 + 0x1cd8,0,pfVar1);
  if (iVar6 != 0) {
    fVar2 = *(float *)(param_1 + 0x40) - *pfVar1;
    fVar4 = *(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x1d04);
    fVar3 = *(float *)(param_1 + 0x48) - *(float *)(param_1 + 0x1d08);
    fVar2 = SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2);
    if (fVar2 < *pfVar5) goto LAB_007cb188;
    *pfVar5 = fVar2;
  }
  param_2 = (float *)0x2;
LAB_007cb188:
  if (param_3 == 0) {
    return param_2;
  }
  iVar6 = FUN_00907640(param_1 + 0x1cd0,0,pfVar1);
  if (iVar6 != 0) {
    fVar2 = *(float *)(param_1 + 0x40) - *pfVar1;
    fVar4 = *(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x1d04);
    fVar3 = *(float *)(param_1 + 0x48) - *(float *)(param_1 + 0x1d08);
    fVar2 = SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2);
    if (fVar2 < *pfVar5) {
      return param_2;
    }
    *pfVar5 = fVar2;
  }
  return 0;
}

// 007CB1F0  FUN_007cb1f0  size=67  [between]
undefined4 __fastcall FUN_007cb1f0(int param_1)

{
  undefined4 local_8;
  undefined1 local_4 [4];
  
  if ((*(uint *)(param_1 + 0xf1c) & 0x100000) == 0) {
    FUN_00ac81f0(param_1 + 0x40,&local_8,local_4);
    return local_8;
  }
  FUN_00ac8270(param_1 + 0x40,&local_8,local_4);
  return local_8;
}

// 007CB240  FUN_007cb240  size=92  [between]
void __fastcall FUN_007cb240(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cab0();
  if (iVar1 == 0x50002) {
    FUN_00eaa6e0(0x41f00000,0);
    return;
  }
  if (iVar1 == 0x50000) {
    (**(code **)(*(int *)(param_1 + 0x1930) + 8))(0x41200000,0,0);
  }
  return;
}

// 007CB2A0  FUN_007cb2a0  size=174  [between]
undefined4 FUN_007cb2a0(void)

{
  int iVar1;
  
  iVar1 = FUN_00a8cab0();
  if (iVar1 != 0x70000) {
    iVar1 = FUN_00a8cab0();
    if (iVar1 != 0x70002) {
      iVar1 = FUN_00a8cab0();
      if (iVar1 != 0x70003) {
        iVar1 = FUN_00a8cab0();
        if (iVar1 != 0x70004) {
          iVar1 = FUN_00a8cab0();
          if (iVar1 != 0x70005) {
            iVar1 = FUN_00a8cab0();
            if (iVar1 != 0x70006) {
              iVar1 = FUN_00a8cab0();
              if (iVar1 != 0x70007) {
                iVar1 = FUN_00a8cab0();
                if (iVar1 != 0x70008) {
                  iVar1 = FUN_00a8cab0();
                  if (iVar1 != 0x70009) {
                    iVar1 = FUN_00a8cab0();
                    if (iVar1 != 0x60001) {
                      iVar1 = FUN_00a8cab0();
                      if (iVar1 != 0x90000) {
                        return 1;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

// 007CB380  FUN_007cb380  size=678  [between]
undefined4 __fastcall FUN_007cb380(int param_1)

{
  char cVar1;
  float fVar2;
  undefined4 *puVar3;
  ushort uVar4;
  undefined4 local_70;
  float local_6c;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_50;
  float local_4c;
  undefined4 local_48;
  undefined4 local_40;
  float local_3c;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
  float local_1c;
  undefined4 local_18;
  
  FUN_00a84720();
  switchD_0080dbae::default();
  cVar1 = *(char *)(param_1 + 0x10d0);
  switch(cVar1) {
  case '\0':
    *(undefined4 *)(param_1 + 0x928) = 0;
    *(char *)(param_1 + 0x10d0) = cVar1 + '\x01';
  case '\x01':
    local_70 = 0;
    puVar3 = &local_70;
    local_6c = *(float *)(param_1 + 0x928) * -5.0 * 0.017453292;
    local_68 = 0;
    goto LAB_007cb3ea;
  case '\x02':
    local_60 = 0;
    local_5c = 0xbf060a92;
    local_58 = 0;
    FUN_00a84be0(&local_60);
    switchD_0080dbae::default();
    fVar2 = *(float *)(param_1 + 0x924) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x924) = fVar2;
    if (fVar2 < 0.0) {
      *(char *)(param_1 + 0x10d0) = *(char *)(param_1 + 0x10d0) + '\x01';
      *(undefined4 *)(param_1 + 0x928) = 0x40c00000;
      return 0;
    }
    break;
  case '\x03':
    puVar3 = &local_50;
    local_50 = 0;
    local_4c = *(float *)(param_1 + 0x928) * -5.0 * 0.017453292;
    local_48 = 0;
    goto LAB_007cb4c8;
  case '\x04':
    fVar2 = *(float *)(param_1 + 0x924) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x924) = fVar2;
    if (fVar2 < 0.0) {
      *(undefined4 *)(param_1 + 0x928) = 0;
      *(char *)(param_1 + 0x10d0) = cVar1 + '\x01';
      return 0;
    }
    break;
  case '\x05':
    puVar3 = &local_40;
    local_40 = 0;
    local_3c = *(float *)(param_1 + 0x928) * 5.0 * 0.017453292;
    local_38 = 0;
LAB_007cb3ea:
    FUN_00a84be0(puVar3);
    switchD_0080dbae::default();
    fVar2 = *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0x928);
    *(float *)(param_1 + 0x928) = fVar2;
    uVar4 = (ushort)(fVar2 < 6.0) << 8 | (ushort)(fVar2 == 6.0) << 0xe;
LAB_007cb415:
    if (uVar4 == 0) {
      *(char *)(param_1 + 0x10d0) = *(char *)(param_1 + 0x10d0) + '\x01';
      *(undefined4 *)(param_1 + 0x924) = 0x42700000;
      return 0;
    }
    break;
  case '\x06':
    local_30 = 0;
    local_2c = 0x3f060a92;
    local_28 = 0;
    FUN_00a84be0(&local_30);
    switchD_0080dbae::default();
    fVar2 = *(float *)(param_1 + 0x924) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x924) = fVar2;
    if (fVar2 < 0.0) {
      *(char *)(param_1 + 0x10d0) = *(char *)(param_1 + 0x10d0) + '\x01';
      *(undefined4 *)(param_1 + 0x928) = 0x40c00000;
      return 0;
    }
    break;
  case '\a':
    puVar3 = &local_20;
    local_20 = 0;
    local_1c = *(float *)(param_1 + 0x928) * 5.0 * 0.017453292;
    local_18 = 0;
LAB_007cb4c8:
    FUN_00a84be0(puVar3);
    switchD_0080dbae::default();
    fVar2 = *(float *)(param_1 + 0x928) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x928) = fVar2;
    uVar4 = (ushort)(0.0 < fVar2) << 8 | (ushort)(fVar2 == 0.0) << 0xe;
    goto LAB_007cb415;
  case '\b':
    fVar2 = *(float *)(param_1 + 0x924) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x924) = fVar2;
    if (fVar2 < 0.0) {
      *(undefined1 *)(param_1 + 0x10d0) = 0;
      return 1;
    }
  }
  return 0;
}

// 007CB650  FUN_007cb650  size=36  [between]
undefined4 __fastcall FUN_007cb650(int param_1)

{
  if ((float)*(int *)(param_1 + 0x870) <=
      (float)*(int *)(param_1 + 0x874) * *(float *)(param_1 + 0x1b34)) {
    return 1;
  }
  return 0;
}

// 007CB680  FUN_007cb680  size=24  [between]
undefined4 __fastcall FUN_007cb680(int param_1)

{
  if (*(int *)(param_1 + 0x1b14) < 1) {
    *(undefined4 *)(param_1 + 0x1b28) = 1;
    return 1;
  }
  return 0;
}

// 007CB6A0  FUN_007cb6a0  size=24  [between]
undefined4 __fastcall FUN_007cb6a0(int param_1)

{
  if (*(int *)(param_1 + 0x1b18) < 1) {
    *(undefined4 *)(param_1 + 0x1b2c) = 1;
    return 1;
  }
  return 0;
}

// 007CB6C0  FUN_007cb6c0  size=24  [between]
undefined4 __fastcall FUN_007cb6c0(int param_1)

{
  if (*(int *)(param_1 + 0x1b1c) < 1) {
    *(undefined4 *)(param_1 + 0x1b30) = 1;
    return 1;
  }
  return 0;
}

// 007CB6E0  Emc100::vf208  size=36  [class]
void __thiscall Emc100::vf208(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x40);
  param_2[2] = *(undefined4 *)(param_1 + 0x48);
  param_2[3] = *(undefined4 *)(param_1 + 0x4c);
  param_2[1] = *(float *)(param_1 + 0x44) + 1.5;
  return;
}

// 007CB710  Emc100::vf6C  size=5  [class]
void __fastcall Emc100::vf6C(int param_1)

{
  if (*(int *)(param_1 + 0x4f0) != 0) {
    FUN_00a7ce90();
    return;
  }
  return;
}

// 007CB720  Emc100::thunk_vf70  size=5  [class]
void __fastcall Emc100::thunk_vf70(int param_1)

{
  if (*(int *)(param_1 + 0x4f0) != 0) {
    FUN_00a7cec0();
    return;
  }
  return;
}

// 007CB750  Emc100::vf110  size=58  [class]
void Emc100::vf110(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  Bh0064::vf110(param_1);
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x110))(param_1);
    }
  }
  return;
}

// 007CB790  Emc100::vf368  size=35  [class]
undefined1 __fastcall Emc100::vf368(int param_1)

{
  undefined1 uVar1;
  
  uVar1 = (*(uint *)(param_1 + 0xf1c) & 0x40000) != 0;
  if ((*(uint *)(param_1 + 0xf1c) & 0x80000) != 0) {
    uVar1 = 2;
  }
  return uVar1;
}

// 007CB7C0  FUN_007cb7c0  size=184  [between]
undefined4 FUN_007cb7c0(void)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  char *pcVar4;
  bool bVar5;
  
  if (DAT_018b9174 != 0x220) {
    return 0;
  }
  pcVar4 = "P220_SEARCH_GATE";
  pbVar2 = &DAT_018b917c;
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < (byte)*pcVar4;
    if (bVar1 != *pcVar4) {
LAB_007cb800:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_007cb805;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < (byte)pcVar4[1];
    if (bVar1 != pcVar4[1]) goto LAB_007cb800;
    pbVar2 = pbVar2 + 2;
    pcVar4 = pcVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_007cb805:
  if (iVar3 != 0) {
    pcVar4 = "P220_SEARCH_GATE_2";
    pbVar2 = &DAT_018b917c;
    do {
      bVar1 = *pbVar2;
      bVar5 = bVar1 < (byte)*pcVar4;
      if (bVar1 != *pcVar4) {
LAB_007cb833:
        iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
        goto LAB_007cb838;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar5 = bVar1 < (byte)pcVar4[1];
      if (bVar1 != pcVar4[1]) goto LAB_007cb833;
      pbVar2 = pbVar2 + 2;
      pcVar4 = pcVar4 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_007cb838:
    if (iVar3 != 0) {
      pcVar4 = "P220_SEARCH_GATE_3";
      pbVar2 = &DAT_018b917c;
      do {
        bVar1 = *pbVar2;
        bVar5 = bVar1 < (byte)*pcVar4;
        if (bVar1 != *pcVar4) {
LAB_007cb866:
          iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
          goto LAB_007cb86b;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar5 = bVar1 < (byte)pcVar4[1];
        if (bVar1 != pcVar4[1]) goto LAB_007cb866;
        pbVar2 = pbVar2 + 2;
        pcVar4 = pcVar4 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_007cb86b:
      if (iVar3 != 0) {
        return 0;
      }
    }
  }
  return 1;
}

// 007CB890  Emc100::vf1C0  size=5  [class]
void __thiscall Emc100::vf1C0(int param_1,int *param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  
  BehaviorEmBase::vf1C0(param_2,param_3);
  uVar1 = *(uint *)(param_1 + 0x4b0);
  if (uVar1 < 0x2c011) {
    if (uVar1 == 0x2c010) goto switchD_00a9b148_caseD_2c050;
    if (uVar1 < 0x28141) {
      if (uVar1 != 0x28140) {
        switch(uVar1) {
        case 0x28010:
        case 0x28050:
          break;
        default:
          goto switchD_00a9af52_caseD_28011;
        case 0x28030:
        case 0x28033:
        case 0x28035:
          if (*(int *)(param_1 + 0x4f0) != 0) {
            FUN_00a7c890();
          }
          FUN_00e26e90();
          uVar5 = 0x20030;
          uVar4 = 0x2803f;
          goto LAB_00a9b2ce;
        case 0x28040:
          goto switchD_00a9af52_caseD_28040;
        case 0x28070:
        case 0x28071:
          goto switchD_00a9af52_caseD_28070;
        case 0x28080:
        case 0x28081:
          goto switchD_00a9af52_caseD_28080;
        }
      }
switchD_00a9af52_caseD_28010:
      if (*(int *)(param_1 + 0x4f0) != 0) {
        FUN_00a7c890();
      }
      FUN_00e26e90();
      FUN_00e272b0(0x28012,0x20010);
      if (*(int *)(param_1 + 0x4f0) != 0) {
        FUN_00a7c890();
      }
      FUN_00e27330(0x2814f,0x20010);
    }
    else {
      switch(uVar1) {
      case 0x28142:
      case 0x28144:
      case 0x28160:
        goto switchD_00a9af52_caseD_28010;
      case 0x28150:
      case 0x28152:
        if (*(int *)(param_1 + 0x4f0) != 0) {
          FUN_00a7c890();
        }
        FUN_00e26e90();
        FUN_00e272b0(0x28012,0x20010);
        if (*(int *)(param_1 + 0x4f0) != 0) {
          FUN_00a7c890();
        }
        FUN_00e27330(0x2815f,0x20010);
        break;
      case 0x28170:
        if (*(int *)(param_1 + 0x4f0) != 0) {
          FUN_00a7c890();
        }
        FUN_00e26e90();
        uVar4 = 0x28012;
        goto LAB_00a9b26a;
      case 0x28220:
        goto switchD_00a9b04c_caseD_28220;
      }
    }
    goto switchD_00a9af52_caseD_28011;
  }
  if (0x2c140 < uVar1) {
    switch(uVar1) {
    case 0x2c142:
    case 0x2c144:
    case 0x2c160:
      goto switchD_00a9b148_caseD_2c050;
    case 0x2c150:
    case 0x2c152:
      if (*(int *)(param_1 + 0x4f0) != 0) {
        FUN_00a7c890();
      }
      FUN_00e26e90();
      FUN_00e272b0(0x2c012,0x20010);
      if (*(int *)(param_1 + 0x4f0) != 0) {
        FUN_00a7c890();
      }
      FUN_00e27330(0x2c15f,0x20010);
      break;
    case 0x2c170:
      if (*(int *)(param_1 + 0x4f0) != 0) {
        FUN_00a7c890();
      }
      FUN_00e26e90();
      uVar4 = 0x2c012;
LAB_00a9b26a:
      FUN_00e272b0(uVar4,0x20010);
      uVar4 = *(undefined4 *)(param_1 + 0x4b0);
      if (*(int *)(param_1 + 0x4f0) == 0) {
        FUN_00e27330(uVar4,0x20010);
      }
      else {
        FUN_00a7c890();
        FUN_00e27330(uVar4,0x20010);
      }
      break;
    case 0x2c220:
switchD_00a9b04c_caseD_28220:
      uVar4 = *(undefined4 *)(param_1 + 0x4b4);
      if (*(int *)(param_1 + 0x4f0) != 0) {
        FUN_00a7c890();
      }
      FUN_00e26e90();
      uVar5 = 0x20220;
      goto LAB_00a9b2ce;
    }
    goto switchD_00a9af52_caseD_28011;
  }
  if (uVar1 == 0x2c140) {
switchD_00a9b148_caseD_2c050:
    if (*(int *)(param_1 + 0x4f0) != 0) {
      FUN_00a7c890();
    }
    FUN_00e26e90();
    FUN_00e272b0(0x2c012,0x20010);
    if (*(int *)(param_1 + 0x4f0) != 0) {
      FUN_00a7c890();
    }
    FUN_00e27330(0x2c14f,0x20010);
  }
  else {
    switch(uVar1) {
    case 0x2c030:
    case 0x2c033:
    case 0x2c035:
      if (*(int *)(param_1 + 0x4f0) != 0) {
        FUN_00a7c890();
      }
      FUN_00e26e90();
      uVar5 = 0x20030;
      uVar4 = 0x2c03f;
      break;
    default:
      goto switchD_00a9af52_caseD_28011;
    case 0x2c040:
switchD_00a9af52_caseD_28040:
      uVar4 = *(undefined4 *)(param_1 + 0x4b4);
      if (*(int *)(param_1 + 0x4f0) == 0) {
        FUN_00e26e90();
        uVar5 = 0x20040;
      }
      else {
        FUN_00a7c890();
        FUN_00e26e90();
        uVar5 = 0x20040;
      }
      break;
    case 0x2c050:
      goto switchD_00a9b148_caseD_2c050;
    case 0x2c071:
switchD_00a9af52_caseD_28070:
      uVar4 = *(undefined4 *)(param_1 + 0x4b4);
      if (*(int *)(param_1 + 0x4f0) == 0) {
        FUN_00e26e90();
        uVar5 = 0x20070;
      }
      else {
        FUN_00a7c890();
        FUN_00e26e90();
        uVar5 = 0x20070;
      }
      break;
    case 0x2c081:
switchD_00a9af52_caseD_28080:
      uVar4 = *(undefined4 *)(param_1 + 0x4b4);
      if (*(int *)(param_1 + 0x4f0) == 0) {
        FUN_00e26e90();
        uVar5 = 0x20080;
      }
      else {
        FUN_00a7c890();
        FUN_00e26e90();
        uVar5 = 0x20080;
      }
    }
LAB_00a9b2ce:
    FUN_00e272b0(uVar4,uVar5);
  }
switchD_00a9af52_caseD_28011:
  if (param_2 != (int *)0x0) {
    puVar6 = &DAT_01be9ca0;
    (**(code **)(*param_2 + 4))(&DAT_01be9ca0);
    iVar2 = FUN_00dd6d80(puVar6);
    if ((iVar2 != 0) && (piVar3 = (int *)FUN_00acdea0(), piVar3 != (int *)0x0)) {
      puVar6 = &DAT_01be9c3c;
      (**(code **)(*piVar3 + 4))(&DAT_01be9c3c);
      iVar2 = FUN_00dd6d80(puVar6);
      if (iVar2 != 0) {
        *(int *)(param_1 + 0xdc0) = piVar3[0x370];
      }
    }
  }
  return;
}

// 007CB8B0  FUN_007cb8b0  size=71  [between]
void __fastcall FUN_007cb8b0(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0xec4) == 0x1000a) &&
     ((iVar1 = FUN_00a82d50(), iVar1 == 2 || (iVar1 = FUN_00a82d50(), iVar1 == 3)))) {
    *(undefined4 *)(param_1 + 0x61c) = 6;
    *(undefined4 *)(param_1 + 0xec4) = 0x10009;
  }
  return;
}

// 007CB9B0  FUN_007cb9b0  size=521  [between]
void __fastcall FUN_007cb9b0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x1c38) = 1;
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    uVar2 = 0x62;
    goto LAB_007cba04;
  case 1:
  case 0xd:
    break;
  case 2:
    FUN_00aa4080(0x69,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 == 0) {
      return;
    }
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    return;
  case 4:
    FUN_00aa4080(99,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (1.0471976 <= *(float *)(param_1 + 0xaa0)) {
      return;
    }
    if (*(int *)(param_1 + 0x20b0) != 0) {
      return;
    }
    if (*(float *)(param_1 + 0x1c84) < *(float *)(param_1 + 0xa90)) {
      return;
    }
    *(undefined4 *)(param_1 + 0x20b0) = 1;
    return;
  case 6:
  case 7:
  case 8:
  case 9:
    return;
  case 10:
    FUN_00aa4080(0x4c,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 0xb:
    *(undefined2 *)(param_1 + 0x824) = 4;
    *(undefined4 *)(param_1 + 0x828) = 0x78;
    break;
  case 0xc:
    uVar2 = 0x61;
LAB_007cba04:
    FUN_00aa4080(uVar2,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    break;
  default:
    goto switchD_007cb9d0_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x61c) = 4;
    return;
  }
switchD_007cb9d0_default:
  return;
}

// 007CBC10  FUN_007cbc10  size=498  [between]
void __fastcall FUN_007cbc10(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x1c38) = 1;
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    uVar2 = 0x65;
    goto LAB_007cbc64;
  case 1:
  case 0xd:
    break;
  case 2:
    FUN_00aa4080(0x68,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 == 0) {
      return;
    }
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    return;
  case 4:
    FUN_00aa4080(0x66,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (1.0471976 <= *(float *)(param_1 + 0xaa0)) {
      return;
    }
    if (*(int *)(param_1 + 0x20b0) != 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x20b0) = 1;
    return;
  case 6:
  case 7:
  case 8:
  case 9:
    return;
  case 10:
    FUN_00aa4080(0x4d,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 0xb:
    *(undefined2 *)(param_1 + 0x824) = 4;
    *(undefined4 *)(param_1 + 0x828) = 0x78;
    break;
  case 0xc:
    uVar2 = 0x60;
LAB_007cbc64:
    FUN_00aa4080(uVar2,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    break;
  default:
    goto switchD_007cbc30_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x61c) = 4;
    return;
  }
switchD_007cbc30_default:
  return;
}

// 007CBE50  FUN_007cbe50  size=498  [between]
void __fastcall FUN_007cbe50(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x1c38) = 1;
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    uVar2 = 0x65;
    goto LAB_007cbea4;
  case 1:
  case 0xd:
    break;
  case 2:
    FUN_00aa4080(0x68,0,0x3e088889,0x3f800000,0x8000040,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 == 0) {
      return;
    }
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    return;
  case 4:
    FUN_00aa4080(0x66,0,0x3e4ccccd,0x3f800000,0x40,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (1.0471976 <= *(float *)(param_1 + 0xaa0)) {
      return;
    }
    if (*(int *)(param_1 + 0x20b0) != 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x20b0) = 1;
    return;
  case 6:
  case 7:
  case 8:
  case 9:
    return;
  case 10:
    FUN_00aa4080(0x4d,0,0x3e088889,0x3f800000,0x8000040,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 0xb:
    *(undefined2 *)(param_1 + 0x824) = 4;
    *(undefined4 *)(param_1 + 0x828) = 0x78;
    break;
  case 0xc:
    uVar2 = 0x60;
LAB_007cbea4:
    FUN_00aa4080(uVar2,0,0x3e088889,0x3f800000,0x8000040,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    break;
  default:
    goto switchD_007cbe70_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x61c) = 4;
    return;
  }
switchD_007cbe70_default:
  return;
}

// 007CC090  FUN_007cc090  size=521  [between]
void __fastcall FUN_007cc090(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x1c38) = 1;
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    uVar2 = 100;
    goto LAB_007cc0e4;
  case 1:
  case 0xd:
    break;
  case 2:
    FUN_00aa4080(0x6a,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 == 0) {
      return;
    }
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    return;
  case 4:
    FUN_00aa4080(0x67,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (1.0471976 <= *(float *)(param_1 + 0xaa0)) {
      return;
    }
    if (*(int *)(param_1 + 0x20b0) != 0) {
      return;
    }
    if (*(float *)(param_1 + 0x1c84) < *(float *)(param_1 + 0xa90)) {
      return;
    }
    *(undefined4 *)(param_1 + 0x20b0) = 1;
    return;
  case 6:
  case 7:
  case 8:
  case 9:
    return;
  case 10:
    FUN_00aa4080(0x4e,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 0xb:
    *(undefined2 *)(param_1 + 0x824) = 4;
    *(undefined4 *)(param_1 + 0x828) = 0x78;
    break;
  case 0xc:
    uVar2 = 0x6a;
LAB_007cc0e4:
    FUN_00aa4080(uVar2,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    break;
  default:
    goto switchD_007cc0b0_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x61c) = 4;
    return;
  }
switchD_007cc0b0_default:
  return;
}

// 007CC340  Emc100::vf14C  size=5  [class]
undefined4 Emc100::vf14C(void)

{
  return 0;
}

// 007CC350  Emc100::vf150  size=3  [class]
void Emc100::vf150(void)

{
  return;
}

// 007CC360  Emc100::vf158  size=5  [class]
undefined4 Emc100::vf158(void)

{
  return 0;
}

// 007CC370  FUN_007cc370  size=136  [between]
void __thiscall FUN_007cc370(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float unaff_ESI;
  float10 fVar3;
  float fStack_38;
  float fStack_34;
  undefined4 local_30 [4];
  undefined1 local_20 [4];
  float local_1c;
  
  if (param_2 != 0) {
    switchD_0080dbae::default();
    FUN_00a8ce90(local_30,local_20);
    fVar3 = (float10)FUN_00ddba30(*(float *)(param_2 + 0x94) + local_1c);
    *(float *)(param_1 + 0x94) = (float)fVar3;
    D3DXVec3TransformNormal(local_30,local_30,param_2 + 0x10);
    fVar1 = *(float *)(param_2 + 0x44);
    fVar2 = *(float *)(param_2 + 0x48);
    *(float *)(param_1 + 0x50) = *(float *)(param_2 + 0x40) + unaff_ESI;
    *(float *)(param_1 + 0x54) = fVar1 + fStack_38;
    *(float *)(param_1 + 0x58) = fVar2 + fStack_34;
    *(undefined4 *)(param_1 + 0x5c) = local_30[0];
  }
  return;
}

// 007CC400  FUN_007cc400  size=140  [between]
void __thiscall FUN_007cc400(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float unaff_ESI;
  float10 fVar4;
  float fStack_38;
  float fStack_34;
  undefined4 local_30 [4];
  undefined1 local_20 [4];
  float local_1c;
  
  if (param_2 != 0) {
    iVar3 = FUN_00a8c760(0x1c);
    if (iVar3 == 0) {
      FUN_00a8ce90(local_30,local_20);
      fVar4 = (float10)FUN_00ddba30(*(float *)(param_1 + 0x94) + local_1c);
      *(float *)(param_2 + 0x94) = (float)fVar4;
      D3DXVec3TransformNormal(local_30,local_30,param_1 + 0x10);
      fVar1 = *(float *)(param_1 + 0x44);
      fVar2 = *(float *)(param_1 + 0x48);
      *(float *)(param_2 + 0x50) = *(float *)(param_1 + 0x40) + unaff_ESI;
      *(float *)(param_2 + 0x54) = fVar1 + fStack_38;
      *(float *)(param_2 + 0x58) = fVar2 + fStack_34;
      *(undefined4 *)(param_2 + 0x5c) = local_30[0];
    }
  }
  return;
}

// 007CC500  FUN_007cc500  size=42  [between]
void FUN_007cc500(void)

{
  int iVar1;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_009f8b10();
    FUN_00a7c950();
    return;
  }
  return;
}

// 007CC540  Emc100::vf13C  size=3  [class]
undefined4 Emc100::vf13C(void)

{
  return 0;
}

// 007CC5E0  Emc100::getAttackInfo  size=354  [class]
undefined4 __thiscall Emc100::getAttackInfo(int param_1,ushort *param_2)

{
  ushort uVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 unaff_EBX;
  uint unaff_ESI;
  undefined1 uStack_8;
  
  iVar3 = FUN_00dd3500(0x110,&DAT_01b7c0b8);
  if (iVar3 == 0) {
LAB_007cc60b:
    FUN_00dd5650(&DAT_01648034);
    return 0;
  }
  iVar3 = CollisionAttackData::CollisionAttackData_3();
  if (iVar3 == 0) goto LAB_007cc60b;
  puVar2 = *(uint **)(iVar3 + 8);
  puVar2[5] = *(uint *)(param_1 + 0x4f0);
  uVar4 = FUN_00a7c7f0();
  FUN_00a7c960(uVar4);
  uVar5 = FUN_00ac8520(*param_2);
  (**(code **)(**(int **)(param_1 + 0x754) + 0x10))(*param_2);
  (**(code **)(**(int **)(param_1 + 0x754) + 0x20))(*param_2);
  uVar6 = (**(code **)(**(int **)(param_1 + 0x754) + 0x18))(*param_2);
  puVar2[3] = unaff_ESI;
  puVar2[2] = uVar6;
  puVar2[1] = uVar5;
  *(undefined1 *)(puVar2 + 4) = uStack_8;
  *puVar2 = (uint)*param_2;
  *(undefined2 *)(puVar2 + 0x21) = 0x1701;
  uVar1 = *param_2;
  if (uVar1 == 4) {
    *puVar2 = 0x112;
    puVar2[0x23] = puVar2[0x23] | 0x20000000;
    puVar2[0x24] = puVar2[0x24] | 0x2000000;
    *(undefined2 *)(puVar2 + 0x21) = 0x1701;
  }
  else if (uVar1 == 5) {
    *puVar2 = 0x113;
    puVar2[0x23] = puVar2[0x23] | 0x20000100;
    puVar2[0x24] = puVar2[0x24] | 0x2000000;
    *(undefined2 *)(puVar2 + 0x21) = 0x1701;
  }
  else {
    if (uVar1 != 6) goto LAB_007cc72c;
    *puVar2 = 0x113;
    puVar2[0x23] = puVar2[0x23] | 0x20000000;
    puVar2[0x24] = puVar2[0x24] | 0x2000000;
    *(undefined2 *)(puVar2 + 0x21) = 0x1701;
  }
  *(undefined1 *)((int)puVar2 + 0x11) = 10;
LAB_007cc72c:
  FUN_00aa56a0(puVar2);
  return unaff_EBX;
}

// 007CC750  Emc100::vf44  size=345  [class]
void __fastcall Emc100::vf44(int param_1)

{
  int iVar1;
  
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x7b0) + 8))();
    if (iVar1 != 0) {
      HkRemovePhysicsSystem::HkRemovePhysicsSystem();
      if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0x7b0) + 4))(1);
        *(undefined4 *)(param_1 + 0x7b0) = 0;
      }
    }
  }
  FUN_00a9d8a0();
  FUN_00c57120(*(undefined4 *)(param_1 + 0x4f0));
  if (*(int *)(param_1 + 0x764) != 0) {
    FUN_008e3c10();
    FUN_008e1c60();
  }
  FUN_00a92a00();
  FUN_00a97d20();
  iVar1 = param_1;
  FUN_00c1cf50(param_1);
  FUN_00c1d1c0(iVar1);
  RayCastManager::getWork(param_1 + 0x1cc0);
  RayCastManager::getWork(param_1 + 0x1cc4);
  RayCastManager::getWork(param_1 + 0x1cc8);
  RayCastManager::getWork(param_1 + 0x1ccc);
  RayCastManager::getWork(param_1 + 0x1cd0);
  RayCastManager::getWork(param_1 + 0x1cd4);
  RayCastManager::getWork(param_1 + 0x1cd8);
  RayCastManager::getWork(param_1 + 0x1cdc);
  RayCastManager::getWork(param_1 + 0x1ce4);
  RayCastManager::getWork(param_1 + 0x1ce8);
  if (*(int *)(param_1 + 0xa84) != 0) {
    RayCastManager::getWork(param_1 + 0x1ce0);
  }
  BehaviorEmBase::vf44();
  return;
}

// 007CC8B0  FUN_007cc8b0  size=1837  [between]
void __fastcall FUN_007cc8b0(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  undefined1 auStack_f4 [4];
  float local_f0;
  float local_ec;
  float local_e8;
  float fStack_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 auStack_68 [8];
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  undefined1 local_50 [76];
  
  if (*(float *)(param_1 + 0x1cec) < 30.0) {
    *(float *)(param_1 + 0x1cec) = *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0x1cec);
    return;
  }
  local_e0 = *(float *)(param_1 + 0x40);
  local_d8 = *(float *)(param_1 + 0x48);
  local_d4 = *(float *)(param_1 + 0x4c);
  local_dc = *(float *)(param_1 + 0x44) + 0.2;
  iVar1 = FUN_009f8b40();
  uVar2 = iVar1 << 0x10 | 10;
  iVar1 = FUN_009f8b40();
  uVar3 = iVar1 << 0x10 | 0x1e;
  iVar1 = FUN_007cb7c0();
  if (iVar1 != 0) {
    local_b0 = 0.0;
    local_ac = 0.0;
    local_a8 = 5.0;
    local_e8 = 5.0;
    local_f0 = 0.0;
    local_ec = 0.0;
    FUN_00ddc1d0(local_50,param_1 + 0x90,5);
    D3DXVec3TransformNormal(&local_b0,&local_b0,local_50);
    FUN_00ddc1d0(&fStack_5c,param_1 + 0x90,5);
    D3DXVec3TransformNormal(&stack0xffffff04,&stack0xffffff04,&fStack_5c);
    local_d8 = -1.5;
    local_d4 = 0.0;
    fStack_d0 = 0.0;
    local_e8 = 1.5;
    fStack_e4 = 0.0;
    local_e0 = 0.0;
    uStack_70 = 0;
    uStack_74 = 0;
    uStack_78 = 0;
    fStack_7c = 0.0;
    fStack_84 = 0.0;
    uStack_88 = 0;
    uStack_8c = 0;
    uStack_90 = 0;
    fStack_98 = 0.0;
    fStack_9c = 0.0;
    fStack_a0 = 0.0;
    fStack_a4 = 0.0;
    uStack_6c = 0x3f800000;
    fStack_80 = 1.0;
    fStack_94 = 1.0;
    local_a8 = 1.0;
    if (*(float *)(param_1 + 0x98) != 0.0) {
      D3DXMatrixRotationZ(auStack_68,*(undefined4 *)(param_1 + 0x98));
      D3DXMatrixMultiply(&local_b0,&uStack_70,&local_b0);
    }
    if (*(float *)(param_1 + 0x94) != 0.0) {
      D3DXMatrixRotationY(auStack_68,*(undefined4 *)(param_1 + 0x94));
      D3DXMatrixMultiply(&local_b0,&uStack_70,&local_b0);
    }
    if (*(float *)(param_1 + 0x90) != 0.0) {
      D3DXMatrixRotationX(auStack_68,*(undefined4 *)(param_1 + 0x90));
      D3DXMatrixMultiply(&local_b0,&uStack_70,&local_b0);
    }
    D3DXVec3TransformNormal(&local_d8,&local_d8,&local_a8);
    fStack_e4 = fStack_84 + fStack_e4;
    local_e0 = fStack_80 + local_e0;
    local_dc = fStack_7c + local_dc;
    D3DXVec3TransformNormal(auStack_f4,auStack_f4,&fStack_b4);
    fStack_d0 = fStack_60 + fStack_d0;
    fStack_cc = fStack_5c + fStack_cc;
    fStack_c8 = fStack_58 + fStack_c8;
    local_b0 = local_b0 + fStack_c0;
    local_ac = local_ac + fStack_bc;
    local_a8 = local_a8 + fStack_b8;
    fStack_a4 = fStack_a4 + fStack_b4;
    local_f0 = fStack_d0 + local_f0;
    local_ec = fStack_cc + local_ec;
    local_e8 = fStack_c8 + local_e8;
    fStack_e4 = fStack_c4 + fStack_e4;
    fStack_a0 = fStack_c0 + local_e0;
    fStack_9c = fStack_bc + local_dc;
    fStack_98 = fStack_b8 + local_d8;
    fStack_94 = fStack_b4 + local_d4;
    FUN_0090fa30(param_1 + 0x1ce4,0,&fStack_a0,0x3dcccccd,&local_b0,uVar3,"Blan View FrontRight");
    fStack_a0 = fStack_d0 + local_e0;
    fStack_9c = fStack_cc + local_dc;
    fStack_98 = fStack_c8 + local_d8;
    fStack_94 = fStack_c4 + local_d4;
    FUN_0090fa30(param_1 + 0x1ce8,0,&fStack_a0,0x3dcccccd,&local_f0,uVar3,"Blan View FrontLeft");
  }
  switch(*(undefined4 *)(param_1 + 0x1cf0)) {
  case 0:
    local_f0 = 0.0;
    local_ec = 0.0;
    local_e8 = 18.0;
    FUN_00ddc1d0(local_50,param_1 + 0x90,5);
    D3DXVec3TransformNormal(&local_f0,&local_f0,local_50);
    FUN_0090fa30(param_1 + 0x1cc0,0,&local_ec,0x3dcccccd,&stack0xffffff04,uVar2,"Blan View Front");
    pcVar4 = "Blan View Front Ground";
    iVar1 = param_1 + 0x1cd0;
    break;
  case 1:
    local_f0 = 0.0;
    local_ec = 0.0;
    local_e8 = -15.0;
    FUN_00ddc1d0(local_50,param_1 + 0x90,5);
    D3DXVec3TransformNormal(&local_f0,&local_f0,local_50);
    FUN_0090fa30(param_1 + 0x1cc4,0,&local_ec,0x3dcccccd,&stack0xffffff04,uVar2,"Blan View Back");
    pcVar4 = "Blan View Back Ground";
    iVar1 = param_1 + 0x1cd4;
    break;
  case 2:
    local_f0 = -15.0;
    local_ec = 0.0;
    local_e8 = 0.0;
    FUN_00ddc1d0(local_50,param_1 + 0x90,5);
    D3DXVec3TransformNormal(&local_f0,&local_f0,local_50);
    FUN_0090fa30(param_1 + 0x1cc8,0,&local_ec,0x3dcccccd,&stack0xffffff04,uVar2,"Blan View Right");
    pcVar4 = "Blan View Right Ground";
    iVar1 = param_1 + 0x1cd8;
    break;
  case 3:
    local_f0 = 15.0;
    local_ec = 0.0;
    local_e8 = 0.0;
    FUN_00ddc1d0(local_50,param_1 + 0x90,5);
    D3DXVec3TransformNormal(&local_f0,&local_f0,local_50);
    local_ec = local_ec + 0.2;
    FUN_0090fa30(param_1 + 0x1ccc,0,&local_e0,0x3dcccccd,&local_f0,uVar2,"Blan View Left");
    FUN_0090fa30(param_1 + 0x1cdc,0,&local_e0,0x3dcccccd,&local_f0,uVar3,"Blan View Left Ground");
    *(int *)(param_1 + 0x1cf0) = *(int *)(param_1 + 0x1cf0) + 1;
  case 4:
    iVar1 = *(int *)(param_1 + 0xa84);
    if (iVar1 != 0) {
      local_f0 = *(float *)(iVar1 + 0x40) - local_e0;
      local_e8 = *(float *)(iVar1 + 0x48) - local_d8;
      fStack_e4 = *(float *)(iVar1 + 0x4c) - local_d4;
      local_ec = (*(float *)(iVar1 + 0x44) - local_dc) + 0.2;
      FUN_0090fa30(param_1 + 0x1ce0,0,&local_e0,0x3dcccccd,&local_f0,uVar3,"Blan View Pl Ground");
    }
    *(undefined4 *)(param_1 + 0x1cf0) = 0;
    *(undefined4 *)(param_1 + 0x1cec) = 0;
    return;
  default:
    return;
  }
  FUN_0090fa30(iVar1,0,&local_ec,0x3dcccccd,&stack0xffffff04,uVar3,pcVar4);
  *(int *)(param_1 + 0x1cf0) = *(int *)(param_1 + 0x1cf0) + 1;
  return;
}

// 007CD000  FUN_007cd000  size=215  [between]
int __fastcall FUN_007cd000(int param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  float local_4;
  
  local_4 = 5.0;
  pfVar1 = (float *)(param_1 + 0x1d00);
  iVar6 = 0;
  iVar5 = FUN_00907640(param_1 + 0x1cdc,0,pfVar1);
  if (iVar5 != 0) {
    iVar6 = 2;
    fVar2 = *(float *)(param_1 + 0x40) - *pfVar1;
    fVar4 = *(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x1d04);
    fVar3 = *(float *)(param_1 + 0x48) - *(float *)(param_1 + 0x1d08);
    local_4 = fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3;
  }
  iVar5 = FUN_00907640(param_1 + 0x1cd8,0,pfVar1);
  if (iVar5 == 0) {
    return iVar6;
  }
  fVar2 = *(float *)(param_1 + 0x40) - *pfVar1;
  fVar4 = *(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x1d04);
  fVar3 = *(float *)(param_1 + 0x48) - *(float *)(param_1 + 0x1d08);
  fVar2 = fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3;
  if ((iVar6 == 2) && (local_4 <= fVar2)) {
    if (fVar2 <= local_4) {
      return 0;
    }
    return 2;
  }
  return 3;
}

// 007CD0E0  FUN_007cd0e0  size=1013  [between]
undefined4 __fastcall FUN_007cd0e0(int param_1)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  float unaff_EBX;
  float unaff_ESI;
  float unaff_EDI;
  float10 fVar6;
  undefined4 *puStack_64;
  float fStack_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20 [7];
  
  puStack_64 = (undefined4 *)0x7cd0f9;
  iVar3 = FUN_00a82a20();
  iVar4 = *(int *)(param_1 + 0xa84);
  local_50 = *(float *)(iVar4 + 0x40) - *(float *)(iVar3 + 0x40);
  local_4c = *(float *)(iVar4 + 0x44) - *(float *)(iVar3 + 0x44);
  local_48 = *(float *)(iVar4 + 0x48) - *(float *)(iVar3 + 0x48);
  local_44 = *(float *)(iVar4 + 0x4c) - *(float *)(iVar3 + 0x4c);
  puStack_64 = (undefined4 *)0x7cd132;
  iVar4 = FUN_00a82a20();
  piVar1 = *(int **)(param_1 + 0xa84);
  puStack_64 = local_20;
  pfVar5 = (float *)(**(code **)(*piVar1 + 0x204))();
  local_44 = (*pfVar5 + (float)piVar1[0x10]) * 0.5 - *(float *)(iVar4 + 0x40);
  fStack_40 = (pfVar5[1] + (float)piVar1[0x11]) * 0.5 - *(float *)(iVar4 + 0x44);
  fStack_3c = (pfVar5[2] + (float)piVar1[0x12]) * 0.5 - *(float *)(iVar4 + 0x48);
  fStack_38 = (pfVar5[3] + (float)piVar1[0x13]) * 0.5 - *(float *)(iVar4 + 0x4c);
  iVar4 = FUN_00a82a20();
  pfVar5 = (float *)(**(code **)(**(int **)(param_1 + 0xa84) + 0x204))(&uStack_24);
  fStack_38 = *pfVar5 - *(float *)(iVar4 + 0x40);
  fStack_34 = pfVar5[1] - *(float *)(iVar4 + 0x44);
  fStack_30 = pfVar5[2] - *(float *)(iVar4 + 0x48);
  fStack_2c = pfVar5[3] - *(float *)(iVar4 + 0x4c);
  if (*(float *)(param_1 + 0xa8c) <= 625.0) {
    if (((SQRT(local_50 * local_50 + fStack_54 * fStack_54 + unaff_EBX * unaff_EBX) == 0.0) ||
        (SQRT(fStack_40 * fStack_40 + local_44 * local_44 + local_48 * local_48) == 0.0)) ||
       (SQRT(fStack_30 * fStack_30 + fStack_38 * fStack_38 + fStack_34 * fStack_34) == 0.0)) {
      return 1;
    }
    uStack_28 = 0;
    uStack_24 = 0;
    local_20[0] = 0x3f800000;
    iVar4 = FUN_00a82a20();
    D3DXVec3TransformNormal(&uStack_28,&uStack_28,iVar4 + 0x10);
    fVar2 = unaff_ESI * unaff_ESI + unaff_EDI * unaff_EDI + (float)puStack_64 * (float)puStack_64;
    if (fVar2 < 0.0 == (fVar2 == 0.0)) {
      FUN_00ddf460(&puStack_64,&puStack_64);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      puStack_64 = (undefined4 *)0x0;
    }
    fVar2 = local_4c * local_4c + local_50 * local_50 + fStack_54 * fStack_54;
    if (fVar2 < 0.0 == (fVar2 == 0.0)) {
      FUN_00ddf460(&fStack_54,&fStack_54);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      fStack_54 = 0.0;
      local_50 = 1.0;
      local_4c = 0.0;
    }
    fVar2 = fStack_3c * fStack_3c + fStack_40 * fStack_40 + local_44 * local_44;
    if (fVar2 < 0.0 == (fVar2 == 0.0)) {
      FUN_00ddf460(&local_44,&local_44);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_44 = 0.0;
      fStack_40 = 1.0;
      fStack_3c = 0.0;
    }
    fVar6 = (float10)FUN_00fdc4e0();
    if (((fVar6 < (float10)0.5235988 != (fVar6 == (float10)0.5235988)) ||
        (fVar6 = (float10)FUN_00fdc4e0(),
        fVar6 < (float10)0.5235988 != (fVar6 == (float10)0.5235988))) ||
       (fVar6 = (float10)FUN_00fdc4e0(), fVar6 < (float10)0.5235988 != (fVar6 == (float10)0.5235988)
       )) {
      return 1;
    }
  }
  return 0;
}

// 007CD4E0  Emc100::vf268  size=103  [class]
undefined4 __thiscall Emc100::vf268(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  undefined4 uVar1;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  
  if (*(int *)(param_1 + 0x4e4) != 0) {
    return 0;
  }
  local_20 = param_4[8];
  local_1c = param_4[9];
  local_18 = param_4[10];
  local_14 = 0x3f800000;
  if (*param_4 == 1) {
    uVar1 = 2;
  }
  else {
    if (*param_4 != 2) {
      return 0;
    }
    uVar1 = 4;
  }
  FUN_00a883f0(uVar1,0,&local_20);
  return 1;
}

// 007CD550  FUN_007cd550  size=254  [between]
void __thiscall
FUN_007cd550(int param_1,uint param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined4 uVar1;
  int iVar2;
  
  if (((*(int *)(param_1 + 0x4e4) != 0) && (param_2 != 0x80001)) && (param_2 != 0x80000)) {
    return;
  }
  if ((param_2 & 0xffff0000) != 0x80000) {
    uVar1 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xeb4) = uVar1;
    iVar2 = FUN_00a8cab0();
    if (((iVar2 == 0x10000) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x10009)) ||
       ((iVar2 = FUN_00a8cab0(), iVar2 == 0x1000a || (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000d)))) {
      uVar1 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0x1cbc) = uVar1;
    }
    if (*(int *)(param_1 + 0x1c30) != 0) {
      *(undefined4 *)(param_1 + 0x1cbc) = 0x1000b;
    }
    *(undefined4 *)(param_1 + 0xeb8) = *(undefined4 *)(param_1 + 0xea0);
  }
  FUN_007cb240();
  FUN_00a8caf0(param_2,param_4,param_5,param_6);
  *(int *)(param_1 + 0xea0) = param_3;
  if (-1 < param_3) {
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0xf00) = 0;
    return;
  }
  FUN_00a962d0(1,0);
  *(undefined4 *)(param_1 + 0xf00) = 0x40;
  return;
}

// 007CD650  Emc100::vf34C  size=185  [class]
void __fastcall Emc100::vf34C(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x4e4) == 0) {
    uVar1 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xeb4) = uVar1;
    iVar2 = FUN_00a8cab0();
    if ((((iVar2 == 0x10000) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x10009)) ||
        (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000a)) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000d)) {
      uVar1 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0x1cbc) = uVar1;
    }
    if (*(int *)(param_1 + 0x1c30) != 0) {
      *(undefined4 *)(param_1 + 0x1cbc) = 0x1000b;
    }
    *(undefined4 *)(param_1 + 0xeb8) = *(undefined4 *)(param_1 + 0xea0);
    FUN_007cb240();
    FUN_00a8caf0(0x10000,0,0,0);
    *(undefined4 *)(param_1 + 0xea0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0xf00) = 0;
    return;
  }
  return;
}

// 007CD710  FUN_007cd710  size=217  [between]
void __thiscall FUN_007cd710(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x1cb4) = param_2;
  *(undefined4 *)(param_1 + 0xea4) = 1;
  *(undefined4 *)(param_1 + 0x1cb8) = param_3;
  if (*(int *)(param_1 + 0x4e4) == 0) {
    uVar1 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xeb4) = uVar1;
    iVar2 = FUN_00a8cab0();
    if ((((iVar2 == 0x10000) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x10009)) ||
        (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000a)) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000d)) {
      uVar1 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0x1cbc) = uVar1;
    }
    if (*(int *)(param_1 + 0x1c30) != 0) {
      *(undefined4 *)(param_1 + 0x1cbc) = 0x1000b;
    }
    *(undefined4 *)(param_1 + 0xeb8) = *(undefined4 *)(param_1 + 0xea0);
    FUN_007cb240();
    FUN_00a8caf0(0x10001,0,0,0);
    *(undefined4 *)(param_1 + 0xea0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0xf00) = 0;
    return;
  }
  return;
}

// 007CD7F0  FUN_007cd7f0  size=217  [between]
void __thiscall FUN_007cd7f0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x1cb4) = param_2;
  *(undefined4 *)(param_1 + 0xea4) = 2;
  *(undefined4 *)(param_1 + 0x1cb8) = param_3;
  if (*(int *)(param_1 + 0x4e4) == 0) {
    uVar1 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xeb4) = uVar1;
    iVar2 = FUN_00a8cab0();
    if ((((iVar2 == 0x10000) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x10009)) ||
        (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000a)) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000d)) {
      uVar1 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0x1cbc) = uVar1;
    }
    if (*(int *)(param_1 + 0x1c30) != 0) {
      *(undefined4 *)(param_1 + 0x1cbc) = 0x1000b;
    }
    *(undefined4 *)(param_1 + 0xeb8) = *(undefined4 *)(param_1 + 0xea0);
    FUN_007cb240();
    FUN_00a8caf0(0x10002,0,0,0);
    *(undefined4 *)(param_1 + 0xea0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0xf00) = 0;
    return;
  }
  return;
}

// 007CD8D0  FUN_007cd8d0  size=217  [between]
void __thiscall FUN_007cd8d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x1cb4) = param_2;
  *(undefined4 *)(param_1 + 0xea4) = 1;
  *(undefined4 *)(param_1 + 0x1cb8) = param_3;
  if (*(int *)(param_1 + 0x4e4) == 0) {
    uVar1 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xeb4) = uVar1;
    iVar2 = FUN_00a8cab0();
    if ((((iVar2 == 0x10000) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x10009)) ||
        (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000a)) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000d)) {
      uVar1 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0x1cbc) = uVar1;
    }
    if (*(int *)(param_1 + 0x1c30) != 0) {
      *(undefined4 *)(param_1 + 0x1cbc) = 0x1000b;
    }
    *(undefined4 *)(param_1 + 0xeb8) = *(undefined4 *)(param_1 + 0xea0);
    FUN_007cb240();
    FUN_00a8caf0(0x10003,0,0,0);
    *(undefined4 *)(param_1 + 0xea0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0xf00) = 0;
    return;
  }
  return;
}

// 007CD9B0  FUN_007cd9b0  size=217  [between]
void __thiscall FUN_007cd9b0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x1cb4) = param_2;
  *(undefined4 *)(param_1 + 0xea4) = 2;
  *(undefined4 *)(param_1 + 0x1cb8) = param_3;
  if (*(int *)(param_1 + 0x4e4) == 0) {
    uVar1 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xeb4) = uVar1;
    iVar2 = FUN_00a8cab0();
    if ((((iVar2 == 0x10000) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x10009)) ||
        (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000a)) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000d)) {
      uVar1 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0x1cbc) = uVar1;
    }
    if (*(int *)(param_1 + 0x1c30) != 0) {
      *(undefined4 *)(param_1 + 0x1cbc) = 0x1000b;
    }
    *(undefined4 *)(param_1 + 0xeb8) = *(undefined4 *)(param_1 + 0xea0);
    FUN_007cb240();
    FUN_00a8caf0(0x10004,0,0,0);
    *(undefined4 *)(param_1 + 0xea0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0xf00) = 0;
    return;
  }
  return;
}

// 007CDA90  FUN_007cda90  size=217  [between]
void __thiscall FUN_007cda90(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x1cb4) = param_2;
  *(undefined4 *)(param_1 + 0xea4) = 1;
  *(undefined4 *)(param_1 + 0x1cb8) = param_3;
  if (*(int *)(param_1 + 0x4e4) == 0) {
    uVar1 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xeb4) = uVar1;
    iVar2 = FUN_00a8cab0();
    if ((((iVar2 == 0x10000) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x10009)) ||
        (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000a)) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000d)) {
      uVar1 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0x1cbc) = uVar1;
    }
    if (*(int *)(param_1 + 0x1c30) != 0) {
      *(undefined4 *)(param_1 + 0x1cbc) = 0x1000b;
    }
    *(undefined4 *)(param_1 + 0xeb8) = *(undefined4 *)(param_1 + 0xea0);
    FUN_007cb240();
    FUN_00a8caf0(0x1000c,0,0,0);
    *(undefined4 *)(param_1 + 0xea0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0xf00) = 0;
    return;
  }
  return;
}

// 007CDB70  FUN_007cdb70  size=217  [between]
void __thiscall FUN_007cdb70(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x1cb4) = param_2;
  *(undefined4 *)(param_1 + 0xea4) = 2;
  *(undefined4 *)(param_1 + 0x1cb8) = param_3;
  if (*(int *)(param_1 + 0x4e4) == 0) {
    uVar1 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xeb4) = uVar1;
    iVar2 = FUN_00a8cab0();
    if ((((iVar2 == 0x10000) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x10009)) ||
        (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000a)) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000d)) {
      uVar1 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0x1cbc) = uVar1;
    }
    if (*(int *)(param_1 + 0x1c30) != 0) {
      *(undefined4 *)(param_1 + 0x1cbc) = 0x1000b;
    }
    *(undefined4 *)(param_1 + 0xeb8) = *(undefined4 *)(param_1 + 0xea0);
    FUN_007cb240();
    FUN_00a8caf0(0x1000c,0,0,0);
    *(undefined4 *)(param_1 + 0xea0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0xf00) = 0;
    return;
  }
  return;
}

// 007CDD40  FUN_007cdd40  size=844  [between]
void __fastcall FUN_007cdd40(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  undefined4 uVar6;
  
  if (100.0 < *(float *)(param_1 + 0xa8c)) {
    fVar1 = *(float *)(param_1 + 0xa8c);
    if (!NAN(fVar1) && 100.0 < fVar1 != (fVar1 == 100.0)) {
      iVar2 = FUN_00c4ec80();
      if (iVar2 == 0) {
        FUN_00c4d210(*(undefined4 *)(param_1 + 0x4f0),1,0);
        FUN_00c4d210(*(undefined4 *)(param_1 + 0x4f0),2,0);
        iVar4 = *(int *)(param_1 + 0x4f0);
      }
      else {
        iVar4 = FUN_00a81330();
        if ((iVar4 == *(int *)(param_1 + 0x4f0)) && (*(short *)(iVar2 + 0x38) != 1)) {
          FUN_00c4d210(*(int *)(param_1 + 0x4f0),1,0);
        }
        iVar4 = FUN_00a81330();
        if ((iVar4 == *(int *)(param_1 + 0x4f0)) && (*(short *)(iVar2 + 0x38) != 2)) {
          FUN_00c4d210(*(int *)(param_1 + 0x4f0),2,0);
        }
        iVar3 = FUN_00a81330();
        iVar4 = *(int *)(param_1 + 0x4f0);
        if ((iVar3 != iVar4) || (*(short *)(iVar2 + 0x38) == 3)) goto LAB_007ce037;
      }
      FUN_00c4d210(iVar4,3,0);
    }
LAB_007ce037:
    fVar1 = *(float *)(param_1 + 0xa8c);
    if (NAN(fVar1) || 900.0 < fVar1 == (fVar1 == 900.0)) {
      return;
    }
    FUN_00c4d210(*(undefined4 *)(param_1 + 0x4f0),1,0);
    FUN_00c4d210(*(undefined4 *)(param_1 + 0x4f0),2,0);
    goto LAB_007ce074;
  }
  iVar2 = FUN_00a12210(0x103);
  fVar5 = (float10)FUN_00a8ec30(iVar2 + 0x40);
  fVar5 = (float10)FUN_00ddba30((float)(fVar5 - (float10)*(float *)(param_1 + 0x94)));
  fVar5 = (float10)FUN_00ddba30((float)((float10)*(float *)(param_1 + 0xa9c) - fVar5));
  if (((fVar5 < (float10)-1.5707964) ||
      (fVar5 < (float10)1.5707964 == (fVar5 == (float10)1.5707964))) ||
     (*(int *)(param_1 + 0xf08) == 0)) {
    iVar2 = FUN_00c4ec80();
    if (iVar2 == 0) {
      iVar4 = *(int *)(param_1 + 0x4f0);
LAB_007cddf4:
      uVar6 = 0;
      goto LAB_007cddf9;
    }
    iVar3 = FUN_00a81330();
    iVar4 = *(int *)(param_1 + 0x4f0);
    if ((iVar3 == iVar4) && (*(short *)(iVar2 + 0x38) != 1)) goto LAB_007cddf4;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x4f0);
    uVar6 = 1;
LAB_007cddf9:
    FUN_00c4d210(iVar4,1,uVar6);
  }
  iVar2 = FUN_00a12210(0x203);
  fVar5 = (float10)FUN_00a8ec30(iVar2 + 0x40);
  fVar5 = (float10)FUN_00ddba30((float)(fVar5 - (float10)*(float *)(param_1 + 0x94)));
  fVar5 = (float10)FUN_00ddba30((float)((float10)*(float *)(param_1 + 0xa9c) - fVar5));
  if (((fVar5 < (float10)-1.5707964) ||
      (fVar5 < (float10)1.5707964 == (fVar5 == (float10)1.5707964))) ||
     (*(int *)(param_1 + 0xf04) == 0)) {
    iVar2 = FUN_00c4ec80();
    if (iVar2 == 0) {
      iVar4 = *(int *)(param_1 + 0x4f0);
      uVar6 = 0;
      goto LAB_007cdea6;
    }
    iVar3 = FUN_00a81330();
    iVar4 = *(int *)(param_1 + 0x4f0);
    if ((iVar3 == iVar4) && (*(short *)(iVar2 + 0x38) != 2)) {
      uVar6 = 0;
      goto LAB_007cdea6;
    }
  }
  else {
    iVar4 = *(int *)(param_1 + 0x4f0);
    uVar6 = 1;
LAB_007cdea6:
    FUN_00c4d210(iVar4,2,uVar6);
  }
  iVar2 = FUN_00a12210(0x303);
  fVar5 = (float10)FUN_00a8ec30(iVar2 + 0x40);
  fVar5 = (float10)FUN_00ddba30((float)(fVar5 - (float10)*(float *)(param_1 + 0x94)));
  fVar5 = (float10)FUN_00ddba30((float)((float10)*(float *)(param_1 + 0xa9c) - fVar5));
  if ((((float10)-1.5707964 <= fVar5) &&
      (fVar5 < (float10)1.5707964 != (fVar5 == (float10)1.5707964))) &&
     (*(int *)(param_1 + 0xf0c) != 0)) {
    FUN_00c4d210(*(undefined4 *)(param_1 + 0x4f0),3,1);
    return;
  }
  iVar2 = FUN_00c4ec80();
  if (iVar2 != 0) {
    iVar4 = FUN_00a81330();
    if (iVar4 != *(int *)(param_1 + 0x4f0)) {
      return;
    }
    if (*(short *)(iVar2 + 0x38) == 3) {
      return;
    }
    FUN_00c4d210(*(int *)(param_1 + 0x4f0),3,0);
    return;
  }
LAB_007ce074:
  FUN_00c4d210(*(undefined4 *)(param_1 + 0x4f0),3,0);
  return;
}

// 007CE090  Emc100::vf33C  size=3114  [class]
void __thiscall Emc100::vf33C(int *param_1,undefined4 *param_2,uint *param_3)

{
  byte bVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int local_4;
  
  puVar2 = param_2;
  *param_2 = 0;
  param_2[1] = 0;
  param_2 = (undefined4 *)0x0;
  uVar6 = 2;
  local_4 = 0x10;
  do {
    uVar5 = 0x80000000 >> ((byte)(uVar6 - 2) & 0x1f);
    uVar3 = uVar6 - 2 >> 5;
    if (((param_3[uVar3 + 4] & uVar5) != 0) && ((param_3[uVar3] & uVar5) == 0)) {
      param_2 = (undefined4 *)((int)param_2 + 1);
    }
    uVar5 = 0x80000000 >> ((byte)(uVar6 - 1) & 0x1f);
    uVar3 = uVar6 - 1 >> 5;
    if (((param_3[uVar3 + 4] & uVar5) != 0) && ((param_3[uVar3] & uVar5) == 0)) {
      param_2 = (undefined4 *)((int)param_2 + 1);
    }
    uVar3 = 0x80000000 >> ((byte)uVar6 & 0x1f);
    if (((param_3[(uVar6 >> 5) + 4] & uVar3) != 0) && ((param_3[uVar6 >> 5] & uVar3) == 0)) {
      param_2 = (undefined4 *)((int)param_2 + 1);
    }
    uVar5 = 0x80000000 >> ((byte)(uVar6 + 1) & 0x1f);
    uVar3 = uVar6 + 1 >> 5;
    if (((param_3[uVar3 + 4] & uVar5) != 0) && ((param_3[uVar3] & uVar5) == 0)) {
      param_2 = (undefined4 *)((int)param_2 + 1);
    }
    uVar6 = uVar6 + 4;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  if (param_2 == (undefined4 *)0x40) {
    param_3[6] = 0x42000;
    FUN_00dd5650(&DAT_0163ea80);
    return;
  }
  uVar6 = param_3[4];
  if (((((int)uVar6 < 0) && ((~(*param_3 >> 0x1f) & 1) != 0)) ||
      (((uVar6 & 0x40000000) != 0 && ((~(*param_3 >> 0x1e) & 1) != 0)))) ||
     ((((uVar6 & 0x8000000) != 0 && ((~(*param_3 >> 0x1b) & 1) != 0)) ||
      (iVar4 = FUN_0043f830(8), iVar4 != 0)))) {
    puVar2[1] = 1;
  }
  param_2 = (undefined4 *)0x0;
  uVar6 = 2;
  local_4 = 5;
  do {
    bVar1 = (byte)uVar6;
    uVar5 = 0x80000000 >> (bVar1 - 2 & 0x1f);
    uVar3 = uVar6 - 2 >> 5;
    if (((param_3[uVar3 + 4] & uVar5) != 0) && ((param_3[uVar3 + 2] & uVar5) == 0)) {
      param_2 = (undefined4 *)((int)param_2 + 1);
    }
    uVar5 = 0x80000000 >> (bVar1 - 1 & 0x1f);
    uVar3 = uVar6 - 1 >> 5;
    if (((param_3[uVar3 + 4] & uVar5) != 0) && ((param_3[uVar3 + 2] & uVar5) == 0)) {
      param_2 = (undefined4 *)((int)param_2 + 1);
    }
    uVar3 = 0x80000000 >> (bVar1 & 0x1f);
    if (((param_3[(uVar6 >> 5) + 4] & uVar3) != 0) && ((param_3[(uVar6 >> 5) + 2] & uVar3) == 0)) {
      param_2 = (undefined4 *)((int)param_2 + 1);
    }
    uVar5 = 0x80000000 >> (bVar1 + 1 & 0x1f);
    uVar3 = uVar6 + 1 >> 5;
    if (((param_3[uVar3 + 4] & uVar5) != 0) && ((param_3[uVar3 + 2] & uVar5) == 0)) {
      param_2 = (undefined4 *)((int)param_2 + 1);
    }
    uVar5 = 0x80000000 >> (bVar1 + 2 & 0x1f);
    uVar3 = uVar6 + 2 >> 5;
    if (((param_3[uVar3 + 4] & uVar5) != 0) && ((param_3[uVar3 + 2] & uVar5) == 0)) {
      param_2 = (undefined4 *)((int)param_2 + 1);
    }
    uVar5 = 0x80000000 >> (bVar1 + 3 & 0x1f);
    uVar3 = uVar6 + 3 >> 5;
    if (((param_3[uVar3 + 4] & uVar5) != 0) && ((param_3[uVar3 + 2] & uVar5) == 0)) {
      param_2 = (undefined4 *)((int)param_2 + 1);
    }
    uVar6 = uVar6 + 6;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  if ((param_2 == (undefined4 *)0x1) ||
     (((((uVar6 = param_3[4], (int)uVar6 < 0 && ((int)param_3[2] < 0)) &&
        ((uVar6 & 0x40000000) != 0)) &&
       (((param_3[2] >> 0x1e & 1) != 0 && (iVar4 = FUN_0043f860(4), iVar4 != 0)))) &&
      (iVar4 = FUN_0043f860(8), iVar4 != 0)))) goto LAB_007ce308;
  if (((*(byte *)(param_1 + 0x3a7) & 1) != 0) &&
     ((((int)uVar6 < 0 && ((~(*param_3 >> 0x1f) & 1) != 0)) ||
      ((iVar4 = FUN_0043f830(1), iVar4 != 0 ||
       ((iVar4 = FUN_0043f830(4), iVar4 != 0 || (iVar4 = FUN_0043f830(8), iVar4 != 0)))))))) {
    (**(code **)(*param_1 + 0x344))(6,1,1);
    iVar4 = FUN_00a8cab0();
    if ((iVar4 != 0x70003) &&
       (((((iVar4 != 0x70004 && (iVar4 != 0x70005)) && (iVar4 != 0x70006)) &&
         ((iVar4 != 0x70007 && (iVar4 != 0x70008)))) && (iVar4 != 0x70009)))) {
      iVar4 = FUN_0043f860(2);
      if ((iVar4 == 0) && (iVar4 = FUN_0043f860(5), iVar4 == 0)) {
        param_3[6] = param_1[0x12d];
        puVar2[1] = puVar2[1] | 1;
        *puVar2 = 0xd;
        return;
      }
      iVar4 = FUN_0043f860(2);
      if (iVar4 == 0) {
        param_3[6] = param_1[0x12d];
        puVar2[1] = puVar2[1] | 1;
        *puVar2 = 0xb;
        return;
      }
      iVar4 = FUN_0043f860(5);
      if (iVar4 == 0) {
        param_3[6] = param_1[0x12d];
        puVar2[1] = puVar2[1] | 1;
        *puVar2 = 0xc;
        return;
      }
      iVar4 = FUN_0043f860(9);
      if (iVar4 == 0) {
        param_3[6] = param_1[0x12d];
        puVar2[1] = puVar2[1] | 1;
        *puVar2 = 0xe;
        return;
      }
    }
    goto LAB_007ce308;
  }
  if (((param_3[4] & 0x20000000) != 0) && ((param_3[2] >> 0x1d & 1) != 0)) {
    iVar4 = FUN_0043f830(5);
    if (iVar4 != 0) {
      puVar2[1] = puVar2[1] | 4;
      if (param_1[0x3c2] != 0) {
        param_1[0x3c2] = 0;
        FUN_00c4d210(param_1[0x13c],1,0);
        (**(code **)(param_1[0x4bc] + 8))(0x3f800000,0,0);
      }
      *puVar2 = 2;
      param_3[6] = param_1[0x12d];
      return;
    }
    iVar4 = FUN_0043f830(9);
    if (iVar4 == 0) goto LAB_007ce5b9;
    puVar2[1] = puVar2[1] | 8;
    if (param_1[0x3c3] != 0) {
      param_1[0x3c3] = 0;
      FUN_00c4d210(param_1[0x13c],3,0);
LAB_007ce583:
      (**(code **)(param_1[0x4e8] + 8))(0x3f800000,0,0);
    }
LAB_007ce5a2:
    *puVar2 = 3;
LAB_007ce5a8:
    param_3[6] = param_1[0x12d];
    return;
  }
LAB_007ce5b9:
  iVar4 = FUN_0043f860(5);
  if (iVar4 == 0) {
LAB_007ce6ac:
    iVar4 = FUN_0043f860(9);
    if (iVar4 != 0) {
      iVar4 = FUN_0043f830(2);
      if (iVar4 != 0) {
        puVar2[1] = puVar2[1] | 2;
        if (param_1[0x3c1] != 0) {
          param_1[0x3c1] = 0;
          FUN_00c4d210(param_1[0x13c],2,0);
          (**(code **)(param_1[0x490] + 8))(0x3f800000,0,0);
        }
        *puVar2 = 8;
        param_3[6] = param_1[0x12d];
        return;
      }
      iVar4 = FUN_0043f830(5);
      if (iVar4 != 0) {
        puVar2[1] = puVar2[1] | 4;
        if (param_1[0x3c2] != 0) {
          param_1[0x3c2] = 0;
          FUN_00c4d210(param_1[0x13c],1,0);
          (**(code **)(param_1[0x4bc] + 8))(0x3f800000,0,0);
        }
        *puVar2 = 9;
        param_3[6] = param_1[0x12d];
        return;
      }
    }
    iVar4 = FUN_0043f830(2);
    if (((iVar4 != 0) && (iVar4 = FUN_0043f830(5), iVar4 != 0)) &&
       (iVar4 = FUN_0043f830(9), iVar4 != 0)) {
      puVar2[1] = puVar2[1] | 2;
      if (param_1[0x3c1] != 0) {
        param_1[0x3c1] = 0;
        FUN_00c4d210(param_1[0x13c],2,0);
        (**(code **)(param_1[0x490] + 8))(0x3f800000,0,0);
      }
      puVar2[1] = puVar2[1] | 4;
      if (param_1[0x3c2] != 0) {
        param_1[0x3c2] = 0;
        FUN_00c4d210(param_1[0x13c],1,0);
        (**(code **)(param_1[0x4bc] + 8))(0x3f800000,0,0);
      }
      puVar2[1] = puVar2[1] | 8;
      if (param_1[0x3c3] != 0) {
        param_1[0x3c3] = 0;
        FUN_00c4d210(param_1[0x13c],3,0);
        (**(code **)(param_1[0x4e8] + 8))(0x3f800000,0,0);
      }
      *puVar2 = 10;
      param_3[6] = param_1[0x12d];
      return;
    }
    iVar4 = FUN_0043f830(2);
    if ((iVar4 != 0) && (iVar4 = FUN_0043f830(5), iVar4 != 0)) {
      puVar2[1] = puVar2[1] | 2;
      if (param_1[0x3c1] != 0) {
        param_1[0x3c1] = 0;
        FUN_00c4d210(param_1[0x13c],2,0);
        (**(code **)(param_1[0x490] + 8))(0x3f800000,0,0);
      }
      puVar2[1] = puVar2[1] | 4;
      if (param_1[0x3c2] != 0) {
        param_1[0x3c2] = 0;
        FUN_00c4d210(param_1[0x13c],1,0);
        (**(code **)(param_1[0x4bc] + 8))(0x3f800000,0,0);
      }
      *puVar2 = 2;
      param_3[6] = param_1[0x12d];
      return;
    }
    iVar4 = FUN_0043f830(2);
    if ((iVar4 != 0) && (iVar4 = FUN_0043f830(9), iVar4 != 0)) {
      puVar2[1] = puVar2[1] | 2;
      if (param_1[0x3c1] != 0) {
        param_1[0x3c1] = 0;
        FUN_00c4d210(param_1[0x13c],2,0);
        (**(code **)(param_1[0x490] + 8))(0x3f800000,0,0);
      }
      puVar2[1] = puVar2[1] | 8;
      if (param_1[0x3c3] != 0) {
        param_1[0x3c3] = 0;
        FUN_00c4d210(param_1[0x13c],3,0);
        goto LAB_007ce583;
      }
      goto LAB_007ce5a2;
    }
    iVar4 = FUN_0043f830(5);
    if ((iVar4 == 0) || (iVar4 = FUN_0043f830(9), iVar4 == 0)) {
      iVar4 = FUN_0043f830(2);
      if (iVar4 != 0) {
        iVar4 = FUN_0043f860(0);
        if (((iVar4 == 0) && (iVar4 = FUN_0043f860(1), iVar4 == 0)) &&
           ((iVar4 = FUN_0043f860(4), iVar4 == 0 && (iVar4 = FUN_0043f860(8), iVar4 == 0)))) {
          puVar2[1] = puVar2[1] | 2;
          if (param_1[0x3c1] != 0) {
            param_1[0x3c1] = 0;
            FUN_00c4d210(param_1[0x13c],2,0);
            (**(code **)(param_1[0x490] + 8))(0x3f800000,0,0);
          }
          *puVar2 = 1;
          param_3[6] = param_1[0x12d];
          return;
        }
LAB_007ce308:
        param_3[6] = 0x42000;
        return;
      }
      iVar4 = FUN_0043f830(5);
      if (iVar4 != 0) {
        iVar4 = FUN_0043f860(0);
        if (((iVar4 == 0) && (iVar4 = FUN_0043f860(1), iVar4 == 0)) &&
           ((iVar4 = FUN_0043f860(4), iVar4 == 0 && (iVar4 = FUN_0043f860(8), iVar4 == 0)))) {
          puVar2[1] = puVar2[1] | 4;
          if (param_1[0x3c2] != 0) {
            param_1[0x3c2] = 0;
            FUN_00c4d210(param_1[0x13c],1,0);
            (**(code **)(param_1[0x4bc] + 8))(0x3f800000,0,0);
          }
          *puVar2 = 4;
          param_3[6] = param_1[0x12d];
          return;
        }
        goto LAB_007ce308;
      }
      iVar4 = FUN_0043f830(9);
      if (iVar4 != 0) {
        iVar4 = FUN_0043f860(0);
        if ((((iVar4 == 0) && (iVar4 = FUN_0043f860(1), iVar4 == 0)) &&
            (iVar4 = FUN_0043f860(4), iVar4 == 0)) && (iVar4 = FUN_0043f860(8), iVar4 == 0)) {
          puVar2[1] = puVar2[1] | 8;
          if (param_1[0x3c3] != 0) {
            param_1[0x3c3] = 0;
            FUN_00c4d210(param_1[0x13c],3,0);
            (**(code **)(param_1[0x4e8] + 8))(0x3f800000,0,0);
          }
          *puVar2 = 7;
          param_3[6] = param_1[0x12d];
          return;
        }
        goto LAB_007ce308;
      }
      goto LAB_007ce5a8;
    }
    puVar2[1] = puVar2[1] | 4;
    if (param_1[0x3c2] != 0) {
      param_1[0x3c2] = 0;
      FUN_00c4d210(param_1[0x13c],1,0);
      (**(code **)(param_1[0x4bc] + 8))(0x3f800000,0,0);
    }
    puVar2[1] = puVar2[1] | 8;
    if (param_1[0x3c3] == 0) goto LAB_007ce695;
    param_1[0x3c3] = 0;
    FUN_00c4d210(param_1[0x13c],3,0);
  }
  else {
    iVar4 = FUN_0043f830(2);
    if (iVar4 != 0) {
      puVar2[1] = puVar2[1] | 2;
      if (param_1[0x3c1] != 0) {
        param_1[0x3c1] = 0;
        FUN_00c4d210(param_1[0x13c],2,0);
        (**(code **)(param_1[0x490] + 8))(0x3f800000,0,0);
      }
      *puVar2 = 5;
      param_3[6] = param_1[0x12d];
      return;
    }
    iVar4 = FUN_0043f830(9);
    if (iVar4 == 0) goto LAB_007ce6ac;
    puVar2[1] = puVar2[1] | 8;
    if (param_1[0x3c3] == 0) goto LAB_007ce695;
    param_1[0x3c3] = 0;
    FUN_00c4d210(param_1[0x13c],3,0);
  }
  (**(code **)(param_1[0x4e8] + 8))(0x3f800000,0,0);
LAB_007ce695:
  *puVar2 = 6;
  param_3[6] = param_1[0x12d];
  return;
}

// 007CECC0  Emc100::vf338  size=251  [class]
void __thiscall Emc100::vf338(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  bool bVar2;
  int *piVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  if (0 < param_4) {
    piVar3 = (int *)(param_3 + 0x18);
    iVar5 = param_4;
    do {
      if (*piVar3 == param_1[0x12d]) {
        iVar6 = iVar6 + 1;
      }
      piVar3 = piVar3 + 9;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if ((((*(byte *)(param_1 + 0x3a7) & 1) == 0) && (1 < iVar6)) && (0 < param_4)) {
    puVar4 = (uint *)(param_3 + 0x10);
    iVar6 = param_4;
    do {
      if ((puVar4[2] == param_1[0x12d]) &&
         (((((uVar1 = *puVar4, (int)uVar1 < 0 && ((int)puVar4[-2] < 0)) ||
            (((uVar1 & 0x40000000) != 0 && ((~(puVar4[-4] >> 0x1e) & 1) != 0)))) ||
           (((uVar1 & 0x8000000) != 0 && ((~(puVar4[-4] >> 0x1b) & 1) != 0)))) ||
          (((uVar1 & 0x800000) != 0 && ((~(puVar4[-4] >> 0x17) & 1) != 0)))))) {
        puVar4[2] = 0x42000;
      }
      puVar4 = puVar4 + 9;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  bVar2 = true;
  if (0 < param_4) {
    piVar3 = (int *)(param_3 + 0x18);
    do {
      if (*piVar3 == param_1[0x12d]) {
        bVar2 = false;
      }
      piVar3 = piVar3 + 9;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
    if (!bVar2) {
      return;
    }
  }
  if (param_1[0x294] != 0) {
    (**(code **)(*param_1 + 0x364))(0xffffffff);
  }
  return;
}

// 007CEDC0  FUN_007cedc0  size=348  [between]
void __fastcall FUN_007cedc0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0x2d,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    (**(code **)(*(int *)(param_1 + 0x1930) + 8))(0x41f00000,0,0);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(*(undefined4 *)(param_1 + 0x1cb4),0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x4e4) == 0) {
      uVar2 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xeb4) = uVar2;
      iVar1 = FUN_00a8cab0();
      if ((((iVar1 == 0x10000) || (iVar1 = FUN_00a8cab0(), iVar1 == 0x10009)) ||
          (iVar1 = FUN_00a8cab0(), iVar1 == 0x1000a)) || (iVar1 = FUN_00a8cab0(), iVar1 == 0x1000d))
      {
        uVar2 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0x1cbc) = uVar2;
      }
      if (*(int *)(param_1 + 0x1c30) != 0) {
        *(undefined4 *)(param_1 + 0x1cbc) = 0x1000b;
      }
      *(undefined4 *)(param_1 + 0xeb8) = *(undefined4 *)(param_1 + 0xea0);
      FUN_007cb240();
      FUN_00a8caf0(0x1000a,0,0,0);
      *(undefined4 *)(param_1 + 0xea0) = 0;
      FUN_00a962d0(0,0);
      *(undefined4 *)(param_1 + 0xf00) = 0;
    }
    *(undefined4 *)(param_1 + 0x1b70) = 0;
    return;
  }
  return;
}

// 007CEF20  FUN_007cef20  size=510  [between]
void __fastcall FUN_007cef20(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    FUN_00aa4080(0x33,0,0x3dcccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x20b0) = 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      return;
    }
    break;
  case 2:
    FUN_00aa4080(0x34,0,0x3dcccccd,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (*(char *)(param_1 + 0x1e30) == '\x05') {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      return;
    }
    break;
  case 4:
    FUN_00aa4080(0x35,0,0x3dcccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if ((iVar1 != 0) && (*(int *)(param_1 + 0x4e4) == 0)) {
      uVar2 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xeb4) = uVar2;
      iVar1 = FUN_00a8cab0();
      if ((iVar1 == 0x10000) ||
         (((iVar1 = FUN_00a8cab0(), iVar1 == 0x10009 || (iVar1 = FUN_00a8cab0(), iVar1 == 0x1000a))
          || (iVar1 = FUN_00a8cab0(), iVar1 == 0x1000d)))) {
        uVar2 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0x1cbc) = uVar2;
      }
      if (*(int *)(param_1 + 0x1c30) != 0) {
        *(undefined4 *)(param_1 + 0x1cbc) = 0x1000b;
      }
      *(undefined4 *)(param_1 + 0xeb8) = *(undefined4 *)(param_1 + 0xea0);
      FUN_007cb240();
      FUN_00a8caf0(0x1000a,0,0,0);
      *(undefined4 *)(param_1 + 0xea0) = 0;
      FUN_00a962d0(0,0);
      *(undefined4 *)(param_1 + 0xf00) = 0;
      return;
    }
  }
  return;
}

// 007CF140  FUN_007cf140  size=262  [between]
void __fastcall FUN_007cf140(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_007cb2a0();
  if (iVar1 == 0) {
    iVar1 = FUN_00a8cab0();
    if ((0x70002 < iVar1) && (iVar1 = FUN_00a8cab0(), iVar1 < 0x7000a)) {
      *(undefined2 *)(param_1 + 0x824) = 1;
      *(undefined4 *)(param_1 + 0x828) = 0x78;
    }
    return;
  }
  *(undefined4 *)(param_1 + 0x20b8) = 1;
  if (*(int *)(param_1 + 0x4e4) == 0) {
    uVar2 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xeb4) = uVar2;
    iVar1 = FUN_00a8cab0();
    if ((((iVar1 == 0x10000) || (iVar1 = FUN_00a8cab0(), iVar1 == 0x10009)) ||
        (iVar1 = FUN_00a8cab0(), iVar1 == 0x1000a)) || (iVar1 = FUN_00a8cab0(), iVar1 == 0x1000d)) {
      uVar2 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0x1cbc) = uVar2;
    }
    if (*(int *)(param_1 + 0x1c30) != 0) {
      *(undefined4 *)(param_1 + 0x1cbc) = 0x1000b;
    }
    *(undefined4 *)(param_1 + 0xeb8) = *(undefined4 *)(param_1 + 0xea0);
    FUN_007cb240();
    FUN_00a8caf0(0x60002,0,0,0);
    *(undefined4 *)(param_1 + 0xea0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0xf00) = 0;
    return;
  }
  return;
}

// 007CF250  FUN_007cf250  size=220  [between]
void __fastcall FUN_007cf250(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x1b68) == 4) {
    return;
  }
  iVar1 = FUN_00a82d50();
  if (iVar1 == 4) {
    if (*(int *)(param_1 + 0x4e4) == 0) {
      uVar2 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xeb4) = uVar2;
      iVar1 = FUN_00a8cab0();
      if ((((iVar1 == 0x10000) || (iVar1 = FUN_00a8cab0(), iVar1 == 0x10009)) ||
          (iVar1 = FUN_00a8cab0(), iVar1 == 0x1000a)) || (iVar1 = FUN_00a8cab0(), iVar1 == 0x1000d))
      {
        uVar2 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0x1cbc) = uVar2;
      }
      if (*(int *)(param_1 + 0x1c30) != 0) {
        *(undefined4 *)(param_1 + 0x1cbc) = 0x1000b;
      }
      *(undefined4 *)(param_1 + 0xeb8) = *(undefined4 *)(param_1 + 0xea0);
      FUN_007cb240();
      FUN_00a8caf0(0x1000a,0,0,0);
      *(undefined4 *)(param_1 + 0xea0) = 0;
      FUN_00a962d0(0,0);
      *(undefined4 *)(param_1 + 0xf00) = 0;
      return;
    }
    return;
  }
  return;
}

// 007CF330  FUN_007cf330  size=587  [between]
void __fastcall FUN_007cf330(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    if (*(int *)(param_1 + 0x61c) != 1) {
      return;
    }
    goto LAB_007cf46f;
  }
  *(undefined4 *)(param_1 + 0x1c3c) = 0;
  switch(*(undefined4 *)(param_1 + 0x19e4)) {
  case 0:
    sVar1 = FUN_00dde2a0(0,1);
    uVar3 = 0x8000000;
    if (sVar1 == 0) {
      uVar4 = 0x45;
    }
    else {
      uVar4 = 0x44;
    }
    break;
  case 1:
    sVar1 = FUN_00dde2a0(0,1);
    uVar3 = 0x8000000;
    goto LAB_007cf3d8;
  case 2:
    sVar1 = FUN_00dde2a0(0,1);
    uVar3 = 0x8000040;
LAB_007cf3d8:
    if (sVar1 == 0) {
      uVar4 = 0x3f;
    }
    else {
      uVar4 = 0x3e;
    }
    break;
  case 3:
    sVar1 = FUN_00dde2a0(0,1);
    uVar3 = 0x8000000;
    if (sVar1 == 0) {
      uVar4 = 0x42;
    }
    else {
      uVar4 = 0x41;
    }
    break;
  default:
    goto switchD_007cf360_default;
  }
  FUN_00aa4080(uVar4,0,0x3e088889,0x3f800000,uVar3,0xbf800000,0x3f800000);
switchD_007cf360_default:
  *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
LAB_007cf46f:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    *(undefined2 *)(param_1 + 0x1b6c) = 0;
    if ((*(uint *)(param_1 + 0xf1c) & 0x100000) == 0) {
      FUN_007cd550(*(undefined4 *)(param_1 + 0x1cbc),0,0,0,0);
    }
    else if (*(int *)(param_1 + 0x4e4) == 0) {
      uVar3 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xeb4) = uVar3;
      iVar2 = FUN_00a8cab0();
      if ((((iVar2 == 0x10000) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x10009)) ||
          (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000a)) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000d))
      {
        uVar3 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0x1cbc) = uVar3;
      }
      if (*(int *)(param_1 + 0x1c30) != 0) {
        *(undefined4 *)(param_1 + 0x1cbc) = 0x1000b;
      }
      *(undefined4 *)(param_1 + 0xeb8) = *(undefined4 *)(param_1 + 0xea0);
      FUN_007cb240();
      FUN_00a8caf0(0x60002,0,0,0);
      *(undefined4 *)(param_1 + 0xea0) = 0;
      FUN_00a962d0(0,0);
      *(undefined4 *)(param_1 + 0xf00) = 0;
      return;
    }
  }
  return;
}

// 007CF590  FUN_007cf590  size=220  [between]
void __fastcall FUN_007cf590(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x1b68) == 4) {
    return;
  }
  iVar1 = FUN_00a82d50();
  if (iVar1 == 4) {
    if (*(int *)(param_1 + 0x4e4) == 0) {
      uVar2 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xeb4) = uVar2;
      iVar1 = FUN_00a8cab0();
      if ((((iVar1 == 0x10000) || (iVar1 = FUN_00a8cab0(), iVar1 == 0x10009)) ||
          (iVar1 = FUN_00a8cab0(), iVar1 == 0x1000a)) || (iVar1 = FUN_00a8cab0(), iVar1 == 0x1000d))
      {
        uVar2 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0x1cbc) = uVar2;
      }
      if (*(int *)(param_1 + 0x1c30) != 0) {
        *(undefined4 *)(param_1 + 0x1cbc) = 0x1000b;
      }
      *(undefined4 *)(param_1 + 0xeb8) = *(undefined4 *)(param_1 + 0xea0);
      FUN_007cb240();
      FUN_00a8caf0(0x1000a,0,0,0);
      *(undefined4 *)(param_1 + 0xea0) = 0;
      FUN_00a962d0(0,0);
      *(undefined4 *)(param_1 + 0xf00) = 0;
      return;
    }
    return;
  }
  return;
}

// 007CF670  FUN_007cf670  size=409  [between]
void __fastcall FUN_007cf670(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  *(undefined2 *)(param_1 + 0x824) = 4;
  *(undefined4 *)(param_1 + 0x828) = 0x78;
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    FUN_00aa4080(0x47,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      if (*(int **)(param_1 + 0x754) == (int *)0x0) {
        *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
        *(undefined4 *)(param_1 + 0x920) = 0x42700000;
        return;
      }
      fVar2 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(0xf);
      *(float *)(param_1 + 0x920) = (float)fVar2;
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      return;
    }
    break;
  case 2:
    FUN_00aa4080(0x48,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (*(float *)(param_1 + 0x920) < 0.0) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    }
    *(float *)(param_1 + 0x920) = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
    return;
  case 4:
    FUN_00aa4080(0x49,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_007cd550(*(undefined4 *)(param_1 + 0x1cbc),0,0,0,0);
      return;
    }
  }
  return;
}

// 007CF830  FUN_007cf830  size=566  [between]
void __fastcall FUN_007cf830(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    FUN_00aa4080(0x52,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      *(undefined4 *)(param_1 + 0x920) = 0x42b40000;
      return;
    }
    break;
  case 2:
    FUN_00aa4080(0x53,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (*(float *)(param_1 + 0x920) < 0.0) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    }
    *(float *)(param_1 + 0x920) = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
    return;
  case 4:
    FUN_00aa4080(0x54,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      if ((*(uint *)(param_1 + 0xf1c) & 0x100000) == 0) {
        FUN_007cd550(*(undefined4 *)(param_1 + 0x1cbc),0,0,0,0);
        return;
      }
      if (*(int *)(param_1 + 0x4e4) == 0) {
        uVar2 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xeb4) = uVar2;
        iVar1 = FUN_00a8cab0();
        if ((((iVar1 == 0x10000) || (iVar1 = FUN_00a8cab0(), iVar1 == 0x10009)) ||
            (iVar1 = FUN_00a8cab0(), iVar1 == 0x1000a)) ||
           (iVar1 = FUN_00a8cab0(), iVar1 == 0x1000d)) {
          uVar2 = FUN_00a8cab0();
          *(undefined4 *)(param_1 + 0x1cbc) = uVar2;
        }
        if (*(int *)(param_1 + 0x1c30) != 0) {
          *(undefined4 *)(param_1 + 0x1cbc) = 0x1000b;
        }
        *(undefined4 *)(param_1 + 0xeb8) = *(undefined4 *)(param_1 + 0xea0);
        FUN_007cb240();
        FUN_00a8caf0(0x60002,0,0,0);
        *(undefined4 *)(param_1 + 0xea0) = 0;
        FUN_00a962d0(0,0);
        *(undefined4 *)(param_1 + 0xf00) = 0;
        return;
      }
    }
  }
  return;
}

// 007CFA80  FUN_007cfa80  size=729  [between]
void __fastcall FUN_007cfa80(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  *(undefined2 *)(param_1 + 0x824) = 3;
  *(undefined4 *)(param_1 + 0x828) = 0x78;
  FUN_00c593a0(*(undefined4 *)(param_1 + 0x4f0),0xffffffff,&local_20,0x40a00000,0x40400000,0x2d,8);
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    FUN_00aa4080(0x52,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      *(float *)(param_1 + 0x920) = *(float *)(param_1 + 0x1c6c) * 60.0;
      return;
    }
    break;
  case 2:
    FUN_00aa4080(0x53,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (*(float *)(param_1 + 0x920) < 0.0) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    }
    *(float *)(param_1 + 0x920) = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
    return;
  case 4:
    FUN_00aa4080(0x54,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      if ((*(uint *)(param_1 + 0xf1c) & 0x100000) == 0) {
        FUN_007cd550(*(undefined4 *)(param_1 + 0x1cbc),0,0,0,0);
      }
      else if (*(int *)(param_1 + 0x4e4) == 0) {
        uVar2 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xeb4) = uVar2;
        iVar1 = FUN_00a8cab0();
        if ((((iVar1 == 0x10000) || (iVar1 = FUN_00a8cab0(), iVar1 == 0x10009)) ||
            (iVar1 = FUN_00a8cab0(), iVar1 == 0x1000a)) ||
           (iVar1 = FUN_00a8cab0(), iVar1 == 0x1000d)) {
          uVar2 = FUN_00a8cab0();
          *(undefined4 *)(param_1 + 0x1cbc) = uVar2;
        }
        if (*(int *)(param_1 + 0x1c30) != 0) {
          *(undefined4 *)(param_1 + 0x1cbc) = 0x1000b;
        }
        *(undefined4 *)(param_1 + 0xeb8) = *(undefined4 *)(param_1 + 0xea0);
        FUN_007cb240();
        FUN_00a8caf0(0x60002,0,0,0);
        *(undefined4 *)(param_1 + 0xea0) = 0;
        FUN_00a962d0(0,0);
        *(undefined4 *)(param_1 + 0xf00) = 0;
      }
      fVar3 = (float10)FUN_00dde300(*(undefined4 *)(param_1 + 0x1c74),
                                    *(undefined4 *)(param_1 + 0x1c78));
      *(float *)(param_1 + 0x10d4) = (float)(fVar3 * (float10)60.0);
      return;
    }
  }
  return;
}

// 007CFD80  FUN_007cfd80  size=381  [between]
void __fastcall FUN_007cfd80(int param_1)

{
  int iVar1;
  float10 fVar2;
  int local_8;
  undefined1 local_4 [4];
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4120(6,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    if ((*(uint *)(param_1 + 0xf1c) & 0x100000) == 0) {
      FUN_00aa4080(0x50,1,0x3e088889,0x3f800000,0x40200,0xbf800000,0x3f800000);
      *(uint *)(param_1 + 0xf1c) = *(uint *)(param_1 + 0xf1c) | 0x100000;
      iVar1 = FUN_007cb1f0();
      if (iVar1 != 0) {
        *(undefined2 *)(param_1 + 0x824) = 1;
        *(undefined4 *)(param_1 + 0x828) = 0x78;
      }
    }
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  *(uint *)(param_1 + 0xd44) = *(uint *)(param_1 + 0xd44) | 0x4000000;
  *(float *)(param_1 + 0x920) = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
  if ((*(uint *)(param_1 + 0xf1c) & 0x100000) == 0) {
    FUN_00ac81f0(param_1 + 0x40,&local_8,local_4);
  }
  else {
    FUN_00ac8270(param_1 + 0x40,&local_8,local_4);
  }
  if (local_8 == 0) {
    *(uint *)(param_1 + 0xf1c) = *(uint *)(param_1 + 0xf1c) & 0xffefffff;
    FUN_00a94bc0(1,0x3f000000);
    fVar2 = (float10)FUN_00dde300(*(undefined4 *)(param_1 + 0x1c74),
                                  *(undefined4 *)(param_1 + 0x1c78));
    *(float *)(param_1 + 0x10d4) = (float)(fVar2 * (float10)60.0);
    FUN_007cd550(*(undefined4 *)(param_1 + 0x1cbc),0,0,0,0);
  }
  return;
}

// 007CFF00  FUN_007cff00  size=552  [between]
void __fastcall FUN_007cff00(int *param_1)

{
  code *pcVar1;
  float10 fVar2;
  int *piVar3;
  
  if (param_1[0x187] == 0) {
    param_1[0x248] = 0x43340000;
    *(undefined1 *)(param_1 + 0x78c) = 5;
    param_1[0x187] = 1;
    FUN_00eaa6e0(0x3f800000,0);
    FUN_00eaa6e0(0x3f800000,0);
    FUN_00eaa6e0(0x3f800000,0);
    FUN_00eaa6e0(0x3f800000,0);
    if (param_1[0x64b] != 0) {
      (**(code **)(param_1[0x5c4] + 8))(0x3f800000,0,0);
    }
    if (param_1[0x6d4] != 0) {
      (**(code **)(param_1[0x514] + 8))(0x3f800000,0,0);
    }
    if (param_1[0x6d5] != 0) {
      (**(code **)(param_1[0x540] + 8))(0x3f800000,0,0);
    }
    if (param_1[0x6d6] != 0) {
      (**(code **)(param_1[0x56c] + 8))(0x3f800000,0,0);
    }
    (**(code **)(*param_1 + 0x344))(6,param_1[0x3ac],param_1[0x3ab]);
    FUN_00c27f40(0xe,0x44e10000);
    param_1[0x139] = 1;
    if (param_1[0x1d9] != 0) {
      FUN_008e3c10();
      FUN_008e1c60();
      param_1[0x1d9] = 0;
    }
    FUN_00c57120(param_1[0x13c]);
    piVar3 = param_1;
    FUN_00c1cf50(param_1);
    FUN_00c1d1c0(piVar3);
    pcVar1 = *(code **)(*param_1 + 0x364);
    param_1[0x1af] = 1;
    (*pcVar1)(0xffffffff);
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  fVar2 = (float10)FUN_00ac8f80();
  if (fVar2 - (float10)0.011111111 < (float10)0) {
    (**(code **)(*param_1 + 0x20))();
    FUN_009fdde0();
    FUN_00ac8fd0((float)(float10)0);
    return;
  }
  FUN_00ac8fd0((float)(fVar2 - (float10)0.011111111));
  return;
}

// 007D0220  Emc100::vf264  size=712  [class]
undefined4 __thiscall Emc100::vf264(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  FUN_0040ac60(param_2);
  if (*(int *)(param_1 + 0x4a0) == 1) {
    FUN_00aa0ba0(*(undefined4 *)(param_1 + 0x1a48),*(undefined4 *)(param_1 + 0x1adc));
    uVar1 = FUN_00a8d730(param_1 + 0x40);
    FUN_00a8d6f0(uVar1);
    puVar3 = (undefined4 *)FUN_00c9dac0();
    *(undefined4 *)(param_1 + 0x1d40) = *puVar3;
    *(undefined4 *)(param_1 + 0x1d44) = puVar3[1];
    *(undefined4 *)(param_1 + 0x1d48) = puVar3[2];
    *(undefined4 *)(param_1 + 0x1d4c) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x1b10) = 1;
    if (*(int *)(param_1 + 0x4e4) != 0) goto LAB_007d03ed;
    uVar1 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xeb4) = uVar1;
    iVar2 = FUN_00a8cab0();
    if ((((iVar2 == 0x10000) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x10009)) ||
        (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000a)) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000d)) {
      uVar1 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0x1cbc) = uVar1;
    }
    if (*(int *)(param_1 + 0x1c30) != 0) {
      *(undefined4 *)(param_1 + 0x1cbc) = 0x1000b;
    }
    *(undefined4 *)(param_1 + 0xeb8) = *(undefined4 *)(param_1 + 0xea0);
    FUN_007cb240();
    uVar1 = 0x1000d;
  }
  else {
    if ((*(int *)(param_1 + 0x4a0) != 2) ||
       (*(undefined4 *)(param_1 + 0x1c30) = 1, *(int *)(param_1 + 0x4e4) != 0)) goto LAB_007d03ed;
    uVar1 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xeb4) = uVar1;
    iVar2 = FUN_00a8cab0();
    if (((iVar2 == 0x10000) ||
        ((iVar2 = FUN_00a8cab0(), iVar2 == 0x10009 || (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000a))))
       || (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000d)) {
      uVar1 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0x1cbc) = uVar1;
    }
    if (*(int *)(param_1 + 0x1c30) != 0) {
      *(undefined4 *)(param_1 + 0x1cbc) = 0x1000b;
    }
    *(undefined4 *)(param_1 + 0xeb8) = *(undefined4 *)(param_1 + 0xea0);
    FUN_007cb240();
    uVar1 = 0x1000b;
  }
  FUN_00a8caf0(uVar1,0,0,0);
  *(undefined4 *)(param_1 + 0xea0) = 0;
  FUN_00a962d0(0,0);
  *(undefined4 *)(param_1 + 0xf00) = 0;
LAB_007d03ed:
  if (*(int *)(param_1 + 0xd80) != 0) {
    if (0.0 < *(float *)(param_1 + 0x1af4)) {
      iVar2 = *(int *)(param_1 + 0xd80);
      *(float *)(iVar2 + 0xc) = *(float *)(param_1 + 0x1aec) * 0.017453292;
      *(float *)(iVar2 + 0x10) = *(float *)(param_1 + 0x1af0) * 0.017453292;
      *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(param_1 + 0x1af4);
      iVar2 = *(int *)(param_1 + 0xd80);
      *(float *)(iVar2 + 0x30) = *(float *)(param_1 + 0x1aec) * 0.017453292;
      *(float *)(iVar2 + 0x34) = *(float *)(param_1 + 0x1af0) * 0.017453292;
      *(undefined4 *)(iVar2 + 0x38) = *(undefined4 *)(param_1 + 0x1af4);
    }
    if (0.0 < *(float *)(param_1 + 0x1b00)) {
      iVar2 = *(int *)(param_1 + 0xd80);
      *(float *)(iVar2 + 0x18) = *(float *)(param_1 + 0x1af8) * 0.017453292;
      *(float *)(iVar2 + 0x1c) = *(float *)(param_1 + 0x1afc) * 0.017453292;
      *(undefined4 *)(iVar2 + 0x20) = *(undefined4 *)(param_1 + 0x1b00);
      iVar2 = *(int *)(param_1 + 0xd80);
      *(float *)(iVar2 + 0x3c) = *(float *)(param_1 + 0x1af8) * 0.017453292;
      *(float *)(iVar2 + 0x40) = *(float *)(param_1 + 0x1afc) * 0.017453292;
      *(undefined4 *)(iVar2 + 0x44) = *(undefined4 *)(param_1 + 0x1b00);
    }
    FUN_00a82b40(*(undefined4 *)(param_1 + 0xd80),4);
    uVar1 = FUN_00a82d50();
    FUN_00a85340(uVar1);
  }
  return 1;
}

// 007D04F0  Emc100::vf48  size=311  [class]
void __fastcall Emc100::vf48(int param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  int local_8;
  undefined1 local_4 [4];
  
  fVar1 = *(float *)(param_1 + 0x10d4);
  if (!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) {
    *(float *)(param_1 + 0x10d4) = *(float *)(param_1 + 0x10d4) - *(float *)(param_1 + 0x910);
  }
  EmBaseDLC::vf48();
  if ((*(uint *)(param_1 + 0xf1c) & 0x100000) != 0) {
    return;
  }
  FUN_00ac81f0(param_1 + 0x40,&local_8,local_4);
  if (local_8 == 0) {
    return;
  }
  FUN_007cb240();
  *(undefined4 *)(param_1 + 0x20b8) = 1;
  iVar2 = FUN_007cb2a0();
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0x4e4) == 0) {
      uVar3 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xeb4) = uVar3;
      iVar2 = FUN_00a8cab0();
      if ((((iVar2 == 0x10000) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x10009)) ||
          (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000a)) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000d))
      {
        uVar3 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0x1cbc) = uVar3;
      }
      if (*(int *)(param_1 + 0x1c30) != 0) {
        *(undefined4 *)(param_1 + 0x1cbc) = 0x1000b;
      }
      *(undefined4 *)(param_1 + 0xeb8) = *(undefined4 *)(param_1 + 0xea0);
      FUN_007cb240();
      FUN_00a8caf0(0x60002,0,0,0);
      *(undefined4 *)(param_1 + 0xea0) = 0;
      FUN_00a962d0(0,0);
      *(undefined4 *)(param_1 + 0xf00) = 0;
      return;
    }
    return;
  }
  return;
}

// 007D0630  FUN_007d0630  size=1635  [between]
void __fastcall FUN_007d0630(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  float10 fVar7;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  
  *(undefined4 *)(param_1 + 0xec4) = 0x1000d;
  FUN_00a8d790(&local_2c);
  fVar1 = local_2c - *(float *)(param_1 + 0x40);
  fVar3 = local_28 - *(float *)(param_1 + 0x44);
  fVar2 = local_24 - *(float *)(param_1 + 0x48);
  fVar2 = SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2);
  local_20 = local_2c;
  local_1c = local_28;
  local_18 = local_24;
  local_14 = 0x3f800000;
  fVar7 = (float10)FUN_00a8ec30(&local_20);
  fVar7 = (float10)FUN_00ddba30((float)((float10)*(float *)(param_1 + 0x94) - fVar7));
  fVar1 = (float)fVar7;
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    break;
  case 1:
    goto switchD_007d06cd_caseD_1;
  case 2:
    FUN_00aa4080(0x15,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    if (14.5 <= fVar2) {
      fVar2 = 1.0;
    }
    else {
      fVar2 = fVar2 * 0.06896552;
    }
    *(float *)(param_1 + 0x1cb4) = fVar2;
    *(undefined4 *)(param_1 + 0x61c) = 1;
    return;
  case 3:
    FUN_00aa4080(0x13,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 4:
    FUN_00ac80a0(*(undefined4 *)(param_1 + 0x1cb4),0x3f800000);
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 == 0) {
      return;
    }
    iVar5 = FUN_00a82d50();
    if ((iVar5 == 2) || (iVar5 = FUN_00a82d50(), iVar5 == 3)) goto LAB_007d0bde;
    iVar5 = FUN_00a82d50();
    if (iVar5 != 4) goto LAB_007d0b2f;
    goto LAB_007d08d9;
  default:
    goto switchD_007d06cd_default;
  }
  *(undefined4 *)(param_1 + 0x1d54) = 0;
  FUN_00aa4080(0xf,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  if (14.5 <= fVar2) {
    fVar3 = 1.0;
  }
  else {
    fVar3 = fVar2 * 0.06896552;
  }
  *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  *(float *)(param_1 + 0x1cb4) = fVar3;
switchD_007d06cd_caseD_1:
  FUN_00ac80a0(*(undefined4 *)(param_1 + 0x1cb4),0x3f800000);
  fVar3 = (local_28 - *(float *)(param_1 + 0x44)) * (local_28 - *(float *)(param_1 + 0x1d44)) +
          (local_2c - *(float *)(param_1 + 0x40)) * (local_2c - *(float *)(param_1 + 0x1d40)) +
          (local_24 - *(float *)(param_1 + 0x48)) * (local_24 - *(float *)(param_1 + 0x1d48));
  if ((fVar3 < 0.0 != (fVar3 == 0.0)) || (fVar2 < 1.5)) {
    puVar4 = (undefined4 *)FUN_00c9dac0();
    *(undefined4 *)(param_1 + 0x1d40) = *puVar4;
    *(undefined4 *)(param_1 + 0x1d44) = puVar4[1];
    *(undefined4 *)(param_1 + 0x1d48) = puVar4[2];
    *(undefined4 *)(param_1 + 0x1d4c) = 0x3f800000;
    FUN_00c9da70();
  }
  iVar5 = FUN_00a94ee0(0,0x1e,0x50);
  if ((iVar5 != 0) &&
     (((iVar5 = FUN_00a82d50(), iVar5 == 2 || (iVar5 = FUN_00a82d50(), iVar5 == 3)) ||
      (iVar5 = FUN_00a82d50(), iVar5 == 4)))) {
    *(undefined4 *)(param_1 + 0x61c) = 3;
    return;
  }
  fVar2 = *(float *)(param_1 + 0x1cb4);
  if (((!NAN(fVar2) && 1.0 < fVar2 != (fVar2 == 1.0)) && (iVar5 = FUN_00a95540(0,0x50), iVar5 != 0))
     && ((fVar1 < 0.08726646 && (-0.08726646 < fVar1)))) {
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    return;
  }
  iVar5 = FUN_00a94ce0(0);
  if (iVar5 == 0) {
    return;
  }
  iVar5 = FUN_00a82d50();
  if ((iVar5 == 2) || (iVar5 = FUN_00a82d50(), iVar5 == 3)) {
LAB_007d0bde:
    if (*(int *)(param_1 + 0x4e4) == 0) {
      uVar6 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xeb4) = uVar6;
      iVar5 = FUN_00a8cab0();
      if ((((iVar5 == 0x10000) || (iVar5 = FUN_00a8cab0(), iVar5 == 0x10009)) ||
          (iVar5 = FUN_00a8cab0(), iVar5 == 0x1000a)) || (iVar5 = FUN_00a8cab0(), iVar5 == 0x1000d))
      {
        uVar6 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0x1cbc) = uVar6;
      }
      if (*(int *)(param_1 + 0x1c30) != 0) {
        *(undefined4 *)(param_1 + 0x1cbc) = 0x1000b;
      }
      *(undefined4 *)(param_1 + 0xeb8) = *(undefined4 *)(param_1 + 0xea0);
      FUN_007cb240();
      uVar6 = 0x10009;
LAB_007d0c6b:
      FUN_00a8caf0(uVar6,0,0,0);
      *(undefined4 *)(param_1 + 0xea0) = 0;
      FUN_00a962d0(0,0);
      *(undefined4 *)(param_1 + 0xf00) = 0;
    }
  }
  else {
    iVar5 = FUN_00a82d50();
    if (iVar5 != 4) {
      if (0.017453292 < fVar1) {
        if (fVar1 <= 1.5707964) {
          FUN_007cd710(0x3f800000,fVar1 * 0.63661975);
          return;
        }
        FUN_007cd8d0(0x3f800000,fVar1 * 0.31830987);
        return;
      }
      if (fVar1 < -0.017453292) {
        if (!NAN(fVar1) && -1.5707964 < fVar1 != (fVar1 == -1.5707964)) {
          FUN_007cd7f0(0x3f800000,ABS(fVar1) * 0.63661975);
          return;
        }
        FUN_007cd9b0(0x3f800000,ABS(fVar1) * 0.31830987);
        return;
      }
LAB_007d0b2f:
      if (*(int *)(param_1 + 0x4e4) != 0) {
        return;
      }
      uVar6 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xeb4) = uVar6;
      iVar5 = FUN_00a8cab0();
      if (((iVar5 == 0x10000) || (iVar5 = FUN_00a8cab0(), iVar5 == 0x10009)) ||
         ((iVar5 = FUN_00a8cab0(), iVar5 == 0x1000a || (iVar5 = FUN_00a8cab0(), iVar5 == 0x1000d))))
      {
        uVar6 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0x1cbc) = uVar6;
      }
      if (*(int *)(param_1 + 0x1c30) != 0) {
        *(undefined4 *)(param_1 + 0x1cbc) = 0x1000b;
      }
      *(undefined4 *)(param_1 + 0xeb8) = *(undefined4 *)(param_1 + 0xea0);
      FUN_007cb240();
      FUN_00a8caf0(0x1000d,0,0,0);
      *(undefined4 *)(param_1 + 0xea0) = 0;
      FUN_00a962d0(0,0);
      *(undefined4 *)(param_1 + 0xf00) = 0;
      return;
    }
LAB_007d08d9:
    if (*(int *)(param_1 + 0x4e4) == 0) {
      uVar6 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xeb4) = uVar6;
      iVar5 = FUN_00a8cab0();
      if (((iVar5 == 0x10000) || (iVar5 = FUN_00a8cab0(), iVar5 == 0x10009)) ||
         ((iVar5 = FUN_00a8cab0(), iVar5 == 0x1000a || (iVar5 = FUN_00a8cab0(), iVar5 == 0x1000d))))
      {
        uVar6 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0x1cbc) = uVar6;
      }
      if (*(int *)(param_1 + 0x1c30) != 0) {
        *(undefined4 *)(param_1 + 0x1cbc) = 0x1000b;
      }
      *(undefined4 *)(param_1 + 0xeb8) = *(undefined4 *)(param_1 + 0xea0);
      FUN_007cb240();
      uVar6 = 0x1000a;
      goto LAB_007d0c6b;
    }
  }
  *(undefined4 *)(param_1 + 0x1d54) = 0;
switchD_007d06cd_default:
  return;
}

// 007D0CB0  FUN_007d0cb0  size=811  [between]
void __fastcall FUN_007d0cb0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1[0x187] == 0) {
    if (param_1[0x3a9] == 2) {
      uVar2 = 0x8000040;
    }
    else {
      uVar2 = 0x8000000;
    }
    FUN_00aa4080(0xb,0,0x3e088889,0x3f800000,uVar2,0xbf800000,0x3f800000);
    param_1[0x755] = param_1[0x755] + 1;
    param_1[0x187] = param_1[0x187] + 1;
    *(undefined2 *)((int)param_1 + 0x1b66) = 0;
  }
  else if (param_1[0x187] != 1) goto LAB_007d0fb6;
  iVar1 = FUN_00a82d50();
  if (iVar1 == 4) {
    iVar1 = FUN_00a94ee0(0,0x19,0x32);
    if (iVar1 == 0) {
      param_1[0x72e] = 0x3f800000;
    }
    else if (param_1[0x2a1] != 0) {
      param_1[0x72e] = 0;
      FUN_00a8e880(param_1[0x2a1] + 0x40);
      (**(code **)(*param_1 + 0x308))(0x3f800000,0x3ae4c388,0x3db2b8c2,0);
    }
  }
  FUN_00ac80a0(param_1[0x72d],param_1[0x72e]);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    iVar1 = FUN_00a82d50();
    if ((((iVar1 == 2) || (iVar1 = FUN_00a82d50(), iVar1 == 3)) && (param_1[0x3b1] != 0x1000a)) &&
       (iVar1 = FUN_00a8cab0(), iVar1 != 0x10009)) {
      if (param_1[0x139] == 0) {
        iVar1 = FUN_00a8cab0();
        param_1[0x3ad] = iVar1;
        iVar1 = FUN_00a8cab0();
        if (((iVar1 == 0x10000) || (iVar1 = FUN_00a8cab0(), iVar1 == 0x10009)) ||
           ((iVar1 = FUN_00a8cab0(), iVar1 == 0x1000a || (iVar1 = FUN_00a8cab0(), iVar1 == 0x1000d))
           )) {
          iVar1 = FUN_00a8cab0();
          param_1[0x72f] = iVar1;
        }
        if (param_1[0x70c] != 0) {
          param_1[0x72f] = 0x1000b;
        }
        param_1[0x3ae] = param_1[0x3a8];
        FUN_007cb240();
        FUN_00a8caf0(0x10009,0,0,0);
        param_1[0x3a8] = 0;
        FUN_00a962d0(0,0);
        param_1[0x3c0] = 0;
      }
      param_1[0x755] = 0;
      return;
    }
    iVar1 = FUN_00a82d50();
    if (((iVar1 == 4) && (param_1[0x3b1] != 0x1000a)) && (iVar1 = FUN_00a8cab0(), iVar1 != 0x1000a))
    {
      param_1[0x755] = 0;
      if (param_1[0x139] != 0) {
        return;
      }
      iVar1 = FUN_00a8cab0();
      param_1[0x3ad] = iVar1;
      iVar1 = FUN_00a8cab0();
      if ((((iVar1 == 0x10000) || (iVar1 = FUN_00a8cab0(), iVar1 == 0x10009)) ||
          (iVar1 = FUN_00a8cab0(), iVar1 == 0x1000a)) || (iVar1 = FUN_00a8cab0(), iVar1 == 0x1000d))
      {
        iVar1 = FUN_00a8cab0();
        param_1[0x72f] = iVar1;
      }
      if (param_1[0x70c] != 0) {
        param_1[0x72f] = 0x1000b;
      }
      param_1[0x3ae] = param_1[0x3a8];
      FUN_007cb240();
      FUN_00a8caf0(0x1000a,0,0,0);
      param_1[0x3a8] = 0;
      FUN_00a962d0(0,0);
      param_1[0x3c0] = 0;
      return;
    }
    FUN_007cd550(param_1[0x72f],0,0,0,0);
  }
LAB_007d0fb6:
  if (0.0 < (float)param_1[0x248]) {
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
  }
  return;
}

// 007D0FE0  FUN_007d0fe0  size=786  [between]
void __fastcall FUN_007d0fe0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    if (*(int *)(param_1 + 0xea4) == 2) {
      uVar2 = 0x8000040;
    }
    else {
      uVar2 = 0x8000000;
    }
    FUN_00aa4080(0xc,0,0x3e088889,0x3f800000,uVar2,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x1d54) = *(int *)(param_1 + 0x1d54) + 1;
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined2 *)(param_1 + 0x1b66) = 0;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) goto LAB_007d12cd;
  if ((*(int *)(param_1 + 0x1ca0) != 0) &&
     (iVar1 = FUN_00a94e10(0,0x41f00000,0x42a00000), iVar1 != 0)) {
    *(undefined4 *)(param_1 + 0x1cac) = 1;
  }
  FUN_00ac80a0(*(undefined4 *)(param_1 + 0x1cb4),*(undefined4 *)(param_1 + 0x1cb8));
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 == 0) {
LAB_007d12cd:
    if (0.0 < *(float *)(param_1 + 0x920)) {
      *(float *)(param_1 + 0x920) = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
    }
    return;
  }
  iVar1 = FUN_00a82d50();
  if ((((iVar1 == 2) || (iVar1 = FUN_00a82d50(), iVar1 == 3)) &&
      (*(int *)(param_1 + 0xec4) != 0x1000a)) && (iVar1 = FUN_00a8cab0(), iVar1 != 0x10009)) {
    *(undefined4 *)(param_1 + 0x1d54) = 0;
    if (*(int *)(param_1 + 0x4e4) != 0) {
      return;
    }
    uVar2 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xeb4) = uVar2;
    iVar1 = FUN_00a8cab0();
    if (((iVar1 == 0x10000) || (iVar1 = FUN_00a8cab0(), iVar1 == 0x10009)) ||
       ((iVar1 = FUN_00a8cab0(), iVar1 == 0x1000a || (iVar1 = FUN_00a8cab0(), iVar1 == 0x1000d)))) {
      uVar2 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0x1cbc) = uVar2;
    }
    if (*(int *)(param_1 + 0x1c30) != 0) {
      *(undefined4 *)(param_1 + 0x1cbc) = 0x1000b;
    }
    *(undefined4 *)(param_1 + 0xeb8) = *(undefined4 *)(param_1 + 0xea0);
    FUN_007cb240();
    uVar2 = 0x10009;
  }
  else {
    iVar1 = FUN_00a82d50();
    if (((iVar1 != 4) || (*(int *)(param_1 + 0xec4) == 0x1000a)) ||
       (iVar1 = FUN_00a8cab0(), iVar1 == 0x1000a)) {
      if ((*(int *)(param_1 + 0x1cac) == 0) || (*(int *)(param_1 + 0x1ca0) != 0)) {
        FUN_007cd550(*(undefined4 *)(param_1 + 0x1cbc),0,0,0,0);
      }
      else if (*(int *)(param_1 + 0xea4) == 2) {
        FUN_007cd710(0x3f800000,0x3f800000);
        *(undefined4 *)(param_1 + 0x1cac) = 0;
      }
      else {
        FUN_007cd7f0(0x3f800000,0x3f800000);
        *(undefined4 *)(param_1 + 0x1cac) = 0;
      }
      goto LAB_007d12cd;
    }
    *(undefined4 *)(param_1 + 0x1d54) = 0;
    if (*(int *)(param_1 + 0x4e4) != 0) {
      return;
    }
    uVar2 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xeb4) = uVar2;
    iVar1 = FUN_00a8cab0();
    if ((((iVar1 == 0x10000) || (iVar1 = FUN_00a8cab0(), iVar1 == 0x10009)) ||
        (iVar1 = FUN_00a8cab0(), iVar1 == 0x1000a)) || (iVar1 = FUN_00a8cab0(), iVar1 == 0x1000d)) {
      uVar2 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0x1cbc) = uVar2;
    }
    if (*(int *)(param_1 + 0x1c30) != 0) {
      *(undefined4 *)(param_1 + 0x1cbc) = 0x1000b;
    }
    *(undefined4 *)(param_1 + 0xeb8) = *(undefined4 *)(param_1 + 0xea0);
    FUN_007cb240();
    uVar2 = 0x1000a;
  }
  FUN_00a8caf0(uVar2,0,0,0);
  *(undefined4 *)(param_1 + 0xea0) = 0;
  FUN_00a962d0(0,0);
  *(undefined4 *)(param_1 + 0xf00) = 0;
  return;
}

// 007D1300  FUN_007d1300  size=544  [between]
void __fastcall FUN_007d1300(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_1[0x187] == 0) {
    param_1[0x755] = 0;
    *(undefined2 *)((int)param_1 + 0x1b66) = 0;
    if (param_1[0x3aa] == 2) {
      uVar3 = 0x8000040;
      uVar1 = 0x3e088889;
    }
    else {
      uVar3 = 0;
      uVar1 = 0x3e4ccccd;
    }
    FUN_00aa4080(0x17,0,uVar1,0x3f800000,uVar3,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  FUN_00a8e880(param_1[0x2a1] + 0x40);
  (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3ae4c388,0);
  if ((((float)param_1[0x2a4] <= (float)param_1[0x721]) && ((float)param_1[0x2a8] < 0.5235988)) &&
     ((short)param_1[0x6d7] != 0)) {
    param_1[0x82c] = 1;
  }
  iVar2 = FUN_00ac4780();
  if (((1 < iVar2) || (param_1[0x82d] == 0)) && (1.0471976 < (float)param_1[0x2a8])) {
    iVar2 = FUN_00a94ee0(0,0x78,0xc3);
    if (iVar2 != 0) {
      if ((float)param_1[0x2a7] <= 0.0) {
        if ((float)param_1[0x2a7] < 0.0) {
          FUN_007cd710(0x3f800000,(float)param_1[0x2a8] * 0.63661975);
        }
      }
      else {
        FUN_007cd7f0(0x3f800000,(float)param_1[0x2a8] * 0.63661975);
      }
    }
  }
  iVar2 = FUN_00a94ee0(0,0x1e,0x8c);
  if ((iVar2 != 0) && (param_1[0x2a1] != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3c8efa35,0);
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    FUN_007cd550(param_1[0x72f],0,0,0,0);
  }
  return;
}

// 007D1520  FUN_007d1520  size=487  [between]
void __fastcall FUN_007d1520(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if ((*(int *)(param_1 + 0x1b68) != 4) && (iVar1 = FUN_00a82d50(), iVar1 == 4)) {
    *(undefined4 *)(param_1 + 0x61c) = 2;
  }
  if (*(int *)(param_1 + 0xec4) != 0x1000a) {
    return;
  }
  uVar2 = FUN_00dde2a0(0,0x14);
  iVar1 = (uVar2 & 0xffff) + 0xa0;
  uVar2 = FUN_00dde2a0(0,10);
  iVar1 = FUN_00a94ee0(0,(uVar2 & 0xffff) + 0x32,iVar1);
  if (iVar1 == 0) {
    return;
  }
  if (*(float *)(param_1 + 0xa90) <= 100.0) {
    return;
  }
  if (400.0 <= *(float *)(param_1 + 0xa90)) {
    return;
  }
  if (*(float *)(param_1 + 0xaa0) <= 0.34906584) {
    if (*(int *)(param_1 + 0x4e4) == 0) {
      uVar3 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xeb4) = uVar3;
      iVar1 = FUN_00a8cab0();
      if ((((iVar1 == 0x10000) || (iVar1 = FUN_00a8cab0(), iVar1 == 0x10009)) ||
          (iVar1 = FUN_00a8cab0(), iVar1 == 0x1000a)) || (iVar1 = FUN_00a8cab0(), iVar1 == 0x1000d))
      {
        uVar3 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0x1cbc) = uVar3;
      }
      if (*(int *)(param_1 + 0x1c30) != 0) {
        *(undefined4 *)(param_1 + 0x1cbc) = 0x1000b;
      }
      *(undefined4 *)(param_1 + 0xeb8) = *(undefined4 *)(param_1 + 0xea0);
      FUN_007cb240();
      FUN_00a8caf0(0x10006,0,0,0);
      *(undefined4 *)(param_1 + 0xea0) = 0;
      FUN_00a962d0(0,0);
      *(undefined4 *)(param_1 + 0xf00) = 0;
      return;
    }
    return;
  }
  if (1.5707964 <= *(float *)(param_1 + 0xaa0)) {
    return;
  }
  if (*(float *)(param_1 + 0xa9c) <= 0.0) {
    if (0.0 <= *(float *)(param_1 + 0xa9c)) {
      return;
    }
    FUN_007cda90(0x3f800000,*(float *)(param_1 + 0xaa0) * 0.63661975);
    return;
  }
  FUN_007cdb70(0x3f800000,*(float *)(param_1 + 0xaa0) * 0.63661975);
  return;
}

// 007D1710  FUN_007d1710  size=697  [between]
void __fastcall FUN_007d1710(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    FUN_00aa4080(0xf,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x1d54) = 0;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_007cd550(*(undefined4 *)(param_1 + 0x1cbc),0,0,0,0);
    }
    if (((*(float *)(param_1 + 0xa90) <= *(float *)(param_1 + 0x1c84)) &&
        (*(int *)(param_1 + 0x1ca0) != 0)) ||
       (iVar2 = FUN_00907640(param_1 + 0x1cd0,0,param_1 + 0x1d00), iVar2 != 0)) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      return;
    }
    break;
  case 2:
    iVar2 = FUN_00a94ee0(0,0x14,0xb4);
    if (iVar2 == 0) {
      FUN_007cd550(*(undefined4 *)(param_1 + 0x1cbc),0,0,0,0);
    }
    else {
      FUN_00aa4080(0x13,0,0x3e4ccccd,0x3f800000,0x8000000,0x3f800000,0x3f800000);
    }
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 3:
    FUN_00ac80a0(0x3f000000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      iVar2 = FUN_00a82d50();
      if (iVar2 != 4) {
        FUN_007cd550(*(undefined4 *)(param_1 + 0x1cbc),0,0,0,0);
        return;
      }
      if (*(int *)(param_1 + 0x4e4) == 0) {
        uVar1 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xeb4) = uVar1;
        iVar2 = FUN_00a8cab0();
        if ((((iVar2 == 0x10000) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x10009)) ||
            (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000a)) ||
           (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000d)) {
          uVar1 = FUN_00a8cab0();
          *(undefined4 *)(param_1 + 0x1cbc) = uVar1;
        }
        if (*(int *)(param_1 + 0x1c30) != 0) {
          *(undefined4 *)(param_1 + 0x1cbc) = 0x1000b;
        }
        *(undefined4 *)(param_1 + 0xeb8) = *(undefined4 *)(param_1 + 0xea0);
        FUN_007cb240();
        FUN_00a8caf0(0x1000a,0,0,0);
        *(undefined4 *)(param_1 + 0xea0) = 0;
        FUN_00a962d0(0,0);
        *(undefined4 *)(param_1 + 0xf00) = 0;
        return;
      }
    }
    break;
  case 4:
    FUN_00aa4080(0xf,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 5:
    FUN_00ac80a0(*(undefined4 *)(param_1 + 0x1cb4),0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_007cd550(*(undefined4 *)(param_1 + 0x1cbc),0,0,0,0);
      return;
    }
  }
  return;
}

// 007D19F0  FUN_007d19f0  size=141  [between]
void __fastcall FUN_007d19f0(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x1d54) = 0;
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0x15,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_007cd550(*(undefined4 *)(param_1 + 0xeb4),0,0,0,0);
  }
  return;
}

// 007D1A80  FUN_007d1a80  size=650  [between]
void __fastcall FUN_007d1a80(int param_1)

{
  int iVar1;
  
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    FUN_00aa4080(0x16,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x1d54) = 0;
    *(undefined2 *)(param_1 + 0x1b66) = 0;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (((*(float *)(param_1 + 0xa90) <= *(float *)(param_1 + 0x1c84)) &&
        (*(float *)(param_1 + 0xaa0) < 0.5235988)) && (*(short *)(param_1 + 0x1b5c) != 0)) {
      *(undefined4 *)(param_1 + 0x20b0) = 1;
    }
    iVar1 = FUN_00ac4780();
    if ((((1 < iVar1) || (*(int *)(param_1 + 0x20b4) == 0)) &&
        (1.0471976 < *(float *)(param_1 + 0xaa0))) &&
       (iVar1 = FUN_00a94ee0(0,0x78,0xc3), iVar1 != 0)) {
      if (0.0 < *(float *)(param_1 + 0xa9c)) {
LAB_007d1b82:
        FUN_007cd7f0(0x3f800000,*(float *)(param_1 + 0xaa0) * 0.63661975);
        return;
      }
      if (*(float *)(param_1 + 0xa9c) < 0.0) {
LAB_007d1bb2:
        FUN_007cd710(0x3f800000,*(float *)(param_1 + 0xaa0) * 0.63661975);
        return;
      }
    }
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_007cd550(*(undefined4 *)(param_1 + 0xeb4),0,0,0,0);
      return;
    }
    break;
  case 2:
    FUN_00aa4080(0x16,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 3:
    FUN_00ac80a0(*(undefined4 *)(param_1 + 0x1cb4),0x3f800000);
    if (((*(float *)(param_1 + 0xa90) <= *(float *)(param_1 + 0x1c84)) &&
        (*(float *)(param_1 + 0xaa0) < 0.5235988)) && (*(short *)(param_1 + 0x1b5c) != 0)) {
      *(undefined4 *)(param_1 + 0x20b0) = 1;
    }
    iVar1 = FUN_00ac4780();
    if (((1 < iVar1) || (*(int *)(param_1 + 0x20b4) == 0)) &&
       ((1.0471976 < *(float *)(param_1 + 0xaa0) && (iVar1 = FUN_00a94ee0(0,0x78,0xc3), iVar1 != 0))
       )) {
      if (0.0 < *(float *)(param_1 + 0xa9c)) goto LAB_007d1b82;
      if (*(float *)(param_1 + 0xa9c) < 0.0) goto LAB_007d1bb2;
    }
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_007cd550(*(undefined4 *)(param_1 + 0xeb4),0,0,0,0);
      return;
    }
    break;
  default:
    break;
  }
  return;
}

// 007D1D20  FUN_007d1d20  size=610  [between]
void __fastcall FUN_007d1d20(int *param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  
  param_1[0x3b1] = 0x10009;
  iVar2 = FUN_00a82d50();
  if (iVar2 == 1) {
    if (param_1[0x6c4] == 0) {
                    /* WARNING: Could not recover jumptable at 0x007d1e17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    uVar3 = FUN_00a8d730(param_1 + 0x10);
    FUN_00a8d6f0(uVar3);
    if (param_1[0x139] != 0) {
      return;
    }
    iVar2 = FUN_00a8cab0();
    param_1[0x3ad] = iVar2;
    iVar2 = FUN_00a8cab0();
    if (((iVar2 == 0x10000) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x10009)) ||
       ((iVar2 = FUN_00a8cab0(), iVar2 == 0x1000a || (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000d)))) {
      iVar2 = FUN_00a8cab0();
      param_1[0x72f] = iVar2;
    }
    if (param_1[0x70c] != 0) {
      param_1[0x72f] = 0x1000b;
    }
    param_1[0x3ae] = param_1[0x3a8];
    FUN_007cb240();
    uVar3 = 0x1000d;
  }
  else {
    iVar2 = FUN_00a82d50();
    if (iVar2 != 4) {
      if ((param_1[0x187] == 1) && (0.34906584 < (float)param_1[0x2a8])) {
        if ((float)param_1[0x2a7] < 0.0) {
          FUN_007cd710(0x3f800000,(float)param_1[0x2a8] * 0.63661975);
          param_1[0x729] = param_1[0x728];
          return;
        }
        if (0.0 < (float)param_1[0x2a7]) {
          FUN_007cd7f0(0x3f800000,(float)param_1[0x2a8] * 0.63661975);
          param_1[0x729] = param_1[0x728];
          return;
        }
      }
      sVar1 = FUN_00dde2a0(0,9);
      if ((sVar1 == 0) && (param_1[0x187] != 3)) {
        param_1[0x187] = 2;
      }
      return;
    }
    if (param_1[0x139] != 0) {
      return;
    }
    iVar2 = FUN_00a8cab0();
    param_1[0x3ad] = iVar2;
    iVar2 = FUN_00a8cab0();
    if ((((iVar2 == 0x10000) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x10009)) ||
        (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000a)) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000d)) {
      iVar2 = FUN_00a8cab0();
      param_1[0x72f] = iVar2;
    }
    if (param_1[0x70c] != 0) {
      param_1[0x72f] = 0x1000b;
    }
    param_1[0x3ae] = param_1[0x3a8];
    FUN_007cb240();
    uVar3 = 0x1000a;
  }
  FUN_00a8caf0(uVar3,0,0,0);
  param_1[0x3a8] = 0;
  FUN_00a962d0(0,0);
  param_1[0x3c0] = 0;
  return;
}

// 007D1F90  FUN_007d1f90  size=5379  [between]
void __fastcall FUN_007d1f90(int param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ushort uVar5;
  ushort uVar6;
  short sVar7;
  int iVar8;
  undefined4 uVar9;
  float local_c;
  float local_8;
  float local_4;
  
  if ((*(uint *)(param_1 + 0xf1c) & 0x100000) == 0) {
    FUN_00ac81f0(param_1 + 0x40,&local_8,&local_4);
  }
  else {
    FUN_00ac8270(param_1 + 0x40,&local_8,&local_4);
  }
  if (local_8 != 0.0) {
    return;
  }
  iVar8 = FUN_00a82d50();
  if (((iVar8 == 2) || (iVar8 = FUN_00a82d50(), iVar8 == 3)) && (*(int *)(param_1 + 0x4e4) == 0)) {
    uVar9 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xeb4) = uVar9;
    iVar8 = FUN_00a8cab0();
    if (((iVar8 == 0x10000) || (iVar8 = FUN_00a8cab0(), iVar8 == 0x10009)) ||
       ((iVar8 = FUN_00a8cab0(), iVar8 == 0x1000a || (iVar8 = FUN_00a8cab0(), iVar8 == 0x1000d)))) {
      uVar9 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0x1cbc) = uVar9;
    }
    if (*(int *)(param_1 + 0x1c30) != 0) {
      *(undefined4 *)(param_1 + 0x1cbc) = 0x1000b;
    }
    *(undefined4 *)(param_1 + 0xeb8) = *(undefined4 *)(param_1 + 0xea0);
    FUN_007cb240();
    FUN_00a8caf0(0x10009,0,0,0);
    *(undefined4 *)(param_1 + 0xea0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0xf00) = 0;
  }
  if (*(int *)(param_1 + 0x1d50) == 0) {
    if ((*(float *)(param_1 + 0xa90) <= 25.0) && (1.5707964 < *(float *)(param_1 + 0xaa0))) {
      if (*(int *)(param_1 + 0x4e4) == 0) {
        uVar9 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xeb4) = uVar9;
        iVar8 = FUN_00a8cab0();
        if ((((iVar8 == 0x10000) || (iVar8 = FUN_00a8cab0(), iVar8 == 0x10009)) ||
            (iVar8 = FUN_00a8cab0(), iVar8 == 0x1000a)) ||
           (iVar8 = FUN_00a8cab0(), iVar8 == 0x1000d)) {
          uVar9 = FUN_00a8cab0();
          *(undefined4 *)(param_1 + 0x1cbc) = uVar9;
        }
        if (*(int *)(param_1 + 0x1c30) != 0) {
          *(undefined4 *)(param_1 + 0x1cbc) = 0x1000b;
        }
        *(undefined4 *)(param_1 + 0xeb8) = *(undefined4 *)(param_1 + 0xea0);
        FUN_007cb240();
        FUN_00a8caf0(0x1000e,0,0,0);
        *(undefined4 *)(param_1 + 0xea0) = 0;
        FUN_00a962d0(0,0);
        *(undefined4 *)(param_1 + 0xf00) = 0;
      }
      *(undefined4 *)(param_1 + 0x1d50) = 1;
      return;
    }
    *(undefined4 *)(param_1 + 0x1d50) = 1;
  }
  if (((1 < *(int *)(param_1 + 0x1d54)) || (*(float *)(param_1 + 0x10d4) < 0.0)) &&
     ((*(int *)(param_1 + 0x20b0) == 0 &&
      (iVar8 = FUN_00907640(param_1 + 0x1ce0,0,param_1 + 0x1d00), iVar8 == 0)))) {
    *(undefined4 *)(param_1 + 0x1d54) = 0;
    if (*(int *)(param_1 + 0x4e4) != 0) {
      return;
    }
    uVar9 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xeb4) = uVar9;
    iVar8 = FUN_00a8cab0();
    if (((iVar8 == 0x10000) || (iVar8 = FUN_00a8cab0(), iVar8 == 0x10009)) ||
       ((iVar8 = FUN_00a8cab0(), iVar8 == 0x1000a || (iVar8 = FUN_00a8cab0(), iVar8 == 0x1000d)))) {
      uVar9 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0x1cbc) = uVar9;
    }
    if (*(int *)(param_1 + 0x1c30) != 0) {
      *(undefined4 *)(param_1 + 0x1cbc) = 0x1000b;
    }
    *(undefined4 *)(param_1 + 0xeb8) = *(undefined4 *)(param_1 + 0xea0);
    FUN_007cb240();
    uVar9 = 0x50002;
    goto LAB_007d3362;
  }
  iVar8 = FUN_00ac4780();
  if ((iVar8 < 2) && (*(int *)(param_1 + 0x20b4) != 0)) {
    return;
  }
  pfVar1 = (float *)(param_1 + 0x1d00);
  local_4 = 10000.0;
  iVar8 = FUN_00907640(param_1 + 0x1cd0,0,pfVar1);
  fVar2 = local_4;
  if (iVar8 != 0) {
    fVar2 = *(float *)(param_1 + 0x40) - *pfVar1;
    fVar4 = *(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x1d04);
    fVar3 = *(float *)(param_1 + 0x48) - *(float *)(param_1 + 0x1d08);
    fVar2 = fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2;
  }
  if ((25.0 < *(float *)(param_1 + 0xa90)) || (NAN(fVar2) || 25.0 < fVar2 == (fVar2 == 25.0))) {
    if (0.87266463 < *(float *)(param_1 + 0xaa0)) {
LAB_007d328e:
      if (*(float *)(param_1 + 0xaa0) <= 0.87266463) {
        return;
      }
      if ((*(float *)(param_1 + 0xaa0) <= 1.5707964) || (uVar6 = FUN_00dde2a0(0,10), uVar6 < 6)) {
        if (0.0 < *(float *)(param_1 + 0xa9c)) {
          if (*(float *)(param_1 + 0xaa0) <= 1.5707964) {
            FUN_007cd7f0(0x3f800000,*(float *)(param_1 + 0xaa0) * 0.63661975);
            *(undefined4 *)(param_1 + 0x1ca4) = *(undefined4 *)(param_1 + 0x1ca0);
            return;
          }
          FUN_007cd9b0(0x3f800000,*(float *)(param_1 + 0xaa0) * 0.31830987);
          *(undefined4 *)(param_1 + 0x1ca4) = *(undefined4 *)(param_1 + 0x1ca0);
          return;
        }
        if (0.0 <= *(float *)(param_1 + 0xa9c)) {
          *(undefined4 *)(param_1 + 0x1ca4) = *(undefined4 *)(param_1 + 0x1ca0);
          return;
        }
        if (*(float *)(param_1 + 0xaa0) <= 1.5707964) {
          FUN_007cd710(0x3f800000,*(float *)(param_1 + 0xaa0) * 0.63661975);
          *(undefined4 *)(param_1 + 0x1ca4) = *(undefined4 *)(param_1 + 0x1ca0);
          return;
        }
        FUN_007cd8d0(0x3f800000,*(float *)(param_1 + 0xaa0) * 0.31830987);
        *(undefined4 *)(param_1 + 0x1ca4) = *(undefined4 *)(param_1 + 0x1ca0);
        return;
      }
      if (*(int *)(param_1 + 0x4e4) != 0) {
        return;
      }
      uVar9 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xeb4) = uVar9;
      iVar8 = FUN_00a8cab0();
      if ((((iVar8 == 0x10000) || (iVar8 = FUN_00a8cab0(), iVar8 == 0x10009)) ||
          (iVar8 = FUN_00a8cab0(), iVar8 == 0x1000a)) || (iVar8 = FUN_00a8cab0(), iVar8 == 0x1000d))
      {
        uVar9 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0x1cbc) = uVar9;
      }
      if (*(int *)(param_1 + 0x1c30) != 0) {
        *(undefined4 *)(param_1 + 0x1cbc) = 0x1000b;
      }
      *(undefined4 *)(param_1 + 0xeb8) = *(undefined4 *)(param_1 + 0xea0);
      goto LAB_007d3353;
    }
    if (25.0 <= fVar2) {
LAB_007d2a34:
      if (*(float *)(param_1 + 0xa90) <= *(float *)(param_1 + 0x1c84)) {
        if (*(float *)(param_1 + 0x1e34) <= 0.0) {
          if (*(float *)(param_1 + 0xaa0) < 0.5235988) {
            if (*(short *)(param_1 + 0x1b5c) != 0) {
              *(undefined4 *)(param_1 + 0x20b0) = 1;
              return;
            }
            if (*(int *)(param_1 + 0x4e4) != 0) {
              return;
            }
            uVar9 = FUN_00a8cab0();
            *(undefined4 *)(param_1 + 0xeb4) = uVar9;
            iVar8 = FUN_00a8cab0();
            if (((iVar8 == 0x10000) || (iVar8 = FUN_00a8cab0(), iVar8 == 0x10009)) ||
               ((iVar8 = FUN_00a8cab0(), iVar8 == 0x1000a ||
                (iVar8 = FUN_00a8cab0(), iVar8 == 0x1000d)))) {
              uVar9 = FUN_00a8cab0();
              *(undefined4 *)(param_1 + 0x1cbc) = uVar9;
            }
            goto LAB_007d2cf4;
          }
          goto LAB_007d2d26;
        }
        local_4 = 10000.0;
        uVar9 = FUN_007cb090(&local_4,0);
        switch(uVar9) {
        case 0:
        case 1:
          if (*(int *)(param_1 + 0x4e4) == 0) {
            uVar9 = FUN_00a8cab0();
            *(undefined4 *)(param_1 + 0xeb4) = uVar9;
            iVar8 = FUN_00a8cab0();
            if ((((iVar8 == 0x10000) || (iVar8 = FUN_00a8cab0(), iVar8 == 0x10009)) ||
                (iVar8 = FUN_00a8cab0(), iVar8 == 0x1000a)) ||
               (iVar8 = FUN_00a8cab0(), iVar8 == 0x1000d)) {
              uVar9 = FUN_00a8cab0();
              *(undefined4 *)(param_1 + 0x1cbc) = uVar9;
            }
            if (*(int *)(param_1 + 0x1c30) != 0) {
              *(undefined4 *)(param_1 + 0x1cbc) = 0x1000b;
            }
            *(undefined4 *)(param_1 + 0xeb8) = *(undefined4 *)(param_1 + 0xea0);
            FUN_007cb240();
            FUN_00a8caf0(0x10008,0,0,0);
            *(undefined4 *)(param_1 + 0xea0) = 0;
            FUN_00a962d0(0,0);
            *(undefined4 *)(param_1 + 0xf00) = 0;
          }
          if (10.0 <= local_4) {
            return;
          }
          *(undefined4 *)(param_1 + 0x61c) = 2;
          *(float *)(param_1 + 0x1cb4) = local_4 * 0.1;
          return;
        case 2:
          *(undefined4 *)(param_1 + 0xea8) = 1;
          goto LAB_007d2b68;
        case 3:
          *(undefined4 *)(param_1 + 0xea8) = 2;
          if (*(int *)(param_1 + 0x4e4) != 0) {
            return;
          }
          uVar9 = FUN_00a8cab0();
          *(undefined4 *)(param_1 + 0xeb4) = uVar9;
          iVar8 = FUN_00a8cab0();
          if (((iVar8 != 0x10000) && (iVar8 = FUN_00a8cab0(), iVar8 != 0x10009)) &&
             ((iVar8 = FUN_00a8cab0(), iVar8 != 0x1000a &&
              (iVar8 = FUN_00a8cab0(), iVar8 != 0x1000d)))) goto LAB_007d307c;
          uVar9 = FUN_00a8cab0();
          break;
        default:
          return;
        }
        goto LAB_007d3076;
      }
LAB_007d2d26:
      if ((*(float *)(param_1 + 0xa90) <= *(float *)(param_1 + 0x1c84)) ||
         (400.0 < *(float *)(param_1 + 0xa90))) {
        if ((*(float *)(param_1 + 0xa90) <= 400.0) || (*(int *)(param_1 + 0x20b4) != 0))
        goto LAB_007d328e;
        iVar8 = FUN_007cb7c0();
        if (iVar8 != 0) {
          iVar8 = FUN_00907640(param_1 + 0x1ce4,0,0);
          if (iVar8 != 0) {
            *(undefined4 *)(param_1 + 0xea8) = 2;
            if (*(int *)(param_1 + 0x4e4) != 0) {
              return;
            }
            uVar9 = FUN_00a8cab0();
            *(undefined4 *)(param_1 + 0xeb4) = uVar9;
            iVar8 = FUN_00a8cab0();
            if (((iVar8 == 0x10000) || (iVar8 = FUN_00a8cab0(), iVar8 == 0x10009)) ||
               ((iVar8 = FUN_00a8cab0(), iVar8 == 0x1000a ||
                (iVar8 = FUN_00a8cab0(), iVar8 == 0x1000d)))) {
              uVar9 = FUN_00a8cab0();
              *(undefined4 *)(param_1 + 0x1cbc) = uVar9;
            }
            if (*(int *)(param_1 + 0x1c30) != 0) {
              *(undefined4 *)(param_1 + 0x1cbc) = 0x1000b;
            }
            *(undefined4 *)(param_1 + 0xeb8) = *(undefined4 *)(param_1 + 0xea0);
            FUN_007cb240();
            uVar9 = 0x10005;
            goto LAB_007d3362;
          }
          iVar8 = FUN_00907640(param_1 + 0x1ce8,0,0);
          if (iVar8 != 0) goto LAB_007d3018;
        }
        fVar2 = *(float *)(*(int *)(param_1 + 0xa84) + 0x44) - *(float *)(param_1 + 0x44);
        if (fVar2 < 2.0 != (fVar2 == 2.0)) {
          if (*(int *)(param_1 + 0x4e4) != 0) {
            return;
          }
          uVar9 = FUN_00a8cab0();
          *(undefined4 *)(param_1 + 0xeb4) = uVar9;
          iVar8 = FUN_00a8cab0();
          if (((iVar8 == 0x10000) || (iVar8 = FUN_00a8cab0(), iVar8 == 0x10009)) ||
             ((iVar8 = FUN_00a8cab0(), iVar8 == 0x1000a ||
              (iVar8 = FUN_00a8cab0(), iVar8 == 0x1000d)))) {
            uVar9 = FUN_00a8cab0();
            *(undefined4 *)(param_1 + 0x1cbc) = uVar9;
          }
          if (*(int *)(param_1 + 0x1c30) != 0) {
            *(undefined4 *)(param_1 + 0x1cbc) = 0x1000b;
          }
          *(undefined4 *)(param_1 + 0xeb8) = *(undefined4 *)(param_1 + 0xea0);
          FUN_007cb240();
          uVar9 = 0x50000;
          goto LAB_007d3362;
        }
        if (*(short *)(param_1 + 0x1b5c) != 0) {
          if (*(int *)(param_1 + 0x4e4) != 0) {
            return;
          }
          uVar9 = FUN_00a8cab0();
          *(undefined4 *)(param_1 + 0xeb4) = uVar9;
          iVar8 = FUN_00a8cab0();
          if ((((iVar8 == 0x10000) || (iVar8 = FUN_00a8cab0(), iVar8 == 0x10009)) ||
              (iVar8 = FUN_00a8cab0(), iVar8 == 0x1000a)) ||
             (iVar8 = FUN_00a8cab0(), iVar8 == 0x1000d)) {
            uVar9 = FUN_00a8cab0();
            *(undefined4 *)(param_1 + 0x1cbc) = uVar9;
          }
          if (*(int *)(param_1 + 0x1c30) != 0) {
            *(undefined4 *)(param_1 + 0x1cbc) = 0x1000b;
          }
          *(undefined4 *)(param_1 + 0xeb8) = *(undefined4 *)(param_1 + 0xea0);
          FUN_007cb240();
          uVar9 = 0x1000c;
          goto LAB_007d3362;
        }
      }
      else {
        iVar8 = FUN_007cb7c0();
        if (iVar8 != 0) {
          iVar8 = FUN_00907640(param_1 + 0x1ce4,0,0);
          if (iVar8 != 0) {
            *(undefined4 *)(param_1 + 0xea8) = 2;
            goto LAB_007d301e;
          }
          iVar8 = FUN_00907640(param_1 + 0x1ce8,0,0);
          if (iVar8 != 0) {
            *(undefined4 *)(param_1 + 0xea8) = 1;
            if (*(int *)(param_1 + 0x4e4) != 0) {
              return;
            }
            uVar9 = FUN_00a8cab0();
            *(undefined4 *)(param_1 + 0xeb4) = uVar9;
            iVar8 = FUN_00a8cab0();
            if (((iVar8 == 0x10000) || (iVar8 = FUN_00a8cab0(), iVar8 == 0x10009)) ||
               ((iVar8 = FUN_00a8cab0(), iVar8 == 0x1000a ||
                (iVar8 = FUN_00a8cab0(), iVar8 == 0x1000d)))) {
              uVar9 = FUN_00a8cab0();
              *(undefined4 *)(param_1 + 0x1cbc) = uVar9;
            }
            if (*(int *)(param_1 + 0x1c30) != 0) {
              *(undefined4 *)(param_1 + 0x1cbc) = 0x1000b;
            }
            *(undefined4 *)(param_1 + 0xeb8) = *(undefined4 *)(param_1 + 0xea0);
            FUN_007cb240();
            uVar9 = 0x10005;
            goto LAB_007d3362;
          }
        }
        sVar7 = FUN_00dde2a0(0,1);
        if (((sVar7 == 0) ||
            (fVar2 = *(float *)(param_1 + 0xa90), NAN(fVar2) || 225.0 < fVar2 == (fVar2 == 225.0)))
           || ((*(int *)(param_1 + 0x20b4) != 0 ||
               (fVar2 = *(float *)(*(int *)(param_1 + 0xa84) + 0x44) - *(float *)(param_1 + 0x44),
               fVar2 < 2.0 == (fVar2 == 2.0))))) {
          if (*(int *)(param_1 + 0x4e4) != 0) {
            return;
          }
          uVar9 = FUN_00a8cab0();
          *(undefined4 *)(param_1 + 0xeb4) = uVar9;
          iVar8 = FUN_00a8cab0();
          if ((((iVar8 == 0x10000) || (iVar8 = FUN_00a8cab0(), iVar8 == 0x10009)) ||
              (iVar8 = FUN_00a8cab0(), iVar8 == 0x1000a)) ||
             (iVar8 = FUN_00a8cab0(), iVar8 == 0x1000d)) {
            uVar9 = FUN_00a8cab0();
            *(undefined4 *)(param_1 + 0x1cbc) = uVar9;
          }
          if (*(int *)(param_1 + 0x1c30) != 0) {
            *(undefined4 *)(param_1 + 0x1cbc) = 0x1000b;
          }
          *(undefined4 *)(param_1 + 0xeb8) = *(undefined4 *)(param_1 + 0xea0);
          FUN_007cb240();
          uVar9 = 0x1000c;
          goto LAB_007d3362;
        }
      }
      if (*(int *)(param_1 + 0x4e4) != 0) {
        return;
      }
      uVar9 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xeb4) = uVar9;
      iVar8 = FUN_00a8cab0();
      if (((iVar8 == 0x10000) || (iVar8 = FUN_00a8cab0(), iVar8 == 0x10009)) ||
         ((iVar8 = FUN_00a8cab0(), iVar8 == 0x1000a || (iVar8 = FUN_00a8cab0(), iVar8 == 0x1000d))))
      {
        uVar9 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0x1cbc) = uVar9;
      }
      if (*(int *)(param_1 + 0x1c30) != 0) {
        *(undefined4 *)(param_1 + 0x1cbc) = 0x1000b;
      }
      *(undefined4 *)(param_1 + 0xeb8) = *(undefined4 *)(param_1 + 0xea0);
      FUN_007cb240();
      uVar9 = 0x50000;
      goto LAB_007d3362;
    }
    iVar8 = FUN_007cd000();
    if (iVar8 == 0) {
      uVar6 = FUN_00dde2a0(0,10);
      if (uVar6 < 6) {
        *(undefined4 *)(param_1 + 0xea8) = 2;
        if (*(int *)(param_1 + 0x4e4) != 0) {
          return;
        }
        uVar9 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xeb4) = uVar9;
        iVar8 = FUN_00a8cab0();
        if ((((iVar8 == 0x10000) || (iVar8 = FUN_00a8cab0(), iVar8 == 0x10009)) ||
            (iVar8 = FUN_00a8cab0(), iVar8 == 0x1000a)) ||
           (iVar8 = FUN_00a8cab0(), iVar8 == 0x1000d)) {
          uVar9 = FUN_00a8cab0();
          *(undefined4 *)(param_1 + 0x1cbc) = uVar9;
        }
        goto LAB_007d2bc9;
      }
      goto LAB_007d2928;
    }
    if (iVar8 != 2) {
      if (iVar8 != 3) goto LAB_007d2a34;
      *(undefined4 *)(param_1 + 0xea8) = 2;
LAB_007d2b68:
      if (*(int *)(param_1 + 0x4e4) != 0) {
        return;
      }
      uVar9 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xeb4) = uVar9;
      iVar8 = FUN_00a8cab0();
      if (((iVar8 == 0x10000) || (iVar8 = FUN_00a8cab0(), iVar8 == 0x10009)) ||
         ((iVar8 = FUN_00a8cab0(), iVar8 == 0x1000a || (iVar8 = FUN_00a8cab0(), iVar8 == 0x1000d))))
      {
        uVar9 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0x1cbc) = uVar9;
      }
      goto LAB_007d2bc9;
    }
    *(undefined4 *)(param_1 + 0xea8) = 1;
    if (*(int *)(param_1 + 0x4e4) != 0) {
      return;
    }
    uVar9 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xeb4) = uVar9;
    iVar8 = FUN_00a8cab0();
    if ((((iVar8 == 0x10000) || (iVar8 = FUN_00a8cab0(), iVar8 == 0x10009)) ||
        (iVar8 = FUN_00a8cab0(), iVar8 == 0x1000a)) || (iVar8 = FUN_00a8cab0(), iVar8 == 0x1000d)) {
      uVar9 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0x1cbc) = uVar9;
    }
  }
  else {
    uVar6 = 4;
    if (1 < *(ushort *)(param_1 + 0x1b66)) {
      uVar6 = 0;
    }
    if ((1.5707964 < *(float *)(param_1 + 0xaa0)) && (uVar5 = FUN_00dde2a0(0,9), uVar6 <= uVar5)) {
      if (*(int *)(param_1 + 0x4e4) != 0) {
        return;
      }
      uVar9 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xeb4) = uVar9;
      iVar8 = FUN_00a8cab0();
      if (((iVar8 == 0x10000) || (iVar8 = FUN_00a8cab0(), iVar8 == 0x10009)) ||
         ((iVar8 = FUN_00a8cab0(), iVar8 == 0x1000a || (iVar8 = FUN_00a8cab0(), iVar8 == 0x1000d))))
      {
        uVar9 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0x1cbc) = uVar9;
      }
      if (*(int *)(param_1 + 0x1c30) != 0) {
        *(undefined4 *)(param_1 + 0x1cbc) = 0x1000b;
      }
      *(undefined4 *)(param_1 + 0xeb8) = *(undefined4 *)(param_1 + 0xea0);
LAB_007d3353:
      FUN_007cb240();
      uVar9 = 0x1000e;
      goto LAB_007d3362;
    }
    uVar6 = 5;
    if (1 < *(ushort *)(param_1 + 0x1b66)) {
      uVar6 = 0;
    }
    uVar5 = FUN_00dde2a0(0,9);
    if ((uVar5 < uVar6) || (1.5707964 < *(float *)(param_1 + 0xaa0))) {
      fVar2 = *(float *)(*(int *)(param_1 + 0xa84) + 0x44) - *(float *)(param_1 + 0x44);
      if ((fVar2 < 2.0 != (fVar2 == 2.0)) && (*(int *)(param_1 + 0x20b0) == 0)) {
        if (*(int *)(param_1 + 0x4e4) != 0) {
          return;
        }
        uVar9 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xeb4) = uVar9;
        iVar8 = FUN_00a8cab0();
        if ((((iVar8 == 0x10000) || (iVar8 = FUN_00a8cab0(), iVar8 == 0x10009)) ||
            (iVar8 = FUN_00a8cab0(), iVar8 == 0x1000a)) ||
           (iVar8 = FUN_00a8cab0(), iVar8 == 0x1000d)) {
          uVar9 = FUN_00a8cab0();
          *(undefined4 *)(param_1 + 0x1cbc) = uVar9;
        }
        if (*(int *)(param_1 + 0x1c30) != 0) {
          *(undefined4 *)(param_1 + 0x1cbc) = 0x1000b;
        }
        *(undefined4 *)(param_1 + 0xeb8) = *(undefined4 *)(param_1 + 0xea0);
        FUN_007cb240();
        uVar9 = 0x50002;
        goto LAB_007d3362;
      }
      if (0.5235988 <= *(float *)(param_1 + 0xaa0)) {
        return;
      }
      if (*(short *)(param_1 + 0x1b5c) != 0) {
        *(undefined4 *)(param_1 + 0x20b0) = 1;
        return;
      }
      if (*(int *)(param_1 + 0x4e4) != 0) {
        return;
      }
      uVar9 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xeb4) = uVar9;
      iVar8 = FUN_00a8cab0();
      if (((iVar8 == 0x10000) || (iVar8 = FUN_00a8cab0(), iVar8 == 0x10009)) ||
         ((iVar8 = FUN_00a8cab0(), iVar8 == 0x1000a || (iVar8 = FUN_00a8cab0(), iVar8 == 0x1000d))))
      {
        uVar9 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0x1cbc) = uVar9;
      }
LAB_007d2cf4:
      if (*(int *)(param_1 + 0x1c30) != 0) {
        *(undefined4 *)(param_1 + 0x1cbc) = 0x1000b;
      }
      *(undefined4 *)(param_1 + 0xeb8) = *(undefined4 *)(param_1 + 0xea0);
      FUN_007cb240();
      uVar9 = 0x50002;
      goto LAB_007d3362;
    }
    local_c = 10000.0;
    local_4 = 10000.0;
    local_8 = 10000.0;
    iVar8 = FUN_00907640(param_1 + 0x1cd8,0,pfVar1);
    if (iVar8 != 0) {
      fVar2 = *pfVar1 - *(float *)(param_1 + 0x40);
      fVar4 = *(float *)(param_1 + 0x1d04) - *(float *)(param_1 + 0x44);
      fVar3 = *(float *)(param_1 + 0x1d08) - *(float *)(param_1 + 0x48);
      local_c = fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2;
    }
    iVar8 = FUN_00907640(param_1 + 0x1cdc,0,pfVar1);
    if (iVar8 != 0) {
      fVar2 = *pfVar1 - *(float *)(param_1 + 0x40);
      fVar4 = *(float *)(param_1 + 0x1d04) - *(float *)(param_1 + 0x44);
      fVar3 = *(float *)(param_1 + 0x1d08) - *(float *)(param_1 + 0x48);
      local_4 = fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2;
    }
    iVar8 = FUN_00907640(param_1 + 0x1cd4,0,pfVar1);
    if (iVar8 != 0) {
      fVar2 = *pfVar1 - *(float *)(param_1 + 0x40);
      fVar4 = *(float *)(param_1 + 0x1d04) - *(float *)(param_1 + 0x44);
      fVar3 = *(float *)(param_1 + 0x1d08) - *(float *)(param_1 + 0x48);
      local_8 = fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2;
    }
    iVar8 = 1;
    if (local_4 < local_8 == (local_4 == local_8)) {
      iVar8 = 3;
    }
    if (iVar8 == 1) {
      if ((local_c < local_8 != (local_c == local_8)) && (*(int *)(param_1 + 0x20b0) == 0)) {
        if (*(int *)(param_1 + 0x4e4) == 0) {
          uVar9 = FUN_00a8cab0();
          *(undefined4 *)(param_1 + 0xeb4) = uVar9;
          iVar8 = FUN_00a8cab0();
          if ((((iVar8 == 0x10000) || (iVar8 = FUN_00a8cab0(), iVar8 == 0x10009)) ||
              (iVar8 = FUN_00a8cab0(), iVar8 == 0x1000a)) ||
             (iVar8 = FUN_00a8cab0(), iVar8 == 0x1000d)) {
            uVar9 = FUN_00a8cab0();
            *(undefined4 *)(param_1 + 0x1cbc) = uVar9;
          }
          if (*(int *)(param_1 + 0x1c30) != 0) {
            *(undefined4 *)(param_1 + 0x1cbc) = 0x1000b;
          }
          *(undefined4 *)(param_1 + 0xeb8) = *(undefined4 *)(param_1 + 0xea0);
          FUN_007cb240();
          FUN_00a8caf0(0x10008,0,0,0);
          *(undefined4 *)(param_1 + 0xea0) = 0;
          FUN_00a962d0(0,0);
          *(undefined4 *)(param_1 + 0xf00) = 0;
        }
        *(float *)(param_1 + 0x1cb4) = SQRT(local_8) * 0.074074075;
        return;
      }
LAB_007d2928:
      *(undefined4 *)(param_1 + 0xea8) = 1;
      if (*(int *)(param_1 + 0x4e4) != 0) {
        return;
      }
      uVar9 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xeb4) = uVar9;
      iVar8 = FUN_00a8cab0();
      if (((iVar8 == 0x10000) || (iVar8 = FUN_00a8cab0(), iVar8 == 0x10009)) ||
         ((iVar8 = FUN_00a8cab0(), iVar8 == 0x1000a || (iVar8 = FUN_00a8cab0(), iVar8 == 0x1000d))))
      {
        uVar9 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0x1cbc) = uVar9;
      }
      if (*(int *)(param_1 + 0x1c30) != 0) {
        *(undefined4 *)(param_1 + 0x1cbc) = 0x1000b;
      }
      *(undefined4 *)(param_1 + 0xeb8) = *(undefined4 *)(param_1 + 0xea0);
      FUN_007cb240();
      uVar9 = 0x10005;
      goto LAB_007d3362;
    }
    if (iVar8 != 3) {
      return;
    }
    if (local_c < local_4) {
      *(undefined4 *)(param_1 + 0xea8) = 2;
      if (*(int *)(param_1 + 0x4e4) != 0) {
        return;
      }
      uVar9 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xeb4) = uVar9;
      iVar8 = FUN_00a8cab0();
      if (((iVar8 == 0x10000) || (iVar8 = FUN_00a8cab0(), iVar8 == 0x10009)) ||
         ((iVar8 = FUN_00a8cab0(), iVar8 == 0x1000a || (iVar8 = FUN_00a8cab0(), iVar8 == 0x1000d))))
      {
        uVar9 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0x1cbc) = uVar9;
      }
LAB_007d2bc9:
      if (*(int *)(param_1 + 0x1c30) != 0) {
        *(undefined4 *)(param_1 + 0x1cbc) = 0x1000b;
      }
      *(undefined4 *)(param_1 + 0xeb8) = *(undefined4 *)(param_1 + 0xea0);
      FUN_007cb240();
      uVar9 = 0x10005;
      goto LAB_007d3362;
    }
    if (local_c <= local_4) {
      uVar6 = FUN_00dde2a0(0,10);
      if (5 < uVar6) goto LAB_007d2928;
      *(undefined4 *)(param_1 + 0xea8) = 2;
      if (*(int *)(param_1 + 0x4e4) != 0) {
        return;
      }
      uVar9 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xeb4) = uVar9;
      iVar8 = FUN_00a8cab0();
      if ((((iVar8 == 0x10000) || (iVar8 = FUN_00a8cab0(), iVar8 == 0x10009)) ||
          (iVar8 = FUN_00a8cab0(), iVar8 == 0x1000a)) || (iVar8 = FUN_00a8cab0(), iVar8 == 0x1000d))
      {
        uVar9 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0x1cbc) = uVar9;
      }
      goto LAB_007d2bc9;
    }
LAB_007d3018:
    *(undefined4 *)(param_1 + 0xea8) = 1;
LAB_007d301e:
    if (*(int *)(param_1 + 0x4e4) != 0) {
      return;
    }
    uVar9 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xeb4) = uVar9;
    iVar8 = FUN_00a8cab0();
    if (((iVar8 == 0x10000) || (iVar8 = FUN_00a8cab0(), iVar8 == 0x10009)) ||
       ((iVar8 = FUN_00a8cab0(), iVar8 == 0x1000a || (iVar8 = FUN_00a8cab0(), iVar8 == 0x1000d)))) {
      uVar9 = FUN_00a8cab0();
LAB_007d3076:
      *(undefined4 *)(param_1 + 0x1cbc) = uVar9;
    }
  }
LAB_007d307c:
  if (*(int *)(param_1 + 0x1c30) != 0) {
    *(undefined4 *)(param_1 + 0x1cbc) = 0x1000b;
  }
  *(undefined4 *)(param_1 + 0xeb8) = *(undefined4 *)(param_1 + 0xea0);
  FUN_007cb240();
  uVar9 = 0x10005;
LAB_007d3362:
  FUN_00a8caf0(uVar9,0,0,0);
  *(undefined4 *)(param_1 + 0xea0) = 0;
  FUN_00a962d0(0,0);
  *(undefined4 *)(param_1 + 0xf00) = 0;
  return;
}

// 007D34B0  FUN_007d34b0  size=2384  [between]
void __fastcall FUN_007d34b0(int param_1)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar3 = FUN_00a82d50();
  if ((iVar3 == 2) || (iVar3 = FUN_00a82d50(), iVar3 == 3)) {
    if (*(int *)(param_1 + 0x4e4) == 0) {
      uVar4 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xeb4) = uVar4;
      iVar3 = FUN_00a8cab0();
      if ((((iVar3 == 0x10000) || (iVar3 = FUN_00a8cab0(), iVar3 == 0x10009)) ||
          (iVar3 = FUN_00a8cab0(), iVar3 == 0x1000a)) || (iVar3 = FUN_00a8cab0(), iVar3 == 0x1000d))
      {
        uVar4 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0x1cbc) = uVar4;
      }
      if (*(int *)(param_1 + 0x1c30) != 0) {
        *(undefined4 *)(param_1 + 0x1cbc) = 0x1000b;
      }
      *(undefined4 *)(param_1 + 0xeb8) = *(undefined4 *)(param_1 + 0xea0);
      FUN_007cb240();
      FUN_00a8caf0(0x10009,0,0,0);
      *(undefined4 *)(param_1 + 0xea0) = 0;
      FUN_00a962d0(0,0);
      *(undefined4 *)(param_1 + 0xf00) = 0;
    }
    *(undefined4 *)(param_1 + 0x61c) = 1;
  }
  if (*(int *)(param_1 + 0x61c) != 1) goto LAB_007d3c2c;
  if ((*(float *)(param_1 + 0xa90) <= 25.0) && (*(int *)(param_1 + 0x20b0) == 0)) {
    if (*(int *)(param_1 + 0x4e4) != 0) {
      return;
    }
    uVar4 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xeb4) = uVar4;
    iVar3 = FUN_00a8cab0();
    if (((iVar3 == 0x10000) || (iVar3 = FUN_00a8cab0(), iVar3 == 0x10009)) ||
       ((iVar3 = FUN_00a8cab0(), iVar3 == 0x1000a || (iVar3 = FUN_00a8cab0(), iVar3 == 0x1000d)))) {
      uVar4 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0x1cbc) = uVar4;
    }
    if (*(int *)(param_1 + 0x1c30) != 0) {
      *(undefined4 *)(param_1 + 0x1cbc) = 0x1000b;
    }
    *(undefined4 *)(param_1 + 0xeb8) = *(undefined4 *)(param_1 + 0xea0);
    FUN_007cb240();
    uVar4 = 0x50002;
LAB_007d365a:
    FUN_00a8caf0(uVar4,0,0,0);
    *(undefined4 *)(param_1 + 0xea0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0xf00) = 0;
    return;
  }
  if (*(float *)(param_1 + 0xaa0) <= 0.5235988) {
    if (*(float *)(param_1 + 0xa90) < 30.25) {
      iVar3 = param_1 + 0x1d00;
      iVar5 = FUN_00907640(param_1 + 0x1cc4,0,iVar3);
      if (iVar5 == 0) {
        if (*(int *)(param_1 + 0x4e4) != 0) {
          return;
        }
        uVar4 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xeb4) = uVar4;
        iVar3 = FUN_00a8cab0();
        if ((((iVar3 == 0x10000) || (iVar3 = FUN_00a8cab0(), iVar3 == 0x10009)) ||
            (iVar3 = FUN_00a8cab0(), iVar3 == 0x1000a)) ||
           (iVar3 = FUN_00a8cab0(), iVar3 == 0x1000d)) {
          uVar4 = FUN_00a8cab0();
          *(undefined4 *)(param_1 + 0x1cbc) = uVar4;
        }
        if (*(int *)(param_1 + 0x1c30) != 0) {
          *(undefined4 *)(param_1 + 0x1cbc) = 0x1000b;
        }
        *(undefined4 *)(param_1 + 0xeb8) = *(undefined4 *)(param_1 + 0xea0);
        FUN_007cb240();
        uVar4 = 0x10008;
        goto LAB_007d365a;
      }
      iVar5 = FUN_00907640(param_1 + 0x1cc8,0,iVar3);
      if ((iVar5 == 0) && (iVar5 = FUN_00907640(param_1 + 0x1ccc,0,iVar3), iVar5 == 0)) {
        sVar2 = FUN_00dde2a0(0,1);
        if (sVar2 == 0) goto LAB_007d3862;
LAB_007d37ac:
        *(undefined4 *)(param_1 + 0xea8) = 2;
        if (*(int *)(param_1 + 0x4e4) != 0) {
          return;
        }
        uVar4 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xeb4) = uVar4;
        iVar3 = FUN_00a8cab0();
        if (((iVar3 == 0x10000) || (iVar3 = FUN_00a8cab0(), iVar3 == 0x10009)) ||
           ((iVar3 = FUN_00a8cab0(), iVar3 == 0x1000a || (iVar3 = FUN_00a8cab0(), iVar3 == 0x1000d))
           )) {
          uVar4 = FUN_00a8cab0();
          *(undefined4 *)(param_1 + 0x1cbc) = uVar4;
        }
        if (*(int *)(param_1 + 0x1c30) != 0) {
          *(undefined4 *)(param_1 + 0x1cbc) = 0x1000b;
        }
        *(undefined4 *)(param_1 + 0xeb8) = *(undefined4 *)(param_1 + 0xea0);
      }
      else {
        iVar5 = FUN_00907640(param_1 + 0x1ccc,0,iVar3);
        if (iVar5 == 0) goto LAB_007d37ac;
        iVar3 = FUN_00907640(param_1 + 0x1cc8,0,iVar3);
        if (iVar3 != 0) goto LAB_007d3933;
LAB_007d3862:
        *(undefined4 *)(param_1 + 0xea8) = 1;
        if (*(int *)(param_1 + 0x4e4) != 0) {
          return;
        }
        uVar4 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xeb4) = uVar4;
        iVar3 = FUN_00a8cab0();
        if ((((iVar3 == 0x10000) || (iVar3 = FUN_00a8cab0(), iVar3 == 0x10009)) ||
            (iVar3 = FUN_00a8cab0(), iVar3 == 0x1000a)) ||
           (iVar3 = FUN_00a8cab0(), iVar3 == 0x1000d)) {
          uVar4 = FUN_00a8cab0();
          *(undefined4 *)(param_1 + 0x1cbc) = uVar4;
        }
        if (*(int *)(param_1 + 0x1c30) != 0) {
          *(undefined4 *)(param_1 + 0x1cbc) = 0x1000b;
        }
        *(undefined4 *)(param_1 + 0xeb8) = *(undefined4 *)(param_1 + 0xea0);
      }
      FUN_007cb240();
      uVar4 = 0x10005;
      goto LAB_007d3841;
    }
LAB_007d3933:
    if (*(float *)(param_1 + 0xa90) <= *(float *)(param_1 + 0x1c84)) {
      if (*(short *)(param_1 + 0x1b5c) == 0) {
        if (*(int *)(param_1 + 0x4e4) != 0) {
          return;
        }
        uVar4 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xeb4) = uVar4;
        iVar3 = FUN_00a8cab0();
        if (((iVar3 == 0x10000) || (iVar3 = FUN_00a8cab0(), iVar3 == 0x10009)) ||
           ((iVar3 = FUN_00a8cab0(), iVar3 == 0x1000a || (iVar3 = FUN_00a8cab0(), iVar3 == 0x1000d))
           )) {
          uVar4 = FUN_00a8cab0();
          *(undefined4 *)(param_1 + 0x1cbc) = uVar4;
        }
        if (*(int *)(param_1 + 0x1c30) != 0) {
          *(undefined4 *)(param_1 + 0x1cbc) = 0x1000b;
        }
        *(undefined4 *)(param_1 + 0xeb8) = *(undefined4 *)(param_1 + 0xea0);
        FUN_007cb240();
        uVar4 = 0x50000;
        goto LAB_007d3841;
      }
      if (*(float *)(param_1 + 0xaa0) < 0.5235988) {
        *(undefined4 *)(param_1 + 0x20b0) = 1;
      }
    }
  }
  if ((*(float *)(param_1 + 0x1c84) < *(float *)(param_1 + 0xa90)) &&
     (*(float *)(param_1 + 0xa90) <= 225.0)) {
    if (*(float *)(param_1 + 0xaa0) <= 0.34906584) {
      if (*(int *)(param_1 + 0x4e4) != 0) {
        return;
      }
      uVar4 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xeb4) = uVar4;
      iVar3 = FUN_00a8cab0();
      if ((((iVar3 == 0x10000) || (iVar3 = FUN_00a8cab0(), iVar3 == 0x10009)) ||
          (iVar3 = FUN_00a8cab0(), iVar3 == 0x1000a)) || (iVar3 = FUN_00a8cab0(), iVar3 == 0x1000d))
      {
        uVar4 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0x1cbc) = uVar4;
      }
      if (*(int *)(param_1 + 0x1c30) != 0) {
        *(undefined4 *)(param_1 + 0x1cbc) = 0x1000b;
      }
      *(undefined4 *)(param_1 + 0xeb8) = *(undefined4 *)(param_1 + 0xea0);
      FUN_007cb240();
      uVar4 = 0x10006;
      goto LAB_007d3841;
    }
    if (*(float *)(param_1 + 0xaa0) < 1.5707964) {
      if (0.0 < *(float *)(param_1 + 0xa9c)) {
        FUN_007cdb70(0x3f800000,*(float *)(param_1 + 0xaa0) * 0.63661975);
        return;
      }
      if (*(float *)(param_1 + 0xa9c) < 0.0) {
        FUN_007cda90(0x3f800000,*(float *)(param_1 + 0xaa0) * 0.63661975);
        return;
      }
    }
  }
  if ((*(float *)(param_1 + 0xa90) <= 225.0) || (0.5235988 < *(float *)(param_1 + 0xaa0))) {
LAB_007d3c2c:
    if (0.5235988 < *(float *)(param_1 + 0xaa0)) {
      bVar1 = 0.0 < *(float *)(param_1 + 0xa9c);
      if (*(float *)(param_1 + 0xa90) <= 100.0) {
        if (bVar1) {
          if (*(float *)(param_1 + 0xaa0) <= 1.5707964) {
            FUN_007cd7f0(0x3f800000,*(float *)(param_1 + 0xaa0) * 0.63661975);
            *(undefined4 *)(param_1 + 0x1ca4) = *(undefined4 *)(param_1 + 0x1ca0);
            return;
          }
          FUN_007cd9b0(0x3f800000,*(float *)(param_1 + 0xaa0) * 0.31830987);
          *(undefined4 *)(param_1 + 0x1ca4) = *(undefined4 *)(param_1 + 0x1ca0);
          return;
        }
        if (0.0 <= *(float *)(param_1 + 0xa9c)) {
          *(undefined4 *)(param_1 + 0x1ca4) = *(undefined4 *)(param_1 + 0x1ca0);
          return;
        }
        if (*(float *)(param_1 + 0xaa0) <= 1.5707964) {
          FUN_007cd710(0x3f800000,*(float *)(param_1 + 0xaa0) * 0.63661975);
          *(undefined4 *)(param_1 + 0x1ca4) = *(undefined4 *)(param_1 + 0x1ca0);
          return;
        }
        FUN_007cd8d0(0x3f800000,*(float *)(param_1 + 0xaa0) * 0.31830987);
        *(undefined4 *)(param_1 + 0x1ca4) = *(undefined4 *)(param_1 + 0x1ca0);
        return;
      }
      if (bVar1) {
        if (*(float *)(param_1 + 0xaa0) <= 1.5707964) {
          FUN_007cdb70(0x3f800000,*(float *)(param_1 + 0xaa0) * 0.63661975);
          return;
        }
        FUN_007cd9b0(0x3f800000,*(float *)(param_1 + 0xaa0) * 0.31830987);
        return;
      }
      if (*(float *)(param_1 + 0xa9c) < 0.0) {
        if (*(float *)(param_1 + 0xaa0) <= 1.5707964) {
          FUN_007cda90(0x3f800000,*(float *)(param_1 + 0xaa0) * 0.63661975);
          return;
        }
        FUN_007cd8d0(0x3f800000,*(float *)(param_1 + 0xaa0) * 0.31830987);
        return;
      }
    }
    return;
  }
  if (*(int *)(param_1 + 0x4e4) != 0) {
    return;
  }
  uVar4 = FUN_00a8cab0();
  *(undefined4 *)(param_1 + 0xeb4) = uVar4;
  iVar3 = FUN_00a8cab0();
  if (((iVar3 == 0x10000) || (iVar3 = FUN_00a8cab0(), iVar3 == 0x10009)) ||
     ((iVar3 = FUN_00a8cab0(), iVar3 == 0x1000a || (iVar3 = FUN_00a8cab0(), iVar3 == 0x1000d)))) {
    uVar4 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0x1cbc) = uVar4;
  }
  if (*(int *)(param_1 + 0x1c30) != 0) {
    *(undefined4 *)(param_1 + 0x1cbc) = 0x1000b;
  }
  *(undefined4 *)(param_1 + 0xeb8) = *(undefined4 *)(param_1 + 0xea0);
  FUN_007cb240();
  uVar4 = 0x50000;
LAB_007d3841:
  FUN_00a8caf0(uVar4,0,0,0);
  *(undefined4 *)(param_1 + 0xea0) = 0;
  FUN_00a962d0(0,0);
  *(undefined4 *)(param_1 + 0xf00) = 0;
  return;
}

// 007D42A0  FUN_007d42a0  size=250  [between]
void __fastcall FUN_007d42a0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00a82d50();
  if (iVar1 != 1) {
    return;
  }
  if (param_1[0x6c4] != 0) {
    uVar2 = FUN_00a8d730(param_1 + 0x10);
    FUN_00a8d6f0(uVar2);
    if (param_1[0x139] == 0) {
      iVar1 = FUN_00a8cab0();
      param_1[0x3ad] = iVar1;
      iVar1 = FUN_00a8cab0();
      if ((((iVar1 == 0x10000) || (iVar1 = FUN_00a8cab0(), iVar1 == 0x10009)) ||
          (iVar1 = FUN_00a8cab0(), iVar1 == 0x1000a)) || (iVar1 = FUN_00a8cab0(), iVar1 == 0x1000d))
      {
        iVar1 = FUN_00a8cab0();
        param_1[0x72f] = iVar1;
      }
      if (param_1[0x70c] != 0) {
        param_1[0x72f] = 0x1000b;
      }
      param_1[0x3ae] = param_1[0x3a8];
      FUN_007cb240();
      FUN_00a8caf0(0x1000d,0,0,0);
      param_1[0x3a8] = 0;
      FUN_00a962d0(0,0);
      param_1[0x3c0] = 0;
      return;
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x007d4398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 007D43A0  FUN_007d43a0  size=1152  [between]
void __fastcall FUN_007d43a0(int *param_1)

{
  float fVar1;
  int iVar2;
  
  param_1[0x755] = 0;
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0xf,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    *(undefined2 *)((int)param_1 + 0x1b66) = 0;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00ac4780();
    if ((1 < iVar2) || (param_1[0x82d] == 0)) {
      if ((float)param_1[0x2a3] < 400.0) {
        if (((100.0 < (float)param_1[0x2a3]) && (iVar2 = FUN_00a95540(0,0x50), iVar2 != 0)) &&
           ((float)param_1[0x2a8] < 0.17453292)) {
          param_1[0x187] = 2;
        }
        if (((float)param_1[0x2a3] < 25.0) && (iVar2 = FUN_00a94ee0(0,0x1e,0x50), iVar2 != 0)) {
          param_1[0x187] = 3;
        }
      }
      if ((1.0471976 < (float)param_1[0x2a8]) && (iVar2 = FUN_00a94ee0(0,100,0x96), iVar2 != 0)) {
        if ((float)param_1[0x2a7] <= 0.0) {
          if ((float)param_1[0x2a7] < 0.0) {
            FUN_007cd710(0x3f800000,(float)param_1[0x2a8] * 0.63661975);
          }
        }
        else {
          FUN_007cd7f0(0x3f800000,(float)param_1[0x2a8] * 0.63661975);
        }
      }
    }
    if ((((float)param_1[0x2a4] <= (float)param_1[0x721]) && ((float)param_1[0x2a8] < 0.5235988)) &&
       ((short)param_1[0x6d7] != 0)) {
      param_1[0x82c] = 1;
    }
    iVar2 = FUN_00907640(param_1 + 0x734,0,param_1 + 0x740);
    if ((iVar2 != 0) &&
       (fVar1 = (float)param_1[0x740] - (float)param_1[0x10],
       fVar1 = fVar1 * fVar1 +
               ((float)param_1[0x741] - (float)param_1[0x11]) *
               ((float)param_1[0x741] - (float)param_1[0x11]) +
               ((float)param_1[0x742] - (float)param_1[0x12]) *
               ((float)param_1[0x742] - (float)param_1[0x12]), fVar1 < 9.0 != (fVar1 == 9.0))) {
      param_1[0x187] = 3;
    }
    iVar2 = FUN_00a94ee0(0,0x1e,0x8c);
    if ((iVar2 != 0) && (param_1[0x2a1] != 0)) {
      FUN_00a8e880(param_1[0x2a1] + 0x40);
      (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3c8efa35,0);
    }
    iVar2 = FUN_00a94ce0(0);
    if ((iVar2 != 0) && (param_1[0x139] == 0)) {
      iVar2 = FUN_00a8cab0();
      param_1[0x3ad] = iVar2;
      iVar2 = FUN_00a8cab0();
      if ((((iVar2 == 0x10000) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x10009)) ||
          (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000a)) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000d))
      {
        iVar2 = FUN_00a8cab0();
        param_1[0x72f] = iVar2;
      }
      if (param_1[0x70c] != 0) {
        param_1[0x72f] = 0x1000b;
      }
      param_1[0x3ae] = param_1[0x3a8];
      FUN_007cb240();
      FUN_00a8caf0(0x1000a,0,0,0);
      param_1[0x3a8] = 0;
      FUN_00a962d0(0,0);
      param_1[0x3c0] = 0;
      return;
    }
    break;
  case 2:
    FUN_00aa4080(0x15,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = 1;
    return;
  case 3:
    FUN_00aa4080(0x13,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 4:
    FUN_00ac80a0(param_1[0x72d],0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if ((iVar2 != 0) && (param_1[0x139] == 0)) {
      iVar2 = FUN_00a8cab0();
      param_1[0x3ad] = iVar2;
      iVar2 = FUN_00a8cab0();
      if ((iVar2 == 0x10000) ||
         (((iVar2 = FUN_00a8cab0(), iVar2 == 0x10009 || (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000a))
          || (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000d)))) {
        iVar2 = FUN_00a8cab0();
        param_1[0x72f] = iVar2;
      }
      if (param_1[0x70c] != 0) {
        param_1[0x72f] = 0x1000b;
      }
      param_1[0x3ae] = param_1[0x3a8];
      FUN_007cb240();
      FUN_00a8caf0(0x1000a,0,0,0);
      param_1[0x3a8] = 0;
      FUN_00a962d0(0,0);
      param_1[0x3c0] = 0;
      return;
    }
  }
  return;
}

// 007D4840  FUN_007d4840  size=452  [between]
void __fastcall FUN_007d4840(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0xec4) != 0x1000a) {
    return;
  }
  uVar1 = FUN_00dde2a0(0,0x14);
  iVar2 = (uVar1 & 0xffff) + 0xa0;
  uVar1 = FUN_00dde2a0(0,10);
  iVar2 = FUN_00a94ee0(0,(uVar1 & 0xffff) + 0x32,iVar2);
  if (iVar2 == 0) {
    return;
  }
  if (*(float *)(param_1 + 0xa90) <= 100.0) {
    return;
  }
  if (*(float *)(param_1 + 0xa90) < 400.0) {
    if (*(float *)(param_1 + 0xaa0) <= 0.34906584) {
      if (*(int *)(param_1 + 0x4e4) == 0) {
        uVar3 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xeb4) = uVar3;
        iVar2 = FUN_00a8cab0();
        if ((((iVar2 == 0x10000) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x10009)) ||
            (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000a)) ||
           (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000d)) {
          uVar3 = FUN_00a8cab0();
          *(undefined4 *)(param_1 + 0x1cbc) = uVar3;
        }
        if (*(int *)(param_1 + 0x1c30) != 0) {
          *(undefined4 *)(param_1 + 0x1cbc) = 0x1000b;
        }
        *(undefined4 *)(param_1 + 0xeb8) = *(undefined4 *)(param_1 + 0xea0);
        FUN_007cb240();
        FUN_00a8caf0(0x10006,0,0,0);
        *(undefined4 *)(param_1 + 0xea0) = 0;
        FUN_00a962d0(0,0);
        *(undefined4 *)(param_1 + 0xf00) = 0;
        return;
      }
      return;
    }
    if (1.5707964 <= *(float *)(param_1 + 0xaa0)) {
      return;
    }
    if (*(float *)(param_1 + 0xa9c) <= 0.0) {
      if (0.0 <= *(float *)(param_1 + 0xa9c)) {
        return;
      }
      FUN_007cda90(0x3f800000,*(float *)(param_1 + 0xaa0) * 0.63661975);
      return;
    }
    FUN_007cdb70(0x3f800000,*(float *)(param_1 + 0xaa0) * 0.63661975);
    return;
  }
  return;
}

// 007D4A10  FUN_007d4a10  size=335  [between]
void __fastcall FUN_007d4a10(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    if (*(int *)(param_1 + 0xea4) == 1) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0x40;
    }
    FUN_00aa4080(0x18,0,0x3e4ccccd,0x3f800000,uVar2,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 1:
    FUN_00ac80a0(*(undefined4 *)(param_1 + 0x1cb4),*(undefined4 *)(param_1 + 0x1cb8));
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_007cd550(*(undefined4 *)(param_1 + 0x1cbc),0,0,0,0);
    }
    if (*(float *)(param_1 + 0xa90) < 25.0) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      return;
    }
    break;
  case 2:
    iVar1 = FUN_00a94ee0(0,0x28,0x3c);
    if (iVar1 == 0) {
      FUN_007cd550(*(undefined4 *)(param_1 + 0x1cbc),0,0,0,0);
    }
    else {
      FUN_00aa4080(0x13,0,0x3e4ccccd,0x3f800000,0x8000000,0x3f800000,0x3f800000);
    }
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 3:
    FUN_00ac80a0(0x3f000000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_007cd550(*(undefined4 *)(param_1 + 0x1cbc),0,0,0,0);
    }
  }
  return;
}

// 007D4B70  FUN_007d4b70  size=511  [between]
void __thiscall
FUN_007d4b70(int param_1,float param_2,float param_3,float param_4,float param_5,float param_6)

{
  float fVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar2 = FUN_00dde2a0(0,100);
  if ((uVar2 != 0) && ((float)uVar2 < param_2 != ((float)uVar2 == param_2))) {
    FUN_007cd710(0x3f800000,0x3f800000);
    return;
  }
  fVar1 = (float)uVar2;
  if ((param_2 < fVar1) && (fVar1 <= param_2 + param_3)) {
    FUN_007cd7f0(0x3f800000,0x3f800000);
    return;
  }
  param_3 = param_3 + param_2;
  if ((param_3 < fVar1) && (fVar1 <= param_3 + param_4)) {
    FUN_007cd8d0(0x3f800000,0x3f800000);
    return;
  }
  param_4 = param_4 + param_3;
  if ((param_4 < fVar1) && (fVar1 <= param_4 + param_5)) {
    FUN_007cd9b0(0x3f800000,0x3f800000);
    return;
  }
  if ((((param_5 + param_4 < fVar1) && (fVar1 <= param_5 + param_4 + param_6)) &&
      (iVar3 = FUN_00907640(param_1 + 0x1cc0,0,param_1 + 0x1d00), iVar3 == 0)) &&
     (*(int *)(param_1 + 0x4e4) == 0)) {
    uVar4 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xeb4) = uVar4;
    iVar3 = FUN_00a8cab0();
    if (((iVar3 == 0x10000) || (iVar3 = FUN_00a8cab0(), iVar3 == 0x10009)) ||
       ((iVar3 = FUN_00a8cab0(), iVar3 == 0x1000a || (iVar3 = FUN_00a8cab0(), iVar3 == 0x1000d)))) {
      uVar4 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0x1cbc) = uVar4;
    }
    if (*(int *)(param_1 + 0x1c30) != 0) {
      *(undefined4 *)(param_1 + 0x1cbc) = 0x1000b;
    }
    *(undefined4 *)(param_1 + 0xeb8) = *(undefined4 *)(param_1 + 0xea0);
    FUN_007cb240();
    FUN_00a8caf0(0x10006,0,0,0);
    *(undefined4 *)(param_1 + 0xea0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0xf00) = 0;
    return;
  }
  return;
}

// 007D4D70  Emc100::vf19C  size=179  [class]
void __thiscall Emc100::vf19C(int *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 local_a0 [48];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  
  uVar1 = *(undefined4 *)(param_2 + 0x100);
  uVar2 = *(undefined4 *)(param_2 + 0x104);
  uVar3 = *(undefined4 *)(param_2 + 0x108);
  FUN_009dbcf0();
  FID_conflict__memcpy(local_a0,(void *)(param_2 + 0x40),0x40);
  local_70 = uVar1;
  local_6c = uVar2;
  local_68 = uVar3;
  if (*(short *)(param_2 + 0x84) == -1) {
    (**(code **)(*param_1 + 0x1ac))
              (*(undefined4 *)(param_2 + 0x144),param_2,*(undefined4 *)(param_2 + 300),local_a0);
    return;
  }
  (**(code **)(*param_1 + 0x1a8))(param_2,param_3,param_1);
  return;
}

// 007D4E30  Emc100::vf1A4  size=403  [class]
void __thiscall Emc100::vf1A4(int param_1,int *param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  *(uint *)(param_1 + 0x1c7c) = param_3;
  if ((param_3 & 6) != 0) {
    *(uint *)(param_1 + 0xf1c) = *(uint *)(param_1 + 0xf1c) | 0x2000000;
    if (*param_2 == 0x112) {
      if (*(int *)(param_1 + 0x4e4) == 0) {
        uVar2 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xeb4) = uVar2;
        iVar1 = FUN_00a8cab0();
        if ((((iVar1 == 0x10000) || (iVar1 = FUN_00a8cab0(), iVar1 == 0x10009)) ||
            (iVar1 = FUN_00a8cab0(), iVar1 == 0x1000a)) ||
           (iVar1 = FUN_00a8cab0(), iVar1 == 0x1000d)) {
          uVar2 = FUN_00a8cab0();
          *(undefined4 *)(param_1 + 0x1cbc) = uVar2;
        }
        if (*(int *)(param_1 + 0x1c30) != 0) {
          *(undefined4 *)(param_1 + 0x1cbc) = 0x1000b;
        }
        *(undefined4 *)(param_1 + 0xeb8) = *(undefined4 *)(param_1 + 0xea0);
        FUN_007cb240();
        FUN_00a8caf0(0x50001,0,0,0);
        *(undefined4 *)(param_1 + 0xea0) = 0;
        FUN_00a962d0(0,0);
        *(undefined4 *)(param_1 + 0xf00) = 0;
      }
      if ((param_3 & 4) == 0) {
        uVar2 = 0x3f800000;
      }
      else {
        uVar2 = 0x3dcccccd;
      }
      *(undefined4 *)(param_1 + 0x1cb4) = uVar2;
    }
    else if ((*param_2 == 0x113) && (iVar1 = FUN_00a8cab0(), iVar1 == 0x50003)) {
      *(undefined4 *)(param_1 + 0x61c) = 8;
    }
  }
  if ((param_3 & 8) != 0) {
    *(uint *)(param_1 + 0xf1c) = *(uint *)(param_1 + 0xf1c) | 0x1000000;
  }
  if ((param_3 & 1) != 0) {
    iVar1 = *param_2;
    if (iVar1 == 0x112) {
      *(uint *)(param_1 + 0xf1c) = *(uint *)(param_1 + 0xf1c) | 0x8000000;
      return;
    }
    if (iVar1 == 0x113) {
      *(uint *)(param_1 + 0xf1c) = *(uint *)(param_1 + 0xf1c) | 0x4000000;
      return;
    }
    if (((iVar1 == 0x114) && (30.0 < *(float *)(param_1 + 0x1e34))) &&
       (*(char *)(param_1 + 0x1e30) == '\x04')) {
      *(undefined4 *)(param_1 + 0x1e34) = 0x41f00000;
      return;
    }
  }
  return;
}

// 007D4FD0  FUN_007d4fd0  size=931  [between]
void __fastcall FUN_007d4fd0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x61c);
  if (iVar1 == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0xea4) = 0;
  if (*(int *)(param_1 + 0x1b10) == 0) {
    if (iVar1 == 1) {
      FUN_007d4b70(0x41200000,0x41200000,0x40a00000,0x40a00000,0x41200000);
      *(undefined4 *)(param_1 + 0x1c94) = *(undefined4 *)(param_1 + 0xa90);
      return;
    }
    if (1 < iVar1 - 2U) goto LAB_007d5363;
    iVar1 = FUN_00a82d50();
    if ((iVar1 == 2) || (iVar1 = FUN_00a82d50(), iVar1 == 3)) {
      if (*(int *)(param_1 + 0x4e4) == 0) {
        uVar2 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xeb4) = uVar2;
        iVar1 = FUN_00a8cab0();
        if ((((iVar1 == 0x10000) || (iVar1 = FUN_00a8cab0(), iVar1 == 0x10009)) ||
            (iVar1 = FUN_00a8cab0(), iVar1 == 0x1000a)) ||
           (iVar1 = FUN_00a8cab0(), iVar1 == 0x1000d)) {
          uVar2 = FUN_00a8cab0();
          *(undefined4 *)(param_1 + 0x1cbc) = uVar2;
        }
        if (*(int *)(param_1 + 0x1c30) != 0) {
          *(undefined4 *)(param_1 + 0x1cbc) = 0x1000b;
        }
        *(undefined4 *)(param_1 + 0xeb8) = *(undefined4 *)(param_1 + 0xea0);
        FUN_007cb240();
        FUN_00a8caf0(0x10009,0,0,0);
        *(undefined4 *)(param_1 + 0xea0) = 0;
        FUN_00a962d0(0,0);
        *(undefined4 *)(param_1 + 0xf00) = 0;
      }
      *(undefined4 *)(param_1 + 0x61c) = 1;
      *(undefined4 *)(param_1 + 0x1d54) = 0;
    }
    iVar1 = FUN_00a82d50();
    if (iVar1 != 4) goto LAB_007d5363;
    if (*(int *)(param_1 + 0x4e4) == 0) {
      uVar2 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xeb4) = uVar2;
      iVar1 = FUN_00a8cab0();
      if (((iVar1 == 0x10000) || (iVar1 = FUN_00a8cab0(), iVar1 == 0x10009)) ||
         ((iVar1 = FUN_00a8cab0(), iVar1 == 0x1000a || (iVar1 = FUN_00a8cab0(), iVar1 == 0x1000d))))
      {
        uVar2 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0x1cbc) = uVar2;
      }
      if (*(int *)(param_1 + 0x1c30) != 0) {
        *(undefined4 *)(param_1 + 0x1cbc) = 0x1000b;
      }
      *(undefined4 *)(param_1 + 0xeb8) = *(undefined4 *)(param_1 + 0xea0);
LAB_007d5328:
      FUN_007cb240();
      FUN_00a8caf0(0x1000a,0,0,0);
      *(undefined4 *)(param_1 + 0xea0) = 0;
      FUN_00a962d0(0,0);
      *(undefined4 *)(param_1 + 0xf00) = 0;
    }
  }
  else {
    if (1 < iVar1 - 1U) goto LAB_007d5363;
    iVar1 = FUN_00a82d50();
    if ((iVar1 == 2) || (iVar1 = FUN_00a82d50(), iVar1 == 3)) {
      if (*(int *)(param_1 + 0x4e4) == 0) {
        uVar2 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xeb4) = uVar2;
        iVar1 = FUN_00a8cab0();
        if ((((iVar1 == 0x10000) || (iVar1 = FUN_00a8cab0(), iVar1 == 0x10009)) ||
            (iVar1 = FUN_00a8cab0(), iVar1 == 0x1000a)) ||
           (iVar1 = FUN_00a8cab0(), iVar1 == 0x1000d)) {
          uVar2 = FUN_00a8cab0();
          *(undefined4 *)(param_1 + 0x1cbc) = uVar2;
        }
        if (*(int *)(param_1 + 0x1c30) != 0) {
          *(undefined4 *)(param_1 + 0x1cbc) = 0x1000b;
        }
        *(undefined4 *)(param_1 + 0xeb8) = *(undefined4 *)(param_1 + 0xea0);
        FUN_007cb240();
        FUN_00a8caf0(0x10009,0,0,0);
        *(undefined4 *)(param_1 + 0xea0) = 0;
        FUN_00a962d0(0,0);
        *(undefined4 *)(param_1 + 0xf00) = 0;
      }
      *(undefined4 *)(param_1 + 0x61c) = 1;
      *(undefined4 *)(param_1 + 0x1d54) = 0;
    }
    iVar1 = FUN_00a82d50();
    if (iVar1 != 4) goto LAB_007d5363;
    if (*(int *)(param_1 + 0x4e4) == 0) {
      uVar2 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xeb4) = uVar2;
      iVar1 = FUN_00a8cab0();
      if (((iVar1 == 0x10000) || (iVar1 = FUN_00a8cab0(), iVar1 == 0x10009)) ||
         ((iVar1 = FUN_00a8cab0(), iVar1 == 0x1000a || (iVar1 = FUN_00a8cab0(), iVar1 == 0x1000d))))
      {
        uVar2 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0x1cbc) = uVar2;
      }
      if (*(int *)(param_1 + 0x1c30) != 0) {
        *(undefined4 *)(param_1 + 0x1cbc) = 0x1000b;
      }
      *(undefined4 *)(param_1 + 0xeb8) = *(undefined4 *)(param_1 + 0xea0);
      goto LAB_007d5328;
    }
  }
  *(undefined4 *)(param_1 + 0x1d54) = 0;
  *(undefined4 *)(param_1 + 0x61c) = 1;
LAB_007d5363:
  *(undefined4 *)(param_1 + 0x1c94) = *(undefined4 *)(param_1 + 0xa90);
  return;
}

// 007D5380  FUN_007d5380  size=124  [between]
void __thiscall FUN_007d5380(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 local_160 [348];
  
  uVar2 = 0;
  uVar1 = FUN_00a7c8a0(0);
  FUN_004039a0(param_2,uVar1,uVar2);
  uVar1 = FUN_00a81330();
  FUN_00e020f0(uVar1);
  if ((short)param_4 != 0) {
    FUN_00dffbc0(param_4);
  }
  if (param_3 != 0) {
    FUN_00dffb20(param_3);
  }
  FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),local_160);
  return;
}

// 007D5400  FUN_007d5400  size=137  [between]
void __thiscall
FUN_007d5400(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 local_160 [348];
  
  uVar2 = 0;
  uVar1 = FUN_00a7c8a0(0);
  FUN_004039a0(param_2,uVar1,uVar2);
  uVar1 = FUN_00a81330();
  FUN_00e020f0(uVar1);
  if ((short)param_4 != 0) {
    FUN_00dffbc0(param_4);
    FUN_00dffbd0(param_5);
  }
  if (param_3 != 0) {
    FUN_00dffb20(param_3);
  }
  FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),local_160);
  return;
}

// 007D5490  FUN_007d5490  size=1804  [between]
void __fastcall FUN_007d5490(int *param_1)

{
  float fVar1;
  int iVar2;
  float unaff_EBX;
  float unaff_ESI;
  float unaff_EDI;
  float10 fVar3;
  float fStack_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  switch(param_1[0x187]) {
  case 0:
    param_1[0x82e] = 1;
    FUN_00a8d280();
    *(undefined2 *)((int)param_1 + 0x1b66) = 0;
    FUN_00aa4080(0x2a,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
    iVar2 = FUN_00a94ee0(0,0,0x32);
    if (iVar2 == 0) {
      if ((1.0471976 < (float)param_1[0x2a8]) || ((param_1[0x3c7] & 0x8000000U) != 0)) {
        param_1[0x3c7] = param_1[0x3c7] & 0xf7ffffff;
        FUN_00a8cb60(4);
        return;
      }
    }
    else if (1.0471976 < (float)param_1[0x2a8]) {
      if (param_1[0x139] != 0) {
        return;
      }
      iVar2 = FUN_00a8cab0();
      param_1[0x3ad] = iVar2;
      iVar2 = FUN_00a8cab0();
      if ((((iVar2 == 0x10000) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x10009)) ||
          (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000a)) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000d))
      {
        iVar2 = FUN_00a8cab0();
        param_1[0x72f] = iVar2;
      }
      if (param_1[0x70c] != 0) {
        param_1[0x72f] = 0x1000b;
      }
      param_1[0x3ae] = param_1[0x3a8];
      FUN_007cb240();
      FUN_00a8caf0(0x1000a,0,0,0);
      param_1[0x3a8] = 0;
      FUN_00a962d0(0,0);
      param_1[0x3c0] = 0;
      return;
    }
    iVar2 = FUN_00a959f0(0);
    if (iVar2 == 0x33) {
      FUN_007d5380(0x41,param_1 + 0x64c,0);
    }
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    FUN_00aa4080(0x2b,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x41f00000;
    param_1[0x6de] = 0x3e99999a;
    param_1[0x249] = 0x42f00000;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x249];
    param_1[0x249] = (int)(fVar1 - (float)param_1[0x244]);
    if (0.0 < fVar1 - (float)param_1[0x244]) {
      FUN_00a8e880(param_1[0x2a1] + 0x40);
      (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
      iVar2 = FUN_00907640(param_1 + 0x734,0,param_1 + 0x740);
      if ((iVar2 == 0) ||
         (fVar1 = (float)param_1[0x740] - (float)param_1[0x10],
         25.0 <= ((float)param_1[0x742] - (float)param_1[0x12]) *
                 ((float)param_1[0x742] - (float)param_1[0x12]) +
                 ((float)param_1[0x741] - (float)param_1[0x11]) *
                 ((float)param_1[0x741] - (float)param_1[0x11]) + fVar1 * fVar1)) {
        if (((float)param_1[0x2a8] <= 1.0471976) && ((param_1[0x3c7] & 0x8000000U) == 0)) {
          FUN_00a925a0(&stack0xffffffb0);
          fVar1 = unaff_EBX * unaff_EBX + unaff_EDI * unaff_EDI + unaff_ESI * unaff_ESI;
          if (fVar1 < 0.0 == (fVar1 == 0.0)) {
            FUN_00ddf460(&stack0xffffffb0,&stack0xffffffb0);
          }
          else {
            FUN_00dd5650(&DAT_0163d0ac);
            unaff_EDI = 0.0;
            unaff_ESI = 1.0;
            unaff_EBX = 0.0;
          }
          if ((float)param_1[0x6de] < 0.5) {
            param_1[0x6de] = (int)((float)param_1[0x6de] + 0.05);
          }
          fVar1 = (float)param_1[0x6de];
          local_34 = (float)param_1[0x244];
          local_40 = unaff_EDI * fVar1 * local_34;
          local_3c = unaff_ESI * fVar1 * local_34;
          local_38 = unaff_EBX * fVar1 * local_34;
          local_34 = local_34 * fStack_44 * fVar1;
          (**(code **)(*param_1 + 0x70))(&local_40);
          return;
        }
        param_1[0x3c7] = param_1[0x3c7] & 0xf7ffffff;
        param_1[0x187] = param_1[0x187] + 1;
        return;
      }
    }
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x3c7] = param_1[0x3c7] & 0xf7ffffff;
    return;
  case 4:
    FUN_00aa4080(0x2c,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    (**(code **)(param_1[0x64c] + 8))(0x41200000,0,0);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,param_1[0x72e]);
    FUN_00a925a0(&local_40);
    fVar1 = local_38 * local_38 + local_40 * local_40 + local_3c * local_3c;
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      FUN_00ddf460(&local_40,&local_40);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_40 = 0.0;
      local_3c = 1.0;
      local_38 = 0.0;
    }
    if (0.0 < (float)param_1[0x6de]) {
      param_1[0x6de] = (int)((float)param_1[0x6de] - 0.1);
    }
    if ((float)param_1[0x6de] < 0.0) {
      param_1[0x6de] = 0;
    }
    fVar1 = (float)param_1[0x6de];
    local_14 = (float)param_1[0x244];
    local_20 = local_40 * -1.0 * fVar1 * local_14;
    local_1c = local_3c * -1.0 * fVar1 * local_14;
    local_18 = local_38 * -1.0 * fVar1 * local_14;
    local_14 = fVar1 * local_34 * -1.0 * local_14;
    (**(code **)(*param_1 + 0x70))(&local_20);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      if (param_1[0x139] == 0) {
        iVar2 = FUN_00a8cab0();
        param_1[0x3ad] = iVar2;
        iVar2 = FUN_00a8cab0();
        if ((((iVar2 == 0x10000) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x10009)) ||
            (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000a)) ||
           (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000d)) {
          iVar2 = FUN_00a8cab0();
          param_1[0x72f] = iVar2;
        }
        if (param_1[0x70c] != 0) {
          param_1[0x72f] = 0x1000b;
        }
        param_1[0x3ae] = param_1[0x3a8];
        FUN_007cb240();
        FUN_00a8caf0(0x1000a,0,0,0);
        param_1[0x3a8] = 0;
        FUN_00a962d0(0,0);
        param_1[0x3c0] = 0;
      }
      fVar3 = (float10)FUN_00dde300(param_1[0x71d],param_1[0x71e]);
      param_1[0x435] = (int)(float)(fVar3 * (float10)60.0);
      return;
    }
  }
  return;
}

// 007D5BC0  FUN_007d5bc0  size=2203  [between]
void __fastcall FUN_007d5bc0(int *param_1)

{
  float fVar1;
  int iVar2;
  float unaff_EBX;
  float unaff_ESI;
  float unaff_EDI;
  undefined4 uVar3;
  float fStack_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00a8d280();
    FUN_00aa4080(0x2f,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
switchD_007d5be4_caseD_1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if ((float)param_1[0x2a8] <= 1.0471976) {
      iVar2 = FUN_00a94ce0(0);
      if (iVar2 != 0) {
        param_1[0x187] = param_1[0x187] + 1;
        return;
      }
    }
    else {
LAB_007d6071:
      if (param_1[0x139] == 0) {
        iVar2 = FUN_00a8cab0();
        param_1[0x3ad] = iVar2;
        iVar2 = FUN_00a8cab0();
        if ((((iVar2 == 0x10000) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x10009)) ||
            (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000a)) ||
           (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000d)) {
          iVar2 = FUN_00a8cab0();
          param_1[0x72f] = iVar2;
        }
        if (param_1[0x70c] != 0) {
          param_1[0x72f] = 0x1000b;
        }
        param_1[0x3ae] = param_1[0x3a8];
        FUN_007cb240();
        uVar3 = 0x1000a;
LAB_007d60fc:
        FUN_00a8caf0(uVar3,0,0,0);
        param_1[0x3a8] = 0;
        FUN_00a962d0(0,0);
        param_1[0x3c0] = 0;
        return;
      }
    }
switchD_007d5be4_default:
    return;
  case 1:
    goto switchD_007d5be4_caseD_1;
  case 2:
    FUN_00aa4080(0x30,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x41f00000;
    param_1[0x6de] = 0;
    FUN_007d5380(0x44,param_1 + 0x6e0,0);
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
    iVar2 = FUN_00907640(param_1 + 0x734,0,param_1 + 0x740);
    if ((iVar2 != 0) &&
       (fVar1 = (float)param_1[0x10] - (float)param_1[0x740],
       SQRT(((float)param_1[0x12] - (float)param_1[0x742]) *
            ((float)param_1[0x12] - (float)param_1[0x742]) +
            ((float)param_1[0x11] - (float)param_1[0x741]) *
            ((float)param_1[0x11] - (float)param_1[0x741]) + fVar1 * fVar1) < 5.0)) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    if (((float)param_1[0x2a8] <= 1.0471976) && ((param_1[0x3c7] & 0x8000000U) == 0)) {
      FUN_00a925a0(&stack0xffffffa0);
      fVar1 = unaff_EBX * unaff_EBX + unaff_EDI * unaff_EDI + unaff_ESI * unaff_ESI;
      if (fVar1 < 0.0 == (fVar1 == 0.0)) {
        FUN_00ddf460(&stack0xffffffa0,&stack0xffffffa0);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        unaff_EDI = 0.0;
        unaff_ESI = 1.0;
        unaff_EBX = 0.0;
      }
      if ((float)param_1[0x6de] < 0.3) {
        param_1[0x6de] = (int)((float)param_1[0x6de] + 0.01);
      }
      fVar1 = (float)param_1[0x6de];
      local_44 = (float)param_1[0x244];
      local_50 = unaff_EDI * fVar1 * local_44;
      local_4c = unaff_ESI * fVar1 * local_44;
      local_48 = unaff_EBX * fVar1 * local_44;
      local_44 = local_44 * fStack_54 * fVar1;
      (**(code **)(*param_1 + 0x70))(&local_50);
      return;
    }
    if ((float)param_1[0x2a7] <= 0.0) {
      param_1[0x72e] = (int)((float)param_1[0x2a8] * 0.0055555557);
    }
    param_1[0x3c7] = param_1[0x3c7] & 0xf7ffffff;
    param_1[0x187] = param_1[0x187] + 1;
    return;
  case 4:
    FUN_00aa4080(0x31,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00eaa6e0(0x41200000,0);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00a925a0(&local_50);
    fVar1 = local_48 * local_48 + local_50 * local_50 + local_4c * local_4c;
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      FUN_00ddf460(&local_50,&local_50);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_50 = 0.0;
      local_4c = 1.0;
      local_48 = 0.0;
    }
    if (0.0 < (float)param_1[0x6de]) {
      param_1[0x6de] = (int)((float)param_1[0x6de] - 0.01);
    }
    if ((float)param_1[0x6de] < 0.0) {
      param_1[0x6de] = 0;
    }
    fVar1 = (float)param_1[0x6de];
    local_24 = (float)param_1[0x244];
    local_30 = local_50 * fVar1 * local_24;
    local_2c = local_4c * fVar1 * local_24;
    local_28 = local_48 * fVar1 * local_24;
    local_24 = local_24 * local_44 * fVar1;
    (**(code **)(*param_1 + 0x70))(&local_30);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 == 0) {
      return;
    }
    goto LAB_007d6071;
  case 6:
    FUN_00aa4080(0x31,0,0x3c888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00eaa6e0(0x41200000,0);
    param_1[0x187] = param_1[0x187] + 1;
  case 7:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 == 0) {
      return;
    }
    if (param_1[0x139] != 0) {
      return;
    }
    iVar2 = FUN_00a8cab0();
    param_1[0x3ad] = iVar2;
    iVar2 = FUN_00a8cab0();
    if (((iVar2 == 0x10000) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x10009)) ||
       ((iVar2 = FUN_00a8cab0(), iVar2 == 0x1000a || (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000d)))) {
      iVar2 = FUN_00a8cab0();
      param_1[0x72f] = iVar2;
    }
    if (param_1[0x70c] != 0) {
      param_1[0x72f] = 0x1000b;
    }
    param_1[0x3ae] = param_1[0x3a8];
    FUN_007cb240();
    uVar3 = 0x10009;
    goto LAB_007d60fc;
  case 8:
    FUN_00aa4080(0x31,0,0x3c888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00eaa6e0(0x41200000,0);
    param_1[0x187] = param_1[0x187] + 1;
  case 9:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00a925a0(&local_50);
    fVar1 = local_48 * local_48 + local_4c * local_4c + local_50 * local_50;
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      FUN_00ddf460(&local_50,&local_50);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_50 = 0.0;
      local_4c = 1.0;
      local_48 = 0.0;
    }
    if (0.0 < (float)param_1[0x6de]) {
      param_1[0x6de] = (int)((float)param_1[0x6de] - 0.01);
    }
    if ((float)param_1[0x6de] < 0.0) {
      param_1[0x6de] = 0;
    }
    fVar1 = (float)param_1[0x6de];
    local_14 = (float)param_1[0x244];
    local_20 = local_50 * -1.0 * fVar1 * local_14;
    local_1c = local_4c * -1.0 * fVar1 * local_14;
    local_18 = local_48 * -1.0 * fVar1 * local_14;
    local_14 = fVar1 * local_44 * -1.0 * local_14;
    (**(code **)(*param_1 + 0x70))(&local_20);
    iVar2 = FUN_00a94ce0(0);
    if ((iVar2 != 0) && (param_1[0x139] == 0)) {
      iVar2 = FUN_00a8cab0();
      param_1[0x3ad] = iVar2;
      iVar2 = FUN_00a8cab0();
      if ((iVar2 == 0x10000) ||
         (((iVar2 = FUN_00a8cab0(), iVar2 == 0x10009 || (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000a))
          || (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000d)))) {
        iVar2 = FUN_00a8cab0();
        param_1[0x72f] = iVar2;
      }
      if (param_1[0x70c] != 0) {
        param_1[0x72f] = 0x1000b;
      }
      param_1[0x3ae] = param_1[0x3a8];
      FUN_007cb240();
      uVar3 = 0x10009;
      goto LAB_007d60fc;
    }
  default:
    goto switchD_007d5be4_default;
  }
}

// 007D6490  FUN_007d6490  size=2811  [between]
void __fastcall FUN_007d6490(int *param_1)

{
  float *pfVar1;
  float fVar2;
  short sVar3;
  ushort uVar4;
  int iVar5;
  float10 fVar6;
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
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  switch(param_1[0x187]) {
  case 0:
    *(short *)((int)param_1 + 0x1b66) = *(short *)((int)param_1 + 0x1b66) + 1;
    FUN_00aa4080(0x2f,0,0x3dcccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x250] = 3;
switchD_007d64b4_caseD_1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
LAB_007d6528:
      param_1[0x187] = param_1[0x187] + 1;
    }
switchD_007d64b4_default:
    if (0.0 < (float)param_1[0x248]) {
      param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
    }
    return;
  case 1:
    goto switchD_007d64b4_caseD_1;
  case 2:
    FUN_00aa4080(0x30,0,0x3dcccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x758] = 0;
    param_1[0x759] = 0;
    param_1[0x75a] = 0;
    param_1[0x75b] = 0;
    param_1[0x249] = 0;
    if (0.0 <= (float)param_1[0x435]) {
      sVar3 = FUN_00dde2a0(0,2);
      if (sVar3 == 0) {
        param_1[0x24a] = 0;
        param_1[0x24b] = 0;
      }
      else if (sVar3 != 1) {
        if (sVar3 == 2) {
          param_1[0x24a] = 0x3ba3d70a;
          iVar5 = 0x3e99999a;
          goto LAB_007d6612;
        }
        goto LAB_007d6618;
      }
LAB_007d6600:
      param_1[0x24a] = 0x3b449ba6;
      iVar5 = 0x3e4ccccd;
LAB_007d6612:
      param_1[0x24b] = iVar5;
    }
    else {
      sVar3 = FUN_00dde2a0(0,1);
      if (sVar3 == 0) goto LAB_007d6600;
      if (sVar3 == 1) {
        param_1[0x24a] = 0x3ba3d70a;
        iVar5 = 0x3e99999a;
        goto LAB_007d6612;
      }
    }
LAB_007d6618:
    uVar4 = FUN_00dde2a0((short)param_1[0x71c],*(undefined2 *)((int)param_1 + 0x1c72));
    param_1[0x248] = (int)((float)uVar4 * 20.0);
    FUN_007d5380(0x44,param_1 + 0x6e0,0);
    FUN_00a8d280();
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = FUN_00ac4780();
    if (iVar5 < 2) {
      if ((param_1[0x3c7] & 0x4000000U) != 0) {
        param_1[0x24a] = 0;
        param_1[0x249] = 0;
        param_1[0x3c7] = param_1[0x3c7] & 0xfbffffff;
      }
      if ((param_1[0x3c7] & 0x2000000U) != 0) {
        param_1[0x24a] = 0;
        param_1[0x249] = 0;
        param_1[0x3c7] = param_1[0x3c7] & 0xfdffffff;
      }
      if ((*(byte *)((int)param_1 + 0xf1f) & 1) != 0) {
        param_1[0x24a] = 0;
        param_1[0x249] = 0;
        param_1[0x3c7] = param_1[0x3c7] & 0xfeffffff;
      }
    }
    iVar5 = param_1[0x2a1];
    if ((iVar5 != 0) && (0.0 < (float)param_1[0x24a])) {
      local_60 = *(float *)(iVar5 + 0x40) - (float)param_1[0x10];
      local_5c = *(float *)(iVar5 + 0x44) - (float)param_1[0x11];
      local_58 = *(float *)(iVar5 + 0x48) - (float)param_1[0x12];
      local_54 = *(float *)(iVar5 + 0x4c) - (float)param_1[0x13];
      if ((local_60 != 0.0) || ((local_5c != 0.0 || (local_58 != 0.0)))) {
        fVar2 = local_58 * local_58 + local_60 * local_60 + local_5c * local_5c;
        if (fVar2 < 0.0 == (fVar2 == 0.0)) {
          FUN_00ddf460(&local_60,&local_60);
        }
        else {
          FUN_00dd5650(&DAT_0163d0ac);
          local_60 = 0.0;
          local_5c = 1.0;
          local_58 = 0.0;
        }
      }
      pfVar1 = (float *)(param_1 + 0x758);
      *pfVar1 = (float)param_1[0x758] + local_60;
      param_1[0x759] = (int)(local_5c + (float)param_1[0x759]);
      param_1[0x75a] = (int)(local_58 + (float)param_1[0x75a]);
      param_1[0x75b] = (int)(local_54 + (float)param_1[0x75b]);
      if (((*pfVar1 != 0.0) || ((float)param_1[0x759] != 0.0)) || ((float)param_1[0x75a] != 0.0)) {
        fVar2 = (float)param_1[0x75a] * (float)param_1[0x75a] +
                *pfVar1 * *pfVar1 + (float)param_1[0x759] * (float)param_1[0x759];
        if (fVar2 < 0.0 == (fVar2 == 0.0)) {
          FUN_00ddf460(pfVar1,pfVar1);
        }
        else {
          FUN_00dd5650(&DAT_0163d0ac);
          *pfVar1 = 0.0;
          param_1[0x759] = 0x3f800000;
          param_1[0x75a] = 0;
        }
      }
      fVar2 = (float)param_1[0x249];
      param_1[0x249] = (int)((float)param_1[0x24a] + fVar2);
      if ((float)param_1[0x24b] < (float)param_1[0x24a] + fVar2) {
        param_1[0x249] = param_1[0x24b];
      }
      fVar2 = (float)param_1[0x249];
      local_34 = (float)param_1[0x244];
      local_40 = *pfVar1 * fVar2 * local_34;
      local_3c = (float)param_1[0x759] * fVar2 * local_34;
      local_38 = (float)param_1[0x75a] * fVar2 * local_34;
      local_34 = local_34 * (float)param_1[0x75b] * fVar2;
      (**(code **)(*param_1 + 0x70))(&local_40);
    }
    if ((float)param_1[0x248] <= 0.0) {
      param_1[0x187] = 6;
    }
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 == 0) goto switchD_007d64b4_default;
    if ((float)param_1[0x248] <= 0.0) {
      param_1[0x187] = 6;
      goto switchD_007d64b4_default;
    }
    goto LAB_007d6528;
  case 4:
    FUN_00aa4080(0x30,0,0x3dcccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00a8d280();
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = FUN_00ac4780();
    if (iVar5 < 2) {
      if ((param_1[0x3c7] & 0x4000000U) != 0) {
        param_1[0x24a] = 0;
        param_1[0x249] = 0;
        param_1[0x3c7] = param_1[0x3c7] & 0xfbffffff;
      }
      if ((param_1[0x3c7] & 0x2000000U) != 0) {
        param_1[0x24a] = 0;
        param_1[0x249] = 0;
        param_1[0x3c7] = param_1[0x3c7] & 0xfdffffff;
      }
      if ((*(byte *)((int)param_1 + 0xf1f) & 1) != 0) {
        param_1[0x24a] = 0;
        param_1[0x249] = 0;
        param_1[0x3c7] = param_1[0x3c7] & 0xfeffffff;
      }
    }
    iVar5 = param_1[0x2a1];
    if ((iVar5 != 0) && (0.0 < (float)param_1[0x24a])) {
      local_50 = *(float *)(iVar5 + 0x40) - (float)param_1[0x10];
      local_4c = *(float *)(iVar5 + 0x44) - (float)param_1[0x11];
      local_48 = *(float *)(iVar5 + 0x48) - (float)param_1[0x12];
      local_44 = *(float *)(iVar5 + 0x4c) - (float)param_1[0x13];
      if ((local_50 != 0.0) || ((local_4c != 0.0 || (local_48 != 0.0)))) {
        fVar2 = local_48 * local_48 + local_50 * local_50 + local_4c * local_4c;
        if (fVar2 < 0.0 == (fVar2 == 0.0)) {
          FUN_00ddf460(&local_50,&local_50);
        }
        else {
          FUN_00dd5650(&DAT_0163d0ac);
          local_50 = 0.0;
          local_4c = 1.0;
          local_48 = 0.0;
        }
      }
      pfVar1 = (float *)(param_1 + 0x758);
      *pfVar1 = (float)param_1[0x758] + local_50;
      param_1[0x759] = (int)(local_4c + (float)param_1[0x759]);
      param_1[0x75a] = (int)(local_48 + (float)param_1[0x75a]);
      param_1[0x75b] = (int)(local_44 + (float)param_1[0x75b]);
      if (((*pfVar1 != 0.0) || ((float)param_1[0x759] != 0.0)) || ((float)param_1[0x75a] != 0.0)) {
        fVar2 = (float)param_1[0x75a] * (float)param_1[0x75a] +
                *pfVar1 * *pfVar1 + (float)param_1[0x759] * (float)param_1[0x759];
        if (fVar2 < 0.0 == (fVar2 == 0.0)) {
          FUN_00ddf460(pfVar1,pfVar1);
        }
        else {
          FUN_00dd5650(&DAT_0163d0ac);
          *pfVar1 = 0.0;
          param_1[0x759] = 0x3f800000;
          param_1[0x75a] = 0;
        }
      }
      fVar2 = (float)param_1[0x249];
      param_1[0x249] = (int)((float)param_1[0x24a] + fVar2);
      if ((float)param_1[0x24b] < (float)param_1[0x24a] + fVar2) {
        param_1[0x249] = param_1[0x24b];
      }
      fVar2 = (float)param_1[0x249];
      local_24 = (float)param_1[0x244];
      local_30 = *pfVar1 * fVar2 * local_24;
      local_2c = (float)param_1[0x759] * fVar2 * local_24;
      local_28 = (float)param_1[0x75a] * fVar2 * local_24;
      local_24 = local_24 * (float)param_1[0x75b] * fVar2;
      (**(code **)(*param_1 + 0x70))(&local_30);
    }
    if ((float)param_1[0x248] <= 0.0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      if (0.0 < (float)param_1[0x248]) {
        param_1[0x187] = 4;
      }
      else {
        param_1[0x187] = 6;
      }
    }
    goto switchD_007d64b4_default;
  case 6:
    FUN_00aa4080(0x31,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x41c80000;
  case 7:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = FUN_00ac4780();
    if (iVar5 < 2) {
      if ((param_1[0x3c7] & 0x4000000U) != 0) {
        param_1[0x24a] = 0;
        param_1[0x249] = 0;
        param_1[0x3c7] = param_1[0x3c7] & 0xfbffffff;
      }
      if ((param_1[0x3c7] & 0x2000000U) != 0) {
        param_1[0x24a] = 0;
        param_1[0x249] = 0;
        param_1[0x3c7] = param_1[0x3c7] & 0xfdffffff;
      }
      if ((*(byte *)((int)param_1 + 0xf1f) & 1) != 0) {
        param_1[0x24a] = 0;
        param_1[0x249] = 0;
        param_1[0x3c7] = param_1[0x3c7] & 0xfeffffff;
      }
    }
    fVar2 = (float)param_1[0x249] - (float)param_1[0x24a];
    param_1[0x249] = (int)fVar2;
    if (fVar2 < 0.0 != (fVar2 == 0.0)) {
      param_1[0x249] = 0;
    }
    fVar2 = (float)param_1[0x249];
    local_14 = (float)param_1[0x244];
    local_20 = (float)param_1[0x758] * fVar2 * local_14;
    local_1c = (float)param_1[0x759] * fVar2 * local_14;
    local_18 = (float)param_1[0x75a] * fVar2 * local_14;
    local_14 = local_14 * (float)param_1[0x75b] * fVar2;
    (**(code **)(*param_1 + 0x70))(&local_20);
    if ((float)param_1[0x248] <= 0.0) {
      FUN_00eaa6e0(0x40400000,0);
    }
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      if (param_1[0x139] == 0) {
        iVar5 = FUN_00a8cab0();
        param_1[0x3ad] = iVar5;
        iVar5 = FUN_00a8cab0();
        if ((((iVar5 == 0x10000) || (iVar5 = FUN_00a8cab0(), iVar5 == 0x10009)) ||
            (iVar5 = FUN_00a8cab0(), iVar5 == 0x1000a)) ||
           (iVar5 = FUN_00a8cab0(), iVar5 == 0x1000d)) {
          iVar5 = FUN_00a8cab0();
          param_1[0x72f] = iVar5;
        }
        if (param_1[0x70c] != 0) {
          param_1[0x72f] = 0x1000b;
        }
        param_1[0x3ae] = param_1[0x3a8];
        FUN_007cb240();
        FUN_00a8caf0(0x1000a,0,0,0);
        param_1[0x3a8] = 0;
        FUN_00a962d0(0,0);
        param_1[0x3c0] = 0;
      }
      fVar6 = (float10)FUN_00dde300(param_1[0x71d],param_1[0x71e]);
      param_1[0x435] = (int)(float)(fVar6 * (float10)60.0);
    }
  default:
    goto switchD_007d64b4_default;
  }
}

// 007D6FB0  FUN_007d6fb0  size=1836  [between]
void __fastcall FUN_007d6fb0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  float10 fVar8;
  float10 fVar9;
  undefined4 uVar10;
  float fStack_3fc;
  float local_3f0 [5];
  float fStack_3dc;
  float fStack_3d8;
  float local_3d4;
  float local_3d0;
  float local_3cc;
  undefined1 auStack_3c8 [8];
  undefined4 local_3c0;
  undefined4 local_3bc;
  undefined4 local_3b8;
  undefined4 local_3b4;
  undefined4 local_3b0;
  undefined4 local_3ac;
  undefined4 local_3a8;
  undefined4 local_3a4;
  undefined4 local_3a0;
  float local_39c;
  float local_398;
  float local_394;
  undefined4 local_390;
  undefined4 local_38c;
  undefined4 local_388;
  undefined4 local_384;
  float local_380;
  float local_37c;
  float local_378 [2];
  undefined1 local_370 [52];
  undefined1 auStack_33c [16];
  undefined4 uStack_32c;
  undefined4 uStack_328;
  float fStack_324;
  undefined4 uStack_320;
  undefined1 uStack_31c;
  undefined1 uStack_31b;
  undefined4 uStack_318;
  uint uStack_2a0;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  
  switch(*(char *)(param_1 + 0x1e30)) {
  case '\0':
    *(char *)(param_1 + 0x1e30) = *(char *)(param_1 + 0x1e30) + '\x01';
    *(float *)(param_1 + 0x1e34) = *(float *)(param_1 + 0x1c68) * 60.0;
  case '\x01':
    if (0.0 < *(float *)(param_1 + 0x1e34)) {
      *(float *)(param_1 + 0x1e34) = *(float *)(param_1 + 0x1e34) - *(float *)(param_1 + 0x910);
    }
    if ((*(float *)(param_1 + 0x1e34) <= 0.0) &&
       (*(undefined4 *)(param_1 + 0x1e34) = 0, *(int *)(param_1 + 0x20b0) != 0)) {
      if (*(int *)(param_1 + 0x1c38) != 0) {
        FUN_00aa4080(0x39,1,0x3e4ccccd,0x3f800000,0x8040000,0xbf800000,0x3f800000);
        *(char *)(param_1 + 0x1e30) = *(char *)(param_1 + 0x1e30) + '\x01';
        return;
      }
      FUN_00aa4080(0x36,1,0x3e4ccccd,0x3f800000,0x8040000,0xbf800000,0x3f800000);
      *(char *)(param_1 + 0x1e30) = *(char *)(param_1 + 0x1e30) + '\x01';
      return;
    }
    break;
  case '\x02':
    iVar7 = FUN_00a94ce0(1);
    if (iVar7 != 0) {
      if (*(int *)(param_1 + 0x20b8) == 0) {
        if (*(int *)(param_1 + 0x1c38) == 0) {
          uVar10 = 0x37;
        }
        else {
          uVar10 = 0x3a;
        }
        FUN_00aa4080(uVar10,1,0,0x3f800000,0x40200,0xbf800000,0x3f800000);
        FUN_007d5380(2,param_1 + 0x1d80,0);
        *(char *)(param_1 + 0x1e30) = *(char *)(param_1 + 0x1e30) + '\x01';
        *(undefined4 *)(param_1 + 0x1e34) = 0x41f00000;
        *(undefined4 *)(param_1 + 0x20b4) = 1;
        *(undefined4 *)(param_1 + 0x92c) = 0x40a00000;
        return;
      }
LAB_007d714c:
      *(undefined1 *)(param_1 + 0x1e30) = 4;
      *(undefined4 *)(param_1 + 0x1e34) = 0;
      return;
    }
    break;
  case '\x03':
    fVar1 = *(float *)(param_1 + 0x1e34) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x1e34) = fVar1;
    if (*(int *)(param_1 + 0x20b8) != 0) goto LAB_007d714c;
    if (fVar1 < 0.0) {
      *(float *)(param_1 + 0x1e34) =
           *(float *)(param_1 + 0x1c64) * 60.0 * (float)*(ushort *)(param_1 + 0x1b5c);
      *(undefined4 *)(param_1 + 0x934) = *(undefined4 *)(param_1 + 0x20bc);
      FUN_00e5e0c0("em0100_se_atk_flame_gun",param_1,0xffffffff,0);
      *(char *)(param_1 + 0x1e30) = *(char *)(param_1 + 0x1e30) + '\x01';
      return;
    }
    break;
  case '\x04':
    if (*(int *)(param_1 + 0x20b8) != 0) {
      *(undefined4 *)(param_1 + 0x1e34) = 0;
    }
    fVar1 = *(float *)(param_1 + 0x934) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x934) = fVar1;
    if ((fVar1 < 0.0) &&
       ((*(float *)(param_1 + 0x20c4) < *(float *)(param_1 + 0xaa0) !=
         (*(float *)(param_1 + 0x20c4) == *(float *)(param_1 + 0xaa0)) ||
        (*(float *)(param_1 + 0x20c0) < *(float *)(param_1 + 0xa8c) !=
         (*(float *)(param_1 + 0x20c0) == *(float *)(param_1 + 0xa8c)))))) {
      *(undefined4 *)(param_1 + 0x1e34) = 0;
    }
    if (0.0 < *(float *)(param_1 + 0x1e34)) {
      fVar1 = *(float *)(param_1 + 0x92c) - *(float *)(param_1 + 0x910);
      *(float *)(param_1 + 0x92c) = fVar1;
      if (fVar1 < 0.0) {
        iVar7 = FUN_00a12210(8);
        local_3d0 = SQRT(*(float *)(iVar7 + 0x14) * *(float *)(iVar7 + 0x14) +
                         *(float *)(iVar7 + 0x10) * *(float *)(iVar7 + 0x10) +
                         *(float *)(iVar7 + 0x18) * *(float *)(iVar7 + 0x18));
        local_3cc = SQRT(*(float *)(iVar7 + 0x20) * *(float *)(iVar7 + 0x20) +
                         *(float *)(iVar7 + 0x24) * *(float *)(iVar7 + 0x24) +
                         *(float *)(iVar7 + 0x28) * *(float *)(iVar7 + 0x28));
        fVar1 = SQRT(*(float *)(iVar7 + 0x38) * *(float *)(iVar7 + 0x38) +
                     *(float *)(iVar7 + 0x34) * *(float *)(iVar7 + 0x34) +
                     *(float *)(iVar7 + 0x30) * *(float *)(iVar7 + 0x30));
        local_3d4 = *(float *)(iVar7 + 0x28) / fVar1;
        fVar3 = *(float *)(iVar7 + 0x38) / fVar1;
        fVar8 = (float10)FUN_00ddbaa0(-(*(float *)(iVar7 + 0x18) / fVar1));
        fVar1 = (float)fVar8;
        fVar9 = (float10)fpatan((float10)local_3d4,(float10)fVar3);
        local_380 = (float)fVar9;
        local_37c = (float)fVar8;
        fVar8 = (float10)fpatan((float10)*(float *)(iVar7 + 0x14) / (float10)local_3cc,
                                (float10)*(float *)(iVar7 + 0x10) / (float10)local_3d0);
        local_378[0] = (float)fVar8;
        FUN_0041fee0();
        local_3f0[0] = 0.0;
        local_3f0[1] = 0.0;
        local_3f0[2] = 1.0;
        local_384 = 0x3f800000;
        local_398 = 1.0;
        local_3ac = 0x3f800000;
        local_3c0 = 0x3f800000;
        local_3f0[3] = 0.0;
        local_388 = 0;
        local_38c = 0;
        local_390 = 0;
        local_394 = 0.0;
        local_39c = 0.0;
        local_3a0 = 0;
        local_3a4 = 0;
        local_3a8 = 0;
        local_3b0 = 0;
        local_3b4 = 0;
        local_3b8 = 0;
        local_3bc = 0;
        if (local_378[0] != 0.0) {
          D3DXMatrixRotationZ(local_370,local_378[0]);
          D3DXMatrixMultiply(auStack_3c8,local_378,auStack_3c8);
        }
        if (fVar1 != 0.0) {
          D3DXMatrixRotationY(local_370,fVar1);
          D3DXMatrixMultiply(auStack_3c8,local_378,auStack_3c8);
        }
        if (local_380 != 0.0) {
          D3DXMatrixRotationX(local_370,local_380);
          D3DXMatrixMultiply(auStack_3c8,local_378,auStack_3c8);
        }
        D3DXVec3TransformNormal(local_3f0,local_3f0,&local_3c0);
        fVar4 = local_39c + fStack_3fc;
        iVar7 = *(int *)(param_1 + 0xa84);
        fVar3 = local_398 + fVar3;
        fVar1 = local_394 + fVar1;
        fVar2 = *(float *)(param_1 + 0x1c84);
        iVar5 = FUN_00a12210(8);
        fStack_3dc = *(float *)(iVar5 + 0x40) + fVar4;
        fStack_3d8 = *(float *)(iVar5 + 0x44) + fVar3;
        local_3d4 = *(float *)(iVar5 + 0x48) + fVar1;
        local_3d0 = *(float *)(iVar5 + 0x4c) + local_3f0[0];
        FUN_00416e30(&fStack_3dc,iVar7 + 0x40,&local_38c,0x3f000000,SQRT(fVar2));
        uStack_328 = 10;
        uStack_320 = 1;
        uStack_31c = 1;
        fStack_324 = 1.4013e-44;
        if (*(int *)(param_1 + 0x754) != 0) {
          uStack_328 = FUN_00ac8520(6);
          uStack_320 = (**(code **)(**(int **)(param_1 + 0x754) + 0x10))(6);
          (**(code **)(**(int **)(param_1 + 0x754) + 0x18))(6);
          uStack_31c = (**(code **)(**(int **)(param_1 + 0x754) + 0x20))(6);
          fStack_324 = SQRT(fVar2);
        }
        uStack_318 = *(undefined4 *)(param_1 + 0x4f0);
        uStack_2a0 = uStack_2a0 & 0xefffffff | 0x4200010;
        uStack_228 = 8;
        uStack_31b = 5;
        uStack_32c = 0x114;
        uVar10 = FUN_00a7c7f0();
        FUN_00a7c960(uVar10);
        uStack_1d0 = 0x3f7f7cee;
        uStack_22c = 0x73;
        puVar6 = (undefined4 *)FUN_009f8b60();
        uStack_1cc = *puVar6;
        FUN_00ad3be0(*(undefined4 *)(param_1 + 0x4f0),auStack_33c);
        *(undefined4 *)(param_1 + 0x92c) = 0x41700000;
      }
      *(float *)(param_1 + 0x1e34) = *(float *)(param_1 + 0x1e34) - *(float *)(param_1 + 0x910);
      return;
    }
    if (*(int *)(param_1 + 0x1c38) == 0) {
      uVar10 = 0x38;
    }
    else {
      uVar10 = 0x3b;
    }
    FUN_00aa4080(uVar10,1,0,0x3f800000,0x8040000,0xbf800000,0x3f800000);
    FUN_00eaa6e0(0x41f00000,0);
    FUN_00e5e0c0("emc100_se_atk_flame_gun_stop",param_1,0xffffffff,0);
    *(char *)(param_1 + 0x1e30) = *(char *)(param_1 + 0x1e30) + '\x01';
    return;
  case '\x05':
    iVar7 = FUN_00a94ce0(1);
    if (iVar7 != 0) {
      *(undefined1 *)(param_1 + 0x1e30) = 0;
      *(undefined4 *)(param_1 + 0x20b0) = 0;
      *(undefined4 *)(param_1 + 0x20b4) = 0;
      *(float *)(param_1 + 0x1e34) = *(float *)(param_1 + 0x1c68) * 60.0;
      *(undefined4 *)(param_1 + 0x20b8) = 0;
      return;
    }
  }
  return;
}

// 007D7700  FUN_007d7700  size=571  [between]
void __fastcall FUN_007d7700(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  float10 fVar3;
  undefined1 *puVar4;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined1 local_160 [348];
  
  local_170 = 0;
  local_16c = 0;
  local_168 = 0;
  *(undefined2 *)(param_1 + 0x824) = 3;
  *(undefined4 *)(param_1 + 0x828) = 0x78;
  FUN_00c593a0(*(undefined4 *)(param_1 + 0x4f0),0xffffffff,&local_170,0x40a00000,0x40400000,0x2d,8);
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    if (*(int *)(param_1 + 0x1d30) == 0) {
      FUN_004039a0(0x18e,param_1,0);
      FUN_00e021c0(param_1);
      puVar4 = local_160;
      uVar1 = FUN_00e00b40(*(undefined4 *)(param_1 + 0x4b0),puVar4);
      FUN_00a8c930(uVar1,puVar4);
    }
    FUN_00aa4080(0x56,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      if (*(int *)(param_1 + 0x754) == 0) {
        *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
        *(undefined4 *)(param_1 + 0x920) = 0x43960000;
        return;
      }
      fVar3 = (float10)FUN_00ac85c0(5,0xe);
      *(float *)(param_1 + 0x920) = (float)fVar3;
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      return;
    }
    break;
  case 2:
    FUN_00aa4080(0x57,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (*(float *)(param_1 + 0x920) < 0.0) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    }
    *(float *)(param_1 + 0x920) = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
    return;
  case 4:
    FUN_00aa4080(0x58,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_007cd550(*(undefined4 *)(param_1 + 0x1cbc),0,0,0,0);
      return;
    }
  }
  return;
}

// 007D7960  FUN_007d7960  size=954  [between]
void __fastcall FUN_007d7960(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  *(undefined4 *)(param_1 + 0x1c38) = 1;
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    FUN_00aa4080(0x5a,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 == 0) {
      return;
    }
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    return;
  case 2:
    FUN_00aa4080(0x5b,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (*(int *)(param_1 + 0x1c30) != 0) {
      return;
    }
    if (((*(float *)(param_1 + 0xaa0) < 1.0471976) && (*(int *)(param_1 + 0x20b0) == 0)) &&
       (*(float *)(param_1 + 0xa90) <= *(float *)(param_1 + 0x1c84))) {
      *(undefined4 *)(param_1 + 0x20b0) = 1;
    }
    if (-0.17453292 <= *(float *)(param_1 + 0xa9c)) {
      if (*(float *)(param_1 + 0xa9c) <= 0.17453292) {
        if (*(float *)(param_1 + 0xa90) <= 25.0) {
          return;
        }
        *(undefined4 *)(param_1 + 0x61c) = 8;
        return;
      }
      *(undefined4 *)(param_1 + 0x61c) = 6;
    }
    else {
      *(undefined4 *)(param_1 + 0x61c) = 4;
    }
    if (*(float *)(param_1 + 0xaa0) < 0.7853982) {
      *(float *)(param_1 + 0x1cb8) = *(float *)(param_1 + 0xaa0) * 1.2732395;
      return;
    }
    *(undefined4 *)(param_1 + 0x1cb8) = 0x3f800000;
    return;
  case 4:
    FUN_00aa4080(0x1b,0,0x3e088889,0x4d000000,0,0xbf800000,0x3f800000);
    FUN_007d5380(0x30,param_1 + 0x1660,8);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    break;
  case 5:
  case 7:
    break;
  case 6:
    FUN_00aa4080(0x1c,0,0x3e088889,0x4d000000,0,0xbf800000,0x3f800000);
    FUN_007d5380(0x30,param_1 + 0x1660,8);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    break;
  case 8:
    FUN_00aa4080(0x22,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_007d5380(0x30,param_1 + 0x1660,8);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 9:
    uVar1 = 0x3f800000;
    uVar3 = 0x3f800000;
    goto LAB_007d7b6d;
  case 10:
    FUN_00aa4080(0x4a,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 0xb:
    *(undefined2 *)(param_1 + 0x824) = 4;
    *(undefined4 *)(param_1 + 0x828) = 0x78;
  case 0xd:
switchD_007d7980_caseD_d:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x61c) = 2;
      return;
    }
    goto switchD_007d7980_default;
  case 0xc:
    FUN_00aa4080(0x5c,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    goto switchD_007d7980_caseD_d;
  default:
    goto switchD_007d7980_default;
  }
  uVar3 = *(undefined4 *)(param_1 + 0x1cb8);
  uVar1 = *(undefined4 *)(param_1 + 0x1cb8);
LAB_007d7b6d:
  FUN_00ac80a0(uVar1,uVar3);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*(int *)(param_1 + 0x1660) + 8))(0x40a00000,0,0);
    *(undefined4 *)(param_1 + 0x61c) = 2;
    return;
  }
switchD_007d7980_default:
  return;
}

// 007D7D60  FUN_007d7d60  size=948  [between]
void __fastcall FUN_007d7d60(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  *(undefined4 *)(param_1 + 0x1c38) = 1;
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    FUN_00aa4080(0x5a,0,0x3e088889,0x3f800000,0x8000040,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 == 0) {
      return;
    }
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    return;
  case 2:
    FUN_00aa4080(0x5b,0,0x3e088889,0x3f800000,0x40,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (*(int *)(param_1 + 0x1c30) != 0) {
      return;
    }
    if (((*(float *)(param_1 + 0xaa0) < 1.0471976) && (*(int *)(param_1 + 0x20b0) == 0)) &&
       (*(float *)(param_1 + 0xa90) <= *(float *)(param_1 + 0x1c84))) {
      *(undefined4 *)(param_1 + 0x20b0) = 1;
    }
    if (-0.17453292 <= *(float *)(param_1 + 0xa9c)) {
      if (*(float *)(param_1 + 0xa9c) <= 0.17453292) {
        if (*(float *)(param_1 + 0xa90) <= 25.0) {
          return;
        }
        *(undefined4 *)(param_1 + 0x61c) = 8;
        return;
      }
      *(undefined4 *)(param_1 + 0x61c) = 6;
    }
    else {
      *(undefined4 *)(param_1 + 0x61c) = 4;
    }
    if (*(float *)(param_1 + 0xaa0) < 0.7853982) {
      *(float *)(param_1 + 0x1cb8) = *(float *)(param_1 + 0xaa0) * 1.2732395;
      return;
    }
    *(undefined4 *)(param_1 + 0x1cb8) = 0x3f800000;
    return;
  case 4:
    FUN_00aa4080(0x1c,0,0x3e088889,0x3f800000,0x8000040,0xbf800000,0x3f800000);
    FUN_007d5380(0x30,param_1 + 0x1660,8);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    break;
  case 5:
  case 7:
    break;
  case 6:
    FUN_00aa4080(0x1b,0,0x3e088889,0x3f800000,0x8000040,0xbf800000,0x3f800000);
    FUN_007d5380(0x30,param_1 + 0x1660,8);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    break;
  case 8:
    FUN_00aa4080(0x22,0,0x3e088889,0x3f800000,0x8000040,0xbf800000,0x3f800000);
    FUN_007d5380(0x30,param_1 + 0x1660,8);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 9:
    uVar1 = 0x3f800000;
    uVar3 = 0x3f800000;
    goto LAB_007d7f6a;
  case 10:
    FUN_00aa4080(0x4a,0,0x3e088889,0x3f800000,0x8000040,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 0xb:
    *(undefined2 *)(param_1 + 0x824) = 4;
    *(undefined4 *)(param_1 + 0x828) = 0x78;
  case 0xd:
switchD_007d7d80_caseD_d:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x61c) = 2;
      return;
    }
    goto switchD_007d7d80_default;
  case 0xc:
    FUN_00aa4080(0x5c,0,0x3e088889,0x3f800000,0x8000040,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    goto switchD_007d7d80_caseD_d;
  default:
    goto switchD_007d7d80_default;
  }
  uVar3 = *(undefined4 *)(param_1 + 0x1cb8);
  uVar1 = *(undefined4 *)(param_1 + 0x1cb8);
LAB_007d7f6a:
  FUN_00ac80a0(uVar1,uVar3);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*(int *)(param_1 + 0x1660) + 8))(0x40a00000,0,0);
    *(undefined4 *)(param_1 + 0x61c) = 2;
    return;
  }
switchD_007d7d80_default:
  return;
}

// 007D8150  FUN_007d8150  size=1197  [between]
void __fastcall FUN_007d8150(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  
  *(undefined4 *)(param_1 + 0x1c38) = 1;
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    FUN_00aa4080(0x5d,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 == 0) {
      return;
    }
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    return;
  case 2:
    FUN_00aa4080(0x5e,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (*(int *)(param_1 + 0x1c30) != 0) {
      return;
    }
    if (((*(float *)(param_1 + 0xaa0) < 1.0471976) && (*(int *)(param_1 + 0x20b0) == 0)) &&
       (*(float *)(param_1 + 0xa90) <= *(float *)(param_1 + 0x1c84))) {
      *(undefined4 *)(param_1 + 0x20b0) = 1;
    }
    if (((*(float *)(param_1 + 0xa9c) < -0.17453292) && (9.0 < *(float *)(param_1 + 0xa90))) ||
       (*(float *)(param_1 + 0xa9c) < -0.7853982)) {
      *(undefined4 *)(param_1 + 0x61c) = 4;
    }
    else {
      if (((*(float *)(param_1 + 0xa9c) <= 0.17453292) || (*(float *)(param_1 + 0xa90) <= 9.0)) &&
         (*(float *)(param_1 + 0xa9c) <= 0.7853982)) {
        if (*(float *)(param_1 + 0xa90) <= 25.0) {
          return;
        }
        *(undefined4 *)(param_1 + 0x61c) = 8;
        return;
      }
      *(undefined4 *)(param_1 + 0x61c) = 6;
    }
    if (*(float *)(param_1 + 0xaa0) < 0.7853982) {
      *(float *)(param_1 + 0x1cb8) = *(float *)(param_1 + 0xaa0) * 1.2732395;
      return;
    }
    *(undefined4 *)(param_1 + 0x1cb8) = 0x3f800000;
    return;
  case 4:
    FUN_00aa4080(0x1d,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_007d5380(0x30,param_1 + 0x1660,8);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 5:
    fVar2 = 1.0;
    if (*(float *)(param_1 + 0xaa0) < 0.7853982) {
      fVar2 = *(float *)(param_1 + 0xaa0) * 1.2732395;
    }
    *(float *)(param_1 + 0x1cb4) = fVar2;
    uVar4 = *(undefined4 *)(param_1 + 0x1cb8);
    uVar1 = *(undefined4 *)(param_1 + 0x1cb4);
    goto LAB_007d83cf;
  case 6:
    FUN_00aa4080(0x1e,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_007d5380(0x30,param_1 + 0x1660,8);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 7:
    fVar2 = 1.0;
    if (*(float *)(param_1 + 0xaa0) < 0.7853982) {
      fVar2 = *(float *)(param_1 + 0xaa0) * 1.2732395;
    }
    *(float *)(param_1 + 0x1cb4) = fVar2;
    FUN_00ac80a0(*(undefined4 *)(param_1 + 0x1cb4),*(undefined4 *)(param_1 + 0x1cb8));
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 == 0) {
      return;
    }
    (**(code **)(*(int *)(param_1 + 0x1660) + 8))(0x40a00000,0,0);
    *(undefined4 *)(param_1 + 0x61c) = 2;
    return;
  case 8:
    FUN_00aa4080(0x26,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_007d5380(0x30,param_1 + 0x1660,8);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 9:
    uVar1 = 0x3f800000;
    uVar4 = 0x3f800000;
LAB_007d83cf:
    FUN_00ac80a0(uVar1,uVar4);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 == 0) {
      return;
    }
    (**(code **)(*(int *)(param_1 + 0x1660) + 8))(0x40a00000,0,0);
    *(undefined4 *)(param_1 + 0x61c) = 2;
    return;
  case 10:
    FUN_00aa4080(0x4b,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 0xb:
    *(undefined2 *)(param_1 + 0x824) = 4;
    *(undefined4 *)(param_1 + 0x828) = 0x78;
    break;
  case 0xc:
    FUN_00aa4080(0x5f,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    break;
  case 0xd:
    break;
  default:
    goto switchD_007d8170_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    *(undefined4 *)(param_1 + 0x61c) = 2;
    return;
  }
switchD_007d8170_default:
  return;
}

// 007D8640  FUN_007d8640  size=642  [between]
void __fastcall FUN_007d8640(int *param_1)

{
  int iVar1;
  undefined1 auStack_12c [296];
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x6c,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(undefined1 *)(param_1 + 0x78c) = 5;
    FUN_00e5e0c0("em0100_se_dmg_spark_death",param_1,0xffffffff,0);
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 == 0) {
      return;
    }
    param_1[0x187] = param_1[0x187] + 1;
    return;
  case 2:
    (**(code **)(*param_1 + 0x20))();
    FUN_00eaa6e0(0x3f800000,0);
    FUN_00eaa6e0(0x3f800000,0);
    FUN_00eaa6e0(0x3f800000,0);
    FUN_00eaa6e0(0x3f800000,0);
    if (param_1[0x64b] != 0) {
      (**(code **)(param_1[0x5c4] + 8))(0x3f800000,0,0);
    }
    if (param_1[0x6d4] != 0) {
      (**(code **)(param_1[0x514] + 8))(0x3f800000,0,0);
    }
    if (param_1[0x6d5] != 0) {
      (**(code **)(param_1[0x540] + 8))(0x3f800000,0,0);
    }
    if (param_1[0x6d6] != 0) {
      (**(code **)(param_1[0x56c] + 8))(0x3f800000,0,0);
    }
    (**(code **)(*param_1 + 0x344))(6,param_1[0x3ac],param_1[0x3ab]);
    if (param_1[0x294] != 0) {
      FUN_00940450(param_1[0x20f]);
      FUN_00e01ca0();
      FUN_00e020f0(param_1[0x13c]);
      FUN_00e01340(0x2c100,10,auStack_12c);
      iVar1 = FUN_00e5e0c0("em0100_se_dmg_explosion",param_1,0xffffffff,0);
      param_1[0x711] = iVar1;
    }
    FUN_00c27f40(0xe,0x44e10000);
    (**(code **)(*param_1 + 0x364))(0xffffffff);
    param_1[0x187] = param_1[0x187] + 1;
    break;
  case 3:
    break;
  default:
    goto switchD_007d8660_default;
  }
  iVar1 = thunk_FUN_00e58ed0(param_1[0x711]);
  if (iVar1 == 0) {
    FUN_009fdde0();
    return;
  }
switchD_007d8660_default:
  return;
}

// 007D88E0  FUN_007d88e0  size=374  [between]
void __fastcall FUN_007d88e0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined1 auStack_120 [284];
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x6e,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    *(undefined1 *)(param_1 + 0x78c) = 5;
    param_1[0x139] = 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 == 0) {
      return;
    }
    param_1[0x187] = param_1[0x187] + 1;
    return;
  case 2:
    pcVar1 = *(code **)(*param_1 + 0x20);
    param_1[0x248] = 0x43340000;
    (*pcVar1)();
    if (param_1[0x64b] != 0) {
      (**(code **)(param_1[0x5c4] + 8))(0x3f800000,0,0);
    }
    if (param_1[0x294] != 0) {
      (**(code **)(*param_1 + 0x344))(6,0,1);
      FUN_00940450(param_1[0x20f]);
      FUN_00e01ca0();
      FUN_00e020f0(param_1[0x13c]);
      FUN_00e01340(0x2c100,10,auStack_120);
      iVar2 = FUN_00e5e0c0("em0100_se_dmg_explosion",param_1,0xffffffff,0);
      param_1[0x711] = iVar2;
    }
    param_1[0x187] = param_1[0x187] + 1;
    break;
  case 3:
    break;
  default:
    goto switchD_007d8900_default;
  }
  iVar2 = thunk_FUN_00e58ed0(param_1[0x711]);
  if (iVar2 == 0) {
    FUN_009fdde0();
    return;
  }
switchD_007d8900_default:
  return;
}

// 007D8A70  FUN_007d8a70  size=374  [between]
void __fastcall FUN_007d8a70(int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined1 auStack_120 [284];
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x6f,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    *(undefined1 *)(param_1 + 0x78c) = 5;
    param_1[0x139] = 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 == 0) {
      return;
    }
    param_1[0x187] = param_1[0x187] + 1;
    return;
  case 2:
    pcVar1 = *(code **)(*param_1 + 0x20);
    param_1[0x248] = 0x43340000;
    (*pcVar1)();
    if (param_1[0x64b] != 0) {
      (**(code **)(param_1[0x5c4] + 8))(0x3f800000,0,0);
    }
    if (param_1[0x294] != 0) {
      (**(code **)(*param_1 + 0x344))(6,0,1);
      FUN_00940450(param_1[0x20f]);
      FUN_00e01ca0();
      FUN_00e020f0(param_1[0x13c]);
      FUN_00e01340(0x2c100,10,auStack_120);
      iVar2 = FUN_00e5e0c0("em0100_se_dmg_explosion",param_1,0xffffffff,0);
      param_1[0x711] = iVar2;
    }
    param_1[0x187] = param_1[0x187] + 1;
    break;
  case 3:
    break;
  default:
    goto switchD_007d8a90_default;
  }
  iVar2 = thunk_FUN_00e58ed0(param_1[0x711]);
  if (iVar2 == 0) {
    FUN_009fdde0();
    return;
  }
switchD_007d8a90_default:
  return;
}

// 007D8C00  FUN_007d8c00  size=374  [between]
void __fastcall FUN_007d8c00(int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined1 auStack_120 [284];
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x70,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    *(undefined1 *)(param_1 + 0x78c) = 5;
    param_1[0x139] = 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 == 0) {
      return;
    }
    param_1[0x187] = param_1[0x187] + 1;
    return;
  case 2:
    pcVar1 = *(code **)(*param_1 + 0x20);
    param_1[0x248] = 0x43340000;
    (*pcVar1)();
    if (param_1[0x64b] != 0) {
      (**(code **)(param_1[0x5c4] + 8))(0x3f800000,0,0);
    }
    if (param_1[0x294] != 0) {
      (**(code **)(*param_1 + 0x344))(6,0,1);
      FUN_00940450(param_1[0x20f]);
      FUN_00e01ca0();
      FUN_00e020f0(param_1[0x13c]);
      FUN_00e01340(0x2c100,10,auStack_120);
      iVar2 = FUN_00e5e0c0("em0100_se_dmg_explosion",param_1,0xffffffff,0);
      param_1[0x711] = iVar2;
    }
    param_1[0x187] = param_1[0x187] + 1;
    break;
  case 3:
    break;
  default:
    goto switchD_007d8c20_default;
  }
  iVar2 = thunk_FUN_00e58ed0(param_1[0x711]);
  if (iVar2 == 0) {
    FUN_009fdde0();
    return;
  }
switchD_007d8c20_default:
  return;
}

// 007D8D90  FUN_007d8d90  size=374  [between]
void __fastcall FUN_007d8d90(int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined1 auStack_120 [284];
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x71,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    *(undefined1 *)(param_1 + 0x78c) = 5;
    param_1[0x139] = 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 == 0) {
      return;
    }
    param_1[0x187] = param_1[0x187] + 1;
    return;
  case 2:
    pcVar1 = *(code **)(*param_1 + 0x20);
    param_1[0x248] = 0x43340000;
    (*pcVar1)();
    if (param_1[0x64b] != 0) {
      (**(code **)(param_1[0x5c4] + 8))(0x3f800000,0,0);
    }
    if (param_1[0x294] != 0) {
      (**(code **)(*param_1 + 0x344))(6,0,1);
      FUN_00940450(param_1[0x20f]);
      FUN_00e01ca0();
      FUN_00e020f0(param_1[0x13c]);
      FUN_00e01340(0x2c100,10,auStack_120);
      iVar2 = FUN_00e5e0c0("em0100_se_dmg_explosion",param_1,0xffffffff,0);
      param_1[0x711] = iVar2;
    }
    param_1[0x187] = param_1[0x187] + 1;
    break;
  case 3:
    break;
  default:
    goto switchD_007d8db0_default;
  }
  iVar2 = thunk_FUN_00e58ed0(param_1[0x711]);
  if (iVar2 == 0) {
    FUN_009fdde0();
    return;
  }
switchD_007d8db0_default:
  return;
}

// 007D8F20  Emc100::vf40  size=4202  [class]
undefined4 __fastcall Emc100::vf40(int param_1)

{
  undefined1 uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  float10 fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  int local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined1 local_1d0 [112];
  undefined1 auStack_160 [348];
  
  iVar3 = EmBaseDLC::vf40();
  if (iVar3 == 0) {
    return 0;
  }
  FUN_009fd240();
  FUN_00acf600(0x2c101,"Emc100Body");
  local_1f0 = FUN_00ac8a50();
  *(undefined4 *)(param_1 + 0xe98) = 0;
  if (*(undefined4 **)(param_1 + 0x370) != (undefined4 *)0x0) {
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 0x400000;
    **(undefined4 **)(param_1 + 0x370) = 0;
  }
  if (*(int *)(param_1 + 0x370) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x370) + 4) = 1;
    *(undefined4 *)(*(int *)(param_1 + 0x370) + 8) = 1;
  }
  FUN_00ac8d40(0);
  if (*(int *)(param_1 + 0x370) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x370) + 0xc) = 3;
  }
  local_1dc = 0x3f666666;
  local_1d8 = 0x3f99999a;
  local_1d4 = 0x3f8ccccd;
  local_200 = 0x3e4ccccd;
  local_1fc = 0x40400000;
  local_1f8 = 0x40000000;
  FUN_00a8e4d0(&local_200,&local_1dc);
  if (local_1f0 == 0) {
    FUN_00ac94e0(&DAT_0163d9a8);
  }
  FUN_00a929d0();
  if (*(int *)(param_1 + 0x754) == 0) {
    FUN_00a8edf0(100);
    *(undefined4 *)(param_1 + 0x1b34) = 0x3e99999a;
    *(undefined4 *)(param_1 + 0x1c34) = 0x3e4ccccd;
    *(undefined4 *)(param_1 + 0x1b14) = 0x1e;
    *(undefined4 *)(param_1 + 0x1b18) = 0x1e;
    *(undefined4 *)(param_1 + 0x1c64) = 0x42700000;
    *(undefined4 *)(param_1 + 0x1b1c) = 0x1e;
    *(undefined4 *)(param_1 + 0x1c68) = 0x42700000;
    *(undefined4 *)(param_1 + 0x1b38) = 10;
    *(undefined4 *)(param_1 + 0x1b3c) = 10;
    *(undefined4 *)(param_1 + 0x1c6c) = 0x42b40000;
    *(undefined4 *)(param_1 + 0x1b40) = 10;
    *(undefined4 *)(param_1 + 0x1b60) = 0x1e;
    *(undefined4 *)(param_1 + 0x1c74) = 0x44610000;
    *(undefined4 *)(param_1 + 0x1c54) = 0x14;
    *(undefined4 *)(param_1 + 0x1c58) = 0;
    *(undefined4 *)(param_1 + 0x1c78) = 0x44e10000;
    *(undefined4 *)(param_1 + 0x1c5c) = 0;
    *(undefined1 *)(param_1 + 0x1c60) = 0;
    *(undefined4 *)(param_1 + 0x20bc) = 0x42b40000;
    *(undefined4 *)(param_1 + 0x1c70) = 0x50002;
    *(undefined4 *)(param_1 + 0x1c40) = 0x1e;
    *(undefined4 *)(param_1 + 0x20c0) = 0x42c80000;
    fVar8 = (float10)1.5707964;
  }
  else {
    uVar4 = FUN_00ac8660(0,7);
    FUN_00a8edf0(uVar4);
    uVar4 = FUN_00ac8660(0,8);
    *(undefined4 *)(param_1 + 0x1b14) = uVar4;
    uVar4 = FUN_00ac8660(0,9);
    *(undefined4 *)(param_1 + 0x1b18) = uVar4;
    uVar4 = FUN_00ac8660(0,10);
    *(undefined4 *)(param_1 + 0x1b1c) = uVar4;
    uVar4 = FUN_00ac8660(0,0xb);
    *(undefined4 *)(param_1 + 0x1b38) = uVar4;
    uVar4 = FUN_00ac8660(0,0xb);
    *(undefined4 *)(param_1 + 0x1b3c) = uVar4;
    uVar4 = FUN_00ac8660(0,0xb);
    *(undefined4 *)(param_1 + 0x1b40) = uVar4;
    uVar4 = FUN_00ac8660(0,0xc);
    *(undefined4 *)(param_1 + 0x1b60) = uVar4;
    fVar8 = (float10)FUN_00ac85c0(5,0x12);
    *(float *)(param_1 + 0x1b34) = (float)fVar8;
    fVar8 = (float10)FUN_00ac85c0(5,0x13);
    *(float *)(param_1 + 0x1c34) = (float)fVar8;
    uVar4 = FUN_00ac8660(0,0x16);
    *(undefined4 *)(param_1 + 0x1c54) = uVar4;
    uVar4 = FUN_00ac8660(0,0x18);
    *(undefined4 *)(param_1 + 0x1c58) = uVar4;
    uVar4 = FUN_00ac8660(0,0x17);
    *(undefined4 *)(param_1 + 0x1c5c) = uVar4;
    uVar1 = FUN_00ac8660(0,0x19);
    *(undefined1 *)(param_1 + 0x1c60) = uVar1;
    fVar8 = (float10)FUN_00ac85c0(5,0x1b);
    *(float *)(param_1 + 0x1c64) = (float)fVar8;
    fVar8 = (float10)FUN_00ac85c0(5,0x1c);
    *(float *)(param_1 + 0x1c68) = (float)fVar8;
    fVar8 = (float10)FUN_00ac85c0(5,0x1e);
    *(float *)(param_1 + 0x1c6c) = (float)fVar8;
    uVar2 = FUN_00ac8660(0,0x20);
    *(undefined2 *)(param_1 + 0x1c70) = uVar2;
    uVar2 = FUN_00ac8660(0,0x21);
    *(undefined2 *)(param_1 + 0x1c72) = uVar2;
    fVar8 = (float10)FUN_00ac85c0(5,0x23);
    *(float *)(param_1 + 0x1c74) = (float)fVar8;
    fVar8 = (float10)FUN_00ac85c0(5,0x24);
    *(float *)(param_1 + 0x1c78) = (float)fVar8;
    uVar5 = FUN_00ac8660(0,0x26);
    *(uint *)(param_1 + 0x1c40) = uVar5 & 0xff;
    fVar8 = (float10)FUN_00ac85c0(5,0x28);
    *(float *)(param_1 + 0x20bc) = (float)(fVar8 * (float10)60.0);
    fVar8 = (float10)FUN_00ac85c0(5,0x29);
    *(float *)(param_1 + 0x20c0) = (float)(fVar8 * fVar8);
    fVar8 = (float10)FUN_00ac85c0(5,0x2a);
    fVar8 = fVar8 * (float10)0.017453292;
  }
  *(float *)(param_1 + 0x20c4) = (float)fVar8;
  *(undefined4 *)(param_1 + 0xf1c) = 0;
  *(undefined4 *)(param_1 + 0xf20) = 0;
  fVar8 = (float10)FUN_00dde300(*(undefined4 *)(param_1 + 0x1c74),*(undefined4 *)(param_1 + 0x1c78))
  ;
  *(undefined1 *)(param_1 + 0x10d0) = 0;
  *(undefined4 *)(param_1 + 0x1ca0) = 0;
  *(undefined4 *)(param_1 + 0x1ca4) = 0;
  *(undefined4 *)(param_1 + 0x1ca8) = 0;
  *(float *)(param_1 + 0x10d4) = (float)(fVar8 * (float10)60.0);
  *(undefined4 *)(param_1 + 0x1cac) = 0;
  *(undefined4 *)(param_1 + 0xea8) = 2;
  *(undefined4 *)(param_1 + 0x1c94) = 0x47435000;
  *(undefined4 *)(param_1 + 0x1cf0) = 0;
  *(undefined4 *)(param_1 + 0x20b0) = 0;
  *(undefined4 *)(param_1 + 0x1cec) = 0x41f00000;
  *(undefined4 *)(param_1 + 0x1d30) = 0;
  *(undefined4 *)(param_1 + 0x1b10) = 0;
  *(undefined4 *)(param_1 + 0x1cb4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xec4) = 0x10000;
  *(undefined4 *)(param_1 + 0x1cb8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1b20) = 0;
  *(undefined4 *)(param_1 + 0x1b28) = 0;
  *(undefined4 *)(param_1 + 0x1b74) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x1b2c) = 0;
  *(undefined4 *)(param_1 + 0x1b30) = 0;
  *(undefined4 *)(param_1 + 0x1b78) = 0;
  *(undefined4 *)(param_1 + 0x192c) = 0;
  *(undefined1 *)(param_1 + 0xe9c) = 0;
  *(undefined4 *)(param_1 + 0x1b44) = 1;
  *(undefined4 *)(param_1 + 0x1b48) = 1;
  *(undefined4 *)(param_1 + 0x1b4c) = 1;
  *(undefined4 *)(param_1 + 0x1b50) = 0;
  *(undefined4 *)(param_1 + 0x1b54) = 0;
  *(undefined4 *)(param_1 + 7000) = 0;
  *(undefined4 *)(param_1 + 0xf04) = 1;
  *(undefined4 *)(param_1 + 0xf08) = 1;
  *(undefined4 *)(param_1 + 0xf0c) = 1;
  *(undefined4 *)(param_1 + 0xf10) = 1;
  *(undefined4 *)(param_1 + 0xf14) = 1;
  *(undefined4 *)(param_1 + 0xf18) = 1;
  *(undefined2 *)(param_1 + 0x1b6c) = 0;
  *(undefined4 *)(param_1 + 0x1b70) = 0;
  *(undefined4 *)(param_1 + 0x1d50) = 0;
  *(undefined4 *)(param_1 + 0x20b4) = 0;
  *(undefined4 *)(param_1 + 0x1c30) = 0;
  *(undefined2 *)(param_1 + 0x1b5c) = 3;
  *(undefined4 *)(param_1 + 0x1d60) = 0;
  *(undefined4 *)(param_1 + 0x1d64) = 0;
  *(undefined4 *)(param_1 + 0x1d68) = 0;
  *(undefined4 *)(param_1 + 0x1d6c) = 0;
  *(undefined4 *)(param_1 + 0x1c38) = 0;
  *(undefined4 *)(param_1 + 0x1d70) = 0;
  *(undefined4 *)(param_1 + 0x1c80) = 0;
  *(undefined4 *)(param_1 + 0x1d74) = 0;
  *(undefined4 *)(param_1 + 0x1c3c) = 0;
  *(undefined4 *)(param_1 + 0x1d54) = 0;
  *(float *)(param_1 + 0x10d8) = (float)(float10)60.0;
  *(undefined2 *)(param_1 + 0x1b66) = 0;
  *(undefined4 *)(param_1 + 0x20b8) = 0;
  *(undefined4 *)(param_1 + 0x1c98) = 0x44610000;
  *(undefined4 *)(param_1 + 0xeac) = 1;
  *(undefined4 *)(param_1 + 0xeb0) = 0;
  *(undefined4 *)(param_1 + 0x1c84) = 0x42800000;
  *(undefined4 *)(param_1 + 0x1c88) = 0x447a0000;
  *(undefined4 *)(param_1 + 0x1c8c) = 0x42480000;
  *(undefined4 *)(param_1 + 0x1c90) = 0x42c80000;
  iVar3 = FUN_00a7c800();
  iVar3 = *(int *)(iVar3 + 0x330);
  *(int *)(param_1 + 0xe90) = iVar3;
  *(undefined4 *)(param_1 + 0xe94) = *(undefined4 *)(iVar3 + 0xcc);
  *(undefined4 *)(param_1 + 0xe98) = **(undefined4 **)(param_1 + 0xe90);
  uVar4 = FUN_00c5def0(*(undefined4 *)(param_1 + 0x4f0));
  *(undefined4 *)(param_1 + 0x970) = uVar4;
  *(undefined4 *)(param_1 + 0x6c4) = 1;
  *(undefined4 *)(param_1 + 0x6d0) = 0;
  *(undefined4 *)(param_1 + 0x6d4) = 0;
  uVar12 = 2;
  *(undefined4 *)(param_1 + 0x6d8) = 0;
  puVar6 = &local_1e8;
  *(undefined4 *)(param_1 + 0x6dc) = local_1f4;
  *(undefined4 *)(param_1 + 0x6e8) = 0x3fc00000;
  *(undefined4 *)(param_1 + 0x6ec) = 1;
  *(undefined4 *)(param_1 + 0x6e4) = 1;
  local_1e8 = 0;
  *(undefined4 *)(param_1 + 0x6e0) = 1;
  local_1e4 = 0;
  local_1e0 = 0;
  uVar11 = 0;
  uVar10 = 0x3fc00000;
  uVar9 = 0x3fb33333;
  uVar4 = FUN_00a12210(1);
  FUN_00a889e0(uVar4,uVar9,uVar10,uVar11,puVar6,uVar12);
  uVar12 = 1;
  puVar6 = &local_1e8;
  uVar11 = 0xbf000000;
  uVar10 = 0x3f000000;
  uVar9 = 0x3fb33333;
  uVar4 = FUN_00a12210(0x103);
  FUN_00a889e0(uVar4,uVar9,uVar10,uVar11,puVar6,uVar12);
  uVar12 = 1;
  puVar6 = &local_1e8;
  uVar11 = 0xbf000000;
  uVar10 = 0x3f000000;
  uVar9 = 0x3fb33333;
  uVar4 = FUN_00a12210(0x203);
  FUN_00a889e0(uVar4,uVar9,uVar10,uVar11,puVar6,uVar12);
  uVar12 = 1;
  puVar6 = &local_1e8;
  uVar11 = 0xbf800000;
  uVar10 = 0x3fc00000;
  uVar9 = 0x3fb33333;
  uVar4 = FUN_00a12210(0x303);
  FUN_00a889e0(uVar4,uVar9,uVar10,uVar11,puVar6,uVar12);
  FUN_00405230();
  local_200 = 0;
  local_1fc = 0;
  local_1f8 = 0;
  FUN_00c151f0(1,*(undefined4 *)(param_1 + 0x4f0),1,&local_200,0,0x41f00000,0x3f800000,1,0);
  FUN_00c57830(local_1d0);
  local_200 = 0;
  local_1fc = 0;
  local_1f8 = 0;
  FUN_00c151f0(0,*(undefined4 *)(param_1 + 0x4f0),0x103,&local_200,1,0x41f00000,0x3f000000,1,0);
  FUN_00c57830(local_1d0);
  local_200 = 0;
  local_1fc = 0;
  local_1f8 = 0;
  FUN_00c151f0(0,*(undefined4 *)(param_1 + 0x4f0),0x203,&local_200,2,0x41f00000,0x3f000000,1,0);
  FUN_00c57830(local_1d0);
  local_200 = 0;
  local_1fc = 0;
  local_1f8 = 0;
  FUN_00c151f0(0,*(undefined4 *)(param_1 + 0x4f0),0x303,&local_200,3,0x41f00000,0x3f000000,1,0);
  FUN_00c57830(local_1d0);
  uVar4 = FUN_008ec660(param_1,0x40800000,0x3fc00000,0x41a00000,0x41a00000,0x78,10,0);
  *(undefined4 *)(param_1 + 0x764) = uVar4;
  FUN_008e6d00();
  FUN_008e1c70();
  local_1f0 = FUN_00de3850(0,"_col.hkx",0);
  iVar3 = FUN_00dd3500(0x3c,&DAT_01b7bd48);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = RigidBodyCollection::RigidBodyCollection_2();
  }
  *(int *)(param_1 + 0x7b0) = iVar3;
  if (iVar3 != 0) {
    local_1ec = *(undefined4 *)(param_1 + 0x4f0);
    uVar4 = FUN_00de3ee0(local_1f0);
    uVar9 = FUN_00de3cf0(local_1f0);
    iVar3 = FUN_008f6410(local_1ec,uVar9,uVar4);
    if (iVar3 != 0) {
      FUN_008f2cd0(0);
      (**(code **)(**(int **)(param_1 + 0x7b0) + 0x108))(8);
      puVar6 = (undefined4 *)FUN_009f8b60();
      (**(code **)(**(int **)(param_1 + 0x7b0) + 0x114))(*puVar6);
      FUN_008f1600(0x80000000);
      FUN_008f1600(0x20);
      FUN_008f1600(0x40);
      FUN_008f18c0(0x10000);
      if (*(int *)(param_1 + 0xe94) != 0) {
        FUN_008f1600(8);
      }
    }
  }
  lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>_2(0x40);
  if ((*(int **)(param_1 + 0x7b0) != (int *)0x0) &&
     (iVar3 = (**(code **)(**(int **)(param_1 + 0x7b0) + 8))(), iVar3 != 0)) {
    Behavior::addDefenseCollisionFromRigidBody_2(*(undefined4 *)(param_1 + 0x7b0),2);
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(0,"_001_00");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(0,"_001_01");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(0,"_001_02");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(0,&DAT_0163ebec);
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(0,&DAT_0163ebe4);
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(0,&DAT_0163ebdc);
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(0,&DAT_0163ebd4);
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(0,&DAT_0163ebcc);
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(0,&DAT_0163ebc4);
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(2,&DAT_0163ebbc);
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(2,&DAT_0163ebb4);
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(2,&DAT_0163ebac);
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(0,&DAT_0163eba4);
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(0,&DAT_0163eb9c);
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(1,&DAT_0163eb94);
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(1,&DAT_0163eb8c);
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(1,&DAT_0163eb84);
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(0,&DAT_0163eb7c);
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(0,&DAT_0163eb74);
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(3,&DAT_0163eb6c);
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(3,&DAT_0163eb64);
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(3,&DAT_0163eb5c);
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(4,"_201_Rgass");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(5,"_101_Lgass");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(6,"_301_Bgass");
    FUN_00a93730(1);
  }
  iVar3 = lib::StaticArray<Constraints,32>::StaticArray<Constraints,32>();
  if (iVar3 != 0) {
    if (*(int *)(param_1 + 0xe94) == 0) {
      uVar9 = 0;
      iVar3 = param_1 + 0x1190;
      uVar4 = FUN_00a7c8a0(0);
      FUN_004039a0(0,uVar4,uVar9);
      uVar4 = FUN_00a81330();
      FUN_00e020f0(uVar4);
      if (iVar3 != 0) {
        FUN_00dffb20(iVar3);
      }
      FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),auStack_160);
      uVar9 = 0;
      uVar4 = FUN_00a7c8a0(0);
      FUN_004039a0(1,uVar4,uVar9);
      uVar4 = FUN_00a81330();
      FUN_00e020f0(uVar4);
      if (iVar3 != 0) {
        FUN_00dffb20(iVar3);
      }
      FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),auStack_160);
      FUN_007d5380(0x31,param_1 + 0x1240,0x205);
      FUN_007d5380(0x31,param_1 + 0x12f0,0x105);
      FUN_007d5380(0x31,param_1 + 0x13a0,0x305);
      *(undefined4 *)(param_1 + 0x1920) = 1;
      *(undefined4 *)(param_1 + 0x1924) = 1;
      *(undefined4 *)(param_1 + 0x1928) = 1;
    }
    iVar3 = param_1;
    FUN_00c1cf50(param_1);
    FUN_00c54720(iVar3);
    if (*(int *)(param_1 + 0xe94) != 0) {
      iVar3 = *(int *)(param_1 + 0x588);
      if ((iVar3 != 0) && (*(int *)(iVar3 + 0x34) != 0)) {
        FUN_009f8ae0(*(undefined4 *)(iVar3 + 0x38));
      }
      *(undefined4 *)(param_1 + 0x4e4) = 1;
    }
    if ((*(byte *)(param_1 + 0x4a8) & 1) != 0) {
      FUN_00e01ca0();
      FUN_00e020f0(*(undefined4 *)(param_1 + 0x4f0));
      FUN_00e01340(0x2c100,0x208,auStack_160);
    }
    puVar6 = (undefined4 *)FUN_00dd3580(0x90,&DAT_01b7bd48);
    *(undefined4 **)(param_1 + 0xd80) = puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      puVar7 = &DAT_01883268;
      for (iVar3 = 0x24; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar6 = puVar6 + 1;
      }
      lib::AllocatedArray<cEnemySubState>::AllocatedArray<cEnemySubState>
                (*(undefined4 *)(param_1 + 0x4f0),3,*(undefined4 *)(param_1 + 0xd80),4);
      FUN_00a88b50(1,0);
    }
    if ((*(byte *)(param_1 + 0x4a8) & 2) != 0) {
      FUN_00a88b50(4,0);
    }
    local_1ec = *(undefined4 *)(param_1 + 0x4b0);
    FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e272b0(local_1ec,0x20100);
    *(undefined4 *)(param_1 + 0x82c) = 3;
    *(undefined1 *)(param_1 + 0x1e30) = 0;
    FUN_00a82790(*(undefined4 *)(param_1 + 0x4f0),3,0);
    *(uint *)(param_1 + 0xf30) = *(uint *)(param_1 + 0xf30) | 2;
    FUN_00a82840(0x3f060a92,0xbe32b8c2,0x3f000000,0x3ae4c388,0x3d567750);
    FUN_00a82790(*(undefined4 *)(param_1 + 0x4f0),2,0);
    *(uint *)(param_1 + 0x1000) = *(uint *)(param_1 + 0x1000) | 2;
    FUN_00a82870(0x3f060a92,0xbf060a92,0x3f000000,0x3ae4c388,0x3d567750);
    *(undefined1 *)(param_1 + 0x10d0) = 0;
    FUN_00a82790(*(undefined4 *)(param_1 + 0x4f0),4,0);
    *(uint *)(param_1 + 0x1e40) = *(uint *)(param_1 + 0x1e40) | 2;
    FUN_00a82870(0x3f860a92,0xbf860a92,0x3e99999a,0x3ae4c388,0x3d0efa35);
    FUN_00a82790(*(undefined4 *)(param_1 + 0x4f0),8,0);
    *(uint *)(param_1 + 0x1fe0) = *(uint *)(param_1 + 0x1fe0) | 2;
    FUN_00a82840(0x3f5f66f3,0xbfb2b8c2,0x3e99999a,0x3ae4c388,0x3d0efa35);
    *(undefined4 *)(param_1 + 0x78c) = 0;
    uVar4 = FUN_00dd3580(0x20,&DAT_01b7bd48);
    *(undefined4 *)(param_1 + 0x788) = uVar4;
    FUN_00a8c720(0x200,0x100);
    FUN_00a8c720(0x201,0x101);
    FUN_00a8c720(0x202,0x102);
    FUN_00a8c720(0x203,0x103);
    FUN_00a8c720(0x204,0x104);
    FUN_00a8c720(0x205,0x105);
    FUN_00a8c720(0x502,0x500);
    FUN_00a8c720(0x503,0x501);
    FUN_00a95e20(*(undefined4 *)(param_1 + 0x788),*(undefined4 *)(param_1 + 0x78c));
    if (*(int *)(param_1 + 0x4e4) == 0) {
      uVar4 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xeb4) = uVar4;
      iVar3 = FUN_00a8cab0();
      if ((((iVar3 == 0x10000) || (iVar3 = FUN_00a8cab0(), iVar3 == 0x10009)) ||
          (iVar3 = FUN_00a8cab0(), iVar3 == 0x1000a)) || (iVar3 = FUN_00a8cab0(), iVar3 == 0x1000d))
      {
        uVar4 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0x1cbc) = uVar4;
      }
      if (*(int *)(param_1 + 0x1c30) != 0) {
        *(undefined4 *)(param_1 + 0x1cbc) = 0x1000b;
      }
      *(undefined4 *)(param_1 + 0xeb8) = *(undefined4 *)(param_1 + 0xea0);
      FUN_007cb240();
      FUN_00a8caf0(0x10000,0,0,0);
      *(undefined4 *)(param_1 + 0xea0) = 0;
      FUN_00a962d0(0,0);
      *(undefined4 *)(param_1 + 0xf00) = 0;
      return 1;
    }
    return 1;
  }
  return 0;
}

// 007D9F90  FUN_007d9f90  size=122  [between]
void __fastcall FUN_007d9f90(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x618);
  if (iVar1 < 0x50001) {
    switch(iVar1) {
    case 0x10000:
      FUN_007d4fd0();
      return;
    case 0x10006:
      FUN_007d1520();
      return;
    case 0x10009:
      FUN_007d1d20();
      return;
    case 0x1000a:
      FUN_007d1f90();
      return;
    case 0x1000c:
      FUN_007d42a0();
      return;
    }
  }
  else if (iVar1 < 0x60001) {
    if (iVar1 == 0x60000) {
      FUN_007cf250();
      return;
    }
    switch(iVar1) {
    case 0x50003:
      FUN_007cb8b0();
      return;
    }
  }
  else if (((iVar1 < 0x70001) && (iVar1 != 0x70000)) && (iVar1 == 0x60001)) {
    FUN_007cf590();
    return;
  }
  return;
}

// 007DA050  FUN_007da050  size=327  [between]
void __fastcall FUN_007da050(float param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  float fStack_4;
  
  iVar2 = *(int *)((int)param_1 + 0x618);
  if (iVar2 < 0x50001) {
    if (iVar2 == 0x50000) {
      FUN_007d5490();
      return;
    }
    switch(iVar2) {
    case 0x10000:
      FUN_007cac40();
      return;
    case 0x10001:
    case 0x10002:
      FUN_007d0cb0();
      return;
    case 0x10003:
    case 0x10004:
      FUN_007d0fe0();
      return;
    case 0x10005:
      FUN_007d1300();
      return;
    case 0x10006:
      FUN_007d1710();
      return;
    case 0x10007:
      FUN_007d19f0();
      return;
    case 0x10008:
      FUN_007d1a80();
      return;
    case 0x10009:
      FUN_007cae70();
      return;
    case 0x1000a:
      FUN_007caf80();
      return;
    case 0x1000b:
      FUN_007cb020();
      return;
    case 0x1000c:
      FUN_007d43a0();
      return;
    case 0x1000d:
      FUN_007d0630();
      return;
    case 0x1000e:
      goto LAB_007d3e00;
    default:
      goto switchD_007da06d_default;
    }
  }
  if (iVar2 < 0x60001) {
    if (iVar2 == 0x60000) {
      FUN_007cf330();
      return;
    }
    switch(iVar2) {
    case 0x50001:
      FUN_007cedc0();
      return;
    case 0x50002:
      FUN_007d6490();
      return;
    case 0x50003:
      FUN_007d5bc0();
      return;
    case 0x50004:
      FUN_007cef20();
      return;
    }
  }
  else if (iVar2 < 0x70001) {
    if (iVar2 == 0x70000) {
      FUN_007cf830();
      return;
    }
    if (iVar2 == 0x60001) {
      FUN_007cf670();
      return;
    }
    if (iVar2 == 0x60002) {
      FUN_007cfd80();
      return;
    }
  }
  else if (iVar2 < 0x80001) {
    if (iVar2 == 0x80000) {
      FUN_007d8640();
      return;
    }
    switch(iVar2) {
    case 0x70001:
      FUN_007cfa80();
      return;
    case 0x70002:
      FUN_007d7700();
      return;
    case 0x70003:
      FUN_007d7960();
      return;
    case 0x70004:
      FUN_007d7d60();
      return;
    case 0x70005:
      FUN_007d8150();
      return;
    case 0x70006:
      FUN_007cb9b0();
      return;
    case 0x70007:
      FUN_007cbc10();
      return;
    case 0x70008:
      FUN_007cbe50();
      return;
    case 0x70009:
      FUN_007cc090();
      return;
    }
  }
  else if ((iVar2 < 0x90001) && (iVar2 != 0x90000)) {
    switch(iVar2) {
    case 0x80001:
      FUN_007cff00();
      return;
    case 0x80002:
      FUN_007d88e0();
      return;
    case 0x80003:
      FUN_007d8a70();
      return;
    case 0x80004:
      FUN_007d8c00();
      return;
    case 0x80005:
      FUN_007d8d90();
      return;
    }
  }
switchD_007da06d_default:
  return;
LAB_007d3e00:
  *(undefined4 *)((int)param_1 + 0x1d54) = 0;
  if (*(int *)((int)param_1 + 0x61c) != 0) {
    fStack_4 = param_1;
    if (*(int *)((int)param_1 + 0x61c) != 1) {
      return;
    }
    goto LAB_007d4180;
  }
  fStack_4 = 10000.0;
  *(undefined4 *)((int)param_1 + 0x1cb4) = 0x3f800000;
  uVar3 = FUN_007cb090(&fStack_4,1);
  switch(uVar3) {
  case 0:
    if (fStack_4 < 5.0) goto LAB_007d3e6c;
    fVar1 = *(float *)((int)param_1 + 0xa9c);
    if (NAN(fVar1) || 0.0 < fVar1 == (fVar1 == 0.0)) {
      uVar3 = 0x8000040;
    }
    else {
      uVar3 = 0x8000000;
    }
    FUN_00aa4080(0x19,0,0x3e4ccccd,0x3f000000,uVar3,0xbf800000,0x3f800000);
    *(undefined4 *)((int)param_1 + 0xea4) = 3;
LAB_007d3f6b:
    if (fStack_4 < 10.0) {
      *(float *)((int)param_1 + 0x1cb4) = fStack_4 * 0.1;
    }
    break;
  case 1:
    if (*(int *)((int)param_1 + 0x4e4) == 0) {
      uVar3 = FUN_00a8cab0();
      *(undefined4 *)((int)param_1 + 0xeb4) = uVar3;
      iVar2 = FUN_00a8cab0();
      if (((iVar2 == 0x10000) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x10009)) ||
         ((iVar2 = FUN_00a8cab0(), iVar2 == 0x1000a || (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000d))))
      {
        uVar3 = FUN_00a8cab0();
        *(undefined4 *)((int)param_1 + 0x1cbc) = uVar3;
      }
      if (*(int *)((int)param_1 + 0x1c30) != 0) {
        *(undefined4 *)((int)param_1 + 0x1cbc) = 0x1000b;
      }
      *(undefined4 *)((int)param_1 + 0xeb8) = *(undefined4 *)((int)param_1 + 0xea0);
      goto LAB_007d3ee4;
    }
    break;
  case 2:
    if ((5.0 <= fStack_4) && (0.0 <= *(float *)((int)param_1 + 0xa9c))) {
      FUN_00aa4080(0x1a,0,0x3e4ccccd,0x3f000000,0x8000000,0xbf800000,0x3f800000);
      *(undefined4 *)((int)param_1 + 0xea4) = 1;
      goto LAB_007d3f6b;
    }
    if (*(int *)((int)param_1 + 0x4e4) == 0) {
      uVar3 = FUN_00a8cab0();
      *(undefined4 *)((int)param_1 + 0xeb4) = uVar3;
      iVar2 = FUN_00a8cab0();
      if ((((iVar2 == 0x10000) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x10009)) ||
          (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000a)) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000d))
      {
        uVar3 = FUN_00a8cab0();
        *(undefined4 *)((int)param_1 + 0x1cbc) = uVar3;
      }
      if (*(int *)((int)param_1 + 0x1c30) != 0) {
        *(undefined4 *)((int)param_1 + 0x1cbc) = 0x1000b;
      }
      *(undefined4 *)((int)param_1 + 0xeb8) = *(undefined4 *)((int)param_1 + 0xea0);
      goto LAB_007d3ee4;
    }
    break;
  case 3:
    if ((5.0 <= fStack_4) && (*(float *)((int)param_1 + 0xa9c) <= 0.0)) {
      FUN_00aa4080(0x1a,0,0x3e4ccccd,0x3f000000,0x8000040,0xbf800000,0x3f800000);
      *(undefined4 *)((int)param_1 + 0xea4) = 2;
      goto LAB_007d3f6b;
    }
LAB_007d3e6c:
    if (*(int *)((int)param_1 + 0x4e4) == 0) {
      uVar3 = FUN_00a8cab0();
      *(undefined4 *)((int)param_1 + 0xeb4) = uVar3;
      iVar2 = FUN_00a8cab0();
      if (((iVar2 == 0x10000) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x10009)) ||
         ((iVar2 = FUN_00a8cab0(), iVar2 == 0x1000a || (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000d))))
      {
        uVar3 = FUN_00a8cab0();
        *(undefined4 *)((int)param_1 + 0x1cbc) = uVar3;
      }
      if (*(int *)((int)param_1 + 0x1c30) != 0) {
        *(undefined4 *)((int)param_1 + 0x1cbc) = 0x1000b;
      }
      *(undefined4 *)((int)param_1 + 0xeb8) = *(undefined4 *)((int)param_1 + 0xea0);
LAB_007d3ee4:
      FUN_007cb240();
      FUN_00a8caf0(0x50002,0,0,0);
      *(undefined4 *)((int)param_1 + 0xea0) = 0;
      FUN_00a962d0(0,0);
      *(undefined4 *)((int)param_1 + 0xf00) = 0;
    }
  }
  *(undefined2 *)((int)param_1 + 0x1b66) = 0;
  if (*(int *)((int)param_1 + 0x618) != 0x50002) {
    *(int *)((int)param_1 + 0x61c) = *(int *)((int)param_1 + 0x61c) + 1;
  }
LAB_007d4180:
  FUN_00ac80a0(*(undefined4 *)((int)param_1 + 0x1cb4),0x3f800000);
  if (((*(float *)((int)param_1 + 0xa8c) <= *(float *)((int)param_1 + 0x1c84)) &&
      (*(float *)((int)param_1 + 0xaa0) < 0.5235988)) && (*(short *)((int)param_1 + 0x1b5c) != 0)) {
    *(undefined4 *)((int)param_1 + 0x20b0) = 1;
  }
  iVar2 = FUN_00a94ce0(0);
  if ((iVar2 != 0) && (*(int *)((int)param_1 + 0x4e4) == 0)) {
    uVar3 = FUN_00a8cab0();
    *(undefined4 *)((int)param_1 + 0xeb4) = uVar3;
    iVar2 = FUN_00a8cab0();
    if (((iVar2 == 0x10000) ||
        ((iVar2 = FUN_00a8cab0(), iVar2 == 0x10009 || (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000a))))
       || (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000d)) {
      uVar3 = FUN_00a8cab0();
      *(undefined4 *)((int)param_1 + 0x1cbc) = uVar3;
    }
    if (*(int *)((int)param_1 + 0x1c30) != 0) {
      *(undefined4 *)((int)param_1 + 0x1cbc) = 0x1000b;
    }
    *(undefined4 *)((int)param_1 + 0xeb8) = *(undefined4 *)((int)param_1 + 0xea0);
    FUN_007cb240();
    FUN_00a8caf0(0x1000a,0,0,0);
    *(undefined4 *)((int)param_1 + 0xea0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)((int)param_1 + 0xf00) = 0;
  }
  return;
}

// 007DA220  FUN_007da220  size=376  [between]
void __fastcall FUN_007da220(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined1 local_160 [348];
  
  *(byte *)(param_1 + 0xe9c) = *(byte *)(param_1 + 0xe9c) | 1;
  FUN_00ac9420("_EFD01");
  FUN_00ac9420("_EFD05");
  if (*(int *)(param_1 + 0x1b44) != 0) {
    FUN_00ac9420("_EFD08");
  }
  if (*(int *)(param_1 + 0x1b48) != 0) {
    FUN_00ac9420("_EFD06");
  }
  if (*(int *)(param_1 + 0x1b4c) != 0) {
    FUN_00ac9420("_EFD07");
  }
  FUN_00ac8dd0("_Main_Body",1);
  FUN_00ac8dd0("_Center_Arm",1);
  if (*(int *)(param_1 + 0x192c) == 0) {
    uVar2 = 0;
    uVar1 = FUN_00a7c8a0(0);
    FUN_004039a0(0x191,uVar1,uVar2);
    uVar1 = FUN_00a81330();
    FUN_00e020f0(uVar1);
    if (param_1 + 0x1710 != 0) {
      FUN_00dffb20(param_1 + 0x1710);
    }
    FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),local_160);
    *(undefined4 *)(param_1 + 0x192c) = 1;
  }
  if (*(int *)(param_1 + 0xe94) == 0) {
    local_170 = 0;
    local_16c = 0;
    local_168 = 0;
    local_180 = 0;
    local_17c = 0;
    local_178 = 0;
    uVar1 = FUN_0093c1f0((int)*(char *)(param_1 + 0x1aeb),*(undefined4 *)(param_1 + 0x4f0),4,1,
                         &local_180,&local_170,0x41200000,0x3f000000,0xbf800000);
    FUN_00c52770(uVar1,0x40a00000);
  }
  return;
}

// 007DA3A0  FUN_007da3a0  size=160  [between]
void __fastcall FUN_007da3a0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 local_160 [348];
  
  *(byte *)(param_1 + 0xe9c) = *(byte *)(param_1 + 0xe9c) | 2;
  FUN_00ac9420("_EFD03");
  FUN_00ac8dd0("_R_Leg",1);
  if (*(int *)(param_1 + 0x192c) == 0) {
    uVar2 = 0;
    uVar1 = FUN_00a7c8a0(0);
    FUN_004039a0(0x191,uVar1,uVar2);
    uVar1 = FUN_00a81330();
    FUN_00e020f0(uVar1);
    if (param_1 + 0x1710 != 0) {
      FUN_00dffb20(param_1 + 0x1710);
    }
    FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),local_160);
    *(undefined4 *)(param_1 + 0x192c) = 1;
  }
  return;
}

// 007DA440  FUN_007da440  size=160  [between]
void __fastcall FUN_007da440(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 local_160 [348];
  
  *(byte *)(param_1 + 0xe9c) = *(byte *)(param_1 + 0xe9c) | 4;
  FUN_00ac9420("_EFD02");
  FUN_00ac8dd0("_L_Leg",1);
  if (*(int *)(param_1 + 0x192c) == 0) {
    uVar2 = 0;
    uVar1 = FUN_00a7c8a0(0);
    FUN_004039a0(0x191,uVar1,uVar2);
    uVar1 = FUN_00a81330();
    FUN_00e020f0(uVar1);
    if (param_1 + 0x1710 != 0) {
      FUN_00dffb20(param_1 + 0x1710);
    }
    FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),local_160);
    *(undefined4 *)(param_1 + 0x192c) = 1;
  }
  return;
}

// 007DA4E0  FUN_007da4e0  size=160  [between]
void __fastcall FUN_007da4e0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 local_160 [348];
  
  *(byte *)(param_1 + 0xe9c) = *(byte *)(param_1 + 0xe9c) | 8;
  FUN_00ac9420("_EFD04");
  FUN_00ac8dd0("_B_Leg",1);
  if (*(int *)(param_1 + 0x192c) == 0) {
    uVar2 = 0;
    uVar1 = FUN_00a7c8a0(0);
    FUN_004039a0(0x191,uVar1,uVar2);
    uVar1 = FUN_00a81330();
    FUN_00e020f0(uVar1);
    if (param_1 + 0x1710 != 0) {
      FUN_00dffb20(param_1 + 0x1710);
    }
    FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),local_160);
    *(undefined4 *)(param_1 + 0x192c) = 1;
  }
  return;
}

// 007DA580  FUN_007da580  size=96  [between]
void __thiscall FUN_007da580(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 local_160 [324];
  undefined4 local_1c;
  
  uVar2 = 0;
  uVar1 = FUN_00a7c8a0(0);
  FUN_004039a0(param_2,uVar1,uVar2);
  local_1c = param_3;
  FUN_00e03080(*(undefined4 *)(param_1 + 0x4f0),0);
  FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),local_160);
  return;
}

// 007DA5E0  FUN_007da5e0  size=3503  [between]
/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_007da5e0(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  float local_280 [4];
  undefined4 local_270;
  undefined4 local_26c;
  undefined4 local_268;
  undefined4 uStack_25c;
  int iStack_258;
  int iStack_254;
  int iStack_250;
  undefined1 uStack_24c;
  undefined1 uStack_24b;
  int iStack_248;
  uint uStack_1d0;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_134;
  undefined1 auStack_12c [12];
  undefined1 local_120 [284];
  
  switchD_0080dbae::default();
  if (param_1[0x6d1] != 0) {
    iVar8 = param_1[0x6ce];
    if (iVar8 < 1) {
      if ((iVar8 == 0) && (param_1[0x6d4] == 0)) {
        local_280[0] = -0.6;
        local_280[1] = 0.1;
        local_280[2] = 0.0;
        FUN_007d5400(0x12,param_1 + 0x514,0x201,local_280);
        FUN_00e01ca0();
        uVar7 = FUN_00a81330();
        FUN_00e020f0(uVar7);
        FUN_00dffbc0(0x201);
        FUN_00dffbd0(local_280);
        FUN_00e01340(0x2c100,0x13,local_120);
        param_1[0x6d4] = 1;
        iVar8 = FUN_00e5e0c0("em0100_se_fueltank_brake",param_1,0xffffffff,0);
        param_1[0x712] = iVar8;
      }
      else if (iVar8 < 0) {
        local_270 = 0xbf19999a;
        local_26c = 0x3dcccccd;
        local_268 = 0;
        (**(code **)(param_1[0x514] + 8))(0x3f800000,0,0);
        param_1[0x6d4] = 0;
        FUN_00e01ca0();
        uVar7 = FUN_00a81330();
        FUN_00e020f0(uVar7);
        FUN_00dffbc0(0x201);
        FUN_00dffbd0(local_280 + 1);
        FUN_00dfffd0(&stack0xfffffd74);
        FUN_00e01340(0x2c100,5,auStack_12c);
        FUN_00e5ca30(param_1[0x712],0x40400000);
        FUN_00e5e0c0("em0100_se_fueltank_exp",param_1,0xffffffff,0);
        iVar8 = FUN_00a12210(0x202);
        iVar9 = FUN_00a12210(0x201);
        fVar1 = *(float *)(iVar8 + 0x40);
        fVar2 = *(float *)(iVar9 + 0x40);
        fVar3 = *(float *)(iVar8 + 0x44);
        fVar4 = *(float *)(iVar9 + 0x44);
        fVar5 = *(float *)(iVar8 + 0x48);
        fVar6 = *(float *)(iVar9 + 0x48);
        local_280[0] = (*(float *)(iVar8 + 0x4c) + *(float *)(iVar9 + 0x4c)) * 0.5;
        FUN_00410710();
        iStack_258 = param_1[0x715];
        uStack_24c = (undefined1)param_1[0x718];
        uStack_14c = 0x40a00000;
        iStack_250 = param_1[0x717];
        uStack_1d0 = uStack_1d0 | 0x100000;
        uStack_148 = 0x3f000000;
        iStack_254 = param_1[0x716];
        uStack_144 = 0x3f800000;
        uStack_13c = 0x3f800000;
        iStack_248 = param_1[0x13c];
        local_26c = 1;
        uStack_25c = 0x115;
        uStack_24b = 10;
        uStack_140 = 1;
        uVar7 = FUN_00a7c7f0();
        FUN_00a7c960(uVar7);
        fStack_150 = local_280[0];
        fStack_15c = (fVar1 + fVar2) * 0.5;
        fStack_158 = (fVar3 + fVar4) * 0.5 + 0.5;
        fStack_154 = (fVar5 + fVar6) * 0.5;
        uStack_134 = FUN_009f8b40();
        Behavior::createAttackImpactWave(&local_26c);
        param_1[0x6d1] = 0;
        (**(code **)(*(int *)param_1[0x1ec] + 0xe0))(0,"_201_Rgass",0,0);
        FUN_00ac94e0("R_LegGasTank");
        param_1[0x6c5] = 0;
        FUN_007da3a0();
        param_1[0x679] = 1;
        iVar8 = FUN_007cb2a0();
        if ((iVar8 != 0) && (param_1[0x139] == 0)) {
          iVar8 = FUN_00a8cab0();
          param_1[0x3ad] = iVar8;
          iVar8 = FUN_00a8cab0();
          if ((iVar8 == 0x10000) ||
             (((iVar8 = FUN_00a8cab0(), iVar8 == 0x10009 ||
               (iVar8 = FUN_00a8cab0(), iVar8 == 0x1000a)) ||
              (iVar8 = FUN_00a8cab0(), iVar8 == 0x1000d)))) {
            iVar8 = FUN_00a8cab0();
            param_1[0x72f] = iVar8;
          }
          if (param_1[0x70c] != 0) {
            param_1[0x72f] = 0x1000b;
          }
          param_1[0x3ae] = param_1[0x3a8];
          FUN_007cb240();
          FUN_00a8caf0(0x60000,0,0,0);
          param_1[0x3a8] = 0;
          FUN_00a962d0(0,0);
          param_1[0x3c0] = 0;
        }
        *(short *)(param_1 + 0x6d7) = (short)param_1[0x6d7] + -1;
        (**(code **)(*param_1 + 0x30c))(param_1[0x6d8],0);
      }
    }
  }
  if (param_1[0x6d2] != 0) {
    iVar8 = param_1[0x6cf];
    if (iVar8 < 1) {
      if ((iVar8 == 0) && (param_1[0x6d5] == 0)) {
        local_280[0] = 0.6;
        local_280[1] = 0.1;
        local_280[2] = 0.0;
        FUN_007d5400(0x12,param_1 + 0x540,0x101,local_280);
        FUN_00e01ca0();
        uVar7 = FUN_00a81330();
        FUN_00e020f0(uVar7);
        FUN_00dffbc0(0x101);
        FUN_00dffbd0(local_280);
        FUN_00e01340(0x2c100,0x13,local_120);
        param_1[0x6d5] = 1;
        iVar8 = FUN_00e5e0c0("em0100_se_fueltank_brake",param_1,0xffffffff,0);
        param_1[0x713] = iVar8;
      }
      else if (iVar8 < 0) {
        local_270 = 0x3f19999a;
        local_26c = 0x3dcccccd;
        local_268 = 0;
        (**(code **)(param_1[0x540] + 8))(0x3f800000,0,0);
        param_1[0x6d5] = 0;
        FUN_00e01ca0();
        uVar7 = FUN_00a81330();
        FUN_00e020f0(uVar7);
        FUN_00dffbc0(0x101);
        FUN_00dffbd0(local_280 + 1);
        FUN_00e01340(0x2c100,5,auStack_12c);
        FUN_00e5ca30(param_1[0x713],0x40400000);
        FUN_00e5e0c0("em0100_se_fueltank_exp",param_1,0xffffffff,0);
        iVar8 = FUN_00a12210(0x102);
        iVar9 = FUN_00a12210(0x101);
        fVar1 = *(float *)(iVar8 + 0x40);
        fVar2 = *(float *)(iVar9 + 0x40);
        fVar3 = *(float *)(iVar9 + 0x44);
        fVar4 = *(float *)(iVar8 + 0x44);
        fVar5 = *(float *)(iVar9 + 0x48);
        fVar6 = *(float *)(iVar8 + 0x48);
        local_280[0] = (*(float *)(iVar9 + 0x4c) + *(float *)(iVar8 + 0x4c)) * 0.5;
        FUN_00410710();
        iStack_258 = param_1[0x715];
        local_26c = 1;
        uStack_25c = 0x115;
        iStack_250 = param_1[0x717];
        uStack_24c = (undefined1)param_1[0x718];
        uStack_14c = 0x40a00000;
        uStack_1d0 = uStack_1d0 | 0x100000;
        uStack_148 = 0x3f000000;
        iStack_254 = param_1[0x716];
        uStack_144 = 0x3f800000;
        iStack_248 = param_1[0x13c];
        uStack_13c = 0x3f800000;
        uStack_24b = 10;
        uStack_140 = 1;
        uVar7 = FUN_00a7c7f0();
        FUN_00a7c960(uVar7);
        fStack_150 = local_280[0];
        fStack_15c = (fVar1 + fVar2) * 0.5;
        fStack_158 = (fVar3 + fVar4) * 0.5 + 0.5;
        fStack_154 = (fVar5 + fVar6) * 0.5;
        uStack_134 = FUN_009f8b40();
        Behavior::createAttackImpactWave(&local_26c);
        param_1[0x6d2] = 0;
        (**(code **)(*(int *)param_1[0x1ec] + 0xe0))(0,"_101_Lgass",0,0);
        FUN_00ac94e0("L_LegGasTank");
        param_1[0x6c6] = 0;
        FUN_007da440();
        param_1[0x679] = 2;
        iVar8 = FUN_007cb2a0();
        if ((iVar8 != 0) && (param_1[0x139] == 0)) {
          iVar8 = FUN_00a8cab0();
          param_1[0x3ad] = iVar8;
          iVar8 = FUN_00a8cab0();
          if ((iVar8 == 0x10000) ||
             (((iVar8 = FUN_00a8cab0(), iVar8 == 0x10009 ||
               (iVar8 = FUN_00a8cab0(), iVar8 == 0x1000a)) ||
              (iVar8 = FUN_00a8cab0(), iVar8 == 0x1000d)))) {
            iVar8 = FUN_00a8cab0();
            param_1[0x72f] = iVar8;
          }
          if (param_1[0x70c] != 0) {
            param_1[0x72f] = 0x1000b;
          }
          param_1[0x3ae] = param_1[0x3a8];
          FUN_007cb240();
          FUN_00a8caf0(0x60000,0,0,0);
          param_1[0x3a8] = 0;
          FUN_00a962d0(0,0);
          param_1[0x3c0] = 0;
        }
        *(short *)(param_1 + 0x6d7) = (short)param_1[0x6d7] + -1;
        (**(code **)(*param_1 + 0x30c))(param_1[0x6d8],0);
      }
    }
  }
  if (param_1[0x6d3] != 0) {
    iVar8 = param_1[0x6d0];
    if (iVar8 < 1) {
      if ((iVar8 == 0) && (param_1[0x6d6] == 0)) {
        local_280[0] = 0.0;
        local_280[1] = 0.1;
        local_280[2] = -0.6;
        FUN_007d5400(0x12,param_1 + 0x56c,0x301,local_280);
        FUN_00e01ca0();
        uVar7 = FUN_00a81330();
        FUN_00e020f0(uVar7);
        FUN_00dffbc0(0x301);
        FUN_00dffbd0(local_280);
        FUN_00e01340(0x2c100,0x13,local_120);
        param_1[0x6d6] = 1;
        iVar8 = FUN_00e5e0c0("em0100_se_fueltank_brake",param_1,0xffffffff,0);
        param_1[0x714] = iVar8;
      }
      else if (iVar8 < 0) {
        local_270 = 0;
        local_26c = 0x3dcccccd;
        local_268 = 0xbf19999a;
        (**(code **)(param_1[0x56c] + 8))(0x3f800000,0,0);
        param_1[0x6d6] = 0;
        FUN_00e01ca0();
        uVar7 = FUN_00a81330();
        FUN_00e020f0(uVar7);
        FUN_00dffbc0(0x301);
        FUN_00dffbd0(local_280 + 1);
        FUN_00e01340(0x2c100,5,auStack_12c);
        FUN_00e5ca30(param_1[0x714],0x40400000);
        FUN_00e5e0c0("em0100_se_fueltank_exp",param_1,0xffffffff,0);
        iVar8 = FUN_00a12210(0x302);
        iVar9 = FUN_00a12210(0x301);
        fVar1 = *(float *)(iVar8 + 0x40);
        fVar2 = *(float *)(iVar9 + 0x40);
        fVar3 = *(float *)(iVar9 + 0x44);
        fVar4 = *(float *)(iVar8 + 0x44);
        fVar5 = *(float *)(iVar9 + 0x48);
        fVar6 = *(float *)(iVar8 + 0x48);
        local_280[0] = (*(float *)(iVar9 + 0x4c) + *(float *)(iVar8 + 0x4c)) * 0.5;
        FUN_00410710();
        local_26c = 1;
        uStack_25c = 0x115;
        iStack_258 = param_1[0x715];
        iStack_250 = param_1[0x717];
        uStack_14c = 0x40a00000;
        uStack_1d0 = uStack_1d0 | 0x100000;
        uStack_148 = 0x3f000000;
        uStack_24c = (undefined1)param_1[0x718];
        uStack_144 = 0x3f800000;
        iStack_254 = param_1[0x716];
        uStack_13c = 0x3f800000;
        iStack_248 = param_1[0x13c];
        uStack_24b = 10;
        uStack_140 = 1;
        uVar7 = FUN_00a7c7f0();
        FUN_00a7c960(uVar7);
        fStack_150 = local_280[0];
        fStack_15c = (fVar1 + fVar2) * 0.5;
        fStack_158 = (fVar3 + fVar4) * 0.5 + 0.5;
        fStack_154 = (fVar5 + fVar6) * 0.5;
        uStack_134 = FUN_009f8b40();
        Behavior::createAttackImpactWave(&local_26c);
        param_1[0x6d3] = 0;
        (**(code **)(*(int *)param_1[0x1ec] + 0xe0))(0,"_301_Bgass",0,0);
        FUN_00ac94e0("B_LegGasTank");
        param_1[0x6c7] = 0;
        FUN_007da4e0();
        param_1[0x679] = 3;
        iVar8 = FUN_007cb2a0();
        if ((iVar8 != 0) && (param_1[0x139] == 0)) {
          iVar8 = FUN_00a8cab0();
          param_1[0x3ad] = iVar8;
          iVar8 = FUN_00a8cab0();
          if ((iVar8 == 0x10000) ||
             (((iVar8 = FUN_00a8cab0(), iVar8 == 0x10009 ||
               (iVar8 = FUN_00a8cab0(), iVar8 == 0x1000a)) ||
              (iVar8 = FUN_00a8cab0(), iVar8 == 0x1000d)))) {
            iVar8 = FUN_00a8cab0();
            param_1[0x72f] = iVar8;
          }
          if (param_1[0x70c] != 0) {
            param_1[0x72f] = 0x1000b;
          }
          param_1[0x3ae] = param_1[0x3a8];
          FUN_007cb240();
          FUN_00a8caf0(0x60000,0,0,0);
          param_1[0x3a8] = 0;
          FUN_00a962d0(0,0);
          param_1[0x3c0] = 0;
        }
        *(short *)(param_1 + 0x6d7) = (short)param_1[0x6d7] + -1;
        (**(code **)(*param_1 + 0x30c))(param_1[0x6d8],0);
      }
    }
  }
  if (((param_1[0x139] == 0) && (iVar8 = FUN_00a8cab0(), iVar8 != 0x90000)) &&
     ((iVar8 = FUN_00a8cab0(), iVar8 != 0x90001 && (iVar8 = FUN_00a8cab0(), iVar8 != 0x90002)))) {
    if ((((short)param_1[0x6d7] == 0) && (iVar8 = FUN_007cb2a0(), iVar8 != 0)) &&
       (param_1[0x139] == 0)) {
      iVar8 = FUN_00a8cab0();
      param_1[0x3ad] = iVar8;
      iVar8 = FUN_00a8cab0();
      if ((((iVar8 == 0x10000) || (iVar8 = FUN_00a8cab0(), iVar8 == 0x10009)) ||
          (iVar8 = FUN_00a8cab0(), iVar8 == 0x1000a)) || (iVar8 = FUN_00a8cab0(), iVar8 == 0x1000d))
      {
        iVar8 = FUN_00a8cab0();
        param_1[0x72f] = iVar8;
      }
      if (param_1[0x70c] != 0) {
        param_1[0x72f] = 0x1000b;
      }
      param_1[0x3ae] = param_1[0x3a8];
      FUN_007cb240();
      FUN_00a8caf0(0x70000,0,0,0);
      param_1[0x3a8] = 0;
      FUN_00a962d0(0,0);
      param_1[0x3c0] = 0;
    }
    if (param_1[0x21c] < 1) {
      iVar8 = FUN_00a8cab0();
      FUN_007cd550(0x80000,0,0,0,0);
      param_1[0x139] = 1;
      if (((((iVar8 == 0x70000) || (iVar8 == 0x70003)) ||
           ((iVar8 == 0x70004 || ((iVar8 == 0x70005 || (iVar8 == 0x70006)))))) || (iVar8 == 0x70007)
          ) || ((iVar8 == 0x70008 || (iVar8 == 0x70009)))) {
        param_1[0x187] = 2;
      }
    }
  }
  return;
}

// 007DB390  FUN_007db390  size=106  [between]
void __fastcall FUN_007db390(int param_1)

{
  *(undefined4 *)(param_1 + 0x1b20) = 1;
  if (*(int *)(param_1 + 0x1b24) == 0) {
    *(undefined4 *)(param_1 + 0x1b24) = 1;
    FUN_007da220();
  }
  if (*(int *)(param_1 + 0x1b28) == 0) {
    *(undefined4 *)(param_1 + 0x1b28) = 1;
    FUN_007da3a0();
  }
  if (*(int *)(param_1 + 0x1b2c) == 0) {
    *(undefined4 *)(param_1 + 0x1b2c) = 1;
    FUN_007da440();
  }
  if (*(int *)(param_1 + 0x1b30) == 0) {
    *(undefined4 *)(param_1 + 0x1b30) = 1;
    FUN_007da4e0();
    return;
  }
  return;
}

// 007DB400  Emc100::vf334  size=3106  [class]
void __thiscall Emc100::vf334(int *param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  float10 fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined *puVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int *local_168;
  undefined1 local_160 [348];
  
  EmBaseDLC::vf334(param_2,param_3);
  if (param_3 == (int *)0x0) {
    uVar9 = 0;
  }
  else {
    puVar14 = &DAT_01be9ca0;
    (**(code **)(*param_3 + 4))(&DAT_01be9ca0);
    iVar6 = FUN_00dd6d80(puVar14);
    uVar9 = -(uint)(iVar6 != 0) & (uint)param_3;
  }
  local_168 = (int *)0x0;
  FUN_009fd240();
  FUN_00ac8d40(0);
  if (uVar9 != 0) {
    local_168 = (int *)FUN_00acdea0();
    if (local_168 == (int *)0x0) {
      local_168 = (int *)0x0;
    }
    else {
      puVar14 = &DAT_01b35920;
      (**(code **)(*local_168 + 4))(&DAT_01b35920);
      iVar6 = FUN_00dd6d80(puVar14);
      if (iVar6 == 0) {
        local_168 = (int *)0x0;
      }
      else if (local_168 != param_1) {
        uVar7 = FUN_00a8cae0();
        uVar16 = FUN_00a8cad0(uVar7);
        uVar4 = FUN_00a8cac0(uVar16);
        uVar12 = 0;
        uVar5 = FUN_00a8cab0(0,uVar4);
        FUN_007cd550(uVar5,uVar12,uVar4,uVar16,uVar7);
        uVar15 = 0x3f800000;
        uVar13 = 0xbf800000;
        uVar7 = FUN_00a95d20(0);
        uVar12 = 0x3f800000;
        uVar5 = 0;
        uVar4 = 0;
        uVar16 = FUN_00a95df0(0);
        FUN_00a9e290(uVar16,uVar4,uVar5,uVar12,uVar7,uVar13,uVar15);
        fVar11 = (float10)FUN_00a958c0(0);
        FUN_00a92f90();
        iVar6 = FUN_00e26e90();
        if (iVar6 != 0) {
          Animation::Motion::Unit::setCurrentTime(0,(float)fVar11);
        }
        FUN_0040ac60(local_168 + 0x67c);
        *(char *)(param_1 + 0x3a7) = (char)local_168[0x3a7];
        param_1[0x6c8] = local_168[0x6c8];
        param_1[0x6c9] = local_168[0x6c9];
        param_1[0x6ca] = local_168[0x6ca];
        param_1[0x6cb] = local_168[0x6cb];
        param_1[0x6cc] = local_168[0x6ca];
      }
    }
  }
  iVar6 = FUN_00a7c800();
  piVar2 = *(int **)(iVar6 + 0x330);
  iVar6 = local_168[0x3a6];
  iVar3 = *piVar2;
  param_1[0x3a6] = iVar3;
  if (iVar3 - 1U < 10) {
    uVar16 = 0;
    piVar1 = param_1 + 0x464;
    uVar7 = FUN_00a7c8a0(0);
    FUN_004039a0(0,uVar7,uVar16);
    uVar7 = FUN_00a81330();
    FUN_00e020f0(uVar7);
    if (piVar1 != (int *)0x0) {
      FUN_00dffb20(piVar1);
    }
    FUN_00a8c8b0(param_1[300],local_160);
    if ((short)param_1[0x6d7] != 0) {
      uVar16 = 0;
      uVar7 = FUN_00a7c8a0(0);
      FUN_004039a0(1,uVar7,uVar16);
      uVar7 = FUN_00a81330();
      FUN_00e020f0(uVar7);
      if (piVar1 != (int *)0x0) {
        FUN_00dffb20(piVar1);
      }
      FUN_00a8c8b0(param_1[300],local_160);
    }
    uVar16 = 0;
    uVar7 = FUN_00a7c8a0(0);
    FUN_004039a0(0x31,uVar7,uVar16);
    uVar7 = FUN_00a81330();
    FUN_00e020f0(uVar7);
    FUN_00dffbc0(0x205);
    if (param_1 + 0x490 != (int *)0x0) {
      FUN_00dffb20(param_1 + 0x490);
    }
    FUN_00a8c8b0(param_1[300],local_160);
    uVar16 = 0;
    uVar7 = FUN_00a7c8a0(0);
    FUN_004039a0(0x31,uVar7,uVar16);
    uVar7 = FUN_00a81330();
    FUN_00e020f0(uVar7);
    FUN_00dffbc0(0x105);
    if (param_1 + 0x4bc != (int *)0x0) {
      FUN_00dffb20(param_1 + 0x4bc);
    }
    FUN_00a8c8b0(param_1[300],local_160);
    uVar16 = 0;
    piVar1 = param_1 + 0x4e8;
    uVar7 = FUN_00a7c8a0(0);
    FUN_004039a0(0x31,uVar7,uVar16);
    uVar7 = FUN_00a81330();
    FUN_00e020f0(uVar7);
    FUN_00dffbc0(0x305);
    if (piVar1 != (int *)0x0) {
      FUN_00dffb20(piVar1);
    }
    FUN_00a8c8b0(param_1[300],local_160);
    param_1[0x648] = 1;
    param_1[0x649] = 1;
    param_1[0x64a] = 1;
    if ((*(byte *)(piVar2 + 1) & 2) != 0) {
      (**(code **)(param_1[0x490] + 8))(0x3f800000,0,0);
      param_1[0x648] = 0;
    }
    if (((*(byte *)(piVar2 + 1) & 4) != 0) && (param_1[0x649] != 0)) {
      (**(code **)(param_1[0x4bc] + 8))(0x3f800000,0,0);
      param_1[0x649] = 0;
    }
    if (((*(byte *)(piVar2 + 1) & 8) != 0) && (param_1[0x64a] != 0)) {
      (**(code **)(*piVar1 + 8))(0x3f800000,0,0);
      param_1[0x64a] = 0;
    }
  }
  if (local_168[0x139] != 0) goto switchD_007db895_default;
  iVar8 = FUN_00a8cab0();
  iVar3 = param_1[0x3a6];
  switch(iVar3) {
  case 1:
    if ((iVar6 == iVar3) || (param_1[0x139] != 0)) goto switchD_007db895_default;
    iVar6 = FUN_00a8cab0();
    param_1[0x3ad] = iVar6;
    iVar6 = FUN_00a8cab0();
    if ((iVar6 == 0x10000) ||
       (((iVar6 = FUN_00a8cab0(), iVar6 == 0x10009 || (iVar6 = FUN_00a8cab0(), iVar6 == 0x1000a)) ||
        (iVar6 = FUN_00a8cab0(), iVar6 == 0x1000d)))) {
      iVar6 = FUN_00a8cab0();
      param_1[0x72f] = iVar6;
    }
    if (param_1[0x70c] != 0) {
      param_1[0x72f] = 0x1000b;
    }
    param_1[0x3ae] = param_1[0x3a8];
    FUN_007cb240();
    uVar7 = 0x70003;
    break;
  case 2:
  case 5:
    if (iVar6 == iVar3) goto switchD_007db895_default;
    if (param_1[0x139] == 0) {
      iVar6 = FUN_00a8cab0();
      param_1[0x3ad] = iVar6;
      iVar6 = FUN_00a8cab0();
      if (((iVar6 == 0x10000) || (iVar6 = FUN_00a8cab0(), iVar6 == 0x10009)) ||
         ((iVar6 = FUN_00a8cab0(), iVar6 == 0x1000a || (iVar6 = FUN_00a8cab0(), iVar6 == 0x1000d))))
      {
        iVar6 = FUN_00a8cab0();
        param_1[0x72f] = iVar6;
      }
      if (param_1[0x70c] != 0) {
        param_1[0x72f] = 0x1000b;
      }
      param_1[0x3ae] = param_1[0x3a8];
      FUN_007cb240();
      FUN_00a8caf0(0x70006,0,0,0);
      param_1[0x3a8] = 0;
      FUN_00a962d0(0,0);
      param_1[0x3c0] = 0;
    }
    if (iVar8 != 0x70003) {
      bVar10 = iVar8 == 0x70004;
LAB_007dbe5f:
      if (!bVar10) goto switchD_007db895_default;
    }
    goto LAB_007dbe61;
  case 3:
  case 8:
    if (iVar6 == iVar3) goto switchD_007db895_default;
    if (param_1[0x139] == 0) {
      iVar6 = FUN_00a8cab0();
      param_1[0x3ad] = iVar6;
      iVar6 = FUN_00a8cab0();
      if (((iVar6 == 0x10000) || (iVar6 = FUN_00a8cab0(), iVar6 == 0x10009)) ||
         ((iVar6 = FUN_00a8cab0(), iVar6 == 0x1000a || (iVar6 = FUN_00a8cab0(), iVar6 == 0x1000d))))
      {
        iVar6 = FUN_00a8cab0();
        param_1[0x72f] = iVar6;
      }
      if (param_1[0x70c] != 0) {
        param_1[0x72f] = 0x1000b;
      }
      param_1[0x3ae] = param_1[0x3a8];
      FUN_007cb240();
      FUN_00a8caf0(0x70007,0,0,0);
      param_1[0x3a8] = 0;
      FUN_00a962d0(0,0);
      param_1[0x3c0] = 0;
    }
    if (iVar8 != 0x70003) {
      bVar10 = iVar8 == 0x70005;
      goto LAB_007dbe5f;
    }
    goto LAB_007dbe61;
  case 4:
    if ((iVar6 == iVar3) || (param_1[0x139] != 0)) goto switchD_007db895_default;
    iVar6 = FUN_00a8cab0();
    param_1[0x3ad] = iVar6;
    iVar6 = FUN_00a8cab0();
    if ((iVar6 == 0x10000) ||
       (((iVar6 = FUN_00a8cab0(), iVar6 == 0x10009 || (iVar6 = FUN_00a8cab0(), iVar6 == 0x1000a)) ||
        (iVar6 = FUN_00a8cab0(), iVar6 == 0x1000d)))) {
      iVar6 = FUN_00a8cab0();
      param_1[0x72f] = iVar6;
    }
    if (param_1[0x70c] != 0) {
      param_1[0x72f] = 0x1000b;
    }
    param_1[0x3ae] = param_1[0x3a8];
    FUN_007cb240();
    uVar7 = 0x70004;
    break;
  case 6:
  case 9:
    if (iVar6 == iVar3) goto switchD_007db895_default;
    if (param_1[0x139] == 0) {
      iVar6 = FUN_00a8cab0();
      param_1[0x3ad] = iVar6;
      iVar6 = FUN_00a8cab0();
      if (((iVar6 == 0x10000) || (iVar6 = FUN_00a8cab0(), iVar6 == 0x10009)) ||
         ((iVar6 = FUN_00a8cab0(), iVar6 == 0x1000a || (iVar6 = FUN_00a8cab0(), iVar6 == 0x1000d))))
      {
        iVar6 = FUN_00a8cab0();
        param_1[0x72f] = iVar6;
      }
      if (param_1[0x70c] != 0) {
        param_1[0x72f] = 0x1000b;
      }
      param_1[0x3ae] = param_1[0x3a8];
      FUN_007cb240();
      FUN_00a8caf0(0x70008,0,0,0);
      param_1[0x3a8] = 0;
      FUN_00a962d0(0,0);
      param_1[0x3c0] = 0;
    }
    if (iVar8 != 0x70004) {
      bVar10 = iVar8 == 0x70005;
      goto LAB_007dbe5f;
    }
    goto LAB_007dbe61;
  case 7:
    if ((iVar6 == iVar3) || (param_1[0x139] != 0)) goto switchD_007db895_default;
    iVar6 = FUN_00a8cab0();
    param_1[0x3ad] = iVar6;
    iVar6 = FUN_00a8cab0();
    if ((iVar6 == 0x10000) ||
       (((iVar6 = FUN_00a8cab0(), iVar6 == 0x10009 || (iVar6 = FUN_00a8cab0(), iVar6 == 0x1000a)) ||
        (iVar6 = FUN_00a8cab0(), iVar6 == 0x1000d)))) {
      iVar6 = FUN_00a8cab0();
      param_1[0x72f] = iVar6;
    }
    if (param_1[0x70c] != 0) {
      param_1[0x72f] = 0x1000b;
    }
    param_1[0x3ae] = param_1[0x3a8];
    FUN_007cb240();
    uVar7 = 0x70005;
    break;
  case 10:
    if (iVar6 == iVar3) goto switchD_007db895_default;
    if (param_1[0x139] == 0) {
      iVar6 = FUN_00a8cab0();
      param_1[0x3ad] = iVar6;
      iVar6 = FUN_00a8cab0();
      if ((((iVar6 == 0x10000) || (iVar6 = FUN_00a8cab0(), iVar6 == 0x10009)) ||
          (iVar6 = FUN_00a8cab0(), iVar6 == 0x1000a)) || (iVar6 = FUN_00a8cab0(), iVar6 == 0x1000d))
      {
        iVar6 = FUN_00a8cab0();
        param_1[0x72f] = iVar6;
      }
      if (param_1[0x70c] != 0) {
        param_1[0x72f] = 0x1000b;
      }
      param_1[0x3ae] = param_1[0x3a8];
      FUN_007cb240();
      FUN_00a8caf0(0x70009,0,0,0);
      param_1[0x3a8] = 0;
      FUN_00a962d0(0,0);
      param_1[0x3c0] = 0;
    }
    if (((iVar8 != 0x70003) && (iVar8 != 0x70004)) &&
       ((iVar8 != 0x70005 && ((iVar8 != 0x70006 && (iVar8 != 0x70007)))))) {
      bVar10 = iVar8 == 0x70008;
      goto LAB_007dbe5f;
    }
LAB_007dbe61:
    param_1[0x187] = 2;
    goto switchD_007db895_default;
  case 0xb:
    if ((iVar6 == iVar3) || (param_1[0x139] != 0)) goto switchD_007db895_default;
    FUN_007cb240();
    uVar7 = 0x80002;
    break;
  case 0xc:
    if ((iVar6 == iVar3) || (param_1[0x139] != 0)) goto switchD_007db895_default;
    FUN_007cb240();
    uVar7 = 0x80003;
    break;
  case 0xd:
    if ((iVar6 == iVar3) || (param_1[0x139] != 0)) goto switchD_007db895_default;
    FUN_007cb240();
    uVar7 = 0x80004;
    break;
  case 0xe:
    if ((iVar6 == iVar3) || (param_1[0x139] != 0)) goto switchD_007db895_default;
    FUN_007cb240();
    uVar7 = 0x80005;
    break;
  default:
    goto switchD_007db895_default;
  }
  FUN_00a8caf0(uVar7,0,0,0);
  param_1[0x3a8] = 0;
  FUN_00a962d0(0,0);
  param_1[0x3c0] = 0;
switchD_007db895_default:
  param_1[0x64b] = local_168[0x64b];
  FUN_00ac94e0(&DAT_0163d9a8);
  if ((param_1[0x6c8] == 0) &&
     ((float)param_1[0x21c] <= (float)param_1[0x21d] * (float)param_1[0x6cd])) {
    FUN_007db390();
  }
  if (param_1[0x6c9] != 0) {
    FUN_007da220();
  }
  if (param_1[0x6ca] != 0) {
    param_1[0x6c5] = 0;
    FUN_007da3a0();
  }
  if (param_1[0x6cb] != 0) {
    param_1[0x6c6] = 0;
    FUN_007da440();
  }
  if (param_1[0x6cc] != 0) {
    param_1[0x6c7] = 0;
    FUN_007da4e0();
  }
  if ((param_1[0x3c5] != 0) && ((*(byte *)(piVar2 + 2) & 0x32) != 0)) {
    param_1[0x3c5] = 0;
    (**(code **)(*(int *)param_1[0x1ec] + 0xe0))(0,&DAT_0163ebbc,0,0);
    (**(code **)(*(int *)param_1[0x1ec] + 0xe0))(0,&DAT_0163ebb4,0,0);
    (**(code **)(*(int *)param_1[0x1ec] + 0xe0))(0,&DAT_0163ebac,0,0);
  }
  if ((param_1[0x3c4] != 0) && ((*(byte *)(piVar2 + 2) & 0x16) != 0)) {
    param_1[0x3c4] = 0;
    (**(code **)(*(int *)param_1[0x1ec] + 0xe0))(0,&DAT_0163eb94,0,0);
    (**(code **)(*(int *)param_1[0x1ec] + 0xe0))(0,&DAT_0163eb8c,0,0);
    (**(code **)(*(int *)param_1[0x1ec] + 0xe0))(0,&DAT_0163eb84,0,0);
  }
  if ((param_1[0x3c6] != 0) && ((*(byte *)(piVar2 + 2) & 100) != 0)) {
    param_1[0x3c6] = 0;
    (**(code **)(*(int *)param_1[0x1ec] + 0xe0))(0,&DAT_0163eb6c,0,0);
    (**(code **)(*(int *)param_1[0x1ec] + 0xe0))(0,&DAT_0163eb64,0,0);
    (**(code **)(*(int *)param_1[0x1ec] + 0xe0))(0,&DAT_0163eb5c,0,0);
  }
  return;
}

// 007DC060  FUN_007dc060  size=276  [between]
int __thiscall FUN_007dc060(int *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_EDI;
  
  bVar1 = false;
  if ((((*(uint *)(param_2 + 0x8c) & 0x200) != 0) || ((*(uint *)(param_2 + 0x90) & 0x60000) != 0))
     || ((*(uint *)(param_2 + 0x8c) & 0x400) != 0)) {
    bVar1 = true;
  }
  if ((*(uint *)(param_2 + 0x90) & 0x20000) == 0) {
    iVar2 = FUN_00ac82f0();
    if ((iVar2 != 0) || (bVar1)) {
      iVar2 = FUN_00ac8350();
      if ((((iVar2 != 0) || (bVar1)) && (*(int *)(param_2 + 0x94) != 0)) &&
         ((*(int *)(param_2 + 0xec) != 0 || (bVar1)))) {
        iVar2 = FUN_00ac8cd0(param_2);
        if (iVar2 != 0) goto LAB_007dc0f4;
      }
    }
    return 0;
  }
  FUN_007db390();
LAB_007dc0f4:
  uVar3 = 0;
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    FUN_00a81330();
    uVar3 = FUN_00a7c8a0();
  }
  if (param_1[0x3a5] == 0) {
    (**(code **)(*param_1 + 0x36c))(param_1[0x6b9]);
  }
  FUN_00ac8d00(param_1,param_2,0);
  (**(code **)(*param_1 + 0x198))(uVar3,param_2,0x100);
  (**(code **)(*param_1 + 0x1ec))();
  if (unaff_EDI != 0) {
    FUN_00a9ba90(param_2);
  }
  return unaff_EDI;
}

// 007DC180  Emc100::vf4C  size=237  [class]
void __fastcall Emc100::vf4C(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  int local_8;
  undefined1 local_4 [4];
  
  FUN_00a92fb0();
  fVar4 = (float10)FUN_00e049b0();
  *(float *)(param_1 + 0x910) = (float)fVar4;
  BehaviorEmBase::vf4C();
  FUN_007cc8b0();
  uVar2 = FUN_007cd0e0();
  *(undefined4 *)(param_1 + 0x1ca0) = uVar2;
  FUN_007cdd40();
  if (*(int *)(param_1 + 0x1ca0) == 0) {
    fVar1 = *(float *)(param_1 + 0x1cb0) + *(float *)(param_1 + 0x910);
  }
  else {
    fVar1 = 0.0;
  }
  *(float *)(param_1 + 0x1cb0) = fVar1;
  if (*(short *)(param_1 + 0x1b5c) != 0) {
    FUN_007da5e0();
  }
  iVar3 = FUN_00ac4770();
  if (iVar3 == 0) {
    FUN_007d9f90();
  }
  FUN_007da050();
  uVar2 = FUN_00a82d50();
  *(undefined4 *)(param_1 + 0x1b68) = uVar2;
  if ((*(uint *)(param_1 + 0xf1c) & 0x100000) == 0) {
    FUN_00ac81f0(param_1 + 0x40,&local_8,local_4);
  }
  else {
    FUN_00ac8270(param_1 + 0x40,&local_8,local_4);
  }
  if (local_8 == 0) {
    FUN_007caa50();
    if (*(int *)(param_1 + 0x4e4) != 0) {
      *(undefined4 *)(param_1 + 0x20b8) = 1;
    }
    FUN_007d6fb0();
    return;
  }
  return;
}

// 007DC270  FUN_007dc270  size=5410  [between]
undefined4 __thiscall FUN_007dc270(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  float10 fVar5;
  undefined4 uVar6;
  int iStack_2c0;
  uint uStack_2bc;
  undefined1 auStack_2b8 [4];
  undefined4 local_2b4;
  undefined1 auStack_168 [356];
  
  iVar4 = *param_2;
  if (iVar4 == 0) {
    return 0;
  }
  if (iVar4 == 1) {
    return 0;
  }
  if (iVar4 == 2) {
    return 0;
  }
  if (iVar4 == 0x1b0) {
    return 0;
  }
  if (iVar4 == 0x147) {
    return 0;
  }
  iVar4 = param_2[1];
  local_2b4 = 0;
  if ((*(byte *)(param_2 + 0x23) & 0x10) != 0) {
    iVar4 = 0;
  }
  (**(code **)(*param_1 + 0x30c))(iVar4,0);
  param_1[0x70f] = param_1[0x70f] + iVar4;
  iVar4 = FUN_00a8cab0();
  if (((iVar4 == 0x90000) || (iVar4 = FUN_00a8cab0(), iVar4 == 0x90001)) ||
     (iVar4 = FUN_00a8cab0(), iVar4 == 0x90002)) {
    FUN_004adf40(param_2);
    FUN_007dc060(auStack_2b8);
    return 0;
  }
  iStack_2c0 = 0;
  iVar4 = FUN_00a81330();
  if (((iVar4 != 0) && (iStack_2c0 = FUN_00a7c8a0(), iStack_2c0 != 0)) &&
     ((*(byte *)(iStack_2c0 + 0x4c0) & 0x10) != 0)) {
    if ((param_1[0x3c7] & 0x100000U) == 0) {
      FUN_00a88250(iVar4,param_2 + 0x40);
    }
    (**(code **)(*param_1 + 0x21c))(iStack_2c0,(char)param_2[4],0x3c23d70a,0);
  }
  param_1[0x78d] = (int)((float)param_1[0x78d] * 0.5);
  if (((param_1[0x3c7] & 0x100000U) == 0) && (param_1[0x139] == 0)) {
    *(short *)(param_1 + 0x6db) = (short)param_1[0x6db] + 1;
  }
  iVar4 = FUN_00a8cab0();
  if ((((iVar4 == 0x80002) || (iVar4 == 0x80003)) || (iVar4 == 0x80004)) || (iVar4 == 0x80005))
  goto LAB_007dd638;
  if (param_1[0x139] != 0) {
    uStack_2bc = 0;
    goto LAB_007dd638;
  }
  switch(param_2[0x4a]) {
  case 0:
    param_1[0x679] = 0;
    iVar4 = FUN_007cb2a0();
    if ((iVar4 != 0) &&
       ((((param_1[0x6dc] == 0 && (param_1[0x710] < param_1[0x70f])) ||
         ((param_1[0x3c7] & 0x100000U) != 0)) && (param_1[0x139] == 0)))) {
      iVar4 = FUN_00a8cab0();
      param_1[0x3ad] = iVar4;
      iVar4 = FUN_00a8cab0();
      if (((iVar4 == 0x10000) || (iVar4 = FUN_00a8cab0(), iVar4 == 0x10009)) ||
         ((iVar4 = FUN_00a8cab0(), iVar4 == 0x1000a || (iVar4 = FUN_00a8cab0(), iVar4 == 0x1000d))))
      {
        iVar4 = FUN_00a8cab0();
        param_1[0x72f] = iVar4;
      }
      if (param_1[0x70c] != 0) {
        param_1[0x72f] = 0x1000b;
      }
      param_1[0x3ae] = param_1[0x3a8];
      FUN_007cb240();
      FUN_00a8caf0(0x60000,0,0,0);
      param_1[0x3a8] = 0;
      FUN_00a962d0(0,0);
      param_1[0x3c0] = 0;
    }
    if ((((param_1[0x6dc] == 0) && ((short)param_1[0x6db] == 10)) &&
        (((iVar4 = FUN_00a8cab0(), iVar4 != 0x70002 &&
          (((iVar4 = FUN_00a8cab0(), iVar4 != 0x70003 && (iVar4 = FUN_00a8cab0(), iVar4 != 0x70004))
           && (iVar4 = FUN_00a8cab0(), iVar4 != 0x70005)))) &&
         (((iVar4 = FUN_00a8cab0(), iVar4 != 0x70006 && (iVar4 = FUN_00a8cab0(), iVar4 != 0x70007))
          && (iVar4 = FUN_00a8cab0(), iVar4 != 0x70008)))))) &&
       ((iVar4 = FUN_00a8cab0(), iVar4 != 0x70009 && (param_1[0x6dc] = 1, param_1[0x139] == 0)))) {
      iVar4 = FUN_00a8cab0();
      param_1[0x3ad] = iVar4;
      iVar4 = FUN_00a8cab0();
      if ((iVar4 == 0x10000) ||
         (((iVar4 = FUN_00a8cab0(), iVar4 == 0x10009 || (iVar4 = FUN_00a8cab0(), iVar4 == 0x1000a))
          || (iVar4 = FUN_00a8cab0(), iVar4 == 0x1000d)))) {
        iVar4 = FUN_00a8cab0();
        param_1[0x72f] = iVar4;
      }
      if (param_1[0x70c] != 0) {
        param_1[0x72f] = 0x1000b;
      }
      param_1[0x3ae] = param_1[0x3a8];
      FUN_007cb240();
      FUN_00a8caf0(0x50002,0,0,0);
      param_1[0x3a8] = 0;
      FUN_00a962d0(0,0);
      param_1[0x3c0] = 0;
    }
    if ((*(byte *)(param_2 + 0x23) & 2) != 0) {
      FUN_007d5380(399,param_1 + 0x5f0,0);
      if (param_1[0x6c8] != 0) break;
      FUN_007db390();
    }
    if ((param_1[0x6c8] == 0) && (iVar4 = FUN_007cb650(), iVar4 != 0)) {
      FUN_007d5380(0x11,param_1 + 0x5f0,0);
      FUN_007db390();
    }
    break;
  case 1:
    param_1[0x679] = 1;
    iVar4 = FUN_007cb2a0();
    if ((iVar4 != 0) &&
       ((((param_1[0x6dc] == 0 && (param_1[0x710] < param_1[0x70f])) ||
         ((param_1[0x3c7] & 0x100000U) != 0)) && (param_1[0x139] == 0)))) {
      iVar4 = FUN_00a8cab0();
      param_1[0x3ad] = iVar4;
      iVar4 = FUN_00a8cab0();
      if (((iVar4 == 0x10000) || (iVar4 = FUN_00a8cab0(), iVar4 == 0x10009)) ||
         ((iVar4 = FUN_00a8cab0(), iVar4 == 0x1000a || (iVar4 = FUN_00a8cab0(), iVar4 == 0x1000d))))
      {
        iVar4 = FUN_00a8cab0();
        param_1[0x72f] = iVar4;
      }
      if (param_1[0x70c] != 0) {
        param_1[0x72f] = 0x1000b;
      }
      param_1[0x3ae] = param_1[0x3a8];
      FUN_007cb240();
      FUN_00a8caf0(0x60000,0,0,0);
      param_1[0x3a8] = 0;
      FUN_00a962d0(0,0);
      param_1[0x3c0] = 0;
    }
    if (((param_1[0x6dc] == 0) && ((short)param_1[0x6db] == 10)) &&
       ((((iVar4 = FUN_00a8cab0(), iVar4 != 0x70002 &&
          (((iVar4 = FUN_00a8cab0(), iVar4 != 0x70003 && (iVar4 = FUN_00a8cab0(), iVar4 != 0x70004))
           && (iVar4 = FUN_00a8cab0(), iVar4 != 0x70005)))) &&
         (((iVar4 = FUN_00a8cab0(), iVar4 != 0x70006 && (iVar4 = FUN_00a8cab0(), iVar4 != 0x70007))
          && (iVar4 = FUN_00a8cab0(), iVar4 != 0x70008)))) &&
        ((iVar4 = FUN_00a8cab0(), iVar4 != 0x70009 && (param_1[0x6dc] = 1, param_1[0x139] == 0))))))
    {
      iVar4 = FUN_00a8cab0();
      param_1[0x3ad] = iVar4;
      iVar4 = FUN_00a8cab0();
      if ((iVar4 == 0x10000) ||
         (((iVar4 = FUN_00a8cab0(), iVar4 == 0x10009 || (iVar4 = FUN_00a8cab0(), iVar4 == 0x1000a))
          || (iVar4 = FUN_00a8cab0(), iVar4 == 0x1000d)))) {
        iVar4 = FUN_00a8cab0();
        param_1[0x72f] = iVar4;
      }
      if (param_1[0x70c] != 0) {
        param_1[0x72f] = 0x1000b;
      }
      param_1[0x3ae] = param_1[0x3a8];
      FUN_007cb240();
      FUN_00a8caf0(0x50002,0,0,0);
      param_1[0x3a8] = 0;
      FUN_00a962d0(0,0);
      param_1[0x3c0] = 0;
    }
    if (((*(byte *)(param_2 + 0x23) & 2) != 0) &&
       (FUN_007d5380(399,param_1 + 0x5f0,0), param_1[0x6c8] == 0)) {
      FUN_007db390();
    }
    if (0 < param_1[0x6c5]) {
      param_1[0x6c5] = param_1[0x6c5] - param_2[1];
    }
    if (((param_1[0x6ca] == 0) && (iVar4 = FUN_007cb680(), iVar4 != 0)) && (param_1[0x6c8] == 0)) {
      FUN_007d5380(0xe,param_1 + 0x5f0,0);
      FUN_007da3a0();
    }
    break;
  case 2:
    param_1[0x679] = 2;
    iVar4 = FUN_007cb2a0();
    if ((iVar4 != 0) &&
       ((((param_1[0x6dc] == 0 && (param_1[0x710] < param_1[0x70f])) ||
         ((param_1[0x3c7] & 0x100000U) != 0)) && (param_1[0x139] == 0)))) {
      iVar4 = FUN_00a8cab0();
      param_1[0x3ad] = iVar4;
      iVar4 = FUN_00a8cab0();
      if (((iVar4 == 0x10000) || (iVar4 = FUN_00a8cab0(), iVar4 == 0x10009)) ||
         ((iVar4 = FUN_00a8cab0(), iVar4 == 0x1000a || (iVar4 = FUN_00a8cab0(), iVar4 == 0x1000d))))
      {
        iVar4 = FUN_00a8cab0();
        param_1[0x72f] = iVar4;
      }
      if (param_1[0x70c] != 0) {
        param_1[0x72f] = 0x1000b;
      }
      param_1[0x3ae] = param_1[0x3a8];
      FUN_007cb240();
      FUN_00a8caf0(0x60000,0,0,0);
      param_1[0x3a8] = 0;
      FUN_00a962d0(0,0);
      param_1[0x3c0] = 0;
    }
    if (((param_1[0x6dc] == 0) && ((short)param_1[0x6db] == 10)) &&
       ((((iVar4 = FUN_00a8cab0(), iVar4 != 0x70002 &&
          (((iVar4 = FUN_00a8cab0(), iVar4 != 0x70003 && (iVar4 = FUN_00a8cab0(), iVar4 != 0x70004))
           && (iVar4 = FUN_00a8cab0(), iVar4 != 0x70005)))) &&
         (((iVar4 = FUN_00a8cab0(), iVar4 != 0x70006 && (iVar4 = FUN_00a8cab0(), iVar4 != 0x70007))
          && (iVar4 = FUN_00a8cab0(), iVar4 != 0x70008)))) &&
        ((iVar4 = FUN_00a8cab0(), iVar4 != 0x70009 && (param_1[0x6dc] = 1, param_1[0x139] == 0))))))
    {
      iVar4 = FUN_00a8cab0();
      param_1[0x3ad] = iVar4;
      iVar4 = FUN_00a8cab0();
      if ((iVar4 == 0x10000) ||
         (((iVar4 = FUN_00a8cab0(), iVar4 == 0x10009 || (iVar4 = FUN_00a8cab0(), iVar4 == 0x1000a))
          || (iVar4 = FUN_00a8cab0(), iVar4 == 0x1000d)))) {
        iVar4 = FUN_00a8cab0();
        param_1[0x72f] = iVar4;
      }
      if (param_1[0x70c] != 0) {
        param_1[0x72f] = 0x1000b;
      }
      param_1[0x3ae] = param_1[0x3a8];
      FUN_007cb240();
      FUN_00a8caf0(0x50002,0,0,0);
      param_1[0x3a8] = 0;
      FUN_00a962d0(0,0);
      param_1[0x3c0] = 0;
    }
    if (((*(byte *)(param_2 + 0x23) & 2) != 0) &&
       (FUN_007d5380(399,param_1 + 0x5f0,0), param_1[0x6c8] == 0)) {
      FUN_007db390();
    }
    if (0 < param_1[0x6c6]) {
      param_1[0x6c6] = param_1[0x6c6] - param_2[1];
    }
    if (((param_1[0x6cb] == 0) && (iVar4 = FUN_007cb6a0(), iVar4 != 0)) && (param_1[0x6c8] == 0)) {
      FUN_007d5380(0xf,param_1 + 0x5f0,0);
      FUN_007da440();
    }
    break;
  case 3:
    param_1[0x679] = 3;
    iVar4 = FUN_007cb2a0();
    if (((iVar4 != 0) &&
        (((param_1[0x6dc] == 0 && (param_1[0x710] < param_1[0x70f])) ||
         ((param_1[0x3c7] & 0x100000U) != 0)))) && (param_1[0x139] == 0)) {
      iVar4 = FUN_00a8cab0();
      param_1[0x3ad] = iVar4;
      iVar4 = FUN_00a8cab0();
      if (((iVar4 == 0x10000) || (iVar4 = FUN_00a8cab0(), iVar4 == 0x10009)) ||
         ((iVar4 = FUN_00a8cab0(), iVar4 == 0x1000a || (iVar4 = FUN_00a8cab0(), iVar4 == 0x1000d))))
      {
        iVar4 = FUN_00a8cab0();
        param_1[0x72f] = iVar4;
      }
      if (param_1[0x70c] != 0) {
        param_1[0x72f] = 0x1000b;
      }
      param_1[0x3ae] = param_1[0x3a8];
      FUN_007cb240();
      FUN_00a8caf0(0x60000,0,0,0);
      param_1[0x3a8] = 0;
      FUN_00a962d0(0,0);
      param_1[0x3c0] = 0;
    }
    if ((((param_1[0x6dc] == 0) && ((short)param_1[0x6db] == 10)) &&
        ((iVar4 = FUN_00a8cab0(), iVar4 != 0x70002 &&
         (((iVar4 = FUN_00a8cab0(), iVar4 != 0x70003 && (iVar4 = FUN_00a8cab0(), iVar4 != 0x70004))
          && (iVar4 = FUN_00a8cab0(), iVar4 != 0x70005)))))) &&
       ((((iVar4 = FUN_00a8cab0(), iVar4 != 0x70006 && (iVar4 = FUN_00a8cab0(), iVar4 != 0x70007))
         && (iVar4 = FUN_00a8cab0(), iVar4 != 0x70008)) &&
        ((iVar4 = FUN_00a8cab0(), iVar4 != 0x70009 && (param_1[0x6dc] = 1, param_1[0x139] == 0))))))
    {
      iVar4 = FUN_00a8cab0();
      param_1[0x3ad] = iVar4;
      iVar4 = FUN_00a8cab0();
      if ((iVar4 == 0x10000) ||
         (((iVar4 = FUN_00a8cab0(), iVar4 == 0x10009 || (iVar4 = FUN_00a8cab0(), iVar4 == 0x1000a))
          || (iVar4 = FUN_00a8cab0(), iVar4 == 0x1000d)))) {
        iVar4 = FUN_00a8cab0();
        param_1[0x72f] = iVar4;
      }
      if (param_1[0x70c] != 0) {
        param_1[0x72f] = 0x1000b;
      }
      param_1[0x3ae] = param_1[0x3a8];
      FUN_007cb240();
      FUN_00a8caf0(0x50002,0,0,0);
      param_1[0x3a8] = 0;
      FUN_00a962d0(0,0);
      param_1[0x3c0] = 0;
    }
    if (((*(byte *)(param_2 + 0x23) & 2) != 0) &&
       (FUN_007d5380(399,param_1 + 0x5f0,0), param_1[0x6c8] == 0)) {
      FUN_007db390();
    }
    if (0 < param_1[0x6c7]) {
      param_1[0x6c7] = param_1[0x6c7] - param_2[1];
    }
    if (((param_1[0x6cc] == 0) && (iVar4 = FUN_007cb6c0(), iVar4 != 0)) && (param_1[0x6c8] == 0)) {
      FUN_007d5380(0x10,param_1 + 0x5f0,0);
      FUN_007da4e0();
    }
    break;
  case 4:
    if ((param_1[0x6c9] == 0) || (iVar4 = FUN_00ac8350(), iVar4 == 0)) {
      iVar4 = param_1[0x6ce];
      if (iVar4 < 1) {
        if ((param_1[0x6d1] != 0) && (iVar4 == 0)) {
          param_1[0x6ce] = -param_2[1];
        }
      }
      else {
        iVar1 = param_2[1];
        param_1[0x6ce] = iVar4 - iVar1;
        if (iVar4 - iVar1 < 0) {
          param_1[0x6ce] = 0;
        }
        if (param_2[0x25] != 0) {
          param_1[0x6ce] = (0 < param_1[0x6ce]) - 1;
        }
      }
    }
    break;
  case 5:
    if ((param_1[0x6c9] == 0) || (iVar4 = FUN_00ac8350(), iVar4 == 0)) {
      iVar4 = param_1[0x6cf];
      if (iVar4 < 1) {
        if ((param_1[0x6d2] != 0) && (iVar4 == 0)) {
          param_1[0x6cf] = -param_2[1];
        }
      }
      else {
        iVar1 = param_2[1];
        param_1[0x6cf] = iVar4 - iVar1;
        if (iVar4 - iVar1 < 0) {
          param_1[0x6cf] = 0;
        }
        if (param_2[0x25] != 0) {
          param_1[0x6cf] = (0 < param_1[0x6cf]) - 1;
        }
      }
    }
    break;
  case 6:
    if ((param_1[0x6c9] == 0) || (iVar4 = FUN_00ac8350(), iVar4 == 0)) {
      iVar4 = param_1[0x6d0];
      if (iVar4 < 1) {
        if ((param_1[0x6d3] != 0) && (iVar4 == 0)) {
          param_1[0x6d0] = -param_2[1];
        }
      }
      else {
        iVar1 = param_2[1];
        param_1[0x6d0] = iVar4 - iVar1;
        if (iVar4 - iVar1 < 0) {
          param_1[0x6d0] = 0;
        }
        if (param_2[0x25] != 0) {
          param_1[0x6d0] = (0 < param_1[0x6d0]) - 1;
        }
      }
    }
  }
  iVar4 = FUN_00a8cab0();
  if (((iVar4 == 0x70003) || (iVar4 = FUN_00a8cab0(), iVar4 == 0x70004)) ||
     ((iVar4 = FUN_00a8cab0(), iVar4 == 0x70005 ||
      ((((iVar4 = FUN_00a8cab0(), iVar4 == 0x70006 || (iVar4 = FUN_00a8cab0(), iVar4 == 0x70007)) ||
        (iVar4 = FUN_00a8cab0(), iVar4 == 0x70008)) || (iVar4 = FUN_00a8cab0(), iVar4 == 0x70009))))
     )) {
    FUN_00a8cb60(0xc);
  }
  if ((((param_1[0x74c] == 0) && (iVar4 = FUN_00fdbc60(), param_1[0x21c] <= iVar4)) ||
      ((*(byte *)(param_2 + 0x23) & 1) != 0)) && (iVar4 = FUN_007cb2a0(), iVar4 != 0)) {
    if ((*(byte *)(param_2 + 0x23) & 1) != 0) {
      uVar6 = 0;
      uVar2 = FUN_00a7c8a0(0);
      FUN_004039a0(0x18e,uVar2,uVar6);
      uVar2 = FUN_00a81330();
      FUN_00e020f0(uVar2);
      FUN_00a8c8b0(param_1[300],auStack_2b8);
    }
    param_1[0x74c] = 1;
    param_1[0x82e] = 1;
    if (param_1[0x139] == 0) {
      iVar4 = FUN_00a8cab0();
      param_1[0x3ad] = iVar4;
      iVar4 = FUN_00a8cab0();
      if (((iVar4 == 0x10000) || (iVar4 = FUN_00a8cab0(), iVar4 == 0x10009)) ||
         ((iVar4 = FUN_00a8cab0(), iVar4 == 0x1000a || (iVar4 = FUN_00a8cab0(), iVar4 == 0x1000d))))
      {
        iVar4 = FUN_00a8cab0();
        param_1[0x72f] = iVar4;
      }
      if (param_1[0x70c] != 0) {
        param_1[0x72f] = 0x1000b;
      }
      param_1[0x3ae] = param_1[0x3a8];
      FUN_007cb240();
      FUN_00a8caf0(0x70002,0,0,0);
      param_1[0x3a8] = 0;
      FUN_00a962d0(0,0);
      param_1[0x3c0] = 0;
    }
  }
  if ((param_2[0x23] & 0x20000U) != 0) {
    iVar4 = FUN_007cb2a0();
    if ((iVar4 == 0) && (iVar4 = FUN_00a8cab0(), iVar4 != 0x60001)) {
      iVar4 = FUN_00a8cab0();
      if (((((iVar4 == 0x70003) || (iVar4 = FUN_00a8cab0(), iVar4 == 0x70004)) ||
           ((iVar4 = FUN_00a8cab0(), iVar4 == 0x70005 ||
            ((iVar4 = FUN_00a8cab0(), iVar4 == 0x70006 || (iVar4 = FUN_00a8cab0(), iVar4 == 0x70007)
             ))))) || (iVar4 = FUN_00a8cab0(), iVar4 == 0x70008)) ||
         (iVar4 = FUN_00a8cab0(), iVar4 == 0x70009)) {
        param_1[0x82e] = 1;
        FUN_00a8cb60(10);
      }
    }
    else {
      param_1[0x82e] = 1;
      if (param_1[0x139] == 0) {
        iVar4 = FUN_00a8cab0();
        param_1[0x3ad] = iVar4;
        iVar4 = FUN_00a8cab0();
        if ((((iVar4 == 0x10000) || (iVar4 = FUN_00a8cab0(), iVar4 == 0x10009)) ||
            (iVar4 = FUN_00a8cab0(), iVar4 == 0x1000a)) ||
           (iVar4 = FUN_00a8cab0(), iVar4 == 0x1000d)) {
          iVar4 = FUN_00a8cab0();
          param_1[0x72f] = iVar4;
        }
        if (param_1[0x70c] != 0) {
          param_1[0x72f] = 0x1000b;
        }
        param_1[0x3ae] = param_1[0x3a8];
        FUN_007cb240();
        FUN_00a8caf0(0x60001,0,0,0);
        param_1[0x3a8] = 0;
        FUN_00a962d0(0,0);
        param_1[0x3c0] = 0;
      }
    }
  }
  if (((*(byte *)(param_2 + 0x23) & 0x20) != 0) && ((param_1[0x3c7] & 0x100000U) == 0)) {
    iVar4 = FUN_007cb1f0();
    if (iVar4 == 0) {
      iVar4 = FUN_00a8cab0();
      if ((((iVar4 == 0x70003) || (iVar4 = FUN_00a8cab0(), iVar4 == 0x70004)) ||
          (iVar4 = FUN_00a8cab0(), iVar4 == 0x70005)) ||
         (((iVar4 = FUN_00a8cab0(), iVar4 == 0x70006 || (iVar4 = FUN_00a8cab0(), iVar4 == 0x70007))
          || ((iVar4 = FUN_00a8cab0(), iVar4 == 0x70008 ||
              (iVar4 = FUN_00a8cab0(), iVar4 == 0x70009)))))) {
        FUN_00a8cb60(0xc);
      }
      else if (param_1[0x139] == 0) {
        iVar4 = FUN_00a8cab0();
        param_1[0x3ad] = iVar4;
        iVar4 = FUN_00a8cab0();
        if (((iVar4 == 0x10000) || (iVar4 = FUN_00a8cab0(), iVar4 == 0x10009)) ||
           ((iVar4 = FUN_00a8cab0(), iVar4 == 0x1000a || (iVar4 = FUN_00a8cab0(), iVar4 == 0x1000d))
           )) {
          iVar4 = FUN_00a8cab0();
          param_1[0x72f] = iVar4;
        }
        if (param_1[0x70c] != 0) {
          param_1[0x72f] = 0x1000b;
        }
        param_1[0x3ae] = param_1[0x3a8];
        FUN_007cb240();
        FUN_00a8caf0(0x60000,0,0,0);
        param_1[0x3a8] = 0;
        FUN_00a962d0(0,0);
        param_1[0x3c0] = 0;
      }
    }
    else {
      FUN_007cf140();
    }
  }
  if (((*(byte *)((int)param_2 + 0x8e) & 1) == 0) ||
     ((((iVar4 = FUN_007cb650(), iVar4 == 0 && (iVar4 = FUN_007cb680(), iVar4 == 0)) &&
       (iVar4 = FUN_007cb6a0(), iVar4 == 0)) && (iVar4 = FUN_007cb6c0(), iVar4 == 0)))) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0x40;
  }
  if ((param_2[0x23] & 0x8000U) != 0) {
    iVar4 = FUN_007cb650();
    if (((iVar4 != 0) || (iVar4 = FUN_007cb680(), iVar4 != 0)) ||
       ((iVar4 = FUN_007cb6a0(), iVar4 != 0 || (iVar4 = FUN_007cb6c0(), iVar4 != 0)))) {
      uVar3 = 0x20;
    }
    if (param_1[0x139] == 0) {
      iVar4 = FUN_00a8cab0();
      param_1[0x3ad] = iVar4;
      iVar4 = FUN_00a8cab0();
      if (((iVar4 == 0x10000) || (iVar4 = FUN_00a8cab0(), iVar4 == 0x10009)) ||
         ((iVar4 = FUN_00a8cab0(), iVar4 == 0x1000a || (iVar4 = FUN_00a8cab0(), iVar4 == 0x1000d))))
      {
        iVar4 = FUN_00a8cab0();
        param_1[0x72f] = iVar4;
      }
      if (param_1[0x70c] != 0) {
        param_1[0x72f] = 0x1000b;
      }
      param_1[0x3ae] = param_1[0x3a8];
      FUN_007cb240();
      FUN_00a8caf0(0x70001,0,0,0);
      param_1[0x3a8] = 0;
      FUN_00a962d0(0,0);
      param_1[0x3c0] = 0;
    }
  }
  if ((*param_2 == 0x92) && (uVar3 = 0x20, param_1[0x6c8] == 0)) {
    FUN_007db390();
  }
  uStack_2bc = uVar3 | 1;
LAB_007dd638:
  FUN_004adf40(param_2);
  iVar4 = FUN_007dc060(auStack_168);
  if (iVar4 == 0) {
    (**(code **)(*param_1 + 0x198))(iStack_2c0,param_2,uStack_2bc);
    fVar5 = (float10)FUN_00ddba30((float)param_2[0xc] - (float)param_1[0x25]);
    param_1[0x245] = (int)(float)fVar5;
    if (((param_1[0x21c] < 1) && (iVar4 = FUN_00a8cab0(), iVar4 != 0x90000)) &&
       (param_1[0x139] == 0)) {
      if ((param_2[0x24] & 0x200U) != 0) {
        param_1[0x3ac] = 4;
      }
      (**(code **)(*param_1 + 0x344))(6,param_1[0x3ac],param_1[0x3ab]);
      iVar4 = FUN_00a8cab0();
      FUN_007cd550(0x80000,0,0,0,0);
      param_1[0x139] = 1;
      if (((((iVar4 == 0x70000) || (iVar4 == 0x70003)) ||
           ((iVar4 == 0x70004 || ((iVar4 == 0x70005 || (iVar4 == 0x70006)))))) || (iVar4 == 0x70007)
          ) || ((iVar4 == 0x70008 || (iVar4 == 0x70009)))) {
        param_1[0x187] = 2;
        return 0;
      }
    }
  }
  return 0;
}

// 007DD7B0  Emc100::vf32C  size=399  [class]
undefined4 __fastcall Emc100::vf32C(int *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int local_168;
  undefined1 local_160 [348];
  
  param_1[0x1a1] = 0;
  FUN_00ac2080(0);
  FUN_00ac2080(1);
  FUN_00ac2080(2);
  FUN_00ac2080(3);
  FUN_00ac2080(4);
  FUN_00ac2080(5);
  FUN_00ac2080(6);
  iVar2 = FUN_00a8ef10();
  if (iVar2 == 0) {
    iVar2 = FUN_00a8c760(9);
    if ((iVar2 == 0) && ((*(byte *)(param_1 + 0x130) & 1) != 0)) {
      lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x280);
      if (param_1[0x286] != 0) {
        EnterCriticalSection(lpCriticalSection);
      }
      piVar5 = (int *)param_1[0x19f];
      piVar4 = piVar5 + param_1[0x1a1] * 0x54;
      FUN_00445db0();
      local_168 = -1;
      bVar1 = false;
      if (piVar5 != piVar4) {
        do {
          iVar2 = *piVar5;
          if ((iVar2 != 0x147) && (iVar2 != 0x114)) {
            if (iVar2 == 0x1b0) {
              (**(code **)(*param_1 + 0x370))(local_160);
            }
            else if (local_168 < piVar5[1]) {
              bVar1 = true;
              FUN_00448f50(piVar5);
              local_168 = piVar5[1];
            }
          }
          piVar5 = piVar5 + 0x54;
        } while (piVar5 != piVar4);
        if (bVar1) {
          iVar2 = FUN_00a8f040(local_160);
          if (iVar2 == 0) {
            iVar2 = FUN_007dc060(local_160);
            if (iVar2 == 0) {
              uVar3 = FUN_007dc270(local_160);
              if (param_1[0x286] != 0) {
                LeaveCriticalSection(lpCriticalSection);
              }
              return uVar3;
            }
          }
        }
      }
      if (param_1[0x286] != 0) {
        LeaveCriticalSection(lpCriticalSection);
      }
    }
  }
  return 0;
}

// 00AB2FC0  Emc100::vf04  size=6  [class]
undefined * Emc100::vf04(void)

{
  return &DAT_01b35920;
}

// 00AB2FD0  Emc100::vf20C  size=7  [class]
float10 Emc100::vf20C(void)

{
  return (float10)3.5;
}

// 00AB2FE0  Emc100::vf1DC  size=6  [class]
undefined4 Emc100::vf1DC(void)

{
  return 1;
}

// 00AB2FF0  Emc100::vf140  size=7  [class]
float10 Emc100::vf140(void)

{
  return (float10)5.0;
}

// 00AB3000  Emc100::vf144  size=7  [class]
float10 Emc100::vf144(void)

{
  return (float10)5.1;
}

// 00AB3010  FUN_00ab3010  size=308  [callgraph]
void FUN_00ab3010(void)

{
  cEspControler::~cEspControler();
  FUN_00905ce0();
  FUN_00905ce0();
  FUN_00905ce0();
  FUN_00905ce0();
  FUN_00905ce0();
  FUN_00905ce0();
  FUN_00905ce0();
  FUN_00905ce0();
  FUN_00905ce0();
  FUN_00905ce0();
  FUN_00905ce0();
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  cEnemyCautionStateManager::cEnemyCautionStateManager_3();
  return;
}

// 00AB9F00  Emc100::vf00  size=30  [class]
undefined4 __thiscall Emc100::vf00(undefined4 param_1,byte param_2)

{
  FUN_00ab3010();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}


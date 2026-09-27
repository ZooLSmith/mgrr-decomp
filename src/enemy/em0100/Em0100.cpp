// src/enemy/em0100/Em0100.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0049FEB0..00AB71B0, 138 functions

#include "mgrr.h"
#include "Em0100.h"

// 0049FEB0  Em0100::vf118  size=80  [class]
undefined4 __thiscall Em0100::vf118(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = Bh0064::vf118(param_2);
  if (iVar1 == 0) {
    return 0;
  }
  if (param_2 == 0) {
    uVar2 = FUN_00dd3500(4,&DAT_01b7bd48);
    *(undefined4 *)(*(int *)(param_1 + 0x588) + 0x130) = uVar2;
    if (*(int *)(*(int *)(param_1 + 0x588) + 0x130) == 0) {
      return 0;
    }
  }
  return 1;
}

// 0049FF00  Em0100::vf304  size=1  [class]
void Em0100::vf304(void)

{
  return;
}

// 0049FF10  Em0100::vf184  size=6  [class]
undefined4 Em0100::vf184(void)

{
  return 0xffffffff;
}

// 0049FF20  Em0100::vf188  size=43  [class]
void Em0100::vf188(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 != 0) {
    FUN_00a7c950();
    uVar1 = FUN_00a7c7f0();
    FUN_00a7c960(uVar1);
  }
  return;
}

// 0049FF60  FUN_0049ff60  size=413  [between]
void __fastcall FUN_0049ff60(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_24 [4];
  undefined1 local_20 [28];
  
  if (*(int *)(param_1 + 0x1bd0) != 0) {
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
      goto LAB_004a0045;
    }
  }
  iVar1 = FUN_00a8cab0();
  if (iVar1 != 0x10000) {
    iVar1 = FUN_00a8cab0();
    if (iVar1 != 0x10009) {
      iVar1 = FUN_00a8cab0();
      if (iVar1 != 0x1000a) goto LAB_004a0045;
    }
  }
  FUN_00a84720();
  FUN_00a84720();
LAB_004a0045:
  FUN_00a84720();
  FUN_00a84720();
  if ((*(int *)(param_1 + 0xa84) != 0) && (*(int *)(param_1 + 0x1fe0) != 0)) {
    (**(code **)(**(int **)(param_1 + 0xa84) + 0x204))(local_20);
    uVar2 = 0;
    if ((2 < *(byte *)(param_1 + 0x1d60)) && (*(byte *)(param_1 + 0x1d60) < 5)) {
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

// 004A0100  Em0100::vf50  size=50  [class]
void __fastcall Em0100::vf50(int param_1)

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

// 004A0140  Em0100::thunk_vf54  size=5  [class]
void __fastcall Em0100::thunk_vf54(int *param_1)

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

// 004A0150  FUN_004a0150  size=439  [between]
void __fastcall FUN_004a0150(int param_1)

{
  float fVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0xdf4) = 0x10000;
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(6,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x1c84) = 0;
LAB_004a017c:
    FUN_00ac80a0(0x3f800000,0x3f800000);
  }
  else if (*(int *)(param_1 + 0x61c) == 1) goto LAB_004a017c;
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
    goto LAB_004a028c;
  case 3:
LAB_004a028c:
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
    goto LAB_004a02e7;
  case 5:
LAB_004a02e7:
    iVar2 = FUN_00a94ce0(1);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x620) = 0;
      return;
    }
  default:
    goto switchD_004a01a4_default;
  }
  iVar2 = FUN_00a94ce0(1);
  if (iVar2 != 0) {
    FUN_00aa4080(0x37,1,0,0x3f800000,0x40200,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x620) = *(int *)(param_1 + 0x620) + 1;
    return;
  }
switchD_004a01a4_default:
  return;
}

// 004A0380  FUN_004a0380  size=242  [between]
void __fastcall FUN_004a0380(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x1c84) = 0;
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    FUN_00aa4120(6,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    *(undefined4 *)(param_1 + 0x1bd4) = *(undefined4 *)(param_1 + 0x1bd0);
    return;
  case 2:
    FUN_00aa4080(0x29,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x61c) = 0;
      *(undefined4 *)(param_1 + 0x1bd4) = *(undefined4 *)(param_1 + 0x1bd0);
      return;
    }
  default:
    *(undefined4 *)(param_1 + 0x1bd4) = *(undefined4 *)(param_1 + 0x1bd0);
    return;
  }
}

// 004A0490  FUN_004a0490  size=127  [between]
void __fastcall FUN_004a0490(int param_1)

{
  *(undefined4 *)(param_1 + 0xdf4) = 0x1000a;
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4120(6,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    *(undefined4 *)(param_1 + 0x1bd4) = *(undefined4 *)(param_1 + 0x1bd0);
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  *(undefined4 *)(param_1 + 0x1bd4) = *(undefined4 *)(param_1 + 0x1bd0);
  return;
}

// 004A0530  FUN_004a0530  size=93  [between]
void __fastcall FUN_004a0530(int param_1)

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

// 004A05B0  FUN_004a05b0  size=345  [between]
undefined4 __thiscall FUN_004a05b0(int param_1,float *param_2,int param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  int iVar6;
  
  pfVar5 = param_2;
  pfVar1 = (float *)(param_1 + 0x1c30);
  iVar6 = FUN_00907640(param_1 + 0x1c04,0,pfVar1);
  param_2 = (float *)0x1;
  if (iVar6 != 0) {
    fVar2 = *(float *)(param_1 + 0x40) - *pfVar1;
    fVar4 = *(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x1c34);
    fVar3 = *(float *)(param_1 + 0x48) - *(float *)(param_1 + 0x1c38);
    *pfVar5 = SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2);
  }
  iVar6 = FUN_00907640(param_1 + 0x1c0c,0,pfVar1);
  if (iVar6 == 0) {
LAB_004a064a:
    param_2 = (float *)0x3;
  }
  else {
    fVar2 = *(float *)(param_1 + 0x40) - *pfVar1;
    fVar4 = *(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x1c34);
    fVar3 = *(float *)(param_1 + 0x48) - *(float *)(param_1 + 0x1c38);
    fVar2 = SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2);
    if (*pfVar5 <= fVar2) {
      *pfVar5 = fVar2;
      goto LAB_004a064a;
    }
  }
  iVar6 = FUN_00907640(param_1 + 0x1c08,0,pfVar1);
  if (iVar6 != 0) {
    fVar2 = *(float *)(param_1 + 0x40) - *pfVar1;
    fVar4 = *(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x1c34);
    fVar3 = *(float *)(param_1 + 0x48) - *(float *)(param_1 + 0x1c38);
    fVar2 = SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2);
    if (fVar2 < *pfVar5) goto LAB_004a06a8;
    *pfVar5 = fVar2;
  }
  param_2 = (float *)0x2;
LAB_004a06a8:
  if (param_3 == 0) {
    return param_2;
  }
  iVar6 = FUN_00907640(param_1 + 0x1c00,0,pfVar1);
  if (iVar6 != 0) {
    fVar2 = *(float *)(param_1 + 0x40) - *pfVar1;
    fVar4 = *(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x1c34);
    fVar3 = *(float *)(param_1 + 0x48) - *(float *)(param_1 + 0x1c38);
    fVar2 = SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2);
    if (fVar2 < *pfVar5) {
      return param_2;
    }
    *pfVar5 = fVar2;
  }
  return 0;
}

// 004A0710  FUN_004a0710  size=67  [between]
undefined4 __fastcall FUN_004a0710(int param_1)

{
  undefined4 local_8;
  undefined1 local_4 [4];
  
  if ((*(uint *)(param_1 + 0xe4c) & 0x100000) == 0) {
    FUN_00ac81f0(param_1 + 0x40,&local_8,local_4);
    return local_8;
  }
  FUN_00ac8270(param_1 + 0x40,&local_8,local_4);
  return local_8;
}

// 004A0760  FUN_004a0760  size=92  [between]
void __fastcall FUN_004a0760(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cab0();
  if (iVar1 == 0x50002) {
    FUN_00eaa6e0(0x41f00000,0);
    return;
  }
  if (iVar1 == 0x50000) {
    (**(code **)(*(int *)(param_1 + 0x1860) + 8))(0x41200000,0,0);
  }
  return;
}

// 004A07C0  FUN_004a07c0  size=174  [between]
undefined4 FUN_004a07c0(void)

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

// 004A08A0  FUN_004a08a0  size=678  [between]
undefined4 __fastcall FUN_004a08a0(int param_1)

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
  cVar1 = *(char *)(param_1 + 0x1000);
  switch(cVar1) {
  case '\0':
    *(undefined4 *)(param_1 + 0x928) = 0;
    *(char *)(param_1 + 0x1000) = cVar1 + '\x01';
  case '\x01':
    local_70 = 0;
    puVar3 = &local_70;
    local_6c = *(float *)(param_1 + 0x928) * -5.0 * 0.017453292;
    local_68 = 0;
    goto LAB_004a090a;
  case '\x02':
    local_60 = 0;
    local_5c = 0xbf060a92;
    local_58 = 0;
    FUN_00a84be0(&local_60);
    switchD_0080dbae::default();
    fVar2 = *(float *)(param_1 + 0x924) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x924) = fVar2;
    if (fVar2 < 0.0) {
      *(char *)(param_1 + 0x1000) = *(char *)(param_1 + 0x1000) + '\x01';
      *(undefined4 *)(param_1 + 0x928) = 0x40c00000;
      return 0;
    }
    break;
  case '\x03':
    puVar3 = &local_50;
    local_50 = 0;
    local_4c = *(float *)(param_1 + 0x928) * -5.0 * 0.017453292;
    local_48 = 0;
    goto LAB_004a09e8;
  case '\x04':
    fVar2 = *(float *)(param_1 + 0x924) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x924) = fVar2;
    if (fVar2 < 0.0) {
      *(undefined4 *)(param_1 + 0x928) = 0;
      *(char *)(param_1 + 0x1000) = cVar1 + '\x01';
      return 0;
    }
    break;
  case '\x05':
    puVar3 = &local_40;
    local_40 = 0;
    local_3c = *(float *)(param_1 + 0x928) * 5.0 * 0.017453292;
    local_38 = 0;
LAB_004a090a:
    FUN_00a84be0(puVar3);
    switchD_0080dbae::default();
    fVar2 = *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0x928);
    *(float *)(param_1 + 0x928) = fVar2;
    uVar4 = (ushort)(fVar2 < 6.0) << 8 | (ushort)(fVar2 == 6.0) << 0xe;
LAB_004a0935:
    if (uVar4 == 0) {
      *(char *)(param_1 + 0x1000) = *(char *)(param_1 + 0x1000) + '\x01';
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
      *(char *)(param_1 + 0x1000) = *(char *)(param_1 + 0x1000) + '\x01';
      *(undefined4 *)(param_1 + 0x928) = 0x40c00000;
      return 0;
    }
    break;
  case '\a':
    puVar3 = &local_20;
    local_20 = 0;
    local_1c = *(float *)(param_1 + 0x928) * 5.0 * 0.017453292;
    local_18 = 0;
LAB_004a09e8:
    FUN_00a84be0(puVar3);
    switchD_0080dbae::default();
    fVar2 = *(float *)(param_1 + 0x928) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x928) = fVar2;
    uVar4 = (ushort)(0.0 < fVar2) << 8 | (ushort)(fVar2 == 0.0) << 0xe;
    goto LAB_004a0935;
  case '\b':
    fVar2 = *(float *)(param_1 + 0x924) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x924) = fVar2;
    if (fVar2 < 0.0) {
      *(undefined1 *)(param_1 + 0x1000) = 0;
      return 1;
    }
  }
  return 0;
}

// 004A0B70  FUN_004a0b70  size=42  [between]
undefined4 __fastcall FUN_004a0b70(int param_1)

{
  if ((float)*(int *)(param_1 + 0x870) <=
      (float)*(int *)(param_1 + 0x874) * *(float *)(param_1 + 0x1a64)) {
    *(undefined4 *)(param_1 + 0x1a50) = 1;
    return 1;
  }
  return 0;
}

// 004A0BA0  FUN_004a0ba0  size=24  [between]
undefined4 __fastcall FUN_004a0ba0(int param_1)

{
  if (*(int *)(param_1 + 0x1a44) < 1) {
    *(undefined4 *)(param_1 + 0x1a58) = 1;
    return 1;
  }
  return 0;
}

// 004A0BC0  FUN_004a0bc0  size=24  [between]
undefined4 __fastcall FUN_004a0bc0(int param_1)

{
  if (*(int *)(param_1 + 0x1a48) < 1) {
    *(undefined4 *)(param_1 + 0x1a5c) = 1;
    return 1;
  }
  return 0;
}

// 004A0BE0  FUN_004a0be0  size=24  [between]
undefined4 __fastcall FUN_004a0be0(int param_1)

{
  if (*(int *)(param_1 + 0x1a4c) < 1) {
    *(undefined4 *)(param_1 + 0x1a60) = 1;
    return 1;
  }
  return 0;
}

// 004A0C00  Em0100::vf208  size=36  [class]
void __thiscall Em0100::vf208(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x40);
  param_2[2] = *(undefined4 *)(param_1 + 0x48);
  param_2[3] = *(undefined4 *)(param_1 + 0x4c);
  param_2[1] = *(float *)(param_1 + 0x44) + 1.5;
  return;
}

// 004A0C30  Em0100::vf6C  size=5  [class]
void __fastcall Em0100::vf6C(int param_1)

{
  if (*(int *)(param_1 + 0x4f0) != 0) {
    FUN_00a7ce90();
    return;
  }
  return;
}

// 004A0C40  Em0100::vf70  size=5  [class]
void __fastcall Em0100::vf70(int param_1)

{
  if (*(int *)(param_1 + 0x4f0) != 0) {
    FUN_00a7cec0();
    return;
  }
  return;
}

// 004A0C70  Em0100::vf110  size=58  [class]
void Em0100::vf110(undefined4 param_1)

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

// 004A0CB0  Em0100::vf368  size=35  [class]
undefined1 __fastcall Em0100::vf368(int param_1)

{
  undefined1 uVar1;
  
  uVar1 = (*(uint *)(param_1 + 0xe4c) & 0x40000) != 0;
  if ((*(uint *)(param_1 + 0xe4c) & 0x80000) != 0) {
    uVar1 = 2;
  }
  return uVar1;
}

// 004A0CE0  FUN_004a0ce0  size=184  [between]
undefined4 FUN_004a0ce0(void)

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
LAB_004a0d20:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_004a0d25;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < (byte)pcVar4[1];
    if (bVar1 != pcVar4[1]) goto LAB_004a0d20;
    pbVar2 = pbVar2 + 2;
    pcVar4 = pcVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_004a0d25:
  if (iVar3 != 0) {
    pcVar4 = "P220_SEARCH_GATE_2";
    pbVar2 = &DAT_018b917c;
    do {
      bVar1 = *pbVar2;
      bVar5 = bVar1 < (byte)*pcVar4;
      if (bVar1 != *pcVar4) {
LAB_004a0d53:
        iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
        goto LAB_004a0d58;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar5 = bVar1 < (byte)pcVar4[1];
      if (bVar1 != pcVar4[1]) goto LAB_004a0d53;
      pbVar2 = pbVar2 + 2;
      pcVar4 = pcVar4 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_004a0d58:
    if (iVar3 != 0) {
      pcVar4 = "P220_SEARCH_GATE_3";
      pbVar2 = &DAT_018b917c;
      do {
        bVar1 = *pbVar2;
        bVar5 = bVar1 < (byte)*pcVar4;
        if (bVar1 != *pcVar4) {
LAB_004a0d86:
          iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
          goto LAB_004a0d8b;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar5 = bVar1 < (byte)pcVar4[1];
        if (bVar1 != pcVar4[1]) goto LAB_004a0d86;
        pbVar2 = pbVar2 + 2;
        pcVar4 = pcVar4 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_004a0d8b:
      if (iVar3 != 0) {
        return 0;
      }
    }
  }
  return 1;
}

// 004A0DB0  Em0100::vf1C0  size=5  [class]
void __thiscall Em0100::vf1C0(int *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int unaff_retaddr;
  undefined4 uVar7;
  undefined *puVar8;
  
  piVar5 = param_2;
  uVar6 = 0;
  if (param_2 == (int *)0x0) {
    param_2 = (int *)0x0;
  }
  else {
    puVar8 = &DAT_01be9ca0;
    (**(code **)(*param_2 + 4))(&DAT_01be9ca0);
    iVar2 = FUN_00dd6d80(puVar8);
    param_2 = (int *)(-(uint)(iVar2 != 0) & (uint)piVar5);
  }
  piVar5 = param_3;
  if (param_3 != (int *)0x0) {
    puVar8 = &DAT_01be9ca0;
    (**(code **)(*param_3 + 4))(&DAT_01be9ca0);
    iVar2 = FUN_00dd6d80(puVar8);
    uVar6 = -(uint)(iVar2 != 0) & (uint)piVar5;
  }
  uVar3 = FUN_009f8b40();
  FUN_009f8ae0(uVar3);
  if (uVar6 != 0) {
    uVar3 = FUN_00a7c7f0();
    FUN_00a7c940(uVar3);
    FUN_00a7c960(&param_2);
    uVar3 = FUN_009f8b40();
    FUN_009f8ae0(uVar3);
  }
  uVar1 = param_1[300];
  if (uVar1 < 0x20141) {
    if (uVar1 != 0x20140) {
      switch(uVar1) {
      case 0x20010:
      case 0x20050:
        goto switchD_00ace80d_caseD_20010;
      case 0x20030:
      case 0x20033:
      case 0x20035:
        FUN_00a92f90();
        FUN_00e26e90();
        FUN_00e272b0(0x2003f,0x20030);
        break;
      case 0x20071:
        iVar2 = param_1[0x12d];
        FUN_00a92f90();
        FUN_00e26e90();
        FUN_00e272b0(iVar2,0x20070);
        break;
      case 0x20081:
        iVar2 = param_1[0x12d];
        FUN_00a92f90();
        FUN_00e26e90();
        FUN_00e272b0(iVar2,0x20080);
      }
      goto switchD_00ace80d_caseD_20011;
    }
switchD_00ace80d_caseD_20010:
    FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e272b0(0x20012,0x20010);
    FUN_00a92f90();
    iVar2 = 0x2014f;
  }
  else {
    switch(uVar1) {
    case 0x20142:
    case 0x20144:
    case 0x20160:
      goto switchD_00ace80d_caseD_20010;
    default:
      goto switchD_00ace80d_caseD_20011;
    case 0x20150:
    case 0x20152:
      FUN_00a92f90();
      FUN_00e26e90();
      FUN_00e272b0(0x20012,0x20010);
      FUN_00a92f90();
      iVar2 = 0x2015f;
      break;
    case 0x20170:
      FUN_00a92f90();
      FUN_00e26e90();
      FUN_00e272b0(0x20012,0x20010);
      iVar2 = param_1[300];
      FUN_00a92f90();
    }
  }
  FUN_00e27330(iVar2,0x20010);
switchD_00ace80d_caseD_20011:
  iVar2 = 0;
  iVar4 = FUN_00ac89d0();
  if (iVar4 == 0) {
    iVar4 = param_1[0xcc];
  }
  else {
    iVar4 = *(int *)(iVar4 + 0x330);
  }
  if (iVar4 != 0) {
    iVar2 = *(int *)(iVar4 + 0xcc);
  }
  param_1[0x295] = iVar2;
  if ((unaff_retaddr != 0) && (piVar5 = (int *)FUN_00acdea0(), piVar5 != (int *)0x0)) {
    puVar8 = &DAT_01be9c78;
    (**(code **)(*piVar5 + 4))(&DAT_01be9c78);
    iVar2 = FUN_00dd6d80(puVar8);
    if (iVar2 != 0) {
      uVar3 = FUN_009f8b40();
      FUN_009f8ae0(uVar3);
      iVar2 = *param_1;
      param_1[0x139] = piVar5[0x139];
      uVar3 = (**(code **)(*piVar5 + 0x1d8))();
      (**(code **)(iVar2 + 0x1d4))(uVar3);
      if ((piVar5[0x351] & 0x80000000U) != 0) {
        uVar7 = 0;
        uVar3 = FUN_00a82d50(0);
        FUN_00a88b50(uVar3,uVar7);
      }
      FUN_0040ac60(piVar5 + 0x2ac);
      *(short *)(param_1 + 0x36b) = (short)piVar5[0x36b];
      param_1[0x36c] = piVar5[0x36c];
      *(char *)(param_1 + 0x36d) = (char)piVar5[0x36d];
      param_1[0x28c] = piVar5[0x28c];
      param_1[0x28d] = piVar5[0x28d];
      param_1[0x28e] = piVar5[0x28e];
      param_1[0x28f] = piVar5[0x28f];
      param_1[0x290] = piVar5[0x290];
      *(char *)(param_1 + 0x291) = (char)piVar5[0x291];
      param_1[0x292] = piVar5[0x292];
      param_1[0x12a] = piVar5[0x12a];
      param_1[0x296] = piVar5[0x296];
    }
  }
  (**(code **)(*param_1 + 0x334))(uVar6,unaff_retaddr);
  return;
}

// 004A0DD0  FUN_004a0dd0  size=71  [between]
void __fastcall FUN_004a0dd0(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0xdf4) == 0x1000a) &&
     ((iVar1 = FUN_00a82d50(), iVar1 == 2 || (iVar1 = FUN_00a82d50(), iVar1 == 3)))) {
    *(undefined4 *)(param_1 + 0x61c) = 6;
    *(undefined4 *)(param_1 + 0xdf4) = 0x10009;
  }
  return;
}

// 004A0ED0  FUN_004a0ed0  size=521  [between]
void __fastcall FUN_004a0ed0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x1b68) = 1;
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    uVar2 = 0x62;
    goto LAB_004a0f24;
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
    if (*(int *)(param_1 + 0x1fe0) != 0) {
      return;
    }
    if (*(float *)(param_1 + 0x1bb4) < *(float *)(param_1 + 0xa90)) {
      return;
    }
    *(undefined4 *)(param_1 + 0x1fe0) = 1;
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
LAB_004a0f24:
    FUN_00aa4080(uVar2,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    break;
  default:
    goto switchD_004a0ef0_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x61c) = 4;
    return;
  }
switchD_004a0ef0_default:
  return;
}

// 004A1130  FUN_004a1130  size=498  [between]
void __fastcall FUN_004a1130(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x1b68) = 1;
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    uVar2 = 0x65;
    goto LAB_004a1184;
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
    if (*(int *)(param_1 + 0x1fe0) != 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x1fe0) = 1;
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
LAB_004a1184:
    FUN_00aa4080(uVar2,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    break;
  default:
    goto switchD_004a1150_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x61c) = 4;
    return;
  }
switchD_004a1150_default:
  return;
}

// 004A1370  FUN_004a1370  size=498  [between]
void __fastcall FUN_004a1370(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x1b68) = 1;
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    uVar2 = 0x65;
    goto LAB_004a13c4;
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
    if (*(int *)(param_1 + 0x1fe0) != 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x1fe0) = 1;
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
LAB_004a13c4:
    FUN_00aa4080(uVar2,0,0x3e088889,0x3f800000,0x8000040,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    break;
  default:
    goto switchD_004a1390_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x61c) = 4;
    return;
  }
switchD_004a1390_default:
  return;
}

// 004A15B0  FUN_004a15b0  size=521  [between]
void __fastcall FUN_004a15b0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x1b68) = 1;
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    uVar2 = 100;
    goto LAB_004a1604;
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
    if (*(int *)(param_1 + 0x1fe0) != 0) {
      return;
    }
    if (*(float *)(param_1 + 0x1bb4) < *(float *)(param_1 + 0xa90)) {
      return;
    }
    *(undefined4 *)(param_1 + 0x1fe0) = 1;
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
LAB_004a1604:
    FUN_00aa4080(uVar2,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    break;
  default:
    goto switchD_004a15d0_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x61c) = 4;
    return;
  }
switchD_004a15d0_default:
  return;
}

// 004A1860  FUN_004a1860  size=136  [between]
void __thiscall FUN_004a1860(int param_1,int param_2)

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

// 004A18F0  FUN_004a18f0  size=140  [between]
void __thiscall FUN_004a18f0(int param_1,int param_2)

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

// 004A1980  FUN_004a1980  size=101  [between]
void FUN_004a1980(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  if (param_1 != 0) {
    FUN_00a92f90();
    iVar1 = FUN_00e26e90();
    if (iVar1 == 0) {
      fVar2 = (float10)-1.0;
    }
    else {
      fVar2 = (float10)FUN_00e36970(0);
    }
    FUN_00a92f90();
    iVar1 = FUN_00e26e90();
    if (iVar1 != 0) {
      Animation::Motion::Unit::setCurrentTime(0,(float)fVar2);
    }
  }
  return;
}

// 004A19F0  FUN_004a19f0  size=42  [between]
void FUN_004a19f0(void)

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

// 004A1A50  FUN_004a1a50  size=32  [between]
void __fastcall FUN_004a1a50(int *param_1)

{
  FUN_00b7d8b0();
  (**(code **)(*param_1 + 800))(0x3c888889);
  return;
}

// 004A1A70  FUN_004a1a70  size=32  [between]
void __fastcall FUN_004a1a70(int *param_1)

{
  FUN_00b7d8b0();
  (**(code **)(*param_1 + 800))(0x3c888889);
  return;
}

// 004A1A90  FUN_004a1a90  size=32  [between]
void __fastcall FUN_004a1a90(int *param_1)

{
  FUN_00b7d8b0();
  (**(code **)(*param_1 + 800))(0x3c888889);
  return;
}

// 004A1B90  FUN_004a1b90  size=31  [between]
void __fastcall FUN_004a1b90(int *param_1)

{
  param_1[0x393] = param_1[0x393] | 0x20000;
  (**(code **)(*param_1 + 0x220))(0x40400000);
  return;
}

// 004A1BB0  Em0100::vf300  size=25  [class]
void __fastcall Em0100::vf300(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x588) + 0x130);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *(undefined4 *)(param_1 + 0x4a0);
  }
  return;
}

// 004A1BD0  Em0100::getAttackInfo  size=382  [class]
undefined4 __thiscall Em0100::getAttackInfo(int param_1,ushort *param_2)

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
  if (iVar3 != 0) {
    iVar3 = CollisionAttackData::CollisionAttackData();
    if (iVar3 != 0) {
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
        *(undefined1 *)((int)puVar2 + 0x11) = 10;
      }
      else {
        if (uVar1 == 5) {
          *puVar2 = 0x113;
          puVar2[0x23] = puVar2[0x23] | 0x20000100;
          puVar2[0x24] = puVar2[0x24] | 0x2000000;
          *(undefined2 *)(puVar2 + 0x21) = 0x1701;
          *(undefined1 *)((int)puVar2 + 0x11) = 10;
          return unaff_EBX;
        }
        if (uVar1 == 6) {
          *puVar2 = 0x113;
          puVar2[0x23] = puVar2[0x23] | 0x20000000;
          puVar2[0x24] = puVar2[0x24] | 0x2000000;
          *(undefined2 *)(puVar2 + 0x21) = 0x1701;
          *(undefined1 *)((int)puVar2 + 0x11) = 10;
          return unaff_EBX;
        }
      }
      return unaff_EBX;
    }
  }
  FUN_00dd5650(&DAT_0163e964);
  return 0;
}

// 004A1D50  Em0100::vf44  size=345  [class]
void __fastcall Em0100::vf44(int param_1)

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
  RayCastManager::getWork(param_1 + 0x1bf0);
  RayCastManager::getWork(param_1 + 0x1bf4);
  RayCastManager::getWork(param_1 + 0x1bf8);
  RayCastManager::getWork(param_1 + 0x1bfc);
  RayCastManager::getWork(param_1 + 0x1c00);
  RayCastManager::getWork(param_1 + 0x1c04);
  RayCastManager::getWork(param_1 + 0x1c08);
  RayCastManager::getWork(param_1 + 0x1c0c);
  RayCastManager::getWork(param_1 + 0x1c14);
  RayCastManager::getWork(param_1 + 0x1c18);
  if (*(int *)(param_1 + 0xa84) != 0) {
    RayCastManager::getWork(param_1 + 0x1c10);
  }
  BehaviorEmBase::vf44();
  return;
}

// 004A1EB0  FUN_004a1eb0  size=1837  [between]
void __fastcall FUN_004a1eb0(int param_1)

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
  
  if (*(float *)(param_1 + 0x1c1c) < 30.0) {
    *(float *)(param_1 + 0x1c1c) = *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0x1c1c);
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
  iVar1 = FUN_004a0ce0();
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
    FUN_0090fa30(param_1 + 0x1c14,0,&fStack_a0,0x3dcccccd,&local_b0,uVar3,"Blan View FrontRight");
    fStack_a0 = fStack_d0 + local_e0;
    fStack_9c = fStack_cc + local_dc;
    fStack_98 = fStack_c8 + local_d8;
    fStack_94 = fStack_c4 + local_d4;
    FUN_0090fa30(param_1 + 0x1c18,0,&fStack_a0,0x3dcccccd,&local_f0,uVar3,"Blan View FrontLeft");
  }
  switch(*(undefined4 *)(param_1 + 0x1c20)) {
  case 0:
    local_f0 = 0.0;
    local_ec = 0.0;
    local_e8 = 18.0;
    FUN_00ddc1d0(local_50,param_1 + 0x90,5);
    D3DXVec3TransformNormal(&local_f0,&local_f0,local_50);
    FUN_0090fa30(param_1 + 0x1bf0,0,&local_ec,0x3dcccccd,&stack0xffffff04,uVar2,"Blan View Front");
    pcVar4 = "Blan View Front Ground";
    iVar1 = param_1 + 0x1c00;
    break;
  case 1:
    local_f0 = 0.0;
    local_ec = 0.0;
    local_e8 = -15.0;
    FUN_00ddc1d0(local_50,param_1 + 0x90,5);
    D3DXVec3TransformNormal(&local_f0,&local_f0,local_50);
    FUN_0090fa30(param_1 + 0x1bf4,0,&local_ec,0x3dcccccd,&stack0xffffff04,uVar2,"Blan View Back");
    pcVar4 = "Blan View Back Ground";
    iVar1 = param_1 + 0x1c04;
    break;
  case 2:
    local_f0 = -15.0;
    local_ec = 0.0;
    local_e8 = 0.0;
    FUN_00ddc1d0(local_50,param_1 + 0x90,5);
    D3DXVec3TransformNormal(&local_f0,&local_f0,local_50);
    FUN_0090fa30(param_1 + 0x1bf8,0,&local_ec,0x3dcccccd,&stack0xffffff04,uVar2,"Blan View Right");
    pcVar4 = "Blan View Right Ground";
    iVar1 = param_1 + 0x1c08;
    break;
  case 3:
    local_f0 = 15.0;
    local_ec = 0.0;
    local_e8 = 0.0;
    FUN_00ddc1d0(local_50,param_1 + 0x90,5);
    D3DXVec3TransformNormal(&local_f0,&local_f0,local_50);
    local_ec = local_ec + 0.2;
    FUN_0090fa30(param_1 + 0x1bfc,0,&local_e0,0x3dcccccd,&local_f0,uVar2,"Blan View Left");
    FUN_0090fa30(param_1 + 0x1c0c,0,&local_e0,0x3dcccccd,&local_f0,uVar3,"Blan View Left Ground");
    *(int *)(param_1 + 0x1c20) = *(int *)(param_1 + 0x1c20) + 1;
  case 4:
    iVar1 = *(int *)(param_1 + 0xa84);
    if (iVar1 != 0) {
      local_f0 = *(float *)(iVar1 + 0x40) - local_e0;
      local_e8 = *(float *)(iVar1 + 0x48) - local_d8;
      fStack_e4 = *(float *)(iVar1 + 0x4c) - local_d4;
      local_ec = (*(float *)(iVar1 + 0x44) - local_dc) + 0.2;
      FUN_0090fa30(param_1 + 0x1c10,0,&local_e0,0x3dcccccd,&local_f0,uVar3,"Blan View Pl Ground");
    }
    *(undefined4 *)(param_1 + 0x1c20) = 0;
    *(undefined4 *)(param_1 + 0x1c1c) = 0;
    return;
  default:
    return;
  }
  FUN_0090fa30(iVar1,0,&local_ec,0x3dcccccd,&stack0xffffff04,uVar3,pcVar4);
  *(int *)(param_1 + 0x1c20) = *(int *)(param_1 + 0x1c20) + 1;
  return;
}

// 004A2600  FUN_004a2600  size=215  [between]
int __fastcall FUN_004a2600(int param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  float local_4;
  
  local_4 = 5.0;
  pfVar1 = (float *)(param_1 + 0x1c30);
  iVar6 = 0;
  iVar5 = FUN_00907640(param_1 + 0x1c0c,0,pfVar1);
  if (iVar5 != 0) {
    iVar6 = 2;
    fVar2 = *(float *)(param_1 + 0x40) - *pfVar1;
    fVar4 = *(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x1c34);
    fVar3 = *(float *)(param_1 + 0x48) - *(float *)(param_1 + 0x1c38);
    local_4 = fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3;
  }
  iVar5 = FUN_00907640(param_1 + 0x1c08,0,pfVar1);
  if (iVar5 == 0) {
    return iVar6;
  }
  fVar2 = *(float *)(param_1 + 0x40) - *pfVar1;
  fVar4 = *(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x1c34);
  fVar3 = *(float *)(param_1 + 0x48) - *(float *)(param_1 + 0x1c38);
  fVar2 = fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3;
  if ((iVar6 == 2) && (local_4 <= fVar2)) {
    if (fVar2 <= local_4) {
      return 0;
    }
    return 2;
  }
  return 3;
}

// 004A26E0  FUN_004a26e0  size=1013  [between]
undefined4 __fastcall FUN_004a26e0(int param_1)

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
  
  puStack_64 = (undefined4 *)0x4a26f9;
  iVar3 = FUN_00a82a20();
  iVar4 = *(int *)(param_1 + 0xa84);
  local_50 = *(float *)(iVar4 + 0x40) - *(float *)(iVar3 + 0x40);
  local_4c = *(float *)(iVar4 + 0x44) - *(float *)(iVar3 + 0x44);
  local_48 = *(float *)(iVar4 + 0x48) - *(float *)(iVar3 + 0x48);
  local_44 = *(float *)(iVar4 + 0x4c) - *(float *)(iVar3 + 0x4c);
  puStack_64 = (undefined4 *)0x4a2732;
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

// 004A2AE0  Em0100::vf268  size=103  [class]
undefined4 __thiscall Em0100::vf268(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

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

// 004A2B50  FUN_004a2b50  size=254  [between]
void __thiscall
FUN_004a2b50(int param_1,uint param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined4 uVar1;
  int iVar2;
  
  if (((*(int *)(param_1 + 0x4e4) != 0) && (param_2 != 0x80001)) && (param_2 != 0x80000)) {
    return;
  }
  if ((param_2 & 0xffff0000) != 0x80000) {
    uVar1 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xde4) = uVar1;
    iVar2 = FUN_00a8cab0();
    if (((iVar2 == 0x10000) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x10009)) ||
       ((iVar2 = FUN_00a8cab0(), iVar2 == 0x1000a || (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000d)))) {
      uVar1 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0x1bec) = uVar1;
    }
    if (*(int *)(param_1 + 0x1b60) != 0) {
      *(undefined4 *)(param_1 + 0x1bec) = 0x1000b;
    }
    *(undefined4 *)(param_1 + 0xde8) = *(undefined4 *)(param_1 + 0xdd0);
  }
  FUN_004a0760();
  FUN_00a8caf0(param_2,param_4,param_5,param_6);
  *(int *)(param_1 + 0xdd0) = param_3;
  if (-1 < param_3) {
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0xe30) = 0;
    return;
  }
  FUN_00a962d0(1,0);
  *(undefined4 *)(param_1 + 0xe30) = 0x40;
  return;
}

// 004A2C50  Em0100::vf34C  size=185  [class]
void __fastcall Em0100::vf34C(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x4e4) == 0) {
    uVar1 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xde4) = uVar1;
    iVar2 = FUN_00a8cab0();
    if ((((iVar2 == 0x10000) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x10009)) ||
        (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000a)) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000d)) {
      uVar1 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0x1bec) = uVar1;
    }
    if (*(int *)(param_1 + 0x1b60) != 0) {
      *(undefined4 *)(param_1 + 0x1bec) = 0x1000b;
    }
    *(undefined4 *)(param_1 + 0xde8) = *(undefined4 *)(param_1 + 0xdd0);
    FUN_004a0760();
    FUN_00a8caf0(0x10000,0,0,0);
    *(undefined4 *)(param_1 + 0xdd0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0xe30) = 0;
    return;
  }
  return;
}

// 004A2D10  FUN_004a2d10  size=217  [between]
void __thiscall FUN_004a2d10(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x1be4) = param_2;
  *(undefined4 *)(param_1 + 0xdd4) = 1;
  *(undefined4 *)(param_1 + 0x1be8) = param_3;
  if (*(int *)(param_1 + 0x4e4) == 0) {
    uVar1 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xde4) = uVar1;
    iVar2 = FUN_00a8cab0();
    if ((((iVar2 == 0x10000) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x10009)) ||
        (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000a)) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000d)) {
      uVar1 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0x1bec) = uVar1;
    }
    if (*(int *)(param_1 + 0x1b60) != 0) {
      *(undefined4 *)(param_1 + 0x1bec) = 0x1000b;
    }
    *(undefined4 *)(param_1 + 0xde8) = *(undefined4 *)(param_1 + 0xdd0);
    FUN_004a0760();
    FUN_00a8caf0(0x10001,0,0,0);
    *(undefined4 *)(param_1 + 0xdd0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0xe30) = 0;
    return;
  }
  return;
}

// 004A2DF0  FUN_004a2df0  size=217  [between]
void __thiscall FUN_004a2df0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x1be4) = param_2;
  *(undefined4 *)(param_1 + 0xdd4) = 2;
  *(undefined4 *)(param_1 + 0x1be8) = param_3;
  if (*(int *)(param_1 + 0x4e4) == 0) {
    uVar1 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xde4) = uVar1;
    iVar2 = FUN_00a8cab0();
    if ((((iVar2 == 0x10000) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x10009)) ||
        (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000a)) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000d)) {
      uVar1 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0x1bec) = uVar1;
    }
    if (*(int *)(param_1 + 0x1b60) != 0) {
      *(undefined4 *)(param_1 + 0x1bec) = 0x1000b;
    }
    *(undefined4 *)(param_1 + 0xde8) = *(undefined4 *)(param_1 + 0xdd0);
    FUN_004a0760();
    FUN_00a8caf0(0x10002,0,0,0);
    *(undefined4 *)(param_1 + 0xdd0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0xe30) = 0;
    return;
  }
  return;
}

// 004A2ED0  FUN_004a2ed0  size=217  [between]
void __thiscall FUN_004a2ed0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x1be4) = param_2;
  *(undefined4 *)(param_1 + 0xdd4) = 1;
  *(undefined4 *)(param_1 + 0x1be8) = param_3;
  if (*(int *)(param_1 + 0x4e4) == 0) {
    uVar1 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xde4) = uVar1;
    iVar2 = FUN_00a8cab0();
    if ((((iVar2 == 0x10000) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x10009)) ||
        (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000a)) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000d)) {
      uVar1 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0x1bec) = uVar1;
    }
    if (*(int *)(param_1 + 0x1b60) != 0) {
      *(undefined4 *)(param_1 + 0x1bec) = 0x1000b;
    }
    *(undefined4 *)(param_1 + 0xde8) = *(undefined4 *)(param_1 + 0xdd0);
    FUN_004a0760();
    FUN_00a8caf0(0x10003,0,0,0);
    *(undefined4 *)(param_1 + 0xdd0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0xe30) = 0;
    return;
  }
  return;
}

// 004A2FB0  FUN_004a2fb0  size=217  [between]
void __thiscall FUN_004a2fb0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x1be4) = param_2;
  *(undefined4 *)(param_1 + 0xdd4) = 2;
  *(undefined4 *)(param_1 + 0x1be8) = param_3;
  if (*(int *)(param_1 + 0x4e4) == 0) {
    uVar1 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xde4) = uVar1;
    iVar2 = FUN_00a8cab0();
    if ((((iVar2 == 0x10000) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x10009)) ||
        (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000a)) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000d)) {
      uVar1 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0x1bec) = uVar1;
    }
    if (*(int *)(param_1 + 0x1b60) != 0) {
      *(undefined4 *)(param_1 + 0x1bec) = 0x1000b;
    }
    *(undefined4 *)(param_1 + 0xde8) = *(undefined4 *)(param_1 + 0xdd0);
    FUN_004a0760();
    FUN_00a8caf0(0x10004,0,0,0);
    *(undefined4 *)(param_1 + 0xdd0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0xe30) = 0;
    return;
  }
  return;
}

// 004A3090  FUN_004a3090  size=217  [between]
void __thiscall FUN_004a3090(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x1be4) = param_2;
  *(undefined4 *)(param_1 + 0xdd4) = 1;
  *(undefined4 *)(param_1 + 0x1be8) = param_3;
  if (*(int *)(param_1 + 0x4e4) == 0) {
    uVar1 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xde4) = uVar1;
    iVar2 = FUN_00a8cab0();
    if ((((iVar2 == 0x10000) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x10009)) ||
        (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000a)) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000d)) {
      uVar1 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0x1bec) = uVar1;
    }
    if (*(int *)(param_1 + 0x1b60) != 0) {
      *(undefined4 *)(param_1 + 0x1bec) = 0x1000b;
    }
    *(undefined4 *)(param_1 + 0xde8) = *(undefined4 *)(param_1 + 0xdd0);
    FUN_004a0760();
    FUN_00a8caf0(0x1000c,0,0,0);
    *(undefined4 *)(param_1 + 0xdd0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0xe30) = 0;
    return;
  }
  return;
}

// 004A3170  FUN_004a3170  size=217  [between]
void __thiscall FUN_004a3170(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x1be4) = param_2;
  *(undefined4 *)(param_1 + 0xdd4) = 2;
  *(undefined4 *)(param_1 + 0x1be8) = param_3;
  if (*(int *)(param_1 + 0x4e4) == 0) {
    uVar1 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xde4) = uVar1;
    iVar2 = FUN_00a8cab0();
    if ((((iVar2 == 0x10000) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x10009)) ||
        (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000a)) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000d)) {
      uVar1 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0x1bec) = uVar1;
    }
    if (*(int *)(param_1 + 0x1b60) != 0) {
      *(undefined4 *)(param_1 + 0x1bec) = 0x1000b;
    }
    *(undefined4 *)(param_1 + 0xde8) = *(undefined4 *)(param_1 + 0xdd0);
    FUN_004a0760();
    FUN_00a8caf0(0x1000c,0,0,0);
    *(undefined4 *)(param_1 + 0xdd0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0xe30) = 0;
    return;
  }
  return;
}

// 004A3340  FUN_004a3340  size=844  [between]
void __fastcall FUN_004a3340(int param_1)

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
        if ((iVar3 != iVar4) || (*(short *)(iVar2 + 0x38) == 3)) goto LAB_004a3637;
      }
      FUN_00c4d210(iVar4,3,0);
    }
LAB_004a3637:
    fVar1 = *(float *)(param_1 + 0xa8c);
    if (NAN(fVar1) || 900.0 < fVar1 == (fVar1 == 900.0)) {
      return;
    }
    FUN_00c4d210(*(undefined4 *)(param_1 + 0x4f0),1,0);
    FUN_00c4d210(*(undefined4 *)(param_1 + 0x4f0),2,0);
    goto LAB_004a3674;
  }
  iVar2 = FUN_00a12210(0x103);
  fVar5 = (float10)FUN_00a8ec30(iVar2 + 0x40);
  fVar5 = (float10)FUN_00ddba30((float)(fVar5 - (float10)*(float *)(param_1 + 0x94)));
  fVar5 = (float10)FUN_00ddba30((float)((float10)*(float *)(param_1 + 0xa9c) - fVar5));
  if (((fVar5 < (float10)-1.5707964) ||
      (fVar5 < (float10)1.5707964 == (fVar5 == (float10)1.5707964))) ||
     (*(int *)(param_1 + 0xe38) == 0)) {
    iVar2 = FUN_00c4ec80();
    if (iVar2 == 0) {
      iVar4 = *(int *)(param_1 + 0x4f0);
LAB_004a33f4:
      uVar6 = 0;
      goto LAB_004a33f9;
    }
    iVar3 = FUN_00a81330();
    iVar4 = *(int *)(param_1 + 0x4f0);
    if ((iVar3 == iVar4) && (*(short *)(iVar2 + 0x38) != 1)) goto LAB_004a33f4;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x4f0);
    uVar6 = 1;
LAB_004a33f9:
    FUN_00c4d210(iVar4,1,uVar6);
  }
  iVar2 = FUN_00a12210(0x203);
  fVar5 = (float10)FUN_00a8ec30(iVar2 + 0x40);
  fVar5 = (float10)FUN_00ddba30((float)(fVar5 - (float10)*(float *)(param_1 + 0x94)));
  fVar5 = (float10)FUN_00ddba30((float)((float10)*(float *)(param_1 + 0xa9c) - fVar5));
  if (((fVar5 < (float10)-1.5707964) ||
      (fVar5 < (float10)1.5707964 == (fVar5 == (float10)1.5707964))) ||
     (*(int *)(param_1 + 0xe34) == 0)) {
    iVar2 = FUN_00c4ec80();
    if (iVar2 == 0) {
      iVar4 = *(int *)(param_1 + 0x4f0);
      uVar6 = 0;
      goto LAB_004a34a6;
    }
    iVar3 = FUN_00a81330();
    iVar4 = *(int *)(param_1 + 0x4f0);
    if ((iVar3 == iVar4) && (*(short *)(iVar2 + 0x38) != 2)) {
      uVar6 = 0;
      goto LAB_004a34a6;
    }
  }
  else {
    iVar4 = *(int *)(param_1 + 0x4f0);
    uVar6 = 1;
LAB_004a34a6:
    FUN_00c4d210(iVar4,2,uVar6);
  }
  iVar2 = FUN_00a12210(0x303);
  fVar5 = (float10)FUN_00a8ec30(iVar2 + 0x40);
  fVar5 = (float10)FUN_00ddba30((float)(fVar5 - (float10)*(float *)(param_1 + 0x94)));
  fVar5 = (float10)FUN_00ddba30((float)((float10)*(float *)(param_1 + 0xa9c) - fVar5));
  if ((((float10)-1.5707964 <= fVar5) &&
      (fVar5 < (float10)1.5707964 != (fVar5 == (float10)1.5707964))) &&
     (*(int *)(param_1 + 0xe3c) != 0)) {
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
LAB_004a3674:
  FUN_00c4d210(*(undefined4 *)(param_1 + 0x4f0),3,0);
  return;
}

// 004A3690  Em0100::vf33C  size=3114  [class]
void __thiscall Em0100::vf33C(int *param_1,undefined4 *param_2,uint *param_3)

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
      (iVar4 = FUN_0043f860(8), iVar4 != 0)))) goto LAB_004a3908;
  if (((*(byte *)(param_1 + 0x373) & 1) != 0) &&
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
    goto LAB_004a3908;
  }
  if (((param_3[4] & 0x20000000) != 0) && ((param_3[2] >> 0x1d & 1) != 0)) {
    iVar4 = FUN_0043f830(5);
    if (iVar4 != 0) {
      puVar2[1] = puVar2[1] | 4;
      if (param_1[0x38e] != 0) {
        param_1[0x38e] = 0;
        FUN_00c4d210(param_1[0x13c],1,0);
        (**(code **)(param_1[0x488] + 8))(0x3f800000,0,0);
      }
      *puVar2 = 2;
      param_3[6] = param_1[0x12d];
      return;
    }
    iVar4 = FUN_0043f830(9);
    if (iVar4 == 0) goto LAB_004a3bb9;
    puVar2[1] = puVar2[1] | 8;
    if (param_1[0x38f] != 0) {
      param_1[0x38f] = 0;
      FUN_00c4d210(param_1[0x13c],3,0);
LAB_004a3b83:
      (**(code **)(param_1[0x4b4] + 8))(0x3f800000,0,0);
    }
LAB_004a3ba2:
    *puVar2 = 3;
LAB_004a3ba8:
    param_3[6] = param_1[0x12d];
    return;
  }
LAB_004a3bb9:
  iVar4 = FUN_0043f860(5);
  if (iVar4 == 0) {
LAB_004a3cac:
    iVar4 = FUN_0043f860(9);
    if (iVar4 != 0) {
      iVar4 = FUN_0043f830(2);
      if (iVar4 != 0) {
        puVar2[1] = puVar2[1] | 2;
        if (param_1[0x38d] != 0) {
          param_1[0x38d] = 0;
          FUN_00c4d210(param_1[0x13c],2,0);
          (**(code **)(param_1[0x45c] + 8))(0x3f800000,0,0);
        }
        *puVar2 = 8;
        param_3[6] = param_1[0x12d];
        return;
      }
      iVar4 = FUN_0043f830(5);
      if (iVar4 != 0) {
        puVar2[1] = puVar2[1] | 4;
        if (param_1[0x38e] != 0) {
          param_1[0x38e] = 0;
          FUN_00c4d210(param_1[0x13c],1,0);
          (**(code **)(param_1[0x488] + 8))(0x3f800000,0,0);
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
      if (param_1[0x38d] != 0) {
        param_1[0x38d] = 0;
        FUN_00c4d210(param_1[0x13c],2,0);
        (**(code **)(param_1[0x45c] + 8))(0x3f800000,0,0);
      }
      puVar2[1] = puVar2[1] | 4;
      if (param_1[0x38e] != 0) {
        param_1[0x38e] = 0;
        FUN_00c4d210(param_1[0x13c],1,0);
        (**(code **)(param_1[0x488] + 8))(0x3f800000,0,0);
      }
      puVar2[1] = puVar2[1] | 8;
      if (param_1[0x38f] != 0) {
        param_1[0x38f] = 0;
        FUN_00c4d210(param_1[0x13c],3,0);
        (**(code **)(param_1[0x4b4] + 8))(0x3f800000,0,0);
      }
      *puVar2 = 10;
      param_3[6] = param_1[0x12d];
      return;
    }
    iVar4 = FUN_0043f830(2);
    if ((iVar4 != 0) && (iVar4 = FUN_0043f830(5), iVar4 != 0)) {
      puVar2[1] = puVar2[1] | 2;
      if (param_1[0x38d] != 0) {
        param_1[0x38d] = 0;
        FUN_00c4d210(param_1[0x13c],2,0);
        (**(code **)(param_1[0x45c] + 8))(0x3f800000,0,0);
      }
      puVar2[1] = puVar2[1] | 4;
      if (param_1[0x38e] != 0) {
        param_1[0x38e] = 0;
        FUN_00c4d210(param_1[0x13c],1,0);
        (**(code **)(param_1[0x488] + 8))(0x3f800000,0,0);
      }
      *puVar2 = 2;
      param_3[6] = param_1[0x12d];
      return;
    }
    iVar4 = FUN_0043f830(2);
    if ((iVar4 != 0) && (iVar4 = FUN_0043f830(9), iVar4 != 0)) {
      puVar2[1] = puVar2[1] | 2;
      if (param_1[0x38d] != 0) {
        param_1[0x38d] = 0;
        FUN_00c4d210(param_1[0x13c],2,0);
        (**(code **)(param_1[0x45c] + 8))(0x3f800000,0,0);
      }
      puVar2[1] = puVar2[1] | 8;
      if (param_1[0x38f] != 0) {
        param_1[0x38f] = 0;
        FUN_00c4d210(param_1[0x13c],3,0);
        goto LAB_004a3b83;
      }
      goto LAB_004a3ba2;
    }
    iVar4 = FUN_0043f830(5);
    if ((iVar4 == 0) || (iVar4 = FUN_0043f830(9), iVar4 == 0)) {
      iVar4 = FUN_0043f830(2);
      if (iVar4 != 0) {
        iVar4 = FUN_0043f860(0);
        if (((iVar4 == 0) && (iVar4 = FUN_0043f860(1), iVar4 == 0)) &&
           ((iVar4 = FUN_0043f860(4), iVar4 == 0 && (iVar4 = FUN_0043f860(8), iVar4 == 0)))) {
          puVar2[1] = puVar2[1] | 2;
          if (param_1[0x38d] != 0) {
            param_1[0x38d] = 0;
            FUN_00c4d210(param_1[0x13c],2,0);
            (**(code **)(param_1[0x45c] + 8))(0x3f800000,0,0);
          }
          *puVar2 = 1;
          param_3[6] = param_1[0x12d];
          return;
        }
LAB_004a3908:
        param_3[6] = 0x42000;
        return;
      }
      iVar4 = FUN_0043f830(5);
      if (iVar4 != 0) {
        iVar4 = FUN_0043f860(0);
        if (((iVar4 == 0) && (iVar4 = FUN_0043f860(1), iVar4 == 0)) &&
           ((iVar4 = FUN_0043f860(4), iVar4 == 0 && (iVar4 = FUN_0043f860(8), iVar4 == 0)))) {
          puVar2[1] = puVar2[1] | 4;
          if (param_1[0x38e] != 0) {
            param_1[0x38e] = 0;
            FUN_00c4d210(param_1[0x13c],1,0);
            (**(code **)(param_1[0x488] + 8))(0x3f800000,0,0);
          }
          *puVar2 = 4;
          param_3[6] = param_1[0x12d];
          return;
        }
        goto LAB_004a3908;
      }
      iVar4 = FUN_0043f830(9);
      if (iVar4 != 0) {
        iVar4 = FUN_0043f860(0);
        if ((((iVar4 == 0) && (iVar4 = FUN_0043f860(1), iVar4 == 0)) &&
            (iVar4 = FUN_0043f860(4), iVar4 == 0)) && (iVar4 = FUN_0043f860(8), iVar4 == 0)) {
          puVar2[1] = puVar2[1] | 8;
          if (param_1[0x38f] != 0) {
            param_1[0x38f] = 0;
            FUN_00c4d210(param_1[0x13c],3,0);
            (**(code **)(param_1[0x4b4] + 8))(0x3f800000,0,0);
          }
          *puVar2 = 7;
          param_3[6] = param_1[0x12d];
          return;
        }
        goto LAB_004a3908;
      }
      goto LAB_004a3ba8;
    }
    puVar2[1] = puVar2[1] | 4;
    if (param_1[0x38e] != 0) {
      param_1[0x38e] = 0;
      FUN_00c4d210(param_1[0x13c],1,0);
      (**(code **)(param_1[0x488] + 8))(0x3f800000,0,0);
    }
    puVar2[1] = puVar2[1] | 8;
    if (param_1[0x38f] == 0) goto LAB_004a3c95;
    param_1[0x38f] = 0;
    FUN_00c4d210(param_1[0x13c],3,0);
  }
  else {
    iVar4 = FUN_0043f830(2);
    if (iVar4 != 0) {
      puVar2[1] = puVar2[1] | 2;
      if (param_1[0x38d] != 0) {
        param_1[0x38d] = 0;
        FUN_00c4d210(param_1[0x13c],2,0);
        (**(code **)(param_1[0x45c] + 8))(0x3f800000,0,0);
      }
      *puVar2 = 5;
      param_3[6] = param_1[0x12d];
      return;
    }
    iVar4 = FUN_0043f830(9);
    if (iVar4 == 0) goto LAB_004a3cac;
    puVar2[1] = puVar2[1] | 8;
    if (param_1[0x38f] == 0) goto LAB_004a3c95;
    param_1[0x38f] = 0;
    FUN_00c4d210(param_1[0x13c],3,0);
  }
  (**(code **)(param_1[0x4b4] + 8))(0x3f800000,0,0);
LAB_004a3c95:
  *puVar2 = 6;
  param_3[6] = param_1[0x12d];
  return;
}

// 004A42C0  Em0100::vf338  size=251  [class]
void __thiscall Em0100::vf338(int *param_1,undefined4 param_2,int param_3,int param_4)

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
  if ((((*(byte *)(param_1 + 0x373) & 1) == 0) && (1 < iVar6)) && (0 < param_4)) {
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

// 004A43C0  FUN_004a43c0  size=348  [between]
void __fastcall FUN_004a43c0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0x2d,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    (**(code **)(*(int *)(param_1 + 0x1860) + 8))(0x41f00000,0,0);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(*(undefined4 *)(param_1 + 0x1be4),0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x4e4) == 0) {
      uVar2 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xde4) = uVar2;
      iVar1 = FUN_00a8cab0();
      if ((((iVar1 == 0x10000) || (iVar1 = FUN_00a8cab0(), iVar1 == 0x10009)) ||
          (iVar1 = FUN_00a8cab0(), iVar1 == 0x1000a)) || (iVar1 = FUN_00a8cab0(), iVar1 == 0x1000d))
      {
        uVar2 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0x1bec) = uVar2;
      }
      if (*(int *)(param_1 + 0x1b60) != 0) {
        *(undefined4 *)(param_1 + 0x1bec) = 0x1000b;
      }
      *(undefined4 *)(param_1 + 0xde8) = *(undefined4 *)(param_1 + 0xdd0);
      FUN_004a0760();
      FUN_00a8caf0(0x1000a,0,0,0);
      *(undefined4 *)(param_1 + 0xdd0) = 0;
      FUN_00a962d0(0,0);
      *(undefined4 *)(param_1 + 0xe30) = 0;
    }
    *(undefined4 *)(param_1 + 0x1aa0) = 0;
    return;
  }
  return;
}

// 004A4520  FUN_004a4520  size=510  [between]
void __fastcall FUN_004a4520(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    FUN_00aa4080(0x33,0,0x3dcccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x1fe0) = 1;
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
    if (*(char *)(param_1 + 0x1d60) == '\x05') {
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
      *(undefined4 *)(param_1 + 0xde4) = uVar2;
      iVar1 = FUN_00a8cab0();
      if ((iVar1 == 0x10000) ||
         (((iVar1 = FUN_00a8cab0(), iVar1 == 0x10009 || (iVar1 = FUN_00a8cab0(), iVar1 == 0x1000a))
          || (iVar1 = FUN_00a8cab0(), iVar1 == 0x1000d)))) {
        uVar2 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0x1bec) = uVar2;
      }
      if (*(int *)(param_1 + 0x1b60) != 0) {
        *(undefined4 *)(param_1 + 0x1bec) = 0x1000b;
      }
      *(undefined4 *)(param_1 + 0xde8) = *(undefined4 *)(param_1 + 0xdd0);
      FUN_004a0760();
      FUN_00a8caf0(0x1000a,0,0,0);
      *(undefined4 *)(param_1 + 0xdd0) = 0;
      FUN_00a962d0(0,0);
      *(undefined4 *)(param_1 + 0xe30) = 0;
      return;
    }
  }
  return;
}

// 004A4740  FUN_004a4740  size=262  [between]
void __fastcall FUN_004a4740(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_004a07c0();
  if (iVar1 == 0) {
    iVar1 = FUN_00a8cab0();
    if ((0x70002 < iVar1) && (iVar1 = FUN_00a8cab0(), iVar1 < 0x7000a)) {
      *(undefined2 *)(param_1 + 0x824) = 1;
      *(undefined4 *)(param_1 + 0x828) = 0x78;
    }
    return;
  }
  *(undefined4 *)(param_1 + 0x1fe8) = 1;
  if (*(int *)(param_1 + 0x4e4) == 0) {
    uVar2 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xde4) = uVar2;
    iVar1 = FUN_00a8cab0();
    if ((((iVar1 == 0x10000) || (iVar1 = FUN_00a8cab0(), iVar1 == 0x10009)) ||
        (iVar1 = FUN_00a8cab0(), iVar1 == 0x1000a)) || (iVar1 = FUN_00a8cab0(), iVar1 == 0x1000d)) {
      uVar2 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0x1bec) = uVar2;
    }
    if (*(int *)(param_1 + 0x1b60) != 0) {
      *(undefined4 *)(param_1 + 0x1bec) = 0x1000b;
    }
    *(undefined4 *)(param_1 + 0xde8) = *(undefined4 *)(param_1 + 0xdd0);
    FUN_004a0760();
    FUN_00a8caf0(0x60002,0,0,0);
    *(undefined4 *)(param_1 + 0xdd0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0xe30) = 0;
    return;
  }
  return;
}

// 004A4850  FUN_004a4850  size=220  [between]
void __fastcall FUN_004a4850(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x1a98) == 4) {
    return;
  }
  iVar1 = FUN_00a82d50();
  if (iVar1 == 4) {
    if (*(int *)(param_1 + 0x4e4) == 0) {
      uVar2 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xde4) = uVar2;
      iVar1 = FUN_00a8cab0();
      if ((((iVar1 == 0x10000) || (iVar1 = FUN_00a8cab0(), iVar1 == 0x10009)) ||
          (iVar1 = FUN_00a8cab0(), iVar1 == 0x1000a)) || (iVar1 = FUN_00a8cab0(), iVar1 == 0x1000d))
      {
        uVar2 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0x1bec) = uVar2;
      }
      if (*(int *)(param_1 + 0x1b60) != 0) {
        *(undefined4 *)(param_1 + 0x1bec) = 0x1000b;
      }
      *(undefined4 *)(param_1 + 0xde8) = *(undefined4 *)(param_1 + 0xdd0);
      FUN_004a0760();
      FUN_00a8caf0(0x1000a,0,0,0);
      *(undefined4 *)(param_1 + 0xdd0) = 0;
      FUN_00a962d0(0,0);
      *(undefined4 *)(param_1 + 0xe30) = 0;
      return;
    }
    return;
  }
  return;
}

// 004A4930  FUN_004a4930  size=587  [between]
void __fastcall FUN_004a4930(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    if (*(int *)(param_1 + 0x61c) != 1) {
      return;
    }
    goto LAB_004a4a6f;
  }
  *(undefined4 *)(param_1 + 0x1b6c) = 0;
  switch(*(undefined4 *)(param_1 + 0x1914)) {
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
    goto LAB_004a49d8;
  case 2:
    sVar1 = FUN_00dde2a0(0,1);
    uVar3 = 0x8000040;
LAB_004a49d8:
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
    goto switchD_004a4960_default;
  }
  FUN_00aa4080(uVar4,0,0x3e088889,0x3f800000,uVar3,0xbf800000,0x3f800000);
switchD_004a4960_default:
  *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
LAB_004a4a6f:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    *(undefined2 *)(param_1 + 0x1a9c) = 0;
    if ((*(uint *)(param_1 + 0xe4c) & 0x100000) == 0) {
      FUN_004a2b50(*(undefined4 *)(param_1 + 0x1bec),0,0,0,0);
    }
    else if (*(int *)(param_1 + 0x4e4) == 0) {
      uVar3 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xde4) = uVar3;
      iVar2 = FUN_00a8cab0();
      if ((((iVar2 == 0x10000) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x10009)) ||
          (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000a)) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000d))
      {
        uVar3 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0x1bec) = uVar3;
      }
      if (*(int *)(param_1 + 0x1b60) != 0) {
        *(undefined4 *)(param_1 + 0x1bec) = 0x1000b;
      }
      *(undefined4 *)(param_1 + 0xde8) = *(undefined4 *)(param_1 + 0xdd0);
      FUN_004a0760();
      FUN_00a8caf0(0x60002,0,0,0);
      *(undefined4 *)(param_1 + 0xdd0) = 0;
      FUN_00a962d0(0,0);
      *(undefined4 *)(param_1 + 0xe30) = 0;
      return;
    }
  }
  return;
}

// 004A4B90  FUN_004a4b90  size=220  [between]
void __fastcall FUN_004a4b90(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x1a98) == 4) {
    return;
  }
  iVar1 = FUN_00a82d50();
  if (iVar1 == 4) {
    if (*(int *)(param_1 + 0x4e4) == 0) {
      uVar2 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xde4) = uVar2;
      iVar1 = FUN_00a8cab0();
      if ((((iVar1 == 0x10000) || (iVar1 = FUN_00a8cab0(), iVar1 == 0x10009)) ||
          (iVar1 = FUN_00a8cab0(), iVar1 == 0x1000a)) || (iVar1 = FUN_00a8cab0(), iVar1 == 0x1000d))
      {
        uVar2 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0x1bec) = uVar2;
      }
      if (*(int *)(param_1 + 0x1b60) != 0) {
        *(undefined4 *)(param_1 + 0x1bec) = 0x1000b;
      }
      *(undefined4 *)(param_1 + 0xde8) = *(undefined4 *)(param_1 + 0xdd0);
      FUN_004a0760();
      FUN_00a8caf0(0x1000a,0,0,0);
      *(undefined4 *)(param_1 + 0xdd0) = 0;
      FUN_00a962d0(0,0);
      *(undefined4 *)(param_1 + 0xe30) = 0;
      return;
    }
    return;
  }
  return;
}

// 004A4C70  FUN_004a4c70  size=409  [between]
void __fastcall FUN_004a4c70(int param_1)

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
      FUN_004a2b50(*(undefined4 *)(param_1 + 0x1bec),0,0,0,0);
      return;
    }
  }
  return;
}

// 004A4E30  FUN_004a4e30  size=566  [between]
void __fastcall FUN_004a4e30(int param_1)

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
      if ((*(uint *)(param_1 + 0xe4c) & 0x100000) == 0) {
        FUN_004a2b50(*(undefined4 *)(param_1 + 0x1bec),0,0,0,0);
        return;
      }
      if (*(int *)(param_1 + 0x4e4) == 0) {
        uVar2 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xde4) = uVar2;
        iVar1 = FUN_00a8cab0();
        if ((((iVar1 == 0x10000) || (iVar1 = FUN_00a8cab0(), iVar1 == 0x10009)) ||
            (iVar1 = FUN_00a8cab0(), iVar1 == 0x1000a)) ||
           (iVar1 = FUN_00a8cab0(), iVar1 == 0x1000d)) {
          uVar2 = FUN_00a8cab0();
          *(undefined4 *)(param_1 + 0x1bec) = uVar2;
        }
        if (*(int *)(param_1 + 0x1b60) != 0) {
          *(undefined4 *)(param_1 + 0x1bec) = 0x1000b;
        }
        *(undefined4 *)(param_1 + 0xde8) = *(undefined4 *)(param_1 + 0xdd0);
        FUN_004a0760();
        FUN_00a8caf0(0x60002,0,0,0);
        *(undefined4 *)(param_1 + 0xdd0) = 0;
        FUN_00a962d0(0,0);
        *(undefined4 *)(param_1 + 0xe30) = 0;
        return;
      }
    }
  }
  return;
}

// 004A5080  FUN_004a5080  size=729  [between]
void __fastcall FUN_004a5080(int param_1)

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
  FUN_00c593a0(*(undefined4 *)(param_1 + 0x4f0),0xffffffff,&local_20,0x40a00000,0x40400000,0x29,8);
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    FUN_00aa4080(0x52,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      *(float *)(param_1 + 0x920) = *(float *)(param_1 + 0x1b9c) * 60.0;
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
      if ((*(uint *)(param_1 + 0xe4c) & 0x100000) == 0) {
        FUN_004a2b50(*(undefined4 *)(param_1 + 0x1bec),0,0,0,0);
      }
      else if (*(int *)(param_1 + 0x4e4) == 0) {
        uVar2 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xde4) = uVar2;
        iVar1 = FUN_00a8cab0();
        if ((((iVar1 == 0x10000) || (iVar1 = FUN_00a8cab0(), iVar1 == 0x10009)) ||
            (iVar1 = FUN_00a8cab0(), iVar1 == 0x1000a)) ||
           (iVar1 = FUN_00a8cab0(), iVar1 == 0x1000d)) {
          uVar2 = FUN_00a8cab0();
          *(undefined4 *)(param_1 + 0x1bec) = uVar2;
        }
        if (*(int *)(param_1 + 0x1b60) != 0) {
          *(undefined4 *)(param_1 + 0x1bec) = 0x1000b;
        }
        *(undefined4 *)(param_1 + 0xde8) = *(undefined4 *)(param_1 + 0xdd0);
        FUN_004a0760();
        FUN_00a8caf0(0x60002,0,0,0);
        *(undefined4 *)(param_1 + 0xdd0) = 0;
        FUN_00a962d0(0,0);
        *(undefined4 *)(param_1 + 0xe30) = 0;
      }
      fVar3 = (float10)FUN_00dde300(*(undefined4 *)(param_1 + 0x1ba4),
                                    *(undefined4 *)(param_1 + 0x1ba8));
      *(float *)(param_1 + 0x1004) = (float)(fVar3 * (float10)60.0);
      return;
    }
  }
  return;
}

// 004A5380  FUN_004a5380  size=381  [between]
void __fastcall FUN_004a5380(int param_1)

{
  int iVar1;
  float10 fVar2;
  int local_8;
  undefined1 local_4 [4];
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4120(6,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    if ((*(uint *)(param_1 + 0xe4c) & 0x100000) == 0) {
      FUN_00aa4080(0x50,1,0x3e088889,0x3f800000,0x40200,0xbf800000,0x3f800000);
      *(uint *)(param_1 + 0xe4c) = *(uint *)(param_1 + 0xe4c) | 0x100000;
      iVar1 = FUN_004a0710();
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
  if ((*(uint *)(param_1 + 0xe4c) & 0x100000) == 0) {
    FUN_00ac81f0(param_1 + 0x40,&local_8,local_4);
  }
  else {
    FUN_00ac8270(param_1 + 0x40,&local_8,local_4);
  }
  if (local_8 == 0) {
    *(uint *)(param_1 + 0xe4c) = *(uint *)(param_1 + 0xe4c) & 0xffefffff;
    FUN_00a94bc0(1,0x3f000000);
    fVar2 = (float10)FUN_00dde300(*(undefined4 *)(param_1 + 0x1ba4),
                                  *(undefined4 *)(param_1 + 0x1ba8));
    *(float *)(param_1 + 0x1004) = (float)(fVar2 * (float10)60.0);
    FUN_004a2b50(*(undefined4 *)(param_1 + 0x1bec),0,0,0,0);
  }
  return;
}

// 004A5500  FUN_004a5500  size=552  [between]
void __fastcall FUN_004a5500(int *param_1)

{
  code *pcVar1;
  float10 fVar2;
  int *piVar3;
  
  if (param_1[0x187] == 0) {
    param_1[0x248] = 0x43340000;
    *(undefined1 *)(param_1 + 0x758) = 5;
    param_1[0x187] = 1;
    FUN_00eaa6e0(0x3f800000,0);
    FUN_00eaa6e0(0x3f800000,0);
    FUN_00eaa6e0(0x3f800000,0);
    FUN_00eaa6e0(0x3f800000,0);
    if (param_1[0x617] != 0) {
      (**(code **)(param_1[0x590] + 8))(0x3f800000,0,0);
    }
    if (param_1[0x6a0] != 0) {
      (**(code **)(param_1[0x4e0] + 8))(0x3f800000,0,0);
    }
    if (param_1[0x6a1] != 0) {
      (**(code **)(param_1[0x50c] + 8))(0x3f800000,0,0);
    }
    if (param_1[0x6a2] != 0) {
      (**(code **)(param_1[0x538] + 8))(0x3f800000,0,0);
    }
    (**(code **)(*param_1 + 0x344))(6,param_1[0x378],param_1[0x377]);
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
    E3_EnemyBoardDebrisSokushi::vf4C();
    FUN_00ac8fd0((float)(float10)0);
    return;
  }
  FUN_00ac8fd0((float)(fVar2 - (float10)0.011111111));
  return;
}

// 004A57D0  Em0100::vf14C  size=77  [class]
bool __thiscall Em0100::vf14C(int param_1,int param_2,int param_3)

{
  if (param_3 != 0) {
    FUN_00a7c8a0();
  }
  if ((0 < *(int *)(param_1 + 0x870)) && (*(int *)(param_1 + 0x4e4) == 0)) {
    if ((param_2 != 0x3d) && (param_2 != 0x3e)) {
      return param_2 == 0x3f;
    }
    return true;
  }
  return false;
}

// 004A5820  Em0100::vf158  size=171  [class]
undefined4 Em0100::vf158(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  if (param_2 == 0) {
    return 1;
  }
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar3 = &DAT_01be9db8;
    (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
    FUN_00dd6d80(puVar3);
  }
  if (param_1 == 0x3d) {
    iVar1 = FUN_00a8cab0();
    if (iVar1 != 0x116) {
      return 1;
    }
  }
  else if (param_1 == 0x3e) {
    iVar1 = FUN_00a8cab0();
    if (iVar1 != 0x117) {
      return 1;
    }
  }
  else if ((param_1 == 0x3f) && (iVar1 = FUN_00a8cab0(), iVar1 != 0x118)) {
    return 1;
  }
  return 0;
}

// 004A58D0  FUN_004a58d0  size=75  [between]
void FUN_004a58d0(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined *puVar4;
  
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar4 = &DAT_01be9db8;
    (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
    iVar1 = FUN_00dd6d80(puVar4);
    if (iVar1 != 0) {
      uVar3 = FUN_009f8b40();
      FUN_009f8ae0(uVar3);
    }
  }
  return;
}

// 004A5920  FUN_004a5920  size=207  [between]
undefined4 __fastcall FUN_004a5920(int *param_1)

{
  int iVar1;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  if (((((param_1[0x139] == 0) && (param_1[0x6ec] == 0)) &&
       (iVar1 = (**(code **)(*param_1 + 0x1d8))(), iVar1 == 0)) &&
      ((0 < param_1[0x21c] && (param_1[0x187] != 0)))) && (iVar1 = FUN_00a82e80(), iVar1 == 0)) {
    iVar1 = FUN_00a8cab0();
    if ((0x70002 < iVar1) && (iVar1 = FUN_00a8cab0(), iVar1 < 0x7000a)) {
      return 0;
    }
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
    FUN_00c59410(param_1[0x13c],0xffffffff,&uStack_20,0x40900000,0x3fc00000,0x40490fdb,0x3f490fdb,
                 0x1004,0);
    return 1;
  }
  return 0;
}

// 004A59F0  Em0100::vf13C  size=105  [class]
undefined4 __fastcall Em0100::vf13C(int *param_1)

{
  int iVar1;
  
  if (((((param_1[0x139] == 0) && (param_1[0x6ec] == 0)) &&
       (iVar1 = (**(code **)(*param_1 + 0x1d8))(), iVar1 == 0)) &&
      ((0 < param_1[0x21c] && (param_1[0x187] != 0)))) && (iVar1 = FUN_00a82e80(), iVar1 == 0)) {
    iVar1 = FUN_00a8cab0();
    if ((0x70002 < iVar1) && (iVar1 = FUN_00a8cab0(), iVar1 < 0x7000a)) {
      return 0;
    }
    return 1;
  }
  return 0;
}

// 004A5A60  FUN_004a5a60  size=1103  [between]
void __fastcall FUN_004a5a60(int *param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  float10 fVar5;
  undefined *puVar6;
  undefined4 uVar7;
  
  iVar2 = FUN_00a81330();
  if ((iVar2 == 0) || (piVar3 = (int *)FUN_00a7c8a0(), piVar3 == (int *)0x0)) {
LAB_004a5a9a:
    if (param_1[0x1d9] != 0) {
      FUN_008e6d00();
    }
    FUN_00dc1270(0x41700000,0);
    FUN_00a7c950();
    FUN_00ba6810(1,0);
    (**(code **)(*param_1 + 0x388))(0);
    return;
  }
  puVar6 = &DAT_01b34db0;
  (**(code **)(*piVar3 + 4))(&DAT_01b34db0);
  iVar4 = FUN_00dd6d80(puVar6);
  if (iVar4 == 0) goto LAB_004a5a9a;
  FUN_00a92fb0();
  fVar5 = (float10)FUN_00e049b0();
  param_1[0x244] = (int)(float)fVar5;
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4520(0x83,iVar2,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00db3e80(0,0,&DAT_01bea1d0);
    param_1[0x2dd] = 0;
    if (param_1[0x1d9] != 0) {
      FUN_008e3c10();
    }
    param_1[0x250] = 0;
    FUN_00b7dbe0(0x17);
    FUN_00b94790(0x3f800000,0x3f800000);
    FUN_00b80920(iVar2,0x40400000,0x3dcccccd,0x3e99999a,1);
    piVar3 = (int *)FUN_00c209f0();
    (**(code **)(*piVar3 + 0x14))(0x10);
    switchD_0080dbae::default();
    return;
  case 1:
    FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e22f10(0);
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    iVar4 = FUN_00a8c760(0x20);
    if ((iVar4 != 0) && (param_1[0x250] == 0)) {
      param_1[0x1029] = param_1[0x102a];
      param_1[0x250] = 1;
      FUN_00b89db0(0,0x3dcccccd);
    }
    uVar7 = 0;
    if ((float)param_1[0x1029] <= 0.0) {
      param_1[0x1029] = -0x40800000;
    }
    else {
      uVar7 = 0x40a00000;
    }
    FUN_00b7ab30(uVar7);
    if ((float)param_1[0xd09] <= (float)param_1[0x1028]) {
      fVar1 = (float)param_1[0x1029] - 1.0;
      param_1[0x1029] = (int)fVar1;
      if (((fVar1 < (float)param_1[0x102a] - (float)param_1[0x102b]) &&
          ((float)param_1[0x102a] - (float)param_1[0x102c] < fVar1)) &&
         ((param_1[0x33e] & param_1[0x394]) != 0)) {
        uVar7 = 0;
        FUN_00a92f90(0);
        fVar5 = (float10)FUN_00407b40(uVar7);
        param_1[0x24f] = (int)(float)fVar5;
        FUN_00b89c20(0xb,0,0x17,iVar2,0x43340000,0x41f00000,0x41f00000,0);
        DAT_01dc08d4 = 0;
        DAT_01dc08d8 = 1;
        iVar2 = FUN_00a7c8a0();
        if (iVar2 != 0) {
          FUN_00a8cb60(4);
        }
        param_1[0x1029] = -0x40800000;
        switchD_0080dbae::default();
        return;
      }
    }
    goto switchD_004a5b11_default;
  case 2:
    FUN_00aa4520(0x84,iVar2,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00dda360(0,0x3f4ccccd,0x3f4ccccd,0xf);
    break;
  case 3:
    break;
  default:
    goto switchD_004a5b11_default;
  }
  FUN_00a92f90();
  FUN_00e26e90();
  FUN_00e22f10(0);
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    if (param_1[0x1d9] != 0) {
      FUN_008e6d00();
    }
    FUN_00dc1270(0x41700000,0);
    FUN_00aa4080(0x75,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x24a] = 0;
    FUN_00b88d70();
    FUN_00ba6810(1,0);
    FUN_00a8caf0(0xb,1,0,0);
    switchD_0080dbae::default();
    return;
  }
switchD_004a5b11_default:
  switchD_0080dbae::default();
  return;
}

// 004A6390  FUN_004a6390  size=1093  [between]
void __fastcall FUN_004a6390(int *param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  float10 fVar5;
  undefined *puVar6;
  undefined4 uVar7;
  
  iVar2 = FUN_00a81330();
  if ((iVar2 == 0) || (piVar3 = (int *)FUN_00a7c8a0(), piVar3 == (int *)0x0)) {
LAB_004a63cd:
    if (param_1[0x1d9] != 0) {
      FUN_008e6d00();
    }
    FUN_00dc1270(0x41700000,0);
    FUN_00a7c950();
    FUN_00ba6810(1,0);
    (**(code **)(*param_1 + 0x388))(0);
    return;
  }
  puVar6 = &DAT_01b34db0;
  (**(code **)(*piVar3 + 4))(&DAT_01b34db0);
  iVar4 = FUN_00dd6d80(puVar6);
  if (iVar4 == 0) goto LAB_004a63cd;
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4520(0x8c,iVar2,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00db3e80(0x41a00000,0,&DAT_01bea1d0);
    param_1[0x2dd] = 0;
    if (param_1[0x1d9] != 0) {
      FUN_008e3c10();
    }
    FUN_00b94790(0x3f800000,0x3f800000);
    FUN_00b80920(iVar2,0x40400000,0x3dcccccd,0x3e99999a,1);
    return;
  case 1:
  case 3:
    break;
  case 2:
    FUN_00aa4520(0x8d,iVar2,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    break;
  case 4:
    FUN_00aa4520(0x8e,iVar2,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00a8cb60(param_1[0x187]);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x250] = 0;
    FUN_00b7dbe0(0x19);
    goto LAB_004a65cb;
  case 5:
LAB_004a65cb:
    FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e22f10(0);
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      FUN_004a1b90();
      if (param_1[0x1d9] != 0) {
        FUN_008e6d00();
      }
      FUN_00dc1270(0x41700000,0);
      FUN_00aa4080(0x75,0,0,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x24a] = 0;
      FUN_00b88d70();
      FUN_00ba6810(1,0);
      FUN_00a8caf0(0xb,1,0,0);
      return;
    }
    iVar4 = FUN_00a8c760(0x20);
    if ((iVar4 != 0) && (param_1[0x250] == 0)) {
      param_1[0x1029] = param_1[0x102a];
      param_1[0x250] = 1;
      FUN_00b89db0(1,0x3dcccccd);
    }
    uVar7 = 0;
    if ((float)param_1[0x1029] <= 0.0) {
      param_1[0x1029] = -0x40800000;
    }
    else {
      uVar7 = 0x40a00000;
    }
    FUN_00b7ab30(uVar7);
    if ((float)param_1[0xd09] <= (float)param_1[0x1028]) {
      fVar1 = (float)param_1[0x1029] - 1.0;
      param_1[0x1029] = (int)fVar1;
      if (((fVar1 < (float)param_1[0x102a] - (float)param_1[0x102b]) &&
          ((float)param_1[0x102a] - (float)param_1[0x102c] < fVar1)) &&
         ((param_1[0x33e] & param_1[0x394]) != 0)) {
        uVar7 = 0;
        FUN_00a92f90(0);
        fVar5 = (float10)FUN_00407b40(uVar7);
        param_1[0x24f] = (int)(float)fVar5;
        FUN_00b89c20(0xb,0,0x19,iVar2,0x43340000,0x41f00000,0x41f00000,0);
        DAT_01dc08d4 = 0;
        DAT_01dc08d8 = 1;
        param_1[0x1029] = -0x40800000;
        return;
      }
    }
  default:
    goto switchD_004a642c_default;
  }
  FUN_00a92f90();
  FUN_00e26e90();
  FUN_00e22f10(0);
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
switchD_004a642c_default:
  return;
}

// 004A67F0  Em0100::setEmSetInfo  size=712  [class]
undefined4 __thiscall Em0100::setEmSetInfo(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  FUN_0040ac60(param_2);
  if (*(int *)(param_1 + 0x4a0) == 1) {
    FUN_00aa0ba0(*(undefined4 *)(param_1 + 0x1978),*(undefined4 *)(param_1 + 0x1a0c));
    uVar1 = FUN_00a8d730(param_1 + 0x40);
    FUN_00a8d6f0(uVar1);
    puVar3 = (undefined4 *)FUN_00c9dac0();
    *(undefined4 *)(param_1 + 0x1c70) = *puVar3;
    *(undefined4 *)(param_1 + 0x1c74) = puVar3[1];
    *(undefined4 *)(param_1 + 0x1c78) = puVar3[2];
    *(undefined4 *)(param_1 + 0x1c7c) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x1a40) = 1;
    if (*(int *)(param_1 + 0x4e4) != 0) goto LAB_004a69bd;
    uVar1 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xde4) = uVar1;
    iVar2 = FUN_00a8cab0();
    if ((((iVar2 == 0x10000) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x10009)) ||
        (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000a)) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000d)) {
      uVar1 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0x1bec) = uVar1;
    }
    if (*(int *)(param_1 + 0x1b60) != 0) {
      *(undefined4 *)(param_1 + 0x1bec) = 0x1000b;
    }
    *(undefined4 *)(param_1 + 0xde8) = *(undefined4 *)(param_1 + 0xdd0);
    FUN_004a0760();
    uVar1 = 0x1000d;
  }
  else {
    if ((*(int *)(param_1 + 0x4a0) != 2) ||
       (*(undefined4 *)(param_1 + 0x1b60) = 1, *(int *)(param_1 + 0x4e4) != 0)) goto LAB_004a69bd;
    uVar1 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xde4) = uVar1;
    iVar2 = FUN_00a8cab0();
    if (((iVar2 == 0x10000) ||
        ((iVar2 = FUN_00a8cab0(), iVar2 == 0x10009 || (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000a))))
       || (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000d)) {
      uVar1 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0x1bec) = uVar1;
    }
    if (*(int *)(param_1 + 0x1b60) != 0) {
      *(undefined4 *)(param_1 + 0x1bec) = 0x1000b;
    }
    *(undefined4 *)(param_1 + 0xde8) = *(undefined4 *)(param_1 + 0xdd0);
    FUN_004a0760();
    uVar1 = 0x1000b;
  }
  FUN_00a8caf0(uVar1,0,0,0);
  *(undefined4 *)(param_1 + 0xdd0) = 0;
  FUN_00a962d0(0,0);
  *(undefined4 *)(param_1 + 0xe30) = 0;
LAB_004a69bd:
  if (*(int *)(param_1 + 0xd80) != 0) {
    if (0.0 < *(float *)(param_1 + 0x1a24)) {
      iVar2 = *(int *)(param_1 + 0xd80);
      *(float *)(iVar2 + 0xc) = *(float *)(param_1 + 0x1a1c) * 0.017453292;
      *(float *)(iVar2 + 0x10) = *(float *)(param_1 + 0x1a20) * 0.017453292;
      *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(param_1 + 0x1a24);
      iVar2 = *(int *)(param_1 + 0xd80);
      *(float *)(iVar2 + 0x30) = *(float *)(param_1 + 0x1a1c) * 0.017453292;
      *(float *)(iVar2 + 0x34) = *(float *)(param_1 + 0x1a20) * 0.017453292;
      *(undefined4 *)(iVar2 + 0x38) = *(undefined4 *)(param_1 + 0x1a24);
    }
    if (0.0 < *(float *)(param_1 + 0x1a30)) {
      iVar2 = *(int *)(param_1 + 0xd80);
      *(float *)(iVar2 + 0x18) = *(float *)(param_1 + 0x1a28) * 0.017453292;
      *(float *)(iVar2 + 0x1c) = *(float *)(param_1 + 0x1a2c) * 0.017453292;
      *(undefined4 *)(iVar2 + 0x20) = *(undefined4 *)(param_1 + 0x1a30);
      iVar2 = *(int *)(param_1 + 0xd80);
      *(float *)(iVar2 + 0x3c) = *(float *)(param_1 + 0x1a28) * 0.017453292;
      *(float *)(iVar2 + 0x40) = *(float *)(param_1 + 0x1a2c) * 0.017453292;
      *(undefined4 *)(iVar2 + 0x44) = *(undefined4 *)(param_1 + 0x1a30);
    }
    FUN_00a82b40(*(undefined4 *)(param_1 + 0xd80),4);
    uVar1 = FUN_00a82d50();
    FUN_00a85340(uVar1);
  }
  return 1;
}

// 004A6AC0  Em0100::vf48  size=318  [class]
void __fastcall Em0100::vf48(int param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  int local_8;
  undefined1 local_4 [4];
  
  fVar1 = *(float *)(param_1 + 0x1004);
  if (!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) {
    *(float *)(param_1 + 0x1004) = *(float *)(param_1 + 0x1004) - *(float *)(param_1 + 0x910);
  }
  BehaviorEmBase::vf48();
  FUN_004a5920();
  if ((*(uint *)(param_1 + 0xe4c) & 0x100000) != 0) {
    return;
  }
  FUN_00ac81f0(param_1 + 0x40,&local_8,local_4);
  if (local_8 == 0) {
    return;
  }
  FUN_004a0760();
  *(undefined4 *)(param_1 + 0x1fe8) = 1;
  iVar2 = FUN_004a07c0();
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0x4e4) == 0) {
      uVar3 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xde4) = uVar3;
      iVar2 = FUN_00a8cab0();
      if ((((iVar2 == 0x10000) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x10009)) ||
          (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000a)) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000d))
      {
        uVar3 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0x1bec) = uVar3;
      }
      if (*(int *)(param_1 + 0x1b60) != 0) {
        *(undefined4 *)(param_1 + 0x1bec) = 0x1000b;
      }
      *(undefined4 *)(param_1 + 0xde8) = *(undefined4 *)(param_1 + 0xdd0);
      FUN_004a0760();
      FUN_00a8caf0(0x60002,0,0,0);
      *(undefined4 *)(param_1 + 0xdd0) = 0;
      FUN_00a962d0(0,0);
      *(undefined4 *)(param_1 + 0xe30) = 0;
      return;
    }
    return;
  }
  return;
}

// 004A6C00  FUN_004a6c00  size=1635  [between]
void __fastcall FUN_004a6c00(int param_1)

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
  
  *(undefined4 *)(param_1 + 0xdf4) = 0x1000d;
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
    goto switchD_004a6c9d_caseD_1;
  case 2:
    FUN_00aa4080(0x15,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    if (14.5 <= fVar2) {
      fVar2 = 1.0;
    }
    else {
      fVar2 = fVar2 * 0.06896552;
    }
    *(float *)(param_1 + 0x1be4) = fVar2;
    *(undefined4 *)(param_1 + 0x61c) = 1;
    return;
  case 3:
    FUN_00aa4080(0x13,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 4:
    FUN_00ac80a0(*(undefined4 *)(param_1 + 0x1be4),0x3f800000);
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 == 0) {
      return;
    }
    iVar5 = FUN_00a82d50();
    if ((iVar5 == 2) || (iVar5 = FUN_00a82d50(), iVar5 == 3)) goto LAB_004a71ae;
    iVar5 = FUN_00a82d50();
    if (iVar5 != 4) goto LAB_004a70ff;
    goto LAB_004a6ea9;
  default:
    goto switchD_004a6c9d_default;
  }
  *(undefined4 *)(param_1 + 0x1c84) = 0;
  FUN_00aa4080(0xf,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  if (14.5 <= fVar2) {
    fVar3 = 1.0;
  }
  else {
    fVar3 = fVar2 * 0.06896552;
  }
  *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  *(float *)(param_1 + 0x1be4) = fVar3;
switchD_004a6c9d_caseD_1:
  FUN_00ac80a0(*(undefined4 *)(param_1 + 0x1be4),0x3f800000);
  fVar3 = (local_28 - *(float *)(param_1 + 0x44)) * (local_28 - *(float *)(param_1 + 0x1c74)) +
          (local_2c - *(float *)(param_1 + 0x40)) * (local_2c - *(float *)(param_1 + 0x1c70)) +
          (local_24 - *(float *)(param_1 + 0x48)) * (local_24 - *(float *)(param_1 + 0x1c78));
  if ((fVar3 < 0.0 != (fVar3 == 0.0)) || (fVar2 < 1.5)) {
    puVar4 = (undefined4 *)FUN_00c9dac0();
    *(undefined4 *)(param_1 + 0x1c70) = *puVar4;
    *(undefined4 *)(param_1 + 0x1c74) = puVar4[1];
    *(undefined4 *)(param_1 + 0x1c78) = puVar4[2];
    *(undefined4 *)(param_1 + 0x1c7c) = 0x3f800000;
    FUN_00c9da70();
  }
  iVar5 = FUN_00a94ee0(0,0x1e,0x50);
  if ((iVar5 != 0) &&
     (((iVar5 = FUN_00a82d50(), iVar5 == 2 || (iVar5 = FUN_00a82d50(), iVar5 == 3)) ||
      (iVar5 = FUN_00a82d50(), iVar5 == 4)))) {
    *(undefined4 *)(param_1 + 0x61c) = 3;
    return;
  }
  fVar2 = *(float *)(param_1 + 0x1be4);
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
LAB_004a71ae:
    if (*(int *)(param_1 + 0x4e4) == 0) {
      uVar6 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xde4) = uVar6;
      iVar5 = FUN_00a8cab0();
      if ((((iVar5 == 0x10000) || (iVar5 = FUN_00a8cab0(), iVar5 == 0x10009)) ||
          (iVar5 = FUN_00a8cab0(), iVar5 == 0x1000a)) || (iVar5 = FUN_00a8cab0(), iVar5 == 0x1000d))
      {
        uVar6 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0x1bec) = uVar6;
      }
      if (*(int *)(param_1 + 0x1b60) != 0) {
        *(undefined4 *)(param_1 + 0x1bec) = 0x1000b;
      }
      *(undefined4 *)(param_1 + 0xde8) = *(undefined4 *)(param_1 + 0xdd0);
      FUN_004a0760();
      uVar6 = 0x10009;
LAB_004a723b:
      FUN_00a8caf0(uVar6,0,0,0);
      *(undefined4 *)(param_1 + 0xdd0) = 0;
      FUN_00a962d0(0,0);
      *(undefined4 *)(param_1 + 0xe30) = 0;
    }
  }
  else {
    iVar5 = FUN_00a82d50();
    if (iVar5 != 4) {
      if (0.017453292 < fVar1) {
        if (fVar1 <= 1.5707964) {
          FUN_004a2d10(0x3f800000,fVar1 * 0.63661975);
          return;
        }
        FUN_004a2ed0(0x3f800000,fVar1 * 0.31830987);
        return;
      }
      if (fVar1 < -0.017453292) {
        if (!NAN(fVar1) && -1.5707964 < fVar1 != (fVar1 == -1.5707964)) {
          FUN_004a2df0(0x3f800000,ABS(fVar1) * 0.63661975);
          return;
        }
        FUN_004a2fb0(0x3f800000,ABS(fVar1) * 0.31830987);
        return;
      }
LAB_004a70ff:
      if (*(int *)(param_1 + 0x4e4) != 0) {
        return;
      }
      uVar6 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xde4) = uVar6;
      iVar5 = FUN_00a8cab0();
      if (((iVar5 == 0x10000) || (iVar5 = FUN_00a8cab0(), iVar5 == 0x10009)) ||
         ((iVar5 = FUN_00a8cab0(), iVar5 == 0x1000a || (iVar5 = FUN_00a8cab0(), iVar5 == 0x1000d))))
      {
        uVar6 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0x1bec) = uVar6;
      }
      if (*(int *)(param_1 + 0x1b60) != 0) {
        *(undefined4 *)(param_1 + 0x1bec) = 0x1000b;
      }
      *(undefined4 *)(param_1 + 0xde8) = *(undefined4 *)(param_1 + 0xdd0);
      FUN_004a0760();
      FUN_00a8caf0(0x1000d,0,0,0);
      *(undefined4 *)(param_1 + 0xdd0) = 0;
      FUN_00a962d0(0,0);
      *(undefined4 *)(param_1 + 0xe30) = 0;
      return;
    }
LAB_004a6ea9:
    if (*(int *)(param_1 + 0x4e4) == 0) {
      uVar6 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xde4) = uVar6;
      iVar5 = FUN_00a8cab0();
      if (((iVar5 == 0x10000) || (iVar5 = FUN_00a8cab0(), iVar5 == 0x10009)) ||
         ((iVar5 = FUN_00a8cab0(), iVar5 == 0x1000a || (iVar5 = FUN_00a8cab0(), iVar5 == 0x1000d))))
      {
        uVar6 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0x1bec) = uVar6;
      }
      if (*(int *)(param_1 + 0x1b60) != 0) {
        *(undefined4 *)(param_1 + 0x1bec) = 0x1000b;
      }
      *(undefined4 *)(param_1 + 0xde8) = *(undefined4 *)(param_1 + 0xdd0);
      FUN_004a0760();
      uVar6 = 0x1000a;
      goto LAB_004a723b;
    }
  }
  *(undefined4 *)(param_1 + 0x1c84) = 0;
switchD_004a6c9d_default:
  return;
}

// 004A7280  FUN_004a7280  size=811  [between]
void __fastcall FUN_004a7280(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1[0x187] == 0) {
    if (param_1[0x375] == 2) {
      uVar2 = 0x8000040;
    }
    else {
      uVar2 = 0x8000000;
    }
    FUN_00aa4080(0xb,0,0x3e088889,0x3f800000,uVar2,0xbf800000,0x3f800000);
    param_1[0x721] = param_1[0x721] + 1;
    param_1[0x187] = param_1[0x187] + 1;
    *(undefined2 *)((int)param_1 + 0x1a96) = 0;
  }
  else if (param_1[0x187] != 1) goto LAB_004a7586;
  iVar1 = FUN_00a82d50();
  if (iVar1 == 4) {
    iVar1 = FUN_00a94ee0(0,0x19,0x32);
    if (iVar1 == 0) {
      param_1[0x6fa] = 0x3f800000;
    }
    else if (param_1[0x2a1] != 0) {
      param_1[0x6fa] = 0;
      FUN_00a8e880(param_1[0x2a1] + 0x40);
      (**(code **)(*param_1 + 0x308))(0x3f800000,0x3ae4c388,0x3db2b8c2,0);
    }
  }
  FUN_00ac80a0(param_1[0x6f9],param_1[0x6fa]);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    iVar1 = FUN_00a82d50();
    if ((((iVar1 == 2) || (iVar1 = FUN_00a82d50(), iVar1 == 3)) && (param_1[0x37d] != 0x1000a)) &&
       (iVar1 = FUN_00a8cab0(), iVar1 != 0x10009)) {
      if (param_1[0x139] == 0) {
        iVar1 = FUN_00a8cab0();
        param_1[0x379] = iVar1;
        iVar1 = FUN_00a8cab0();
        if (((iVar1 == 0x10000) || (iVar1 = FUN_00a8cab0(), iVar1 == 0x10009)) ||
           ((iVar1 = FUN_00a8cab0(), iVar1 == 0x1000a || (iVar1 = FUN_00a8cab0(), iVar1 == 0x1000d))
           )) {
          iVar1 = FUN_00a8cab0();
          param_1[0x6fb] = iVar1;
        }
        if (param_1[0x6d8] != 0) {
          param_1[0x6fb] = 0x1000b;
        }
        param_1[0x37a] = param_1[0x374];
        FUN_004a0760();
        FUN_00a8caf0(0x10009,0,0,0);
        param_1[0x374] = 0;
        FUN_00a962d0(0,0);
        param_1[0x38c] = 0;
      }
      param_1[0x721] = 0;
      return;
    }
    iVar1 = FUN_00a82d50();
    if (((iVar1 == 4) && (param_1[0x37d] != 0x1000a)) && (iVar1 = FUN_00a8cab0(), iVar1 != 0x1000a))
    {
      param_1[0x721] = 0;
      if (param_1[0x139] != 0) {
        return;
      }
      iVar1 = FUN_00a8cab0();
      param_1[0x379] = iVar1;
      iVar1 = FUN_00a8cab0();
      if ((((iVar1 == 0x10000) || (iVar1 = FUN_00a8cab0(), iVar1 == 0x10009)) ||
          (iVar1 = FUN_00a8cab0(), iVar1 == 0x1000a)) || (iVar1 = FUN_00a8cab0(), iVar1 == 0x1000d))
      {
        iVar1 = FUN_00a8cab0();
        param_1[0x6fb] = iVar1;
      }
      if (param_1[0x6d8] != 0) {
        param_1[0x6fb] = 0x1000b;
      }
      param_1[0x37a] = param_1[0x374];
      FUN_004a0760();
      FUN_00a8caf0(0x1000a,0,0,0);
      param_1[0x374] = 0;
      FUN_00a962d0(0,0);
      param_1[0x38c] = 0;
      return;
    }
    FUN_004a2b50(param_1[0x6fb],0,0,0,0);
  }
LAB_004a7586:
  if (0.0 < (float)param_1[0x248]) {
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
  }
  return;
}

// 004A75B0  FUN_004a75b0  size=786  [between]
void __fastcall FUN_004a75b0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    if (*(int *)(param_1 + 0xdd4) == 2) {
      uVar2 = 0x8000040;
    }
    else {
      uVar2 = 0x8000000;
    }
    FUN_00aa4080(0xc,0,0x3e088889,0x3f800000,uVar2,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x1c84) = *(int *)(param_1 + 0x1c84) + 1;
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined2 *)(param_1 + 0x1a96) = 0;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) goto LAB_004a789d;
  if ((*(int *)(param_1 + 0x1bd0) != 0) &&
     (iVar1 = FUN_00a94e10(0,0x41f00000,0x42a00000), iVar1 != 0)) {
    *(undefined4 *)(param_1 + 0x1bdc) = 1;
  }
  FUN_00ac80a0(*(undefined4 *)(param_1 + 0x1be4),*(undefined4 *)(param_1 + 0x1be8));
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 == 0) {
LAB_004a789d:
    if (0.0 < *(float *)(param_1 + 0x920)) {
      *(float *)(param_1 + 0x920) = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
    }
    return;
  }
  iVar1 = FUN_00a82d50();
  if ((((iVar1 == 2) || (iVar1 = FUN_00a82d50(), iVar1 == 3)) &&
      (*(int *)(param_1 + 0xdf4) != 0x1000a)) && (iVar1 = FUN_00a8cab0(), iVar1 != 0x10009)) {
    *(undefined4 *)(param_1 + 0x1c84) = 0;
    if (*(int *)(param_1 + 0x4e4) != 0) {
      return;
    }
    uVar2 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xde4) = uVar2;
    iVar1 = FUN_00a8cab0();
    if (((iVar1 == 0x10000) || (iVar1 = FUN_00a8cab0(), iVar1 == 0x10009)) ||
       ((iVar1 = FUN_00a8cab0(), iVar1 == 0x1000a || (iVar1 = FUN_00a8cab0(), iVar1 == 0x1000d)))) {
      uVar2 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0x1bec) = uVar2;
    }
    if (*(int *)(param_1 + 0x1b60) != 0) {
      *(undefined4 *)(param_1 + 0x1bec) = 0x1000b;
    }
    *(undefined4 *)(param_1 + 0xde8) = *(undefined4 *)(param_1 + 0xdd0);
    FUN_004a0760();
    uVar2 = 0x10009;
  }
  else {
    iVar1 = FUN_00a82d50();
    if (((iVar1 != 4) || (*(int *)(param_1 + 0xdf4) == 0x1000a)) ||
       (iVar1 = FUN_00a8cab0(), iVar1 == 0x1000a)) {
      if ((*(int *)(param_1 + 0x1bdc) == 0) || (*(int *)(param_1 + 0x1bd0) != 0)) {
        FUN_004a2b50(*(undefined4 *)(param_1 + 0x1bec),0,0,0,0);
      }
      else if (*(int *)(param_1 + 0xdd4) == 2) {
        FUN_004a2d10(0x3f800000,0x3f800000);
        *(undefined4 *)(param_1 + 0x1bdc) = 0;
      }
      else {
        FUN_004a2df0(0x3f800000,0x3f800000);
        *(undefined4 *)(param_1 + 0x1bdc) = 0;
      }
      goto LAB_004a789d;
    }
    *(undefined4 *)(param_1 + 0x1c84) = 0;
    if (*(int *)(param_1 + 0x4e4) != 0) {
      return;
    }
    uVar2 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xde4) = uVar2;
    iVar1 = FUN_00a8cab0();
    if ((((iVar1 == 0x10000) || (iVar1 = FUN_00a8cab0(), iVar1 == 0x10009)) ||
        (iVar1 = FUN_00a8cab0(), iVar1 == 0x1000a)) || (iVar1 = FUN_00a8cab0(), iVar1 == 0x1000d)) {
      uVar2 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0x1bec) = uVar2;
    }
    if (*(int *)(param_1 + 0x1b60) != 0) {
      *(undefined4 *)(param_1 + 0x1bec) = 0x1000b;
    }
    *(undefined4 *)(param_1 + 0xde8) = *(undefined4 *)(param_1 + 0xdd0);
    FUN_004a0760();
    uVar2 = 0x1000a;
  }
  FUN_00a8caf0(uVar2,0,0,0);
  *(undefined4 *)(param_1 + 0xdd0) = 0;
  FUN_00a962d0(0,0);
  *(undefined4 *)(param_1 + 0xe30) = 0;
  return;
}

// 004A78D0  FUN_004a78d0  size=544  [between]
void __fastcall FUN_004a78d0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_1[0x187] == 0) {
    param_1[0x721] = 0;
    *(undefined2 *)((int)param_1 + 0x1a96) = 0;
    if (param_1[0x376] == 2) {
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
  if ((((float)param_1[0x2a4] <= (float)param_1[0x6ed]) && ((float)param_1[0x2a8] < 0.5235988)) &&
     ((short)param_1[0x6a3] != 0)) {
    param_1[0x7f8] = 1;
  }
  iVar2 = FUN_00ac4780();
  if (((1 < iVar2) || (param_1[0x7f9] == 0)) && (1.0471976 < (float)param_1[0x2a8])) {
    iVar2 = FUN_00a94ee0(0,0x78,0xc3);
    if (iVar2 != 0) {
      if ((float)param_1[0x2a7] <= 0.0) {
        if ((float)param_1[0x2a7] < 0.0) {
          FUN_004a2d10(0x3f800000,(float)param_1[0x2a8] * 0.63661975);
        }
      }
      else {
        FUN_004a2df0(0x3f800000,(float)param_1[0x2a8] * 0.63661975);
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
    FUN_004a2b50(param_1[0x6fb],0,0,0,0);
  }
  return;
}

// 004A7AF0  FUN_004a7af0  size=487  [between]
void __fastcall FUN_004a7af0(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if ((*(int *)(param_1 + 0x1a98) != 4) && (iVar1 = FUN_00a82d50(), iVar1 == 4)) {
    *(undefined4 *)(param_1 + 0x61c) = 2;
  }
  if (*(int *)(param_1 + 0xdf4) != 0x1000a) {
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
      *(undefined4 *)(param_1 + 0xde4) = uVar3;
      iVar1 = FUN_00a8cab0();
      if ((((iVar1 == 0x10000) || (iVar1 = FUN_00a8cab0(), iVar1 == 0x10009)) ||
          (iVar1 = FUN_00a8cab0(), iVar1 == 0x1000a)) || (iVar1 = FUN_00a8cab0(), iVar1 == 0x1000d))
      {
        uVar3 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0x1bec) = uVar3;
      }
      if (*(int *)(param_1 + 0x1b60) != 0) {
        *(undefined4 *)(param_1 + 0x1bec) = 0x1000b;
      }
      *(undefined4 *)(param_1 + 0xde8) = *(undefined4 *)(param_1 + 0xdd0);
      FUN_004a0760();
      FUN_00a8caf0(0x10006,0,0,0);
      *(undefined4 *)(param_1 + 0xdd0) = 0;
      FUN_00a962d0(0,0);
      *(undefined4 *)(param_1 + 0xe30) = 0;
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
    FUN_004a3090(0x3f800000,*(float *)(param_1 + 0xaa0) * 0.63661975);
    return;
  }
  FUN_004a3170(0x3f800000,*(float *)(param_1 + 0xaa0) * 0.63661975);
  return;
}

// 004A7CE0  FUN_004a7ce0  size=697  [between]
void __fastcall FUN_004a7ce0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    FUN_00aa4080(0xf,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x1c84) = 0;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_004a2b50(*(undefined4 *)(param_1 + 0x1bec),0,0,0,0);
    }
    if (((*(float *)(param_1 + 0xa90) <= *(float *)(param_1 + 0x1bb4)) &&
        (*(int *)(param_1 + 0x1bd0) != 0)) ||
       (iVar2 = FUN_00907640(param_1 + 0x1c00,0,param_1 + 0x1c30), iVar2 != 0)) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      return;
    }
    break;
  case 2:
    iVar2 = FUN_00a94ee0(0,0x14,0xb4);
    if (iVar2 == 0) {
      FUN_004a2b50(*(undefined4 *)(param_1 + 0x1bec),0,0,0,0);
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
        FUN_004a2b50(*(undefined4 *)(param_1 + 0x1bec),0,0,0,0);
        return;
      }
      if (*(int *)(param_1 + 0x4e4) == 0) {
        uVar1 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xde4) = uVar1;
        iVar2 = FUN_00a8cab0();
        if ((((iVar2 == 0x10000) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x10009)) ||
            (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000a)) ||
           (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000d)) {
          uVar1 = FUN_00a8cab0();
          *(undefined4 *)(param_1 + 0x1bec) = uVar1;
        }
        if (*(int *)(param_1 + 0x1b60) != 0) {
          *(undefined4 *)(param_1 + 0x1bec) = 0x1000b;
        }
        *(undefined4 *)(param_1 + 0xde8) = *(undefined4 *)(param_1 + 0xdd0);
        FUN_004a0760();
        FUN_00a8caf0(0x1000a,0,0,0);
        *(undefined4 *)(param_1 + 0xdd0) = 0;
        FUN_00a962d0(0,0);
        *(undefined4 *)(param_1 + 0xe30) = 0;
        return;
      }
    }
    break;
  case 4:
    FUN_00aa4080(0xf,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 5:
    FUN_00ac80a0(*(undefined4 *)(param_1 + 0x1be4),0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_004a2b50(*(undefined4 *)(param_1 + 0x1bec),0,0,0,0);
      return;
    }
  }
  return;
}

// 004A7FD0  FUN_004a7fd0  size=141  [between]
void __fastcall FUN_004a7fd0(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x1c84) = 0;
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
    FUN_004a2b50(*(undefined4 *)(param_1 + 0xde4),0,0,0,0);
  }
  return;
}

// 004A8060  FUN_004a8060  size=650  [between]
void __fastcall FUN_004a8060(int param_1)

{
  int iVar1;
  
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    FUN_00aa4080(0x16,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x1c84) = 0;
    *(undefined2 *)(param_1 + 0x1a96) = 0;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (((*(float *)(param_1 + 0xa90) <= *(float *)(param_1 + 0x1bb4)) &&
        (*(float *)(param_1 + 0xaa0) < 0.5235988)) && (*(short *)(param_1 + 0x1a8c) != 0)) {
      *(undefined4 *)(param_1 + 0x1fe0) = 1;
    }
    iVar1 = FUN_00ac4780();
    if ((((1 < iVar1) || (*(int *)(param_1 + 0x1fe4) == 0)) &&
        (1.0471976 < *(float *)(param_1 + 0xaa0))) &&
       (iVar1 = FUN_00a94ee0(0,0x78,0xc3), iVar1 != 0)) {
      if (0.0 < *(float *)(param_1 + 0xa9c)) {
LAB_004a8162:
        FUN_004a2df0(0x3f800000,*(float *)(param_1 + 0xaa0) * 0.63661975);
        return;
      }
      if (*(float *)(param_1 + 0xa9c) < 0.0) {
LAB_004a8192:
        FUN_004a2d10(0x3f800000,*(float *)(param_1 + 0xaa0) * 0.63661975);
        return;
      }
    }
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_004a2b50(*(undefined4 *)(param_1 + 0xde4),0,0,0,0);
      return;
    }
    break;
  case 2:
    FUN_00aa4080(0x16,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 3:
    FUN_00ac80a0(*(undefined4 *)(param_1 + 0x1be4),0x3f800000);
    if (((*(float *)(param_1 + 0xa90) <= *(float *)(param_1 + 0x1bb4)) &&
        (*(float *)(param_1 + 0xaa0) < 0.5235988)) && (*(short *)(param_1 + 0x1a8c) != 0)) {
      *(undefined4 *)(param_1 + 0x1fe0) = 1;
    }
    iVar1 = FUN_00ac4780();
    if (((1 < iVar1) || (*(int *)(param_1 + 0x1fe4) == 0)) &&
       ((1.0471976 < *(float *)(param_1 + 0xaa0) && (iVar1 = FUN_00a94ee0(0,0x78,0xc3), iVar1 != 0))
       )) {
      if (0.0 < *(float *)(param_1 + 0xa9c)) goto LAB_004a8162;
      if (*(float *)(param_1 + 0xa9c) < 0.0) goto LAB_004a8192;
    }
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_004a2b50(*(undefined4 *)(param_1 + 0xde4),0,0,0,0);
      return;
    }
    break;
  default:
    break;
  }
  return;
}

// 004A8300  FUN_004a8300  size=610  [between]
void __fastcall FUN_004a8300(int *param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  
  param_1[0x37d] = 0x10009;
  iVar2 = FUN_00a82d50();
  if (iVar2 == 1) {
    if (param_1[0x690] == 0) {
                    /* WARNING: Could not recover jumptable at 0x004a83f7. Too many branches */
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
    param_1[0x379] = iVar2;
    iVar2 = FUN_00a8cab0();
    if (((iVar2 == 0x10000) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x10009)) ||
       ((iVar2 = FUN_00a8cab0(), iVar2 == 0x1000a || (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000d)))) {
      iVar2 = FUN_00a8cab0();
      param_1[0x6fb] = iVar2;
    }
    if (param_1[0x6d8] != 0) {
      param_1[0x6fb] = 0x1000b;
    }
    param_1[0x37a] = param_1[0x374];
    FUN_004a0760();
    uVar3 = 0x1000d;
  }
  else {
    iVar2 = FUN_00a82d50();
    if (iVar2 != 4) {
      if ((param_1[0x187] == 1) && (0.34906584 < (float)param_1[0x2a8])) {
        if ((float)param_1[0x2a7] < 0.0) {
          FUN_004a2d10(0x3f800000,(float)param_1[0x2a8] * 0.63661975);
          param_1[0x6f5] = param_1[0x6f4];
          return;
        }
        if (0.0 < (float)param_1[0x2a7]) {
          FUN_004a2df0(0x3f800000,(float)param_1[0x2a8] * 0.63661975);
          param_1[0x6f5] = param_1[0x6f4];
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
    param_1[0x379] = iVar2;
    iVar2 = FUN_00a8cab0();
    if ((((iVar2 == 0x10000) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x10009)) ||
        (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000a)) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000d)) {
      iVar2 = FUN_00a8cab0();
      param_1[0x6fb] = iVar2;
    }
    if (param_1[0x6d8] != 0) {
      param_1[0x6fb] = 0x1000b;
    }
    param_1[0x37a] = param_1[0x374];
    FUN_004a0760();
    uVar3 = 0x1000a;
  }
  FUN_00a8caf0(uVar3,0,0,0);
  param_1[0x374] = 0;
  FUN_00a962d0(0,0);
  param_1[0x38c] = 0;
  return;
}

// 004A8570  FUN_004a8570  size=5379  [between]
void __fastcall FUN_004a8570(int param_1)

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
  
  if ((*(uint *)(param_1 + 0xe4c) & 0x100000) == 0) {
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
    *(undefined4 *)(param_1 + 0xde4) = uVar9;
    iVar8 = FUN_00a8cab0();
    if (((iVar8 == 0x10000) || (iVar8 = FUN_00a8cab0(), iVar8 == 0x10009)) ||
       ((iVar8 = FUN_00a8cab0(), iVar8 == 0x1000a || (iVar8 = FUN_00a8cab0(), iVar8 == 0x1000d)))) {
      uVar9 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0x1bec) = uVar9;
    }
    if (*(int *)(param_1 + 0x1b60) != 0) {
      *(undefined4 *)(param_1 + 0x1bec) = 0x1000b;
    }
    *(undefined4 *)(param_1 + 0xde8) = *(undefined4 *)(param_1 + 0xdd0);
    FUN_004a0760();
    FUN_00a8caf0(0x10009,0,0,0);
    *(undefined4 *)(param_1 + 0xdd0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0xe30) = 0;
  }
  if (*(int *)(param_1 + 0x1c80) == 0) {
    if ((*(float *)(param_1 + 0xa90) <= 25.0) && (1.5707964 < *(float *)(param_1 + 0xaa0))) {
      if (*(int *)(param_1 + 0x4e4) == 0) {
        uVar9 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xde4) = uVar9;
        iVar8 = FUN_00a8cab0();
        if ((((iVar8 == 0x10000) || (iVar8 = FUN_00a8cab0(), iVar8 == 0x10009)) ||
            (iVar8 = FUN_00a8cab0(), iVar8 == 0x1000a)) ||
           (iVar8 = FUN_00a8cab0(), iVar8 == 0x1000d)) {
          uVar9 = FUN_00a8cab0();
          *(undefined4 *)(param_1 + 0x1bec) = uVar9;
        }
        if (*(int *)(param_1 + 0x1b60) != 0) {
          *(undefined4 *)(param_1 + 0x1bec) = 0x1000b;
        }
        *(undefined4 *)(param_1 + 0xde8) = *(undefined4 *)(param_1 + 0xdd0);
        FUN_004a0760();
        FUN_00a8caf0(0x1000e,0,0,0);
        *(undefined4 *)(param_1 + 0xdd0) = 0;
        FUN_00a962d0(0,0);
        *(undefined4 *)(param_1 + 0xe30) = 0;
      }
      *(undefined4 *)(param_1 + 0x1c80) = 1;
      return;
    }
    *(undefined4 *)(param_1 + 0x1c80) = 1;
  }
  if (((1 < *(int *)(param_1 + 0x1c84)) || (*(float *)(param_1 + 0x1004) < 0.0)) &&
     ((*(int *)(param_1 + 0x1fe0) == 0 &&
      (iVar8 = FUN_00907640(param_1 + 0x1c10,0,param_1 + 0x1c30), iVar8 == 0)))) {
    *(undefined4 *)(param_1 + 0x1c84) = 0;
    if (*(int *)(param_1 + 0x4e4) != 0) {
      return;
    }
    uVar9 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xde4) = uVar9;
    iVar8 = FUN_00a8cab0();
    if (((iVar8 == 0x10000) || (iVar8 = FUN_00a8cab0(), iVar8 == 0x10009)) ||
       ((iVar8 = FUN_00a8cab0(), iVar8 == 0x1000a || (iVar8 = FUN_00a8cab0(), iVar8 == 0x1000d)))) {
      uVar9 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0x1bec) = uVar9;
    }
    if (*(int *)(param_1 + 0x1b60) != 0) {
      *(undefined4 *)(param_1 + 0x1bec) = 0x1000b;
    }
    *(undefined4 *)(param_1 + 0xde8) = *(undefined4 *)(param_1 + 0xdd0);
    FUN_004a0760();
    uVar9 = 0x50002;
    goto LAB_004a9942;
  }
  iVar8 = FUN_00ac4780();
  if ((iVar8 < 2) && (*(int *)(param_1 + 0x1fe4) != 0)) {
    return;
  }
  pfVar1 = (float *)(param_1 + 0x1c30);
  local_4 = 10000.0;
  iVar8 = FUN_00907640(param_1 + 0x1c00,0,pfVar1);
  fVar2 = local_4;
  if (iVar8 != 0) {
    fVar2 = *(float *)(param_1 + 0x40) - *pfVar1;
    fVar4 = *(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x1c34);
    fVar3 = *(float *)(param_1 + 0x48) - *(float *)(param_1 + 0x1c38);
    fVar2 = fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2;
  }
  if ((25.0 < *(float *)(param_1 + 0xa90)) || (NAN(fVar2) || 25.0 < fVar2 == (fVar2 == 25.0))) {
    if (0.87266463 < *(float *)(param_1 + 0xaa0)) {
LAB_004a986e:
      if (*(float *)(param_1 + 0xaa0) <= 0.87266463) {
        return;
      }
      if ((*(float *)(param_1 + 0xaa0) <= 1.5707964) || (uVar6 = FUN_00dde2a0(0,10), uVar6 < 6)) {
        if (0.0 < *(float *)(param_1 + 0xa9c)) {
          if (*(float *)(param_1 + 0xaa0) <= 1.5707964) {
            FUN_004a2df0(0x3f800000,*(float *)(param_1 + 0xaa0) * 0.63661975);
            *(undefined4 *)(param_1 + 0x1bd4) = *(undefined4 *)(param_1 + 0x1bd0);
            return;
          }
          FUN_004a2fb0(0x3f800000,*(float *)(param_1 + 0xaa0) * 0.31830987);
          *(undefined4 *)(param_1 + 0x1bd4) = *(undefined4 *)(param_1 + 0x1bd0);
          return;
        }
        if (0.0 <= *(float *)(param_1 + 0xa9c)) {
          *(undefined4 *)(param_1 + 0x1bd4) = *(undefined4 *)(param_1 + 0x1bd0);
          return;
        }
        if (*(float *)(param_1 + 0xaa0) <= 1.5707964) {
          FUN_004a2d10(0x3f800000,*(float *)(param_1 + 0xaa0) * 0.63661975);
          *(undefined4 *)(param_1 + 0x1bd4) = *(undefined4 *)(param_1 + 0x1bd0);
          return;
        }
        FUN_004a2ed0(0x3f800000,*(float *)(param_1 + 0xaa0) * 0.31830987);
        *(undefined4 *)(param_1 + 0x1bd4) = *(undefined4 *)(param_1 + 0x1bd0);
        return;
      }
      if (*(int *)(param_1 + 0x4e4) != 0) {
        return;
      }
      uVar9 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xde4) = uVar9;
      iVar8 = FUN_00a8cab0();
      if ((((iVar8 == 0x10000) || (iVar8 = FUN_00a8cab0(), iVar8 == 0x10009)) ||
          (iVar8 = FUN_00a8cab0(), iVar8 == 0x1000a)) || (iVar8 = FUN_00a8cab0(), iVar8 == 0x1000d))
      {
        uVar9 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0x1bec) = uVar9;
      }
      if (*(int *)(param_1 + 0x1b60) != 0) {
        *(undefined4 *)(param_1 + 0x1bec) = 0x1000b;
      }
      *(undefined4 *)(param_1 + 0xde8) = *(undefined4 *)(param_1 + 0xdd0);
      goto LAB_004a9933;
    }
    if (25.0 <= fVar2) {
LAB_004a9014:
      if (*(float *)(param_1 + 0xa90) <= *(float *)(param_1 + 0x1bb4)) {
        if (*(float *)(param_1 + 0x1d64) <= 0.0) {
          if (*(float *)(param_1 + 0xaa0) < 0.5235988) {
            if (*(short *)(param_1 + 0x1a8c) != 0) {
              *(undefined4 *)(param_1 + 0x1fe0) = 1;
              return;
            }
            if (*(int *)(param_1 + 0x4e4) != 0) {
              return;
            }
            uVar9 = FUN_00a8cab0();
            *(undefined4 *)(param_1 + 0xde4) = uVar9;
            iVar8 = FUN_00a8cab0();
            if (((iVar8 == 0x10000) || (iVar8 = FUN_00a8cab0(), iVar8 == 0x10009)) ||
               ((iVar8 = FUN_00a8cab0(), iVar8 == 0x1000a ||
                (iVar8 = FUN_00a8cab0(), iVar8 == 0x1000d)))) {
              uVar9 = FUN_00a8cab0();
              *(undefined4 *)(param_1 + 0x1bec) = uVar9;
            }
            goto LAB_004a92d4;
          }
          goto LAB_004a9306;
        }
        local_4 = 10000.0;
        uVar9 = FUN_004a05b0(&local_4,0);
        switch(uVar9) {
        case 0:
        case 1:
          if (*(int *)(param_1 + 0x4e4) == 0) {
            uVar9 = FUN_00a8cab0();
            *(undefined4 *)(param_1 + 0xde4) = uVar9;
            iVar8 = FUN_00a8cab0();
            if ((((iVar8 == 0x10000) || (iVar8 = FUN_00a8cab0(), iVar8 == 0x10009)) ||
                (iVar8 = FUN_00a8cab0(), iVar8 == 0x1000a)) ||
               (iVar8 = FUN_00a8cab0(), iVar8 == 0x1000d)) {
              uVar9 = FUN_00a8cab0();
              *(undefined4 *)(param_1 + 0x1bec) = uVar9;
            }
            if (*(int *)(param_1 + 0x1b60) != 0) {
              *(undefined4 *)(param_1 + 0x1bec) = 0x1000b;
            }
            *(undefined4 *)(param_1 + 0xde8) = *(undefined4 *)(param_1 + 0xdd0);
            FUN_004a0760();
            FUN_00a8caf0(0x10008,0,0,0);
            *(undefined4 *)(param_1 + 0xdd0) = 0;
            FUN_00a962d0(0,0);
            *(undefined4 *)(param_1 + 0xe30) = 0;
          }
          if (10.0 <= local_4) {
            return;
          }
          *(undefined4 *)(param_1 + 0x61c) = 2;
          *(float *)(param_1 + 0x1be4) = local_4 * 0.1;
          return;
        case 2:
          *(undefined4 *)(param_1 + 0xdd8) = 1;
          goto LAB_004a9148;
        case 3:
          *(undefined4 *)(param_1 + 0xdd8) = 2;
          if (*(int *)(param_1 + 0x4e4) != 0) {
            return;
          }
          uVar9 = FUN_00a8cab0();
          *(undefined4 *)(param_1 + 0xde4) = uVar9;
          iVar8 = FUN_00a8cab0();
          if (((iVar8 != 0x10000) && (iVar8 = FUN_00a8cab0(), iVar8 != 0x10009)) &&
             ((iVar8 = FUN_00a8cab0(), iVar8 != 0x1000a &&
              (iVar8 = FUN_00a8cab0(), iVar8 != 0x1000d)))) goto LAB_004a965c;
          uVar9 = FUN_00a8cab0();
          break;
        default:
          return;
        }
        goto LAB_004a9656;
      }
LAB_004a9306:
      if ((*(float *)(param_1 + 0xa90) <= *(float *)(param_1 + 0x1bb4)) ||
         (400.0 < *(float *)(param_1 + 0xa90))) {
        if ((*(float *)(param_1 + 0xa90) <= 400.0) || (*(int *)(param_1 + 0x1fe4) != 0))
        goto LAB_004a986e;
        iVar8 = FUN_004a0ce0();
        if (iVar8 != 0) {
          iVar8 = FUN_00907640(param_1 + 0x1c14,0,0);
          if (iVar8 != 0) {
            *(undefined4 *)(param_1 + 0xdd8) = 2;
            if (*(int *)(param_1 + 0x4e4) != 0) {
              return;
            }
            uVar9 = FUN_00a8cab0();
            *(undefined4 *)(param_1 + 0xde4) = uVar9;
            iVar8 = FUN_00a8cab0();
            if (((iVar8 == 0x10000) || (iVar8 = FUN_00a8cab0(), iVar8 == 0x10009)) ||
               ((iVar8 = FUN_00a8cab0(), iVar8 == 0x1000a ||
                (iVar8 = FUN_00a8cab0(), iVar8 == 0x1000d)))) {
              uVar9 = FUN_00a8cab0();
              *(undefined4 *)(param_1 + 0x1bec) = uVar9;
            }
            if (*(int *)(param_1 + 0x1b60) != 0) {
              *(undefined4 *)(param_1 + 0x1bec) = 0x1000b;
            }
            *(undefined4 *)(param_1 + 0xde8) = *(undefined4 *)(param_1 + 0xdd0);
            FUN_004a0760();
            uVar9 = 0x10005;
            goto LAB_004a9942;
          }
          iVar8 = FUN_00907640(param_1 + 0x1c18,0,0);
          if (iVar8 != 0) goto LAB_004a95f8;
        }
        fVar2 = *(float *)(*(int *)(param_1 + 0xa84) + 0x44) - *(float *)(param_1 + 0x44);
        if (fVar2 < 2.0 != (fVar2 == 2.0)) {
          if (*(int *)(param_1 + 0x4e4) != 0) {
            return;
          }
          uVar9 = FUN_00a8cab0();
          *(undefined4 *)(param_1 + 0xde4) = uVar9;
          iVar8 = FUN_00a8cab0();
          if (((iVar8 == 0x10000) || (iVar8 = FUN_00a8cab0(), iVar8 == 0x10009)) ||
             ((iVar8 = FUN_00a8cab0(), iVar8 == 0x1000a ||
              (iVar8 = FUN_00a8cab0(), iVar8 == 0x1000d)))) {
            uVar9 = FUN_00a8cab0();
            *(undefined4 *)(param_1 + 0x1bec) = uVar9;
          }
          if (*(int *)(param_1 + 0x1b60) != 0) {
            *(undefined4 *)(param_1 + 0x1bec) = 0x1000b;
          }
          *(undefined4 *)(param_1 + 0xde8) = *(undefined4 *)(param_1 + 0xdd0);
          FUN_004a0760();
          uVar9 = 0x50000;
          goto LAB_004a9942;
        }
        if (*(short *)(param_1 + 0x1a8c) != 0) {
          if (*(int *)(param_1 + 0x4e4) != 0) {
            return;
          }
          uVar9 = FUN_00a8cab0();
          *(undefined4 *)(param_1 + 0xde4) = uVar9;
          iVar8 = FUN_00a8cab0();
          if ((((iVar8 == 0x10000) || (iVar8 = FUN_00a8cab0(), iVar8 == 0x10009)) ||
              (iVar8 = FUN_00a8cab0(), iVar8 == 0x1000a)) ||
             (iVar8 = FUN_00a8cab0(), iVar8 == 0x1000d)) {
            uVar9 = FUN_00a8cab0();
            *(undefined4 *)(param_1 + 0x1bec) = uVar9;
          }
          if (*(int *)(param_1 + 0x1b60) != 0) {
            *(undefined4 *)(param_1 + 0x1bec) = 0x1000b;
          }
          *(undefined4 *)(param_1 + 0xde8) = *(undefined4 *)(param_1 + 0xdd0);
          FUN_004a0760();
          uVar9 = 0x1000c;
          goto LAB_004a9942;
        }
      }
      else {
        iVar8 = FUN_004a0ce0();
        if (iVar8 != 0) {
          iVar8 = FUN_00907640(param_1 + 0x1c14,0,0);
          if (iVar8 != 0) {
            *(undefined4 *)(param_1 + 0xdd8) = 2;
            goto LAB_004a95fe;
          }
          iVar8 = FUN_00907640(param_1 + 0x1c18,0,0);
          if (iVar8 != 0) {
            *(undefined4 *)(param_1 + 0xdd8) = 1;
            if (*(int *)(param_1 + 0x4e4) != 0) {
              return;
            }
            uVar9 = FUN_00a8cab0();
            *(undefined4 *)(param_1 + 0xde4) = uVar9;
            iVar8 = FUN_00a8cab0();
            if (((iVar8 == 0x10000) || (iVar8 = FUN_00a8cab0(), iVar8 == 0x10009)) ||
               ((iVar8 = FUN_00a8cab0(), iVar8 == 0x1000a ||
                (iVar8 = FUN_00a8cab0(), iVar8 == 0x1000d)))) {
              uVar9 = FUN_00a8cab0();
              *(undefined4 *)(param_1 + 0x1bec) = uVar9;
            }
            if (*(int *)(param_1 + 0x1b60) != 0) {
              *(undefined4 *)(param_1 + 0x1bec) = 0x1000b;
            }
            *(undefined4 *)(param_1 + 0xde8) = *(undefined4 *)(param_1 + 0xdd0);
            FUN_004a0760();
            uVar9 = 0x10005;
            goto LAB_004a9942;
          }
        }
        sVar7 = FUN_00dde2a0(0,1);
        if (((sVar7 == 0) ||
            (fVar2 = *(float *)(param_1 + 0xa90), NAN(fVar2) || 225.0 < fVar2 == (fVar2 == 225.0)))
           || ((*(int *)(param_1 + 0x1fe4) != 0 ||
               (fVar2 = *(float *)(*(int *)(param_1 + 0xa84) + 0x44) - *(float *)(param_1 + 0x44),
               fVar2 < 2.0 == (fVar2 == 2.0))))) {
          if (*(int *)(param_1 + 0x4e4) != 0) {
            return;
          }
          uVar9 = FUN_00a8cab0();
          *(undefined4 *)(param_1 + 0xde4) = uVar9;
          iVar8 = FUN_00a8cab0();
          if ((((iVar8 == 0x10000) || (iVar8 = FUN_00a8cab0(), iVar8 == 0x10009)) ||
              (iVar8 = FUN_00a8cab0(), iVar8 == 0x1000a)) ||
             (iVar8 = FUN_00a8cab0(), iVar8 == 0x1000d)) {
            uVar9 = FUN_00a8cab0();
            *(undefined4 *)(param_1 + 0x1bec) = uVar9;
          }
          if (*(int *)(param_1 + 0x1b60) != 0) {
            *(undefined4 *)(param_1 + 0x1bec) = 0x1000b;
          }
          *(undefined4 *)(param_1 + 0xde8) = *(undefined4 *)(param_1 + 0xdd0);
          FUN_004a0760();
          uVar9 = 0x1000c;
          goto LAB_004a9942;
        }
      }
      if (*(int *)(param_1 + 0x4e4) != 0) {
        return;
      }
      uVar9 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xde4) = uVar9;
      iVar8 = FUN_00a8cab0();
      if (((iVar8 == 0x10000) || (iVar8 = FUN_00a8cab0(), iVar8 == 0x10009)) ||
         ((iVar8 = FUN_00a8cab0(), iVar8 == 0x1000a || (iVar8 = FUN_00a8cab0(), iVar8 == 0x1000d))))
      {
        uVar9 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0x1bec) = uVar9;
      }
      if (*(int *)(param_1 + 0x1b60) != 0) {
        *(undefined4 *)(param_1 + 0x1bec) = 0x1000b;
      }
      *(undefined4 *)(param_1 + 0xde8) = *(undefined4 *)(param_1 + 0xdd0);
      FUN_004a0760();
      uVar9 = 0x50000;
      goto LAB_004a9942;
    }
    iVar8 = FUN_004a2600();
    if (iVar8 == 0) {
      uVar6 = FUN_00dde2a0(0,10);
      if (uVar6 < 6) {
        *(undefined4 *)(param_1 + 0xdd8) = 2;
        if (*(int *)(param_1 + 0x4e4) != 0) {
          return;
        }
        uVar9 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xde4) = uVar9;
        iVar8 = FUN_00a8cab0();
        if ((((iVar8 == 0x10000) || (iVar8 = FUN_00a8cab0(), iVar8 == 0x10009)) ||
            (iVar8 = FUN_00a8cab0(), iVar8 == 0x1000a)) ||
           (iVar8 = FUN_00a8cab0(), iVar8 == 0x1000d)) {
          uVar9 = FUN_00a8cab0();
          *(undefined4 *)(param_1 + 0x1bec) = uVar9;
        }
        goto LAB_004a91a9;
      }
      goto LAB_004a8f08;
    }
    if (iVar8 != 2) {
      if (iVar8 != 3) goto LAB_004a9014;
      *(undefined4 *)(param_1 + 0xdd8) = 2;
LAB_004a9148:
      if (*(int *)(param_1 + 0x4e4) != 0) {
        return;
      }
      uVar9 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xde4) = uVar9;
      iVar8 = FUN_00a8cab0();
      if (((iVar8 == 0x10000) || (iVar8 = FUN_00a8cab0(), iVar8 == 0x10009)) ||
         ((iVar8 = FUN_00a8cab0(), iVar8 == 0x1000a || (iVar8 = FUN_00a8cab0(), iVar8 == 0x1000d))))
      {
        uVar9 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0x1bec) = uVar9;
      }
      goto LAB_004a91a9;
    }
    *(undefined4 *)(param_1 + 0xdd8) = 1;
    if (*(int *)(param_1 + 0x4e4) != 0) {
      return;
    }
    uVar9 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xde4) = uVar9;
    iVar8 = FUN_00a8cab0();
    if ((((iVar8 == 0x10000) || (iVar8 = FUN_00a8cab0(), iVar8 == 0x10009)) ||
        (iVar8 = FUN_00a8cab0(), iVar8 == 0x1000a)) || (iVar8 = FUN_00a8cab0(), iVar8 == 0x1000d)) {
      uVar9 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0x1bec) = uVar9;
    }
  }
  else {
    uVar6 = 4;
    if (1 < *(ushort *)(param_1 + 0x1a96)) {
      uVar6 = 0;
    }
    if ((1.5707964 < *(float *)(param_1 + 0xaa0)) && (uVar5 = FUN_00dde2a0(0,9), uVar6 <= uVar5)) {
      if (*(int *)(param_1 + 0x4e4) != 0) {
        return;
      }
      uVar9 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xde4) = uVar9;
      iVar8 = FUN_00a8cab0();
      if (((iVar8 == 0x10000) || (iVar8 = FUN_00a8cab0(), iVar8 == 0x10009)) ||
         ((iVar8 = FUN_00a8cab0(), iVar8 == 0x1000a || (iVar8 = FUN_00a8cab0(), iVar8 == 0x1000d))))
      {
        uVar9 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0x1bec) = uVar9;
      }
      if (*(int *)(param_1 + 0x1b60) != 0) {
        *(undefined4 *)(param_1 + 0x1bec) = 0x1000b;
      }
      *(undefined4 *)(param_1 + 0xde8) = *(undefined4 *)(param_1 + 0xdd0);
LAB_004a9933:
      FUN_004a0760();
      uVar9 = 0x1000e;
      goto LAB_004a9942;
    }
    uVar6 = 5;
    if (1 < *(ushort *)(param_1 + 0x1a96)) {
      uVar6 = 0;
    }
    uVar5 = FUN_00dde2a0(0,9);
    if ((uVar5 < uVar6) || (1.5707964 < *(float *)(param_1 + 0xaa0))) {
      fVar2 = *(float *)(*(int *)(param_1 + 0xa84) + 0x44) - *(float *)(param_1 + 0x44);
      if ((fVar2 < 2.0 != (fVar2 == 2.0)) && (*(int *)(param_1 + 0x1fe0) == 0)) {
        if (*(int *)(param_1 + 0x4e4) != 0) {
          return;
        }
        uVar9 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xde4) = uVar9;
        iVar8 = FUN_00a8cab0();
        if ((((iVar8 == 0x10000) || (iVar8 = FUN_00a8cab0(), iVar8 == 0x10009)) ||
            (iVar8 = FUN_00a8cab0(), iVar8 == 0x1000a)) ||
           (iVar8 = FUN_00a8cab0(), iVar8 == 0x1000d)) {
          uVar9 = FUN_00a8cab0();
          *(undefined4 *)(param_1 + 0x1bec) = uVar9;
        }
        if (*(int *)(param_1 + 0x1b60) != 0) {
          *(undefined4 *)(param_1 + 0x1bec) = 0x1000b;
        }
        *(undefined4 *)(param_1 + 0xde8) = *(undefined4 *)(param_1 + 0xdd0);
        FUN_004a0760();
        uVar9 = 0x50002;
        goto LAB_004a9942;
      }
      if (0.5235988 <= *(float *)(param_1 + 0xaa0)) {
        return;
      }
      if (*(short *)(param_1 + 0x1a8c) != 0) {
        *(undefined4 *)(param_1 + 0x1fe0) = 1;
        return;
      }
      if (*(int *)(param_1 + 0x4e4) != 0) {
        return;
      }
      uVar9 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xde4) = uVar9;
      iVar8 = FUN_00a8cab0();
      if (((iVar8 == 0x10000) || (iVar8 = FUN_00a8cab0(), iVar8 == 0x10009)) ||
         ((iVar8 = FUN_00a8cab0(), iVar8 == 0x1000a || (iVar8 = FUN_00a8cab0(), iVar8 == 0x1000d))))
      {
        uVar9 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0x1bec) = uVar9;
      }
LAB_004a92d4:
      if (*(int *)(param_1 + 0x1b60) != 0) {
        *(undefined4 *)(param_1 + 0x1bec) = 0x1000b;
      }
      *(undefined4 *)(param_1 + 0xde8) = *(undefined4 *)(param_1 + 0xdd0);
      FUN_004a0760();
      uVar9 = 0x50002;
      goto LAB_004a9942;
    }
    local_c = 10000.0;
    local_4 = 10000.0;
    local_8 = 10000.0;
    iVar8 = FUN_00907640(param_1 + 0x1c08,0,pfVar1);
    if (iVar8 != 0) {
      fVar2 = *pfVar1 - *(float *)(param_1 + 0x40);
      fVar4 = *(float *)(param_1 + 0x1c34) - *(float *)(param_1 + 0x44);
      fVar3 = *(float *)(param_1 + 0x1c38) - *(float *)(param_1 + 0x48);
      local_c = fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2;
    }
    iVar8 = FUN_00907640(param_1 + 0x1c0c,0,pfVar1);
    if (iVar8 != 0) {
      fVar2 = *pfVar1 - *(float *)(param_1 + 0x40);
      fVar4 = *(float *)(param_1 + 0x1c34) - *(float *)(param_1 + 0x44);
      fVar3 = *(float *)(param_1 + 0x1c38) - *(float *)(param_1 + 0x48);
      local_4 = fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2;
    }
    iVar8 = FUN_00907640(param_1 + 0x1c04,0,pfVar1);
    if (iVar8 != 0) {
      fVar2 = *pfVar1 - *(float *)(param_1 + 0x40);
      fVar4 = *(float *)(param_1 + 0x1c34) - *(float *)(param_1 + 0x44);
      fVar3 = *(float *)(param_1 + 0x1c38) - *(float *)(param_1 + 0x48);
      local_8 = fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2;
    }
    iVar8 = 1;
    if (local_4 < local_8 == (local_4 == local_8)) {
      iVar8 = 3;
    }
    if (iVar8 == 1) {
      if ((local_c < local_8 != (local_c == local_8)) && (*(int *)(param_1 + 0x1fe0) == 0)) {
        if (*(int *)(param_1 + 0x4e4) == 0) {
          uVar9 = FUN_00a8cab0();
          *(undefined4 *)(param_1 + 0xde4) = uVar9;
          iVar8 = FUN_00a8cab0();
          if ((((iVar8 == 0x10000) || (iVar8 = FUN_00a8cab0(), iVar8 == 0x10009)) ||
              (iVar8 = FUN_00a8cab0(), iVar8 == 0x1000a)) ||
             (iVar8 = FUN_00a8cab0(), iVar8 == 0x1000d)) {
            uVar9 = FUN_00a8cab0();
            *(undefined4 *)(param_1 + 0x1bec) = uVar9;
          }
          if (*(int *)(param_1 + 0x1b60) != 0) {
            *(undefined4 *)(param_1 + 0x1bec) = 0x1000b;
          }
          *(undefined4 *)(param_1 + 0xde8) = *(undefined4 *)(param_1 + 0xdd0);
          FUN_004a0760();
          FUN_00a8caf0(0x10008,0,0,0);
          *(undefined4 *)(param_1 + 0xdd0) = 0;
          FUN_00a962d0(0,0);
          *(undefined4 *)(param_1 + 0xe30) = 0;
        }
        *(float *)(param_1 + 0x1be4) = SQRT(local_8) * 0.074074075;
        return;
      }
LAB_004a8f08:
      *(undefined4 *)(param_1 + 0xdd8) = 1;
      if (*(int *)(param_1 + 0x4e4) != 0) {
        return;
      }
      uVar9 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xde4) = uVar9;
      iVar8 = FUN_00a8cab0();
      if (((iVar8 == 0x10000) || (iVar8 = FUN_00a8cab0(), iVar8 == 0x10009)) ||
         ((iVar8 = FUN_00a8cab0(), iVar8 == 0x1000a || (iVar8 = FUN_00a8cab0(), iVar8 == 0x1000d))))
      {
        uVar9 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0x1bec) = uVar9;
      }
      if (*(int *)(param_1 + 0x1b60) != 0) {
        *(undefined4 *)(param_1 + 0x1bec) = 0x1000b;
      }
      *(undefined4 *)(param_1 + 0xde8) = *(undefined4 *)(param_1 + 0xdd0);
      FUN_004a0760();
      uVar9 = 0x10005;
      goto LAB_004a9942;
    }
    if (iVar8 != 3) {
      return;
    }
    if (local_c < local_4) {
      *(undefined4 *)(param_1 + 0xdd8) = 2;
      if (*(int *)(param_1 + 0x4e4) != 0) {
        return;
      }
      uVar9 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xde4) = uVar9;
      iVar8 = FUN_00a8cab0();
      if (((iVar8 == 0x10000) || (iVar8 = FUN_00a8cab0(), iVar8 == 0x10009)) ||
         ((iVar8 = FUN_00a8cab0(), iVar8 == 0x1000a || (iVar8 = FUN_00a8cab0(), iVar8 == 0x1000d))))
      {
        uVar9 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0x1bec) = uVar9;
      }
LAB_004a91a9:
      if (*(int *)(param_1 + 0x1b60) != 0) {
        *(undefined4 *)(param_1 + 0x1bec) = 0x1000b;
      }
      *(undefined4 *)(param_1 + 0xde8) = *(undefined4 *)(param_1 + 0xdd0);
      FUN_004a0760();
      uVar9 = 0x10005;
      goto LAB_004a9942;
    }
    if (local_c <= local_4) {
      uVar6 = FUN_00dde2a0(0,10);
      if (5 < uVar6) goto LAB_004a8f08;
      *(undefined4 *)(param_1 + 0xdd8) = 2;
      if (*(int *)(param_1 + 0x4e4) != 0) {
        return;
      }
      uVar9 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xde4) = uVar9;
      iVar8 = FUN_00a8cab0();
      if ((((iVar8 == 0x10000) || (iVar8 = FUN_00a8cab0(), iVar8 == 0x10009)) ||
          (iVar8 = FUN_00a8cab0(), iVar8 == 0x1000a)) || (iVar8 = FUN_00a8cab0(), iVar8 == 0x1000d))
      {
        uVar9 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0x1bec) = uVar9;
      }
      goto LAB_004a91a9;
    }
LAB_004a95f8:
    *(undefined4 *)(param_1 + 0xdd8) = 1;
LAB_004a95fe:
    if (*(int *)(param_1 + 0x4e4) != 0) {
      return;
    }
    uVar9 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xde4) = uVar9;
    iVar8 = FUN_00a8cab0();
    if (((iVar8 == 0x10000) || (iVar8 = FUN_00a8cab0(), iVar8 == 0x10009)) ||
       ((iVar8 = FUN_00a8cab0(), iVar8 == 0x1000a || (iVar8 = FUN_00a8cab0(), iVar8 == 0x1000d)))) {
      uVar9 = FUN_00a8cab0();
LAB_004a9656:
      *(undefined4 *)(param_1 + 0x1bec) = uVar9;
    }
  }
LAB_004a965c:
  if (*(int *)(param_1 + 0x1b60) != 0) {
    *(undefined4 *)(param_1 + 0x1bec) = 0x1000b;
  }
  *(undefined4 *)(param_1 + 0xde8) = *(undefined4 *)(param_1 + 0xdd0);
  FUN_004a0760();
  uVar9 = 0x10005;
LAB_004a9942:
  FUN_00a8caf0(uVar9,0,0,0);
  *(undefined4 *)(param_1 + 0xdd0) = 0;
  FUN_00a962d0(0,0);
  *(undefined4 *)(param_1 + 0xe30) = 0;
  return;
}

// 004A9A90  FUN_004a9a90  size=2384  [between]
void __fastcall FUN_004a9a90(int param_1)

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
      *(undefined4 *)(param_1 + 0xde4) = uVar4;
      iVar3 = FUN_00a8cab0();
      if ((((iVar3 == 0x10000) || (iVar3 = FUN_00a8cab0(), iVar3 == 0x10009)) ||
          (iVar3 = FUN_00a8cab0(), iVar3 == 0x1000a)) || (iVar3 = FUN_00a8cab0(), iVar3 == 0x1000d))
      {
        uVar4 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0x1bec) = uVar4;
      }
      if (*(int *)(param_1 + 0x1b60) != 0) {
        *(undefined4 *)(param_1 + 0x1bec) = 0x1000b;
      }
      *(undefined4 *)(param_1 + 0xde8) = *(undefined4 *)(param_1 + 0xdd0);
      FUN_004a0760();
      FUN_00a8caf0(0x10009,0,0,0);
      *(undefined4 *)(param_1 + 0xdd0) = 0;
      FUN_00a962d0(0,0);
      *(undefined4 *)(param_1 + 0xe30) = 0;
    }
    *(undefined4 *)(param_1 + 0x61c) = 1;
  }
  if (*(int *)(param_1 + 0x61c) != 1) goto LAB_004aa20c;
  if ((*(float *)(param_1 + 0xa90) <= 25.0) && (*(int *)(param_1 + 0x1fe0) == 0)) {
    if (*(int *)(param_1 + 0x4e4) != 0) {
      return;
    }
    uVar4 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xde4) = uVar4;
    iVar3 = FUN_00a8cab0();
    if (((iVar3 == 0x10000) || (iVar3 = FUN_00a8cab0(), iVar3 == 0x10009)) ||
       ((iVar3 = FUN_00a8cab0(), iVar3 == 0x1000a || (iVar3 = FUN_00a8cab0(), iVar3 == 0x1000d)))) {
      uVar4 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0x1bec) = uVar4;
    }
    if (*(int *)(param_1 + 0x1b60) != 0) {
      *(undefined4 *)(param_1 + 0x1bec) = 0x1000b;
    }
    *(undefined4 *)(param_1 + 0xde8) = *(undefined4 *)(param_1 + 0xdd0);
    FUN_004a0760();
    uVar4 = 0x50002;
LAB_004a9c3a:
    FUN_00a8caf0(uVar4,0,0,0);
    *(undefined4 *)(param_1 + 0xdd0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0xe30) = 0;
    return;
  }
  if (*(float *)(param_1 + 0xaa0) <= 0.5235988) {
    if (*(float *)(param_1 + 0xa90) < 30.25) {
      iVar3 = param_1 + 0x1c30;
      iVar5 = FUN_00907640(param_1 + 0x1bf4,0,iVar3);
      if (iVar5 == 0) {
        if (*(int *)(param_1 + 0x4e4) != 0) {
          return;
        }
        uVar4 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xde4) = uVar4;
        iVar3 = FUN_00a8cab0();
        if ((((iVar3 == 0x10000) || (iVar3 = FUN_00a8cab0(), iVar3 == 0x10009)) ||
            (iVar3 = FUN_00a8cab0(), iVar3 == 0x1000a)) ||
           (iVar3 = FUN_00a8cab0(), iVar3 == 0x1000d)) {
          uVar4 = FUN_00a8cab0();
          *(undefined4 *)(param_1 + 0x1bec) = uVar4;
        }
        if (*(int *)(param_1 + 0x1b60) != 0) {
          *(undefined4 *)(param_1 + 0x1bec) = 0x1000b;
        }
        *(undefined4 *)(param_1 + 0xde8) = *(undefined4 *)(param_1 + 0xdd0);
        FUN_004a0760();
        uVar4 = 0x10008;
        goto LAB_004a9c3a;
      }
      iVar5 = FUN_00907640(param_1 + 0x1bf8,0,iVar3);
      if ((iVar5 == 0) && (iVar5 = FUN_00907640(param_1 + 0x1bfc,0,iVar3), iVar5 == 0)) {
        sVar2 = FUN_00dde2a0(0,1);
        if (sVar2 == 0) goto LAB_004a9e42;
LAB_004a9d8c:
        *(undefined4 *)(param_1 + 0xdd8) = 2;
        if (*(int *)(param_1 + 0x4e4) != 0) {
          return;
        }
        uVar4 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xde4) = uVar4;
        iVar3 = FUN_00a8cab0();
        if (((iVar3 == 0x10000) || (iVar3 = FUN_00a8cab0(), iVar3 == 0x10009)) ||
           ((iVar3 = FUN_00a8cab0(), iVar3 == 0x1000a || (iVar3 = FUN_00a8cab0(), iVar3 == 0x1000d))
           )) {
          uVar4 = FUN_00a8cab0();
          *(undefined4 *)(param_1 + 0x1bec) = uVar4;
        }
        if (*(int *)(param_1 + 0x1b60) != 0) {
          *(undefined4 *)(param_1 + 0x1bec) = 0x1000b;
        }
        *(undefined4 *)(param_1 + 0xde8) = *(undefined4 *)(param_1 + 0xdd0);
      }
      else {
        iVar5 = FUN_00907640(param_1 + 0x1bfc,0,iVar3);
        if (iVar5 == 0) goto LAB_004a9d8c;
        iVar3 = FUN_00907640(param_1 + 0x1bf8,0,iVar3);
        if (iVar3 != 0) goto LAB_004a9f13;
LAB_004a9e42:
        *(undefined4 *)(param_1 + 0xdd8) = 1;
        if (*(int *)(param_1 + 0x4e4) != 0) {
          return;
        }
        uVar4 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xde4) = uVar4;
        iVar3 = FUN_00a8cab0();
        if ((((iVar3 == 0x10000) || (iVar3 = FUN_00a8cab0(), iVar3 == 0x10009)) ||
            (iVar3 = FUN_00a8cab0(), iVar3 == 0x1000a)) ||
           (iVar3 = FUN_00a8cab0(), iVar3 == 0x1000d)) {
          uVar4 = FUN_00a8cab0();
          *(undefined4 *)(param_1 + 0x1bec) = uVar4;
        }
        if (*(int *)(param_1 + 0x1b60) != 0) {
          *(undefined4 *)(param_1 + 0x1bec) = 0x1000b;
        }
        *(undefined4 *)(param_1 + 0xde8) = *(undefined4 *)(param_1 + 0xdd0);
      }
      FUN_004a0760();
      uVar4 = 0x10005;
      goto LAB_004a9e21;
    }
LAB_004a9f13:
    if (*(float *)(param_1 + 0xa90) <= *(float *)(param_1 + 0x1bb4)) {
      if (*(short *)(param_1 + 0x1a8c) == 0) {
        if (*(int *)(param_1 + 0x4e4) != 0) {
          return;
        }
        uVar4 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xde4) = uVar4;
        iVar3 = FUN_00a8cab0();
        if (((iVar3 == 0x10000) || (iVar3 = FUN_00a8cab0(), iVar3 == 0x10009)) ||
           ((iVar3 = FUN_00a8cab0(), iVar3 == 0x1000a || (iVar3 = FUN_00a8cab0(), iVar3 == 0x1000d))
           )) {
          uVar4 = FUN_00a8cab0();
          *(undefined4 *)(param_1 + 0x1bec) = uVar4;
        }
        if (*(int *)(param_1 + 0x1b60) != 0) {
          *(undefined4 *)(param_1 + 0x1bec) = 0x1000b;
        }
        *(undefined4 *)(param_1 + 0xde8) = *(undefined4 *)(param_1 + 0xdd0);
        FUN_004a0760();
        uVar4 = 0x50000;
        goto LAB_004a9e21;
      }
      if (*(float *)(param_1 + 0xaa0) < 0.5235988) {
        *(undefined4 *)(param_1 + 0x1fe0) = 1;
      }
    }
  }
  if ((*(float *)(param_1 + 0x1bb4) < *(float *)(param_1 + 0xa90)) &&
     (*(float *)(param_1 + 0xa90) <= 225.0)) {
    if (*(float *)(param_1 + 0xaa0) <= 0.34906584) {
      if (*(int *)(param_1 + 0x4e4) != 0) {
        return;
      }
      uVar4 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xde4) = uVar4;
      iVar3 = FUN_00a8cab0();
      if ((((iVar3 == 0x10000) || (iVar3 = FUN_00a8cab0(), iVar3 == 0x10009)) ||
          (iVar3 = FUN_00a8cab0(), iVar3 == 0x1000a)) || (iVar3 = FUN_00a8cab0(), iVar3 == 0x1000d))
      {
        uVar4 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0x1bec) = uVar4;
      }
      if (*(int *)(param_1 + 0x1b60) != 0) {
        *(undefined4 *)(param_1 + 0x1bec) = 0x1000b;
      }
      *(undefined4 *)(param_1 + 0xde8) = *(undefined4 *)(param_1 + 0xdd0);
      FUN_004a0760();
      uVar4 = 0x10006;
      goto LAB_004a9e21;
    }
    if (*(float *)(param_1 + 0xaa0) < 1.5707964) {
      if (0.0 < *(float *)(param_1 + 0xa9c)) {
        FUN_004a3170(0x3f800000,*(float *)(param_1 + 0xaa0) * 0.63661975);
        return;
      }
      if (*(float *)(param_1 + 0xa9c) < 0.0) {
        FUN_004a3090(0x3f800000,*(float *)(param_1 + 0xaa0) * 0.63661975);
        return;
      }
    }
  }
  if ((*(float *)(param_1 + 0xa90) <= 225.0) || (0.5235988 < *(float *)(param_1 + 0xaa0))) {
LAB_004aa20c:
    if (0.5235988 < *(float *)(param_1 + 0xaa0)) {
      bVar1 = 0.0 < *(float *)(param_1 + 0xa9c);
      if (*(float *)(param_1 + 0xa90) <= 100.0) {
        if (bVar1) {
          if (*(float *)(param_1 + 0xaa0) <= 1.5707964) {
            FUN_004a2df0(0x3f800000,*(float *)(param_1 + 0xaa0) * 0.63661975);
            *(undefined4 *)(param_1 + 0x1bd4) = *(undefined4 *)(param_1 + 0x1bd0);
            return;
          }
          FUN_004a2fb0(0x3f800000,*(float *)(param_1 + 0xaa0) * 0.31830987);
          *(undefined4 *)(param_1 + 0x1bd4) = *(undefined4 *)(param_1 + 0x1bd0);
          return;
        }
        if (0.0 <= *(float *)(param_1 + 0xa9c)) {
          *(undefined4 *)(param_1 + 0x1bd4) = *(undefined4 *)(param_1 + 0x1bd0);
          return;
        }
        if (*(float *)(param_1 + 0xaa0) <= 1.5707964) {
          FUN_004a2d10(0x3f800000,*(float *)(param_1 + 0xaa0) * 0.63661975);
          *(undefined4 *)(param_1 + 0x1bd4) = *(undefined4 *)(param_1 + 0x1bd0);
          return;
        }
        FUN_004a2ed0(0x3f800000,*(float *)(param_1 + 0xaa0) * 0.31830987);
        *(undefined4 *)(param_1 + 0x1bd4) = *(undefined4 *)(param_1 + 0x1bd0);
        return;
      }
      if (bVar1) {
        if (*(float *)(param_1 + 0xaa0) <= 1.5707964) {
          FUN_004a3170(0x3f800000,*(float *)(param_1 + 0xaa0) * 0.63661975);
          return;
        }
        FUN_004a2fb0(0x3f800000,*(float *)(param_1 + 0xaa0) * 0.31830987);
        return;
      }
      if (*(float *)(param_1 + 0xa9c) < 0.0) {
        if (*(float *)(param_1 + 0xaa0) <= 1.5707964) {
          FUN_004a3090(0x3f800000,*(float *)(param_1 + 0xaa0) * 0.63661975);
          return;
        }
        FUN_004a2ed0(0x3f800000,*(float *)(param_1 + 0xaa0) * 0.31830987);
        return;
      }
    }
    return;
  }
  if (*(int *)(param_1 + 0x4e4) != 0) {
    return;
  }
  uVar4 = FUN_00a8cab0();
  *(undefined4 *)(param_1 + 0xde4) = uVar4;
  iVar3 = FUN_00a8cab0();
  if (((iVar3 == 0x10000) || (iVar3 = FUN_00a8cab0(), iVar3 == 0x10009)) ||
     ((iVar3 = FUN_00a8cab0(), iVar3 == 0x1000a || (iVar3 = FUN_00a8cab0(), iVar3 == 0x1000d)))) {
    uVar4 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0x1bec) = uVar4;
  }
  if (*(int *)(param_1 + 0x1b60) != 0) {
    *(undefined4 *)(param_1 + 0x1bec) = 0x1000b;
  }
  *(undefined4 *)(param_1 + 0xde8) = *(undefined4 *)(param_1 + 0xdd0);
  FUN_004a0760();
  uVar4 = 0x50000;
LAB_004a9e21:
  FUN_00a8caf0(uVar4,0,0,0);
  *(undefined4 *)(param_1 + 0xdd0) = 0;
  FUN_00a962d0(0,0);
  *(undefined4 *)(param_1 + 0xe30) = 0;
  return;
}

// 004AAD10  FUN_004aad10  size=452  [between]
void __fastcall FUN_004aad10(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0xdf4) != 0x1000a) {
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
        *(undefined4 *)(param_1 + 0xde4) = uVar3;
        iVar2 = FUN_00a8cab0();
        if ((((iVar2 == 0x10000) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x10009)) ||
            (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000a)) ||
           (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000d)) {
          uVar3 = FUN_00a8cab0();
          *(undefined4 *)(param_1 + 0x1bec) = uVar3;
        }
        if (*(int *)(param_1 + 0x1b60) != 0) {
          *(undefined4 *)(param_1 + 0x1bec) = 0x1000b;
        }
        *(undefined4 *)(param_1 + 0xde8) = *(undefined4 *)(param_1 + 0xdd0);
        FUN_004a0760();
        FUN_00a8caf0(0x10006,0,0,0);
        *(undefined4 *)(param_1 + 0xdd0) = 0;
        FUN_00a962d0(0,0);
        *(undefined4 *)(param_1 + 0xe30) = 0;
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
      FUN_004a3090(0x3f800000,*(float *)(param_1 + 0xaa0) * 0.63661975);
      return;
    }
    FUN_004a3170(0x3f800000,*(float *)(param_1 + 0xaa0) * 0.63661975);
    return;
  }
  return;
}

// 004AAEF0  FUN_004aaef0  size=335  [between]
void __fastcall FUN_004aaef0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    if (*(int *)(param_1 + 0xdd4) == 1) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0x40;
    }
    FUN_00aa4080(0x18,0,0x3e4ccccd,0x3f800000,uVar2,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 1:
    FUN_00ac80a0(*(undefined4 *)(param_1 + 0x1be4),*(undefined4 *)(param_1 + 0x1be8));
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_004a2b50(*(undefined4 *)(param_1 + 0x1bec),0,0,0,0);
    }
    if (*(float *)(param_1 + 0xa90) < 25.0) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      return;
    }
    break;
  case 2:
    iVar1 = FUN_00a94ee0(0,0x28,0x3c);
    if (iVar1 == 0) {
      FUN_004a2b50(*(undefined4 *)(param_1 + 0x1bec),0,0,0,0);
    }
    else {
      FUN_00aa4080(0x13,0,0x3e4ccccd,0x3f800000,0x8000000,0x3f800000,0x3f800000);
    }
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 3:
    FUN_00ac80a0(0x3f000000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_004a2b50(*(undefined4 *)(param_1 + 0x1bec),0,0,0,0);
    }
  }
  return;
}

// 004AB050  FUN_004ab050  size=511  [between]
void __thiscall
FUN_004ab050(int param_1,float param_2,float param_3,float param_4,float param_5,float param_6)

{
  float fVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar2 = FUN_00dde2a0(0,100);
  if ((uVar2 != 0) && ((float)uVar2 < param_2 != ((float)uVar2 == param_2))) {
    FUN_004a2d10(0x3f800000,0x3f800000);
    return;
  }
  fVar1 = (float)uVar2;
  if ((param_2 < fVar1) && (fVar1 <= param_2 + param_3)) {
    FUN_004a2df0(0x3f800000,0x3f800000);
    return;
  }
  param_3 = param_3 + param_2;
  if ((param_3 < fVar1) && (fVar1 <= param_3 + param_4)) {
    FUN_004a2ed0(0x3f800000,0x3f800000);
    return;
  }
  param_4 = param_4 + param_3;
  if ((param_4 < fVar1) && (fVar1 <= param_4 + param_5)) {
    FUN_004a2fb0(0x3f800000,0x3f800000);
    return;
  }
  if ((((param_5 + param_4 < fVar1) && (fVar1 <= param_5 + param_4 + param_6)) &&
      (iVar3 = FUN_00907640(param_1 + 0x1bf0,0,param_1 + 0x1c30), iVar3 == 0)) &&
     (*(int *)(param_1 + 0x4e4) == 0)) {
    uVar4 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xde4) = uVar4;
    iVar3 = FUN_00a8cab0();
    if (((iVar3 == 0x10000) || (iVar3 = FUN_00a8cab0(), iVar3 == 0x10009)) ||
       ((iVar3 = FUN_00a8cab0(), iVar3 == 0x1000a || (iVar3 = FUN_00a8cab0(), iVar3 == 0x1000d)))) {
      uVar4 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0x1bec) = uVar4;
    }
    if (*(int *)(param_1 + 0x1b60) != 0) {
      *(undefined4 *)(param_1 + 0x1bec) = 0x1000b;
    }
    *(undefined4 *)(param_1 + 0xde8) = *(undefined4 *)(param_1 + 0xdd0);
    FUN_004a0760();
    FUN_00a8caf0(0x10006,0,0,0);
    *(undefined4 *)(param_1 + 0xdd0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0xe30) = 0;
    return;
  }
  return;
}

// 004AB250  Em0100::vf19C  size=179  [class]
void __thiscall Em0100::vf19C(int *param_1,int param_2,undefined4 param_3)

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

// 004AB310  Em0100::vf1A4  size=403  [class]
void __thiscall Em0100::vf1A4(int param_1,int *param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  *(uint *)(param_1 + 0x1bac) = param_3;
  if ((param_3 & 6) != 0) {
    *(uint *)(param_1 + 0xe4c) = *(uint *)(param_1 + 0xe4c) | 0x2000000;
    if (*param_2 == 0x112) {
      if (*(int *)(param_1 + 0x4e4) == 0) {
        uVar2 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xde4) = uVar2;
        iVar1 = FUN_00a8cab0();
        if ((((iVar1 == 0x10000) || (iVar1 = FUN_00a8cab0(), iVar1 == 0x10009)) ||
            (iVar1 = FUN_00a8cab0(), iVar1 == 0x1000a)) ||
           (iVar1 = FUN_00a8cab0(), iVar1 == 0x1000d)) {
          uVar2 = FUN_00a8cab0();
          *(undefined4 *)(param_1 + 0x1bec) = uVar2;
        }
        if (*(int *)(param_1 + 0x1b60) != 0) {
          *(undefined4 *)(param_1 + 0x1bec) = 0x1000b;
        }
        *(undefined4 *)(param_1 + 0xde8) = *(undefined4 *)(param_1 + 0xdd0);
        FUN_004a0760();
        FUN_00a8caf0(0x50001,0,0,0);
        *(undefined4 *)(param_1 + 0xdd0) = 0;
        FUN_00a962d0(0,0);
        *(undefined4 *)(param_1 + 0xe30) = 0;
      }
      if ((param_3 & 4) == 0) {
        uVar2 = 0x3f800000;
      }
      else {
        uVar2 = 0x3dcccccd;
      }
      *(undefined4 *)(param_1 + 0x1be4) = uVar2;
    }
    else if ((*param_2 == 0x113) && (iVar1 = FUN_00a8cab0(), iVar1 == 0x50003)) {
      *(undefined4 *)(param_1 + 0x61c) = 8;
    }
  }
  if ((param_3 & 8) != 0) {
    *(uint *)(param_1 + 0xe4c) = *(uint *)(param_1 + 0xe4c) | 0x1000000;
  }
  if ((param_3 & 1) != 0) {
    iVar1 = *param_2;
    if (iVar1 == 0x112) {
      *(uint *)(param_1 + 0xe4c) = *(uint *)(param_1 + 0xe4c) | 0x8000000;
      return;
    }
    if (iVar1 == 0x113) {
      *(uint *)(param_1 + 0xe4c) = *(uint *)(param_1 + 0xe4c) | 0x4000000;
      return;
    }
    if (((iVar1 == 0x114) && (30.0 < *(float *)(param_1 + 0x1d64))) &&
       (*(char *)(param_1 + 0x1d60) == '\x04')) {
      *(undefined4 *)(param_1 + 0x1d64) = 0x41f00000;
      return;
    }
  }
  return;
}

// 004AB4B0  FUN_004ab4b0  size=304  [between]
undefined4 * __thiscall FUN_004ab4b0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  *(undefined1 *)((int)param_1 + 0x11) = *(undefined1 *)((int)param_2 + 0x11);
  param_1[5] = param_2[5];
  FUN_00a7c940(param_2 + 6);
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  FID_conflict__memcpy(param_1 + 0x10,param_2 + 0x10,0x40);
  *(undefined2 *)(param_1 + 0x20) = *(undefined2 *)(param_2 + 0x20);
  *(undefined2 *)((int)param_1 + 0x82) = *(undefined2 *)((int)param_2 + 0x82);
  *(undefined2 *)(param_1 + 0x21) = *(undefined2 *)(param_2 + 0x21);
  param_1[0x22] = param_2[0x22];
  param_1[0x23] = param_2[0x23];
  param_1[0x24] = param_2[0x24];
  param_1[0x25] = param_2[0x25];
  FID_conflict__memcpy(param_1 + 0x28,param_2 + 0x28,0x40);
  param_1[0x38] = param_2[0x38];
  param_1[0x39] = param_2[0x39];
  param_1[0x3a] = param_2[0x3a];
  param_1[0x3b] = param_2[0x3b];
  param_1[0x3c] = param_2[0x3c];
  param_1[0x3d] = param_2[0x3d];
  return param_1;
}

// 004AB5E0  Em0100::vf150  size=550  [class]
void __thiscall Em0100::vf150(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_3 == 0) {
    return;
  }
  FUN_00a7c950();
  uVar1 = FUN_00a7c7f0();
  FUN_00a7c960(uVar1);
  if (param_2 == 0x3d) {
    if (*(int *)(param_1 + 0x4e4) != 0) goto LAB_004ab7f9;
    uVar1 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xde4) = uVar1;
    iVar2 = FUN_00a8cab0();
    if (((iVar2 == 0x10000) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x10009)) ||
       ((iVar2 = FUN_00a8cab0(), iVar2 == 0x1000a || (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000d)))) {
      uVar1 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0x1bec) = uVar1;
    }
    if (*(int *)(param_1 + 0x1b60) != 0) {
      *(undefined4 *)(param_1 + 0x1bec) = 0x1000b;
    }
    *(undefined4 *)(param_1 + 0xde8) = *(undefined4 *)(param_1 + 0xdd0);
    FUN_004a0760();
    uVar1 = 0x90000;
  }
  else if (param_2 == 0x3e) {
    if (*(int *)(param_1 + 0x4e4) != 0) goto LAB_004ab7f9;
    uVar1 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xde4) = uVar1;
    iVar2 = FUN_00a8cab0();
    if (((iVar2 == 0x10000) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x10009)) ||
       ((iVar2 = FUN_00a8cab0(), iVar2 == 0x1000a || (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000d)))) {
      uVar1 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0x1bec) = uVar1;
    }
    if (*(int *)(param_1 + 0x1b60) != 0) {
      *(undefined4 *)(param_1 + 0x1bec) = 0x1000b;
    }
    *(undefined4 *)(param_1 + 0xde8) = *(undefined4 *)(param_1 + 0xdd0);
    FUN_004a0760();
    uVar1 = 0x90002;
  }
  else {
    if (param_2 != 0x3f) {
      return;
    }
    if (*(int *)(param_1 + 0x4e4) != 0) goto LAB_004ab7f9;
    uVar1 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xde4) = uVar1;
    iVar2 = FUN_00a8cab0();
    if ((((iVar2 == 0x10000) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x10009)) ||
        (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000a)) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000d)) {
      uVar1 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0x1bec) = uVar1;
    }
    if (*(int *)(param_1 + 0x1b60) != 0) {
      *(undefined4 *)(param_1 + 0x1bec) = 0x1000b;
    }
    *(undefined4 *)(param_1 + 0xde8) = *(undefined4 *)(param_1 + 0xdd0);
    FUN_004a0760();
    uVar1 = 0x90001;
  }
  FUN_00a8caf0(uVar1,0,0,0);
  *(undefined4 *)(param_1 + 0xdd0) = 0;
  FUN_00a962d0(0,0);
  *(undefined4 *)(param_1 + 0xe30) = 0;
LAB_004ab7f9:
  FUN_004a58d0();
  return;
}

// 004AB810  FUN_004ab810  size=931  [between]
void __fastcall FUN_004ab810(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x61c);
  if (iVar1 == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0xdd4) = 0;
  if (*(int *)(param_1 + 0x1a40) == 0) {
    if (iVar1 == 1) {
      FUN_004ab050(0x41200000,0x41200000,0x40a00000,0x40a00000,0x41200000);
      *(undefined4 *)(param_1 + 0x1bc4) = *(undefined4 *)(param_1 + 0xa90);
      return;
    }
    if (1 < iVar1 - 2U) goto LAB_004abba3;
    iVar1 = FUN_00a82d50();
    if ((iVar1 == 2) || (iVar1 = FUN_00a82d50(), iVar1 == 3)) {
      if (*(int *)(param_1 + 0x4e4) == 0) {
        uVar2 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xde4) = uVar2;
        iVar1 = FUN_00a8cab0();
        if ((((iVar1 == 0x10000) || (iVar1 = FUN_00a8cab0(), iVar1 == 0x10009)) ||
            (iVar1 = FUN_00a8cab0(), iVar1 == 0x1000a)) ||
           (iVar1 = FUN_00a8cab0(), iVar1 == 0x1000d)) {
          uVar2 = FUN_00a8cab0();
          *(undefined4 *)(param_1 + 0x1bec) = uVar2;
        }
        if (*(int *)(param_1 + 0x1b60) != 0) {
          *(undefined4 *)(param_1 + 0x1bec) = 0x1000b;
        }
        *(undefined4 *)(param_1 + 0xde8) = *(undefined4 *)(param_1 + 0xdd0);
        FUN_004a0760();
        FUN_00a8caf0(0x10009,0,0,0);
        *(undefined4 *)(param_1 + 0xdd0) = 0;
        FUN_00a962d0(0,0);
        *(undefined4 *)(param_1 + 0xe30) = 0;
      }
      *(undefined4 *)(param_1 + 0x61c) = 1;
      *(undefined4 *)(param_1 + 0x1c84) = 0;
    }
    iVar1 = FUN_00a82d50();
    if (iVar1 != 4) goto LAB_004abba3;
    if (*(int *)(param_1 + 0x4e4) == 0) {
      uVar2 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xde4) = uVar2;
      iVar1 = FUN_00a8cab0();
      if (((iVar1 == 0x10000) || (iVar1 = FUN_00a8cab0(), iVar1 == 0x10009)) ||
         ((iVar1 = FUN_00a8cab0(), iVar1 == 0x1000a || (iVar1 = FUN_00a8cab0(), iVar1 == 0x1000d))))
      {
        uVar2 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0x1bec) = uVar2;
      }
      if (*(int *)(param_1 + 0x1b60) != 0) {
        *(undefined4 *)(param_1 + 0x1bec) = 0x1000b;
      }
      *(undefined4 *)(param_1 + 0xde8) = *(undefined4 *)(param_1 + 0xdd0);
LAB_004abb68:
      FUN_004a0760();
      FUN_00a8caf0(0x1000a,0,0,0);
      *(undefined4 *)(param_1 + 0xdd0) = 0;
      FUN_00a962d0(0,0);
      *(undefined4 *)(param_1 + 0xe30) = 0;
    }
  }
  else {
    if (1 < iVar1 - 1U) goto LAB_004abba3;
    iVar1 = FUN_00a82d50();
    if ((iVar1 == 2) || (iVar1 = FUN_00a82d50(), iVar1 == 3)) {
      if (*(int *)(param_1 + 0x4e4) == 0) {
        uVar2 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xde4) = uVar2;
        iVar1 = FUN_00a8cab0();
        if ((((iVar1 == 0x10000) || (iVar1 = FUN_00a8cab0(), iVar1 == 0x10009)) ||
            (iVar1 = FUN_00a8cab0(), iVar1 == 0x1000a)) ||
           (iVar1 = FUN_00a8cab0(), iVar1 == 0x1000d)) {
          uVar2 = FUN_00a8cab0();
          *(undefined4 *)(param_1 + 0x1bec) = uVar2;
        }
        if (*(int *)(param_1 + 0x1b60) != 0) {
          *(undefined4 *)(param_1 + 0x1bec) = 0x1000b;
        }
        *(undefined4 *)(param_1 + 0xde8) = *(undefined4 *)(param_1 + 0xdd0);
        FUN_004a0760();
        FUN_00a8caf0(0x10009,0,0,0);
        *(undefined4 *)(param_1 + 0xdd0) = 0;
        FUN_00a962d0(0,0);
        *(undefined4 *)(param_1 + 0xe30) = 0;
      }
      *(undefined4 *)(param_1 + 0x61c) = 1;
      *(undefined4 *)(param_1 + 0x1c84) = 0;
    }
    iVar1 = FUN_00a82d50();
    if (iVar1 != 4) goto LAB_004abba3;
    if (*(int *)(param_1 + 0x4e4) == 0) {
      uVar2 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xde4) = uVar2;
      iVar1 = FUN_00a8cab0();
      if (((iVar1 == 0x10000) || (iVar1 = FUN_00a8cab0(), iVar1 == 0x10009)) ||
         ((iVar1 = FUN_00a8cab0(), iVar1 == 0x1000a || (iVar1 = FUN_00a8cab0(), iVar1 == 0x1000d))))
      {
        uVar2 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0x1bec) = uVar2;
      }
      if (*(int *)(param_1 + 0x1b60) != 0) {
        *(undefined4 *)(param_1 + 0x1bec) = 0x1000b;
      }
      *(undefined4 *)(param_1 + 0xde8) = *(undefined4 *)(param_1 + 0xdd0);
      goto LAB_004abb68;
    }
  }
  *(undefined4 *)(param_1 + 0x1c84) = 0;
  *(undefined4 *)(param_1 + 0x61c) = 1;
LAB_004abba3:
  *(undefined4 *)(param_1 + 0x1bc4) = *(undefined4 *)(param_1 + 0xa90);
  return;
}

// 004ABBC0  FUN_004abbc0  size=124  [between]
void __thiscall FUN_004abbc0(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

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

// 004ABC40  FUN_004abc40  size=137  [between]
void __thiscall
FUN_004abc40(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5)

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

// 004ABCE0  FUN_004abce0  size=1804  [between]
void __fastcall FUN_004abce0(int *param_1)

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
    param_1[0x7fa] = 1;
    FUN_00a8d280();
    *(undefined2 *)((int)param_1 + 0x1a96) = 0;
    FUN_00aa4080(0x2a,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
    iVar2 = FUN_00a94ee0(0,0,0x32);
    if (iVar2 == 0) {
      if ((1.0471976 < (float)param_1[0x2a8]) || ((param_1[0x393] & 0x8000000U) != 0)) {
        param_1[0x393] = param_1[0x393] & 0xf7ffffff;
        FUN_00a8cb60(4);
        return;
      }
    }
    else if (1.0471976 < (float)param_1[0x2a8]) {
      if (param_1[0x139] != 0) {
        return;
      }
      iVar2 = FUN_00a8cab0();
      param_1[0x379] = iVar2;
      iVar2 = FUN_00a8cab0();
      if ((((iVar2 == 0x10000) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x10009)) ||
          (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000a)) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000d))
      {
        iVar2 = FUN_00a8cab0();
        param_1[0x6fb] = iVar2;
      }
      if (param_1[0x6d8] != 0) {
        param_1[0x6fb] = 0x1000b;
      }
      param_1[0x37a] = param_1[0x374];
      FUN_004a0760();
      FUN_00a8caf0(0x1000a,0,0,0);
      param_1[0x374] = 0;
      FUN_00a962d0(0,0);
      param_1[0x38c] = 0;
      return;
    }
    iVar2 = FUN_00a959f0(0);
    if (iVar2 == 0x33) {
      FUN_004abbc0(0x41,param_1 + 0x618,0);
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
    param_1[0x6aa] = 0x3e99999a;
    param_1[0x249] = 0x42f00000;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x249];
    param_1[0x249] = (int)(fVar1 - (float)param_1[0x244]);
    if (0.0 < fVar1 - (float)param_1[0x244]) {
      FUN_00a8e880(param_1[0x2a1] + 0x40);
      (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
      iVar2 = FUN_00907640(param_1 + 0x700,0,param_1 + 0x70c);
      if ((iVar2 == 0) ||
         (fVar1 = (float)param_1[0x70c] - (float)param_1[0x10],
         25.0 <= ((float)param_1[0x70e] - (float)param_1[0x12]) *
                 ((float)param_1[0x70e] - (float)param_1[0x12]) +
                 ((float)param_1[0x70d] - (float)param_1[0x11]) *
                 ((float)param_1[0x70d] - (float)param_1[0x11]) + fVar1 * fVar1)) {
        if (((float)param_1[0x2a8] <= 1.0471976) && ((param_1[0x393] & 0x8000000U) == 0)) {
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
          if ((float)param_1[0x6aa] < 0.5) {
            param_1[0x6aa] = (int)((float)param_1[0x6aa] + 0.05);
          }
          fVar1 = (float)param_1[0x6aa];
          local_34 = (float)param_1[0x244];
          local_40 = unaff_EDI * fVar1 * local_34;
          local_3c = unaff_ESI * fVar1 * local_34;
          local_38 = unaff_EBX * fVar1 * local_34;
          local_34 = local_34 * fStack_44 * fVar1;
          (**(code **)(*param_1 + 0x70))(&local_40);
          return;
        }
        param_1[0x393] = param_1[0x393] & 0xf7ffffff;
        param_1[0x187] = param_1[0x187] + 1;
        return;
      }
    }
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x393] = param_1[0x393] & 0xf7ffffff;
    return;
  case 4:
    FUN_00aa4080(0x2c,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    (**(code **)(param_1[0x618] + 8))(0x41200000,0,0);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,param_1[0x6fa]);
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
    if (0.0 < (float)param_1[0x6aa]) {
      param_1[0x6aa] = (int)((float)param_1[0x6aa] - 0.1);
    }
    if ((float)param_1[0x6aa] < 0.0) {
      param_1[0x6aa] = 0;
    }
    fVar1 = (float)param_1[0x6aa];
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
        param_1[0x379] = iVar2;
        iVar2 = FUN_00a8cab0();
        if ((((iVar2 == 0x10000) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x10009)) ||
            (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000a)) ||
           (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000d)) {
          iVar2 = FUN_00a8cab0();
          param_1[0x6fb] = iVar2;
        }
        if (param_1[0x6d8] != 0) {
          param_1[0x6fb] = 0x1000b;
        }
        param_1[0x37a] = param_1[0x374];
        FUN_004a0760();
        FUN_00a8caf0(0x1000a,0,0,0);
        param_1[0x374] = 0;
        FUN_00a962d0(0,0);
        param_1[0x38c] = 0;
      }
      fVar3 = (float10)FUN_00dde300(param_1[0x6e9],param_1[0x6ea]);
      param_1[0x401] = (int)(float)(fVar3 * (float10)60.0);
      return;
    }
  }
  return;
}

// 004AC410  FUN_004ac410  size=2203  [between]
void __fastcall FUN_004ac410(int *param_1)

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
switchD_004ac434_caseD_1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if ((float)param_1[0x2a8] <= 1.0471976) {
      iVar2 = FUN_00a94ce0(0);
      if (iVar2 != 0) {
        param_1[0x187] = param_1[0x187] + 1;
        return;
      }
    }
    else {
LAB_004ac8c1:
      if (param_1[0x139] == 0) {
        iVar2 = FUN_00a8cab0();
        param_1[0x379] = iVar2;
        iVar2 = FUN_00a8cab0();
        if ((((iVar2 == 0x10000) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x10009)) ||
            (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000a)) ||
           (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000d)) {
          iVar2 = FUN_00a8cab0();
          param_1[0x6fb] = iVar2;
        }
        if (param_1[0x6d8] != 0) {
          param_1[0x6fb] = 0x1000b;
        }
        param_1[0x37a] = param_1[0x374];
        FUN_004a0760();
        uVar3 = 0x1000a;
LAB_004ac94c:
        FUN_00a8caf0(uVar3,0,0,0);
        param_1[0x374] = 0;
        FUN_00a962d0(0,0);
        param_1[0x38c] = 0;
        return;
      }
    }
switchD_004ac434_default:
    return;
  case 1:
    goto switchD_004ac434_caseD_1;
  case 2:
    FUN_00aa4080(0x30,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x41f00000;
    param_1[0x6aa] = 0;
    FUN_004abbc0(0x44,param_1 + 0x6ac,0);
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
    iVar2 = FUN_00907640(param_1 + 0x700,0,param_1 + 0x70c);
    if ((iVar2 != 0) &&
       (fVar1 = (float)param_1[0x10] - (float)param_1[0x70c],
       SQRT(((float)param_1[0x12] - (float)param_1[0x70e]) *
            ((float)param_1[0x12] - (float)param_1[0x70e]) +
            ((float)param_1[0x11] - (float)param_1[0x70d]) *
            ((float)param_1[0x11] - (float)param_1[0x70d]) + fVar1 * fVar1) < 5.0)) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    if (((float)param_1[0x2a8] <= 1.0471976) && ((param_1[0x393] & 0x8000000U) == 0)) {
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
      if ((float)param_1[0x6aa] < 0.3) {
        param_1[0x6aa] = (int)((float)param_1[0x6aa] + 0.01);
      }
      fVar1 = (float)param_1[0x6aa];
      local_44 = (float)param_1[0x244];
      local_50 = unaff_EDI * fVar1 * local_44;
      local_4c = unaff_ESI * fVar1 * local_44;
      local_48 = unaff_EBX * fVar1 * local_44;
      local_44 = local_44 * fStack_54 * fVar1;
      (**(code **)(*param_1 + 0x70))(&local_50);
      return;
    }
    if ((float)param_1[0x2a7] <= 0.0) {
      param_1[0x6fa] = (int)((float)param_1[0x2a8] * 0.0055555557);
    }
    param_1[0x393] = param_1[0x393] & 0xf7ffffff;
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
    if (0.0 < (float)param_1[0x6aa]) {
      param_1[0x6aa] = (int)((float)param_1[0x6aa] - 0.01);
    }
    if ((float)param_1[0x6aa] < 0.0) {
      param_1[0x6aa] = 0;
    }
    fVar1 = (float)param_1[0x6aa];
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
    goto LAB_004ac8c1;
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
    param_1[0x379] = iVar2;
    iVar2 = FUN_00a8cab0();
    if (((iVar2 == 0x10000) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x10009)) ||
       ((iVar2 = FUN_00a8cab0(), iVar2 == 0x1000a || (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000d)))) {
      iVar2 = FUN_00a8cab0();
      param_1[0x6fb] = iVar2;
    }
    if (param_1[0x6d8] != 0) {
      param_1[0x6fb] = 0x1000b;
    }
    param_1[0x37a] = param_1[0x374];
    FUN_004a0760();
    uVar3 = 0x10009;
    goto LAB_004ac94c;
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
    if (0.0 < (float)param_1[0x6aa]) {
      param_1[0x6aa] = (int)((float)param_1[0x6aa] - 0.01);
    }
    if ((float)param_1[0x6aa] < 0.0) {
      param_1[0x6aa] = 0;
    }
    fVar1 = (float)param_1[0x6aa];
    local_14 = (float)param_1[0x244];
    local_20 = local_50 * -1.0 * fVar1 * local_14;
    local_1c = local_4c * -1.0 * fVar1 * local_14;
    local_18 = local_48 * -1.0 * fVar1 * local_14;
    local_14 = fVar1 * local_44 * -1.0 * local_14;
    (**(code **)(*param_1 + 0x70))(&local_20);
    iVar2 = FUN_00a94ce0(0);
    if ((iVar2 != 0) && (param_1[0x139] == 0)) {
      iVar2 = FUN_00a8cab0();
      param_1[0x379] = iVar2;
      iVar2 = FUN_00a8cab0();
      if ((iVar2 == 0x10000) ||
         (((iVar2 = FUN_00a8cab0(), iVar2 == 0x10009 || (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000a))
          || (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000d)))) {
        iVar2 = FUN_00a8cab0();
        param_1[0x6fb] = iVar2;
      }
      if (param_1[0x6d8] != 0) {
        param_1[0x6fb] = 0x1000b;
      }
      param_1[0x37a] = param_1[0x374];
      FUN_004a0760();
      uVar3 = 0x10009;
      goto LAB_004ac94c;
    }
  default:
    goto switchD_004ac434_default;
  }
}

// 004ACCE0  FUN_004acce0  size=2811  [between]
void __fastcall FUN_004acce0(int *param_1)

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
    *(short *)((int)param_1 + 0x1a96) = *(short *)((int)param_1 + 0x1a96) + 1;
    FUN_00aa4080(0x2f,0,0x3dcccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x250] = 3;
switchD_004acd04_caseD_1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
LAB_004acd78:
      param_1[0x187] = param_1[0x187] + 1;
    }
switchD_004acd04_default:
    if (0.0 < (float)param_1[0x248]) {
      param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
    }
    return;
  case 1:
    goto switchD_004acd04_caseD_1;
  case 2:
    FUN_00aa4080(0x30,0,0x3dcccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x724] = 0;
    param_1[0x725] = 0;
    param_1[0x726] = 0;
    param_1[0x727] = 0;
    param_1[0x249] = 0;
    if (0.0 <= (float)param_1[0x401]) {
      sVar3 = FUN_00dde2a0(0,2);
      if (sVar3 == 0) {
        param_1[0x24a] = 0;
        param_1[0x24b] = 0;
      }
      else if (sVar3 != 1) {
        if (sVar3 == 2) {
          param_1[0x24a] = 0x3ba3d70a;
          iVar5 = 0x3e99999a;
          goto LAB_004ace62;
        }
        goto LAB_004ace68;
      }
LAB_004ace50:
      param_1[0x24a] = 0x3b449ba6;
      iVar5 = 0x3e4ccccd;
LAB_004ace62:
      param_1[0x24b] = iVar5;
    }
    else {
      sVar3 = FUN_00dde2a0(0,1);
      if (sVar3 == 0) goto LAB_004ace50;
      if (sVar3 == 1) {
        param_1[0x24a] = 0x3ba3d70a;
        iVar5 = 0x3e99999a;
        goto LAB_004ace62;
      }
    }
LAB_004ace68:
    uVar4 = FUN_00dde2a0((short)param_1[0x6e8],*(undefined2 *)((int)param_1 + 0x1ba2));
    param_1[0x248] = (int)((float)uVar4 * 20.0);
    FUN_004abbc0(0x44,param_1 + 0x6ac,0);
    FUN_00a8d280();
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = FUN_00ac4780();
    if (iVar5 < 2) {
      if ((param_1[0x393] & 0x4000000U) != 0) {
        param_1[0x24a] = 0;
        param_1[0x249] = 0;
        param_1[0x393] = param_1[0x393] & 0xfbffffff;
      }
      if ((param_1[0x393] & 0x2000000U) != 0) {
        param_1[0x24a] = 0;
        param_1[0x249] = 0;
        param_1[0x393] = param_1[0x393] & 0xfdffffff;
      }
      if ((*(byte *)((int)param_1 + 0xe4f) & 1) != 0) {
        param_1[0x24a] = 0;
        param_1[0x249] = 0;
        param_1[0x393] = param_1[0x393] & 0xfeffffff;
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
      pfVar1 = (float *)(param_1 + 0x724);
      *pfVar1 = (float)param_1[0x724] + local_60;
      param_1[0x725] = (int)(local_5c + (float)param_1[0x725]);
      param_1[0x726] = (int)(local_58 + (float)param_1[0x726]);
      param_1[0x727] = (int)(local_54 + (float)param_1[0x727]);
      if (((*pfVar1 != 0.0) || ((float)param_1[0x725] != 0.0)) || ((float)param_1[0x726] != 0.0)) {
        fVar2 = (float)param_1[0x726] * (float)param_1[0x726] +
                *pfVar1 * *pfVar1 + (float)param_1[0x725] * (float)param_1[0x725];
        if (fVar2 < 0.0 == (fVar2 == 0.0)) {
          FUN_00ddf460(pfVar1,pfVar1);
        }
        else {
          FUN_00dd5650(&DAT_0163d0ac);
          *pfVar1 = 0.0;
          param_1[0x725] = 0x3f800000;
          param_1[0x726] = 0;
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
      local_3c = (float)param_1[0x725] * fVar2 * local_34;
      local_38 = (float)param_1[0x726] * fVar2 * local_34;
      local_34 = local_34 * (float)param_1[0x727] * fVar2;
      (**(code **)(*param_1 + 0x70))(&local_40);
    }
    if ((float)param_1[0x248] <= 0.0) {
      param_1[0x187] = 6;
    }
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 == 0) goto switchD_004acd04_default;
    if ((float)param_1[0x248] <= 0.0) {
      param_1[0x187] = 6;
      goto switchD_004acd04_default;
    }
    goto LAB_004acd78;
  case 4:
    FUN_00aa4080(0x30,0,0x3dcccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00a8d280();
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = FUN_00ac4780();
    if (iVar5 < 2) {
      if ((param_1[0x393] & 0x4000000U) != 0) {
        param_1[0x24a] = 0;
        param_1[0x249] = 0;
        param_1[0x393] = param_1[0x393] & 0xfbffffff;
      }
      if ((param_1[0x393] & 0x2000000U) != 0) {
        param_1[0x24a] = 0;
        param_1[0x249] = 0;
        param_1[0x393] = param_1[0x393] & 0xfdffffff;
      }
      if ((*(byte *)((int)param_1 + 0xe4f) & 1) != 0) {
        param_1[0x24a] = 0;
        param_1[0x249] = 0;
        param_1[0x393] = param_1[0x393] & 0xfeffffff;
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
      pfVar1 = (float *)(param_1 + 0x724);
      *pfVar1 = (float)param_1[0x724] + local_50;
      param_1[0x725] = (int)(local_4c + (float)param_1[0x725]);
      param_1[0x726] = (int)(local_48 + (float)param_1[0x726]);
      param_1[0x727] = (int)(local_44 + (float)param_1[0x727]);
      if (((*pfVar1 != 0.0) || ((float)param_1[0x725] != 0.0)) || ((float)param_1[0x726] != 0.0)) {
        fVar2 = (float)param_1[0x726] * (float)param_1[0x726] +
                *pfVar1 * *pfVar1 + (float)param_1[0x725] * (float)param_1[0x725];
        if (fVar2 < 0.0 == (fVar2 == 0.0)) {
          FUN_00ddf460(pfVar1,pfVar1);
        }
        else {
          FUN_00dd5650(&DAT_0163d0ac);
          *pfVar1 = 0.0;
          param_1[0x725] = 0x3f800000;
          param_1[0x726] = 0;
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
      local_2c = (float)param_1[0x725] * fVar2 * local_24;
      local_28 = (float)param_1[0x726] * fVar2 * local_24;
      local_24 = local_24 * (float)param_1[0x727] * fVar2;
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
    goto switchD_004acd04_default;
  case 6:
    FUN_00aa4080(0x31,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x41c80000;
  case 7:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = FUN_00ac4780();
    if (iVar5 < 2) {
      if ((param_1[0x393] & 0x4000000U) != 0) {
        param_1[0x24a] = 0;
        param_1[0x249] = 0;
        param_1[0x393] = param_1[0x393] & 0xfbffffff;
      }
      if ((param_1[0x393] & 0x2000000U) != 0) {
        param_1[0x24a] = 0;
        param_1[0x249] = 0;
        param_1[0x393] = param_1[0x393] & 0xfdffffff;
      }
      if ((*(byte *)((int)param_1 + 0xe4f) & 1) != 0) {
        param_1[0x24a] = 0;
        param_1[0x249] = 0;
        param_1[0x393] = param_1[0x393] & 0xfeffffff;
      }
    }
    fVar2 = (float)param_1[0x249] - (float)param_1[0x24a];
    param_1[0x249] = (int)fVar2;
    if (fVar2 < 0.0 != (fVar2 == 0.0)) {
      param_1[0x249] = 0;
    }
    fVar2 = (float)param_1[0x249];
    local_14 = (float)param_1[0x244];
    local_20 = (float)param_1[0x724] * fVar2 * local_14;
    local_1c = (float)param_1[0x725] * fVar2 * local_14;
    local_18 = (float)param_1[0x726] * fVar2 * local_14;
    local_14 = local_14 * (float)param_1[0x727] * fVar2;
    (**(code **)(*param_1 + 0x70))(&local_20);
    if ((float)param_1[0x248] <= 0.0) {
      FUN_00eaa6e0(0x40400000,0);
    }
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      if (param_1[0x139] == 0) {
        iVar5 = FUN_00a8cab0();
        param_1[0x379] = iVar5;
        iVar5 = FUN_00a8cab0();
        if ((((iVar5 == 0x10000) || (iVar5 = FUN_00a8cab0(), iVar5 == 0x10009)) ||
            (iVar5 = FUN_00a8cab0(), iVar5 == 0x1000a)) ||
           (iVar5 = FUN_00a8cab0(), iVar5 == 0x1000d)) {
          iVar5 = FUN_00a8cab0();
          param_1[0x6fb] = iVar5;
        }
        if (param_1[0x6d8] != 0) {
          param_1[0x6fb] = 0x1000b;
        }
        param_1[0x37a] = param_1[0x374];
        FUN_004a0760();
        FUN_00a8caf0(0x1000a,0,0,0);
        param_1[0x374] = 0;
        FUN_00a962d0(0,0);
        param_1[0x38c] = 0;
      }
      fVar6 = (float10)FUN_00dde300(param_1[0x6e9],param_1[0x6ea]);
      param_1[0x401] = (int)(float)(fVar6 * (float10)60.0);
    }
  default:
    goto switchD_004acd04_default;
  }
}

// 004AD800  FUN_004ad800  size=1825  [between]
void __fastcall FUN_004ad800(int param_1)

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
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  
  switch(*(char *)(param_1 + 0x1d60)) {
  case '\0':
    *(char *)(param_1 + 0x1d60) = *(char *)(param_1 + 0x1d60) + '\x01';
    *(float *)(param_1 + 0x1d64) = *(float *)(param_1 + 0x1b98) * 60.0;
  case '\x01':
    if (0.0 < *(float *)(param_1 + 0x1d64)) {
      *(float *)(param_1 + 0x1d64) = *(float *)(param_1 + 0x1d64) - *(float *)(param_1 + 0x910);
    }
    if ((*(float *)(param_1 + 0x1d64) <= 0.0) &&
       (*(undefined4 *)(param_1 + 0x1d64) = 0, *(int *)(param_1 + 0x1fe0) != 0)) {
      if (*(int *)(param_1 + 0x1b68) != 0) {
        FUN_00aa4080(0x39,1,0x3e4ccccd,0x3f800000,0x8040000,0xbf800000,0x3f800000);
        *(char *)(param_1 + 0x1d60) = *(char *)(param_1 + 0x1d60) + '\x01';
        return;
      }
      FUN_00aa4080(0x36,1,0x3e4ccccd,0x3f800000,0x8040000,0xbf800000,0x3f800000);
      *(char *)(param_1 + 0x1d60) = *(char *)(param_1 + 0x1d60) + '\x01';
      return;
    }
    break;
  case '\x02':
    iVar7 = FUN_00a94ce0(1);
    if (iVar7 != 0) {
      if (*(int *)(param_1 + 0x1fe8) == 0) {
        if (*(int *)(param_1 + 0x1b68) == 0) {
          uVar10 = 0x37;
        }
        else {
          uVar10 = 0x3a;
        }
        FUN_00aa4080(uVar10,1,0,0x3f800000,0x40200,0xbf800000,0x3f800000);
        FUN_004abbc0(2,param_1 + 0x1cb0,0);
        *(char *)(param_1 + 0x1d60) = *(char *)(param_1 + 0x1d60) + '\x01';
        *(undefined4 *)(param_1 + 0x1d64) = 0x41f00000;
        *(undefined4 *)(param_1 + 0x1fe4) = 1;
        *(undefined4 *)(param_1 + 0x92c) = 0x40a00000;
        return;
      }
LAB_004ad99c:
      *(undefined1 *)(param_1 + 0x1d60) = 4;
      *(undefined4 *)(param_1 + 0x1d64) = 0;
      return;
    }
    break;
  case '\x03':
    fVar1 = *(float *)(param_1 + 0x1d64) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x1d64) = fVar1;
    if (*(int *)(param_1 + 0x1fe8) != 0) goto LAB_004ad99c;
    if (fVar1 < 0.0) {
      *(float *)(param_1 + 0x1d64) =
           *(float *)(param_1 + 0x1b94) * 60.0 * (float)*(ushort *)(param_1 + 0x1a8c);
      *(undefined4 *)(param_1 + 0x934) = *(undefined4 *)(param_1 + 0x1fec);
      FUN_00e5e0c0("em0100_se_atk_flame_gun",param_1,0xffffffff,0);
      *(char *)(param_1 + 0x1d60) = *(char *)(param_1 + 0x1d60) + '\x01';
      return;
    }
    break;
  case '\x04':
    if (*(int *)(param_1 + 0x1fe8) != 0) {
      *(undefined4 *)(param_1 + 0x1d64) = 0;
    }
    fVar1 = *(float *)(param_1 + 0x934) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x934) = fVar1;
    if ((fVar1 < 0.0) &&
       ((*(float *)(param_1 + 0x1ff4) < *(float *)(param_1 + 0xaa0) !=
         (*(float *)(param_1 + 0x1ff4) == *(float *)(param_1 + 0xaa0)) ||
        (*(float *)(param_1 + 0x1ff0) < *(float *)(param_1 + 0xa8c) !=
         (*(float *)(param_1 + 0x1ff0) == *(float *)(param_1 + 0xa8c)))))) {
      *(undefined4 *)(param_1 + 0x1d64) = 0;
    }
    if (0.0 < *(float *)(param_1 + 0x1d64)) {
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
        fVar2 = *(float *)(param_1 + 0x1bb4);
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
        uStack_2a0 = uStack_2a0 & 0xefffffff | 0x4200000;
        uStack_31b = 5;
        uStack_32c = 0x114;
        uVar10 = FUN_00a7c7f0();
        FUN_00a7c960(uVar10);
        uStack_1d0 = 0x3f7f7cee;
        uStack_22c = 0x73;
        puVar6 = (undefined4 *)FUN_009f8b60();
        uStack_1cc = *puVar6;
        FUN_00ad3be0(*(undefined4 *)(param_1 + 0x4f0),auStack_33c);
        *(undefined4 *)(param_1 + 0x92c) = 0x42480000;
      }
      *(float *)(param_1 + 0x1d64) = *(float *)(param_1 + 0x1d64) - *(float *)(param_1 + 0x910);
      return;
    }
    if (*(int *)(param_1 + 0x1b68) == 0) {
      uVar10 = 0x38;
    }
    else {
      uVar10 = 0x3b;
    }
    FUN_00aa4080(uVar10,1,0,0x3f800000,0x8040000,0xbf800000,0x3f800000);
    FUN_00eaa6e0(0x41f00000,0);
    FUN_00e5e0c0("em0100_se_atk_flame_gun_stop",param_1,0xffffffff,0);
    *(char *)(param_1 + 0x1d60) = *(char *)(param_1 + 0x1d60) + '\x01';
    return;
  case '\x05':
    iVar7 = FUN_00a94ce0(1);
    if (iVar7 != 0) {
      *(undefined1 *)(param_1 + 0x1d60) = 0;
      *(undefined4 *)(param_1 + 0x1fe0) = 0;
      *(undefined4 *)(param_1 + 0x1fe4) = 0;
      *(float *)(param_1 + 0x1d64) = *(float *)(param_1 + 0x1b98) * 60.0;
      *(undefined4 *)(param_1 + 0x1fe8) = 0;
      return;
    }
  }
  return;
}

// 004ADF40  FUN_004adf40  size=249  [between]
int __thiscall FUN_004adf40(int param_1,int param_2)

{
  FUN_004ab4b0(param_2);
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 0x100);
  *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_2 + 0x104);
  *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_2 + 0x108);
  *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_2 + 0x10c);
  *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_2 + 0x110);
  *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(param_2 + 0x114);
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_2 + 0x118);
  *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(param_2 + 0x11c);
  FUN_00a7c940(param_2 + 0x120);
  FUN_00a7c940(param_2 + 0x124);
  *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_2 + 0x128);
  *(undefined4 *)(param_1 + 300) = *(undefined4 *)(param_2 + 300);
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_2 + 0x130);
  *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_2 + 0x134);
  *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_2 + 0x138);
  *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_2 + 0x13c);
  *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_2 + 0x140);
  *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_2 + 0x144);
  return param_1;
}

// 004AE040  FUN_004ae040  size=571  [between]
void __fastcall FUN_004ae040(int param_1)

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
  FUN_00c593a0(*(undefined4 *)(param_1 + 0x4f0),0xffffffff,&local_170,0x40a00000,0x40400000,0x29,8);
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    if (*(int *)(param_1 + 0x1c60) == 0) {
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
      FUN_004a2b50(*(undefined4 *)(param_1 + 0x1bec),0,0,0,0);
      return;
    }
  }
  return;
}

// 004AE2A0  FUN_004ae2a0  size=954  [between]
void __fastcall FUN_004ae2a0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  *(undefined4 *)(param_1 + 0x1b68) = 1;
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
    if (*(int *)(param_1 + 0x1b60) != 0) {
      return;
    }
    if (((*(float *)(param_1 + 0xaa0) < 1.0471976) && (*(int *)(param_1 + 0x1fe0) == 0)) &&
       (*(float *)(param_1 + 0xa90) <= *(float *)(param_1 + 0x1bb4))) {
      *(undefined4 *)(param_1 + 0x1fe0) = 1;
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
      *(float *)(param_1 + 0x1be8) = *(float *)(param_1 + 0xaa0) * 1.2732395;
      return;
    }
    *(undefined4 *)(param_1 + 0x1be8) = 0x3f800000;
    return;
  case 4:
    FUN_00aa4080(0x1b,0,0x3e088889,0x4d000000,0,0xbf800000,0x3f800000);
    FUN_004abbc0(0x30,param_1 + 0x1590,8);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    break;
  case 5:
  case 7:
    break;
  case 6:
    FUN_00aa4080(0x1c,0,0x3e088889,0x4d000000,0,0xbf800000,0x3f800000);
    FUN_004abbc0(0x30,param_1 + 0x1590,8);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    break;
  case 8:
    FUN_00aa4080(0x22,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_004abbc0(0x30,param_1 + 0x1590,8);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 9:
    uVar1 = 0x3f800000;
    uVar3 = 0x3f800000;
    goto LAB_004ae4ad;
  case 10:
    FUN_00aa4080(0x4a,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 0xb:
    *(undefined2 *)(param_1 + 0x824) = 4;
    *(undefined4 *)(param_1 + 0x828) = 0x78;
  case 0xd:
switchD_004ae2c0_caseD_d:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x61c) = 2;
      return;
    }
    goto switchD_004ae2c0_default;
  case 0xc:
    FUN_00aa4080(0x5c,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    goto switchD_004ae2c0_caseD_d;
  default:
    goto switchD_004ae2c0_default;
  }
  uVar3 = *(undefined4 *)(param_1 + 0x1be8);
  uVar1 = *(undefined4 *)(param_1 + 0x1be8);
LAB_004ae4ad:
  FUN_00ac80a0(uVar1,uVar3);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*(int *)(param_1 + 0x1590) + 8))(0x40a00000,0,0);
    *(undefined4 *)(param_1 + 0x61c) = 2;
    return;
  }
switchD_004ae2c0_default:
  return;
}

// 004AE6A0  FUN_004ae6a0  size=948  [between]
void __fastcall FUN_004ae6a0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  *(undefined4 *)(param_1 + 0x1b68) = 1;
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
    if (*(int *)(param_1 + 0x1b60) != 0) {
      return;
    }
    if (((*(float *)(param_1 + 0xaa0) < 1.0471976) && (*(int *)(param_1 + 0x1fe0) == 0)) &&
       (*(float *)(param_1 + 0xa90) <= *(float *)(param_1 + 0x1bb4))) {
      *(undefined4 *)(param_1 + 0x1fe0) = 1;
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
      *(float *)(param_1 + 0x1be8) = *(float *)(param_1 + 0xaa0) * 1.2732395;
      return;
    }
    *(undefined4 *)(param_1 + 0x1be8) = 0x3f800000;
    return;
  case 4:
    FUN_00aa4080(0x1c,0,0x3e088889,0x3f800000,0x8000040,0xbf800000,0x3f800000);
    FUN_004abbc0(0x30,param_1 + 0x1590,8);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    break;
  case 5:
  case 7:
    break;
  case 6:
    FUN_00aa4080(0x1b,0,0x3e088889,0x3f800000,0x8000040,0xbf800000,0x3f800000);
    FUN_004abbc0(0x30,param_1 + 0x1590,8);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    break;
  case 8:
    FUN_00aa4080(0x22,0,0x3e088889,0x3f800000,0x8000040,0xbf800000,0x3f800000);
    FUN_004abbc0(0x30,param_1 + 0x1590,8);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 9:
    uVar1 = 0x3f800000;
    uVar3 = 0x3f800000;
    goto LAB_004ae8aa;
  case 10:
    FUN_00aa4080(0x4a,0,0x3e088889,0x3f800000,0x8000040,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 0xb:
    *(undefined2 *)(param_1 + 0x824) = 4;
    *(undefined4 *)(param_1 + 0x828) = 0x78;
  case 0xd:
switchD_004ae6c0_caseD_d:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x61c) = 2;
      return;
    }
    goto switchD_004ae6c0_default;
  case 0xc:
    FUN_00aa4080(0x5c,0,0x3e088889,0x3f800000,0x8000040,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    goto switchD_004ae6c0_caseD_d;
  default:
    goto switchD_004ae6c0_default;
  }
  uVar3 = *(undefined4 *)(param_1 + 0x1be8);
  uVar1 = *(undefined4 *)(param_1 + 0x1be8);
LAB_004ae8aa:
  FUN_00ac80a0(uVar1,uVar3);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*(int *)(param_1 + 0x1590) + 8))(0x40a00000,0,0);
    *(undefined4 *)(param_1 + 0x61c) = 2;
    return;
  }
switchD_004ae6c0_default:
  return;
}

// 004AEA90  FUN_004aea90  size=1197  [between]
void __fastcall FUN_004aea90(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  
  *(undefined4 *)(param_1 + 0x1b68) = 1;
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
    if (*(int *)(param_1 + 0x1b60) != 0) {
      return;
    }
    if (((*(float *)(param_1 + 0xaa0) < 1.0471976) && (*(int *)(param_1 + 0x1fe0) == 0)) &&
       (*(float *)(param_1 + 0xa90) <= *(float *)(param_1 + 0x1bb4))) {
      *(undefined4 *)(param_1 + 0x1fe0) = 1;
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
      *(float *)(param_1 + 0x1be8) = *(float *)(param_1 + 0xaa0) * 1.2732395;
      return;
    }
    *(undefined4 *)(param_1 + 0x1be8) = 0x3f800000;
    return;
  case 4:
    FUN_00aa4080(0x1d,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_004abbc0(0x30,param_1 + 0x1590,8);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 5:
    fVar2 = 1.0;
    if (*(float *)(param_1 + 0xaa0) < 0.7853982) {
      fVar2 = *(float *)(param_1 + 0xaa0) * 1.2732395;
    }
    *(float *)(param_1 + 0x1be4) = fVar2;
    uVar4 = *(undefined4 *)(param_1 + 0x1be8);
    uVar1 = *(undefined4 *)(param_1 + 0x1be4);
    goto LAB_004aed0f;
  case 6:
    FUN_00aa4080(0x1e,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_004abbc0(0x30,param_1 + 0x1590,8);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 7:
    fVar2 = 1.0;
    if (*(float *)(param_1 + 0xaa0) < 0.7853982) {
      fVar2 = *(float *)(param_1 + 0xaa0) * 1.2732395;
    }
    *(float *)(param_1 + 0x1be4) = fVar2;
    FUN_00ac80a0(*(undefined4 *)(param_1 + 0x1be4),*(undefined4 *)(param_1 + 0x1be8));
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 == 0) {
      return;
    }
    (**(code **)(*(int *)(param_1 + 0x1590) + 8))(0x40a00000,0,0);
    *(undefined4 *)(param_1 + 0x61c) = 2;
    return;
  case 8:
    FUN_00aa4080(0x26,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_004abbc0(0x30,param_1 + 0x1590,8);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 9:
    uVar1 = 0x3f800000;
    uVar4 = 0x3f800000;
LAB_004aed0f:
    FUN_00ac80a0(uVar1,uVar4);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 == 0) {
      return;
    }
    (**(code **)(*(int *)(param_1 + 0x1590) + 8))(0x40a00000,0,0);
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
    goto switchD_004aeab0_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    *(undefined4 *)(param_1 + 0x61c) = 2;
    return;
  }
switchD_004aeab0_default:
  return;
}

// 004AEF80  FUN_004aef80  size=642  [between]
void __fastcall FUN_004aef80(int *param_1)

{
  int iVar1;
  undefined1 auStack_12c [296];
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x6c,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(undefined1 *)(param_1 + 0x758) = 5;
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
    if (param_1[0x617] != 0) {
      (**(code **)(param_1[0x590] + 8))(0x3f800000,0,0);
    }
    if (param_1[0x6a0] != 0) {
      (**(code **)(param_1[0x4e0] + 8))(0x3f800000,0,0);
    }
    if (param_1[0x6a1] != 0) {
      (**(code **)(param_1[0x50c] + 8))(0x3f800000,0,0);
    }
    if (param_1[0x6a2] != 0) {
      (**(code **)(param_1[0x538] + 8))(0x3f800000,0,0);
    }
    (**(code **)(*param_1 + 0x344))(6,param_1[0x378],param_1[0x377]);
    if (param_1[0x294] != 0) {
      FUN_00940450(param_1[0x20f]);
      FUN_00e01ca0();
      FUN_00e020f0(param_1[0x13c]);
      FUN_00e01340(0x20100,10,auStack_12c);
      iVar1 = FUN_00e5e0c0("em0100_se_dmg_explosion",param_1,0xffffffff,0);
      param_1[0x6dd] = iVar1;
    }
    FUN_00c27f40(0xe,0x44e10000);
    (**(code **)(*param_1 + 0x364))(0xffffffff);
    param_1[0x187] = param_1[0x187] + 1;
    break;
  case 3:
    break;
  default:
    goto switchD_004aefa0_default;
  }
  iVar1 = thunk_FUN_00e58ed0(param_1[0x6dd]);
  if (iVar1 == 0) {
    E3_EnemyBoardDebrisSokushi::vf4C();
    return;
  }
switchD_004aefa0_default:
  return;
}

// 004AF220  FUN_004af220  size=374  [between]
void __fastcall FUN_004af220(int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined1 auStack_120 [284];
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x6e,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    *(undefined1 *)(param_1 + 0x758) = 5;
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
    if (param_1[0x617] != 0) {
      (**(code **)(param_1[0x590] + 8))(0x3f800000,0,0);
    }
    if (param_1[0x294] != 0) {
      (**(code **)(*param_1 + 0x344))(6,0,1);
      FUN_00940450(param_1[0x20f]);
      FUN_00e01ca0();
      FUN_00e020f0(param_1[0x13c]);
      FUN_00e01340(0x20100,10,auStack_120);
      iVar2 = FUN_00e5e0c0("em0100_se_dmg_explosion",param_1,0xffffffff,0);
      param_1[0x6dd] = iVar2;
    }
    param_1[0x187] = param_1[0x187] + 1;
    break;
  case 3:
    break;
  default:
    goto switchD_004af240_default;
  }
  iVar2 = thunk_FUN_00e58ed0(param_1[0x6dd]);
  if (iVar2 == 0) {
    E3_EnemyBoardDebrisSokushi::vf4C();
    return;
  }
switchD_004af240_default:
  return;
}

// 004AF3B0  FUN_004af3b0  size=374  [between]
void __fastcall FUN_004af3b0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined1 auStack_120 [284];
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x6f,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    *(undefined1 *)(param_1 + 0x758) = 5;
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
    if (param_1[0x617] != 0) {
      (**(code **)(param_1[0x590] + 8))(0x3f800000,0,0);
    }
    if (param_1[0x294] != 0) {
      (**(code **)(*param_1 + 0x344))(6,0,1);
      FUN_00940450(param_1[0x20f]);
      FUN_00e01ca0();
      FUN_00e020f0(param_1[0x13c]);
      FUN_00e01340(0x20100,10,auStack_120);
      iVar2 = FUN_00e5e0c0("em0100_se_dmg_explosion",param_1,0xffffffff,0);
      param_1[0x6dd] = iVar2;
    }
    param_1[0x187] = param_1[0x187] + 1;
    break;
  case 3:
    break;
  default:
    goto switchD_004af3d0_default;
  }
  iVar2 = thunk_FUN_00e58ed0(param_1[0x6dd]);
  if (iVar2 == 0) {
    E3_EnemyBoardDebrisSokushi::vf4C();
    return;
  }
switchD_004af3d0_default:
  return;
}

// 004AF540  FUN_004af540  size=374  [between]
void __fastcall FUN_004af540(int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined1 auStack_120 [284];
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x70,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    *(undefined1 *)(param_1 + 0x758) = 5;
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
    if (param_1[0x617] != 0) {
      (**(code **)(param_1[0x590] + 8))(0x3f800000,0,0);
    }
    if (param_1[0x294] != 0) {
      (**(code **)(*param_1 + 0x344))(6,0,1);
      FUN_00940450(param_1[0x20f]);
      FUN_00e01ca0();
      FUN_00e020f0(param_1[0x13c]);
      FUN_00e01340(0x20100,10,auStack_120);
      iVar2 = FUN_00e5e0c0("em0100_se_dmg_explosion",param_1,0xffffffff,0);
      param_1[0x6dd] = iVar2;
    }
    param_1[0x187] = param_1[0x187] + 1;
    break;
  case 3:
    break;
  default:
    goto switchD_004af560_default;
  }
  iVar2 = thunk_FUN_00e58ed0(param_1[0x6dd]);
  if (iVar2 == 0) {
    E3_EnemyBoardDebrisSokushi::vf4C();
    return;
  }
switchD_004af560_default:
  return;
}

// 004AF6D0  FUN_004af6d0  size=374  [between]
void __fastcall FUN_004af6d0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined1 auStack_120 [284];
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x71,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    *(undefined1 *)(param_1 + 0x758) = 5;
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
    if (param_1[0x617] != 0) {
      (**(code **)(param_1[0x590] + 8))(0x3f800000,0,0);
    }
    if (param_1[0x294] != 0) {
      (**(code **)(*param_1 + 0x344))(6,0,1);
      FUN_00940450(param_1[0x20f]);
      FUN_00e01ca0();
      FUN_00e020f0(param_1[0x13c]);
      FUN_00e01340(0x20100,10,auStack_120);
      iVar2 = FUN_00e5e0c0("em0100_se_dmg_explosion",param_1,0xffffffff,0);
      param_1[0x6dd] = iVar2;
    }
    param_1[0x187] = param_1[0x187] + 1;
    break;
  case 3:
    break;
  default:
    goto switchD_004af6f0_default;
  }
  iVar2 = thunk_FUN_00e58ed0(param_1[0x6dd]);
  if (iVar2 == 0) {
    E3_EnemyBoardDebrisSokushi::vf4C();
    return;
  }
switchD_004af6f0_default:
  return;
}

// 004AF860  Em0100::startup  size=4116  [class]
undefined4 __fastcall Em0100::startup(int param_1)

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
  
  iVar3 = BehaviorEmBase::startup();
  if (iVar3 == 0) {
    return 0;
  }
  FUN_009fd240();
  FUN_00acf600(0x20101,"Em0100Body");
  local_1f0 = FUN_00ac8a50();
  *(undefined4 *)(param_1 + 0xdc8) = 0;
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
    *(undefined4 *)(param_1 + 0x1a64) = 0x3e99999a;
    *(undefined4 *)(param_1 + 0x1b64) = 0x3e4ccccd;
    *(undefined4 *)(param_1 + 0x1a44) = 0x1e;
    *(undefined4 *)(param_1 + 0x1a48) = 0x1e;
    *(undefined4 *)(param_1 + 0x1b94) = 0x42700000;
    *(undefined4 *)(param_1 + 0x1a4c) = 0x1e;
    *(undefined4 *)(param_1 + 0x1b98) = 0x42700000;
    *(undefined4 *)(param_1 + 0x1a68) = 10;
    *(undefined4 *)(param_1 + 0x1a6c) = 10;
    *(undefined4 *)(param_1 + 0x1b9c) = 0x42b40000;
    *(undefined4 *)(param_1 + 0x1a70) = 10;
    *(undefined4 *)(param_1 + 0x1a90) = 0x1e;
    *(undefined4 *)(param_1 + 0x1ba4) = 0x44610000;
    *(undefined4 *)(param_1 + 0x1b84) = 0x14;
    *(undefined4 *)(param_1 + 0x1b88) = 0;
    *(undefined4 *)(param_1 + 0x1ba8) = 0x44e10000;
    *(undefined4 *)(param_1 + 0x1b8c) = 0;
    *(undefined1 *)(param_1 + 0x1b90) = 0;
    *(undefined4 *)(param_1 + 0x1fec) = 0x42b40000;
    *(undefined4 *)(param_1 + 0x1ba0) = 0x50002;
    *(undefined4 *)(param_1 + 0x1b70) = 0x1e;
    *(undefined4 *)(param_1 + 0x1ff0) = 0x42c80000;
    fVar8 = (float10)1.5707964;
  }
  else {
    uVar4 = FUN_00ac8660(0,7);
    FUN_00a8edf0(uVar4);
    uVar4 = FUN_00ac8660(0,8);
    *(undefined4 *)(param_1 + 0x1a44) = uVar4;
    uVar4 = FUN_00ac8660(0,9);
    *(undefined4 *)(param_1 + 0x1a48) = uVar4;
    uVar4 = FUN_00ac8660(0,10);
    *(undefined4 *)(param_1 + 0x1a4c) = uVar4;
    uVar4 = FUN_00ac8660(0,0xb);
    *(undefined4 *)(param_1 + 0x1a68) = uVar4;
    uVar4 = FUN_00ac8660(0,0xb);
    *(undefined4 *)(param_1 + 0x1a6c) = uVar4;
    uVar4 = FUN_00ac8660(0,0xb);
    *(undefined4 *)(param_1 + 0x1a70) = uVar4;
    uVar4 = FUN_00ac8660(0,0xc);
    *(undefined4 *)(param_1 + 0x1a90) = uVar4;
    fVar8 = (float10)FUN_00ac85c0(5,0x12);
    *(float *)(param_1 + 0x1a64) = (float)fVar8;
    fVar8 = (float10)FUN_00ac85c0(5,0x13);
    *(float *)(param_1 + 0x1b64) = (float)fVar8;
    uVar4 = FUN_00ac8660(0,0x16);
    *(undefined4 *)(param_1 + 0x1b84) = uVar4;
    uVar4 = FUN_00ac8660(0,0x18);
    *(undefined4 *)(param_1 + 0x1b88) = uVar4;
    uVar4 = FUN_00ac8660(0,0x17);
    *(undefined4 *)(param_1 + 0x1b8c) = uVar4;
    uVar1 = FUN_00ac8660(0,0x19);
    *(undefined1 *)(param_1 + 0x1b90) = uVar1;
    fVar8 = (float10)FUN_00ac85c0(5,0x1b);
    *(float *)(param_1 + 0x1b94) = (float)fVar8;
    fVar8 = (float10)FUN_00ac85c0(5,0x1c);
    *(float *)(param_1 + 0x1b98) = (float)fVar8;
    fVar8 = (float10)FUN_00ac85c0(5,0x1e);
    *(float *)(param_1 + 0x1b9c) = (float)fVar8;
    uVar2 = FUN_00ac8660(0,0x20);
    *(undefined2 *)(param_1 + 0x1ba0) = uVar2;
    uVar2 = FUN_00ac8660(0,0x21);
    *(undefined2 *)(param_1 + 0x1ba2) = uVar2;
    fVar8 = (float10)FUN_00ac85c0(5,0x23);
    *(float *)(param_1 + 0x1ba4) = (float)fVar8;
    fVar8 = (float10)FUN_00ac85c0(5,0x24);
    *(float *)(param_1 + 0x1ba8) = (float)fVar8;
    uVar5 = FUN_00ac8660(0,0x26);
    *(uint *)(param_1 + 0x1b70) = uVar5 & 0xff;
    fVar8 = (float10)FUN_00ac85c0(5,0x28);
    *(float *)(param_1 + 0x1fec) = (float)(fVar8 * (float10)60.0);
    fVar8 = (float10)FUN_00ac85c0(5,0x29);
    *(float *)(param_1 + 0x1ff0) = (float)(fVar8 * fVar8);
    fVar8 = (float10)FUN_00ac85c0(5,0x2a);
    fVar8 = fVar8 * (float10)0.017453292;
  }
  *(float *)(param_1 + 0x1ff4) = (float)fVar8;
  *(undefined4 *)(param_1 + 0xe4c) = 0;
  *(undefined4 *)(param_1 + 0xe50) = 0;
  fVar8 = (float10)FUN_00dde300(*(undefined4 *)(param_1 + 0x1ba4),*(undefined4 *)(param_1 + 0x1ba8))
  ;
  *(undefined1 *)(param_1 + 0x1000) = 0;
  *(undefined4 *)(param_1 + 0x1bd0) = 0;
  *(undefined4 *)(param_1 + 0x1bd4) = 0;
  *(undefined4 *)(param_1 + 0x1bd8) = 0;
  *(float *)(param_1 + 0x1004) = (float)(fVar8 * (float10)60.0);
  *(undefined4 *)(param_1 + 0x1bdc) = 0;
  *(undefined4 *)(param_1 + 0xdd8) = 2;
  *(undefined4 *)(param_1 + 0x1bc4) = 0x47435000;
  *(undefined4 *)(param_1 + 0x1c20) = 0;
  *(undefined4 *)(param_1 + 0x1fe0) = 0;
  *(undefined4 *)(param_1 + 0x1c1c) = 0x41f00000;
  *(undefined4 *)(param_1 + 0x1c60) = 0;
  *(undefined4 *)(param_1 + 0x1a40) = 0;
  *(undefined4 *)(param_1 + 0x1be4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xdf4) = 0x10000;
  *(undefined4 *)(param_1 + 0x1be8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1a50) = 0;
  *(undefined4 *)(param_1 + 0x1a58) = 0;
  *(undefined4 *)(param_1 + 0x1aa4) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x1a5c) = 0;
  *(undefined4 *)(param_1 + 0x1a60) = 0;
  *(undefined4 *)(param_1 + 0x1aa8) = 0;
  *(undefined4 *)(param_1 + 0x185c) = 0;
  *(undefined1 *)(param_1 + 0xdcc) = 0;
  *(undefined4 *)(param_1 + 0x1a74) = 1;
  *(undefined4 *)(param_1 + 0x1a78) = 1;
  *(undefined4 *)(param_1 + 0x1a7c) = 1;
  *(undefined4 *)(param_1 + 0x1a80) = 0;
  *(undefined4 *)(param_1 + 0x1a84) = 0;
  *(undefined4 *)(param_1 + 0x1a88) = 0;
  *(undefined4 *)(param_1 + 0xe34) = 1;
  *(undefined4 *)(param_1 + 0xe38) = 1;
  *(undefined4 *)(param_1 + 0xe3c) = 1;
  *(undefined4 *)(param_1 + 0xe40) = 1;
  *(undefined4 *)(param_1 + 0xe44) = 1;
  *(undefined4 *)(param_1 + 0xe48) = 1;
  *(undefined2 *)(param_1 + 0x1a9c) = 0;
  *(undefined4 *)(param_1 + 0x1aa0) = 0;
  *(undefined4 *)(param_1 + 0x1c80) = 0;
  *(undefined4 *)(param_1 + 0x1fe4) = 0;
  *(undefined4 *)(param_1 + 0x1b60) = 0;
  *(undefined2 *)(param_1 + 0x1a8c) = 3;
  *(undefined4 *)(param_1 + 0x1c90) = 0;
  *(undefined4 *)(param_1 + 0x1c94) = 0;
  *(undefined4 *)(param_1 + 0x1c98) = 0;
  *(undefined4 *)(param_1 + 0x1c9c) = 0;
  *(undefined4 *)(param_1 + 0x1b68) = 0;
  *(undefined4 *)(param_1 + 0x1ca0) = 0;
  *(undefined4 *)(param_1 + 0x1bb0) = 0;
  *(undefined4 *)(param_1 + 0x1ca4) = 0;
  *(undefined4 *)(param_1 + 0x1b6c) = 0;
  *(undefined4 *)(param_1 + 0x1c84) = 0;
  *(float *)(param_1 + 0x1008) = (float)(float10)60.0;
  *(undefined2 *)(param_1 + 0x1a96) = 0;
  *(undefined4 *)(param_1 + 0x1fe8) = 0;
  *(undefined4 *)(param_1 + 0x1bc8) = 0x44610000;
  *(undefined4 *)(param_1 + 0xddc) = 1;
  *(undefined4 *)(param_1 + 0xde0) = 0;
  *(undefined4 *)(param_1 + 0x1bb4) = 0x42800000;
  *(undefined4 *)(param_1 + 0x1bb8) = 0x447a0000;
  *(undefined4 *)(param_1 + 0x1bbc) = 0x42480000;
  *(undefined4 *)(param_1 + 0x1bc0) = 0x42c80000;
  iVar3 = FUN_00a7c800();
  iVar3 = *(int *)(iVar3 + 0x330);
  *(int *)(param_1 + 0xdc0) = iVar3;
  *(undefined4 *)(param_1 + 0xdc4) = *(undefined4 *)(iVar3 + 0xcc);
  *(undefined4 *)(param_1 + 0xdc8) = **(undefined4 **)(param_1 + 0xdc0);
  uVar4 = FUN_00c5def0(*(undefined4 *)(param_1 + 0x4f0));
  *(undefined4 *)(param_1 + 0x970) = uVar4;
  *(undefined4 *)(param_1 + 0x6c4) = 1;
  *(undefined4 *)(param_1 + 0x6d0) = 0;
  *(undefined4 *)(param_1 + 0x6d4) = 0;
  uVar12 = 2;
  *(undefined4 *)(param_1 + 0x6d8) = 0;
  puVar6 = &local_1ec;
  *(undefined4 *)(param_1 + 0x6dc) = local_1f4;
  *(undefined4 *)(param_1 + 0x6e8) = 0x3fc00000;
  *(undefined4 *)(param_1 + 0x6ec) = 1;
  *(undefined4 *)(param_1 + 0x6e4) = 1;
  local_1ec = 0;
  *(undefined4 *)(param_1 + 0x6e0) = 1;
  local_1e8 = 0;
  local_1e4 = 0;
  uVar11 = 0;
  uVar10 = 0x3fc00000;
  uVar9 = 0x3fb33333;
  uVar4 = FUN_00a12210(1);
  FUN_00a889e0(uVar4,uVar9,uVar10,uVar11,puVar6,uVar12);
  uVar12 = 1;
  puVar6 = &local_1ec;
  uVar11 = 0xbf000000;
  uVar10 = 0x3f000000;
  uVar9 = 0x3fb33333;
  uVar4 = FUN_00a12210(0x103);
  FUN_00a889e0(uVar4,uVar9,uVar10,uVar11,puVar6,uVar12);
  uVar12 = 1;
  puVar6 = &local_1ec;
  uVar11 = 0xbf000000;
  uVar10 = 0x3f000000;
  uVar9 = 0x3fb33333;
  uVar4 = FUN_00a12210(0x203);
  FUN_00a889e0(uVar4,uVar9,uVar10,uVar11,puVar6,uVar12);
  uVar12 = 1;
  puVar6 = &local_1ec;
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
    iVar3 = RigidBodyCollision::RigidBodyCollision();
  }
  *(int *)(param_1 + 0x7b0) = iVar3;
  if (iVar3 != 0) {
    local_1e0 = *(undefined4 *)(param_1 + 0x4f0);
    uVar4 = FUN_00de3ee0(local_1f0);
    uVar9 = FUN_00de3cf0(local_1f0);
    iVar3 = FUN_008f6410(local_1e0,uVar9,uVar4);
    if (iVar3 != 0) {
      FUN_008f2cd0(0);
      (**(code **)(**(int **)(param_1 + 0x7b0) + 0x108))(8);
      puVar6 = (undefined4 *)FUN_009f8b60();
      (**(code **)(**(int **)(param_1 + 0x7b0) + 0x114))(*puVar6);
      FUN_008f1600(0x80000000);
      FUN_008f1600(0x20);
      FUN_008f1600(0x40);
      if (*(int *)(param_1 + 0xdc4) != 0) {
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
    if (*(int *)(param_1 + 0xdc4) == 0) {
      uVar9 = 0;
      iVar3 = param_1 + 0x10c0;
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
      FUN_004abbc0(0x31,param_1 + 0x1170,0x205);
      FUN_004abbc0(0x31,param_1 + 0x1220,0x105);
      FUN_004abbc0(0x31,param_1 + 0x12d0,0x305);
      *(undefined4 *)(param_1 + 0x1850) = 1;
      *(undefined4 *)(param_1 + 0x1854) = 1;
      *(undefined4 *)(param_1 + 0x1858) = 1;
    }
    iVar3 = param_1;
    FUN_00c1cf50(param_1);
    FUN_00c54720(iVar3);
    if (*(int *)(param_1 + 0xdc4) != 0) {
      iVar3 = *(int *)(param_1 + 0x588);
      if ((iVar3 != 0) && (*(int *)(iVar3 + 0x34) != 0)) {
        FUN_009f8ae0(*(undefined4 *)(iVar3 + 0x38));
      }
      *(undefined4 *)(param_1 + 0x4e4) = 1;
    }
    if ((*(byte *)(param_1 + 0x4a8) & 1) != 0) {
      FUN_00e01ca0();
      FUN_00e020f0(*(undefined4 *)(param_1 + 0x4f0));
      FUN_00e01340(0x20100,0x208,auStack_160);
    }
    puVar6 = (undefined4 *)FUN_00dd3580(0x90,&DAT_01b7bd48);
    *(undefined4 **)(param_1 + 0xd80) = puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      puVar7 = &DAT_01880c50;
      for (iVar3 = 0x24; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar6 = puVar6 + 1;
      }
      lib::AllocatedArray<cEnemySubState>::AllocatedArray<cEnemySubState>
                (*(undefined4 *)(param_1 + 0x4f0),3,*(undefined4 *)(param_1 + 0xd80),4);
      FUN_00a88b50(1,0);
    }
    *(undefined4 *)(param_1 + 0x82c) = 3;
    *(undefined1 *)(param_1 + 0x1d60) = 0;
    FUN_00a82790(*(undefined4 *)(param_1 + 0x4f0),3,0);
    *(uint *)(param_1 + 0xe60) = *(uint *)(param_1 + 0xe60) | 2;
    FUN_00a82840(0x3f060a92,0xbe32b8c2,0x3f000000,0x3ae4c388,0x3d567750);
    FUN_00a82790(*(undefined4 *)(param_1 + 0x4f0),2,0);
    *(uint *)(param_1 + 0xf30) = *(uint *)(param_1 + 0xf30) | 2;
    FUN_00a82870(0x3f060a92,0xbf060a92,0x3f000000,0x3ae4c388,0x3d567750);
    *(undefined1 *)(param_1 + 0x1000) = 0;
    FUN_00a82790(*(undefined4 *)(param_1 + 0x4f0),4,0);
    *(uint *)(param_1 + 0x1d70) = *(uint *)(param_1 + 0x1d70) | 2;
    FUN_00a82870(0x3f860a92,0xbf860a92,0x3e99999a,0x3ae4c388,0x3d0efa35);
    FUN_00a82790(*(undefined4 *)(param_1 + 0x4f0),8,0);
    *(uint *)(param_1 + 0x1f10) = *(uint *)(param_1 + 0x1f10) | 2;
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
      *(undefined4 *)(param_1 + 0xde4) = uVar4;
      iVar3 = FUN_00a8cab0();
      if ((((iVar3 == 0x10000) || (iVar3 = FUN_00a8cab0(), iVar3 == 0x10009)) ||
          (iVar3 = FUN_00a8cab0(), iVar3 == 0x1000a)) || (iVar3 = FUN_00a8cab0(), iVar3 == 0x1000d))
      {
        uVar4 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0x1bec) = uVar4;
      }
      if (*(int *)(param_1 + 0x1b60) != 0) {
        *(undefined4 *)(param_1 + 0x1bec) = 0x1000b;
      }
      *(undefined4 *)(param_1 + 0xde8) = *(undefined4 *)(param_1 + 0xdd0);
      FUN_004a0760();
      FUN_00a8caf0(0x10000,0,0,0);
      *(undefined4 *)(param_1 + 0xdd0) = 0;
      FUN_00a962d0(0,0);
      *(undefined4 *)(param_1 + 0xe30) = 0;
      return 1;
    }
    return 1;
  }
  return 0;
}

// 004B0880  FUN_004b0880  size=117  [between]
void __fastcall FUN_004b0880(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x618);
  if (iVar1 < 0x50001) {
    switch(iVar1) {
    case 0x10000:
      FUN_004ab810();
      return;
    case 0x10006:
      FUN_004a7af0();
      return;
    case 0x10009:
      FUN_004a8300();
      return;
    case 0x1000a:
      FUN_004a8570();
      return;
    }
  }
  else if (iVar1 < 0x60001) {
    if (iVar1 == 0x60000) {
      FUN_004a4850();
      return;
    }
    switch(iVar1) {
    case 0x50003:
      FUN_004a0dd0();
      return;
    }
  }
  else if (((iVar1 < 0x70001) && (iVar1 != 0x70000)) && (iVar1 == 0x60001)) {
    FUN_004a4b90();
    return;
  }
  return;
}

// 004B0930  FUN_004b0930  size=355  [between]
void __fastcall FUN_004b0930(int param_1)

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
  
  *(byte *)(param_1 + 0xdcc) = *(byte *)(param_1 + 0xdcc) | 1;
  FUN_00ac9420("_EFD01");
  FUN_00ac9420("_EFD05");
  if (*(int *)(param_1 + 0x1a74) != 0) {
    FUN_00ac9420("_EFD08");
  }
  if (*(int *)(param_1 + 0x1a78) != 0) {
    FUN_00ac9420("_EFD06");
  }
  if (*(int *)(param_1 + 0x1a7c) != 0) {
    FUN_00ac9420("_EFD07");
  }
  FUN_00ac8dd0("_Main_Body",1);
  FUN_00ac8dd0("_Center_Arm",1);
  if (*(int *)(param_1 + 0x185c) == 0) {
    uVar2 = 0;
    uVar1 = FUN_00a7c8a0(0);
    FUN_004039a0(0x191,uVar1,uVar2);
    uVar1 = FUN_00a81330();
    FUN_00e020f0(uVar1);
    if (param_1 + 0x1640 != 0) {
      FUN_00dffb20(param_1 + 0x1640);
    }
    FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),local_160);
    *(undefined4 *)(param_1 + 0x185c) = 1;
  }
  if (*(int *)(param_1 + 0xdc4) == 0) {
    local_170 = 0;
    local_16c = 0;
    local_168 = 0;
    local_180 = 0;
    local_17c = 0;
    local_178 = 0;
    FUN_0093c1f0((int)*(char *)(param_1 + 0x1a1b),*(undefined4 *)(param_1 + 0x4f0),4,1,&local_180,
                 &local_170,0x41200000,0x3f000000,0xbf800000);
  }
  return;
}

// 004B0AA0  FUN_004b0aa0  size=160  [between]
void __fastcall FUN_004b0aa0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 local_160 [348];
  
  *(byte *)(param_1 + 0xdcc) = *(byte *)(param_1 + 0xdcc) | 2;
  FUN_00ac9420("_EFD03");
  FUN_00ac8dd0("_R_Leg",1);
  if (*(int *)(param_1 + 0x185c) == 0) {
    uVar2 = 0;
    uVar1 = FUN_00a7c8a0(0);
    FUN_004039a0(0x191,uVar1,uVar2);
    uVar1 = FUN_00a81330();
    FUN_00e020f0(uVar1);
    if (param_1 + 0x1640 != 0) {
      FUN_00dffb20(param_1 + 0x1640);
    }
    FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),local_160);
    *(undefined4 *)(param_1 + 0x185c) = 1;
  }
  return;
}

// 004B0B40  FUN_004b0b40  size=160  [between]
void __fastcall FUN_004b0b40(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 local_160 [348];
  
  *(byte *)(param_1 + 0xdcc) = *(byte *)(param_1 + 0xdcc) | 4;
  FUN_00ac9420("_EFD02");
  FUN_00ac8dd0("_L_Leg",1);
  if (*(int *)(param_1 + 0x185c) == 0) {
    uVar2 = 0;
    uVar1 = FUN_00a7c8a0(0);
    FUN_004039a0(0x191,uVar1,uVar2);
    uVar1 = FUN_00a81330();
    FUN_00e020f0(uVar1);
    if (param_1 + 0x1640 != 0) {
      FUN_00dffb20(param_1 + 0x1640);
    }
    FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),local_160);
    *(undefined4 *)(param_1 + 0x185c) = 1;
  }
  return;
}

// 004B0BE0  FUN_004b0be0  size=160  [between]
void __fastcall FUN_004b0be0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 local_160 [348];
  
  *(byte *)(param_1 + 0xdcc) = *(byte *)(param_1 + 0xdcc) | 8;
  FUN_00ac9420("_EFD04");
  FUN_00ac8dd0("_B_Leg",1);
  if (*(int *)(param_1 + 0x185c) == 0) {
    uVar2 = 0;
    uVar1 = FUN_00a7c8a0(0);
    FUN_004039a0(0x191,uVar1,uVar2);
    uVar1 = FUN_00a81330();
    FUN_00e020f0(uVar1);
    if (param_1 + 0x1640 != 0) {
      FUN_00dffb20(param_1 + 0x1640);
    }
    FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),local_160);
    *(undefined4 *)(param_1 + 0x185c) = 1;
  }
  return;
}

// 004B0C80  FUN_004b0c80  size=96  [between]
void __thiscall FUN_004b0c80(int param_1,undefined4 param_2,undefined4 param_3)

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

// 004B0CE0  FUN_004b0ce0  size=3503  [between]
/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_004b0ce0(int *param_1)

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
  if (param_1[0x69d] != 0) {
    iVar8 = param_1[0x69a];
    if (iVar8 < 1) {
      if ((iVar8 == 0) && (param_1[0x6a0] == 0)) {
        local_280[0] = -0.6;
        local_280[1] = 0.1;
        local_280[2] = 0.0;
        FUN_004abc40(0x12,param_1 + 0x4e0,0x201,local_280);
        FUN_00e01ca0();
        uVar7 = FUN_00a81330();
        FUN_00e020f0(uVar7);
        FUN_00dffbc0(0x201);
        FUN_00dffbd0(local_280);
        FUN_00e01340(0x20100,0x13,local_120);
        param_1[0x6a0] = 1;
        iVar8 = FUN_00e5e0c0("em0100_se_fueltank_brake",param_1,0xffffffff,0);
        param_1[0x6de] = iVar8;
      }
      else if (iVar8 < 0) {
        local_270 = 0xbf19999a;
        local_26c = 0x3dcccccd;
        local_268 = 0;
        (**(code **)(param_1[0x4e0] + 8))(0x3f800000,0,0);
        param_1[0x6a0] = 0;
        FUN_00e01ca0();
        uVar7 = FUN_00a81330();
        FUN_00e020f0(uVar7);
        FUN_00dffbc0(0x201);
        FUN_00dffbd0(local_280 + 1);
        FUN_00dfffd0(&stack0xfffffd74);
        FUN_00e01340(0x20100,5,auStack_12c);
        FUN_00e5ca30(param_1[0x6de],0x40400000);
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
        iStack_258 = param_1[0x6e1];
        uStack_24c = (undefined1)param_1[0x6e4];
        uStack_14c = 0x40a00000;
        iStack_250 = param_1[0x6e3];
        uStack_1d0 = uStack_1d0 | 0x100000;
        uStack_148 = 0x3f000000;
        iStack_254 = param_1[0x6e2];
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
        param_1[0x69d] = 0;
        (**(code **)(*(int *)param_1[0x1ec] + 0xe0))(0,"_201_Rgass",0,0);
        FUN_00ac94e0("R_LegGasTank");
        param_1[0x691] = 0;
        FUN_004b0aa0();
        param_1[0x645] = 1;
        iVar8 = FUN_004a07c0();
        if ((iVar8 != 0) && (param_1[0x139] == 0)) {
          iVar8 = FUN_00a8cab0();
          param_1[0x379] = iVar8;
          iVar8 = FUN_00a8cab0();
          if ((iVar8 == 0x10000) ||
             (((iVar8 = FUN_00a8cab0(), iVar8 == 0x10009 ||
               (iVar8 = FUN_00a8cab0(), iVar8 == 0x1000a)) ||
              (iVar8 = FUN_00a8cab0(), iVar8 == 0x1000d)))) {
            iVar8 = FUN_00a8cab0();
            param_1[0x6fb] = iVar8;
          }
          if (param_1[0x6d8] != 0) {
            param_1[0x6fb] = 0x1000b;
          }
          param_1[0x37a] = param_1[0x374];
          FUN_004a0760();
          FUN_00a8caf0(0x60000,0,0,0);
          param_1[0x374] = 0;
          FUN_00a962d0(0,0);
          param_1[0x38c] = 0;
        }
        *(short *)(param_1 + 0x6a3) = (short)param_1[0x6a3] + -1;
        (**(code **)(*param_1 + 0x30c))(param_1[0x6a4],0);
      }
    }
  }
  if (param_1[0x69e] != 0) {
    iVar8 = param_1[0x69b];
    if (iVar8 < 1) {
      if ((iVar8 == 0) && (param_1[0x6a1] == 0)) {
        local_280[0] = 0.6;
        local_280[1] = 0.1;
        local_280[2] = 0.0;
        FUN_004abc40(0x12,param_1 + 0x50c,0x101,local_280);
        FUN_00e01ca0();
        uVar7 = FUN_00a81330();
        FUN_00e020f0(uVar7);
        FUN_00dffbc0(0x101);
        FUN_00dffbd0(local_280);
        FUN_00e01340(0x20100,0x13,local_120);
        param_1[0x6a1] = 1;
        iVar8 = FUN_00e5e0c0("em0100_se_fueltank_brake",param_1,0xffffffff,0);
        param_1[0x6df] = iVar8;
      }
      else if (iVar8 < 0) {
        local_270 = 0x3f19999a;
        local_26c = 0x3dcccccd;
        local_268 = 0;
        (**(code **)(param_1[0x50c] + 8))(0x3f800000,0,0);
        param_1[0x6a1] = 0;
        FUN_00e01ca0();
        uVar7 = FUN_00a81330();
        FUN_00e020f0(uVar7);
        FUN_00dffbc0(0x101);
        FUN_00dffbd0(local_280 + 1);
        FUN_00e01340(0x20100,5,auStack_12c);
        FUN_00e5ca30(param_1[0x6df],0x40400000);
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
        iStack_258 = param_1[0x6e1];
        local_26c = 1;
        uStack_25c = 0x115;
        iStack_250 = param_1[0x6e3];
        uStack_24c = (undefined1)param_1[0x6e4];
        uStack_14c = 0x40a00000;
        uStack_1d0 = uStack_1d0 | 0x100000;
        uStack_148 = 0x3f000000;
        iStack_254 = param_1[0x6e2];
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
        param_1[0x69e] = 0;
        (**(code **)(*(int *)param_1[0x1ec] + 0xe0))(0,"_101_Lgass",0,0);
        FUN_00ac94e0("L_LegGasTank");
        param_1[0x692] = 0;
        FUN_004b0b40();
        param_1[0x645] = 2;
        iVar8 = FUN_004a07c0();
        if ((iVar8 != 0) && (param_1[0x139] == 0)) {
          iVar8 = FUN_00a8cab0();
          param_1[0x379] = iVar8;
          iVar8 = FUN_00a8cab0();
          if ((iVar8 == 0x10000) ||
             (((iVar8 = FUN_00a8cab0(), iVar8 == 0x10009 ||
               (iVar8 = FUN_00a8cab0(), iVar8 == 0x1000a)) ||
              (iVar8 = FUN_00a8cab0(), iVar8 == 0x1000d)))) {
            iVar8 = FUN_00a8cab0();
            param_1[0x6fb] = iVar8;
          }
          if (param_1[0x6d8] != 0) {
            param_1[0x6fb] = 0x1000b;
          }
          param_1[0x37a] = param_1[0x374];
          FUN_004a0760();
          FUN_00a8caf0(0x60000,0,0,0);
          param_1[0x374] = 0;
          FUN_00a962d0(0,0);
          param_1[0x38c] = 0;
        }
        *(short *)(param_1 + 0x6a3) = (short)param_1[0x6a3] + -1;
        (**(code **)(*param_1 + 0x30c))(param_1[0x6a4],0);
      }
    }
  }
  if (param_1[0x69f] != 0) {
    iVar8 = param_1[0x69c];
    if (iVar8 < 1) {
      if ((iVar8 == 0) && (param_1[0x6a2] == 0)) {
        local_280[0] = 0.0;
        local_280[1] = 0.1;
        local_280[2] = -0.6;
        FUN_004abc40(0x12,param_1 + 0x538,0x301,local_280);
        FUN_00e01ca0();
        uVar7 = FUN_00a81330();
        FUN_00e020f0(uVar7);
        FUN_00dffbc0(0x301);
        FUN_00dffbd0(local_280);
        FUN_00e01340(0x20100,0x13,local_120);
        param_1[0x6a2] = 1;
        iVar8 = FUN_00e5e0c0("em0100_se_fueltank_brake",param_1,0xffffffff,0);
        param_1[0x6e0] = iVar8;
      }
      else if (iVar8 < 0) {
        local_270 = 0;
        local_26c = 0x3dcccccd;
        local_268 = 0xbf19999a;
        (**(code **)(param_1[0x538] + 8))(0x3f800000,0,0);
        param_1[0x6a2] = 0;
        FUN_00e01ca0();
        uVar7 = FUN_00a81330();
        FUN_00e020f0(uVar7);
        FUN_00dffbc0(0x301);
        FUN_00dffbd0(local_280 + 1);
        FUN_00e01340(0x20100,5,auStack_12c);
        FUN_00e5ca30(param_1[0x6e0],0x40400000);
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
        iStack_258 = param_1[0x6e1];
        iStack_250 = param_1[0x6e3];
        uStack_14c = 0x40a00000;
        uStack_1d0 = uStack_1d0 | 0x100000;
        uStack_148 = 0x3f000000;
        uStack_24c = (undefined1)param_1[0x6e4];
        uStack_144 = 0x3f800000;
        iStack_254 = param_1[0x6e2];
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
        param_1[0x69f] = 0;
        (**(code **)(*(int *)param_1[0x1ec] + 0xe0))(0,"_301_Bgass",0,0);
        FUN_00ac94e0("B_LegGasTank");
        param_1[0x693] = 0;
        FUN_004b0be0();
        param_1[0x645] = 3;
        iVar8 = FUN_004a07c0();
        if ((iVar8 != 0) && (param_1[0x139] == 0)) {
          iVar8 = FUN_00a8cab0();
          param_1[0x379] = iVar8;
          iVar8 = FUN_00a8cab0();
          if ((iVar8 == 0x10000) ||
             (((iVar8 = FUN_00a8cab0(), iVar8 == 0x10009 ||
               (iVar8 = FUN_00a8cab0(), iVar8 == 0x1000a)) ||
              (iVar8 = FUN_00a8cab0(), iVar8 == 0x1000d)))) {
            iVar8 = FUN_00a8cab0();
            param_1[0x6fb] = iVar8;
          }
          if (param_1[0x6d8] != 0) {
            param_1[0x6fb] = 0x1000b;
          }
          param_1[0x37a] = param_1[0x374];
          FUN_004a0760();
          FUN_00a8caf0(0x60000,0,0,0);
          param_1[0x374] = 0;
          FUN_00a962d0(0,0);
          param_1[0x38c] = 0;
        }
        *(short *)(param_1 + 0x6a3) = (short)param_1[0x6a3] + -1;
        (**(code **)(*param_1 + 0x30c))(param_1[0x6a4],0);
      }
    }
  }
  if (((param_1[0x139] == 0) && (iVar8 = FUN_00a8cab0(), iVar8 != 0x90000)) &&
     ((iVar8 = FUN_00a8cab0(), iVar8 != 0x90001 && (iVar8 = FUN_00a8cab0(), iVar8 != 0x90002)))) {
    if ((((short)param_1[0x6a3] == 0) && (iVar8 = FUN_004a07c0(), iVar8 != 0)) &&
       (param_1[0x139] == 0)) {
      iVar8 = FUN_00a8cab0();
      param_1[0x379] = iVar8;
      iVar8 = FUN_00a8cab0();
      if ((((iVar8 == 0x10000) || (iVar8 = FUN_00a8cab0(), iVar8 == 0x10009)) ||
          (iVar8 = FUN_00a8cab0(), iVar8 == 0x1000a)) || (iVar8 = FUN_00a8cab0(), iVar8 == 0x1000d))
      {
        iVar8 = FUN_00a8cab0();
        param_1[0x6fb] = iVar8;
      }
      if (param_1[0x6d8] != 0) {
        param_1[0x6fb] = 0x1000b;
      }
      param_1[0x37a] = param_1[0x374];
      FUN_004a0760();
      FUN_00a8caf0(0x70000,0,0,0);
      param_1[0x374] = 0;
      FUN_00a962d0(0,0);
      param_1[0x38c] = 0;
    }
    if (param_1[0x21c] < 1) {
      iVar8 = FUN_00a8cab0();
      FUN_004a2b50(0x80000,0,0,0,0);
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

// 004B1A90  FUN_004b1a90  size=106  [between]
void __fastcall FUN_004b1a90(int param_1)

{
  *(undefined4 *)(param_1 + 0x1a50) = 1;
  if (*(int *)(param_1 + 0x1a54) == 0) {
    *(undefined4 *)(param_1 + 0x1a54) = 1;
    FUN_004b0930();
  }
  if (*(int *)(param_1 + 0x1a58) == 0) {
    *(undefined4 *)(param_1 + 0x1a58) = 1;
    FUN_004b0aa0();
  }
  if (*(int *)(param_1 + 0x1a5c) == 0) {
    *(undefined4 *)(param_1 + 0x1a5c) = 1;
    FUN_004b0b40();
  }
  if (*(int *)(param_1 + 0x1a60) == 0) {
    *(undefined4 *)(param_1 + 0x1a60) = 1;
    FUN_004b0be0();
    return;
  }
  return;
}

// 004B1B00  Em0100::vf334  size=3116  [class]
void __thiscall Em0100::vf334(int *param_1,undefined4 param_2,int *param_3)

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
  
  BehaviorEmBase::vf334(param_2,param_3);
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
      puVar14 = &DAT_01b34db0;
      (**(code **)(*local_168 + 4))(&DAT_01b34db0);
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
        FUN_004a2b50(uVar5,uVar12,uVar4,uVar16,uVar7);
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
        FUN_0040ac60(local_168 + 0x648);
        *(char *)(param_1 + 0x373) = (char)local_168[0x373];
        param_1[0x694] = local_168[0x694];
        param_1[0x695] = local_168[0x695];
        param_1[0x696] = local_168[0x696];
        param_1[0x697] = local_168[0x697];
        param_1[0x698] = local_168[0x696];
      }
    }
  }
  iVar6 = FUN_00a7c800();
  piVar2 = *(int **)(iVar6 + 0x330);
  iVar6 = local_168[0x372];
  iVar3 = *piVar2;
  param_1[0x372] = iVar3;
  if (iVar3 - 1U < 10) {
    uVar16 = 0;
    piVar1 = param_1 + 0x430;
    uVar7 = FUN_00a7c8a0(0);
    FUN_004039a0(0,uVar7,uVar16);
    uVar7 = FUN_00a81330();
    FUN_00e020f0(uVar7);
    if (piVar1 != (int *)0x0) {
      FUN_00dffb20(piVar1);
    }
    FUN_00a8c8b0(param_1[300],local_160);
    if ((short)param_1[0x6a3] != 0) {
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
    if (param_1 + 0x45c != (int *)0x0) {
      FUN_00dffb20(param_1 + 0x45c);
    }
    FUN_00a8c8b0(param_1[300],local_160);
    uVar16 = 0;
    uVar7 = FUN_00a7c8a0(0);
    FUN_004039a0(0x31,uVar7,uVar16);
    uVar7 = FUN_00a81330();
    FUN_00e020f0(uVar7);
    FUN_00dffbc0(0x105);
    if (param_1 + 0x488 != (int *)0x0) {
      FUN_00dffb20(param_1 + 0x488);
    }
    FUN_00a8c8b0(param_1[300],local_160);
    uVar16 = 0;
    piVar1 = param_1 + 0x4b4;
    uVar7 = FUN_00a7c8a0(0);
    FUN_004039a0(0x31,uVar7,uVar16);
    uVar7 = FUN_00a81330();
    FUN_00e020f0(uVar7);
    FUN_00dffbc0(0x305);
    if (piVar1 != (int *)0x0) {
      FUN_00dffb20(piVar1);
    }
    FUN_00a8c8b0(param_1[300],local_160);
    param_1[0x614] = 1;
    param_1[0x615] = 1;
    param_1[0x616] = 1;
    if ((*(byte *)(piVar2 + 1) & 2) != 0) {
      (**(code **)(param_1[0x45c] + 8))(0x3f800000,0,0);
      param_1[0x614] = 0;
    }
    if (((*(byte *)(piVar2 + 1) & 4) != 0) && (param_1[0x615] != 0)) {
      (**(code **)(param_1[0x488] + 8))(0x3f800000,0,0);
      param_1[0x615] = 0;
    }
    if (((*(byte *)(piVar2 + 1) & 8) != 0) && (param_1[0x616] != 0)) {
      (**(code **)(*piVar1 + 8))(0x3f800000,0,0);
      param_1[0x616] = 0;
    }
  }
  if (local_168[0x139] != 0) goto switchD_004b1f95_default;
  iVar8 = FUN_00a8cab0();
  iVar3 = param_1[0x372];
  switch(iVar3) {
  case 1:
    if ((iVar6 == iVar3) || (param_1[0x139] != 0)) goto switchD_004b1f95_default;
    iVar6 = FUN_00a8cab0();
    param_1[0x379] = iVar6;
    iVar6 = FUN_00a8cab0();
    if ((iVar6 == 0x10000) ||
       (((iVar6 = FUN_00a8cab0(), iVar6 == 0x10009 || (iVar6 = FUN_00a8cab0(), iVar6 == 0x1000a)) ||
        (iVar6 = FUN_00a8cab0(), iVar6 == 0x1000d)))) {
      iVar6 = FUN_00a8cab0();
      param_1[0x6fb] = iVar6;
    }
    if (param_1[0x6d8] != 0) {
      param_1[0x6fb] = 0x1000b;
    }
    param_1[0x37a] = param_1[0x374];
    FUN_004a0760();
    uVar7 = 0x70003;
    break;
  case 2:
  case 5:
    if (iVar6 == iVar3) goto switchD_004b1f95_default;
    if (param_1[0x139] == 0) {
      iVar6 = FUN_00a8cab0();
      param_1[0x379] = iVar6;
      iVar6 = FUN_00a8cab0();
      if (((iVar6 == 0x10000) || (iVar6 = FUN_00a8cab0(), iVar6 == 0x10009)) ||
         ((iVar6 = FUN_00a8cab0(), iVar6 == 0x1000a || (iVar6 = FUN_00a8cab0(), iVar6 == 0x1000d))))
      {
        iVar6 = FUN_00a8cab0();
        param_1[0x6fb] = iVar6;
      }
      if (param_1[0x6d8] != 0) {
        param_1[0x6fb] = 0x1000b;
      }
      param_1[0x37a] = param_1[0x374];
      FUN_004a0760();
      FUN_00a8caf0(0x70006,0,0,0);
      param_1[0x374] = 0;
      FUN_00a962d0(0,0);
      param_1[0x38c] = 0;
    }
    if (iVar8 != 0x70003) {
      bVar10 = iVar8 == 0x70004;
LAB_004b255f:
      if (!bVar10) goto switchD_004b1f95_default;
    }
    goto LAB_004b2561;
  case 3:
  case 8:
    if (iVar6 == iVar3) goto switchD_004b1f95_default;
    if (param_1[0x139] == 0) {
      iVar6 = FUN_00a8cab0();
      param_1[0x379] = iVar6;
      iVar6 = FUN_00a8cab0();
      if (((iVar6 == 0x10000) || (iVar6 = FUN_00a8cab0(), iVar6 == 0x10009)) ||
         ((iVar6 = FUN_00a8cab0(), iVar6 == 0x1000a || (iVar6 = FUN_00a8cab0(), iVar6 == 0x1000d))))
      {
        iVar6 = FUN_00a8cab0();
        param_1[0x6fb] = iVar6;
      }
      if (param_1[0x6d8] != 0) {
        param_1[0x6fb] = 0x1000b;
      }
      param_1[0x37a] = param_1[0x374];
      FUN_004a0760();
      FUN_00a8caf0(0x70007,0,0,0);
      param_1[0x374] = 0;
      FUN_00a962d0(0,0);
      param_1[0x38c] = 0;
    }
    if (iVar8 != 0x70003) {
      bVar10 = iVar8 == 0x70005;
      goto LAB_004b255f;
    }
    goto LAB_004b2561;
  case 4:
    if ((iVar6 == iVar3) || (param_1[0x139] != 0)) goto switchD_004b1f95_default;
    iVar6 = FUN_00a8cab0();
    param_1[0x379] = iVar6;
    iVar6 = FUN_00a8cab0();
    if ((iVar6 == 0x10000) ||
       (((iVar6 = FUN_00a8cab0(), iVar6 == 0x10009 || (iVar6 = FUN_00a8cab0(), iVar6 == 0x1000a)) ||
        (iVar6 = FUN_00a8cab0(), iVar6 == 0x1000d)))) {
      iVar6 = FUN_00a8cab0();
      param_1[0x6fb] = iVar6;
    }
    if (param_1[0x6d8] != 0) {
      param_1[0x6fb] = 0x1000b;
    }
    param_1[0x37a] = param_1[0x374];
    FUN_004a0760();
    uVar7 = 0x70004;
    break;
  case 6:
  case 9:
    if (iVar6 == iVar3) goto switchD_004b1f95_default;
    if (param_1[0x139] == 0) {
      iVar6 = FUN_00a8cab0();
      param_1[0x379] = iVar6;
      iVar6 = FUN_00a8cab0();
      if (((iVar6 == 0x10000) || (iVar6 = FUN_00a8cab0(), iVar6 == 0x10009)) ||
         ((iVar6 = FUN_00a8cab0(), iVar6 == 0x1000a || (iVar6 = FUN_00a8cab0(), iVar6 == 0x1000d))))
      {
        iVar6 = FUN_00a8cab0();
        param_1[0x6fb] = iVar6;
      }
      if (param_1[0x6d8] != 0) {
        param_1[0x6fb] = 0x1000b;
      }
      param_1[0x37a] = param_1[0x374];
      FUN_004a0760();
      FUN_00a8caf0(0x70008,0,0,0);
      param_1[0x374] = 0;
      FUN_00a962d0(0,0);
      param_1[0x38c] = 0;
    }
    if (iVar8 != 0x70004) {
      bVar10 = iVar8 == 0x70005;
      goto LAB_004b255f;
    }
    goto LAB_004b2561;
  case 7:
    if ((iVar6 == iVar3) || (param_1[0x139] != 0)) goto switchD_004b1f95_default;
    iVar6 = FUN_00a8cab0();
    param_1[0x379] = iVar6;
    iVar6 = FUN_00a8cab0();
    if ((iVar6 == 0x10000) ||
       (((iVar6 = FUN_00a8cab0(), iVar6 == 0x10009 || (iVar6 = FUN_00a8cab0(), iVar6 == 0x1000a)) ||
        (iVar6 = FUN_00a8cab0(), iVar6 == 0x1000d)))) {
      iVar6 = FUN_00a8cab0();
      param_1[0x6fb] = iVar6;
    }
    if (param_1[0x6d8] != 0) {
      param_1[0x6fb] = 0x1000b;
    }
    param_1[0x37a] = param_1[0x374];
    FUN_004a0760();
    uVar7 = 0x70005;
    break;
  case 10:
    if (iVar6 == iVar3) goto switchD_004b1f95_default;
    if (param_1[0x139] == 0) {
      iVar6 = FUN_00a8cab0();
      param_1[0x379] = iVar6;
      iVar6 = FUN_00a8cab0();
      if ((((iVar6 == 0x10000) || (iVar6 = FUN_00a8cab0(), iVar6 == 0x10009)) ||
          (iVar6 = FUN_00a8cab0(), iVar6 == 0x1000a)) || (iVar6 = FUN_00a8cab0(), iVar6 == 0x1000d))
      {
        iVar6 = FUN_00a8cab0();
        param_1[0x6fb] = iVar6;
      }
      if (param_1[0x6d8] != 0) {
        param_1[0x6fb] = 0x1000b;
      }
      param_1[0x37a] = param_1[0x374];
      FUN_004a0760();
      FUN_00a8caf0(0x70009,0,0,0);
      param_1[0x374] = 0;
      FUN_00a962d0(0,0);
      param_1[0x38c] = 0;
    }
    if (((iVar8 != 0x70003) && (iVar8 != 0x70004)) &&
       ((iVar8 != 0x70005 && ((iVar8 != 0x70006 && (iVar8 != 0x70007)))))) {
      bVar10 = iVar8 == 0x70008;
      goto LAB_004b255f;
    }
LAB_004b2561:
    param_1[0x187] = 2;
    goto switchD_004b1f95_default;
  case 0xb:
    if ((iVar6 == iVar3) || (param_1[0x139] != 0)) goto switchD_004b1f95_default;
    FUN_004a0760();
    uVar7 = 0x80002;
    break;
  case 0xc:
    if ((iVar6 == iVar3) || (param_1[0x139] != 0)) goto switchD_004b1f95_default;
    FUN_004a0760();
    uVar7 = 0x80003;
    break;
  case 0xd:
    if ((iVar6 == iVar3) || (param_1[0x139] != 0)) goto switchD_004b1f95_default;
    FUN_004a0760();
    uVar7 = 0x80004;
    break;
  case 0xe:
    if ((iVar6 == iVar3) || (param_1[0x139] != 0)) goto switchD_004b1f95_default;
    FUN_004a0760();
    uVar7 = 0x80005;
    break;
  default:
    goto switchD_004b1f95_default;
  }
  FUN_00a8caf0(uVar7,0,0,0);
  param_1[0x374] = 0;
  FUN_00a962d0(0,0);
  param_1[0x38c] = 0;
switchD_004b1f95_default:
  param_1[0x617] = local_168[0x617];
  FUN_00ac94e0(&DAT_0163d9a8);
  if ((param_1[0x694] == 0) &&
     ((float)param_1[0x21c] <= (float)param_1[0x21d] * (float)param_1[0x699])) {
    param_1[0x694] = 1;
    FUN_004b1a90();
  }
  if (param_1[0x695] != 0) {
    FUN_004b0930();
  }
  if (param_1[0x696] != 0) {
    param_1[0x691] = 0;
    FUN_004b0aa0();
  }
  if (param_1[0x697] != 0) {
    param_1[0x692] = 0;
    FUN_004b0b40();
  }
  if (param_1[0x698] != 0) {
    param_1[0x693] = 0;
    FUN_004b0be0();
  }
  if ((param_1[0x391] != 0) && ((*(byte *)(piVar2 + 2) & 0x32) != 0)) {
    param_1[0x391] = 0;
    (**(code **)(*(int *)param_1[0x1ec] + 0xe0))(0,&DAT_0163ebbc,0,0);
    (**(code **)(*(int *)param_1[0x1ec] + 0xe0))(0,&DAT_0163ebb4,0,0);
    (**(code **)(*(int *)param_1[0x1ec] + 0xe0))(0,&DAT_0163ebac,0,0);
  }
  if ((param_1[0x390] != 0) && ((*(byte *)(piVar2 + 2) & 0x16) != 0)) {
    param_1[0x390] = 0;
    (**(code **)(*(int *)param_1[0x1ec] + 0xe0))(0,&DAT_0163eb94,0,0);
    (**(code **)(*(int *)param_1[0x1ec] + 0xe0))(0,&DAT_0163eb8c,0,0);
    (**(code **)(*(int *)param_1[0x1ec] + 0xe0))(0,&DAT_0163eb84,0,0);
  }
  if ((param_1[0x392] != 0) && ((*(byte *)(piVar2 + 2) & 100) != 0)) {
    param_1[0x392] = 0;
    (**(code **)(*(int *)param_1[0x1ec] + 0xe0))(0,&DAT_0163eb6c,0,0);
    (**(code **)(*(int *)param_1[0x1ec] + 0xe0))(0,&DAT_0163eb64,0,0);
    (**(code **)(*(int *)param_1[0x1ec] + 0xe0))(0,&DAT_0163eb5c,0,0);
  }
  return;
}

// 004B2770  FUN_004b2770  size=262  [between]
undefined4 __thiscall FUN_004b2770(int *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_EDI;
  
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
        if (iVar2 != 0) goto LAB_004b2804;
      }
    }
    return 0;
  }
  FUN_004b1a90();
LAB_004b2804:
  uVar3 = 0;
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    FUN_00a81330();
    uVar3 = FUN_00a7c8a0();
  }
  if (param_1[0x371] == 0) {
    (**(code **)(*param_1 + 0x36c))(param_1[0x685]);
  }
  FUN_00ac8d00(param_1,param_2,0);
  (**(code **)(*param_1 + 0x198))(uVar3,param_2,0x100);
  (**(code **)(*param_1 + 0x1ec))();
  return unaff_EDI;
}

// 004B2880  FUN_004b2880  size=592  [between]
void __fastcall FUN_004b2880(int *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined *puVar4;
  
  uVar3 = 0;
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar4 = &DAT_01be9db8;
    (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
    iVar1 = FUN_00dd6d80(puVar4);
    uVar3 = -(uint)(iVar1 != 0) & (uint)piVar2;
  }
  param_1[0x139] = 1;
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x7f,0,0,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_004a1980(uVar3);
    FUN_00c27260(0x40200000);
    FUN_00a8d280();
    param_1[0x362] = 1;
    param_1[0x6ec] = 1;
    param_1[0x393] = param_1[0x393] | 0x80000;
    break;
  case 1:
    break;
  case 2:
    FUN_00aa4080(0x80,0,0,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x34c))();
LAB_004b2a36:
      FUN_004a0760();
      FUN_00a8caf0(0x80001,0,0,0);
      param_1[0x374] = 0;
      FUN_00a962d0(0,0);
      param_1[0x38c] = 0;
    }
    goto switchD_004b28df_default;
  case 4:
    FUN_00aa4080(0x77,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 == 0) goto switchD_004b28df_default;
    goto LAB_004b2a36;
  default:
    goto switchD_004b28df_default;
  }
  (**(code **)(*param_1 + 0x220))(0x41200000);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
  iVar1 = FUN_00a8c760(0x1f);
  if (iVar1 != 0) {
    FUN_004b1a90();
    (**(code **)(*param_1 + 0x344))(6,0,1);
    FUN_00dda360(0,0x3f800000,0x3f800000,0xf);
  }
switchD_004b28df_default:
  iVar1 = FUN_00a8cab0();
  if (iVar1 == 0x117) {
    FUN_004a18f0(uVar3);
  }
  return;
}

// 004B2AF0  FUN_004b2af0  size=585  [between]
void __fastcall FUN_004b2af0(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  float10 fVar4;
  undefined4 uVar5;
  undefined *puVar6;
  float fVar7;
  
  uVar3 = 0;
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar6 = &DAT_01be9db8;
    (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
    iVar1 = FUN_00dd6d80(puVar6);
    uVar3 = -(uint)(iVar1 != 0) & (uint)piVar2;
  }
  *(undefined4 *)(param_1 + 0x4e4) = 1;
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    FUN_00aa4080(0x74,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    if (uVar3 != 0) {
      uVar5 = 0;
      FUN_00a92f90(0);
      fVar4 = (float10)FUN_00407b40(uVar5);
      fVar7 = (float)fVar4;
      uVar5 = 0;
      FUN_00a92f90(0,fVar7);
      FUN_00407b10(uVar5,fVar7);
    }
    *(undefined4 *)(param_1 + 0xd88) = 1;
    *(undefined4 *)(param_1 + 0x1bb0) = 1;
    *(uint *)(param_1 + 0xe4c) = *(uint *)(param_1 + 0xe4c) | 0x80000;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    break;
  case 2:
    FUN_00aa4080(0x75,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a8c760(0x1f);
    if (iVar1 != 0) {
      FUN_004b1a90();
      FUN_00dda360(0,0x3f800000,0x3f800000,0xf);
    }
    break;
  case 4:
    uVar5 = 0x76;
    goto LAB_004b2c9d;
  case 5:
  case 8:
    goto switchD_004b2b4f_caseD_5;
  case 6:
    goto switchD_004b2b4f_default;
  case 7:
    uVar5 = 0x77;
LAB_004b2c9d:
    FUN_00aa4080(uVar5,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
switchD_004b2b4f_caseD_5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_004a0760();
      FUN_00a8caf0(0x80001,0,0,0);
      *(undefined4 *)(param_1 + 0xdd0) = 0;
      FUN_00a962d0(0,0);
      *(undefined4 *)(param_1 + 0xe30) = 0;
    }
  default:
    goto switchD_004b2b4f_default;
  }
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
switchD_004b2b4f_default:
  iVar1 = FUN_00a8cab0();
  if (iVar1 == 0x118) {
    FUN_004a18f0(uVar3);
  }
  return;
}

// 004B2D60  FUN_004b2d60  size=1274  [between]
void __fastcall FUN_004b2d60(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  undefined4 unaff_EBX;
  undefined *puVar4;
  int *local_124;
  undefined1 auStack_120 [284];
  
  local_124 = (int *)0x0;
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    local_124 = (int *)FUN_00a7c8a0();
    if (local_124 == (int *)0x0) {
      local_124 = (int *)0x0;
    }
    else {
      puVar4 = &DAT_01be9db8;
      (**(code **)(*local_124 + 4))(&DAT_01be9db8);
      iVar2 = FUN_00dd6d80(puVar4);
      local_124 = (int *)(-(uint)(iVar2 != 0) & (uint)local_124);
    }
  }
  if ((param_1[0x393] & 0x20000U) != 0) {
    (**(code **)(*param_1 + 0x220))(0x40400000);
  }
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x88,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    piVar3 = (int *)FUN_00c1b9a0();
    (**(code **)(*piVar3 + 100))();
    param_1[0x393] = param_1[0x393] | 0x40000;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    iVar2 = FUN_00a8c760(0x1f);
    if (iVar2 != 0) {
      FUN_004b1a90();
      FUN_00dda360(0,0x3f800000,0x3f800000,0xf);
      FUN_004a18f0(local_124);
      return;
    }
    break;
  case 2:
    FUN_00aa4080(0x89,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a8c760(0x1f);
    if (iVar2 != 0) {
      FUN_004b1a90();
      FUN_00dda360(0,0x3f800000,0x3f800000,0xf);
    }
    FUN_00a94ce0(0);
    FUN_004a18f0(local_124);
    return;
  case 4:
    FUN_00aa4080(0x8a,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    pcVar1 = *(code **)(*param_1 + 0x344);
    param_1[0x187] = param_1[0x187] + 1;
    (*pcVar1)(6,0,1);
    param_1[0x250] = 0;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a8c760(0x1f);
    if (iVar2 != 0) {
      FUN_004b1a90();
      FUN_00dda360(0,0x3f800000,0x3f800000,0xf);
    }
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    if ((param_1[0x393] & 0x20000U) != 0) {
      param_1[0x187] = 6;
    }
    if (local_124 != (int *)0x0) {
      iVar2 = (**(code **)(*local_124 + 0x32c))();
      if (iVar2 != 0) {
        param_1[0x250] = 1;
      }
      iVar2 = (**(code **)(*local_124 + 0x32c))();
      if ((iVar2 == 0) && (param_1[0x250] == 1)) {
        param_1[0x250] = 2;
      }
    }
    if (param_1[0x250] == 2) {
      param_1[0x187] = 6;
      FUN_004a18f0(local_124);
      return;
    }
    break;
  case 6:
    FUN_00dda360(0,0x3f800000,0x3f800000,0x1e);
    pcVar1 = *(code **)(*param_1 + 0x20);
    param_1[0x139] = 1;
    (*pcVar1)();
    FUN_00eaa6e0(0x3f800000,0);
    FUN_00eaa6e0(0x3f800000,0);
    FUN_00eaa6e0(0x3f800000,0);
    FUN_00eaa6e0(0x3f800000,0);
    if (param_1[0x617] != 0) {
      (**(code **)(param_1[0x590] + 8))(0x3f800000,0,0);
    }
    if (param_1[0x6a0] != 0) {
      (**(code **)(param_1[0x4e0] + 8))(0x3f800000,0,0);
    }
    if (param_1[0x6a1] != 0) {
      (**(code **)(param_1[0x50c] + 8))(0x3f800000,0,0);
    }
    if (param_1[0x6a2] != 0) {
      (**(code **)(param_1[0x538] + 8))(0x3f800000,0,0);
    }
    FUN_00e01ca0();
    FUN_00e020f0(param_1[0x13c]);
    FUN_00e01340(0x20100,10,auStack_120);
    iVar2 = FUN_00e5e0c0("em0100_se_dmg_explosion",param_1,0xffffffff,0);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x6dd] = iVar2;
    FUN_00c27f40(0xe,0x44e10000);
    (**(code **)(*param_1 + 0x364))(0xffffffff);
    FUN_004a18f0(unaff_EBX);
    return;
  case 7:
    iVar2 = thunk_FUN_00e58ed0(param_1[0x6dd]);
    if (iVar2 == 0) {
      E3_EnemyBoardDebrisSokushi::vf4C();
      FUN_004a18f0(local_124);
      return;
    }
  }
  FUN_004a18f0(local_124);
  return;
}

// 004B3280  FUN_004b3280  size=356  [between]
/* WARNING: Removing unreachable block (ram,0x004aa564) */

void __fastcall FUN_004b3280(int *param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = param_1[0x186];
  if (iVar3 < 0x50001) {
    if (iVar3 == 0x50000) {
      FUN_004abce0();
      return;
    }
    switch(iVar3) {
    case 0x10000:
      FUN_004a0150();
      return;
    case 0x10001:
    case 0x10002:
      FUN_004a7280();
      return;
    case 0x10003:
    case 0x10004:
      FUN_004a75b0();
      return;
    case 0x10005:
      FUN_004a78d0();
      return;
    case 0x10006:
      FUN_004a7ce0();
      return;
    case 0x10007:
      FUN_004a7fd0();
      return;
    case 0x10008:
      FUN_004a8060();
      return;
    case 0x10009:
      FUN_004a0380();
      return;
    case 0x1000a:
      FUN_004a0490();
      return;
    case 0x1000b:
      FUN_004a0530();
      return;
    case 0x1000c:
      param_1[0x721] = 0;
      switch(param_1[0x187]) {
      case 0:
        FUN_00aa4080(0xf,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        param_1[0x187] = param_1[0x187] + 1;
        *(undefined2 *)((int)param_1 + 0x1a96) = 0;
      case 1:
        FUN_00ac80a0(0x3f800000,0x3f800000);
        iVar3 = FUN_00ac4780();
        if ((1 < iVar3) || (param_1[0x7f9] == 0)) {
          if ((float)param_1[0x2a3] < 400.0) {
            if (((100.0 < (float)param_1[0x2a3]) && (iVar3 = FUN_00a95540(0,0x50), iVar3 != 0)) &&
               ((float)param_1[0x2a8] < 0.17453292)) {
              param_1[0x187] = 2;
            }
            if (((float)param_1[0x2a3] < 25.0) && (iVar3 = FUN_00a94ee0(0,0x1e,0x50), iVar3 != 0)) {
              param_1[0x187] = 3;
            }
          }
          if ((1.0471976 < (float)param_1[0x2a8]) && (iVar3 = FUN_00a94ee0(0,100,0x96), iVar3 != 0))
          {
            if ((float)param_1[0x2a7] <= 0.0) {
              if ((float)param_1[0x2a7] < 0.0) {
                FUN_004a2d10(0x3f800000,(float)param_1[0x2a8] * 0.63661975);
              }
            }
            else {
              FUN_004a2df0(0x3f800000,(float)param_1[0x2a8] * 0.63661975);
            }
          }
        }
        if ((((float)param_1[0x2a4] <= (float)param_1[0x6ed]) && ((float)param_1[0x2a8] < 0.5235988)
            ) && ((short)param_1[0x6a3] != 0)) {
          param_1[0x7f8] = 1;
        }
        iVar3 = FUN_00907640(param_1 + 0x700,0,param_1 + 0x70c);
        if ((iVar3 != 0) &&
           (fVar1 = (float)param_1[0x70c] - (float)param_1[0x10],
           fVar1 = fVar1 * fVar1 +
                   ((float)param_1[0x70d] - (float)param_1[0x11]) *
                   ((float)param_1[0x70d] - (float)param_1[0x11]) +
                   ((float)param_1[0x70e] - (float)param_1[0x12]) *
                   ((float)param_1[0x70e] - (float)param_1[0x12]), fVar1 < 9.0 != (fVar1 == 9.0))) {
          param_1[0x187] = 3;
        }
        iVar3 = FUN_00a94ee0(0,0x1e,0x8c);
        if ((iVar3 != 0) && (param_1[0x2a1] != 0)) {
          FUN_00a8e880(param_1[0x2a1] + 0x40);
          (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3c8efa35,0);
        }
        iVar3 = FUN_00a94ce0(0);
        if ((iVar3 != 0) && (param_1[0x139] == 0)) {
          iVar3 = FUN_00a8cab0();
          param_1[0x379] = iVar3;
          iVar3 = FUN_00a8cab0();
          if ((iVar3 == 0x10000) ||
             (((iVar3 = FUN_00a8cab0(), iVar3 == 0x10009 ||
               (iVar3 = FUN_00a8cab0(), iVar3 == 0x1000a)) ||
              (iVar3 = FUN_00a8cab0(), iVar3 == 0x1000d)))) {
            iVar3 = FUN_00a8cab0();
            param_1[0x6fb] = iVar3;
          }
          if (param_1[0x6d8] != 0) {
            param_1[0x6fb] = 0x1000b;
          }
          param_1[0x37a] = param_1[0x374];
          FUN_004a0760();
          FUN_00a8caf0(0x1000a,0,0,0);
          param_1[0x374] = 0;
          FUN_00a962d0(0,0);
          param_1[0x38c] = 0;
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
        FUN_00ac80a0(param_1[0x6f9],0x3f800000);
        iVar3 = FUN_00a94ce0(0);
        if ((iVar3 != 0) && (param_1[0x139] == 0)) {
          iVar3 = FUN_00a8cab0();
          param_1[0x379] = iVar3;
          iVar3 = FUN_00a8cab0();
          if ((iVar3 == 0x10000) ||
             (((iVar3 = FUN_00a8cab0(), iVar3 == 0x10009 ||
               (iVar3 = FUN_00a8cab0(), iVar3 == 0x1000a)) ||
              (iVar3 = FUN_00a8cab0(), iVar3 == 0x1000d)))) {
            iVar3 = FUN_00a8cab0();
            param_1[0x6fb] = iVar3;
          }
          if (param_1[0x6d8] != 0) {
            param_1[0x6fb] = 0x1000b;
          }
          param_1[0x37a] = param_1[0x374];
          FUN_004a0760();
          FUN_00a8caf0(0x1000a,0,0,0);
          param_1[0x374] = 0;
          FUN_00a962d0(0,0);
          param_1[0x38c] = 0;
          return;
        }
      }
      return;
    case 0x1000d:
      FUN_004a6c00();
      return;
    case 0x1000e:
      goto LAB_004aa3e0;
    default:
      goto switchD_004b329d_default;
    }
  }
  if (iVar3 < 0x60001) {
    if (iVar3 == 0x60000) {
      FUN_004a4930();
      return;
    }
    switch(iVar3) {
    case 0x50001:
      FUN_004a43c0();
      return;
    case 0x50002:
      FUN_004acce0();
      return;
    case 0x50003:
      FUN_004ac410();
      return;
    case 0x50004:
      FUN_004a4520();
      return;
    }
  }
  else if (iVar3 < 0x70001) {
    if (iVar3 == 0x70000) {
      FUN_004a4e30();
      return;
    }
    if (iVar3 == 0x60001) {
      FUN_004a4c70();
      return;
    }
    if (iVar3 == 0x60002) {
      FUN_004a5380();
      return;
    }
  }
  else if (iVar3 < 0x80001) {
    if (iVar3 == 0x80000) {
      FUN_004aef80();
      return;
    }
    switch(iVar3) {
    case 0x70001:
      FUN_004a5080();
      return;
    case 0x70002:
      FUN_004ae040();
      return;
    case 0x70003:
      FUN_004ae2a0();
      return;
    case 0x70004:
      FUN_004ae6a0();
      return;
    case 0x70005:
      FUN_004aea90();
      return;
    case 0x70006:
      FUN_004a0ed0();
      return;
    case 0x70007:
      FUN_004a1130();
      return;
    case 0x70008:
      FUN_004a1370();
      return;
    case 0x70009:
      FUN_004a15b0();
      return;
    }
  }
  else if (iVar3 < 0x90001) {
    if (iVar3 == 0x90000) {
      FUN_004b2d60();
      return;
    }
    switch(iVar3) {
    case 0x80001:
      FUN_004a5500();
      return;
    case 0x80002:
      FUN_004af220();
      return;
    case 0x80003:
      FUN_004af3b0();
      return;
    case 0x80004:
      FUN_004af540();
      return;
    case 0x80005:
      FUN_004af6d0();
      return;
    }
  }
  else {
    if (iVar3 == 0x90001) {
      FUN_004b2af0();
      return;
    }
    if (iVar3 == 0x90002) {
      FUN_004b2880();
      return;
    }
  }
switchD_004b329d_default:
  return;
LAB_004aa3e0:
  param_1[0x721] = 0;
  if (param_1[0x187] != 0) {
    if (param_1[0x187] != 1) {
      return;
    }
    goto LAB_004aa754;
  }
  param_1[0x6f9] = 0x3f800000;
  uVar2 = FUN_004a05b0(&stack0xfffffffc,1);
  switch(uVar2) {
  case 0:
    fVar1 = (float)param_1[0x2a7];
    if (NAN(fVar1) || 0.0 < fVar1 == (fVar1 == 0.0)) {
      uVar2 = 0x8000040;
    }
    else {
      uVar2 = 0x8000000;
    }
    FUN_00aa4080(0x19,0,0x3e4ccccd,0x3f000000,uVar2,0xbf800000,0x3f800000);
    param_1[0x375] = 3;
    break;
  case 1:
    if (param_1[0x139] == 0) {
      iVar3 = FUN_00a8cab0();
      param_1[0x379] = iVar3;
      iVar3 = FUN_00a8cab0();
      if (((iVar3 == 0x10000) || (iVar3 = FUN_00a8cab0(), iVar3 == 0x10009)) ||
         ((iVar3 = FUN_00a8cab0(), iVar3 == 0x1000a || (iVar3 = FUN_00a8cab0(), iVar3 == 0x1000d))))
      {
        iVar3 = FUN_00a8cab0();
        param_1[0x6fb] = iVar3;
      }
      if (param_1[0x6d8] != 0) {
        param_1[0x6fb] = 0x1000b;
      }
      param_1[0x37a] = param_1[0x374];
LAB_004aa4c4:
      FUN_004a0760();
      FUN_00a8caf0(0x50002,0,0,0);
      param_1[0x374] = 0;
      FUN_00a962d0(0,0);
      param_1[0x38c] = 0;
    }
    break;
  case 2:
    if (0.0 <= (float)param_1[0x2a7]) {
      FUN_00aa4080(0x1a,0,0x3e4ccccd,0x3f000000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x375] = 1;
    }
    else if (param_1[0x139] == 0) {
      iVar3 = FUN_00a8cab0();
      param_1[0x379] = iVar3;
      iVar3 = FUN_00a8cab0();
      if (((iVar3 == 0x10000) || (iVar3 = FUN_00a8cab0(), iVar3 == 0x10009)) ||
         ((iVar3 = FUN_00a8cab0(), iVar3 == 0x1000a || (iVar3 = FUN_00a8cab0(), iVar3 == 0x1000d))))
      {
        iVar3 = FUN_00a8cab0();
        param_1[0x6fb] = iVar3;
      }
      if (param_1[0x6d8] != 0) {
        param_1[0x6fb] = 0x1000b;
      }
      param_1[0x37a] = param_1[0x374];
      goto LAB_004aa4c4;
    }
    break;
  case 3:
    if ((float)param_1[0x2a7] <= 0.0) {
      FUN_00aa4080(0x1a,0,0x3e4ccccd,0x3f000000,0x8000040,0xbf800000,0x3f800000);
      param_1[0x375] = 2;
    }
    else if (param_1[0x139] == 0) {
      iVar3 = FUN_00a8cab0();
      param_1[0x379] = iVar3;
      iVar3 = FUN_00a8cab0();
      if ((((iVar3 == 0x10000) || (iVar3 = FUN_00a8cab0(), iVar3 == 0x10009)) ||
          (iVar3 = FUN_00a8cab0(), iVar3 == 0x1000a)) || (iVar3 = FUN_00a8cab0(), iVar3 == 0x1000d))
      {
        iVar3 = FUN_00a8cab0();
        param_1[0x6fb] = iVar3;
      }
      if (param_1[0x6d8] != 0) {
        param_1[0x6fb] = 0x1000b;
      }
      param_1[0x37a] = param_1[0x374];
      goto LAB_004aa4c4;
    }
  }
  param_1[0x187] = param_1[0x187] + 1;
  *(undefined2 *)((int)param_1 + 0x1a96) = 0;
LAB_004aa754:
  FUN_00ac80a0(param_1[0x6f9],0x3f800000);
  if ((((float)param_1[0x2a3] <= (float)param_1[0x6ed]) && ((float)param_1[0x2a8] < 0.5235988)) &&
     ((short)param_1[0x6a3] != 0)) {
    param_1[0x7f8] = 1;
  }
  iVar3 = FUN_00a94ce0(0);
  if ((iVar3 != 0) && (param_1[0x139] == 0)) {
    iVar3 = FUN_00a8cab0();
    param_1[0x379] = iVar3;
    iVar3 = FUN_00a8cab0();
    if (((iVar3 == 0x10000) ||
        ((iVar3 = FUN_00a8cab0(), iVar3 == 0x10009 || (iVar3 = FUN_00a8cab0(), iVar3 == 0x1000a))))
       || (iVar3 = FUN_00a8cab0(), iVar3 == 0x1000d)) {
      iVar3 = FUN_00a8cab0();
      param_1[0x6fb] = iVar3;
    }
    if (param_1[0x6d8] != 0) {
      param_1[0x6fb] = 0x1000b;
    }
    param_1[0x37a] = param_1[0x374];
    FUN_004a0760();
    FUN_00a8caf0(0x1000a,0,0,0);
    param_1[0x374] = 0;
    FUN_00a962d0(0,0);
    param_1[0x38c] = 0;
  }
  return;
}

// 004B3470  Em0100::vf32C  size=5633  [class]
undefined4 __fastcall Em0100::vf32C(int *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  float10 fVar5;
  undefined4 uVar6;
  int iStack_2b8;
  uint local_2b4;
  undefined1 auStack_2b0 [336];
  undefined1 auStack_160 [348];
  
  param_1[0x1a1] = 0;
  FUN_00ac2080(0);
  FUN_00ac2080(1);
  FUN_00ac2080(2);
  FUN_00ac2080(3);
  FUN_00ac2080(4);
  FUN_00ac2080(5);
  FUN_00ac2080(6);
  iVar2 = FUN_00a8ef10();
  if (((iVar2 == 0) && (iVar2 = FUN_00a8c760(9), iVar2 == 0)) &&
     ((*(byte *)(param_1 + 0x130) & 1) != 0)) {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x280);
    if (param_1[0x286] != 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    piVar4 = (int *)param_1[0x19f];
    if (piVar4 != piVar4 + param_1[0x1a1] * 0x54) {
      do {
        iVar2 = *piVar4;
        if (((iVar2 != 0) && (iVar2 != 1)) &&
           ((iVar2 != 2 && ((iVar2 != 0x1b0 && (iVar2 != 0x147)))))) {
          local_2b4 = 0;
          (**(code **)(*param_1 + 0x30c))(piVar4[1],0);
          param_1[0x6db] = param_1[0x6db] + piVar4[1];
          iVar2 = FUN_00a8cab0();
          if ((iVar2 == 0x90000) ||
             ((iVar2 = FUN_00a8cab0(), iVar2 == 0x90001 ||
              (iVar2 = FUN_00a8cab0(), iVar2 == 0x90002)))) {
            FUN_004adf40(piVar4);
            FUN_004b2770(auStack_2b0);
            if (param_1[0x286] == 0) {
              return 0;
            }
            LeaveCriticalSection(lpCriticalSection);
            return 0;
          }
          iStack_2b8 = 0;
          iVar2 = FUN_00a81330();
          if (((iVar2 != 0) && (iStack_2b8 = FUN_00a7c8a0(), iStack_2b8 != 0)) &&
             ((*(byte *)(iStack_2b8 + 0x4c0) & 0x10) != 0)) {
            if ((param_1[0x393] & 0x100000U) == 0) {
              FUN_00a88250(iVar2,piVar4 + 0x40);
            }
            (**(code **)(*param_1 + 0x21c))(iStack_2b8,(char)piVar4[4],0x3c23d70a,0);
            iVar2 = *piVar4;
            if (((iVar2 == 0x47) || (iVar2 == 0x48)) || (iVar2 == 0x42)) {
              uVar3 = 0x40000000;
            }
            else {
              uVar3 = 0x41200000;
            }
            (**(code **)(*param_1 + 0x220))(uVar3);
          }
          param_1[0x759] = (int)((float)param_1[0x759] * 0.5);
          if (((param_1[0x393] & 0x100000U) == 0) && (param_1[0x139] == 0)) {
            *(short *)(param_1 + 0x6a7) = (short)param_1[0x6a7] + 1;
          }
          iVar2 = FUN_00a8cab0();
          if ((((iVar2 == 0x80002) || (iVar2 == 0x80003)) || (iVar2 == 0x80004)) ||
             ((iVar2 == 0x80005 || (param_1[0x139] != 0)))) {
            local_2b4 = 0;
          }
          else {
            switch(piVar4[0x4a]) {
            case 0:
              param_1[0x645] = 0;
              iVar2 = FUN_004a07c0();
              if ((iVar2 != 0) &&
                 ((((param_1[0x6a8] == 0 && (param_1[0x6dc] < param_1[0x6db])) ||
                   ((param_1[0x393] & 0x100000U) != 0)) && (param_1[0x139] == 0)))) {
                iVar2 = FUN_00a8cab0();
                param_1[0x379] = iVar2;
                iVar2 = FUN_00a8cab0();
                if (((iVar2 == 0x10000) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x10009)) ||
                   ((iVar2 = FUN_00a8cab0(), iVar2 == 0x1000a ||
                    (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000d)))) {
                  iVar2 = FUN_00a8cab0();
                  param_1[0x6fb] = iVar2;
                }
                if (param_1[0x6d8] != 0) {
                  param_1[0x6fb] = 0x1000b;
                }
                param_1[0x37a] = param_1[0x374];
                FUN_004a0760();
                FUN_00a8caf0(0x60000,0,0,0);
                param_1[0x374] = 0;
                FUN_00a962d0(0,0);
                param_1[0x38c] = 0;
              }
              if ((((param_1[0x6a8] == 0) && ((short)param_1[0x6a7] == 10)) &&
                  (((iVar2 = FUN_00a8cab0(), iVar2 != 0x70002 &&
                    (((iVar2 = FUN_00a8cab0(), iVar2 != 0x70003 &&
                      (iVar2 = FUN_00a8cab0(), iVar2 != 0x70004)) &&
                     (iVar2 = FUN_00a8cab0(), iVar2 != 0x70005)))) &&
                   (((iVar2 = FUN_00a8cab0(), iVar2 != 0x70006 &&
                     (iVar2 = FUN_00a8cab0(), iVar2 != 0x70007)) &&
                    (iVar2 = FUN_00a8cab0(), iVar2 != 0x70008)))))) &&
                 ((iVar2 = FUN_00a8cab0(), iVar2 != 0x70009 &&
                  (param_1[0x6a8] = 1, param_1[0x139] == 0)))) {
                iVar2 = FUN_00a8cab0();
                param_1[0x379] = iVar2;
                iVar2 = FUN_00a8cab0();
                if ((iVar2 == 0x10000) ||
                   (((iVar2 = FUN_00a8cab0(), iVar2 == 0x10009 ||
                     (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000a)) ||
                    (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000d)))) {
                  iVar2 = FUN_00a8cab0();
                  param_1[0x6fb] = iVar2;
                }
                if (param_1[0x6d8] != 0) {
                  param_1[0x6fb] = 0x1000b;
                }
                param_1[0x37a] = param_1[0x374];
                FUN_004a0760();
                FUN_00a8caf0(0x50002,0,0,0);
                param_1[0x374] = 0;
                FUN_00a962d0(0,0);
                param_1[0x38c] = 0;
              }
              if ((*(byte *)(piVar4 + 0x23) & 2) != 0) {
                FUN_004abbc0(399,param_1 + 0x5bc,0);
                if (param_1[0x694] != 0) break;
                FUN_004b1a90();
              }
              if ((param_1[0x694] == 0) && (iVar2 = FUN_004a0b70(), iVar2 != 0)) {
                FUN_004abbc0(0x11,param_1 + 0x5bc,0);
                FUN_004b1a90();
              }
              break;
            case 1:
              param_1[0x645] = 1;
              iVar2 = FUN_004a07c0();
              if ((iVar2 != 0) &&
                 ((((param_1[0x6a8] == 0 && (param_1[0x6dc] < param_1[0x6db])) ||
                   ((param_1[0x393] & 0x100000U) != 0)) && (param_1[0x139] == 0)))) {
                iVar2 = FUN_00a8cab0();
                param_1[0x379] = iVar2;
                iVar2 = FUN_00a8cab0();
                if (((iVar2 == 0x10000) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x10009)) ||
                   ((iVar2 = FUN_00a8cab0(), iVar2 == 0x1000a ||
                    (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000d)))) {
                  iVar2 = FUN_00a8cab0();
                  param_1[0x6fb] = iVar2;
                }
                if (param_1[0x6d8] != 0) {
                  param_1[0x6fb] = 0x1000b;
                }
                param_1[0x37a] = param_1[0x374];
                FUN_004a0760();
                FUN_00a8caf0(0x60000,0,0,0);
                param_1[0x374] = 0;
                FUN_00a962d0(0,0);
                param_1[0x38c] = 0;
              }
              if (((param_1[0x6a8] == 0) && ((short)param_1[0x6a7] == 10)) &&
                 ((((iVar2 = FUN_00a8cab0(), iVar2 != 0x70002 &&
                    (((iVar2 = FUN_00a8cab0(), iVar2 != 0x70003 &&
                      (iVar2 = FUN_00a8cab0(), iVar2 != 0x70004)) &&
                     (iVar2 = FUN_00a8cab0(), iVar2 != 0x70005)))) &&
                   (((iVar2 = FUN_00a8cab0(), iVar2 != 0x70006 &&
                     (iVar2 = FUN_00a8cab0(), iVar2 != 0x70007)) &&
                    (iVar2 = FUN_00a8cab0(), iVar2 != 0x70008)))) &&
                  ((iVar2 = FUN_00a8cab0(), iVar2 != 0x70009 &&
                   (param_1[0x6a8] = 1, param_1[0x139] == 0)))))) {
                iVar2 = FUN_00a8cab0();
                param_1[0x379] = iVar2;
                iVar2 = FUN_00a8cab0();
                if ((iVar2 == 0x10000) ||
                   (((iVar2 = FUN_00a8cab0(), iVar2 == 0x10009 ||
                     (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000a)) ||
                    (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000d)))) {
                  iVar2 = FUN_00a8cab0();
                  param_1[0x6fb] = iVar2;
                }
                if (param_1[0x6d8] != 0) {
                  param_1[0x6fb] = 0x1000b;
                }
                param_1[0x37a] = param_1[0x374];
                FUN_004a0760();
                FUN_00a8caf0(0x50002,0,0,0);
                param_1[0x374] = 0;
                FUN_00a962d0(0,0);
                param_1[0x38c] = 0;
              }
              if (((*(byte *)(piVar4 + 0x23) & 2) != 0) &&
                 (FUN_004abbc0(399,param_1 + 0x5bc,0), param_1[0x694] == 0)) {
                FUN_004b1a90();
              }
              if (0 < param_1[0x691]) {
                param_1[0x691] = param_1[0x691] - piVar4[1];
              }
              if (((param_1[0x696] == 0) && (iVar2 = FUN_004a0ba0(), iVar2 != 0)) &&
                 (param_1[0x694] == 0)) {
                FUN_004abbc0(0xe,param_1 + 0x5bc,0);
                FUN_004b0aa0();
              }
              break;
            case 2:
              param_1[0x645] = 2;
              iVar2 = FUN_004a07c0();
              if ((iVar2 != 0) &&
                 ((((param_1[0x6a8] == 0 && (param_1[0x6dc] < param_1[0x6db])) ||
                   ((param_1[0x393] & 0x100000U) != 0)) && (param_1[0x139] == 0)))) {
                iVar2 = FUN_00a8cab0();
                param_1[0x379] = iVar2;
                iVar2 = FUN_00a8cab0();
                if (((iVar2 == 0x10000) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x10009)) ||
                   ((iVar2 = FUN_00a8cab0(), iVar2 == 0x1000a ||
                    (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000d)))) {
                  iVar2 = FUN_00a8cab0();
                  param_1[0x6fb] = iVar2;
                }
                if (param_1[0x6d8] != 0) {
                  param_1[0x6fb] = 0x1000b;
                }
                param_1[0x37a] = param_1[0x374];
                FUN_004a0760();
                FUN_00a8caf0(0x60000,0,0,0);
                param_1[0x374] = 0;
                FUN_00a962d0(0,0);
                param_1[0x38c] = 0;
              }
              if (((param_1[0x6a8] == 0) && ((short)param_1[0x6a7] == 10)) &&
                 ((((iVar2 = FUN_00a8cab0(), iVar2 != 0x70002 &&
                    (((iVar2 = FUN_00a8cab0(), iVar2 != 0x70003 &&
                      (iVar2 = FUN_00a8cab0(), iVar2 != 0x70004)) &&
                     (iVar2 = FUN_00a8cab0(), iVar2 != 0x70005)))) &&
                   (((iVar2 = FUN_00a8cab0(), iVar2 != 0x70006 &&
                     (iVar2 = FUN_00a8cab0(), iVar2 != 0x70007)) &&
                    (iVar2 = FUN_00a8cab0(), iVar2 != 0x70008)))) &&
                  ((iVar2 = FUN_00a8cab0(), iVar2 != 0x70009 &&
                   (param_1[0x6a8] = 1, param_1[0x139] == 0)))))) {
                iVar2 = FUN_00a8cab0();
                param_1[0x379] = iVar2;
                iVar2 = FUN_00a8cab0();
                if ((iVar2 == 0x10000) ||
                   (((iVar2 = FUN_00a8cab0(), iVar2 == 0x10009 ||
                     (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000a)) ||
                    (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000d)))) {
                  iVar2 = FUN_00a8cab0();
                  param_1[0x6fb] = iVar2;
                }
                if (param_1[0x6d8] != 0) {
                  param_1[0x6fb] = 0x1000b;
                }
                param_1[0x37a] = param_1[0x374];
                FUN_004a0760();
                FUN_00a8caf0(0x50002,0,0,0);
                param_1[0x374] = 0;
                FUN_00a962d0(0,0);
                param_1[0x38c] = 0;
              }
              if (((*(byte *)(piVar4 + 0x23) & 2) != 0) &&
                 (FUN_004abbc0(399,param_1 + 0x5bc,0), param_1[0x694] == 0)) {
                FUN_004b1a90();
              }
              if (0 < param_1[0x692]) {
                param_1[0x692] = param_1[0x692] - piVar4[1];
              }
              if (((param_1[0x697] == 0) && (iVar2 = FUN_004a0bc0(), iVar2 != 0)) &&
                 (param_1[0x694] == 0)) {
                FUN_004abbc0(0xf,param_1 + 0x5bc,0);
                FUN_004b0b40();
              }
              break;
            case 3:
              param_1[0x645] = 3;
              iVar2 = FUN_004a07c0();
              if (((iVar2 != 0) &&
                  (((param_1[0x6a8] == 0 && (param_1[0x6dc] < param_1[0x6db])) ||
                   ((param_1[0x393] & 0x100000U) != 0)))) && (param_1[0x139] == 0)) {
                iVar2 = FUN_00a8cab0();
                param_1[0x379] = iVar2;
                iVar2 = FUN_00a8cab0();
                if (((iVar2 == 0x10000) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x10009)) ||
                   ((iVar2 = FUN_00a8cab0(), iVar2 == 0x1000a ||
                    (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000d)))) {
                  iVar2 = FUN_00a8cab0();
                  param_1[0x6fb] = iVar2;
                }
                if (param_1[0x6d8] != 0) {
                  param_1[0x6fb] = 0x1000b;
                }
                param_1[0x37a] = param_1[0x374];
                FUN_004a0760();
                FUN_00a8caf0(0x60000,0,0,0);
                param_1[0x374] = 0;
                FUN_00a962d0(0,0);
                param_1[0x38c] = 0;
              }
              if ((((param_1[0x6a8] == 0) && ((short)param_1[0x6a7] == 10)) &&
                  ((iVar2 = FUN_00a8cab0(), iVar2 != 0x70002 &&
                   (((iVar2 = FUN_00a8cab0(), iVar2 != 0x70003 &&
                     (iVar2 = FUN_00a8cab0(), iVar2 != 0x70004)) &&
                    (iVar2 = FUN_00a8cab0(), iVar2 != 0x70005)))))) &&
                 ((((iVar2 = FUN_00a8cab0(), iVar2 != 0x70006 &&
                    (iVar2 = FUN_00a8cab0(), iVar2 != 0x70007)) &&
                   (iVar2 = FUN_00a8cab0(), iVar2 != 0x70008)) &&
                  ((iVar2 = FUN_00a8cab0(), iVar2 != 0x70009 &&
                   (param_1[0x6a8] = 1, param_1[0x139] == 0)))))) {
                iVar2 = FUN_00a8cab0();
                param_1[0x379] = iVar2;
                iVar2 = FUN_00a8cab0();
                if ((iVar2 == 0x10000) ||
                   (((iVar2 = FUN_00a8cab0(), iVar2 == 0x10009 ||
                     (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000a)) ||
                    (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000d)))) {
                  iVar2 = FUN_00a8cab0();
                  param_1[0x6fb] = iVar2;
                }
                if (param_1[0x6d8] != 0) {
                  param_1[0x6fb] = 0x1000b;
                }
                param_1[0x37a] = param_1[0x374];
                FUN_004a0760();
                FUN_00a8caf0(0x50002,0,0,0);
                param_1[0x374] = 0;
                FUN_00a962d0(0,0);
                param_1[0x38c] = 0;
              }
              if (((*(byte *)(piVar4 + 0x23) & 2) != 0) &&
                 (FUN_004abbc0(399,param_1 + 0x5bc,0), param_1[0x694] == 0)) {
                FUN_004b1a90();
              }
              if (0 < param_1[0x693]) {
                param_1[0x693] = param_1[0x693] - piVar4[1];
              }
              if (((param_1[0x698] == 0) && (iVar2 = FUN_004a0be0(), iVar2 != 0)) &&
                 (param_1[0x694] == 0)) {
                FUN_004abbc0(0x10,param_1 + 0x5bc,0);
                FUN_004b0be0();
              }
              break;
            case 4:
              if ((param_1[0x695] == 0) || (iVar2 = FUN_00ac8350(), iVar2 == 0)) {
                iVar2 = param_1[0x69a];
                if (iVar2 < 1) {
                  if ((param_1[0x69d] != 0) && (iVar2 == 0)) {
                    param_1[0x69a] = -piVar4[1];
                  }
                }
                else {
                  iVar1 = piVar4[1];
                  param_1[0x69a] = iVar2 - iVar1;
                  if (iVar2 - iVar1 < 0) {
                    param_1[0x69a] = 0;
                  }
                  if (piVar4[0x25] != 0) {
                    param_1[0x69a] = (0 < param_1[0x69a]) - 1;
                  }
                }
              }
              break;
            case 5:
              if ((param_1[0x695] == 0) || (iVar2 = FUN_00ac8350(), iVar2 == 0)) {
                iVar2 = param_1[0x69b];
                if (iVar2 < 1) {
                  if ((param_1[0x69e] != 0) && (iVar2 == 0)) {
                    param_1[0x69b] = -piVar4[1];
                  }
                }
                else {
                  iVar1 = piVar4[1];
                  param_1[0x69b] = iVar2 - iVar1;
                  if (iVar2 - iVar1 < 0) {
                    param_1[0x69b] = 0;
                  }
                  if (piVar4[0x25] != 0) {
                    param_1[0x69b] = (0 < param_1[0x69b]) - 1;
                  }
                }
              }
              break;
            case 6:
              if ((param_1[0x695] == 0) || (iVar2 = FUN_00ac8350(), iVar2 == 0)) {
                iVar2 = param_1[0x69c];
                if (iVar2 < 1) {
                  if ((param_1[0x69f] != 0) && (iVar2 == 0)) {
                    param_1[0x69c] = -piVar4[1];
                  }
                }
                else {
                  iVar1 = piVar4[1];
                  param_1[0x69c] = iVar2 - iVar1;
                  if (iVar2 - iVar1 < 0) {
                    param_1[0x69c] = 0;
                  }
                  if (piVar4[0x25] != 0) {
                    param_1[0x69c] = (0 < param_1[0x69c]) - 1;
                  }
                }
              }
            }
            iVar2 = FUN_00a8cab0();
            if (((iVar2 == 0x70003) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x70004)) ||
               ((iVar2 = FUN_00a8cab0(), iVar2 == 0x70005 ||
                ((((iVar2 = FUN_00a8cab0(), iVar2 == 0x70006 ||
                   (iVar2 = FUN_00a8cab0(), iVar2 == 0x70007)) ||
                  (iVar2 = FUN_00a8cab0(), iVar2 == 0x70008)) ||
                 (iVar2 = FUN_00a8cab0(), iVar2 == 0x70009)))))) {
              FUN_00a8cb60(0xc);
            }
            if ((((param_1[0x718] == 0) && (iVar2 = FUN_00fdbc60(), param_1[0x21c] <= iVar2)) ||
                ((*(byte *)(piVar4 + 0x23) & 1) != 0)) && (iVar2 = FUN_004a07c0(), iVar2 != 0)) {
              if ((*(byte *)(piVar4 + 0x23) & 1) != 0) {
                uVar6 = 0;
                uVar3 = FUN_00a7c8a0(0);
                FUN_004039a0(0x18e,uVar3,uVar6);
                uVar3 = FUN_00a81330();
                FUN_00e020f0(uVar3);
                FUN_00a8c8b0(param_1[300],auStack_2b0);
              }
              param_1[0x718] = 1;
              param_1[0x7fa] = 1;
              if (param_1[0x139] == 0) {
                iVar2 = FUN_00a8cab0();
                param_1[0x379] = iVar2;
                iVar2 = FUN_00a8cab0();
                if (((iVar2 == 0x10000) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x10009)) ||
                   ((iVar2 = FUN_00a8cab0(), iVar2 == 0x1000a ||
                    (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000d)))) {
                  iVar2 = FUN_00a8cab0();
                  param_1[0x6fb] = iVar2;
                }
                if (param_1[0x6d8] != 0) {
                  param_1[0x6fb] = 0x1000b;
                }
                param_1[0x37a] = param_1[0x374];
                FUN_004a0760();
                FUN_00a8caf0(0x70002,0,0,0);
                param_1[0x374] = 0;
                FUN_00a962d0(0,0);
                param_1[0x38c] = 0;
              }
            }
            if ((piVar4[0x23] & 0x20000U) != 0) {
              iVar2 = FUN_004a07c0();
              if ((iVar2 == 0) && (iVar2 = FUN_00a8cab0(), iVar2 != 0x60001)) {
                iVar2 = FUN_00a8cab0();
                if (((((iVar2 == 0x70003) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x70004)) ||
                     ((iVar2 = FUN_00a8cab0(), iVar2 == 0x70005 ||
                      ((iVar2 = FUN_00a8cab0(), iVar2 == 0x70006 ||
                       (iVar2 = FUN_00a8cab0(), iVar2 == 0x70007)))))) ||
                    (iVar2 = FUN_00a8cab0(), iVar2 == 0x70008)) ||
                   (iVar2 = FUN_00a8cab0(), iVar2 == 0x70009)) {
                  param_1[0x7fa] = 1;
                  FUN_00a8cb60(10);
                }
              }
              else {
                param_1[0x7fa] = 1;
                if (param_1[0x139] == 0) {
                  iVar2 = FUN_00a8cab0();
                  param_1[0x379] = iVar2;
                  iVar2 = FUN_00a8cab0();
                  if ((((iVar2 == 0x10000) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x10009)) ||
                      (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000a)) ||
                     (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000d)) {
                    iVar2 = FUN_00a8cab0();
                    param_1[0x6fb] = iVar2;
                  }
                  if (param_1[0x6d8] != 0) {
                    param_1[0x6fb] = 0x1000b;
                  }
                  param_1[0x37a] = param_1[0x374];
                  FUN_004a0760();
                  FUN_00a8caf0(0x60001,0,0,0);
                  param_1[0x374] = 0;
                  FUN_00a962d0(0,0);
                  param_1[0x38c] = 0;
                }
              }
            }
            if (((*(byte *)(piVar4 + 0x23) & 0x20) != 0) && ((param_1[0x393] & 0x100000U) == 0)) {
              iVar2 = FUN_004a0710();
              if (iVar2 == 0) {
                iVar2 = FUN_00a8cab0();
                if ((((iVar2 == 0x70003) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x70004)) ||
                    (iVar2 = FUN_00a8cab0(), iVar2 == 0x70005)) ||
                   (((iVar2 = FUN_00a8cab0(), iVar2 == 0x70006 ||
                     (iVar2 = FUN_00a8cab0(), iVar2 == 0x70007)) ||
                    ((iVar2 = FUN_00a8cab0(), iVar2 == 0x70008 ||
                     (iVar2 = FUN_00a8cab0(), iVar2 == 0x70009)))))) {
                  FUN_00a8cb60(0xc);
                }
                else if (param_1[0x139] == 0) {
                  iVar2 = FUN_00a8cab0();
                  param_1[0x379] = iVar2;
                  iVar2 = FUN_00a8cab0();
                  if (((iVar2 == 0x10000) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x10009)) ||
                     ((iVar2 = FUN_00a8cab0(), iVar2 == 0x1000a ||
                      (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000d)))) {
                    iVar2 = FUN_00a8cab0();
                    param_1[0x6fb] = iVar2;
                  }
                  if (param_1[0x6d8] != 0) {
                    param_1[0x6fb] = 0x1000b;
                  }
                  param_1[0x37a] = param_1[0x374];
                  FUN_004a0760();
                  FUN_00a8caf0(0x60000,0,0,0);
                  param_1[0x374] = 0;
                  FUN_00a962d0(0,0);
                  param_1[0x38c] = 0;
                }
              }
              else {
                FUN_004a4740();
              }
            }
            if (((*(byte *)((int)piVar4 + 0x8e) & 1) != 0) &&
               ((((iVar2 = FUN_004a0b70(), iVar2 != 0 || (iVar2 = FUN_004a0ba0(), iVar2 != 0)) ||
                 (iVar2 = FUN_004a0bc0(), iVar2 != 0)) || (iVar2 = FUN_004a0be0(), iVar2 != 0)))) {
              local_2b4 = 0x40;
            }
            if ((piVar4[0x23] & 0x8000U) != 0) {
              iVar2 = FUN_004a0b70();
              if (((iVar2 != 0) || (iVar2 = FUN_004a0ba0(), iVar2 != 0)) ||
                 ((iVar2 = FUN_004a0bc0(), iVar2 != 0 || (iVar2 = FUN_004a0be0(), iVar2 != 0)))) {
                local_2b4 = 0x20;
              }
              if (param_1[0x139] == 0) {
                iVar2 = FUN_00a8cab0();
                param_1[0x379] = iVar2;
                iVar2 = FUN_00a8cab0();
                if (((iVar2 == 0x10000) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x10009)) ||
                   ((iVar2 = FUN_00a8cab0(), iVar2 == 0x1000a ||
                    (iVar2 = FUN_00a8cab0(), iVar2 == 0x1000d)))) {
                  iVar2 = FUN_00a8cab0();
                  param_1[0x6fb] = iVar2;
                }
                if (param_1[0x6d8] != 0) {
                  param_1[0x6fb] = 0x1000b;
                }
                param_1[0x37a] = param_1[0x374];
                FUN_004a0760();
                FUN_00a8caf0(0x70001,0,0,0);
                param_1[0x374] = 0;
                FUN_00a962d0(0,0);
                param_1[0x38c] = 0;
              }
            }
            local_2b4 = local_2b4 | 1;
          }
          FUN_004adf40(piVar4);
          iVar2 = FUN_004b2770(auStack_160);
          if (iVar2 != 0) {
LAB_004b4a26:
            if (param_1[0x286] == 0) {
              return 0;
            }
            LeaveCriticalSection(lpCriticalSection);
            return 0;
          }
          (**(code **)(*param_1 + 0x198))(iStack_2b8,piVar4,local_2b4);
          fVar5 = (float10)FUN_00ddba30((float)piVar4[0xc] - (float)param_1[0x25]);
          param_1[0x245] = (int)(float)fVar5;
          if ((param_1[0x21c] < 1) && (iVar2 = FUN_00a8cab0(), iVar2 != 0x90000)) {
            if (param_1[0x139] == 0) {
              (**(code **)(*param_1 + 0x344))(6,param_1[0x378],param_1[0x377]);
              if ((param_1[0x377] != 0) && ((*(byte *)((int)piVar4 + 0x92) & 1) != 0)) {
                piVar4 = (int *)FUN_00c209f0();
                (**(code **)(*piVar4 + 0x14))(0xe);
              }
              iVar2 = FUN_00a8cab0();
              FUN_004a2b50(0x80000,0,0,0,0);
              param_1[0x139] = 1;
              if ((((iVar2 == 0x70000) || (iVar2 == 0x70003)) || (iVar2 == 0x70004)) ||
                 (((iVar2 == 0x70005 || (iVar2 == 0x70006)) ||
                  ((iVar2 == 0x70007 || ((iVar2 == 0x70008 || (iVar2 == 0x70009)))))))) {
                param_1[0x187] = 2;
              }
            }
            goto LAB_004b4a26;
          }
        }
        piVar4 = piVar4 + 0x54;
      } while (piVar4 != (int *)(param_1[0x1a1] * 0x150 + param_1[0x19f]));
    }
    if (param_1[0x286] != 0) {
      LeaveCriticalSection(lpCriticalSection);
    }
  }
  return 0;
}

// 004B4AA0  Em0100::vf4C  size=218  [class]
void __fastcall Em0100::vf4C(int param_1)

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
  FUN_004a1eb0();
  uVar2 = FUN_004a26e0();
  *(undefined4 *)(param_1 + 0x1bd0) = uVar2;
  FUN_004a3340();
  if (*(int *)(param_1 + 0x1bd0) == 0) {
    fVar1 = *(float *)(param_1 + 0x1be0) + *(float *)(param_1 + 0x910);
  }
  else {
    fVar1 = 0.0;
  }
  *(float *)(param_1 + 0x1be0) = fVar1;
  if (*(short *)(param_1 + 0x1a8c) != 0) {
    FUN_004b0ce0();
  }
  iVar3 = FUN_00ac4770();
  if (iVar3 == 0) {
    FUN_004b0880();
  }
  FUN_004b3280();
  uVar2 = FUN_00a82d50();
  *(undefined4 *)(param_1 + 0x1a98) = uVar2;
  if ((*(uint *)(param_1 + 0xe4c) & 0x100000) == 0) {
    FUN_00ac81f0(param_1 + 0x40,&local_8,local_4);
  }
  else {
    FUN_00ac8270(param_1 + 0x40,&local_8,local_4);
  }
  if (local_8 == 0) {
    FUN_0049ff60();
    FUN_004ad800();
    return;
  }
  return;
}

// 00AAD5F0  Em0100::Em0100  size=370  [class]
undefined4 * __fastcall Em0100::Em0100(undefined4 *param_1)

{
  BehaviorEmBase::BehaviorEmBase();
  *param_1 = vftable;
  FUN_00a826e0();
  FUN_00a826e0();
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  FUN_004ec5c0();
  cEspControler::cEspControler();
  FUN_00904d60();
  FUN_00904d60();
  FUN_00904d60();
  FUN_00904d60();
  FUN_00904d60();
  FUN_00904d60();
  FUN_00904d60();
  FUN_00904d60();
  FUN_00904d60();
  FUN_00904d60();
  FUN_00904d60();
  cEspControler::cEspControler();
  FUN_00a826e0();
  FUN_00a826e0();
  FUN_00a826e0();
  return param_1;
}

// 00AAD770  Em0100::vf04  size=6  [class]
undefined * Em0100::vf04(void)

{
  return &DAT_01b34db0;
}

// 00AAD780  Em0100::vf20C  size=7  [class]
float10 Em0100::vf20C(void)

{
  return (float10)3.5;
}

// 00AAD790  Em0100::vf1DC  size=6  [class]
undefined4 Em0100::vf1DC(void)

{
  return 1;
}

// 00AAD7A0  Em0100::vf140  size=7  [class]
float10 Em0100::vf140(void)

{
  return (float10)5.0;
}

// 00AAD7B0  Em0100::vf144  size=7  [class]
float10 Em0100::vf144(void)

{
  return (float10)5.1;
}

// 00AAD7C0  FUN_00aad7c0  size=297  [callgraph]
void FUN_00aad7c0(void)

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
  cEnemyCautionStateManager::~cEnemyCautionStateManager();
  return;
}

// 00AB71B0  Em0100::destruct  size=30  [class]
undefined4 __thiscall Em0100::destruct(undefined4 param_1,byte param_2)

{
  FUN_00aad7c0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}


// src/unsorted/unit_00EAFA20.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EAFA20..00EB23E0, 20 functions

#include "types.h"

// 00EAFA20  FUN_00eafa20  size=285  [run]
void __thiscall FUN_00eafa20(int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  
  if (param_1[0x55f] == 8) {
    FUN_00dd5650(&DAT_016d2bf0,param_2);
    return;
  }
  param_1[param_1[0x54e] + 0x560] = param_2;
  piVar5 = param_1 + 0x55f;
  *piVar5 = *piVar5 + 1;
  if (*piVar5 != 0) {
    param_2 = 0;
    if (param_1[0x55f] != 0) {
      piVar5 = param_1 + 0x560;
      do {
        uVar4 = 0;
        uVar1 = 0;
        piVar3 = param_1;
        do {
          if (*piVar3 == *piVar5) {
            piVar3 = param_1 + uVar1 * 0xe2;
            if (param_1[uVar1 * 0xe2] != -1) {
              if (*(int *)(piVar3[1] + 4) != 0) {
                iVar6 = 8;
                do {
                  iVar2 = *(int *)(iVar6 + piVar3[1]);
                  if ((iVar2 != 0) && (iVar2 = piVar3[1] + iVar2, iVar2 != 0)) {
                    iVar2 = FUN_00f99270(iVar2);
                    if (iVar2 != 0) {
                      FUN_00fa3830(iVar2);
                    }
                    FUN_00f972f0();
                  }
                  uVar4 = uVar4 + 1;
                  iVar6 = iVar6 + 4;
                } while (uVar4 < *(uint *)(piVar3[1] + 4));
              }
              *piVar3 = -1;
              piVar3[1] = 0;
            }
            break;
          }
          uVar1 = uVar1 + 1;
          piVar3 = piVar3 + 0xe2;
        } while (uVar1 < 6);
        *piVar5 = -1;
        param_2 = param_2 + 1;
        piVar5 = piVar5 + 1;
      } while (param_2 < (uint)param_1[0x55f]);
    }
    param_1[0x55f] = 0;
  }
  return;
}

// 00EAFB40  FUN_00eafb40  size=146  [run]
void __fastcall FUN_00eafb40(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  iVar5 = 0x20;
  piVar6 = (int *)(param_1 + 0x15a4);
  do {
    iVar1 = *piVar6;
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d2c30);
    }
    else {
      FUN_00a0ba10(0);
      iVar2 = (int)*(short *)(iVar1 + 0x324);
      iVar3 = 0;
      if (0 < iVar2) {
        iVar4 = 0;
        do {
          if (((-1 < iVar3) && (iVar3 < iVar2)) &&
             (iVar2 = *(int *)(iVar1 + 800) + iVar4, iVar2 != 0)) {
            *(uint *)(iVar2 + 0x38) = *(uint *)(iVar2 + 0x38) & 0xfffffffe;
            *(undefined4 *)(iVar2 + 0x10) = 0x42c80000;
            *(undefined4 *)(iVar2 + 0x14) = 0;
            *(undefined4 *)(iVar2 + 0x18) = 0;
            *(undefined4 *)(iVar2 + 0x1c) = 0x3f800000;
          }
          iVar2 = (int)*(short *)(iVar1 + 0x324);
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + 0x70;
        } while (iVar3 < iVar2);
      }
    }
    piVar6 = piVar6 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return;
}

// 00EB0210  FUN_00eb0210  size=33  [run]
void FUN_00eb0210(void)

{
  int iVar1;
  
  iVar1 = FUN_00e6b900();
  if (iVar1 == 3) {
    FUN_00eab330();
    FUN_00eab5e0();
    return;
  }
  return;
}

// 00EB0240  FUN_00eb0240  size=191  [run]
void __thiscall FUN_00eb0240(int param_1,int *param_2,float param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  
  if ((param_2 != (int *)0x0) &&
     ((param_2[1] != *(int *)(param_1 + 0x158) || (*param_2 != *(int *)(param_1 + 0x154))))) {
    if (*(float *)(param_1 + 0x284) < 0.0) {
      param_3 = 1.0;
    }
    *(undefined4 *)(param_1 + 0x298) = 0;
    iVar1 = 0x21;
    *(float *)(param_1 + 0x284) = param_3;
    if (param_3 == 0.0) {
      *(undefined4 *)(param_1 + 0x284) = 0x3f800000;
      piVar2 = param_2;
      piVar4 = (int *)(param_1 + 0x1d8);
      for (; iVar1 != 0; iVar1 = iVar1 + -1) {
        *piVar4 = *piVar2;
        piVar2 = piVar2 + 1;
        piVar4 = piVar4 + 1;
      }
      piVar2 = param_2;
      piVar4 = (int *)(param_1 + 0xd0);
      for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 + -1) {
        *piVar4 = *piVar2;
        piVar2 = piVar2 + 1;
        piVar4 = piVar4 + 1;
      }
      piVar2 = (int *)(param_1 + 0x154);
      for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 + -1) {
        *piVar2 = *param_2;
        param_2 = param_2 + 1;
        piVar2 = piVar2 + 1;
      }
      return;
    }
    puVar3 = (undefined4 *)(param_1 + 0x154);
    puVar5 = (undefined4 *)(param_1 + 0xd0);
    for (; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
    piVar2 = (int *)(param_1 + 0x154);
    for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar2 = *param_2;
      param_2 = param_2 + 1;
      piVar2 = piVar2 + 1;
    }
    FUN_00eab260();
  }
  return;
}

// 00EB0300  FUN_00eb0300  size=329  [run]
void __thiscall FUN_00eb0300(int param_1,int param_2,undefined4 *param_3,float param_4)

{
  float *pfVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  *(undefined4 *)(param_1 + 0x284) = 0x41200000;
  *(float *)(param_1 + 0x298) = param_4;
  if (param_4 == 0.0) {
    *(undefined4 *)(param_1 + 0x284) = 0x3f800000;
  }
  if (param_2 != 0) {
    puVar3 = (undefined4 *)(param_2 + 0xc);
    puVar4 = (undefined4 *)(param_1 + 0x30);
    for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar3 = (undefined4 *)(param_2 + 0x34);
    puVar4 = (undefined4 *)(param_1 + 0x58);
    for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar3 = (undefined4 *)(param_2 + 0x5c);
    puVar4 = (undefined4 *)(param_1 + 0x80);
    for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  if (param_3 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(param_1 + 0x154);
    for (iVar2 = 0x21; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *param_3;
      param_3 = param_3 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  FUN_00a1ebc0();
  iVar2 = 3;
  pfVar1 = (float *)(param_1 + 0x30);
  do {
    iVar2 = iVar2 + -1;
    pfVar1[0x6d] = (pfVar1[0x4c] - *pfVar1) / *(float *)(param_1 + 0x284);
    pfVar1[0x6e] = (pfVar1[0x4d] - pfVar1[1]) / *(float *)(param_1 + 0x284);
    pfVar1[0x6f] = (pfVar1[0x4e] - pfVar1[2]) / *(float *)(param_1 + 0x284);
    pfVar1[0x70] = (pfVar1[0x4f] - pfVar1[3]) / *(float *)(param_1 + 0x284);
    pfVar1[0x71] = (pfVar1[0x50] - pfVar1[4]) / *(float *)(param_1 + 0x284);
    pfVar1[0x72] = (pfVar1[0x51] - pfVar1[5]) / *(float *)(param_1 + 0x284);
    pfVar1[0x73] = (pfVar1[0x52] - pfVar1[6]) / *(float *)(param_1 + 0x284);
    *(float *)(param_1 + 0x29c) = pfVar1[0x6d];
    *(float *)(param_1 + 0x2a0) = pfVar1[0x71];
    pfVar1 = pfVar1 + 10;
  } while (iVar2 != 0);
  return;
}

// 00EB0450  FUN_00eb0450  size=11  [run]
void __fastcall FUN_00eb0450(int param_1)

{
  *(undefined4 *)(param_1 + 0x2ac) = 0;
  return;
}

// 00EB0490  FUN_00eb0490  size=567  [run]
void __fastcall FUN_00eb0490(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  float local_58;
  float local_54;
  uint local_50;
  float local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  float local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  float local_18;
  undefined4 local_14;
  float local_10;
  float local_c;
  undefined4 local_8;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_58;
  local_50 = (uint)*(byte *)(param_1 + 0xe);
  local_44 = (uint)*(byte *)(param_1 + 0xd);
  local_40 = (uint)*(byte *)(param_1 + 0xc);
  local_4c = (float)(uint)*(byte *)(param_1 + 0xf);
  local_3c = (uint)*(byte *)(param_1 + 0x12);
  local_48 = (uint)*(byte *)(param_1 + 0x11);
  local_38 = (uint)*(byte *)(param_1 + 0x10);
  local_54 = (float)(uint)*(byte *)(param_1 + 0x13);
  if ((*(byte *)(param_1 + 8) & 2) == 0) {
    if (*(int *)(param_1 + 0x18) == 0) {
      local_58 = 1.0;
    }
    else {
      local_58 = (float)*(int *)(param_1 + 0x14) / (float)(*(int *)(param_1 + 0x18) + -1);
    }
  }
  else {
    local_58 = 1.0 - *(float *)(param_1 + 0x1c);
  }
  uVar1 = FUN_00fdbc60();
  local_50 = FUN_00fdbc60();
  local_58 = (float)FUN_00fdbc60();
  iVar2 = FUN_00fdbc60();
  if ((int)uVar1 < 0) {
    uVar1 = 0;
  }
  else if (0xff < (int)uVar1) {
    uVar1 = 0xff;
  }
  if ((int)local_50 < 0) {
    local_50 = 0;
  }
  else if (0xff < (int)local_50) {
    local_50 = 0xff;
  }
  if ((int)local_58 < 0) {
    local_58 = 0.0;
  }
  else if (0xff < (int)local_58) {
    local_58 = 3.57331e-43;
  }
  if (-1 < iVar2) {
    if (iVar2 < 0x100) {
      if (iVar2 == 0) goto LAB_00eb06b5;
    }
    else {
      iVar2 = 0xff;
    }
    uVar6 = local_50 & 0xff;
    uVar3 = (uint)local_58 & 0xff;
    local_54 = (float)FUN_00f98a90();
    local_4c = (float)(int)local_54;
    iVar4 = FUN_00f98aa0();
    local_54 = (float)iVar4;
    local_34 = 0xbf800000;
    local_30 = 0xbf800000;
    local_2c = 0;
    local_28 = local_4c;
    local_24 = 0xbf800000;
    local_1c = 0xbf800000;
    local_20 = 0;
    local_14 = 0;
    local_8 = 0;
    local_10 = local_4c;
    local_18 = local_54;
    local_c = local_54;
    iVar4 = Hw::cPrimF::cPrimF_2(&local_34,4);
    if (iVar4 != 0) {
      *(undefined4 *)(iVar4 + 0x78) = 5;
      *(uint *)(iVar4 + 0x7c) = ((uVar1 & 0xff | iVar2 << 8) << 8 | uVar6) << 8 | uVar3;
      *(undefined4 *)(iVar4 + 0x48) = 0;
      *(undefined4 *)(iVar4 + 0x44) = 0;
      *(undefined4 *)(iVar4 + 0x40) = 0;
      *(undefined4 *)(iVar4 + 0x3c) = 0;
      *(undefined4 *)(iVar4 + 0x34) = 0;
      *(undefined4 *)(iVar4 + 0x30) = 0;
      *(undefined4 *)(iVar4 + 0x2c) = 0;
      *(undefined4 *)(iVar4 + 0x28) = 0;
      *(undefined4 *)(iVar4 + 0x20) = 0;
      *(undefined4 *)(iVar4 + 0x1c) = 0;
      *(undefined4 *)(iVar4 + 0x18) = 0;
      *(undefined4 *)(iVar4 + 0x14) = 0;
      *(undefined4 *)(iVar4 + 0x4c) = 0x3f800000;
      *(undefined4 *)(iVar4 + 0x38) = 0x3f800000;
      *(undefined4 *)(iVar4 + 0x24) = 0x3f800000;
      *(undefined4 *)(iVar4 + 0x10) = 0x3f800000;
      uVar5 = FUN_00dd7ad0();
      FUN_009327a0(iVar4,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),uVar5);
    }
  }
LAB_00eb06b5:
  __security_check_cookie(local_4 ^ (uint)&local_58);
  return;
}

// 00EB0740  FUN_00eb0740  size=835  [run]
void __thiscall FUN_00eb0740(int param_1,int param_2)

{
  FUN_00ec2a50();
  *(undefined4 *)(param_1 + 0x448) = *(undefined4 *)(param_2 + 0x10);
  *(undefined1 *)(param_1 + 0x44c) = *(undefined1 *)(param_2 + 0x14);
  *(undefined1 *)(param_1 + 0x44d) = *(undefined1 *)(param_2 + 0x15);
  *(undefined1 *)(param_1 + 0x44e) = *(undefined1 *)(param_2 + 0x16);
  *(undefined1 *)(param_1 + 0x44f) = *(undefined1 *)(param_2 + 0x17);
  *(undefined1 *)(param_1 + 0x450) = *(undefined1 *)(param_2 + 0x18);
  *(undefined1 *)(param_1 + 0x451) = *(undefined1 *)(param_2 + 0x19);
  *(undefined1 *)(param_1 + 0x452) = *(undefined1 *)(param_2 + 0x1a);
  *(undefined1 *)(param_1 + 0x453) = *(undefined1 *)(param_2 + 0x1b);
  *(undefined1 *)(param_1 + 0x454) = *(undefined1 *)(param_2 + 0x1c);
  *(undefined1 *)(param_1 + 0x455) = *(undefined1 *)(param_2 + 0x1d);
  *(undefined1 *)(param_1 + 0x456) = *(undefined1 *)(param_2 + 0x1e);
  *(undefined1 *)(param_1 + 0x457) = *(undefined1 *)(param_2 + 0x1f);
  *(undefined1 *)(param_1 + 0x458) = *(undefined1 *)(param_2 + 0x20);
  *(undefined1 *)(param_1 + 0x459) = *(undefined1 *)(param_2 + 0x21);
  *(undefined1 *)(param_1 + 0x45a) = *(undefined1 *)(param_2 + 0x22);
  *(undefined1 *)(param_1 + 0x45b) = *(undefined1 *)(param_2 + 0x23);
  *(undefined4 *)(param_1 + 0x400) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x404) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x408) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x40c) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x410) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x414) = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x418) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x41c) = *(undefined4 *)(param_2 + 0x4c);
  *(undefined4 *)(param_1 + 0x420) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x424) = *(undefined4 *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 0x428) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x42c) = *(undefined4 *)(param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0x490) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 0x494) = *(undefined4 *)(param_2 + 100);
  *(undefined4 *)(param_1 + 0x498) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x49c) = *(undefined4 *)(param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0x4a0) = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 0x4a4) = *(undefined4 *)(param_2 + 0x74);
  *(undefined4 *)(param_1 + 0x4a8) = *(undefined4 *)(param_2 + 0x78);
  *(undefined4 *)(param_1 + 0x4ac) = *(undefined4 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x530) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x534) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x538) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x53c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x430) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined4 *)(param_1 + 0x434) = *(undefined4 *)(param_2 + 0xa4);
  *(undefined4 *)(param_1 + 0x438) = *(undefined4 *)(param_2 + 0xa8);
  *(undefined4 *)(param_1 + 0x43c) = *(undefined4 *)(param_2 + 0xac);
  *(undefined4 *)(param_1 + 0x440) = *(undefined4 *)(param_2 + 0xb0);
  *(undefined4 *)(param_1 + 0x444) = *(undefined4 *)(param_2 + 0xb4);
  *(undefined4 *)(param_1 + 0x4b0) = *(undefined4 *)(param_2 + 0x120);
  *(undefined4 *)(param_1 + 0x4b4) = *(undefined4 *)(param_2 + 0x124);
  *(undefined4 *)(param_1 + 0x4b8) = *(undefined4 *)(param_2 + 0x128);
  *(undefined4 *)(param_1 + 0x4bc) = *(undefined4 *)(param_2 + 300);
  *(undefined4 *)(param_1 + 0x4c0) = *(undefined4 *)(param_2 + 0x130);
  *(undefined4 *)(param_1 + 0x4c4) = *(undefined4 *)(param_2 + 0x134);
  *(undefined4 *)(param_1 + 0x4d0) = *(undefined4 *)(param_2 + 0x1a0);
  *(undefined4 *)(param_1 + 0x4d4) = *(undefined4 *)(param_2 + 0x1a4);
  *(undefined4 *)(param_1 + 0x4d8) = *(undefined4 *)(param_2 + 0x1a8);
  *(undefined4 *)(param_1 + 0x4dc) = *(undefined4 *)(param_2 + 0x1ac);
  *(undefined4 *)(param_1 + 0x4e0) = *(undefined4 *)(param_2 + 0x1b0);
  *(undefined4 *)(param_1 + 0x4e4) = *(undefined4 *)(param_2 + 0x1b4);
  *(undefined4 *)(param_1 + 0x4f0) = *(undefined4 *)(param_2 + 0x2a0);
  *(undefined4 *)(param_1 + 0x4f4) = *(undefined4 *)(param_2 + 0x2a4);
  *(undefined4 *)(param_1 + 0x4f8) = *(undefined4 *)(param_2 + 0x2a8);
  *(undefined4 *)(param_1 + 0x4fc) = *(undefined4 *)(param_2 + 0x2ac);
  *(undefined4 *)(param_1 + 0x500) = *(undefined4 *)(param_2 + 0x2b0);
  *(undefined4 *)(param_1 + 0x504) = *(undefined4 *)(param_2 + 0x2b4);
  *(undefined4 *)(param_1 + 0x510) = *(undefined4 *)(param_2 + 800);
  *(undefined4 *)(param_1 + 0x514) = *(undefined4 *)(param_2 + 0x324);
  *(undefined4 *)(param_1 + 0x518) = *(undefined4 *)(param_2 + 0x328);
  *(undefined4 *)(param_1 + 0x51c) = *(undefined4 *)(param_2 + 0x32c);
  *(undefined4 *)(param_1 + 0x520) = *(undefined4 *)(param_2 + 0x330);
  *(undefined4 *)(param_1 + 0x524) = *(undefined4 *)(param_2 + 0x334);
  *(undefined4 *)(param_1 + 0x46c) = *(undefined4 *)(param_2 + 0x8a0);
  *(undefined4 *)(param_1 + 0x470) = *(undefined4 *)(param_2 + 0x8a4);
  *(undefined4 *)(param_1 + 0x474) = *(undefined4 *)(param_2 + 0x8a8);
  *(undefined4 *)(param_1 + 0x478) = *(undefined4 *)(param_2 + 0x8ac);
  *(undefined4 *)(param_1 + 0x47c) = *(undefined4 *)(param_2 + 0x8b0);
  *(undefined4 *)(param_1 + 0x480) = *(undefined4 *)(param_2 + 0x8b4);
  *(undefined4 *)(param_1 + 0x484) = *(undefined4 *)(param_2 + 0x8b8);
  return;
}

// 00EB0A90  FUN_00eb0a90  size=1401  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_00eb0a90(int param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_44;
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  
  uVar3 = _DAT_018d5e50;
  if ((DAT_01edd614 & 1) == 0) {
    _DAT_01edd604 = 0x3f800000;
    DAT_01edd614 = DAT_01edd614 | 1;
    _DAT_01edd608 = 0x3f800000;
    _DAT_01edd60c = 0x3f800000;
    _DAT_01edd610 = 0x40000000;
  }
  if ((DAT_01edd614 & 2) == 0) {
    _DAT_01edd5f4 = 0;
    DAT_01edd614 = DAT_01edd614 | 2;
    _DAT_01edd5fc = 0;
    _DAT_01edd5f8 = 0x3f800000;
    _DAT_01edd600 = 0x3f800000;
  }
  if (param_2 != 0) {
    local_50 = *(float *)(param_1 + 0x40) * *(float *)(param_1 + 0x4c);
    local_4c = *(float *)(param_1 + 0x44) * *(float *)(param_1 + 0x4c);
    local_48 = *(float *)(param_1 + 0x48) * *(float *)(param_1 + 0x4c);
    local_44 = 0;
    local_24 = 1.0 - *(float *)(param_1 + 0x4c);
    local_30 = 0x3f800000;
    local_2c = 0x3f800000;
    local_28 = 0x3f800000;
    if (0.0 < local_50) {
      local_50 = 1.0 / local_50;
    }
    if (0.0 < local_4c) {
      local_4c = 1.0 / local_4c;
    }
    if (0.0 < local_48) {
      local_48 = 1.0 / local_48;
    }
    if (10.0 < local_50) {
      local_50 = 10.0;
    }
    if (10.0 < local_4c) {
      local_4c = 10.0;
    }
    if (10.0 < local_48) {
      local_48 = 10.0;
    }
    iVar4 = FUN_00f99540(0xba,&local_50,4);
    if (iVar4 == 0) {
      _DAT_01f13270 = local_50;
      _DAT_01f13274 = local_4c;
      _DAT_01f13278 = local_48;
      _DAT_01f1327c = local_44;
      FUN_00f99620(0xba,&DAT_01f13270,4);
    }
    iVar4 = FUN_00f99540(0xbb,&local_30,4);
    if (iVar4 == 0) {
      _DAT_01f13280 = local_30;
      _DAT_01f13284 = local_2c;
      _DAT_01f13288 = local_28;
      _DAT_01f1328c = local_24;
      FUN_00f99620(0xbb,&DAT_01f13280,4);
    }
    if (param_6 == 0) {
      uVar5 = 0;
      fVar1 = (float)param_5;
      if (param_5 < 0) {
        fVar1 = fVar1 + 4.2949673e+09;
      }
    }
    else {
      if (param_6 == 1) {
        fVar1 = (float)param_5;
        if (param_5 < 0) {
          fVar1 = fVar1 + 4.2949673e+09;
        }
        fVar2 = (float)param_4;
        if (param_4 < 0) {
          fVar2 = fVar2 + 4.2949673e+09;
        }
        FUN_00eae060(param_2,&DAT_01edd5f4,0,0,fVar2,fVar1,3,uVar3,uVar3,uVar3,uVar3,0);
        return;
      }
      if (param_6 != 2) goto LAB_00eb0dd7;
      uVar5 = 2;
      fVar1 = (float)param_5;
      if (param_5 < 0) {
        fVar1 = fVar1 + 4.2949673e+09;
      }
    }
    fVar2 = (float)param_4;
    if (param_4 < 0) {
      fVar2 = fVar2 + 4.2949673e+09;
    }
    FUN_00eae060(param_2,&DAT_01edd5f4,0,0,fVar2,fVar1,3,uVar3,uVar3,uVar3,uVar3,uVar5);
  }
LAB_00eb0dd7:
  FUN_00fa17a0(param_3,0,0,param_4,param_5);
  fVar1 = (float)param_5;
  if (param_5 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  fVar2 = (float)param_4;
  if (param_4 < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  FUN_00eae060(param_3,&DAT_01edd604,0,0,fVar2,fVar1,1,uVar3,uVar3,uVar3,uVar3,0);
  FUN_00fa17a0(param_3,0,0,param_4,param_5);
  local_38 = *(float *)(param_1 + 0x48) * *(float *)(param_1 + 0x4c);
  local_3c = *(float *)(param_1 + 0x44) * *(float *)(param_1 + 0x4c);
  local_40 = *(float *)(param_1 + 0x40) * *(float *)(param_1 + 0x4c);
  local_34 = 0;
  local_20 = 1.0;
  local_1c = 1.0;
  local_18 = 1.0;
  local_14 = 0;
  if (local_40 < 0.1) {
    local_40 = 0.1;
  }
  if (local_3c < 0.1) {
    local_3c = 0.1;
  }
  if (local_38 < 0.1) {
    local_38 = 0.1;
  }
  iVar4 = FUN_00f99540(0xb9,&local_40,4);
  if (iVar4 == 0) {
    DAT_01f13260 = local_40;
    DAT_01f13264 = local_3c;
    DAT_01f13268 = local_38;
    DAT_01f1326c = local_34;
    FUN_00f99620(0xb9,&DAT_01f13260,4);
  }
  iVar4 = FUN_00f99540(0xba,&local_20,4);
  if (iVar4 == 0) {
    _DAT_01f13270 = local_20;
    _DAT_01f13274 = local_1c;
    _DAT_01f13278 = local_18;
    _DAT_01f1327c = local_14;
    FUN_00f99620(0xba,&DAT_01f13270,4);
  }
  FUN_00eae060(param_3,&DAT_01edd604,0,0,fVar2,fVar1,0,uVar3,uVar3,uVar3,uVar3,0);
  FUN_00fa17a0(param_3,0,0,param_4,param_5);
  return;
}

// 00EB1010  FUN_00eb1010  size=245  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00eb1010(int param_1)

{
  undefined4 uVar1;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  float local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  float local_14;
  
  local_40 = *(undefined4 *)(param_1 + 0x30);
  local_3c = *(undefined4 *)(param_1 + 0x34);
  local_38 = *(undefined4 *)(param_1 + 0x38);
  local_34 = (_DAT_018d5df0 + _DAT_018d5df0) * *(float *)(param_1 + 0x3c);
  FUN_00f9ec50(&DAT_01edce68,&local_40,4);
  local_30 = *(undefined4 *)(param_1 + 0x60);
  local_2c = *(undefined4 *)(param_1 + 100);
  local_28 = *(undefined4 *)(param_1 + 0x68);
  local_24 = *(undefined4 *)(param_1 + 0x70);
  FUN_00f9ec50(&DAT_01edce80,&local_30,4);
  local_20 = *(undefined4 *)(param_1 + 0x50);
  local_1c = *(undefined4 *)(param_1 + 0x54);
  local_18 = *(undefined4 *)(param_1 + 0x58);
  local_14 = 1.0 / *(float *)(param_1 + 0x5c);
  FUN_00f9ec50(&DAT_01edce74,&local_20,4);
  uVar1 = FUN_00fa0740(0);
  FUN_00fa1d50(&DAT_01edce98,uVar1);
  local_44 = 0x3f800000;
  local_48 = _DAT_018d5df4;
  local_4c = _DAT_018d5df4;
  local_50 = _DAT_018d5df4;
  FUN_00f9ec50(&DAT_01edce8c,&local_50,4);
  return;
}

// 00EB1110  FUN_00eb1110  size=2265  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00eb1110(int param_1)

{
  uint uVar1;
  
  if ((DAT_01edd8d8 & 1) == 0) {
    DAT_01edd8d8 = DAT_01edd8d8 | 1;
    _DAT_01edd8b8 = "m_SunDir";
    _DAT_01edd8bc = 0xb;
    _DAT_01edd8c0 = 0x10;
    _DAT_01edd8c4 = 1;
    _DAT_01edd8c8 = 6;
    _DAT_01edd8cc = 0;
    _DAT_01edd8d0 = 0;
    DAT_01edd8d4 = 0;
  }
  uVar1 = DAT_01edd8d8;
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01edd8b8;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01edd8b8;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01edd8b8;
  if ((uVar1 & 2) == 0) {
    uVar1 = uVar1 | 2;
    _DAT_01edd898 = "m_SunCol";
    _DAT_01edd89c = 0xb;
    _DAT_01edd8a0 = 0x20;
    _DAT_01edd8a4 = 1;
    _DAT_01edd8a8 = 6;
    _DAT_01edd8ac = 0;
    _DAT_01edd8b0 = 0;
    DAT_01edd8b4 = 0;
    DAT_01edd8d8 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01edd898;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01edd898;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01edd898;
  if ((uVar1 & 4) == 0) {
    uVar1 = uVar1 | 4;
    _DAT_01edd878 = "m_Ray";
    _DAT_01edd87c = 0xb;
    _DAT_01edd880 = 0x30;
    _DAT_01edd884 = 1;
    _DAT_01edd888 = 6;
    _DAT_01edd88c = 0;
    _DAT_01edd890 = 0;
    DAT_01edd894 = 0;
    DAT_01edd8d8 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01edd878;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01edd878;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01edd878;
  if ((uVar1 & 8) == 0) {
    uVar1 = uVar1 | 8;
    _DAT_01edd858 = "m_Mie";
    _DAT_01edd85c = 0xb;
    _DAT_01edd860 = 0x40;
    _DAT_01edd864 = 1;
    _DAT_01edd868 = 6;
    _DAT_01edd86c = 0;
    _DAT_01edd870 = 0;
    DAT_01edd874 = 0;
    DAT_01edd8d8 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01edd858;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01edd858;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01edd858;
  if ((uVar1 & 0x10) == 0) {
    uVar1 = uVar1 | 0x10;
    _DAT_01edd838 = "m_Leap";
    _DAT_01edd83c = 7;
    _DAT_01edd840 = 0x50;
    _DAT_01edd844 = 1;
    _DAT_01edd848 = 6;
    _DAT_01edd84c = 0;
    _DAT_01edd850 = 0;
    DAT_01edd854 = 0;
    DAT_01edd8d8 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01edd838;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01edd838;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01edd838;
  if ((uVar1 & 0x20) == 0) {
    uVar1 = uVar1 | 0x20;
    _DAT_01edd818 = "m_bRay";
    _DAT_01edd81c = 6;
    _DAT_01edd820 = 0x54;
    _DAT_01edd824 = 1;
    _DAT_01edd828 = 6;
    _DAT_01edd82c = 0;
    _DAT_01edd830 = 0;
    DAT_01edd834 = 0;
    DAT_01edd8d8 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01edd818;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01edd818;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01edd818;
  if ((uVar1 & 0x40) == 0) {
    uVar1 = uVar1 | 0x40;
    _DAT_01edd7f8 = "m_bMie";
    _DAT_01edd7fc = 6;
    _DAT_01edd800 = 0x58;
    _DAT_01edd804 = 1;
    _DAT_01edd808 = 6;
    _DAT_01edd80c = 0;
    _DAT_01edd810 = 0;
    DAT_01edd814 = 0;
    DAT_01edd8d8 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01edd7f8;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01edd7f8;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01edd7f8;
  if (-1 < (char)uVar1) {
    uVar1 = uVar1 | 0x80;
    _DAT_01edd7d8 = "m_bUseShadowLight";
    _DAT_01edd7dc = 6;
    _DAT_01edd7e0 = 0x5c;
    _DAT_01edd7e4 = 1;
    _DAT_01edd7e8 = 6;
    _DAT_01edd7ec = 0;
    _DAT_01edd7f0 = 0;
    DAT_01edd7f4 = 0;
    DAT_01edd8d8 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01edd7d8;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01edd7d8;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01edd7d8;
  if ((uVar1 & 0x100) == 0) {
    uVar1 = uVar1 | 0x100;
    _DAT_01edd7b8 = "m_bUseAirScatter";
    _DAT_01edd7bc = 6;
    _DAT_01edd7c0 = 0x60;
    _DAT_01edd7c4 = 1;
    _DAT_01edd7c8 = 6;
    _DAT_01edd7cc = 0;
    _DAT_01edd7d0 = 0;
    DAT_01edd7d4 = 0;
    DAT_01edd8d8 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01edd7b8;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01edd7b8;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01edd7b8;
  if ((uVar1 & 0x200) == 0) {
    uVar1 = uVar1 | 0x200;
    _DAT_01edd798 = "m_Dist";
    _DAT_01edd79c = 7;
    _DAT_01edd7a0 = 100;
    _DAT_01edd7a4 = 1;
    _DAT_01edd7a8 = 6;
    _DAT_01edd7ac = 0;
    _DAT_01edd7b0 = 0;
    DAT_01edd7b4 = 0;
    DAT_01edd8d8 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01edd798;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01edd798;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01edd798;
  if ((uVar1 & 0x400) == 0) {
    uVar1 = uVar1 | 0x400;
    _DAT_01edd778 = "m_EarthRadius2";
    _DAT_01edd77c = 7;
    _DAT_01edd780 = 0x6c;
    _DAT_01edd784 = 1;
    _DAT_01edd788 = 6;
    _DAT_01edd78c = 0;
    _DAT_01edd790 = 0;
    DAT_01edd794 = 0;
    DAT_01edd8d8 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01edd778;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01edd778;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01edd778;
  if ((uVar1 & 0x800) == 0) {
    uVar1 = uVar1 | 0x800;
    _DAT_01edd758 = "m_AtomosHeight2";
    _DAT_01edd75c = 7;
    _DAT_01edd760 = 0x70;
    _DAT_01edd764 = 1;
    _DAT_01edd768 = 6;
    _DAT_01edd76c = 0;
    _DAT_01edd770 = 0;
    DAT_01edd774 = 0;
    DAT_01edd8d8 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01edd758;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01edd758;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01edd758;
  if ((uVar1 & 0x1000) == 0) {
    uVar1 = uVar1 | 0x1000;
    _DAT_01edd738 = "m_Rayleigh2";
    _DAT_01edd73c = 10;
    _DAT_01edd740 = 0x74;
    _DAT_01edd744 = 1;
    _DAT_01edd748 = 6;
    _DAT_01edd74c = 0;
    _DAT_01edd750 = 0;
    DAT_01edd754 = 0;
    DAT_01edd8d8 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01edd738;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01edd738;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01edd738;
  if ((uVar1 & 0x2000) == 0) {
    uVar1 = uVar1 | 0x2000;
    _DAT_01edd718 = "m_Ambient2";
    _DAT_01edd71c = 10;
    _DAT_01edd720 = 0x80;
    _DAT_01edd724 = 1;
    _DAT_01edd728 = 6;
    _DAT_01edd72c = 0;
    _DAT_01edd730 = 0;
    DAT_01edd734 = 0;
    DAT_01edd8d8 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01edd718;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01edd718;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01edd718;
  if ((uVar1 & 0x4000) == 0) {
    uVar1 = uVar1 | 0x4000;
    _DAT_01edd6f8 = "m_fG2";
    _DAT_01edd6fc = 7;
    _DAT_01edd700 = 0x8c;
    _DAT_01edd704 = 1;
    _DAT_01edd708 = 6;
    _DAT_01edd70c = 0;
    _DAT_01edd710 = 0;
    DAT_01edd714 = 0;
    DAT_01edd8d8 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01edd6f8;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01edd6f8;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01edd6f8;
  if ((uVar1 & 0x8000) == 0) {
    uVar1 = uVar1 | 0x8000;
    _DAT_01edd6d8 = "m_CloudyAmbient2";
    _DAT_01edd6dc = 10;
    _DAT_01edd6e0 = 0x90;
    _DAT_01edd6e4 = 1;
    _DAT_01edd6e8 = 6;
    _DAT_01edd6ec = 0;
    _DAT_01edd6f0 = 0;
    DAT_01edd6f4 = 0;
    DAT_01edd8d8 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01edd6d8;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01edd6d8;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01edd6d8;
  if ((uVar1 & 0x10000) == 0) {
    uVar1 = uVar1 | 0x10000;
    _DAT_01edd6b8 = "m_CloudPow";
    _DAT_01edd6bc = 7;
    _DAT_01edd6c0 = 0x9c;
    _DAT_01edd6c4 = 1;
    _DAT_01edd6c8 = 6;
    _DAT_01edd6cc = 0;
    _DAT_01edd6d0 = 0;
    DAT_01edd6d4 = 0;
    DAT_01edd8d8 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01edd6b8;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01edd6b8;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01edd6b8;
  if ((uVar1 & 0x20000) == 0) {
    uVar1 = uVar1 | 0x20000;
    _DAT_01edd698 = "m_CloudyMove";
    _DAT_01edd69c = 0xb;
    _DAT_01edd6a0 = 0xa0;
    _DAT_01edd6a4 = 1;
    _DAT_01edd6a8 = 6;
    _DAT_01edd6ac = 0;
    _DAT_01edd6b0 = 0;
    DAT_01edd6b4 = 0;
    DAT_01edd8d8 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01edd698;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01edd698;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01edd698;
  if ((uVar1 & 0x40000) == 0) {
    uVar1 = uVar1 | 0x40000;
    _DAT_01edd678 = "m_bUseEasyMode";
    _DAT_01edd67c = 6;
    _DAT_01edd680 = 0x68;
    _DAT_01edd684 = 1;
    _DAT_01edd688 = 6;
    _DAT_01edd68c = 0;
    _DAT_01edd690 = 0;
    DAT_01edd694 = 0;
    DAT_01edd8d8 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01edd678;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01edd678;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01edd678;
  if ((uVar1 & 0x80000) == 0) {
    uVar1 = uVar1 | 0x80000;
    _DAT_01edd658 = "m_Core";
    _DAT_01edd65c = 0xb;
    _DAT_01edd660 = 0xb0;
    _DAT_01edd664 = 1;
    _DAT_01edd668 = 6;
    _DAT_01edd66c = 0;
    _DAT_01edd670 = 0;
    DAT_01edd674 = 0;
    DAT_01edd8d8 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01edd658;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01edd658;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01edd658;
  if ((uVar1 & 0x100000) == 0) {
    uVar1 = uVar1 | 0x100000;
    _DAT_01edd638 = "m_FlareType";
    _DAT_01edd63c = 2;
    _DAT_01edd640 = 0xc0;
    _DAT_01edd644 = 1;
    _DAT_01edd648 = 6;
    _DAT_01edd64c = 0;
    _DAT_01edd650 = 0;
    DAT_01edd654 = 0;
    DAT_01edd8d8 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01edd638;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01edd638;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01edd638;
  if ((uVar1 & 0x200000) == 0) {
    DAT_01edd8d8 = uVar1 | 0x200000;
    _DAT_01edd618 = "m_RayMin";
    _DAT_01edd61c = 7;
    _DAT_01edd620 = 0xc4;
    _DAT_01edd624 = 1;
    _DAT_01edd628 = 6;
    _DAT_01edd62c = 0;
    _DAT_01edd630 = 0;
    _DAT_01edd634 = 0;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01edd618;
    *(undefined **)(param_1 + 0x14) = &DAT_01edd618;
    return;
  }
  *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01edd618;
  *(undefined **)(param_1 + 0x14) = &DAT_01edd618;
  return;
}

// 00EB1A70  FUN_00eb1a70  size=429  [run]
void __fastcall FUN_00eb1a70(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  int *piVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined2 *puVar8;
  uint local_44;
  int local_3c;
  undefined4 local_30;
  float local_2c;
  float local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  piVar3 = (int *)(param_1 + 8);
  local_3c = 8;
  do {
    if ((((piVar3[-2] != -1) && (piVar3[-1] != 0)) && (iVar2 = *piVar3, iVar2 != 0)) &&
       (local_44 = 0, *(int *)(iVar2 + 4) != 0)) {
      puVar8 = (undefined2 *)(iVar2 + 0x1a);
      do {
        iVar7 = (int)puVar8 + *(int *)(puVar8 + -5) + -10;
        uVar1 = puVar8[-1];
        uVar6 = 0xffffffff;
        puVar4 = DAT_01beb8c0;
        if (DAT_01beb8c0 == (undefined *)0x0) {
          puVar4 = &DAT_01bea1d0;
        }
        iVar5 = FUN_00d900c0(iVar7,puVar4 + 0x1b0);
        if (iVar5 != 0) {
          uVar6 = 0xffffff00;
        }
        FUN_00d90320(iVar7,uVar6);
        local_20 = *(undefined4 *)(iVar7 + 0x10);
        local_1c = *(undefined4 *)(iVar7 + 0x14);
        local_18 = *(undefined4 *)(iVar7 + 0x18);
        local_14 = *(undefined4 *)(iVar7 + 0x1c);
        FUN_00d9fa80(&local_30,&local_20);
        if (local_28 <= 1.0) {
          if (puVar8[-3] == -1) {
            FUN_00f96570(local_30,local_2c,uVar6,0xffffffff,"R%03x_%d",puVar8[-1],*puVar8);
          }
          else {
            FUN_00f96570(local_30,local_2c,uVar6,0xffffffff,"R%03x_%d(N%d)",puVar8[-1],*puVar8,
                         puVar8[-3]);
          }
          FUN_00f96570(local_30,local_2c + 16.0,uVar6,0xffffffff,"(R%03x)",uVar1);
        }
        local_44 = local_44 + 1;
        puVar8 = puVar8 + 0x30;
      } while (local_44 < *(uint *)(iVar2 + 4));
    }
    piVar3 = piVar3 + 3;
    local_3c = local_3c + -1;
  } while (local_3c != 0);
  return;
}

// 00EB1C20  FUN_00eb1c20  size=116  [run]
int * __thiscall FUN_00eb1c20(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  uint local_4;
  
  local_4 = 0;
  piVar3 = (int *)(param_1 + 8);
  do {
    if ((piVar3[-2] != -1) && (piVar3[-1] != 0)) {
      iVar1 = *piVar3;
      uVar5 = 0;
      if (*(int *)(iVar1 + 4) != 0) {
        piVar4 = (int *)(iVar1 + 0x10);
        do {
          iVar2 = FUN_00d900c0(*piVar4 + (int)piVar4,param_2);
          if (iVar2 != 0) {
            return piVar4;
          }
          uVar5 = uVar5 + 1;
          piVar4 = piVar4 + 0x18;
        } while (uVar5 < *(uint *)(iVar1 + 4));
      }
    }
    local_4 = local_4 + 1;
    piVar3 = piVar3 + 3;
  } while (local_4 < 8);
  return (int *)0x0;
}

// 00EB1CA0  FUN_00eb1ca0  size=426  [run]
void __fastcall FUN_00eb1ca0(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined2 *puVar7;
  uint local_44;
  int local_3c;
  undefined4 local_30;
  float local_2c;
  float local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (DAT_01be8e54 != 0) {
    piVar3 = (int *)(param_1 + 8);
    local_3c = 8;
    do {
      if ((((piVar3[-2] != -1) && (piVar3[-1] != 0)) && (iVar2 = *piVar3, iVar2 != 0)) &&
         (local_44 = 0, *(int *)(iVar2 + 4) != 0)) {
        puVar7 = (undefined2 *)(iVar2 + 0x1a);
        do {
          iVar6 = (int)puVar7 + *(int *)(puVar7 + -5) + -10;
          uVar1 = puVar7[-1];
          uVar5 = 0xffffffff;
          iVar4 = FUN_00d900c0(iVar6,DAT_01be8e54 + 0x40);
          if (iVar4 == 1) {
            uVar5 = 0xffffff00;
          }
          FUN_00d90320(iVar6,uVar5);
          local_20 = *(undefined4 *)(iVar6 + 0x10);
          local_1c = *(undefined4 *)(iVar6 + 0x14);
          local_18 = *(undefined4 *)(iVar6 + 0x18);
          local_14 = *(undefined4 *)(iVar6 + 0x1c);
          FUN_00d9fa80(&local_30,&local_20);
          if (local_28 <= 1.0) {
            if (puVar7[-3] == -1) {
              FUN_00f96570(local_30,local_2c,uVar5,0xffffffff,"R%03x_%d",puVar7[-1],*puVar7);
            }
            else {
              FUN_00f96570(local_30,local_2c,uVar5,0xffffffff,"R%03x_%d(N%d)",puVar7[-1],*puVar7,
                           puVar7[-3]);
            }
          }
          FUN_00f96570(local_30,local_2c + 16.0,uVar5,0xffffffff,"(R%03x)",uVar1);
          local_44 = local_44 + 1;
          puVar7 = puVar7 + 0x30;
        } while (local_44 < *(uint *)(iVar2 + 4));
      }
      piVar3 = piVar3 + 3;
      local_3c = local_3c + -1;
    } while (local_3c != 0);
  }
  return;
}

// 00EB1EB0  FUN_00eb1eb0  size=254  [run]
void __thiscall FUN_00eb1eb0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  float10 fVar4;
  float10 fVar5;
  
  FUN_00a28680(param_2);
  if (*(int *)(param_1 + 0x61c) != 0) {
    puVar3 = (undefined4 *)FUN_00a1ffe0();
    uVar1 = puVar3[1];
    uVar2 = puVar3[2];
    *(undefined4 *)(param_1 + 0x5d0) = *puVar3;
    *(undefined4 *)(param_1 + 0x5d4) = uVar1;
    *(undefined4 *)(param_1 + 0x5d8) = uVar2;
    *(undefined4 *)(param_1 + 0x5dc) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x5dc) = 0;
    return;
  }
  fVar4 = (float10)FUN_00fdee60();
  fVar5 = (float10)FUN_00fdee60();
  *(float *)(param_1 + 0x5d0) = (float)fVar5 * (float)fVar4;
  fVar5 = (float10)FUN_00fded30();
  *(float *)(param_1 + 0x5d8) = (float)fVar5 * (float)fVar4;
  fVar4 = (float10)FUN_00fded30();
  *(float *)(param_1 + 0x5d4) = (float)fVar4;
  return;
}

// 00EB1FB0  FUN_00eb1fb0  size=20  [run]
void FUN_00eb1fb0(int param_1)

{
  if (param_1 != 0) {
    FUN_00eb1eb0();
    return;
  }
  return;
}

// 00EB1FD0  FUN_00eb1fd0  size=718  [run]
void __thiscall
FUN_00eb1fd0(int param_1,float *param_2,undefined4 param_3,float *param_4,float *param_5,
            float *param_6,int param_7,int param_8,undefined4 param_9)

{
  float fVar1;
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
  
  fVar1 = param_2[2] * param_2[2] + *param_2 * *param_2 + param_2[1] * param_2[1];
  if (fVar1 < 0.0 == (fVar1 == 0.0)) {
    FUN_00ddf460(&local_40,param_2);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    local_40 = 0.0;
    local_3c = 1.0;
    local_38 = 0.0;
  }
  FUN_00f9ec50(param_1 + 0x34,&local_40,4);
  FUN_00f9ec50(param_1 + 0x40,param_3,4);
  local_30 = *param_4 + *param_5;
  local_2c = param_4[1] + param_5[1];
  local_28 = param_4[2] + param_5[2];
  local_24 = param_4[3] + param_5[3];
  local_20 = local_30 * 0.001;
  local_1c = local_2c * 0.001;
  local_18 = local_28 * 0.001;
  local_14 = local_24 * 0.001;
  FUN_00f9ec50(param_1 + 0x4c,&local_20,4);
  local_20 = (*param_4 * 3.0) / 50.265484;
  local_1c = (param_4[1] * 3.0) / 50.265484;
  local_18 = (param_4[2] * 3.0) / 50.265484;
  local_40 = local_20 * 0.001;
  local_3c = local_1c * 0.001;
  local_38 = local_18 * 0.001;
  local_34 = param_4[3];
  local_30 = local_40;
  local_2c = local_3c;
  local_28 = local_38;
  FUN_00f9ec50(param_1 + 0x58,&local_40,4);
  local_20 = *param_5 / 12.566371;
  local_1c = param_5[1] / 12.566371;
  local_18 = param_5[2] / 12.566371;
  local_40 = local_20 * 0.001;
  local_3c = local_1c * 0.001;
  local_38 = local_18 * 0.001;
  local_34 = param_5[3];
  local_30 = local_40;
  local_2c = local_3c;
  local_28 = local_38;
  FUN_00f9ec50(param_1 + 100,&local_40,4);
  local_40 = (1.0 - *param_6) * (1.0 - *param_6);
  local_3c = *param_6 * *param_6 + 1.0;
  local_38 = *param_6 * -2.0;
  local_34 = 1.0;
  FUN_00f9ec50(param_1 + 0x70,&local_40,4);
  if ((param_7 == 0) && (param_8 == 0)) {
    local_38 = 1.0;
    local_3c = 1.0;
    local_40 = 1.0;
  }
  else {
    local_38 = 0.0;
    local_3c = 0.0;
    local_40 = 0.0;
    if (param_7 != 0) {
      local_40 = 1.0;
    }
    if (param_8 != 0) {
      local_3c = 1.0;
    }
  }
  local_34 = (float)param_9;
  FUN_00f9ec50(param_1 + 0x7c,&local_40,4);
  return;
}

// 00EB22A0  FUN_00eb22a0  size=160  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00eb22a0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_00f99540(0xbd,param_1,4);
  if (iVar1 == 0) {
    _DAT_01f132a0 = *param_1;
    _DAT_01f132a4 = param_1[1];
    _DAT_01f132a8 = param_1[2];
    _DAT_01f132ac = param_1[3];
    FUN_00f99620(0xbd,&DAT_01f132a0,4);
  }
  iVar1 = FUN_00f99540(0xbe,param_2,4);
  if (iVar1 == 0) {
    _DAT_01f132b0 = *param_2;
    _DAT_01f132b4 = param_2[1];
    _DAT_01f132b8 = param_2[2];
    _DAT_01f132bc = param_2[3];
    FUN_00f99620(0xbe,&DAT_01f132b0,4);
  }
  return;
}

// 00EB2340  FUN_00eb2340  size=55  [run]
void __fastcall FUN_00eb2340(int param_1)

{
  if (DAT_01edd5dc < 0xc) {
    FUN_00fa1d50(param_1 + 0x94,0);
    return;
  }
  FUN_00fa1d50(param_1 + 0x94,DAT_01edd5d8 + 0x210);
  return;
}

// 00EB23E0  FUN_00eb23e0  size=87  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00eb23e0(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00f994a0(0xb8,param_1,4);
  if (iVar1 == 0) {
    _DAT_01f14050 = *param_1;
    _DAT_01f14054 = param_1[1];
    _DAT_01f14058 = param_1[2];
    _DAT_01f1405c = param_1[3];
    FUN_00f995e0(0xb8,&DAT_01f14050,4);
  }
  return 1;
}


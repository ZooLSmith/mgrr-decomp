// src/misc/esp23.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ED0920..00F390C0, 6 functions

#include "types.h"

// 00ED0920  esp23::vf00  size=54  [class]
undefined4 __thiscall esp23::vf00(undefined4 param_1,byte param_2)

{
  FUN_009de370();
  Spline<float>::Spline<float>_2();
  cEspBase::cEspBase_5();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00ED87B0  esp23::vf10  size=1  [class]
void esp23::vf10(void)

{
  return;
}

// 00EF14C0  esp23::vf14  size=103  [class]
void __fastcall esp23::vf14(int param_1)

{
  int extraout_ECX;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = param_1;
  if ((*(int *)(param_1 + 0x4e0) != 0) && (*(int *)(param_1 + 0x4e0) != 0)) {
    FUN_00dd48d0(*(int *)(param_1 + 0x4e0),0);
    *(undefined4 *)(param_1 + 0x4e0) = 0;
    iVar1 = extraout_ECX;
  }
  if (*(int *)(param_1 + 0x4b0) != 0) {
    uVar2 = 0x50000;
    iVar3 = param_1;
    FUN_00a7c940(param_1 + 0x4b4);
    FUN_009d5aa0(iVar1,uVar2,iVar3);
    *(undefined4 *)(param_1 + 0x4b0) = 0;
  }
  Spline<float>::Spline<float>_2();
  return;
}

// 00EF1530  FUN_00ef1530  size=929  [callgraph]
void __thiscall FUN_00ef1530(int param_1,int param_2)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  undefined4 uVar6;
  uint uVar7;
  float10 fVar8;
  undefined1 *puStack_f0;
  int *piStack_ec;
  undefined1 *puStack_e8;
  undefined1 *puStack_e4;
  int iStack_e0;
  undefined1 *puStack_dc;
  int iStack_d8;
  undefined *puStack_d4;
  undefined1 *puStack_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  float fStack_b4;
  uint uStack_b0;
  undefined1 auStack_ac [12];
  undefined1 local_a0 [32];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [56];
  uint uStack_40;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)&puStack_c4;
  puStack_d4 = (undefined *)0xef155d;
  iVar3 = FUN_00a81330();
  if (iVar3 != 0) {
    puStack_d4 = (undefined *)0xef1568;
    iVar4 = FUN_00a7c800();
    iVar3 = *(int *)(iVar4 + 0x360);
    if (*(int *)(iVar4 + 0x360) == 0) {
      iVar3 = iVar4;
    }
    iStack_e0 = *(short *)(iVar3 + 0x358) * 0x70;
    puStack_d4 = (undefined *)0x0;
    iStack_d8 = 0;
    puStack_dc = (undefined1 *)0x10;
    puStack_e4 = (undefined1 *)0xef1591;
    iVar3 = FUN_00dd29b0();
    *(int *)(param_1 + 0x4e0) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(iVar4 + 0x90) = *(undefined4 *)(param_1 + 0x1b0);
      *(undefined4 *)(iVar4 + 0x94) = *(undefined4 *)(param_1 + 0x1b4);
      *(undefined4 *)(iVar4 + 0x98) = *(undefined4 *)(param_1 + 0x1b8);
      *(undefined4 *)(iVar4 + 0x9c) = *(undefined4 *)(param_1 + 0x1bc);
      puStack_d4 = (undefined *)0xef15fd;
      iVar3 = FUN_00a81330();
      if (iVar3 != 0) {
        puStack_d4 = (undefined *)0xef1608;
        iVar3 = FUN_00a7c800();
        if (iVar3 != 0) {
          puStack_d4 = (undefined *)0xef1613;
          switchD_0080dbae::default();
        }
      }
      local_c0 = 0;
      puStack_dc = local_a0;
      local_bc = 0x3f800000;
      local_b8 = 0;
      if (*(int *)(param_1 + 0x50) == 0) {
        puStack_d4 = (undefined *)param_2;
        iStack_d8 = iVar4 + 0x10;
        iStack_e0 = 0xef1661;
        D3DXMatrixMultiply();
      }
      else {
        puStack_d4 = (undefined *)(*(int *)(param_1 + 0x50) + 0x10);
        iStack_d8 = iVar4 + 0x10;
        iStack_e0 = 0xef163c;
        D3DXMatrixMultiply();
        iStack_e0 = param_2;
        puStack_e8 = auStack_ac;
        piStack_ec = (int *)0xef164a;
        puStack_e4 = puStack_e8;
        D3DXMatrixMultiply();
      }
      piStack_ec = &local_b8;
      puStack_f0 = auStack_78;
      D3DXMatrixTranspose();
      D3DXVec3TransformNormal(&iStack_e0,&iStack_e0,auStack_80);
      puStack_f0 = (undefined1 *)
                   ((float)piStack_ec * (float)piStack_ec + (float)puStack_e8 * (float)puStack_e8 +
                   (float)puStack_e4 * (float)puStack_e4);
      if ((float)puStack_f0 < 0.0 == ((float)puStack_f0 == 0.0)) {
        FUN_00ddf460(&piStack_ec,&piStack_ec);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        piStack_ec = (int *)0x0;
        puStack_e8 = (undefined1 *)0x3f800000;
        puStack_e4 = (undefined1 *)0x0;
      }
      if (*(int *)(param_1 + 0x4e8) == 1) {
        uVar7 = 1;
      }
      else {
        uVar7 = (*(int *)(param_1 + 0x4e8) != 2) - 1 & 0xff;
      }
      iVar3 = *(int *)(iVar4 + 0x360);
      if (*(int *)(iVar4 + 0x360) == 0) {
        iVar3 = iVar4;
      }
      if ((undefined1 *)(int)*(short *)(iVar3 + 0x358) != (undefined1 *)0x0) {
        puStack_d4 = (undefined *)0x0;
        iStack_d8 = 0;
        puStack_f0 = (undefined1 *)(int)*(short *)(iVar3 + 0x358);
        do {
          FUN_00ec7140();
          uStack_b0 = 0;
          puStack_c4 = puStack_e4;
          local_c0 = iStack_e0;
          iVar3 = *(int *)(iVar4 + 0x360);
          if (*(int *)(iVar4 + 0x360) == 0) {
            iVar3 = iVar4;
          }
          local_bc = *(int *)(iVar3 + 0x350) + iStack_d8;
          local_b8 = iVar4;
          if ((*(int *)(param_1 + 0x58) != 0) &&
             (puVar5 = (uint *)(*(int *)(param_1 + 0x58) + 0x30), puVar5 != (uint *)0x0)) {
            uVar1 = *puVar5;
            if ((uVar1 + 0xf & 0xfffffff0) != uVar1) {
              uVar6 = FUN_00f59ed0(3);
              FUN_00dd5650(&DAT_016597b4,uVar6);
            }
            if (uVar1 != 0) {
              fStack_b4 = *(float *)(uVar1 + 0x10) + *(float *)(uVar1 + 0xc);
            }
          }
          puVar2 = puStack_d4;
          uStack_b0 = uVar7;
          FUN_00ec71f0(&stack0xffffff34);
          iStack_d8 = iStack_d8 + 0xb0;
          puStack_d4 = (undefined *)((int)puVar2 + 0x70);
          puStack_f0 = puStack_f0 + -1;
        } while (puStack_f0 != (undefined1 *)0x0);
      }
      fVar8 = (float10)FUN_00dde300(0,0x3f800000);
      *(float *)(param_1 + 0x534) = (float)(fVar8 * (float10)5.0 + (float10)1.0);
      if ((*(uint *)(param_1 + 0x51c) & 0x80000000) == 0) {
        uVar6 = 0x43960000;
      }
      else {
        uVar6 = 0x49127840;
      }
      *(undefined4 *)(param_1 + 0x538) = uVar6;
      puStack_f0 = (undefined1 *)
                   (*(float *)(iVar4 + 0x148) * *(float *)(iVar4 + 0x148) +
                   *(float *)(iVar4 + 0x140) * *(float *)(iVar4 + 0x140) +
                   *(float *)(iVar4 + 0x144) * *(float *)(iVar4 + 0x144));
      fVar8 = (float10)FUN_00fdef70();
      puStack_f0 = (undefined1 *)(float)fVar8;
      *(undefined1 **)(param_1 + 0x520) = puStack_f0;
      *(undefined4 *)(param_1 + 0x524) = 0;
      __security_check_cookie(uStack_40 ^ (uint)&puStack_f0);
      return;
    }
    puStack_d4 = &DAT_016dc064;
    puStack_dc = (undefined1 *)0xef15a6;
    iStack_d8 = param_1;
    FUN_009cca90();
  }
  __security_check_cookie(local_14 ^ (uint)&puStack_c4);
  return;
}

// 00F180F0  esp23::vf08  size=590  [class]
void __fastcall esp23::vf08(int param_1)

{
  int *piVar1;
  float *pfVar2;
  float fVar3;
  int iVar4;
  float local_64;
  undefined1 local_60 [48];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)&local_64;
  piVar1 = (int *)(param_1 + 0x3a0);
  FUN_00edfc20(piVar1);
  FUN_00f0b530(piVar1);
  if (*(int *)(param_1 + 0x50) == 0) {
    *piVar1 = 0;
  }
  else {
    *piVar1 = *(int *)(param_1 + 0x50) + 0x10;
  }
  FUN_00efb130(piVar1);
  FUN_00efbd40(piVar1);
  FUN_00efed20();
  ModelShaderJackModule::updateModule_4();
  FUN_00f107c0();
  if (((*(float *)(param_1 + 0x53c) == 0.0) || (*(int *)(param_1 + 900) == 1)) ||
     (*(float *)(param_1 + 0x118) <= *(float *)(param_1 + 0x53c))) {
    if ((*(uint *)(param_1 + 0x30) & 0xc0000000) == 0) {
      iVar4 = FUN_00a81330();
      if (iVar4 != 0) {
        iVar4 = FUN_00a7c800();
        if (iVar4 != 0) {
          *(undefined4 *)(iVar4 + 0x50) = *(undefined4 *)(param_1 + 0x180);
          *(undefined4 *)(iVar4 + 0x54) = *(undefined4 *)(param_1 + 0x184);
          *(undefined4 *)(iVar4 + 0x58) = *(undefined4 *)(param_1 + 0x188);
          *(undefined4 *)(iVar4 + 0x5c) = *(undefined4 *)(param_1 + 0x18c);
          *(undefined4 *)(iVar4 + 0x90) = *(undefined4 *)(param_1 + 0x1b0);
          *(undefined4 *)(iVar4 + 0x94) = *(undefined4 *)(param_1 + 0x1b4);
          *(undefined4 *)(iVar4 + 0x98) = *(undefined4 *)(param_1 + 0x1b8);
          *(undefined4 *)(iVar4 + 0x9c) = *(undefined4 *)(param_1 + 0x1bc);
          *(undefined4 *)(iVar4 + 0x70) = *(undefined4 *)(param_1 + 0x100);
          *(undefined4 *)(iVar4 + 0x74) = *(undefined4 *)(param_1 + 0x104);
          *(undefined4 *)(iVar4 + 0x78) = *(undefined4 *)(param_1 + 0x100);
          if (*(float *)(param_1 + 0x100) <= *(float *)(param_1 + 0x104)) {
            fVar3 = *(float *)(param_1 + 0x104);
          }
          else {
            fVar3 = *(float *)(param_1 + 0x100);
          }
          local_64 = *(float *)(param_1 + 0x524) * fVar3 + *(float *)(param_1 + 0x520);
          D3DXMatrixInverse(local_60,0,*(int *)(iVar4 + 0x334) + 0x10);
          pfVar2 = (float *)(iVar4 + 0x150);
          D3DXVec3TransformNormal(pfVar2,param_1 + 400,&stack0xffffff94);
          *pfVar2 = *pfVar2 + fStack_30;
          *(float *)(iVar4 + 0x154) = *(float *)(iVar4 + 0x154) + fStack_2c;
          *(float *)(iVar4 + 0x158) = fStack_28 + *(float *)(iVar4 + 0x158);
          *(float *)(iVar4 + 0x160) = local_64;
          *(float *)(iVar4 + 0x164) = local_64;
          *(float *)(iVar4 + 0x168) = local_64;
          *(undefined4 *)(iVar4 + 0x16c) = 0x3f800000;
          if (0.0 < *(float *)(param_1 + 0x538)) {
            FUN_00edafd0();
          }
        }
      }
    }
  }
  else if ((*(float *)(param_1 + 0x530) != 0.0) &&
          (*(float *)(param_1 + 0x530) < *(float *)(param_1 + 0x118))) {
    *(undefined4 *)(param_1 + 900) = 1;
    __security_check_cookie(local_14 ^ (uint)&local_64);
    return;
  }
  __security_check_cookie(local_14 ^ (uint)&local_64);
  return;
}

// 00F390C0  esp23::vf04  size=938  [class]
undefined4 __thiscall
esp23::vf04(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint *puVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  
  iVar3 = cEspModel::vf04(param_2,param_3,param_4);
  if (iVar3 != 0) {
    *(undefined4 *)(param_1 + 0x52c) = param_4;
    if ((*(int *)(param_1 + 0x58) != 0) &&
       (puVar4 = (undefined4 *)(*(int *)(param_1 + 0x58) + 0x80), puVar4 != (undefined4 *)0x0)) {
      psVar2 = (short *)*puVar4;
      if ((short *)((int)psVar2 + 0xfU & 0xfffffff0) != psVar2) {
        uVar5 = FUN_00f59ed0(8);
        FUN_00dd5650(&DAT_016597b4,uVar5);
      }
      if (psVar2 != (short *)0x0) {
        sVar1 = *psVar2;
        if (sVar1 == -1) {
          *(uint *)(param_1 + 0x51c) = *(uint *)(param_1 + 0x51c) | 0x80000000;
          *(undefined4 *)(param_1 + 0x388) = 0xbf800000;
          *(undefined4 *)(param_1 + 0x4fc) = 0;
        }
        else {
          if (sVar1 < -1) {
            *(float *)(param_1 + 0x530) = (float)-(int)sVar1;
          }
          else {
            *(float *)(param_1 + 0x4fc) = (float)(int)sVar1 * 0.001;
          }
          if (*(float *)(param_1 + 0x4fc) == 0.0) {
            *(undefined4 *)(param_1 + 0x4fc) = 0x4cbebc20;
          }
        }
        *(float *)(param_1 + 0x500) = (float)(int)psVar2[1] * 0.001;
        *(float *)(param_1 + 0x504) = (float)(int)psVar2[2] * -5e-05;
        *(float *)(param_1 + 0x508) = (float)(int)psVar2[3] * 0.002;
        *(float *)(param_1 + 0x50c) = (float)(int)psVar2[4] * 0.0015;
        *(float *)(param_1 + 0x510) = (float)(int)psVar2[5] * -0.045;
        *(float *)(param_1 + 0x514) =
             (float)(int)psVar2[6] * 0.001 + (float)(int)psVar2[6] * 0.001 + 0.8;
        *(float *)(param_1 + 0x518) = (float)(int)psVar2[7] * 0.002 + 0.8;
        *(int *)(param_1 + 0x4e4) = (int)(char)psVar2[8];
        *(float *)(param_1 + 0x4f0) = (float)(int)*(char *)((int)psVar2 + 0x11) * 0.01;
        *(int *)(param_1 + 0x4f4) = (char)psVar2[9] * 10;
        if ((char)psVar2[9] == -1) {
          *(uint *)(param_1 + 0x51c) = *(uint *)(param_1 + 0x51c) | 0x40000000;
        }
        else if ((char)psVar2[9] < -1) {
          FUN_009cca90(param_1,&DAT_016dbfd8);
          return 0;
        }
        *(float *)(param_1 + 0x4f8) = (float)(int)*(char *)((int)psVar2 + 0x13) * 0.01;
        iVar3 = (int)(char)psVar2[10];
        *(int *)(param_1 + 0x4e8) = iVar3;
        *(int *)(param_1 + 0x4ec) = (int)*(char *)((int)psVar2 + 0x15);
        if (*(float *)(param_1 + 0x518) == 0.0) {
          *(undefined4 *)(param_1 + 0x518) = 0x3f800000;
        }
        if (2 < iVar3) {
          FUN_009cca90(param_1,&DAT_016dbff8,iVar3);
          *(undefined4 *)(param_1 + 0x4e8) = 0;
        }
        if (((*(byte *)(param_1 + 0x30) & 0x10) == 0) &&
           (iVar3 = *(int *)(param_1 + 0x4e4), iVar3 != 0)) {
          if (iVar3 < 0xb) {
            if ((*(uint *)(param_1 + 0x6c) & 0x1000) != 0) {
              *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xffffefff;
            }
            uVar5 = *(undefined4 *)(param_1 + 0x4e4);
            uVar20 = 0;
            uVar19 = 0;
            uVar18 = 0;
            uVar17 = 0;
            uVar16 = 0;
            uVar15 = 0x3f800000;
            uVar14 = 0xff;
            uVar13 = 0;
            uVar8 = *(uint *)(param_1 + 0x6c) | 0x40;
            uVar12 = *(undefined4 *)(param_1 + 0x74);
            uVar11 = *(undefined4 *)(param_1 + 0x78);
            uVar10 = 0;
            uVar9 = 0;
            uVar6 = FUN_00a81330(0,0,uVar11,uVar12,uVar8,uVar5,param_4,0,0xff,0x3f800000,0,0,0,0,0);
            FUN_00f42780(*(undefined4 *)(param_1 + 0x84),*(undefined4 *)(param_1 + 0x60),
                         *(undefined4 *)(param_1 + 0x68),param_1 + 0x7c,uVar6,uVar9,uVar10,uVar11,
                         uVar12,uVar8,uVar5,param_4,uVar13,uVar14,uVar15,uVar16,uVar17,uVar18,uVar19
                         ,uVar20);
          }
          else {
            FUN_009cca90(param_1,&DAT_016dc01c,iVar3);
          }
        }
      }
    }
    if ((*(int *)(param_1 + 0x58) != 0) &&
       (puVar7 = (uint *)(*(int *)(param_1 + 0x58) + 0x70), puVar7 != (uint *)0x0)) {
      uVar8 = *puVar7;
      if ((uVar8 + 0xf & 0xfffffff0) != uVar8) {
        uVar5 = FUN_00f59ed0(7);
        FUN_00dd5650(&DAT_016597b4,uVar5);
      }
      if (uVar8 != 0) {
        *(undefined4 *)(param_1 + 0x4d0) = *(undefined4 *)(uVar8 + 0x30);
        *(undefined4 *)(param_1 + 0x4d4) = *(undefined4 *)(uVar8 + 0x34);
        *(undefined4 *)(param_1 + 0x4d8) = *(undefined4 *)(uVar8 + 0x38);
        *(undefined4 *)(param_1 + 0x4dc) = 0x3f800000;
        *(undefined4 *)(param_1 + 0x53c) = *(undefined4 *)(uVar8 + 0x2c);
      }
    }
    iVar3 = FUN_00f38a30(0);
    if (iVar3 != 0) {
      iVar3 = FUN_00ef1530(param_3);
      if (iVar3 == 0) {
        FUN_009cca90(param_1,&DAT_016dc038);
        return 0;
      }
      return 1;
    }
  }
  return 0;
}


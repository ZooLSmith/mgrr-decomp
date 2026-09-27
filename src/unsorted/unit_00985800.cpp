// src/unsorted/unit_00985800.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00985800..009863B0, 9 functions

#include "mgrr.h"

// 00985800  FUN_00985800  size=286  [run]
void __fastcall FUN_00985800(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  *(undefined4 *)(param_1 + 100) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  if (((byte)DAT_01bea060 & 0x40) != 0) {
    FUN_00984ce0(4);
    return;
  }
  iVar1 = FUN_00932720();
  if (0xcff < iVar1) {
    iVar1 = FUN_00932720();
    if (iVar1 < 0xe00) {
      FUN_00984ce0(1);
      FUN_00984ce0(2);
      FUN_00984ce0(3);
      FUN_00984ce0(4);
      FUN_00984ce0(5);
      FUN_00984ce0(0x13);
      return;
    }
  }
  iVar1 = FUN_00932720();
  if (iVar1 == 0x350) {
    FUN_00984ce0(1);
    FUN_00984ce0(2);
    FUN_00984ce0(3);
    FUN_00984ce0(4);
    FUN_00984ce0(5);
    FUN_00984ce0(0xf);
    return;
  }
  FUN_00984ce0(1);
  FUN_00984ce0(2);
  FUN_00984ce0(3);
  FUN_00984ce0(4);
  FUN_00984ce0(5);
  FUN_00984ce0(0xc);
  return;
}

// 00985920  FUN_00985920  size=989  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00985920(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  uint uStack_88;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  undefined4 auStack_50 [19];
  
  iVar5 = *(int *)(param_1 + 0xc);
  if (iVar5 == 0) {
    if (*(int *)(param_1 + 4) != 0) {
      *(undefined4 *)(param_1 + 4) = 0;
      uVar7 = cCodecCallAlarm::cCodecCallAlarm();
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
      *(undefined4 *)(param_1 + 0x18) = uVar7;
    }
  }
  else if (iVar5 == 1) {
    if (*(int *)(param_1 + 0x18) != 0) {
      iVar5 = FUN_00cb2660();
      if (iVar5 == 0) goto LAB_009859a6;
      uVar7 = *(undefined4 *)(param_1 + 8);
      iVar5 = *(int *)(param_1 + 0x18);
      *(undefined4 *)(iVar5 + 0x50) = 1;
      *(undefined4 *)(iVar5 + 0x54) = uVar7;
    }
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  }
  else if (iVar5 == 2) {
    if (*(int *)(param_1 + 0x18) != 0) {
      iVar5 = FUN_00cb6210();
      if (iVar5 == 0) goto LAB_009859a6;
      if (*(undefined4 **)(param_1 + 0x18) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 0x18))(1);
        *(undefined4 *)(param_1 + 0x18) = 0;
      }
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
LAB_009859a6:
  iVar5 = *(int *)(param_1 + 0x10);
  if (iVar5 == 0) {
    if (*(int *)(param_1 + 0x30) == 0) goto LAB_00985a14;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    if ((DAT_01bea094 & 0x2000) != 0) {
      if (*(int *)(param_1 + 0x28) == 0) {
        uVar7 = FUN_00cb6c50();
        *(undefined4 *)(param_1 + 0x28) = uVar7;
      }
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      goto LAB_00985a14;
    }
    uVar7 = FUN_009366d0();
    switch(uVar7) {
    default:
      goto switchD_00985af7_caseD_3;
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x3c:
    case 0x3d:
    case 0x3e:
      *(undefined4 *)(param_1 + 0x2c) = 1;
      FUN_00e5e1b0("bgm_Codec_enter");
    case 1:
      if (*(int *)(param_1 + 0x1c) == 0) {
        uVar7 = FUN_00d2b270();
        *(undefined4 *)(param_1 + 0x1c) = uVar7;
      }
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      break;
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x46:
    case 0x47:
    case 0x48:
      *(undefined4 *)(param_1 + 0x2c) = 1;
      FUN_00e5e1b0("bgm_Codec_enter");
    case 2:
      if (*(int *)(param_1 + 0x20) == 0) {
        uVar7 = FUN_00cb6400();
        *(undefined4 *)(param_1 + 0x20) = uVar7;
      }
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    }
  }
  else {
    if (iVar5 == 1) {
      if (((*(int *)(param_1 + 0x1c) != 0) && (iVar5 = FUN_00cb2660(), iVar5 != 0)) &&
         (iVar5 = FUN_00cb6940(), iVar5 != 0)) {
        *(undefined4 *)(param_1 + 0x10) = 2;
      }
      if ((*(int *)(param_1 + 0x20) != 0) && (iVar5 = FUN_00cb6520(), iVar5 != 0)) {
        *(undefined4 *)(param_1 + 0x10) = 2;
      }
      if ((*(int *)(param_1 + 0x28) != 0) && (iVar5 = FUN_00cb6d80(), iVar5 != 0)) {
        *(undefined4 *)(param_1 + 0x10) = 2;
      }
      goto LAB_00985a14;
    }
    if (iVar5 != 2) goto LAB_00985a14;
    if (*(int *)(param_1 + 0x2c) != 0) {
      FUN_00e5e1b0("bgm_Codec_exit");
      *(undefined4 *)(param_1 + 0x2c) = 0;
    }
    if (*(undefined4 **)(param_1 + 0x1c) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x1c))(1);
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
    if (*(undefined4 **)(param_1 + 0x20) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x20))(1);
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
    if (*(undefined4 **)(param_1 + 0x28) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x28))(1);
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
    *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x10) = 0;
switchD_00985af7_caseD_3:
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
LAB_00985a14:
  FUN_00984530();
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar6 = 0;
    do {
      iVar5 = *(int *)(param_1 + 0x58 + uVar6 * 4);
      if ((iVar5 != -1) && (iVar5 != *(int *)(param_1 + 0x48 + uVar6 * 4))) {
        FUN_00cb67d0(*(undefined4 *)(param_1 + 0x58 + uVar6 * 4));
        *(undefined4 *)(param_1 + 0x48 + uVar6 * 4) = *(undefined4 *)(param_1 + 0x58 + uVar6 * 4);
        *(undefined4 *)(param_1 + 0x58 + uVar6 * 4) = 0xffffffff;
        break;
      }
      bVar4 = (char)uVar6 + 1;
      uVar6 = (uint)bVar4;
    } while (bVar4 < 2);
    (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    uStack_88 = uStack_88 & 0xffffff00;
    piVar9 = (int *)(param_1 + 0x58);
    do {
      iVar5 = *piVar9;
      if ((iVar5 != -1) && (iVar5 != piVar9[-4])) {
        FUN_00cb6420(iVar5,uStack_88);
        piVar9[-4] = *piVar9;
        *piVar9 = -1;
      }
      iVar5 = DAT_01dc149c;
      bVar4 = (char)uStack_88 + 1;
      piVar9 = piVar9 + 1;
      uStack_88 = CONCAT31(uStack_88._1_3_,bVar4);
    } while (bVar4 < 2);
    iVar8 = (**(code **)(*DAT_01dc1490 + 0x84))();
    D3DXMatrixRotationY(auStack_50,*(float *)(iVar8 + 4) + 3.1415927);
    puVar10 = auStack_50;
    puVar11 = (undefined4 *)(*(int *)(param_1 + 0x20) + 0x70);
    for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar11 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar11 = puVar11 + 1;
    }
    fVar1 = *(float *)(iVar5 + 0x40);
    fVar2 = *(float *)(iVar5 + 0x44);
    fVar3 = *(float *)(iVar5 + 0x48);
    uVar7 = *(undefined4 *)(iVar5 + 0x4c);
    FUN_00a925a0(&fStack_70);
    FUN_00a92640(&fStack_60);
    iVar5 = *(int *)(param_1 + 0x20);
    fVar2 = _DAT_01b3791c * fStack_5c + _DAT_0188de00 * fStack_6c + fVar2 + _DAT_0188ddfc;
    fStack_68 = _DAT_0188de00 * fStack_68;
    fStack_58 = _DAT_01b3791c * fStack_58;
    *(float *)(iVar5 + 0x60) = fStack_60 * _DAT_01b3791c + fStack_70 * _DAT_0188de00 + fVar1;
    *(float *)(iVar5 + 100) = fVar2;
    *(float *)(iVar5 + 0x68) = fStack_58 + fStack_68 + fVar3;
    *(undefined4 *)(iVar5 + 0x6c) = uVar7;
    cCodecForcedLoadingDisp::cCodecForcedLoadingDisp();
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar6 = 0;
    while( true ) {
      iVar5 = *(int *)(param_1 + 0x58 + uVar6 * 4);
      if ((iVar5 != -1) && (iVar5 != *(int *)(param_1 + 0x48 + uVar6 * 4))) break;
      bVar4 = (char)uVar6 + 1;
      uVar6 = (uint)bVar4;
      if (1 < bVar4) {
        FUN_00ceb1d0();
        return;
      }
    }
    FUN_00cb6c70(*(undefined4 *)(param_1 + 0x58 + uVar6 * 4));
    *(undefined4 *)(param_1 + 0x48 + uVar6 * 4) = *(undefined4 *)(param_1 + 0x58 + uVar6 * 4);
    *(undefined4 *)(param_1 + 0x58 + uVar6 * 4) = 0xffffffff;
    FUN_00ceb1d0();
  }
  return;
}

// 00985D60  FUN_00985d60  size=62  [run]
void __thiscall FUN_00985d60(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  *(undefined4 *)(param_1 + 0x30) = 1;
  if (param_3 == 1) goto LAB_00985d8d;
  if (param_3 != 2) {
    if (*(int *)(param_1 + 0x48) == -1) {
      iVar1 = 0;
      goto LAB_00985d8d;
    }
    if (*(int *)(param_1 + 0x4c) != -1) goto LAB_00985d8d;
  }
  iVar1 = 1;
LAB_00985d8d:
  if (*(int *)(param_1 + 0x48 + iVar1 * 4) != param_2) {
    *(int *)(param_1 + 0x58 + iVar1 * 4) = param_2;
  }
  return;
}

// 00985DA0  FUN_00985da0  size=48  [run]
void __fastcall FUN_00985da0(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = 0;
  FUN_00cac480();
  iVar1 = FUN_00de4550("RadioModelParam.bxm",0);
  if (iVar1 != 0) {
    cXmlBinary::cXmlBinary_6(iVar1);
  }
  return;
}

// 00985DD0  FUN_00985dd0  size=34  [run]
undefined * FUN_00985dd0(int param_1)

{
  if (param_1 < 0x14) {
    return (&PTR_s_Raiden_0188dc28)[param_1 * 3];
  }
  return PTR_DAT_0188ddf0;
}

// 00985E00  FUN_00985e00  size=36  [run]
undefined4 FUN_00985e00(int param_1)

{
  if (param_1 < 0x14) {
    return *(undefined4 *)(&DAT_0188dc30 + param_1 * 0xc);
  }
  return DAT_0188ddf8;
}

// 00985E30  FUN_00985e30  size=660  [run]
void FUN_00985e30(int param_1,undefined4 *param_2)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  float local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  float local_9c;
  undefined4 local_98;
  undefined4 local_94;
  float local_90;
  float local_8c;
  float local_88;
  undefined1 local_50 [76];
  
  if (param_2 != (undefined4 *)0x0) {
    uVar3 = 2;
    if (param_1 != 0) {
      uVar3 = 3;
    }
    uVar6 = (uint)(param_1 != 0);
    local_a0 = *param_2;
    local_98 = param_2[2];
    local_94 = 0x3f800000;
    local_b0 = param_2[3];
    local_a8 = param_2[5];
    local_a4 = 0x3f800000;
    local_9c = (float)param_2[1] - 10000.0;
    local_ac = (float)param_2[4] - 10000.0;
    if ((DAT_01bea094 & 0x2000) == 0) {
      local_bc = 0x3f800000;
    }
    else {
      local_bc = 0xbf800000;
    }
    local_b4 = 0;
    local_b8 = 0;
    local_c0 = 0;
    iVar4 = FUN_00c12740(uVar3);
    thunk_FUN_00de01a0(&local_90,&local_a0,&local_b0,&local_c0);
    if ((DAT_01bea094 & 0x2000) != 0) {
      local_90 = local_90 * -1.0;
      local_8c = local_8c * -1.0;
      local_88 = local_88 * -1.0;
    }
    FUN_00ddccc0(local_50,0x3eb2b8c2,0x3f800000,0x3dcccccd,0x42480000,0,0);
    *(undefined4 *)(iVar4 + 0x90) = 0x3f800000;
    *(undefined4 *)(iVar4 + 0xa0) = 1;
    FUN_00de5f20(&local_a0);
    FUN_00de5fc0(&local_b0);
    FUN_00de5180(&local_90);
    FUN_00de5b30(local_50,0);
    FUN_00da3940();
    uVar3 = param_2[0x18];
    fVar1 = (float)param_2[0x19];
    iVar5 = uVar6 * 0x10;
    uVar2 = param_2[0x1a];
    iVar4 = uVar6 * 0xc;
    *(undefined4 *)(iVar5 + 0x1bdfd40) = param_2[0x10];
    *(undefined4 *)(iVar5 + 0x1bdfd44) = param_2[0x11];
    *(undefined4 *)(iVar5 + 0x1bdfd48) = param_2[0x12];
    *(undefined4 *)(iVar5 + 0x1bdfd4c) = param_2[0x13];
    *(undefined4 *)(uVar6 * 4 + 0x1bdfda0) = param_2[0x15];
    *(undefined4 *)(uVar6 * 4 + 0x1bdfda8) = param_2[0x14];
    *(undefined4 *)(iVar5 + 0x1bdfd80) = param_2[0xc];
    *(undefined4 *)(iVar5 + 0x1bdfd84) = param_2[0xd];
    *(undefined4 *)(iVar5 + 0x1bdfd88) = param_2[0xe];
    *(undefined4 *)(iVar5 + 0x1bdfd8c) = param_2[0xf];
    *(undefined4 *)(iVar4 + 0x1bdfd60) = param_2[6];
    *(undefined4 *)(iVar4 + 0x1bdfd64) = param_2[7];
    *(undefined4 *)(iVar4 + 0x1bdfd68) = param_2[8];
    *(undefined4 *)(iVar5 + 0x1bdfdb0) = uVar3;
    *(float *)(iVar5 + 0x1bdfdb4) = fVar1 - 10000.0;
    *(undefined4 *)(iVar5 + 0x1bdfdb8) = uVar2;
    *(undefined4 *)(iVar5 + 0x1bdfdbc) = local_a4;
    *(undefined4 *)(uVar6 * 4 + 0x1bdfdd0) = param_2[0x1c];
    *(undefined4 *)(uVar6 * 4 + 0x1bdfdd8) = param_2[0x1d];
    *(undefined4 *)(iVar5 + 0x1bdfde0) = param_2[0x20];
    *(undefined4 *)(iVar5 + 0x1bdfde4) = param_2[0x21];
    *(undefined4 *)(iVar5 + 0x1bdfde8) = param_2[0x22];
    *(undefined4 *)(iVar5 + 0x1bdfdec) = param_2[0x23];
  }
  return;
}

// 009860D0  FUN_009860d0  size=39  [run]
void FUN_009860d0(undefined4 param_1,uint param_2)

{
  if (param_2 < 0x14) {
    FUN_00985e30();
    return;
  }
  FUN_00985e30();
  return;
}

// 009863B0  FUN_009863b0  size=48  [run]
void __fastcall FUN_009863b0(int param_1)

{
  if ((*(int *)(param_1 + 0x18) != 0) && (*(int *)(param_1 + 0x20) != 0)) {
    FUN_00dd3d90(*(int *)(param_1 + 0x18),0);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}


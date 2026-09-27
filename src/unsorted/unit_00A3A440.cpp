// src/unsorted/unit_00A3A440.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A3A440..00A3D440, 12 functions

#include "mgrr.h"

// 00A3A440  FUN_00a3a440  size=119  [run]
void FUN_00a3a440(void)

{
  uint uVar1;
  undefined1 local_30 [48];
  
  uVar1 = 0;
  do {
    FUN_00f99920(uVar1,0xffffffff);
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x10);
  Hw::cRenderTargetInfo::cRenderTargetInfo();
  if (DAT_018a0570 == 0) {
    FUN_00f97580(0,DAT_01b83c18,1);
  }
  FUN_00f975c0(&DAT_01be0518);
  FUN_00fa5730(local_30,1);
  FUN_00f98b60(0xffffffff,0x3f800000,0,7);
  Hw::cRenderTargetInfo::cRenderTargetInfo_2();
  return;
}

// 00A3A4C0  FUN_00a3a4c0  size=687  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a3a4c0(undefined4 param_1,int *param_2)

{
  float fVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  float local_90;
  float local_8c;
  float local_88;
  undefined4 local_84;
  undefined4 local_78 [21];
  int local_24;
  
  puVar3 = &DAT_01f20668;
  puVar4 = local_78;
  for (iVar2 = 0x1a; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  iVar2 = *param_2;
  local_8c = *(float *)(&DAT_0189f714 + iVar2 * 4);
  if (DAT_0189f78c != 0) {
    local_8c = local_8c + 0.000390625;
  }
  local_88 = *(float *)(&DAT_0189f724 + iVar2 * 4);
  local_84 = 0;
  local_90 = 0.0;
  if (((byte)DAT_01bea084 & 0xc0) != 0) {
    switch(iVar2) {
    case 0:
      local_8c = _DAT_0189f714;
      if (DAT_0189f78c != 0) {
        local_8c = _DAT_0189f714 + 0.000390625;
      }
      local_88 = _DAT_0189f724 * 1.5;
      break;
    case 1:
      if (DAT_0189f78c == 0) {
        local_8c = _DAT_0189f714;
        local_88 = _DAT_0189f724;
      }
      else {
        local_8c = _DAT_0189f714 + 0.000390625;
        local_88 = _DAT_0189f724;
      }
      break;
    case 2:
      local_8c = _DAT_0189f718;
      if (DAT_0189f78c != 0) {
        local_8c = _DAT_0189f718 + 0.000390625;
      }
      local_88 = (_DAT_0189f728 + _DAT_0189f724) * 0.5;
      break;
    case 3:
      if (DAT_0189f78c == 0) {
        local_8c = _DAT_0189f718;
        local_88 = _DAT_0189f728;
      }
      else {
        local_8c = _DAT_0189f718 + 0.000390625;
        local_88 = _DAT_0189f728;
      }
    }
  }
  if (((((DAT_01be5524 == 0) && (DAT_01be5520 == 0)) && (DAT_01be5528 == 0)) && (DAT_01b84368 == 0))
     || (iVar2 = FUN_00e6b900(), iVar2 == 3)) {
    switch(*param_2) {
    case 0:
      fVar1 = 0.1;
      break;
    case 1:
    case 2:
    case 3:
      fVar1 = 0.25;
      break;
    default:
      goto switchD_00a3a63b_default;
    }
    local_8c = local_8c * fVar1;
  }
switchD_00a3a63b_default:
  if (local_24 != 0) {
    local_8c = local_8c * 1.025;
  }
  iVar2 = FUN_00f99540(0xb9,&local_90,4);
  if (iVar2 == 0) {
    DAT_01f13260 = local_90;
    DAT_01f13264 = local_8c;
    DAT_01f13268 = local_88;
    DAT_01f1326c = local_84;
    FUN_00f99620(0xb9,&DAT_01f13260,4);
  }
  local_88 = 1.0;
  local_90 = 1.0 / _DAT_0189f77c;
  local_8c = 0.0;
  iVar2 = FUN_00f99540(0xb8,&local_90,4);
  if (iVar2 == 0) {
    DAT_01f13250 = local_90;
    DAT_01f13254 = local_8c;
    DAT_01f13258 = local_88;
    DAT_01f1325c = local_84;
    FUN_00f99620(0xb8,&DAT_01f13250,4);
  }
  FUN_00a33bb0(*param_2);
  return;
}

// 00A3A790  FUN_00a3a790  size=463  [run]
/* WARNING: Removing unreachable block (ram,0x00a3a7d1) */
/* WARNING: Removing unreachable block (ram,0x00a3a7da) */

void FUN_00a3a790(char *param_1)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int local_94;
  int local_90;
  uint local_88;
  int local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70 [18];
  int local_28;
  int local_24;
  float local_20;
  
  if ((DAT_01bea084 & 0x100) != 0) {
    DAT_01bea084 = DAT_01bea084 & 0xfffffeff;
    puVar4 = &DAT_01f20668;
    puVar5 = local_70;
    for (iVar3 = 0x1a; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    Hw::cRenderTargetInfo::cRenderTargetInfo_5();
    FUN_00f98b60(0xff000000,0x3f800000,0,1);
    if (0.5625 <= local_20) {
      fVar1 = (float)local_28;
      if (local_28 < 0) {
        fVar1 = fVar1 + 4.2949673e+09;
      }
      local_84 = local_28;
      local_90 = (int)(longlong)ROUND(fVar1 * 0.0625 * 9.0);
      local_88 = (uint)(local_24 - local_90) >> 1;
      local_94 = local_24 + local_88 * -2;
      uVar2 = 0;
    }
    else {
      fVar1 = (float)local_24;
      if (local_24 < 0) {
        fVar1 = fVar1 + 4.2949673e+09;
      }
      local_88 = 0;
      local_90 = (int)(longlong)ROUND(fVar1 * 0.11111111 * 16.0);
      uVar2 = (uint)(local_28 - local_90) >> 1;
      local_84 = local_28 + uVar2 * -2;
      local_94 = local_24;
    }
    local_80 = 0x3f800000;
    local_7c = 0x3f800000;
    local_78 = 0x3f800000;
    local_74 = 0x3f800000;
    FUN_00eb76a0(&DAT_01be1e70,&local_80,(float)uVar2,(float)local_88,(float)local_84,
                 (float)local_94,0,1,1,0,0);
    DAT_01bea084 = DAT_01bea084 | 0x100;
  }
  FUN_00f98e50(0);
  if (*param_1 == '\x01') {
    FUN_00f98b50();
  }
  return;
}

// 00A3AB10  FUN_00a3ab10  size=525  [run]
void FUN_00a3ab10(void)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_20 = 0x3f800000;
  local_1c = 0x3f800000;
  local_18 = 0x3f800000;
  local_14 = 0x3f800000;
  FUN_009c5300(&local_20);
  iVar3 = FUN_00f98a90();
  iVar4 = FUN_00f98aa0();
  if (DAT_01b83d1c == 0) {
    iVar5 = FUN_00f98ed0(0);
    if ((DAT_01bea084 & 0x100) != 0) {
      iVar6 = FUN_00f99190();
      if (iVar6 == 0) {
        FUN_00a28210(&DAT_01be1e70,0,0,1);
        goto LAB_00a3ac1c;
      }
    }
    Hw::cRenderTargetInfo::cRenderTargetInfo_5();
LAB_00a3ac1c:
    FUN_00f98a50(iVar3,iVar4);
    if (iVar5 != 0) {
      if (DAT_01b83d18 != 0) {
        local_10 = 0x3f800000;
        local_c = 0x3f800000;
        local_8 = 0x3f800000;
        local_4 = 0x3f800000;
        FUN_00a20b10(iVar5,&local_10);
        FUN_00eb9070(&DAT_01be1e20,0);
        FUN_00fa26b0();
        iVar8 = 0;
        iVar7 = 0;
        iVar5 = FUN_00f98aa0();
        iVar6 = FUN_00f98a90();
        CRect::SetRect((CRect *)&DAT_01be0848,iVar6,iVar5,iVar7,iVar8);
        FUN_00a28210(&DAT_01be1e20,0,0,1);
        FUN_00fa18e0(&DAT_01be0848);
        FUN_00a33150();
        fVar1 = (float)iVar4;
        if (iVar4 < 0) {
          fVar1 = fVar1 + 4.2949673e+09;
        }
        fVar2 = (float)iVar3;
        if (iVar3 < 0) {
          fVar2 = fVar2 + 4.2949673e+09;
        }
        FUN_00eb76a0(&DAT_01be1e20,&local_20,0,0,fVar2,fVar1,0,1,1,0,0);
        return;
      }
      FUN_00a20b10(iVar5,&local_20);
    }
    return;
  }
  if ((DAT_01bea084 & 0x100) != 0) {
    iVar5 = FUN_00f99190();
    if (iVar5 == 0) {
      FUN_00a28210(&DAT_01be1e70,0,0,1);
      goto LAB_00a3ab7e;
    }
  }
  Hw::cRenderTargetInfo::cRenderTargetInfo_5();
LAB_00a3ab7e:
  FUN_00f98a50(iVar3,iVar4);
  fVar1 = (float)iVar4;
  if (iVar4 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  fVar2 = (float)iVar3;
  if (iVar3 < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  FUN_00eb76a0(&DAT_01be1e20,&local_20,0,0,fVar2,fVar1,0,1,1,0,0);
  return;
}

// 00A3AEC0  FUN_00a3aec0  size=172  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a3aec0(void)

{
  FUN_00f9aea0(1,7,0,0,&LAB_00a3a960,0);
  FUN_00f9aea0(1,7,0,0,FUN_00a2e730,0);
  if ((DAT_01b83cc0 == 0) && ((_DAT_01bea080 & 0x2000) == 0)) {
    FUN_00f9aea0(1,7,0,0,&LAB_00a2f510,0);
  }
  FUN_00f9aea0(1,7,0,0,&DAT_00a205b0,0);
  FUN_00f9aea0(1,0x5e,2,0,&LAB_00a20ae0,0);
  FUN_00f9aea0(1,0x62,0,0,FUN_00a3ab10,0);
  return;
}

// 00A3AF70  FUN_00a3af70  size=152  [run]
void FUN_00a3af70(void)

{
  char cVar1;
  uint uVar2;
  
  FUN_00f9aea0(1,8,0,0,&LAB_00a20540,0);
  uVar2 = 0;
  do {
    if (((&DAT_01eddb34)[uVar2 >> 5] & 0x80000000U >> ((byte)uVar2 & 0x1f)) != 0) {
      cVar1 = (byte)uVar2 + 9;
      FUN_00f9aea0(1,cVar1,0,0,&LAB_00a2f470,0);
      FUN_00f9aea0(1,cVar1,2,0,&DAT_00a20550,0);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 10);
  FUN_00f9aea0(1,0x13,2,0,&LAB_00a3a340,0);
  return;
}

// 00A3B090  FUN_00a3b090  size=357  [run]
void FUN_00a3b090(void)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  char *pcVar4;
  byte bVar5;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  DAT_01be74d4 = DAT_01be74d4 + 2;
  FUN_00f98b40();
  if ((DAT_01bea084 & 0x100) != 0) {
    iVar1 = FUN_00f99190();
    if (iVar1 == 0) {
      FUN_00a28210(&DAT_01be1e70,0,0,1);
      goto LAB_00a3b0cc;
    }
  }
  Hw::cRenderTargetInfo::cRenderTargetInfo_5();
LAB_00a3b0cc:
  uVar2 = FUN_00f98aa0();
  uVar2 = FUN_00f98a90(uVar2);
  FUN_00f98a50(uVar2);
  FUN_00f98cf0();
  local_10 = 0x3f800000;
  local_c = 0x3f800000;
  local_8 = 0x3f800000;
  local_4 = 0x3f800000;
  FUN_00eb76a0(&DAT_01be1880,&local_10,0,0,0x44a00000,0x44340000,0,1,0,0,0);
  bVar5 = (byte)DAT_01be74d4;
  if ((char)bVar5 < '\0') {
    bVar5 = bVar5 & 0x7f;
  }
  else {
    bVar5 = 0x7f - (bVar5 & 0x7f);
  }
  uVar3 = (uint)(byte)(bVar5 + 0x80);
  uVar3 = ((uVar3 | 0xffffff00) << 8 | uVar3) << 8 | uVar3;
  pcVar4 = (char *)FUN_00de8ab0();
  if ((pcVar4 == (char *)0x0) || (*pcVar4 == '\0')) {
    pcVar4 = "NOW LOADING...";
    uVar2 = 0x441d8000;
  }
  else {
    FUN_00f963b0(0x44430000,0x441d8000,0x41800000,uVar3,"NOW LOADING...");
    uVar2 = 0x44228000;
  }
  FUN_00f963b0(0x44430000,uVar2,0x41800000,uVar3,pcVar4);
  FUN_00f98b50();
  return;
}

// 00A3B200  FUN_00a3b200  size=3403  [run]
undefined4 FUN_00a3b200(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_4;
  
  FUN_00dd5650("--- shadersetting.bxm read ---");
  iVar1 = FUN_00dec4d0(&local_4,"shadersetting.bxm",&DAT_01b7f3f0,0x1000,0);
  if (iVar1 != 0) {
    FUN_00dd5650("--- shaderTblCreate ---");
    cXmlBinary::cXmlBinary_42(local_4);
    FUN_00dd5650("--- shadersetting.bxm free ---");
    FUN_00dd48d0(local_4,0);
    FUN_00dd5650("--- ShaderSign.dat read ---");
    iVar1 = FUN_00dec4d0(&local_4,"ShaderSign.dat",&DAT_01b7f3f0,0x1000,0);
    if (iVar1 != 0) {
      FUN_00dd5650("--- createShaderSetting ---");
      FUN_00fb73d0(local_4,&DAT_01b7f3f0);
      FUN_00dd5650("--- shader.dat read ---");
      iVar1 = FUN_00dec4d0(&local_4,"shader.dat",&DAT_01b7f3f0,0x1000,0);
      if (iVar1 != 0) {
        FUN_00dd5650("--- setData ---");
        FUN_00de3540(local_4,0);
        FUN_00dd5650("--- graphic.bxm read ---");
        iVar1 = FUN_00dec4d0(&local_4,"graphic.bxm",&DAT_01b7f3f0,0x1000,0);
        if (iVar1 != 0) {
          FUN_00dd5650("--- autoShaderDataSet ---");
          cXmlBinary::cXmlBinary_107(local_4);
          FUN_00dd5650("--- graphic.bxm free ---");
          FUN_00dd48d0(local_4,0);
          FUN_00dd5650("--- StartupShaderDataSet2 ---");
          FUN_00a31620();
          FUN_00dd5650("--- g_ShaderSettingManager startup ---");
          iVar1 = FUN_00fca1a0();
          if (iVar1 == 0) goto LAB_00a3bed9;
          FUN_00dd5650("--- otherShader startup ---");
          uVar2 = FUN_00fb9400("gbufferev_xxxxx");
          uVar3 = FUN_00fb93a0("ModelShaderZMapNki");
          iVar1 = FUN_00f901a0(uVar3,uVar2);
          if (iVar1 != 0) {
            uVar2 = FUN_00fb9400("gbufferev_xxxxx");
            uVar3 = FUN_00fb93a0("ModelShaderZMapScrNki");
            iVar1 = FUN_00f90100(uVar3,uVar2);
            if (iVar1 != 0) {
              uVar2 = FUN_00fb9400("gbufferev_xxxxx");
              uVar3 = FUN_00fb93a0("ModelShaderZMapScrNki_I");
              iVar1 = FUN_00f90130(uVar3,uVar2);
              if (iVar1 != 0) {
                uVar2 = FUN_00de4500("ModelShaderVelocityWeight.pso");
                uVar3 = FUN_00de4500("ModelShaderVelocityWeight.vso");
                FUN_00f92c50(uVar3,uVar2);
                uVar2 = FUN_00de4500("ModelShaderVelocityWeight.pso");
                uVar3 = FUN_00de4500("ModelShaderVelocityFixed.vso");
                FUN_00f92810(uVar3,uVar2);
                uVar2 = FUN_00de4500("ModelShaderVelvet.pso");
                uVar3 = FUN_00de4500("vs_vw.vso");
                FUN_00fb1c80(uVar3,uVar2);
                uVar2 = FUN_00de4500("ModelShaderVelvet.pso");
                uVar3 = FUN_00de4500("vs_v.vso");
                FUN_00fb1c80(uVar3,uVar2);
                uVar2 = FUN_00de4500("ModelShaderStealth.pso");
                uVar3 = FUN_00de4500("vs_s1wp.vso");
                FUN_00fbef60(uVar3,uVar2);
                uVar2 = FUN_00de4500("ModelShaderStealth.pso");
                uVar3 = FUN_00de4500("vs_s1p.vso");
                FUN_00fbef60(uVar3,uVar2);
                FUN_00dd5650("--- zmap startup ---");
                FUN_00a22240();
                FUN_00dd5650("--- filter startup ---");
                FUN_00fd0d20();
                iVar1 = FUN_00fbda70();
                if (iVar1 == 0) {
                  FUN_00dd5650(&DAT_0165e568);
                }
                uVar2 = FUN_00de4500("FilterShaderKuwahara.pso");
                uVar3 = FUN_00de4500("ModelShaderBlur.vso");
                FUN_00fd0ec0(uVar3,uVar2);
                uVar2 = FUN_00de4500("FilterShaderKuwahara_x2.pso");
                uVar3 = FUN_00de4500("ModelShaderBlur.vso");
                FUN_00fd0ec0(uVar3,uVar2);
                uVar2 = FUN_00de4500("FilterShaderKuwahara_x3.pso");
                uVar3 = FUN_00de4500("ModelShaderBlur.vso");
                FUN_00fd0ec0(uVar3,uVar2);
                uVar2 = FUN_00de4500("FilterShaderKuwahara_x4.pso");
                uVar3 = FUN_00de4500("ModelShaderBlur.vso");
                FUN_00fd0ec0(uVar3,uVar2);
                FUN_00fbdd00();
                uVar2 = FUN_00de4500("FilterShaderSSAO.pso");
                uVar3 = FUN_00de4500("ModelShaderBlur.vso");
                FUN_00fbdda0(uVar3,uVar2);
                uVar2 = FUN_00de4500("FilterShaderSSAO2.pso");
                uVar3 = FUN_00de4500("ModelShaderBlur.vso");
                FUN_00fbdf10(uVar3,uVar2);
                FUN_00fbe180();
                FUN_00fbe220();
                FUN_00fbe2c0();
                uVar2 = FUN_00de4500("FilterShaderOilPaint.pso");
                uVar3 = FUN_00de4500("ModelShaderBlur.vso");
                FUN_00fd0ba0(uVar3,uVar2);
                uVar2 = FUN_00de4500("FilterShaderWatercolor.pso");
                uVar3 = FUN_00de4500("ModelShaderBlur.vso");
                FUN_00fd0c90(uVar3,uVar2);
                FUN_00fd10a0();
                FUN_00a22620();
                FUN_00fb1070();
                FUN_00fb10b0();
                FUN_00fbb290();
                FUN_00fbe860();
                FUN_00fbe8f0();
                FUN_00fbe9f0();
                FUN_00fbec80();
                FUN_00fbfb50();
                FUN_00fbfd10();
                FUN_00fbfe40();
                FUN_00a227c0();
                uVar2 = FUN_00de4500("LightVolume.pso");
                uVar3 = FUN_00de4500("LightVolume.vso");
                FUN_00fc0a10(uVar3,uVar2);
                uVar2 = FUN_00de4500("LightVolumeLow.pso");
                uVar3 = FUN_00de4500("LightVolume.vso");
                FUN_00fba8b0(uVar3,uVar2);
                uVar2 = FUN_00de4500("LightVolumeSpec.pso");
                uVar3 = FUN_00de4500("LightVolume.vso");
                FUN_00fc0a10(uVar3,uVar2);
                uVar2 = FUN_00de4500("LightVolumeSpot.pso");
                uVar3 = FUN_00de4500("LightVolume.vso");
                FUN_00fc0b80(uVar3,uVar2);
                uVar2 = FUN_00de4500("LightVolumeSimpleSpot.pso");
                uVar3 = FUN_00de4500("LightVolume.vso");
                FUN_00fc0ca0(uVar3,uVar2);
                uVar2 = FUN_00de4500("LightVolumeSpotLow.pso");
                uVar3 = FUN_00de4500("LightVolume.vso");
                FUN_00fbaa50(uVar3,uVar2);
                uVar2 = FUN_00de4500("LightVolumeSpotSpec.pso");
                uVar3 = FUN_00de4500("LightVolume.vso");
                FUN_00fc0b80(uVar3,uVar2);
                uVar2 = FUN_00de4500("LightVolumeCylinder.pso");
                uVar3 = FUN_00de4500("LightVolume.vso");
                FUN_00fc0d70(uVar3,uVar2);
                uVar2 = FUN_00de4500("LightVolumeCylinderLow.pso");
                uVar3 = FUN_00de4500("LightVolume.vso");
                FUN_00fbac20(uVar3,uVar2);
                uVar2 = FUN_00de4500("LightVolumeCylinderSpec.pso");
                uVar3 = FUN_00de4500("LightVolume.vso");
                FUN_00fc0d70(uVar3,uVar2);
                uVar2 = FUN_00de4500("ModelShaderZMapScr.pso");
                uVar3 = FUN_00de4500("LightVolume.vso");
                FUN_00fb0f00(uVar3,uVar2);
                uVar2 = FUN_00de4500("DeferredDirLight.pso");
                uVar3 = FUN_00de4500("DeferredDirLight.vso");
                FUN_00fbefe0(uVar3,uVar2);
                uVar2 = FUN_00de4500("DeferredSpotLight.pso");
                uVar3 = FUN_00de4500("DeferredDirLight.vso");
                FUN_00fbefe0(uVar3,uVar2);
                uVar2 = FUN_00de4500("LightVolumeEv.pso");
                uVar3 = FUN_00de4500("LightVolume.vso");
                FUN_00fc0a10(uVar3,uVar2);
                uVar2 = FUN_00de4500("LightVolumeEvLow.pso");
                uVar3 = FUN_00de4500("LightVolume.vso");
                FUN_00fba8b0(uVar3,uVar2);
                uVar2 = FUN_00de4500("LightVolumeEvSpec.pso");
                uVar3 = FUN_00de4500("LightVolume.vso");
                FUN_00fc0a10(uVar3,uVar2);
                uVar2 = FUN_00de4500("LightVolumeEvSpot.pso");
                uVar3 = FUN_00de4500("LightVolume.vso");
                FUN_00fc0ca0(uVar3,uVar2);
                uVar2 = FUN_00de4500("LightVolumeSimpleEvSpot.pso");
                uVar3 = FUN_00de4500("LightVolume.vso");
                FUN_00fc0ca0(uVar3,uVar2);
                uVar2 = FUN_00de4500("LightVolumeEvSpotLow.pso");
                uVar3 = FUN_00de4500("LightVolume.vso");
                FUN_00fbaa50(uVar3,uVar2);
                uVar2 = FUN_00de4500("LightVolumeEvSpotSpec.pso");
                uVar3 = FUN_00de4500("LightVolume.vso");
                FUN_00fc0b80(uVar3,uVar2);
                uVar2 = FUN_00de4500("LightVolumeEvCylinder.pso");
                uVar3 = FUN_00de4500("LightVolume.vso");
                FUN_00fc0d70(uVar3,uVar2);
                uVar2 = FUN_00de4500("LightVolumeEvCylinderLow.pso");
                uVar3 = FUN_00de4500("LightVolume.vso");
                FUN_00fbac20(uVar3,uVar2);
                uVar2 = FUN_00de4500("LightVolumeEvCylinderSpec.pso");
                uVar3 = FUN_00de4500("LightVolume.vso");
                FUN_00fc0d70(uVar3,uVar2);
                uVar2 = FUN_00de4500("LightVolumeEvShadow.pso");
                uVar3 = FUN_00de4500("LightVolume.vso");
                FUN_00fc0a10(uVar3,uVar2);
                uVar2 = FUN_00de4500("LightVolumeEvLowShadow.pso");
                uVar3 = FUN_00de4500("LightVolume.vso");
                FUN_00fba8b0(uVar3,uVar2);
                uVar2 = FUN_00de4500("LightVolumeEvSpecShadow.pso");
                uVar3 = FUN_00de4500("LightVolume.vso");
                FUN_00fc0a10(uVar3,uVar2);
                uVar2 = FUN_00de4500("LightVolumeEvSpotShadow.pso");
                uVar3 = FUN_00de4500("LightVolume.vso");
                FUN_00fc0ca0(uVar3,uVar2);
                uVar2 = FUN_00de4500("LightVolumeEvSpotLowShadow.pso");
                uVar3 = FUN_00de4500("LightVolume.vso");
                FUN_00fbaa50(uVar3,uVar2);
                uVar2 = FUN_00de4500("LightVolumeEvSpotSpecShadow.pso");
                uVar3 = FUN_00de4500("LightVolume.vso");
                FUN_00fc0b80(uVar3,uVar2);
                uVar2 = FUN_00de4500("LightVolumeEvCylinderShadow.pso");
                uVar3 = FUN_00de4500("LightVolume.vso");
                FUN_00fc0d70(uVar3,uVar2);
                uVar2 = FUN_00de4500("LightVolumeEvCylinderLowShadow.pso");
                uVar3 = FUN_00de4500("LightVolume.vso");
                FUN_00fbac20(uVar3,uVar2);
                uVar2 = FUN_00de4500("LightVolumeEvCylinderSpecShadow.pso");
                uVar3 = FUN_00de4500("LightVolume.vso");
                FUN_00fc0d70(uVar3,uVar2);
                uVar2 = FUN_00de4500("DeferredDirLightEv.pso");
                uVar3 = FUN_00de4500("DeferredDirLight.vso");
                FUN_00fbf310(uVar3,uVar2);
                uVar2 = FUN_00de4500("DeferredComposition.pso");
                uVar3 = FUN_00de4500("DeferredComposition.vso");
                FUN_00fbf7c0(uVar3,uVar2);
                FUN_00fd0740();
                FUN_00fd0830();
                FUN_00fd0910();
                FUN_00fd0b00();
                uVar2 = FUN_00de4500("ModelShaderWeightDepth.pso");
                uVar3 = FUN_00de4500("ModelShaderWeightDepth.vso");
                iVar1 = FUN_00f901d0(uVar3,uVar2);
                if (iVar1 != 0) {
                  uVar2 = FUN_00de4500("ModelShaderFixedDepth.pso");
                  uVar3 = FUN_00de4500("ModelShaderFixedDepth.vso");
                  iVar1 = FUN_00f90160(uVar3,uVar2);
                  if (iVar1 != 0) {
                    FUN_00dd5650("--- shadow startup ---");
                    FUN_00a223e0();
                    FUN_00dd5650("--- filter startup ---");
                    iVar1 = FUN_00eb5ea0();
                    if (iVar1 == 0) {
                      FUN_00dd5650(&DAT_01660ef8);
                    }
                    iVar1 = FUN_00eb5f70();
                    if (iVar1 == 0) {
                      FUN_00dd5650(&DAT_01660ef8);
                    }
                    iVar1 = FUN_00eb6040();
                    if (iVar1 == 0) {
                      FUN_00dd5650(&DAT_01660ef8);
                    }
                    iVar1 = FUN_00eb6260();
                    if (iVar1 == 0) {
                      FUN_00dd5650(&DAT_01660ef8);
                    }
                    iVar1 = FUN_00eb6330();
                    if (iVar1 == 0) {
                      FUN_00dd5650(&DAT_01660ef8);
                    }
                    iVar1 = FUN_00eb6410();
                    if (iVar1 == 0) {
                      FUN_00dd5650(&DAT_01660ef8);
                    }
                    iVar1 = FUN_00eb65b0();
                    if (iVar1 == 0) {
                      FUN_00dd5650(&DAT_01660ef8);
                    }
                    FUN_00eb6750();
                    iVar1 = FUN_00eb67e0();
                    if (iVar1 == 0) {
                      FUN_00dd5650(&DAT_01660ef8);
                    }
                    iVar1 = FUN_00eb6eb0();
                    if (iVar1 != 0) {
                      iVar1 = FUN_00eb6fe0();
                      if (iVar1 != 0) {
                        iVar1 = FUN_00eb64f0();
                        if (iVar1 == 0) {
                          FUN_00dd5650(&DAT_01660ef8);
                        }
                        FUN_00eb66b0();
                        iVar1 = FUN_00eadc90();
                        if (iVar1 != 0) {
                          FUN_00dd5650("--- eff startup ---");
                          FUN_00ec7ed0();
                          EspShaderMosaic::vf08();
                          EspShaderOutlineExtraction::vf08();
                          EspShaderOutlineExtractionMask::vf08();
                          EspShaderLaplacianRangeLight::vf08();
                          EspShaderDrawMirror::vf08();
                          EspShaderDrawMirrorRot::vf08();
                          DAT_01bea084 = DAT_01bea084 | 0x2000000;
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
  }
  FUN_00dd56a0(&DAT_0165f5b0);
LAB_00a3bed9:
  FUN_00dd56a0("ERROR : Graphic::Startup() FAILED.\nNo Graphic Memory");
  return 0;
}

// 00A3C4F0  FUN_00a3c4f0  size=537  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00a3c4f0(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  undefined1 auStack_98 [8];
  undefined1 local_90 [48];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [84];
  
  FID_conflict__memcpy(local_90,(void *)(param_2 * 0x40 + 0x120 + param_1),0x40);
  D3DXMatrixTranspose(local_90,local_90);
  iVar2 = FUN_00f994a0(0x1c,auStack_98,0x10);
  if (iVar2 == 0) {
    FID_conflict__memcpy(&DAT_01f13690,auStack_98,0x40);
    FUN_00f995e0(0x1c,&DAT_01f13690,0x10);
  }
  iVar2 = FUN_00f99540(0x1c,auStack_98,0x10);
  if (iVar2 == 0) {
    FID_conflict__memcpy(&DAT_01f12890,auStack_98,0x40);
    FUN_00f99620(0x1c,&DAT_01f12890,0x10);
  }
  D3DXMatrixTranspose(auStack_58,(param_2 + 0x36) * 0x40 + param_1);
  iVar2 = FUN_00f994a0(0x20,auStack_60,0x10);
  if (iVar2 == 0) {
    FID_conflict__memcpy(&DAT_01f136d0,auStack_60,0x40);
    FUN_00f995e0(0x20,&DAT_01f136d0,0x10);
  }
  iVar2 = FUN_00f99540(0x20,auStack_60,0x10);
  if (iVar2 == 0) {
    FID_conflict__memcpy(&DAT_01f128d0,auStack_60,0x40);
    FUN_00f99620(0x20,&DAT_01f128d0,0x10);
  }
  fVar1 = *(float *)(param_1 + 0x8c);
  iVar2 = FUN_00f994a0(0xb8,&stack0xffffff50,4);
  if (iVar2 == 0) {
    _DAT_01f14054 = 0;
    _DAT_01f14058 = 0;
    _DAT_01f1405c = 0;
    _DAT_01f14050 = 1.0 / fVar1;
    FUN_00f995e0(0xb8,&DAT_01f14050,4);
  }
  if (*(float *)(param_1 + 0xe84 + param_2 * 4) == 0.0) {
    fVar1 = 1.0;
  }
  else {
    fVar1 = *(float *)(param_1 + 0xe84 + param_2 * 4) / *(float *)(param_1 + 0x8c);
  }
  iVar2 = FUN_00f99540(0xb8,&stack0xffffff50,4);
  if (iVar2 == 0) {
    DAT_01f13254 = 0;
    DAT_01f13258 = 0;
    DAT_01f1325c = 0;
    DAT_01f13250 = fVar1;
    FUN_00f99620(0xb8,&DAT_01f13250,4);
  }
  return;
}

// 00A3C710  FUN_00a3c710  size=3263  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_00a3c710(int param_1,int param_2,float param_3,undefined4 param_4,undefined4 param_5,
            float *param_6,float *param_7)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined *puVar4;
  float *pfVar5;
  float unaff_ESI;
  int iVar6;
  float *pfVar7;
  undefined4 *puVar8;
  int iVar9;
  float *pfVar10;
  uint uVar11;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float10 fVar12;
  float10 fVar13;
  float10 extraout_ST1;
  float10 extraout_ST1_00;
  float fVar14;
  int iVar15;
  float fVar16;
  uint uVar17;
  int iVar18;
  float fVar19;
  float *pfVar20;
  float *pfVar21;
  uint uStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  float fStack_2e8;
  float fStack_2e4;
  float fStack_2e0;
  float fStack_2dc;
  float local_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  float fStack_2c8;
  float local_2b4;
  float fStack_2b0;
  float fStack_2ac;
  float fStack_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  float afStack_298 [5];
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  float fStack_278;
  float fStack_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  float fStack_258;
  float fStack_254;
  float fStack_250;
  undefined1 auStack_24c [4];
  int iStack_248;
  undefined4 local_244;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  undefined1 auStack_1f4 [4];
  undefined1 auStack_1f0 [4];
  float fStack_1ec;
  undefined1 auStack_1e4 [12];
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  undefined1 auStack_1b0 [12];
  float afStack_1a4 [16];
  undefined1 auStack_164 [24];
  undefined1 auStack_14c [12];
  float local_140;
  float fStack_13c;
  float fStack_138;
  float fStack_128;
  float fStack_124;
  float afStack_120 [3];
  float afStack_114 [15];
  undefined1 auStack_d8 [12];
  float fStack_cc;
  float fStack_bc;
  undefined1 auStack_b4 [48];
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined1 auStack_74 [112];
  
  fVar16 = *(float *)(param_2 + 0x94);
  if (fVar16 <= *(float *)(param_1 + 0x98)) {
    if (fVar16 + 0.05 < *(float *)(param_1 + 0x98)) {
      *(float *)(param_1 + 0x98) = fVar16;
      *(undefined4 *)(param_1 + 0x114) = 0;
      *(undefined4 *)(param_1 + 0x10c) = 0;
      *(undefined4 *)(param_1 + 0x104) = 0;
      *(undefined4 *)(param_1 + 0xfc) = 0;
      *(undefined4 *)(param_1 + 0x110) = 0;
      *(undefined4 *)(param_1 + 0x108) = 0;
      *(undefined4 *)(param_1 + 0x100) = 0;
      *(undefined4 *)(param_1 + 0xf8) = 0;
    }
  }
  else {
    *(float *)(param_1 + 0x98) = fVar16 + 0.05;
  }
  *(undefined4 *)(param_1 + 0x4a0) = *(undefined4 *)(param_2 + 0x330);
  FUN_00de59f0(*(undefined4 *)(param_1 + 0x98));
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0x98);
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_1 + 0x1c);
  *(float *)(param_1 + 0xd0) = param_3;
  local_244 = 0;
  if (((byte)DAT_01bea084 & 0xc0) != 0) {
    *(float *)(param_1 + 0xc4) = *(float *)(param_1 + 0x14) * 0.5;
    *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_1 + 0x14);
    *(float *)(param_1 + 0xcc) =
         (*(float *)(param_1 + 0x18) - *(float *)(param_1 + 0x14)) * 0.35 +
         *(float *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_1 + 0x18);
    local_244 = 0xc2480000;
  }
  iVar9 = param_2 + 0x130;
  local_2b4 = (*(float *)(param_1 + 0x4a8) / *(float *)(param_1 + 0x4a4)) * param_3;
  local_2d8 = (*(float *)(param_1 + 0x4b0) / *(float *)(param_1 + 0x4ac)) * param_3;
  D3DXMatrixMultiply(&local_140,iVar9,param_5);
  fStack_29c = 0.0;
  afStack_298[0] = 0.0;
  afStack_298[1] = 0.0;
  afStack_298[2] = 1.0;
  D3DXVec3TransformNormal(auStack_24c,&fStack_29c,auStack_14c);
  fStack_258 = fStack_128 + fStack_258;
  fStack_254 = fStack_124 + fStack_254;
  fStack_250 = afStack_120[0] + fStack_250;
  fStack_2a8 = 0.0;
  fStack_2a4 = 0.0;
  fStack_2a0 = 0.0;
  fStack_29c = 1.0;
  D3DXVec3TransformNormal(afStack_298,&fStack_2a8,iVar9);
  fStack_2a4 = fStack_2a4 + *(float *)(param_2 + 0x160);
  iVar18 = -1;
  iVar3 = 0;
  fStack_2a0 = *(float *)(param_2 + 0x164) + fStack_2a0;
  fStack_29c = *(float *)(param_2 + 0x168) + fStack_29c;
  do {
    iVar15 = -1;
    fVar16 = (float)iVar18 * local_2d8;
    iVar6 = iVar3;
    iVar3 = iVar3 + 0x20;
    do {
      fStack_280 = (float)iVar15 * unaff_ESI;
      fStack_278 = 0.0;
      fStack_284 = fVar16;
      fStack_27c = -param_3;
      D3DXVec3TransformNormal((int)afStack_114 + iVar6,&fStack_284,auStack_164);
      *(float *)((int)afStack_120 + iVar6) = local_140 + *(float *)((int)afStack_120 + iVar6);
      *(float *)((int)afStack_120 + iVar6 + 4) =
           *(float *)((int)afStack_120 + iVar6 + 4) + fStack_13c;
      *(float *)((int)afStack_120 + iVar6 + 8) =
           fStack_138 + *(float *)((int)afStack_120 + iVar6 + 8);
      D3DXVec3TransformNormal(auStack_1b0 + iVar6,afStack_298 + 2,iVar9);
      iVar15 = iVar15 + 2;
      *(float *)((int)afStack_1a4 + iVar6) =
           *(float *)((int)afStack_1a4 + iVar6) + *(float *)(param_2 + 0x160);
      *(float *)((int)afStack_1a4 + iVar6 + 4) =
           *(float *)(param_2 + 0x164) + *(float *)((int)afStack_1a4 + iVar6 + 4);
      *(float *)((int)afStack_1a4 + iVar6 + 8) =
           *(float *)((int)afStack_1a4 + iVar6 + 8) + *(float *)(param_2 + 0x168);
      iVar6 = iVar6 + 0x10;
    } while (iVar15 < 2);
    iVar18 = iVar18 + 2;
  } while (iVar18 < 2);
  pfVar21 = (float *)(param_1 + 0x120);
  fStack_2e4 = 3.4028235e+38;
  pfVar20 = (float *)(param_1 + 0xc0);
  fStack_2e0 = 3.4028235e+38;
  fStack_2f0 = -3.4028235e+38;
  local_2d8 = (float)(param_1 + 0x240);
  fStack_2ec = -3.4028235e+38;
  pfVar7 = (float *)(param_1 + 0xfc);
  fStack_2e8 = -3.4028235e+38;
  iStack_248 = -0xfc - param_1;
  uStack_2f4 = 0;
  do {
    iVar3 = 2;
    pfVar10 = pfVar20;
    do {
      pfVar5 = afStack_114 + 2;
      fVar16 = *pfVar10 / param_3;
      iVar18 = 4;
      fVar19 = 1.0 - fVar16;
      afStack_120[1] = fStack_25c * fVar19;
      do {
        fVar2 = fStack_264 * fVar19 + pfVar5[-2] * fVar16;
        fVar1 = fStack_260 * fVar19 + pfVar5[-1] * fVar16;
        fVar14 = ABS(fVar16 * *pfVar5 + fStack_25c * fVar19) +
                 ABS(*(float *)(param_1 + 0x10) + fStack_268);
        if (fVar2 < fStack_2e4) {
          fStack_2e4 = fVar2;
        }
        if (fVar1 < fStack_2e0) {
          fStack_2e0 = fVar1;
        }
        if (fStack_2f0 <= fVar2) {
          fStack_2f0 = fVar2;
        }
        if (fStack_2ec <= fVar1) {
          fStack_2ec = fVar1;
        }
        if (fStack_2e8 <= fVar14) {
          fStack_2e8 = fVar14;
        }
        pfVar5 = pfVar5 + 4;
        iVar18 = iVar18 + -1;
      } while (iVar18 != 0);
      pfVar10 = pfVar10 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    fVar16 = pfVar7[-1];
    if (fVar16 < fStack_2f0 - fStack_2e4) {
      fVar16 = fStack_2f0 - fStack_2e4;
    }
    pfVar7[-1] = fVar16;
    fVar19 = *pfVar7;
    if (fVar19 < fStack_2ec - fStack_2e0) {
      fVar19 = fStack_2ec - fStack_2e0;
    }
    uVar17 = _DAT_01be7510 & 1;
    *pfVar7 = fVar19;
    if (uVar17 == 0) {
      _DAT_01be7510 = _DAT_01be7510 | 1;
      _DAT_01be7500 = 0;
      _DAT_01be7504 = 0x3f800000;
      _DAT_01be7508 = 0;
    }
    puVar4 = DAT_01beb8c0;
    if (DAT_01beb8c0 == (undefined *)0x0) {
      puVar4 = &DAT_01bea1d0;
    }
    fStack_2d4 = *(float *)(puVar4 + 0x1b0);
    fStack_2d0 = *(float *)(puVar4 + 0x1b4);
    fStack_2cc = *(float *)(puVar4 + 0x1b8);
    fStack_2c8 = *(float *)(puVar4 + 0x1bc);
    pfVar10 = pfVar7;
    thunk_FUN_00de01a0(auStack_1e4,(float *)(param_1 + 0x60),&fStack_2d4,&DAT_01be7500);
    if ((_DAT_01b83d3c & 0x100) == 0) {
      fStack_284 = fStack_2d4 - *(float *)(param_1 + 0x60);
      fVar14 = 0.0;
      fStack_280 = fStack_2d0 - *(float *)(param_1 + 100);
      fStack_27c = fStack_2cc - *(float *)(param_1 + 0x68);
      fStack_278 = fStack_2c8 - *(float *)(param_1 + 0x6c);
      D3DXMatrixInverse(auStack_b4,0,auStack_1e4);
      uStack_22c = 0;
      uStack_228 = 0;
      uStack_224 = 0;
      D3DXVec3TransformNormal(&fStack_2cc,&uStack_22c,auStack_1f0);
      local_2d8 = local_2d8 + fStack_1cc;
      fStack_2d4 = fStack_1c8 + fStack_2d4;
      fStack_2d0 = fStack_1c4 + fStack_2d0;
      D3DXVec3TransformNormal(&fStack_2a8,&fStack_2ec,&fStack_1fc);
      local_2b4 = local_2b4 + fStack_1d8;
      fStack_2b0 = fStack_1d4 + fStack_2b0;
      fStack_2ac = fStack_1d0 + fStack_2ac;
      fStack_268 = local_2b4 - fStack_2e4;
      fStack_264 = fStack_2b0 - fStack_2e0;
      fStack_260 = fStack_2ac - fStack_2dc;
      FUN_00fa0740(0);
      iVar3 = FUN_00fa0740(0);
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(iVar3 + 8);
      }
      fVar1 = (float)iVar3;
      if (iVar3 < 0) {
        fVar1 = fVar1 + 4.2949673e+09;
      }
      fVar14 = fVar14 / fVar1;
      FUN_00fdbc60();
      iVar3 = FUN_00fdbc60();
      fStack_2ac = fStack_260 + fStack_2dc;
      local_2b4 = (float)(extraout_ST0 + (float10)fStack_2e4);
      fStack_2b0 = (float)((float10)fStack_2e0 + (float10)iVar3 * extraout_ST1);
      D3DXVec3TransformNormal(&stack0xfffffd08,&local_2b4,auStack_d8);
      fStack_2d4 = fStack_2d4 + fStack_84;
      fStack_2d0 = fStack_80 + fStack_2d0;
      fStack_2cc = fStack_7c + fStack_2cc;
      fStack_214 = fStack_2d4 - fStack_284;
      fStack_210 = fStack_2d0 - fStack_280;
      fStack_20c = fStack_2cc - fStack_27c;
      fStack_208 = fStack_2c8 - fStack_278;
      thunk_FUN_00de01a0(auStack_1e4,&fStack_214,&fStack_2d4,&DAT_01be7500,fVar14);
      iVar3 = FUN_00fdbc60();
      fStack_2e4 = (float)(extraout_ST0_00 * (float10)iVar3);
      iVar3 = FUN_00fdbc60();
      fVar12 = extraout_ST0_01 * (float10)iVar3;
      fStack_2e0 = (float)fVar12;
      fStack_2f0 = (float)((float10)fVar16 + extraout_ST1_00);
      fStack_2ec = (float)((float10)fVar19 + fVar12);
      fVar13 = extraout_ST1_00;
    }
    else {
      fVar13 = (float10)fStack_2e4;
      fVar12 = (float10)fStack_2e0;
    }
    FUN_00ddcbb0(auStack_74,(float)fVar13,fStack_2f0,(float)fVar12,fStack_2ec,0,fStack_2e8);
    D3DXMatrixMultiply(pfVar21,auStack_1e4,auStack_74);
    iVar3 = 0;
    uVar17 = 0;
    do {
      iVar18 = uStack_2f4 + uVar17;
      fVar16 = *(float *)(param_1 + 0xc0 + iVar18 * 4) / param_3;
      uVar11 = 0;
      puVar8 = (undefined4 *)(param_1 + 0x4cc + ((int)pfVar7 + iVar3 + iStack_248) * 0x10);
      fVar19 = 1.0 - fVar16;
      pfVar7 = pfVar10;
      do {
        fStack_bc = fVar19 * fStack_29c;
        local_2b4 = fStack_2a4 * fVar19 + fVar16 * afStack_1a4[uVar11 * 4];
        fStack_2b0 = fVar19 * fStack_2a0 + afStack_1a4[uVar11 * 4 + 1] * fVar16;
        fStack_2ac = afStack_1a4[uVar11 * 4 + 2] * fVar16 + fStack_bc;
        fStack_2a8 = afStack_298[0] * fVar19 + afStack_1a4[uVar11 * 4 + 3] * fVar16;
        if ((uVar17 == 1) && (uVar11 == 0)) {
          FUN_00d9fa80(auStack_1f4,&local_2b4);
          *(float *)(param_1 + 0xd4 + iVar18 * 4) = fStack_1ec;
          fVar14 = (*(float *)(&DAT_01be74f0 + iVar18 * 4) + *(float *)(param_1 + 0xc0 + iVar18 * 4)
                   ) / param_3;
          fVar1 = 1.0 - fVar14;
          fStack_cc = fVar1 * fStack_29c;
          fStack_204 = fStack_2a4 * fVar1 + afStack_1a4[0] * fVar14;
          fStack_200 = fVar1 * fStack_2a0 + afStack_1a4[1] * fVar14;
          fStack_1fc = afStack_1a4[2] * fVar14 + fStack_cc;
          fStack_1f8 = afStack_298[0] * fVar1 + afStack_1a4[3] * fVar14;
          FUN_00d9fa80(auStack_1f4,&fStack_204);
          *(float *)(param_1 + 0xe4 + iVar18 * 4) = (fStack_1ec + 1.0) * 0.5;
        }
        uStack_228 = 0;
        uStack_238 = 0;
        uStack_224 = 0x3f800000;
        uStack_234 = 0;
        uStack_230 = 0x200;
        uStack_22c = 0x200;
        FUN_00a28d40(puVar8 + -3,&local_2b4,&uStack_238,auStack_74,param_5);
        fVar14 = local_2d8;
        iVar3 = iVar3 + 1;
        puVar8[-1] = 0;
        *puVar8 = 0;
        uVar11 = uVar11 + 1;
        puVar8 = puVar8 + 4;
      } while (uVar11 < 4);
      uVar17 = uVar17 + 1;
      pfVar10 = pfVar7;
    } while (uVar17 < 2);
    pfVar7[0x49] = ABS(pfVar21[8]) + ABS(*pfVar21) + ABS(pfVar21[4]);
    pfVar7[0x4a] = ABS(pfVar21[9]) + ABS(pfVar21[1]) + ABS(pfVar21[5]);
    fVar16 = *param_6;
    if (fStack_2e4 <= *param_6) {
      fVar16 = fStack_2e4;
    }
    *param_6 = fVar16;
    fVar16 = param_6[1];
    if (fStack_2e0 <= param_6[1]) {
      fVar16 = fStack_2e0;
    }
    param_6[1] = fVar16;
    fVar16 = *param_7;
    if (fVar16 < fStack_2f0) {
      fVar16 = fStack_2f0;
    }
    *param_7 = fVar16;
    fVar16 = param_7[1];
    if (fVar16 < fStack_2ec) {
      fVar16 = fStack_2ec;
    }
    param_7[1] = fVar16;
    fVar16 = param_7[2];
    if (fVar16 < fStack_2e8) {
      fVar16 = fStack_2e8;
    }
    uVar17 = _DAT_01be7510 & 2;
    param_7[2] = fVar16;
    if (uVar17 == 0) {
      _DAT_01be7510 = _DAT_01be7510 | 2;
      _DAT_01be74e0 = 0;
      _DAT_01be74e4 = 0x3f800000;
      _DAT_01be74e8 = 0;
    }
    puVar4 = DAT_01beb8c0;
    if (DAT_01beb8c0 == (undefined *)0x0) {
      puVar4 = &DAT_01bea1d0;
    }
    FUN_00de6b20(param_1 + 0x60,puVar4 + 0x1b0,&DAT_01be74e0,fStack_2e4,fStack_2f0,fStack_2e0,
                 fStack_2ec,0,fStack_2e8);
    pfVar20 = pfVar20 + 1;
    pfVar7 = pfVar7 + 2;
    uStack_2f4 = uStack_2f4 + 1;
    pfVar21 = pfVar21 + 0x10;
    local_2d8 = (float)((int)fVar14 + 0x80);
  } while (uStack_2f4 < 4);
  return;
}

// 00A3D3E0  FUN_00a3d3e0  size=93  [run]
undefined4 __fastcall FUN_00a3d3e0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(param_1 + 0x1c4);
  iVar2 = 8;
  do {
    puVar1[-1] = 0;
    puVar1[-0x71] = 0;
    puVar1[-0x70] = 0;
    puVar1[-0x6f] = 0;
    puVar1[-0x6e] = 0;
    puVar1[-0x6d] = 0;
    puVar1[-0x6c] = 0;
    puVar1[-0x6b] = 0;
    puVar1[-0x6a] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 0x74;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_00dd7240();
  return 1;
}

// 00A3D440  FUN_00a3d440  size=132  [run]
undefined4 * __fastcall FUN_00a3d440(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  
  if (DAT_01be6438 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01be6420);
  }
  uVar2 = 0;
  do {
    puVar1 = param_1;
    if (puVar1[0x70] == 0) {
      puVar1[0x70] = 1;
      *(char *)(puVar1 + 0x72) = '\x01' << ((byte)uVar2 & 0x1f);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[6] = 0;
      puVar1[7] = 0;
      puVar1[0x71] = 0;
      break;
    }
    uVar2 = uVar2 + 1;
    param_1 = puVar1 + 0x74;
  } while (uVar2 < 8);
  if (DAT_01be6438 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01be6420);
  }
  return puVar1;
}


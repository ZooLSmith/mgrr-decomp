// src/graphics/cShaderSetting.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009CC4A0..015F63B0, 779 functions

#include "types.h"

// 009CC4A0  cShaderSetting::vf00  size=31  [class]
undefined4 * __thiscall cShaderSetting::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 009DCB80  cShaderSetting::cShaderSetting_9  size=53  [class]
void __fastcall cShaderSetting::cShaderSetting_9(undefined4 *param_1)

{
  *param_1 = EspModelShaderSetting::vftable;
  if ((int *)param_1[0x1e] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x1e] + 4))();
    if ((undefined4 *)param_1[0x1e] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x1e])(1);
    }
    param_1[0x1e] = 0;
  }
  *param_1 = vftable;
  return;
}

// 009DCC20  cShaderSetting::cShaderSetting_10  size=103  [class]
void __fastcall cShaderSetting::cShaderSetting_10(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 2;
  piVar1 = param_1;
  do {
    iVar4 = iVar3;
    iVar3 = 6;
    do {
      (**(code **)(*piVar1 + 0x10))();
      piVar1 = piVar1 + 0x1f;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar3 = iVar4 + -1;
  } while (iVar3 != 0);
  iVar4 = iVar4 + 10;
  piVar1 = param_1 + 0x174;
  do {
    piVar2 = piVar1 + -0x1f;
    *piVar2 = (int)EspModelShaderSetting::vftable;
    if ((int *)piVar1[-1] != (int *)0x0) {
      (**(code **)(*(int *)piVar1[-1] + 4))();
      if ((undefined4 *)piVar1[-1] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)piVar1[-1])(1);
      }
      piVar1[-1] = 0;
    }
    iVar4 = iVar4 + -1;
    *piVar2 = (int)vftable;
    piVar1 = piVar2;
  } while (-1 < iVar4);
  return;
}

// 00FAB050  cShaderSetting::vf08  size=6  [class]
undefined4 cShaderSetting::vf08(void)

{
  return 1;
}

// 00FAB060  cShaderSetting::vf04  size=8  [class]
undefined4 cShaderSetting::vf04(void)

{
  return 1;
}

// 00FAB070  cShaderSetting::vf0C  size=8  [class]
undefined4 cShaderSetting::vf0C(void)

{
  return 1;
}

// 00FAB080  cShaderSetting::vf10  size=1  [class]
void cShaderSetting::vf10(void)

{
  return;
}

// 00FAB090  cShaderSetting::vf14  size=6  [class]
undefined4 cShaderSetting::vf14(void)

{
  return 1;
}

// 00FAB0A0  cShaderSetting::vf18  size=6  [class]
undefined4 cShaderSetting::vf18(void)

{
  return 1;
}

// 00FAB0B0  cShaderSetting::vf1C  size=3  [class]
undefined4 cShaderSetting::vf1C(void)

{
  return 0;
}

// 00FAB0C0  FUN_00fab0c0  size=22  [between]
void __fastcall FUN_00fab0c0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00f910d0(*(undefined4 *)(param_1 + 0x74));
  FUN_00f98f80(uVar1);
  return;
}

// 00FAB0E0  cShaderSetting::vf20  size=3  [class]
void cShaderSetting::vf20(void)

{
  return;
}

// 00FAB0F0  FUN_00fab0f0  size=16  [between]
void __thiscall FUN_00fab0f0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x784) = param_2;
  return;
}

// 00FAB110  FUN_00fab110  size=20  [between]
int __thiscall FUN_00fab110(int param_1,int param_2)

{
  return param_1 + 0x66c + param_2 * 0x18;
}

// 00FAB130  FUN_00fab130  size=19  [between]
float10 FUN_00fab130(void)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00fe0ac0();
  return (float10)(float)fVar1;
}

// 00FAB190  FUN_00fab190  size=63  [between]
void __thiscall FUN_00fab190(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00f910d0(*(undefined4 *)(param_1 + 0x74));
  FUN_00f98f80(uVar1);
  FUN_00f92be0(*(undefined4 *)(param_4 + 0x358));
  FUN_00f990e0(&DAT_01eeefb4);
  return;
}

// 00FAB210  FUN_00fab210  size=60  [between]
void __thiscall FUN_00fab210(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00f910d0(*(undefined4 *)(param_1 + 0x74));
  FUN_00f98f80(uVar1);
  FUN_00f990e0(&DAT_01eef1b8);
  FUN_00f92d90(*(undefined4 *)(param_4 + 0x358));
  return;
}

// 00FAB300  FUN_00fab300  size=18  [between]
undefined4 * __fastcall FUN_00fab300(undefined4 *param_1)

{
  Hw::cVertexShader::cVertexShader();
  *param_1 = &PTR_FUN_016f1d80;
  return param_1;
}

// 00FAB330  FUN_00fab330  size=39  [between]
undefined4 * __thiscall FUN_00fab330(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_016f1d80;
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FAB360  FUN_00fab360  size=26  [between]
void FUN_00fab360(void)

{
  Hw::cTexture::cTexture_5();
  Hw::cTexture::cTexture_5();
  return;
}

// 00FAB380  FUN_00fab380  size=23  [between]
undefined4 FUN_00fab380(ushort param_1)

{
  return (&DAT_01f21bf8)[(uint)param_1 * 0x30];
}

// 00FAB3A0  FUN_00fab3a0  size=31  [between]
bool FUN_00fab3a0(ushort param_1)

{
  return (&DAT_01f21c03)[(uint)param_1 * 0xc0] == 'B';
}

// 00FAB3C0  FUN_00fab3c0  size=30  [between]
bool FUN_00fab3c0(ushort param_1)

{
  return (&DAT_01f21c07)[(uint)param_1 * 0xc0] != '\0';
}

// 00FAB3F0  FUN_00fab3f0  size=94  [between]
ushort FUN_00fab3f0(char *param_1)

{
  int iVar1;
  ushort uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = __stricmp(param_1,&DAT_01f21bfc + (uint)uVar2 * 0xc0);
    if (iVar1 == 0) {
      return uVar2;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x5dc);
  if ((param_1[8] != 'B') && (param_1[8] != 'b')) {
    return 0;
  }
  return 1;
}

// 00FAB450  FUN_00fab450  size=85  [between]
undefined * FUN_00fab450(char *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char *_Str2;
  
  iVar2 = 0;
  _Str2 = &DAT_01f21bfc;
  uVar3 = 0;
  do {
    iVar1 = __stricmp(param_1,_Str2);
    if (iVar1 == 0) {
      return (undefined *)(&DAT_01f21bf8)[iVar2 * 0x30];
    }
    uVar3 = uVar3 + 0xc0;
    iVar2 = iVar2 + 1;
    _Str2 = _Str2 + 0xc0;
  } while (uVar3 < 0x46500);
  return &DAT_01f68138;
}

// 00FAB4C0  FUN_00fab4c0  size=18  [between]
void __thiscall FUN_00fab4c0(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0xf80) = *param_2;
  return;
}

// 00FAB500  FUN_00fab500  size=7  [between]
undefined4 __fastcall FUN_00fab500(int param_1)

{
  return *(undefined4 *)(param_1 + 0xf68);
}

// 00FAB530  FUN_00fab530  size=242  [between]
void FUN_00fab530(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  char *_DstBuf;
  char *local_318;
  char local_314 [260];
  char local_210 [260];
  char local_10c [260];
  uint local_8;
  
  local_8 = DAT_018e8764 ^ (uint)&stack0xfffffffc;
  uVar2 = 0;
  do {
    iVar1 = param_3;
    if (uVar2 == 0) {
      iVar1 = param_2;
    }
    if (iVar1 != 0) {
      _sprintf_s(local_10c,0x104,"../../../../PRJ_020/p1\\common\\bat\\convertShader_exec.bat %s",
                 iVar1);
      thunk_FUN_00df7db0(local_10c);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 2);
  local_318 = local_314;
  if (param_2 == 0) {
    local_318 = (char *)0x0;
  }
  else {
    _sprintf_s(local_318,0x104,"../../../../PRJ_020/p1/win32/room\\shader\\%s.vso",param_2);
  }
  _DstBuf = local_210;
  if (param_3 == 0) {
    _DstBuf = (char *)0x0;
  }
  else {
    _sprintf_s(_DstBuf,0x104,"../../../../PRJ_020/p1/win32/room\\shader\\%s.pso",param_3);
  }
  FUN_00f99310(local_318,_DstBuf);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

// 00FAB630  FUN_00fab630  size=16  [between]
void __thiscall FUN_00fab630(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xfd8) = param_2;
  return;
}

// 00FAB670  FUN_00fab670  size=89  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00fab670(int param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  
  if (param_1 == 0) {
    uVar1 = 0x23;
    puVar2 = &DAT_01f724e0;
  }
  else {
    if (param_1 != 1) {
      FUN_00dd5650(&DAT_016f1e24);
      return;
    }
    uVar1 = 0x28;
    puVar2 = &DAT_01f724b8;
  }
  _DAT_01f68100 = puVar2;
  uVar1 = FUN_00f910d0(uVar1);
  FUN_00f98f80(uVar1);
  FUN_00f990e0(puVar2);
  return;
}

// 00FAB6D0  FUN_00fab6d0  size=46  [between]
void __thiscall FUN_00fab6d0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00f910d0(*(undefined4 *)(param_1 + 0x74));
  FUN_00f98f80(uVar1);
  FUN_00f990e0(param_2);
  FUN_00f9d850(0);
  return;
}

// 00FAB8F0  FUN_00fab8f0  size=108  [between]
void __fastcall FUN_00fab8f0(int param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  
  uVar1 = FUN_00f910d0(*(undefined4 *)(param_1 + 0x74));
  FUN_00f98f80(uVar1);
  FUN_00f990e0(*(undefined4 *)(param_1 + 0x78));
  if (DAT_01be5554 != 0) {
    if (*(int *)(param_1 + 4) == 0) {
      puVar2 = &DAT_01f74558;
    }
    else if (*(int *)(param_1 + 0x50) == 0) {
      puVar2 = &DAT_01f74410;
    }
    else {
      puVar2 = &DAT_01f746a0;
    }
    FUN_00f990e0(puVar2);
    FUN_00f9d8f0(1);
    FUN_00f9d970(2,2,1);
  }
  return;
}

// 00FAB960  FUN_00fab960  size=16  [between]
void FUN_00fab960(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00fab8f0(param_3);
  return;
}

// 00FABC10  FUN_00fabc10  size=39  [between]
void __thiscall FUN_00fabc10(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00f910d0(*(undefined4 *)(param_1 + 0x74));
  FUN_00f98f80(uVar1);
  FUN_00f990e0(param_3);
  return;
}

// 00FABDB0  FUN_00fabdb0  size=25  [between]
void __thiscall FUN_00fabdb0(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x464) = param_2;
  *(undefined4 *)(param_1 + 0x468) = param_3;
  return;
}

// 00FABEB0  FUN_00fabeb0  size=20  [between]
int __thiscall FUN_00fabeb0(int param_1,int param_2)

{
  return (param_2 + 0xc4) * 0x10 + param_1;
}

// 00FABED0  FUN_00fabed0  size=16  [between]
void __thiscall FUN_00fabed0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xf78) = param_2;
  return;
}

// 00FABEE0  FUN_00fabee0  size=16  [between]
void __thiscall FUN_00fabee0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xf7c) = param_2;
  return;
}

// 00FABEF0  FUN_00fabef0  size=45  [between]
void __thiscall FUN_00fabef0(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0xf30) = *param_2;
  *(undefined4 *)(param_1 + 0xf34) = param_2[1];
  *(undefined4 *)(param_1 + 0xf38) = param_2[2];
  *(undefined4 *)(param_1 + 0xf3c) = param_2[3];
  return;
}

// 00FABF20  FUN_00fabf20  size=45  [between]
void __thiscall FUN_00fabf20(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0xf50) = *param_2;
  *(undefined4 *)(param_1 + 0xf54) = param_2[1];
  *(undefined4 *)(param_1 + 0xf58) = param_2[2];
  *(undefined4 *)(param_1 + 0xf5c) = param_2[3];
  return;
}

// 00FABF50  FUN_00fabf50  size=25  [between]
void __thiscall FUN_00fabf50(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xf40) = param_2;
  *(undefined4 *)(param_1 + 0xf44) = param_3;
  return;
}

// 00FABF70  FUN_00fabf70  size=32  [between]
void __thiscall FUN_00fabf70(int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)((param_3 + 0x2a) * 0x40 + param_1);
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  return;
}

// 00FABF90  FUN_00fabf90  size=45  [between]
void __thiscall FUN_00fabf90(int param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((param_3 + 0xc4) * 0x10 + param_1);
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  puVar1[2] = param_2[2];
  puVar1[3] = param_2[3];
  return;
}

// 00FABFC0  FUN_00fabfc0  size=45  [between]
void __thiscall FUN_00fabfc0(int param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((param_3 + 0xcb) * 0x10 + param_1);
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  puVar1[2] = param_2[2];
  puVar1[3] = param_2[3];
  return;
}

// 00FABFF0  FUN_00fabff0  size=45  [between]
void __thiscall FUN_00fabff0(int param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((param_3 + 0xd2) * 0x10 + param_1);
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  puVar1[2] = param_2[2];
  puVar1[3] = param_2[3];
  return;
}

// 00FAC020  FUN_00fac020  size=45  [between]
void __thiscall FUN_00fac020(int param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((param_3 + 0xd9) * 0x10 + param_1);
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  puVar1[2] = param_2[2];
  puVar1[3] = param_2[3];
  return;
}

// 00FAC050  FUN_00fac050  size=16  [between]
void __thiscall FUN_00fac050(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xf84) = param_2;
  return;
}

// 00FAC060  FUN_00fac060  size=16  [between]
void __thiscall FUN_00fac060(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xf88) = param_2;
  return;
}

// 00FAC070  FUN_00fac070  size=16  [between]
void __thiscall FUN_00fac070(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xf8c) = param_2;
  return;
}

// 00FAC080  FUN_00fac080  size=16  [between]
void __thiscall FUN_00fac080(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xf90) = param_2;
  return;
}

// 00FAC090  FUN_00fac090  size=28  [between]
void FUN_00fac090(int param_1,uint param_2)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)((param_2 >> 3) + param_1);
  *pbVar1 = *pbVar1 | (byte)(0x80 >> ((byte)param_2 & 7));
  return;
}

// 00FAC0B0  FUN_00fac0b0  size=30  [between]
void FUN_00fac0b0(int param_1,uint param_2)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)((param_2 >> 3) + param_1);
  *pbVar1 = *pbVar1 & ~(byte)(0x80 >> ((byte)param_2 & 7));
  return;
}

// 00FAC0D0  FUN_00fac0d0  size=35  [between]
bool FUN_00fac0d0(int param_1,uint param_2)

{
  return ((uint)*(byte *)((param_2 >> 3) + param_1) & 0x80 >> ((byte)param_2 & 7)) != 0;
}

// 00FAC100  FUN_00fac100  size=123  [between]
undefined4 * __fastcall FUN_00fac100(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &PTR_cShaderSetting_33_016f1e30;
  iVar1 = 4;
  do {
    cModelShader::cModelShader();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  param_1[0x1e] = 0xffffffff;
  param_1[0x1f] = 0xffffffff;
  param_1[0x20] = 0xffffffff;
  param_1[0x21] = 0xffffffff;
  param_1[0x22] = 0xffffffff;
  param_1[0x23] = 0xffffffff;
  param_1[0x24] = 0xffffffff;
  param_1[0x25] = 0xffffffff;
  param_1[0x26] = 0xffffffff;
  param_1[0x27] = 0xffffffff;
  param_1[0x28] = 0xffffffff;
  param_1[0x29] = 0xffffffff;
  param_1[0x17f] = 0;
  return param_1;
}

// 00FAC210  cShaderSetting::cShaderSetting_81  size=78  [class]
undefined4 * __thiscall cShaderSetting::cShaderSetting_81(undefined4 *param_1,byte param_2)

{
  int iVar1;
  
  *param_1 = &PTR_cShaderSetting_81_016f1e60;
  iVar1 = 4;
  do {
    cModelShader::cModelShader_2();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FAC330  cShaderSetting::cShaderSetting_83  size=78  [class]
undefined4 * __thiscall cShaderSetting::cShaderSetting_83(undefined4 *param_1,byte param_2)

{
  int iVar1;
  
  *param_1 = &PTR_cShaderSetting_83_016f1e90;
  iVar1 = 4;
  do {
    cModelShader::cModelShader_2();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FAC3D0  cShaderSetting::cShaderSetting_82  size=78  [class]
undefined4 * __thiscall cShaderSetting::cShaderSetting_82(undefined4 *param_1,byte param_2)

{
  int iVar1;
  
  *param_1 = &PTR_cShaderSetting_82_016f1ec0;
  iVar1 = 4;
  do {
    cModelShader::cModelShader_2();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FAC4F0  cShaderSetting::cShaderSetting_84  size=78  [class]
undefined4 * __thiscall cShaderSetting::cShaderSetting_84(undefined4 *param_1,byte param_2)

{
  int iVar1;
  
  *param_1 = &PTR_cShaderSetting_84_016f1ef0;
  iVar1 = 4;
  do {
    cModelShader::cModelShader_2();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FAC600  FUN_00fac600  size=18  [between]
undefined4 * __fastcall FUN_00fac600(undefined4 *param_1)

{
  Hw::cVertexShader::cVertexShader();
  *param_1 = &PTR_FUN_016f1f20;
  return param_1;
}

// 00FAC630  FUN_00fac630  size=39  [between]
undefined4 * __thiscall FUN_00fac630(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_016f1f20;
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FAC660  FUN_00fac660  size=18  [between]
undefined4 * __fastcall FUN_00fac660(undefined4 *param_1)

{
  Hw::cVertexShader::cVertexShader();
  *param_1 = &PTR_FUN_016f1f28;
  return param_1;
}

// 00FAC690  FUN_00fac690  size=39  [between]
undefined4 * __thiscall FUN_00fac690(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_016f1f28;
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FAC6C0  FUN_00fac6c0  size=18  [between]
undefined4 * __fastcall FUN_00fac6c0(undefined4 *param_1)

{
  Hw::cVertexShader::cVertexShader();
  *param_1 = &PTR_FUN_016f1f30;
  return param_1;
}

// 00FAC700  FUN_00fac700  size=195  [between]
void FUN_00fac700(float *param_1,byte *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  
  param_1[0x2c] = (float)param_2;
  param_1[0x24] = 1.4013e-45;
  param_1[0x25] = 0.0;
  param_1[0x26] = 0.0;
  param_1[0x27] = 0.0;
  fVar1 = *(float *)(param_2 + 8);
  iVar6 = (uint)*param_2 * 0x10;
  fVar2 = *(float *)(&DAT_01b85b30 + iVar6);
  fVar3 = *(float *)(&DAT_01b85b34 + iVar6);
  fVar4 = *(float *)(&DAT_01b85b38 + iVar6);
  fVar5 = *(float *)(&DAT_01b85b3c + iVar6);
  *param_1 = fVar1 * fVar2;
  param_1[1] = fVar3 * fVar1;
  param_1[2] = fVar4 * fVar1;
  param_1[3] = fVar1 * fVar5;
  param_1[3] = *(float *)(&DAT_01b84188 + (uint)param_2[3] * 4) * *(float *)(param_2 + 0x14);
  *param_1 = fVar1 * fVar2;
  param_1[1] = fVar3 * fVar1;
  param_1[2] = fVar4 * fVar1;
  param_1[0xb] = *(float *)(&DAT_01b84168 + (uint)param_2[2] * 4) * *(float *)(param_2 + 0x10);
  return;
}

// 00FAC7D0  FUN_00fac7d0  size=862  [between]
void FUN_00fac7d0(float *param_1,byte *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  float10 fVar7;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_18;
  float local_14;
  
  param_1[0x25] = 0.0;
  param_1[0x26] = 0.0;
  param_1[0x27] = 0.0;
  param_1[0x24] = 1.4013e-45;
  param_1[0x2c] = (float)param_2;
  fVar1 = *(float *)(param_2 + 8);
  iVar5 = (uint)*param_2 * 0x10;
  fVar2 = *(float *)(&DAT_01b85b34 + iVar5);
  fVar3 = *(float *)(&DAT_01b85b38 + iVar5);
  fVar4 = *(float *)(&DAT_01b85b3c + iVar5);
  *param_1 = fVar1 * *(float *)(&DAT_01b85b30 + iVar5);
  param_1[1] = fVar2 * fVar1;
  param_1[2] = fVar3 * fVar1;
  param_1[3] = fVar1 * fVar4;
  param_1[3] = *(float *)(&DAT_01b84188 + (uint)param_2[3] * 4) * *(float *)(param_2 + 0x14);
  iVar5 = (uint)param_2[1] * 0xc;
  param_1[4] = *(float *)(&DAT_01b85c10 + iVar5);
  param_1[5] = *(float *)(&DAT_01b85c14 + iVar5);
  param_1[6] = *(float *)(&DAT_01b85c18 + iVar5);
  param_1[7] = 1.0;
  local_24 = *(float *)(param_2 + 0xc);
  iVar5 = (uint)param_2[1] * 0x10;
  local_30 = local_24 * *(float *)(&DAT_01b85c70 + iVar5);
  local_2c = *(float *)(&DAT_01b85c74 + iVar5) * local_24;
  local_28 = *(float *)(&DAT_01b85c78 + iVar5) * local_24;
  local_24 = local_24 * *(float *)(&DAT_01b85c7c + iVar5);
  local_14 = *(float *)(param_2 + 0x38);
  local_40 = local_14 * local_30;
  local_3c = local_2c * local_14;
  local_38 = local_28 * local_14;
  local_34 = local_14 * local_24;
  param_1[8] = local_40;
  param_1[9] = local_3c;
  param_1[10] = local_38;
  param_1[0xb] = local_34;
  param_1[0xb] = *(float *)(&DAT_01b84168 + (uint)param_2[2] * 4) * *(float *)(param_2 + 0x10);
  local_14 = (float)FUN_00a1ef10(2);
  if (local_14 != 0.0) {
    pfVar6 = (float *)FUN_00a2b3a0(&local_40);
    param_1[0xc] = *pfVar6;
    param_1[0xd] = pfVar6[1];
    param_1[0xe] = pfVar6[2];
    param_1[0xf] = pfVar6[3];
    param_1[0xf] = *(float *)((int)local_14 + 0x30);
    fVar7 = (float10)FUN_00a1ef40(2);
    local_34 = (float)fVar7;
    local_40 = local_34 * *(float *)((int)local_14 + 0x20);
    local_3c = *(float *)((int)local_14 + 0x24) * local_34;
    local_38 = *(float *)((int)local_14 + 0x28) * local_34;
    local_34 = local_34 * *(float *)((int)local_14 + 0x2c);
    param_1[0x14] = local_40;
    param_1[0x15] = local_3c;
    param_1[0x16] = local_38;
    param_1[0x17] = local_34;
    local_18 = *(float *)((int)local_14 + 0x34);
    param_1[0x25] = 1.4013e-45;
    local_18 = local_18 * 0.999;
    param_1[0x17] = param_1[0xf] - local_18;
  }
  local_14 = (float)FUN_00a1ef10(1);
  if (local_14 != 0.0) {
    pfVar6 = (float *)FUN_00a2b3a0(&local_40);
    param_1[0x10] = *pfVar6;
    param_1[0x11] = pfVar6[1];
    param_1[0x12] = pfVar6[2];
    param_1[0x13] = pfVar6[3];
    param_1[0x13] = *(float *)((int)local_14 + 0x30);
    fVar7 = (float10)FUN_00a1ef40(1);
    local_34 = (float)fVar7;
    local_40 = local_34 * *(float *)((int)local_14 + 0x20);
    local_3c = *(float *)((int)local_14 + 0x24) * local_34;
    local_38 = *(float *)((int)local_14 + 0x28) * local_34;
    local_34 = local_34 * *(float *)((int)local_14 + 0x2c);
    param_1[0x18] = local_40;
    param_1[0x19] = local_3c;
    param_1[0x1a] = local_38;
    param_1[0x1b] = local_34;
    local_18 = *(float *)((int)local_14 + 0x34);
    param_1[0x26] = 1.4013e-45;
    local_18 = local_18 * 0.999;
    param_1[0x1b] = param_1[0x13] - local_18;
  }
  local_14 = (float)FUN_00a1ef10(0);
  if (local_14 != 0.0) {
    pfVar6 = (float *)FUN_00a2b3a0(&local_40);
    param_1[0x1c] = *pfVar6;
    param_1[0x1d] = pfVar6[1];
    param_1[0x1e] = pfVar6[2];
    param_1[0x1f] = pfVar6[3];
    param_1[0x1f] = *(float *)((int)local_14 + 0x30);
    fVar7 = (float10)FUN_00a1ef40(0);
    fVar1 = (float)fVar7;
    fVar2 = *(float *)((int)local_14 + 0x24);
    fVar3 = *(float *)((int)local_14 + 0x28);
    fVar4 = *(float *)((int)local_14 + 0x2c);
    param_1[0x20] = fVar1 * *(float *)((int)local_14 + 0x20);
    param_1[0x21] = fVar2 * fVar1;
    param_1[0x22] = fVar3 * fVar1;
    param_1[0x23] = fVar1 * fVar4;
    fVar1 = *(float *)((int)local_14 + 0x34);
    param_1[0x27] = 1.4013e-45;
    param_1[0x23] = param_1[0x1f] - fVar1 * 0.999;
  }
  return;
}

// 00FACB30  FUN_00facb30  size=11  [between]
void __fastcall FUN_00facb30(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00facb39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))();
  return;
}

// 00FACB40  FUN_00facb40  size=46  [between]
void __thiscall FUN_00facb40(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00f910d0(*(undefined4 *)(param_1 + 0x74));
  FUN_00f98f80(uVar1);
  FUN_00f990e0(param_2);
  FUN_00f9d850(0);
  return;
}

// 00FACB90  cShaderSetting::cShaderSetting_71  size=34  [class]
undefined4 * __thiscall cShaderSetting::cShaderSetting_71(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FACC30  cShaderSetting::cShaderSetting_73  size=34  [class]
undefined4 * __thiscall cShaderSetting::cShaderSetting_73(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FACCD0  cShaderSetting::cShaderSetting_72  size=34  [class]
undefined4 * __thiscall cShaderSetting::cShaderSetting_72(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FACD70  cShaderSetting::cShaderSetting_76  size=34  [class]
undefined4 * __thiscall cShaderSetting::cShaderSetting_76(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FACDB0  cShaderSetting::cShaderSetting_75  size=19  [class]
void __fastcall cShaderSetting::cShaderSetting_75(undefined4 *param_1)

{
  Hw::cTexture::cTexture_5();
  *param_1 = vftable;
  return;
}

// 00FACDE0  cShaderSetting::cShaderSetting_74  size=34  [class]
undefined4 * __thiscall cShaderSetting::cShaderSetting_74(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FACE50  cShaderSetting::cShaderSetting_78  size=34  [class]
undefined4 * __thiscall cShaderSetting::cShaderSetting_78(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FACEC0  cShaderSetting::cShaderSetting_77  size=34  [class]
undefined4 * __thiscall cShaderSetting::cShaderSetting_77(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FACF30  cShaderSetting::cShaderSetting_80  size=34  [class]
undefined4 * __thiscall cShaderSetting::cShaderSetting_80(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FACFD0  cShaderSetting::cShaderSetting_79  size=34  [class]
undefined4 * __thiscall cShaderSetting::cShaderSetting_79(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FAD070  cShaderSetting::cShaderSetting_67  size=34  [class]
undefined4 * __thiscall cShaderSetting::cShaderSetting_67(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FAD110  cShaderSetting::cShaderSetting_69  size=34  [class]
undefined4 * __thiscall cShaderSetting::cShaderSetting_69(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FAD1B0  cShaderSetting::cShaderSetting_68  size=34  [class]
undefined4 * __thiscall cShaderSetting::cShaderSetting_68(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FAD220  cShaderSetting::cShaderSetting_70  size=34  [class]
undefined4 * __thiscall cShaderSetting::cShaderSetting_70(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FAD280  FUN_00fad280  size=18  [between]
undefined4 * __fastcall FUN_00fad280(undefined4 *param_1)

{
  FUN_00fac100();
  *param_1 = &PTR_cShaderSetting_32_016f2140;
  return param_1;
}

// 00FAD2D0  FUN_00fad2d0  size=364  [between]
void __fastcall FUN_00fad2d0(int param_1)

{
  *(undefined4 *)(param_1 + 0x5f8) = 0;
  *(undefined4 *)(param_1 + 0x600) = 1;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  *(undefined4 *)(param_1 + 8) = 7;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 1;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 1;
  *(undefined4 *)(param_1 + 0x604) = 0;
  *(undefined4 *)(param_1 + 0x608) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x77c) = 0xff;
  *(undefined1 *)(param_1 + 0x77d) = 0xff;
  *(undefined1 *)(param_1 + 0x77e) = 0xff;
  *(undefined1 *)(param_1 + 0x77f) = 0xff;
  *(undefined1 *)(param_1 + 0x780) = 0xff;
  *(undefined1 *)(param_1 + 0x781) = 0xff;
  *(undefined1 *)(param_1 + 0x788) = 0;
  *(undefined1 *)(param_1 + 0x789) = 0xff;
  *(undefined1 *)(param_1 + 0x78a) = 0xff;
  *(undefined1 *)(param_1 + 0x78b) = 0xff;
  *(undefined1 *)(param_1 + 0x78c) = 0xff;
  *(undefined1 *)(param_1 + 0x78d) = 0xff;
  *(undefined1 *)(param_1 + 0x78e) = 0xff;
  *(undefined1 *)(param_1 + 0x78f) = 0xff;
  *(undefined1 *)(param_1 + 0x790) = 0xff;
  *(undefined1 *)(param_1 + 0x791) = 0xff;
  *(undefined1 *)(param_1 + 0x792) = 0xff;
  *(undefined1 *)(param_1 + 0x793) = 0xff;
  *(undefined1 *)(param_1 + 0x794) = 0xff;
  *(undefined1 *)(param_1 + 0x795) = 0xff;
  *(undefined4 *)(param_1 + 0x798) = 0;
  *(undefined4 *)(param_1 + 0x79c) = 0;
  *(undefined4 *)(param_1 + 0x7a0) = 0;
  *(undefined4 *)(param_1 + 0x7a4) = 0;
  *(undefined4 *)(param_1 + 0x7a8) = 0;
  *(undefined4 *)(param_1 + 0x7ac) = 0;
  *(undefined4 *)(param_1 + 0x7b0) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x7b4) = 0;
  *(undefined4 *)(param_1 + 0x7b8) = 0;
  *(undefined4 *)(param_1 + 0x7bc) = 0;
  *(undefined4 *)(param_1 + 0x7c0) = 0;
  *(undefined4 *)(param_1 + 0x7c4) = 0;
  *(undefined4 *)(param_1 + 0x7c8) = 0;
  *(undefined4 *)(param_1 + 0x7cc) = 0;
  *(undefined4 *)(param_1 + 2000) = 0;
  *(undefined4 *)(param_1 + 0x7d4) = 0;
  *(undefined4 *)(param_1 + 0x7d8) = 0;
  *(undefined4 *)(param_1 + 0x7dc) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined1 *)(param_1 + 0x7e0) = 0xff;
  return;
}

// 00FAD470  FUN_00fad470  size=392  [between]
void __fastcall FUN_00fad470(int param_1)

{
  int iVar1;
  undefined **ppuVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  uint uVar6;
  int local_10;
  int local_c;
  
  puVar4 = (undefined4 *)(param_1 + 0x2724);
  for (iVar1 = 0x200; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_c = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    piVar5 = (int *)(param_1 + 0x14);
LAB_00fad4a0:
    uVar3 = 0;
    do {
      iVar1 = FUN_00fdbbd0(*(undefined4 *)(*piVar5 + 0x784),(&PTR_s_Vfx00__018dafa0)[uVar3]);
      if (iVar1 != 0) {
        if (uVar3 != 0xffffffff) {
          uVar6 = 0;
          ppuVar2 = &PTR_s_Vfx00_XBCXX_018dafb0 + uVar3;
          goto LAB_00fad4e3;
        }
        break;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 4);
    goto LAB_00fad526;
  }
LAB_00fad53f:
  puVar4 = (undefined4 *)(param_1 + 0x2f24);
  for (iVar1 = 0x5a0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_10 = 0;
  if (*(int *)(param_1 + 0x10) < 1) {
    return;
  }
  piVar5 = (int *)(param_1 + 0x14);
LAB_00fad560:
  uVar3 = 0;
  do {
    iVar1 = FUN_00fdbbd0(*(undefined4 *)(*piVar5 + 0x784),(&PTR_s_Wtr00__018db7b0)[uVar3]);
    if (iVar1 != 0) {
      if (uVar3 != 0xffffffff) {
        uVar6 = 0;
        ppuVar2 = &PTR_s_Wtr00_XBCXX_018db7d8 + uVar3;
        goto LAB_00fad5a3;
      }
      break;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 10);
  goto LAB_00fad5f0;
  while( true ) {
    uVar6 = uVar6 + 1;
    ppuVar2 = ppuVar2 + 4;
    if (0x7f < uVar6) break;
LAB_00fad4e3:
    iVar1 = __stricmp(*(char **)(*piVar5 + 0x784),*ppuVar2);
    if (iVar1 == 0) {
      *(int *)(param_1 + 0x2724 + ((uVar3 & 0x7fffff) * 0x80 + uVar6) * 4) = local_c;
      break;
    }
  }
LAB_00fad526:
  local_c = local_c + 1;
  piVar5 = piVar5 + 1;
  if (*(int *)(param_1 + 0x10) <= local_c) goto LAB_00fad53f;
  goto LAB_00fad4a0;
  while( true ) {
    uVar6 = uVar6 + 1;
    ppuVar2 = ppuVar2 + 10;
    if (0x8f < uVar6) break;
LAB_00fad5a3:
    iVar1 = __stricmp(*(char **)(*piVar5 + 0x784),*ppuVar2);
    if (iVar1 == 0) {
      *(int *)(param_1 + 0x2f24 + ((uVar3 * 0x5a0) / 10 + uVar6) * 4) = local_10;
      break;
    }
  }
LAB_00fad5f0:
  local_10 = local_10 + 1;
  piVar5 = piVar5 + 1;
  if (*(int *)(param_1 + 0x10) <= local_10) {
    return;
  }
  goto LAB_00fad560;
}

// 00FAD610  FUN_00fad610  size=53  [between]
void __fastcall FUN_00fad610(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    piVar2 = (int *)(param_1 + 0x14);
    do {
      if ((undefined4 *)*piVar2 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar2)(1);
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x10));
  }
  FUN_00dd7270();
  return;
}

// 00FAD650  FUN_00fad650  size=25  [between]
undefined4 __thiscall FUN_00fad650(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x10) < param_2) {
    return 0;
  }
  return *(undefined4 *)(param_1 + 0x14 + param_2 * 4);
}

// 00FAD670  FUN_00fad670  size=1500  [between]
void __thiscall FUN_00fad670(int *param_1,int param_2,byte *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  *(undefined4 *)(param_2 + 0x6c) = 0;
  if ((*param_3 & 0x80) != 0) {
    *(int *)(param_2 + 0x78) = *param_1;
    *(undefined4 *)(param_2 + 0x6c) = 1;
    puVar1 = (undefined4 *)(param_2 + 0x66c + *param_1 * 0x18);
    puVar1[2] = 2;
    puVar1[1] = 2;
    *puVar1 = 2;
    puVar1[4] = 1;
    puVar1[3] = 1;
    puVar1[5] = 1;
    *param_1 = *param_1 + 1;
    param_1[1] = param_1[1] + 1;
  }
  if ((*param_3 & 2) != 0) {
    if ((((param_3[5] & 8) == 0) && ((param_3[9] & 0x10) == 0)) || ((param_3[0xb] & 4) != 0)) {
      iVar2 = *param_1;
      *(int *)(param_2 + 0x6c) = *(int *)(param_2 + 0x6c) + 1;
      *(int *)(param_2 + 0x7c) = iVar2;
    }
    puVar1 = (undefined4 *)(param_2 + 0x66c + *param_1 * 0x18);
    puVar1[2] = 2;
    puVar1[1] = 2;
    *puVar1 = 2;
    puVar1[4] = 1;
    puVar1[3] = 1;
    puVar1[5] = 1;
    *param_1 = *param_1 + 1;
    param_1[1] = param_1[1] + 1;
  }
  if (((*param_3 & 8) == 0) && ((param_3[8] & 1) == 0)) {
    param_1[1] = -1;
  }
  else {
    if ((((param_3[5] & 8) == 0) && ((param_3[9] & 0x10) == 0)) || ((param_3[0xb] & 8) != 0)) {
      *(int *)(param_2 + 0x80) = *param_1;
      if ((param_3[8] & 1) == 0) {
        *(int *)(param_2 + 0x6c) = *(int *)(param_2 + 0x6c) + 1;
      }
      *(int *)(param_2 + 0x6c) = *(int *)(param_2 + 0x6c) + 1;
    }
    puVar1 = (undefined4 *)(param_2 + 0x66c + *param_1 * 0x18);
    puVar1[2] = 2;
    puVar1[1] = 2;
    *puVar1 = 2;
    puVar1[4] = 1;
    puVar1[3] = 1;
    puVar1[5] = 1;
    *param_1 = *param_1 + 1;
    param_1[1] = param_1[1] + 1;
  }
  if ((param_3[5] & 0x40) != 0) {
    if ((((param_3[5] & 8) == 0) && ((param_3[9] & 0x10) == 0)) || ((param_3[0xb] & 8) != 0)) {
      *(undefined4 *)(param_2 + 0x7a0) = 1;
      iVar2 = *param_1;
      *(int *)(param_2 + 0x6c) = *(int *)(param_2 + 0x6c) + 2;
      *(int *)(param_2 + 0x80) = iVar2;
    }
    puVar1 = (undefined4 *)(param_2 + 0x66c + *param_1 * 0x18);
    puVar1[2] = 2;
    puVar1[1] = 2;
    *puVar1 = 2;
    puVar1[4] = 1;
    puVar1[3] = 1;
    puVar1[5] = 1;
    *param_1 = *param_1 + 1;
  }
  if ((*param_3 & 1) != 0) {
    if ((((param_3[5] & 8) == 0) && ((param_3[9] & 0x10) == 0)) || ((param_3[0xb] & 2) == 0)) {
      iVar2 = *param_1;
      *(int *)(param_2 + 0x6c) = *(int *)(param_2 + 0x6c) + 1;
      *(int *)(param_2 + 0x84) = iVar2;
    }
    puVar1 = (undefined4 *)(param_2 + 0x66c + *param_1 * 0x18);
    puVar1[2] = 2;
    puVar1[1] = 2;
    *puVar1 = 2;
    puVar1[4] = 3;
    puVar1[3] = 3;
    puVar1[5] = 1;
    *param_1 = *param_1 + 1;
  }
  if ((param_3[5] & 0x10) == 0) {
    if ((param_3[8] & 8) == 0) {
      if (((((param_3[5] & 8) == 0) && ((param_3[9] & 0x10) == 0)) ||
          (*(int *)(param_2 + 0x14) != 0)) ||
         ((((param_3[9] & 0x10) != 0 && ((param_3[3] & 0x10) != 0)) && ((param_3[0xb] & 2) == 0))))
      {
        iVar2 = *param_1;
        *(int *)(param_2 + 0x6c) = *(int *)(param_2 + 0x6c) + 1;
        *(int *)(param_2 + 0x8c) = iVar2;
        if ((param_3[0xb] & 0x40) == 0) {
          *(int *)(param_2 + 0x6c) = *(int *)(param_2 + 0x6c) + 1;
        }
      }
      puVar1 = (undefined4 *)(param_2 + 0x66c + *param_1 * 0x18);
      puVar1[2] = 2;
      puVar1[1] = 2;
      *puVar1 = 2;
      puVar1[4] = 1;
      puVar1[3] = 1;
      puVar1[5] = 1;
      *param_1 = *param_1 + 1;
    }
    if ((*(int *)(param_2 + 0x14) != 0) &&
       (((param_3[2] & 0x40) != 0 || ((param_3[7] & 0x10) != 0)))) {
      *(int *)(param_2 + 0x90) = *param_1;
      puVar1 = (undefined4 *)(param_2 + 0x66c + *param_1 * 0x18);
      puVar1[2] = 2;
      puVar1[1] = 2;
      *puVar1 = 2;
      puVar1[4] = 1;
      puVar1[3] = 1;
      puVar1[5] = 1;
      *param_1 = *param_1 + 1;
      *(int *)(param_2 + 0x6c) = *(int *)(param_2 + 0x6c) + 1;
    }
  }
  else {
    *(int *)(param_2 + 0x8c) = *param_1;
    iVar2 = *param_1;
    *(undefined4 *)(param_2 + 0x67c + iVar2 * 0x18) = 1;
    *(undefined4 *)(param_2 + 0x678 + iVar2 * 0x18) = 1;
    *(undefined4 *)(param_2 + 0x680 + iVar2 * 0x18) = 1;
    puVar1 = (undefined4 *)(param_2 + 0x66c + iVar2 * 0x18);
    puVar1[2] = 2;
    puVar1[1] = 2;
    *puVar1 = 2;
    *param_1 = *param_1 + 1;
    *(int *)(param_2 + 0x90) = *param_1;
    iVar2 = *param_1;
    *(undefined4 *)(param_2 + 0x674 + iVar2 * 0x18) = 2;
    *(undefined4 *)(param_2 + 0x670 + iVar2 * 0x18) = 2;
    *(undefined4 *)(param_2 + 0x66c + iVar2 * 0x18) = 2;
    *(undefined4 *)(param_2 + 0x67c + iVar2 * 0x18) = 1;
    *(undefined4 *)(param_2 + 0x678 + iVar2 * 0x18) = 1;
    *(undefined4 *)(param_2 + 0x680 + iVar2 * 0x18) = 1;
    *param_1 = *param_1 + 1;
    *(int *)(param_2 + 0x98) = *param_1;
    puVar1 = (undefined4 *)(param_2 + 0x66c + *param_1 * 0x18);
    puVar1[2] = 2;
    puVar1[1] = 2;
    *puVar1 = 2;
    puVar1[4] = 1;
    puVar1[3] = 1;
    puVar1[5] = 1;
    *param_1 = *param_1 + 1;
  }
  if ((param_3[1] & 0x40) == 0) {
    if (((*param_3 & 0x10) != 0) || ((param_3[5] & 4) != 0)) {
      if (((param_3[5] & 4) == 0) &&
         ((((param_3[5] & 8) == 0 && ((param_3[9] & 0x10) == 0)) || ((param_3[0xb] & 1) == 0)))) {
        iVar2 = *param_1;
        *(int *)(param_2 + 0x6c) = *(int *)(param_2 + 0x6c) + 1;
        *(int *)(param_2 + 0x94) = iVar2;
      }
      puVar1 = (undefined4 *)(param_2 + 0x66c + *param_1 * 0x18);
      puVar1[2] = 2;
      puVar1[1] = 2;
      *puVar1 = 2;
      puVar1[4] = 1;
      puVar1[3] = 1;
      puVar1[5] = 1;
      *param_1 = *param_1 + 1;
    }
  }
  else {
    *(int *)(param_2 + 0x9c) = *param_1;
    puVar1 = (undefined4 *)(param_2 + 0x66c + *param_1 * 0x18);
    puVar1[2] = 2;
    puVar1[1] = 2;
    *puVar1 = 2;
    puVar1[4] = 1;
    puVar1[3] = 1;
    puVar1[5] = 1;
    *(undefined4 *)(param_2 + 0x7b0) = 1;
    *param_1 = *param_1 + 1;
    *(int *)(param_2 + 0x6c) = *(int *)(param_2 + 0x6c) + 1;
  }
  if (((param_3[1] & 0x20) != 0) || ((param_3[8] & 4) != 0)) {
    if (((param_3[5] & 4) == 0) &&
       ((((param_3[5] & 8) == 0 && ((param_3[9] & 0x10) == 0)) || ((param_3[0xb] & 1) == 0)))) {
      iVar2 = *param_1;
      *(int *)(param_2 + 0x6c) = *(int *)(param_2 + 0x6c) + 1;
      *(int *)(param_2 + 0x94) = iVar2;
    }
    puVar1 = (undefined4 *)(param_2 + 0x66c + *param_1 * 0x18);
    puVar1[2] = 2;
    puVar1[1] = 2;
    *puVar1 = 2;
    puVar1[4] = 1;
    puVar1[3] = 1;
    puVar1[5] = 1;
    *param_1 = *param_1 + 1;
  }
  if (((param_3[9] & 8) != 0) && ((param_3[10] & 4) == 0)) {
    puVar1 = (undefined4 *)(param_2 + 0x66c + *param_1 * 0x18);
    *(int *)(param_2 + 0x94) = *param_1;
    puVar1[2] = 2;
    puVar1[1] = 2;
    *puVar1 = 2;
    puVar1[4] = 1;
    puVar1[3] = 1;
    puVar1[5] = 1;
    *param_1 = *param_1 + 1;
  }
  if (((*param_3 & 0x20) != 0) && ((param_3[10] & 0x40) == 0)) {
    if ((((param_3[5] & 8) == 0) && ((param_3[9] & 0x10) == 0)) || ((param_3[0xb] & 1) == 0)) {
      iVar2 = *param_1;
      *(int *)(param_2 + 0x6c) = *(int *)(param_2 + 0x6c) + 1;
      *(int *)(param_2 + 0xa0) = iVar2;
    }
    puVar1 = (undefined4 *)(param_2 + 0x66c + *param_1 * 0x18);
    puVar1[2] = 2;
    puVar1[1] = 2;
    *puVar1 = 2;
    puVar1[4] = 3;
    puVar1[3] = 3;
    puVar1[5] = 1;
    *param_1 = *param_1 + 1;
  }
  if ((param_3[1] & 1) == 0) {
    *(int *)(param_2 + 0x6c) = *(int *)(param_2 + 0x6c) + 1;
    *(undefined4 *)(param_2 + 0xa4) = 0xb;
  }
  if ((param_3[0xc] & 0x40) != 0) {
    *(undefined4 *)(param_2 + 0x7c) = 1;
    *(undefined4 *)(param_2 + 0x68c) = 2;
    *(undefined4 *)(param_2 + 0x688) = 2;
    *(undefined4 *)(param_2 + 0x684) = 2;
    *(undefined4 *)(param_2 + 0x694) = 1;
    *(undefined4 *)(param_2 + 0x690) = 1;
    *(undefined4 *)(param_2 + 0x698) = 1;
    *(undefined4 *)(param_2 + 0x80) = 2;
    *(undefined4 *)(param_2 + 0x6a4) = 2;
    *(undefined4 *)(param_2 + 0x6a0) = 2;
    *(undefined4 *)(param_2 + 0x69c) = 2;
    *(undefined4 *)(param_2 + 0x6ac) = 1;
    *(undefined4 *)(param_2 + 0x6a8) = 1;
    *(undefined4 *)(param_2 + 0x6b0) = 1;
    *(undefined4 *)(param_2 + 0x8c) = 3;
    *(undefined4 *)(param_2 + 0x6bc) = 2;
    *(undefined4 *)(param_2 + 0x6b8) = 2;
    *(undefined4 *)(param_2 + 0x6b4) = 2;
    *(undefined4 *)(param_2 + 0x6c4) = 1;
    *(undefined4 *)(param_2 + 0x6c0) = 1;
    *(undefined4 *)(param_2 + 0x6c8) = 1;
    *(undefined4 *)(param_2 + 0x90) = 4;
    *(undefined4 *)(param_2 + 0x6d4) = 2;
    *(undefined4 *)(param_2 + 0x6d0) = 2;
    *(undefined4 *)(param_2 + 0x6cc) = 2;
    *(undefined4 *)(param_2 + 0x6dc) = 1;
    *(undefined4 *)(param_2 + 0x6d8) = 1;
    *(undefined4 *)(param_2 + 0x6e0) = 1;
    *(undefined4 *)(param_2 + 0x98) = 5;
    *(undefined4 *)(param_2 + 0x6ec) = 2;
    *(undefined4 *)(param_2 + 0x6e8) = 2;
    *(undefined4 *)(param_2 + 0x6e4) = 2;
    *(undefined4 *)(param_2 + 0x6f4) = 1;
    *(undefined4 *)(param_2 + 0x6f0) = 1;
    *(undefined4 *)(param_2 + 0x6f8) = 1;
    *(undefined4 *)(param_2 + 0x9c) = 6;
    *(undefined4 *)(param_2 + 0x704) = 2;
    *(undefined4 *)(param_2 + 0x700) = 2;
    *(undefined4 *)(param_2 + 0x6fc) = 2;
    *(undefined4 *)(param_2 + 0x70c) = 1;
    *(undefined4 *)(param_2 + 0x708) = 1;
    *(undefined4 *)(param_2 + 0x710) = 1;
    *(undefined4 *)(param_2 + 0x94) = 7;
    *(undefined4 *)(param_2 + 0x71c) = 2;
    *(undefined4 *)(param_2 + 0x718) = 2;
    *(undefined4 *)(param_2 + 0x714) = 2;
    *(undefined4 *)(param_2 + 0x724) = 1;
    *(undefined4 *)(param_2 + 0x720) = 1;
    *(undefined4 *)(param_2 + 0x728) = 1;
    *(undefined4 *)(param_2 + 0xa0) = 8;
    *(undefined4 *)(param_2 + 0x734) = 2;
    *(undefined4 *)(param_2 + 0x730) = 2;
    *(undefined4 *)(param_2 + 0x72c) = 2;
    *(undefined4 *)(param_2 + 0x73c) = 3;
    *(undefined4 *)(param_2 + 0x738) = 3;
    *(undefined4 *)(param_2 + 0x740) = 1;
    *param_1 = 9;
  }
  return;
}

// 00FADC50  FUN_00fadc50  size=1102  [between]
void __thiscall FUN_00fadc50(int param_1,int param_2,byte *param_3)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  char cVar4;
  
  *(undefined1 *)(param_1 + 0xf) = 0xff;
  *(undefined1 *)(param_1 + 0xe) = 0xff;
  *(undefined1 *)(param_1 + 0xd) = 0xff;
  *(undefined1 *)(param_1 + 0xc) = 0xff;
  *(undefined1 *)(param_1 + 0xb) = 0xff;
  *(undefined1 *)(param_1 + 10) = 0xff;
  *(undefined4 *)(param_2 + 0x7a8) = 0;
  if ((param_3[5] & 0x80) != 0) {
    *(undefined4 *)(param_2 + 0x7a8) = 1;
  }
  if ((param_3[8] & 0x20) != 0) {
    *(char *)(param_1 + 8) = *(char *)(param_1 + 8) + '\x01';
  }
  *(undefined4 *)(param_2 + 0x774) = 0;
  *(undefined4 *)(param_2 + 0x770) = 0;
  *(undefined4 *)(param_2 + 0x76c) = 0;
  if ((param_3[5] & 8) != 0) {
    *(char *)(param_1 + 9) = *(char *)(param_1 + 9) + '\x01';
    uVar2 = *(undefined1 *)(param_1 + 9);
    if ((*param_3 & 0x20) != 0) {
      *(undefined1 *)(param_1 + 0xf) = uVar2;
      *(undefined1 *)(param_2 + 0x788) = 1;
      *(char *)(param_1 + 9) = *(char *)(param_1 + 9) + '\x01';
      uVar2 = *(undefined1 *)(param_1 + 9);
    }
    if ((*param_3 & 1) != 0) {
      *(undefined1 *)(param_2 + 0x78d) = uVar2;
      *(undefined1 *)(param_2 + 0x790) = *(undefined1 *)(param_1 + 9);
      *(char *)(param_1 + 9) = *(char *)(param_1 + 9) + '\x01';
      uVar2 = *(undefined1 *)(param_1 + 9);
    }
    *(undefined1 *)(param_2 + 0x78c) = uVar2;
    *(char *)(param_1 + 9) = *(char *)(param_1 + 9) + '\x01';
    *(undefined1 *)(param_2 + 0x78f) = *(undefined1 *)(param_1 + 9);
    *(char *)(param_1 + 9) = *(char *)(param_1 + 9) + '\x03';
    goto LAB_00fadfc6;
  }
  if ((param_3[3] & 4) != 0) {
    *(char *)(param_1 + 9) = *(char *)(param_1 + 9) + '\x01';
    *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_1 + 9);
    *(undefined1 *)(param_2 + 0x788) = 1;
    *(char *)(param_1 + 9) = *(char *)(param_1 + 9) + '\x01';
    *(undefined1 *)(param_2 + 0x78d) = *(undefined1 *)(param_1 + 9);
    *(char *)(param_1 + 9) = *(char *)(param_1 + 9) + '\x01';
    if ((param_3[4] & 0x20) != 0) {
      *(undefined1 *)(param_2 + 0x78a) = *(undefined1 *)(param_1 + 9);
    }
    *(char *)(param_1 + 9) = *(char *)(param_1 + 9) + '\x01';
    *(undefined1 *)(param_2 + 0x789) = *(undefined1 *)(param_1 + 9);
    *(undefined1 *)(param_2 + 0x78b) = *(undefined1 *)(param_1 + 9);
LAB_00fade38:
    *(char *)(param_1 + 9) = *(char *)(param_1 + 9) + '\x01';
    *(undefined1 *)(param_2 + 0x78c) = *(undefined1 *)(param_1 + 9);
    *(char *)(param_1 + 9) = *(char *)(param_1 + 9) + '\x02';
    goto LAB_00fadfc6;
  }
  if ((param_3[1] & 0x20) != 0) {
    *(char *)(param_1 + 9) = *(char *)(param_1 + 9) + '\x01';
    *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_1 + 9);
    *(undefined1 *)(param_2 + 0x788) = 1;
    *(char *)(param_1 + 9) = *(char *)(param_1 + 9) + '\x01';
    *(undefined1 *)(param_2 + 0x78d) = *(undefined1 *)(param_1 + 9);
    *(char *)(param_1 + 9) = *(char *)(param_1 + 9) + '\x01';
    if ((param_3[4] & 0x20) != 0) {
      *(undefined1 *)(param_2 + 0x78a) = *(undefined1 *)(param_1 + 9);
    }
    *(char *)(param_1 + 9) = *(char *)(param_1 + 9) + '\x01';
    *(undefined1 *)(param_2 + 0x789) = *(undefined1 *)(param_1 + 9);
    *(undefined1 *)(param_2 + 0x78b) = *(undefined1 *)(param_1 + 9);
    *(char *)(param_1 + 9) = *(char *)(param_1 + 9) + '\x01';
    *(undefined1 *)(param_2 + 0x793) = *(undefined1 *)(param_1 + 9);
    *(char *)(param_1 + 9) = *(char *)(param_1 + 9) + '\x03';
    *(undefined1 *)(param_2 + 0x78c) = *(undefined1 *)(param_1 + 9);
    *(char *)(param_1 + 9) = *(char *)(param_1 + 9) + '\x02';
    goto LAB_00fadfc6;
  }
  if ((param_3[8] & 8) != 0) {
    *(char *)(param_1 + 9) = *(char *)(param_1 + 9) + '\x01';
    *(undefined1 *)(param_2 + 0x78e) = *(undefined1 *)(param_1 + 9);
    *(char *)(param_1 + 9) = *(char *)(param_1 + 9) + '\x02';
    goto LAB_00fadfc6;
  }
  if (((param_3[9] & 0x10) != 0) && ((param_3[5] & 0x40) != 0)) {
    *(char *)(param_1 + 9) = *(char *)(param_1 + 9) + '\x01';
    *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_1 + 9);
    *(undefined1 *)(param_2 + 0x788) = 1;
    *(char *)(param_1 + 9) = *(char *)(param_1 + 9) + '\x01';
    *(undefined1 *)(param_2 + 0x78d) = *(undefined1 *)(param_1 + 9);
    *(char *)(param_1 + 9) = *(char *)(param_1 + 9) + '\x01';
    *(undefined1 *)(param_2 + 0x78c) = *(undefined1 *)(param_1 + 9);
    *(char *)(param_1 + 9) = *(char *)(param_1 + 9) + '\x01';
    goto LAB_00fadfc6;
  }
  if ((param_3[9] & 0x10) != 0) {
    *(undefined4 *)(param_2 + 0x7cc) = 1;
    *(char *)(param_1 + 9) = *(char *)(param_1 + 9) + '\x01';
    *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_1 + 9);
    *(undefined1 *)(param_2 + 0x788) = 1;
    *(char *)(param_1 + 9) = *(char *)(param_1 + 9) + '\x01';
    *(undefined1 *)(param_2 + 0x78d) = *(undefined1 *)(param_1 + 9);
    goto LAB_00fade38;
  }
  *(char *)(param_1 + 9) = *(char *)(param_1 + 9) + '\x01';
  cVar3 = *(char *)(param_1 + 9);
  if ((param_3[10] & 0x80) != 0) {
    *(char *)(param_2 + 0x795) = cVar3;
    *(char *)(param_1 + 9) = *(char *)(param_1 + 9) + '\x01';
    cVar3 = *(char *)(param_1 + 9);
  }
  if ((param_3[6] & 8) != 0) {
    *(char *)(param_1 + 9) = cVar3 + '\x01';
  }
  if ((param_3[6] & 1) != 0) {
    *(undefined1 *)(param_2 + 0x7e0) = *(undefined1 *)(param_1 + 9);
    *(char *)(param_1 + 9) = *(char *)(param_1 + 9) + '\x01';
  }
  if ((*param_3 & 0x20) != 0) {
    *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_1 + 9);
    *(undefined1 *)(param_2 + 0x788) = 1;
    *(char *)(param_1 + 9) = *(char *)(param_1 + 9) + '\x01';
  }
  if (((*param_3 & 1) != 0) &&
     (((*(undefined1 *)(param_2 + 0x78d) = *(undefined1 *)(param_1 + 9), (param_3[3] & 2) != 0 ||
       ((param_3[2] & 4) != 0)) || ((param_3[1] & 0x80) != 0)))) {
    *(char *)(param_1 + 9) = *(char *)(param_1 + 9) + '\x01';
  }
  if ((*param_3 & 2) != 0) {
    *(char *)(param_1 + 9) = *(char *)(param_1 + 9) + '\x01';
  }
  if ((param_3[5] & 0x10) == 0) {
    *(undefined1 *)(param_2 + 0x790) = *(undefined1 *)(param_1 + 9);
    *(char *)(param_1 + 9) = *(char *)(param_1 + 9) + '\x01';
    if ((param_3[5] & 0x10) != 0) goto LAB_00faded7;
  }
  else {
LAB_00faded7:
    *(char *)(param_1 + 9) = *(char *)(param_1 + 9) + '\x02';
  }
  if ((param_3[2] & 1) != 0) {
    *(undefined1 *)(param_2 + 0x791) = *(undefined1 *)(param_1 + 9);
    *(char *)(param_1 + 9) = *(char *)(param_1 + 9) + '\x01';
  }
  if ((param_3[3] & 0x80) != 0) {
    *(char *)(param_1 + 9) = *(char *)(param_1 + 9) + '\x01';
  }
  if ((param_3[2] & 2) != 0) {
    *(undefined1 *)(param_2 + 0x792) = *(undefined1 *)(param_1 + 9);
    *(char *)(param_1 + 9) = *(char *)(param_1 + 9) + '\x05';
  }
  if ((param_3[9] & 8) != 0) {
    *(undefined4 *)(param_2 + 0x68) = 1;
    *(char *)(param_1 + 9) = *(char *)(param_1 + 9) + '\x01';
  }
  if ((param_3[4] & 0x80) != 0) {
    *(char *)(param_1 + 9) = *(char *)(param_1 + 9) + '\x02';
  }
  if ((param_3[3] & 0x20) != 0) {
    *(undefined1 *)(param_2 + 0x794) = *(undefined1 *)(param_1 + 9);
    *(char *)(param_1 + 9) = *(char *)(param_1 + 9) + '\x02';
  }
  if ((param_3[4] & 0x20) != 0) {
    *(undefined1 *)(param_2 + 0x78a) = *(undefined1 *)(param_1 + 9);
    *(char *)(param_1 + 9) = *(char *)(param_1 + 9) + '\x01';
  }
  if ((((param_3[4] & 0x10) != 0) || ((param_3[4] & 8) != 0)) || ((param_3[7] & 0x20) != 0)) {
    *(undefined1 *)(param_2 + 0x78b) = *(undefined1 *)(param_1 + 9);
    *(char *)(param_1 + 9) = *(char *)(param_1 + 9) + '\x01';
  }
  if ((param_3[6] & 2) != 0) {
    *(char *)(param_1 + 9) = *(char *)(param_1 + 9) + '\x01';
  }
  if ((param_3[4] & 4) != 0) {
    *(undefined1 *)(param_2 + 0x78e) = *(undefined1 *)(param_1 + 9);
    *(char *)(param_1 + 9) = *(char *)(param_1 + 9) + '\x01';
  }
  if ((param_3[4] & 2) != 0) {
    *(char *)(param_1 + 9) = *(char *)(param_1 + 9) + '\x01';
  }
  if ((param_3[6] & 0x40) != 0) {
    *(undefined1 *)(param_2 + 0x789) = *(undefined1 *)(param_1 + 9);
    *(char *)(param_1 + 9) = *(char *)(param_1 + 9) + '\x01';
  }
  if ((param_3[10] & 8) != 0) {
    *(char *)(param_1 + 9) = *(char *)(param_1 + 9) + '\x01';
  }
  if ((param_3[10] & 0x10) != 0) {
    *(char *)(param_1 + 9) = *(char *)(param_1 + 9) + '\x02';
  }
  *(undefined1 *)(param_2 + 0x78c) = *(undefined1 *)(param_1 + 9);
  *(char *)(param_1 + 9) = *(char *)(param_1 + 9) + '\x01';
  if ((param_3[1] & 0x40) != 0) {
    *(char *)(param_1 + 9) = *(char *)(param_1 + 9) + '\x01';
  }
LAB_00fadfc6:
  *(int *)(param_2 + 0x70) = (int)*(char *)(param_1 + 9);
  *(int *)(param_2 + 0x76c) = (int)*(char *)(param_1 + 9);
  if ((param_3[6] & 0x10) != 0) {
    *(undefined4 *)(param_2 + 0x798) = 1;
  }
  *(char *)(param_1 + 0xb) = *(char *)(param_1 + 9) - *(char *)(param_2 + 0x76c);
  cVar3 = *(char *)(param_1 + 9);
  cVar4 = cVar3 + '\x06';
  *(char *)(param_1 + 9) = cVar4;
  if ((param_3[1] & 2) == 0) {
    *(char *)(param_1 + 10) = cVar4 - *(char *)(param_2 + 0x76c);
    *(char *)(param_1 + 9) = cVar3 + '\b';
  }
  *(char *)(param_1 + 0xc) = *(char *)(param_1 + 9) - *(char *)(param_2 + 0x76c);
  cVar3 = *(char *)(param_1 + 9);
  cVar4 = cVar3 + '\x02';
  *(char *)(param_1 + 9) = cVar4;
  if ((param_3[2] & 0x80) == 0) {
    *(char *)(param_1 + 0xd) = cVar4 - *(char *)(param_2 + 0x76c);
    *(char *)(param_1 + 9) = cVar3 + '\x03';
  }
  if ((((*param_3 & 0x20) != 0) || ((*param_3 & 0x40) != 0)) ||
     ((*(int *)(param_2 + 0x14) != 0 || ((param_3[3] & 1) != 0)))) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 9) - *(char *)(param_2 + 0x76c);
    *(char *)(param_1 + 9) = *(char *)(param_1 + 9) + '\x02';
  }
  cVar3 = *(char *)(param_1 + 9);
  iVar1 = *(int *)(param_2 + 0x76c);
  *(int *)(param_2 + 0x76c) = iVar1 * 4;
  *(int *)(param_2 + 0x770) = (cVar3 - iVar1) * 4;
  *(undefined4 *)(param_2 + 0x774) = 0x10;
  return;
}

// 00FAE0A0  FUN_00fae0a0  size=611  [between]
void __thiscall FUN_00fae0a0(int *param_1,int param_2,byte *param_3)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  
  iVar5 = 0;
  bVar2 = false;
  bVar7 = false;
  bVar3 = false;
  if (((((*(int *)(param_2 + 0x14) != 0) || (bVar1 = *param_3, (bVar1 & 0x40) != 0)) ||
       ((bVar1 & 0x20) != 0)) || (((bVar1 & 1) != 0 || ((param_3[7] & 0x20) != 0)))) ||
     ((param_3[10] & 0x10) != 0)) {
    bVar2 = true;
  }
  if ((param_3[0xc] & 0x80) != 0) {
    bVar2 = false;
  }
  if (((param_3[5] & 8) == 0) && ((param_3[9] & 0x10) == 0)) {
    bVar4 = *param_3;
    if (((((bVar4 & 0x80) == 0) || ((param_3[3] & 0x20) != 0)) || ((bVar4 & 2) != 0)) ||
       ((((param_3[2] & 0x40) != 0 || ((param_3[7] & 0x10) != 0)) ||
        (((param_3[2] & 0x20) != 0 || (((param_3[3] & 8) != 0 || ((param_3[4] & 0x40) != 0)))))))) {
      bVar7 = true;
    }
    if (((param_3[8] & 8) != 0) && ((param_3[0xb] & 0x20) == 0)) {
      bVar7 = false;
    }
    if ((*(int *)(param_2 + 0x14) != 0) || ((param_3[3] & 0x20) != 0)) {
      bVar3 = true;
    }
    bVar6 = (param_3[5] & 0x10) != 0 || ((param_3[8] & 1) != 0 || (bVar4 & 8) != 0);
    if ((param_3[10] & 0x40) != 0) {
      bVar6 = true;
      bVar7 = false;
    }
  }
  else {
    bVar1 = param_3[0xb];
    bVar7 = (bVar1 & 0x20) != 0;
    if (((bVar1 & 0x10) != 0) && (((param_3[10] & 2) == 0 && ((bVar1 & 0x40) == 0)))) {
      bVar3 = true;
    }
    bVar4 = *param_3;
    bVar6 = (param_3[8] & 1) != 0 || ((bVar4 & 8) != 0 || (bVar1 & 8) != 0);
    if ((param_3[5] & 0x40) != 0) {
      bVar6 = (param_3[7] & 2) != 0;
    }
  }
  if ((*param_1 < 2) && ((*param_1 != 1 || ((bVar4 & 1) != 0)))) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  if (!bVar2) {
    iVar5 = 0x23;
    if (bVar7) {
      iVar5 = 0x2a;
      if (-2 < param_1[1]) {
        iVar5 = 0x2b;
      }
      if (*(int *)(param_2 + 4) != 0) {
        iVar5 = iVar5 + 3;
      }
      bVar8 = !bVar6;
    }
    else {
      if (-2 < param_1[1]) {
        iVar5 = 0x25;
      }
      if (*(int *)(param_2 + 4) != 0) {
        iVar5 = iVar5 + 5;
      }
      bVar8 = !bVar8;
    }
    goto LAB_00fae2f4;
  }
  if (bVar7) {
    iVar5 = 0xf;
    if (bVar3) {
      iVar5 = 0x1a;
      if (-2 < param_1[1]) {
        iVar5 = 0x1d;
      }
      if (*(int *)(param_2 + 4) != 0) {
        iVar5 = iVar5 + 7;
        bVar8 = !bVar6;
        goto LAB_00fae2f4;
      }
    }
    else {
      if (-2 < param_1[1]) {
        iVar5 = 0x12;
      }
      if (*(int *)(param_2 + 4) != 0) {
        iVar5 = iVar5 + 7;
      }
    }
    if (bVar8) {
      iVar5 = iVar5 + 1;
    }
  }
  else {
    if (bVar3) {
      iVar5 = 9;
      if (-2 < param_1[1]) {
        iVar5 = 0xb;
      }
      if (*(int *)(param_2 + 4) != 0) {
        iVar5 = iVar5 + 4;
      }
      bVar8 = !bVar6;
      goto LAB_00fae2f4;
    }
    if (-2 < param_1[1]) {
      iVar5 = 3;
    }
    if (*(int *)(param_2 + 4) != 0) {
      iVar5 = iVar5 + 6;
    }
    if (bVar8) {
      iVar5 = iVar5 + 1;
      bVar8 = !bVar6;
      goto LAB_00fae2f4;
    }
  }
  bVar8 = !bVar6;
LAB_00fae2f4:
  if (!bVar8) {
    iVar5 = iVar5 + 1;
  }
  *(int *)(param_2 + 0x74) = iVar5;
  return;
}

// 00FAE310  FUN_00fae310  size=788  [between]
void __thiscall FUN_00fae310(int param_1,int param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  
  if (((param_3[5] & 8) != 0) || ((param_3[9] & 0x10) != 0)) {
    if ((param_3[0xb] & 2) != 0) {
      *param_3 = *param_3 & 0xfe;
    }
    if ((param_3[0xb] & 1) != 0) {
      *param_3 = *param_3 & 0xdf;
    }
    if ((((param_3[0xb] & 8) == 0) && (*param_3 = *param_3 & 0xf7, (param_3[0xb] & 8) == 0)) &&
       (param_3[8] = param_3[8] & 0xfe, (param_3[0xb] & 8) == 0)) {
      param_3[5] = param_3[5] & 0xbf;
    }
    if ((param_3[0xb] & 4) == 0) {
      *param_3 = *param_3 & 0xfd;
    }
  }
  if ((param_3[3] & 4) != 0) {
    param_3[4] = param_3[4] | 0x20;
  }
  bVar1 = *param_3;
  bVar4 = bVar1 & 0x20;
  bVar7 = (bVar1 & 0x20) != 0;
  if (*(int *)(param_2 + 0x54) != 0) {
    uVar5 = (uint)(*(int *)(param_2 + 0x14) == 0);
    if ((param_3[0xb] & 0x40) != 0) {
      uVar5 = 2;
    }
    if (((bVar1 & 1) == 0) || ((bVar1 & 0x10) == 0)) {
      if ((bVar1 & 1) == 0) {
        if ((bVar1 & 0x10) != 0) {
          uVar5 = uVar5 + 0x18;
        }
      }
      else {
        uVar5 = uVar5 + 3;
      }
    }
    else {
      uVar5 = uVar5 + 0x1b;
    }
    if ((((param_3[5] & 8) != 0) || ((param_3[9] & 0x10) != 0)) &&
       (((bVar1 & 8) == 0 && ((param_3[8] & 1) == 0)))) {
      uVar5 = uVar5 + 6;
    }
    if ((bVar1 & 2) != 0) {
      uVar5 = uVar5 + 0xc;
    }
    iVar6 = uVar5 * 2 + 0xc0;
    goto LAB_00fae47f;
  }
  uVar5 = (uint)(*(int *)(param_2 + 0x14) == 0);
  if ((param_3[0xb] & 0x40) != 0) {
    uVar5 = 2;
  }
  if (((bVar1 & 1) == 0) || ((bVar1 & 0x10) == 0)) {
    if ((bVar1 & 1) == 0) {
      if ((bVar1 & 0x10) != 0) {
        uVar5 = uVar5 + 0x30;
      }
    }
    else {
      uVar5 = uVar5 + 3;
    }
  }
  else {
    uVar5 = uVar5 + 0x33;
  }
  if (((param_3[5] & 8) == 0) && ((param_3[9] & 0x10) == 0)) {
    if ((bVar1 & 0x20) == 0) goto joined_r0x00fae453;
    if ((bVar1 & 8) == 0) {
      bVar2 = param_3[8];
joined_r0x00fae44e:
      if ((bVar2 & 1) == 0) goto joined_r0x00fae453;
    }
  }
  else {
    bVar4 = bVar7;
    if (bVar7) {
      if ((bVar1 & 8) == 0) {
        bVar2 = param_3[8];
        goto joined_r0x00fae44e;
      }
      goto LAB_00fae471;
    }
joined_r0x00fae453:
    if ((param_3[5] & 0x40) == 0) {
      if (bVar4 == 0) {
        if (((bVar1 & 8) == 0) && ((param_3[8] & 1) == 0)) {
          uVar5 = uVar5 + 0x12;
        }
        else {
          uVar5 = uVar5 + 0xc;
        }
      }
      else {
        uVar5 = uVar5 + 6;
      }
    }
  }
LAB_00fae471:
  if ((bVar1 & 2) != 0) {
    uVar5 = uVar5 + 0x18;
  }
  iVar6 = uVar5 * 2;
LAB_00fae47f:
  iVar3 = *(int *)(param_2 + 4);
  if (iVar3 != 0) {
    iVar6 = iVar6 + 1;
  }
  if (-2 < *(int *)(param_1 + 4)) {
    iVar6 = iVar6 + 1;
  }
  *(undefined **)(param_2 + 0x604) = (&PTR_DAT_018dce58)[iVar6];
  *(undefined **)(param_2 + 0x608) = (&PTR_PTR_018dab10)[iVar6];
  if ((param_3[2] & 4) != 0) {
    if ((*param_3 & 1) == 0) {
      *(undefined **)(param_2 + 0x604) = &DAT_01f735f8;
      *(undefined ***)(param_2 + 0x608) = &PTR_PTR_018ddf20;
    }
    else {
      *(undefined **)(param_2 + 0x604) = &DAT_01f734b0;
      *(undefined ***)(param_2 + 0x608) = &PTR_PTR_018ddea0;
    }
  }
  if ((param_3[5] & 1) != 0) {
    if (iVar3 == 0) {
      *(undefined **)(param_2 + 0x604) = &DAT_01f73ef0;
      *(undefined ***)(param_2 + 0x608) = &PTR_PTR_018de2a0;
    }
    else {
      *(undefined **)(param_2 + 0x604) = &DAT_01f73da8;
      *(undefined ***)(param_2 + 0x608) = &PTR_PTR_018de220;
    }
  }
  if ((param_3[2] & 0x20) != 0) {
    *(undefined **)(param_2 + 0x604) = &DAT_01f72e48;
    *(undefined ***)(param_2 + 0x608) = &PTR_PTR_018ddca0;
  }
  if (((param_3[2] & 2) != 0) && ((param_3[2] & 1) != 0)) {
    *(undefined **)(param_2 + 0x604) = &DAT_01f73740;
    *(undefined ***)(param_2 + 0x608) = &PTR_PTR_018ddfa0;
  }
  if ((param_3[9] & 8) != 0) {
    *(undefined **)(param_2 + 0x604) = &DAT_01f73888;
    *(undefined ***)(param_2 + 0x608) = &PTR_PTR_018de020;
  }
  if ((param_3[5] & 0x10) != 0) {
    *(undefined **)(param_2 + 0x604) = &DAT_01f739d0;
    *(undefined ***)(param_2 + 0x608) = &PTR_PTR_018de0a0;
    if (((param_3[5] & 0x10) != 0) && ((param_3[9] & 8) != 0)) {
      *(undefined **)(param_2 + 0x604) = &DAT_01f73b18;
      *(undefined ***)(param_2 + 0x608) = &PTR_PTR_018de120;
    }
  }
  if ((param_3[0xc] & 0x40) != 0) {
    *(undefined **)(param_2 + 0x604) = &DAT_01f73c60;
    *(undefined ***)(param_2 + 0x608) = &PTR_PTR_018de1a0;
  }
  if ((param_3[6] & 0x80) != 0) {
    if (iVar3 != 0) {
      *(undefined **)(param_2 + 0x604) = &DAT_01f74038;
      *(undefined ***)(param_2 + 0x608) = &PTR_PTR_018de320;
      return;
    }
    if (-2 < *(int *)(param_1 + 4)) {
      *(undefined **)(param_2 + 0x604) = &DAT_01f742c8;
      *(undefined ***)(param_2 + 0x608) = &PTR_PTR_018de420;
      return;
    }
    *(undefined **)(param_2 + 0x604) = &DAT_01f74180;
    *(undefined ***)(param_2 + 0x608) = &PTR_PTR_018de3a0;
  }
  return;
}

// 00FAE630  FUN_00fae630  size=432  [between]
void FUN_00fae630(int param_1,byte *param_2)

{
  if (((param_2[0xb] & 0x20) != 0) || ((param_2[4] & 0x40) != 0)) {
    *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
    *(undefined4 *)(param_1 + 0x4c) = 1;
  }
  if (((param_2[8] & 8) != 0) && ((param_2[0xb] & 0x20) == 0)) {
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  if ((((param_2[1] & 8) != 0) || ((param_2[4] & 0x20) != 0)) || ((param_2[8] & 0x20) != 0)) {
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if (((((param_2[1] & 8) != 0) || ((param_2[1] & 4) != 0)) || ((param_2[4] & 0x20) != 0)) &&
     ((param_2[5] & 2) == 0)) {
    *(undefined4 *)(param_1 + 0x10) = 1;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if ((param_2[3] & 0x20) != 0) {
    *(undefined4 *)(param_1 + 0x28) = 1;
    *(undefined4 *)(param_1 + 0x60) = 1;
  }
  if ((param_2[8] & 0x80) != 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x60) = 1;
  }
  if ((param_2[2] & 4) != 0) {
    *(undefined4 *)(param_1 + 0x30) = 1;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if ((param_2[1] & 0x10) != 0) {
    *(undefined4 *)(param_1 + 0x2c) = 1;
  }
  if ((param_2[9] & 2) != 0) {
    *(undefined4 *)(param_1 + 0x2c) = 1;
  }
  if (((*param_2 & 0x40) != 0) || ((*param_2 & 0x20) != 0)) {
    *(undefined4 *)(param_1 + 0x7c4) = 1;
  }
  if ((param_2[2] & 0x20) != 0) {
    *(undefined4 *)(param_1 + 0x20) = 1;
  }
  if ((param_2[3] & 8) != 0) {
    *(undefined4 *)(param_1 + 0x34) = 1;
  }
  if (((param_2[4] & 1) != 0) || ((param_2[9] & 8) != 0)) {
    *(undefined4 *)(param_1 + 0x38) = 1;
  }
  if ((param_2[3] & 0x80) != 0) {
    *(undefined4 *)(param_1 + 0x40) = 1;
  }
  if (((param_2[4] & 4) != 0) || ((param_2[4] & 2) != 0)) {
    *(undefined4 *)(param_1 + 0x44) = 1;
  }
  if ((param_2[5] & 0x10) != 0) {
    *(undefined4 *)(param_1 + 0x50) = 1;
  }
  if ((param_2[5] & 2) != 0) {
    *(undefined4 *)(param_1 + 0x54) = 1;
  }
  if ((((param_2[1] & 8) == 0) && ((param_2[1] & 4) == 0)) && ((param_2[4] & 0x20) == 0)) {
    *(undefined4 *)(param_1 + 0x58) = 1;
  }
  if ((param_2[6] & 4) != 0) {
    *(undefined4 *)(param_1 + 0x48) = 1;
  }
  if ((param_2[8] & 0x20) != 0) {
    *(undefined4 *)(param_1 + 0x5c) = 1;
  }
  if ((param_2[0xb] & 0x40) != 0) {
    *(undefined4 *)(param_1 + 0x3c) = 1;
  }
  if ((param_2[8] & 1) != 0) {
    *(undefined4 *)(param_1 + 0x7c0) = 1;
  }
  if ((param_2[9] & 0x20) == 0) {
    if (*(int *)(param_1 + 0x7c0) == 0) {
      *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x7c8) = 1;
  }
  if ((param_2[3] & 0x10) != 0) {
    if ((*(int *)(param_1 + 0x14) != 0) &&
       ((*(int *)(param_1 + 0x10) != 0 || (*(int *)(param_1 + 0x2c) != 0)))) {
      *(undefined4 *)(param_1 + 2000) = 1;
    }
    if (((param_2[3] & 0x10) != 0) && (*(int *)(param_1 + 0x14) != 0)) {
      *(undefined4 *)(param_1 + 0x7d4) = 1;
    }
  }
  if (((param_2[9] & 4) != 0) && ((*param_2 & 0x20) != 0)) {
    *(undefined4 *)(param_1 + 0x7d8) = 1;
  }
  if ((param_2[10] & 0x40) != 0) {
    *(undefined4 *)(param_1 + 0x7dc) = 1;
  }
  if ((param_2[10] & 0x10) != 0) {
    *(undefined4 *)(param_1 + 0x48) = 1;
    *(undefined4 *)(param_1 + 0x10) = 1;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 100) = 1;
  }
  return;
}

// 00FAE7E0  FUN_00fae7e0  size=19  [between]
void FUN_00fae7e0(undefined4 param_1,undefined4 param_2)

{
  FUN_00a087c0(param_2);
  return;
}

// 00FAE800  FUN_00fae800  size=158  [between]
undefined4 __thiscall FUN_00fae800(int param_1,int *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_2[6] != 0);
  if (param_2[5] == 0) {
    uVar2 = uVar2 + 2;
  }
  if (param_2[4] != 0) {
    uVar2 = uVar2 + 4;
  }
  if (*param_2 != 0) {
    uVar2 = uVar2 + 8;
  }
  if (param_2[7] != 0) {
    uVar2 = uVar2 + 0x10;
  }
  if (param_2[2] != 0) {
    uVar2 = uVar2 + 0x20;
  }
  if (param_2[1] == 0) {
    uVar2 = uVar2 + 0x40;
  }
  iVar1 = param_2[10];
  if (iVar1 == 0) {
    if ((float)param_2[0xb] == 0.0) goto LAB_00fae88a;
LAB_00fae874:
    uVar2 = uVar2 + 0x100;
  }
  else {
    uVar2 = uVar2 + 0x80;
    if (iVar1 == 0) goto LAB_00fae874;
  }
  if ((param_2[9] != 0) && (iVar1 != 0)) {
    uVar2 = uVar2 + 0x100;
  }
LAB_00fae88a:
  return *(undefined4 *)
          (param_1 + 0x14 + (*(int *)(param_1 + 0x2724 + uVar2 * 4) + ((param_3 != 0) - 1)) * 4);
}

// 00FAE8A0  FUN_00fae8a0  size=137  [between]
undefined4 FUN_00fae8a0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x330) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_00a06ff0();
    }
    iVar2 = FUN_00fae800(param_2,uVar1);
    if (iVar2 != 0) {
      iVar3 = (int)*(short *)(param_1 + 0x32c);
      iVar5 = 0;
      if (0 < iVar3) {
        iVar4 = 0;
        do {
          if (((-1 < iVar5) && (iVar5 < iVar3)) && (*(int *)(param_1 + 0x328) + iVar4 != 0)) {
            FUN_00a087c0(iVar2);
          }
          iVar3 = (int)*(short *)(param_1 + 0x32c);
          iVar5 = iVar5 + 1;
          iVar4 = iVar4 + 0x560;
        } while (iVar5 < iVar3);
      }
      return 1;
    }
  }
  return 0;
}

// 00FAE930  FUN_00fae930  size=127  [between]
undefined4 FUN_00fae930(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar3 = *(int *)(param_1 + 0x34);
  if (iVar3 < 1) {
    iVar1 = 0;
  }
  else {
    iVar1 = **(int **)(param_1 + 0x30);
  }
  iVar1 = FUN_00fae800(param_2,*(undefined4 *)(*(int *)(iVar1 + 0x470) + 4));
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < iVar3) {
      do {
        if (((-1 < iVar2) && (iVar2 < iVar3)) &&
           (*(int *)(*(int *)(param_1 + 0x30) + iVar2 * 4) != 0)) {
          FUN_00a087c0(iVar1);
        }
        iVar3 = *(int *)(param_1 + 0x34);
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
    }
    return 1;
  }
  return 0;
}

// 00FAE9B0  FUN_00fae9b0  size=71  [between]
undefined4 FUN_00fae9b0(int param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = *(char **)(*(int *)(param_1 + 0x470) + 0x784);
  cVar1 = *pcVar2;
  if (((cVar1 == 'W') || (cVar1 == 'w')) && (pcVar2[1] == 't')) {
    FUN_00a087c0(param_2);
    return 1;
  }
  FUN_00dd5650(&DAT_016f2174);
  return 0;
}

// 00FAEA00  FUN_00faea00  size=221  [between]
undefined4 __thiscall FUN_00faea00(int param_1,int *param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = (uint)(param_2[7] != 0);
  if (param_2[6] == 0) {
    uVar1 = uVar1 + 2;
  }
  if (param_2[5] != 0) {
    uVar1 = uVar1 + 4;
  }
  if (param_2[2] == 0) {
    if (*param_2 != 0) {
      uVar1 = uVar1 + 8;
    }
    if (param_2[8] != 0) {
      uVar1 = uVar1 + 0x10;
    }
    if (param_2[3] != 0) {
      uVar1 = uVar1 + 0x20;
    }
    if ((param_2[0x10] != 0) && (param_2[3] != 0)) {
      uVar1 = uVar1 + 0x10;
    }
  }
  else {
    if (param_2[8] != 0) {
      uVar1 = uVar1 + 8;
    }
    if (param_2[3] != 0) {
      uVar1 = uVar1 + 0x10;
    }
    if ((param_2[0x10] != 0) && (param_2[3] != 0)) {
      uVar1 = uVar1 + 0x10;
    }
    uVar1 = uVar1 + 0x60;
  }
  if (param_2[0xc] != 0) {
    if (param_2[0xb] == 0) {
      uVar1 = uVar1 + 0x90;
    }
    else {
      uVar1 = uVar1 + 0x120;
    }
    if (param_2[10] != 0) {
      uVar1 = uVar1 + 0x120;
    }
  }
  if (param_2[0xd] != 0) {
    uVar1 = uVar1 + 0x2d0;
  }
  return *(undefined4 *)
          (param_1 + 0x14 + (*(int *)(param_1 + 0x2f24 + uVar1 * 4) + ((param_3 != 0) - 1)) * 4);
}

// 00FAEAE0  FUN_00faeae0  size=208  [between]
undefined4 FUN_00faeae0(int param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x330) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_00a06ff0();
    }
    iVar4 = FUN_00faea00(param_2,uVar3);
    if (iVar4 != 0) {
      iVar5 = (int)*(short *)(param_1 + 0x32c);
      iVar7 = 0;
      if (0 < iVar5) {
        iVar6 = 0;
        do {
          if (((-1 < iVar7) && (iVar7 < iVar5)) &&
             (iVar5 = *(int *)(param_1 + 0x328) + iVar6, iVar5 != 0)) {
            *(undefined4 *)(iVar5 + 0x468) = *(undefined4 *)(param_2 + 0xc);
            *(undefined4 *)(iVar5 + 0x464) = param_3;
            pcVar2 = *(char **)(*(int *)(iVar5 + 0x470) + 0x784);
            cVar1 = *pcVar2;
            if (((cVar1 != 'W') && (cVar1 != 'w')) || (pcVar2[1] != 't')) {
              FUN_00dd5650(&DAT_016f2174);
              return 0;
            }
            FUN_00a087c0(iVar4);
          }
          iVar5 = (int)*(short *)(param_1 + 0x32c);
          iVar7 = iVar7 + 1;
          iVar6 = iVar6 + 0x560;
        } while (iVar7 < iVar5);
      }
      return 1;
    }
  }
  return 0;
}

// 00FAEBB0  FUN_00faebb0  size=198  [between]
undefined4 FUN_00faebb0(int param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar4 = *(int *)(param_1 + 0x34);
  if (iVar4 < 1) {
    iVar3 = 0;
  }
  else {
    iVar3 = **(int **)(param_1 + 0x30);
  }
  iVar3 = FUN_00faea00(param_2,*(undefined4 *)(*(int *)(iVar3 + 0x470) + 4));
  if (iVar3 != 0) {
    iVar5 = 0;
    if (0 < iVar4) {
      do {
        if (((-1 < iVar5) && (iVar5 < iVar4)) &&
           (iVar4 = *(int *)(*(int *)(param_1 + 0x30) + iVar5 * 4), iVar4 != 0)) {
          *(undefined4 *)(iVar4 + 0x468) = *(undefined4 *)(param_2 + 0xc);
          *(undefined4 *)(iVar4 + 0x464) = param_3;
          pcVar2 = *(char **)(*(int *)(iVar4 + 0x470) + 0x784);
          cVar1 = *pcVar2;
          if (((cVar1 != 'W') && (cVar1 != 'w')) || (pcVar2[1] != 't')) {
            FUN_00dd5650(&DAT_016f2174);
            return 0;
          }
          FUN_00a087c0(iVar3);
        }
        iVar4 = *(int *)(param_1 + 0x34);
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar4);
    }
    return 1;
  }
  return 0;
}

// 00FAEC90  FUN_00faec90  size=249  [between]
void __thiscall
FUN_00faec90(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined1 param_8,undefined1 param_9,
            undefined1 param_10,undefined1 param_11,undefined1 param_12,undefined1 param_13)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  *(undefined4 *)(param_1 + 0x60c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x610) = 0xffffffff;
  if (0 < param_2) {
    piVar2 = (int *)(param_1 + 0x614);
    do {
      *piVar2 = iVar1;
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < param_2);
  }
  *(undefined4 *)(param_1 + 0x614 + param_2 * 4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x63c) = 0xbc;
  *(undefined4 *)(param_1 + 0x644) = 0xbc;
  *(int *)(param_1 + 0x648) = param_4 + 0x28;
  *(undefined4 *)(param_1 + 0x654) = param_3;
  *(undefined4 *)(param_1 + 0x660) = param_5;
  *(int *)(param_1 + 0x658) = param_4;
  *(undefined4 *)(param_1 + 0x64c) = 0;
  *(undefined4 *)(param_1 + 0x650) = 0;
  *(undefined4 *)(param_1 + 0x65c) = 0;
  *(undefined4 *)(param_1 + 0x664) = 0;
  *(undefined4 *)(param_1 + 0x668) = 0;
  *(undefined4 *)(param_1 + 0x640) = 0x28;
  *(undefined4 *)(param_1 + 0x66c + param_2 * 0x18) = 0xffffffff;
  *(int *)(param_1 + 0x600) = param_2;
  *(int *)(param_1 + 0x768) = param_4;
  *(undefined4 *)(param_1 + 0x760) = param_6;
  *(undefined1 *)(param_1 + 0x77c) = param_8;
  *(undefined1 *)(param_1 + 0x77d) = param_9;
  *(undefined4 *)(param_1 + 0x764) = param_7;
  *(undefined1 *)(param_1 + 0x77e) = param_10;
  *(undefined1 *)(param_1 + 0x77f) = param_11;
  *(undefined1 *)(param_1 + 0x780) = param_12;
  *(undefined1 *)(param_1 + 0x781) = param_13;
  return;
}

// 00FAED90  FUN_00faed90  size=258  [between]
void __thiscall
FUN_00faed90(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  if ((param_5 != 0) && (1 < *(uint *)(param_1 + 0x5f8))) {
    FUN_00f93020(param_2,param_5,param_1 + 0x60c,param_1 + 0x610,param_1 + 0x614,param_1 + 0x63c,
                 param_1 + 0x654,param_1 + 0x66c,*(undefined4 *)(param_1 + 0x760),
                 *(undefined4 *)(param_1 + 0x764));
  }
  if ((param_4 != 0) && (*(int *)(param_1 + 0x5f8) != 0)) {
    FUN_00f93020(param_2,param_4,param_1 + 0x60c,param_1 + 0x610,param_1 + 0x614,param_1 + 0x63c,
                 param_1 + 0x654,param_1 + 0x66c,*(undefined4 *)(param_1 + 0x760),
                 *(undefined4 *)(param_1 + 0x764));
  }
  FUN_00f93020(param_2,param_3,param_1 + 0x60c,param_1 + 0x610,param_1 + 0x614,param_1 + 0x63c,
               param_1 + 0x654,param_1 + 0x66c,*(undefined4 *)(param_1 + 0x760),
               *(undefined4 *)(param_1 + 0x764));
  return;
}

// 00FAEEA0  FUN_00faeea0  size=103  [between]
void __thiscall FUN_00faeea0(int param_1,int param_2)

{
  float *pfVar1;
  char cVar2;
  
  cVar2 = *(char *)(param_1 + 0x78f);
  if (-1 < cVar2) {
    if (*(float *)(param_2 + cVar2 * 0x10) < 0.0) {
      *(undefined4 *)(param_2 + *(char *)(param_1 + 0x78f) * 0x10) = 0x3f800000;
      *(undefined4 *)(param_2 + 8 + *(char *)(param_1 + 0x78f) * 0x10) = 0;
      return;
    }
    if (0.0 < *(float *)(param_2 + 0xc + cVar2 * 0x10)) {
      pfVar1 = (float *)(param_2 + 0xc + *(char *)(param_1 + 0x78f) * 0x10);
      *pfVar1 = 1.0 / *pfVar1;
    }
  }
  return;
}

// 00FAEF10  FUN_00faef10  size=413  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00faef10(int param_1,int param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  
  *(undefined4 *)(param_2 + 800) = 0x3f800000;
  *(undefined4 *)(param_2 + 0x324) = 0x3f800000;
  *(undefined4 *)(param_2 + 0x328) = 0x3f800000;
  *(undefined4 *)(param_2 + 0x32c) = 0;
  if (*(int *)(param_1 + 0x44) != 0) {
    pfVar3 = (float *)(param_2 + 0x1c + *(char *)(param_1 + 0x78e) * 0x10);
    if (0.0 < *pfVar3) {
      if (*pfVar3 * 30.0 <= param_3[0x3a]) {
        do {
          param_3[0x3a] = param_3[0x3a] - *pfVar3 * 60.0;
          pfVar3 = (float *)(param_2 + 0x1c + *(char *)(param_1 + 0x78e) * 0x10);
        } while (*pfVar3 * 30.0 < param_3[0x3a] != (*pfVar3 * 30.0 == param_3[0x3a]));
      }
      fVar1 = *(float *)(param_2 + 0x1c + *(char *)(param_1 + 0x78e) * 0x10) * 30.0;
      fVar2 = ABS(param_3[0x3a]);
      *(float *)(param_2 + 800) =
           fVar2 * ((*(float *)(param_2 + (*(char *)(param_1 + 0x78e) + 1) * 0x10) - 1.0) / fVar1) +
           1.0;
      *(float *)(param_2 + 0x324) =
           ((*(float *)(param_2 + 0x14 + *(char *)(param_1 + 0x78e) * 0x10) - 1.0) / fVar1) * fVar2
           + 1.0;
      *(float *)(param_2 + 0x328) =
           ((*(float *)(param_2 + 0x18 + *(char *)(param_1 + 0x78e) * 0x10) - 1.0) / fVar1) * fVar2
           + 1.0;
      *(undefined4 *)(param_2 + 0x32c) = 0;
    }
    param_3[1] = *(float *)(param_2 + *(char *)(param_1 + 0x78e) * 0x10);
    param_3[5] = *(float *)(param_2 + 4 + *(char *)(param_1 + 0x78e) * 0x10);
  }
  *(float *)(param_2 + 0x330) = param_3[3] + *param_3;
  *(float *)(param_2 + 0x334) = param_3[7] + param_3[4];
  *(float *)(param_2 + 0x338) = param_3[0x38];
  *(float *)(param_2 + 0x33c) = param_3[0x39];
  if (*(int *)(param_1 + 0x7dc) == 0) {
    return;
  }
  *(undefined4 *)(param_2 + 0x338) = 0;
  *(float *)(param_2 + 0x33c) = -_DAT_01be1f38;
  return;
}

// 00FAF0B0  FUN_00faf0b0  size=565  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00faf0b0(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  byte *pbVar6;
  float *pfVar7;
  int iVar8;
  
  cVar5 = *(char *)(param_1 + 0x77f);
  pbVar6 = (byte *)param_3[0x2c];
  *(undefined4 *)(param_1 + 0x778) = 0x3f800000;
  if (-1 < cVar5) {
    if (*(int *)(param_1 + 0x7c0) != 0) {
      pfVar7 = param_2 + (cVar5 + 0x10) * 4;
      *pfVar7 = *param_3;
      pfVar7[1] = param_3[1];
      pfVar7[2] = param_3[2];
      pfVar7[3] = param_3[3];
      fVar3 = _DAT_01b84924;
      fVar2 = _DAT_01b84920;
      pfVar7 = param_2 + (*(char *)(param_1 + 0x77f) + 0x10) * 4;
      fVar1 = param_3[3];
      *pfVar7 = _DAT_01b8491c;
      pfVar7[1] = fVar2;
      pfVar7[2] = fVar3;
      pfVar7[3] = fVar1;
      fVar1 = 1.0 - _DAT_01b84920;
      fVar2 = 1.0 - _DAT_01b84924;
      *param_2 = 1.0 - _DAT_01b8491c;
      param_2[1] = fVar1;
      param_2[2] = fVar2;
      return;
    }
    if (pbVar6 != (byte *)0x0) {
      pfVar7 = param_2 + (cVar5 + 0x10) * 4;
      *pfVar7 = *param_3;
      pfVar7[1] = param_3[1];
      pfVar7[2] = param_3[2];
      pfVar7[3] = param_3[3];
      iVar8 = FUN_00e6b900();
      if (iVar8 != 3) {
        if (*(int *)(param_1 + 0x38) == 0) {
          if (*(int *)(param_1 + 0x7bc) == 0) {
            return;
          }
          fVar1 = *(float *)(pbVar6 + 0x28);
          iVar8 = (uint)*pbVar6 * 0x10;
          fVar2 = *(float *)(&DAT_01b85b34 + iVar8);
          fVar3 = *(float *)(&DAT_01b85b38 + iVar8);
          fVar4 = *(float *)(&DAT_01b85b3c + iVar8);
          pfVar7 = param_2 + (*(char *)(param_1 + 0x77f) + 0x10) * 4;
          *pfVar7 = fVar1 * *(float *)(&DAT_01b85b30 + iVar8);
          pfVar7[1] = fVar2 * fVar1;
          pfVar7[2] = fVar3 * fVar1;
          pfVar7[3] = fVar1 * fVar4;
          fVar1 = *(float *)(&DAT_01b84188 + (uint)pbVar6[3] * 4) * *(float *)(pbVar6 + 0x34);
        }
        else {
          fVar1 = *(float *)(pbVar6 + 0x18);
          iVar8 = (uint)*pbVar6 * 0x10;
          fVar2 = *(float *)(&DAT_01b85b34 + iVar8);
          fVar3 = *(float *)(&DAT_01b85b38 + iVar8);
          fVar4 = *(float *)(&DAT_01b85b3c + iVar8);
          pfVar7 = param_2 + (*(char *)(param_1 + 0x77f) + 0x10) * 4;
          *pfVar7 = fVar1 * *(float *)(&DAT_01b85b30 + iVar8);
          pfVar7[1] = fVar2 * fVar1;
          pfVar7[2] = fVar3 * fVar1;
          pfVar7[3] = fVar1 * fVar4;
          fVar1 = *(float *)(&DAT_01b84188 + (uint)pbVar6[3] * 4) * *(float *)(pbVar6 + 0x24);
        }
        param_2[*(char *)(param_1 + 0x77f) * 4 + 0x43] = fVar1;
      }
    }
  }
  return;
}

// 00FAF2F0  FUN_00faf2f0  size=1695  [between]
void __thiscall FUN_00faf2f0(int param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 *puVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  float10 fVar10;
  
  iVar9 = *(int *)(param_3 + 0xb0);
  if ((-1 < *(char *)(param_1 + 0x77d)) && (iVar9 != 0)) {
    puVar6 = (undefined4 *)((*(char *)(param_1 + 0x77d) + 0x10) * 0x10 + param_2);
    *puVar6 = *(undefined4 *)(param_3 + 0x20);
    puVar6[1] = *(undefined4 *)(param_3 + 0x24);
    puVar6[2] = *(undefined4 *)(param_3 + 0x28);
    puVar6[3] = *(undefined4 *)(param_3 + 0x2c);
    puVar6 = (undefined4 *)((*(char *)(param_1 + 0x77d) + 0x11) * 0x10 + param_2);
    *puVar6 = *(undefined4 *)(param_3 + 0x10);
    puVar6[1] = *(undefined4 *)(param_3 + 0x14);
    puVar6[2] = *(undefined4 *)(param_3 + 0x18);
    puVar6[3] = *(undefined4 *)(param_3 + 0x1c);
    iVar7 = FUN_00e6b900();
    if (iVar7 != 3) {
      if (*(int *)(param_1 + 0x38) == 0) {
        if (*(int *)(param_1 + 0x7bc) != 0) {
          fVar1 = *(float *)(iVar9 + 0x2c);
          iVar7 = (uint)*(byte *)(iVar9 + 1) * 0x10;
          fVar2 = *(float *)(&DAT_01b85c74 + iVar7);
          fVar3 = *(float *)(&DAT_01b85c78 + iVar7);
          fVar4 = *(float *)(&DAT_01b85c7c + iVar7);
          pfVar8 = (float *)((*(char *)(param_1 + 0x77d) + 0x10) * 0x10 + param_2);
          fVar5 = *(float *)(iVar9 + 0x38);
          *pfVar8 = fVar5 * fVar1 * *(float *)(&DAT_01b85c70 + iVar7);
          pfVar8[1] = fVar2 * fVar1 * fVar5;
          pfVar8[2] = fVar3 * fVar1 * fVar5;
          pfVar8[3] = fVar5 * fVar1 * fVar4;
          *(float *)(param_2 + 0x10c + *(char *)(param_1 + 0x77d) * 0x10) =
               *(float *)(&DAT_01b84168 + (uint)*(byte *)(iVar9 + 2) * 4) * *(float *)(iVar9 + 0x30)
          ;
        }
      }
      else {
        fVar1 = *(float *)(iVar9 + 0x1c);
        iVar7 = (uint)*(byte *)(iVar9 + 1) * 0x10;
        fVar2 = *(float *)(&DAT_01b85c74 + iVar7);
        fVar3 = *(float *)(&DAT_01b85c78 + iVar7);
        fVar4 = *(float *)(&DAT_01b85c7c + iVar7);
        pfVar8 = (float *)((*(char *)(param_1 + 0x77d) + 0x10) * 0x10 + param_2);
        fVar5 = *(float *)(iVar9 + 0x38);
        *pfVar8 = fVar5 * fVar1 * *(float *)(&DAT_01b85c70 + iVar7);
        pfVar8[1] = fVar2 * fVar1 * fVar5;
        pfVar8[2] = fVar3 * fVar1 * fVar5;
        pfVar8[3] = fVar5 * fVar1 * fVar4;
        *(float *)(param_2 + 0x10c + *(char *)(param_1 + 0x77d) * 0x10) =
             *(float *)(&DAT_01b84168 + (uint)*(byte *)(iVar9 + 2) * 4) * *(float *)(iVar9 + 0x20);
      }
    }
    puVar6 = (undefined4 *)((*(char *)(param_1 + 0x77d) + 0x12) * 0x10 + param_2);
    *puVar6 = *(undefined4 *)(param_3 + 0x60);
    puVar6[1] = *(undefined4 *)(param_3 + 100);
    puVar6[2] = *(undefined4 *)(param_3 + 0x68);
    puVar6[3] = *(undefined4 *)(param_3 + 0x6c);
    puVar6 = (undefined4 *)((*(char *)(param_1 + 0x77d) + 0x13) * 0x10 + param_2);
    *puVar6 = *(undefined4 *)(param_3 + 0x40);
    puVar6[1] = *(undefined4 *)(param_3 + 0x44);
    puVar6[2] = *(undefined4 *)(param_3 + 0x48);
    puVar6[3] = *(undefined4 *)(param_3 + 0x4c);
    iVar9 = FUN_00a1ef10(1);
    iVar7 = FUN_00e6b900();
    if (iVar7 != 3) {
      if (*(int *)(param_1 + 0x38) == 0) {
        if (*(int *)(param_1 + 0x7bc) != 0) {
          fVar10 = (float10)FUN_00a1ef80(1);
          fVar1 = (float)fVar10;
          fVar2 = *(float *)(iVar9 + 0x24);
          fVar3 = *(float *)(iVar9 + 0x28);
          fVar4 = *(float *)(iVar9 + 0x2c);
          pfVar8 = (float *)((*(char *)(param_1 + 0x77d) + 0x12) * 0x10 + param_2);
          *pfVar8 = fVar1 * *(float *)(iVar9 + 0x20);
          pfVar8[1] = fVar2 * fVar1;
          pfVar8[2] = fVar3 * fVar1;
          pfVar8[3] = fVar1 * fVar4;
          *(undefined4 *)(param_2 + 300 + *(char *)(param_1 + 0x77d) * 0x10) =
               *(undefined4 *)(param_3 + 0x6c);
        }
      }
      else {
        fVar10 = (float10)FUN_00a1ef60(1);
        fVar1 = (float)fVar10;
        fVar2 = *(float *)(iVar9 + 0x24);
        fVar3 = *(float *)(iVar9 + 0x28);
        fVar4 = *(float *)(iVar9 + 0x2c);
        pfVar8 = (float *)((*(char *)(param_1 + 0x77d) + 0x12) * 0x10 + param_2);
        *pfVar8 = fVar1 * *(float *)(iVar9 + 0x20);
        pfVar8[1] = fVar2 * fVar1;
        pfVar8[2] = fVar3 * fVar1;
        pfVar8[3] = fVar1 * fVar4;
        *(undefined4 *)(param_2 + 300 + *(char *)(param_1 + 0x77d) * 0x10) =
             *(undefined4 *)(param_3 + 0x6c);
      }
    }
    pfVar8 = (float *)(param_2 + 300 + *(char *)(param_1 + 0x77d) * 0x10);
    *pfVar8 = 1.0 / *pfVar8;
    puVar6 = (undefined4 *)((*(char *)(param_1 + 0x77d) + 0x14) * 0x10 + param_2);
    *puVar6 = *(undefined4 *)(param_3 + 0x50);
    puVar6[1] = *(undefined4 *)(param_3 + 0x54);
    puVar6[2] = *(undefined4 *)(param_3 + 0x58);
    puVar6[3] = *(undefined4 *)(param_3 + 0x5c);
    puVar6 = (undefined4 *)((*(char *)(param_1 + 0x77d) + 0x15) * 0x10 + param_2);
    *puVar6 = *(undefined4 *)(param_3 + 0x30);
    puVar6[1] = *(undefined4 *)(param_3 + 0x34);
    puVar6[2] = *(undefined4 *)(param_3 + 0x38);
    puVar6[3] = *(undefined4 *)(param_3 + 0x3c);
    iVar9 = FUN_00a1ef10(2);
    iVar7 = FUN_00e6b900();
    if (iVar7 != 3) {
      if (*(int *)(param_1 + 0x38) == 0) {
        if (*(int *)(param_1 + 0x7bc) != 0) {
          fVar10 = (float10)FUN_00a1ef80(2);
          fVar1 = (float)fVar10;
          fVar2 = *(float *)(iVar9 + 0x24);
          fVar3 = *(float *)(iVar9 + 0x28);
          fVar4 = *(float *)(iVar9 + 0x2c);
          pfVar8 = (float *)((*(char *)(param_1 + 0x77d) + 0x14) * 0x10 + param_2);
          *pfVar8 = fVar1 * *(float *)(iVar9 + 0x20);
          pfVar8[1] = fVar2 * fVar1;
          pfVar8[2] = fVar3 * fVar1;
          pfVar8[3] = fVar1 * fVar4;
          *(undefined4 *)(param_2 + 0x14c + *(char *)(param_1 + 0x77d) * 0x10) =
               *(undefined4 *)(param_3 + 0x5c);
        }
      }
      else {
        fVar10 = (float10)FUN_00a1ef60(2);
        fVar1 = (float)fVar10;
        fVar2 = *(float *)(iVar9 + 0x24);
        fVar3 = *(float *)(iVar9 + 0x28);
        fVar4 = *(float *)(iVar9 + 0x2c);
        pfVar8 = (float *)((*(char *)(param_1 + 0x77d) + 0x14) * 0x10 + param_2);
        *pfVar8 = fVar1 * *(float *)(iVar9 + 0x20);
        pfVar8[1] = fVar2 * fVar1;
        pfVar8[2] = fVar3 * fVar1;
        pfVar8[3] = fVar1 * fVar4;
        *(undefined4 *)(param_2 + 0x14c + *(char *)(param_1 + 0x77d) * 0x10) =
             *(undefined4 *)(param_3 + 0x5c);
      }
    }
    pfVar8 = (float *)(param_2 + 0x14c + *(char *)(param_1 + 0x77d) * 0x10);
    *pfVar8 = 1.0 / *pfVar8;
    if (-1 < *(char *)(param_1 + 0x77e)) {
      puVar6 = (undefined4 *)((*(char *)(param_1 + 0x77e) + 0x10) * 0x10 + param_2);
      *puVar6 = *(undefined4 *)(param_3 + 0x80);
      puVar6[1] = *(undefined4 *)(param_3 + 0x84);
      puVar6[2] = *(undefined4 *)(param_3 + 0x88);
      puVar6[3] = *(undefined4 *)(param_3 + 0x8c);
      puVar6 = (undefined4 *)((*(char *)(param_1 + 0x77e) + 0x11) * 0x10 + param_2);
      *puVar6 = *(undefined4 *)(param_3 + 0x70);
      puVar6[1] = *(undefined4 *)(param_3 + 0x74);
      puVar6[2] = *(undefined4 *)(param_3 + 0x78);
      puVar6[3] = *(undefined4 *)(param_3 + 0x7c);
      iVar9 = FUN_00a1ef10(0);
      iVar7 = FUN_00e6b900();
      if (iVar7 != 3) {
        if (*(int *)(param_1 + 0x38) == 0) {
          if (*(int *)(param_1 + 0x7bc) != 0) {
            fVar10 = (float10)FUN_00a1ef80(0);
            fVar1 = (float)fVar10;
            fVar2 = *(float *)(iVar9 + 0x24);
            fVar3 = *(float *)(iVar9 + 0x28);
            fVar4 = *(float *)(iVar9 + 0x2c);
            pfVar8 = (float *)((*(char *)(param_1 + 0x77e) + 0x10) * 0x10 + param_2);
            *pfVar8 = fVar1 * *(float *)(iVar9 + 0x20);
            pfVar8[1] = fVar2 * fVar1;
            pfVar8[2] = fVar3 * fVar1;
            pfVar8[3] = fVar1 * fVar4;
            *(undefined4 *)(param_2 + 0x10c + *(char *)(param_1 + 0x77e) * 0x10) =
                 *(undefined4 *)(param_3 + 0x8c);
          }
        }
        else {
          fVar10 = (float10)FUN_00a1ef60(0);
          fVar1 = (float)fVar10;
          fVar2 = *(float *)(iVar9 + 0x24);
          fVar3 = *(float *)(iVar9 + 0x28);
          fVar4 = *(float *)(iVar9 + 0x2c);
          pfVar8 = (float *)((*(char *)(param_1 + 0x77e) + 0x10) * 0x10 + param_2);
          *pfVar8 = fVar1 * *(float *)(iVar9 + 0x20);
          pfVar8[1] = fVar2 * fVar1;
          pfVar8[2] = fVar3 * fVar1;
          pfVar8[3] = fVar1 * fVar4;
          *(undefined4 *)(param_2 + 0x10c + *(char *)(param_1 + 0x77e) * 0x10) =
               *(undefined4 *)(param_3 + 0x8c);
        }
      }
      pfVar8 = (float *)(param_2 + 0x10c + *(char *)(param_1 + 0x77e) * 0x10);
      *pfVar8 = 1.0 / *pfVar8;
    }
  }
  return;
}

// 00FAF990  FUN_00faf990  size=137  [between]
void __thiscall FUN_00faf990(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((DAT_01f8e9e0 != 0) && (-1 < *(char *)(param_1 + 0x77c))) {
    iVar1 = *(int *)(param_3 + 0xa0);
    puVar2 = (undefined4 *)((*(char *)(param_1 + 0x77c) + 0x10) * 0x10 + param_2);
    *puVar2 = (&DAT_01f8e6f0)[iVar1 * 0xc];
    puVar2[1] = (&DAT_01f8e6f4)[iVar1 * 0xc];
    puVar2[2] = (&DAT_01f8e6f8)[iVar1 * 0xc];
    puVar2[3] = (&DAT_01f8e6fc)[iVar1 * 0xc];
    *(float *)(param_2 + (*(char *)(param_1 + 0x77c) + 0x11) * 0x10) =
         1.0 / ((float)(&DAT_01f8e6e4)[iVar1 * 0xc] - (float)(&DAT_01f8e6e0)[iVar1 * 0xc]);
    *(undefined4 *)(param_2 + 0x114 + *(char *)(param_1 + 0x77c) * 0x10) =
         (&DAT_01f8e6e4)[iVar1 * 0xc];
  }
  return;
}

// 00FAFA20  FUN_00fafa20  size=198  [between]
void __thiscall FUN_00fafa20(int param_1,int param_2)

{
  float *pfVar1;
  char cVar2;
  int iVar3;
  
  *(float *)(param_2 + *(char *)(param_1 + 0x781) * 0x10) =
       *(float *)(param_2 + 0x10c + *(char *)(param_1 + 0x77d) * 0x10) *
       *(float *)(param_2 + *(char *)(param_1 + 0x781) * 0x10);
  if (-1 < *(char *)(param_1 + 0x781)) {
    iVar3 = (int)*(char *)(param_1 + 0x781);
    if (*(char *)(param_1 + 0x788) == '\0') {
      *(float *)(param_2 + iVar3 * 0x10) =
           1.0 - (((1.0 - *(float *)(param_2 + iVar3 * 0x10)) - 0.03125) * 16.0 * 0.125 + 0.0625);
    }
    else {
      *(float *)(param_2 + 4 + iVar3 * 0x10) =
           1.0 - (((1.0 - *(float *)(param_2 + 4 + iVar3 * 0x10)) - 0.03125) * 16.0 * 0.125 + 0.0625
                 );
    }
  }
  cVar2 = *(char *)(*(int *)(param_1 + 0x784) + 9);
  if ((cVar2 == 'T') || (cVar2 == 'U')) {
    pfVar1 = (float *)(param_2 + 8 + *(char *)(param_1 + 0x781) * 0x10);
    *pfVar1 = *pfVar1 * 0.078125;
  }
  return;
}

// 00FAFAF0  FUN_00fafaf0  size=574  [between]
void __thiscall FUN_00fafaf0(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  float *pfVar5;
  undefined4 *puVar6;
  int iVar7;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  int local_28;
  float local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)&stack0xfffffff0;
  local_28 = param_2;
  iVar2 = FUN_00e6b900();
  if ((iVar2 == 3) && (-1 < *(char *)(param_1 + 0x780))) {
    iVar2 = *(int *)(param_3 + 0xb0);
    if ((iVar2 != 0) && (*(byte **)(iVar2 + 0xc4) != (byte *)0x0)) {
      iVar7 = (uint)**(byte **)(iVar2 + 0xc4) * 0xb0;
      iVar3 = FUN_00a289a0();
      if ((iVar3 == 0) || (*(char *)(iVar2 + 0xd0) != (&DAT_01bb1e65)[iVar7])) {
        puVar4 = (undefined4 *)((*(char *)(param_1 + 0x780) + 0x10) * 0x10 + local_28);
        *puVar4 = 0;
        puVar4[1] = 0x3f800000;
        puVar4[2] = 0;
        puVar4[3] = 0;
        iVar2 = *(char *)(param_1 + 0x780) + 0x11;
        *(undefined4 *)(local_28 + iVar2 * 0x10) = 0x3dcccccd;
        *(undefined4 *)(local_28 + 4 + iVar2 * 0x10) = 0x3dcccccd;
        *(undefined4 *)(local_28 + 8 + iVar2 * 0x10) = 0;
      }
      else {
        puVar4 = (undefined4 *)FUN_00a2b3a0(&local_40);
        puVar6 = (undefined4 *)((*(char *)(param_1 + 0x780) + 0x10) * 0x10 + local_28);
        *puVar6 = *puVar4;
        puVar6[1] = puVar4[1];
        puVar6[2] = puVar4[2];
        puVar6[3] = puVar4[3];
        uVar1 = *(undefined4 *)(&DAT_01bb1e34 + iVar7);
        iVar3 = *(char *)(param_1 + 0x780) + 0x11;
        *(undefined4 *)(local_28 + iVar3 * 0x10) = *(undefined4 *)(&DAT_01bb1e30 + iVar7);
        *(undefined4 *)(local_28 + 4 + iVar3 * 0x10) = uVar1;
        *(undefined4 *)(local_28 + 8 + iVar3 * 0x10) = 0x3f800000;
        D3DXVec3TransformNormal(&local_20,&DAT_01bb1e40 + iVar7,DAT_01f6c7a4);
        local_24 = (float)local_18;
        puVar4 = (undefined4 *)((*(char *)(param_1 + 0x77d) + 0x11) * 0x10 + local_28);
        *puVar4 = local_20;
        puVar4[1] = local_1c;
        puVar4[2] = local_18;
        iVar3 = FUN_00e6b900();
        if (iVar3 == 3) {
          local_24 = *(float *)(iVar7 + 0x1bb1e84 + *(int *)(iVar2 + 0xcc) * 4);
        }
        else if (*(int *)(param_1 + 0x38) == 0) {
          if (*(int *)(param_1 + 0x7bc) == 0) {
            local_24 = *(float *)(iVar7 + 0x1bb1e84 + *(int *)(iVar2 + 0xcc) * 4);
          }
          else {
            local_24 = *(float *)(&DAT_01bb1e98 + iVar7);
          }
        }
        else {
          local_24 = *(float *)(&DAT_01bb1e94 + iVar7);
        }
        pfVar5 = (float *)((*(char *)(param_1 + 0x77d) + 0x10) * 0x10 + local_28);
        local_40 = local_24 * *(float *)(&DAT_01bb1e20 + iVar7);
        local_3c = *(float *)(&DAT_01bb1e24 + iVar7) * local_24;
        local_38 = *(float *)(&DAT_01bb1e28 + iVar7) * local_24;
        local_34 = local_24 * *(float *)(&DAT_01bb1e2c + iVar7);
        *pfVar5 = local_40;
        pfVar5[1] = local_3c;
        pfVar5[2] = local_38;
        pfVar5[3] = local_34;
        *(undefined4 *)(local_28 + 0x10c + *(char *)(param_1 + 0x780) * 0x10) = 0x41f00000;
      }
    }
  }
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffff0);
  return;
}

// 00FAFD30  FUN_00fafd30  size=779  [between]
void __thiscall FUN_00fafd30(int param_1,undefined4 *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (*(int *)(param_1 + 0x7a8) == 0) {
    if (-1 < *(char *)(param_1 + 0x78d)) {
      cVar1 = **(char **)(param_1 + 0x784);
      if (((cVar1 == 'M') || (cVar1 == 'W')) || ((*(char **)(param_1 + 0x784))[1] == 'V')) {
        param_2[*(char *)(param_1 + 0x78d) * 4 + 2] = 0x3f800000;
      }
    }
    return;
  }
  if (-1 < *(char *)(param_1 + 0x789)) {
    param_2[*(char *)(param_1 + 0x789) * 4] = *(undefined4 *)(param_3 + 0x20);
    param_2[*(char *)(param_1 + 0x789) * 4 + 1] = *(undefined4 *)(param_3 + 0x38);
    param_2[*(char *)(param_1 + 0x789) * 4 + 3] = *(undefined4 *)(param_3 + 0x60);
  }
  if (-1 < *(char *)(param_1 + 0x78a)) {
    param_2[*(char *)(param_1 + 0x78a) * 4] = *(undefined4 *)(param_3 + 0x2c);
    param_2[*(char *)(param_1 + 0x78a) * 4 + 1] = *(float *)(param_3 + 0x24) * 0.1;
    param_2[*(char *)(param_1 + 0x78a) * 4 + 2] = *(undefined4 *)(param_3 + 100);
  }
  if (-1 < *(char *)(param_1 + 0x78b)) {
    param_2[*(char *)(param_1 + 0x78b) * 4 + 2] = *(undefined4 *)(param_3 + 0x28);
  }
  if (-1 < *(char *)(param_1 + 0x78d)) {
    if ((*(float *)(param_3 + 0x30) < 0.0) || (*(float *)(param_3 + 0x34) < 0.0)) {
      param_2[*(char *)(param_1 + 0x78d) * 4] = -*(float *)(param_3 + 0x30);
      param_2[*(char *)(param_1 + 0x78d) * 4 + 1] = -*(float *)(param_3 + 0x34);
      param_2[*(char *)(param_1 + 0x78d) * 4 + 2] = 0x3f800000;
    }
    else {
      param_2[*(char *)(param_1 + 0x78d) * 4] = *(undefined4 *)(param_3 + 0x30);
      param_2[*(char *)(param_1 + 0x78d) * 4 + 1] = *(undefined4 *)(param_3 + 0x34);
      param_2[*(char *)(param_1 + 0x78d) * 4 + 2] = 0;
    }
  }
  if ((*(int *)(param_1 + 0x7b4) != 0) || (*(int *)(param_1 + 0x7b8) != 0)) {
    *param_2 = 0x3f800000;
    param_2[1] = 0x3f800000;
    param_2[2] = 0x3f800000;
    param_2[3] = 0x3f800000;
    param_2[4] = 0x3f800000;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[0xb] = 0x3f800000;
    puVar3 = param_2 + *(char *)(param_1 + 0x78c) * 4;
    *puVar3 = *(undefined4 *)(param_3 + 0xc0);
    puVar3[1] = *(undefined4 *)(param_3 + 0xc4);
    puVar3[2] = *(undefined4 *)(param_3 + 200);
    puVar3[3] = *(undefined4 *)(param_3 + 0xcc);
    puVar3 = param_2 + (*(char *)(param_1 + 0x78c) + 1) * 4;
    *puVar3 = *(undefined4 *)(param_3 + 0xd0);
    puVar3[1] = *(undefined4 *)(param_3 + 0xd4);
    puVar3[2] = *(undefined4 *)(param_3 + 0xd8);
    puVar3[3] = *(undefined4 *)(param_3 + 0xdc);
    if (*(int *)(param_1 + 0x7b8) == 0) {
      param_2[*(char *)(param_1 + 0x78d) * 4 + 3] = *(undefined4 *)(param_3 + 0x68);
    }
    else {
      param_2[*(char *)(param_1 + 0x78d) * 4 + 3] = *(undefined4 *)(param_3 + 0x68);
    }
    if (*(int *)(param_1 + 0x7b8) != 0) {
      puVar3 = param_2 + *(char *)(param_1 + 0x793) * 4;
      *puVar3 = *(undefined4 *)(param_3 + 0x80);
      puVar3[1] = *(undefined4 *)(param_3 + 0x84);
      puVar3[2] = *(undefined4 *)(param_3 + 0x88);
      puVar3[3] = *(undefined4 *)(param_3 + 0x8c);
      puVar3 = param_2 + (*(char *)(param_1 + 0x793) + 1) * 4;
      *puVar3 = *(undefined4 *)(param_3 + 0x70);
      puVar3[1] = *(undefined4 *)(param_3 + 0x74);
      puVar3[2] = *(undefined4 *)(param_3 + 0x78);
      puVar3[3] = *(undefined4 *)(param_3 + 0x7c);
      puVar3 = param_2 + (*(char *)(param_1 + 0x793) + 2) * 4;
      *puVar3 = *(undefined4 *)(param_3 + 0x90);
      puVar3[1] = *(undefined4 *)(param_3 + 0x94);
      puVar3[2] = *(undefined4 *)(param_3 + 0x98);
      puVar3[3] = *(undefined4 *)(param_3 + 0x9c);
    }
  }
  puVar3 = (undefined4 *)(param_3 + 0x20);
  puVar4 = param_2 + 0xa0;
  for (iVar2 = 0x24; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  param_2[0xc4] = *(undefined4 *)(param_3 + 0xb0);
  param_2[0xc5] = *(undefined4 *)(param_3 + 0xb4);
  param_2[0xc6] = *(undefined4 *)(param_3 + 0xb8);
  param_2[199] = *(undefined4 *)(param_3 + 0xbc);
  return;
}

// 00FB0040  FUN_00fb0040  size=323  [between]
void __thiscall FUN_00fb0040(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x7a8) == 0) && (*(int *)(param_1 + 0x7b8) == 0)) {
    FID_conflict__memcpy(param_2,(void *)param_2[0xd5],*(int *)(param_1 + 0x70) << 4);
    if ((param_2[0xdb] & 0x100) != 0) {
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[4] = 0x40a00000;
      param_2[5] = 0x40a00000;
      param_2[6] = 0x40a00000;
      param_2[7] = 0x41700000;
    }
    if ((param_2[0xdb] & 0x200) != 0) {
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[4] = 0x3f800000;
      param_2[5] = 0x3f800000;
      param_2[6] = 0x3f800000;
      param_2[7] = 0x41700000;
    }
  }
  iVar1 = FUN_00e6b900();
  if ((iVar1 == 3) && (-1 < *(char *)(param_1 + 0x794))) {
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  FUN_00faeea0(param_2);
  FUN_00faef10(param_2,param_3);
  FUN_00faf0b0(param_2,param_4);
  FUN_00faf2f0(param_2,param_4);
  FUN_00fafaf0(param_2,param_4);
  FUN_00fafa20(param_2,param_4);
  FUN_00faf990(param_2,param_4);
  FUN_00fafd30(param_2,param_3);
  if (-1 < *(char *)(param_1 + 0x7e0)) {
    param_2[*(char *)(param_1 + 0x7e0) * 4 + 2] = 0x3f800000;
    param_2[*(char *)(param_1 + 0x7e0) * 4 + 1] = 0x3f800000;
    param_2[*(char *)(param_1 + 0x7e0) * 4] = 0x3f800000;
  }
  iVar1 = FUN_00e6b900();
  if ((iVar1 == 3) && (-1 < *(char *)(param_1 + 0x794))) {
    *(undefined4 *)(param_1 + 0x38) = 1;
  }
  return;
}

// 00FB0190  FUN_00fb0190  size=580  [between]
void __thiscall FUN_00fb0190(int param_1,float *param_2,int param_3)

{
  *(undefined4 *)(param_3 + 0x200) = *(undefined4 *)(param_3 + 0x330);
  *(undefined4 *)(param_3 + 0x204) = *(undefined4 *)(param_3 + 0x334);
  *(undefined4 *)(param_3 + 0x208) = *(undefined4 *)(param_3 + 0x338);
  *(undefined4 *)(param_3 + 0x20c) = *(undefined4 *)(param_3 + 0x33c);
  if (*(char *)(param_1 + 0x78a) < '\0') {
    if (*(int *)(param_1 + 0x7b8) == 0) {
      *(float *)(param_3 + 0x210) = param_2[4] * *param_2;
      *(float *)(param_3 + 0x214) = param_2[5] * param_2[1];
      *(float *)(param_3 + 0x218) = param_2[6] * param_2[2];
      *(float *)(param_3 + 0x21c) = param_2[7] * param_2[3];
      if (*(int *)(param_1 + 0x44) != 0) {
        *(float *)(param_3 + 0x210) = *(float *)(param_3 + 800) * *(float *)(param_3 + 0x210);
        *(float *)(param_3 + 0x214) = *(float *)(param_3 + 0x324) * *(float *)(param_3 + 0x214);
        *(float *)(param_3 + 0x218) = *(float *)(param_3 + 0x328) * *(float *)(param_3 + 0x218);
      }
      if ((*(uint *)(param_3 + 0x36c) & 0x2000) != 0) {
        return;
      }
      if (*(int *)(param_1 + 0x2c) != 0) {
        return;
      }
      if (*(int *)(param_1 + 0x10) != 0) {
        return;
      }
      if (*(int *)(param_1 + 0x54) != 0) {
        return;
      }
      if (DAT_01be1f40 != 0) {
        return;
      }
      if (*(float *)(param_3 + 0x21c) != 1.0) {
        return;
      }
      *(undefined4 *)(param_3 + 0x21c) = 0;
      return;
    }
    if (*(char *)(param_1 + 0x78a) < '\0') {
      *(float *)(param_3 + 0x210) = *param_2;
      *(float *)(param_3 + 0x214) = param_2[1];
      *(float *)(param_3 + 0x218) = param_2[2];
      *(float *)(param_3 + 0x21c) = param_2[3];
      goto LAB_00fb0336;
    }
  }
  *(float *)(param_3 + 0x210) =
       *(float *)(param_3 + *(char *)(param_1 + 0x78a) * 0x10) +
       *param_2 * (1.0 - *(float *)(param_3 + *(char *)(param_1 + 0x78a) * 0x10));
  *(float *)(param_3 + 0x214) =
       (1.0 - *(float *)(param_3 + *(char *)(param_1 + 0x78a) * 0x10)) * param_2[1] +
       *(float *)(param_3 + *(char *)(param_1 + 0x78a) * 0x10);
  *(float *)(param_3 + 0x218) =
       (1.0 - *(float *)(param_3 + *(char *)(param_1 + 0x78a) * 0x10)) * param_2[2] +
       *(float *)(param_3 + *(char *)(param_1 + 0x78a) * 0x10);
  *(float *)(param_3 + 0x21c) = param_2[3];
LAB_00fb0336:
  *(float *)(param_3 + 0x220) = param_2[4];
  *(float *)(param_3 + 0x224) = param_2[5];
  *(float *)(param_3 + 0x228) = param_2[6];
  *(float *)(param_3 + 0x22c) = param_2[7];
  if (*(int *)(param_1 + 0x44) != 0) {
    *(float *)(param_3 + 0x220) = *(float *)(param_3 + 800) * *(float *)(param_3 + 0x220);
    *(float *)(param_3 + 0x224) = *(float *)(param_3 + 0x324) * *(float *)(param_3 + 0x224);
    *(float *)(param_3 + 0x228) = *(float *)(param_3 + 0x328) * *(float *)(param_3 + 0x228);
  }
  if (*(int *)(param_1 + 0x7b8) != 0) {
    *(undefined4 *)(param_3 + 0x230) = *(undefined4 *)(param_3 + 0x300);
    *(undefined4 *)(param_3 + 0x234) = *(undefined4 *)(param_3 + 0x304);
    *(undefined4 *)(param_3 + 0x238) = *(undefined4 *)(param_3 + 0x308);
    *(undefined4 *)(param_3 + 0x23c) = *(undefined4 *)(param_3 + 0x30c);
  }
  return;
}

// 00FB0530  cShaderSetting::cShaderSetting_29  size=34  [class]
undefined4 * __thiscall cShaderSetting::cShaderSetting_29(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FB0580  FUN_00fb0580  size=78  [between]
void __fastcall FUN_00fb0580(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_00f910d0(*(undefined4 *)(param_1 + 0x74));
  FUN_00f98f80(uVar1);
  *(undefined4 *)(param_1 + 0x8c) = 1;
  iVar2 = FUN_00e6b900();
  if (iVar2 == 3) {
    *(undefined4 *)(param_1 + 0x8c) = 0;
  }
  FUN_00f98b60(0,0x3f800000,0,4);
  return;
}

// 00FB05D0  FUN_00fb05d0  size=122  [between]
void __fastcall FUN_00fb05d0(int param_1)

{
  if (*(int *)(param_1 + 0x8c) != 0) {
    FUN_00f9d760(1);
    FUN_00f9d7a0(0);
    FUN_00f9d810(4);
    FUN_00f9dcf0(1);
    FUN_00f9df20(0xff);
    FUN_00f9de50(8,1,0xff);
    FUN_00f9dd70(1,7,1);
    FUN_00f9da90(0);
    FUN_00f9db30(0);
    FUN_00f9d8f0(0);
    FUN_00f9d6e0(1);
    FUN_00f9dcf0(1);
    FUN_00f990e0(&DAT_01f6b944);
  }
  return;
}

// 00FB0650  FUN_00fb0650  size=376  [between]
void __fastcall FUN_00fb0650(int param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0x8c) == 0) {
    FUN_00f9d760(1);
    FUN_00f9d7a0(0);
    FUN_00f9d810(7);
    FUN_00f9dcf0(0);
  }
  else {
    FUN_00f9d760(0);
    FUN_00f9dcf0(1);
    FUN_00f9de50(3,1,0xff);
    FUN_00f9dd70(1,1,1);
  }
  FUN_00f9da90(1);
  FUN_00f9db30(0);
  FUN_00f9d8f0(1);
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 2;
    uVar2 = 2;
  }
  else {
    uVar3 = 6;
    uVar2 = 5;
  }
  FUN_00f9d970(uVar2,uVar3,1);
  FUN_00f9d6e0(2);
  if (*(char *)(param_1 + 0xa8) == '\0') {
    if (*(int *)(param_1 + 0x94) != 0) {
      FUN_00f990e0(&DAT_01f710e8);
      return;
    }
    if (*(int *)(param_1 + 0x90) != 0) {
      FUN_00f990e0(&DAT_01f70f58);
      return;
    }
    FUN_00f990e0(&DAT_01f71020);
    return;
  }
  if (*(char *)(param_1 + 0xa8) != '\x01') {
    if (*(int *)(param_1 + 0x94) != 0) {
      FUN_00f990e0(&DAT_01f715d0);
      return;
    }
    puVar1 = &DAT_01f71490;
    if (*(int *)(param_1 + 0x90) == 0) {
      puVar1 = &DAT_01f71530;
    }
    FUN_00f990e0(puVar1);
    return;
  }
  if (*(int *)(param_1 + 0x94) != 0) {
    FUN_00f990e0(&DAT_01f713d8);
    return;
  }
  if (*(int *)(param_1 + 0x90) == 0) {
    FUN_00f990e0(&DAT_01f71320);
    return;
  }
  if (*(int *)(param_1 + 0xa0) != 0) {
    FUN_00f990e0(&DAT_01f71268);
    return;
  }
  FUN_00f990e0(&DAT_01f711b0);
  return;
}

// 00FB07D0  FUN_00fb07d0  size=9  [between]
void FUN_00fb07d0(void)

{
  FUN_00f9dcf0(0);
  return;
}

// 00FB0810  cShaderSetting::cShaderSetting_21  size=34  [class]
undefined4 * __thiscall cShaderSetting::cShaderSetting_21(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FB0840  cShaderSetting::cShaderSetting_20  size=19  [class]
void __fastcall cShaderSetting::cShaderSetting_20(undefined4 *param_1)

{
  Hw::cTexture::cTexture_5();
  *param_1 = vftable;
  return;
}

// 00FB0870  cShaderSetting::cShaderSetting_19  size=34  [class]
undefined4 * __thiscall cShaderSetting::cShaderSetting_19(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FB08C0  cShaderSetting::cShaderSetting_18  size=34  [class]
undefined4 * __thiscall cShaderSetting::cShaderSetting_18(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FB0910  cShaderSetting::cShaderSetting_24  size=34  [class]
undefined4 * __thiscall cShaderSetting::cShaderSetting_24(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FB0960  cShaderSetting::cShaderSetting_23  size=34  [class]
undefined4 * __thiscall cShaderSetting::cShaderSetting_23(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FB09B0  cShaderSetting::cShaderSetting_22  size=34  [class]
undefined4 * __thiscall cShaderSetting::cShaderSetting_22(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FB09E0  FUN_00fb09e0  size=39  [between]
void __thiscall FUN_00fb09e0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00f910d0(*(undefined4 *)(param_1 + 0x74));
  FUN_00f98f80(uVar1);
  FUN_00f990e0(param_2);
  return;
}

// 00FB0B20  cShaderSetting::cShaderSetting_27  size=34  [class]
undefined4 * __thiscall cShaderSetting::cShaderSetting_27(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FB0B90  cShaderSetting::cShaderSetting_26  size=34  [class]
undefined4 * __thiscall cShaderSetting::cShaderSetting_26(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FB0BF0  cShaderSetting::cShaderSetting_25  size=34  [class]
undefined4 * __thiscall cShaderSetting::cShaderSetting_25(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FB0C20  FUN_00fb0c20  size=25  [between]
undefined4 __thiscall FUN_00fb0c20(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x74) = 0x29;
  *(undefined4 *)(param_1 + 0x78) = param_2;
  return 1;
}

// 00FB0C70  cShaderSetting::cShaderSetting_28  size=34  [class]
undefined4 * __thiscall cShaderSetting::cShaderSetting_28(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FB12B0  FUN_00fb12b0  size=63  [callgraph]
void __thiscall FUN_00fb12b0(int param_1,int param_2,uint param_3)

{
  if ((-1 < (int)param_3) && (param_3 < *(uint *)(param_2 + 0xc))) {
    FUN_00fa1d50(param_1 + 0x70,param_3 * 0x30 + *(int *)(param_2 + 8));
    return;
  }
  FUN_00fa1d50(param_1 + 0x70,0);
  return;
}

// 00FB12F0  FUN_00fb12f0  size=63  [callgraph]
void __thiscall FUN_00fb12f0(int param_1,int param_2,uint param_3)

{
  if ((-1 < (int)param_3) && (param_3 < *(uint *)(param_2 + 0xc))) {
    FUN_00fa1d50(param_1 + 0x7c,param_3 * 0x30 + *(int *)(param_2 + 8));
    return;
  }
  FUN_00fa1d50(param_1 + 0x7c,0);
  return;
}

// 00FB1330  FUN_00fb1330  size=36  [callgraph]
void __thiscall FUN_00fb1330(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00fa0740(param_3);
  FUN_00fa1d50(param_1 + 0x34,uVar1);
  return;
}

// 00FB1360  FUN_00fb1360  size=36  [callgraph]
void __thiscall FUN_00fb1360(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00fa0740(param_3);
  FUN_00fa1d50(param_1 + 0x4c,uVar1);
  return;
}

// 00FB1390  FUN_00fb1390  size=59  [callgraph]
void __fastcall FUN_00fb1390(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00eaf7d0();
  if (*(uint *)(iVar1 + 0xc) < 0xe) {
    FUN_00fa1d50(param_1 + 0x40,0);
    return;
  }
  FUN_00fa1d50(param_1 + 0x40,*(int *)(iVar1 + 8) + 0x270);
  return;
}

// 00FB13D0  FUN_00fb13d0  size=59  [callgraph]
void __fastcall FUN_00fb13d0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00eaf7d0();
  if (*(uint *)(iVar1 + 0xc) < 5) {
    FUN_00fa1d50(param_1 + 0x40,0);
    return;
  }
  FUN_00fa1d50(param_1 + 0x40,*(int *)(iVar1 + 8) + 0xc0);
  return;
}

// 00FB1410  FUN_00fb1410  size=65  [callgraph]
void __fastcall FUN_00fb1410(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00eaf7d0();
  if (*(uint *)(iVar1 + 0xc) < 10) {
    FUN_00fa1d50(param_1 + 0x88,0);
    return;
  }
  FUN_00fa1d50(param_1 + 0x88,*(int *)(iVar1 + 8) + 0x1b0);
  return;
}

// 00FB1460  FUN_00fb1460  size=39  [callgraph]
void __thiscall FUN_00fb1460(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00fa0740(param_3);
  FUN_00fa1d50(param_1 + 0x94,uVar1);
  return;
}

// 00FB1490  FUN_00fb1490  size=39  [callgraph]
void __thiscall FUN_00fb1490(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00fa0740(param_3);
  FUN_00fa1d50(param_1 + 0xa0,uVar1);
  return;
}

// 00FB14C0  FUN_00fb14c0  size=23  [callgraph]
void __thiscall FUN_00fb14c0(int param_1,undefined4 param_2)

{
  FUN_00fa1d50(param_1 + 0x28,param_2);
  return;
}

// 00FB14E0  FUN_00fb14e0  size=23  [callgraph]
void __thiscall FUN_00fb14e0(int param_1,undefined4 param_2)

{
  FUN_00fa1d50(param_1 + 0x40,param_2);
  return;
}

// 00FB1500  FUN_00fb1500  size=23  [callgraph]
void __thiscall FUN_00fb1500(int param_1,undefined4 param_2)

{
  FUN_00fa1d50(param_1 + 0x58,param_2);
  return;
}

// 00FB1520  FUN_00fb1520  size=23  [callgraph]
void __thiscall FUN_00fb1520(int param_1,undefined4 param_2)

{
  FUN_00fa1d50(param_1 + 100,param_2);
  return;
}

// 00FB1540  FUN_00fb1540  size=23  [callgraph]
void __thiscall FUN_00fb1540(int param_1,undefined4 param_2)

{
  FUN_00fa1d50(param_1 + 0x70,param_2);
  return;
}

// 00FB1560  FUN_00fb1560  size=23  [callgraph]
void __thiscall FUN_00fb1560(int param_1,undefined4 param_2)

{
  FUN_00fa1d50(param_1 + 0x7c,param_2);
  return;
}

// 00FB1580  FUN_00fb1580  size=23  [callgraph]
void __thiscall FUN_00fb1580(int param_1,undefined4 param_2)

{
  FUN_00fa1d50(param_1 + 0x34,param_2);
  return;
}

// 00FB15A0  FUN_00fb15a0  size=23  [callgraph]
void __thiscall FUN_00fb15a0(int param_1,undefined4 param_2)

{
  FUN_00fa1d50(param_1 + 0x4c,param_2);
  return;
}

// 00FB15C0  FUN_00fb15c0  size=26  [callgraph]
void __thiscall FUN_00fb15c0(int param_1,undefined4 param_2)

{
  FUN_00fa1d50(param_1 + 0x94,param_2);
  return;
}

// 00FB15E0  FUN_00fb15e0  size=26  [callgraph]
void __thiscall FUN_00fb15e0(int param_1,undefined4 param_2)

{
  FUN_00fa1d50(param_1 + 0xa0,param_2);
  return;
}

// 00FB1610  FUN_00fb1610  size=42  [callgraph]
void __thiscall FUN_00fb1610(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x5c) = param_4;
  uVar1 = FUN_00fa0740(param_3);
  FUN_00fa1d50(param_1 + 0x58,uVar1);
  return;
}

// 00FB1640  FUN_00fb1640  size=42  [callgraph]
void __thiscall FUN_00fb1640(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x68) = param_4;
  uVar1 = FUN_00fa0740(param_3);
  FUN_00fa1d50(param_1 + 100,uVar1);
  return;
}

// 00FB1670  FUN_00fb1670  size=34  [callgraph]
void __fastcall FUN_00fb1670(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00fa0740(0);
  FUN_00fa1d50(param_1 + 0x28,uVar1);
  return;
}

// 00FB16A0  FUN_00fb16a0  size=34  [callgraph]
void __fastcall FUN_00fb16a0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00fa0740(0);
  FUN_00fa1d50(param_1 + 0x28,uVar1);
  return;
}

// 00FB16D0  FUN_00fb16d0  size=34  [callgraph]
void __fastcall FUN_00fb16d0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00fa0740(0);
  FUN_00fa1d50(param_1 + 0x28,uVar1);
  return;
}

// 00FB1700  FUN_00fb1700  size=144  [callgraph]
void __fastcall FUN_00fb1700(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
  uVar1 = FUN_00fa0740(0);
  FUN_00fa1d50(param_1 + 0x28,uVar1);
  uVar1 = FUN_00fa0740(0);
  FUN_00fa1d50(param_1 + 0x34,uVar1);
  piVar2 = (int *)FUN_00f9e370(0x7fd4929a);
  if (piVar2 == (int *)0x0) {
    return;
  }
  if ((undefined4 *)*piVar2 != (undefined4 *)0x0) {
    FUN_00fa1d50(param_1 + 0x40,*(undefined4 *)*piVar2);
    return;
  }
  if ((undefined4 *)piVar2[1] != (undefined4 *)0x0) {
    FUN_00fa1d50(param_1 + 0x40,*(undefined4 *)piVar2[1]);
    return;
  }
  FUN_00fa1d50(param_1 + 0x40,0);
  return;
}

// 00FB1790  FUN_00fb1790  size=77  [callgraph]
undefined4 __fastcall FUN_00fb1790(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_00fa0740(0);
  iVar2 = FUN_00fa1d50(param_1 + 0x28,uVar1);
  if (iVar2 != 0) {
    uVar1 = FUN_00fa0740(0);
    iVar2 = FUN_00fa1d50(param_1 + 0x34,uVar1);
    if (iVar2 != 0) {
      return 1;
    }
  }
  return 0;
}

// 00FB17E0  FUN_00fb17e0  size=80  [callgraph]
void __fastcall FUN_00fb17e0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00fa0740(0);
  FUN_00fa1d50(param_1 + 0x28,uVar1);
  uVar1 = FUN_00fa0740(0);
  FUN_00fa1d50(param_1 + 0x34,uVar1);
  uVar1 = FUN_00fa0740(0);
  FUN_00fa1d50(param_1 + 0x40,uVar1);
  return;
}

// 00FB1830  FUN_00fb1830  size=34  [callgraph]
void __fastcall FUN_00fb1830(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00fa0740(0);
  FUN_00fa1d50(param_1 + 0x28,uVar1);
  return;
}

// 00FB1860  FUN_00fb1860  size=34  [callgraph]
void __fastcall FUN_00fb1860(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00fa0740(0);
  FUN_00fa1d50(param_1 + 0x28,uVar1);
  return;
}

// 00FB1890  FUN_00fb1890  size=57  [callgraph]
void __fastcall FUN_00fb1890(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00fa0740(0);
  FUN_00fa1d50(param_1 + 0x28,uVar1);
  uVar1 = FUN_00fa0740(0);
  FUN_00fa1d50(param_1 + 0x34,uVar1);
  return;
}

// 00FB18D0  FUN_00fb18d0  size=24  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00fb18d0(void)

{
  if (0.0 < _DAT_01b83dc8) {
    return 1;
  }
  return 0;
}

// 00FB18F0  FUN_00fb18f0  size=34  [callgraph]
void __fastcall FUN_00fb18f0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00fa0740(0);
  FUN_00fa1d50(param_1 + 0x28,uVar1);
  return;
}

// 00FB1920  FUN_00fb1920  size=57  [callgraph]
void __fastcall FUN_00fb1920(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00fa0740(0);
  FUN_00fa1d50(param_1 + 0x28,uVar1);
  uVar1 = FUN_00fa0740(0);
  FUN_00fa1d50(param_1 + 0x34,uVar1);
  return;
}

// 00FB1960  FUN_00fb1960  size=80  [callgraph]
void __fastcall FUN_00fb1960(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00fa0740(0);
  FUN_00fa1d50(param_1 + 0x4c,uVar1);
  uVar1 = FUN_00fa0740(0);
  FUN_00fa1d50(param_1 + 0x58,uVar1);
  uVar1 = FUN_00fa0740(0);
  FUN_00fa1d50(param_1 + 100,uVar1);
  return;
}

// 00FB19C0  FUN_00fb19c0  size=25  [callgraph]
void __thiscall FUN_00fb19c0(int param_1,undefined4 param_2)

{
  FUN_00f9ec50(param_1 + 0x34,param_2,4);
  return;
}

// 00FB19E0  FUN_00fb19e0  size=25  [callgraph]
void __thiscall FUN_00fb19e0(int param_1,undefined4 param_2)

{
  FUN_00f9ea50(param_1 + 0x40,param_2,4);
  return;
}

// 00FB1A00  FUN_00fb1a00  size=23  [callgraph]
void __thiscall FUN_00fb1a00(int param_1,undefined4 param_2)

{
  FUN_00f9ee50(param_1 + 0x28,param_2);
  return;
}

// 00FB1A20  FUN_00fb1a20  size=34  [callgraph]
void __fastcall FUN_00fb1a20(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00fa0740(0);
  FUN_00fa1d50(param_1 + 0x28,uVar1);
  return;
}

// 00FB1A50  FUN_00fb1a50  size=34  [callgraph]
void __fastcall FUN_00fb1a50(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00fa0740(0);
  FUN_00fa1d50(param_1 + 0x28,uVar1);
  return;
}

// 00FB1A80  FUN_00fb1a80  size=34  [callgraph]
void __fastcall FUN_00fb1a80(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00fa0740(0);
  FUN_00fa1d50(param_1 + 0x28,uVar1);
  return;
}

// 00FB1AB0  FUN_00fb1ab0  size=18  [callgraph]
undefined4 * __fastcall FUN_00fb1ab0(undefined4 *param_1)

{
  Hw::cVertexShader::cVertexShader();
  *param_1 = &PTR_FUN_016f23d0;
  return param_1;
}

// 00FB1AD0  FUN_00fb1ad0  size=26  [callgraph]
bool FUN_00fb1ad0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00f9e770(param_1,param_2);
  return iVar1 != 0;
}

// 00FB1B00  FUN_00fb1b00  size=36  [callgraph]
void __thiscall FUN_00fb1b00(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00fa0740(param_3);
  FUN_00fa1d50(param_1 + 0x28,uVar1);
  return;
}

// 00FB1B30  FUN_00fb1b30  size=23  [callgraph]
void __thiscall FUN_00fb1b30(int param_1,undefined4 param_2)

{
  FUN_00fa1d50(param_1 + 0x28,param_2);
  return;
}

// 00FB1B50  FUN_00fb1b50  size=25  [callgraph]
void __thiscall FUN_00fb1b50(int param_1,undefined4 param_2)

{
  FUN_00f9ec50(param_1 + 0x34,param_2,4);
  return;
}

// 00FB1B70  FUN_00fb1b70  size=25  [callgraph]
void __thiscall FUN_00fb1b70(int param_1,undefined4 param_2)

{
  FUN_00f9ec50(param_1 + 0x68,param_2,4);
  return;
}

// 00FB1B90  FUN_00fb1b90  size=25  [callgraph]
void __thiscall FUN_00fb1b90(int param_1,undefined4 param_2)

{
  FUN_00f9ea50(param_1 + 0x74,param_2,1);
  return;
}

// 00FB1BB0  FUN_00fb1bb0  size=25  [callgraph]
void __thiscall FUN_00fb1bb0(int param_1,undefined4 param_2)

{
  FUN_00f9ea50(param_1 + 0x80,param_2,1);
  return;
}

// 00FB1BD0  FUN_00fb1bd0  size=36  [callgraph]
void __thiscall FUN_00fb1bd0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00fa0740(param_3);
  FUN_00fa1d50(param_1 + 0x28,uVar1);
  return;
}

// 00FB1C00  FUN_00fb1c00  size=33  [callgraph]
void __thiscall FUN_00fb1c00(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x40) = *param_2;
  *(undefined4 *)(param_1 + 0x44) = param_2[1];
  *(undefined4 *)(param_1 + 0x48) = param_2[2];
  *(undefined4 *)(param_1 + 0x4c) = param_2[3];
  return;
}

// 00FB1C30  FUN_00fb1c30  size=23  [callgraph]
void __thiscall FUN_00fb1c30(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  *(undefined4 *)(param_1 + 0x60) = *param_2;
  *(undefined4 *)(param_1 + 100) = *param_3;
  return;
}

// 00FB1C50  FUN_00fb1c50  size=33  [callgraph]
void __thiscall FUN_00fb1c50(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x50) = *param_2;
  *(undefined4 *)(param_1 + 0x54) = param_2[1];
  *(undefined4 *)(param_1 + 0x58) = param_2[2];
  *(undefined4 *)(param_1 + 0x5c) = param_2[3];
  return;
}

// 00FB1C80  FUN_00fb1c80  size=26  [callgraph]
bool FUN_00fb1c80(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00fa01a0(param_1,param_2);
  return iVar1 != 0;
}

// 00FB1CA0  FUN_00fb1ca0  size=34  [callgraph]
void __fastcall FUN_00fb1ca0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00fa0740(0);
  FUN_00fa1d50(param_1 + 0x28,uVar1);
  return;
}

// 00FB1CD0  FUN_00fb1cd0  size=34  [callgraph]
void __fastcall FUN_00fb1cd0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00fa0740(0);
  FUN_00fa1d50(param_1 + 0x28,uVar1);
  return;
}

// 00FB1D00  FUN_00fb1d00  size=23  [callgraph]
void __thiscall FUN_00fb1d00(int param_1,undefined4 param_2)

{
  FUN_00fa1d50(param_1 + 0x28,param_2);
  return;
}

// 00FB1D20  FUN_00fb1d20  size=85  [callgraph]
undefined4 __fastcall FUN_00fb1d20(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00fa0740(0);
  FUN_00fa1d50(param_1 + 0x28,uVar1);
  uVar1 = FUN_00fa0740(0);
  FUN_00fa1d50(param_1 + 0x34,uVar1);
  uVar1 = FUN_00fa0740(0);
  FUN_00fa1d50(param_1 + 0x40,uVar1);
  return 1;
}

// 00FB1D80  FUN_00fb1d80  size=46  [callgraph]
void __fastcall FUN_00fb1d80(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00e03ea0("pre_pow2");
  uVar1 = FUN_00fa0740(uVar1);
  FUN_00fa1d50(param_1 + 0x58,uVar1);
  return;
}

// 00FB1DB0  FUN_00fb1db0  size=34  [callgraph]
void __fastcall FUN_00fb1db0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00fa0740(0);
  FUN_00fa1d50(param_1 + 100,uVar1);
  return;
}

// 00FB1DE0  FUN_00fb1de0  size=57  [callgraph]
void __fastcall FUN_00fb1de0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00fa0740(0);
  FUN_00fa1d50(param_1 + 100,uVar1);
  uVar1 = FUN_00fa0740(0);
  FUN_00fa1d50(param_1 + 0x4c,uVar1);
  return;
}

// 00FB1E20  FUN_00fb1e20  size=23  [callgraph]
void __thiscall FUN_00fb1e20(int param_1,undefined4 param_2)

{
  FUN_00fa1d50(param_1 + 100,param_2);
  return;
}

// 00FB1E40  FUN_00fb1e40  size=44  [callgraph]
void __thiscall FUN_00fb1e40(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00f9ec50(param_1 + 0x7c,param_2,4);
  FUN_00f9ec50(param_1 + 0x70,param_3,4);
  return;
}

// 00FB1E70  FUN_00fb1e70  size=26  [callgraph]
void __thiscall FUN_00fb1e70(int param_1,undefined4 param_2)

{
  FUN_00f9ee50(param_1 + 0x88,param_2);
  return;
}

// 00FB1E90  FUN_00fb1e90  size=50  [callgraph]
void __thiscall FUN_00fb1e90(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00f9ec50(param_1 + 0x94,param_2,4);
  FUN_00f9ec50(param_1 + 0xb8,param_3,4);
  return;
}

// 00FB1ED0  FUN_00fb1ed0  size=37  [callgraph]
void __fastcall FUN_00fb1ed0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00fa0740(0);
  FUN_00fa1d50(param_1 + 0xc4,uVar1);
  return;
}

// 00FB1F00  FUN_00fb1f00  size=37  [callgraph]
void __fastcall FUN_00fb1f00(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00fa0740(0);
  FUN_00fa1d50(param_1 + 0xd0,uVar1);
  return;
}

// 00FB1F30  FUN_00fb1f30  size=50  [callgraph]
void __thiscall FUN_00fb1f30(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00f9ec50(param_1 + 0xc4,param_2,4);
  FUN_00f9ec50(param_1 + 0xd0,param_3,4);
  return;
}

// 00FB1F70  FUN_00fb1f70  size=37  [callgraph]
void __fastcall FUN_00fb1f70(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00fa0740(0);
  FUN_00fa1d50(param_1 + 0xdc,uVar1);
  return;
}

// 00FB1FA0  FUN_00fb1fa0  size=103  [callgraph]
void __fastcall FUN_00fb1fa0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00fa0740(0);
  FUN_00fa1d50(param_1 + 0x28,uVar1);
  uVar1 = FUN_00fa0740(0);
  FUN_00fa1d50(param_1 + 0x34,uVar1);
  uVar1 = FUN_00fa0740(0);
  FUN_00fa1d50(param_1 + 0x40,uVar1);
  uVar1 = FUN_00fa0740(0);
  FUN_00fa1d50(param_1 + 0x4c,uVar1);
  return;
}

// 00FB2050  FUN_00fb2050  size=6  [callgraph]
undefined4 FUN_00fb2050(void)

{
  return DAT_01f6c7a8;
}

// 00FB2060  FUN_00fb2060  size=6  [callgraph]
undefined * FUN_00fb2060(void)

{
  return &DAT_01f6c880;
}

// 00FB2070  FUN_00fb2070  size=6  [callgraph]
undefined * FUN_00fb2070(void)

{
  return &DAT_01f6c8c0;
}

// 00FB2080  FUN_00fb2080  size=6  [callgraph]
undefined4 FUN_00fb2080(void)

{
  return DAT_01f6c7a4;
}

// 00FB2090  FUN_00fb2090  size=42  [callgraph]
bool FUN_00fb2090(int param_1)

{
  int iVar1;
  
  FUN_00f99300();
  if (param_1 == 0) {
    return false;
  }
  iVar1 = FUN_00f9e690(param_1);
  return iVar1 != 0;
}

// 00FB20C0  FUN_00fb20c0  size=42  [callgraph]
bool FUN_00fb20c0(int param_1)

{
  int iVar1;
  
  FUN_00f99300();
  if (param_1 == 0) {
    return false;
  }
  iVar1 = FUN_00f9e6b0(param_1);
  return iVar1 != 0;
}

// 00FB2100  FUN_00fb2100  size=103  [callgraph]
void __fastcall FUN_00fb2100(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00fa0740(0);
  FUN_00fa1d50(param_1 + 0x28,uVar1);
  uVar1 = FUN_00fa0740(0);
  FUN_00fa1d50(param_1 + 0x34,uVar1);
  uVar1 = FUN_00fa0740(0);
  FUN_00fa1d50(param_1 + 0x40,uVar1);
  uVar1 = FUN_00fa0740(0);
  FUN_00fa1d50(param_1 + 0x4c,uVar1);
  return;
}

// 00FB2170  FUN_00fb2170  size=106  [callgraph]
void __fastcall FUN_00fb2170(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00fa0740(0);
  FUN_00fa1d50(param_1 + 0x28,uVar1);
  uVar1 = FUN_00fa0740(0);
  FUN_00fa1d50(param_1 + 0x34,uVar1);
  uVar1 = FUN_00fa0740(0);
  FUN_00fa1d50(param_1 + 0x40,uVar1);
  uVar1 = FUN_00fa0740(0);
  FUN_00fa1d50(param_1 + 0x4c,uVar1);
  return;
}

// 00FB21E0  FUN_00fb21e0  size=126  [callgraph]
void __fastcall FUN_00fb21e0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00fa0740(0);
  FUN_00fa1d50(param_1 + 0x28,uVar1);
  uVar1 = FUN_00fa0740(0);
  FUN_00fa1d50(param_1 + 0x34,uVar1);
  uVar1 = FUN_00fa0740(0);
  FUN_00fa1d50(param_1 + 0x40,uVar1);
  uVar1 = FUN_00fa0740(0);
  FUN_00fa1d50(param_1 + 0x4c,uVar1);
  uVar1 = FUN_00fa0740(0);
  FUN_00fa1d50(param_1 + 0x58,uVar1);
  return;
}

// 00FB2260  FUN_00fb2260  size=80  [callgraph]
void __fastcall FUN_00fb2260(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00fa0740(0);
  FUN_00fa1d50(param_1 + 0x28,uVar1);
  uVar1 = FUN_00fa0740(0);
  FUN_00fa1d50(param_1 + 0x34,uVar1);
  uVar1 = FUN_00fa0740(0);
  FUN_00fa1d50(param_1 + 0x40,uVar1);
  return;
}

// 00FB22B0  FUN_00fb22b0  size=80  [callgraph]
void __fastcall FUN_00fb22b0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00fa0740(0);
  FUN_00fa1d50(param_1 + 0x28,uVar1);
  uVar1 = FUN_00fa0740(0);
  FUN_00fa1d50(param_1 + 0x34,uVar1);
  uVar1 = FUN_00fa0740(0);
  FUN_00fa1d50(param_1 + 0x40,uVar1);
  return;
}

// 00FB2300  FUN_00fb2300  size=117  [callgraph]
void __thiscall FUN_00fb2300(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00f910d0(*(undefined4 *)(param_1 + 0x74));
  FUN_00f98f80(uVar1);
  FUN_00f990e0(param_3);
  if (DAT_01f6c910 == 0) {
    FUN_00f92be0(*(undefined4 *)(param_2 + 0x358));
    return;
  }
  if (DAT_01f6c948 != 0) {
    FUN_00f92b70(&DAT_01f6c940,0);
    return;
  }
  FUN_00f92be0(*(undefined4 *)(param_2 + 0x358));
  return;
}

// 00FB2380  FUN_00fb2380  size=16  [callgraph]
void __thiscall FUN_00fb2380(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  return;
}

// 00FB23A0  FUN_00fb23a0  size=21  [callgraph]
bool __thiscall FUN_00fb23a0(int *param_1,int *param_2)

{
  return *param_1 != *param_2;
}

// 00FB23F0  FUN_00fb23f0  size=24  [callgraph]
void __thiscall FUN_00fb23f0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(*param_1 + 0x74))(param_2,param_3,0x18);
  return;
}

// 00FB2410  FUN_00fb2410  size=23  [callgraph]
void FUN_00fb2410(char *param_1,char *param_2)

{
  _strcpy_s(param_1,0x3c,param_2);
  return;
}

// 00FB2440  FUN_00fb2440  size=21  [callgraph]
bool __thiscall FUN_00fb2440(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}

// 00FB2460  FUN_00fb2460  size=56  [callgraph]
void FUN_00fb2460(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(iVar1 + 4);
  }
  *(int *)(*param_2 + 4) = iVar2;
  *(int *)(*param_2 + 8) = iVar1;
  if (iVar2 != 0) {
    *(int *)(iVar2 + 8) = *param_2;
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + 4) = *param_2;
  }
  return;
}

// 00FB24A0  FUN_00fb24a0  size=23  [callgraph]
void FUN_00fb24a0(int *param_1,undefined4 *param_2)

{
  if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    *(undefined4 *)*param_1 = *param_2;
  }
  return;
}

// 00FB24C0  FUN_00fb24c0  size=14  [callgraph]
void __thiscall FUN_00fb24c0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 00FB24E0  FUN_00fb24e0  size=18  [callgraph]
undefined4 * __fastcall FUN_00fb24e0(undefined4 *param_1)

{
  FUN_00fac100();
  *param_1 = &PTR_cShaderSetting_81_016f1e60;
  return param_1;
}

// 00FB2500  FUN_00fb2500  size=18  [callgraph]
undefined4 * __fastcall FUN_00fb2500(undefined4 *param_1)

{
  FUN_00fac100();
  *param_1 = &PTR_cShaderSetting_14_016f23e4;
  return param_1;
}

// 00FB2520  cShaderSetting::cShaderSetting_14  size=78  [class]
undefined4 * __thiscall cShaderSetting::cShaderSetting_14(undefined4 *param_1,byte param_2)

{
  int iVar1;
  
  *param_1 = &PTR_cShaderSetting_81_016f1e60;
  iVar1 = 4;
  do {
    cModelShader::cModelShader_2();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FB2570  FUN_00fb2570  size=18  [between]
undefined4 * __fastcall FUN_00fb2570(undefined4 *param_1)

{
  FUN_00fac100();
  *param_1 = &PTR_cShaderSetting_13_016f2414;
  return param_1;
}

// 00FB2590  cShaderSetting::cShaderSetting_13  size=78  [class]
undefined4 * __thiscall cShaderSetting::cShaderSetting_13(undefined4 *param_1,byte param_2)

{
  int iVar1;
  
  *param_1 = &PTR_cShaderSetting_81_016f1e60;
  iVar1 = 4;
  do {
    cModelShader::cModelShader_2();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FB25E0  FUN_00fb25e0  size=18  [between]
undefined4 * __fastcall FUN_00fb25e0(undefined4 *param_1)

{
  FUN_00fac100();
  *param_1 = &PTR_cShaderSetting_83_016f1e90;
  return param_1;
}

// 00FB2620  cShaderSetting::cShaderSetting_16  size=34  [class]
undefined4 * __thiscall cShaderSetting::cShaderSetting_16(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FB2650  FUN_00fb2650  size=18  [between]
undefined4 * __fastcall FUN_00fb2650(undefined4 *param_1)

{
  FUN_00fac100();
  *param_1 = &PTR_cShaderSetting_82_016f1ec0;
  return param_1;
}

// 00FB2670  FUN_00fb2670  size=18  [between]
undefined4 * __fastcall FUN_00fb2670(undefined4 *param_1)

{
  FUN_00fac100();
  *param_1 = &PTR_cShaderSetting_15_016f246c;
  return param_1;
}

// 00FB2690  cShaderSetting::cShaderSetting_15  size=78  [class]
undefined4 * __thiscall cShaderSetting::cShaderSetting_15(undefined4 *param_1,byte param_2)

{
  int iVar1;
  
  *param_1 = &PTR_cShaderSetting_82_016f1ec0;
  iVar1 = 4;
  do {
    cModelShader::cModelShader_2();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FB26E0  FUN_00fb26e0  size=18  [between]
undefined4 * __fastcall FUN_00fb26e0(undefined4 *param_1)

{
  FUN_00fac100();
  *param_1 = &PTR_cShaderSetting_17_016f249c;
  return param_1;
}

// 00FB2700  cShaderSetting::cShaderSetting_17  size=78  [class]
undefined4 * __thiscall cShaderSetting::cShaderSetting_17(undefined4 *param_1,byte param_2)

{
  int iVar1;
  
  *param_1 = &PTR_cShaderSetting_82_016f1ec0;
  iVar1 = 4;
  do {
    cModelShader::cModelShader_2();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FB2750  FUN_00fb2750  size=63  [between]
void __thiscall FUN_00fb2750(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00f910d0(*(undefined4 *)(param_1 + 0x74));
  FUN_00f98f80(uVar1);
  FUN_00f92760(*(undefined4 *)(param_4 + 0x358));
  FUN_00f990e0(&DAT_01eeeae0);
  return;
}

// 00FB27C0  FUN_00fb27c0  size=18  [between]
undefined4 * __fastcall FUN_00fb27c0(undefined4 *param_1)

{
  FUN_00fac100();
  *param_1 = &PTR_cShaderSetting_84_016f1ef0;
  return param_1;
}

// 00FB27E0  FUN_00fb27e0  size=18  [between]
undefined4 * __fastcall FUN_00fb27e0(undefined4 *param_1)

{
  FUN_00fac100();
  *param_1 = &PTR_cShaderSetting_11_016f24cc;
  return param_1;
}

// 00FB2800  cShaderSetting::cShaderSetting_11  size=78  [class]
undefined4 * __thiscall cShaderSetting::cShaderSetting_11(undefined4 *param_1,byte param_2)

{
  int iVar1;
  
  *param_1 = &PTR_cShaderSetting_84_016f1ef0;
  iVar1 = 4;
  do {
    cModelShader::cModelShader_2();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FB2990  cShaderSetting::cShaderSetting_12  size=34  [class]
undefined4 * __thiscall cShaderSetting::cShaderSetting_12(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FB54E0  cShaderSetting::cShaderSetting_59  size=34  [class]
undefined4 * __thiscall cShaderSetting::cShaderSetting_59(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FB5540  cShaderSetting::cShaderSetting_62  size=34  [class]
undefined4 * __thiscall cShaderSetting::cShaderSetting_62(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FB5590  cShaderSetting::cShaderSetting_61  size=34  [class]
undefined4 * __thiscall cShaderSetting::cShaderSetting_61(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FB55F0  cShaderSetting::cShaderSetting_60  size=34  [class]
undefined4 * __thiscall cShaderSetting::cShaderSetting_60(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FB5650  cShaderSetting::cShaderSetting_64  size=34  [class]
undefined4 * __thiscall cShaderSetting::cShaderSetting_64(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FB56B0  cShaderSetting::cShaderSetting_63  size=34  [class]
undefined4 * __thiscall cShaderSetting::cShaderSetting_63(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FB5710  cShaderSetting::cShaderSetting_66  size=34  [class]
undefined4 * __thiscall cShaderSetting::cShaderSetting_66(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FB5770  cShaderSetting::cShaderSetting_65  size=34  [class]
undefined4 * __thiscall cShaderSetting::cShaderSetting_65(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FB57A0  FUN_00fb57a0  size=45  [between]
void __thiscall FUN_00fb57a0(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x90);
  param_2[1] = *(undefined4 *)(param_1 + 0x94);
  param_2[2] = *(undefined4 *)(param_1 + 0x98);
  param_2[3] = *(undefined4 *)(param_1 + 0x9c);
  return;
}

// 00FB57D0  FUN_00fb57d0  size=45  [between]
void __thiscall FUN_00fb57d0(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0xa0);
  param_2[1] = *(undefined4 *)(param_1 + 0xa4);
  param_2[2] = *(undefined4 *)(param_1 + 0xa8);
  param_2[3] = *(undefined4 *)(param_1 + 0xac);
  return;
}

// 00FB5820  cShaderSetting::cShaderSetting_39  size=34  [class]
undefined4 * __thiscall cShaderSetting::cShaderSetting_39(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FB5880  cShaderSetting::cShaderSetting_38  size=34  [class]
undefined4 * __thiscall cShaderSetting::cShaderSetting_38(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FB58E0  cShaderSetting::cShaderSetting_37  size=34  [class]
undefined4 * __thiscall cShaderSetting::cShaderSetting_37(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FB5940  cShaderSetting::cShaderSetting_41  size=34  [class]
undefined4 * __thiscall cShaderSetting::cShaderSetting_41(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FB59A0  cShaderSetting::cShaderSetting_40  size=34  [class]
undefined4 * __thiscall cShaderSetting::cShaderSetting_40(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FB5A00  cShaderSetting::cShaderSetting_44  size=34  [class]
undefined4 * __thiscall cShaderSetting::cShaderSetting_44(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FB5A60  cShaderSetting::cShaderSetting_43  size=34  [class]
undefined4 * __thiscall cShaderSetting::cShaderSetting_43(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FB5AC0  cShaderSetting::cShaderSetting_42  size=34  [class]
undefined4 * __thiscall cShaderSetting::cShaderSetting_42(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FB5B20  cShaderSetting::cShaderSetting_47  size=34  [class]
undefined4 * __thiscall cShaderSetting::cShaderSetting_47(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FB5B80  cShaderSetting::cShaderSetting_46  size=34  [class]
undefined4 * __thiscall cShaderSetting::cShaderSetting_46(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FB5BE0  cShaderSetting::cShaderSetting_45  size=34  [class]
undefined4 * __thiscall cShaderSetting::cShaderSetting_45(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FB5C40  cShaderSetting::cShaderSetting_49  size=34  [class]
undefined4 * __thiscall cShaderSetting::cShaderSetting_49(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FB5CA0  cShaderSetting::cShaderSetting_48  size=34  [class]
undefined4 * __thiscall cShaderSetting::cShaderSetting_48(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FB5D00  cShaderSetting::cShaderSetting_52  size=34  [class]
undefined4 * __thiscall cShaderSetting::cShaderSetting_52(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FB5D60  cShaderSetting::cShaderSetting_51  size=34  [class]
undefined4 * __thiscall cShaderSetting::cShaderSetting_51(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FB5DC0  cShaderSetting::cShaderSetting_50  size=34  [class]
undefined4 * __thiscall cShaderSetting::cShaderSetting_50(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FB5E20  cShaderSetting::cShaderSetting_55  size=34  [class]
undefined4 * __thiscall cShaderSetting::cShaderSetting_55(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FB5E80  cShaderSetting::cShaderSetting_54  size=34  [class]
undefined4 * __thiscall cShaderSetting::cShaderSetting_54(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FB5EE0  cShaderSetting::cShaderSetting_53  size=34  [class]
undefined4 * __thiscall cShaderSetting::cShaderSetting_53(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FB5F30  cShaderSetting::cShaderSetting_58  size=34  [class]
undefined4 * __thiscall cShaderSetting::cShaderSetting_58(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FB5F90  cShaderSetting::cShaderSetting_57  size=34  [class]
undefined4 * __thiscall cShaderSetting::cShaderSetting_57(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FB5FF0  cShaderSetting::cShaderSetting_56  size=34  [class]
undefined4 * __thiscall cShaderSetting::cShaderSetting_56(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FB6050  cShaderSetting::cShaderSetting_35  size=34  [class]
undefined4 * __thiscall cShaderSetting::cShaderSetting_35(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FB60B0  cShaderSetting::cShaderSetting_34  size=34  [class]
undefined4 * __thiscall cShaderSetting::cShaderSetting_34(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FB6110  cShaderSetting::cShaderSetting_36  size=34  [class]
undefined4 * __thiscall cShaderSetting::cShaderSetting_36(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FB6220  FUN_00fb6220  size=156  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00fb6220(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_00f994a0(0xba,param_1,4);
  if (iVar1 == 0) {
    _DAT_01f14070 = *param_1;
    _DAT_01f14074 = param_1[1];
    _DAT_01f14078 = param_1[2];
    _DAT_01f1407c = param_1[3];
    FUN_00f995e0(0xba,&DAT_01f14070,4);
  }
  iVar1 = FUN_00f99540(0x2c,param_2,4);
  if (iVar1 == 0) {
    _DAT_01f12990 = *param_2;
    _DAT_01f12994 = param_2[1];
    _DAT_01f12998 = param_2[2];
    _DAT_01f1299c = param_2[3];
    FUN_00f99620(0x2c,&DAT_01f12990,4);
  }
  return;
}

// 00FB62C0  FUN_00fb62c0  size=162  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00fb62c0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_00f994a0(0xbf,param_2,4);
  if (iVar1 == 0) {
    _DAT_01f140c0 = *param_2;
    _DAT_01f140c4 = param_2[1];
    _DAT_01f140c8 = param_2[2];
    _DAT_01f140cc = param_2[3];
    FUN_00f995e0(0xbf,&DAT_01f140c0,4);
  }
  iVar1 = FUN_00f99540(0xbf,param_1,4);
  if (iVar1 == 0) {
    _DAT_01f132c0 = *param_1;
    _DAT_01f132c4 = param_1[1];
    _DAT_01f132c8 = param_1[2];
    _DAT_01f132cc = param_1[3];
    FUN_00f99620(0xbf,&DAT_01f132c0,4);
  }
  return;
}

// 00FB6650  FUN_00fb6650  size=153  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00fb6650(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00f99540(0x31,param_1,4);
  if (iVar1 == 0) {
    _DAT_01f129e0 = *param_1;
    _DAT_01f129e4 = param_1[1];
    _DAT_01f129e8 = param_1[2];
    _DAT_01f129ec = param_1[3];
    FUN_00f99620(0x31,&DAT_01f129e0,4);
  }
  iVar1 = FUN_00f994a0(0xb9,param_1,4);
  if (iVar1 == 0) {
    _DAT_01f14060 = *param_1;
    _DAT_01f14064 = param_1[1];
    _DAT_01f14068 = param_1[2];
    _DAT_01f1406c = param_1[3];
    FUN_00f995e0(0xb9,&DAT_01f14060,4);
  }
  return;
}

// 00FB66F0  FUN_00fb66f0  size=79  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00fb66f0(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00f99540(0x32,param_1,4);
  if (iVar1 == 0) {
    _DAT_01f129f0 = *param_1;
    _DAT_01f129f4 = param_1[1];
    _DAT_01f129f8 = param_1[2];
    _DAT_01f129fc = param_1[3];
    FUN_00f99620(0x32,&DAT_01f129f0,4);
  }
  return;
}

// 00FB6C50  cShaderSetting::cShaderSetting_33  size=65  [class]
undefined4 * __thiscall cShaderSetting::cShaderSetting_33(undefined4 *param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = 4;
  do {
    cModelShader::cModelShader_2();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FB6CB0  FUN_00fb6cb0  size=39  [between]
undefined4 * __thiscall FUN_00fb6cb0(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_016f1f30;
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FB6CE0  FUN_00fb6ce0  size=1079  [between]
void __thiscall FUN_00fb6ce0(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 local_5;
  
  iVar8 = *(int *)(param_1 + 0x94);
  iVar7 = *(int *)(param_1 + 0x80);
  iVar9 = *(int *)(param_1 + 0x9c);
  iVar1 = *(int *)(param_1 + 0x84);
  iVar2 = *(int *)(param_4 + 0x35c);
  iVar10 = *(int *)(param_1 + 0x7c);
  local_5 = 0;
  if (-1 < iVar1) {
    iVar3 = *(int *)(*(int *)(iVar2 + iVar1 * 4) + 0x2c);
    if (iVar3 == 0x3619f83e) {
      local_5 = 0;
    }
    else if (iVar3 == 0x1d418ce6) {
      local_5 = 1;
    }
    else if (iVar3 == 0x750d0069) {
      local_5 = 2;
    }
    else if (iVar3 == 0x5e5574b1) {
      local_5 = 3;
    }
  }
  iVar3 = *(int *)(param_2 + 0xb0);
  if (-1 < *(int *)(param_1 + 0x78)) {
    FUN_00fa1d50(*(int *)(param_1 + 0x604) + 0x28,
                 *(undefined4 *)(iVar2 + *(int *)(param_1 + 0x78) * 4));
  }
  if (-1 < iVar10) {
    FUN_00fa1d50(*(int *)(param_1 + 0x604) + 0x34,*(undefined4 *)(iVar2 + iVar10 * 4));
  }
  if (-1 < iVar8) {
    FUN_00fa1d50(*(int *)(param_1 + 0x604) + 0x58,*(undefined4 *)(iVar2 + iVar8 * 4));
  }
  if (-1 < iVar9) {
    FUN_00fa1d50(*(int *)(param_1 + 0x604) + 0x58,*(undefined4 *)(iVar2 + iVar9 * 4));
  }
  if (*(int *)(param_1 + 0x3c) == 0) {
    iVar10 = *(int *)(param_1 + 0x90);
    if (-1 < *(int *)(param_1 + 0x8c)) {
      FUN_00fa1d50(*(int *)(param_1 + 0x604) + 0x40,
                   *(undefined4 *)(iVar2 + *(int *)(param_1 + 0x8c) * 4));
    }
    if (-1 < iVar10) {
      iVar4 = *(int *)(iVar2 + iVar10 * 4);
      iVar10 = *(int *)(param_1 + 0x604) + 0x4c;
      goto LAB_00fb6e48;
    }
  }
  else {
    iVar10 = *(int *)(param_1 + 0x604);
    iVar4 = FUN_00eaf7d0();
    if (*(uint *)(iVar4 + 0xc) < 5) {
      iVar4 = 0;
      iVar10 = iVar10 + 0x40;
    }
    else {
      iVar4 = *(int *)(iVar4 + 8) + 0xc0;
      iVar10 = iVar10 + 0x40;
    }
LAB_00fb6e48:
    FUN_00fa1d50(iVar10,iVar4);
  }
  if (iVar7 < 0) {
    if (DAT_01be5554 != 0) {
      iVar7 = FUN_00eaf7d0();
      if (*(int *)(iVar7 + 0xc) == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined4 *)(iVar7 + 8);
      }
      puVar5 = &DAT_01f74474;
      goto LAB_00fb6e8d;
    }
  }
  else {
    uVar6 = *(undefined4 *)(iVar2 + iVar7 * 4);
    puVar5 = (undefined *)(*(int *)(param_1 + 0x604) + 100);
LAB_00fb6e8d:
    FUN_00fa1d50(puVar5,uVar6);
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    iVar7 = FUN_00eaf7d0();
    if (*(uint *)(iVar7 + 0xc) < 10) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(iVar7 + 8) + 0x1b0;
    }
    FUN_00fa1d50(&DAT_01f732a8,iVar7);
  }
  if (-1 < *(int *)(param_1 + 0x98)) {
    FUN_00fa1d50(*(int *)(param_1 + 0x604) + 0x94,
                 *(undefined4 *)(iVar2 + *(int *)(param_1 + 0x98) * 4));
  }
  if (*(int *)(param_1 + 0x68) != 0) {
    if (-1 < iVar8) {
      FUN_00fa1d50(*(int *)(param_1 + 0x604) + 0xa0,*(undefined4 *)(iVar2 + iVar8 * 4));
    }
    if (-1 < iVar9) {
      if (DAT_01be5554 == 0) {
        uVar6 = *(undefined4 *)(iVar2 + iVar9 * 4);
        iVar8 = *(int *)(param_1 + 0x604) + 0x70;
      }
      else {
        uVar6 = *(undefined4 *)(iVar2 + iVar9 * 4);
        iVar8 = *(int *)(param_1 + 0x604) + 0x34;
      }
      FUN_00fa1d50(iVar8,uVar6);
    }
  }
  if (-1 < iVar1) {
    if (((iVar1 != 0) || (*(int *)(param_1 + 0x88) != 0)) || (*(int *)(param_1 + 0x9c) != 0)) {
      FUN_00fa1d50(*(int *)(param_1 + 0x604) + 0x70,*(undefined4 *)(iVar2 + iVar1 * 4));
    }
    if (DAT_01be5554 != 0) {
      iVar8 = *(int *)(iVar3 + 0xd4);
      iVar7 = FUN_00fdbc60();
      if (-1 < iVar7) {
        iVar7 = *(int *)(iVar3 + 0xd4);
        iVar9 = *(int *)(&DAT_01b84688 + iVar7 * 4);
        iVar10 = *(int *)(&DAT_01b846a8 + iVar7 * 4);
        if (*(float *)(&DAT_01b84794 + iVar7 * 0x10) == 1.0) {
          iVar9 = *(int *)(&DAT_01b846a8 + *(int *)(iVar3 + 0xd4) * 4);
          iVar10 = *(int *)(&DAT_01b846c8 + *(int *)(iVar3 + 0xd4) * 4);
        }
        if (*(float *)(&DAT_01b84794 + iVar8 * 0x10) == 2.0) {
          iVar9 = *(int *)(&DAT_01b846c8 + *(int *)(iVar3 + 0xd4) * 4);
          iVar10 = *(int *)(&DAT_01b846e8 + *(int *)(iVar3 + 0xd4) * 4);
        }
        if (iVar9 < 0) {
          if (((*(int *)(param_1 + 0x30) != 0) || (iVar1 != 0)) ||
             ((*(int *)(param_1 + 0x88) != 0 || (*(int *)(param_1 + 0x9c) != 0)))) {
            FUN_00fa1d50(*(int *)(param_1 + 0x604) + 0x70,*(undefined4 *)(iVar2 + iVar1 * 4));
          }
        }
        else {
          iVar8 = FUN_00eba290(0xffff,iVar9);
          if (iVar8 != 0) {
            FUN_00fb12b0(iVar8,local_5);
          }
        }
        if (iVar10 < 0) {
          if (*(int *)(param_1 + 0x30) == 0) {
            if (((iVar1 == 0) && (*(int *)(param_1 + 0x88) == 0)) && (*(int *)(param_1 + 0x9c) == 0)
               ) goto LAB_00fb70da;
            uVar6 = *(undefined4 *)(iVar2 + iVar1 * 4);
          }
          else {
            uVar6 = *(undefined4 *)(iVar2 + iVar1 * 4);
          }
          FUN_00fa1d50(&DAT_01f7448c,uVar6);
        }
        else {
          iVar8 = FUN_00eba290(0xffff,iVar10);
          if (iVar8 != 0) {
            FUN_00fb12f0(iVar8,local_5);
          }
        }
      }
    }
  }
LAB_00fb70da:
  FUN_00fab8f0(param_4);
  if (((DAT_01be5554 != 0) && (*(int *)(param_1 + 0x68) != 0)) && (-1 < *(int *)(param_1 + 0x9c))) {
    FUN_00f990e0(&DAT_01f747e8);
  }
  return;
}

// 00FB7140  cShaderSetting::cShaderSetting_30  size=34  [class]
undefined4 * __thiscall cShaderSetting::cShaderSetting_30(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FB7370  FUN_00fb7370  size=21  [between]
undefined4 * __fastcall FUN_00fb7370(undefined4 *param_1)

{
  *param_1 = &PTR_cShaderSetting_31_016f3444;
  Hw::cTexture::cTexture_6();
  return param_1;
}

// 00FB73A0  cShaderSetting::cShaderSetting_31  size=42  [class]
undefined4 * __thiscall cShaderSetting::cShaderSetting_31(undefined4 *param_1,byte param_2)

{
  Hw::cTexture::cTexture_5();
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FB73D0  FUN_00fb73d0  size=520  [between]
void __thiscall FUN_00fb73d0(int *param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  byte *pbVar2;
  int local_c;
  undefined4 local_8;
  
  FUN_00dd7240();
  local_c = 0;
  if (DAT_01f6c97c != 3 && -1 < DAT_01f6c97c + -3) {
    pbVar2 = (byte *)(param_2 + 2);
    do {
      *param_1 = 0;
      param_1[1] = -1;
      *(undefined2 *)(param_1 + 2) = 0;
      param_2 = 0;
      local_8 = 0;
      piVar1 = (int *)FUN_00dd3500(0x7e4,param_3);
      if (piVar1 == (int *)0x0) {
        piVar1 = (int *)0x0;
      }
      else {
        FUN_00fac100();
        *piVar1 = (int)&PTR_cShaderSetting_32_016f2140;
      }
      (**(code **)(*piVar1 + 0x30))();
      piVar1[5] = (uint)((pbVar2[8] & 2) == 0);
      piVar1[1] = (uint)((pbVar2[8] & 1) != 0);
      FUN_00fad670(piVar1,pbVar2 + -2);
      if (piVar1[1] != 0) {
        local_8 = 0x30;
        param_2 = 0x28;
      }
      FUN_00fadc50(piVar1,pbVar2 + -2);
      if ((((pbVar2[-2] & 8) == 0) && ((pbVar2[6] & 1) == 0)) && ((pbVar2[3] & 0x40) == 0)) {
        piVar1[0x1e7] = 1;
      }
      if ((pbVar2[-2] & 4) != 0) {
        piVar1[0x1e7] = 1;
      }
      if ((*pbVar2 & 0x80) != 0) {
        piVar1[0x1e9] = 1;
      }
      if ((*pbVar2 & 8) != 0) {
        piVar1[0x1eb] = 1;
      }
      if ((pbVar2[9] & 0x80) == 0) {
        param_1[1] = -2;
      }
      FUN_00fae0a0(piVar1,pbVar2 + -2);
      FUN_00fae630(piVar1,pbVar2 + -2);
      if ((pbVar2[3] & 8) != 0) {
        *param_1 = (-(uint)((pbVar2[3] & 0x40) != 0) & 0xfffffffe) + 7;
        *(undefined1 *)((int)param_1 + 9) = 0x14;
      }
      if ((pbVar2[1] & 4) != 0) {
        *param_1 = 5;
        *(undefined1 *)((int)param_1 + 9) = 0x13;
        piVar1[0x1ed] = 1;
      }
      if ((pbVar2[-1] & 0x20) != 0) {
        *param_1 = 6;
        *(undefined1 *)((int)param_1 + 9) = 0x16;
        piVar1[0x1ee] = 1;
      }
      if ((pbVar2[6] & 8) != 0) {
        *param_1 = 1;
        *(undefined1 *)((int)param_1 + 9) = 0xd;
        piVar1[0x1ef] = 1;
      }
      piVar1[7] = param_1[1];
      FUN_00fae310(piVar1,pbVar2 + -2);
      FUN_00faec90(*param_1,(int)(char)param_1[2],(int)*(char *)((int)param_1 + 9),8,local_8,param_2
                   ,*(undefined1 *)((int)param_1 + 10),*(undefined1 *)((int)param_1 + 0xb),
                   (char)param_1[3],*(undefined1 *)((int)param_1 + 0xd),
                   *(undefined1 *)((int)param_1 + 0xe),*(undefined1 *)((int)param_1 + 0xf));
      param_1[param_1[4] + 5] = (int)piVar1;
      param_1[4] = param_1[4] + 1;
      local_c = local_c + 1;
      pbVar2 = pbVar2 + 0x28;
    } while (local_c < DAT_01f6c97c + -3);
  }
  return;
}

// 00FB75E0  cShaderSetting::cShaderSetting_32  size=65  [class]
undefined4 * __thiscall cShaderSetting::cShaderSetting_32(undefined4 *param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = 4;
  do {
    cModelShader::cModelShader_2();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FB7630  FUN_00fb7630  size=3090  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00fb7630(int param_1,int param_2,int param_3,float *param_4)

{
  float fVar1;
  char cVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  float local_e0;
  float local_dc;
  undefined4 local_d8;
  float local_d0;
  float local_cc;
  float local_c8;
  undefined4 local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  float local_88;
  int local_84;
  float local_80;
  float local_7c;
  undefined4 local_78;
  undefined4 local_74;
  float local_70;
  float local_6c;
  float local_68;
  undefined4 local_64;
  float local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
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
  
  iVar6 = *(int *)(param_1 + 0x7c);
  iVar5 = *(int *)(param_1 + 0x84);
  local_84 = *(int *)(param_1 + 0x80);
  local_38 = *(float *)(param_1 + 0x9c);
  local_88 = *(float *)(param_1 + 0x8c);
  local_34 = *(float *)(param_2 + 0xb0);
  if (*(int *)(param_1 + 0x68) != 0) {
    if (*(int *)(param_1 + 0x50) == 0) {
      iVar3 = FUN_00f99540(0xbb,param_4 + 0x10,4);
      if (iVar3 == 0) {
        _DAT_01f13280 = param_4[0x10];
        _DAT_01f13284 = param_4[0x11];
        _DAT_01f13288 = param_4[0x12];
        _DAT_01f1328c = param_4[0x13];
        goto LAB_00fb7713;
      }
    }
    else {
      iVar3 = FUN_00f99540(0xbb,param_4 + 0x14,4);
      if (iVar3 == 0) {
        _DAT_01f13280 = param_4[0x14];
        _DAT_01f13284 = param_4[0x15];
        _DAT_01f13288 = param_4[0x16];
        _DAT_01f1328c = param_4[0x17];
LAB_00fb7713:
        FUN_00f99620(0xbb,&DAT_01f13280,4);
      }
    }
  }
  local_20 = 0.0;
  local_1c = 0.0;
  local_18 = 0.5;
  local_14 = 0.0;
  local_60 = 0.0;
  local_5c = 0x3f800000;
  local_58 = 0x3f800000;
  local_9c = 0x3f800000;
  local_98 = 0x3f800000;
  local_c0 = 1.0;
  local_54 = 0;
  local_a0 = 0;
  local_94 = 0;
  local_bc = 0.0;
  local_b8 = 0.0;
  local_b4 = 0.0;
  if (*(int *)(param_1 + 0x30) != 0) goto LAB_00fb7a2d;
  cVar2 = *(char *)(param_1 + 0x781);
  if (-1 < cVar2) {
    iVar3 = (int)cVar2;
    local_20 = param_4[iVar3 * 4];
    if (*(int *)(param_1 + 0x50) == 0) {
      if (*(char *)(param_1 + 0x788) != '\0') goto LAB_00fb77ab;
      local_20 = -local_20;
      local_1c = param_4[iVar3 * 4];
      local_18 = param_4[iVar3 * 4 + 4];
    }
    else {
      local_20 = -local_20;
LAB_00fb77ab:
      local_1c = param_4[iVar3 * 4 + 1];
      local_18 = param_4[iVar3 * 4 + 2];
    }
    if (local_1c < 0.0) {
      local_1c = 0.0;
    }
    if (*(int *)(param_1 + 0x7a4) == 0) {
      if (*(int *)(param_1 + 0x38) == 0) {
        if (*(int *)(param_1 + 0x7bc) == 0) {
          fVar1 = *(float *)(param_2 + 0x2c);
        }
        else {
          fVar1 = *(float *)(&DAT_01b84168 + (uint)*(byte *)((int)local_34 + 2) * 4) *
                  *(float *)((int)local_34 + 0x30);
        }
      }
      else {
        fVar1 = *(float *)(&DAT_01b84168 + (uint)*(byte *)((int)local_34 + 2) * 4) *
                *(float *)((int)local_34 + 0x20);
      }
      local_20 = fVar1 * local_20;
    }
    if (param_4[cVar2 * 4 + 3] != 0.0) {
      local_20 = local_20 * -1.0;
    }
  }
  local_14 = (float)*(int *)(param_1 + 0x94);
  if (-1 < (int)local_38) {
    local_14 = 1.0;
  }
  if ((*(int *)(param_1 + 0x7a0) != 0) && (-1 < local_84)) {
    local_14 = 2.0;
  }
  if (*(int *)(param_1 + 2000) != 0) {
    local_14 = 2.0;
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    local_14 = 0.0;
  }
  if ((int)local_88 < 0) {
    local_60 = 0.0;
  }
  else {
    local_60 = 1.0;
    if (*(int *)(param_1 + 0x3c) != 0) {
      local_60 = param_4[*(char *)(param_1 + 0x790) * 4 + 3];
    }
  }
  local_54 = 0;
  local_5c = 0x3f800000;
  local_58 = 0x3f800000;
  if (*(int *)(param_1 + 0x14) == 0) {
    local_60 = 0.0;
  }
  if (-1 < local_84) {
    if (*(int *)(param_1 + 0x79c) == 0) {
      local_54 = 0x40000000;
    }
    else {
      local_54 = 0x3f800000;
    }
  }
  if (*(int *)(param_1 + 0x7a0) != 0) {
    local_54 = 0x3f800000;
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    local_54 = 0x40000000;
  }
  local_9c = 0x3f800000;
  local_98 = 0x3f800000;
  local_94 = local_54;
  local_a0 = *(undefined4 *)(param_1 + 0x778);
  if (-1 < *(char *)(param_1 + 0x78f)) {
    pfVar4 = param_4 + *(char *)(param_1 + 0x78f) * 4;
    local_c0 = *pfVar4;
    local_bc = pfVar4[1];
    local_b8 = pfVar4[2];
    local_b4 = pfVar4[3] * pfVar4[1];
  }
  if ((-1 < *(char *)(param_1 + 0x791)) && (-1 < *(char *)(param_1 + 0x792))) {
    local_88 = param_4[*(char *)(param_1 + 0x792) * 4];
    local_48 = param_4[(*(char *)(param_1 + 0x792) + 2) * 4];
    local_50 = param_4[*(char *)(param_1 + 0x791) * 4];
    local_44 = 0.0;
    local_4c = local_88;
    local_38 = local_48;
    iVar3 = FUN_00f99540(0xba,&local_50,4);
    if (iVar3 == 0) {
      _DAT_01f13270 = local_50;
      _DAT_01f13274 = local_4c;
      _DAT_01f13278 = local_48;
      _DAT_01f1327c = local_44;
      FUN_00f99620(0xba,&DAT_01f13270,4);
    }
  }
LAB_00fb7a2d:
  local_70 = *param_4;
  local_6c = param_4[1];
  local_68 = param_4[2];
  local_64 = 0;
  if ((*(int *)(param_1 + 0x7a4) == 0) && (*(int *)(param_1 + 0x7c0) == 0)) {
    iVar3 = (int)*(char *)(param_1 + 0x77f);
    local_70 = param_4[(iVar3 + 0x10) * 4] * local_70;
    local_6c = param_4[iVar3 * 4 + 0x41] * local_6c;
    local_68 = param_4[iVar3 * 4 + 0x42] * local_68;
  }
  if (*(int *)(param_1 + 0x7c0) != 0) {
    local_70 = 0.5;
    local_6c = 0.5;
    local_68 = 0.5;
    local_64 = 0x3f800000;
  }
  local_d0 = local_70;
  local_cc = local_6c;
  local_c8 = local_68;
  if (*(int *)(param_1 + 0x4c) == 0) {
    local_c4 = 0;
  }
  else {
    local_c4 = 0x3f800000;
  }
  local_e0 = 1.0;
  local_dc = 0.0;
  local_d8 = 0;
  if (((*(int *)(param_1 + 0x30) != 0) || (*(int *)(param_1 + 0x24) != 0)) ||
     (*(int *)(param_1 + 0x7c4) == 0)) {
    local_e0 = 0.0;
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    local_dc = 1.0;
  }
  if (((uint)param_4[0xdb] & 0x2000) != 0) {
    local_d8 = 0x3f800000;
  }
  local_50 = 0.0;
  local_38 = 0.0;
  local_4c = 0.0;
  local_48 = 0.0;
  local_44 = 0.0;
  if (-1 < iVar5) {
    iVar5 = (int)*(char *)(param_1 + 0x78d);
    if (*(int *)(param_1 + 0x40) == 0) {
      local_50 = param_4[iVar5 * 4];
      local_48 = param_4[iVar5 * 4 + 1];
      if (*(int *)(param_1 + 0x7a4) == 0) {
        local_4c = *(float *)(param_2 + 0xc);
      }
      if (param_4[*(char *)(param_1 + 0x78d) * 4 + 2] == 0.0) {
        local_38 = 0.0;
      }
      else {
        local_38 = 1.4013e-45;
      }
    }
    else {
      local_50 = param_4[iVar5 * 4];
      local_4c = *(float *)(&DAT_01b8457c + *(int *)((int)local_34 + 0xd4) * 0x10);
      iVar5 = FUN_00eaf7d0();
      if (*(uint *)(iVar5 + 0xc) < 10) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(iVar5 + 8) + 0x1b0;
      }
      FUN_00fa1d50(&DAT_01f732a8,iVar5);
    }
    if (*(int *)(param_1 + 0x7ac) != 0) {
      local_44 = 1.0;
    }
    if (*(int *)(param_1 + 0x7b0) != 0) {
      local_44 = 2.0;
    }
    if ((*(int *)(param_1 + 0x7a0) != 0) && (-1 < local_84)) {
      local_44 = 3.0;
    }
    if (*(int *)(param_1 + 0x7d4) != 0) {
      local_44 = 4.0;
    }
    if ((DAT_01be5554 == 0) && (iVar5 = FUN_00e6b900(), iVar5 == 3)) {
      local_50 = 0.0;
      local_4c = 0.0;
      local_48 = 0.0;
    }
  }
  local_80 = 0.0;
  local_7c = 0.0;
  local_78 = 0;
  local_74 = 0;
  if (*(int *)(param_1 + 0x50) == 0) {
    local_80 = param_4[0x80];
    local_7c = param_4[0x81];
    if (-1 < iVar6) {
      local_78 = 0x3f800000;
      local_74 = 0x3f800000;
    }
  }
  if (*(int *)(param_1 + 0x44) == 0) {
    local_b0 = *(float *)(param_3 + 0x10);
    local_ac = *(float *)(param_3 + 0x14);
    local_a8 = *(float *)(param_3 + 0x18);
    local_a4 = *(undefined4 *)(param_3 + 0x1c);
  }
  else {
    local_b0 = param_4[200] * *(float *)(param_3 + 0x10);
    local_ac = *(float *)(param_3 + 0x14) * param_4[0xc9];
    local_a8 = *(float *)(param_3 + 0x18) * param_4[0xca];
    local_a4 = *(undefined4 *)(param_3 + 0x1c);
  }
  local_30 = local_20 * 0.2;
  iVar6 = *(int *)(param_1 + 0x7d8);
  local_2c = local_1c * 0.25;
  local_28 = local_18 * 0.01;
  local_34 = local_14 - 1.0;
  if (0.0 < local_34) {
    if (1.0 < local_34) {
      local_34 = 1.0;
    }
  }
  else {
    local_34 = 0.0;
  }
  local_24 = local_34;
  iVar5 = FUN_00f99540(0x29,&local_30,4);
  if (iVar5 == 0) {
    _DAT_01f12960 = local_30;
    _DAT_01f12964 = local_2c;
    _DAT_01f12968 = local_28;
    _DAT_01f1296c = local_24;
    FUN_00f99620(0x29,&DAT_01f12960,4);
  }
  iVar5 = FUN_00f994a0(0xba,&local_a0,4);
  if (iVar5 == 0) {
    _DAT_01f14070 = local_a0;
    _DAT_01f14074 = local_9c;
    _DAT_01f14078 = local_98;
    _DAT_01f1407c = local_94;
    FUN_00f995e0(0xba,&DAT_01f14070,4);
  }
  iVar5 = FUN_00f99540(0x2c,&local_60,4);
  if (iVar5 == 0) {
    _DAT_01f12990 = local_60;
    _DAT_01f12994 = local_5c;
    _DAT_01f12998 = local_58;
    _DAT_01f1299c = local_54;
    FUN_00f99620(0x2c,&DAT_01f12990,4);
  }
  iVar5 = FUN_00f994a0(0xbf,&local_d0,4);
  if (iVar5 == 0) {
    _DAT_01f140c0 = local_d0;
    _DAT_01f140c4 = local_cc;
    _DAT_01f140c8 = local_c8;
    _DAT_01f140cc = local_c4;
    FUN_00f995e0(0xbf,&DAT_01f140c0,4);
  }
  iVar5 = FUN_00f99540(0xbf,&local_70,4);
  if (iVar5 == 0) {
    _DAT_01f132c0 = local_70;
    _DAT_01f132c4 = local_6c;
    _DAT_01f132c8 = local_68;
    _DAT_01f132cc = local_64;
    FUN_00f99620(0xbf,&DAT_01f132c0,4);
  }
  local_30 = 1.0;
  local_2c = 1.0;
  local_28 = 1.0;
  local_24 = 1.0;
  iVar5 = FUN_00f99540(0x2f,&local_30,4);
  if (iVar5 == 0) {
    _DAT_01f129c0 = local_30;
    _DAT_01f129c4 = local_2c;
    _DAT_01f129c8 = local_28;
    _DAT_01f129cc = local_24;
    FUN_00f99620(0x2f,&DAT_01f129c0,4);
  }
  local_30 = local_c0;
  local_2c = local_bc;
  local_28 = local_b8;
  local_24 = local_b4;
  iVar5 = FUN_00f99540(0x30,&local_30,4);
  if (iVar5 == 0) {
    _DAT_01f129d0 = local_30;
    _DAT_01f129d4 = local_2c;
    _DAT_01f129d8 = local_28;
    _DAT_01f129dc = local_24;
    FUN_00f99620(0x30,&DAT_01f129d0,4);
  }
  local_20 = local_50;
  local_1c = local_48;
  if (local_38 == 0.0) {
    local_18 = 1.0;
  }
  else {
    local_18 = 0.0;
  }
  if (iVar6 == 0) {
    local_14 = 1.0;
  }
  else {
    local_14 = 0.0;
  }
  iVar6 = FUN_00f99540(0x2b,&local_20,4);
  if (iVar6 == 0) {
    _DAT_01f12980 = local_20;
    _DAT_01f12984 = local_1c;
    _DAT_01f12988 = local_18;
    _DAT_01f1298c = local_14;
    FUN_00f99620(0x2b,&DAT_01f12980,4);
  }
  local_14 = 0.0;
  local_18 = 0.0;
  local_20 = 0.0;
  local_1c = local_4c;
  if (local_44 < 3.0) {
    if (NAN(local_44) || 1.0 < local_44 == (local_44 == 1.0)) {
      local_20 = 1.0;
    }
    else {
      local_18 = 1.0;
    }
  }
  else {
    local_14 = local_44 - 2.0;
  }
  iVar6 = FUN_00f99540(0x2a,&local_20,4);
  if (iVar6 == 0) {
    _DAT_01f12970 = local_20;
    _DAT_01f12974 = local_1c;
    _DAT_01f12978 = local_18;
    _DAT_01f1297c = local_14;
    FUN_00f99620(0x2a,&DAT_01f12970,4);
  }
  local_28 = (float)local_d8;
  local_24 = 2.0;
  local_30 = local_e0 * 0.5;
  local_2c = local_dc * 0.8;
  iVar6 = FUN_00f99540(0x2d,&local_30,4);
  if (iVar6 == 0) {
    _DAT_01f129a0 = local_30;
    _DAT_01f129a4 = local_2c;
    _DAT_01f129a8 = local_28;
    _DAT_01f129ac = local_24;
    FUN_00f99620(0x2d,&DAT_01f129a0,4);
  }
  iVar6 = FUN_00f99540(0x31,&local_80,4);
  if (iVar6 == 0) {
    _DAT_01f129e0 = local_80;
    _DAT_01f129e4 = local_7c;
    _DAT_01f129e8 = local_78;
    _DAT_01f129ec = local_74;
    FUN_00f99620(0x31,&DAT_01f129e0,4);
  }
  iVar6 = FUN_00f994a0(0xb9,&local_80,4);
  if (iVar6 == 0) {
    _DAT_01f14060 = local_80;
    _DAT_01f14064 = local_7c;
    _DAT_01f14068 = local_78;
    _DAT_01f1406c = local_74;
    FUN_00f995e0(0xb9,&DAT_01f14060,4);
  }
  iVar6 = FUN_00f99540(0x32,&local_b0,4);
  if (iVar6 == 0) {
    _DAT_01f129f0 = local_b0;
    _DAT_01f129f4 = local_ac;
    _DAT_01f129f8 = local_a8;
    _DAT_01f129fc = local_a4;
    FUN_00f99620(0x32,&DAT_01f129f0,4);
  }
  return;
}

// 00FB8260  cShaderSetting::cShaderSetting_7  size=34  [class]
undefined4 * __thiscall cShaderSetting::cShaderSetting_7(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FB8290  FUN_00fb8290  size=21  [between]
undefined4 * __fastcall FUN_00fb8290(undefined4 *param_1)

{
  *param_1 = &PTR_cShaderSetting_6_016f3494;
  Hw::cTexture::cTexture_6();
  return param_1;
}

// 00FB82B0  cShaderSetting::cShaderSetting_6  size=42  [class]
undefined4 * __thiscall cShaderSetting::cShaderSetting_6(undefined4 *param_1,byte param_2)

{
  Hw::cTexture::cTexture_5();
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FB8520  FUN_00fb8520  size=341  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00fb8520(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  uVar1 = FUN_00f910d0(*(undefined4 *)(param_1 + 0x74));
  FUN_00f98f80(uVar1);
  FUN_00f990e0(param_4);
  local_30 = 0x3ff2f1aa;
  local_2c = 0x3eafae15;
  local_28 = 0x3eafae15;
  local_24 = 0x3f800000;
  local_20 = 0x3f70e560;
  local_1c = 0x3f904dd3;
  local_18 = 0x3f904dd3;
  local_14 = 0x3f800000;
  if ((*(int *)(param_3 + 0x370) == 2) || (*(int *)(param_3 + 0x370) == 8)) {
    iVar2 = FUN_00f99540(0xb9,&local_30,4);
    if (iVar2 != 0) goto LAB_00fb8628;
    DAT_01f13260 = local_30;
    DAT_01f13264 = local_2c;
    DAT_01f13268 = local_28;
    DAT_01f1326c = local_24;
  }
  else {
    iVar2 = FUN_00f99540(0xb9,&local_20,4);
    if (iVar2 != 0) goto LAB_00fb8628;
    DAT_01f13260 = local_20;
    DAT_01f13264 = local_1c;
    DAT_01f13268 = local_18;
    DAT_01f1326c = local_14;
  }
  FUN_00f99620(0xb9,&DAT_01f13260,4);
LAB_00fb8628:
  iVar2 = FUN_00f99540(0xba,(undefined4 *)(param_2 + 0xc4),1);
  if (iVar2 == 0) {
    _DAT_01f13270 = *(undefined4 *)(param_2 + 0xc4);
    FUN_00f99620(0xba,&DAT_01f13270,1);
  }
  FUN_00f9db30(1);
  return;
}

// 00FB86B0  cShaderSetting::cShaderSetting_8  size=34  [class]
undefined4 * __thiscall cShaderSetting::cShaderSetting_8(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FB86E0  FUN_00fb86e0  size=109  [between]
void FUN_00fb86e0(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00f99540(0xb8,param_2,4);
  if (iVar1 == 0) {
    DAT_01f13250 = *param_2;
    DAT_01f13254 = param_2[1];
    DAT_01f13258 = param_2[2];
    DAT_01f1325c = param_2[3];
    FUN_00f99620(0xb8,&DAT_01f13250,4);
  }
  FUN_00fb8520(param_1,param_3,&DAT_01f6b96c);
  return;
}

// 00FB8750  FUN_00fb8750  size=109  [between]
void FUN_00fb8750(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00f99540(0xb8,param_2,4);
  if (iVar1 == 0) {
    DAT_01f13250 = *param_2;
    DAT_01f13254 = param_2[1];
    DAT_01f13258 = param_2[2];
    DAT_01f1325c = param_2[3];
    FUN_00f99620(0xb8,&DAT_01f13250,4);
  }
  FUN_00fb8520(param_1,param_3,&DAT_01f70fec);
  return;
}

// 00FB87C0  FUN_00fb87c0  size=297  [between]
void __thiscall FUN_00fb87c0(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (DAT_01be1f50 == 0) {
    iVar1 = FUN_00fa0740(0);
    if (iVar1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(iVar1 + 0xc);
    }
    iVar1 = FUN_00fa0740(0);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(iVar1 + 8);
    }
    FUN_00fa17a0(DAT_01b83c20,0,0,uVar2,uVar3);
    DAT_01be1f50 = 1;
  }
  FUN_00fa1d50(param_4 + 0x28,*(undefined4 *)(param_3 + 0x358));
  local_20 = 0;
  local_1c = 0;
  local_18 = *(undefined4 *)(param_1 + 0x78);
  local_14 = 0;
  iVar1 = FUN_00f99540(0xb8,&local_20,4);
  if (iVar1 == 0) {
    DAT_01f13250 = local_20;
    DAT_01f13254 = local_1c;
    DAT_01f13258 = local_18;
    DAT_01f1325c = local_14;
    FUN_00f99620(0xb8,&DAT_01f13250,4);
  }
  FUN_00f9db30(0);
  FUN_00f9d7a0(1);
  FUN_00f9d760(1);
  uVar3 = FUN_00f910d0(*(undefined4 *)(param_1 + 0x74));
  FUN_00f98f80(uVar3);
  FUN_00f990e0(param_4);
  return;
}

// 00FB8920  cShaderSetting::cShaderSetting_5  size=34  [class]
undefined4 * __thiscall cShaderSetting::cShaderSetting_5(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FB8950  FUN_00fb8950  size=109  [callgraph]
void FUN_00fb8950(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00f99540(0xb8,param_2,4);
  if (iVar1 == 0) {
    DAT_01f13250 = *param_2;
    DAT_01f13254 = param_2[1];
    DAT_01f13258 = param_2[2];
    DAT_01f1325c = param_2[3];
    FUN_00f99620(0xb8,&DAT_01f13250,4);
  }
  FUN_00fb87c0(param_1,param_3,&DAT_01f710b4);
  return;
}

// 00FB89C0  FUN_00fb89c0  size=109  [callgraph]
void FUN_00fb89c0(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00f99540(0xb8,param_2,4);
  if (iVar1 == 0) {
    DAT_01f13250 = *param_2;
    DAT_01f13254 = param_2[1];
    DAT_01f13258 = param_2[2];
    DAT_01f1325c = param_2[3];
    FUN_00f99620(0xb8,&DAT_01f13250,4);
  }
  FUN_00fb87c0(param_1,param_3,&DAT_01f7117c);
  return;
}

// 00FB8A40  FUN_00fb8a40  size=16  [callgraph]
void FUN_00fb8a40(void)

{
  FUN_00f99300();
  Hw::cShader::vf04();
  return;
}

// 00FB8A60  FUN_00fb8a60  size=16  [callgraph]
void FUN_00fb8a60(void)

{
  FUN_00f99300();
  Hw::cShader::vf04();
  return;
}

// 00FB8A80  FUN_00fb8a80  size=16  [callgraph]
void FUN_00fb8a80(void)

{
  FUN_00f99300();
  Hw::cShader::vf04();
  return;
}

// 00FB8A90  FUN_00fb8a90  size=309  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00fb8a90(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_00f994a0(0xbb,param_1,4);
  if (iVar1 == 0) {
    _DAT_01f14080 = *param_1;
    _DAT_01f14084 = param_1[1];
    _DAT_01f14088 = param_1[2];
    _DAT_01f1408c = param_1[3];
    FUN_00f995e0(0xbb,&DAT_01f14080,4);
  }
  iVar1 = FUN_00f99540(0xbb,param_1,4);
  if (iVar1 == 0) {
    _DAT_01f13280 = *param_1;
    _DAT_01f13284 = param_1[1];
    _DAT_01f13288 = param_1[2];
    _DAT_01f1328c = param_1[3];
    FUN_00f99620(0xbb,&DAT_01f13280,4);
  }
  iVar1 = FUN_00f994a0(0xbc,param_2,4);
  if (iVar1 == 0) {
    _DAT_01f14090 = *param_2;
    _DAT_01f14094 = param_2[1];
    _DAT_01f14098 = param_2[2];
    _DAT_01f1409c = param_2[3];
    FUN_00f995e0(0xbc,&DAT_01f14090,4);
  }
  iVar1 = FUN_00f99540(0xbc,param_2,4);
  if (iVar1 == 0) {
    _DAT_01f13290 = *param_2;
    _DAT_01f13294 = param_2[1];
    _DAT_01f13298 = param_2[2];
    _DAT_01f1329c = param_2[3];
    FUN_00f99620(0xbc,&DAT_01f13290,4);
  }
  return;
}

// 00FB8BD0  FUN_00fb8bd0  size=85  [callgraph]
void FUN_00fb8bd0(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00f99540(0xb8,param_1,4);
  if (iVar1 == 0) {
    DAT_01f13250 = *param_1;
    DAT_01f13254 = param_1[1];
    DAT_01f13258 = param_1[2];
    DAT_01f1325c = param_1[3];
    FUN_00f99620(0xb8,&DAT_01f13250,4);
  }
  return;
}

// 00FB8C30  FUN_00fb8c30  size=85  [callgraph]
void FUN_00fb8c30(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00f99540(0xb8,param_1,4);
  if (iVar1 == 0) {
    DAT_01f13250 = *param_1;
    DAT_01f13254 = param_1[1];
    DAT_01f13258 = param_1[2];
    DAT_01f1325c = param_1[3];
    FUN_00f99620(0xb8,&DAT_01f13250,4);
  }
  return;
}

// 00FB8C90  FUN_00fb8c90  size=162  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00fb8c90(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_00f99540(0xb9,param_1,4);
  if (iVar1 == 0) {
    DAT_01f13260 = *param_1;
    DAT_01f13264 = param_1[1];
    DAT_01f13268 = param_1[2];
    DAT_01f1326c = param_1[3];
    FUN_00f99620(0xb9,&DAT_01f13260,4);
  }
  iVar1 = FUN_00f99540(0xba,param_2,4);
  if (iVar1 == 0) {
    _DAT_01f13270 = *param_2;
    _DAT_01f13274 = param_2[1];
    _DAT_01f13278 = param_2[2];
    _DAT_01f1327c = param_2[3];
    FUN_00f99620(0xba,&DAT_01f13270,4);
  }
  return;
}

// 00FB8D40  FUN_00fb8d40  size=85  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00fb8d40(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00f99540(0xbb,param_1,4);
  if (iVar1 == 0) {
    _DAT_01f13280 = *param_1;
    _DAT_01f13284 = param_1[1];
    _DAT_01f13288 = param_1[2];
    _DAT_01f1328c = param_1[3];
    FUN_00f99620(0xbb,&DAT_01f13280,4);
  }
  return;
}

// 00FB9060  FUN_00fb9060  size=162  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00fb9060(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_00f99540(0xbe,param_1,4);
  if (iVar1 == 0) {
    _DAT_01f132b0 = *param_1;
    _DAT_01f132b4 = param_1[1];
    _DAT_01f132b8 = param_1[2];
    _DAT_01f132bc = param_1[3];
    FUN_00f99620(0xbe,&DAT_01f132b0,4);
  }
  iVar1 = FUN_00f99540(0xbf,param_2,4);
  if (iVar1 == 0) {
    _DAT_01f132c0 = *param_2;
    _DAT_01f132c4 = param_2[1];
    _DAT_01f132c8 = param_2[2];
    _DAT_01f132cc = param_2[3];
    FUN_00f99620(0xbf,&DAT_01f132c0,4);
  }
  return;
}

// 00FB9120  FUN_00fb9120  size=16  [callgraph]
void FUN_00fb9120(void)

{
  FUN_00f99300();
  Hw::cShader::vf04();
  return;
}

// 00FB9130  FUN_00fb9130  size=331  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00fb9130(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined4 *local_14;
  
  local_30 = *(float *)(param_1 + 0x50) * *(float *)(param_1 + 0x40);
  local_2c = *(float *)(param_1 + 0x54) * *(float *)(param_1 + 0x44);
  local_28 = *(float *)(param_1 + 0x48) * *(float *)(param_1 + 0x58);
  local_24 = *(float *)(param_1 + 0x4c) * *(float *)(param_1 + 0x5c);
  iVar2 = FUN_00f99540(0xb8,&local_30,4);
  if (iVar2 == 0) {
    DAT_01f13250 = local_30;
    DAT_01f13254 = local_2c;
    DAT_01f13258 = local_28;
    DAT_01f1325c = local_24;
    FUN_00f99620(0xb8,&DAT_01f13250,4);
  }
  puVar1 = (undefined4 *)(param_1 + 0x60);
  local_14 = puVar1;
  iVar2 = FUN_00f99540(0xb9,puVar1,1);
  if (iVar2 == 0) {
    DAT_01f13260 = *puVar1;
    FUN_00f99620(0xb9,&DAT_01f13260,1);
  }
  puVar1 = (undefined4 *)(param_1 + 100);
  iVar2 = FUN_00f99540(0xba,puVar1,1);
  if (iVar2 == 0) {
    _DAT_01f13270 = *puVar1;
    FUN_00f99620(0xba,&DAT_01f13270,1);
  }
  *(float *)(param_1 + 0x50) = *(float *)(param_1 + 0x50) * 0.0;
  *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x54) * 0.0;
  *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0x58) * 0.0;
  *(float *)(param_1 + 0x5c) = *(float *)(param_1 + 0x5c) * 0.0;
  *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x40) * 0.0;
  *(float *)(param_1 + 0x44) = *(float *)(param_1 + 0x44) * 0.0;
  *(float *)(param_1 + 0x48) = *(float *)(param_1 + 0x48) * 0.0;
  *(float *)(param_1 + 0x4c) = *(float *)(param_1 + 0x4c) * 0.0;
  *local_14 = 0;
  *puVar1 = 0;
  return;
}

// 00FB9390  FUN_00fb9390  size=16  [callgraph]
void __thiscall FUN_00fb9390(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  return;
}

// 00FB93A0  FUN_00fb93a0  size=92  [callgraph]
int __thiscall FUN_00fb93a0(int param_1,byte *param_2)

{
  byte bVar1;
  int *piVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  bool bVar6;
  
  piVar2 = *(int **)(param_1 + 0x18);
  do {
    if (piVar2 == *(int **)(param_1 + 0x1c)) {
      return 0;
    }
    pbVar5 = (byte *)(*piVar2 + 0x28);
    pbVar3 = param_2;
    do {
      bVar1 = *pbVar3;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00fb93e0:
        iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00fb93e5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00fb93e0;
      pbVar3 = pbVar3 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_00fb93e5:
    if (iVar4 == 0) {
      return *piVar2;
    }
    piVar2 = (int *)piVar2[2];
  } while( true );
}

// 00FB9400  FUN_00fb9400  size=92  [callgraph]
int __thiscall FUN_00fb9400(int param_1,byte *param_2)

{
  byte bVar1;
  int *piVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  bool bVar6;
  
  piVar2 = *(int **)(param_1 + 0x34);
  do {
    if (piVar2 == *(int **)(param_1 + 0x38)) {
      return 0;
    }
    pbVar5 = (byte *)(*piVar2 + 0x28);
    pbVar3 = param_2;
    do {
      bVar1 = *pbVar3;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00fb9440:
        iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00fb9445;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00fb9440;
      pbVar3 = pbVar3 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_00fb9445:
    if (iVar4 == 0) {
      return *piVar2;
    }
    piVar2 = (int *)piVar2[2];
  } while( true );
}

// 00FB9460  FUN_00fb9460  size=49  [callgraph]
int __thiscall FUN_00fb9460(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x18);
  if (piVar1 != *(int **)(param_1 + 0x1c)) {
    do {
      if (*(int *)(*piVar1 + 8) == *(int *)(param_2 + 8)) {
        return *piVar1 + 0x28;
      }
      piVar1 = (int *)piVar1[2];
    } while (piVar1 != *(int **)(param_1 + 0x1c));
  }
  return 0;
}

// 00FB94A0  FUN_00fb94a0  size=49  [callgraph]
int __thiscall FUN_00fb94a0(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x34);
  if (piVar1 != *(int **)(param_1 + 0x38)) {
    do {
      if (*(int *)(*piVar1 + 0x18) == *(int *)(param_2 + 0x18)) {
        return *piVar1 + 0x28;
      }
      piVar1 = (int *)piVar1[2];
    } while (piVar1 != *(int **)(param_1 + 0x38));
  }
  return 0;
}

// 00FB94E0  FUN_00fb94e0  size=162  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00fb94e0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_00f99540(0xbe,param_1,4);
  if (iVar1 == 0) {
    _DAT_01f132b0 = *param_1;
    _DAT_01f132b4 = param_1[1];
    _DAT_01f132b8 = param_1[2];
    _DAT_01f132bc = param_1[3];
    FUN_00f99620(0xbe,&DAT_01f132b0,4);
  }
  iVar1 = FUN_00f99540(0xbf,param_2,4);
  if (iVar1 == 0) {
    _DAT_01f132c0 = *param_2;
    _DAT_01f132c4 = param_2[1];
    _DAT_01f132c8 = param_2[2];
    _DAT_01f132cc = param_2[3];
    FUN_00f99620(0xbf,&DAT_01f132c0,4);
  }
  return;
}

// 00FB9590  FUN_00fb9590  size=19  [callgraph]
void __thiscall FUN_00fb9590(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = *param_3;
  *param_1 = uVar1;
  *param_2 = uVar1;
  return;
}

// 00FB95B0  FUN_00fb95b0  size=83  [callgraph]
void __fastcall FUN_00fb95b0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    piVar1 = (int *)(*(int *)(param_1 + 4) + 4);
    do {
      *piVar1 = (int)(piVar1 + -4);
      piVar1[1] = (int)(piVar1 + 2);
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 3;
    } while (iVar2 < *(int *)(param_1 + 8));
  }
  iVar2 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar2 + 4) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + -4 + *(int *)(param_1 + 8) * 0xc) = 0;
  *(int *)(param_1 + 0x10) = iVar2;
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 4) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

// 00FB9610  FUN_00fb9610  size=74  [callgraph]
void __thiscall FUN_00fb9610(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(iVar1 + 4);
  }
  *(int *)(*param_2 + 4) = iVar2;
  *(int *)(*param_2 + 8) = iVar1;
  if (iVar2 != 0) {
    *(int *)(iVar2 + 8) = *param_2;
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + 4) = *param_2;
    *(int *)(param_1 + 0x10) = *param_2;
    return;
  }
  *(int *)(param_1 + 0x10) = *param_2;
  return;
}

// 00FB9680  FUN_00fb9680  size=14  [callgraph]
void __thiscall FUN_00fb9680(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 00FB96A0  FUN_00fb96a0  size=266  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00fb96a0(undefined4 param_1,float *param_2,undefined4 param_3)

{
  int iVar1;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_30 = *param_2 * DAT_01f8e700 * 2.0 * 0.5;
  local_2c = DAT_01f8e704 * 2.0 * param_2[1] * 0.5;
  local_28 = DAT_01f8e708 * 2.0 * param_2[2] * 0.5;
  local_24 = param_2[3];
  FUN_00f915f0(0);
  FUN_00f91620(0);
  FUN_00f91650(0);
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  iVar1 = FUN_00f99540(0xbc,&local_20,4);
  if (iVar1 == 0) {
    _DAT_01f13290 = local_20;
    _DAT_01f13294 = local_1c;
    _DAT_01f13298 = local_18;
    _DAT_01f1329c = local_14;
    FUN_00f99620(0xbc,&DAT_01f13290,4);
  }
  FUN_00f915d0(&local_30);
  FUN_00fb2300(param_3,&DAT_01eeee18);
  return;
}

// 00FBA470  cShaderSetting::cShaderSetting_2  size=34  [class]
undefined4 * __thiscall cShaderSetting::cShaderSetting_2(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FBA4C0  cShaderSetting::cShaderSetting  size=34  [class]
undefined4 * __thiscall cShaderSetting::cShaderSetting(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FBA520  cShaderSetting::cShaderSetting_4  size=34  [class]
undefined4 * __thiscall cShaderSetting::cShaderSetting_4(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FBA580  cShaderSetting::cShaderSetting_3  size=34  [class]
undefined4 * __thiscall cShaderSetting::cShaderSetting_3(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FBA5C0  FUN_00fba5c0  size=28  [callgraph]
int __thiscall FUN_00fba5c0(int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  
  if (-1 < param_2) {
    iVar2 = param_2 * 3 + 0xc;
    puVar1 = (uint *)(param_1 + iVar2 * 4);
    *puVar1 = *puVar1 & 0x7fffffff;
    param_2 = param_1 + iVar2 * 4;
  }
  return param_2;
}

// 00FBA5E0  FUN_00fba5e0  size=709  [callgraph]
undefined4 __thiscall FUN_00fba5e0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint *puVar1;
  int iVar2;
  
  if ((param_2 == 0) && (param_3 == 0)) {
    FUN_00dd5650(&DAT_016f35e0,"SHADER_NAME");
  }
  else {
    if (param_4 != 0) {
      *(int *)(param_1 + 0x5f8) = *(int *)(param_1 + 0x5f8) + 1;
    }
    if (param_5 != 0) {
      *(int *)(param_1 + 0x5f8) = *(int *)(param_1 + 0x5f8) + 1;
    }
    iVar2 = FUN_00faed90(param_2,param_3,param_4,param_5);
    if (iVar2 != 0) {
      if (-1 < *(int *)(param_1 + 0x78)) {
        puVar1 = (uint *)(param_1 + (*(int *)(param_1 + 0x78) * 3 + 0x36) * 4);
        *puVar1 = *puVar1 & 0x7fffffff;
      }
      if (-1 < *(int *)(param_1 + 0x7c)) {
        puVar1 = (uint *)(param_1 + (*(int *)(param_1 + 0x7c) * 3 + 0x36) * 4);
        *puVar1 = *puVar1 & 0x7fffffff;
      }
      if (-1 < *(int *)(param_1 + 0x80)) {
        puVar1 = (uint *)(param_1 + (*(int *)(param_1 + 0x80) * 3 + 0x36) * 4);
        *puVar1 = *puVar1 & 0x7fffffff;
      }
      if (-1 < *(int *)(param_1 + 0x94)) {
        puVar1 = (uint *)(param_1 + (*(int *)(param_1 + 0x94) * 3 + 0x36) * 4);
        *puVar1 = *puVar1 & 0x7fffffff;
      }
      if (-1 < *(int *)(param_1 + 0x84)) {
        puVar1 = (uint *)(param_1 + (*(int *)(param_1 + 0x84) * 3 + 0x36) * 4);
        *puVar1 = *puVar1 & 0x7fffffff;
      }
      if (-1 < *(int *)(param_1 + 0x88)) {
        puVar1 = (uint *)(param_1 + (*(int *)(param_1 + 0x88) * 3 + 0x36) * 4);
        *puVar1 = *puVar1 & 0x7fffffff;
      }
      if (-1 < *(int *)(param_1 + 0x9c)) {
        puVar1 = (uint *)(param_1 + (*(int *)(param_1 + 0x9c) * 3 + 0x36) * 4);
        *puVar1 = *puVar1 & 0x7fffffff;
      }
      if (*(int *)(param_1 + 0x5f8) != 0) {
        if (-1 < *(int *)(param_1 + 0x78)) {
          puVar1 = (uint *)(param_1 + 0x1e8 + *(int *)(param_1 + 0x78) * 0xc);
          *puVar1 = *puVar1 & 0x7fffffff;
        }
        if (-1 < *(int *)(param_1 + 0x7c)) {
          puVar1 = (uint *)(param_1 + 0x1e8 + *(int *)(param_1 + 0x7c) * 0xc);
          *puVar1 = *puVar1 & 0x7fffffff;
        }
        if (-1 < *(int *)(param_1 + 0x80)) {
          puVar1 = (uint *)(param_1 + 0x1e8 + *(int *)(param_1 + 0x80) * 0xc);
          *puVar1 = *puVar1 & 0x7fffffff;
        }
        if (-1 < *(int *)(param_1 + 0x94)) {
          puVar1 = (uint *)(param_1 + 0x1e8 + *(int *)(param_1 + 0x94) * 0xc);
          *puVar1 = *puVar1 & 0x7fffffff;
        }
        if (-1 < *(int *)(param_1 + 0x84)) {
          puVar1 = (uint *)(param_1 + 0x1e8 + *(int *)(param_1 + 0x84) * 0xc);
          *puVar1 = *puVar1 & 0x7fffffff;
        }
        if (-1 < *(int *)(param_1 + 0x88)) {
          puVar1 = (uint *)(param_1 + 0x1e8 + *(int *)(param_1 + 0x88) * 0xc);
          *puVar1 = *puVar1 & 0x7fffffff;
        }
        if (-1 < *(int *)(param_1 + 0x9c)) {
          puVar1 = (uint *)(param_1 + 0x1e8 + *(int *)(param_1 + 0x9c) * 0xc);
          *puVar1 = *puVar1 & 0x7fffffff;
        }
      }
      if (1 < *(uint *)(param_1 + 0x5f8)) {
        if (-1 < *(int *)(param_1 + 0x78)) {
          puVar1 = (uint *)(param_1 + 0x2f8 + *(int *)(param_1 + 0x78) * 0xc);
          *puVar1 = *puVar1 & 0x7fffffff;
        }
        if (-1 < *(int *)(param_1 + 0x7c)) {
          puVar1 = (uint *)(param_1 + 0x2f8 + *(int *)(param_1 + 0x7c) * 0xc);
          *puVar1 = *puVar1 & 0x7fffffff;
        }
        if (-1 < *(int *)(param_1 + 0x80)) {
          puVar1 = (uint *)(param_1 + 0x2f8 + *(int *)(param_1 + 0x80) * 0xc);
          *puVar1 = *puVar1 & 0x7fffffff;
        }
        if (-1 < *(int *)(param_1 + 0x94)) {
          puVar1 = (uint *)(param_1 + 0x2f8 + *(int *)(param_1 + 0x94) * 0xc);
          *puVar1 = *puVar1 & 0x7fffffff;
        }
        if (-1 < *(int *)(param_1 + 0x84)) {
          puVar1 = (uint *)(param_1 + 0x2f8 + *(int *)(param_1 + 0x84) * 0xc);
          *puVar1 = *puVar1 & 0x7fffffff;
        }
        if (-1 < *(int *)(param_1 + 0x88)) {
          puVar1 = (uint *)(param_1 + 0x2f8 + *(int *)(param_1 + 0x88) * 0xc);
          *puVar1 = *puVar1 & 0x7fffffff;
        }
        if (-1 < *(int *)(param_1 + 0x9c)) {
          puVar1 = (uint *)(param_1 + 0x2f8 + *(int *)(param_1 + 0x9c) * 0xc);
          *puVar1 = *puVar1 & 0x7fffffff;
        }
      }
      return 1;
    }
  }
  return 0;
}

// 00FBA8B0  FUN_00fba8b0  size=408  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00fba977) */
/* WARNING: Removing unreachable block (ram,0x00fba934) */
/* WARNING: Removing unreachable block (ram,0x00fba9bb) */

bool __thiscall FUN_00fba8b0(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_00fa01a0(param_2,param_3);
  if ((((iVar2 != 0) && (iVar2 = FUN_00fa39a0(param_1 + 0x28,"g_AlbedoSampler"), iVar2 != 0)) &&
      (iVar2 = FUN_00fa39a0(param_1 + 0x34,"g_NormalSampler"), iVar2 != 0)) &&
     (iVar2 = FUN_00fa39a0(param_1 + 100,"g_ZSampler"), iVar2 != 0)) {
    uVar1 = *(uint *)(param_1 + 0x30);
    *(uint *)(param_1 + 0x30) = uVar1 & 0xe1ffffff | 0x1000000;
    *(uint *)(param_1 + 0x30) = uVar1 & 0xe1fff000 | 0x1000101;
    uVar1 = *(uint *)(param_1 + 0x3c);
    *(uint *)(param_1 + 0x3c) = uVar1 & 0xe1ffffff | 0x1000000;
    *(uint *)(param_1 + 0x3c) = uVar1 & 0xe1fff000 | 0x1000101;
    uVar1 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar1 & 0xe1ffffff | 0x1000000;
    *(uint *)(param_1 + 0x6c) = uVar1 & 0xe1fff000 | 0x1000101;
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xff333fff | 0x333000;
    *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) & 0xff333fff | 0x333000;
    *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xff333fff | 0x333000;
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0x7fffffff;
    iVar2 = FUN_00f9e6d0(param_1 + 0x88,"g_PointLightPos");
    if (iVar2 != 0) {
      iVar2 = FUN_00f9e6d0(param_1 + 0x7c,"g_PointLightCol");
      return iVar2 != 0;
    }
  }
  return false;
}

// 00FBAA50  FUN_00fbaa50  size=462  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00fbab17) */
/* WARNING: Removing unreachable block (ram,0x00fbaad4) */
/* WARNING: Removing unreachable block (ram,0x00fbab5b) */

bool __thiscall FUN_00fbaa50(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_00fa01a0(param_2,param_3);
  if ((((iVar2 != 0) && (iVar2 = FUN_00fa39a0(param_1 + 0x28,"g_AlbedoSampler"), iVar2 != 0)) &&
      (iVar2 = FUN_00fa39a0(param_1 + 0x34,"g_NormalSampler"), iVar2 != 0)) &&
     (iVar2 = FUN_00fa39a0(param_1 + 100,"g_ZSampler"), iVar2 != 0)) {
    uVar1 = *(uint *)(param_1 + 0x30);
    *(uint *)(param_1 + 0x30) = uVar1 & 0xe1ffffff | 0x1000000;
    *(uint *)(param_1 + 0x30) = uVar1 & 0xe1fff000 | 0x1000101;
    uVar1 = *(uint *)(param_1 + 0x3c);
    *(uint *)(param_1 + 0x3c) = uVar1 & 0xe1ffffff | 0x1000000;
    *(uint *)(param_1 + 0x3c) = uVar1 & 0xe1fff000 | 0x1000101;
    uVar1 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar1 & 0xe1ffffff | 0x1000000;
    *(uint *)(param_1 + 0x6c) = uVar1 & 0xe1fff000 | 0x1000101;
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xff333fff | 0x333000;
    *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) & 0xff333fff | 0x333000;
    *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xff333fff | 0x333000;
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0x7fffffff;
    iVar2 = FUN_00f9e6d0(param_1 + 0x88,"g_SpotLightPos");
    if (((iVar2 != 0) && (iVar2 = FUN_00f9e6d0(param_1 + 0x7c,"g_SpotLightCol"), iVar2 != 0)) &&
       (iVar2 = FUN_00f9e6d0(param_1 + 0xa0,"g_spot_angle"), iVar2 != 0)) {
      iVar2 = FUN_00f9e6d0(param_1 + 0x94,"g_spot_param");
      return iVar2 != 0;
    }
  }
  return false;
}

// 00FBAC20  FUN_00fbac20  size=435  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00fbace7) */
/* WARNING: Removing unreachable block (ram,0x00fbaca4) */
/* WARNING: Removing unreachable block (ram,0x00fbad2b) */

bool __thiscall FUN_00fbac20(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_00fa01a0(param_2,param_3);
  if ((((iVar2 != 0) && (iVar2 = FUN_00fa39a0(param_1 + 0x28,"g_AlbedoSampler"), iVar2 != 0)) &&
      (iVar2 = FUN_00fa39a0(param_1 + 0x34,"g_NormalSampler"), iVar2 != 0)) &&
     (iVar2 = FUN_00fa39a0(param_1 + 100,"g_ZSampler"), iVar2 != 0)) {
    uVar1 = *(uint *)(param_1 + 0x30);
    *(uint *)(param_1 + 0x30) = uVar1 & 0xe1ffffff | 0x1000000;
    *(uint *)(param_1 + 0x30) = uVar1 & 0xe1fff000 | 0x1000101;
    uVar1 = *(uint *)(param_1 + 0x3c);
    *(uint *)(param_1 + 0x3c) = uVar1 & 0xe1ffffff | 0x1000000;
    *(uint *)(param_1 + 0x3c) = uVar1 & 0xe1fff000 | 0x1000101;
    uVar1 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar1 & 0xe1ffffff | 0x1000000;
    *(uint *)(param_1 + 0x6c) = uVar1 & 0xe1fff000 | 0x1000101;
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xff333fff | 0x333000;
    *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) & 0xff333fff | 0x333000;
    *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xff333fff | 0x333000;
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0x7fffffff;
    iVar2 = FUN_00f9e6d0(param_1 + 0x88,"g_CylinderPos0");
    if ((iVar2 != 0) && (iVar2 = FUN_00f9e6d0(param_1 + 0x94,"g_CylinderPos1"), iVar2 != 0)) {
      iVar2 = FUN_00f9e6d0(param_1 + 0x7c,"g_LightCol");
      return iVar2 != 0;
    }
  }
  return false;
}

// 00FBADE0  FUN_00fbade0  size=39  [callgraph]
undefined4 * __thiscall FUN_00fbade0(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_016f2370;
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FBAE10  FUN_00fbae10  size=195  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00fbae6d) */

undefined4 __thiscall FUN_00fbae10(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_00f9e770(param_2,param_3);
  if ((iVar2 != 0) && (iVar2 = FUN_00fa39a0(param_1 + 0x28,"g_Z_sampler"), iVar2 != 0)) {
    uVar1 = *(uint *)(param_1 + 0x30);
    *(uint *)(param_1 + 0x30) = uVar1 & 0xe1ffffff | 0x1000000;
    *(uint *)(param_1 + 0x30) = uVar1 & 0xe1444000 | 0x1444101;
    iVar2 = FUN_00fa39a0(param_1 + 0x34,"Shadow_Tex_sampler");
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x38) = 0xb;
      *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) & 0xff444fff | 0x444000;
      *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) & 0x7fffffff;
      return 1;
    }
  }
  return 0;
}

// 00FBAEE0  FUN_00fbaee0  size=115  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00fbaf0e) */

void __thiscall FUN_00fbaee0(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x3c);
  *(uint *)(param_1 + 0x3c) = uVar1 & 0xe1ffffff | 0x1000000;
  *(uint *)(param_1 + 0x3c) = uVar1 & 0xe1fff010 | 0x1000111;
  *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) & 0x7fffffff;
  uVar2 = FUN_00fa0740(param_3);
  FUN_00fa1d50(param_1 + 0x34,uVar2);
  return;
}

// 00FBAF60  FUN_00fbaf60  size=104  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00fbaf8c) */

void __thiscall FUN_00fbaf60(int param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x3c);
  *(uint *)(param_1 + 0x3c) = uVar1 & 0xe1ffffff | 0x1000000;
  *(uint *)(param_1 + 0x3c) = uVar1 & 0xe1fff010 | 0x1000111;
  *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) & 0x7fffffff;
  FUN_00fa1d50(param_1 + 0x34,param_2);
  return;
}

// 00FBAFD0  FUN_00fbafd0  size=39  [callgraph]
undefined4 * __thiscall FUN_00fbafd0(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_016f2378;
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FBB000  FUN_00fbb000  size=102  [callgraph]
undefined4 __thiscall FUN_00fbb000(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00f9e770(param_2,param_3);
  if (iVar1 != 0) {
    iVar1 = FUN_00fa39a0(param_1 + 0x28,"g_Sampler0");
    if (iVar1 != 0) {
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xff111fff | 0x111000;
      iVar1 = FUN_00f9e6d0(param_1 + 0x34,"g_uvOffset");
      if (iVar1 != 0) {
        *(undefined1 *)(param_1 + 0x40) = 0xff;
        return 1;
      }
    }
  }
  return 0;
}

// 00FBB070  FUN_00fbb070  size=108  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00fbb09e) */

void __thiscall FUN_00fbb070(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = uVar1 & 0xe1ffffff | 0x1000000;
  *(uint *)(param_1 + 0x30) = uVar1 & 0xe1fff010 | 0x1000111;
  uVar2 = FUN_00fa0740(param_3);
  FUN_00fa1d50(param_1 + 0x28,uVar2);
  return;
}

// 00FBB0E0  FUN_00fbb0e0  size=97  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00fbb10c) */

void __thiscall FUN_00fbb0e0(int param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = uVar1 & 0xe1ffffff | 0x1000000;
  *(uint *)(param_1 + 0x30) = uVar1 & 0xe1fff010 | 0x1000111;
  FUN_00fa1d50(param_1 + 0x28,param_2);
  return;
}

// 00FBB150  FUN_00fbb150  size=89  [callgraph]
void __thiscall FUN_00fbb150(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = 2;
  iVar1 = 2;
  if ((*(byte *)(param_1 + 0x33) & 0x1f) != 1) {
    uVar3 = 3;
    iVar1 = 3;
  }
  *(uint *)(param_1 + 0x30) = iVar1 << 8 | *(uint *)(param_1 + 0x30) & 0xfffff020 | uVar3 | 0x20;
  uVar2 = FUN_00fa0740(param_3);
  FUN_00fa1d50(param_1 + 0x28,uVar2);
  return;
}

// 00FBB1B0  FUN_00fbb1b0  size=61  [callgraph]
void __thiscall FUN_00fbb1b0(int param_1,byte param_2)

{
  if (*(byte *)(param_1 + 0x40) != param_2) {
    *(byte *)(param_1 + 0x40) = param_2;
    *(uint *)(param_1 + 0x30) =
         *(uint *)(param_1 + 0x30) ^
         ((uint)param_2 << 0x18 ^ *(uint *)(param_1 + 0x30)) & 0x1f000000;
    if (param_2 != 1) {
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xfffff3f3 | 0x303;
    }
  }
  return;
}

// 00FBB1F0  FUN_00fbb1f0  size=146  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00fbb24d) */

undefined4 __thiscall FUN_00fbb1f0(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_00f9e770(param_2,param_3);
  if ((iVar2 != 0) && (iVar2 = FUN_00fa39a0(param_1 + 0x28,"g_Sampler0"), iVar2 != 0)) {
    uVar1 = *(uint *)(param_1 + 0x30);
    *(uint *)(param_1 + 0x30) = uVar1 & 0xe1ffffff | 0x1000000;
    *(uint *)(param_1 + 0x30) = uVar1 & 0xe1111010 | 0x1111111;
    return 1;
  }
  return 0;
}

// 00FBB290  FUN_00fbb290  size=139  [callgraph]
undefined4 __fastcall FUN_00fbb290(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = FUN_00a281f0("ModelShaderDownSampling.pso");
  uVar3 = FUN_00a281f0("ModelShaderDownSampling.vso",uVar2);
  iVar4 = FUN_00fa01a0(uVar3,uVar2);
  if (iVar4 != 0) {
    iVar4 = FUN_00fa39a0(param_1 + 0x28,"g_Sampler0");
    if (iVar4 != 0) {
      uVar5 = 2;
      iVar4 = 2;
      if ((*(byte *)(param_1 + 0x33) & 0x1f) != 1) {
        uVar5 = 3;
        iVar4 = 3;
      }
      uVar1 = *(uint *)(param_1 + 0x30);
      *(uint *)(param_1 + 0x30) = iVar4 << 8 | uVar1 & 0xfffff020 | uVar5 | 0x20;
      *(uint *)(param_1 + 0x30) = iVar4 << 8 | uVar1 & 0xff333020 | uVar5 | 0x333020;
      return 1;
    }
  }
  return 0;
}

// 00FBB320  FUN_00fbb320  size=39  [callgraph]
undefined4 * __thiscall FUN_00fbb320(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_016f23c8;
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FBB350  FUN_00fbb350  size=152  [callgraph]
undefined4 __thiscall FUN_00fbb350(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = FUN_00f9e770(param_2,param_3);
  if (iVar2 != 0) {
    iVar2 = FUN_00fa39a0(param_1 + 0x28,"g_Sampler0");
    if (iVar2 != 0) {
      iVar2 = FUN_00f9e6d0(param_1 + 0x34,"g_uvOffset");
      if (iVar2 != 0) {
        uVar3 = 2;
        iVar2 = 2;
        if ((*(byte *)(param_1 + 0x33) & 0x1f) != 1) {
          uVar3 = 3;
          iVar2 = 3;
        }
        uVar1 = *(uint *)(param_1 + 0x30);
        *(uint *)(param_1 + 0x30) = iVar2 << 8 | uVar1 & 0xfffff020 | uVar3 | 0x20;
        *(uint *)(param_1 + 0x30) = iVar2 << 8 | uVar1 & 0xff111020 | uVar3 | 0x111020;
        *(undefined1 *)(param_1 + 0x40) = 0xff;
        return 1;
      }
    }
  }
  return 0;
}

// 00FBB3F0  FUN_00fbb3f0  size=61  [callgraph]
void __thiscall FUN_00fbb3f0(int param_1,byte param_2)

{
  if (*(byte *)(param_1 + 0x40) != param_2) {
    *(byte *)(param_1 + 0x40) = param_2;
    *(uint *)(param_1 + 0x30) =
         *(uint *)(param_1 + 0x30) ^
         ((uint)param_2 << 0x18 ^ *(uint *)(param_1 + 0x30)) & 0x1f000000;
    if (param_2 != 1) {
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xfffff3f3 | 0x303;
    }
  }
  return;
}

// 00FBB430  FUN_00fbb430  size=592  [callgraph]
bool __thiscall FUN_00fbb430(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00f9e770(param_2,param_3);
  if (iVar1 != 0) {
    iVar1 = FUN_00fa39a0(param_1 + 0x28,"g_Color_1_sampler");
    if (iVar1 != 0) {
      iVar1 = FUN_00fa39a0(param_1 + 0x40,"g_Normalmap_sampler");
      if (iVar1 != 0) {
        uVar2 = 2;
        iVar1 = 2;
        if ((*(byte *)(param_1 + 0x33) & 0x1f) != 1) {
          uVar2 = 3;
          iVar1 = 3;
        }
        *(uint *)(param_1 + 0x30) =
             iVar1 << 8 | *(uint *)(param_1 + 0x30) & 0xfffff020 | uVar2 | 0x20;
        uVar2 = 2;
        iVar1 = 2;
        if ((*(byte *)(param_1 + 0x4b) & 0x1f) != 1) {
          uVar2 = 3;
          iVar1 = 3;
        }
        *(uint *)(param_1 + 0x48) =
             iVar1 << 8 | *(uint *)(param_1 + 0x48) & 0xfffff020 | uVar2 | 0x20;
        uVar2 = 2;
        iVar1 = 2;
        if ((*(byte *)(param_1 + 99) & 0x1f) != 1) {
          uVar2 = 3;
          iVar1 = 3;
        }
        *(uint *)(param_1 + 0x60) =
             iVar1 << 8 | *(uint *)(param_1 + 0x60) & 0xfffff020 | uVar2 | 0x20;
        uVar2 = 2;
        iVar1 = 2;
        if ((*(byte *)(param_1 + 0x6f) & 0x1f) != 1) {
          uVar2 = 3;
          iVar1 = 3;
        }
        *(uint *)(param_1 + 0x6c) =
             iVar1 << 8 | *(uint *)(param_1 + 0x6c) & 0xfffff020 | uVar2 | 0x20;
        uVar2 = 2;
        iVar1 = 2;
        if ((*(byte *)(param_1 + 0x7b) & 0x1f) != 1) {
          uVar2 = 3;
          iVar1 = 3;
        }
        *(uint *)(param_1 + 0x78) = iVar1 << 8 | *(uint *)(param_1 + 0x78) & 0xfffff000 | uVar2;
        *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xff111fff | 0x111000;
        *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0xff111fff | 0x111000;
        *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xff111fff | 0x111000;
        *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xff111fff | 0x111000;
        *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) & 0xff333fff | 0x333000;
        *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0x7fffffff;
        iVar1 = FUN_00f9e6d0(param_1 + 0xb8,"g_normalmapRate");
        if (iVar1 != 0) {
          iVar1 = FUN_00f9e6d0(param_1 + 0xc4,"g_ambientRate");
          if (iVar1 != 0) {
            iVar1 = FUN_00f9e6d0(param_1 + 0xdc,"g_otherParam");
            if (iVar1 != 0) {
              iVar1 = FUN_00f9e6d0(param_1 + 0xe8,"g_lightDir");
              if (iVar1 != 0) {
                iVar1 = FUN_00f9e6d0(param_1 + 0xf4,"g_All_Offset");
                if (iVar1 != 0) {
                  iVar1 = FUN_00f9e6d0(param_1 + 0x118,"g_ColorEnhance");
                  return iVar1 != 0;
                }
              }
            }
          }
        }
      }
    }
  }
  return false;
}

// 00FBB680  FUN_00fbb680  size=48  [callgraph]
void __thiscall FUN_00fbb680(int param_1,byte param_2)

{
  *(uint *)(param_1 + 0x30) =
       *(uint *)(param_1 + 0x30) ^ ((uint)param_2 << 0x18 ^ *(uint *)(param_1 + 0x30)) & 0x1f000000;
  if (param_2 != 1) {
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xfffff3f3 | 0x303;
  }
  return;
}

// 00FBB6B0  FUN_00fbb6b0  size=48  [callgraph]
void __thiscall FUN_00fbb6b0(int param_1,byte param_2)

{
  *(uint *)(param_1 + 0x48) =
       *(uint *)(param_1 + 0x48) ^ ((uint)param_2 << 0x18 ^ *(uint *)(param_1 + 0x48)) & 0x1f000000;
  if (param_2 != 1) {
    *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0xfffff3f3 | 0x303;
  }
  return;
}

// 00FBB6E0  FUN_00fbb6e0  size=48  [callgraph]
void __thiscall FUN_00fbb6e0(int param_1,byte param_2)

{
  *(uint *)(param_1 + 0x60) =
       *(uint *)(param_1 + 0x60) ^ ((uint)param_2 << 0x18 ^ *(uint *)(param_1 + 0x60)) & 0x1f000000;
  if (param_2 != 1) {
    *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xfffff3f3 | 0x303;
  }
  return;
}

// 00FBB710  FUN_00fbb710  size=48  [callgraph]
void __thiscall FUN_00fbb710(int param_1,byte param_2)

{
  *(uint *)(param_1 + 0x6c) =
       *(uint *)(param_1 + 0x6c) ^ ((uint)param_2 << 0x18 ^ *(uint *)(param_1 + 0x6c)) & 0x1f000000;
  if (param_2 != 1) {
    *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xfffff3f3 | 0x303;
  }
  return;
}

// 00FBB740  FUN_00fbb740  size=48  [callgraph]
void __thiscall FUN_00fbb740(int param_1,byte param_2)

{
  *(uint *)(param_1 + 0x78) =
       *(uint *)(param_1 + 0x78) ^ ((uint)param_2 << 0x18 ^ *(uint *)(param_1 + 0x78)) & 0x1f000000;
  if (param_2 != 1) {
    *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) & 0xfffff3f3 | 0x303;
  }
  return;
}

// 00FBB770  FUN_00fbb770  size=48  [callgraph]
void __thiscall FUN_00fbb770(int param_1,byte param_2)

{
  *(uint *)(param_1 + 0x3c) =
       *(uint *)(param_1 + 0x3c) ^ ((uint)param_2 << 0x18 ^ *(uint *)(param_1 + 0x3c)) & 0x1f000000;
  if (param_2 != 1) {
    *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) & 0xfffff3f3 | 0x303;
  }
  return;
}

// 00FBB7A0  FUN_00fbb7a0  size=48  [callgraph]
void __thiscall FUN_00fbb7a0(int param_1,byte param_2)

{
  *(uint *)(param_1 + 0x54) =
       *(uint *)(param_1 + 0x54) ^ ((uint)param_2 << 0x18 ^ *(uint *)(param_1 + 0x54)) & 0x1f000000;
  if (param_2 != 1) {
    *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) & 0xfffff3f3 | 0x303;
  }
  return;
}

// 00FBB7D0  FUN_00fbb7d0  size=60  [callgraph]
void __thiscall FUN_00fbb7d0(int param_1,byte param_2)

{
  *(uint *)(param_1 + 0x9c) =
       *(uint *)(param_1 + 0x9c) ^ ((uint)param_2 << 0x18 ^ *(uint *)(param_1 + 0x9c)) & 0x1f000000;
  if (param_2 != 1) {
    *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) & 0xfffff3f3 | 0x303;
  }
  return;
}

// 00FBB810  FUN_00fbb810  size=60  [callgraph]
void __thiscall FUN_00fbb810(int param_1,byte param_2)

{
  *(uint *)(param_1 + 0xa8) =
       *(uint *)(param_1 + 0xa8) ^ ((uint)param_2 << 0x18 ^ *(uint *)(param_1 + 0xa8)) & 0x1f000000;
  if (param_2 != 1) {
    *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) & 0xfffff3f3 | 0x303;
  }
  return;
}

// 00FBB850  FUN_00fbb850  size=48  [callgraph]
void __thiscall FUN_00fbb850(int param_1,byte param_2)

{
  *(uint *)(param_1 + 0x48) =
       *(uint *)(param_1 + 0x48) ^ ((uint)param_2 << 0x18 ^ *(uint *)(param_1 + 0x48)) & 0x1f000000;
  if (param_2 != 1) {
    *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0xfffff3f3 | 0x303;
  }
  return;
}

// 00FBB880  FUN_00fbb880  size=60  [callgraph]
void __thiscall FUN_00fbb880(int param_1,byte param_2)

{
  *(uint *)(param_1 + 0x90) =
       *(uint *)(param_1 + 0x90) ^ ((uint)param_2 << 0x18 ^ *(uint *)(param_1 + 0x90)) & 0x1f000000;
  if (param_2 != 1) {
    *(uint *)(param_1 + 0x90) = *(uint *)(param_1 + 0x90) & 0xfffff3f3 | 0x303;
  }
  return;
}

// 00FBB8C0  FUN_00fbb8c0  size=1281  [callgraph]
undefined4 __thiscall FUN_00fbb8c0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00f9e770(param_2,param_3);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_00fa39a0(param_1 + 0x28,"g_Color_1_sampler");
  if (param_4 == 0xffffffff) {
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = FUN_00fa39a0(param_1 + 0x40,"g_Normalmap_sampler");
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = FUN_00fa39a0(param_1 + 0x58,"g_MaskSampler");
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = FUN_00fa39a0(param_1 + 100,"g_OcclusionSampler");
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = FUN_00fa39a0(param_1 + 0x70,"g_CubeSampler");
    if (iVar1 == 0) {
      return 0;
    }
  }
  else {
    if (iVar1 == 0) {
      return 0;
    }
    if (((char)param_4 < '\0') &&
       (iVar1 = FUN_00fa39a0(param_1 + 0x40,"g_Normalmap_sampler"), iVar1 == 0)) {
      return 0;
    }
    if ((((param_4 & 0x40) != 0) && ((param_4 & 3) != 0)) &&
       (iVar1 = FUN_00fa39a0(param_1 + 0x58,"g_MaskSampler"), iVar1 == 0)) {
      return 0;
    }
    if (((param_4 & 0x20) != 0) &&
       (iVar1 = FUN_00fa39a0(param_1 + 100,"g_OcclusionSampler"), iVar1 == 0)) {
      return 0;
    }
    if (((param_4 & 2) != 0) && (iVar1 = FUN_00fa39a0(param_1 + 0x70,"g_CubeSampler"), iVar1 == 0))
    {
      return 0;
    }
    if ((param_4 & 0x10) == 0) goto LAB_00fbb9dc;
  }
  iVar1 = FUN_00fa39a0(param_1 + 0x34,"g_Color_2_sampler");
  if (iVar1 == 0) {
    return 0;
  }
LAB_00fbb9dc:
  uVar2 = 2;
  iVar1 = 2;
  if ((*(byte *)(param_1 + 0x33) & 0x1f) != 1) {
    uVar2 = 3;
    iVar1 = 3;
  }
  *(uint *)(param_1 + 0x30) = iVar1 << 8 | *(uint *)(param_1 + 0x30) & 0xfffff020 | uVar2 | 0x20;
  uVar2 = 2;
  iVar1 = 2;
  if ((*(byte *)(param_1 + 0x4b) & 0x1f) != 1) {
    uVar2 = 3;
    iVar1 = 3;
  }
  *(uint *)(param_1 + 0x48) = iVar1 << 8 | *(uint *)(param_1 + 0x48) & 0xfffff020 | uVar2 | 0x20;
  uVar2 = 2;
  iVar1 = 2;
  if ((*(byte *)(param_1 + 99) & 0x1f) != 1) {
    uVar2 = 3;
    iVar1 = 3;
  }
  *(uint *)(param_1 + 0x60) = iVar1 << 8 | *(uint *)(param_1 + 0x60) & 0xfffff020 | uVar2 | 0x20;
  uVar2 = 2;
  iVar1 = 2;
  if ((*(byte *)(param_1 + 0x6f) & 0x1f) != 1) {
    uVar2 = 3;
    iVar1 = 3;
  }
  *(uint *)(param_1 + 0x6c) = iVar1 << 8 | *(uint *)(param_1 + 0x6c) & 0xfffff020 | uVar2 | 0x20;
  uVar2 = 2;
  iVar1 = 2;
  if ((*(byte *)(param_1 + 0x7b) & 0x1f) != 1) {
    uVar2 = 3;
    iVar1 = 3;
  }
  *(uint *)(param_1 + 0x78) = iVar1 << 8 | *(uint *)(param_1 + 0x78) & 0xfffff020 | uVar2 | 0x20;
  uVar2 = 2;
  iVar1 = 2;
  if ((*(byte *)(param_1 + 0x3f) & 0x1f) != 1) {
    uVar2 = 3;
    iVar1 = 3;
  }
  *(uint *)(param_1 + 0x3c) = iVar1 << 8 | *(uint *)(param_1 + 0x3c) & 0xfffff020 | uVar2 | 0x20;
  uVar2 = 2;
  iVar1 = 2;
  if ((*(byte *)(param_1 + 0x57) & 0x1f) != 1) {
    uVar2 = 3;
    iVar1 = 3;
  }
  *(uint *)(param_1 + 0x54) = iVar1 << 8 | *(uint *)(param_1 + 0x54) & 0xfffff020 | uVar2 | 0x20;
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xff311fff | 0x311000;
  *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0xff311fff | 0x311000;
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xff311fff | 0x311000;
  *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xff311fff | 0x311000;
  *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) & 0xff333fff | 0x333000;
  *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) & 0xff311fff | 0x311000;
  *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) & 0xff311fff | 0x311000;
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0x7fffffff;
  if (param_4 == 0xffffffff) {
    iVar1 = FUN_00f9e6d0(param_1 + 0xac,"g_specParam");
    if (((((iVar1 != 0) && (iVar1 = FUN_00f9e6d0(param_1 + 0xb8,"g_normalmapRate"), iVar1 != 0)) &&
         (iVar1 = FUN_00f9e6d0(param_1 + 0xc4,"g_ambientRate"), iVar1 != 0)) &&
        ((iVar1 = FUN_00f9e6d0(param_1 + 0xd0,"g_cubeParam"), iVar1 != 0 &&
         (iVar1 = FUN_00f9e6d0(param_1 + 0xdc,"g_otherParam"), iVar1 != 0)))) &&
       ((iVar1 = FUN_00f9e6d0(param_1 + 0xe8,"g_lightDir"), iVar1 != 0 &&
        ((iVar1 = FUN_00f9e6d0(param_1 + 0xf4,"g_All_Offset"), iVar1 != 0 &&
         (iVar1 = FUN_00f9e6d0(param_1 + 0x118,"g_ColorEnhance"), iVar1 != 0)))))) {
      return 1;
    }
  }
  else {
    if (((param_4 & 1) != 0) && (iVar1 = FUN_00f9e6d0(param_1 + 0xac,"g_specParam"), iVar1 == 0)) {
      return 0;
    }
    if ((((param_4 & 4) != 0) && ((param_4 & 8) != 0)) &&
       (iVar1 = FUN_00f9e6d0(param_1 + 0xb8,"g_normalmapRate"), iVar1 == 0)) {
      return 0;
    }
    iVar1 = FUN_00f9e6d0(param_1 + 0xc4,"g_ambientRate");
    if (iVar1 != 0) {
      if (((param_4 & 2) != 0) && (iVar1 = FUN_00f9e6d0(param_1 + 0xd0,"g_cubeParam"), iVar1 == 0))
      {
        return 0;
      }
      iVar1 = FUN_00f9e6d0(param_1 + 0xdc,"g_otherParam");
      if (iVar1 != 0) {
        if (((param_4 & 4) != 0) && (iVar1 = FUN_00f9e6d0(param_1 + 0xe8,"g_lightDir"), iVar1 == 0))
        {
          return 0;
        }
        iVar1 = FUN_00f9e6d0(param_1 + 0xf4,"g_All_Offset");
        if ((iVar1 != 0) && (iVar1 = FUN_00f9e6d0(param_1 + 0x118,"g_ColorEnhance"), iVar1 != 0)) {
          if ((param_4 & 0x100) != 0) {
            FUN_00f9e6d0(param_1 + 0x130,"g_GroundHemisphereColor");
            FUN_00f9e6d0(param_1 + 0x13c,"g_SkyHemisphereColor");
          }
          return 1;
        }
      }
    }
  }
  return 0;
}

// 00FBBDD0  FUN_00fbbdd0  size=801  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00fbbfa4) */

bool __thiscall FUN_00fbbdd0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00f9e770(param_2,param_3);
  if ((((iVar1 != 0) && (iVar1 = FUN_00fa39a0(param_1 + 0x28,"g_Color_1_sampler"), iVar1 != 0)) &&
      (iVar1 = FUN_00fa39a0(param_1 + 0x40,"g_Normalmap_sampler"), iVar1 != 0)) &&
     (((iVar1 = FUN_00fa39a0(param_1 + 0x58,"g_MaskSampler"), iVar1 != 0 &&
       (iVar1 = FUN_00fa39a0(param_1 + 100,"g_OcclusionSampler"), iVar1 != 0)) &&
      ((iVar1 = FUN_00fa39a0(param_1 + 0x70,"g_CubeSampler"), iVar1 != 0 &&
       (iVar1 = FUN_00fa39a0(param_1 + 0x88,"g_SpePowSampler"), iVar1 != 0)))))) {
    uVar2 = 2;
    iVar1 = 2;
    if ((*(byte *)(param_1 + 0x33) & 0x1f) != 1) {
      uVar2 = 3;
      iVar1 = 3;
    }
    *(uint *)(param_1 + 0x30) = iVar1 << 8 | *(uint *)(param_1 + 0x30) & 0xfffff020 | uVar2 | 0x20;
    uVar2 = 2;
    iVar1 = 2;
    if ((*(byte *)(param_1 + 0x4b) & 0x1f) != 1) {
      uVar2 = 3;
      iVar1 = 3;
    }
    *(uint *)(param_1 + 0x48) = iVar1 << 8 | *(uint *)(param_1 + 0x48) & 0xfffff020 | uVar2 | 0x20;
    uVar2 = 2;
    iVar1 = 2;
    if ((*(byte *)(param_1 + 99) & 0x1f) != 1) {
      uVar2 = 3;
      iVar1 = 3;
    }
    *(uint *)(param_1 + 0x60) = iVar1 << 8 | *(uint *)(param_1 + 0x60) & 0xfffff020 | uVar2 | 0x20;
    uVar2 = 2;
    iVar1 = 2;
    if ((*(byte *)(param_1 + 0x6f) & 0x1f) != 1) {
      uVar2 = 3;
      iVar1 = 3;
    }
    *(uint *)(param_1 + 0x6c) = iVar1 << 8 | *(uint *)(param_1 + 0x6c) & 0xfffff020 | uVar2 | 0x20;
    uVar2 = 2;
    iVar1 = 2;
    if ((*(byte *)(param_1 + 0x7b) & 0x1f) != 1) {
      uVar2 = 3;
      iVar1 = 3;
    }
    *(uint *)(param_1 + 0x78) = iVar1 << 8 | *(uint *)(param_1 + 0x78) & 0xfffff000 | uVar2;
    uVar2 = *(uint *)(param_1 + 0x90);
    *(uint *)(param_1 + 0x90) = uVar2 & 0xe1ffffff | 0x1000000;
    *(uint *)(param_1 + 0x90) = uVar2 & 0xe1fff000 | 0x1000101;
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xff111fff | 0x111000;
    *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0xff111fff | 0x111000;
    *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xff111fff | 0x111000;
    *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xff111fff | 0x111000;
    *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) & 0xff333fff | 0x333000;
    *(uint *)(param_1 + 0x90) = *(uint *)(param_1 + 0x90) & 0xff333fff | 0x333000;
    iVar1 = FUN_00f9e6d0(param_1 + 0xac,"g_specParam");
    if (((iVar1 != 0) && (iVar1 = FUN_00f9e6d0(param_1 + 0xb8,"g_normalmapRate"), iVar1 != 0)) &&
       ((iVar1 = FUN_00f9e6d0(param_1 + 0xc4,"g_ambientRate"), iVar1 != 0 &&
        (((iVar1 = FUN_00f9e6d0(param_1 + 0xd0,"g_cubeParam"), iVar1 != 0 &&
          (iVar1 = FUN_00f9e6d0(param_1 + 0xdc,"g_otherParam"), iVar1 != 0)) &&
         (iVar1 = FUN_00f9e6d0(param_1 + 0xe8,"g_lightDir"), iVar1 != 0)))))) {
      iVar1 = FUN_00f9e6d0(param_1 + 0xf4,"g_All_Offset");
      return iVar1 != 0;
    }
  }
  return false;
}

// 00FBC100  FUN_00fbc100  size=145  [callgraph]
bool __thiscall FUN_00fbc100(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = FUN_00f9e770(param_2,param_3);
  if (iVar2 != 0) {
    iVar2 = FUN_00fa39a0(param_1 + 0x70,"g_CubeSampler");
    if (iVar2 != 0) {
      uVar3 = 2;
      iVar2 = 2;
      if ((*(byte *)(param_1 + 0x7b) & 0x1f) != 1) {
        uVar3 = 3;
        iVar2 = 3;
      }
      uVar1 = *(uint *)(param_1 + 0x78);
      *(uint *)(param_1 + 0x78) = iVar2 << 8 | uVar1 & 0xfffff000 | uVar3;
      *(uint *)(param_1 + 0x78) = iVar2 << 8 | uVar1 & 0xff333000 | uVar3 | 0x333000;
      iVar2 = FUN_00f9e6d0(param_1 + 0xd0,"g_cubeParam");
      return iVar2 != 0;
    }
  }
  return false;
}

// 00FBC1A0  FUN_00fbc1a0  size=148  [callgraph]
bool __thiscall FUN_00fbc1a0(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = FUN_00f9e770(param_2,param_3);
  if (iVar2 != 0) {
    iVar2 = FUN_00fa39a0(param_1 + 0x28,"g_Color_1_sampler");
    if (iVar2 != 0) {
      uVar3 = 2;
      iVar2 = 2;
      if ((*(byte *)(param_1 + 0x33) & 0x1f) != 1) {
        uVar3 = 3;
        iVar2 = 3;
      }
      uVar1 = *(uint *)(param_1 + 0x30);
      *(uint *)(param_1 + 0x30) = iVar2 << 8 | uVar1 & 0xfffff020 | uVar3 | 0x20;
      *(uint *)(param_1 + 0x30) = iVar2 << 8 | uVar1 & 0xff111020 | uVar3 | 0x111020;
      iVar2 = FUN_00f9e6d0(param_1 + 0xc4,"g_ambientRate");
      return iVar2 != 0;
    }
  }
  return false;
}

// 00FBC240  FUN_00fbc240  size=445  [callgraph]
bool __thiscall FUN_00fbc240(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00f9e770(param_2,param_3);
  if (iVar1 != 0) {
    iVar1 = FUN_00fa39a0(param_1 + 0x28,"g_Color_1_sampler");
    if (iVar1 != 0) {
      iVar1 = FUN_00fa39a0(param_1 + 0x40,"g_Normalmap_sampler");
      if (iVar1 != 0) {
        iVar1 = FUN_00fa39a0(param_1 + 100,"g_OcclusionSampler");
        if (iVar1 != 0) {
          uVar2 = 2;
          iVar1 = 2;
          if ((*(byte *)(param_1 + 0x33) & 0x1f) != 1) {
            uVar2 = 3;
            iVar1 = 3;
          }
          *(uint *)(param_1 + 0x30) =
               iVar1 << 8 | *(uint *)(param_1 + 0x30) & 0xfffff020 | uVar2 | 0x20;
          uVar2 = 2;
          iVar1 = 2;
          if ((*(byte *)(param_1 + 0x4b) & 0x1f) != 1) {
            uVar2 = 3;
            iVar1 = 3;
          }
          *(uint *)(param_1 + 0x48) =
               iVar1 << 8 | *(uint *)(param_1 + 0x48) & 0xfffff020 | uVar2 | 0x20;
          uVar2 = 2;
          iVar1 = 2;
          if ((*(byte *)(param_1 + 0x6f) & 0x1f) != 1) {
            uVar2 = 3;
            iVar1 = 3;
          }
          *(uint *)(param_1 + 0x6c) = iVar1 << 8 | *(uint *)(param_1 + 0x6c) & 0xfffff000 | uVar2;
          *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xff111fff | 0x111000;
          *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0xff111fff | 0x111000;
          *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xff333fff | 0x333000;
          *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0x7fffffff;
          iVar1 = FUN_00f9e6d0(param_1 + 0xac,"g_specParam");
          if (iVar1 != 0) {
            iVar1 = FUN_00f9e6d0(param_1 + 0xb8,"g_normalmapRate");
            if (iVar1 != 0) {
              iVar1 = FUN_00f9e6d0(param_1 + 0xc4,"g_ambientRate");
              if (iVar1 != 0) {
                iVar1 = FUN_00f9e6d0(param_1 + 0xe8,"g_lightDir");
                if (iVar1 != 0) {
                  iVar1 = FUN_00f9e6d0(param_1 + 0xf4,"g_All_Offset");
                  return iVar1 != 0;
                }
              }
            }
          }
        }
      }
    }
  }
  return false;
}

// 00FBC400  FUN_00fbc400  size=552  [callgraph]
bool __thiscall FUN_00fbc400(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00f9e770(param_2,param_3);
  if (iVar1 != 0) {
    iVar1 = FUN_00fa39a0(param_1 + 0x28,"g_Color_1_sampler");
    if (iVar1 != 0) {
      iVar1 = FUN_00fa39a0(param_1 + 0x40,"g_Normalmap_sampler");
      if (iVar1 != 0) {
        iVar1 = FUN_00fa39a0(param_1 + 100,"g_OcclusionSampler");
        if (iVar1 != 0) {
          iVar1 = FUN_00fa39a0(param_1 + 0xa0,"g_incidence_sampler");
          if (iVar1 != 0) {
            uVar2 = 2;
            iVar1 = 2;
            if ((*(byte *)(param_1 + 0x33) & 0x1f) != 1) {
              uVar2 = 3;
              iVar1 = 3;
            }
            *(uint *)(param_1 + 0x30) =
                 iVar1 << 8 | *(uint *)(param_1 + 0x30) & 0xfffff020 | uVar2 | 0x20;
            uVar2 = 2;
            iVar1 = 2;
            if ((*(byte *)(param_1 + 0x4b) & 0x1f) != 1) {
              uVar2 = 3;
              iVar1 = 3;
            }
            *(uint *)(param_1 + 0x48) =
                 iVar1 << 8 | *(uint *)(param_1 + 0x48) & 0xfffff020 | uVar2 | 0x20;
            uVar2 = 2;
            iVar1 = 2;
            if ((*(byte *)(param_1 + 0x6f) & 0x1f) != 1) {
              uVar2 = 3;
              iVar1 = 3;
            }
            *(uint *)(param_1 + 0x6c) = iVar1 << 8 | *(uint *)(param_1 + 0x6c) & 0xfffff000 | uVar2;
            uVar2 = 2;
            iVar1 = 2;
            if ((*(byte *)(param_1 + 0xab) & 0x1f) != 1) {
              uVar2 = 3;
              iVar1 = 3;
            }
            *(uint *)(param_1 + 0xa8) =
                 iVar1 << 8 | *(uint *)(param_1 + 0xa8) & 0xfffff020 | uVar2 | 0x20;
            *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xff111fff | 0x111000;
            *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0xff111fff | 0x111000;
            *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xff333fff | 0x333000;
            *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) & 0xff111fff | 0x111000;
            *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0x7fffffff;
            iVar1 = FUN_00f9e6d0(param_1 + 0xac,"g_specParam");
            if (iVar1 != 0) {
              iVar1 = FUN_00f9e6d0(param_1 + 0xb8,"g_normalmapRate");
              if (iVar1 != 0) {
                iVar1 = FUN_00f9e6d0(param_1 + 0xc4,"g_ambientRate");
                if (iVar1 != 0) {
                  iVar1 = FUN_00f9e6d0(param_1 + 0xe8,"g_lightDir");
                  if (iVar1 != 0) {
                    iVar1 = FUN_00f9e6d0(param_1 + 0xf4,"g_All_Offset");
                    return iVar1 != 0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return false;
}

// 00FBC630  FUN_00fbc630  size=643  [callgraph]
bool __thiscall FUN_00fbc630(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00f9e770(param_2,param_3);
  if (iVar1 != 0) {
    iVar1 = FUN_00fa39a0(param_1 + 0x28,"g_Color_1_sampler");
    if (iVar1 != 0) {
      iVar1 = FUN_00fa39a0(param_1 + 0x40,"g_Normalmap_sampler");
      if (iVar1 != 0) {
        iVar1 = FUN_00fa39a0(param_1 + 100,"g_OcclusionSampler");
        if (iVar1 != 0) {
          iVar1 = FUN_00fa39a0(param_1 + 0x4c,"g_Normalmap2_sampler");
          if (iVar1 != 0) {
            iVar1 = FUN_00fa39a0(param_1 + 0x94,"g_wightmap_sampler");
            if (iVar1 != 0) {
              uVar2 = 2;
              iVar1 = 2;
              if ((*(byte *)(param_1 + 0x33) & 0x1f) != 1) {
                uVar2 = 3;
                iVar1 = 3;
              }
              *(uint *)(param_1 + 0x30) =
                   iVar1 << 8 | *(uint *)(param_1 + 0x30) & 0xfffff020 | uVar2 | 0x20;
              uVar2 = 2;
              iVar1 = 2;
              if ((*(byte *)(param_1 + 0x4b) & 0x1f) != 1) {
                uVar2 = 3;
                iVar1 = 3;
              }
              *(uint *)(param_1 + 0x48) =
                   iVar1 << 8 | *(uint *)(param_1 + 0x48) & 0xfffff020 | uVar2 | 0x20;
              uVar2 = 2;
              iVar1 = 2;
              if ((*(byte *)(param_1 + 0x6f) & 0x1f) != 1) {
                uVar2 = 3;
                iVar1 = 3;
              }
              *(uint *)(param_1 + 0x6c) =
                   iVar1 << 8 | *(uint *)(param_1 + 0x6c) & 0xfffff000 | uVar2;
              uVar2 = 2;
              iVar1 = 2;
              if ((*(byte *)(param_1 + 0x57) & 0x1f) != 1) {
                uVar2 = 3;
                iVar1 = 3;
              }
              *(uint *)(param_1 + 0x54) =
                   iVar1 << 8 | *(uint *)(param_1 + 0x54) & 0xfffff020 | uVar2 | 0x20;
              uVar2 = 2;
              iVar1 = 2;
              if ((*(byte *)(param_1 + 0x9f) & 0x1f) != 1) {
                uVar2 = 3;
                iVar1 = 3;
              }
              *(uint *)(param_1 + 0x9c) =
                   iVar1 << 8 | *(uint *)(param_1 + 0x9c) & 0xfffff020 | uVar2 | 0x20;
              *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xff111fff | 0x111000;
              *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0xff111fff | 0x111000;
              *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xff333fff | 0x333000;
              *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) & 0xff111fff | 0x111000;
              *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) & 0xff111fff | 0x111000;
              *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0x7fffffff;
              iVar1 = FUN_00f9e6d0(param_1 + 0xac,"g_specParam");
              if (iVar1 != 0) {
                iVar1 = FUN_00f9e6d0(param_1 + 0xb8,"g_normalmapRate");
                if (iVar1 != 0) {
                  iVar1 = FUN_00f9e6d0(param_1 + 0xc4,"g_ambientRate");
                  if (iVar1 != 0) {
                    iVar1 = FUN_00f9e6d0(param_1 + 0xe8,"g_lightDir");
                    if (iVar1 != 0) {
                      iVar1 = FUN_00f9e6d0(param_1 + 0xf4,"g_All_Offset");
                      return iVar1 != 0;
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
  return false;
}

// 00FBC8C0  FUN_00fbc8c0  size=756  [callgraph]
bool __thiscall FUN_00fbc8c0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00f9e770(param_2,param_3);
  if (iVar1 != 0) {
    iVar1 = FUN_00fa39a0(param_1 + 0x28,"g_Color_1_sampler");
    if (iVar1 != 0) {
      iVar1 = FUN_00fa39a0(param_1 + 0x40,"g_Normalmap_sampler");
      if (iVar1 != 0) {
        iVar1 = FUN_00fa39a0(param_1 + 100,"g_OcclusionSampler");
        if (iVar1 != 0) {
          iVar1 = FUN_00fa39a0(param_1 + 0x4c,"g_Normalmap2_sampler");
          if (iVar1 != 0) {
            iVar1 = FUN_00fa39a0(param_1 + 0x94,"g_wightmap_sampler");
            if (iVar1 != 0) {
              iVar1 = FUN_00fa39a0(param_1 + 0xa0,"g_incidence_sampler");
              if (iVar1 != 0) {
                uVar2 = 2;
                iVar1 = 2;
                if ((*(byte *)(param_1 + 0x33) & 0x1f) != 1) {
                  uVar2 = 3;
                  iVar1 = 3;
                }
                *(uint *)(param_1 + 0x30) =
                     iVar1 << 8 | *(uint *)(param_1 + 0x30) & 0xfffff020 | uVar2 | 0x20;
                uVar2 = 2;
                iVar1 = 2;
                if ((*(byte *)(param_1 + 0x4b) & 0x1f) != 1) {
                  uVar2 = 3;
                  iVar1 = 3;
                }
                *(uint *)(param_1 + 0x48) =
                     iVar1 << 8 | *(uint *)(param_1 + 0x48) & 0xfffff020 | uVar2 | 0x20;
                uVar2 = 2;
                iVar1 = 2;
                if ((*(byte *)(param_1 + 0x6f) & 0x1f) != 1) {
                  uVar2 = 3;
                  iVar1 = 3;
                }
                *(uint *)(param_1 + 0x6c) =
                     iVar1 << 8 | *(uint *)(param_1 + 0x6c) & 0xfffff000 | uVar2;
                uVar2 = 2;
                iVar1 = 2;
                if ((*(byte *)(param_1 + 0x57) & 0x1f) != 1) {
                  uVar2 = 3;
                  iVar1 = 3;
                }
                *(uint *)(param_1 + 0x54) =
                     iVar1 << 8 | *(uint *)(param_1 + 0x54) & 0xfffff020 | uVar2 | 0x20;
                uVar2 = 2;
                iVar1 = 2;
                if ((*(byte *)(param_1 + 0x9f) & 0x1f) != 1) {
                  uVar2 = 3;
                  iVar1 = 3;
                }
                *(uint *)(param_1 + 0x9c) =
                     iVar1 << 8 | *(uint *)(param_1 + 0x9c) & 0xfffff020 | uVar2 | 0x20;
                uVar2 = 2;
                iVar1 = 2;
                if ((*(byte *)(param_1 + 0xab) & 0x1f) != 1) {
                  uVar2 = 3;
                  iVar1 = 3;
                }
                *(uint *)(param_1 + 0xa8) =
                     iVar1 << 8 | *(uint *)(param_1 + 0xa8) & 0xfffff020 | uVar2 | 0x20;
                *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xff111fff | 0x111000;
                *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0xff111fff | 0x111000;
                *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xff333fff | 0x333000;
                *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) & 0xff111fff | 0x111000;
                *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) & 0xff111fff | 0x111000;
                *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) & 0xff111fff | 0x111000;
                *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0x7fffffff;
                iVar1 = FUN_00f9e6d0(param_1 + 0xac,"g_specParam");
                if (iVar1 != 0) {
                  iVar1 = FUN_00f9e6d0(param_1 + 0xb8,"g_normalmapRate");
                  if (iVar1 != 0) {
                    iVar1 = FUN_00f9e6d0(param_1 + 0xc4,"g_ambientRate");
                    if (iVar1 != 0) {
                      iVar1 = FUN_00f9e6d0(param_1 + 0xe8,"g_lightDir");
                      if (iVar1 != 0) {
                        iVar1 = FUN_00f9e6d0(param_1 + 0xf4,"g_All_Offset");
                        return iVar1 != 0;
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
  return false;
}

// 00FBCBC0  FUN_00fbcbc0  size=963  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00fbccf0) */

bool __thiscall FUN_00fbcbc0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00f9e770(param_2,param_3);
  if (((((iVar1 != 0) && (iVar1 = FUN_00fa39a0(param_1 + 0x28,"g_Color_1_sampler"), iVar1 != 0)) &&
       (iVar1 = FUN_00fa39a0(param_1 + 0x34,"g_Color_2_sampler"), iVar1 != 0)) &&
      (((iVar1 = FUN_00fa39a0(param_1 + 0x40,"g_Normalmap_sampler"), iVar1 != 0 &&
        (iVar1 = FUN_00fa39a0(param_1 + 100,"g_OcclusionSampler"), iVar1 != 0)) &&
       ((iVar1 = FUN_00fa39a0(param_1 + 0x4c,"g_Normalmap2_sampler"), iVar1 != 0 &&
        ((iVar1 = FUN_00fa39a0(param_1 + 0x94,"g_wightmap_sampler"), iVar1 != 0 &&
         (iVar1 = FUN_00fa39a0(param_1 + 0xa0,"g_incidence_sampler"), iVar1 != 0)))))))) &&
     (iVar1 = FUN_00fa39a0(param_1 + 0x70,"g_NormalBlendSampler"), iVar1 != 0)) {
    uVar2 = 2;
    iVar1 = 2;
    if ((*(byte *)(param_1 + 0x33) & 0x1f) != 1) {
      uVar2 = 3;
      iVar1 = 3;
    }
    *(uint *)(param_1 + 0x30) = iVar1 << 8 | *(uint *)(param_1 + 0x30) & 0xfffff020 | uVar2 | 0x20;
    uVar2 = *(uint *)(param_1 + 0x3c);
    *(uint *)(param_1 + 0x3c) = uVar2 & 0xe1ffffff | 0x1000000;
    *(uint *)(param_1 + 0x3c) = uVar2 & 0xe1fff010 | 0x1000111;
    uVar2 = 2;
    iVar1 = 2;
    if ((*(byte *)(param_1 + 0x4b) & 0x1f) != 1) {
      uVar2 = 3;
      iVar1 = 3;
    }
    *(uint *)(param_1 + 0x48) = iVar1 << 8 | *(uint *)(param_1 + 0x48) & 0xfffff020 | uVar2 | 0x20;
    uVar2 = 2;
    iVar1 = 2;
    if ((*(byte *)(param_1 + 0x6f) & 0x1f) != 1) {
      uVar2 = 3;
      iVar1 = 3;
    }
    *(uint *)(param_1 + 0x6c) = iVar1 << 8 | *(uint *)(param_1 + 0x6c) & 0xfffff000 | uVar2;
    uVar2 = 2;
    iVar1 = 2;
    if ((*(byte *)(param_1 + 0x57) & 0x1f) != 1) {
      uVar2 = 3;
      iVar1 = 3;
    }
    *(uint *)(param_1 + 0x54) = iVar1 << 8 | *(uint *)(param_1 + 0x54) & 0xfffff020 | uVar2 | 0x20;
    uVar2 = 2;
    iVar1 = 2;
    if ((*(byte *)(param_1 + 0x9f) & 0x1f) != 1) {
      uVar2 = 3;
      iVar1 = 3;
    }
    *(uint *)(param_1 + 0x9c) = iVar1 << 8 | *(uint *)(param_1 + 0x9c) & 0xfffff020 | uVar2 | 0x20;
    uVar2 = 2;
    iVar1 = 2;
    if ((*(byte *)(param_1 + 0xab) & 0x1f) != 1) {
      uVar2 = 3;
      iVar1 = 3;
    }
    *(uint *)(param_1 + 0xa8) = iVar1 << 8 | *(uint *)(param_1 + 0xa8) & 0xfffff020 | uVar2 | 0x20;
    uVar2 = 2;
    iVar1 = 2;
    if ((*(byte *)(param_1 + 0x7b) & 0x1f) != 1) {
      uVar2 = 3;
      iVar1 = 3;
    }
    *(uint *)(param_1 + 0x78) = iVar1 << 8 | *(uint *)(param_1 + 0x78) & 0xfffff020 | uVar2 | 0x20;
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xff111fff | 0x111000;
    *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) & 0xff333fff | 0x333000;
    *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0xff111fff | 0x111000;
    *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xff333fff | 0x333000;
    *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) & 0xff111fff | 0x111000;
    *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) & 0xff111fff | 0x111000;
    *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) & 0xff111fff | 0x111000;
    *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) & 0xff111fff | 0x111000;
    *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0x7fffffff;
    iVar1 = FUN_00f9e6d0(param_1 + 0xac,"g_specParam");
    if ((((iVar1 != 0) && (iVar1 = FUN_00f9e6d0(param_1 + 0xb8,"g_normalmapRate"), iVar1 != 0)) &&
        (iVar1 = FUN_00f9e6d0(param_1 + 0xc4,"g_ambientRate"), iVar1 != 0)) &&
       (iVar1 = FUN_00f9e6d0(param_1 + 0xe8,"g_lightDir"), iVar1 != 0)) {
      iVar1 = FUN_00f9e6d0(param_1 + 0xf4,"g_All_Offset");
      return iVar1 != 0;
    }
  }
  return false;
}

// 00FBCF90  FUN_00fbcf90  size=561  [callgraph]
bool __thiscall FUN_00fbcf90(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00f9e770(param_2,param_3);
  if (iVar1 != 0) {
    iVar1 = FUN_00fa39a0(param_1 + 0x28,"g_Color_1_sampler");
    if (iVar1 != 0) {
      iVar1 = FUN_00fa39a0(param_1 + 0x40,"g_Normalmap_sampler");
      if (iVar1 != 0) {
        iVar1 = FUN_00fa39a0(param_1 + 0x70,"g_CubeSampler");
        if (iVar1 != 0) {
          iVar1 = FUN_00fa39a0(param_1 + 0x4c,"g_Normalmap2_sampler");
          if (iVar1 != 0) {
            uVar2 = 2;
            iVar1 = 2;
            if ((*(byte *)(param_1 + 0x33) & 0x1f) != 1) {
              uVar2 = 3;
              iVar1 = 3;
            }
            *(uint *)(param_1 + 0x30) =
                 iVar1 << 8 | *(uint *)(param_1 + 0x30) & 0xfffff020 | uVar2 | 0x20;
            uVar2 = 2;
            iVar1 = 2;
            if ((*(byte *)(param_1 + 0x4b) & 0x1f) != 1) {
              uVar2 = 3;
              iVar1 = 3;
            }
            *(uint *)(param_1 + 0x48) =
                 iVar1 << 8 | *(uint *)(param_1 + 0x48) & 0xfffff020 | uVar2 | 0x20;
            uVar2 = 2;
            iVar1 = 2;
            if ((*(byte *)(param_1 + 0x7b) & 0x1f) != 1) {
              uVar2 = 3;
              iVar1 = 3;
            }
            *(uint *)(param_1 + 0x78) = iVar1 << 8 | *(uint *)(param_1 + 0x78) & 0xfffff000 | uVar2;
            uVar2 = 2;
            iVar1 = 2;
            if ((*(byte *)(param_1 + 0x57) & 0x1f) != 1) {
              uVar2 = 3;
              iVar1 = 3;
            }
            *(uint *)(param_1 + 0x54) =
                 iVar1 << 8 | *(uint *)(param_1 + 0x54) & 0xfffff020 | uVar2 | 0x20;
            *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xff111fff | 0x111000;
            *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0xff111fff | 0x111000;
            *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) & 0xff333fff | 0x333000;
            *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) & 0xff111fff | 0x111000;
            *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0x7fffffff;
            iVar1 = FUN_00f9e6d0(param_1 + 0xb8,"g_normalmapRate");
            if (iVar1 != 0) {
              iVar1 = FUN_00f9e6d0(param_1 + 0xc4,"g_ambientRate");
              if (iVar1 != 0) {
                iVar1 = FUN_00f9e6d0(param_1 + 0xd0,"g_cubeParam");
                if (iVar1 != 0) {
                  iVar1 = FUN_00f9e6d0(param_1 + 0xdc,"g_otherParam");
                  if (iVar1 != 0) {
                    iVar1 = FUN_00f9e6d0(param_1 + 0xe8,"g_lightDir");
                    if (iVar1 != 0) {
                      iVar1 = FUN_00f9e6d0(param_1 + 0xf4,"g_All_Offset");
                      return iVar1 != 0;
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
  return false;
}

// 00FBD1D0  FUN_00fbd1d0  size=171  [callgraph]
bool __thiscall FUN_00fbd1d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = FUN_00f9e770(param_2,param_3);
  if (iVar2 != 0) {
    iVar2 = FUN_00fa39a0(param_1 + 0x28,"g_Color_1_sampler");
    if (iVar2 != 0) {
      uVar3 = 2;
      iVar2 = 2;
      if ((*(byte *)(param_1 + 0x33) & 0x1f) != 1) {
        uVar3 = 3;
        iVar2 = 3;
      }
      uVar1 = *(uint *)(param_1 + 0x30);
      *(uint *)(param_1 + 0x30) = iVar2 << 8 | uVar1 & 0xfffff020 | uVar3 | 0x20;
      *(uint *)(param_1 + 0x30) = iVar2 << 8 | uVar1 & 0xff111020 | uVar3 | 0x111020;
      iVar2 = FUN_00f9e6d0(param_1 + 0xc4,"g_ambientRate");
      if (iVar2 != 0) {
        iVar2 = FUN_00f9e6d0(param_1 + 0xf4,"g_All_Offset");
        return iVar2 != 0;
      }
    }
  }
  return false;
}

// 00FBD280  FUN_00fbd280  size=499  [callgraph]
undefined4 __thiscall FUN_00fbd280(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00f9e770(param_2,param_3);
  if (iVar1 != 0) {
    iVar1 = FUN_00fa39a0(param_1 + 0x28,"g_Color_1_sampler");
    if (iVar1 != 0) {
      iVar1 = FUN_00fa39a0(param_1 + 0x40,"g_Normalmap_sampler");
      if (iVar1 != 0) {
        iVar1 = FUN_00fa39a0(param_1 + 0x70,"g_CubeSampler");
        if (iVar1 != 0) {
          iVar1 = FUN_00fa39a0(param_1 + 0x7c,"g_CubeSampler2");
          if (iVar1 != 0) {
            iVar1 = FUN_00fa39a0(param_1 + 100,"g_OcclusionSampler");
            if (iVar1 != 0) {
              uVar2 = 2;
              iVar1 = 2;
              if ((*(byte *)(param_1 + 0x33) & 0x1f) != 1) {
                uVar2 = 3;
                iVar1 = 3;
              }
              *(uint *)(param_1 + 0x30) =
                   iVar1 << 8 | *(uint *)(param_1 + 0x30) & 0xfffff020 | uVar2 | 0x20;
              uVar2 = 2;
              iVar1 = 2;
              if ((*(byte *)(param_1 + 0x4b) & 0x1f) != 1) {
                uVar2 = 3;
                iVar1 = 3;
              }
              *(uint *)(param_1 + 0x48) =
                   iVar1 << 8 | *(uint *)(param_1 + 0x48) & 0xfffff020 | uVar2 | 0x20;
              uVar2 = 2;
              iVar1 = 2;
              if ((*(byte *)(param_1 + 0x7b) & 0x1f) != 1) {
                uVar2 = 3;
                iVar1 = 3;
              }
              *(uint *)(param_1 + 0x78) =
                   iVar1 << 8 | *(uint *)(param_1 + 0x78) & 0xfffff000 | uVar2;
              uVar2 = 2;
              iVar1 = 2;
              if ((*(byte *)(param_1 + 0x87) & 0x1f) != 1) {
                uVar2 = 3;
                iVar1 = 3;
              }
              *(uint *)(param_1 + 0x84) =
                   iVar1 << 8 | *(uint *)(param_1 + 0x84) & 0xfffff000 | uVar2;
              uVar2 = 2;
              iVar1 = 2;
              if ((*(byte *)(param_1 + 0x6f) & 0x1f) != 1) {
                uVar2 = 3;
                iVar1 = 3;
              }
              *(uint *)(param_1 + 0x6c) =
                   iVar1 << 8 | *(uint *)(param_1 + 0x6c) & 0xfffff000 | uVar2;
              *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xff111fff | 0x111000;
              *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0xff111fff | 0x111000;
              *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) & 0xff333fff | 0x333000;
              *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xff333fff | 0x333000;
              *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xff333fff | 0x333000;
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}

// 00FBD480  FUN_00fbd480  size=705  [callgraph]
undefined4 __thiscall FUN_00fbd480(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00f9e770(param_2,param_3);
  if (iVar1 != 0) {
    iVar1 = FUN_00fa39a0(param_1 + 0x28,"g_Color_1_sampler");
    if (iVar1 != 0) {
      iVar1 = FUN_00fa39a0(param_1 + 0x40,"g_Normalmap_sampler");
      if (iVar1 != 0) {
        iVar1 = FUN_00fa39a0(param_1 + 0x4c,"g_Normalmap2_sampler");
        if (iVar1 != 0) {
          iVar1 = FUN_00fa39a0(param_1 + 0x94,"g_wightmap_sampler");
          if (iVar1 != 0) {
            iVar1 = FUN_00fa39a0(param_1 + 0x70,"g_CubeSampler");
            if (iVar1 != 0) {
              iVar1 = FUN_00fa39a0(param_1 + 0x7c,"g_CubeSampler2");
              if (iVar1 != 0) {
                iVar1 = FUN_00fa39a0(param_1 + 100,"g_OcclusionSampler");
                if (iVar1 != 0) {
                  uVar2 = 2;
                  iVar1 = 2;
                  if ((*(byte *)(param_1 + 0x33) & 0x1f) != 1) {
                    uVar2 = 3;
                    iVar1 = 3;
                  }
                  *(uint *)(param_1 + 0x30) =
                       iVar1 << 8 | *(uint *)(param_1 + 0x30) & 0xfffff020 | uVar2 | 0x20;
                  uVar2 = 2;
                  iVar1 = 2;
                  if ((*(byte *)(param_1 + 0x4b) & 0x1f) != 1) {
                    uVar2 = 3;
                    iVar1 = 3;
                  }
                  *(uint *)(param_1 + 0x48) =
                       iVar1 << 8 | *(uint *)(param_1 + 0x48) & 0xfffff020 | uVar2 | 0x20;
                  uVar2 = 2;
                  iVar1 = 2;
                  if ((*(byte *)(param_1 + 0x57) & 0x1f) != 1) {
                    uVar2 = 3;
                    iVar1 = 3;
                  }
                  *(uint *)(param_1 + 0x54) =
                       iVar1 << 8 | *(uint *)(param_1 + 0x54) & 0xfffff020 | uVar2 | 0x20;
                  uVar2 = 2;
                  iVar1 = 2;
                  if ((*(byte *)(param_1 + 0x9f) & 0x1f) != 1) {
                    uVar2 = 3;
                    iVar1 = 3;
                  }
                  *(uint *)(param_1 + 0x9c) =
                       iVar1 << 8 | *(uint *)(param_1 + 0x9c) & 0xfffff020 | uVar2 | 0x20;
                  uVar2 = 2;
                  iVar1 = 2;
                  if ((*(byte *)(param_1 + 0x7b) & 0x1f) != 1) {
                    uVar2 = 3;
                    iVar1 = 3;
                  }
                  *(uint *)(param_1 + 0x78) =
                       iVar1 << 8 | *(uint *)(param_1 + 0x78) & 0xfffff000 | uVar2;
                  uVar2 = 2;
                  iVar1 = 2;
                  if ((*(byte *)(param_1 + 0x87) & 0x1f) != 1) {
                    uVar2 = 3;
                    iVar1 = 3;
                  }
                  *(uint *)(param_1 + 0x84) =
                       iVar1 << 8 | *(uint *)(param_1 + 0x84) & 0xfffff000 | uVar2;
                  uVar2 = 2;
                  iVar1 = 2;
                  if ((*(byte *)(param_1 + 0x6f) & 0x1f) != 1) {
                    uVar2 = 3;
                    iVar1 = 3;
                  }
                  *(uint *)(param_1 + 0x6c) =
                       iVar1 << 8 | *(uint *)(param_1 + 0x6c) & 0xfffff000 | uVar2;
                  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xff111fff | 0x111000;
                  *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0xff111fff | 0x111000;
                  *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) & 0xff111fff | 0x111000;
                  *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) & 0xff111fff | 0x111000;
                  *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) & 0xff333fff | 0x333000;
                  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xff333fff | 0x333000;
                  *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xff333fff | 0x333000;
                  return 1;
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

// 00FBD750  FUN_00fbd750  size=800  [callgraph]
undefined4 __thiscall FUN_00fbd750(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00f9e770(param_2,param_3);
  if (iVar1 != 0) {
    iVar1 = FUN_00fa39a0(param_1 + 0x28,"g_Color_1_sampler");
    if (iVar1 != 0) {
      iVar1 = FUN_00fa39a0(param_1 + 0x40,"g_Normalmap_sampler");
      if (iVar1 != 0) {
        iVar1 = FUN_00fa39a0(param_1 + 0x4c,"g_Normalmap2_sampler");
        if (iVar1 != 0) {
          iVar1 = FUN_00fa39a0(param_1 + 0x94,"g_wightmap_sampler");
          if (iVar1 != 0) {
            iVar1 = FUN_00fa39a0(param_1 + 0x70,"g_CubeSampler");
            if (iVar1 != 0) {
              iVar1 = FUN_00fa39a0(param_1 + 0x7c,"g_CubeSampler2");
              if (iVar1 != 0) {
                iVar1 = FUN_00fa39a0(param_1 + 100,"g_OcclusionSampler");
                if (iVar1 != 0) {
                  iVar1 = FUN_00fa39a0(param_1 + 0x34,"g_NormalBlendSampler");
                  if (iVar1 != 0) {
                    uVar2 = 2;
                    iVar1 = 2;
                    if ((*(byte *)(param_1 + 0x33) & 0x1f) != 1) {
                      uVar2 = 3;
                      iVar1 = 3;
                    }
                    *(uint *)(param_1 + 0x30) =
                         iVar1 << 8 | *(uint *)(param_1 + 0x30) & 0xfffff020 | uVar2 | 0x20;
                    uVar2 = 2;
                    iVar1 = 2;
                    if ((*(byte *)(param_1 + 0x4b) & 0x1f) != 1) {
                      uVar2 = 3;
                      iVar1 = 3;
                    }
                    *(uint *)(param_1 + 0x48) =
                         iVar1 << 8 | *(uint *)(param_1 + 0x48) & 0xfffff020 | uVar2 | 0x20;
                    uVar2 = 2;
                    iVar1 = 2;
                    if ((*(byte *)(param_1 + 0x57) & 0x1f) != 1) {
                      uVar2 = 3;
                      iVar1 = 3;
                    }
                    *(uint *)(param_1 + 0x54) =
                         iVar1 << 8 | *(uint *)(param_1 + 0x54) & 0xfffff020 | uVar2 | 0x20;
                    uVar2 = 2;
                    iVar1 = 2;
                    if ((*(byte *)(param_1 + 0x9f) & 0x1f) != 1) {
                      uVar2 = 3;
                      iVar1 = 3;
                    }
                    *(uint *)(param_1 + 0x9c) =
                         iVar1 << 8 | *(uint *)(param_1 + 0x9c) & 0xfffff020 | uVar2 | 0x20;
                    uVar2 = 2;
                    iVar1 = 2;
                    if ((*(byte *)(param_1 + 0x7b) & 0x1f) != 1) {
                      uVar2 = 3;
                      iVar1 = 3;
                    }
                    *(uint *)(param_1 + 0x78) =
                         iVar1 << 8 | *(uint *)(param_1 + 0x78) & 0xfffff000 | uVar2;
                    uVar2 = 2;
                    iVar1 = 2;
                    if ((*(byte *)(param_1 + 0x87) & 0x1f) != 1) {
                      uVar2 = 3;
                      iVar1 = 3;
                    }
                    *(uint *)(param_1 + 0x84) =
                         iVar1 << 8 | *(uint *)(param_1 + 0x84) & 0xfffff000 | uVar2;
                    uVar2 = 2;
                    iVar1 = 2;
                    if ((*(byte *)(param_1 + 0x6f) & 0x1f) != 1) {
                      uVar2 = 3;
                      iVar1 = 3;
                    }
                    *(uint *)(param_1 + 0x6c) =
                         iVar1 << 8 | *(uint *)(param_1 + 0x6c) & 0xfffff000 | uVar2;
                    uVar2 = 2;
                    iVar1 = 2;
                    if ((*(byte *)(param_1 + 0x3f) & 0x1f) != 1) {
                      uVar2 = 3;
                      iVar1 = 3;
                    }
                    *(uint *)(param_1 + 0x3c) =
                         iVar1 << 8 | *(uint *)(param_1 + 0x3c) & 0xfffff020 | uVar2 | 0x20;
                    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xff111fff | 0x111000;
                    *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0xff111fff | 0x111000;
                    *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) & 0xff111fff | 0x111000;
                    *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) & 0xff111fff | 0x111000;
                    *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) & 0xff333fff | 0x333000;
                    *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xff333fff | 0x333000;
                    *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xff333fff | 0x333000;
                    *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) & 0xff111fff | 0x111000;
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
  return 0;
}

// 00FBDA70  FUN_00fbda70  size=249  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00fbdaef) */

undefined4 __fastcall FUN_00fbda70(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = FUN_00a281f0("ModelShaderBlur.pso");
  uVar2 = FUN_00a281f0("ModelShaderBlur.vso",uVar1);
  iVar3 = FUN_00fa01a0(uVar2,uVar1);
  if (((iVar3 != 0) && (iVar3 = FUN_00fa39a0(param_1 + 0x58,"g_Sampler0"), iVar3 != 0)) &&
     (iVar3 = FUN_00fa39a0(param_1 + 100,"g_Sampler1"), iVar3 != 0)) {
    uVar4 = *(uint *)(param_1 + 0x60);
    *(uint *)(param_1 + 0x60) = uVar4 & 0xe1ffffff | 0x1000000;
    *(uint *)(param_1 + 0x60) = uVar4 & 0xe1fff000 | 0x1000101;
    uVar4 = 2;
    iVar3 = 2;
    if ((*(byte *)(param_1 + 0x6f) & 0x1f) != 1) {
      uVar4 = 3;
      iVar3 = 3;
    }
    *(uint *)(param_1 + 0x6c) = iVar3 << 8 | *(uint *)(param_1 + 0x6c) & 0xfffff020 | uVar4 | 0x20;
    *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xff333fff | 0x333000;
    *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xff333fff | 0x333000;
    return 1;
  }
  return 0;
}

// 00FBDB70  FUN_00fbdb70  size=105  [callgraph]
void __fastcall FUN_00fbdb70(int param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x5c) = 0xd;
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xff333fff | 0x333000;
  *(undefined4 *)(param_1 + 0x68) = 0xe;
  *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xff333fff | 0x333000;
  uVar1 = FUN_00fa0740(0);
  FUN_00fa1d50(param_1 + 0x58,uVar1);
  uVar1 = FUN_00fa0740(0);
  FUN_00fa1d50(param_1 + 100,uVar1);
  return;
}

// 00FBDD00  FUN_00fbdd00  size=157  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00fbdd6b) */

undefined4 __fastcall FUN_00fbdd00(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar2 = FUN_00a281f0("FilterShaderSun.pso");
  uVar3 = FUN_00a281f0("ModelShaderBlur.vso",uVar2);
  iVar4 = FUN_00fa01a0(uVar3,uVar2);
  if ((iVar4 != 0) && (iVar4 = FUN_00fa39a0(param_1 + 0x28,"g_Sampler0"), iVar4 != 0)) {
    uVar1 = *(uint *)(param_1 + 0x30);
    *(uint *)(param_1 + 0x30) = uVar1 & 0xe1ffffff | 0x1000000;
    *(uint *)(param_1 + 0x30) = uVar1 & 0xe1fff000 | 0x1000101;
    *(uint *)(param_1 + 0x30) = uVar1 & 0xe1333000 | 0x1333101;
    return 1;
  }
  return 0;
}

// 00FBDDA0  FUN_00fbdda0  size=357  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00fbde67) */
/* WARNING: Removing unreachable block (ram,0x00fbde24) */
/* WARNING: Removing unreachable block (ram,0x00fbdeab) */

undefined4 __thiscall FUN_00fbdda0(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_00fa01a0(param_2,param_3);
  if ((((iVar2 != 0) && (iVar2 = FUN_00fa39a0(param_1 + 0x28,"g_Sampler0"), iVar2 != 0)) &&
      (iVar2 = FUN_00fa39a0(param_1 + 0x34,"g_Sampler1"), iVar2 != 0)) &&
     (iVar2 = FUN_00fa39a0(param_1 + 0x40,"g_Sampler2"), iVar2 != 0)) {
    uVar1 = *(uint *)(param_1 + 0x30);
    *(uint *)(param_1 + 0x30) = uVar1 & 0xe1ffffff | 0x1000000;
    *(uint *)(param_1 + 0x30) = uVar1 & 0xe1fff000 | 0x1000101;
    uVar1 = *(uint *)(param_1 + 0x3c);
    *(uint *)(param_1 + 0x3c) = uVar1 & 0xe1ffffff | 0x1000000;
    *(uint *)(param_1 + 0x3c) = uVar1 & 0xe1fff000 | 0x1000101;
    uVar1 = *(uint *)(param_1 + 0x48);
    *(uint *)(param_1 + 0x48) = uVar1 & 0xe1ffffff | 0x1000000;
    *(uint *)(param_1 + 0x48) = uVar1 & 0xe1fff000 | 0x1000101;
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xff333fff | 0x333000;
    *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) & 0xff333fff | 0x333000;
    *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0xff111fff | 0x111000;
    return 1;
  }
  return 0;
}

// 00FBDF10  FUN_00fbdf10  size=254  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00fbdf80) */
/* WARNING: Removing unreachable block (ram,0x00fbdfc4) */

undefined4 __thiscall FUN_00fbdf10(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_00fa01a0(param_2,param_3);
  if (((iVar2 != 0) && (iVar2 = FUN_00fa39a0(param_1 + 0x28,"g_Sampler0"), iVar2 != 0)) &&
     (iVar2 = FUN_00fa39a0(param_1 + 0x34,"g_Sampler1"), iVar2 != 0)) {
    uVar1 = *(uint *)(param_1 + 0x30);
    *(uint *)(param_1 + 0x30) = uVar1 & 0xe1ffffff | 0x1000000;
    *(uint *)(param_1 + 0x30) = uVar1 & 0xe1fff000 | 0x1000101;
    uVar1 = *(uint *)(param_1 + 0x3c);
    *(uint *)(param_1 + 0x3c) = uVar1 & 0xe1ffffff | 0x1000000;
    *(uint *)(param_1 + 0x3c) = uVar1 & 0xe1fff000 | 0x1000101;
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xff333fff | 0x333000;
    *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) & 0xff333fff | 0x333000;
    return 1;
  }
  return 0;
}

// 00FBE180  FUN_00fbe180  size=157  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00fbe1eb) */

undefined4 __fastcall FUN_00fbe180(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar2 = FUN_00a281f0("FilterShaderSSAOGradation.pso");
  uVar3 = FUN_00a281f0("ModelShaderBlur.vso",uVar2);
  iVar4 = FUN_00fa01a0(uVar3,uVar2);
  if ((iVar4 != 0) && (iVar4 = FUN_00fa39a0(param_1 + 0x28,"g_Sampler0"), iVar4 != 0)) {
    uVar1 = *(uint *)(param_1 + 0x30);
    *(uint *)(param_1 + 0x30) = uVar1 & 0xe1ffffff | 0x1000000;
    *(uint *)(param_1 + 0x30) = uVar1 & 0xe1fff000 | 0x1000101;
    *(uint *)(param_1 + 0x30) = uVar1 & 0xe1333000 | 0x1333101;
    return 1;
  }
  return 0;
}

// 00FBE220  FUN_00fbe220  size=157  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00fbe28b) */

undefined4 __fastcall FUN_00fbe220(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar2 = FUN_00a281f0("FilterShaderSSAOGauss.pso");
  uVar3 = FUN_00a281f0("FilterShaderSSAOGauss.vso",uVar2);
  iVar4 = FUN_00fa01a0(uVar3,uVar2);
  if ((iVar4 != 0) && (iVar4 = FUN_00fa39a0(param_1 + 0x28,"g_Sampler0"), iVar4 != 0)) {
    uVar1 = *(uint *)(param_1 + 0x30);
    *(uint *)(param_1 + 0x30) = uVar1 & 0xe1ffffff | 0x1000000;
    *(uint *)(param_1 + 0x30) = uVar1 & 0xe1fff000 | 0x1000101;
    *(uint *)(param_1 + 0x30) = uVar1 & 0xe1333000 | 0x1333101;
    return 1;
  }
  return 0;
}

// 00FBE2C0  FUN_00fbe2c0  size=254  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00fbe340) */
/* WARNING: Removing unreachable block (ram,0x00fbe38f) */

undefined4 __fastcall FUN_00fbe2c0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar2 = FUN_00a281f0("FilterShaderHDAO.pso");
  uVar3 = FUN_00a281f0("FilterShaderHDAO.vso",uVar2);
  iVar4 = FUN_00fa01a0(uVar3,uVar2);
  if (((iVar4 != 0) && (iVar4 = FUN_00fa39a0(param_1 + 0x28,"g_SamplerTexture[0]"), iVar4 != 0)) &&
     (iVar4 = FUN_00fa39a0(param_1 + 0x34,"g_SamplerTexture[1]"), iVar4 != 0)) {
    uVar1 = *(uint *)(param_1 + 0x30);
    *(uint *)(param_1 + 0x30) = uVar1 & 0xe1ffffff | 0x1000000;
    *(uint *)(param_1 + 0x30) = uVar1 & 0xe1333000 | 0x1333101;
    uVar1 = *(uint *)(param_1 + 0x3c);
    *(uint *)(param_1 + 0x3c) = uVar1 & 0xe1ffffff | 0x1000000;
    *(uint *)(param_1 + 0x3c) = uVar1 & 0xe1333000 | 0x1333101;
    return 1;
  }
  return 0;
}

// 00FBE3C0  FUN_00fbe3c0  size=1175  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00fbe3c0(void)

{
  undefined4 uVar1;
  int iVar2;
  float10 fVar3;
  float local_100;
  float local_fc;
  float local_f8;
  undefined4 local_f4;
  float local_e4;
  undefined1 local_e0 [64];
  undefined1 local_a0 [64];
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)&stack0xfffffff0;
  local_e4 = (float)FUN_00f98a80(1);
  local_e4 = (float)FUN_00f98a70((float)(int)local_e4);
  FUN_00eadf00(local_e0,local_a0,0,0,(float)(int)local_e4);
  D3DXMatrixMultiply(local_60,local_a0,local_e0);
  FUN_00f9e7b0(0x18,local_60);
  uVar1 = _DAT_01f6c928;
  local_e4 = _DAT_01f6c934 * 0.5;
  fVar3 = (float10)FUN_00fe0ac0();
  local_f8 = (float)fVar3;
  local_100 = 1.0;
  local_fc = (float)uVar1;
  local_f4 = 0;
  local_e4 = local_f8;
  iVar2 = FUN_00f99540(0xae,&local_100,4);
  if (iVar2 == 0) {
    DAT_01f131b0 = local_100;
    DAT_01f131b4 = local_fc;
    DAT_01f131b8 = local_f8;
    DAT_01f131bc = local_f4;
    FUN_00f99620(0xae,&DAT_01f131b0,4);
  }
  local_100 = _DAT_01b83db0;
  iVar2 = FUN_00f99540(0xaf,&local_100,4);
  if (iVar2 == 0) {
    DAT_01f131c0 = local_100;
    DAT_01f131c4 = local_fc;
    DAT_01f131c8 = local_f8;
    DAT_01f131cc = local_f4;
    FUN_00f99620(0xaf,&DAT_01f131c0,4);
  }
  local_100 = _DAT_01b83db4 * 0.0001;
  iVar2 = FUN_00f99540(0xb0,&local_100,4);
  if (iVar2 == 0) {
    DAT_01f131d0 = local_100;
    DAT_01f131d4 = local_fc;
    DAT_01f131d8 = local_f8;
    DAT_01f131dc = local_f4;
    FUN_00f99620(0xb0,&DAT_01f131d0,4);
  }
  local_100 = _DAT_01b83db8 * 0.0001;
  iVar2 = FUN_00f99540(0xb1,&local_100,4);
  if (iVar2 == 0) {
    DAT_01f131e0 = local_100;
    DAT_01f131e4 = local_fc;
    DAT_01f131e8 = local_f8;
    DAT_01f131ec = local_f4;
    FUN_00f99620(0xb1,&DAT_01f131e0,4);
  }
  local_100 = _DAT_01b83dbc;
  iVar2 = FUN_00f99540(0xb2,&local_100,4);
  if (iVar2 == 0) {
    _DAT_01f131f0 = local_100;
    _DAT_01f131f4 = local_fc;
    _DAT_01f131f8 = local_f8;
    _DAT_01f131fc = local_f4;
    FUN_00f99620(0xb2,&DAT_01f131f0,4);
  }
  local_e4 = _DAT_01b83dc0 * 0.017453292;
  fVar3 = (float10)FUN_00fded30();
  local_100 = (float)fVar3;
  local_e4 = local_100;
  iVar2 = FUN_00f99540(0xb3,&local_100,4);
  if (iVar2 == 0) {
    _DAT_01f13200 = local_100;
    _DAT_01f13204 = local_fc;
    _DAT_01f13208 = local_f8;
    _DAT_01f1320c = local_f4;
    FUN_00f99620(0xb3,&DAT_01f13200,4);
  }
  local_100 = _DAT_01b83dc4;
  iVar2 = FUN_00f99540(0xb4,&local_100,4);
  if (iVar2 == 0) {
    _DAT_01f13210 = local_100;
    _DAT_01f13214 = local_fc;
    _DAT_01f13218 = local_f8;
    _DAT_01f1321c = local_f4;
    FUN_00f99620(0xb4,&DAT_01f13210,4);
  }
  local_e4 = (float)FUN_00f98a70();
  local_100 = (float)(int)local_e4;
  local_e4 = (float)FUN_00f98a80();
  local_fc = (float)(int)local_e4;
  iVar2 = FUN_00f99540(0xb5,&local_100,4);
  if (iVar2 == 0) {
    _DAT_01f13220 = local_100;
    _DAT_01f13224 = local_fc;
    _DAT_01f13228 = local_f8;
    _DAT_01f1322c = local_f4;
    FUN_00f99620(0xb5,&DAT_01f13220,4);
  }
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffff0);
  return;
}

// 00FBE860  FUN_00fbe860  size=139  [callgraph]
undefined4 __fastcall FUN_00fbe860(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = FUN_00a281f0("ModelShaderBlurPass2.pso");
  uVar3 = FUN_00a281f0("ModelShaderBlurPass2.vso",uVar2);
  iVar4 = FUN_00fa01a0(uVar3,uVar2);
  if (iVar4 != 0) {
    iVar4 = FUN_00fa39a0(param_1 + 0x28,"g_Sampler0");
    if (iVar4 != 0) {
      uVar5 = 2;
      iVar4 = 2;
      if ((*(byte *)(param_1 + 0x33) & 0x1f) != 1) {
        uVar5 = 3;
        iVar4 = 3;
      }
      uVar1 = *(uint *)(param_1 + 0x30);
      *(uint *)(param_1 + 0x30) = iVar4 << 8 | uVar1 & 0xfffff020 | uVar5 | 0x20;
      *(uint *)(param_1 + 0x30) = iVar4 << 8 | uVar1 & 0xff333020 | uVar5 | 0x333020;
      return 1;
    }
  }
  return 0;
}

// 00FBE8F0  FUN_00fbe8f0  size=249  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00fbe9a4) */

undefined4 __fastcall FUN_00fbe8f0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = FUN_00a281f0("ModelShaderBlurPass3.pso");
  uVar2 = FUN_00a281f0("ModelShaderBlurPass3.vso",uVar1);
  iVar3 = FUN_00fa01a0(uVar2,uVar1);
  if (((iVar3 != 0) && (iVar3 = FUN_00fa39a0(param_1 + 0x28,"g_Sampler0"), iVar3 != 0)) &&
     (iVar3 = FUN_00fa39a0(param_1 + 0x34,"g_Sampler1"), iVar3 != 0)) {
    uVar4 = 2;
    iVar3 = 2;
    if ((*(byte *)(param_1 + 0x33) & 0x1f) != 1) {
      uVar4 = 3;
      iVar3 = 3;
    }
    *(uint *)(param_1 + 0x30) = iVar3 << 8 | *(uint *)(param_1 + 0x30) & 0xfffff020 | uVar4 | 0x20;
    uVar4 = *(uint *)(param_1 + 0x3c);
    *(uint *)(param_1 + 0x3c) = uVar4 & 0xe1ffffff | 0x1000000;
    *(uint *)(param_1 + 0x3c) = uVar4 & 0xe1fff000 | 0x1000101;
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xff333fff | 0x333000;
    *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) & 0xff333fff | 0x333000;
    return 1;
  }
  return 0;
}

// 00FBE9F0  FUN_00fbe9f0  size=436  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00fbead9) */
/* WARNING: Removing unreachable block (ram,0x00fbea96) */
/* WARNING: Removing unreachable block (ram,0x00fbeb1d) */

bool __fastcall FUN_00fbe9f0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar2 = FUN_00a281f0("ModelShaderBlurPass4.pso");
  uVar3 = FUN_00a281f0("ModelShaderBlurPass4.vso",uVar2);
  iVar4 = FUN_00fa01a0(uVar3,uVar2);
  if ((((iVar4 != 0) && (iVar4 = FUN_00f9e6d0(param_1 + 0x28,"g_WorldViewProjMatrix"), iVar4 != 0))
      && (iVar4 = FUN_00fa39a0(param_1 + 0x4c,"g_AmbientSampler"), iVar4 != 0)) &&
     ((iVar4 = FUN_00fa39a0(param_1 + 0x58,"g_LightSampler"), iVar4 != 0 &&
      (iVar4 = FUN_00fa39a0(param_1 + 100,"g_ZSampler"), iVar4 != 0)))) {
    uVar1 = *(uint *)(param_1 + 0x54);
    *(uint *)(param_1 + 0x54) = uVar1 & 0xe1ffffff | 0x1000000;
    *(uint *)(param_1 + 0x54) = uVar1 & 0xe1fff000 | 0x1000101;
    uVar1 = *(uint *)(param_1 + 0x60);
    *(uint *)(param_1 + 0x60) = uVar1 & 0xe1ffffff | 0x1000000;
    *(uint *)(param_1 + 0x60) = uVar1 & 0xe1fff000 | 0x1000101;
    uVar1 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar1 & 0xe1ffffff | 0x1000000;
    *(uint *)(param_1 + 0x6c) = uVar1 & 0xe1fff000 | 0x1000101;
    *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) & 0xff333fff | 0x333000;
    *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xff333fff | 0x333000;
    *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xff333fff | 0x333000;
    *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) & 0x7fffffff;
    iVar4 = FUN_00f9e6d0(param_1 + 0x34,"g_preFogEnhanceColor");
    if (iVar4 != 0) {
      iVar4 = FUN_00f9e6d0(param_1 + 0x40,"g_MatrialColor");
      return iVar4 != 0;
    }
  }
  return false;
}

// 00FBEBB0  FUN_00fbebb0  size=194  [callgraph]
undefined4 __thiscall FUN_00fbebb0(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (param_2 != 0) + 1;
  if (uVar1 != 3) {
    if (uVar1 == 1) {
      *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) & 0xe1ffffff | 0x1000000;
    }
    uVar2 = uVar1;
    if ((*(byte *)(param_1 + 0x57) & 0x1f) != 1) {
      uVar2 = 3;
    }
    *(uint *)(param_1 + 0x54) =
         (uVar2 << 4 | uVar1) << 4 | *(uint *)(param_1 + 0x54) & 0xfffff000 | uVar2;
  }
  if (uVar1 != 3) {
    if (uVar1 == 1) {
      *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xe1ffffff | 0x1000000;
    }
    uVar2 = uVar1;
    if ((*(byte *)(param_1 + 99) & 0x1f) != 1) {
      uVar2 = 3;
    }
    *(uint *)(param_1 + 0x60) =
         (uVar2 << 4 | uVar1) << 4 | *(uint *)(param_1 + 0x60) & 0xfffff000 | uVar2;
  }
  return 1;
}

// 00FBEC80  FUN_00fbec80  size=152  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00fbecf2) */

undefined4 __fastcall FUN_00fbec80(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar2 = FUN_00a281f0("ModelShaderBlurPass5.pso");
  uVar3 = FUN_00a281f0("ModelShaderBlurPass5.vso",uVar2);
  iVar4 = FUN_00fa01a0(uVar3,uVar2);
  if ((iVar4 != 0) && (iVar4 = FUN_00fa39a0(param_1 + 0x28,"g_Sampler0"), iVar4 != 0)) {
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0x7fffffff;
    uVar1 = *(uint *)(param_1 + 0x30);
    *(uint *)(param_1 + 0x30) = uVar1 & 0xe1ffffff | 0x1000000;
    *(uint *)(param_1 + 0x30) = uVar1 & 0xe1fff010 | 0x1000111;
    return 1;
  }
  return 0;
}

// 00FBEDB0  FUN_00fbedb0  size=39  [callgraph]
undefined4 * __thiscall FUN_00fbedb0(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_016f23d0;
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FBEDE0  FUN_00fbede0  size=148  [callgraph]
undefined4 __thiscall FUN_00fbede0(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = FUN_00f9e770(param_2,param_3);
  if (iVar2 != 0) {
    iVar2 = FUN_00fa39a0(param_1 + 0x28,"g_Sampler0");
    if (iVar2 != 0) {
      iVar2 = FUN_00f9e6d0(param_1 + 0x34,"g_uvOffset");
      if (iVar2 != 0) {
        uVar3 = 2;
        iVar2 = 2;
        if ((*(byte *)(param_1 + 0x33) & 0x1f) != 1) {
          uVar3 = 3;
          iVar2 = 3;
        }
        uVar1 = *(uint *)(param_1 + 0x30);
        *(uint *)(param_1 + 0x30) = iVar2 << 8 | uVar1 & 0xfffff020 | uVar3 | 0x20;
        *(uint *)(param_1 + 0x30) = iVar2 << 8 | uVar1 & 0xff111020 | uVar3 | 0x111020;
        return 1;
      }
    }
  }
  return 0;
}

// 00FBEE80  FUN_00fbee80  size=48  [callgraph]
void __thiscall FUN_00fbee80(int param_1,byte param_2)

{
  *(uint *)(param_1 + 0x30) =
       *(uint *)(param_1 + 0x30) ^ ((uint)param_2 << 0x18 ^ *(uint *)(param_1 + 0x30)) & 0x1f000000;
  if (param_2 != 1) {
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xfffff3f3 | 0x303;
  }
  return;
}

// 00FBEEB0  FUN_00fbeeb0  size=175  [callgraph]
bool __thiscall FUN_00fbeeb0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00f9e770(param_2,param_3);
  if (iVar1 != 0) {
    iVar1 = FUN_00fa39a0(param_1 + 0x28,"g_Sampler0");
    if (iVar1 != 0) {
      uVar2 = 2;
      iVar1 = 2;
      if ((*(byte *)(param_1 + 0x33) & 0x1f) != 1) {
        uVar2 = 3;
        iVar1 = 3;
      }
      *(uint *)(param_1 + 0x30) = iVar1 << 8 | *(uint *)(param_1 + 0x30) & 0xfffff020 | uVar2 | 0x20
      ;
      iVar1 = FUN_00f9e6d0(param_1 + 0x68,"g_VecRate");
      if (iVar1 != 0) {
        iVar1 = FUN_00f9e6d0(param_1 + 0x74,"g_maskStart");
        if (iVar1 != 0) {
          iVar1 = FUN_00f9e6d0(param_1 + 0x80,"g_maskEnd");
          return iVar1 != 0;
        }
      }
    }
  }
  return false;
}

// 00FBEF60  FUN_00fbef60  size=128  [callgraph]
undefined4 __thiscall FUN_00fbef60(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = FUN_00fa01a0(param_2,param_3);
  if (iVar2 != 0) {
    iVar2 = FUN_00fa39a0(param_1 + 0x28,"Color_1_sampler");
    if (iVar2 != 0) {
      uVar3 = 2;
      iVar2 = 2;
      if ((*(byte *)(param_1 + 0x33) & 0x1f) != 1) {
        uVar3 = 3;
        iVar2 = 3;
      }
      uVar1 = *(uint *)(param_1 + 0x30);
      *(uint *)(param_1 + 0x30) = iVar2 << 8 | uVar1 & 0xfffff020 | uVar3 | 0x20;
      *(uint *)(param_1 + 0x30) = iVar2 << 8 | uVar1 & 0xff333020 | uVar3 | 0x333020;
      return 1;
    }
  }
  return 0;
}

// 00FBEFE0  FUN_00fbefe0  size=803  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00fbf1ac) */
/* WARNING: Removing unreachable block (ram,0x00fbf126) */
/* WARNING: Removing unreachable block (ram,0x00fbf0a0) */
/* WARNING: Removing unreachable block (ram,0x00fbf0e3) */
/* WARNING: Removing unreachable block (ram,0x00fbf169) */
/* WARNING: Removing unreachable block (ram,0x00fbf1f0) */

bool __thiscall FUN_00fbefe0(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_00fa01a0(param_2,param_3);
  if (((((iVar2 != 0) && (iVar2 = FUN_00fa39a0(param_1 + 0x28,"g_AlbedoSampler"), iVar2 != 0)) &&
       (iVar2 = FUN_00fa39a0(param_1 + 0x34,"g_NormalSampler"), iVar2 != 0)) &&
      ((iVar2 = FUN_00fa39a0(param_1 + 0x40,"g_SpecMaskSampler"), iVar2 != 0 &&
       (iVar2 = FUN_00fa39a0(param_1 + 0x58,"g_specPow"), iVar2 != 0)))) &&
     ((iVar2 = FUN_00fa39a0(param_1 + 100,"g_Z_ShadowSampler"), iVar2 != 0 &&
      (iVar2 = FUN_00fa39a0(param_1 + 0x4c,"g_Z_ShadowSampler2"), iVar2 != 0)))) {
    uVar1 = *(uint *)(param_1 + 0x30);
    *(uint *)(param_1 + 0x30) = uVar1 & 0xe1ffffff | 0x1000000;
    *(uint *)(param_1 + 0x30) = uVar1 & 0xe1fff000 | 0x1000101;
    uVar1 = *(uint *)(param_1 + 0x3c);
    *(uint *)(param_1 + 0x3c) = uVar1 & 0xe1ffffff | 0x1000000;
    *(uint *)(param_1 + 0x3c) = uVar1 & 0xe1fff000 | 0x1000101;
    uVar1 = *(uint *)(param_1 + 0x48);
    *(uint *)(param_1 + 0x48) = uVar1 & 0xe1ffffff | 0x1000000;
    *(uint *)(param_1 + 0x48) = uVar1 & 0xe1fff000 | 0x1000101;
    uVar1 = *(uint *)(param_1 + 0x54);
    *(uint *)(param_1 + 0x54) = uVar1 & 0xe1ffffff | 0x1000000;
    *(uint *)(param_1 + 0x54) = uVar1 & 0xe1fff000 | 0x1000101;
    uVar1 = *(uint *)(param_1 + 0x60);
    *(uint *)(param_1 + 0x60) = uVar1 & 0xe1ffffff | 0x1000000;
    *(uint *)(param_1 + 0x60) = uVar1 & 0xe1fff000 | 0x1000101;
    uVar1 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar1 & 0xe1ffffff | 0x1000000;
    *(uint *)(param_1 + 0x6c) = uVar1 & 0xe1fff000 | 0x1000101;
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xff333fff | 0x333000;
    *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) & 0xff333fff | 0x333000;
    *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0xff333fff | 0x333000;
    *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) & 0xff333fff | 0x333000;
    *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xff333fff | 0x333000;
    *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xff333fff | 0x333000;
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0x7fffffff;
    *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0x7fffffff;
    iVar2 = FUN_00f9e6d0(param_1 + 0x70,"g_lightCol");
    if ((((iVar2 != 0) && (iVar2 = FUN_00f9e6d0(param_1 + 0x7c,"g_lightDir"), iVar2 != 0)) &&
        (iVar2 = FUN_00f9e6d0(param_1 + 0x94,"prefogcolor_enhance"), iVar2 != 0)) &&
       (iVar2 = FUN_00f9e6d0(param_1 + 0xb8,"g_finalColor_enhance"), iVar2 != 0)) {
      iVar2 = FUN_00f9e6d0(param_1 + 0x88,"g_ProjMtx");
      return iVar2 != 0;
    }
  }
  return false;
}

// 00FBF310  FUN_00fbf310  size=268  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00fbf36f) */
/* WARNING: Removing unreachable block (ram,0x00fbf3e4) */

undefined4 __thiscall FUN_00fbf310(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  
  FUN_00fbefe0(param_2,param_3);
  iVar2 = FUN_00fa39a0(param_1 + 0xc4,"g_SignSampler");
  if (iVar2 == 0) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 0xcc);
  *(uint *)(param_1 + 0xcc) = uVar1 & 0xe1ffffff | 0x1000000;
  *(uint *)(param_1 + 0xcc) = uVar1 & 0xe1333000 | 0x1333101;
  iVar2 = FUN_00fa39a0(param_1 + 0xd0,"g_NormalSampler2");
  if (iVar2 != 0) {
    uVar1 = *(uint *)(param_1 + 0xd8);
    *(uint *)(param_1 + 0xd8) = uVar1 & 0xe1ffffff | 0x1000000;
    *(uint *)(param_1 + 0xd8) = uVar1 & 0xe1333000 | 0x1333101;
    return 1;
  }
  return 0;
}

// 00FBF420  FUN_00fbf420  size=754  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00fbf595) */
/* WARNING: Removing unreachable block (ram,0x00fbf50f) */
/* WARNING: Removing unreachable block (ram,0x00fbf4cc) */
/* WARNING: Removing unreachable block (ram,0x00fbf552) */
/* WARNING: Removing unreachable block (ram,0x00fbf5d9) */

bool __thiscall FUN_00fbf420(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_00fa01a0(param_2,param_3);
  if ((((iVar2 != 0) && (iVar2 = FUN_00fa39a0(param_1 + 0x28,"g_AlbedoSampler"), iVar2 != 0)) &&
      (iVar2 = FUN_00fa39a0(param_1 + 0x34,"g_NormalSampler"), iVar2 != 0)) &&
     (((iVar2 = FUN_00fa39a0(param_1 + 0x40,"g_SpecMaskSampler"), iVar2 != 0 &&
       (iVar2 = FUN_00fa39a0(param_1 + 0x58,"g_specPow"), iVar2 != 0)) &&
      (iVar2 = FUN_00fa39a0(param_1 + 100,"g_Z_ShadowSampler"), iVar2 != 0)))) {
    uVar1 = *(uint *)(param_1 + 0x30);
    *(uint *)(param_1 + 0x30) = uVar1 & 0xe1ffffff | 0x1000000;
    *(uint *)(param_1 + 0x30) = uVar1 & 0xe1fff000 | 0x1000101;
    uVar1 = *(uint *)(param_1 + 0x3c);
    *(uint *)(param_1 + 0x3c) = uVar1 & 0xe1ffffff | 0x1000000;
    *(uint *)(param_1 + 0x3c) = uVar1 & 0xe1fff000 | 0x1000101;
    uVar1 = *(uint *)(param_1 + 0x48);
    *(uint *)(param_1 + 0x48) = uVar1 & 0xe1ffffff | 0x1000000;
    *(uint *)(param_1 + 0x48) = uVar1 & 0xe1fff000 | 0x1000101;
    uVar1 = *(uint *)(param_1 + 0x60);
    *(uint *)(param_1 + 0x60) = uVar1 & 0xe1ffffff | 0x1000000;
    *(uint *)(param_1 + 0x60) = uVar1 & 0xe1fff000 | 0x1000101;
    uVar1 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar1 & 0xe1ffffff | 0x1000000;
    *(uint *)(param_1 + 0x6c) = uVar1 & 0xe1fff000 | 0x1000101;
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xff333fff | 0x333000;
    *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) & 0xff333fff | 0x333000;
    *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0xff333fff | 0x333000;
    *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xff333fff | 0x333000;
    *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xff333fff | 0x333000;
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0x7fffffff;
    *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0x7fffffff;
    iVar2 = FUN_00f9e6d0(param_1 + 0x70,"g_lightCol");
    if (((iVar2 != 0) && (iVar2 = FUN_00f9e6d0(param_1 + 0x7c,"g_lightPos"), iVar2 != 0)) &&
       ((iVar2 = FUN_00f9e6d0(param_1 + 0x94,"prefogcolor_enhance"), iVar2 != 0 &&
        (((iVar2 = FUN_00f9e6d0(param_1 + 0xb8,"g_finalColor_enhance"), iVar2 != 0 &&
          (iVar2 = FUN_00f9e6d0(param_1 + 0x88,"g_ProjMtx"), iVar2 != 0)) &&
         (iVar2 = FUN_00f9e6d0(param_1 + 0xd0,"g_spot_angle"), iVar2 != 0)))))) {
      iVar2 = FUN_00f9e6d0(param_1 + 0xc4,"g_spot_param");
      return iVar2 != 0;
    }
  }
  return false;
}

// 00FBF720  FUN_00fbf720  size=149  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00fbf780) */

undefined4 __thiscall FUN_00fbf720(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  
  FUN_00fbf420(param_2,param_3);
  iVar2 = FUN_00fa39a0(param_1 + 0xdc,"g_SignSampler");
  if (iVar2 != 0) {
    uVar1 = *(uint *)(param_1 + 0xe4);
    *(uint *)(param_1 + 0xe4) = uVar1 & 0xe1ffffff | 0x1000000;
    *(uint *)(param_1 + 0xe4) = uVar1 & 0xe1333000 | 0x1333101;
    return 1;
  }
  return 0;
}

// 00FBF7C0  FUN_00fbf7c0  size=467  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00fbf8de) */
/* WARNING: Removing unreachable block (ram,0x00fbf858) */
/* WARNING: Removing unreachable block (ram,0x00fbf89b) */
/* WARNING: Removing unreachable block (ram,0x00fbf922) */

undefined4 __thiscall FUN_00fbf7c0(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_00fa01a0(param_2,param_3);
  if ((((iVar2 != 0) && (iVar2 = FUN_00fa39a0(param_1 + 0x28,"g_AmbientSampler"), iVar2 != 0)) &&
      (iVar2 = FUN_00fa39a0(param_1 + 0x34,"g_LightSampler"), iVar2 != 0)) &&
     ((iVar2 = FUN_00fa39a0(param_1 + 0x40,"g_ZSampler"), iVar2 != 0 &&
      (iVar2 = FUN_00fa39a0(param_1 + 0x4c,"g_FogSignSampler"), iVar2 != 0)))) {
    uVar1 = *(uint *)(param_1 + 0x30);
    *(uint *)(param_1 + 0x30) = uVar1 & 0xe1ffffff | 0x1000000;
    *(uint *)(param_1 + 0x30) = uVar1 & 0xe1fff000 | 0x1000101;
    uVar1 = *(uint *)(param_1 + 0x3c);
    *(uint *)(param_1 + 0x3c) = uVar1 & 0xe1ffffff | 0x1000000;
    *(uint *)(param_1 + 0x3c) = uVar1 & 0xe1fff000 | 0x1000101;
    uVar1 = *(uint *)(param_1 + 0x48);
    *(uint *)(param_1 + 0x48) = uVar1 & 0xe1ffffff | 0x1000000;
    *(uint *)(param_1 + 0x48) = uVar1 & 0xe1fff000 | 0x1000101;
    uVar1 = *(uint *)(param_1 + 0x54);
    *(uint *)(param_1 + 0x54) = uVar1 & 0xe1ffffff | 0x1000000;
    *(uint *)(param_1 + 0x54) = uVar1 & 0xe1fff000 | 0x1000101;
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xff333fff | 0x333000;
    *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) & 0xff333fff | 0x333000;
    *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0xff333fff | 0x333000;
    *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) & 0xff333fff | 0x333000;
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0x7fffffff;
    return 1;
  }
  return 0;
}

// 00FBFB50  FUN_00fbfb50  size=444  [callgraph]
undefined4 __fastcall FUN_00fbfb50(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = FUN_00a281f0("HexagonalBlur1.pso");
  uVar2 = FUN_00a281f0("ModelShaderBlur.vso",uVar1);
  iVar3 = FUN_00fa01a0(uVar2,uVar1);
  if (iVar3 != 0) {
    iVar3 = FUN_00fa39a0(param_1 + 0x28,"g_Sampler0");
    if (iVar3 != 0) {
      iVar3 = FUN_00fa39a0(param_1 + 0x34,"g_Sampler1");
      if (iVar3 != 0) {
        uVar4 = 2;
        iVar3 = 2;
        if ((*(byte *)(param_1 + 0x33) & 0x1f) != 1) {
          uVar4 = 3;
          iVar3 = 3;
        }
        *(uint *)(param_1 + 0x30) =
             iVar3 << 8 | *(uint *)(param_1 + 0x30) & 0xfffff020 | uVar4 | 0x20;
        uVar4 = 2;
        iVar3 = 2;
        if ((*(byte *)(param_1 + 0x3f) & 0x1f) != 1) {
          uVar4 = 3;
          iVar3 = 3;
        }
        *(uint *)(param_1 + 0x3c) =
             iVar3 << 8 | *(uint *)(param_1 + 0x3c) & 0xfffff020 | uVar4 | 0x20;
        uVar4 = 2;
        iVar3 = 2;
        if ((*(byte *)(param_1 + 0x4b) & 0x1f) != 1) {
          uVar4 = 3;
          iVar3 = 3;
        }
        *(uint *)(param_1 + 0x48) =
             iVar3 << 8 | *(uint *)(param_1 + 0x48) & 0xfffff020 | uVar4 | 0x20;
        uVar4 = 2;
        iVar3 = 2;
        if ((*(byte *)(param_1 + 0x57) & 0x1f) != 1) {
          uVar4 = 3;
          iVar3 = 3;
        }
        *(uint *)(param_1 + 0x54) =
             iVar3 << 8 | *(uint *)(param_1 + 0x54) & 0xfffff020 | uVar4 | 0x20;
        uVar4 = 2;
        iVar3 = 2;
        if ((*(byte *)(param_1 + 99) & 0x1f) != 1) {
          uVar4 = 3;
          iVar3 = 3;
        }
        *(uint *)(param_1 + 0x60) =
             iVar3 << 8 | *(uint *)(param_1 + 0x60) & 0xfffff020 | uVar4 | 0x20;
        *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xff333fff | 0x333000;
        *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) & 0xff333fff | 0x333000;
        *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0xff333fff | 0x333000;
        *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) & 0xff333fff | 0x333000;
        *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xff333fff | 0x333000;
        return 1;
      }
    }
  }
  return 0;
}

// 00FBFD10  FUN_00fbfd10  size=304  [callgraph]
undefined4 __fastcall FUN_00fbfd10(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = FUN_00a281f0("HexagonalBlur2.pso");
  uVar2 = FUN_00a281f0("ModelShaderBlur.vso",uVar1);
  iVar3 = FUN_00fa01a0(uVar2,uVar1);
  if (iVar3 != 0) {
    iVar3 = FUN_00fa39a0(param_1 + 0x28,"g_Sampler0");
    if (iVar3 != 0) {
      iVar3 = FUN_00fa39a0(param_1 + 0x34,"g_Sampler1");
      if (iVar3 != 0) {
        uVar4 = 2;
        iVar3 = 2;
        if ((*(byte *)(param_1 + 0x33) & 0x1f) != 1) {
          uVar4 = 3;
          iVar3 = 3;
        }
        *(uint *)(param_1 + 0x30) =
             iVar3 << 8 | *(uint *)(param_1 + 0x30) & 0xfffff020 | uVar4 | 0x20;
        uVar4 = 2;
        iVar3 = 2;
        if ((*(byte *)(param_1 + 0x3f) & 0x1f) != 1) {
          uVar4 = 3;
          iVar3 = 3;
        }
        *(uint *)(param_1 + 0x3c) =
             iVar3 << 8 | *(uint *)(param_1 + 0x3c) & 0xfffff020 | uVar4 | 0x20;
        uVar4 = 2;
        iVar3 = 2;
        if ((*(byte *)(param_1 + 0x4b) & 0x1f) != 1) {
          uVar4 = 3;
          iVar3 = 3;
        }
        *(uint *)(param_1 + 0x48) =
             iVar3 << 8 | *(uint *)(param_1 + 0x48) & 0xfffff020 | uVar4 | 0x20;
        *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xff333fff | 0x333000;
        *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) & 0xff333fff | 0x333000;
        *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0xff333fff | 0x333000;
        return 1;
      }
    }
  }
  return 0;
}

// 00FBFE40  FUN_00fbfe40  size=324  [callgraph]
undefined4 __fastcall FUN_00fbfe40(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = FUN_00a281f0("HexagonalBlur3.pso");
  uVar2 = FUN_00a281f0("ModelShaderBlur.vso",uVar1);
  iVar3 = FUN_00fa01a0(uVar2,uVar1);
  if (iVar3 != 0) {
    iVar3 = FUN_00fa39a0(param_1 + 0x28,"g_Sampler0");
    if (iVar3 != 0) {
      iVar3 = FUN_00fa39a0(param_1 + 0x34,"g_Sampler1");
      if (iVar3 != 0) {
        iVar3 = FUN_00fa39a0(param_1 + 0x40,"g_Sampler2");
        if (iVar3 != 0) {
          uVar4 = 2;
          iVar3 = 2;
          if ((*(byte *)(param_1 + 0x33) & 0x1f) != 1) {
            uVar4 = 3;
            iVar3 = 3;
          }
          *(uint *)(param_1 + 0x30) =
               iVar3 << 8 | *(uint *)(param_1 + 0x30) & 0xfffff020 | uVar4 | 0x20;
          uVar4 = 2;
          iVar3 = 2;
          if ((*(byte *)(param_1 + 0x3f) & 0x1f) != 1) {
            uVar4 = 3;
            iVar3 = 3;
          }
          *(uint *)(param_1 + 0x3c) =
               iVar3 << 8 | *(uint *)(param_1 + 0x3c) & 0xfffff020 | uVar4 | 0x20;
          uVar4 = 2;
          iVar3 = 2;
          if ((*(byte *)(param_1 + 0x4b) & 0x1f) != 1) {
            uVar4 = 3;
            iVar3 = 3;
          }
          *(uint *)(param_1 + 0x48) =
               iVar3 << 8 | *(uint *)(param_1 + 0x48) & 0xfffff020 | uVar4 | 0x20;
          *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xff333fff | 0x333000;
          *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) & 0xff333fff | 0x333000;
          *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0xff333fff | 0x333000;
          return 1;
        }
      }
    }
  }
  return 0;
}

// 00FBFFB0  FUN_00fbffb0  size=97  [callgraph]
undefined4 __thiscall FUN_00fbffb0(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    return 0;
  }
  iVar1 = FUN_00dd29b0(param_2 * 0xc + 0xc,0x20,0,0);
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  *(int *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(int *)(param_1 + 0x18) = param_2 * 0xc + iVar1;
  FUN_00fb95b0();
  return 1;
}

// 015F4810  cShaderSetting::cShaderSetting_85  size=11  [class]
void cShaderSetting::cShaderSetting_85(void)

{
  PTR_PTR_018e8438 = (undefined *)vftable;
  return;
}

// 015F4820  FUN_015f4820  size=20  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015f4820(void)

{
  _DAT_01f72754 = &PTR_FUN_016f1f20;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F4840  FUN_015f4840  size=20  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015f4840(void)

{
  _DAT_01f7277c = &PTR_FUN_016f1f28;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F4860  cShaderSetting::cShaderSetting_86  size=53  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cShaderSetting::cShaderSetting_86(void)

{
  int iVar1;
  
  _DAT_01f68138 = &PTR_cShaderSetting_81_016f1e60;
  iVar1 = 4;
  do {
    cModelShader::cModelShader_2();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  _DAT_01f68138 = vftable;
  return;
}

// 015F48A0  cShaderSetting::cShaderSetting_87  size=53  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cShaderSetting::cShaderSetting_87(void)

{
  int iVar1;
  
  _DAT_01f68778 = &PTR_cShaderSetting_81_016f1e60;
  iVar1 = 4;
  do {
    cModelShader::cModelShader_2();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  _DAT_01f68778 = vftable;
  return;
}

// 015F48E0  cShaderSetting::cShaderSetting_88  size=53  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cShaderSetting::cShaderSetting_88(void)

{
  int iVar1;
  
  _DAT_01f68db8 = &PTR_cShaderSetting_81_016f1e60;
  iVar1 = 4;
  do {
    cModelShader::cModelShader_2();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  _DAT_01f68db8 = vftable;
  return;
}

// 015F4920  cShaderSetting::cShaderSetting_89  size=53  [class]
void cShaderSetting::cShaderSetting_89(void)

{
  int iVar1;
  
  DAT_01f693f8 = &PTR_cShaderSetting_83_016f1e90;
  iVar1 = 4;
  do {
    cModelShader::cModelShader_2();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  DAT_01f693f8 = vftable;
  return;
}

// 015F4960  cShaderSetting::cShaderSetting_90  size=11  [class]
void cShaderSetting::cShaderSetting_90(void)

{
  PTR_PTR_018dd2d8 = (undefined *)vftable;
  return;
}

// 015F4970  cShaderSetting::cShaderSetting_91  size=53  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cShaderSetting::cShaderSetting_91(void)

{
  int iVar1;
  
  _DAT_01f69a38 = &PTR_cShaderSetting_82_016f1ec0;
  iVar1 = 4;
  do {
    cModelShader::cModelShader_2();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  _DAT_01f69a38 = vftable;
  return;
}

// 015F49B0  cShaderSetting::cShaderSetting_92  size=53  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cShaderSetting::cShaderSetting_92(void)

{
  int iVar1;
  
  _DAT_01f6a078 = &PTR_cShaderSetting_82_016f1ec0;
  iVar1 = 4;
  do {
    cModelShader::cModelShader_2();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  _DAT_01f6a078 = vftable;
  return;
}

// 015F49F0  cShaderSetting::cShaderSetting_93  size=53  [class]
void cShaderSetting::cShaderSetting_93(void)

{
  int iVar1;
  
  DAT_01f6a6b8 = &PTR_cShaderSetting_82_016f1ec0;
  iVar1 = 4;
  do {
    cModelShader::cModelShader_2();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  DAT_01f6a6b8 = vftable;
  return;
}

// 015F4A30  cShaderSetting::cShaderSetting_94  size=53  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cShaderSetting::cShaderSetting_94(void)

{
  int iVar1;
  
  _DAT_01f6acf8 = &PTR_cShaderSetting_84_016f1ef0;
  iVar1 = 4;
  do {
    cModelShader::cModelShader_2();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  _DAT_01f6acf8 = vftable;
  return;
}

// 015F4A70  cShaderSetting::cShaderSetting_95  size=53  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cShaderSetting::cShaderSetting_95(void)

{
  int iVar1;
  
  _DAT_01f6b338 = &PTR_cShaderSetting_84_016f1ef0;
  iVar1 = 4;
  do {
    cModelShader::cModelShader_2();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  _DAT_01f6b338 = vftable;
  return;
}

// 015F4AB0  cShaderSetting::cShaderSetting_96  size=11  [class]
void cShaderSetting::cShaderSetting_96(void)

{
  PTR_PTR_018dd350 = (undefined *)vftable;
  return;
}

// 015F4AC0  FUN_015f4ac0  size=20  [between]
void FUN_015f4ac0(void)

{
  Hw::cTexture::cTexture_5();
  Hw::cTexture::cTexture_5();
  return;
}

// 015F4AE0  cShaderSetting::cShaderSetting_97  size=11  [class]
void cShaderSetting::cShaderSetting_97(void)

{
  PTR_PTR_018de4a0 = (undefined *)vftable;
  return;
}

// 015F4AF0  cShaderSetting::cShaderSetting_98  size=11  [class]
void cShaderSetting::cShaderSetting_98(void)

{
  PTR_PTR_018de520 = (undefined *)vftable;
  return;
}

// 015F4B00  cShaderSetting::cShaderSetting_99  size=11  [class]
void cShaderSetting::cShaderSetting_99(void)

{
  PTR_PTR_018de5a0 = (undefined *)vftable;
  return;
}

// 015F4B10  cShaderSetting::cShaderSetting_100  size=11  [class]
void cShaderSetting::cShaderSetting_100(void)

{
  PTR_PTR_018de620 = (undefined *)vftable;
  return;
}

// 015F4B20  cShaderSetting::cShaderSetting_101  size=11  [class]
void cShaderSetting::cShaderSetting_101(void)

{
  PTR_PTR_018de6a0 = (undefined *)vftable;
  return;
}

// 015F4B30  cShaderSetting::cShaderSetting_102  size=11  [class]
void cShaderSetting::cShaderSetting_102(void)

{
  PTR_PTR_018de720 = (undefined *)vftable;
  return;
}

// 015F4B40  cShaderSetting::cShaderSetting_103  size=11  [class]
void cShaderSetting::cShaderSetting_103(void)

{
  PTR_PTR_018de7a0 = (undefined *)vftable;
  return;
}

// 015F4B50  cShaderSetting::cShaderSetting_104  size=11  [class]
void cShaderSetting::cShaderSetting_104(void)

{
  PTR_PTR_018de820 = (undefined *)vftable;
  return;
}

// 015F4B60  cShaderSetting::cShaderSetting_105  size=11  [class]
void cShaderSetting::cShaderSetting_105(void)

{
  PTR_PTR_018de8a0 = (undefined *)vftable;
  return;
}

// 015F4B70  cShaderSetting::cShaderSetting_106  size=11  [class]
void cShaderSetting::cShaderSetting_106(void)

{
  PTR_PTR_018de920 = (undefined *)vftable;
  return;
}

// 015F4B80  cShaderSetting::cShaderSetting_107  size=11  [class]
void cShaderSetting::cShaderSetting_107(void)

{
  PTR_PTR_018de9a0 = (undefined *)vftable;
  return;
}

// 015F4B90  cShaderSetting::cShaderSetting_108  size=11  [class]
void cShaderSetting::cShaderSetting_108(void)

{
  PTR_PTR_018dea20 = (undefined *)vftable;
  return;
}

// 015F4BA0  cShaderSetting::cShaderSetting_109  size=11  [class]
void cShaderSetting::cShaderSetting_109(void)

{
  PTR_PTR_018deaa0 = (undefined *)vftable;
  return;
}

// 015F4BB0  cShaderSetting::cShaderSetting_110  size=11  [class]
void cShaderSetting::cShaderSetting_110(void)

{
  PTR_PTR_018deb20 = (undefined *)vftable;
  return;
}

// 015F4BC0  cShaderSetting::cShaderSetting_111  size=11  [class]
void cShaderSetting::cShaderSetting_111(void)

{
  PTR_PTR_018deba0 = (undefined *)vftable;
  return;
}

// 015F4BD0  cShaderSetting::cShaderSetting_112  size=11  [class]
void cShaderSetting::cShaderSetting_112(void)

{
  PTR_PTR_018dec20 = (undefined *)vftable;
  return;
}

// 015F4BE0  cShaderSetting::cShaderSetting_113  size=11  [class]
void cShaderSetting::cShaderSetting_113(void)

{
  PTR_PTR_018deca0 = (undefined *)vftable;
  return;
}

// 015F4BF0  cShaderSetting::cShaderSetting_114  size=11  [class]
void cShaderSetting::cShaderSetting_114(void)

{
  PTR_PTR_018ded20 = (undefined *)vftable;
  return;
}

// 015F4C00  cShaderSetting::cShaderSetting_115  size=11  [class]
void cShaderSetting::cShaderSetting_115(void)

{
  PTR_PTR_018deda0 = (undefined *)vftable;
  return;
}

// 015F4C10  cShaderSetting::cShaderSetting_116  size=11  [class]
void cShaderSetting::cShaderSetting_116(void)

{
  PTR_PTR_018dee20 = (undefined *)vftable;
  return;
}

// 015F4C20  cShaderSetting::cShaderSetting_117  size=11  [class]
void cShaderSetting::cShaderSetting_117(void)

{
  PTR_PTR_018deea0 = (undefined *)vftable;
  return;
}

// 015F4C30  cShaderSetting::cShaderSetting_118  size=11  [class]
void cShaderSetting::cShaderSetting_118(void)

{
  PTR_PTR_018def20 = (undefined *)vftable;
  return;
}

// 015F4C40  cShaderSetting::cShaderSetting_119  size=11  [class]
void cShaderSetting::cShaderSetting_119(void)

{
  PTR_PTR_018defa0 = (undefined *)vftable;
  return;
}

// 015F4C50  cShaderSetting::cShaderSetting_120  size=11  [class]
void cShaderSetting::cShaderSetting_120(void)

{
  PTR_PTR_018df020 = (undefined *)vftable;
  return;
}

// 015F4C60  cShaderSetting::cShaderSetting_121  size=11  [class]
void cShaderSetting::cShaderSetting_121(void)

{
  PTR_PTR_018df0a0 = (undefined *)vftable;
  return;
}

// 015F4C70  cShaderSetting::cShaderSetting_122  size=11  [class]
void cShaderSetting::cShaderSetting_122(void)

{
  PTR_PTR_018df120 = (undefined *)vftable;
  return;
}

// 015F4C80  cShaderSetting::cShaderSetting_123  size=11  [class]
void cShaderSetting::cShaderSetting_123(void)

{
  PTR_PTR_018df1a0 = (undefined *)vftable;
  return;
}

// 015F4C90  cShaderSetting::cShaderSetting_124  size=11  [class]
void cShaderSetting::cShaderSetting_124(void)

{
  PTR_PTR_018df220 = (undefined *)vftable;
  return;
}

// 015F4CA0  cShaderSetting::cShaderSetting_125  size=11  [class]
void cShaderSetting::cShaderSetting_125(void)

{
  PTR_PTR_018df2a0 = (undefined *)vftable;
  return;
}

// 015F4CB0  cShaderSetting::cShaderSetting_126  size=11  [class]
void cShaderSetting::cShaderSetting_126(void)

{
  PTR_PTR_018df320 = (undefined *)vftable;
  return;
}

// 015F4CC0  cShaderSetting::cShaderSetting_127  size=11  [class]
void cShaderSetting::cShaderSetting_127(void)

{
  PTR_PTR_018df3a0 = (undefined *)vftable;
  return;
}

// 015F4CD0  cShaderSetting::cShaderSetting_128  size=11  [class]
void cShaderSetting::cShaderSetting_128(void)

{
  PTR_PTR_018df420 = (undefined *)vftable;
  return;
}

// 015F4CE0  cShaderSetting::cShaderSetting_129  size=11  [class]
void cShaderSetting::cShaderSetting_129(void)

{
  PTR_PTR_018df4a0 = (undefined *)vftable;
  return;
}

// 015F4CF0  cShaderSetting::cShaderSetting_130  size=11  [class]
void cShaderSetting::cShaderSetting_130(void)

{
  PTR_PTR_018df520 = (undefined *)vftable;
  return;
}

// 015F4D00  cShaderSetting::cShaderSetting_131  size=11  [class]
void cShaderSetting::cShaderSetting_131(void)

{
  PTR_PTR_018df5a0 = (undefined *)vftable;
  return;
}

// 015F4D10  cShaderSetting::cShaderSetting_132  size=11  [class]
void cShaderSetting::cShaderSetting_132(void)

{
  PTR_PTR_018df620 = (undefined *)vftable;
  return;
}

// 015F4D20  cShaderSetting::cShaderSetting_133  size=11  [class]
void cShaderSetting::cShaderSetting_133(void)

{
  PTR_PTR_018df6a0 = (undefined *)vftable;
  return;
}

// 015F4D30  cShaderSetting::cShaderSetting_134  size=11  [class]
void cShaderSetting::cShaderSetting_134(void)

{
  PTR_PTR_018df720 = (undefined *)vftable;
  return;
}

// 015F4D40  cShaderSetting::cShaderSetting_135  size=11  [class]
void cShaderSetting::cShaderSetting_135(void)

{
  PTR_PTR_018df7a0 = (undefined *)vftable;
  return;
}

// 015F4D50  cShaderSetting::cShaderSetting_136  size=11  [class]
void cShaderSetting::cShaderSetting_136(void)

{
  PTR_PTR_018df820 = (undefined *)vftable;
  return;
}

// 015F4D60  cShaderSetting::cShaderSetting_137  size=11  [class]
void cShaderSetting::cShaderSetting_137(void)

{
  PTR_PTR_018df8a0 = (undefined *)vftable;
  return;
}

// 015F4D70  cShaderSetting::cShaderSetting_138  size=11  [class]
void cShaderSetting::cShaderSetting_138(void)

{
  PTR_PTR_018df920 = (undefined *)vftable;
  return;
}

// 015F4D80  cShaderSetting::cShaderSetting_139  size=11  [class]
void cShaderSetting::cShaderSetting_139(void)

{
  PTR_PTR_018df9a0 = (undefined *)vftable;
  return;
}

// 015F4D90  cShaderSetting::cShaderSetting_140  size=11  [class]
void cShaderSetting::cShaderSetting_140(void)

{
  PTR_PTR_018dfa20 = (undefined *)vftable;
  return;
}

// 015F4DA0  cShaderSetting::cShaderSetting_141  size=11  [class]
void cShaderSetting::cShaderSetting_141(void)

{
  PTR_PTR_018dfaa0 = (undefined *)vftable;
  return;
}

// 015F4DB0  cShaderSetting::cShaderSetting_142  size=11  [class]
void cShaderSetting::cShaderSetting_142(void)

{
  PTR_PTR_018dfb20 = (undefined *)vftable;
  return;
}

// 015F4DC0  cShaderSetting::cShaderSetting_143  size=11  [class]
void cShaderSetting::cShaderSetting_143(void)

{
  PTR_PTR_018dfba0 = (undefined *)vftable;
  return;
}

// 015F4DD0  cShaderSetting::cShaderSetting_144  size=11  [class]
void cShaderSetting::cShaderSetting_144(void)

{
  PTR_PTR_018dfc20 = (undefined *)vftable;
  return;
}

// 015F4DE0  cShaderSetting::cShaderSetting_145  size=11  [class]
void cShaderSetting::cShaderSetting_145(void)

{
  PTR_PTR_018dfca0 = (undefined *)vftable;
  return;
}

// 015F4DF0  cShaderSetting::cShaderSetting_146  size=11  [class]
void cShaderSetting::cShaderSetting_146(void)

{
  PTR_PTR_018dfd20 = (undefined *)vftable;
  return;
}

// 015F4E00  cShaderSetting::cShaderSetting_147  size=11  [class]
void cShaderSetting::cShaderSetting_147(void)

{
  PTR_PTR_018dfda0 = (undefined *)vftable;
  return;
}

// 015F4E10  cShaderSetting::cShaderSetting_148  size=11  [class]
void cShaderSetting::cShaderSetting_148(void)

{
  PTR_PTR_018dfe20 = (undefined *)vftable;
  return;
}

// 015F4E20  cShaderSetting::cShaderSetting_149  size=11  [class]
void cShaderSetting::cShaderSetting_149(void)

{
  PTR_PTR_018dfea0 = (undefined *)vftable;
  return;
}

// 015F4E30  cShaderSetting::cShaderSetting_150  size=11  [class]
void cShaderSetting::cShaderSetting_150(void)

{
  PTR_PTR_018dff20 = (undefined *)vftable;
  return;
}

// 015F4E40  cShaderSetting::cShaderSetting_151  size=11  [class]
void cShaderSetting::cShaderSetting_151(void)

{
  PTR_PTR_018dffa0 = (undefined *)vftable;
  return;
}

// 015F4E50  cShaderSetting::cShaderSetting_152  size=11  [class]
void cShaderSetting::cShaderSetting_152(void)

{
  PTR_PTR_018e0020 = (undefined *)vftable;
  return;
}

// 015F4E60  cShaderSetting::cShaderSetting_153  size=11  [class]
void cShaderSetting::cShaderSetting_153(void)

{
  PTR_PTR_018e00a0 = (undefined *)vftable;
  return;
}

// 015F4E70  cShaderSetting::cShaderSetting_154  size=11  [class]
void cShaderSetting::cShaderSetting_154(void)

{
  PTR_PTR_018e0120 = (undefined *)vftable;
  return;
}

// 015F4E80  cShaderSetting::cShaderSetting_155  size=11  [class]
void cShaderSetting::cShaderSetting_155(void)

{
  PTR_PTR_018e01a0 = (undefined *)vftable;
  return;
}

// 015F4E90  cShaderSetting::cShaderSetting_156  size=11  [class]
void cShaderSetting::cShaderSetting_156(void)

{
  PTR_PTR_018e0220 = (undefined *)vftable;
  return;
}

// 015F4EA0  cShaderSetting::cShaderSetting_157  size=11  [class]
void cShaderSetting::cShaderSetting_157(void)

{
  PTR_PTR_018e02a0 = (undefined *)vftable;
  return;
}

// 015F4EB0  cShaderSetting::cShaderSetting_158  size=11  [class]
void cShaderSetting::cShaderSetting_158(void)

{
  PTR_PTR_018e0320 = (undefined *)vftable;
  return;
}

// 015F4EC0  cShaderSetting::cShaderSetting_159  size=11  [class]
void cShaderSetting::cShaderSetting_159(void)

{
  PTR_PTR_018e03a0 = (undefined *)vftable;
  return;
}

// 015F4ED0  cShaderSetting::cShaderSetting_160  size=11  [class]
void cShaderSetting::cShaderSetting_160(void)

{
  PTR_PTR_018e0420 = (undefined *)vftable;
  return;
}

// 015F4EE0  cShaderSetting::cShaderSetting_161  size=11  [class]
void cShaderSetting::cShaderSetting_161(void)

{
  PTR_PTR_018e04a0 = (undefined *)vftable;
  return;
}

// 015F4EF0  cShaderSetting::cShaderSetting_162  size=11  [class]
void cShaderSetting::cShaderSetting_162(void)

{
  PTR_PTR_018e0520 = (undefined *)vftable;
  return;
}

// 015F4F00  cShaderSetting::cShaderSetting_163  size=11  [class]
void cShaderSetting::cShaderSetting_163(void)

{
  PTR_PTR_018e05a0 = (undefined *)vftable;
  return;
}

// 015F4F10  cShaderSetting::cShaderSetting_164  size=11  [class]
void cShaderSetting::cShaderSetting_164(void)

{
  PTR_PTR_018e0620 = (undefined *)vftable;
  return;
}

// 015F4F20  cShaderSetting::cShaderSetting_165  size=11  [class]
void cShaderSetting::cShaderSetting_165(void)

{
  PTR_PTR_018e06a0 = (undefined *)vftable;
  return;
}

// 015F4F30  cShaderSetting::cShaderSetting_166  size=11  [class]
void cShaderSetting::cShaderSetting_166(void)

{
  PTR_PTR_018e0720 = (undefined *)vftable;
  return;
}

// 015F4F40  cShaderSetting::cShaderSetting_167  size=11  [class]
void cShaderSetting::cShaderSetting_167(void)

{
  PTR_PTR_018e07a0 = (undefined *)vftable;
  return;
}

// 015F4F50  cShaderSetting::cShaderSetting_168  size=11  [class]
void cShaderSetting::cShaderSetting_168(void)

{
  PTR_PTR_018e0820 = (undefined *)vftable;
  return;
}

// 015F4F60  cShaderSetting::cShaderSetting_169  size=11  [class]
void cShaderSetting::cShaderSetting_169(void)

{
  PTR_PTR_018e08a0 = (undefined *)vftable;
  return;
}

// 015F4F70  cShaderSetting::cShaderSetting_170  size=11  [class]
void cShaderSetting::cShaderSetting_170(void)

{
  PTR_PTR_018e0920 = (undefined *)vftable;
  return;
}

// 015F4F80  cShaderSetting::cShaderSetting_171  size=11  [class]
void cShaderSetting::cShaderSetting_171(void)

{
  PTR_PTR_018e09a0 = (undefined *)vftable;
  return;
}

// 015F4F90  cShaderSetting::cShaderSetting_172  size=11  [class]
void cShaderSetting::cShaderSetting_172(void)

{
  PTR_PTR_018e0a20 = (undefined *)vftable;
  return;
}

// 015F4FA0  cShaderSetting::cShaderSetting_173  size=11  [class]
void cShaderSetting::cShaderSetting_173(void)

{
  PTR_PTR_018e0aa0 = (undefined *)vftable;
  return;
}

// 015F4FB0  cShaderSetting::cShaderSetting_174  size=11  [class]
void cShaderSetting::cShaderSetting_174(void)

{
  PTR_PTR_018e0b20 = (undefined *)vftable;
  return;
}

// 015F4FC0  cShaderSetting::cShaderSetting_175  size=11  [class]
void cShaderSetting::cShaderSetting_175(void)

{
  PTR_PTR_018e0ba0 = (undefined *)vftable;
  return;
}

// 015F4FD0  cShaderSetting::cShaderSetting_176  size=11  [class]
void cShaderSetting::cShaderSetting_176(void)

{
  PTR_PTR_018e0c20 = (undefined *)vftable;
  return;
}

// 015F4FE0  cShaderSetting::cShaderSetting_177  size=11  [class]
void cShaderSetting::cShaderSetting_177(void)

{
  PTR_PTR_018e0ca0 = (undefined *)vftable;
  return;
}

// 015F4FF0  cShaderSetting::cShaderSetting_178  size=11  [class]
void cShaderSetting::cShaderSetting_178(void)

{
  PTR_PTR_018e0d20 = (undefined *)vftable;
  return;
}

// 015F5000  cShaderSetting::cShaderSetting_179  size=11  [class]
void cShaderSetting::cShaderSetting_179(void)

{
  PTR_PTR_018e0da0 = (undefined *)vftable;
  return;
}

// 015F5010  cShaderSetting::cShaderSetting_180  size=11  [class]
void cShaderSetting::cShaderSetting_180(void)

{
  PTR_PTR_018e0e20 = (undefined *)vftable;
  return;
}

// 015F5020  cShaderSetting::cShaderSetting_181  size=11  [class]
void cShaderSetting::cShaderSetting_181(void)

{
  PTR_PTR_018e0ea0 = (undefined *)vftable;
  return;
}

// 015F5030  cShaderSetting::cShaderSetting_182  size=11  [class]
void cShaderSetting::cShaderSetting_182(void)

{
  PTR_PTR_018e0f20 = (undefined *)vftable;
  return;
}

// 015F5040  cShaderSetting::cShaderSetting_183  size=11  [class]
void cShaderSetting::cShaderSetting_183(void)

{
  PTR_PTR_018e0fa0 = (undefined *)vftable;
  return;
}

// 015F5050  cShaderSetting::cShaderSetting_184  size=11  [class]
void cShaderSetting::cShaderSetting_184(void)

{
  PTR_PTR_018e1020 = (undefined *)vftable;
  return;
}

// 015F5060  cShaderSetting::cShaderSetting_185  size=11  [class]
void cShaderSetting::cShaderSetting_185(void)

{
  PTR_PTR_018e10a0 = (undefined *)vftable;
  return;
}

// 015F5070  cShaderSetting::cShaderSetting_186  size=11  [class]
void cShaderSetting::cShaderSetting_186(void)

{
  PTR_PTR_018e1120 = (undefined *)vftable;
  return;
}

// 015F5080  cShaderSetting::cShaderSetting_187  size=11  [class]
void cShaderSetting::cShaderSetting_187(void)

{
  PTR_PTR_018e11a0 = (undefined *)vftable;
  return;
}

// 015F5090  cShaderSetting::cShaderSetting_188  size=11  [class]
void cShaderSetting::cShaderSetting_188(void)

{
  PTR_PTR_018e1220 = (undefined *)vftable;
  return;
}

// 015F50A0  cShaderSetting::cShaderSetting_189  size=11  [class]
void cShaderSetting::cShaderSetting_189(void)

{
  PTR_PTR_018e12a0 = (undefined *)vftable;
  return;
}

// 015F50B0  cShaderSetting::cShaderSetting_190  size=11  [class]
void cShaderSetting::cShaderSetting_190(void)

{
  PTR_PTR_018e1320 = (undefined *)vftable;
  return;
}

// 015F50C0  cShaderSetting::cShaderSetting_191  size=11  [class]
void cShaderSetting::cShaderSetting_191(void)

{
  PTR_PTR_018e13a0 = (undefined *)vftable;
  return;
}

// 015F50D0  cShaderSetting::cShaderSetting_192  size=11  [class]
void cShaderSetting::cShaderSetting_192(void)

{
  PTR_PTR_018e1420 = (undefined *)vftable;
  return;
}

// 015F50E0  cShaderSetting::cShaderSetting_193  size=11  [class]
void cShaderSetting::cShaderSetting_193(void)

{
  PTR_PTR_018e14a0 = (undefined *)vftable;
  return;
}

// 015F50F0  cShaderSetting::cShaderSetting_194  size=11  [class]
void cShaderSetting::cShaderSetting_194(void)

{
  PTR_PTR_018e1520 = (undefined *)vftable;
  return;
}

// 015F5100  cShaderSetting::cShaderSetting_195  size=11  [class]
void cShaderSetting::cShaderSetting_195(void)

{
  PTR_PTR_018e15a0 = (undefined *)vftable;
  return;
}

// 015F5110  cShaderSetting::cShaderSetting_196  size=11  [class]
void cShaderSetting::cShaderSetting_196(void)

{
  PTR_PTR_018e1620 = (undefined *)vftable;
  return;
}

// 015F5120  cShaderSetting::cShaderSetting_197  size=11  [class]
void cShaderSetting::cShaderSetting_197(void)

{
  PTR_PTR_018e16a0 = (undefined *)vftable;
  return;
}

// 015F5130  cShaderSetting::cShaderSetting_198  size=11  [class]
void cShaderSetting::cShaderSetting_198(void)

{
  PTR_PTR_018e1720 = (undefined *)vftable;
  return;
}

// 015F5140  cShaderSetting::cShaderSetting_199  size=11  [class]
void cShaderSetting::cShaderSetting_199(void)

{
  PTR_PTR_018e17a0 = (undefined *)vftable;
  return;
}

// 015F5150  cShaderSetting::cShaderSetting_200  size=11  [class]
void cShaderSetting::cShaderSetting_200(void)

{
  PTR_PTR_018e1820 = (undefined *)vftable;
  return;
}

// 015F5160  cShaderSetting::cShaderSetting_201  size=11  [class]
void cShaderSetting::cShaderSetting_201(void)

{
  PTR_PTR_018e18a0 = (undefined *)vftable;
  return;
}

// 015F5170  cShaderSetting::cShaderSetting_202  size=11  [class]
void cShaderSetting::cShaderSetting_202(void)

{
  PTR_PTR_018e1920 = (undefined *)vftable;
  return;
}

// 015F5180  cShaderSetting::cShaderSetting_203  size=11  [class]
void cShaderSetting::cShaderSetting_203(void)

{
  PTR_PTR_018e19a0 = (undefined *)vftable;
  return;
}

// 015F5190  cShaderSetting::cShaderSetting_204  size=11  [class]
void cShaderSetting::cShaderSetting_204(void)

{
  PTR_PTR_018e1a20 = (undefined *)vftable;
  return;
}

// 015F51A0  cShaderSetting::cShaderSetting_205  size=11  [class]
void cShaderSetting::cShaderSetting_205(void)

{
  PTR_PTR_018e1aa0 = (undefined *)vftable;
  return;
}

// 015F51B0  cShaderSetting::cShaderSetting_206  size=11  [class]
void cShaderSetting::cShaderSetting_206(void)

{
  PTR_PTR_018e1b20 = (undefined *)vftable;
  return;
}

// 015F51C0  cShaderSetting::cShaderSetting_207  size=11  [class]
void cShaderSetting::cShaderSetting_207(void)

{
  PTR_PTR_018e1ba0 = (undefined *)vftable;
  return;
}

// 015F51D0  cShaderSetting::cShaderSetting_208  size=11  [class]
void cShaderSetting::cShaderSetting_208(void)

{
  PTR_PTR_018e1c20 = (undefined *)vftable;
  return;
}

// 015F51E0  cShaderSetting::cShaderSetting_209  size=11  [class]
void cShaderSetting::cShaderSetting_209(void)

{
  PTR_PTR_018e1ca0 = (undefined *)vftable;
  return;
}

// 015F51F0  cShaderSetting::cShaderSetting_210  size=11  [class]
void cShaderSetting::cShaderSetting_210(void)

{
  PTR_PTR_018e1d20 = (undefined *)vftable;
  return;
}

// 015F5200  cShaderSetting::cShaderSetting_211  size=11  [class]
void cShaderSetting::cShaderSetting_211(void)

{
  PTR_PTR_018e1da0 = (undefined *)vftable;
  return;
}

// 015F5210  cShaderSetting::cShaderSetting_212  size=11  [class]
void cShaderSetting::cShaderSetting_212(void)

{
  PTR_PTR_018e1e20 = (undefined *)vftable;
  return;
}

// 015F5220  cShaderSetting::cShaderSetting_213  size=11  [class]
void cShaderSetting::cShaderSetting_213(void)

{
  PTR_PTR_018e1ea0 = (undefined *)vftable;
  return;
}

// 015F5230  cShaderSetting::cShaderSetting_214  size=11  [class]
void cShaderSetting::cShaderSetting_214(void)

{
  PTR_PTR_018e1f20 = (undefined *)vftable;
  return;
}

// 015F5240  cShaderSetting::cShaderSetting_215  size=11  [class]
void cShaderSetting::cShaderSetting_215(void)

{
  PTR_PTR_018e1fa0 = (undefined *)vftable;
  return;
}

// 015F5250  cShaderSetting::cShaderSetting_216  size=11  [class]
void cShaderSetting::cShaderSetting_216(void)

{
  PTR_PTR_018e2020 = (undefined *)vftable;
  return;
}

// 015F5260  cShaderSetting::cShaderSetting_217  size=11  [class]
void cShaderSetting::cShaderSetting_217(void)

{
  PTR_PTR_018e20a0 = (undefined *)vftable;
  return;
}

// 015F5270  cShaderSetting::cShaderSetting_218  size=11  [class]
void cShaderSetting::cShaderSetting_218(void)

{
  PTR_PTR_018e2120 = (undefined *)vftable;
  return;
}

// 015F5280  cShaderSetting::cShaderSetting_219  size=11  [class]
void cShaderSetting::cShaderSetting_219(void)

{
  PTR_PTR_018e21a0 = (undefined *)vftable;
  return;
}

// 015F5290  cShaderSetting::cShaderSetting_220  size=11  [class]
void cShaderSetting::cShaderSetting_220(void)

{
  PTR_PTR_018e2220 = (undefined *)vftable;
  return;
}

// 015F52A0  cShaderSetting::cShaderSetting_221  size=11  [class]
void cShaderSetting::cShaderSetting_221(void)

{
  PTR_PTR_018e22a0 = (undefined *)vftable;
  return;
}

// 015F52B0  cShaderSetting::cShaderSetting_222  size=11  [class]
void cShaderSetting::cShaderSetting_222(void)

{
  PTR_PTR_018e2320 = (undefined *)vftable;
  return;
}

// 015F52C0  cShaderSetting::cShaderSetting_223  size=11  [class]
void cShaderSetting::cShaderSetting_223(void)

{
  PTR_PTR_018e23a0 = (undefined *)vftable;
  return;
}

// 015F52D0  cShaderSetting::cShaderSetting_224  size=11  [class]
void cShaderSetting::cShaderSetting_224(void)

{
  PTR_PTR_018e2420 = (undefined *)vftable;
  return;
}

// 015F52E0  cShaderSetting::cShaderSetting_225  size=11  [class]
void cShaderSetting::cShaderSetting_225(void)

{
  PTR_PTR_018e24a0 = (undefined *)vftable;
  return;
}

// 015F52F0  cShaderSetting::cShaderSetting_226  size=11  [class]
void cShaderSetting::cShaderSetting_226(void)

{
  PTR_PTR_018e2520 = (undefined *)vftable;
  return;
}

// 015F5300  cShaderSetting::cShaderSetting_227  size=11  [class]
void cShaderSetting::cShaderSetting_227(void)

{
  PTR_PTR_018e25a0 = (undefined *)vftable;
  return;
}

// 015F5310  cShaderSetting::cShaderSetting_228  size=11  [class]
void cShaderSetting::cShaderSetting_228(void)

{
  PTR_PTR_018e2620 = (undefined *)vftable;
  return;
}

// 015F5320  cShaderSetting::cShaderSetting_229  size=11  [class]
void cShaderSetting::cShaderSetting_229(void)

{
  PTR_PTR_018e26a0 = (undefined *)vftable;
  return;
}

// 015F5330  cShaderSetting::cShaderSetting_230  size=11  [class]
void cShaderSetting::cShaderSetting_230(void)

{
  PTR_PTR_018e2720 = (undefined *)vftable;
  return;
}

// 015F5340  cShaderSetting::cShaderSetting_231  size=11  [class]
void cShaderSetting::cShaderSetting_231(void)

{
  PTR_PTR_018e27a0 = (undefined *)vftable;
  return;
}

// 015F5350  cShaderSetting::cShaderSetting_232  size=11  [class]
void cShaderSetting::cShaderSetting_232(void)

{
  PTR_PTR_018e2820 = (undefined *)vftable;
  return;
}

// 015F5360  cShaderSetting::cShaderSetting_233  size=11  [class]
void cShaderSetting::cShaderSetting_233(void)

{
  PTR_PTR_018e28a0 = (undefined *)vftable;
  return;
}

// 015F5370  cShaderSetting::cShaderSetting_234  size=11  [class]
void cShaderSetting::cShaderSetting_234(void)

{
  PTR_PTR_018e2920 = (undefined *)vftable;
  return;
}

// 015F5380  cShaderSetting::cShaderSetting_235  size=11  [class]
void cShaderSetting::cShaderSetting_235(void)

{
  PTR_PTR_018e29a0 = (undefined *)vftable;
  return;
}

// 015F5390  cShaderSetting::cShaderSetting_236  size=11  [class]
void cShaderSetting::cShaderSetting_236(void)

{
  PTR_PTR_018e2a20 = (undefined *)vftable;
  return;
}

// 015F53A0  cShaderSetting::cShaderSetting_237  size=11  [class]
void cShaderSetting::cShaderSetting_237(void)

{
  PTR_PTR_018e2aa0 = (undefined *)vftable;
  return;
}

// 015F53B0  cShaderSetting::cShaderSetting_238  size=11  [class]
void cShaderSetting::cShaderSetting_238(void)

{
  PTR_PTR_018e2b20 = (undefined *)vftable;
  return;
}

// 015F53C0  cShaderSetting::cShaderSetting_239  size=11  [class]
void cShaderSetting::cShaderSetting_239(void)

{
  PTR_PTR_018e2ba0 = (undefined *)vftable;
  return;
}

// 015F53D0  cShaderSetting::cShaderSetting_240  size=11  [class]
void cShaderSetting::cShaderSetting_240(void)

{
  PTR_PTR_018e2c20 = (undefined *)vftable;
  return;
}

// 015F53E0  cShaderSetting::cShaderSetting_241  size=11  [class]
void cShaderSetting::cShaderSetting_241(void)

{
  PTR_PTR_018e2ca0 = (undefined *)vftable;
  return;
}

// 015F53F0  cShaderSetting::cShaderSetting_242  size=11  [class]
void cShaderSetting::cShaderSetting_242(void)

{
  PTR_PTR_018e2d20 = (undefined *)vftable;
  return;
}

// 015F5400  cShaderSetting::cShaderSetting_243  size=11  [class]
void cShaderSetting::cShaderSetting_243(void)

{
  PTR_PTR_018e2da0 = (undefined *)vftable;
  return;
}

// 015F5410  cShaderSetting::cShaderSetting_244  size=11  [class]
void cShaderSetting::cShaderSetting_244(void)

{
  PTR_PTR_018e2e20 = (undefined *)vftable;
  return;
}

// 015F5420  cShaderSetting::cShaderSetting_245  size=11  [class]
void cShaderSetting::cShaderSetting_245(void)

{
  PTR_PTR_018e2ea0 = (undefined *)vftable;
  return;
}

// 015F5430  cShaderSetting::cShaderSetting_246  size=11  [class]
void cShaderSetting::cShaderSetting_246(void)

{
  PTR_PTR_018e2f20 = (undefined *)vftable;
  return;
}

// 015F5440  cShaderSetting::cShaderSetting_247  size=11  [class]
void cShaderSetting::cShaderSetting_247(void)

{
  PTR_PTR_018e2fa0 = (undefined *)vftable;
  return;
}

// 015F5450  cShaderSetting::cShaderSetting_248  size=11  [class]
void cShaderSetting::cShaderSetting_248(void)

{
  PTR_PTR_018e3020 = (undefined *)vftable;
  return;
}

// 015F5460  cShaderSetting::cShaderSetting_249  size=11  [class]
void cShaderSetting::cShaderSetting_249(void)

{
  PTR_PTR_018e30a0 = (undefined *)vftable;
  return;
}

// 015F5470  cShaderSetting::cShaderSetting_250  size=11  [class]
void cShaderSetting::cShaderSetting_250(void)

{
  PTR_PTR_018e3120 = (undefined *)vftable;
  return;
}

// 015F5480  cShaderSetting::cShaderSetting_251  size=11  [class]
void cShaderSetting::cShaderSetting_251(void)

{
  PTR_PTR_018e31a0 = (undefined *)vftable;
  return;
}

// 015F5490  cShaderSetting::cShaderSetting_252  size=11  [class]
void cShaderSetting::cShaderSetting_252(void)

{
  PTR_PTR_018e3220 = (undefined *)vftable;
  return;
}

// 015F54A0  cShaderSetting::cShaderSetting_253  size=11  [class]
void cShaderSetting::cShaderSetting_253(void)

{
  PTR_PTR_018e32a0 = (undefined *)vftable;
  return;
}

// 015F54B0  cShaderSetting::cShaderSetting_254  size=11  [class]
void cShaderSetting::cShaderSetting_254(void)

{
  PTR_PTR_018e3320 = (undefined *)vftable;
  return;
}

// 015F54C0  cShaderSetting::cShaderSetting_255  size=11  [class]
void cShaderSetting::cShaderSetting_255(void)

{
  PTR_PTR_018e33a0 = (undefined *)vftable;
  return;
}

// 015F54D0  cShaderSetting::cShaderSetting_256  size=11  [class]
void cShaderSetting::cShaderSetting_256(void)

{
  PTR_PTR_018e3420 = (undefined *)vftable;
  return;
}

// 015F54E0  cShaderSetting::cShaderSetting_257  size=11  [class]
void cShaderSetting::cShaderSetting_257(void)

{
  PTR_PTR_018e34a0 = (undefined *)vftable;
  return;
}

// 015F54F0  cShaderSetting::cShaderSetting_258  size=11  [class]
void cShaderSetting::cShaderSetting_258(void)

{
  PTR_PTR_018e3520 = (undefined *)vftable;
  return;
}

// 015F5500  cShaderSetting::cShaderSetting_259  size=11  [class]
void cShaderSetting::cShaderSetting_259(void)

{
  PTR_PTR_018e35a0 = (undefined *)vftable;
  return;
}

// 015F5510  cShaderSetting::cShaderSetting_260  size=11  [class]
void cShaderSetting::cShaderSetting_260(void)

{
  PTR_PTR_018e3620 = (undefined *)vftable;
  return;
}

// 015F5520  cShaderSetting::cShaderSetting_261  size=11  [class]
void cShaderSetting::cShaderSetting_261(void)

{
  PTR_PTR_018e36a0 = (undefined *)vftable;
  return;
}

// 015F5530  cShaderSetting::cShaderSetting_262  size=11  [class]
void cShaderSetting::cShaderSetting_262(void)

{
  PTR_PTR_018e3720 = (undefined *)vftable;
  return;
}

// 015F5540  cShaderSetting::cShaderSetting_263  size=11  [class]
void cShaderSetting::cShaderSetting_263(void)

{
  PTR_PTR_018e37a0 = (undefined *)vftable;
  return;
}

// 015F5550  cShaderSetting::cShaderSetting_264  size=11  [class]
void cShaderSetting::cShaderSetting_264(void)

{
  PTR_PTR_018e3820 = (undefined *)vftable;
  return;
}

// 015F5560  cShaderSetting::cShaderSetting_265  size=11  [class]
void cShaderSetting::cShaderSetting_265(void)

{
  PTR_PTR_018e38a0 = (undefined *)vftable;
  return;
}

// 015F5570  cShaderSetting::cShaderSetting_266  size=11  [class]
void cShaderSetting::cShaderSetting_266(void)

{
  PTR_PTR_018e3920 = (undefined *)vftable;
  return;
}

// 015F5580  cShaderSetting::cShaderSetting_267  size=11  [class]
void cShaderSetting::cShaderSetting_267(void)

{
  PTR_PTR_018e39a0 = (undefined *)vftable;
  return;
}

// 015F5590  cShaderSetting::cShaderSetting_268  size=11  [class]
void cShaderSetting::cShaderSetting_268(void)

{
  PTR_PTR_018e3a20 = (undefined *)vftable;
  return;
}

// 015F55A0  cShaderSetting::cShaderSetting_269  size=11  [class]
void cShaderSetting::cShaderSetting_269(void)

{
  PTR_PTR_018e3aa0 = (undefined *)vftable;
  return;
}

// 015F55B0  cShaderSetting::cShaderSetting_270  size=11  [class]
void cShaderSetting::cShaderSetting_270(void)

{
  PTR_PTR_018e3b20 = (undefined *)vftable;
  return;
}

// 015F55C0  cShaderSetting::cShaderSetting_271  size=11  [class]
void cShaderSetting::cShaderSetting_271(void)

{
  PTR_PTR_018e3ba0 = (undefined *)vftable;
  return;
}

// 015F55D0  cShaderSetting::cShaderSetting_272  size=11  [class]
void cShaderSetting::cShaderSetting_272(void)

{
  PTR_PTR_018e3c20 = (undefined *)vftable;
  return;
}

// 015F55E0  cShaderSetting::cShaderSetting_273  size=11  [class]
void cShaderSetting::cShaderSetting_273(void)

{
  PTR_PTR_018e3ca0 = (undefined *)vftable;
  return;
}

// 015F55F0  cShaderSetting::cShaderSetting_274  size=11  [class]
void cShaderSetting::cShaderSetting_274(void)

{
  PTR_PTR_018e3d20 = (undefined *)vftable;
  return;
}

// 015F5600  cShaderSetting::cShaderSetting_275  size=11  [class]
void cShaderSetting::cShaderSetting_275(void)

{
  PTR_PTR_018e3da0 = (undefined *)vftable;
  return;
}

// 015F5610  cShaderSetting::cShaderSetting_276  size=11  [class]
void cShaderSetting::cShaderSetting_276(void)

{
  PTR_PTR_018e3e20 = (undefined *)vftable;
  return;
}

// 015F5620  cShaderSetting::cShaderSetting_277  size=11  [class]
void cShaderSetting::cShaderSetting_277(void)

{
  PTR_PTR_018e3ea0 = (undefined *)vftable;
  return;
}

// 015F5630  cShaderSetting::cShaderSetting_278  size=11  [class]
void cShaderSetting::cShaderSetting_278(void)

{
  PTR_PTR_018e3f20 = (undefined *)vftable;
  return;
}

// 015F5640  cShaderSetting::cShaderSetting_279  size=11  [class]
void cShaderSetting::cShaderSetting_279(void)

{
  PTR_PTR_018e3fa0 = (undefined *)vftable;
  return;
}

// 015F5650  cShaderSetting::cShaderSetting_280  size=11  [class]
void cShaderSetting::cShaderSetting_280(void)

{
  PTR_PTR_018e4020 = (undefined *)vftable;
  return;
}

// 015F5660  cShaderSetting::cShaderSetting_281  size=11  [class]
void cShaderSetting::cShaderSetting_281(void)

{
  PTR_PTR_018e40a0 = (undefined *)vftable;
  return;
}

// 015F5670  cShaderSetting::cShaderSetting_282  size=11  [class]
void cShaderSetting::cShaderSetting_282(void)

{
  PTR_PTR_018e4120 = (undefined *)vftable;
  return;
}

// 015F5680  cShaderSetting::cShaderSetting_283  size=11  [class]
void cShaderSetting::cShaderSetting_283(void)

{
  PTR_PTR_018e41a0 = (undefined *)vftable;
  return;
}

// 015F5690  cShaderSetting::cShaderSetting_284  size=11  [class]
void cShaderSetting::cShaderSetting_284(void)

{
  PTR_PTR_018e4220 = (undefined *)vftable;
  return;
}

// 015F56A0  cShaderSetting::cShaderSetting_285  size=11  [class]
void cShaderSetting::cShaderSetting_285(void)

{
  PTR_PTR_018e42a0 = (undefined *)vftable;
  return;
}

// 015F56B0  cShaderSetting::cShaderSetting_286  size=11  [class]
void cShaderSetting::cShaderSetting_286(void)

{
  PTR_PTR_018e4320 = (undefined *)vftable;
  return;
}

// 015F56C0  cShaderSetting::cShaderSetting_287  size=11  [class]
void cShaderSetting::cShaderSetting_287(void)

{
  PTR_PTR_018e43a0 = (undefined *)vftable;
  return;
}

// 015F56D0  cShaderSetting::cShaderSetting_288  size=11  [class]
void cShaderSetting::cShaderSetting_288(void)

{
  PTR_PTR_018e4420 = (undefined *)vftable;
  return;
}

// 015F56E0  cShaderSetting::cShaderSetting_289  size=11  [class]
void cShaderSetting::cShaderSetting_289(void)

{
  PTR_PTR_018e44a0 = (undefined *)vftable;
  return;
}

// 015F56F0  cShaderSetting::cShaderSetting_290  size=11  [class]
void cShaderSetting::cShaderSetting_290(void)

{
  PTR_PTR_018e4520 = (undefined *)vftable;
  return;
}

// 015F5700  cShaderSetting::cShaderSetting_291  size=11  [class]
void cShaderSetting::cShaderSetting_291(void)

{
  PTR_PTR_018e45a0 = (undefined *)vftable;
  return;
}

// 015F5710  cShaderSetting::cShaderSetting_292  size=11  [class]
void cShaderSetting::cShaderSetting_292(void)

{
  PTR_PTR_018e4620 = (undefined *)vftable;
  return;
}

// 015F5720  cShaderSetting::cShaderSetting_293  size=11  [class]
void cShaderSetting::cShaderSetting_293(void)

{
  PTR_PTR_018e46a0 = (undefined *)vftable;
  return;
}

// 015F5730  cShaderSetting::cShaderSetting_294  size=11  [class]
void cShaderSetting::cShaderSetting_294(void)

{
  PTR_PTR_018e4720 = (undefined *)vftable;
  return;
}

// 015F5740  cShaderSetting::cShaderSetting_295  size=11  [class]
void cShaderSetting::cShaderSetting_295(void)

{
  PTR_PTR_018e47a0 = (undefined *)vftable;
  return;
}

// 015F5750  cShaderSetting::cShaderSetting_296  size=11  [class]
void cShaderSetting::cShaderSetting_296(void)

{
  PTR_PTR_018e4820 = (undefined *)vftable;
  return;
}

// 015F5760  cShaderSetting::cShaderSetting_297  size=11  [class]
void cShaderSetting::cShaderSetting_297(void)

{
  PTR_PTR_018e48a0 = (undefined *)vftable;
  return;
}

// 015F5770  cShaderSetting::cShaderSetting_298  size=11  [class]
void cShaderSetting::cShaderSetting_298(void)

{
  PTR_PTR_018e4920 = (undefined *)vftable;
  return;
}

// 015F5780  cShaderSetting::cShaderSetting_299  size=11  [class]
void cShaderSetting::cShaderSetting_299(void)

{
  PTR_PTR_018e49a0 = (undefined *)vftable;
  return;
}

// 015F5790  cShaderSetting::cShaderSetting_300  size=11  [class]
void cShaderSetting::cShaderSetting_300(void)

{
  PTR_PTR_018e4a20 = (undefined *)vftable;
  return;
}

// 015F57A0  cShaderSetting::cShaderSetting_301  size=11  [class]
void cShaderSetting::cShaderSetting_301(void)

{
  PTR_PTR_018e4aa0 = (undefined *)vftable;
  return;
}

// 015F57B0  cShaderSetting::cShaderSetting_302  size=11  [class]
void cShaderSetting::cShaderSetting_302(void)

{
  PTR_PTR_018e4b20 = (undefined *)vftable;
  return;
}

// 015F57C0  cShaderSetting::cShaderSetting_303  size=11  [class]
void cShaderSetting::cShaderSetting_303(void)

{
  PTR_PTR_018e4ba0 = (undefined *)vftable;
  return;
}

// 015F57D0  cShaderSetting::cShaderSetting_304  size=11  [class]
void cShaderSetting::cShaderSetting_304(void)

{
  PTR_PTR_018e4c20 = (undefined *)vftable;
  return;
}

// 015F57E0  cShaderSetting::cShaderSetting_305  size=11  [class]
void cShaderSetting::cShaderSetting_305(void)

{
  PTR_PTR_018e4ca0 = (undefined *)vftable;
  return;
}

// 015F57F0  cShaderSetting::cShaderSetting_306  size=11  [class]
void cShaderSetting::cShaderSetting_306(void)

{
  PTR_PTR_018e4d20 = (undefined *)vftable;
  return;
}

// 015F5800  cShaderSetting::cShaderSetting_307  size=11  [class]
void cShaderSetting::cShaderSetting_307(void)

{
  PTR_PTR_018e4da0 = (undefined *)vftable;
  return;
}

// 015F5810  cShaderSetting::cShaderSetting_308  size=11  [class]
void cShaderSetting::cShaderSetting_308(void)

{
  PTR_PTR_018e4e20 = (undefined *)vftable;
  return;
}

// 015F5820  cShaderSetting::cShaderSetting_309  size=11  [class]
void cShaderSetting::cShaderSetting_309(void)

{
  PTR_PTR_018e4ea0 = (undefined *)vftable;
  return;
}

// 015F5830  cShaderSetting::cShaderSetting_310  size=11  [class]
void cShaderSetting::cShaderSetting_310(void)

{
  PTR_PTR_018e4f20 = (undefined *)vftable;
  return;
}

// 015F5840  cShaderSetting::cShaderSetting_311  size=11  [class]
void cShaderSetting::cShaderSetting_311(void)

{
  PTR_PTR_018e4fa0 = (undefined *)vftable;
  return;
}

// 015F5850  cShaderSetting::cShaderSetting_312  size=11  [class]
void cShaderSetting::cShaderSetting_312(void)

{
  PTR_PTR_018e5020 = (undefined *)vftable;
  return;
}

// 015F5860  cShaderSetting::cShaderSetting_313  size=11  [class]
void cShaderSetting::cShaderSetting_313(void)

{
  PTR_PTR_018e50a0 = (undefined *)vftable;
  return;
}

// 015F5870  cShaderSetting::cShaderSetting_314  size=11  [class]
void cShaderSetting::cShaderSetting_314(void)

{
  PTR_PTR_018e5120 = (undefined *)vftable;
  return;
}

// 015F5880  cShaderSetting::cShaderSetting_315  size=11  [class]
void cShaderSetting::cShaderSetting_315(void)

{
  PTR_PTR_018e51a0 = (undefined *)vftable;
  return;
}

// 015F5890  cShaderSetting::cShaderSetting_316  size=11  [class]
void cShaderSetting::cShaderSetting_316(void)

{
  PTR_PTR_018e5220 = (undefined *)vftable;
  return;
}

// 015F58A0  cShaderSetting::cShaderSetting_317  size=11  [class]
void cShaderSetting::cShaderSetting_317(void)

{
  PTR_PTR_018e52a0 = (undefined *)vftable;
  return;
}

// 015F58B0  cShaderSetting::cShaderSetting_318  size=11  [class]
void cShaderSetting::cShaderSetting_318(void)

{
  PTR_PTR_018e5320 = (undefined *)vftable;
  return;
}

// 015F58C0  cShaderSetting::cShaderSetting_319  size=11  [class]
void cShaderSetting::cShaderSetting_319(void)

{
  PTR_PTR_018e53a0 = (undefined *)vftable;
  return;
}

// 015F58D0  cShaderSetting::cShaderSetting_320  size=11  [class]
void cShaderSetting::cShaderSetting_320(void)

{
  PTR_PTR_018e5420 = (undefined *)vftable;
  return;
}

// 015F58E0  cShaderSetting::cShaderSetting_321  size=11  [class]
void cShaderSetting::cShaderSetting_321(void)

{
  PTR_PTR_018e54a0 = (undefined *)vftable;
  return;
}

// 015F58F0  cShaderSetting::cShaderSetting_322  size=11  [class]
void cShaderSetting::cShaderSetting_322(void)

{
  PTR_PTR_018e5520 = (undefined *)vftable;
  return;
}

// 015F5900  cShaderSetting::cShaderSetting_323  size=11  [class]
void cShaderSetting::cShaderSetting_323(void)

{
  PTR_PTR_018e55a0 = (undefined *)vftable;
  return;
}

// 015F5910  cShaderSetting::cShaderSetting_324  size=11  [class]
void cShaderSetting::cShaderSetting_324(void)

{
  PTR_PTR_018e5620 = (undefined *)vftable;
  return;
}

// 015F5920  cShaderSetting::cShaderSetting_325  size=11  [class]
void cShaderSetting::cShaderSetting_325(void)

{
  PTR_PTR_018e56a0 = (undefined *)vftable;
  return;
}

// 015F5930  cShaderSetting::cShaderSetting_326  size=11  [class]
void cShaderSetting::cShaderSetting_326(void)

{
  PTR_PTR_018e5720 = (undefined *)vftable;
  return;
}

// 015F5940  cShaderSetting::cShaderSetting_327  size=11  [class]
void cShaderSetting::cShaderSetting_327(void)

{
  PTR_PTR_018e57a0 = (undefined *)vftable;
  return;
}

// 015F5950  cShaderSetting::cShaderSetting_328  size=11  [class]
void cShaderSetting::cShaderSetting_328(void)

{
  PTR_PTR_018e5820 = (undefined *)vftable;
  return;
}

// 015F5960  cShaderSetting::cShaderSetting_329  size=11  [class]
void cShaderSetting::cShaderSetting_329(void)

{
  PTR_PTR_018e58a0 = (undefined *)vftable;
  return;
}

// 015F5970  cShaderSetting::cShaderSetting_330  size=11  [class]
void cShaderSetting::cShaderSetting_330(void)

{
  PTR_PTR_018e5920 = (undefined *)vftable;
  return;
}

// 015F5980  cShaderSetting::cShaderSetting_331  size=11  [class]
void cShaderSetting::cShaderSetting_331(void)

{
  PTR_PTR_018e59a0 = (undefined *)vftable;
  return;
}

// 015F5990  cShaderSetting::cShaderSetting_332  size=11  [class]
void cShaderSetting::cShaderSetting_332(void)

{
  PTR_PTR_018e5a20 = (undefined *)vftable;
  return;
}

// 015F59A0  cShaderSetting::cShaderSetting_333  size=11  [class]
void cShaderSetting::cShaderSetting_333(void)

{
  PTR_PTR_018e5aa0 = (undefined *)vftable;
  return;
}

// 015F59B0  cShaderSetting::cShaderSetting_334  size=11  [class]
void cShaderSetting::cShaderSetting_334(void)

{
  PTR_PTR_018e5b20 = (undefined *)vftable;
  return;
}

// 015F59C0  cShaderSetting::cShaderSetting_335  size=11  [class]
void cShaderSetting::cShaderSetting_335(void)

{
  PTR_PTR_018e5ba0 = (undefined *)vftable;
  return;
}

// 015F59D0  cShaderSetting::cShaderSetting_336  size=11  [class]
void cShaderSetting::cShaderSetting_336(void)

{
  PTR_PTR_018e5c20 = (undefined *)vftable;
  return;
}

// 015F59E0  cShaderSetting::cShaderSetting_337  size=11  [class]
void cShaderSetting::cShaderSetting_337(void)

{
  PTR_PTR_018e5ca0 = (undefined *)vftable;
  return;
}

// 015F59F0  cShaderSetting::cShaderSetting_338  size=11  [class]
void cShaderSetting::cShaderSetting_338(void)

{
  PTR_PTR_018e5d20 = (undefined *)vftable;
  return;
}

// 015F5A00  cShaderSetting::cShaderSetting_339  size=11  [class]
void cShaderSetting::cShaderSetting_339(void)

{
  PTR_PTR_018e5da0 = (undefined *)vftable;
  return;
}

// 015F5A10  cShaderSetting::cShaderSetting_340  size=11  [class]
void cShaderSetting::cShaderSetting_340(void)

{
  PTR_PTR_018e5e20 = (undefined *)vftable;
  return;
}

// 015F5A20  cShaderSetting::cShaderSetting_341  size=11  [class]
void cShaderSetting::cShaderSetting_341(void)

{
  PTR_PTR_018e5ea0 = (undefined *)vftable;
  return;
}

// 015F5A30  cShaderSetting::cShaderSetting_342  size=11  [class]
void cShaderSetting::cShaderSetting_342(void)

{
  PTR_PTR_018e5f20 = (undefined *)vftable;
  return;
}

// 015F5A40  cShaderSetting::cShaderSetting_343  size=11  [class]
void cShaderSetting::cShaderSetting_343(void)

{
  PTR_PTR_018e5fa0 = (undefined *)vftable;
  return;
}

// 015F5A50  cShaderSetting::cShaderSetting_344  size=11  [class]
void cShaderSetting::cShaderSetting_344(void)

{
  PTR_PTR_018e6020 = (undefined *)vftable;
  return;
}

// 015F5A60  cShaderSetting::cShaderSetting_345  size=11  [class]
void cShaderSetting::cShaderSetting_345(void)

{
  PTR_PTR_018e60a0 = (undefined *)vftable;
  return;
}

// 015F5A70  cShaderSetting::cShaderSetting_346  size=11  [class]
void cShaderSetting::cShaderSetting_346(void)

{
  PTR_PTR_018e6120 = (undefined *)vftable;
  return;
}

// 015F5A80  cShaderSetting::cShaderSetting_347  size=11  [class]
void cShaderSetting::cShaderSetting_347(void)

{
  PTR_PTR_018e61a0 = (undefined *)vftable;
  return;
}

// 015F5A90  cShaderSetting::cShaderSetting_348  size=11  [class]
void cShaderSetting::cShaderSetting_348(void)

{
  PTR_PTR_018e6220 = (undefined *)vftable;
  return;
}

// 015F5AA0  cShaderSetting::cShaderSetting_349  size=11  [class]
void cShaderSetting::cShaderSetting_349(void)

{
  PTR_PTR_018e62a0 = (undefined *)vftable;
  return;
}

// 015F5AB0  cShaderSetting::cShaderSetting_350  size=11  [class]
void cShaderSetting::cShaderSetting_350(void)

{
  PTR_PTR_018e6320 = (undefined *)vftable;
  return;
}

// 015F5AC0  cShaderSetting::cShaderSetting_351  size=11  [class]
void cShaderSetting::cShaderSetting_351(void)

{
  PTR_PTR_018e63a0 = (undefined *)vftable;
  return;
}

// 015F5AD0  cShaderSetting::cShaderSetting_352  size=11  [class]
void cShaderSetting::cShaderSetting_352(void)

{
  PTR_PTR_018e6420 = (undefined *)vftable;
  return;
}

// 015F5AE0  cShaderSetting::cShaderSetting_353  size=11  [class]
void cShaderSetting::cShaderSetting_353(void)

{
  PTR_PTR_018e64a0 = (undefined *)vftable;
  return;
}

// 015F5AF0  cShaderSetting::cShaderSetting_354  size=11  [class]
void cShaderSetting::cShaderSetting_354(void)

{
  PTR_PTR_018e6520 = (undefined *)vftable;
  return;
}

// 015F5B00  cShaderSetting::cShaderSetting_355  size=11  [class]
void cShaderSetting::cShaderSetting_355(void)

{
  PTR_PTR_018e65a0 = (undefined *)vftable;
  return;
}

// 015F5B10  cShaderSetting::cShaderSetting_356  size=11  [class]
void cShaderSetting::cShaderSetting_356(void)

{
  PTR_PTR_018e6620 = (undefined *)vftable;
  return;
}

// 015F5B20  cShaderSetting::cShaderSetting_357  size=11  [class]
void cShaderSetting::cShaderSetting_357(void)

{
  PTR_PTR_018e66a0 = (undefined *)vftable;
  return;
}

// 015F5B30  cShaderSetting::cShaderSetting_358  size=11  [class]
void cShaderSetting::cShaderSetting_358(void)

{
  PTR_PTR_018e6720 = (undefined *)vftable;
  return;
}

// 015F5B40  cShaderSetting::cShaderSetting_359  size=11  [class]
void cShaderSetting::cShaderSetting_359(void)

{
  PTR_PTR_018e67a0 = (undefined *)vftable;
  return;
}

// 015F5B50  cShaderSetting::cShaderSetting_360  size=11  [class]
void cShaderSetting::cShaderSetting_360(void)

{
  PTR_PTR_018e6820 = (undefined *)vftable;
  return;
}

// 015F5B60  cShaderSetting::cShaderSetting_361  size=11  [class]
void cShaderSetting::cShaderSetting_361(void)

{
  PTR_PTR_018e68a0 = (undefined *)vftable;
  return;
}

// 015F5B70  cShaderSetting::cShaderSetting_362  size=11  [class]
void cShaderSetting::cShaderSetting_362(void)

{
  PTR_PTR_018e6920 = (undefined *)vftable;
  return;
}

// 015F5B80  cShaderSetting::cShaderSetting_363  size=11  [class]
void cShaderSetting::cShaderSetting_363(void)

{
  PTR_PTR_018e69a0 = (undefined *)vftable;
  return;
}

// 015F5B90  cShaderSetting::cShaderSetting_364  size=11  [class]
void cShaderSetting::cShaderSetting_364(void)

{
  PTR_PTR_018e6a20 = (undefined *)vftable;
  return;
}

// 015F5BA0  cShaderSetting::cShaderSetting_365  size=11  [class]
void cShaderSetting::cShaderSetting_365(void)

{
  PTR_PTR_018e6aa0 = (undefined *)vftable;
  return;
}

// 015F5BB0  cShaderSetting::cShaderSetting_366  size=11  [class]
void cShaderSetting::cShaderSetting_366(void)

{
  PTR_PTR_018e6b20 = (undefined *)vftable;
  return;
}

// 015F5BC0  cShaderSetting::cShaderSetting_367  size=11  [class]
void cShaderSetting::cShaderSetting_367(void)

{
  PTR_PTR_018e6ba0 = (undefined *)vftable;
  return;
}

// 015F5BD0  cShaderSetting::cShaderSetting_368  size=11  [class]
void cShaderSetting::cShaderSetting_368(void)

{
  PTR_PTR_018e6c20 = (undefined *)vftable;
  return;
}

// 015F5BE0  cShaderSetting::cShaderSetting_369  size=11  [class]
void cShaderSetting::cShaderSetting_369(void)

{
  PTR_PTR_018e6ca0 = (undefined *)vftable;
  return;
}

// 015F5BF0  cShaderSetting::cShaderSetting_370  size=11  [class]
void cShaderSetting::cShaderSetting_370(void)

{
  PTR_PTR_018e6d20 = (undefined *)vftable;
  return;
}

// 015F5C00  cShaderSetting::cShaderSetting_371  size=11  [class]
void cShaderSetting::cShaderSetting_371(void)

{
  PTR_PTR_018e6da0 = (undefined *)vftable;
  return;
}

// 015F5C10  cShaderSetting::cShaderSetting_372  size=11  [class]
void cShaderSetting::cShaderSetting_372(void)

{
  PTR_PTR_018e6e20 = (undefined *)vftable;
  return;
}

// 015F5C20  cShaderSetting::cShaderSetting_373  size=11  [class]
void cShaderSetting::cShaderSetting_373(void)

{
  PTR_PTR_018e6ea0 = (undefined *)vftable;
  return;
}

// 015F5C30  cShaderSetting::cShaderSetting_374  size=11  [class]
void cShaderSetting::cShaderSetting_374(void)

{
  PTR_PTR_018e6f20 = (undefined *)vftable;
  return;
}

// 015F5C40  cShaderSetting::cShaderSetting_375  size=11  [class]
void cShaderSetting::cShaderSetting_375(void)

{
  PTR_PTR_018e6fa0 = (undefined *)vftable;
  return;
}

// 015F5C50  cShaderSetting::cShaderSetting_376  size=11  [class]
void cShaderSetting::cShaderSetting_376(void)

{
  PTR_PTR_018e7020 = (undefined *)vftable;
  return;
}

// 015F5C60  cShaderSetting::cShaderSetting_377  size=11  [class]
void cShaderSetting::cShaderSetting_377(void)

{
  PTR_PTR_018e70a0 = (undefined *)vftable;
  return;
}

// 015F5C70  cShaderSetting::cShaderSetting_378  size=11  [class]
void cShaderSetting::cShaderSetting_378(void)

{
  PTR_PTR_018e7120 = (undefined *)vftable;
  return;
}

// 015F5C80  cShaderSetting::cShaderSetting_379  size=11  [class]
void cShaderSetting::cShaderSetting_379(void)

{
  PTR_PTR_018e71a0 = (undefined *)vftable;
  return;
}

// 015F5C90  cShaderSetting::cShaderSetting_380  size=11  [class]
void cShaderSetting::cShaderSetting_380(void)

{
  PTR_PTR_018e7220 = (undefined *)vftable;
  return;
}

// 015F5CA0  cShaderSetting::cShaderSetting_381  size=11  [class]
void cShaderSetting::cShaderSetting_381(void)

{
  PTR_PTR_018e72a0 = (undefined *)vftable;
  return;
}

// 015F5CB0  cShaderSetting::cShaderSetting_382  size=11  [class]
void cShaderSetting::cShaderSetting_382(void)

{
  PTR_PTR_018e7320 = (undefined *)vftable;
  return;
}

// 015F5CC0  cShaderSetting::cShaderSetting_383  size=11  [class]
void cShaderSetting::cShaderSetting_383(void)

{
  PTR_PTR_018e73a0 = (undefined *)vftable;
  return;
}

// 015F5CD0  cShaderSetting::cShaderSetting_384  size=11  [class]
void cShaderSetting::cShaderSetting_384(void)

{
  PTR_PTR_018e7420 = (undefined *)vftable;
  return;
}

// 015F5CE0  cShaderSetting::cShaderSetting_385  size=11  [class]
void cShaderSetting::cShaderSetting_385(void)

{
  PTR_PTR_018e74a0 = (undefined *)vftable;
  return;
}

// 015F5CF0  cShaderSetting::cShaderSetting_386  size=11  [class]
void cShaderSetting::cShaderSetting_386(void)

{
  PTR_PTR_018e77f0 = (undefined *)vftable;
  return;
}

// 015F5D00  cShaderSetting::cShaderSetting_387  size=11  [class]
void cShaderSetting::cShaderSetting_387(void)

{
  PTR_PTR_018e7868 = (undefined *)vftable;
  return;
}

// 015F5D10  cShaderSetting::cShaderSetting_388  size=11  [class]
void cShaderSetting::cShaderSetting_388(void)

{
  PTR_PTR_018e78e0 = (undefined *)vftable;
  return;
}

// 015F5D20  cShaderSetting::cShaderSetting_389  size=11  [class]
void cShaderSetting::cShaderSetting_389(void)

{
  PTR_PTR_018e7958 = (undefined *)vftable;
  return;
}

// 015F5D30  cShaderSetting::cShaderSetting_390  size=21  [class]
void cShaderSetting::cShaderSetting_390(void)

{
  Hw::cTexture::cTexture_5();
  PTR_PTR_018e79d0 = (undefined *)vftable;
  return;
}

// 015F5D50  cShaderSetting::cShaderSetting_391  size=11  [class]
void cShaderSetting::cShaderSetting_391(void)

{
  PTR_PTR_018e7a68 = (undefined *)vftable;
  return;
}

// 015F5D60  cShaderSetting::cShaderSetting_392  size=11  [class]
void cShaderSetting::cShaderSetting_392(void)

{
  PTR_PTR_018e7ae0 = (undefined *)vftable;
  return;
}

// 015F5D70  cShaderSetting::cShaderSetting_393  size=11  [class]
void cShaderSetting::cShaderSetting_393(void)

{
  PTR_PTR_018e7b58 = (undefined *)vftable;
  return;
}

// 015F5D80  cShaderSetting::cShaderSetting_394  size=11  [class]
void cShaderSetting::cShaderSetting_394(void)

{
  PTR_PTR_018e7bd0 = (undefined *)vftable;
  return;
}

// 015F5D90  cShaderSetting::cShaderSetting_395  size=11  [class]
void cShaderSetting::cShaderSetting_395(void)

{
  PTR_PTR_018e7c48 = (undefined *)vftable;
  return;
}

// 015F5DA0  cShaderSetting::cShaderSetting_396  size=11  [class]
void cShaderSetting::cShaderSetting_396(void)

{
  PTR_PTR_018e7cc0 = (undefined *)vftable;
  return;
}

// 015F5DB0  cShaderSetting::cShaderSetting_397  size=11  [class]
void cShaderSetting::cShaderSetting_397(void)

{
  PTR_PTR_018e7d38 = (undefined *)vftable;
  return;
}

// 015F5DC0  cShaderSetting::cShaderSetting_398  size=11  [class]
void cShaderSetting::cShaderSetting_398(void)

{
  PTR_PTR_018e7db0 = (undefined *)vftable;
  return;
}

// 015F5DD0  FUN_015f5dd0  size=10  [between]
void FUN_015f5dd0(void)

{
  FUN_00dd7270();
  return;
}

// 015F5DE0  cShaderSetting::cShaderSetting_399  size=11  [class]
void cShaderSetting::cShaderSetting_399(void)

{
  PTR_PTR_018e7e28 = (undefined *)vftable;
  return;
}

// 015F5DF0  cShaderSetting::cShaderSetting_400  size=11  [class]
void cShaderSetting::cShaderSetting_400(void)

{
  PTR_PTR_018e7ed8 = (undefined *)vftable;
  return;
}

// 015F5E00  cShaderSetting::cShaderSetting_401  size=21  [class]
void cShaderSetting::cShaderSetting_401(void)

{
  Hw::cTexture::cTexture_5();
  PTR_PTR_018e7f50 = (undefined *)vftable;
  return;
}

// 015F5E20  cShaderSetting::cShaderSetting_402  size=11  [class]
void cShaderSetting::cShaderSetting_402(void)

{
  PTR_PTR_018e7fe8 = (undefined *)vftable;
  return;
}

// 015F5E30  cShaderSetting::cShaderSetting_403  size=11  [class]
void cShaderSetting::cShaderSetting_403(void)

{
  PTR_PTR_018e8060 = (undefined *)vftable;
  return;
}

// 015F5E40  cShaderSetting::cShaderSetting_404  size=11  [class]
void cShaderSetting::cShaderSetting_404(void)

{
  PTR_PTR_018e80d8 = (undefined *)vftable;
  return;
}

// 015F5E50  cShaderSetting::cShaderSetting_405  size=11  [class]
void cShaderSetting::cShaderSetting_405(void)

{
  PTR_PTR_018e8150 = (undefined *)vftable;
  return;
}

// 015F5E60  cShaderSetting::cShaderSetting_406  size=11  [class]
void cShaderSetting::cShaderSetting_406(void)

{
  PTR_PTR_018e8240 = (undefined *)vftable;
  return;
}

// 015F5E70  cShaderSetting::cShaderSetting_407  size=11  [class]
void cShaderSetting::cShaderSetting_407(void)

{
  PTR_PTR_018e8338 = (undefined *)vftable;
  return;
}

// 015F5E80  cShaderSetting::cShaderSetting_408  size=11  [class]
void cShaderSetting::cShaderSetting_408(void)

{
  PTR_PTR_018e83b8 = (undefined *)vftable;
  return;
}

// 015F5ED0  cShaderSetting::cShaderSetting_409  size=11  [class]
void cShaderSetting::cShaderSetting_409(void)

{
  PTR_PTR_018dd760 = (undefined *)vftable;
  return;
}

// 015F5EE0  cShaderSetting::cShaderSetting_410  size=11  [class]
void cShaderSetting::cShaderSetting_410(void)

{
  PTR_PTR_018dd7d8 = (undefined *)vftable;
  return;
}

// 015F5EF0  cShaderSetting::cShaderSetting_411  size=11  [class]
void cShaderSetting::cShaderSetting_411(void)

{
  PTR_PTR_018dd850 = (undefined *)vftable;
  return;
}

// 015F5F00  cShaderSetting::cShaderSetting_412  size=11  [class]
void cShaderSetting::cShaderSetting_412(void)

{
  PTR_PTR_018dd8c8 = (undefined *)vftable;
  return;
}

// 015F5F10  cShaderSetting::cShaderSetting_413  size=11  [class]
void cShaderSetting::cShaderSetting_413(void)

{
  PTR_PTR_018dd940 = (undefined *)vftable;
  return;
}

// 015F5F20  cShaderSetting::cShaderSetting_414  size=11  [class]
void cShaderSetting::cShaderSetting_414(void)

{
  PTR_PTR_018dd9b8 = (undefined *)vftable;
  return;
}

// 015F5F30  cShaderSetting::cShaderSetting_415  size=11  [class]
void cShaderSetting::cShaderSetting_415(void)

{
  PTR_PTR_018dda30 = (undefined *)vftable;
  return;
}

// 015F5F40  cShaderSetting::cShaderSetting_416  size=11  [class]
void cShaderSetting::cShaderSetting_416(void)

{
  PTR_PTR_018ddaa8 = (undefined *)vftable;
  return;
}

// 015F5F50  cShaderSetting::cShaderSetting_417  size=11  [class]
void cShaderSetting::cShaderSetting_417(void)

{
  PTR_PTR_018ddba0 = (undefined *)vftable;
  return;
}

// 015F5F60  cShaderSetting::cShaderSetting_418  size=11  [class]
void cShaderSetting::cShaderSetting_418(void)

{
  PTR_PTR_018ddc20 = (undefined *)vftable;
  return;
}

// 015F5F70  cShaderSetting::cShaderSetting_419  size=11  [class]
void cShaderSetting::cShaderSetting_419(void)

{
  PTR_PTR_018ddca0 = (undefined *)vftable;
  return;
}

// 015F5F80  cShaderSetting::cShaderSetting_420  size=11  [class]
void cShaderSetting::cShaderSetting_420(void)

{
  PTR_PTR_018ddd20 = (undefined *)vftable;
  return;
}

// 015F5F90  cShaderSetting::cShaderSetting_421  size=11  [class]
void cShaderSetting::cShaderSetting_421(void)

{
  PTR_PTR_018ddda0 = (undefined *)vftable;
  return;
}

// 015F5FA0  cShaderSetting::cShaderSetting_422  size=11  [class]
void cShaderSetting::cShaderSetting_422(void)

{
  PTR_PTR_018dde20 = (undefined *)vftable;
  return;
}

// 015F5FB0  cShaderSetting::cShaderSetting_423  size=11  [class]
void cShaderSetting::cShaderSetting_423(void)

{
  PTR_PTR_018ddea0 = (undefined *)vftable;
  return;
}

// 015F5FC0  cShaderSetting::cShaderSetting_424  size=11  [class]
void cShaderSetting::cShaderSetting_424(void)

{
  PTR_PTR_018ddf20 = (undefined *)vftable;
  return;
}

// 015F5FD0  cShaderSetting::cShaderSetting_425  size=11  [class]
void cShaderSetting::cShaderSetting_425(void)

{
  PTR_PTR_018ddfa0 = (undefined *)vftable;
  return;
}

// 015F5FE0  cShaderSetting::cShaderSetting_426  size=11  [class]
void cShaderSetting::cShaderSetting_426(void)

{
  PTR_PTR_018de020 = (undefined *)vftable;
  return;
}

// 015F5FF0  cShaderSetting::cShaderSetting_427  size=11  [class]
void cShaderSetting::cShaderSetting_427(void)

{
  PTR_PTR_018de0a0 = (undefined *)vftable;
  return;
}

// 015F6000  cShaderSetting::cShaderSetting_428  size=11  [class]
void cShaderSetting::cShaderSetting_428(void)

{
  PTR_PTR_018de120 = (undefined *)vftable;
  return;
}

// 015F6010  cShaderSetting::cShaderSetting_429  size=11  [class]
void cShaderSetting::cShaderSetting_429(void)

{
  PTR_PTR_018de1a0 = (undefined *)vftable;
  return;
}

// 015F6020  cShaderSetting::cShaderSetting_430  size=11  [class]
void cShaderSetting::cShaderSetting_430(void)

{
  PTR_PTR_018de220 = (undefined *)vftable;
  return;
}

// 015F6030  cShaderSetting::cShaderSetting_431  size=11  [class]
void cShaderSetting::cShaderSetting_431(void)

{
  PTR_PTR_018de2a0 = (undefined *)vftable;
  return;
}

// 015F6040  cShaderSetting::cShaderSetting_432  size=11  [class]
void cShaderSetting::cShaderSetting_432(void)

{
  PTR_PTR_018de320 = (undefined *)vftable;
  return;
}

// 015F6050  cShaderSetting::cShaderSetting_433  size=11  [class]
void cShaderSetting::cShaderSetting_433(void)

{
  PTR_PTR_018de3a0 = (undefined *)vftable;
  return;
}

// 015F6060  cShaderSetting::cShaderSetting_434  size=11  [class]
void cShaderSetting::cShaderSetting_434(void)

{
  PTR_PTR_018de420 = (undefined *)vftable;
  return;
}

// 015F6070  cShaderSetting::cShaderSetting_435  size=11  [class]
void cShaderSetting::cShaderSetting_435(void)

{
  PTR_PTR_018e7598 = (undefined *)vftable;
  return;
}

// 015F6080  cShaderSetting::cShaderSetting_436  size=11  [class]
void cShaderSetting::cShaderSetting_436(void)

{
  PTR_PTR_018e7610 = (undefined *)vftable;
  return;
}

// 015F6090  cShaderSetting::cShaderSetting_437  size=11  [class]
void cShaderSetting::cShaderSetting_437(void)

{
  PTR_PTR_018e7688 = (undefined *)vftable;
  return;
}

// 015F60A0  cShaderSetting::cShaderSetting_438  size=11  [class]
void cShaderSetting::cShaderSetting_438(void)

{
  PTR_PTR_018e7700 = (undefined *)vftable;
  return;
}

// 015F60B0  cShaderSetting::cShaderSetting_439  size=11  [class]
void cShaderSetting::cShaderSetting_439(void)

{
  PTR_PTR_018e7778 = (undefined *)vftable;
  return;
}

// 015F60C0  cShaderSetting::cShaderSetting_440  size=11  [class]
void cShaderSetting::cShaderSetting_440(void)

{
  PTR_PTR_018e81c8 = (undefined *)vftable;
  return;
}

// 015F60D0  cShaderSetting::cShaderSetting_441  size=11  [class]
void cShaderSetting::cShaderSetting_441(void)

{
  PTR_PTR_018e82b8 = (undefined *)vftable;
  return;
}

// 015F60E0  FUN_015f60e0  size=20  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015f60e0(void)

{
  _DAT_01f722c8 = &PTR_FUN_016f2370;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F6100  FUN_015f6100  size=20  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015f6100(void)

{
  _DAT_01f722f0 = &PTR_FUN_016f2370;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F6120  FUN_015f6120  size=20  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015f6120(void)

{
  _DAT_01f72318 = &PTR_FUN_016f2370;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F6140  FUN_015f6140  size=20  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015f6140(void)

{
  _DAT_01f72340 = &PTR_FUN_016f2370;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F6160  FUN_015f6160  size=20  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015f6160(void)

{
  _DAT_01f72368 = &PTR_FUN_016f2370;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F6180  FUN_015f6180  size=20  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015f6180(void)

{
  _DAT_01f72390 = &PTR_FUN_016f2370;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F61A0  FUN_015f61a0  size=20  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015f61a0(void)

{
  _DAT_01f724b8 = &PTR_FUN_016f2378;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F61C0  FUN_015f61c0  size=20  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015f61c0(void)

{
  _DAT_01f724e0 = &PTR_FUN_016f2378;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F61E0  FUN_015f61e0  size=20  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015f61e0(void)

{
  _DAT_01f72508 = &PTR_FUN_016f2378;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F6200  FUN_015f6200  size=20  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015f6200(void)

{
  _DAT_01f72530 = &PTR_FUN_016f2378;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F6220  FUN_015f6220  size=20  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015f6220(void)

{
  _DAT_01f72558 = &PTR_FUN_016f2378;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F6240  FUN_015f6240  size=20  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015f6240(void)

{
  _DAT_01f72580 = &PTR_FUN_016f2378;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F6260  FUN_015f6260  size=20  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015f6260(void)

{
  _DAT_01f727a4 = &PTR_FUN_016f23c8;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F6280  FUN_015f6280  size=20  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015f6280(void)

{
  _DAT_01f727cc = &PTR_FUN_016f23c8;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F62A0  FUN_015f62a0  size=20  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015f62a0(void)

{
  _DAT_01f727f4 = &PTR_FUN_016f23c8;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F62C0  FUN_015f62c0  size=20  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015f62c0(void)

{
  _DAT_01f7281c = &PTR_FUN_016f23c8;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F62E0  FUN_015f62e0  size=20  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015f62e0(void)

{
  _DAT_01f72844 = &PTR_FUN_016f23c8;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F6300  FUN_015f6300  size=20  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015f6300(void)

{
  _DAT_01f7286c = &PTR_FUN_016f23c8;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F6320  FUN_015f6320  size=20  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015f6320(void)

{
  _DAT_01f72894 = &PTR_FUN_016f23c8;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F6340  FUN_015f6340  size=20  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015f6340(void)

{
  _DAT_01f8be4c = &PTR_FUN_016f23d0;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F6360  FUN_015f6360  size=20  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015f6360(void)

{
  _DAT_01f8be74 = &PTR_FUN_016f23d0;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F6380  FUN_015f6380  size=20  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015f6380(void)

{
  _DAT_01f8be9c = &PTR_FUN_016f23d0;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F63A0  cShaderSetting::cShaderSetting_442  size=11  [class]
void cShaderSetting::cShaderSetting_442(void)

{
  PTR_PTR_018ddb20 = (undefined *)vftable;
  return;
}

// 015F63B0  cShaderSetting::cShaderSetting_443  size=11  [class]
void cShaderSetting::cShaderSetting_443(void)

{
  PTR_PTR_018e7520 = (undefined *)vftable;
  return;
}


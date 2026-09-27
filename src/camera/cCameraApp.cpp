// src/camera/cCameraApp.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C407C0..00DC0CE0, 5 functions

#include "mgrr.h"
#include "cCameraApp.h"

// 00C407C0  cCameraApp::vf00  size=11  [class]
void cCameraApp::vf00(void)

{
  vf00();
  return;
}

// 00C407D0  cCameraApp::vf00  size=41  [class]
undefined4 * __thiscall cCameraApp::vf00(undefined4 *param_1,byte param_2)

{
  param_1[0xb0] = cCameraFrustum::vftable;
  *param_1 = Hw::CameraProj::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00DC09A0  cCameraApp::vf08  size=745  [class]
void __fastcall cCameraApp::vf08(int param_1)

{
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  FUN_00da8390();
  *(undefined4 *)(param_1 + 0x4f8) = 0x3f5f66f3;
  *(undefined4 *)(param_1 + 0x4a8) = 0x3f5f66f3;
  *(undefined4 *)(param_1 + 0x94) = 0x3f5f66f3;
  *(undefined4 *)(param_1 + 0x4f0) = 0;
  *(undefined4 *)(param_1 + 0x6a8) = 0;
  *(undefined4 *)(param_1 + 0x6a4) = 0x3e4ccccd;
  *(undefined4 *)(param_1 + 0x6b0) = 1;
  *(undefined4 *)(param_1 + 0x6ac) = 1;
  *(undefined4 *)(param_1 + 0x6b4) = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0x3f000000;
  local_18 = 0;
  FUN_00da11a0(&local_20,&local_30,0x40000000);
  *(undefined4 *)(param_1 + 0x37c) = 0;
  *(undefined4 *)(param_1 + 0x380) = 0;
  FUN_00da01f0(param_1 + 0x460);
  FUN_00db7e00();
  FUN_00de5aa0();
  FUN_00de5170();
  FUN_00de5560(*(undefined4 *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x98),
               *(undefined4 *)(param_1 + 0x9c),0x10,9);
  *(undefined4 *)(param_1 + 0x4f4) = 0x40500000;
  *(undefined4 *)(param_1 + 0x4a4) = 0x40500000;
  *(undefined4 *)(param_1 + 0x500) = 1;
  *(undefined4 *)(param_1 + 0x510) = 0;
  *(undefined4 *)(param_1 + 0x514) = 0;
  *(undefined4 *)(param_1 + 0x518) = 0;
  *(undefined4 *)(param_1 + 0x51c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x52c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x520) = 0;
  *(undefined4 *)(param_1 + 0x524) = 0;
  *(undefined4 *)(param_1 + 0x528) = 0;
  *(undefined4 *)(param_1 + 0x3c8) = 0;
  *(undefined4 *)(param_1 + 0x3c4) = 0;
  *(undefined4 *)(param_1 + 0x3c0) = 0;
  *(undefined4 *)(param_1 + 0x3bc) = 0;
  *(undefined4 *)(param_1 + 0x3b4) = 0;
  *(undefined4 *)(param_1 + 0x3b0) = 0;
  *(undefined4 *)(param_1 + 0x3ac) = 0;
  *(undefined4 *)(param_1 + 0x3a8) = 0;
  *(undefined4 *)(param_1 + 0x3a0) = 0;
  *(undefined4 *)(param_1 + 0x39c) = 0;
  *(undefined4 *)(param_1 + 0x398) = 0;
  *(undefined4 *)(param_1 + 0x394) = 0;
  *(undefined4 *)(param_1 + 0x3cc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x3b8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x3a4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x390) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x40c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x3f8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x3e4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x3d0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x408) = 0;
  *(undefined4 *)(param_1 + 0x404) = 0;
  *(undefined4 *)(param_1 + 0x400) = 0;
  *(undefined4 *)(param_1 + 0x3fc) = 0;
  *(undefined4 *)(param_1 + 0x3f4) = 0;
  *(undefined4 *)(param_1 + 0x3f0) = 0;
  *(undefined4 *)(param_1 + 0x3ec) = 0;
  *(undefined4 *)(param_1 + 1000) = 0;
  *(undefined4 *)(param_1 + 0x3e0) = 0;
  *(undefined4 *)(param_1 + 0x3dc) = 0;
  *(undefined4 *)(param_1 + 0x3d8) = 0;
  *(undefined4 *)(param_1 + 0x3d4) = 0;
  *(undefined4 *)(param_1 + 0x5d4) = 0;
  if (*(int *)(param_1 + 0x570) != 0) {
    *(undefined4 *)(param_1 + 0x490) = *(undefined4 *)(param_1 + 0x610);
    *(undefined4 *)(param_1 + 0x494) = *(undefined4 *)(param_1 + 0x614);
    *(undefined4 *)(param_1 + 0x498) = *(undefined4 *)(param_1 + 0x618);
    *(undefined4 *)(param_1 + 0x49c) = *(undefined4 *)(param_1 + 0x61c);
    *(undefined4 *)(param_1 + 0x4e0) = *(undefined4 *)(param_1 + 0x490);
    *(undefined4 *)(param_1 + 0x4e4) = *(undefined4 *)(param_1 + 0x494);
    *(undefined4 *)(param_1 + 0x4e8) = *(undefined4 *)(param_1 + 0x498);
    *(undefined4 *)(param_1 + 0x4ec) = *(undefined4 *)(param_1 + 0x49c);
  }
  *(undefined4 *)(param_1 + 0x6d8) = 0;
  *(undefined4 *)(param_1 + 0x570) = 0;
  *(undefined4 *)(param_1 + 900) = 0;
  *(undefined4 *)(param_1 + 0x530) = 0;
  *(undefined4 *)(param_1 + 0x540) = 0;
  *(undefined4 *)(param_1 + 0x544) = 0;
  *(undefined4 *)(param_1 + 0x548) = 0;
  *(undefined4 *)(param_1 + 0x54c) = local_14;
  *(undefined4 *)(param_1 + 0x550) = 0;
  *(undefined4 *)(param_1 + 0x554) = 0;
  *(undefined4 *)(param_1 + 0x558) = 0;
  *(undefined4 *)(param_1 + 0x55c) = local_14;
  *(undefined4 *)(param_1 + 0x560) = 0;
  *(undefined4 *)(param_1 + 0x564) = 0;
  return;
}

// 00DC0C90  cCameraApp::vf0C  size=69  [class]
void __fastcall cCameraApp::vf0C(int param_1)

{
  FUN_00a7c970(0);
  *(undefined4 *)(param_1 + 0x374) = 0;
  *(undefined4 *)(param_1 + 0x378) = 0;
  *(undefined1 *)(param_1 + 0x5d0) = 0;
  *(undefined4 *)(param_1 + 0x580) = 0;
  *(undefined4 *)(param_1 + 0x5d4) = 0;
  *(undefined4 *)(param_1 + 0x584) = 1;
  *(undefined4 *)(param_1 + 0x570) = 0;
  return;
}

// 00DC0CE0  FUN_00dc0ce0  size=573  [callgraph]
void __fastcall FUN_00dc0ce0(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uStack_14;
  
  cCameraApp::vf08();
  *(undefined4 *)(param_1 + 0x6e0) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x8e8) = 0x41f00000;
  *(undefined4 *)(param_1 + 0x8bc) = 1;
  *(undefined4 *)(param_1 + 0x8f4) = 0;
  *(undefined4 *)(param_1 + 0x928) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x8ec) = 0;
  *(undefined4 *)(param_1 + 0x920) = 0;
  *(undefined4 *)(param_1 + 0x464) = 0x3fb33333;
  *(undefined4 *)(param_1 + 0x924) = 0;
  *(undefined4 *)(param_1 + 0x474) = 0x3fb33333;
  *(undefined4 *)(param_1 + 0x8e0) = 0;
  *(undefined4 *)(param_1 + 0x4b4) = 0x3fb33333;
  *(undefined4 *)(param_1 + 0x8cc) = 0;
  *(undefined4 *)(param_1 + 0x4c4) = 0x3fb33333;
  *(undefined4 *)(param_1 + 0x8d0) = 0;
  *(undefined4 *)(param_1 + 0x8c8) = 0;
  *(undefined4 *)(param_1 + 0x8d4) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x584) = 1;
  *(undefined4 *)(param_1 + 0x690) = 0;
  *(undefined4 *)(param_1 + 0x8d8) = 0x40400000;
  *(undefined4 *)(param_1 + 0x8b4) = 0;
  *(undefined4 *)(param_1 + 0x8dc) = 0;
  *(undefined4 *)(param_1 + 0x8c0) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x8c4) = 0;
  *(undefined4 *)(param_1 + 0x8b8) = 0;
  *(undefined4 *)(param_1 + 0x8e4) = *(undefined4 *)(param_1 + 0x6e0);
  FUN_00da8dd0();
  *(undefined4 *)(param_1 + 0x770) = 0;
  *(undefined4 *)(param_1 + 0x790) = 0;
  *(undefined4 *)(param_1 + 0x804) = 1;
  *(undefined4 *)(param_1 + 0x794) = 0;
  *(undefined4 *)(param_1 + 0x814) = 0;
  *(undefined4 *)(param_1 + 0x778) = 0;
  *(undefined4 *)(param_1 + 0x530) = 0;
  *(undefined4 *)(param_1 + 0x77c) = 0;
  *(undefined4 *)(param_1 + 0x950) = 0;
  *(undefined4 *)(param_1 + 0x780) = 0;
  *(undefined4 *)(param_1 + 0x784) = 0;
  *(undefined4 *)(param_1 + 0x788) = 0;
  *(undefined4 *)(param_1 + 0x78c) = 0;
  *(undefined4 *)(param_1 + 0x7dc) = 0;
  *(undefined4 *)(param_1 + 0x7e0) = 0;
  *(undefined4 *)(param_1 + 0x7e4) = 0xbf47ae15;
  *(undefined4 *)(param_1 + 0x7e8) = 0x3f8a3d71;
  *(undefined4 *)(param_1 + 0x7ec) = 0;
  *(undefined4 *)(param_1 + 0x7f4) = 0x402ccccd;
  *(undefined4 *)(param_1 + 0x8b0) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x800) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x808) = 0;
  *(undefined4 *)(param_1 + 0x7c4) = 0;
  *(undefined4 *)(param_1 + 0x818) = 0;
  uVar1 = FUN_00dd3500(0x350,&DAT_01b7bd48);
  *(undefined4 *)(param_1 + 0x6e8) = uVar1;
  FUN_00db22f0();
  puVar2 = (undefined4 *)FUN_00dd3500(0x6c,&DAT_01b7bd48);
  uVar1 = *(undefined4 *)(param_1 + 0x6e8);
  *(undefined4 **)(param_1 + 0x6e4) = puVar2;
  FUN_00da4130();
  if ((int *)puVar2[0x15] != (int *)0x0) {
    iVar3 = (**(code **)(*(int *)puVar2[0x15] + 0x20))();
    if (*(int *)(iVar3 + 8) == 0) goto LAB_00dc0ed2;
  }
  puVar2[0x15] = *puVar2;
LAB_00dc0ed2:
  FUN_00da41a0(param_1,uVar1);
  *(undefined4 *)(param_1 + 0x6f0) = 0;
  FUN_00a7c950();
  *(undefined4 *)(param_1 + 0x6f8) = 0;
  *(undefined4 *)(param_1 + 0x750) = 0;
  *(undefined4 *)(param_1 + 0x754) = 0;
  *(undefined4 *)(param_1 + 0x758) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x75c) = uStack_14;
  return;
}


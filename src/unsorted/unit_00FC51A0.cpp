// src/unsorted/unit_00FC51A0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00FC51A0..00FCC320, 90 functions

#include "types.h"

// 00FC51A0  FUN_00fc51a0  size=506  [run]
/* WARNING: Removing unreachable block (ram,0x00fc52e5) */
/* WARNING: Removing unreachable block (ram,0x00fc5207) */
/* WARNING: Removing unreachable block (ram,0x00fc5279) */
/* WARNING: Removing unreachable block (ram,0x00fc5358) */

undefined4 * __fastcall FUN_00fc51a0(undefined4 *param_1)

{
  uint uVar1;
  
  Hw::cVertexShader::cVertexShader();
  *param_1 = &PTR_FUN_016f3dec;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0xffffffff;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0xffffffff;
  param_1[0x10] = 0xffffffff;
  param_1[0x11] = 0xffffffff;
  param_1[0x12] = 0xffffffff;
  param_1[0x13] = 0xffffffff;
  param_1[0x14] = 0xffffffff;
  param_1[0x15] = 0xffffffff;
  param_1[0x18] = 0;
  uVar1 = param_1[0x18];
  param_1[0x18] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x18] = uVar1 & 0xe1fff010 | 0x1000111;
  param_1[0x18] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x18] = param_1[0x18] & 0x7fffffff;
  param_1[0x16] = 0xffffffff;
  param_1[0x17] = 0xffffffff;
  param_1[0x18] = 0;
  uVar1 = param_1[0x18];
  param_1[0x18] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x18] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x18] = param_1[0x18] & 0x7fffffff;
  param_1[0x1b] = 0;
  uVar1 = param_1[0x1b];
  param_1[0x1b] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x1b] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x1b] = param_1[0x1b] & 0x7fffffff;
  param_1[0x19] = 0xffffffff;
  param_1[0x1a] = 0xffffffff;
  param_1[0x1b] = 0;
  uVar1 = param_1[0x1b];
  param_1[0x1b] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x1b] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x1b] = param_1[0x1b] & 0x7fffffff;
  return param_1;
}

// 00FC53E0  FUN_00fc53e0  size=58  [run]
void __fastcall FUN_00fc53e0(int param_1)

{
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x60) = 0x1111111;
  *(undefined4 *)(param_1 + 100) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x6c) = 0x1111111;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  Hw::cShader::vf04();
  return;
}

// 00FC5420  FUN_00fc5420  size=238  [run]
/* WARNING: Removing unreachable block (ram,0x00fc545a) */
/* WARNING: Removing unreachable block (ram,0x00fc54cc) */

undefined4 * __fastcall FUN_00fc5420(undefined4 *param_1)

{
  Hw::cVertexShader::cVertexShader();
  *param_1 = &PTR_FUN_016f3df4;
  param_1[0xc] = 0x1000000;
  param_1[0xc] = 0x1000111;
  param_1[0xc] = 0x1111111;
  param_1[0xc] = param_1[0xc] & 0x7fffffff;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0x1000000;
  param_1[0xc] = 0x1111111;
  param_1[0xc] = param_1[0xc] & 0x7fffffff;
  return param_1;
}

// 00FC5530  FUN_00fc5530  size=21  [run]
void __fastcall FUN_00fc5530(int param_1)

{
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0x1111111;
  Hw::cShader::vf04();
  return;
}

// 00FC5550  FUN_00fc5550  size=238  [run]
/* WARNING: Removing unreachable block (ram,0x00fc558a) */
/* WARNING: Removing unreachable block (ram,0x00fc55fc) */

undefined4 * __fastcall FUN_00fc5550(undefined4 *param_1)

{
  Hw::cVertexShader::cVertexShader();
  *param_1 = &PTR_FUN_016f3dfc;
  param_1[0xc] = 0x1000000;
  param_1[0xc] = 0x1000111;
  param_1[0xc] = 0x1111111;
  param_1[0xc] = param_1[0xc] & 0x7fffffff;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0x1000000;
  param_1[0xc] = 0x1111111;
  param_1[0xc] = param_1[0xc] & 0x7fffffff;
  return param_1;
}

// 00FC5660  FUN_00fc5660  size=21  [run]
void __fastcall FUN_00fc5660(int param_1)

{
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0x1111111;
  Hw::cShader::vf04();
  return;
}

// 00FC5680  FUN_00fc5680  size=238  [run]
/* WARNING: Removing unreachable block (ram,0x00fc56ba) */
/* WARNING: Removing unreachable block (ram,0x00fc572c) */

undefined4 * __fastcall FUN_00fc5680(undefined4 *param_1)

{
  Hw::cVertexShader::cVertexShader();
  *param_1 = &PTR_FUN_016f3e04;
  param_1[0xc] = 0x1000000;
  param_1[0xc] = 0x1000111;
  param_1[0xc] = 0x1111111;
  param_1[0xc] = param_1[0xc] & 0x7fffffff;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0x1000000;
  param_1[0xc] = 0x1111111;
  param_1[0xc] = param_1[0xc] & 0x7fffffff;
  return param_1;
}

// 00FC5790  FUN_00fc5790  size=21  [run]
void __fastcall FUN_00fc5790(int param_1)

{
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0x1111111;
  Hw::cShader::vf04();
  return;
}

// 00FC57B0  FUN_00fc57b0  size=678  [run]
/* WARNING: Removing unreachable block (ram,0x00fc57ea) */
/* WARNING: Removing unreachable block (ram,0x00fc585c) */
/* WARNING: Removing unreachable block (ram,0x00fc59a0) */
/* WARNING: Removing unreachable block (ram,0x00fc58c4) */
/* WARNING: Removing unreachable block (ram,0x00fc5938) */
/* WARNING: Removing unreachable block (ram,0x00fc5a11) */

undefined4 * __fastcall FUN_00fc57b0(undefined4 *param_1)

{
  uint uVar1;
  
  Hw::cVertexShader::cVertexShader();
  *param_1 = &PTR_FUN_016f3e0c;
  param_1[0xc] = 0x1000000;
  param_1[0xc] = 0x1000111;
  param_1[0xc] = 0x1111111;
  param_1[0xc] = param_1[0xc] & 0x7fffffff;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0x1000000;
  param_1[0xc] = 0x1111111;
  param_1[0xc] = param_1[0xc] & 0x7fffffff;
  param_1[0xf] = 0;
  uVar1 = param_1[0xf];
  param_1[0xf] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0xf] = uVar1 & 0xe1fff010 | 0x1000111;
  param_1[0xf] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0xf] = param_1[0xf] & 0x7fffffff;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0;
  uVar1 = param_1[0xf];
  param_1[0xf] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0xf] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0xf] = param_1[0xf] & 0x7fffffff;
  param_1[0x12] = 0;
  uVar1 = param_1[0x12];
  param_1[0x12] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x12] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x12] = param_1[0x12] & 0x7fffffff;
  param_1[0x10] = 0xffffffff;
  param_1[0x11] = 0xffffffff;
  param_1[0x12] = 0;
  uVar1 = param_1[0x12];
  param_1[0x12] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x12] = uVar1 & 0xe1fff010 | 0x1000111;
  param_1[0x12] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x12] = param_1[0x12] & 0x7fffffff;
  return param_1;
}

// 00FC5A90  FUN_00fc5a90  size=40  [run]
void __fastcall FUN_00fc5a90(int param_1)

{
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0x1111111;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0x1111111;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x48) = 0x1111111;
  Hw::cShader::vf04();
  return;
}

// 00FC5AC0  FUN_00fc5ac0  size=454  [run]
/* WARNING: Removing unreachable block (ram,0x00fc5afa) */
/* WARNING: Removing unreachable block (ram,0x00fc5b6c) */
/* WARNING: Removing unreachable block (ram,0x00fc5bd4) */
/* WARNING: Removing unreachable block (ram,0x00fc5c48) */

undefined4 * __fastcall FUN_00fc5ac0(undefined4 *param_1)

{
  uint uVar1;
  
  Hw::cVertexShader::cVertexShader();
  *param_1 = &PTR_FUN_016f3e14;
  param_1[0xc] = 0x1000000;
  param_1[0xc] = 0x1000111;
  param_1[0xc] = 0x1111111;
  param_1[0xc] = param_1[0xc] & 0x7fffffff;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0x1000000;
  param_1[0xc] = 0x1111111;
  param_1[0xc] = param_1[0xc] & 0x7fffffff;
  param_1[0xf] = 0;
  uVar1 = param_1[0xf];
  param_1[0xf] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0xf] = uVar1 & 0xe1fff010 | 0x1000111;
  param_1[0xf] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0xf] = param_1[0xf] & 0x7fffffff;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0;
  uVar1 = param_1[0xf];
  param_1[0xf] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0xf] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0xf] = param_1[0xf] & 0x7fffffff;
  return param_1;
}

// 00FC5CE0  FUN_00fc5ce0  size=678  [run]
/* WARNING: Removing unreachable block (ram,0x00fc5d1a) */
/* WARNING: Removing unreachable block (ram,0x00fc5d8c) */
/* WARNING: Removing unreachable block (ram,0x00fc5ed0) */
/* WARNING: Removing unreachable block (ram,0x00fc5df4) */
/* WARNING: Removing unreachable block (ram,0x00fc5e68) */
/* WARNING: Removing unreachable block (ram,0x00fc5f41) */

undefined4 * __fastcall FUN_00fc5ce0(undefined4 *param_1)

{
  uint uVar1;
  
  Hw::cVertexShader::cVertexShader();
  *param_1 = &PTR_FUN_016f3e1c;
  param_1[0xc] = 0x1000000;
  param_1[0xc] = 0x1000111;
  param_1[0xc] = 0x1111111;
  param_1[0xc] = param_1[0xc] & 0x7fffffff;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0x1000000;
  param_1[0xc] = 0x1111111;
  param_1[0xc] = param_1[0xc] & 0x7fffffff;
  param_1[0xf] = 0;
  uVar1 = param_1[0xf];
  param_1[0xf] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0xf] = uVar1 & 0xe1fff010 | 0x1000111;
  param_1[0xf] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0xf] = param_1[0xf] & 0x7fffffff;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0;
  uVar1 = param_1[0xf];
  param_1[0xf] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0xf] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0xf] = param_1[0xf] & 0x7fffffff;
  param_1[0x12] = 0;
  uVar1 = param_1[0x12];
  param_1[0x12] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x12] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x12] = param_1[0x12] & 0x7fffffff;
  param_1[0x10] = 0xffffffff;
  param_1[0x11] = 0xffffffff;
  param_1[0x12] = 0;
  uVar1 = param_1[0x12];
  param_1[0x12] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x12] = uVar1 & 0xe1fff010 | 0x1000111;
  param_1[0x12] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x12] = param_1[0x12] & 0x7fffffff;
  return param_1;
}

// 00FC5FC0  FUN_00fc5fc0  size=40  [run]
void __fastcall FUN_00fc5fc0(int param_1)

{
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0x1111111;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0x1111111;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x48) = 0x1111111;
  Hw::cShader::vf04();
  return;
}

// 00FC5FF0  FUN_00fc5ff0  size=238  [run]
/* WARNING: Removing unreachable block (ram,0x00fc602a) */
/* WARNING: Removing unreachable block (ram,0x00fc609c) */

undefined4 * __fastcall FUN_00fc5ff0(undefined4 *param_1)

{
  Hw::cVertexShader::cVertexShader();
  *param_1 = &PTR_FUN_016f3e24;
  param_1[0xc] = 0x1000000;
  param_1[0xc] = 0x1000111;
  param_1[0xc] = 0x1111111;
  param_1[0xc] = param_1[0xc] & 0x7fffffff;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0x1000000;
  param_1[0xc] = 0x1111111;
  param_1[0xc] = param_1[0xc] & 0x7fffffff;
  return param_1;
}

// 00FC6100  FUN_00fc6100  size=21  [run]
void __fastcall FUN_00fc6100(int param_1)

{
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0x1111111;
  Hw::cShader::vf04();
  return;
}

// 00FC6120  FUN_00fc6120  size=238  [run]
/* WARNING: Removing unreachable block (ram,0x00fc615a) */
/* WARNING: Removing unreachable block (ram,0x00fc61cc) */

undefined4 * __fastcall FUN_00fc6120(undefined4 *param_1)

{
  Hw::cVertexShader::cVertexShader();
  *param_1 = &PTR_FUN_016f3e2c;
  param_1[0xc] = 0x1000000;
  param_1[0xc] = 0x1000111;
  param_1[0xc] = 0x1111111;
  param_1[0xc] = param_1[0xc] & 0x7fffffff;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0x1000000;
  param_1[0xc] = 0x1111111;
  param_1[0xc] = param_1[0xc] & 0x7fffffff;
  return param_1;
}

// 00FC6230  FUN_00fc6230  size=21  [run]
void __fastcall FUN_00fc6230(int param_1)

{
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0x1111111;
  Hw::cShader::vf04();
  return;
}

// 00FC6250  FUN_00fc6250  size=454  [run]
/* WARNING: Removing unreachable block (ram,0x00fc628a) */
/* WARNING: Removing unreachable block (ram,0x00fc62fc) */
/* WARNING: Removing unreachable block (ram,0x00fc6364) */
/* WARNING: Removing unreachable block (ram,0x00fc63d8) */

undefined4 * __fastcall FUN_00fc6250(undefined4 *param_1)

{
  uint uVar1;
  
  Hw::cVertexShader::cVertexShader();
  *param_1 = &PTR_FUN_016f3e34;
  param_1[0xc] = 0x1000000;
  param_1[0xc] = 0x1000111;
  param_1[0xc] = 0x1111111;
  param_1[0xc] = param_1[0xc] & 0x7fffffff;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0x1000000;
  param_1[0xc] = 0x1111111;
  param_1[0xc] = param_1[0xc] & 0x7fffffff;
  param_1[0xf] = 0;
  uVar1 = param_1[0xf];
  param_1[0xf] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0xf] = uVar1 & 0xe1fff010 | 0x1000111;
  param_1[0xf] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0xf] = param_1[0xf] & 0x7fffffff;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0;
  uVar1 = param_1[0xf];
  param_1[0xf] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0xf] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0xf] = param_1[0xf] & 0x7fffffff;
  return param_1;
}

// 00FC6470  FUN_00fc6470  size=238  [run]
/* WARNING: Removing unreachable block (ram,0x00fc64aa) */
/* WARNING: Removing unreachable block (ram,0x00fc651c) */

undefined4 * __fastcall FUN_00fc6470(undefined4 *param_1)

{
  Hw::cVertexShader::cVertexShader();
  *param_1 = &PTR_FUN_016f3e3c;
  param_1[0xc] = 0x1000000;
  param_1[0xc] = 0x1000111;
  param_1[0xc] = 0x1111111;
  param_1[0xc] = param_1[0xc] & 0x7fffffff;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0x1000000;
  param_1[0xc] = 0x1111111;
  param_1[0xc] = param_1[0xc] & 0x7fffffff;
  return param_1;
}

// 00FC6580  FUN_00fc6580  size=21  [run]
void __fastcall FUN_00fc6580(int param_1)

{
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0x1111111;
  Hw::cShader::vf04();
  return;
}

// 00FC65A0  FUN_00fc65a0  size=454  [run]
/* WARNING: Removing unreachable block (ram,0x00fc65da) */
/* WARNING: Removing unreachable block (ram,0x00fc664c) */
/* WARNING: Removing unreachable block (ram,0x00fc66b4) */
/* WARNING: Removing unreachable block (ram,0x00fc6728) */

undefined4 * __fastcall FUN_00fc65a0(undefined4 *param_1)

{
  uint uVar1;
  
  Hw::cVertexShader::cVertexShader();
  *param_1 = &PTR_FUN_016f3e44;
  param_1[0xc] = 0x1000000;
  param_1[0xc] = 0x1000111;
  param_1[0xc] = 0x1111111;
  param_1[0xc] = param_1[0xc] & 0x7fffffff;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0x1000000;
  param_1[0xc] = 0x1111111;
  param_1[0xc] = param_1[0xc] & 0x7fffffff;
  param_1[0xf] = 0;
  uVar1 = param_1[0xf];
  param_1[0xf] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0xf] = uVar1 & 0xe1fff010 | 0x1000111;
  param_1[0xf] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0xf] = param_1[0xf] & 0x7fffffff;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0;
  uVar1 = param_1[0xf];
  param_1[0xf] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0xf] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0xf] = param_1[0xf] & 0x7fffffff;
  return param_1;
}

// 00FC67A0  FUN_00fc67a0  size=31  [run]
void __fastcall FUN_00fc67a0(int param_1)

{
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0x1111111;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0x1111111;
  Hw::cShader::vf04();
  return;
}

// 00FC67C0  FUN_00fc67c0  size=719  [run]
/* WARNING: Removing unreachable block (ram,0x00fc69da) */
/* WARNING: Removing unreachable block (ram,0x00fc68fc) */
/* WARNING: Removing unreachable block (ram,0x00fc681e) */
/* WARNING: Removing unreachable block (ram,0x00fc6890) */
/* WARNING: Removing unreachable block (ram,0x00fc696e) */
/* WARNING: Removing unreachable block (ram,0x00fc6a4d) */

undefined4 * __fastcall FUN_00fc67c0(undefined4 *param_1)

{
  uint uVar1;
  
  Hw::cVertexShader::cVertexShader();
  *param_1 = &PTR_FUN_016f3e4c;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0xffffffff;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0xffffffff;
  param_1[0x10] = 0xffffffff;
  param_1[0x11] = 0xffffffff;
  param_1[0x12] = 0xffffffff;
  param_1[0x15] = 0;
  uVar1 = param_1[0x15];
  param_1[0x15] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x15] = uVar1 & 0xe1fff010 | 0x1000111;
  param_1[0x15] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x15] = param_1[0x15] & 0x7fffffff;
  param_1[0x13] = 0xffffffff;
  param_1[0x14] = 0xffffffff;
  param_1[0x15] = 0;
  uVar1 = param_1[0x15];
  param_1[0x15] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x15] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x15] = param_1[0x15] & 0x7fffffff;
  param_1[0x18] = 0;
  uVar1 = param_1[0x18];
  param_1[0x18] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x18] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x18] = param_1[0x18] & 0x7fffffff;
  param_1[0x16] = 0xffffffff;
  param_1[0x17] = 0xffffffff;
  param_1[0x18] = 0;
  uVar1 = param_1[0x18];
  param_1[0x18] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x18] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x18] = param_1[0x18] & 0x7fffffff;
  param_1[0x1b] = 0;
  uVar1 = param_1[0x1b];
  param_1[0x1b] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x1b] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x1b] = param_1[0x1b] & 0x7fffffff;
  param_1[0x19] = 0xffffffff;
  param_1[0x1a] = 0xffffffff;
  param_1[0x1b] = 0;
  uVar1 = param_1[0x1b];
  param_1[0x1b] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x1b] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x1b] = param_1[0x1b] & 0x7fffffff;
  return param_1;
}

// 00FC6AE0  FUN_00fc6ae0  size=67  [run]
void __fastcall FUN_00fc6ae0(int param_1)

{
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x54) = 0x1111111;
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x60) = 0x1111111;
  *(undefined4 *)(param_1 + 100) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x6c) = 0x1111111;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  Hw::cShader::vf04();
  return;
}

// 00FC6B30  FUN_00fc6b30  size=338  [run]
/* WARNING: Removing unreachable block (ram,0x00fc6b6a) */
/* WARNING: Removing unreachable block (ram,0x00fc6be1) */

undefined4 * __fastcall FUN_00fc6b30(undefined4 *param_1)

{
  uint uVar1;
  
  Hw::cVertexShader::cVertexShader();
  *param_1 = &PTR_FUN_016f3e54;
  param_1[0xc] = 0x1000000;
  param_1[0xc] = 0x1000111;
  param_1[0xc] = 0x1111111;
  param_1[0xc] = param_1[0xc] & 0x7fffffff;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0;
  uVar1 = param_1[0xc];
  param_1[0xc] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0xc] = uVar1 & 0xe1fff010 | 0x1000111;
  param_1[0xc] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0xc] = param_1[0xc] & 0x7fffffff;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0xffffffff;
  param_1[0x10] = 0xffffffff;
  param_1[0x11] = 0xffffffff;
  param_1[0x12] = 0xffffffff;
  param_1[0x13] = 0xffffffff;
  param_1[0x14] = 0xffffffff;
  param_1[0x15] = 0xffffffff;
  param_1[0x16] = 0xffffffff;
  param_1[0x17] = 0xffffffff;
  param_1[0x18] = 0xffffffff;
  param_1[0x19] = 0xffffffff;
  param_1[0x1a] = 0xffffffff;
  param_1[0x1b] = 0xffffffff;
  param_1[0x1c] = 0xffffffff;
  param_1[0x1d] = 0xffffffff;
  param_1[0x1e] = 0xffffffff;
  param_1[0x1f] = 0xffffffff;
  param_1[0x20] = 0xffffffff;
  param_1[0x21] = 0xffffffff;
  param_1[0x22] = 0xffffffff;
  param_1[0x23] = 0xffffffff;
  param_1[0x24] = 0xffffffff;
  return param_1;
}

// 00FC6CA0  FUN_00fc6ca0  size=10  [run]
void FUN_00fc6ca0(void)

{
  FUN_00fc12a0();
  Hw::cShader::vf04();
  return;
}

// 00FC6CB0  FUN_00fc6cb0  size=238  [run]
/* WARNING: Removing unreachable block (ram,0x00fc6cea) */
/* WARNING: Removing unreachable block (ram,0x00fc6d5c) */

undefined4 * __fastcall FUN_00fc6cb0(undefined4 *param_1)

{
  Hw::cVertexShader::cVertexShader();
  *param_1 = &PTR_FUN_016f3e5c;
  param_1[0xc] = 0x1000000;
  param_1[0xc] = 0x1000111;
  param_1[0xc] = 0x1111111;
  param_1[0xc] = param_1[0xc] & 0x7fffffff;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0x1000000;
  param_1[0xc] = 0x1111111;
  param_1[0xc] = param_1[0xc] & 0x7fffffff;
  return param_1;
}

// 00FC6DC0  FUN_00fc6dc0  size=21  [run]
void __fastcall FUN_00fc6dc0(int param_1)

{
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0x1111111;
  Hw::cShader::vf04();
  return;
}

// 00FC6DE0  FUN_00fc6de0  size=246  [run]
/* WARNING: Removing unreachable block (ram,0x00fc6e1a) */
/* WARNING: Removing unreachable block (ram,0x00fc6e87) */

undefined4 * __fastcall FUN_00fc6de0(undefined4 *param_1)

{
  Hw::cVertexShader::cVertexShader();
  *param_1 = &PTR_FUN_016f3e64;
  param_1[0xc] = 0x1000000;
  param_1[0xc] = 0x1000111;
  param_1[0xc] = 0x1111111;
  param_1[0xc] = param_1[0xc] & 0x7fffffff;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0x1000000;
  param_1[0xc] = 0x1111111;
  param_1[0xc] = param_1[0xc] & 0x7fffffff;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0xffffffff;
  return param_1;
}

// 00FC6F10  FUN_00fc6f10  size=41  [run]
void __fastcall FUN_00fc6f10(int param_1)

{
  FUN_00f99300();
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0x1111111;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  Hw::cShader::vf04();
  return;
}

// 00FC6F40  FUN_00fc6f40  size=273  [run]
/* WARNING: Removing unreachable block (ram,0x00fc6f7a) */
/* WARNING: Removing unreachable block (ram,0x00fc6feb) */

undefined4 * __fastcall FUN_00fc6f40(undefined4 *param_1)

{
  uint uVar1;
  
  Hw::cVertexShader::cVertexShader();
  *param_1 = &PTR_FUN_016f3e6c;
  param_1[0xc] = 0x1000000;
  param_1[0xc] = 0x1000111;
  param_1[0xc] = 0x1111111;
  param_1[0xc] = param_1[0xc] & 0x7fffffff;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0;
  uVar1 = param_1[0xc];
  param_1[0xc] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0xc] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0xc] = param_1[0xc] & 0x7fffffff;
  param_1[0x1a] = 0xffffffff;
  param_1[0x1b] = 0xffffffff;
  param_1[0x1c] = 0xffffffff;
  param_1[0x1d] = 0xffffffff;
  param_1[0x1e] = 0xffffffff;
  param_1[0x1f] = 0xffffffff;
  param_1[0x20] = 0xffffffff;
  param_1[0x21] = 0xffffffff;
  param_1[0x22] = 0xffffffff;
  return param_1;
}

// 00FC70A0  FUN_00fc70a0  size=68  [run]
void __fastcall FUN_00fc70a0(int param_1)

{
  FUN_00f99300();
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0x1111111;
  *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x7c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x80) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x84) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x88) = 0xffffffff;
  Hw::cShader::vf04();
  return;
}

// 00FC70F0  FUN_00fc70f0  size=238  [run]
/* WARNING: Removing unreachable block (ram,0x00fc712a) */
/* WARNING: Removing unreachable block (ram,0x00fc719c) */

undefined4 * __fastcall FUN_00fc70f0(undefined4 *param_1)

{
  Hw::cVertexShader::cVertexShader();
  *param_1 = &PTR_FUN_016f3e74;
  param_1[0xc] = 0x1000000;
  param_1[0xc] = 0x1000111;
  param_1[0xc] = 0x1111111;
  param_1[0xc] = param_1[0xc] & 0x7fffffff;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0x1000000;
  param_1[0xc] = 0x1111111;
  param_1[0xc] = param_1[0xc] & 0x7fffffff;
  return param_1;
}

// 00FC7200  FUN_00fc7200  size=21  [run]
void __fastcall FUN_00fc7200(int param_1)

{
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0x1111111;
  Hw::cShader::vf04();
  return;
}

// 00FC7220  FUN_00fc7220  size=238  [run]
/* WARNING: Removing unreachable block (ram,0x00fc725a) */
/* WARNING: Removing unreachable block (ram,0x00fc72cc) */

undefined4 * __fastcall FUN_00fc7220(undefined4 *param_1)

{
  Hw::cVertexShader::cVertexShader();
  *param_1 = &PTR_FUN_016f3e7c;
  param_1[0xc] = 0x1000000;
  param_1[0xc] = 0x1000111;
  param_1[0xc] = 0x1111111;
  param_1[0xc] = param_1[0xc] & 0x7fffffff;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0x1000000;
  param_1[0xc] = 0x1111111;
  param_1[0xc] = param_1[0xc] & 0x7fffffff;
  return param_1;
}

// 00FC7330  FUN_00fc7330  size=21  [run]
void __fastcall FUN_00fc7330(int param_1)

{
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0x1111111;
  Hw::cShader::vf04();
  return;
}

// 00FC7350  FUN_00fc7350  size=21  [run]
void FUN_00fc7350(void)

{
  FUN_00f99300();
  FUN_00fc13d0();
  Hw::cShader::vf04();
  return;
}

// 00FC7370  FUN_00fc7370  size=65  [run]
void __fastcall FUN_00fc7370(int param_1)

{
  FUN_00f99300();
  *(undefined4 *)(param_1 + 0xc4) = 0xffffffff;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcc) = 0x1111111;
  *(undefined4 *)(param_1 + 0xd0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xd4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xd8) = 0x1111111;
  FUN_00fc13d0();
  Hw::cShader::vf04();
  return;
}

// 00FC73C0  FUN_00fc73c0  size=60  [run]
void __fastcall FUN_00fc73c0(int param_1)

{
  FUN_00f99300();
  FUN_00fc13d0();
  *(undefined4 *)(param_1 + 0xc4) = 0xffffffff;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xd0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xd4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xd8) = 0xffffffff;
  Hw::cShader::vf04();
  return;
}

// 00FC7400  FUN_00fc7400  size=46  [run]
void __fastcall FUN_00fc7400(int param_1)

{
  FUN_00f99300();
  *(undefined4 *)(param_1 + 0xdc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xe0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xe4) = 0x1111111;
  FUN_00fc13d0();
  Hw::cShader::vf04();
  return;
}

// 00FC7430  FUN_00fc7430  size=60  [run]
void __fastcall FUN_00fc7430(int param_1)

{
  FUN_00f99300();
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0x1111111;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0x1111111;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x48) = 0x1111111;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x54) = 0x1111111;
  Hw::cShader::vf04();
  return;
}

// 00FC74A0  FUN_00fc74a0  size=113  [run]
void __fastcall FUN_00fc74a0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_016f3e84;
  if (param_1[9] != 0) {
    if (param_1[9] != 0) {
      FUN_00dd48d0(param_1[9],0);
      param_1[9] = 0;
    }
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = param_1[8];
    param_1[0xd] = param_1[8];
    param_1[0xe] = param_1[8];
  }
  if (param_1[2] != 0) {
    if (param_1[2] != 0) {
      FUN_00dd48d0(param_1[2],0);
      param_1[2] = 0;
    }
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = param_1[1];
    param_1[6] = param_1[1];
    param_1[7] = param_1[1];
  }
  return;
}

// 00FC7520  FUN_00fc7520  size=163  [run]
void __thiscall FUN_00fc7520(int param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int *piVar6;
  bool bVar7;
  
  piVar6 = *(int **)(param_1 + 0x18);
  if (piVar6 == *(int **)(param_1 + 0x1c)) {
    return;
  }
  do {
    pbVar2 = (byte *)(*piVar6 + 0x28);
    pbVar4 = param_2;
    do {
      bVar1 = *pbVar4;
      bVar7 = bVar1 < *pbVar2;
      if (bVar1 != *pbVar2) {
LAB_00fc7560:
        iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_00fc7565;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar7 = bVar1 < pbVar2[1];
      if (bVar1 != pbVar2[1]) goto LAB_00fc7560;
      pbVar4 = pbVar4 + 2;
      pbVar2 = pbVar2 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00fc7565:
    if (iVar3 == 0) {
      iVar3 = piVar6[1];
      iVar5 = piVar6[2];
      if (iVar3 != 0) {
        *(int *)(iVar3 + 8) = iVar5;
      }
      if (iVar5 != 0) {
        *(int *)(iVar5 + 4) = iVar3;
      }
      if (*(int **)(param_1 + 0x18) == piVar6) {
        *(int *)(param_1 + 0x18) = iVar5;
      }
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
      iVar3 = *(int *)(param_1 + 0x14);
      if (iVar3 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(iVar3 + 4);
      }
      piVar6[1] = iVar5;
      piVar6[2] = iVar3;
      if (iVar5 != 0) {
        *(int **)(iVar5 + 8) = piVar6;
      }
      if (iVar3 != 0) {
        *(int **)(iVar3 + 4) = piVar6;
      }
      *(int **)(param_1 + 0x14) = piVar6;
      return;
    }
    piVar6 = (int *)piVar6[2];
    if (piVar6 == *(int **)(param_1 + 0x1c)) {
      return;
    }
  } while( true );
}

// 00FC75D0  FUN_00fc75d0  size=163  [run]
void __thiscall FUN_00fc75d0(int param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int *piVar6;
  bool bVar7;
  
  piVar6 = *(int **)(param_1 + 0x34);
  if (piVar6 == *(int **)(param_1 + 0x38)) {
    return;
  }
  do {
    pbVar2 = (byte *)(*piVar6 + 0x28);
    pbVar4 = param_2;
    do {
      bVar1 = *pbVar4;
      bVar7 = bVar1 < *pbVar2;
      if (bVar1 != *pbVar2) {
LAB_00fc7610:
        iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_00fc7615;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar7 = bVar1 < pbVar2[1];
      if (bVar1 != pbVar2[1]) goto LAB_00fc7610;
      pbVar4 = pbVar4 + 2;
      pbVar2 = pbVar2 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00fc7615:
    if (iVar3 == 0) {
      iVar3 = piVar6[1];
      iVar5 = piVar6[2];
      if (iVar3 != 0) {
        *(int *)(iVar3 + 8) = iVar5;
      }
      if (iVar5 != 0) {
        *(int *)(iVar5 + 4) = iVar3;
      }
      if (*(int **)(param_1 + 0x34) == piVar6) {
        *(int *)(param_1 + 0x34) = iVar5;
      }
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
      iVar3 = *(int *)(param_1 + 0x30);
      if (iVar3 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(iVar3 + 4);
      }
      piVar6[1] = iVar5;
      piVar6[2] = iVar3;
      if (iVar5 != 0) {
        *(int **)(iVar5 + 8) = piVar6;
      }
      if (iVar3 != 0) {
        *(int **)(iVar3 + 4) = piVar6;
      }
      *(int **)(param_1 + 0x30) = piVar6;
      return;
    }
    piVar6 = (int *)piVar6[2];
    if (piVar6 == *(int **)(param_1 + 0x38)) {
      return;
    }
  } while( true );
}

// 00FC7680  FUN_00fc7680  size=1067  [run]
/* WARNING: Removing unreachable block (ram,0x00fc76ba) */
/* WARNING: Removing unreachable block (ram,0x00fc7977) */
/* WARNING: Removing unreachable block (ram,0x00fc788d) */
/* WARNING: Removing unreachable block (ram,0x00fc77a3) */
/* WARNING: Removing unreachable block (ram,0x00fc7731) */
/* WARNING: Removing unreachable block (ram,0x00fc781b) */
/* WARNING: Removing unreachable block (ram,0x00fc7905) */
/* WARNING: Removing unreachable block (ram,0x00fc79ef) */

undefined4 * __fastcall FUN_00fc7680(undefined4 *param_1)

{
  uint uVar1;
  
  Hw::cVertexShader::cVertexShader();
  *param_1 = &PTR_FUN_016f3e8c;
  param_1[0xc] = 0x1000000;
  param_1[0xc] = 0x1000111;
  param_1[0xc] = 0x1111111;
  param_1[0xc] = param_1[0xc] & 0x7fffffff;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0;
  uVar1 = param_1[0xc];
  param_1[0xc] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0xc] = uVar1 & 0xe1fff010 | 0x1000111;
  param_1[0xc] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0xc] = param_1[0xc] & 0x7fffffff;
  param_1[0xf] = 0;
  uVar1 = param_1[0xf];
  param_1[0xf] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0xf] = uVar1 & 0xe1fff010 | 0x1000111;
  param_1[0xf] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0xf] = param_1[0xf] & 0x7fffffff;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0;
  uVar1 = param_1[0xf];
  param_1[0xf] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0xf] = uVar1 & 0xe1fff010 | 0x1000111;
  param_1[0xf] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0xf] = param_1[0xf] & 0x7fffffff;
  param_1[0x12] = 0;
  uVar1 = param_1[0x12];
  param_1[0x12] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x12] = uVar1 & 0xe1fff010 | 0x1000111;
  param_1[0x12] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x12] = param_1[0x12] & 0x7fffffff;
  param_1[0x10] = 0xffffffff;
  param_1[0x11] = 0xffffffff;
  param_1[0x12] = 0;
  uVar1 = param_1[0x12];
  param_1[0x12] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x12] = uVar1 & 0xe1fff010 | 0x1000111;
  param_1[0x12] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x12] = param_1[0x12] & 0x7fffffff;
  param_1[0x15] = 0;
  uVar1 = param_1[0x15];
  param_1[0x15] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x15] = uVar1 & 0xe1fff010 | 0x1000111;
  param_1[0x15] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x15] = param_1[0x15] & 0x7fffffff;
  param_1[0x13] = 0xffffffff;
  param_1[0x14] = 0xffffffff;
  param_1[0x15] = 0;
  uVar1 = param_1[0x15];
  param_1[0x15] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x15] = uVar1 & 0xe1fff010 | 0x1000111;
  param_1[0x15] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x15] = param_1[0x15] & 0x7fffffff;
  param_1[0x16] = 0xffffffff;
  param_1[0x17] = 0xffffffff;
  param_1[0x18] = 0xffffffff;
  param_1[0x19] = 0xffffffff;
  param_1[0x1a] = 0xffffffff;
  param_1[0x1b] = 0xffffffff;
  param_1[0x1c] = 0xffffffff;
  param_1[0x1d] = 0xffffffff;
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
  param_1[0x2a] = 0xffffffff;
  param_1[0x2b] = 0xffffffff;
  param_1[0x2c] = 0xffffffff;
  param_1[0x2d] = 0xffffffff;
  return param_1;
}

// 00FC7AC0  FUN_00fc7ac0  size=10  [run]
void FUN_00fc7ac0(void)

{
  FUN_00fc1fc0();
  Hw::cShader::vf04();
  return;
}

// 00FC7AD0  FUN_00fc7ad0  size=1111  [run]
/* WARNING: Removing unreachable block (ram,0x00fc7b0a) */
/* WARNING: Removing unreachable block (ram,0x00fc7b7c) */
/* WARNING: Removing unreachable block (ram,0x00fc7e75) */
/* WARNING: Removing unreachable block (ram,0x00fc7d9c) */
/* WARNING: Removing unreachable block (ram,0x00fc7cc0) */
/* WARNING: Removing unreachable block (ram,0x00fc7be4) */
/* WARNING: Removing unreachable block (ram,0x00fc7c58) */
/* WARNING: Removing unreachable block (ram,0x00fc7d31) */
/* WARNING: Removing unreachable block (ram,0x00fc7e0d) */
/* WARNING: Removing unreachable block (ram,0x00fc7ee9) */

undefined4 * __fastcall FUN_00fc7ad0(undefined4 *param_1)

{
  uint uVar1;
  
  Hw::cVertexShader::cVertexShader();
  *param_1 = &PTR_FUN_016f3e94;
  param_1[0xc] = 0x1000000;
  param_1[0xc] = 0x1000111;
  param_1[0xc] = 0x1111111;
  param_1[0xc] = param_1[0xc] & 0x7fffffff;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0x1000000;
  param_1[0xc] = 0x1111111;
  param_1[0xc] = param_1[0xc] & 0x7fffffff;
  param_1[0xf] = 0;
  uVar1 = param_1[0xf];
  param_1[0xf] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0xf] = uVar1 & 0xe1fff010 | 0x1000111;
  param_1[0xf] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0xf] = param_1[0xf] & 0x7fffffff;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0;
  uVar1 = param_1[0xf];
  param_1[0xf] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0xf] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0xf] = param_1[0xf] & 0x7fffffff;
  param_1[0x12] = 0;
  uVar1 = param_1[0x12];
  param_1[0x12] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x12] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x12] = param_1[0x12] & 0x7fffffff;
  param_1[0x10] = 0xffffffff;
  param_1[0x11] = 0xffffffff;
  param_1[0x12] = 0;
  uVar1 = param_1[0x12];
  param_1[0x12] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x12] = uVar1 & 0xe1fff010 | 0x1000111;
  param_1[0x12] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x12] = param_1[0x12] & 0x7fffffff;
  param_1[0x15] = 0;
  uVar1 = param_1[0x15];
  param_1[0x15] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x15] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x15] = param_1[0x15] & 0x7fffffff;
  param_1[0x13] = 0xffffffff;
  param_1[0x14] = 0xffffffff;
  param_1[0x15] = 0;
  uVar1 = param_1[0x15];
  param_1[0x15] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x15] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x15] = param_1[0x15] & 0x7fffffff;
  param_1[0x18] = 0;
  uVar1 = param_1[0x18];
  param_1[0x18] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x18] = uVar1 & 0xe1fff010 | 0x1000111;
  param_1[0x18] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x18] = param_1[0x18] & 0x7fffffff;
  param_1[0x16] = 0xffffffff;
  param_1[0x17] = 0xffffffff;
  param_1[0x18] = 0;
  uVar1 = param_1[0x18];
  param_1[0x18] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x18] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x18] = param_1[0x18] & 0x7fffffff;
  return param_1;
}

// 00FC7F70  FUN_00fc7f70  size=58  [run]
void __fastcall FUN_00fc7f70(int param_1)

{
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0x1111111;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0x1111111;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x48) = 0x1111111;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x54) = 0x1111111;
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x60) = 0x1111111;
  Hw::cShader::vf04();
  return;
}

// 00FC7FB0  FUN_00fc7fb0  size=678  [run]
/* WARNING: Removing unreachable block (ram,0x00fc7fea) */
/* WARNING: Removing unreachable block (ram,0x00fc805c) */
/* WARNING: Removing unreachable block (ram,0x00fc81a0) */
/* WARNING: Removing unreachable block (ram,0x00fc80c4) */
/* WARNING: Removing unreachable block (ram,0x00fc8138) */
/* WARNING: Removing unreachable block (ram,0x00fc8211) */

undefined4 * __fastcall FUN_00fc7fb0(undefined4 *param_1)

{
  uint uVar1;
  
  Hw::cVertexShader::cVertexShader();
  *param_1 = &PTR_FUN_016f3e9c;
  param_1[0xc] = 0x1000000;
  param_1[0xc] = 0x1000111;
  param_1[0xc] = 0x1111111;
  param_1[0xc] = param_1[0xc] & 0x7fffffff;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0x1000000;
  param_1[0xc] = 0x1111111;
  param_1[0xc] = param_1[0xc] & 0x7fffffff;
  param_1[0xf] = 0;
  uVar1 = param_1[0xf];
  param_1[0xf] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0xf] = uVar1 & 0xe1fff010 | 0x1000111;
  param_1[0xf] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0xf] = param_1[0xf] & 0x7fffffff;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0;
  uVar1 = param_1[0xf];
  param_1[0xf] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0xf] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0xf] = param_1[0xf] & 0x7fffffff;
  param_1[0x12] = 0;
  uVar1 = param_1[0x12];
  param_1[0x12] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x12] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x12] = param_1[0x12] & 0x7fffffff;
  param_1[0x10] = 0xffffffff;
  param_1[0x11] = 0xffffffff;
  param_1[0x12] = 0;
  uVar1 = param_1[0x12];
  param_1[0x12] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x12] = uVar1 & 0xe1fff010 | 0x1000111;
  param_1[0x12] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x12] = param_1[0x12] & 0x7fffffff;
  return param_1;
}

// 00FC8290  FUN_00fc8290  size=40  [run]
void __fastcall FUN_00fc8290(int param_1)

{
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0x1111111;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0x1111111;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x48) = 0x1111111;
  Hw::cShader::vf04();
  return;
}

// 00FC82C0  FUN_00fc82c0  size=678  [run]
/* WARNING: Removing unreachable block (ram,0x00fc82fa) */
/* WARNING: Removing unreachable block (ram,0x00fc836c) */
/* WARNING: Removing unreachable block (ram,0x00fc84b0) */
/* WARNING: Removing unreachable block (ram,0x00fc83d4) */
/* WARNING: Removing unreachable block (ram,0x00fc8448) */
/* WARNING: Removing unreachable block (ram,0x00fc8521) */

undefined4 * __fastcall FUN_00fc82c0(undefined4 *param_1)

{
  uint uVar1;
  
  Hw::cVertexShader::cVertexShader();
  *param_1 = &PTR_FUN_016f3ea4;
  param_1[0xc] = 0x1000000;
  param_1[0xc] = 0x1000111;
  param_1[0xc] = 0x1111111;
  param_1[0xc] = param_1[0xc] & 0x7fffffff;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0x1000000;
  param_1[0xc] = 0x1111111;
  param_1[0xc] = param_1[0xc] & 0x7fffffff;
  param_1[0xf] = 0;
  uVar1 = param_1[0xf];
  param_1[0xf] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0xf] = uVar1 & 0xe1fff010 | 0x1000111;
  param_1[0xf] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0xf] = param_1[0xf] & 0x7fffffff;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0;
  uVar1 = param_1[0xf];
  param_1[0xf] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0xf] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0xf] = param_1[0xf] & 0x7fffffff;
  param_1[0x12] = 0;
  uVar1 = param_1[0x12];
  param_1[0x12] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x12] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x12] = param_1[0x12] & 0x7fffffff;
  param_1[0x10] = 0xffffffff;
  param_1[0x11] = 0xffffffff;
  param_1[0x12] = 0;
  uVar1 = param_1[0x12];
  param_1[0x12] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x12] = uVar1 & 0xe1fff010 | 0x1000111;
  param_1[0x12] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x12] = param_1[0x12] & 0x7fffffff;
  return param_1;
}

// 00FC85A0  FUN_00fc85a0  size=40  [run]
void __fastcall FUN_00fc85a0(int param_1)

{
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0x1111111;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0x1111111;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x48) = 0x1111111;
  Hw::cShader::vf04();
  return;
}

// 00FC85D0  FUN_00fc85d0  size=28  [run]
undefined4 __thiscall FUN_00fc85d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  cFixedList::insert_31(param_2,param_1 + 0x18,param_3);
  return param_2;
}

// 00FC85F0  FUN_00fc85f0  size=3398  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00fc85f0(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  float *pfVar10;
  undefined4 *puVar11;
  undefined *puVar12;
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
  float local_18;
  float local_14;
  
  if (-1 < *(char *)(param_1 + 0x77d)) {
    pfVar10 = (float *)((*(char *)(param_1 + 0x77d) + 0x12) * 0x10 + param_4);
    iVar6 = FUN_00f994a0(0xbc,pfVar10,4);
    if (iVar6 == 0) {
      _DAT_01f14090 = *pfVar10;
      _DAT_01f14094 = pfVar10[1];
      _DAT_01f14098 = pfVar10[2];
      _DAT_01f1409c = pfVar10[3];
      FUN_00f995e0(0xbc,&DAT_01f14090,4);
    }
    puVar11 = (undefined4 *)((*(char *)(param_1 + 0x77d) + 0x13) * 0x10 + param_4);
    iVar6 = FUN_00f994a0(0xbd,puVar11,4);
    if (iVar6 == 0) {
      _DAT_01f140a0 = *puVar11;
      _DAT_01f140a4 = puVar11[1];
      _DAT_01f140a8 = puVar11[2];
      _DAT_01f140ac = puVar11[3];
      FUN_00f995e0(0xbd,&DAT_01f140a0,4);
    }
    puVar11 = (undefined4 *)((*(char *)(param_1 + 0x77d) + 0x14) * 0x10 + param_4);
    iVar6 = FUN_00f994a0(0xb8,puVar11,4);
    if (iVar6 == 0) {
      _DAT_01f14050 = *puVar11;
      _DAT_01f14054 = puVar11[1];
      _DAT_01f14058 = puVar11[2];
      _DAT_01f1405c = puVar11[3];
      FUN_00f995e0(0xb8,&DAT_01f14050,4);
    }
    pfVar10 = (float *)((*(char *)(param_1 + 0x77d) + 0x15) * 0x10 + param_4);
    iVar6 = FUN_00f994a0(0xbb,pfVar10,4);
    if (iVar6 == 0) {
      _DAT_01f14080 = *pfVar10;
      _DAT_01f14084 = pfVar10[1];
      _DAT_01f14088 = pfVar10[2];
      _DAT_01f1408c = pfVar10[3];
      FUN_00f995e0(0xbb,&DAT_01f14080,4);
    }
    pfVar10 = (float *)((*(char *)(param_1 + 0x77e) + 0x10) * 0x10 + param_4);
    iVar6 = FUN_00f994a0(0xbe,pfVar10,4);
    if (iVar6 == 0) {
      _DAT_01f140b0 = *pfVar10;
      _DAT_01f140b4 = pfVar10[1];
      _DAT_01f140b8 = pfVar10[2];
      _DAT_01f140bc = pfVar10[3];
      FUN_00f995e0(0xbe,&DAT_01f140b0,4);
    }
    pfVar10 = (float *)((*(char *)(param_1 + 0x77e) + 0x11) * 0x10 + param_4);
    iVar6 = FUN_00f994a0(0xbf,pfVar10,4);
    if (iVar6 == 0) {
      _DAT_01f140c0 = *pfVar10;
      _DAT_01f140c4 = pfVar10[1];
      _DAT_01f140c8 = pfVar10[2];
      _DAT_01f140cc = pfVar10[3];
      FUN_00f995e0(0xbf,&DAT_01f140c0,4);
    }
  }
  if ((DAT_01f8e9e0 != 0) && (-1 < *(char *)(param_1 + 0x77c))) {
    puVar11 = (undefined4 *)((*(char *)(param_1 + 0x77c) + 0x11) * 0x10 + param_4);
    iVar6 = FUN_00f994a0(0xb8,puVar11,4);
    if (iVar6 == 0) {
      _DAT_01f14050 = *puVar11;
      _DAT_01f14054 = puVar11[1];
      _DAT_01f14058 = puVar11[2];
      _DAT_01f1405c = puVar11[3];
      FUN_00f995e0(0xb8,&DAT_01f14050,4);
    }
  }
  if ((*(int *)(param_1 + 0x7a8) != 0) &&
     ((*(int *)(param_1 + 0x7b4) != 0 || (*(int *)(param_1 + 0x7b8) != 0)))) {
    local_40 = 0.0;
    local_3c = 0.0;
    local_38 = 0.0;
    local_34 = 0.0;
    local_30 = 0.0;
    local_2c = 0.0;
    local_28 = 0.0;
    local_24 = 0.0;
    local_14 = (1.0 - *(float *)(param_4 + 0x2cc)) * 100.0;
    if (*(int *)(param_1 + 0x7b8) != 0) {
      iVar6 = FUN_00f994a0(0xc0,(undefined4 *)(param_4 + 0x310),4);
      if (iVar6 == 0) {
        _DAT_01f140d0 = *(undefined4 *)(param_4 + 0x310);
        _DAT_01f140d4 = *(undefined4 *)(param_4 + 0x314);
        _DAT_01f140d8 = *(undefined4 *)(param_4 + 0x318);
        _DAT_01f140dc = *(undefined4 *)(param_4 + 0x31c);
        FUN_00f995e0(0xc0,&DAT_01f140d0,4);
      }
      if (local_14 <= 0.0) {
        local_18 = (_DAT_01f6c938 + local_34) * *(float *)(param_4 + 0x29c);
      }
      else {
        local_18 = (local_14 + local_34) * *(float *)(param_4 + 0x29c);
      }
      FUN_00a337d0(local_18);
      iVar6 = FUN_00f994a0(0xbb,(float *)(param_4 + 0x2f0),4);
      if (iVar6 == 0) {
        _DAT_01f14080 = *(float *)(param_4 + 0x2f0);
        _DAT_01f14084 = *(float *)(param_4 + 0x2f4);
        _DAT_01f14088 = *(float *)(param_4 + 0x2f8);
        _DAT_01f1408c = *(float *)(param_4 + 0x2fc);
        FUN_00f995e0(0xbb,&DAT_01f14080,4);
      }
    }
    local_60 = *(float *)(param_4 + 0x298);
    local_5c = 0.0;
    local_58 = 0.0;
    local_54 = 0.0;
    iVar6 = FUN_00f994a0(0xbc,&local_60,4);
    if (iVar6 == 0) {
      _DAT_01f14090 = local_60;
      _DAT_01f14094 = local_5c;
      _DAT_01f14098 = local_58;
      _DAT_01f1409c = local_54;
      FUN_00f995e0(0xbc,&DAT_01f14090,4);
    }
    local_40 = *(float *)(param_4 + 0x2a0);
    local_3c = *(float *)(param_4 + 0x2a4);
    local_38 = *(float *)(param_4 + 0x2a8);
    local_34 = (*(float *)(param_4 + 0x2ac) + _DAT_01f6c938) * *(float *)(param_4 + 0x29c);
    local_50 = *(float *)(param_4 + 0x2b0);
    local_4c = *(float *)(param_4 + 0x2b4);
    local_48 = *(float *)(param_4 + 0x2b8);
    local_44 = *(float *)(param_4 + 700);
    iVar6 = FUN_00f994a0(0xbf,&local_50,4);
    if (iVar6 == 0) {
      _DAT_01f140c0 = local_50;
      _DAT_01f140c4 = local_4c;
      _DAT_01f140c8 = local_48;
      _DAT_01f140cc = local_44;
      FUN_00f995e0(0xbf,&DAT_01f140c0,4);
    }
    iVar6 = FUN_00f99540(0xbf,&local_50,4);
    if (iVar6 == 0) {
      _DAT_01f132c0 = local_50;
      _DAT_01f132c4 = local_4c;
      _DAT_01f132c8 = local_48;
      _DAT_01f132cc = local_44;
      FUN_00f99620(0xbf,&DAT_01f132c0,4);
    }
    local_30 = local_40;
    local_2c = local_3c;
    local_28 = local_38;
    local_24 = local_34;
    if (0.0 < local_14) {
      local_24 = ((1.0 - *(float *)(param_4 + 0x2cc)) * 100.0 + local_34) *
                 *(float *)(param_4 + 0x29c);
    }
    iVar6 = FUN_00f994a0(0xbe,&local_40,4);
    if (iVar6 == 0) {
      _DAT_01f140b0 = local_40;
      _DAT_01f140b4 = local_3c;
      _DAT_01f140b8 = local_38;
      _DAT_01f140bc = local_34;
      FUN_00f995e0(0xbe,&DAT_01f140b0,4);
    }
    iVar6 = FUN_00f99540(0xbe,&local_30,4);
    if (iVar6 == 0) {
      _DAT_01f132b0 = local_30;
      _DAT_01f132b4 = local_2c;
      _DAT_01f132b8 = local_28;
      _DAT_01f132bc = local_24;
      FUN_00f99620(0xbe,&DAT_01f132b0,4);
    }
  }
  if (*(int *)(param_1 + 0x798) != 0) {
    iVar6 = FUN_00f994a0(0xb9,(undefined4 *)(param_4 + 0x200),4);
    if (iVar6 == 0) {
      _DAT_01f14060 = *(undefined4 *)(param_4 + 0x200);
      _DAT_01f14064 = *(undefined4 *)(param_4 + 0x204);
      _DAT_01f14068 = *(undefined4 *)(param_4 + 0x208);
      _DAT_01f1406c = *(undefined4 *)(param_4 + 0x20c);
      FUN_00f995e0(0xb9,&DAT_01f14060,4);
    }
    iVar6 = FUN_00f994a0(0xba,(undefined4 *)(param_4 + 0x340),4);
    if (iVar6 == 0) {
      _DAT_01f14070 = *(undefined4 *)(param_4 + 0x340);
      _DAT_01f14074 = *(undefined4 *)(param_4 + 0x344);
      _DAT_01f14078 = *(undefined4 *)(param_4 + 0x348);
      _DAT_01f1407c = *(undefined4 *)(param_4 + 0x34c);
      FUN_00f995e0(0xba,&DAT_01f14070,4);
    }
  }
  if (*(int *)(param_4 + 0x374) == 0) {
    return;
  }
  iVar6 = Hw::cHwLFFreeListTemp<cEffResource<Hw::cTexture,eEffDataManager>_>::
          cHwLFFreeListTemp<cEffResource<Hw::cTexture,eEffDataManager>_>_3();
  iVar6 = *(int *)(iVar6 + 0x4d8);
  if ((iVar6 != 0) && (iVar6 != -8)) {
    local_14 = 2.6645304e-38;
    if (*(int *)(iVar6 + 0x14) == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined4 *)(iVar6 + 0x10);
    }
    FUN_00fa01f0(0x101,&local_14,uVar7);
    if (*(uint *)(iVar6 + 0x14) < 2) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(iVar6 + 0x10) + 0x30;
    }
    FUN_00fa01f0(0x102,&local_14,iVar8);
    if (*(uint *)(iVar6 + 0x14) < 3) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(iVar6 + 0x10) + 0x60;
    }
    FUN_00fa01f0(0x103,&local_14,iVar8);
    if (*(uint *)(iVar6 + 0x14) < 4) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(iVar6 + 0x10) + 0x90;
    }
    FUN_00fa01f0(0x104,&local_14,iVar6);
  }
  iVar8 = (int)DAT_01be1fb0;
  iVar6 = Hw::cHwLFFreeListTemp<cEffResource<Hw::cTexture,eEffDataManager>_>::
          cHwLFFreeListTemp<cEffResource<Hw::cTexture,eEffDataManager>_>_3();
  if (iVar8 - 0xf000U < 0x20) {
    iVar6 = *(int *)(iVar6 + -0x3b038 + iVar8 * 4);
LAB_00fc8db3:
    if ((iVar6 != 0) && (iVar6 != -8)) {
      uVar9 = (uint)DAT_01be1fb2;
      local_18 = 2.6645304e-38;
      if (((int)uVar9 < 0) || (*(uint *)(iVar6 + 0x14) <= uVar9)) {
        iVar6 = 0;
      }
      else {
        iVar6 = uVar9 * 0x30 + *(int *)(iVar6 + 0x10);
      }
      FUN_00fa01f0(6,&local_18,iVar6);
    }
  }
  else if (iVar8 < 0x3e9) {
    iVar6 = *(int *)(iVar6 + 0x28 + iVar8 * 4);
    goto LAB_00fc8db3;
  }
  local_60 = *(float *)(param_4 + 0x2b0) * 0.01;
  local_5c = *(float *)(param_4 + 0x2b4) * 0.01;
  local_58 = *(float *)(param_4 + 0x2b8) * 0.01;
  local_54 = *(float *)(param_4 + 0x2a0) * 0.01;
  local_2c = local_5c * _DAT_01f6c938;
  local_28 = local_58 * _DAT_01f6c938;
  local_24 = local_54 * _DAT_01f6c938;
  local_40 = *(float *)(param_4 + 0x2a4) * 0.01 * _DAT_01f6c938;
  local_3c = *(float *)(param_4 + 0x2a8) * 0.01 * _DAT_01f6c938;
  local_38 = *(float *)(param_4 + 0x2ac) * 0.01 * _DAT_01f6c938;
  local_34 = _DAT_01f6c938 * *(float *)(param_4 + 0x29c) * 0.01;
  for (local_30 = _DAT_01f6c938 * local_60; 1.0 < local_30; local_30 = local_30 - 1.0) {
  }
  for (; 1.0 < local_2c; local_2c = local_2c - 1.0) {
  }
  for (; 1.0 < local_28; local_28 = local_28 - 1.0) {
  }
  for (; 1.0 < local_24; local_24 = local_24 - 1.0) {
  }
  for (; 1.0 < local_40; local_40 = local_40 - 1.0) {
  }
  for (; 1.0 < local_3c; local_3c = local_3c - 1.0) {
  }
  for (; 1.0 < local_38; local_38 = local_38 - 1.0) {
  }
  for (; 1.0 < local_34; local_34 = local_34 - 1.0) {
  }
  iVar6 = FUN_00f994a0(0xbb,&local_30,4);
  if (iVar6 == 0) {
    _DAT_01f14080 = local_30;
    _DAT_01f14084 = local_2c;
    _DAT_01f14088 = local_28;
    _DAT_01f1408c = local_24;
    FUN_00f995e0(0xbb,&DAT_01f14080,4);
  }
  iVar6 = FUN_00f994a0(0xbc,&local_40,4);
  if (iVar6 == 0) {
    _DAT_01f14090 = local_40;
    _DAT_01f14094 = local_3c;
    _DAT_01f14098 = local_38;
    _DAT_01f1409c = local_34;
    FUN_00f995e0(0xbc,&DAT_01f14090,4);
  }
  iVar6 = FUN_00f99540(0xba,(undefined4 *)(param_4 + 0x340),4);
  if (iVar6 == 0) {
    _DAT_01f13270 = *(undefined4 *)(param_4 + 0x340);
    _DAT_01f13274 = *(undefined4 *)(param_4 + 0x344);
    _DAT_01f13278 = *(undefined4 *)(param_4 + 0x348);
    _DAT_01f1327c = *(undefined4 *)(param_4 + 0x34c);
    FUN_00f99620(0xba,&DAT_01f13270,4);
  }
  iVar6 = FUN_00f99540(0xc0,(undefined4 *)(param_4 + 0x310),4);
  if (iVar6 == 0) {
    _DAT_01f132d0 = *(undefined4 *)(param_4 + 0x310);
    _DAT_01f132d4 = *(undefined4 *)(param_4 + 0x314);
    _DAT_01f132d8 = *(undefined4 *)(param_4 + 0x318);
    _DAT_01f132dc = *(undefined4 *)(param_4 + 0x31c);
    FUN_00f99620(0xc0,&DAT_01f132d0,4);
  }
  if (DAT_01be1f54 == 0) {
    puVar12 = &DAT_01f72754;
  }
  else {
    puVar12 = &DAT_01f7277c;
  }
  FUN_00f990e0(puVar12);
  iVar6 = FUN_00f99540(0xb5,&DAT_01be1fa0,4);
  if (iVar6 == 0) {
    _DAT_01f13220 = DAT_01be1fa0;
    _DAT_01f13224 = DAT_01be1fa4;
    _DAT_01f13228 = DAT_01be1fa8;
    _DAT_01f1322c = DAT_01be1fac;
    FUN_00f99620(0xb5,&DAT_01f13220,4);
  }
  fVar1 = 0.0;
  local_50 = 0.0;
  fVar2 = fVar1;
  fVar3 = fVar1;
  fVar4 = fVar1;
  fVar5 = fVar1;
  local_4c = fVar1;
  local_48 = fVar1;
  local_44 = fVar1;
  if (DAT_01be1f58 != 0) {
    local_4c = _DAT_01be1f74;
    local_48 = _DAT_01be1f78;
    local_44 = _DAT_01be1f7c;
    if (_DAT_01be1f5c == 0.0) {
      _DAT_01be1f5c = _DAT_01f6c938;
    }
    local_50 = ((_DAT_01f6c938 - _DAT_01be1f5c) + _DAT_01be1f90) * _DAT_01be1f70;
    fVar2 = DAT_01be1f60;
    fVar3 = DAT_01be1f64;
    fVar4 = DAT_01be1f68;
    fVar5 = DAT_01be1f6c;
  }
  DAT_01be1f6c = fVar5;
  DAT_01be1f68 = fVar4;
  DAT_01be1f64 = fVar3;
  DAT_01be1f60 = fVar2;
  if (*(int *)(param_4 + 0x378) == 0) {
    local_60 = fVar1;
    local_5c = fVar1;
    local_58 = fVar1;
    local_54 = fVar1;
    iVar6 = FUN_00f994a0(0xc3,&local_60,4);
    if (iVar6 != 0) goto LAB_00fc9285;
    _DAT_01f14100 = local_60;
    _DAT_01f14104 = local_5c;
    _DAT_01f14108 = local_58;
    _DAT_01f1410c = local_54;
  }
  else {
    iVar6 = FUN_00f994a0(0xc3,&DAT_01be1f60,4);
    if (iVar6 != 0) goto LAB_00fc9285;
    _DAT_01f14100 = DAT_01be1f60;
    _DAT_01f14104 = DAT_01be1f64;
    _DAT_01f14108 = DAT_01be1f68;
    _DAT_01f1410c = DAT_01be1f6c;
  }
  FUN_00f995e0(0xc3,&DAT_01f14100,4);
LAB_00fc9285:
  iVar6 = FUN_00f994a0(199,&local_50,4);
  if (iVar6 == 0) {
    _DAT_01f14140 = local_50;
    _DAT_01f14144 = local_4c;
    _DAT_01f14148 = local_48;
    _DAT_01f1414c = local_44;
    FUN_00f995e0(199,&DAT_01f14140,4);
  }
  iVar6 = FUN_00f994a0(0xcb,&DAT_01be1f80,4);
  if (iVar6 == 0) {
    _DAT_01f14180 = DAT_01be1f80;
    _DAT_01f14184 = DAT_01be1f84;
    _DAT_01f14188 = DAT_01be1f88;
    _DAT_01f1418c = DAT_01be1f8c;
    FUN_00f995e0(0xcb,&DAT_01f14180,4);
  }
  return;
}

// 00FC9340  FUN_00fc9340  size=67  [run]
undefined4 * __thiscall FUN_00fc9340(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_016f3dc4;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0x1111111;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0x1111111;
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FC9390  FUN_00fc9390  size=64  [run]
undefined4 * __thiscall FUN_00fc9390(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_016f3dcc;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0x1111111;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0xffffffff;
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FC93D0  FUN_00fc93d0  size=55  [run]
undefined4 * __thiscall FUN_00fc93d0(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_016f3dd4;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0x1111111;
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FC9410  FUN_00fc9410  size=55  [run]
undefined4 * __thiscall FUN_00fc9410(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_016f3ddc;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0x1111111;
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FC9450  FUN_00fc9450  size=64  [run]
undefined4 * __thiscall FUN_00fc9450(undefined4 *param_1,byte param_2)

{
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0x1111111;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0xffffffff;
  *param_1 = &PTR_FUN_016f23c8;
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FC9490  FUN_00fc9490  size=94  [run]
undefined4 * __thiscall FUN_00fc9490(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_016f3dec;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0xffffffff;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0xffffffff;
  param_1[0x16] = 0xffffffff;
  param_1[0x17] = 0xffffffff;
  param_1[0x18] = 0x1111111;
  param_1[0x19] = 0xffffffff;
  param_1[0x1a] = 0xffffffff;
  param_1[0x1b] = 0x1111111;
  param_1[0x10] = 0xffffffff;
  param_1[0x11] = 0xffffffff;
  param_1[0x12] = 0xffffffff;
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FC94F0  FUN_00fc94f0  size=55  [run]
undefined4 * __thiscall FUN_00fc94f0(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_016f3df4;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0x1111111;
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FC9530  FUN_00fc9530  size=55  [run]
undefined4 * __thiscall FUN_00fc9530(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_016f3dfc;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0x1111111;
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FC9570  FUN_00fc9570  size=55  [run]
undefined4 * __thiscall FUN_00fc9570(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_016f3e04;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0x1111111;
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FC95B0  FUN_00fc95b0  size=76  [run]
undefined4 * __thiscall FUN_00fc95b0(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_016f3e0c;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0x1111111;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0x1111111;
  param_1[0x10] = 0xffffffff;
  param_1[0x11] = 0xffffffff;
  param_1[0x12] = 0x1111111;
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FC9600  FUN_00fc9600  size=67  [run]
undefined4 * __thiscall FUN_00fc9600(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_016f3e14;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0x1111111;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0x1111111;
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FC9650  FUN_00fc9650  size=76  [run]
undefined4 * __thiscall FUN_00fc9650(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_016f3e1c;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0x1111111;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0x1111111;
  param_1[0x10] = 0xffffffff;
  param_1[0x11] = 0xffffffff;
  param_1[0x12] = 0x1111111;
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FC96A0  FUN_00fc96a0  size=55  [run]
undefined4 * __thiscall FUN_00fc96a0(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_016f3e24;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0x1111111;
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FC96E0  FUN_00fc96e0  size=55  [run]
undefined4 * __thiscall FUN_00fc96e0(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_016f3e2c;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0x1111111;
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FC9720  FUN_00fc9720  size=67  [run]
undefined4 * __thiscall FUN_00fc9720(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_016f3e34;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0x1111111;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0x1111111;
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FC9770  FUN_00fc9770  size=55  [run]
undefined4 * __thiscall FUN_00fc9770(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_016f3e3c;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0x1111111;
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FC97B0  FUN_00fc97b0  size=67  [run]
undefined4 * __thiscall FUN_00fc97b0(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_016f3e44;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0x1111111;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0x1111111;
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FC9800  FUN_00fc9800  size=103  [run]
undefined4 * __thiscall FUN_00fc9800(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_016f3e4c;
  param_1[0x13] = 0xffffffff;
  param_1[0x14] = 0xffffffff;
  param_1[0x15] = 0x1111111;
  param_1[0x16] = 0xffffffff;
  param_1[0x17] = 0xffffffff;
  param_1[0x18] = 0x1111111;
  param_1[0x19] = 0xffffffff;
  param_1[0x1a] = 0xffffffff;
  param_1[0x1b] = 0x1111111;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0xffffffff;
  param_1[0x10] = 0xffffffff;
  param_1[0x11] = 0xffffffff;
  param_1[0x12] = 0xffffffff;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0xffffffff;
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FC9870  FUN_00fc9870  size=44  [run]
undefined4 * __thiscall FUN_00fc9870(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_016f3e54;
  FUN_00fc12a0();
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FC98A0  FUN_00fc98a0  size=55  [run]
undefined4 * __thiscall FUN_00fc98a0(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_016f3e5c;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0x1111111;
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FC98E0  FUN_00fc98e0  size=64  [run]
undefined4 * __thiscall FUN_00fc98e0(undefined4 *param_1,byte param_2)

{
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0x1111111;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0xffffffff;
  *param_1 = &PTR_FUN_016f23d0;
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FC9920  FUN_00fc9920  size=91  [run]
undefined4 * __thiscall FUN_00fc9920(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_016f3e6c;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0x1111111;
  param_1[0x1a] = 0xffffffff;
  param_1[0x1b] = 0xffffffff;
  param_1[0x1c] = 0xffffffff;
  param_1[0x1d] = 0xffffffff;
  param_1[0x1e] = 0xffffffff;
  param_1[0x1f] = 0xffffffff;
  param_1[0x20] = 0xffffffff;
  param_1[0x21] = 0xffffffff;
  param_1[0x22] = 0xffffffff;
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FC9980  FUN_00fc9980  size=55  [run]
undefined4 * __thiscall FUN_00fc9980(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_016f3e74;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0x1111111;
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FC99C0  FUN_00fc99c0  size=55  [run]
undefined4 * __thiscall FUN_00fc99c0(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_016f3e7c;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0x1111111;
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FC9A00  FUN_00fc9a00  size=33  [run]
undefined4 __thiscall FUN_00fc9a00(undefined4 param_1,byte param_2)

{
  FUN_00fc74a0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FC9A30  FUN_00fc9a30  size=164  [run]
void __thiscall FUN_00fc9a30(int param_1,char *param_2,int param_3)

{
  char *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *local_8;
  
  puVar2 = (undefined4 *)FUN_00dd3500(0x68,*(undefined4 *)(param_1 + 0x3c));
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    Hw::cVertexShader::cVertexShader();
    *puVar2 = &PTR_FUN_016f1d80;
  }
  pcVar1 = param_2;
  local_8 = puVar2;
  _strcpy_s((char *)(puVar2 + 10),0x3c,param_2);
  iVar3 = param_3;
  puVar2[0x19] = param_3;
  FUN_00f99300();
  if (iVar3 != 0) {
    iVar3 = FUN_00f9e690(iVar3);
    if (iVar3 != 0) {
      cFixedList::insert_31(&param_2,param_1 + 0x1c,&local_8);
      return;
    }
  }
  FUN_00dd5650(&DAT_016f3eb0,pcVar1);
  (**(code **)*puVar2)(1);
  return;
}

// 00FC9AE0  FUN_00fc9ae0  size=164  [run]
void __thiscall FUN_00fc9ae0(int param_1,char *param_2,int param_3)

{
  char *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *local_8;
  
  puVar2 = (undefined4 *)FUN_00dd3500(0x68,*(undefined4 *)(param_1 + 0x3c));
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    Hw::cVertexShader::cVertexShader();
    *puVar2 = &PTR_FUN_016f1d80;
  }
  pcVar1 = param_2;
  local_8 = puVar2;
  _strcpy_s((char *)(puVar2 + 10),0x3c,param_2);
  iVar3 = param_3;
  puVar2[0x19] = param_3;
  FUN_00f99300();
  if (iVar3 != 0) {
    iVar3 = FUN_00f9e6b0(iVar3);
    if (iVar3 != 0) {
      cFixedList::insert_31(&param_2,param_1 + 0x38,&local_8);
      return;
    }
  }
  FUN_00dd5650(&DAT_016f3ef4,pcVar1);
  (**(code **)*puVar2)(1);
  return;
}

// 00FC9B90  FUN_00fc9b90  size=24  [run]
void FUN_00fc9b90(undefined4 param_1)

{
  FUN_00fc7520(param_1);
  FUN_00fc75d0(param_1);
  return;
}

// 00FC9BB0  FUN_00fc9bb0  size=44  [run]
undefined4 * __thiscall FUN_00fc9bb0(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_016f3e8c;
  FUN_00fc1fc0();
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FC9BE0  FUN_00fc9be0  size=94  [run]
undefined4 * __thiscall FUN_00fc9be0(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_016f3e94;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0x1111111;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0x1111111;
  param_1[0x10] = 0xffffffff;
  param_1[0x11] = 0xffffffff;
  param_1[0x12] = 0x1111111;
  param_1[0x13] = 0xffffffff;
  param_1[0x14] = 0xffffffff;
  param_1[0x15] = 0x1111111;
  param_1[0x16] = 0xffffffff;
  param_1[0x17] = 0xffffffff;
  param_1[0x18] = 0x1111111;
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FC9C40  FUN_00fc9c40  size=76  [run]
undefined4 * __thiscall FUN_00fc9c40(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_016f3e9c;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0x1111111;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0x1111111;
  param_1[0x10] = 0xffffffff;
  param_1[0x11] = 0xffffffff;
  param_1[0x12] = 0x1111111;
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FC9C90  FUN_00fc9c90  size=76  [run]
undefined4 * __thiscall FUN_00fc9c90(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_016f3ea4;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0x1111111;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0x1111111;
  param_1[0x10] = 0xffffffff;
  param_1[0x11] = 0xffffffff;
  param_1[0x12] = 0x1111111;
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FCA150  FUN_00fca150  size=38  [run]
void FUN_00fca150(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00fc9a30(param_1,param_2);
  FUN_00fc9ae0(param_1,param_3);
  return;
}

// 00FCA1A0  FUN_00fca1a0  size=8516  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_00fca1a0(int param_1)

{
  byte bVar1;
  ushort uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  int iVar10;
  int iVar11;
  byte *pbVar12;
  int *piVar13;
  int *piVar14;
  bool bVar15;
  int local_1c;
  int local_18;
  uint local_10;
  int *local_c;
  int local_8;
  
  puVar3 = &DAT_018dd3e8;
  do {
    puVar4 = puVar3 + 0x3c;
    puVar3[-2] = 0;
    puVar3[-1] = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    puVar3[0xe] = 0;
    puVar3[0xf] = 0;
    puVar3[0x10] = 0;
    puVar3[0x11] = 0;
    puVar3[0x12] = 0;
    puVar3[0x13] = 0;
    puVar3[0x14] = 0;
    puVar3[0x15] = 0;
    puVar3[0x16] = 0;
    puVar3[0x17] = 0;
    puVar3[0x18] = 0;
    puVar3[0x19] = 0;
    puVar3[0x1a] = 0;
    puVar3[0x1b] = 0;
    puVar3[0x1c] = 0;
    puVar3[0x1d] = 0;
    puVar3[0x1e] = 0x3f800000;
    puVar3[0x1f] = 0x3f800000;
    puVar3[0x20] = 0x3f800000;
    puVar3[0x21] = 0x3f800000;
    puVar3[0x22] = 0x3f800000;
    puVar3[0x23] = 0x3f800000;
    puVar3[0x24] = 0x3f800000;
    puVar3[0x25] = 0x3f800000;
    puVar3[0x26] = 0x3f800000;
    puVar3[0x29] = 0x3f800000;
    puVar3[0x27] = 0x40000000;
    puVar3[0x28] = 0x40000000;
    puVar3[0x2a] = 0;
    puVar3[0x2b] = 0;
    puVar3[0x2c] = 0;
    puVar3[0x2d] = 0;
    puVar3[0x2e] = 0;
    puVar3[0x2f] = 0;
    puVar3[0x30] = 0;
    puVar3[0x31] = 0;
    puVar3[0x32] = 0;
    puVar3[0x33] = 0;
    puVar3[0x34] = 0;
    puVar3[0x35] = 0;
    puVar3[0x36] = 0;
    puVar3 = puVar4;
  } while ((int)puVar4 < 0x18dd6b8);
  _DAT_018dd6b0 = 0x41200000;
  _DAT_018dd6d0 = 0;
  _DAT_018dd6b4 = 0x3fc00000;
  _DAT_018dd6d4 = 0;
  _DAT_018dd6d8 = 0;
  _DAT_018dd6b8 = 0;
  _DAT_018dd6dc = 0;
  _DAT_018dd6bc = 0;
  _DAT_018dd6e0 = 0;
  _DAT_018dd6c8 = 0;
  _DAT_018dd6e4 = 0;
  _DAT_018dd6e8 = 0;
  _DAT_018dd6c0 = 0x3f800000;
  _DAT_018dd700 = 0;
  _DAT_018dd6c4 = 0x3f800000;
  _DAT_018dd704 = 0;
  _DAT_018dd6cc = 0x3f800000;
  _DAT_018dd70c = 0;
  _DAT_018dd6f0 = 0x3f800000;
  local_10 = 3;
  _DAT_018dd6f4 = 0x41000000;
  _DAT_018dd6f8 = 0;
  _DAT_018dd6fc = 0;
  _DAT_018dd708 = 0;
  _DAT_018dd710 = 0x437f0000;
  _DAT_018dd714 = 0x3f800000;
  _DAT_018dd718 = 0;
  _DAT_018dd71c = 0;
  _DAT_018dd720 = 0;
  _DAT_018dd724 = 0;
  _DAT_018dd728 = 0;
  _DAT_018dd72c = 0;
  if (DAT_01f21e38 != 0) {
    iVar11 = 0x240;
    do {
      if ((&DAT_01f21c0c)[iVar11] == '\0') {
LAB_00fca44b:
        if ((&DAT_01f21c2c)[iVar11] != '\0') {
          uVar5 = FUN_00a281f0(&DAT_01f21c2c + iVar11);
LAB_00fca46b:
          FUN_00fc9ae0(&DAT_01f21bfc + iVar11,uVar5);
        }
      }
      else {
        if ((&DAT_01f21c2c)[iVar11] != '\0') {
          uVar5 = FUN_00a281f0(&DAT_01f21c2c + iVar11);
          uVar6 = FUN_00a281f0(&DAT_01f21c0c + iVar11);
          FUN_00fc9a30(&DAT_01f21bfc + iVar11,uVar6);
          goto LAB_00fca46b;
        }
        if ((&DAT_01f21c0c)[iVar11] == '\0') goto LAB_00fca44b;
        uVar5 = FUN_00a281f0(&DAT_01f21c0c + iVar11);
        FUN_00fc9a30(&DAT_01f21bfc + iVar11,uVar5);
      }
      if ((*(char *)(iVar11 + 0x1f21c6c) != '\0') &&
         (iVar7 = FUN_00a281f0(iVar11 + 0x1f21c6c), iVar7 != 0)) {
        uVar5 = FUN_00a281f0(iVar11 + 0x1f21c6c);
        FUN_00fc9ae0(&DAT_01f21c8c + iVar11,uVar5);
      }
      local_10 = local_10 + 1;
      iVar11 = (local_10 & 0xffff) * 0xc0;
    } while ((&DAT_01f21bf8)[(local_10 & 0xffff) * 0x30] != 0);
  }
  uVar2 = 0;
  if (DAT_01f21bf8 == 0) {
LAB_00fca72e:
    FUN_00fad470();
    _DAT_01f68740 = &PTR_PTR_018ddca0;
    _DAT_01f693c0 = &PTR_PTR_018ddca0;
    _DAT_01f69a00 = &PTR_PTR_018ddca0;
    _DAT_01f68d80 = &PTR_PTR_018ddca0;
    _DAT_01f69a40 = 7;
    _DAT_01f6a040 = &PTR_PTR_018ddd20;
    _DAT_01f6ad00 = 7;
    _DAT_01f6a6c0 = 7;
    _DAT_01f6acc0 = &PTR_PTR_018ddd20;
    _DAT_01f68140 = 7;
    _DAT_01f681ac = 7;
    _DAT_01f68dc0 = 7;
    _DAT_01f68e2c = 7;
    _DAT_01f69400 = 7;
    _DAT_01f6a080 = 7;
    _DAT_01f6a680 = &PTR_PTR_018ddd20;
    _DAT_01f6b340 = 7;
    _DAT_01f68780 = 7;
    _DAT_01f687ec = 7;
    _DAT_018e78dc = 0x23;
    _DAT_018e7954 = 0x23;
    _DAT_018e7fc4 = 7;
    _DAT_01f69aac = 1;
    _DAT_01f6a03c = &DAT_01f72f90;
    _DAT_01f6ad6c = 0x1b;
    _DAT_01f6b2fc = &DAT_01f730d8;
    _DAT_01f6b300 = &PTR_PTR_018ddda0;
    _DAT_01f6a72c = 1;
    _DAT_01f6acbc = &DAT_01f72f90;
    _DAT_01f6813c = 1;
    _DAT_01f6873c = &DAT_01f72e48;
    _DAT_01f68dbc = 1;
    _DAT_01f693bc = &DAT_01f72e48;
    _DAT_01f6946c = 0x21;
    _DAT_01f693fc = 1;
    _DAT_01f699fc = &DAT_01f72e48;
    _DAT_01f6a0ec = 1;
    _DAT_01f6a67c = &DAT_01f72f90;
    _DAT_01f6b3ac = 0x1b;
    _DAT_01f6b93c = &DAT_01f730d8;
    _DAT_01f6b940 = &PTR_PTR_018ddda0;
    _DAT_01f6877c = 1;
    _DAT_01f68d7c = &DAT_01f72e48;
    _DAT_018dd34c = 0x2d;
    _DAT_018e7864 = 0x28;
    _DAT_018e7a44 = 0x29;
    _DAT_018e7adc = 0x24;
    _DAT_018e7b54 = 0x24;
    _DAT_018e7bcc = 0x16;
    _DAT_018e7c44 = 0xf;
    _DAT_018e7cbc = 0xf;
    _DAT_018e7d34 = 0x17;
    _DAT_018e7dac = 0x10;
    _DAT_018e7e24 = 0x10;
    _DAT_018e79cc = 6;
    _DAT_018e7f4c = 6;
    _DAT_018e805c = 0;
    _DAT_018e814c = 0;
    _DAT_018e80d4 = 1;
    _DAT_018e81c4 = 1;
    _DAT_018dd7d4 = 0x28;
    _DAT_018dd768 = 4;
    _DAT_018dd84c = 0x23;
    _DAT_018dd7e0 = 4;
    _DAT_018dd8c4 = 0x29;
    _DAT_018dd858 = 4;
    _DAT_018dd93c = 0x24;
    _DAT_018dd8d0 = 4;
    _DAT_018dd9b4 = 0x16;
    _DAT_018dd948 = 4;
    _DAT_018e842c = 0x24;
    _DAT_018e8330 = 0;
    _DAT_018e84ac = 0x24;
    _DAT_018e83b0 = 0x3f000000;
    _DAT_018e832c = 0x29;
    _DAT_018e83ac = 0x29;
    _DAT_018e8430 = 0;
    _DAT_018ddc14 = 10;
    _DAT_018ddc94 = 10;
    _DAT_018e84b0 = 0x3f000000;
    _DAT_018dda2c = 0xf;
    _DAT_018dd9c0 = 4;
    _DAT_018ddaa4 = 0x17;
    _DAT_018dda38 = 4;
    _DAT_018ddb1c = 0x10;
    _DAT_018ddab0 = 4;
    _DAT_018e823c = 6;
    _DAT_018e82b4 = 0;
    _DAT_018ddb94 = 0xe;
    _DAT_018ddb28 = 4;
    _DAT_018ddb24 = 1;
    _DAT_018ddb98 = &DAT_01f72a70;
    _DAT_018ddba8 = 4;
    _DAT_018ddc18 = &DAT_01f72bb8;
    _DAT_018ddc28 = 4;
    _DAT_018ddc98 = &DAT_01f72d00;
    _DAT_018ddd14 = 0x22;
    _DAT_018ddca8 = 4;
    _DAT_018ddca4 = 1;
    _DAT_018ddd18 = &DAT_01f72e48;
    _DAT_018ddd94 = 0x1c;
    _DAT_018ddd28 = 4;
    _DAT_018ddd98 = &DAT_01f72f90;
    _DAT_018dde14 = 0x1c;
    _DAT_018ddda8 = 4;
    _DAT_018dde18 = &DAT_01f730d8;
    _DAT_018dde94 = 0xe;
    _DAT_018dde28 = 4;
    _DAT_018dde24 = 1;
    _DAT_018dde98 = &DAT_01f73220;
    _DAT_018ddf14 = 0xf;
    _DAT_018ddea8 = 4;
    _DAT_018ddf18 = &DAT_01f734b0;
    _DAT_018ddf94 = 0x24;
    _DAT_018ddf28 = 4;
    _DAT_018ddf98 = &DAT_01f735f8;
    _DAT_018de014 = 0xd;
    _DAT_018ddfa8 = 4;
    _DAT_018de018 = &DAT_01f73740;
    _DAT_018ddfa4 = 1;
    _DAT_018de094 = 0xd;
    _DAT_018de028 = 4;
    _DAT_018de098 = &DAT_01f73888;
    _DAT_018de024 = 1;
    _DAT_018de114 = 0xe;
    _DAT_018de0a8 = 4;
    _DAT_018de118 = &DAT_01f739d0;
    _DAT_018de0a4 = 1;
    _DAT_018de0f0 = 1;
    _DAT_018de194 = 0xe;
    _DAT_018de128 = 4;
    _DAT_018de198 = &DAT_01f73b18;
    _DAT_018de124 = 1;
    _DAT_018de170 = 1;
    _DAT_018de214 = 0xe;
    _DAT_018de1a8 = 4;
    _DAT_018de218 = &DAT_01f73c60;
    _DAT_018de1a4 = 1;
    _DAT_018de1f0 = 1;
    _DAT_018de294 = 0x22;
    _DAT_018de228 = 4;
    _DAT_018de298 = &DAT_01f73da8;
    _DAT_018de314 = 0x1c;
    _DAT_018de2a8 = 4;
    _DAT_018de318 = &DAT_01f73ef0;
    _DAT_018de394 = 0x29;
    _DAT_018de328 = 4;
    _DAT_018de398 = &DAT_01f74038;
    _DAT_018de414 = 0x24;
    _DAT_018de3a8 = 4;
    _DAT_018de418 = &DAT_01f74180;
    _DAT_018de494 = 0x26;
    _DAT_018de428 = 4;
    _DAT_018de498 = &DAT_01f742c8;
    _DAT_018de514 = 0x22;
    _DAT_018de4a8 = 4;
    _DAT_018de4a4 = 1;
    _DAT_018de518 = &DAT_01f72e48;
    _DAT_018de594 = 0x1c;
    _DAT_018de528 = 4;
    _DAT_018de598 = &DAT_01f72f90;
    _DAT_018de614 = 0x22;
    _DAT_018de5a8 = 4;
    _DAT_018de5a4 = 1;
    _DAT_018de618 = &DAT_01f72e48;
    _DAT_018de694 = 0x1c;
    _DAT_018de628 = 4;
    _DAT_018de698 = &DAT_01f72f90;
    _DAT_018de714 = 0x22;
    _DAT_018de6a8 = 4;
    _DAT_018de6a4 = 1;
    _DAT_018de718 = &DAT_01f72e48;
    _DAT_018de794 = 0x1c;
    _DAT_018de728 = 4;
    _DAT_018de798 = &DAT_01f72f90;
    _DAT_018de814 = 0x22;
    _DAT_018de7a8 = 4;
    _DAT_018de7a4 = 1;
    _DAT_018de818 = &DAT_01f72e48;
    _DAT_018de894 = 0x1c;
    _DAT_018de828 = 4;
    _DAT_018de898 = &DAT_01f72f90;
    _DAT_018de914 = 0x22;
    _DAT_018de8a8 = 4;
    _DAT_018de8a4 = 1;
    _DAT_018de918 = &DAT_01f72e48;
    _DAT_018de994 = 0x1c;
    _DAT_018de928 = 4;
    _DAT_018de998 = &DAT_01f72f90;
    _DAT_018dea14 = 0x22;
    _DAT_018de9a8 = 4;
    _DAT_018de9a4 = 1;
    _DAT_018dea18 = &DAT_01f72e48;
    _DAT_018dea94 = 0x1c;
    _DAT_018dea28 = 4;
    _DAT_018dea98 = &DAT_01f72f90;
    _DAT_018deb14 = 0x22;
    _DAT_018deaa8 = 4;
    _DAT_018deaa4 = 1;
    _DAT_018deb18 = &DAT_01f72e48;
    _DAT_018deb94 = 0x1c;
    _DAT_018deb28 = 4;
    _DAT_018deb98 = &DAT_01f72f90;
    _DAT_018dec14 = 0x22;
    _DAT_018deba8 = 4;
    _DAT_018deba4 = 1;
    _DAT_018dec18 = &DAT_01f72e48;
    _DAT_018dec94 = 0x1c;
    _DAT_018dec28 = 4;
    _DAT_018dec98 = &DAT_01f72f90;
    _DAT_018ded14 = 0x22;
    _DAT_018deca8 = 4;
    _DAT_018deca4 = 1;
    _DAT_018ded18 = &DAT_01f72e48;
    _DAT_018ded94 = 0x1c;
    _DAT_018ded28 = 4;
    _DAT_018ded98 = &DAT_01f72f90;
    _DAT_018dee14 = 0x22;
    _DAT_018deda8 = 4;
    _DAT_018deda4 = 1;
    _DAT_018dee18 = &DAT_01f72e48;
    _DAT_018dee94 = 0x1c;
    _DAT_018dee28 = 4;
    _DAT_018dee98 = &DAT_01f72f90;
    _DAT_018def14 = 0x22;
    _DAT_018deea8 = 4;
    _DAT_018deea4 = 1;
    _DAT_018def18 = &DAT_01f72e48;
    _DAT_018def94 = 0x1c;
    _DAT_018def28 = 4;
    _DAT_018def98 = &DAT_01f72f90;
    _DAT_018df014 = 0x22;
    _DAT_018defa8 = 4;
    _DAT_018defa4 = 1;
    _DAT_018df018 = &DAT_01f72e48;
    _DAT_018df094 = 0x1c;
    _DAT_018df028 = 4;
    _DAT_018df098 = &DAT_01f72f90;
    _DAT_018df114 = 0x22;
    _DAT_018df0a8 = 4;
    _DAT_018df0a4 = 1;
    _DAT_018df118 = &DAT_01f72e48;
    _DAT_018df194 = 0x1c;
    _DAT_018df128 = 4;
    _DAT_018df198 = &DAT_01f72f90;
    _DAT_018df214 = 0x22;
    _DAT_018df1a8 = 4;
    _DAT_018df1a4 = 1;
    _DAT_018df218 = &DAT_01f72e48;
    _DAT_018df294 = 0x1c;
    _DAT_018df228 = 4;
    _DAT_018df298 = &DAT_01f72f90;
    _DAT_018df314 = 0x22;
    _DAT_018df2a8 = 4;
    _DAT_018df2a4 = 1;
    _DAT_018df318 = &DAT_01f72e48;
    _DAT_018df394 = 0x1c;
    _DAT_018df328 = 4;
    _DAT_018df398 = &DAT_01f72f90;
    _DAT_018df414 = 0x22;
    _DAT_018df3a8 = 4;
    _DAT_018df3a4 = 1;
    _DAT_018df418 = &DAT_01f72e48;
    _DAT_018df494 = 0x1c;
    _DAT_018df428 = 4;
    _DAT_018df498 = &DAT_01f72f90;
    _DAT_018df514 = 0x22;
    _DAT_018df4a8 = 4;
    _DAT_018df4a4 = 1;
    _DAT_018df518 = &DAT_01f72e48;
    _DAT_018df594 = 0x1c;
    _DAT_018df528 = 4;
    _DAT_018df598 = &DAT_01f72f90;
    _DAT_018df614 = 0x22;
    _DAT_018df5a8 = 4;
    _DAT_018df5a4 = 1;
    _DAT_018df618 = &DAT_01f72e48;
    _DAT_018df694 = 0x1c;
    _DAT_018df628 = 4;
    _DAT_018df698 = &DAT_01f72f90;
    _DAT_018df714 = 0x22;
    _DAT_018df6a8 = 4;
    _DAT_018df6a4 = 1;
    _DAT_018df718 = &DAT_01f72e48;
    _DAT_018df794 = 0x1c;
    _DAT_018df728 = 4;
    _DAT_018df798 = &DAT_01f72f90;
    _DAT_018df814 = 0x22;
    _DAT_018df7a8 = 4;
    _DAT_018df7a4 = 1;
    _DAT_018df818 = &DAT_01f72e48;
    _DAT_018df894 = 0x1c;
    _DAT_018df828 = 4;
    _DAT_018df898 = &DAT_01f72f90;
    _DAT_018df914 = 0x22;
    _DAT_018df8a8 = 4;
    _DAT_018df8a4 = 1;
    _DAT_018df918 = &DAT_01f72e48;
    _DAT_018df994 = 0x1c;
    _DAT_018df928 = 4;
    _DAT_018df998 = &DAT_01f72f90;
    _DAT_018dfa14 = 0x22;
    _DAT_018df9a8 = 4;
    _DAT_018df9a4 = 1;
    _DAT_018dfa18 = &DAT_01f72e48;
    _DAT_018dfa94 = 0x1c;
    _DAT_018dfa28 = 4;
    _DAT_018dfa98 = &DAT_01f72f90;
    _DAT_018dfb14 = 0x22;
    _DAT_018dfaa8 = 4;
    _DAT_018dfaa4 = 1;
    _DAT_018dfb18 = &DAT_01f72e48;
    _DAT_018dfb94 = 0x1c;
    _DAT_018dfb28 = 4;
    _DAT_018dfb98 = &DAT_01f72f90;
    _DAT_018dfc14 = 0x22;
    _DAT_018dfba8 = 4;
    _DAT_018dfba4 = 1;
    _DAT_018dfc18 = &DAT_01f72e48;
    _DAT_018dfc94 = 0x1c;
    _DAT_018dfc28 = 4;
    _DAT_018dfc98 = &DAT_01f72f90;
    _DAT_018dfd14 = 0x22;
    _DAT_018dfca8 = 4;
    _DAT_018dfca4 = 1;
    _DAT_018dfd18 = &DAT_01f72e48;
    _DAT_018dfd94 = 0x1c;
    _DAT_018dfd28 = 4;
    _DAT_018dfd98 = &DAT_01f72f90;
    _DAT_018dfe14 = 0x22;
    _DAT_018dfda8 = 4;
    _DAT_018dfda4 = 1;
    _DAT_018dfe18 = &DAT_01f72e48;
    _DAT_018dfe94 = 0x1c;
    _DAT_018dfe28 = 4;
    _DAT_018dfe98 = &DAT_01f72f90;
    _DAT_018dff14 = 0x22;
    _DAT_018dfea8 = 4;
    _DAT_018dfea4 = 1;
    _DAT_018dff18 = &DAT_01f72e48;
    _DAT_018dff94 = 0x1c;
    _DAT_018dff28 = 4;
    _DAT_018dff98 = &DAT_01f72f90;
    _DAT_018e0014 = 0x22;
    _DAT_018dffa8 = 4;
    _DAT_018dffa4 = 1;
    _DAT_018e0018 = &DAT_01f72e48;
    _DAT_018e0094 = 0x1c;
    _DAT_018e0028 = 4;
    _DAT_018e0098 = &DAT_01f72f90;
    _DAT_018e0114 = 0x22;
    _DAT_018e00a8 = 4;
    _DAT_018e00a4 = 1;
    _DAT_018e0118 = &DAT_01f72e48;
    _DAT_018e0194 = 0x1c;
    _DAT_018e0128 = 4;
    _DAT_018e0198 = &DAT_01f72f90;
    _DAT_018e0214 = 0x22;
    _DAT_018e01a8 = 4;
    _DAT_018e01a4 = 1;
    _DAT_018e0218 = &DAT_01f72e48;
    _DAT_018e0294 = 0x1c;
    _DAT_018e0228 = 4;
    _DAT_018e0298 = &DAT_01f72f90;
    _DAT_018e0314 = 0x22;
    _DAT_018e02a8 = 4;
    _DAT_018e02a4 = 1;
    _DAT_018e0318 = &DAT_01f72e48;
    _DAT_018e0394 = 0x1c;
    _DAT_018e0328 = 4;
    _DAT_018e0398 = &DAT_01f72f90;
    _DAT_018e0414 = 0x22;
    _DAT_018e03a8 = 4;
    _DAT_018e03a4 = 1;
    _DAT_018e0418 = &DAT_01f72e48;
    _DAT_018e0494 = 0x1c;
    _DAT_018e0428 = 4;
    _DAT_018e0498 = &DAT_01f72f90;
    _DAT_018e0514 = 0x22;
    _DAT_018e04a8 = 4;
    _DAT_018e04a4 = 1;
    _DAT_018e0518 = &DAT_01f72e48;
    _DAT_018e0594 = 0x1c;
    _DAT_018e0528 = 4;
    _DAT_018e0598 = &DAT_01f72f90;
    _DAT_018e0614 = 0x22;
    _DAT_018e05a8 = 4;
    _DAT_018e05a4 = 1;
    _DAT_018e0618 = &DAT_01f72e48;
    _DAT_018e0694 = 0x1c;
    _DAT_018e0628 = 4;
    _DAT_018e0698 = &DAT_01f72f90;
    _DAT_018e0714 = 0x22;
    _DAT_018e06a8 = 4;
    _DAT_018e06a4 = 1;
    _DAT_018e0718 = &DAT_01f72e48;
    _DAT_018e0794 = 0x1c;
    _DAT_018e0728 = 4;
    _DAT_018e0798 = &DAT_01f72f90;
    _DAT_018e0814 = 0x22;
    _DAT_018e07a8 = 4;
    _DAT_018e07a4 = 1;
    _DAT_018e0818 = &DAT_01f72e48;
    _DAT_018e0894 = 0x1c;
    _DAT_018e0828 = 4;
    _DAT_018e0898 = &DAT_01f72f90;
    _DAT_018e0914 = 0x22;
    _DAT_018e08a8 = 4;
    _DAT_018e08a4 = 1;
    _DAT_018e0918 = &DAT_01f72e48;
    _DAT_018e0994 = 0x1c;
    _DAT_018e0928 = 4;
    _DAT_018e0998 = &DAT_01f72f90;
    _DAT_018e0a14 = 0x22;
    _DAT_018e09a8 = 4;
    _DAT_018e09a4 = 1;
    _DAT_018e0a18 = &DAT_01f72e48;
    _DAT_018e0a94 = 0x1c;
    _DAT_018e0a28 = 4;
    _DAT_018e0a98 = &DAT_01f72f90;
    _DAT_018e0b14 = 0x22;
    _DAT_018e0aa8 = 4;
    _DAT_018e0aa4 = 1;
    _DAT_018e0b18 = &DAT_01f72e48;
    _DAT_018e0b94 = 0x1c;
    _DAT_018e0b28 = 4;
    _DAT_018e0b98 = &DAT_01f72f90;
    _DAT_018e0c14 = 0x22;
    _DAT_018e0ba8 = 4;
    _DAT_018e0ba4 = 1;
    _DAT_018e0c18 = &DAT_01f72e48;
    _DAT_018e0c94 = 0x1c;
    _DAT_018e0c28 = 4;
    _DAT_018e0c98 = &DAT_01f72f90;
    _DAT_018e0d14 = 0x22;
    _DAT_018e0ca8 = 4;
    _DAT_018e0ca4 = 1;
    _DAT_018e0d18 = &DAT_01f72e48;
    _DAT_018e0d94 = 0x1c;
    _DAT_018e0d28 = 4;
    _DAT_018e0d98 = &DAT_01f72f90;
    _DAT_018e0e14 = 0x22;
    _DAT_018e0da8 = 4;
    _DAT_018e0da4 = 1;
    _DAT_018e0e18 = &DAT_01f72e48;
    _DAT_018e0e94 = 0x1c;
    _DAT_018e0e28 = 4;
    _DAT_018e0e98 = &DAT_01f72f90;
    _DAT_018e0f14 = 0x22;
    _DAT_018e0ea8 = 4;
    _DAT_018e0ea4 = 1;
    _DAT_018e0f18 = &DAT_01f72e48;
    _DAT_018e0f94 = 0x1c;
    _DAT_018e0f28 = 4;
    _DAT_018e0f98 = &DAT_01f72f90;
    _DAT_018e1014 = 0x22;
    _DAT_018e0fa8 = 4;
    _DAT_018e0fa4 = 1;
    _DAT_018e1018 = &DAT_01f72e48;
    _DAT_018e1094 = 0x1c;
    _DAT_018e1028 = 4;
    _DAT_018e1098 = &DAT_01f72f90;
    _DAT_018e1114 = 0x22;
    _DAT_018e10a8 = 4;
    _DAT_018e10a4 = 1;
    _DAT_018e1118 = &DAT_01f72e48;
    _DAT_018e1194 = 0x1c;
    _DAT_018e1128 = 4;
    _DAT_018e1198 = &DAT_01f72f90;
    _DAT_018e1214 = 0x22;
    _DAT_018e11a8 = 4;
    _DAT_018e11a4 = 1;
    _DAT_018e1218 = &DAT_01f72e48;
    _DAT_018e1294 = 0x1c;
    _DAT_018e1228 = 4;
    _DAT_018e1298 = &DAT_01f72f90;
    _DAT_018e1314 = 0x22;
    _DAT_018e12a8 = 4;
    _DAT_018e12a4 = 1;
    _DAT_018e1318 = &DAT_01f72e48;
    _DAT_018e1394 = 0x1c;
    _DAT_018e1328 = 4;
    _DAT_018e1398 = &DAT_01f72f90;
    _DAT_018e1414 = 0x22;
    _DAT_018e13a8 = 4;
    _DAT_018e13a4 = 1;
    _DAT_018e1418 = &DAT_01f72e48;
    _DAT_018e1494 = 0x1c;
    _DAT_018e1428 = 4;
    _DAT_018e1498 = &DAT_01f72f90;
    _DAT_018e1514 = 0x22;
    _DAT_018e14a8 = 4;
    _DAT_018e14a4 = 1;
    _DAT_018e1518 = &DAT_01f72e48;
    _DAT_018e1594 = 0x1c;
    _DAT_018e1528 = 4;
    _DAT_018e1598 = &DAT_01f72f90;
    _DAT_018e1614 = 0x22;
    _DAT_018e15a8 = 4;
    _DAT_018e15a4 = 1;
    _DAT_018e1618 = &DAT_01f72e48;
    _DAT_018e1694 = 0x1c;
    _DAT_018e1628 = 4;
    _DAT_018e1698 = &DAT_01f72f90;
    _DAT_018e1714 = 0x22;
    _DAT_018e16a8 = 4;
    _DAT_018e16a4 = 1;
    _DAT_018e1718 = &DAT_01f72e48;
    _DAT_018e1794 = 0x1c;
    _DAT_018e1728 = 4;
    _DAT_018e1798 = &DAT_01f72f90;
    _DAT_018e1814 = 0x22;
    _DAT_018e17a8 = 4;
    _DAT_018e17a4 = 1;
    _DAT_018e1818 = &DAT_01f72e48;
    _DAT_018e1894 = 0x1c;
    _DAT_018e1828 = 4;
    _DAT_018e1898 = &DAT_01f72f90;
    _DAT_018e1914 = 0x22;
    _DAT_018e18a8 = 4;
    _DAT_018e18a4 = 1;
    _DAT_018e1918 = &DAT_01f72e48;
    _DAT_018e1994 = 0x1c;
    _DAT_018e1928 = 4;
    _DAT_018e1998 = &DAT_01f72f90;
    _DAT_018e1a14 = 0x22;
    _DAT_018e19a8 = 4;
    _DAT_018e19a4 = 1;
    _DAT_018e1a18 = &DAT_01f72e48;
    _DAT_018e1a94 = 0x1c;
    _DAT_018e1a28 = 4;
    _DAT_018e1a98 = &DAT_01f72f90;
    _DAT_018e1b14 = 0x22;
    _DAT_018e1aa8 = 4;
    _DAT_018e1aa4 = 1;
    _DAT_018e1b18 = &DAT_01f72e48;
    _DAT_018e1b94 = 0x1c;
    _DAT_018e1b28 = 4;
    _DAT_018e1b98 = &DAT_01f72f90;
    _DAT_018e1c14 = 0x22;
    _DAT_018e1ba8 = 4;
    _DAT_018e1ba4 = 1;
    _DAT_018e1c18 = &DAT_01f72e48;
    _DAT_018e1c94 = 0x1c;
    _DAT_018e1c28 = 4;
    _DAT_018e1c98 = &DAT_01f72f90;
    _DAT_018e1d14 = 0x22;
    _DAT_018e1ca8 = 4;
    _DAT_018e1ca4 = 1;
    _DAT_018e1d18 = &DAT_01f72e48;
    _DAT_018e1d94 = 0x1c;
    _DAT_018e1d28 = 4;
    _DAT_018e1d98 = &DAT_01f72f90;
    _DAT_018e1e14 = 0x22;
    _DAT_018e1da8 = 4;
    _DAT_018e1da4 = 1;
    _DAT_018e1e18 = &DAT_01f72e48;
    _DAT_018e1e94 = 0x1c;
    _DAT_018e1e28 = 4;
    _DAT_018e1e98 = &DAT_01f72f90;
    _DAT_018e1f14 = 0x22;
    _DAT_018e1ea8 = 4;
    _DAT_018e1ea4 = 1;
    _DAT_018e1f18 = &DAT_01f72e48;
    _DAT_018e1f94 = 0x1c;
    _DAT_018e1f28 = 4;
    _DAT_018e1f98 = &DAT_01f72f90;
    _DAT_018e2014 = 0x22;
    _DAT_018e1fa8 = 4;
    _DAT_018e1fa4 = 1;
    _DAT_018e2018 = &DAT_01f72e48;
    _DAT_018e2094 = 0x1c;
    _DAT_018e2028 = 4;
    _DAT_018e2098 = &DAT_01f72f90;
    _DAT_018e2114 = 0x22;
    _DAT_018e20a8 = 4;
    _DAT_018e20a4 = 1;
    _DAT_018e2118 = &DAT_01f72e48;
    _DAT_018e2194 = 0x1c;
    _DAT_018e2128 = 4;
    _DAT_018e2198 = &DAT_01f72f90;
    _DAT_018e2214 = 0x22;
    _DAT_018e21a8 = 4;
    _DAT_018e21a4 = 1;
    _DAT_018e2218 = &DAT_01f72e48;
    _DAT_018e2294 = 0x1c;
    _DAT_018e2228 = 4;
    _DAT_018e2298 = &DAT_01f72f90;
    _DAT_018e2314 = 0x22;
    _DAT_018e22a8 = 4;
    _DAT_018e22a4 = 1;
    _DAT_018e2318 = &DAT_01f72e48;
    _DAT_018e2394 = 0x1c;
    _DAT_018e2328 = 4;
    _DAT_018e2398 = &DAT_01f72f90;
    _DAT_018e2414 = 0x22;
    _DAT_018e23a8 = 4;
    _DAT_018e23a4 = 1;
    _DAT_018e2418 = &DAT_01f72e48;
    _DAT_018e2494 = 0x1c;
    _DAT_018e2428 = 4;
    _DAT_018e2498 = &DAT_01f72f90;
    _DAT_018e2514 = 0x22;
    _DAT_018e24a8 = 4;
    _DAT_018e24a4 = 1;
    _DAT_018e2518 = &DAT_01f72e48;
    _DAT_018e2594 = 0x1c;
    _DAT_018e2528 = 4;
    _DAT_018e2598 = &DAT_01f72f90;
    _DAT_018e2614 = 0x22;
    _DAT_018e25a8 = 4;
    _DAT_018e25a4 = 1;
    _DAT_018e2618 = &DAT_01f72e48;
    _DAT_018e2694 = 0x1c;
    _DAT_018e2628 = 4;
    _DAT_018e2698 = &DAT_01f72f90;
    _DAT_018e2714 = 0x22;
    _DAT_018e26a8 = 4;
    _DAT_018e26a4 = 1;
    _DAT_018e2718 = &DAT_01f72e48;
    _DAT_018e2794 = 0x1c;
    _DAT_018e2728 = 4;
    _DAT_018e2798 = &DAT_01f72f90;
    _DAT_018e2814 = 0x22;
    _DAT_018e27a8 = 4;
    _DAT_018e27a4 = 1;
    _DAT_018e2818 = &DAT_01f72e48;
    _DAT_018e2894 = 0x1c;
    _DAT_018e2828 = 4;
    _DAT_018e2898 = &DAT_01f72f90;
    _DAT_018e2914 = 0x22;
    _DAT_018e28a8 = 4;
    _DAT_018e28a4 = 1;
    _DAT_018e2918 = &DAT_01f72e48;
    _DAT_018e2994 = 0x1c;
    _DAT_018e2928 = 4;
    _DAT_018e2998 = &DAT_01f72f90;
    _DAT_018e2a14 = 0x22;
    _DAT_018e29a8 = 4;
    _DAT_018e29a4 = 1;
    _DAT_018e2a18 = &DAT_01f72e48;
    _DAT_018e2a94 = 0x1c;
    _DAT_018e2a28 = 4;
    _DAT_018e2a98 = &DAT_01f72f90;
    _DAT_018e2b14 = 0x22;
    _DAT_018e2aa8 = 4;
    _DAT_018e2aa4 = 1;
    _DAT_018e2b18 = &DAT_01f72e48;
    _DAT_018e2b94 = 0x1c;
    _DAT_018e2b28 = 4;
    _DAT_018e2b98 = &DAT_01f72f90;
    _DAT_018e2c14 = 0x22;
    _DAT_018e2ba8 = 4;
    _DAT_018e2ba4 = 1;
    _DAT_018e2c18 = &DAT_01f72e48;
    _DAT_018e2c94 = 0x1c;
    _DAT_018e2c28 = 4;
    _DAT_018e2c98 = &DAT_01f72f90;
    _DAT_018e2d14 = 0x22;
    _DAT_018e2ca8 = 4;
    _DAT_018e2ca4 = 1;
    _DAT_018e2d18 = &DAT_01f72e48;
    _DAT_018e2d94 = 0x1c;
    _DAT_018e2d28 = 4;
    _DAT_018e2d98 = &DAT_01f72f90;
    _DAT_018e2e14 = 0x22;
    _DAT_018e2da8 = 4;
    _DAT_018e2da4 = 1;
    _DAT_018e2e18 = &DAT_01f72e48;
    _DAT_018e2e94 = 0x1c;
    _DAT_018e2e28 = 4;
    _DAT_018e2e98 = &DAT_01f72f90;
    _DAT_018e2f14 = 0x22;
    _DAT_018e2ea8 = 4;
    _DAT_018e2ea4 = 1;
    _DAT_018e2f18 = &DAT_01f72e48;
    _DAT_018e2f94 = 0x1c;
    _DAT_018e2f28 = 4;
    _DAT_018e2f98 = &DAT_01f72f90;
    _DAT_018e3014 = 0x22;
    _DAT_018e2fa8 = 4;
    _DAT_018e2fa4 = 1;
    _DAT_018e3018 = &DAT_01f72e48;
    _DAT_018e3094 = 0x1c;
    _DAT_018e3028 = 4;
    _DAT_018e3098 = &DAT_01f72f90;
    _DAT_018e3114 = 0x22;
    _DAT_018e30a8 = 4;
    _DAT_018e30a4 = 1;
    _DAT_018e3118 = &DAT_01f72e48;
    _DAT_018e3194 = 0x1c;
    _DAT_018e3128 = 4;
    _DAT_018e3198 = &DAT_01f72f90;
    _DAT_018e3214 = 0x22;
    _DAT_018e31a8 = 4;
    _DAT_018e31a4 = 1;
    _DAT_018e3218 = &DAT_01f72e48;
    _DAT_018e3294 = 0x1c;
    _DAT_018e3228 = 4;
    _DAT_018e3298 = &DAT_01f72f90;
    _DAT_018e3314 = 0x22;
    _DAT_018e32a8 = 4;
    _DAT_018e32a4 = 1;
    _DAT_018e3318 = &DAT_01f72e48;
    _DAT_018e3394 = 0x1c;
    _DAT_018e3328 = 4;
    _DAT_018e3398 = &DAT_01f72f90;
    _DAT_018e3414 = 0x22;
    _DAT_018e33a8 = 4;
    _DAT_018e33a4 = 1;
    _DAT_018e3418 = &DAT_01f72e48;
    _DAT_018e3494 = 0x1c;
    _DAT_018e3428 = 4;
    _DAT_018e3498 = &DAT_01f72f90;
    _DAT_018e3514 = 0x22;
    _DAT_018e34a8 = 4;
    _DAT_018e34a4 = 1;
    _DAT_018e3518 = &DAT_01f72e48;
    _DAT_018e3594 = 0x1c;
    _DAT_018e3528 = 4;
    _DAT_018e3598 = &DAT_01f72f90;
    _DAT_018e3614 = 0x22;
    _DAT_018e35a8 = 4;
    _DAT_018e35a4 = 1;
    _DAT_018e3618 = &DAT_01f72e48;
    _DAT_018e3694 = 0x1c;
    _DAT_018e3628 = 4;
    _DAT_018e3698 = &DAT_01f72f90;
    _DAT_018e3714 = 0x22;
    _DAT_018e36a8 = 4;
    _DAT_018e36a4 = 1;
    _DAT_018e3718 = &DAT_01f72e48;
    _DAT_018e3794 = 0x1c;
    _DAT_018e3728 = 4;
    _DAT_018e3798 = &DAT_01f72f90;
    _DAT_018e3814 = 0x22;
    _DAT_018e37a8 = 4;
    _DAT_018e37a4 = 1;
    _DAT_018e3818 = &DAT_01f72e48;
    _DAT_018e3894 = 0x1c;
    _DAT_018e3828 = 4;
    _DAT_018e3898 = &DAT_01f72f90;
    _DAT_018e3914 = 0x22;
    _DAT_018e38a8 = 4;
    _DAT_018e38a4 = 1;
    _DAT_018e3918 = &DAT_01f72e48;
    _DAT_018e3994 = 0x1c;
    _DAT_018e3928 = 4;
    _DAT_018e3998 = &DAT_01f72f90;
    _DAT_018e3a14 = 0x22;
    _DAT_018e39a8 = 4;
    _DAT_018e39a4 = 1;
    _DAT_018e3a18 = &DAT_01f72e48;
    _DAT_018e3a94 = 0x1c;
    _DAT_018e3a28 = 4;
    _DAT_018e3a98 = &DAT_01f72f90;
    _DAT_018e3b14 = 0x22;
    _DAT_018e3aa8 = 4;
    _DAT_018e3aa4 = 1;
    _DAT_018e3b18 = &DAT_01f72e48;
    _DAT_018e3b94 = 0x1c;
    _DAT_018e3b28 = 4;
    _DAT_018e3b98 = &DAT_01f72f90;
    _DAT_018e3c14 = 0x22;
    _DAT_018e3ba8 = 4;
    _DAT_018e3ba4 = 1;
    _DAT_018e3c18 = &DAT_01f72e48;
    _DAT_018e3c94 = 0x1c;
    _DAT_018e3c28 = 4;
    _DAT_018e3c98 = &DAT_01f72f90;
    _DAT_018e3d14 = 0x22;
    _DAT_018e3ca8 = 4;
    _DAT_018e3ca4 = 1;
    _DAT_018e3d18 = &DAT_01f72e48;
    _DAT_018e3d94 = 0x1c;
    _DAT_018e3d28 = 4;
    _DAT_018e3d98 = &DAT_01f72f90;
    _DAT_018e3e14 = 0x22;
    _DAT_018e3da8 = 4;
    _DAT_018e3da4 = 1;
    _DAT_018e3e18 = &DAT_01f72e48;
    _DAT_018e3e94 = 0x1c;
    _DAT_018e3e28 = 4;
    _DAT_018e3e98 = &DAT_01f72f90;
    _DAT_018e3f14 = 0x22;
    _DAT_018e3ea8 = 4;
    _DAT_018e3ea4 = 1;
    _DAT_018e3f18 = &DAT_01f72e48;
    _DAT_018e3f94 = 0x1c;
    _DAT_018e3f28 = 4;
    _DAT_018e3f98 = &DAT_01f72f90;
    _DAT_018e4014 = 0x22;
    _DAT_018e3fa8 = 4;
    _DAT_018e3fa4 = 1;
    _DAT_018e4018 = &DAT_01f72e48;
    _DAT_018e4094 = 0x1c;
    _DAT_018e4028 = 4;
    _DAT_018e4098 = &DAT_01f72f90;
    _DAT_018e4114 = 0x22;
    _DAT_018e40a8 = 4;
    _DAT_018e40a4 = 1;
    _DAT_018e4118 = &DAT_01f72e48;
    _DAT_018e4194 = 0x1c;
    _DAT_018e4128 = 4;
    _DAT_018e4198 = &DAT_01f72f90;
    _DAT_018e4214 = 0x22;
    _DAT_018e41a8 = 4;
    _DAT_018e41a4 = 1;
    _DAT_018e4218 = &DAT_01f72e48;
    _DAT_018e4294 = 0x1c;
    _DAT_018e4228 = 4;
    _DAT_018e4298 = &DAT_01f72f90;
    _DAT_018e4314 = 0x22;
    _DAT_018e42a8 = 4;
    _DAT_018e42a4 = 1;
    _DAT_018e4318 = &DAT_01f72e48;
    _DAT_018e4394 = 0x1c;
    _DAT_018e4328 = 4;
    _DAT_018e4398 = &DAT_01f72f90;
    _DAT_018e4414 = 0x22;
    _DAT_018e43a8 = 4;
    _DAT_018e43a4 = 1;
    _DAT_018e4418 = &DAT_01f72e48;
    _DAT_018e4494 = 0x1c;
    _DAT_018e4428 = 4;
    _DAT_018e4498 = &DAT_01f72f90;
    _DAT_018e4514 = 0x22;
    _DAT_018e44a8 = 4;
    _DAT_018e44a4 = 1;
    _DAT_018e4518 = &DAT_01f72e48;
    _DAT_018e4594 = 0x1c;
    _DAT_018e4528 = 4;
    _DAT_018e4598 = &DAT_01f72f90;
    _DAT_018e4614 = 0x22;
    _DAT_018e45a8 = 4;
    _DAT_018e45a4 = 1;
    _DAT_018e4618 = &DAT_01f72e48;
    _DAT_018e4694 = 0x1c;
    _DAT_018e4628 = 4;
    _DAT_018e4698 = &DAT_01f72f90;
    _DAT_018e4714 = 0x22;
    _DAT_018e46a8 = 4;
    _DAT_018e46a4 = 1;
    _DAT_018e4718 = &DAT_01f72e48;
    _DAT_018e4794 = 0x1c;
    _DAT_018e4728 = 4;
    _DAT_018e4798 = &DAT_01f72f90;
    _DAT_018e4814 = 0x22;
    _DAT_018e47a8 = 4;
    _DAT_018e47a4 = 1;
    _DAT_018e4818 = &DAT_01f72e48;
    _DAT_018e4894 = 0x1c;
    _DAT_018e4828 = 4;
    _DAT_018e4898 = &DAT_01f72f90;
    _DAT_018e4914 = 0x22;
    _DAT_018e48a8 = 4;
    _DAT_018e48a4 = 1;
    _DAT_018e4918 = &DAT_01f72e48;
    _DAT_018e4994 = 0x1c;
    _DAT_018e4928 = 4;
    _DAT_018e4998 = &DAT_01f72f90;
    _DAT_018e4a14 = 0x22;
    _DAT_018e49a8 = 4;
    _DAT_018e49a4 = 1;
    _DAT_018e4a18 = &DAT_01f72e48;
    _DAT_018e4a94 = 0x1c;
    _DAT_018e4a28 = 4;
    _DAT_018e4a98 = &DAT_01f72f90;
    _DAT_018e4b14 = 0x22;
    _DAT_018e4aa8 = 4;
    _DAT_018e4aa4 = 1;
    _DAT_018e4b18 = &DAT_01f72e48;
    _DAT_018e4b94 = 0x1c;
    _DAT_018e4b28 = 4;
    _DAT_018e4b98 = &DAT_01f72f90;
    _DAT_018e4c14 = 0x22;
    _DAT_018e4ba8 = 4;
    _DAT_018e4ba4 = 1;
    _DAT_018e4c18 = &DAT_01f72e48;
    _DAT_018e4c94 = 0x1c;
    _DAT_018e4c28 = 4;
    _DAT_018e4c98 = &DAT_01f72f90;
    _DAT_018e4d14 = 0x22;
    _DAT_018e4ca8 = 4;
    _DAT_018e4ca4 = 1;
    _DAT_018e4d18 = &DAT_01f72e48;
    _DAT_018e4d94 = 0x1c;
    _DAT_018e4d28 = 4;
    _DAT_018e4d98 = &DAT_01f72f90;
    _DAT_018e4e14 = 0x22;
    _DAT_018e4da8 = 4;
    _DAT_018e4da4 = 1;
    _DAT_018e4e18 = &DAT_01f72e48;
    _DAT_018e4e94 = 0x1c;
    _DAT_018e4e28 = 4;
    _DAT_018e4e98 = &DAT_01f72f90;
    _DAT_018e4f14 = 0x22;
    _DAT_018e4ea8 = 4;
    _DAT_018e4ea4 = 1;
    _DAT_018e4f18 = &DAT_01f72e48;
    _DAT_018e4f94 = 0x1c;
    _DAT_018e4f28 = 4;
    _DAT_018e4f98 = &DAT_01f72f90;
    _DAT_018e5014 = 0x22;
    _DAT_018e4fa8 = 4;
    _DAT_018e4fa4 = 1;
    _DAT_018e5018 = &DAT_01f72e48;
    _DAT_018e5094 = 0x1c;
    _DAT_018e5028 = 4;
    _DAT_018e5098 = &DAT_01f72f90;
    _DAT_018e5114 = 0x22;
    _DAT_018e50a8 = 4;
    _DAT_018e50a4 = 1;
    _DAT_018e5118 = &DAT_01f72e48;
    _DAT_018e5194 = 0x1c;
    _DAT_018e5128 = 4;
    _DAT_018e5198 = &DAT_01f72f90;
    _DAT_018e5214 = 0x22;
    _DAT_018e51a8 = 4;
    _DAT_018e51a4 = 1;
    _DAT_018e5218 = &DAT_01f72e48;
    _DAT_018e5294 = 0x1c;
    _DAT_018e5228 = 4;
    _DAT_018e5298 = &DAT_01f72f90;
    _DAT_018e5314 = 0x22;
    _DAT_018e52a8 = 4;
    _DAT_018e52a4 = 1;
    _DAT_018e5318 = &DAT_01f72e48;
    _DAT_018e5394 = 0x1c;
    _DAT_018e5328 = 4;
    _DAT_018e5398 = &DAT_01f72f90;
    _DAT_018e5414 = 0x22;
    _DAT_018e53a8 = 4;
    _DAT_018e53a4 = 1;
    _DAT_018e5418 = &DAT_01f72e48;
    _DAT_018e5494 = 0x1c;
    _DAT_018e5428 = 4;
    _DAT_018e5498 = &DAT_01f72f90;
    _DAT_018e5514 = 0x22;
    _DAT_018e54a8 = 4;
    _DAT_018e54a4 = 1;
    _DAT_018e5518 = &DAT_01f72e48;
    _DAT_018e5594 = 0x1c;
    _DAT_018e5528 = 4;
    _DAT_018e5598 = &DAT_01f72f90;
    _DAT_018e5614 = 0x22;
    _DAT_018e55a8 = 4;
    _DAT_018e55a4 = 1;
    _DAT_018e5618 = &DAT_01f72e48;
    _DAT_018e5694 = 0x1c;
    _DAT_018e5628 = 4;
    _DAT_018e5698 = &DAT_01f72f90;
    _DAT_018e5714 = 0x22;
    _DAT_018e56a8 = 4;
    _DAT_018e56a4 = 1;
    _DAT_018e5718 = &DAT_01f72e48;
    _DAT_018e5794 = 0x1c;
    _DAT_018e5728 = 4;
    _DAT_018e5798 = &DAT_01f72f90;
    _DAT_018e5814 = 0x22;
    _DAT_018e57a8 = 4;
    _DAT_018e57a4 = 1;
    _DAT_018e5818 = &DAT_01f72e48;
    _DAT_018e5894 = 0x1c;
    _DAT_018e5828 = 4;
    _DAT_018e5898 = &DAT_01f72f90;
    _DAT_018e5914 = 0x22;
    _DAT_018e58a8 = 4;
    _DAT_018e58a4 = 1;
    _DAT_018e5918 = &DAT_01f72e48;
    _DAT_018e5994 = 0x1c;
    _DAT_018e5928 = 4;
    _DAT_018e5998 = &DAT_01f72f90;
    _DAT_018e5a14 = 0x22;
    _DAT_018e59a8 = 4;
    _DAT_018e59a4 = 1;
    _DAT_018e5a18 = &DAT_01f72e48;
    _DAT_018e5a94 = 0x1c;
    _DAT_018e5a28 = 4;
    _DAT_018e5a98 = &DAT_01f72f90;
    _DAT_018e5b14 = 0x22;
    _DAT_018e5aa8 = 4;
    _DAT_018e5aa4 = 1;
    _DAT_018e5b18 = &DAT_01f72e48;
    _DAT_018e5b94 = 0x1c;
    _DAT_018e5b28 = 4;
    _DAT_018e5b98 = &DAT_01f72f90;
    _DAT_018e5c14 = 0x22;
    _DAT_018e5ba8 = 4;
    _DAT_018e5ba4 = 1;
    _DAT_018e5c18 = &DAT_01f72e48;
    _DAT_018e5c94 = 0x1c;
    _DAT_018e5c28 = 4;
    _DAT_018e5c98 = &DAT_01f72f90;
    _DAT_018e5d14 = 0x22;
    _DAT_018e5ca8 = 4;
    _DAT_018e5ca4 = 1;
    _DAT_018e5d18 = &DAT_01f72e48;
    _DAT_018e5d94 = 0x1c;
    _DAT_018e5d28 = 4;
    _DAT_018e5d98 = &DAT_01f72f90;
    _DAT_018e5e14 = 0x22;
    _DAT_018e5da8 = 4;
    _DAT_018e5da4 = 1;
    _DAT_018e5e18 = &DAT_01f72e48;
    _DAT_018e5e94 = 0x1c;
    _DAT_018e5e28 = 4;
    _DAT_018e5e98 = &DAT_01f72f90;
    _DAT_018e5f14 = 0x22;
    _DAT_018e5ea8 = 4;
    _DAT_018e5ea4 = 1;
    _DAT_018e5f18 = &DAT_01f72e48;
    _DAT_018e5f94 = 0x1c;
    _DAT_018e5f28 = 4;
    _DAT_018e5f98 = &DAT_01f72f90;
    _DAT_018e6014 = 0x22;
    _DAT_018e5fa8 = 4;
    _DAT_018e5fa4 = 1;
    _DAT_018e6018 = &DAT_01f72e48;
    _DAT_018e6094 = 0x1c;
    _DAT_018e6028 = 4;
    _DAT_018e6098 = &DAT_01f72f90;
    _DAT_018e6114 = 0x22;
    _DAT_018e60a8 = 4;
    _DAT_018e60a4 = 1;
    _DAT_018e6118 = &DAT_01f72e48;
    _DAT_018e6194 = 0x1c;
    _DAT_018e6128 = 4;
    _DAT_018e6198 = &DAT_01f72f90;
    _DAT_018e6214 = 0x22;
    _DAT_018e61a8 = 4;
    _DAT_018e61a4 = 1;
    _DAT_018e6218 = &DAT_01f72e48;
    _DAT_018e6294 = 0x1c;
    _DAT_018e6228 = 4;
    _DAT_018e6298 = &DAT_01f72f90;
    _DAT_018e6314 = 0x22;
    _DAT_018e62a8 = 4;
    _DAT_018e62a4 = 1;
    _DAT_018e6318 = &DAT_01f72e48;
    _DAT_018e6394 = 0x1c;
    _DAT_018e6328 = 4;
    _DAT_018e6398 = &DAT_01f72f90;
    _DAT_018e6414 = 0x22;
    _DAT_018e63a8 = 4;
    _DAT_018e63a4 = 1;
    _DAT_018e6418 = &DAT_01f72e48;
    _DAT_018e6494 = 0x1c;
    _DAT_018e6428 = 4;
    _DAT_018e6498 = &DAT_01f72f90;
    _DAT_018e6514 = 0x22;
    _DAT_018e64a8 = 4;
    _DAT_018e64a4 = 1;
    _DAT_018e6518 = &DAT_01f72e48;
    _DAT_018e6594 = 0x1c;
    _DAT_018e6528 = 4;
    _DAT_018e6598 = &DAT_01f72f90;
    _DAT_018e6614 = 0x22;
    _DAT_018e65a8 = 4;
    _DAT_018e65a4 = 1;
    _DAT_018e6618 = &DAT_01f72e48;
    _DAT_018e6694 = 0x1c;
    _DAT_018e6628 = 4;
    _DAT_018e6698 = &DAT_01f72f90;
    _DAT_018e6714 = 0x22;
    _DAT_018e66a8 = 4;
    _DAT_018e66a4 = 1;
    _DAT_018e6718 = &DAT_01f72e48;
    _DAT_018e6794 = 0x1c;
    _DAT_018e6728 = 4;
    _DAT_018e6798 = &DAT_01f72f90;
    _DAT_018e6814 = 0x22;
    _DAT_018e67a8 = 4;
    _DAT_018e67a4 = 1;
    _DAT_018e6818 = &DAT_01f72e48;
    _DAT_018e6894 = 0x1c;
    _DAT_018e6828 = 4;
    _DAT_018e6898 = &DAT_01f72f90;
    _DAT_018e6914 = 0x22;
    _DAT_018e68a8 = 4;
    _DAT_018e68a4 = 1;
    _DAT_018e6918 = &DAT_01f72e48;
    _DAT_018e6994 = 0x1c;
    _DAT_018e6928 = 4;
    _DAT_018e6998 = &DAT_01f72f90;
    _DAT_018e6a14 = 0x22;
    _DAT_018e69a8 = 4;
    _DAT_018e69a4 = 1;
    _DAT_018e6a18 = &DAT_01f72e48;
    _DAT_018e6a94 = 0x1c;
    _DAT_018e6a28 = 4;
    _DAT_018e6a98 = &DAT_01f72f90;
    _DAT_018e6b14 = 0x22;
    _DAT_018e6aa8 = 4;
    _DAT_018e6aa4 = 1;
    _DAT_018e6b18 = &DAT_01f72e48;
    _DAT_018e6b94 = 0x1c;
    _DAT_018e6b28 = 4;
    _DAT_018e6b98 = &DAT_01f72f90;
    _DAT_018e6c14 = 0x22;
    _DAT_018e6ba8 = 4;
    _DAT_018e6ba4 = 1;
    _DAT_018e6c18 = &DAT_01f72e48;
    _DAT_018e6c94 = 0x1c;
    _DAT_018e6c28 = 4;
    _DAT_018e6c98 = &DAT_01f72f90;
    _DAT_018e6d14 = 0x22;
    _DAT_018e6ca8 = 4;
    _DAT_018e6ca4 = 1;
    _DAT_018e6d18 = &DAT_01f72e48;
    _DAT_018e6d94 = 0x1c;
    _DAT_018e6d28 = 4;
    _DAT_018e6d98 = &DAT_01f72f90;
    _DAT_018e6e14 = 0x22;
    _DAT_018e6da8 = 4;
    _DAT_018e6da4 = 1;
    _DAT_018e6e18 = &DAT_01f72e48;
    _DAT_018e6e28 = 4;
    _DAT_018e6ea8 = 4;
    _DAT_018e6f28 = 4;
    _DAT_018e6fa8 = 4;
    _DAT_018e7028 = 4;
    _DAT_018e70a8 = 4;
    _DAT_018e7128 = 4;
    _DAT_018e71a8 = 4;
    _DAT_018e7228 = 4;
    _DAT_018e72a8 = 4;
    _DAT_018e7328 = 4;
    _DAT_018e73a8 = 4;
    _DAT_018e7428 = 4;
    _DAT_018e74a8 = 4;
    _DAT_018e6e94 = 0x1c;
    _DAT_018e6f94 = 0x1c;
    _DAT_018e7094 = 0x1c;
    _DAT_018e7194 = 0x1c;
    _DAT_018e7294 = 0x1c;
    _DAT_018e7394 = 0x1c;
    _DAT_018e7494 = 0x1c;
    _DAT_018e6f18 = &DAT_01f72e48;
    _DAT_018e7018 = &DAT_01f72e48;
    _DAT_018e7118 = &DAT_01f72e48;
    _DAT_018e7218 = &DAT_01f72e48;
    _DAT_018e7318 = &DAT_01f72e48;
    _DAT_018e7418 = &DAT_01f72e48;
    _DAT_018e7518 = &DAT_01f72e48;
    _DAT_018e7774 = 0x10;
    _DAT_018e77ec = 0x10;
    _DAT_018e6e98 = &DAT_01f72f90;
    _DAT_018e6f14 = 0x22;
    _DAT_018e6ea4 = 1;
    _DAT_018e6f98 = &DAT_01f72f90;
    _DAT_018e7014 = 0x22;
    _DAT_018e6fa4 = 1;
    _DAT_018e7098 = &DAT_01f72f90;
    _DAT_018e7114 = 0x22;
    _DAT_018e70a4 = 1;
    _DAT_018e7198 = &DAT_01f72f90;
    _DAT_018e7214 = 0x22;
    _DAT_018e71a4 = 1;
    _DAT_018e7298 = &DAT_01f72f90;
    _DAT_018e7314 = 0x22;
    _DAT_018e72a4 = 1;
    _DAT_018e7398 = &DAT_01f72f90;
    _DAT_018e7414 = 0x22;
    _DAT_018e73a4 = 1;
    _DAT_018e7498 = &DAT_01f72f90;
    _DAT_018e7514 = 0x22;
    _DAT_018e74a4 = 1;
    _DAT_018e7e9c = 0x23;
    _DAT_018e7e30 = 6;
    _DAT_018e7594 = 7;
    _DAT_018e760c = 1;
    _DAT_018e7684 = 1;
    _DAT_018e76fc = 0x17;
    *(undefined4 *)(param_1 + 0xf80) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xf68) = 0;
    *(undefined4 *)(param_1 + 0xf6c) = 0;
    *(undefined1 *)(param_1 + 0xf9c) = 0;
    *(undefined4 *)(param_1 + 0xf60) = 0;
    FUN_00fba040(0);
    *(undefined4 *)(param_1 + 0xfd8) = 0;
    DAT_01bea084 = DAT_01bea084 | 0x400000;
    return 1;
  }
  uVar8 = 0;
  local_8 = 0;
  local_c = &DAT_01f21bf8;
LAB_00fca4f2:
  iVar11 = 0;
  if (2 < uVar2) {
    if (DAT_01f6c9a0 < (int)(uVar8 - 3)) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(&DAT_01f6c9a4 + (uVar8 - 3) * 4);
    }
    *(undefined **)(iVar7 + 0x784) = &DAT_01f21bfc + local_8;
    piVar14 = DAT_018e8504;
    *local_c = iVar7;
    if (piVar14 != DAT_018e8508) {
      do {
        iVar11 = *piVar14;
        pbVar12 = (byte *)(iVar11 + 0x28);
        pbVar9 = &DAT_01f21c9c + local_8;
        do {
          bVar1 = *pbVar9;
          bVar15 = bVar1 < *pbVar12;
          if (bVar1 != *pbVar12) {
LAB_00fca578:
            iVar7 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
            goto LAB_00fca57d;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar9[1];
          bVar15 = bVar1 < pbVar12[1];
          if (bVar1 != pbVar12[1]) goto LAB_00fca578;
          pbVar9 = pbVar9 + 2;
          pbVar12 = pbVar12 + 2;
        } while (bVar1 != 0);
        iVar7 = 0;
LAB_00fca57d:
        if (iVar7 == 0) goto LAB_00fca58e;
        piVar14 = (int *)piVar14[2];
      } while (piVar14 != DAT_018e8508);
      iVar11 = 0;
    }
LAB_00fca58e:
    piVar14 = DAT_018e8504;
    if (DAT_018e8504 != DAT_018e8508) {
      piVar13 = DAT_018e8504;
      do {
        local_18 = *piVar13;
        pbVar12 = (byte *)(local_18 + 0x28);
        pbVar9 = &DAT_01f21c8c + local_8;
        do {
          bVar1 = *pbVar9;
          bVar15 = bVar1 < *pbVar12;
          if (bVar1 != *pbVar12) {
LAB_00fca5d8:
            iVar7 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
            goto LAB_00fca5dd;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar9[1];
          bVar15 = bVar1 < pbVar12[1];
          if (bVar1 != pbVar12[1]) goto LAB_00fca5d8;
          pbVar9 = pbVar9 + 2;
          pbVar12 = pbVar12 + 2;
        } while (bVar1 != 0);
        iVar7 = 0;
LAB_00fca5dd:
        if (iVar7 == 0) goto joined_r0x00fca5ff;
        piVar13 = (int *)piVar13[2];
      } while (piVar13 != DAT_018e8508);
    }
    local_18 = 0;
joined_r0x00fca5ff:
    do {
      if (piVar14 == DAT_018e8508) goto LAB_00fca649;
      local_1c = *piVar14;
      pbVar12 = (byte *)(local_1c + 0x28);
      pbVar9 = &DAT_01f21c5c + local_8;
      do {
        bVar1 = *pbVar9;
        bVar15 = bVar1 < *pbVar12;
        if (bVar1 != *pbVar12) {
LAB_00fca635:
          iVar7 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
          goto LAB_00fca63a;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar9[1];
        bVar15 = bVar1 < pbVar12[1];
        if (bVar1 != pbVar12[1]) goto LAB_00fca635;
        pbVar9 = pbVar9 + 2;
        pbVar12 = pbVar12 + 2;
      } while (bVar1 != 0);
      iVar7 = 0;
LAB_00fca63a:
      if (iVar7 == 0) goto LAB_00fca650;
      piVar14 = (int *)piVar14[2];
    } while( true );
  }
  (**(code **)(*(int *)*local_c + 8))();
  goto LAB_00fca704;
LAB_00fca649:
  local_1c = 0;
LAB_00fca650:
  if (DAT_018e84e8 != DAT_018e84ec) {
    piVar14 = DAT_018e84e8;
    do {
      iVar7 = *piVar14;
      pbVar12 = (byte *)(iVar7 + 0x28);
      pbVar9 = &DAT_01f21c4c + local_8;
      do {
        bVar1 = *pbVar9;
        bVar15 = bVar1 < *pbVar12;
        if (bVar1 != *pbVar12) {
LAB_00fca69d:
          iVar10 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
          goto LAB_00fca6a2;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar9[1];
        bVar15 = bVar1 < pbVar12[1];
        if (bVar1 != pbVar12[1]) goto LAB_00fca69d;
        pbVar9 = pbVar9 + 2;
        pbVar12 = pbVar12 + 2;
      } while (bVar1 != 0);
      iVar10 = 0;
LAB_00fca6a2:
      if (iVar10 == 0) goto LAB_00fca6b3;
      piVar14 = (int *)piVar14[2];
    } while (piVar14 != DAT_018e84ec);
  }
  iVar7 = 0;
LAB_00fca6b3:
  iVar11 = FUN_00fba5e0(iVar7,local_1c,local_18,iVar11);
  if (iVar11 == 0) {
    if ((&DAT_01f21c03)[local_8] == 'B') {
      *local_c = (int)&DAT_01f68138;
    }
    else if ((&DAT_01f21c07)[local_8] == '\0') {
      *local_c = (int)&DAT_01f69a38;
    }
    else {
      *local_c = (int)&DAT_01f6acf8;
    }
  }
LAB_00fca704:
  uVar2 = uVar2 + 1;
  uVar8 = (uint)uVar2;
  local_8 = uVar8 * 0xc0;
  local_c = &DAT_01f21bf8 + uVar8 * 0x30;
  if ((&DAT_01f21bf8)[uVar8 * 0x30] == 0) goto LAB_00fca72e;
  goto LAB_00fca4f2;
}

// 00FCC300  FUN_00fcc300  size=15  [run]
undefined4 __fastcall FUN_00fcc300(undefined4 param_1)

{
  Hw::cTexture::cTexture_6();
  return param_1;
}

// 00FCC320  FUN_00fcc320  size=15  [run]
undefined4 __fastcall FUN_00fcc320(undefined4 param_1)

{
  Hw::cTexture::cTexture_6();
  return param_1;
}


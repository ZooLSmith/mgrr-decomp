// src/graphics/cModelShaderGBuffer.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F8FD60..015FAFD0, 418 functions

#include "mgrr.h"
#include "cModelShaderGBuffer.h"

// 00F8FD60  cModelShaderGBuffer::~cModelShaderGBuffer  size=22  [class]
void __fastcall cModelShaderGBuffer::~cModelShaderGBuffer(undefined4 *param_1)

{
  *param_1 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 00F8FD80  cModelShaderGBuffer::vf00  size=43  [class]
undefined4 * __thiscall cModelShaderGBuffer::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00F935C0  cModelShaderGBuffer::~cModelShaderGBuffer  size=47  [class]
void __fastcall cModelShaderGBuffer::~cModelShaderGBuffer(undefined4 *param_1)

{
  param_1[0x52] = 0xffffffff;
  param_1[0x53] = 0xffffffff;
  param_1[0x54] = 0x1111111;
  *param_1 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 00F94780  cModelShaderGBuffer::cModelShaderGBuffer  size=2954  [class]
/* WARNING: Removing unreachable block (ram,0x00f9513b) */
/* WARNING: Removing unreachable block (ram,0x00f9502b) */
/* WARNING: Removing unreachable block (ram,0x00f94f1b) */
/* WARNING: Removing unreachable block (ram,0x00f94e0e) */
/* WARNING: Removing unreachable block (ram,0x00f94d22) */
/* WARNING: Removing unreachable block (ram,0x00f94c3c) */
/* WARNING: Removing unreachable block (ram,0x00f94b56) */
/* WARNING: Removing unreachable block (ram,0x00f94a70) */
/* WARNING: Removing unreachable block (ram,0x00f9498a) */
/* WARNING: Removing unreachable block (ram,0x00f948a4) */
/* WARNING: Removing unreachable block (ram,0x00f947c1) */
/* WARNING: Removing unreachable block (ram,0x00f94834) */
/* WARNING: Removing unreachable block (ram,0x00f9491a) */
/* WARNING: Removing unreachable block (ram,0x00f94a00) */
/* WARNING: Removing unreachable block (ram,0x00f94ae6) */
/* WARNING: Removing unreachable block (ram,0x00f94bcc) */
/* WARNING: Removing unreachable block (ram,0x00f94cb2) */
/* WARNING: Removing unreachable block (ram,0x00f94d98) */
/* WARNING: Removing unreachable block (ram,0x00f94e99) */
/* WARNING: Removing unreachable block (ram,0x00f94fa9) */
/* WARNING: Removing unreachable block (ram,0x00f950b9) */
/* WARNING: Removing unreachable block (ram,0x00f951c9) */

undefined4 * __fastcall cModelShaderGBuffer::cModelShaderGBuffer(undefined4 *param_1)

{
  Hw::cPixelShader::cPixelShader();
  *param_1 = vftable;
  param_1[0xc] = 0;
  param_1[0xc] = 0x1000000;
  param_1[0xc] = 0x1000111;
  param_1[0xc] = 0x1111111;
  param_1[0xc] = 0x1111111;
  param_1[0xc] = param_1[0xc] & 0x7fffffff;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0;
  param_1[0xc] = 0x1000000;
  param_1[0xc] = 0x1000111;
  param_1[0xc] = 0x1111111;
  param_1[0xc] = 0x1111111;
  param_1[0xc] = param_1[0xc] & 0x7fffffff;
  param_1[0xf] = 0;
  param_1[0xf] = 0x1000000;
  param_1[0xf] = 0x1000111;
  param_1[0xf] = 0x1111111;
  param_1[0xf] = 0x1111111;
  param_1[0xf] = param_1[0xf] & 0x7fffffff;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0;
  param_1[0xf] = 0x1000000;
  param_1[0xf] = 0x1000111;
  param_1[0xf] = 0x1111111;
  param_1[0xf] = 0x1111111;
  param_1[0xf] = param_1[0xf] & 0x7fffffff;
  param_1[0x12] = 0;
  param_1[0x12] = 0x1000000;
  param_1[0x12] = 0x1000111;
  param_1[0x12] = 0x1111111;
  param_1[0x12] = 0x1111111;
  param_1[0x12] = param_1[0x12] & 0x7fffffff;
  param_1[0x10] = 0xffffffff;
  param_1[0x11] = 0xffffffff;
  param_1[0x12] = 0;
  param_1[0x12] = 0x1000000;
  param_1[0x12] = 0x1000111;
  param_1[0x12] = 0x1111111;
  param_1[0x12] = 0x1111111;
  param_1[0x12] = param_1[0x12] & 0x7fffffff;
  param_1[0x15] = 0;
  param_1[0x15] = 0x1000000;
  param_1[0x15] = 0x1000111;
  param_1[0x15] = 0x1111111;
  param_1[0x15] = 0x1111111;
  param_1[0x15] = param_1[0x15] & 0x7fffffff;
  param_1[0x13] = 0xffffffff;
  param_1[0x14] = 0xffffffff;
  param_1[0x15] = 0;
  param_1[0x15] = 0x1000000;
  param_1[0x15] = 0x1000111;
  param_1[0x15] = 0x1111111;
  param_1[0x15] = 0x1111111;
  param_1[0x15] = param_1[0x15] & 0x7fffffff;
  param_1[0x18] = 0;
  param_1[0x18] = 0x1000000;
  param_1[0x18] = 0x1000111;
  param_1[0x18] = 0x1111111;
  param_1[0x18] = 0x1111111;
  param_1[0x18] = param_1[0x18] & 0x7fffffff;
  param_1[0x16] = 0xffffffff;
  param_1[0x17] = 0xffffffff;
  param_1[0x18] = 0;
  param_1[0x18] = 0x1000000;
  param_1[0x18] = 0x1000111;
  param_1[0x18] = 0x1111111;
  param_1[0x18] = 0x1111111;
  param_1[0x18] = param_1[0x18] & 0x7fffffff;
  param_1[0x1b] = 0;
  param_1[0x1b] = 0x1000000;
  param_1[0x1b] = 0x1000111;
  param_1[0x1b] = 0x1111111;
  param_1[0x1b] = 0x1111111;
  param_1[0x1b] = param_1[0x1b] & 0x7fffffff;
  param_1[0x19] = 0xffffffff;
  param_1[0x1a] = 0xffffffff;
  param_1[0x1b] = 0;
  param_1[0x1b] = 0x1000000;
  param_1[0x1b] = 0x1000111;
  param_1[0x1b] = 0x1111111;
  param_1[0x1b] = 0x1111111;
  param_1[0x1b] = param_1[0x1b] & 0x7fffffff;
  param_1[0x1e] = 0;
  param_1[0x1e] = 0x1000000;
  param_1[0x1e] = 0x1000111;
  param_1[0x1e] = 0x1111111;
  param_1[0x1e] = 0x1111111;
  param_1[0x1e] = param_1[0x1e] & 0x7fffffff;
  param_1[0x1c] = 0xffffffff;
  param_1[0x1d] = 0xffffffff;
  param_1[0x1e] = 0;
  param_1[0x1e] = 0x1000000;
  param_1[0x1e] = 0x1000111;
  param_1[0x1e] = 0x1111111;
  param_1[0x1e] = 0x1111111;
  param_1[0x1e] = param_1[0x1e] & 0x7fffffff;
  param_1[0x21] = 0;
  param_1[0x21] = 0x1000000;
  param_1[0x21] = 0x1000111;
  param_1[0x21] = 0x1111111;
  param_1[0x21] = 0x1111111;
  param_1[0x21] = param_1[0x21] & 0x7fffffff;
  param_1[0x1f] = 0xffffffff;
  param_1[0x20] = 0xffffffff;
  param_1[0x21] = 0;
  param_1[0x21] = 0x1000000;
  param_1[0x21] = 0x1000111;
  param_1[0x21] = 0x1111111;
  param_1[0x21] = 0x1111111;
  param_1[0x21] = param_1[0x21] & 0x7fffffff;
  param_1[0x24] = 0;
  param_1[0x24] = 0x1000000;
  param_1[0x24] = 0x1000111;
  param_1[0x24] = 0x1111111;
  param_1[0x24] = 0x1111111;
  param_1[0x24] = param_1[0x24] & 0x7fffffff;
  param_1[0x22] = 0xffffffff;
  param_1[0x23] = 0xffffffff;
  param_1[0x24] = 0;
  param_1[0x24] = 0x1000000;
  param_1[0x24] = 0x1000111;
  param_1[0x24] = 0x1111111;
  param_1[0x24] = 0x1111111;
  param_1[0x24] = param_1[0x24] & 0x7fffffff;
  param_1[0x27] = 0;
  param_1[0x27] = 0x1000000;
  param_1[0x27] = 0x1000111;
  param_1[0x27] = 0x1111111;
  param_1[0x27] = 0x1111111;
  param_1[0x27] = param_1[0x27] & 0x7fffffff;
  param_1[0x25] = 0xffffffff;
  param_1[0x26] = 0xffffffff;
  param_1[0x27] = 0;
  param_1[0x27] = 0x1000000;
  param_1[0x27] = 0x1000111;
  param_1[0x27] = 0x1111111;
  param_1[0x27] = 0x1111111;
  param_1[0x27] = param_1[0x27] & 0x7fffffff;
  param_1[0x2a] = 0;
  param_1[0x2a] = 0x1000000;
  param_1[0x2a] = 0x1000111;
  param_1[0x2a] = 0x1111111;
  param_1[0x2a] = 0x1111111;
  param_1[0x2a] = param_1[0x2a] & 0x7fffffff;
  param_1[0x28] = 0xffffffff;
  param_1[0x29] = 0xffffffff;
  param_1[0x2a] = 0;
  param_1[0x2a] = 0x1000000;
  param_1[0x2a] = 0x1000111;
  param_1[0x2a] = 0x1111111;
  param_1[0x2a] = 0x1111111;
  param_1[0x2a] = param_1[0x2a] & 0x7fffffff;
  param_1[0x2b] = 0xffffffff;
  param_1[0x2c] = 0xffffffff;
  param_1[0x2d] = 0xffffffff;
  param_1[0x2e] = 0xffffffff;
  param_1[0x2f] = 0xffffffff;
  param_1[0x30] = 0xffffffff;
  param_1[0x31] = 0xffffffff;
  param_1[0x32] = 0xffffffff;
  param_1[0x33] = 0xffffffff;
  param_1[0x34] = 0xffffffff;
  param_1[0x35] = 0xffffffff;
  param_1[0x36] = 0xffffffff;
  param_1[0x37] = 0xffffffff;
  param_1[0x38] = 0xffffffff;
  param_1[0x39] = 0xffffffff;
  param_1[0x3a] = 0xffffffff;
  param_1[0x3b] = 0xffffffff;
  param_1[0x3c] = 0xffffffff;
  param_1[0x3d] = 0xffffffff;
  param_1[0x3e] = 0xffffffff;
  param_1[0x3f] = 0xffffffff;
  param_1[0x40] = 0xffffffff;
  param_1[0x41] = 0xffffffff;
  param_1[0x42] = 0xffffffff;
  param_1[0x43] = 0xffffffff;
  param_1[0x44] = 0xffffffff;
  param_1[0x45] = 0xffffffff;
  param_1[0x46] = 0xffffffff;
  param_1[0x47] = 0xffffffff;
  param_1[0x48] = 0xffffffff;
  param_1[0x49] = 0xffffffff;
  param_1[0x4a] = 0xffffffff;
  param_1[0x4b] = 0xffffffff;
  param_1[0x4c] = 0xffffffff;
  param_1[0x4d] = 0xffffffff;
  param_1[0x4e] = 0xffffffff;
  param_1[0x4f] = 0xffffffff;
  param_1[0x50] = 0xffffffff;
  param_1[0x51] = 0xffffffff;
  return param_1;
}

// 00FC2450  FUN_00fc2450  size=18  [callgraph]
undefined4 * __fastcall FUN_00fc2450(undefined4 *param_1)

{
  cModelShaderGBuffer::cModelShaderGBuffer();
  *param_1 = &PTR__cModelShaderGBuffer_016f3cf4;
  return param_1;
}

// 00FC2490  cModelShaderGBuffer::~cModelShaderGBuffer  size=55  [class]
undefined4 * __thiscall cModelShaderGBuffer::~cModelShaderGBuffer(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  *param_1 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FC24D0  FUN_00fc24d0  size=18  [between]
undefined4 * __fastcall FUN_00fc24d0(undefined4 *param_1)

{
  cModelShaderGBuffer::cModelShaderGBuffer();
  *param_1 = &PTR__cModelShaderGBuffer_016f3cfc;
  return param_1;
}

// 00FC2510  cModelShaderGBuffer::~cModelShaderGBuffer  size=55  [class]
undefined4 * __thiscall cModelShaderGBuffer::~cModelShaderGBuffer(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR__cModelShaderGBuffer_016f3cfc;
  FUN_00fc0f40();
  *param_1 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FC2550  FUN_00fc2550  size=18  [between]
undefined4 * __fastcall FUN_00fc2550(undefined4 *param_1)

{
  cModelShaderGBuffer::cModelShaderGBuffer();
  *param_1 = &PTR__cModelShaderGBuffer_016f3d04;
  return param_1;
}

// 00FC2590  cModelShaderGBuffer::~cModelShaderGBuffer  size=55  [class]
undefined4 * __thiscall cModelShaderGBuffer::~cModelShaderGBuffer(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR__cModelShaderGBuffer_016f3d04;
  FUN_00fc0f40();
  *param_1 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FC25D0  FUN_00fc25d0  size=18  [between]
undefined4 * __fastcall FUN_00fc25d0(undefined4 *param_1)

{
  cModelShaderGBuffer::cModelShaderGBuffer();
  *param_1 = &PTR__cModelShaderGBuffer_016f3d0c;
  return param_1;
}

// 00FC2610  cModelShaderGBuffer::~cModelShaderGBuffer  size=55  [class]
undefined4 * __thiscall cModelShaderGBuffer::~cModelShaderGBuffer(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR__cModelShaderGBuffer_016f3d0c;
  FUN_00fc0f40();
  *param_1 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FC2650  FUN_00fc2650  size=18  [between]
undefined4 * __fastcall FUN_00fc2650(undefined4 *param_1)

{
  cModelShaderGBuffer::cModelShaderGBuffer();
  *param_1 = &PTR__cModelShaderGBuffer_016f3d14;
  return param_1;
}

// 00FC2690  cModelShaderGBuffer::~cModelShaderGBuffer  size=55  [class]
undefined4 * __thiscall cModelShaderGBuffer::~cModelShaderGBuffer(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR__cModelShaderGBuffer_016f3d14;
  FUN_00fc0f40();
  *param_1 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FC26D0  FUN_00fc26d0  size=18  [between]
undefined4 * __fastcall FUN_00fc26d0(undefined4 *param_1)

{
  cModelShaderGBuffer::cModelShaderGBuffer();
  *param_1 = &PTR__cModelShaderGBuffer_016f3d1c;
  return param_1;
}

// 00FC2710  cModelShaderGBuffer::~cModelShaderGBuffer  size=55  [class]
undefined4 * __thiscall cModelShaderGBuffer::~cModelShaderGBuffer(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR__cModelShaderGBuffer_016f3d1c;
  FUN_00fc0f40();
  *param_1 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FC2750  FUN_00fc2750  size=18  [between]
undefined4 * __fastcall FUN_00fc2750(undefined4 *param_1)

{
  cModelShaderGBuffer::cModelShaderGBuffer();
  *param_1 = &PTR__cModelShaderGBuffer_016f3d24;
  return param_1;
}

// 00FC2790  cModelShaderGBuffer::~cModelShaderGBuffer  size=55  [class]
undefined4 * __thiscall cModelShaderGBuffer::~cModelShaderGBuffer(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR__cModelShaderGBuffer_016f3d24;
  FUN_00fc0f40();
  *param_1 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FC27D0  FUN_00fc27d0  size=18  [between]
undefined4 * __fastcall FUN_00fc27d0(undefined4 *param_1)

{
  cModelShaderGBuffer::cModelShaderGBuffer();
  *param_1 = &PTR__cModelShaderGBuffer_016f3d2c;
  return param_1;
}

// 00FC2810  cModelShaderGBuffer::~cModelShaderGBuffer  size=55  [class]
undefined4 * __thiscall cModelShaderGBuffer::~cModelShaderGBuffer(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR__cModelShaderGBuffer_016f3d2c;
  FUN_00fc0f40();
  *param_1 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FC2850  FUN_00fc2850  size=18  [between]
undefined4 * __fastcall FUN_00fc2850(undefined4 *param_1)

{
  cModelShaderGBuffer::cModelShaderGBuffer();
  *param_1 = &PTR__cModelShaderGBuffer_016f3d34;
  return param_1;
}

// 00FC2890  cModelShaderGBuffer::~cModelShaderGBuffer  size=55  [class]
undefined4 * __thiscall cModelShaderGBuffer::~cModelShaderGBuffer(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR__cModelShaderGBuffer_016f3d34;
  FUN_00fc0f40();
  *param_1 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FC28D0  FUN_00fc28d0  size=18  [between]
undefined4 * __fastcall FUN_00fc28d0(undefined4 *param_1)

{
  cModelShaderGBuffer::cModelShaderGBuffer();
  *param_1 = &PTR__cModelShaderGBuffer_016f3d3c;
  return param_1;
}

// 00FC2910  cModelShaderGBuffer::~cModelShaderGBuffer  size=55  [class]
undefined4 * __thiscall cModelShaderGBuffer::~cModelShaderGBuffer(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR__cModelShaderGBuffer_016f3d3c;
  FUN_00fc0f40();
  *param_1 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FC2950  FUN_00fc2950  size=18  [between]
undefined4 * __fastcall FUN_00fc2950(undefined4 *param_1)

{
  cModelShaderGBuffer::cModelShaderGBuffer();
  *param_1 = &PTR__cModelShaderGBuffer_016f3d44;
  return param_1;
}

// 00FC2990  cModelShaderGBuffer::~cModelShaderGBuffer  size=55  [class]
undefined4 * __thiscall cModelShaderGBuffer::~cModelShaderGBuffer(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR__cModelShaderGBuffer_016f3d44;
  FUN_00fc0f40();
  *param_1 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FC29D0  FUN_00fc29d0  size=18  [between]
undefined4 * __fastcall FUN_00fc29d0(undefined4 *param_1)

{
  cModelShaderGBuffer::cModelShaderGBuffer();
  *param_1 = &PTR__cModelShaderGBuffer_016f3d4c;
  return param_1;
}

// 00FC2A10  cModelShaderGBuffer::~cModelShaderGBuffer  size=55  [class]
undefined4 * __thiscall cModelShaderGBuffer::~cModelShaderGBuffer(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR__cModelShaderGBuffer_016f3d4c;
  FUN_00fc0f40();
  *param_1 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FC2A50  FUN_00fc2a50  size=18  [between]
undefined4 * __fastcall FUN_00fc2a50(undefined4 *param_1)

{
  cModelShaderGBuffer::cModelShaderGBuffer();
  *param_1 = &PTR__cModelShaderGBuffer_016f3d54;
  return param_1;
}

// 00FC2A90  cModelShaderGBuffer::~cModelShaderGBuffer  size=55  [class]
undefined4 * __thiscall cModelShaderGBuffer::~cModelShaderGBuffer(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR__cModelShaderGBuffer_016f3d54;
  FUN_00fc0f40();
  *param_1 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FC2AD0  FUN_00fc2ad0  size=18  [between]
undefined4 * __fastcall FUN_00fc2ad0(undefined4 *param_1)

{
  cModelShaderGBuffer::cModelShaderGBuffer();
  *param_1 = &PTR__cModelShaderGBuffer_016f3d5c;
  return param_1;
}

// 00FC2B10  cModelShaderGBuffer::~cModelShaderGBuffer  size=55  [class]
undefined4 * __thiscall cModelShaderGBuffer::~cModelShaderGBuffer(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR__cModelShaderGBuffer_016f3d5c;
  FUN_00fc0f40();
  *param_1 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FC2B50  FUN_00fc2b50  size=1501  [between]
/* WARNING: Removing unreachable block (ram,0x00fc2ff3) */
/* WARNING: Removing unreachable block (ram,0x00fc2f28) */
/* WARNING: Removing unreachable block (ram,0x00fc2e5d) */
/* WARNING: Removing unreachable block (ram,0x00fc2d92) */
/* WARNING: Removing unreachable block (ram,0x00fc2cc7) */
/* WARNING: Removing unreachable block (ram,0x00fc2bfc) */
/* WARNING: Removing unreachable block (ram,0x00fc2b8e) */
/* WARNING: Removing unreachable block (ram,0x00fc2c5e) */
/* WARNING: Removing unreachable block (ram,0x00fc2d29) */
/* WARNING: Removing unreachable block (ram,0x00fc2df4) */
/* WARNING: Removing unreachable block (ram,0x00fc2ebf) */
/* WARNING: Removing unreachable block (ram,0x00fc2f8a) */
/* WARNING: Removing unreachable block (ram,0x00fc3055) */
/* WARNING: Removing unreachable block (ram,0x00fc30c6) */

undefined4 * __fastcall FUN_00fc2b50(undefined4 *param_1)

{
  uint uVar1;
  
  Hw::cPixelShader::cPixelShader();
  *param_1 = &PTR_FUN_016f3d64;
  param_1[0xc] = 0x1000000;
  param_1[0xc] = 0x1000111;
  param_1[0xc] = 0x1111111;
  param_1[0xc] = param_1[0xc] & 0x7fffffff;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0x1000000;
  param_1[0xc] = 0x1111111;
  param_1[0xc] = param_1[0xc] & 0x7fffffff;
  param_1[0xf] = 0x1000000;
  param_1[0xf] = 0x1111111;
  param_1[0xf] = param_1[0xf] & 0x7fffffff;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0x1000000;
  param_1[0xf] = 0x1111111;
  param_1[0xf] = param_1[0xf] & 0x7fffffff;
  param_1[0x12] = 0x1000000;
  param_1[0x12] = 0x1111111;
  param_1[0x12] = param_1[0x12] & 0x7fffffff;
  param_1[0x10] = 0xffffffff;
  param_1[0x11] = 0xffffffff;
  param_1[0x12] = 0x1000000;
  param_1[0x12] = 0x1111111;
  param_1[0x12] = param_1[0x12] & 0x7fffffff;
  param_1[0x15] = 0x1000000;
  param_1[0x15] = 0x1111111;
  param_1[0x15] = param_1[0x15] & 0x7fffffff;
  param_1[0x13] = 0xffffffff;
  param_1[0x14] = 0xffffffff;
  param_1[0x15] = 0x1000000;
  param_1[0x15] = 0x1111111;
  param_1[0x15] = param_1[0x15] & 0x7fffffff;
  param_1[0x18] = 0x1000000;
  param_1[0x18] = 0x1111111;
  param_1[0x18] = param_1[0x18] & 0x7fffffff;
  param_1[0x16] = 0xffffffff;
  param_1[0x17] = 0xffffffff;
  param_1[0x18] = 0x1000000;
  param_1[0x18] = 0x1111111;
  param_1[0x18] = param_1[0x18] & 0x7fffffff;
  param_1[0x1b] = 0x1000000;
  param_1[0x1b] = 0x1111111;
  param_1[0x1b] = param_1[0x1b] & 0x7fffffff;
  param_1[0x19] = 0xffffffff;
  param_1[0x1a] = 0xffffffff;
  param_1[0x1b] = 0x1000000;
  param_1[0x1b] = 0x1111111;
  param_1[0x1b] = param_1[0x1b] & 0x7fffffff;
  param_1[0x1e] = 0x1000000;
  param_1[0x1e] = 0x1111111;
  param_1[0x1e] = param_1[0x1e] & 0x7fffffff;
  param_1[0x1c] = 0xffffffff;
  param_1[0x1d] = 0xffffffff;
  param_1[0x1e] = 0;
  uVar1 = param_1[0x1e];
  param_1[0x1e] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x1e] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x1e] = param_1[0x1e] & 0x7fffffff;
  param_1[0x1f] = 0xffffffff;
  param_1[0x20] = 0xffffffff;
  param_1[0x21] = 0xffffffff;
  param_1[0x22] = 0xffffffff;
  param_1[0x23] = 0xffffffff;
  param_1[0x24] = 0xffffffff;
  return param_1;
}

// 00FC3140  FUN_00fc3140  size=44  [between]
undefined4 * __thiscall FUN_00fc3140(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_016f3d64;
  FUN_00fc0b20();
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FC3170  FUN_00fc3170  size=18  [between]
undefined4 * __fastcall FUN_00fc3170(undefined4 *param_1)

{
  FUN_00fc2b50();
  *param_1 = &PTR_FUN_016f3d6c;
  return param_1;
}

// 00FC31B0  FUN_00fc31b0  size=55  [between]
undefined4 * __thiscall FUN_00fc31b0(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_016f3d6c;
  FUN_00fc0b20();
  *param_1 = &PTR_FUN_016f3d64;
  FUN_00fc0b20();
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FC31F0  FUN_00fc31f0  size=75  [between]
undefined4 * __fastcall FUN_00fc31f0(undefined4 *param_1)

{
  FUN_00fc2b50();
  *param_1 = &PTR_FUN_016f3d74;
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

// 00FC3240  FUN_00fc3240  size=84  [between]
void __fastcall FUN_00fc3240(undefined4 *param_1)

{
  undefined4 *extraout_ECX;
  
  *param_1 = &PTR_FUN_016f3d74;
  FUN_00fc0b20();
  extraout_ECX[0x25] = 0xffffffff;
  extraout_ECX[0x26] = 0xffffffff;
  extraout_ECX[0x27] = 0xffffffff;
  extraout_ECX[0x28] = 0xffffffff;
  extraout_ECX[0x29] = 0xffffffff;
  extraout_ECX[0x2a] = 0xffffffff;
  extraout_ECX[0x2b] = 0xffffffff;
  extraout_ECX[0x2c] = 0xffffffff;
  extraout_ECX[0x2d] = 0xffffffff;
  *extraout_ECX = &PTR_FUN_016f3d64;
  FUN_00fc0b20();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 00FC32A0  FUN_00fc32a0  size=33  [between]
undefined4 __thiscall FUN_00fc32a0(undefined4 param_1,byte param_2)

{
  FUN_00fc3240();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FC32D0  FUN_00fc32d0  size=75  [between]
undefined4 * __fastcall FUN_00fc32d0(undefined4 *param_1)

{
  FUN_00fc2b50();
  param_1[0x25] = 0xffffffff;
  param_1[0x26] = 0xffffffff;
  param_1[0x27] = 0xffffffff;
  param_1[0x28] = 0xffffffff;
  param_1[0x29] = 0xffffffff;
  param_1[0x2a] = 0xffffffff;
  param_1[0x2b] = 0xffffffff;
  param_1[0x2c] = 0xffffffff;
  param_1[0x2d] = 0xffffffff;
  *param_1 = &PTR_FUN_016f3d7c;
  return param_1;
}

// 00FC3370  FUN_00fc3370  size=101  [between]
undefined4 * __thiscall FUN_00fc3370(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_016f3d7c;
  FUN_00fc0b20();
  param_1[0x25] = 0xffffffff;
  param_1[0x26] = 0xffffffff;
  param_1[0x27] = 0xffffffff;
  param_1[0x28] = 0xffffffff;
  param_1[0x29] = 0xffffffff;
  param_1[0x2a] = 0xffffffff;
  param_1[0x2b] = 0xffffffff;
  param_1[0x2c] = 0xffffffff;
  param_1[0x2d] = 0xffffffff;
  FUN_00fc3240();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FC33E0  FUN_00fc33e0  size=75  [between]
undefined4 * __fastcall FUN_00fc33e0(undefined4 *param_1)

{
  FUN_00fc2b50();
  param_1[0x25] = 0xffffffff;
  param_1[0x26] = 0xffffffff;
  param_1[0x27] = 0xffffffff;
  param_1[0x28] = 0xffffffff;
  param_1[0x29] = 0xffffffff;
  param_1[0x2a] = 0xffffffff;
  param_1[0x2b] = 0xffffffff;
  param_1[0x2c] = 0xffffffff;
  param_1[0x2d] = 0xffffffff;
  *param_1 = &PTR_FUN_016f3d84;
  return param_1;
}

// 00FC3430  FUN_00fc3430  size=140  [between]
void __fastcall FUN_00fc3430(undefined4 *param_1)

{
  undefined4 *extraout_ECX;
  int extraout_ECX_00;
  
  *param_1 = &PTR_FUN_016f3d84;
  FUN_00fc0b20();
  extraout_ECX[0x25] = 0xffffffff;
  extraout_ECX[0x26] = 0xffffffff;
  extraout_ECX[0x27] = 0xffffffff;
  extraout_ECX[0x28] = 0xffffffff;
  extraout_ECX[0x29] = 0xffffffff;
  extraout_ECX[0x2a] = 0xffffffff;
  extraout_ECX[0x2b] = 0xffffffff;
  extraout_ECX[0x2c] = 0xffffffff;
  extraout_ECX[0x2d] = 0xffffffff;
  *extraout_ECX = &PTR_FUN_016f3d7c;
  FUN_00fc0b20();
  *(undefined4 *)(extraout_ECX_00 + 0x94) = 0xffffffff;
  *(undefined4 *)(extraout_ECX_00 + 0x98) = 0xffffffff;
  *(undefined4 *)(extraout_ECX_00 + 0x9c) = 0xffffffff;
  *(undefined4 *)(extraout_ECX_00 + 0xa0) = 0xffffffff;
  *(undefined4 *)(extraout_ECX_00 + 0xa4) = 0xffffffff;
  *(undefined4 *)(extraout_ECX_00 + 0xa8) = 0xffffffff;
  *(undefined4 *)(extraout_ECX_00 + 0xac) = 0xffffffff;
  *(undefined4 *)(extraout_ECX_00 + 0xb0) = 0xffffffff;
  *(undefined4 *)(extraout_ECX_00 + 0xb4) = 0xffffffff;
  FUN_00fc3240();
  return;
}

// 00FC34C0  FUN_00fc34c0  size=33  [between]
undefined4 __thiscall FUN_00fc34c0(undefined4 param_1,byte param_2)

{
  FUN_00fc3430();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FC34F0  FUN_00fc34f0  size=39  [between]
undefined4 * __fastcall FUN_00fc34f0(undefined4 *param_1)

{
  FUN_00fc2b50();
  *param_1 = &PTR_FUN_016f3d8c;
  param_1[0x25] = 0xffffffff;
  param_1[0x26] = 0xffffffff;
  param_1[0x27] = 0xffffffff;
  return param_1;
}

// 00FC3550  FUN_00fc3550  size=76  [between]
undefined4 * __thiscall FUN_00fc3550(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_016f3d8c;
  FUN_00fc0b20();
  param_1[0x25] = 0xffffffff;
  param_1[0x26] = 0xffffffff;
  param_1[0x27] = 0xffffffff;
  *param_1 = &PTR_FUN_016f3d64;
  FUN_00fc0b20();
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FC35A0  FUN_00fc35a0  size=39  [between]
undefined4 * __fastcall FUN_00fc35a0(undefined4 *param_1)

{
  FUN_00fc2b50();
  param_1[0x25] = 0xffffffff;
  param_1[0x26] = 0xffffffff;
  param_1[0x27] = 0xffffffff;
  *param_1 = &PTR_FUN_016f3d94;
  return param_1;
}

// 00FC3620  FUN_00fc3620  size=107  [between]
undefined4 * __thiscall FUN_00fc3620(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_016f3d94;
  FUN_00fc0b20();
  param_1[0x25] = 0xffffffff;
  param_1[0x26] = 0xffffffff;
  param_1[0x27] = 0xffffffff;
  *param_1 = &PTR_FUN_016f3d8c;
  FUN_00fc0b20();
  param_1[0x25] = 0xffffffff;
  param_1[0x26] = 0xffffffff;
  param_1[0x27] = 0xffffffff;
  *param_1 = &PTR_FUN_016f3d64;
  FUN_00fc0b20();
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FC3690  FUN_00fc3690  size=1515  [between]
/* WARNING: Removing unreachable block (ram,0x00fc36ce) */
/* WARNING: Removing unreachable block (ram,0x00fc373e) */
/* WARNING: Removing unreachable block (ram,0x00fc3b46) */
/* WARNING: Removing unreachable block (ram,0x00fc3a60) */
/* WARNING: Removing unreachable block (ram,0x00fc397a) */
/* WARNING: Removing unreachable block (ram,0x00fc3894) */
/* WARNING: Removing unreachable block (ram,0x00fc37ae) */
/* WARNING: Removing unreachable block (ram,0x00fc3824) */
/* WARNING: Removing unreachable block (ram,0x00fc390a) */
/* WARNING: Removing unreachable block (ram,0x00fc39f0) */
/* WARNING: Removing unreachable block (ram,0x00fc3ad6) */
/* WARNING: Removing unreachable block (ram,0x00fc3bbc) */

undefined4 * __fastcall FUN_00fc3690(undefined4 *param_1)

{
  uint uVar1;
  
  Hw::cPixelShader::cPixelShader();
  *param_1 = &PTR_FUN_016f3d9c;
  param_1[0xc] = 0x1000000;
  param_1[0xc] = 0x1000111;
  param_1[0xc] = 0x1111111;
  param_1[0xc] = param_1[0xc] & 0x7fffffff;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0x1000000;
  param_1[0xc] = 0x1000111;
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
  param_1[0x18] = uVar1 & 0xe1fff010 | 0x1000111;
  param_1[0x18] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x18] = param_1[0x18] & 0x7fffffff;
  param_1[0x1b] = 0;
  uVar1 = param_1[0x1b];
  param_1[0x1b] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x1b] = uVar1 & 0xe1fff010 | 0x1000111;
  param_1[0x1b] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x1b] = param_1[0x1b] & 0x7fffffff;
  param_1[0x19] = 0xffffffff;
  param_1[0x1a] = 0xffffffff;
  param_1[0x1b] = 0;
  uVar1 = param_1[0x1b];
  param_1[0x1b] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x1b] = uVar1 & 0xe1fff010 | 0x1000111;
  param_1[0x1b] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x1b] = param_1[0x1b] & 0x7fffffff;
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
  param_1[0x2e] = 0xffffffff;
  param_1[0x2f] = 0xffffffff;
  param_1[0x30] = 0xffffffff;
  return param_1;
}

// 00FC3C90  FUN_00fc3c90  size=44  [between]
undefined4 * __thiscall FUN_00fc3c90(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_016f3d9c;
  FUN_00fc13d0();
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FC3CC0  FUN_00fc3cc0  size=520  [between]
/* WARNING: Removing unreachable block (ram,0x00fc3cfd) */
/* WARNING: Removing unreachable block (ram,0x00fc3d81) */
/* WARNING: Removing unreachable block (ram,0x00fc3df8) */
/* WARNING: Removing unreachable block (ram,0x00fc3e84) */

undefined4 * __fastcall FUN_00fc3cc0(undefined4 *param_1)

{
  uint uVar1;
  
  FUN_00fc3690();
  *param_1 = &PTR_FUN_016f3da4;
  param_1[0x33] = 0x1000000;
  param_1[0x33] = 0x1000111;
  param_1[0x33] = 0x1111111;
  param_1[0x33] = param_1[0x33] & 0x7fffffff;
  param_1[0x31] = 0xffffffff;
  param_1[0x32] = 0xffffffff;
  param_1[0x33] = 0x1000000;
  param_1[0x33] = 0x1111111;
  param_1[0x33] = param_1[0x33] & 0x7fffffff;
  param_1[0x36] = 0;
  uVar1 = param_1[0x36];
  param_1[0x36] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x36] = uVar1 & 0xe1fff010 | 0x1000111;
  param_1[0x36] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x36] = param_1[0x36] & 0x7fffffff;
  param_1[0x34] = 0xffffffff;
  param_1[0x35] = 0xffffffff;
  param_1[0x36] = 0;
  uVar1 = param_1[0x36];
  param_1[0x36] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x36] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x36] = param_1[0x36] & 0x7fffffff;
  return param_1;
}

// 00FC3F20  FUN_00fc3f20  size=101  [between]
undefined4 * __thiscall FUN_00fc3f20(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_016f3da4;
  param_1[0x31] = 0xffffffff;
  param_1[0x32] = 0xffffffff;
  param_1[0x33] = 0x1111111;
  param_1[0x34] = 0xffffffff;
  param_1[0x35] = 0xffffffff;
  param_1[0x36] = 0x1111111;
  FUN_00fc13d0();
  *param_1 = &PTR_FUN_016f3d9c;
  FUN_00fc13d0();
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FC3F90  FUN_00fc3f90  size=57  [between]
undefined4 * __fastcall FUN_00fc3f90(undefined4 *param_1)

{
  FUN_00fc3690();
  *param_1 = &PTR_FUN_016f3dac;
  param_1[0x31] = 0xffffffff;
  param_1[0x32] = 0xffffffff;
  param_1[0x33] = 0xffffffff;
  param_1[0x34] = 0xffffffff;
  param_1[0x35] = 0xffffffff;
  param_1[0x36] = 0xffffffff;
  return param_1;
}

// 00FC4020  FUN_00fc4020  size=94  [between]
undefined4 * __thiscall FUN_00fc4020(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_016f3dac;
  FUN_00fc13d0();
  param_1[0x31] = 0xffffffff;
  param_1[0x32] = 0xffffffff;
  param_1[0x33] = 0xffffffff;
  param_1[0x34] = 0xffffffff;
  param_1[0x35] = 0xffffffff;
  param_1[0x36] = 0xffffffff;
  *param_1 = &PTR_FUN_016f3d9c;
  FUN_00fc13d0();
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FC4080  FUN_00fc4080  size=323  [between]
/* WARNING: Removing unreachable block (ram,0x00fc40f0) */
/* WARNING: Removing unreachable block (ram,0x00fc417b) */

undefined4 * __fastcall FUN_00fc4080(undefined4 *param_1)

{
  uint uVar1;
  
  FUN_00fc3690();
  param_1[0x31] = 0xffffffff;
  param_1[0x32] = 0xffffffff;
  param_1[0x33] = 0xffffffff;
  param_1[0x34] = 0xffffffff;
  param_1[0x35] = 0xffffffff;
  param_1[0x36] = 0xffffffff;
  *param_1 = &PTR_FUN_016f3db4;
  param_1[0x39] = 0;
  uVar1 = param_1[0x39];
  param_1[0x39] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x39] = uVar1 & 0xe1fff010 | 0x1000111;
  param_1[0x39] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x39] = param_1[0x39] & 0x7fffffff;
  param_1[0x37] = 0xffffffff;
  param_1[0x38] = 0xffffffff;
  param_1[0x39] = 0;
  uVar1 = param_1[0x39];
  param_1[0x39] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x39] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x39] = param_1[0x39] & 0x7fffffff;
  return param_1;
}

// 00FC41D0  FUN_00fc41d0  size=101  [between]
void __fastcall FUN_00fc41d0(undefined4 *param_1)

{
  undefined4 *extraout_ECX;
  undefined4 *extraout_ECX_00;
  
  *param_1 = &PTR_FUN_016f3db4;
  param_1[0x37] = 0xffffffff;
  param_1[0x38] = 0xffffffff;
  param_1[0x39] = 0x1111111;
  FUN_00fc13d0();
  *extraout_ECX = &PTR_FUN_016f3dac;
  FUN_00fc13d0();
  extraout_ECX_00[0x31] = 0xffffffff;
  extraout_ECX_00[0x32] = 0xffffffff;
  extraout_ECX_00[0x33] = 0xffffffff;
  extraout_ECX_00[0x34] = 0xffffffff;
  extraout_ECX_00[0x35] = 0xffffffff;
  extraout_ECX_00[0x36] = 0xffffffff;
  *extraout_ECX_00 = &PTR_FUN_016f3d9c;
  FUN_00fc13d0();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 00FC4240  FUN_00fc4240  size=33  [between]
undefined4 __thiscall FUN_00fc4240(undefined4 param_1,byte param_2)

{
  FUN_00fc41d0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FC4270  FUN_00fc4270  size=895  [between]
/* WARNING: Removing unreachable block (ram,0x00fc42aa) */
/* WARNING: Removing unreachable block (ram,0x00fc431c) */
/* WARNING: Removing unreachable block (ram,0x00fc453c) */
/* WARNING: Removing unreachable block (ram,0x00fc4460) */
/* WARNING: Removing unreachable block (ram,0x00fc4384) */
/* WARNING: Removing unreachable block (ram,0x00fc43f8) */
/* WARNING: Removing unreachable block (ram,0x00fc44d1) */
/* WARNING: Removing unreachable block (ram,0x00fc45ad) */

undefined4 * __fastcall FUN_00fc4270(undefined4 *param_1)

{
  uint uVar1;
  
  Hw::cPixelShader::cPixelShader();
  *param_1 = &PTR_FUN_016f3dbc;
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
  return param_1;
}

// 00FC4630  FUN_00fc4630  size=85  [between]
undefined4 * __thiscall FUN_00fc4630(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_016f3dbc;
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
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FC4690  FUN_00fc4690  size=754  [between]
void __thiscall FUN_00fc4690(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar8 = *(int *)(param_4 + 0x35c);
  FUN_00fc0330(DAT_01be1fec);
  param_1[0x17f] = 0;
  iVar3 = FUN_00e6b900();
  if ((iVar3 == 3) && (param_1[0x17e] != 0)) {
    param_1[0x17f] = 1;
  }
  else {
    param_1[0x17f] = 0;
  }
  if (((DAT_01bea084 & 0x200000) != 0) && (param_1[0x17e] != 0)) {
    param_1[0x17f] = 1;
  }
  if ((((DAT_01bea084 & 0x10000) != 0) && (param_1[0x17e] == 2)) && (DAT_01be1f44 == 0)) {
    param_1[0x17f] = 2;
  }
  (**(code **)(*param_1 + 0x28))(param_2,param_3,param_4);
  if (DAT_01f6c908 != 0) {
    FUN_00fb6ce0(param_2,param_3,param_4);
    return;
  }
  if (*(int *)(param_4 + 0x374) == 0) {
    FUN_00f990e0(param_1 + param_1[0x17f] * 0x44 + 0x2a);
  }
  uVar4 = FUN_00f910d0(param_1[0x1d]);
  FUN_00f98f80(uVar4);
  FUN_00f91210(iVar8,param_1[0x180]);
  iVar3 = param_1[0x21];
  iVar7 = *(int *)(param_2 + 0xb0);
  iVar5 = *(int *)(*(int *)(iVar8 + iVar3 * 4) + 0x2c);
  bVar2 = false;
  param_4._3_1_ = -1;
  if (iVar5 == 0x3619f83e) {
    param_4._3_1_ = '\0';
LAB_00fc47f8:
    bVar2 = true;
  }
  else {
    if (iVar5 == 0x1d418ce6) {
      param_4._3_1_ = '\x01';
      goto LAB_00fc47f8;
    }
    if (iVar5 == 0x750d0069) {
      param_4._3_1_ = '\x02';
      goto LAB_00fc47f8;
    }
    if (iVar5 == 0x5e5574b1) {
      param_4._3_1_ = '\x03';
      goto LAB_00fc47f8;
    }
  }
  iVar5 = FUN_00e6b900();
  if (iVar5 != 3) {
    return;
  }
  if (!bVar2) {
    return;
  }
  iVar5 = *(int *)(iVar7 + 0xd4);
  iVar6 = FUN_00fdbc60();
  if (iVar6 < 0) {
    return;
  }
  iVar1 = *(int *)(iVar7 + 0xd4);
  param_2 = *(int *)(&DAT_01b846a8 + iVar1 * 4);
  iVar9 = *(int *)(&DAT_01b84688 + iVar1 * 4);
  if (*(float *)(&DAT_01b84794 + iVar1 * 0x10) == 1.0) {
    iVar9 = *(int *)(&DAT_01b846a8 + *(int *)(iVar7 + 0xd4) * 4);
    param_2 = *(int *)(&DAT_01b846c8 + *(int *)(iVar7 + 0xd4) * 4);
  }
  if (*(float *)(&DAT_01b84794 + iVar5 * 0x10) == 2.0) {
    param_2 = *(int *)(&DAT_01b846e8 + *(int *)(iVar7 + 0xd4) * 4);
    iVar9 = *(int *)(&DAT_01b846c8 + *(int *)(iVar7 + 0xd4) * 4);
  }
  if (iVar9 < 0) {
    if ((param_1[0xc] == 0) && (((iVar3 != 0 || (param_1[0x22] != 0)) || (param_1[0x27] != 0)))) {
      FUN_00f91320(iVar3,*(undefined4 *)(iVar8 + iVar3 * 4));
    }
  }
  else {
    iVar7 = FUN_00eba290(iVar6,iVar9);
    if (iVar7 != 0) {
      iVar5 = *(int *)(*(int *)(iVar8 + iVar3 * 4) + 0x2c);
      if ((iVar5 < 0) || (*(int *)(iVar7 + 0xc) <= iVar5)) {
        iVar5 = -1;
      }
      else if (*(int *)(iVar7 + 0x10) != 0) {
        FUN_00f912e0(iVar3,iVar7,*(undefined4 *)(*(int *)(iVar7 + 8) + 0x2c + iVar5 * 0x30));
        goto LAB_00fc492f;
      }
      FUN_00f912e0(iVar3,iVar7,iVar5);
    }
  }
LAB_00fc492f:
  if (param_2 < 0) {
    FUN_00fa1d50(&DAT_01f7448c,*(undefined4 *)(iVar8 + iVar3 * 4));
  }
  else {
    iVar8 = FUN_00eba290(iVar6,param_2);
    if (iVar8 != 0) {
      FUN_00fb12f0(iVar8,(int)param_4._3_1_);
      return;
    }
  }
  return;
}

// 00FC4990  FUN_00fc4990  size=21  [between]
void FUN_00fc4990(void)

{
  FUN_00f99300();
  FUN_00fc0b20();
  Hw::cShader::vf04();
  return;
}

// 00FC49B0  FUN_00fc49b0  size=78  [between]
void __fastcall FUN_00fc49b0(int param_1)

{
  FUN_00f99300();
  FUN_00fc0b20();
  *(undefined4 *)(param_1 + 0x94) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x98) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x9c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xa4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xa8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xac) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb4) = 0xffffffff;
  Hw::cShader::vf04();
  return;
}

// 00FC4A00  FUN_00fc4a00  size=42  [between]
void __fastcall FUN_00fc4a00(int param_1)

{
  FUN_00f99300();
  FUN_00fc0b20();
  *(undefined4 *)(param_1 + 0x94) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x98) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x9c) = 0xffffffff;
  Hw::cShader::vf04();
  return;
}

// 00FC4A30  FUN_00fc4a30  size=454  [between]
/* WARNING: Removing unreachable block (ram,0x00fc4a6a) */
/* WARNING: Removing unreachable block (ram,0x00fc4adc) */
/* WARNING: Removing unreachable block (ram,0x00fc4b44) */
/* WARNING: Removing unreachable block (ram,0x00fc4bb8) */

undefined4 * __fastcall FUN_00fc4a30(undefined4 *param_1)

{
  uint uVar1;
  
  Hw::cPixelShader::cPixelShader();
  *param_1 = &PTR_FUN_016f3dc4;
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

// 00FC4C30  FUN_00fc4c30  size=42  [between]
void __fastcall FUN_00fc4c30(int param_1)

{
  FUN_00f99300();
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0x1111111;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0x1111111;
  Hw::cShader::vf04();
  return;
}

// 00FC4C60  FUN_00fc4c60  size=246  [between]
/* WARNING: Removing unreachable block (ram,0x00fc4c9a) */
/* WARNING: Removing unreachable block (ram,0x00fc4d07) */

undefined4 * __fastcall FUN_00fc4c60(undefined4 *param_1)

{
  Hw::cPixelShader::cPixelShader();
  *param_1 = &PTR_FUN_016f3dcc;
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

// 00FC4D90  FUN_00fc4d90  size=41  [between]
void __fastcall FUN_00fc4d90(int param_1)

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

// 00FC4DC0  FUN_00fc4dc0  size=238  [between]
/* WARNING: Removing unreachable block (ram,0x00fc4dfa) */
/* WARNING: Removing unreachable block (ram,0x00fc4e6c) */

undefined4 * __fastcall FUN_00fc4dc0(undefined4 *param_1)

{
  Hw::cPixelShader::cPixelShader();
  *param_1 = &PTR_FUN_016f3dd4;
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

// 00FC4ED0  FUN_00fc4ed0  size=32  [between]
void __fastcall FUN_00fc4ed0(int param_1)

{
  FUN_00f99300();
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0x1111111;
  Hw::cShader::vf04();
  return;
}

// 00FC4EF0  FUN_00fc4ef0  size=238  [between]
/* WARNING: Removing unreachable block (ram,0x00fc4f2a) */
/* WARNING: Removing unreachable block (ram,0x00fc4f9c) */

undefined4 * __fastcall FUN_00fc4ef0(undefined4 *param_1)

{
  Hw::cPixelShader::cPixelShader();
  *param_1 = &PTR_FUN_016f3ddc;
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

// 00FC5000  FUN_00fc5000  size=21  [between]
void __fastcall FUN_00fc5000(int param_1)

{
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0x1111111;
  Hw::cShader::vf04();
  return;
}

// 00FC5020  FUN_00fc5020  size=246  [between]
/* WARNING: Removing unreachable block (ram,0x00fc505a) */
/* WARNING: Removing unreachable block (ram,0x00fc50c7) */

undefined4 * __fastcall FUN_00fc5020(undefined4 *param_1)

{
  Hw::cPixelShader::cPixelShader();
  *param_1 = &PTR_FUN_016f3de4;
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

// 00FC5150  FUN_00fc5150  size=41  [between]
void __fastcall FUN_00fc5150(int param_1)

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

// 00FC5180  cModelShaderGBuffer::vf04  size=21  [class]
void cModelShaderGBuffer::vf04(void)

{
  FUN_00f99300();
  FUN_00fc0f40();
  Hw::cShader::vf04();
  return;
}

// 015F4200  cModelShaderGBuffer::~cModelShaderGBuffer  size=83  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01eeea98 = 0xffffffff;
  _DAT_01eeea9c = 0xffffffff;
  _DAT_01eeeaa0 = 0xffffffff;
  _DAT_01eeeab0 = 0xffffffff;
  _DAT_01eeeab4 = 0xffffffff;
  _DAT_01eeeab8 = 0x1111111;
  _DAT_01eeeaa4 = 0xffffffff;
  _DAT_01eeeaa8 = 0xffffffff;
  _DAT_01eeeaac = 0xffffffff;
  _DAT_01eee950 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F4260  cModelShaderGBuffer::~cModelShaderGBuffer  size=53  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01eeec50 = 0xffffffff;
  _DAT_01eeec54 = 0xffffffff;
  _DAT_01eeec58 = 0x1111111;
  _DAT_01eeeb08 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F42A0  cModelShaderGBuffer::~cModelShaderGBuffer  size=68  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01eeede4 = 0xffffffff;
  _DAT_01eeede8 = 0xffffffff;
  _DAT_01eeedec = 0xffffffff;
  _DAT_01eeedd8 = 0xffffffff;
  _DAT_01eeeddc = 0xffffffff;
  _DAT_01eeede0 = 0x1111111;
  _DAT_01eeec90 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F42F0  cModelShaderGBuffer::~cModelShaderGBuffer  size=83  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01eeef84 = 0xffffffff;
  _DAT_01eeef88 = 0xffffffff;
  _DAT_01eeef8c = 0xffffffff;
  _DAT_01eeef9c = 0xffffffff;
  _DAT_01eeefa0 = 0xffffffff;
  _DAT_01eeefa4 = 0x1111111;
  _DAT_01eeef90 = 0xffffffff;
  _DAT_01eeef94 = 0xffffffff;
  _DAT_01eeef98 = 0xffffffff;
  _DAT_01eeee18 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F4350  cModelShaderGBuffer::~cModelShaderGBuffer  size=83  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01eef154 = 0xffffffff;
  _DAT_01eef158 = 0xffffffff;
  _DAT_01eef15c = 0xffffffff;
  _DAT_01eef16c = 0xffffffff;
  _DAT_01eef170 = 0xffffffff;
  _DAT_01eef174 = 0x1111111;
  _DAT_01eef160 = 0xffffffff;
  _DAT_01eef164 = 0xffffffff;
  _DAT_01eef168 = 0xffffffff;
  _DAT_01eeefe8 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F43B0  cModelShaderGBuffer::~cModelShaderGBuffer  size=70  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01eef308 = 0x1111111;
  _DAT_01eef314 = 0x1111111;
  _DAT_01eef300 = 0xffffffff;
  _DAT_01eef304 = 0xffffffff;
  _DAT_01eef30c = 0xffffffff;
  _DAT_01eef310 = 0xffffffff;
  _DAT_01eef1b8 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F6670  FUN_015f6670  size=10  [callgraph]
void FUN_015f6670(void)

{
  FUN_00fc3430();
  return;
}

// 015F6680  FUN_015f6680  size=199  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015f6680(void)

{
  _DAT_01f71350 = 0x1111111;
  _DAT_01f7135c = 0x1111111;
  _DAT_01f71368 = 0x1111111;
  _DAT_01f71380 = 0x1111111;
  _DAT_01f7138c = 0x1111111;
  _DAT_01f71398 = 0x1111111;
  _DAT_01f713b4 = 0xffffffff;
  _DAT_01f713b8 = 0xffffffff;
  _DAT_01f713bc = 0xffffffff;
  _DAT_01f713c0 = 0xffffffff;
  _DAT_01f713c4 = 0xffffffff;
  _DAT_01f713c8 = 0xffffffff;
  _DAT_01f713cc = 0xffffffff;
  _DAT_01f713d0 = 0xffffffff;
  _DAT_01f713d4 = 0xffffffff;
  _DAT_01f71320 = &PTR_FUN_016f3d64;
  _DAT_01f7139c = 0xffffffff;
  _DAT_01f713a0 = 0xffffffff;
  _DAT_01f713a4 = 0xffffffff;
  _DAT_01f713a8 = 0xffffffff;
  _DAT_01f713ac = 0xffffffff;
  _DAT_01f713b0 = 0xffffffff;
  _DAT_01f71348 = 0xffffffff;
  _DAT_01f7134c = 0xffffffff;
  _DAT_01f71354 = 0xffffffff;
  _DAT_01f71358 = 0xffffffff;
  _DAT_01f71360 = 0xffffffff;
  _DAT_01f71364 = 0xffffffff;
  _DAT_01f71378 = 0xffffffff;
  _DAT_01f7137c = 0xffffffff;
  _DAT_01f71384 = 0xffffffff;
  _DAT_01f71388 = 0xffffffff;
  _DAT_01f71390 = 0xffffffff;
  _DAT_01f71394 = 0xffffffff;
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F6750  FUN_015f6750  size=199  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015f6750(void)

{
  _DAT_01f71408 = 0x1111111;
  _DAT_01f71414 = 0x1111111;
  _DAT_01f71420 = 0x1111111;
  _DAT_01f71438 = 0x1111111;
  _DAT_01f71444 = 0x1111111;
  _DAT_01f71450 = 0x1111111;
  _DAT_01f7146c = 0xffffffff;
  _DAT_01f71470 = 0xffffffff;
  _DAT_01f71474 = 0xffffffff;
  _DAT_01f71478 = 0xffffffff;
  _DAT_01f7147c = 0xffffffff;
  _DAT_01f71480 = 0xffffffff;
  _DAT_01f71484 = 0xffffffff;
  _DAT_01f71488 = 0xffffffff;
  _DAT_01f7148c = 0xffffffff;
  _DAT_01f713d8 = &PTR_FUN_016f3d64;
  _DAT_01f71454 = 0xffffffff;
  _DAT_01f71458 = 0xffffffff;
  _DAT_01f7145c = 0xffffffff;
  _DAT_01f71460 = 0xffffffff;
  _DAT_01f71464 = 0xffffffff;
  _DAT_01f71468 = 0xffffffff;
  _DAT_01f71400 = 0xffffffff;
  _DAT_01f71404 = 0xffffffff;
  _DAT_01f7140c = 0xffffffff;
  _DAT_01f71410 = 0xffffffff;
  _DAT_01f71418 = 0xffffffff;
  _DAT_01f7141c = 0xffffffff;
  _DAT_01f71430 = 0xffffffff;
  _DAT_01f71434 = 0xffffffff;
  _DAT_01f7143c = 0xffffffff;
  _DAT_01f71440 = 0xffffffff;
  _DAT_01f71448 = 0xffffffff;
  _DAT_01f7144c = 0xffffffff;
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F6820  FUN_015f6820  size=169  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015f6820(void)

{
  _DAT_01f714c0 = 0x1111111;
  _DAT_01f714cc = 0x1111111;
  _DAT_01f714d8 = 0x1111111;
  _DAT_01f714f0 = 0x1111111;
  _DAT_01f714fc = 0x1111111;
  _DAT_01f71508 = 0x1111111;
  _DAT_01f71524 = 0xffffffff;
  _DAT_01f71528 = 0xffffffff;
  _DAT_01f7152c = 0xffffffff;
  _DAT_01f71490 = &PTR_FUN_016f3d64;
  _DAT_01f7150c = 0xffffffff;
  _DAT_01f71510 = 0xffffffff;
  _DAT_01f71514 = 0xffffffff;
  _DAT_01f71518 = 0xffffffff;
  _DAT_01f7151c = 0xffffffff;
  _DAT_01f71520 = 0xffffffff;
  _DAT_01f714b8 = 0xffffffff;
  _DAT_01f714bc = 0xffffffff;
  _DAT_01f714c4 = 0xffffffff;
  _DAT_01f714c8 = 0xffffffff;
  _DAT_01f714d0 = 0xffffffff;
  _DAT_01f714d4 = 0xffffffff;
  _DAT_01f714e8 = 0xffffffff;
  _DAT_01f714ec = 0xffffffff;
  _DAT_01f714f4 = 0xffffffff;
  _DAT_01f714f8 = 0xffffffff;
  _DAT_01f71500 = 0xffffffff;
  _DAT_01f71504 = 0xffffffff;
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F68D0  FUN_015f68d0  size=169  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015f68d0(void)

{
  _DAT_01f71560 = 0x1111111;
  _DAT_01f7156c = 0x1111111;
  _DAT_01f71578 = 0x1111111;
  _DAT_01f71590 = 0x1111111;
  _DAT_01f7159c = 0x1111111;
  _DAT_01f715a8 = 0x1111111;
  _DAT_01f715c4 = 0xffffffff;
  _DAT_01f715c8 = 0xffffffff;
  _DAT_01f715cc = 0xffffffff;
  _DAT_01f71530 = &PTR_FUN_016f3d64;
  _DAT_01f715ac = 0xffffffff;
  _DAT_01f715b0 = 0xffffffff;
  _DAT_01f715b4 = 0xffffffff;
  _DAT_01f715b8 = 0xffffffff;
  _DAT_01f715bc = 0xffffffff;
  _DAT_01f715c0 = 0xffffffff;
  _DAT_01f71558 = 0xffffffff;
  _DAT_01f7155c = 0xffffffff;
  _DAT_01f71564 = 0xffffffff;
  _DAT_01f71568 = 0xffffffff;
  _DAT_01f71570 = 0xffffffff;
  _DAT_01f71574 = 0xffffffff;
  _DAT_01f71588 = 0xffffffff;
  _DAT_01f7158c = 0xffffffff;
  _DAT_01f71594 = 0xffffffff;
  _DAT_01f71598 = 0xffffffff;
  _DAT_01f715a0 = 0xffffffff;
  _DAT_01f715a4 = 0xffffffff;
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F6980  FUN_015f6980  size=169  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015f6980(void)

{
  _DAT_01f71600 = 0x1111111;
  _DAT_01f7160c = 0x1111111;
  _DAT_01f71618 = 0x1111111;
  _DAT_01f71630 = 0x1111111;
  _DAT_01f7163c = 0x1111111;
  _DAT_01f71648 = 0x1111111;
  _DAT_01f71664 = 0xffffffff;
  _DAT_01f71668 = 0xffffffff;
  _DAT_01f7166c = 0xffffffff;
  _DAT_01f715d0 = &PTR_FUN_016f3d64;
  _DAT_01f7164c = 0xffffffff;
  _DAT_01f71650 = 0xffffffff;
  _DAT_01f71654 = 0xffffffff;
  _DAT_01f71658 = 0xffffffff;
  _DAT_01f7165c = 0xffffffff;
  _DAT_01f71660 = 0xffffffff;
  _DAT_01f715f8 = 0xffffffff;
  _DAT_01f715fc = 0xffffffff;
  _DAT_01f71604 = 0xffffffff;
  _DAT_01f71608 = 0xffffffff;
  _DAT_01f71610 = 0xffffffff;
  _DAT_01f71614 = 0xffffffff;
  _DAT_01f71628 = 0xffffffff;
  _DAT_01f7162c = 0xffffffff;
  _DAT_01f71634 = 0xffffffff;
  _DAT_01f71638 = 0xffffffff;
  _DAT_01f71640 = 0xffffffff;
  _DAT_01f71644 = 0xffffffff;
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F6A30  FUN_015f6a30  size=154  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015f6a30(void)

{
  _DAT_01f716a0 = 0x1111111;
  _DAT_01f716ac = 0x1111111;
  _DAT_01f716b8 = 0x1111111;
  _DAT_01f716d0 = 0x1111111;
  _DAT_01f716dc = 0x1111111;
  _DAT_01f716e8 = 0x1111111;
  _DAT_01f71670 = &PTR_FUN_016f3d64;
  _DAT_01f716ec = 0xffffffff;
  _DAT_01f716f0 = 0xffffffff;
  _DAT_01f716f4 = 0xffffffff;
  _DAT_01f716f8 = 0xffffffff;
  _DAT_01f716fc = 0xffffffff;
  _DAT_01f71700 = 0xffffffff;
  _DAT_01f71698 = 0xffffffff;
  _DAT_01f7169c = 0xffffffff;
  _DAT_01f716a4 = 0xffffffff;
  _DAT_01f716a8 = 0xffffffff;
  _DAT_01f716b0 = 0xffffffff;
  _DAT_01f716b4 = 0xffffffff;
  _DAT_01f716c8 = 0xffffffff;
  _DAT_01f716cc = 0xffffffff;
  _DAT_01f716d4 = 0xffffffff;
  _DAT_01f716d8 = 0xffffffff;
  _DAT_01f716e0 = 0xffffffff;
  _DAT_01f716e4 = 0xffffffff;
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F6AD0  FUN_015f6ad0  size=154  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015f6ad0(void)

{
  _DAT_01f71738 = 0x1111111;
  _DAT_01f71744 = 0x1111111;
  _DAT_01f71750 = 0x1111111;
  _DAT_01f71768 = 0x1111111;
  _DAT_01f71774 = 0x1111111;
  _DAT_01f71780 = 0x1111111;
  _DAT_01f71708 = &PTR_FUN_016f3d64;
  _DAT_01f71784 = 0xffffffff;
  _DAT_01f71788 = 0xffffffff;
  _DAT_01f7178c = 0xffffffff;
  _DAT_01f71790 = 0xffffffff;
  _DAT_01f71794 = 0xffffffff;
  _DAT_01f71798 = 0xffffffff;
  _DAT_01f71730 = 0xffffffff;
  _DAT_01f71734 = 0xffffffff;
  _DAT_01f7173c = 0xffffffff;
  _DAT_01f71740 = 0xffffffff;
  _DAT_01f71748 = 0xffffffff;
  _DAT_01f7174c = 0xffffffff;
  _DAT_01f71760 = 0xffffffff;
  _DAT_01f71764 = 0xffffffff;
  _DAT_01f7176c = 0xffffffff;
  _DAT_01f71770 = 0xffffffff;
  _DAT_01f71778 = 0xffffffff;
  _DAT_01f7177c = 0xffffffff;
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F6B70  FUN_015f6b70  size=154  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015f6b70(void)

{
  _DAT_01f717d0 = 0x1111111;
  _DAT_01f717dc = 0x1111111;
  _DAT_01f717e8 = 0x1111111;
  _DAT_01f71800 = 0x1111111;
  _DAT_01f7180c = 0x1111111;
  _DAT_01f71818 = 0x1111111;
  _DAT_01f717a0 = &PTR_FUN_016f3d64;
  _DAT_01f7181c = 0xffffffff;
  _DAT_01f71820 = 0xffffffff;
  _DAT_01f71824 = 0xffffffff;
  _DAT_01f71828 = 0xffffffff;
  _DAT_01f7182c = 0xffffffff;
  _DAT_01f71830 = 0xffffffff;
  _DAT_01f717c8 = 0xffffffff;
  _DAT_01f717cc = 0xffffffff;
  _DAT_01f717d4 = 0xffffffff;
  _DAT_01f717d8 = 0xffffffff;
  _DAT_01f717e0 = 0xffffffff;
  _DAT_01f717e4 = 0xffffffff;
  _DAT_01f717f8 = 0xffffffff;
  _DAT_01f717fc = 0xffffffff;
  _DAT_01f71804 = 0xffffffff;
  _DAT_01f71808 = 0xffffffff;
  _DAT_01f71810 = 0xffffffff;
  _DAT_01f71814 = 0xffffffff;
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F6C10  FUN_015f6c10  size=10  [callgraph]
void FUN_015f6c10(void)

{
  FUN_00fc3430();
  return;
}

// 015F6C20  FUN_015f6c20  size=10  [callgraph]
void FUN_015f6c20(void)

{
  FUN_00fc3430();
  return;
}

// 015F6C30  FUN_015f6c30  size=199  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015f6c30(void)

{
  _DAT_01f719d8 = 0x1111111;
  _DAT_01f719e4 = 0x1111111;
  _DAT_01f719f0 = 0x1111111;
  _DAT_01f71a08 = 0x1111111;
  _DAT_01f71a14 = 0x1111111;
  _DAT_01f71a20 = 0x1111111;
  _DAT_01f71a3c = 0xffffffff;
  _DAT_01f71a40 = 0xffffffff;
  _DAT_01f71a44 = 0xffffffff;
  _DAT_01f71a48 = 0xffffffff;
  _DAT_01f71a4c = 0xffffffff;
  _DAT_01f71a50 = 0xffffffff;
  _DAT_01f71a54 = 0xffffffff;
  _DAT_01f71a58 = 0xffffffff;
  _DAT_01f71a5c = 0xffffffff;
  _DAT_01f719a8 = &PTR_FUN_016f3d64;
  _DAT_01f71a24 = 0xffffffff;
  _DAT_01f71a28 = 0xffffffff;
  _DAT_01f71a2c = 0xffffffff;
  _DAT_01f71a30 = 0xffffffff;
  _DAT_01f71a34 = 0xffffffff;
  _DAT_01f71a38 = 0xffffffff;
  _DAT_01f719d0 = 0xffffffff;
  _DAT_01f719d4 = 0xffffffff;
  _DAT_01f719dc = 0xffffffff;
  _DAT_01f719e0 = 0xffffffff;
  _DAT_01f719e8 = 0xffffffff;
  _DAT_01f719ec = 0xffffffff;
  _DAT_01f71a00 = 0xffffffff;
  _DAT_01f71a04 = 0xffffffff;
  _DAT_01f71a0c = 0xffffffff;
  _DAT_01f71a10 = 0xffffffff;
  _DAT_01f71a18 = 0xffffffff;
  _DAT_01f71a1c = 0xffffffff;
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F6D00  FUN_015f6d00  size=199  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015f6d00(void)

{
  _DAT_01f71a90 = 0x1111111;
  _DAT_01f71a9c = 0x1111111;
  _DAT_01f71aa8 = 0x1111111;
  _DAT_01f71ac0 = 0x1111111;
  _DAT_01f71acc = 0x1111111;
  _DAT_01f71ad8 = 0x1111111;
  _DAT_01f71af4 = 0xffffffff;
  _DAT_01f71af8 = 0xffffffff;
  _DAT_01f71afc = 0xffffffff;
  _DAT_01f71b00 = 0xffffffff;
  _DAT_01f71b04 = 0xffffffff;
  _DAT_01f71b08 = 0xffffffff;
  _DAT_01f71b0c = 0xffffffff;
  _DAT_01f71b10 = 0xffffffff;
  _DAT_01f71b14 = 0xffffffff;
  _DAT_01f71a60 = &PTR_FUN_016f3d64;
  _DAT_01f71adc = 0xffffffff;
  _DAT_01f71ae0 = 0xffffffff;
  _DAT_01f71ae4 = 0xffffffff;
  _DAT_01f71ae8 = 0xffffffff;
  _DAT_01f71aec = 0xffffffff;
  _DAT_01f71af0 = 0xffffffff;
  _DAT_01f71a88 = 0xffffffff;
  _DAT_01f71a8c = 0xffffffff;
  _DAT_01f71a94 = 0xffffffff;
  _DAT_01f71a98 = 0xffffffff;
  _DAT_01f71aa0 = 0xffffffff;
  _DAT_01f71aa4 = 0xffffffff;
  _DAT_01f71ab8 = 0xffffffff;
  _DAT_01f71abc = 0xffffffff;
  _DAT_01f71ac4 = 0xffffffff;
  _DAT_01f71ac8 = 0xffffffff;
  _DAT_01f71ad0 = 0xffffffff;
  _DAT_01f71ad4 = 0xffffffff;
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F6DD0  FUN_015f6dd0  size=169  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015f6dd0(void)

{
  _DAT_01f71b48 = 0x1111111;
  _DAT_01f71b54 = 0x1111111;
  _DAT_01f71b60 = 0x1111111;
  _DAT_01f71b78 = 0x1111111;
  _DAT_01f71b84 = 0x1111111;
  _DAT_01f71b90 = 0x1111111;
  _DAT_01f71bac = 0xffffffff;
  _DAT_01f71bb0 = 0xffffffff;
  _DAT_01f71bb4 = 0xffffffff;
  _DAT_01f71b18 = &PTR_FUN_016f3d64;
  _DAT_01f71b94 = 0xffffffff;
  _DAT_01f71b98 = 0xffffffff;
  _DAT_01f71b9c = 0xffffffff;
  _DAT_01f71ba0 = 0xffffffff;
  _DAT_01f71ba4 = 0xffffffff;
  _DAT_01f71ba8 = 0xffffffff;
  _DAT_01f71b40 = 0xffffffff;
  _DAT_01f71b44 = 0xffffffff;
  _DAT_01f71b4c = 0xffffffff;
  _DAT_01f71b50 = 0xffffffff;
  _DAT_01f71b58 = 0xffffffff;
  _DAT_01f71b5c = 0xffffffff;
  _DAT_01f71b70 = 0xffffffff;
  _DAT_01f71b74 = 0xffffffff;
  _DAT_01f71b7c = 0xffffffff;
  _DAT_01f71b80 = 0xffffffff;
  _DAT_01f71b88 = 0xffffffff;
  _DAT_01f71b8c = 0xffffffff;
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F6E80  FUN_015f6e80  size=169  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015f6e80(void)

{
  _DAT_01f71be8 = 0x1111111;
  _DAT_01f71bf4 = 0x1111111;
  _DAT_01f71c00 = 0x1111111;
  _DAT_01f71c18 = 0x1111111;
  _DAT_01f71c24 = 0x1111111;
  _DAT_01f71c30 = 0x1111111;
  _DAT_01f71c4c = 0xffffffff;
  _DAT_01f71c50 = 0xffffffff;
  _DAT_01f71c54 = 0xffffffff;
  _DAT_01f71bb8 = &PTR_FUN_016f3d64;
  _DAT_01f71c34 = 0xffffffff;
  _DAT_01f71c38 = 0xffffffff;
  _DAT_01f71c3c = 0xffffffff;
  _DAT_01f71c40 = 0xffffffff;
  _DAT_01f71c44 = 0xffffffff;
  _DAT_01f71c48 = 0xffffffff;
  _DAT_01f71be0 = 0xffffffff;
  _DAT_01f71be4 = 0xffffffff;
  _DAT_01f71bec = 0xffffffff;
  _DAT_01f71bf0 = 0xffffffff;
  _DAT_01f71bf8 = 0xffffffff;
  _DAT_01f71bfc = 0xffffffff;
  _DAT_01f71c10 = 0xffffffff;
  _DAT_01f71c14 = 0xffffffff;
  _DAT_01f71c1c = 0xffffffff;
  _DAT_01f71c20 = 0xffffffff;
  _DAT_01f71c28 = 0xffffffff;
  _DAT_01f71c2c = 0xffffffff;
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F6F30  FUN_015f6f30  size=169  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015f6f30(void)

{
  _DAT_01f71c88 = 0x1111111;
  _DAT_01f71c94 = 0x1111111;
  _DAT_01f71ca0 = 0x1111111;
  _DAT_01f71cb8 = 0x1111111;
  _DAT_01f71cc4 = 0x1111111;
  _DAT_01f71cd0 = 0x1111111;
  _DAT_01f71cec = 0xffffffff;
  _DAT_01f71cf0 = 0xffffffff;
  _DAT_01f71cf4 = 0xffffffff;
  _DAT_01f71c58 = &PTR_FUN_016f3d64;
  _DAT_01f71cd4 = 0xffffffff;
  _DAT_01f71cd8 = 0xffffffff;
  _DAT_01f71cdc = 0xffffffff;
  _DAT_01f71ce0 = 0xffffffff;
  _DAT_01f71ce4 = 0xffffffff;
  _DAT_01f71ce8 = 0xffffffff;
  _DAT_01f71c80 = 0xffffffff;
  _DAT_01f71c84 = 0xffffffff;
  _DAT_01f71c8c = 0xffffffff;
  _DAT_01f71c90 = 0xffffffff;
  _DAT_01f71c98 = 0xffffffff;
  _DAT_01f71c9c = 0xffffffff;
  _DAT_01f71cb0 = 0xffffffff;
  _DAT_01f71cb4 = 0xffffffff;
  _DAT_01f71cbc = 0xffffffff;
  _DAT_01f71cc0 = 0xffffffff;
  _DAT_01f71cc8 = 0xffffffff;
  _DAT_01f71ccc = 0xffffffff;
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F6FE0  FUN_015f6fe0  size=154  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015f6fe0(void)

{
  _DAT_01f71d28 = 0x1111111;
  _DAT_01f71d34 = 0x1111111;
  _DAT_01f71d40 = 0x1111111;
  _DAT_01f71d58 = 0x1111111;
  _DAT_01f71d64 = 0x1111111;
  _DAT_01f71d70 = 0x1111111;
  _DAT_01f71cf8 = &PTR_FUN_016f3d64;
  _DAT_01f71d74 = 0xffffffff;
  _DAT_01f71d78 = 0xffffffff;
  _DAT_01f71d7c = 0xffffffff;
  _DAT_01f71d80 = 0xffffffff;
  _DAT_01f71d84 = 0xffffffff;
  _DAT_01f71d88 = 0xffffffff;
  _DAT_01f71d20 = 0xffffffff;
  _DAT_01f71d24 = 0xffffffff;
  _DAT_01f71d2c = 0xffffffff;
  _DAT_01f71d30 = 0xffffffff;
  _DAT_01f71d38 = 0xffffffff;
  _DAT_01f71d3c = 0xffffffff;
  _DAT_01f71d50 = 0xffffffff;
  _DAT_01f71d54 = 0xffffffff;
  _DAT_01f71d5c = 0xffffffff;
  _DAT_01f71d60 = 0xffffffff;
  _DAT_01f71d68 = 0xffffffff;
  _DAT_01f71d6c = 0xffffffff;
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F7080  FUN_015f7080  size=154  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015f7080(void)

{
  _DAT_01f71dc0 = 0x1111111;
  _DAT_01f71dcc = 0x1111111;
  _DAT_01f71dd8 = 0x1111111;
  _DAT_01f71df0 = 0x1111111;
  _DAT_01f71dfc = 0x1111111;
  _DAT_01f71e08 = 0x1111111;
  _DAT_01f71d90 = &PTR_FUN_016f3d64;
  _DAT_01f71e0c = 0xffffffff;
  _DAT_01f71e10 = 0xffffffff;
  _DAT_01f71e14 = 0xffffffff;
  _DAT_01f71e18 = 0xffffffff;
  _DAT_01f71e1c = 0xffffffff;
  _DAT_01f71e20 = 0xffffffff;
  _DAT_01f71db8 = 0xffffffff;
  _DAT_01f71dbc = 0xffffffff;
  _DAT_01f71dc4 = 0xffffffff;
  _DAT_01f71dc8 = 0xffffffff;
  _DAT_01f71dd0 = 0xffffffff;
  _DAT_01f71dd4 = 0xffffffff;
  _DAT_01f71de8 = 0xffffffff;
  _DAT_01f71dec = 0xffffffff;
  _DAT_01f71df4 = 0xffffffff;
  _DAT_01f71df8 = 0xffffffff;
  _DAT_01f71e00 = 0xffffffff;
  _DAT_01f71e04 = 0xffffffff;
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F7120  FUN_015f7120  size=154  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015f7120(void)

{
  _DAT_01f71e58 = 0x1111111;
  _DAT_01f71e64 = 0x1111111;
  _DAT_01f71e70 = 0x1111111;
  _DAT_01f71e88 = 0x1111111;
  _DAT_01f71e94 = 0x1111111;
  _DAT_01f71ea0 = 0x1111111;
  _DAT_01f71e28 = &PTR_FUN_016f3d64;
  _DAT_01f71ea4 = 0xffffffff;
  _DAT_01f71ea8 = 0xffffffff;
  _DAT_01f71eac = 0xffffffff;
  _DAT_01f71eb0 = 0xffffffff;
  _DAT_01f71eb4 = 0xffffffff;
  _DAT_01f71eb8 = 0xffffffff;
  _DAT_01f71e50 = 0xffffffff;
  _DAT_01f71e54 = 0xffffffff;
  _DAT_01f71e5c = 0xffffffff;
  _DAT_01f71e60 = 0xffffffff;
  _DAT_01f71e68 = 0xffffffff;
  _DAT_01f71e6c = 0xffffffff;
  _DAT_01f71e80 = 0xffffffff;
  _DAT_01f71e84 = 0xffffffff;
  _DAT_01f71e8c = 0xffffffff;
  _DAT_01f71e90 = 0xffffffff;
  _DAT_01f71e98 = 0xffffffff;
  _DAT_01f71e9c = 0xffffffff;
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F71C0  FUN_015f71c0  size=10  [callgraph]
void FUN_015f71c0(void)

{
  FUN_00fc3430();
  return;
}

// 015F71D0  FUN_015f71d0  size=199  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015f71d0(void)

{
  _DAT_01f71fa8 = 0x1111111;
  _DAT_01f71fb4 = 0x1111111;
  _DAT_01f71fc0 = 0x1111111;
  _DAT_01f71fd8 = 0x1111111;
  _DAT_01f71fe4 = 0x1111111;
  _DAT_01f71ff0 = 0x1111111;
  _DAT_01f7200c = 0xffffffff;
  _DAT_01f72010 = 0xffffffff;
  _DAT_01f72014 = 0xffffffff;
  _DAT_01f72018 = 0xffffffff;
  _DAT_01f7201c = 0xffffffff;
  _DAT_01f72020 = 0xffffffff;
  _DAT_01f72024 = 0xffffffff;
  _DAT_01f72028 = 0xffffffff;
  _DAT_01f7202c = 0xffffffff;
  _DAT_01f71f78 = &PTR_FUN_016f3d64;
  _DAT_01f71ff4 = 0xffffffff;
  _DAT_01f71ff8 = 0xffffffff;
  _DAT_01f71ffc = 0xffffffff;
  _DAT_01f72000 = 0xffffffff;
  _DAT_01f72004 = 0xffffffff;
  _DAT_01f72008 = 0xffffffff;
  _DAT_01f71fa0 = 0xffffffff;
  _DAT_01f71fa4 = 0xffffffff;
  _DAT_01f71fac = 0xffffffff;
  _DAT_01f71fb0 = 0xffffffff;
  _DAT_01f71fb8 = 0xffffffff;
  _DAT_01f71fbc = 0xffffffff;
  _DAT_01f71fd0 = 0xffffffff;
  _DAT_01f71fd4 = 0xffffffff;
  _DAT_01f71fdc = 0xffffffff;
  _DAT_01f71fe0 = 0xffffffff;
  _DAT_01f71fe8 = 0xffffffff;
  _DAT_01f71fec = 0xffffffff;
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F72A0  FUN_015f72a0  size=199  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015f72a0(void)

{
  _DAT_01f72060 = 0x1111111;
  _DAT_01f7206c = 0x1111111;
  _DAT_01f72078 = 0x1111111;
  _DAT_01f72090 = 0x1111111;
  _DAT_01f7209c = 0x1111111;
  _DAT_01f720a8 = 0x1111111;
  _DAT_01f720c4 = 0xffffffff;
  _DAT_01f720c8 = 0xffffffff;
  _DAT_01f720cc = 0xffffffff;
  _DAT_01f720d0 = 0xffffffff;
  _DAT_01f720d4 = 0xffffffff;
  _DAT_01f720d8 = 0xffffffff;
  _DAT_01f720dc = 0xffffffff;
  _DAT_01f720e0 = 0xffffffff;
  _DAT_01f720e4 = 0xffffffff;
  _DAT_01f72030 = &PTR_FUN_016f3d64;
  _DAT_01f720ac = 0xffffffff;
  _DAT_01f720b0 = 0xffffffff;
  _DAT_01f720b4 = 0xffffffff;
  _DAT_01f720b8 = 0xffffffff;
  _DAT_01f720bc = 0xffffffff;
  _DAT_01f720c0 = 0xffffffff;
  _DAT_01f72058 = 0xffffffff;
  _DAT_01f7205c = 0xffffffff;
  _DAT_01f72064 = 0xffffffff;
  _DAT_01f72068 = 0xffffffff;
  _DAT_01f72070 = 0xffffffff;
  _DAT_01f72074 = 0xffffffff;
  _DAT_01f72088 = 0xffffffff;
  _DAT_01f7208c = 0xffffffff;
  _DAT_01f72094 = 0xffffffff;
  _DAT_01f72098 = 0xffffffff;
  _DAT_01f720a0 = 0xffffffff;
  _DAT_01f720a4 = 0xffffffff;
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F7370  FUN_015f7370  size=169  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015f7370(void)

{
  _DAT_01f72118 = 0x1111111;
  _DAT_01f72124 = 0x1111111;
  _DAT_01f72130 = 0x1111111;
  _DAT_01f72148 = 0x1111111;
  _DAT_01f72154 = 0x1111111;
  _DAT_01f72160 = 0x1111111;
  _DAT_01f7217c = 0xffffffff;
  _DAT_01f72180 = 0xffffffff;
  _DAT_01f72184 = 0xffffffff;
  _DAT_01f720e8 = &PTR_FUN_016f3d64;
  _DAT_01f72164 = 0xffffffff;
  _DAT_01f72168 = 0xffffffff;
  _DAT_01f7216c = 0xffffffff;
  _DAT_01f72170 = 0xffffffff;
  _DAT_01f72174 = 0xffffffff;
  _DAT_01f72178 = 0xffffffff;
  _DAT_01f72110 = 0xffffffff;
  _DAT_01f72114 = 0xffffffff;
  _DAT_01f7211c = 0xffffffff;
  _DAT_01f72120 = 0xffffffff;
  _DAT_01f72128 = 0xffffffff;
  _DAT_01f7212c = 0xffffffff;
  _DAT_01f72140 = 0xffffffff;
  _DAT_01f72144 = 0xffffffff;
  _DAT_01f7214c = 0xffffffff;
  _DAT_01f72150 = 0xffffffff;
  _DAT_01f72158 = 0xffffffff;
  _DAT_01f7215c = 0xffffffff;
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F7420  FUN_015f7420  size=169  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015f7420(void)

{
  _DAT_01f721b8 = 0x1111111;
  _DAT_01f721c4 = 0x1111111;
  _DAT_01f721d0 = 0x1111111;
  _DAT_01f721e8 = 0x1111111;
  _DAT_01f721f4 = 0x1111111;
  _DAT_01f72200 = 0x1111111;
  _DAT_01f7221c = 0xffffffff;
  _DAT_01f72220 = 0xffffffff;
  _DAT_01f72224 = 0xffffffff;
  _DAT_01f72188 = &PTR_FUN_016f3d64;
  _DAT_01f72204 = 0xffffffff;
  _DAT_01f72208 = 0xffffffff;
  _DAT_01f7220c = 0xffffffff;
  _DAT_01f72210 = 0xffffffff;
  _DAT_01f72214 = 0xffffffff;
  _DAT_01f72218 = 0xffffffff;
  _DAT_01f721b0 = 0xffffffff;
  _DAT_01f721b4 = 0xffffffff;
  _DAT_01f721bc = 0xffffffff;
  _DAT_01f721c0 = 0xffffffff;
  _DAT_01f721c8 = 0xffffffff;
  _DAT_01f721cc = 0xffffffff;
  _DAT_01f721e0 = 0xffffffff;
  _DAT_01f721e4 = 0xffffffff;
  _DAT_01f721ec = 0xffffffff;
  _DAT_01f721f0 = 0xffffffff;
  _DAT_01f721f8 = 0xffffffff;
  _DAT_01f721fc = 0xffffffff;
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F74D0  FUN_015f74d0  size=169  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015f74d0(void)

{
  _DAT_01f72258 = 0x1111111;
  _DAT_01f72264 = 0x1111111;
  _DAT_01f72270 = 0x1111111;
  _DAT_01f72288 = 0x1111111;
  _DAT_01f72294 = 0x1111111;
  _DAT_01f722a0 = 0x1111111;
  _DAT_01f722bc = 0xffffffff;
  _DAT_01f722c0 = 0xffffffff;
  _DAT_01f722c4 = 0xffffffff;
  _DAT_01f72228 = &PTR_FUN_016f3d64;
  _DAT_01f722a4 = 0xffffffff;
  _DAT_01f722a8 = 0xffffffff;
  _DAT_01f722ac = 0xffffffff;
  _DAT_01f722b0 = 0xffffffff;
  _DAT_01f722b4 = 0xffffffff;
  _DAT_01f722b8 = 0xffffffff;
  _DAT_01f72250 = 0xffffffff;
  _DAT_01f72254 = 0xffffffff;
  _DAT_01f7225c = 0xffffffff;
  _DAT_01f72260 = 0xffffffff;
  _DAT_01f72268 = 0xffffffff;
  _DAT_01f7226c = 0xffffffff;
  _DAT_01f72280 = 0xffffffff;
  _DAT_01f72284 = 0xffffffff;
  _DAT_01f7228c = 0xffffffff;
  _DAT_01f72290 = 0xffffffff;
  _DAT_01f72298 = 0xffffffff;
  _DAT_01f7229c = 0xffffffff;
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F7580  cModelShaderGBuffer::~cModelShaderGBuffer  size=25  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f72a70 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F75A0  cModelShaderGBuffer::~cModelShaderGBuffer  size=25  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f72bb8 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F75C0  cModelShaderGBuffer::~cModelShaderGBuffer  size=25  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f72d00 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F75E0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f72e48 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f72e48 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F7610  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f72f90 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f72f90 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F7640  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f730d8 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f730d8 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F7670  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f73220 = &PTR__cModelShaderGBuffer_016f3cfc;
  FUN_00fc0f40();
  _DAT_01f73220 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F76A0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f73368 = &PTR__cModelShaderGBuffer_016f3cfc;
  FUN_00fc0f40();
  _DAT_01f73368 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F76D0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f734b0 = &PTR__cModelShaderGBuffer_016f3d04;
  FUN_00fc0f40();
  _DAT_01f734b0 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F7700  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f735f8 = &PTR__cModelShaderGBuffer_016f3d0c;
  FUN_00fc0f40();
  _DAT_01f735f8 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F7730  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f73740 = &PTR__cModelShaderGBuffer_016f3d14;
  FUN_00fc0f40();
  _DAT_01f73740 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F7760  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f73888 = &PTR__cModelShaderGBuffer_016f3d1c;
  FUN_00fc0f40();
  _DAT_01f73888 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F7790  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f739d0 = &PTR__cModelShaderGBuffer_016f3d24;
  FUN_00fc0f40();
  _DAT_01f739d0 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F77C0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f73b18 = &PTR__cModelShaderGBuffer_016f3d2c;
  FUN_00fc0f40();
  _DAT_01f73b18 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F77F0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f73c60 = &PTR__cModelShaderGBuffer_016f3d34;
  FUN_00fc0f40();
  _DAT_01f73c60 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F7820  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f73da8 = &PTR__cModelShaderGBuffer_016f3d3c;
  FUN_00fc0f40();
  _DAT_01f73da8 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F7850  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f73ef0 = &PTR__cModelShaderGBuffer_016f3d3c;
  FUN_00fc0f40();
  _DAT_01f73ef0 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F7880  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f74038 = &PTR__cModelShaderGBuffer_016f3d44;
  FUN_00fc0f40();
  _DAT_01f74038 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F78B0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f74180 = &PTR__cModelShaderGBuffer_016f3d44;
  FUN_00fc0f40();
  _DAT_01f74180 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F78E0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f742c8 = &PTR__cModelShaderGBuffer_016f3d44;
  FUN_00fc0f40();
  _DAT_01f742c8 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F7910  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f74410 = &PTR__cModelShaderGBuffer_016f3d4c;
  FUN_00fc0f40();
  _DAT_01f74410 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F7940  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f74558 = &PTR__cModelShaderGBuffer_016f3d4c;
  FUN_00fc0f40();
  _DAT_01f74558 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F7970  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f746a0 = &PTR__cModelShaderGBuffer_016f3d54;
  FUN_00fc0f40();
  _DAT_01f746a0 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F79A0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f747e8 = &PTR__cModelShaderGBuffer_016f3d5c;
  FUN_00fc0f40();
  _DAT_01f747e8 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F79D0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f74930 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f74930 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F7A00  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f74a78 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f74a78 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F7A30  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f74bc0 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f74bc0 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F7A60  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f74d08 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f74d08 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F7A90  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f74e50 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f74e50 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F7AC0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f74f98 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f74f98 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F7AF0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f750e0 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f750e0 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F7B20  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f75228 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f75228 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F7B50  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f75370 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f75370 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F7B80  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f754b8 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f754b8 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F7BB0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f75600 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f75600 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F7BE0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f75748 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f75748 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F7C10  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f75890 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f75890 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F7C40  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f759d8 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f759d8 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F7C70  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f75b20 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f75b20 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F7CA0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f75c68 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f75c68 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F7CD0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f75db0 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f75db0 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F7D00  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f75ef8 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f75ef8 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F7D30  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f76040 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f76040 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F7D60  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f76188 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f76188 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F7D90  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f762d0 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f762d0 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F7DC0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f76418 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f76418 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F7DF0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f76560 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f76560 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F7E20  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f766a8 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f766a8 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F7E50  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f767f0 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f767f0 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F7E80  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f76938 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f76938 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F7EB0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f76a80 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f76a80 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F7EE0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f76bc8 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f76bc8 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F7F10  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f76d10 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f76d10 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F7F40  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f76e58 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f76e58 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F7F70  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f76fa0 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f76fa0 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F7FA0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f770e8 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f770e8 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F7FD0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f77230 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f77230 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F8000  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f77378 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f77378 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F8030  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f774c0 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f774c0 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F8060  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f77608 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f77608 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F8090  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f77750 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f77750 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F80C0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f77898 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f77898 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F80F0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f779e0 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f779e0 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F8120  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f77b28 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f77b28 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F8150  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f77c70 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f77c70 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F8180  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f77db8 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f77db8 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F81B0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f77f00 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f77f00 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F81E0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f78048 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f78048 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F8210  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f78190 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f78190 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F8240  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f782d8 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f782d8 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F8270  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f78420 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f78420 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F82A0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f78568 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f78568 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F82D0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f786b0 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f786b0 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F8300  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f787f8 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f787f8 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F8330  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f78940 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f78940 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F8360  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f78a88 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f78a88 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F8390  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f78bd0 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f78bd0 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F83C0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f78d18 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f78d18 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F83F0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f78e60 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f78e60 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F8420  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f78fa8 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f78fa8 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F8450  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f790f0 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f790f0 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F8480  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f79238 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f79238 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F84B0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f79380 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f79380 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F84E0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f794c8 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f794c8 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F8510  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f79610 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f79610 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F8540  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f79758 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f79758 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F8570  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f798a0 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f798a0 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F85A0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f799e8 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f799e8 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F85D0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f79b30 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f79b30 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F8600  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f79c78 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f79c78 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F8630  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f79dc0 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f79dc0 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F8660  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f79f08 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f79f08 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F8690  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f7a050 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f7a050 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F86C0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f7a198 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f7a198 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F86F0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f7a2e0 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f7a2e0 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F8720  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f7a428 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f7a428 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F8750  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f7a570 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f7a570 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F8780  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f7a6b8 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f7a6b8 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F87B0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f7a800 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f7a800 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F87E0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f7a948 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f7a948 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F8810  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f7aa90 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f7aa90 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F8840  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f7abd8 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f7abd8 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F8870  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f7ad20 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f7ad20 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F88A0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f7ae68 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f7ae68 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F88D0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f7afb0 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f7afb0 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F8900  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f7b0f8 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f7b0f8 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F8930  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f7b240 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f7b240 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F8960  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f7b388 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f7b388 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F8990  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f7b4d0 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f7b4d0 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F89C0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f7b618 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f7b618 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F89F0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f7b760 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f7b760 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F8A20  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f7b8a8 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f7b8a8 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F8A50  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f7b9f0 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f7b9f0 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F8A80  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f7bb38 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f7bb38 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F8AB0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f7bc80 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f7bc80 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F8AE0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f7bdc8 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f7bdc8 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F8B10  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f7bf10 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f7bf10 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F8B40  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f7c058 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f7c058 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F8B70  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f7c1a0 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f7c1a0 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F8BA0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f7c2e8 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f7c2e8 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F8BD0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f7c430 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f7c430 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F8C00  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f7c578 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f7c578 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F8C30  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f7c6c0 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f7c6c0 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F8C60  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f7c808 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f7c808 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F8C90  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f7c950 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f7c950 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F8CC0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f7ca98 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f7ca98 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F8CF0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f7cbe0 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f7cbe0 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F8D20  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f7cd28 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f7cd28 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F8D50  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f7ce70 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f7ce70 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F8D80  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f7cfb8 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f7cfb8 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F8DB0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f7d100 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f7d100 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F8DE0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f7d248 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f7d248 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F8E10  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f7d390 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f7d390 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F8E40  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f7d4d8 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f7d4d8 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F8E70  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f7d620 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f7d620 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F8EA0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f7d768 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f7d768 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F8ED0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f7d8b0 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f7d8b0 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F8F00  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f7d9f8 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f7d9f8 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F8F30  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f7db40 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f7db40 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F8F60  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f7dc88 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f7dc88 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F8F90  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f7ddd0 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f7ddd0 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F8FC0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f7df18 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f7df18 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F8FF0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f7e060 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f7e060 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F9020  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f7e1a8 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f7e1a8 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F9050  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f7e2f0 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f7e2f0 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F9080  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f7e438 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f7e438 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F90B0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f7e580 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f7e580 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F90E0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f7e6c8 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f7e6c8 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F9110  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f7e810 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f7e810 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F9140  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f7e958 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f7e958 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F9170  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f7eaa0 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f7eaa0 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F91A0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f7ebe8 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f7ebe8 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F91D0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f7ed30 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f7ed30 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F9200  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f7ee78 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f7ee78 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F9230  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f7efc0 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f7efc0 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F9260  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f7f108 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f7f108 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F9290  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f7f250 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f7f250 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F92C0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f7f398 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f7f398 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F92F0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f7f4e0 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f7f4e0 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F9320  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f7f628 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f7f628 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F9350  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f7f770 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f7f770 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F9380  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f7f8b8 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f7f8b8 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F93B0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f7fa00 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f7fa00 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F93E0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f7fb48 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f7fb48 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F9410  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f7fc90 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f7fc90 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F9440  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f7fdd8 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f7fdd8 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F9470  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f7ff20 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f7ff20 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F94A0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f80068 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f80068 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F94D0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f801b0 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f801b0 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F9500  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f802f8 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f802f8 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F9530  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f80440 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f80440 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F9560  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f80588 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f80588 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F9590  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f806d0 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f806d0 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F95C0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f80818 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f80818 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F95F0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f80960 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f80960 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F9620  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f80aa8 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f80aa8 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F9650  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f80bf0 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f80bf0 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F9680  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f80d38 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f80d38 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F96B0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f80e80 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f80e80 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F96E0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f80fc8 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f80fc8 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F9710  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f81110 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f81110 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F9740  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f81258 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f81258 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F9770  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f813a0 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f813a0 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F97A0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f814e8 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f814e8 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F97D0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f81630 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f81630 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F9800  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f81778 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f81778 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F9830  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f818c0 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f818c0 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F9860  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f81a08 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f81a08 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F9890  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f81b50 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f81b50 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F98C0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f81c98 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f81c98 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F98F0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f81de0 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f81de0 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F9920  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f81f28 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f81f28 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F9950  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f82070 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f82070 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F9980  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f821b8 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f821b8 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F99B0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f82300 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f82300 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F99E0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f82448 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f82448 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F9A10  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f82590 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f82590 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F9A40  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f826d8 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f826d8 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F9A70  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f82820 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f82820 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F9AA0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f82968 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f82968 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F9AD0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f82ab0 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f82ab0 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F9B00  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f82bf8 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f82bf8 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F9B30  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f82d40 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f82d40 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F9B60  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f82e88 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f82e88 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F9B90  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f82fd0 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f82fd0 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F9BC0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f83118 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f83118 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F9BF0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f83260 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f83260 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F9C20  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f833a8 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f833a8 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F9C50  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f834f0 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f834f0 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F9C80  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f83638 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f83638 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F9CB0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f83780 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f83780 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F9CE0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f838c8 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f838c8 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F9D10  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f83a10 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f83a10 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F9D40  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f83b58 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f83b58 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F9D70  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f83ca0 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f83ca0 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F9DA0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f83de8 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f83de8 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F9DD0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f83f30 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f83f30 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F9E00  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f84078 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f84078 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F9E30  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f841c0 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f841c0 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F9E60  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f84308 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f84308 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F9E90  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f84450 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f84450 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F9EC0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f84598 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f84598 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F9EF0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f846e0 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f846e0 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F9F20  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f84828 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f84828 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F9F50  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f84970 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f84970 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F9F80  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f84ab8 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f84ab8 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F9FB0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f84c00 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f84c00 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F9FE0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f84d48 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f84d48 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015FA010  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f84e90 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f84e90 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015FA040  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f84fd8 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f84fd8 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015FA070  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f85120 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f85120 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015FA0A0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f85268 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f85268 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015FA0D0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f853b0 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f853b0 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015FA100  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f854f8 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f854f8 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015FA130  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f85640 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f85640 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015FA160  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f85788 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f85788 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015FA190  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f858d0 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f858d0 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015FA1C0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f85a18 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f85a18 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015FA1F0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f85b60 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f85b60 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015FA220  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f85ca8 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f85ca8 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015FA250  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f85df0 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f85df0 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015FA280  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f85f38 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f85f38 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015FA2B0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f86080 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f86080 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015FA2E0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f861c8 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f861c8 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015FA310  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f86310 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f86310 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015FA340  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f86458 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f86458 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015FA370  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f865a0 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f865a0 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015FA3A0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f866e8 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f866e8 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015FA3D0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f86830 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f86830 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015FA400  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f86978 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f86978 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015FA430  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f86ac0 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f86ac0 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015FA460  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f86c08 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f86c08 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015FA490  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f86d50 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f86d50 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015FA4C0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f86e98 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f86e98 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015FA4F0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f86fe0 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f86fe0 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015FA520  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f87128 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f87128 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015FA550  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f87270 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f87270 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015FA580  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f873b8 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f873b8 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015FA5B0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f87500 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f87500 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015FA5E0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f87648 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f87648 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015FA610  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f87790 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f87790 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015FA640  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f878d8 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f878d8 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015FA670  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f87a20 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f87a20 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015FA6A0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f87b68 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f87b68 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015FA6D0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f87cb0 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f87cb0 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015FA700  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f87df8 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f87df8 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015FA730  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f87f40 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f87f40 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015FA760  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f88088 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f88088 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015FA790  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f881d0 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f881d0 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015FA7C0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f88318 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f88318 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015FA7F0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f88460 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f88460 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015FA820  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f885a8 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f885a8 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015FA850  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f886f0 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f886f0 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015FA880  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f88838 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f88838 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015FA8B0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f88980 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f88980 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015FA8E0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f88ac8 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f88ac8 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015FA910  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f88c10 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f88c10 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015FA940  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f88d58 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f88d58 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015FA970  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f88ea0 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f88ea0 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015FA9A0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f88fe8 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f88fe8 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015FA9D0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f89130 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f89130 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015FAA00  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f89278 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f89278 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015FAA30  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f893c0 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f893c0 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015FAA60  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f89508 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f89508 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015FAA90  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f89650 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f89650 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015FAAC0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f89798 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f89798 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015FAAF0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f898e0 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f898e0 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015FAB20  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f89a28 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f89a28 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015FAB50  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f89b70 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f89b70 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015FAB80  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f89cb8 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f89cb8 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015FABB0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f89e00 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f89e00 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015FABE0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f89f48 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f89f48 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015FAC10  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f8a090 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f8a090 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015FAC40  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f8a1d8 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f8a1d8 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015FAC70  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f8a320 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f8a320 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015FACA0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f8a468 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f8a468 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015FACD0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f8a5b0 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f8a5b0 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015FAD00  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f8a6f8 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f8a6f8 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015FAD30  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f8a840 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f8a840 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015FAD60  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f8a988 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f8a988 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015FAD90  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f8aad0 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f8aad0 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015FADC0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f8ac18 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f8ac18 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015FADF0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f8ad60 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f8ad60 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015FAE20  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f8aea8 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f8aea8 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015FAE50  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f8aff0 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f8aff0 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015FAE80  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f8b138 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f8b138 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015FAEB0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f8b280 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f8b280 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015FAEE0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f8b3c8 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f8b3c8 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015FAF10  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f8b510 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f8b510 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015FAF40  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f8b658 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f8b658 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015FAF70  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f8b7a0 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f8b7a0 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015FAFA0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f8b8e8 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f8b8e8 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015FAFD0  cModelShaderGBuffer::~cModelShaderGBuffer  size=40  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderGBuffer::~cModelShaderGBuffer(void)

{
  _DAT_01f8ba30 = &PTR__cModelShaderGBuffer_016f3cf4;
  FUN_00fc0f40();
  _DAT_01f8ba30 = vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  return;
}


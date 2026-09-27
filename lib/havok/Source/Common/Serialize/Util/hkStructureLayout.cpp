// lib/havok/Source/Common/Serialize/Util/hkStructureLayout.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 010E6CF0..010E6CF0, 1 functions

#include "types.h"

// 010E6CF0  FUN_010e6cf0  size=321  [__FILE__]
uint FUN_010e6cf0(int param_1,byte *param_2,undefined4 param_3)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  undefined1 local_210 [524];
  
  iVar3 = 0;
  switch(param_3) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x18:
  case 0x1f:
  case 0x20:
    uVar2 = FUN_01016360();
    return uVar2;
  case 0x13:
    uVar2 = FUN_010e6cf0(param_1,param_2,*(undefined1 *)(param_1 + 0xd));
    return uVar2;
  case 0x14:
  case 0x15:
  case 0x1d:
  case 0x1e:
  case 0x21:
    uVar2 = (uint)*param_2;
    break;
  case 0x16:
    iVar3 = 4;
  case 0x1a:
    return iVar3 + 4 + (uint)*param_2;
  case 0x17:
    return 0;
  case 0x19:
    FUN_010162f0();
    uVar2 = FUN_01009750();
    break;
  case 0x1b:
    return (uint)*param_2 * 2 + 4;
  case 0x1c:
    return (uint)*param_2 * 2;
  case 0x22:
    return 4;
  default:
    hkErrStream::hkErrStream(local_210,0x200);
    FUN_01018d00("Unknown class member type in structureLayout::getMemberSize().");
    iVar3 = (**(code **)(*DAT_01f8fc58 + 0xc))
                      (3,0x50a18b58,local_210,
                       "D:\\project\\PRJ_012\\p1\\common\\mw\\hk2011_3_0_r1\\Source\\Common\\Serialize\\Util\\hkStructureLayout.cpp"
                       ,0xcd);
    if (iVar3 == 0) {
      hkBaseObject::hkBaseObject_38();
      return 0;
    }
    pcVar1 = (code *)swi(3);
    uVar2 = (*pcVar1)();
    return uVar2;
  }
  iVar3 = FUN_01016320();
  if (iVar3 != 0) {
    iVar3 = FUN_01016320();
    return iVar3 * uVar2;
  }
  return uVar2;
}


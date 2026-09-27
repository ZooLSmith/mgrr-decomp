// lib/havok/Source/Common/Serialize/Util/hkObjectInspector.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 010FAB00..010FAB00, 1 functions

#include "types.h"

// 010FAB00  FUN_010fab00  size=495  [__FILE__]
undefined4 FUN_010fab00(int param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined1 local_214 [524];
  int local_8;
  
  iVar4 = 0;
  local_8 = 0;
  iVar2 = FUN_01009570();
  if (0 < iVar2) {
    do {
      iVar2 = FUN_01009590(iVar4);
      piVar5 = (int *)((uint)*(ushort *)(iVar2 + 0x12) + param_1);
      uVar3 = param_3;
      switch(*(undefined1 *)(iVar2 + 0xc)) {
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
      case 0x13:
      case 0x15:
      case 0x18:
      case 0x1d:
      case 0x1e:
      case 0x1f:
      case 0x20:
      case 0x21:
        break;
      case 0x14:
        if (*(char *)(iVar2 + 0xd) == '\x19') {
          iVar2 = FUN_01016320();
          if (iVar2 != 0) {
            FUN_01016320();
          }
          uVar3 = FUN_010162f0();
          FUN_010faa30(piVar5,uVar3);
        }
        break;
      case 0x16:
      case 0x17:
      case 0x1a:
        iVar2 = FUN_01016510();
        piVar6 = (int *)*piVar5;
        if (piVar6 != (int *)0x0) {
          if (iVar2 == 0x14) {
            uVar3 = FUN_010162f0();
            FUN_010faa30(*piVar5,uVar3);
          }
          else {
            if (iVar2 == 0x19) {
              iVar2 = FUN_010162f0(param_3);
              piVar6 = (int *)*piVar5;
              iVar4 = piVar5[1];
              goto LAB_010fac02;
            }
            if (iVar2 == 0x1c) goto LAB_010fac63;
          }
        }
        break;
      case 0x19:
        iVar2 = FUN_010162f0();
        iVar4 = FUN_01016320();
        piVar6 = piVar5;
        if (iVar4 == 0) {
          iVar4 = 1;
        }
        else {
          iVar4 = FUN_01016320();
        }
LAB_010fac02:
        iVar2 = FUN_010fa9e0(piVar6,iVar4,iVar2,uVar3);
        if (iVar2 == 1) {
          return 1;
        }
        break;
      case 0x1b:
        piVar6 = (int *)piVar5[1];
        if ((piVar6 != (int *)0x0) && (iVar2 = *piVar5, iVar2 != 0)) {
          iVar4 = piVar5[2];
          goto LAB_010fac02;
        }
        break;
      case 0x1c:
        iVar2 = FUN_01016320();
        piVar6 = piVar5;
        if (iVar2 != 0) {
          FUN_01016320();
        }
LAB_010fac63:
        FUN_010faa90(piVar6);
        break;
      default:
        hkErrStream::hkErrStream(local_214,0x200);
        FUN_01018d00("Unknown class member found during write of data.");
        iVar2 = (**(code **)(*DAT_01f8fc58 + 0xc))
                          (3,0x641e3e03,local_214,
                           "D:\\project\\PRJ_012\\p1\\common\\mw\\hk2011_3_0_r1\\Source\\Common\\Serialize\\Util\\hkObjectInspector.cpp"
                           ,0xfc);
        if (iVar2 == 0) {
          hkBaseObject::hkBaseObject_38();
          return 1;
        }
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return uVar3;
      }
      iVar4 = local_8 + 1;
      local_8 = iVar4;
      iVar2 = FUN_01009570();
    } while (iVar4 < iVar2);
  }
  return 0;
}


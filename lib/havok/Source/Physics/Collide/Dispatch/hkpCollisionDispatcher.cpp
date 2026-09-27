// lib/havok/Source/Physics/Collide/Dispatch/hkpCollisionDispatcher.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 01163CD0..01163CD0, 1 functions

#include "types.h"

// 01163CD0  FUN_01163cd0  size=836  [__FILE__]
void __fastcall FUN_01163cd0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 local_3b8 [512];
  undefined1 local_1b8 [256];
  undefined4 local_b8;
  undefined4 local_b4;
  uint local_b0;
  int local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  local_14 = param_1;
  (**(code **)(*DAT_01f8fc58 + 0x1c))(0x5e4345e4,"hkpCollisionDispatcher::debugPrintTable");
  iVar2 = 0;
  if ((*(int *)(param_1 + 0x20e0) != 0) && (*(int *)(param_1 + 0x20e4) != 0)) {
    local_8 = 0;
    do {
      uVar8 = 0;
      uVar7 = 0;
      uVar6 = 0;
      uVar5 = 0;
      uVar1 = FUN_01179e80(local_8,0,0,0,0);
      FUN_01026900("\nEntries for (continuous)",uVar1,uVar5,uVar6,uVar7,uVar8);
      hkErrStream::hkErrStream(local_3b8,0x200);
      FUN_010192f0(&local_b8);
      (**(code **)(*DAT_01f8fc58 + 0xc))
                (0,0xffffffff,local_3b8,
                 "D:\\project\\PRJ_012\\p1\\common\\mw\\hk2011_3_0_r1\\Source\\Physics\\Collide\\Dispatch\\hkpCollisionDispatcher.cpp"
                 ,0x24e);
      hkBaseObject::hkBaseObject_38();
      iVar4 = 0;
      do {
        pcVar3 = (char *)(*(int *)(local_14 + 0x20e4) + iVar2);
        local_c = iVar2;
        if (pcVar3[2] < 'd') {
          uVar1 = FUN_01179e80(iVar4);
          local_10 = FUN_01179e80((int)*pcVar3);
          uVar5 = FUN_01179e80((int)pcVar3[1]);
          FUN_01015b50(local_1b8,0xff,"vs %30s <%i:%s-%s>",uVar1,(int)pcVar3[2],local_10,uVar5);
          hkErrStream::hkErrStream(local_3b8,0x200);
          FUN_01018d00(local_1b8);
          (**(code **)(*DAT_01f8fc58 + 0xc))
                    (0,0xffffffff,local_3b8,
                     "D:\\project\\PRJ_012\\p1\\common\\mw\\hk2011_3_0_r1\\Source\\Physics\\Collide\\Dispatch\\hkpCollisionDispatcher.cpp"
                     ,0x25d);
          hkBaseObject::hkBaseObject_38();
        }
        iVar4 = iVar4 + 1;
        iVar2 = local_c + 3;
      } while (iVar4 < 0x23);
      local_b4 = 0;
      local_c = iVar2;
      if (-1 < (int)local_b0) {
        (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_b8,local_b0 & 0x3fffffff);
      }
      local_8 = local_8 + 1;
    } while (iVar2 < 0xe5b);
    iVar2 = 0;
    local_8 = 0;
    do {
      uVar8 = 0;
      uVar7 = 0;
      uVar6 = 0;
      uVar5 = 0;
      uVar1 = FUN_01179e80(local_8,0,0,0,0);
      FUN_01026900("\nEntries for (discrete)",uVar1,uVar5,uVar6,uVar7,uVar8);
      hkErrStream::hkErrStream(local_3b8,0x200);
      FUN_010192f0(&local_b8);
      (**(code **)(*DAT_01f8fc58 + 0xc))
                (0,0xffffffff,local_3b8,
                 "D:\\project\\PRJ_012\\p1\\common\\mw\\hk2011_3_0_r1\\Source\\Physics\\Collide\\Dispatch\\hkpCollisionDispatcher.cpp"
                 ,0x265);
      hkBaseObject::hkBaseObject_38();
      iVar4 = 0;
      do {
        pcVar3 = (char *)(*(int *)(local_14 + 0x20e0) + iVar2);
        local_c = iVar2;
        if (pcVar3[2] < 'd') {
          uVar1 = FUN_01179e80(iVar4);
          local_10 = FUN_01179e80((int)*pcVar3);
          uVar5 = FUN_01179e80((int)pcVar3[1]);
          FUN_01015b50(local_1b8,0xff,"vs %30s <%i:%s-%s>",uVar1,(int)pcVar3[2],local_10,uVar5);
          hkErrStream::hkErrStream(local_3b8,0x200);
          FUN_01018d00(local_1b8);
          (**(code **)(*DAT_01f8fc58 + 0xc))
                    (0,0xffffffff,local_3b8,
                     "D:\\project\\PRJ_012\\p1\\common\\mw\\hk2011_3_0_r1\\Source\\Physics\\Collide\\Dispatch\\hkpCollisionDispatcher.cpp"
                     ,0x274);
          hkBaseObject::hkBaseObject_38();
        }
        iVar4 = iVar4 + 1;
        iVar2 = local_c + 3;
      } while (iVar4 < 0x23);
      local_b4 = 0;
      local_c = iVar2;
      if (-1 < (int)local_b0) {
        (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_b8,local_b0 & 0x3fffffff);
      }
      local_8 = local_8 + 1;
    } while (iVar2 < 0xe5b);
    (**(code **)(*DAT_01f8fc58 + 0x20))();
  }
  return;
}


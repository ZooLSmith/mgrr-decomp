// lib/havok/Source/Common/Base/Reflection/Util/hkVariantDataUtil.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 010281B0..010281B0, 1 functions

#include "types.h"

// 010281B0  FUN_010281b0  size=244  [__FILE__]
undefined8 FUN_010281b0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined *puVar5;
  undefined1 local_214 [527];
  undefined1 local_5;
  
  iVar2 = 0;
  iVar4 = 0;
  if (((param_1 != 0) && (param_2 != 0)) &&
     (pcVar1 = (char *)FUN_01009770(&local_5), iVar2 = param_2, iVar4 = param_1, *pcVar1 != '\0')) {
    iVar2 = FUN_01027b60(param_2,param_3,param_4);
    if (iVar2 == 0) {
      hkErrStream::hkErrStream(local_214,0x200);
      pcVar1 = ". The object is replaced with HK_NULL.";
      puVar5 = &DAT_01706aec;
      uVar3 = FUN_010093a0(&DAT_01706aec,param_2,". The object is replaced with HK_NULL.");
      FUN_01018d00("Could not find the most derived class for virtual object ");
      FUN_01018d00(uVar3);
      FUN_01018d00(puVar5);
      FUN_01018c60(param_2);
      FUN_01018d00(pcVar1);
      (**(code **)(*DAT_01f8fc58 + 0xc))
                (1,0x3476d70f,local_214,
                 "D:\\project\\PRJ_012\\p1\\common\\mw\\hk2011_3_0_r1\\Source\\Common\\Base\\Reflection\\Util\\hkVariantDataUtil.cpp"
                 ,0x28c);
      hkBaseObject::hkBaseObject_38();
      return 0;
    }
    return CONCAT44(iVar2,param_2);
  }
  return CONCAT44(iVar4,iVar2);
}


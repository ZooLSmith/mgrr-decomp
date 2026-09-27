// lib/havok/Source/Common/Serialize/Util/hkSerializeUtil.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 010DA400..010DA400, 1 functions

#include "mgrr.h"

// 010DA400  FUN_010da400  size=292  [__FILE__]
int FUN_010da400(undefined4 param_1,undefined4 param_2,int param_3,undefined8 *param_4,
                undefined4 param_5,byte param_6)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 local_310 [756];
  undefined8 local_1c;
  undefined8 local_14;
  undefined4 local_c;
  uint local_8;
  
  if (param_3 == 0) {
    return 1;
  }
  local_1c = *param_4;
  uVar1 = param_4[1];
  local_14 = uVar1;
  if ((param_6 & 2) != 0) {
    local_14._2_6_ = (undefined6)((ulonglong)uVar1 >> 0x10);
    local_14._0_2_ = CONCAT11(1,(char)uVar1);
  }
  if ((param_6 & 1) == 0) {
    hkBinaryPackfileWriter::hkBinaryPackfileWriter(&local_1c);
    hkXmlPackfileWriter::vf10(param_1,param_2,param_5);
    iVar2 = hkBinaryPackfileWriter::vf1C(param_3,&local_1c);
    hkBinaryPackfileWriter::~hkBinaryPackfileWriter();
    return iVar2;
  }
  local_c = 0;
  FUN_010065a0();
  iVar2 = (**(code **)(*DAT_0209b840 + 0xc))(param_1,param_2,param_3,&local_1c,param_5,&local_c);
  if (iVar2 == 1) {
    hkErrStream::hkErrStream(local_310,0x200);
    FUN_01018d00(local_8 & 0xfffffffe);
    (**(code **)(*DAT_01f8fc58 + 0xc))
              (1,0x1d25e54f,local_310,
               "D:\\project\\PRJ_012\\p1\\common\\mw\\hk2011_3_0_r1\\Source\\Common\\Serialize\\Util\\hkSerializeUtil.cpp"
               ,0x23a);
    hkBaseObject::hkBaseObject_38();
  }
  FUN_01006770();
  return iVar2;
}


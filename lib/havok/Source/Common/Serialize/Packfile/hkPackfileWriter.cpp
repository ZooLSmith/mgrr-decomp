// lib/havok/Source/Common/Serialize/Packfile/hkPackfileWriter.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 010E57F0..010E5DB0, 9 functions

#include "types.h"

// 010E57F0  FUN_010e57f0  size=429  [__FILE__]
undefined4 FUN_010e57f0(undefined4 *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined1 local_210 [524];
  
  uVar2 = FUN_010093a0("hkClass");
  iVar3 = FUN_01015b90(uVar2);
  if (iVar3 != 0) {
    uVar2 = FUN_010093a0("hkClassEnum");
    iVar3 = FUN_01015b90(uVar2);
    if (iVar3 == 0) {
      iVar3 = FUN_01025be0(*param_1,0);
      if (iVar3 != 0) {
        uVar2 = FUN_01010160(iVar3,0xffffffff);
        FUN_010100a0(&PTR_vftable_018e9b94,param_1,uVar2);
        FUN_010100a0(&PTR_vftable_018e9b94,param_1,iVar3);
        return 0;
      }
      FUN_01025470(*param_1,param_1);
    }
    return 1;
  }
  uVar2 = FUN_010093a0();
  iVar3 = FUN_01025be0(uVar2,0);
  if (iVar3 != 0) {
    iVar4 = hkCrc32StreamWriter::hkCrc32StreamWriter_3(0);
    iVar5 = hkCrc32StreamWriter::hkCrc32StreamWriter_3(0);
    if (iVar5 != iVar4) {
      hkErrStream::hkErrStream(local_210,0x200);
      pcVar6 = 
      ". Perhaps you have called setContents on data which has not been updated to the current version."
      ;
      uVar2 = FUN_010093a0(
                          ". Perhaps you have called setContents on data which has not been updated to the current version."
                          );
      FUN_01018d00("Conflicting metadata found for class ");
      FUN_01018d00(uVar2);
      FUN_01018d00(pcVar6);
      iVar4 = (**(code **)(*DAT_01f8fc58 + 0xc))
                        (3,0x2518721c,local_210,
                         "D:\\project\\PRJ_012\\p1\\common\\mw\\hk2011_3_0_r1\\Source\\Common\\Serialize\\Packfile\\hkPackfileWriter.cpp"
                         ,0xb8);
      if (iVar4 != 0) {
        pcVar1 = (code *)swi(3);
        uVar2 = (*pcVar1)();
        return uVar2;
      }
      hkBaseObject::hkBaseObject_38();
    }
    uVar2 = FUN_01010160(iVar3,0xffffffff);
    FUN_010100a0(&PTR_vftable_018e9b94,param_1,uVar2);
    FUN_010100a0(&PTR_vftable_018e9b94,param_1,iVar3);
    return 0;
  }
  uVar2 = FUN_010093a0();
  FUN_01025470(uVar2,param_1);
  return 1;
}

// 010E59A0  FUN_010e59a0  size=116  [between]
undefined4 __thiscall FUN_010e59a0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = param_2;
  iVar2 = FUN_01025900(param_2,&param_2);
  if (iVar2 == 0) {
    return param_2;
  }
  uVar3 = FUN_01016080(uVar1);
  uVar1 = *(undefined4 *)(param_1 + 0x68);
  FUN_01025470(uVar3,uVar1);
  if (*(uint *)(param_1 + 0x68) == (*(uint *)(param_1 + 0x6c) & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,(int *)(param_1 + 100),4);
  }
  *(undefined4 *)(*(int *)(param_1 + 100) + *(int *)(param_1 + 0x68) * 4) = uVar3;
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
  return uVar1;
}

// 010E5A20  FUN_010e5a20  size=125  [between]
void FUN_010e5a20(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_01010160(param_1,0xffffffff);
  if (iVar1 == -1) {
    uVar2 = FUN_010093a0();
    iVar1 = FUN_01025be0(uVar2,0xffffffff);
    if (iVar1 == -1) {
      while (iVar1 = FUN_010093b0(), iVar1 != 0) {
        uVar2 = FUN_010093a0();
        iVar1 = FUN_01025be0(uVar2,0xffffffff);
        if (iVar1 != -1) {
          return;
        }
      }
      FUN_010e59a0(param_3);
    }
  }
  return;
}

// 010E5AA0  hkXmlPackfileWriter::vf20  size=9  [between]
void hkXmlPackfileWriter::vf20(void)

{
  FUN_010e59a0();
  return;
}

// 010E5AB0  hkXmlPackfileWriter::vf24  size=41  [between]
void hkXmlPackfileWriter::vf24(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_010e59a0(param_2);
  FUN_010100a0(&PTR_vftable_018e9b94,param_1,uVar1);
  return;
}

// 010E5AE0  hkXmlPackfileWriter::vf28  size=45  [between]
void hkXmlPackfileWriter::vf28(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_010e59a0(param_2);
  uVar2 = FUN_010093a0();
  FUN_01025470(uVar2,uVar1);
  return;
}

// 010E5B10  FUN_010e5b10  size=180  [between]
void __thiscall
FUN_010e5b10(int param_1,undefined4 param_2,undefined *param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_010e5a20(param_4,param_5,param_6);
  if (*(uint *)(param_1 + 0xc) == (*(uint *)(param_1 + 0x10) & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,(int *)(param_1 + 8),0x18);
  }
  puVar1 = (undefined8 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0xc) * 0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = CONCAT44(param_3,param_2);
    puVar1[1] = CONCAT44(param_5,param_4);
    puVar1[2] = CONCAT44(0xffffffff,uVar2);
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + (uint)(param_3 == &DAT_01f9050c);
  *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + (uint)(param_3 != &DAT_01f9050c);
  return;
}

// 010E5BD0  hkBaseObject::hkBaseObject_239  size=474  [between]
void __fastcall hkBaseObject::hkBaseObject_239(undefined4 *param_1)

{
  undefined4 uVar1;
  LPVOID pvVar2;
  int iVar3;
  
  iVar3 = 0;
  *param_1 = hkPackfileWriter::vftable;
  if (0 < (int)param_1[0x1a]) {
    do {
      uVar1 = *(undefined4 *)(param_1[0x19] + iVar3 * 4);
      pvVar2 = TlsGetValue(DAT_01f8fc4c);
      FUN_01005d00(*(undefined4 *)((int)pvVar2 + 0x2c),uVar1);
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)param_1[0x1a]);
  }
  FUN_01010310(&PTR_vftable_018e9b94);
  FUN_0100fd10();
  param_1[0x2f] = 0;
  if (-1 < (int)param_1[0x30]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0x2e],param_1[0x30] * 8);
  }
  param_1[0x2e] = 0;
  param_1[0x30] = 0x80000000;
  FUN_01025870();
  FUN_01010310(&PTR_vftable_018e9b94);
  FUN_0100fd10();
  param_1[0x21] = 0;
  if ((param_1[0x22] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0x20],param_1[0x22] * 8);
  }
  param_1[0x20] = 0;
  param_1[0x22] = 0x80000000;
  FUN_01025870();
  param_1[0x1a] = 0;
  if ((param_1[0x1b] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0x19],param_1[0x1b] * 4);
  }
  param_1[0x19] = 0;
  param_1[0x1b] = 0x80000000;
  FUN_01010310(&PTR_vftable_018e9b94);
  FUN_0100fd10();
  FUN_01025870();
  FUN_01025870();
  FUN_01010310(&PTR_vftable_018e9b94);
  FUN_0100fd10();
  FUN_01010310(&PTR_vftable_018e9b94);
  FUN_0100fd10();
  FUN_01010310(&PTR_vftable_018e9b94);
  FUN_0100fd10();
  param_1[3] = 0;
  if (-1 < (int)param_1[4]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[2],(param_1[4] & 0x3fffffff) * 0x18);
  }
  param_1[4] = 0x80000000;
  param_1[2] = 0;
  *param_1 = vftable;
  return;
}

// 010E5DB0  FUN_010e5db0  size=770  [__FILE__]
void __thiscall
FUN_010e5db0(int param_1,int param_2,int param_3,undefined4 param_4,int *param_5,undefined4 param_6)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  undefined1 local_254 [512];
  undefined1 local_54 [12];
  int local_48;
  int local_44;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar4 = param_2;
  local_8 = param_1 + 0x14;
  iVar3 = FUN_01010120(param_2);
  iVar2 = param_3;
  if (*(int *)(param_1 + 0x1c) < iVar3) {
    local_c = FUN_010e5680(iVar4);
    iVar4 = param_2;
    if (local_c == 0) {
      hkErrStream::hkErrStream(local_254,0x200);
      pcVar8 = 
      "Saved file will not generate warnings (or asserts) on load but NULL pointers may cause runtime crashes."
      ;
      pcVar7 = "All saved pointers to this object will be set to NULL.\n";
      pcVar6 = ". Derived class will not be serialized unless added to class registry.\n";
      uVar5 = FUN_010093a0(". Derived class will not be serialized unless added to class registry.\n"
                           ,"All saved pointers to this object will be set to NULL.\n",
                           "Saved file will not generate warnings (or asserts) on load but NULL pointers may cause runtime crashes."
                          );
      FUN_01018d00("Found an un-registered class derived from ");
      FUN_01018d00(uVar5);
      FUN_01018d00(pcVar6);
      FUN_01018d00(pcVar7);
      FUN_01018d00(pcVar8);
      (**(code **)(*DAT_01f8fc58 + 0xc))
                (1,0xabbaabba,local_254,
                 "D:\\project\\PRJ_012\\p1\\common\\mw\\hk2011_3_0_r1\\Source\\Common\\Serialize\\Packfile\\hkPackfileWriter.cpp"
                 ,0x127);
      hkBaseObject::hkBaseObject_38();
      iVar4 = param_2;
      FUN_010100a0(&PTR_vftable_018e9b94,param_2,0xffffffff);
      if (*(uint *)(param_1 + 0x84) == (*(uint *)(param_1 + 0x88) & 0x3fffffff)) {
        FUN_0100a290(&PTR_vftable_018e9b94,(int *)(param_1 + 0x80),8);
      }
      piVar1 = (int *)(*(int *)(param_1 + 0x80) + *(int *)(param_1 + 0x84) * 8);
      *piVar1 = iVar4;
      piVar1[1] = iVar2;
      *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
    }
    else {
      if (param_5 != (int *)0x0) {
        (**(code **)(*param_5 + 0xc))(&param_2,&local_c);
      }
      if (param_2 == 0) {
        FUN_010100a0(&PTR_vftable_018e9b94,iVar4,0xffffffff);
        return;
      }
      iVar3 = FUN_010e57f0(param_2,local_c);
      iVar2 = local_8;
      if ((iVar3 != 0) &&
         ((iVar4 == param_2 || (iVar3 = FUN_01010120(param_2), *(int *)(iVar2 + 8) < iVar3)))) {
        FUN_010100a0(&PTR_vftable_018e9b94,iVar4,*(undefined4 *)(param_1 + 0xc));
        if (param_2 != iVar4) {
          FUN_010100a0(&PTR_vftable_018e9b94,param_2,*(undefined4 *)(param_1 + 0xc));
          FUN_010100a0(&PTR_vftable_018e9b94,param_2,iVar4);
        }
        FUN_010e5b10(param_2,local_c,iVar4,param_3,param_6);
        FUN_01054610();
        hkBaseObject::hkBaseObject_243(param_2,local_c,local_54,*(undefined1 *)(param_1 + 0xdd));
        local_10 = 0;
        if (0 < local_44) {
          param_3 = 0;
          iVar4 = local_48;
          do {
            local_14 = *(int *)(param_3 + 8 + iVar4);
            iVar2 = *(int *)(param_3 + 4 + iVar4);
            iVar3 = param_3;
            if ((local_14 != 0) && (iVar2 != 0)) {
              if ((*(int *)(param_3 + 0xc + iVar4) != 0) &&
                 (iVar4 = FUN_01010120(iVar2), *(int *)(param_1 + 0xa4) < iVar4)) {
                uVar5 = FUN_010e59a0(param_6);
                uVar5 = FUN_01010160(param_2,uVar5);
                FUN_010100a0(&PTR_vftable_018e9b94,iVar2,uVar5);
              }
              iVar3 = param_3;
              FUN_010e5db0(iVar2,local_14,param_4,param_5,param_6);
              iVar4 = local_48;
              if ((param_2 != iVar2) &&
                 (param_3 = FUN_01010160(iVar2,0xffffffff), iVar4 = local_48, param_3 != -1)) {
                FUN_010e6b70(param_2,&param_3);
                iVar4 = local_48;
              }
            }
            local_10 = local_10 + 1;
            param_3 = iVar3 + 0x10;
          } while (local_10 < local_44);
        }
        FUN_010e5db0(local_c,&DAT_01f9050c,param_4,param_5,PTR_s___types___01b1dc04);
        FUN_010f79a0();
        return;
      }
    }
  }
  return;
}


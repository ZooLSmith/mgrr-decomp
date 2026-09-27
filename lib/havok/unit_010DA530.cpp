// lib/havok/unit_010DA530.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 010DA530..010DDE10, 97 functions

#include "types.h"

// 010DA530  hkXmlTagfileWriter::hkXmlTagfileWriter  size=107  [run]
undefined4 __fastcall
hkXmlTagfileWriter::hkXmlTagfileWriter(int param_1,undefined4 param_2,uint *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 unaff_ESI;
  undefined2 local_8;
  undefined1 local_6;
  
  if (param_1 == 0) {
    return 1;
  }
  local_6 = 0;
  uVar1 = *param_3;
  local_8 = 0x100;
  if ((uVar1 & 8) == 0) {
    local_8 = 0x101;
  }
  if ((uVar1 & 0x10) == 0) {
    local_8 = CONCAT11(1,(undefined1)local_8);
  }
  if ((uVar1 & 1) != 0) {
    uVar2 = FUN_01104cf0(unaff_ESI,param_1,param_2,&local_8);
    return uVar2;
  }
  uVar2 = FUN_011087e0(unaff_ESI,param_1,param_2,&local_8);
  return uVar2;
}

// 010DA5A0  hkBaseObject::hkBaseObject_14  size=185  [run]
undefined4 __thiscall
hkBaseObject::hkBaseObject_14
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 *param_5,uint param_6)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined1 local_dc [196];
  undefined **local_18;
  undefined2 local_12;
  undefined4 *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  hkDataWorldNative::hkDataWorldNative
            (CONCAT31((int3)((uint)param_1 >> 8),(char)(param_6 >> 1)) & 0xffffff01);
  FUN_010e2ee0(param_2,param_3);
  local_8 = (**(code **)(*DAT_0209b610 + 0x10))();
  local_10 = param_5;
  puVar3 = &param_6;
  local_12 = 1;
  local_c = local_dc;
  local_18 = _anon_F3B081D0::ForwardingPackfileListerer::vftable;
  _anon_4671B7E4::DataWorldNative::vf1C(&param_5);
  uVar2 = hkXmlTagfileWriter::hkXmlTagfileWriter(puVar3);
  if (param_5 != (undefined4 *)0x0) {
    *(short *)((int)param_5 + 6) = *(short *)((int)param_5 + 6) + -1;
    piVar1 = param_5 + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*param_5)(1);
    }
  }
  local_18 = vftable;
  hkBaseObject_207();
  return uVar2;
}

// 010DA660  FUN_010da660  size=27  [run]
void FUN_010da660(void)

{
  hkXmlTagfileWriter::hkXmlTagfileWriter(&stack0x0000000c);
  return;
}

// 010DA680  FUN_010da680  size=25  [run]
void FUN_010da680(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_010da660(param_1,param_2,param_3);
  return;
}

// 010DA6A0  FUN_010da6a0  size=31  [run]
void FUN_010da6a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  hkBaseObject::hkBaseObject_14(param_1,param_2,param_3,0,param_4);
  return;
}

// 010DA6C0  FUN_010da6c0  size=772  [run]
undefined4
FUN_010da6c0(int *param_1,int *param_2,undefined4 *param_3,undefined4 param_4,byte param_5)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 local_28;
  int local_24;
  int local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined1 local_5;
  
  iVar7 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0x80000000;
  if (*param_2 == 2) {
    iVar1 = FUN_01015eb0(param_2 + 3,&DAT_01b1dc08,4);
    if (iVar1 != 0) {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = 3;
        FUN_01006780("Wrong platform for packfile");
      }
joined_r0x010da937:
      if (-1 < (int)local_1c) {
        local_20 = 0;
        (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_24,local_1c & 0x3fffffff);
      }
      return 0;
    }
    uVar2 = FUN_010e0a10();
    iVar1 = FUN_0105c870(uVar2);
    if (iVar1 != 0) {
      iVar1 = local_20 + 0x40;
      if ((int)(local_1c & 0x3fffffff) < iVar1) {
        iVar5 = (local_1c & 0x3fffffff) * 2;
        if (iVar1 < iVar5) {
          iVar1 = iVar5;
        }
        FUN_0100a210(&PTR_vftable_018e9b8c,&local_24,iVar1,1);
      }
      local_20 = local_20 + 0x40;
      (**(code **)(*param_1 + 0x10))(local_24,0x40);
      iVar1 = *(int *)(local_24 + 0x14);
      iVar8 = iVar1 * 0x30;
      iVar5 = local_20 + iVar8;
      local_18 = 0;
      if ((int)(local_1c & 0x3fffffff) < iVar5) {
        iVar6 = (local_1c & 0x3fffffff) * 2;
        if (iVar5 < iVar6) {
          iVar5 = iVar6;
        }
        FUN_0100a210(&PTR_vftable_018e9b8c,&local_24,iVar5,1);
      }
      local_20 = local_20 + iVar8;
      local_10 = local_24 + 0x40;
      local_c = 0;
      (**(code **)(*param_1 + 0x10))(local_10,iVar8);
      iVar5 = 0;
      if (1 < iVar1) {
        piVar3 = (int *)(local_10 + 0x5c);
        iVar6 = (iVar1 - 2U >> 1) + 1;
        iVar5 = iVar6 * 2;
        do {
          iVar7 = iVar7 + piVar3[-0xc];
          local_c = local_c + *piVar3;
          piVar3 = piVar3 + 0x18;
          iVar6 = iVar6 + -1;
          local_14 = iVar5;
        } while (iVar6 != 0);
      }
      iVar6 = local_18;
      if (iVar5 < iVar1) {
        iVar6 = *(int *)(local_10 + 0x2c + iVar5 * 0x30);
      }
      iVar6 = iVar6 + iVar7 + local_c;
      if ((int)(local_1c & 0x3fffffff) < local_20 + iVar6) {
        FUN_0100a210(&PTR_vftable_018e9b8c,&local_24,local_20 + iVar6,1);
      }
      iVar7 = local_20 + iVar6;
      if ((int)(local_1c & 0x3fffffff) < iVar7) {
        iVar1 = (local_1c & 0x3fffffff) * 2;
        if (iVar7 < iVar1) {
          iVar7 = iVar1;
        }
        FUN_0100a210(&PTR_vftable_018e9b8c,&local_24,iVar7,1);
      }
      local_20 = local_20 + iVar6;
      (**(code **)(*param_1 + 0x10))(local_24 + 0x40 + iVar8,iVar6);
      iVar7 = local_24;
      uVar2 = FUN_010da3c0();
      pcVar4 = (char *)FUN_010da310(&local_5,iVar7,uVar2);
      if (*pcVar4 != '\0') {
        uVar2 = LOCALNAMESPACE::hkNativeResource::hkNativeResource_2(local_24,local_20,param_4);
        local_20 = 0;
        if ((int)local_1c < 0) {
          return uVar2;
        }
        (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_24,local_1c & 0x3fffffff);
        return uVar2;
      }
      if ((param_5 & 1) != 0) {
        if (param_3 != (undefined4 *)0x0) {
          *param_3 = 4;
          FUN_01006780("Class signatures not up to date.");
        }
        goto joined_r0x010da937;
      }
    }
    if (local_20 != 0) {
      hkIstream::hkIstream_3(local_24,local_20);
      uVar2 = (**(code **)(*DAT_0209b840 + 0x14))(local_28,param_2,param_3);
      hkBaseObject::hkBaseObject_216();
      goto LAB_010da998;
    }
  }
  uVar2 = (**(code **)(*DAT_0209b840 + 0x14))(param_1,param_2,param_3);
LAB_010da998:
  local_20 = 0;
  if (-1 < (int)local_1c) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_24,local_1c & 0x3fffffff);
  }
  return uVar2;
}

// 010DA9D0  hkTypeInfoRegistry::hkTypeInfoRegistry  size=345  [run]
undefined4
hkTypeInfoRegistry::hkTypeInfoRegistry
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined8 param_5,undefined4 param_6)

{
  uint *in_EAX;
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  uint extraout_ECX;
  undefined **local_28;
  undefined2 local_22;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)((uint)local_8 & 0xffffff00);
  local_22 = 1;
  local_28 = vftable;
  FUN_01025830(local_8);
  local_10 = 0;
  local_c = 1;
  vf18(param_4);
  piVar1 = (int *)FUN_010da6c0(param_1,param_2,param_3,&local_28,param_5,param_6);
  if (piVar1 != (int *)0x0) {
    hkDataWorldNative::hkDataWorldNative(extraout_ECX & 0xffffff00);
    FUN_010e2ce0(in_EAX);
    local_8 = (undefined4 *)*in_EAX;
    uVar2 = (**(code **)(*piVar1 + 0x1c))();
    iVar3 = (*(code *)local_8[4])(uVar2);
    if (iVar3 != 0) {
      uVar2 = (**(code **)(*piVar1 + 0x18))(0,param_4,iVar3);
      local_8 = (undefined4 *)FUN_010e2d40(uVar2);
      if (local_8 != (undefined4 *)0x0) {
        *(short *)((int)local_8 + 6) = *(short *)((int)local_8 + 6) + 1;
        local_8[2] = local_8[2] + 1;
      }
      uVar2 = FUN_010e7f20(&local_8);
      if (local_8 != (undefined4 *)0x0) {
        *(short *)((int)local_8 + 6) = *(short *)((int)local_8 + 6) + -1;
        piVar1 = local_8 + 2;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*local_8)(1);
        }
      }
      hkBaseObject::hkBaseObject_207();
      FUN_010060a0();
      FUN_01025870();
      return uVar2;
    }
    hkBaseObject::hkBaseObject_207();
    FUN_010060a0();
  }
  FUN_01025870();
  return 0;
}

// 010DAB30  FUN_010dab30  size=645  [run]
void FUN_010dab30(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 local_158;
  uint local_150;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined1 local_a4;
  undefined4 local_94;
  int local_8c;
  int local_88;
  undefined4 local_80;
  undefined1 local_7c [24];
  undefined1 local_64 [88];
  undefined4 *local_c;
  undefined4 *local_8;
  
  puVar1 = param_2;
  local_8 = param_2 + 2;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_01006780(0);
  local_c = puVar1 + 3;
  FUN_01019a00(local_c,0,4);
  _memset(&local_8c,0,0x80);
  (**(code **)(*param_1 + 0x1c))(0x80);
  iVar2 = (**(code **)(*param_1 + 0x10))(&local_8c,0x80);
  (**(code **)(*param_1 + 0x20))();
  FUN_01015ea0(&local_cc,0xffffffff,0x40);
  local_cc = 0x57e0e057;
  local_c8 = 0x10c0c010;
  local_a4 = 0;
  local_94 = 0;
  if ((7 < iVar2) &&
     (pcVar3 = (char *)FUN_010da150((int)&param_2 + 3,local_8c,local_88), *pcVar3 != '\0')) {
    *puVar1 = 4;
    return;
  }
  if (((0x3f < iVar2) && (local_8c == 0x57e0e057)) && (local_88 == 0x10c0c010)) {
    *puVar1 = 2;
    FUN_01006780(local_64);
    puVar1[1] = local_80;
    FUN_010199f0(local_c,local_7c,4);
    return;
  }
  iVar2 = FUN_01015d50(&local_8c,"<hkpackfile ");
  if ((iVar2 == 0) && (iVar2 = FUN_01015d50(&local_8c,"<hkpackfile>"), iVar2 == 0)) {
    iVar2 = FUN_01015d50(&local_8c,"<hktagfile ");
    if ((iVar2 == 0) && (iVar2 = FUN_01015d50(&local_8c,"<hktagfile>"), iVar2 == 0)) {
      return;
    }
    *puVar1 = 5;
    return;
  }
  *puVar1 = 3;
  uVar4 = FUN_01015d50(&local_8c,"<hkpackfile");
  FUN_01026840(uVar4);
  FUN_010065a0();
  iVar2 = FUN_010da2b0(&param_2);
  if (iVar2 == 0) {
LAB_010dad68:
    pcVar3 = "Havok-3.0.0";
  }
  else {
    iVar2 = FUN_01015cf0((uint)param_2 & 0xfffffffe,0);
    puVar1[1] = iVar2;
    if (iVar2 == 1) goto LAB_010dad68;
    if ((iVar2 < 2) || (9 < iVar2)) {
      pcVar3 = "error";
    }
    else {
      iVar2 = FUN_010da2b0(local_8);
      if (iVar2 != 0) goto LAB_010dad75;
      pcVar3 = "Havok-3.1.0";
    }
  }
  FUN_01006780(pcVar3);
LAB_010dad75:
  FUN_01006770();
  if (-1 < (int)local_150) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_158,local_150 & 0x3fffffff);
  }
  return;
}

// 010DADC0  FUN_010dadc0  size=404  [run]
undefined4 FUN_010dadc0(undefined4 *param_1,undefined4 param_2,int *param_3)

{
  int *in_EAX;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 *local_9c;
  undefined4 local_98;
  uint local_94;
  undefined1 local_90 [128];
  int local_10;
  int local_c;
  int local_8;
  
  FUN_010dd260();
  iVar4 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = -0x80000000;
  (**(code **)(*in_EAX + 0x20))(&local_10);
  if (0 < local_c) {
    do {
      uVar1 = (**(code **)(**(int **)(local_10 + iVar4 * 4) + 8))();
      iVar2 = (**(code **)(**(int **)(local_10 + iVar4 * 4) + 0xc))();
      iVar3 = (**(code **)(*param_3 + 0x10))(uVar1);
      if ((iVar3 == 0) || (iVar3 = FUN_010097a0(), iVar3 != iVar2)) {
        uVar5 = FUN_010dc960(uVar1,iVar2);
        iVar3 = FUN_010105b0(uVar5,0xffffffff,0);
        if (iVar3 == -1) {
          local_9c = local_90;
          local_94 = 0x80000080;
          local_98 = 1;
          local_90[0] = 0;
          FUN_010262e0(&local_9c,"Unable to version data of class %s, version 0x%p\n%s",uVar1,iVar2,
                       "Patching to latest version failed. Have you registered the necessary patches? e.g. hkFeature_serializeRegisterKeycodePatches() See the hkError output for more details"
                      );
          *param_1 = 4;
          FUN_01006780(local_9c);
          local_98 = 0;
          if (-1 < (int)local_94) {
            (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_9c,local_94 & 0x3fffffff);
          }
          local_9c = (undefined1 *)0x0;
          local_94 = 0x80000000;
          local_c = 0;
          if (-1 < local_8) {
            (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_10,local_8 * 4);
          }
          return 0;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < local_c);
  }
  local_c = 0;
  if (-1 < local_8) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_10,local_8 * 4);
  }
  return 1;
}

// 010DAF60  FUN_010daf60  size=184  [run]
undefined4 FUN_010daf60(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 unaff_ESI;
  undefined4 *unaff_EDI;
  undefined1 local_1c [8];
  int local_14;
  undefined4 *local_8;
  
  hkBinaryTagfileReader::hkBinaryTagfileReader();
  hkBinaryTagfileReader::vf0C(&local_8,param_1,unaff_ESI);
  if (local_8 != (undefined4 *)0x0) {
    *(short *)((int)local_8 + 6) = *(short *)((int)local_8 + 6) + -1;
    piVar1 = local_8 + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*local_8)(1);
    }
  }
  if ((unaff_EDI != (undefined4 *)0x0) && (iVar2 = FUN_010dadc0(), iVar2 == 0)) {
    return 1;
  }
  hkDefaultClassWrapper::hkDefaultClassWrapper(param_2);
  iVar2 = FUN_010de930(unaff_ESI,local_1c);
  if (iVar2 != 0) {
    if (unaff_EDI != (undefined4 *)0x0) {
      *unaff_EDI = 4;
      FUN_01006780(
                  "Patching to latest version failed. Have you registered the necessary patches? e.g. hkFeature_serializeRegisterKeycodePatches() See the hkError output for more details"
                  );
    }
    if (local_14 != 0) {
      FUN_010060a0();
    }
    return 1;
  }
  if (local_14 != 0) {
    FUN_010060a0();
  }
  return 0;
}

// 010DB020  hkXmlTagfileReader::hkXmlTagfileReader  size=188  [run]
undefined4 __thiscall hkXmlTagfileReader::hkXmlTagfileReader(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 unaff_ESI;
  undefined4 *unaff_EDI;
  undefined1 local_1c [8];
  int local_14;
  undefined **local_10;
  undefined2 local_a;
  undefined4 *local_8;
  
  local_a = 1;
  local_10 = vftable;
  vf0C(&local_8,param_1,unaff_ESI);
  if (local_8 != (undefined4 *)0x0) {
    *(short *)((int)local_8 + 6) = *(short *)((int)local_8 + 6) + -1;
    piVar1 = local_8 + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*local_8)(1);
    }
  }
  if ((unaff_EDI != (undefined4 *)0x0) && (iVar2 = FUN_010dadc0(), iVar2 == 0)) {
    return 1;
  }
  hkDefaultClassWrapper::hkDefaultClassWrapper(param_2);
  iVar2 = FUN_010de930(unaff_ESI,local_1c);
  if (iVar2 != 0) {
    if (unaff_EDI != (undefined4 *)0x0) {
      *unaff_EDI = 4;
      FUN_01006780(
                  "Patching to latest version failed. Have you registered the necessary patches? e.g. hkFeature_serializeRegisterKeycodePatches() See the hkError output for more details"
                  );
    }
    if (local_14 != 0) {
      FUN_010060a0();
    }
    return 1;
  }
  if (local_14 != 0) {
    FUN_010060a0();
  }
  return 0;
}

// 010DB0E0  FUN_010db0e0  size=800  [run]
undefined4 FUN_010db0e0(int *param_1,undefined4 *param_2,undefined8 param_3,undefined4 param_4)

{
  int *piVar1;
  uint uVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  LPVOID pvVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *local_24;
  undefined4 local_20 [4];
  undefined4 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  piVar1 = param_1;
  if (param_1 == (int *)0x0) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = 1;
      FUN_01006780("Stream pointer is null");
      return 0;
    }
  }
  else {
    pcVar3 = (char *)(**(code **)(*param_1 + 0xc))((int)&param_1 + 3);
    if (*pcVar3 != '\0') {
      uVar4 = FUN_010da3c0();
      local_c = uVar4;
      uVar5 = FUN_010da3e0();
      FUN_010065a0();
      FUN_010dab30();
      switch(local_20[0]) {
      case 2:
      case 3:
        uVar4 = FUN_010da6c0(piVar1,local_20,param_2,uVar5,CONCAT71(param_3._1_7_,(byte)param_3),
                             param_4);
        FUN_01006770();
        return uVar4;
      case 4:
        pvVar6 = TlsGetValue(DAT_01f8fc4c);
        iVar7 = *(int *)((int)pvVar6 + 0xc);
        uVar2 = iVar7 + 0x4000;
        if ((*(int *)((int)pvVar6 + 8) < 0x4000) || (*(uint *)((int)pvVar6 + 0x10) < uVar2)) {
          param_1 = (int *)FUN_0100b780(0x4000);
        }
        else {
          *(uint *)((int)pvVar6 + 0xc) = uVar2;
          param_1 = (int *)iVar7;
        }
        pvVar6 = TlsGetValue(DAT_01f8fc4c);
        local_8 = 0;
        hkDataWorldDict::hkDataWorldDict(*(undefined4 *)((int)pvVar6 + 0x2c));
        iVar7 = FUN_010daf60();
        if ((iVar7 == 0) || (uVar4 = local_8, ((byte)param_3 & 2) != 0)) {
          uVar8 = 1;
          uVar4 = local_c;
          uVar5 = hkDataWorldDict::vf1C(&local_24);
          uVar4 = FUN_010e7f60(uVar5,uVar4,uVar8);
          if (local_24 != (undefined4 *)0x0) {
            *(short *)((int)local_24 + 6) = *(short *)((int)local_24 + 6) + -1;
            piVar1 = local_24 + 2;
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              (**(code **)*local_24)(1);
            }
          }
        }
        hkBaseObject::hkBaseObject_200();
        break;
      case 5:
        pvVar6 = TlsGetValue(DAT_01f8fc4c);
        iVar7 = *(int *)((int)pvVar6 + 0xc);
        uVar2 = iVar7 + 0x4000;
        if ((*(int *)((int)pvVar6 + 8) < 0x4000) || (*(uint *)((int)pvVar6 + 0x10) < uVar2)) {
          param_1 = (int *)FUN_0100b780(0x4000);
        }
        else {
          *(uint *)((int)pvVar6 + 0xc) = uVar2;
          param_1 = (int *)iVar7;
        }
        pvVar6 = TlsGetValue(DAT_01f8fc4c);
        local_8 = 0;
        hkDataWorldDict::hkDataWorldDict(*(undefined4 *)((int)pvVar6 + 0x2c));
        iVar7 = hkXmlTagfileReader::hkXmlTagfileReader(uVar4);
        if ((iVar7 == 0) || (uVar4 = local_8, ((byte)param_3 & 2) != 0)) {
          uVar8 = 1;
          uVar4 = local_c;
          uVar5 = hkDataWorldDict::vf1C(&local_10);
          uVar4 = FUN_010e7f60(uVar5,uVar4,uVar8);
          if (local_10 != (undefined4 *)0x0) {
            *(short *)((int)local_10 + 6) = *(short *)((int)local_10 + 6) + -1;
            piVar1 = local_10 + 2;
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              (**(code **)*local_10)(1);
              hkBaseObject::hkBaseObject_200();
              break;
            }
          }
        }
        hkBaseObject::hkBaseObject_200();
        break;
      default:
        if (param_2 != (undefined4 *)0x0) {
          *param_2 = 2;
          FUN_01006780("Unable to detect format from stream");
        }
        FUN_01006770();
        return 0;
      }
      pvVar6 = TlsGetValue(DAT_01f8fc4c);
      if (((0x3fff < *(int *)((int)pvVar6 + 8)) &&
          ((int)param_1 + 0x4000 == *(int *)((int)pvVar6 + 0xc))) &&
         ((int *)*(int *)((int)pvVar6 + 0x14) != param_1)) {
        *(int **)((int)pvVar6 + 0xc) = param_1;
        FUN_01006770();
        return uVar4;
      }
      FUN_0100b9b0();
      FUN_01006770();
      return uVar4;
    }
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = 1;
      FUN_01006780("Stream is not ok");
      return 0;
    }
  }
  return 0;
}

// 010DB410  FUN_010db410  size=72  [run]
undefined4 FUN_010db410(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = hkIstream::hkIstream(param_1);
  uVar2 = FUN_010db0e0(*(undefined4 *)(iVar1 + 8),param_2,param_3,param_4);
  hkBaseObject::hkBaseObject_216();
  return uVar2;
}

// 010DB460  FUN_010db460  size=223  [run]
undefined4
FUN_010db460(int *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
            undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_28;
  undefined4 local_18;
  
  FUN_01015ea0(&local_50,0xffffffff,0x40);
  piVar1 = param_1;
  local_50 = 0x57e0e057;
  local_4c = 0x10c0c010;
  local_28 = 0;
  local_18 = 0;
  if ((*param_1 == 0x57e0e057) && (param_1[1] == 0x10c0c010)) {
    iVar2 = FUN_01015eb0(param_1 + 4,&DAT_01b1dc08,4);
    if (iVar2 == 0) {
      FUN_010e0a10();
      iVar2 = FUN_01015b90();
      if (iVar2 == 0) {
        uVar3 = FUN_010da3c0();
        pcVar4 = (char *)FUN_010da310((int)&param_1 + 3,piVar1,uVar3);
        if (*pcVar4 != '\0') {
          uVar3 = LOCALNAMESPACE::hkNativeResource::hkNativeResource_2(piVar1,param_2,0);
          return uVar3;
        }
      }
    }
  }
  iVar2 = hkIstream::hkIstream_3();
  uVar3 = FUN_010db0e0(*(undefined4 *)(iVar2 + 8),param_3,param_4,param_5);
  hkBaseObject::hkBaseObject_216();
  return uVar3;
}

// 010DB540  FUN_010db540  size=647  [run]
undefined4 FUN_010db540(int *param_1,undefined4 *param_2,ulonglong param_3,undefined4 param_4)

{
  int *piVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 *local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  undefined4 local_18 [4];
  undefined1 local_5;
  
  if (param_1 == (int *)0x0) {
    if (param_2 == (undefined4 *)0x0) {
      return 0;
    }
    *param_2 = 1;
    FUN_01006780("Stream pointer is null");
    return 0;
  }
  pcVar2 = (char *)(**(code **)(*param_1 + 0xc))(&local_5);
  if (*pcVar2 == '\0') {
    if (param_2 == (undefined4 *)0x0) {
      return 0;
    }
    *param_2 = 1;
    FUN_01006780("Stream is not ok");
    return 0;
  }
  uVar3 = FUN_010da3c0();
  uVar4 = FUN_010da3e0();
  local_1c = uVar4;
  FUN_010065a0();
  FUN_010dab30();
  switch(local_18[0]) {
  case 2:
    pcVar2 = (char *)FUN_010dbb60();
    if ((*pcVar2 != '\0') && (iVar5 = FUN_0105c870("hk_2011.3.0-r1"), iVar5 != 0)) {
      uVar3 = hkTypeInfoRegistry::hkTypeInfoRegistry(param_1,local_18,param_2,uVar4,param_3,param_4)
      ;
      FUN_01006770();
      return uVar3;
    }
    if ((param_3 & 1) == 0) goto switchD_010db5ee_caseD_3;
    if (param_2 == (undefined4 *)0x0) goto LAB_010db7b6;
    *param_2 = 4;
    pcVar2 = "Packfile required versioning but versioning not supported in this context.";
    break;
  case 3:
switchD_010db5ee_caseD_3:
    uVar3 = (**(code **)(*DAT_0209b840 + 0x18))(param_1,local_18,param_2);
    FUN_01006770();
    return uVar3;
  case 4:
    hkDataWorldDict::hkDataWorldDict_2();
    iVar5 = FUN_010daf60();
    if (iVar5 != 0) {
LAB_010db719:
      hkBaseObject::hkBaseObject_200();
      FUN_01006770();
      return 0;
    }
    uVar4 = 1;
    uVar6 = CONCAT44(local_1c,uVar3);
    uVar3 = hkDataWorldDict::vf1C(&local_20);
    uVar3 = FUN_010e7f20(uVar3,uVar6,uVar4);
    if (local_20 != (undefined4 *)0x0) {
      *(short *)((int)local_20 + 6) = *(short *)((int)local_20 + 6) + -1;
      piVar1 = local_20 + 2;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*local_20)(1);
      }
    }
    goto LAB_010db6fd;
  case 5:
    hkDataWorldDict::hkDataWorldDict_2();
    iVar5 = hkXmlTagfileReader::hkXmlTagfileReader(uVar3);
    if (iVar5 != 0) goto LAB_010db719;
    uVar4 = 1;
    uVar6 = CONCAT44(local_1c,uVar3);
    uVar3 = hkDataWorldDict::vf1C(&local_24);
    uVar3 = FUN_010e7f20(uVar3,uVar6,uVar4);
    if (local_24 != (undefined4 *)0x0) {
      *(short *)((int)local_24 + 6) = *(short *)((int)local_24 + 6) + -1;
      piVar1 = local_24 + 2;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*local_24)(1);
      }
    }
LAB_010db6fd:
    hkBaseObject::hkBaseObject_200();
    FUN_01006770();
    return uVar3;
  default:
    if (param_2 == (undefined4 *)0x0) goto LAB_010db7b6;
    *param_2 = 2;
    pcVar2 = "Unable to detect format from stream";
  }
  FUN_01006780(pcVar2);
LAB_010db7b6:
  FUN_01006770();
  return 0;
}

// 010DB7E0  FUN_010db7e0  size=72  [run]
undefined4 FUN_010db7e0(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = hkIstream::hkIstream(param_1);
  uVar2 = FUN_010db540(*(undefined4 *)(iVar1 + 8),param_2,param_3,param_4);
  hkBaseObject::hkBaseObject_216();
  return uVar2;
}

// 010DB830  FUN_010db830  size=76  [run]
undefined4
FUN_010db830(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
            undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = hkIstream::hkIstream_3();
  uVar2 = FUN_010db540(*(undefined4 *)(iVar1 + 8),param_3,param_4,param_5);
  hkBaseObject::hkBaseObject_216();
  return uVar2;
}

// 010DB880  FUN_010db880  size=186  [run]
undefined4 FUN_010db880(int *param_1)

{
  int *piVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int local_14 [3];
  undefined1 local_8 [4];
  
  piVar1 = param_1;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  pcVar2 = (char *)(**(code **)(*param_1 + 0xc))((int)&param_1 + 3);
  if (*pcVar2 == '\0') {
    return 0;
  }
  piVar3 = (int *)FUN_01110660(&param_1,piVar1);
  if (1 < *piVar3) {
    return 1;
  }
  FUN_010065a0();
  FUN_010dab30(piVar1,local_14);
  if ((local_14[0] == 2) && (iVar4 = FUN_01015eb0(local_8,&DAT_01b1dc08,4), iVar4 == 0)) {
    uVar5 = FUN_010e0a10();
    iVar4 = FUN_0105c870(uVar5);
    if (iVar4 != 0) goto LAB_010db8fe;
  }
  else if (local_14[0] != 3) goto LAB_010db92b;
  iVar4 = (**(code **)(*DAT_0209b840 + 0x10))(local_14);
  if (iVar4 != 0) {
LAB_010db8fe:
    FUN_01006770();
    return 1;
  }
LAB_010db92b:
  FUN_01006770();
  return 0;
}

// 010DB940  FUN_010db940  size=54  [run]
undefined4 * FUN_010db940(undefined4 *param_1,undefined4 param_2)

{
  undefined4 local_14 [4];
  
  FUN_010065a0();
  FUN_010dab30(param_2,local_14);
  *param_1 = local_14[0];
  FUN_01006770();
  return param_1;
}

// 010DB980  FUN_010db980  size=12  [run]
uint __thiscall FUN_010db980(uint *param_1,uint param_2)

{
  return *param_1 & param_2;
}

// 010DB990  FUN_010db990  size=12  [run]
uint __thiscall FUN_010db990(uint *param_1,uint param_2)

{
  return *param_1 & param_2;
}

// 010DB9A0  FUN_010db9a0  size=12  [run]
uint __thiscall FUN_010db9a0(uint *param_1,uint param_2)

{
  return *param_1 & param_2;
}

// 010DB9B0  FUN_010db9b0  size=21  [run]
bool __thiscall FUN_010db9b0(uint *param_1,uint param_2)

{
  return (*param_1 & param_2) == param_2;
}

// 010DB9E0  FUN_010db9e0  size=12  [run]
void __thiscall FUN_010db9e0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 010DB9F0  FUN_010db9f0  size=20  [run]
void __thiscall FUN_010db9f0(int *param_1,undefined4 param_2,int param_3)

{
  *(bool *)param_2 = *param_1 == param_3;
  return;
}

// 010DBA20  FUN_010dba20  size=26  [run]
void FUN_010dba20(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_010105b0(param_1,param_2,param_3,0);
  return;
}

// 010DBA80  FUN_010dba80  size=15  [run]
int __thiscall FUN_010dba80(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 010DBAB0  FUN_010dbab0  size=22  [run]
void __fastcall FUN_010dbab0(int *param_1)

{
  if (*param_1 != 0) {
    FUN_010060a0();
  }
  *param_1 = 0;
  return;
}

// 010DBAE0  FUN_010dbae0  size=43  [run]
void __thiscall FUN_010dbae0(int *param_1,int param_2)

{
  if (*param_1 != 0) {
    if (*param_1 != param_2) {
      FUN_010060a0();
    }
    *param_1 = param_2;
    return;
  }
  *param_1 = param_2;
  return;
}

// 010DBB30  FUN_010dbb30  size=26  [run]
void __thiscall FUN_010dbb30(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 010DBB60  FUN_010dbb60  size=58  [run]
void __thiscall FUN_010dbb60(char *param_1,undefined1 *param_2,char *param_3)

{
  if ((((*param_1 == *param_3) && (param_1[1] == param_3[1])) && (param_1[2] == param_3[2])) &&
     (param_1[3] == param_3[3])) {
    *param_2 = 1;
    return;
  }
  *param_2 = 0;
  return;
}

// 010DBBB0  FUN_010dbbb0  size=38  [run]
void FUN_010dbbb0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 010DBBE0  FUN_010dbbe0  size=27  [run]
void FUN_010dbbe0(undefined4 param_1,undefined4 param_2)

{
  FUN_010105b0(param_1,param_2,0xffffffff,0);
  return;
}

// 010DBC10  hkBaseObject::hkBaseObject_4  size=30  [run]
void __fastcall hkBaseObject::hkBaseObject_4(undefined4 *param_1)

{
  if (param_1[2] != 0) {
    FUN_010060a0();
  }
  param_1[2] = 0;
  *param_1 = vftable;
  return;
}

// 010DBC50  FUN_010dbc50  size=38  [run]
void FUN_010dbc50(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 010DBC80  hkXmlTagfileReader::vf00  size=53  [run]
undefined4 * __thiscall hkXmlTagfileReader::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 010DBCC0  hkTagfileReader::vf00  size=53  [run]
undefined4 * __thiscall hkTagfileReader::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 010DBD00  _anon_F3B081D0::ForwardingPackfileListerer::ForwardingPackfileListerer  size=42  [run]
void __thiscall
_anon_F3B081D0::ForwardingPackfileListerer::ForwardingPackfileListerer
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined2 *)((int)param_1 + 6) = 1;
  param_1[2] = param_2;
  *param_1 = vftable;
  param_1[3] = param_3;
  param_1[4] = param_4;
  return;
}

// 010DBD40  FUN_010dbd40  size=32  [run]
void __thiscall FUN_010dbd40(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  *param_1 = iVar1;
  if (iVar1 != 0) {
    *(short *)(iVar1 + 6) = *(short *)(iVar1 + 6) + 1;
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
  }
  return;
}

// 010DBD60  FUN_010dbd60  size=57  [run]
undefined4 * __thiscall FUN_010dbd60(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 local_14 [8];
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0;
  local_8 = 0;
  if ((int *)*param_1 == (int *)0x0) {
    puVar2 = &local_c;
  }
  else {
    puVar2 = (undefined4 *)(**(code **)(*(int *)*param_1 + 4))(local_14);
  }
  uVar1 = *puVar2;
  param_2[1] = puVar2[1];
  *param_2 = uVar1;
  return param_2;
}

// 010DBDA0  FUN_010dbda0  size=63  [run]
int * FUN_010dbda0(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = FUN_010e2d40(param_2,param_3);
    *param_1 = iVar1;
    if (iVar1 != 0) {
      *(short *)(iVar1 + 6) = *(short *)(iVar1 + 6) + 1;
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
    }
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}

// 010DBDE0  _anon_F3B081D0::ForwardingPackfileListerer::vf0C  size=243  [run]
int * __thiscall
_anon_F3B081D0::ForwardingPackfileListerer::vf0C(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 local_1c [8];
  int local_14 [3];
  int local_8;
  
  if (*(int *)(param_1 + 8) != 0) {
    if ((int *)*param_3 != (int *)0x0) {
      piVar2 = (int *)(**(code **)(*(int *)*param_3 + 8))();
      uVar3 = (**(code **)(*piVar2 + 8))();
      iVar4 = (**(code **)(**(int **)(param_1 + 0x10) + 0x10))(uVar3);
      local_14[0] = 0;
      local_14[1] = 0;
      if ((int *)*param_3 == (int *)0x0) {
        piVar2 = local_14;
      }
      else {
        piVar2 = (int *)(**(code **)(*(int *)*param_3 + 4))(local_1c);
      }
      iVar1 = *piVar2;
      if (piVar2[1] != 0) {
        iVar4 = piVar2[1];
      }
      local_14[2] = iVar4;
      local_8 = iVar1;
      (**(code **)(**(int **)(param_1 + 8) + 0xc))(&local_8,local_14 + 2);
      if ((local_8 != iVar1) || (local_14[2] != iVar4)) {
        if (local_8 == 0) {
          *param_2 = 0;
        }
        else {
          iVar4 = FUN_010e2d40(local_8,local_14[2]);
          *param_2 = iVar4;
          if (iVar4 != 0) {
            *(short *)(iVar4 + 6) = *(short *)(iVar4 + 6) + 1;
            *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
            return param_2;
          }
        }
        return param_2;
      }
    }
  }
  iVar4 = *param_3;
  *param_2 = iVar4;
  if (iVar4 != 0) {
    *(short *)(iVar4 + 6) = *(short *)(iVar4 + 6) + 1;
    *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
  }
  return param_2;
}

// 010DBEE0  FUN_010dbee0  size=15  [run]
undefined4 __fastcall FUN_010dbee0(undefined4 param_1)

{
  FUN_010065a0();
  return param_1;
}

// 010DBF10  FUN_010dbf10  size=38  [run]
void FUN_010dbf10(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 010DBF70  FUN_010dbf70  size=38  [run]
void FUN_010dbf70(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 010DBFB0  hkXmlTagfileWriter::vf00  size=53  [run]
undefined4 * __thiscall hkXmlTagfileWriter::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 010DBFF0  hkBinaryTagfileWriter::vf00  size=53  [run]
undefined4 * __thiscall hkBinaryTagfileWriter::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 010DC070  FUN_010dc070  size=45  [run]
undefined4 __thiscall FUN_010dc070(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((int)(*(uint *)(param_1 + 8) & 0x3fffffff) < param_3) {
    uVar1 = FUN_0100a210(param_2,param_1,param_3,1);
    return uVar1;
  }
  return 0;
}

// 010DC0A0  FUN_010dc0a0  size=67  [run]
int __thiscall FUN_010dc0a0(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[1];
  iVar1 = iVar2 + param_3;
  if ((int)(param_1[2] & 0x3fffffffU) < iVar1) {
    iVar3 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar3 <= iVar1) {
      iVar3 = iVar1;
    }
    FUN_0100a210(param_2,param_1,iVar3,1);
  }
  param_1[1] = param_1[1] + param_3;
  return *param_1 + iVar2;
}

// 010DC120  FUN_010dc120  size=38  [run]
void FUN_010dc120(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 010DC150  FUN_010dc150  size=38  [run]
void FUN_010dc150(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 010DC180  _anon_F3B081D0::ForwardingPackfileListerer::vf00  size=53  [run]
undefined4 * __thiscall
_anon_F3B081D0::ForwardingPackfileListerer::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 010DC1C0  hkTagfileWriter::AddDataObjectListener::vf00  size=53  [run]
undefined4 * __thiscall
hkTagfileWriter::AddDataObjectListener::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 010DC200  hkTagfileWriter::vf00  size=53  [run]
undefined4 * __thiscall hkTagfileWriter::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 010DC240  FUN_010dc240  size=46  [run]
undefined4 __thiscall FUN_010dc240(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((int)(*(uint *)(param_1 + 8) & 0x3fffffff) < param_2) {
    uVar1 = FUN_0100a210(&PTR_vftable_018e9b8c,param_1,param_2,1);
    return uVar1;
  }
  return 0;
}

// 010DC270  FUN_010dc270  size=68  [run]
int __thiscall FUN_010dc270(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[1];
  iVar1 = iVar2 + param_2;
  if ((int)(param_1[2] & 0x3fffffffU) < iVar1) {
    iVar3 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar3 <= iVar1) {
      iVar3 = iVar1;
    }
    FUN_0100a210(&PTR_vftable_018e9b8c,param_1,iVar3,1);
  }
  param_1[1] = param_1[1] + param_2;
  return *param_1 + iVar2;
}

// 010DC2C0  FUN_010dc2c0  size=86  [run]
int * __thiscall FUN_010dc2c0(int *param_1,int param_2)

{
  uint uVar1;
  LPVOID pvVar2;
  int iVar3;
  uint uVar4;
  
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  iVar3 = *(int *)((int)pvVar2 + 0xc);
  uVar4 = param_2 + 0x7fU & 0xffffff80;
  uVar1 = iVar3 + uVar4;
  if (((int)uVar4 <= *(int *)((int)pvVar2 + 8)) && (uVar1 <= *(uint *)((int)pvVar2 + 0x10))) {
    *(uint *)((int)pvVar2 + 0xc) = uVar1;
    *param_1 = iVar3;
    param_1[1] = param_2;
    return param_1;
  }
  iVar3 = FUN_0100b780(uVar4);
  *param_1 = iVar3;
  param_1[1] = param_2;
  return param_1;
}

// 010DC370  FUN_010dc370  size=61  [run]
void __thiscall FUN_010dc370(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010DC3B0  FUN_010dc3b0  size=61  [run]
void __fastcall FUN_010dc3b0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010DC3F0  FUN_010dc3f0  size=61  [run]
void __fastcall FUN_010dc3f0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010DC430  FUN_010dc430  size=8  [run]
undefined4 FUN_010dc430(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 010DC440  FUN_010dc440  size=8  [run]
undefined4 FUN_010dc440(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 010DC450  FUN_010dc450  size=34  [run]
undefined4 __thiscall FUN_010dc450(undefined4 param_1,undefined4 param_2)

{
  FUN_010065b0(param_2);
  FUN_010065b0(param_2);
  return param_1;
}

// 010DC480  FUN_010dc480  size=8  [run]
undefined4 FUN_010dc480(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 010DC4D0  FUN_010dc4d0  size=36  [run]
void FUN_010dc4d0(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    FUN_010065b0(param_2);
    FUN_010065b0(param_2);
  }
  return;
}

// 010DC510  FUN_010dc510  size=21  [run]
void FUN_010dc510(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    hkMemoryResourceHandle::hkMemoryResourceHandle(param_2);
  }
  return;
}

// 010DC530  FUN_010dc530  size=16  [run]
void FUN_010dc530(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 010DC540  FUN_010dc540  size=46  [run]
undefined4 FUN_010dc540(void)

{
  undefined4 local_30;
  
  hkMemoryResourceHandle::hkMemoryResourceHandle(0);
  return local_30;
}

// 010DC580  FUN_010dc580  size=21  [run]
void FUN_010dc580(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    hkMemoryResourceContainer::hkMemoryResourceContainer(param_2);
  }
  return;
}

// 010DC5A0  FUN_010dc5a0  size=16  [run]
void FUN_010dc5a0(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 010DC5B0  FUN_010dc5b0  size=46  [run]
undefined4 FUN_010dc5b0(void)

{
  undefined4 local_40;
  
  hkMemoryResourceContainer::hkMemoryResourceContainer(0);
  return local_40;
}

// 010DC5E0  FUN_010dc5e0  size=24  [run]
void FUN_010dc5e0(void)

{
  FUN_01006770();
  FUN_01006770();
  return;
}

// 010DC600  FUN_010dc600  size=19  [run]
void FUN_010dc600(void)

{
  FUN_01006770();
  FUN_01006770();
  return;
}

// 010DC620  FUN_010dc620  size=39  [run]
void FUN_010dc620(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,8);
  }
  return;
}

// 010DC650  FUN_010dc650  size=63  [run]
int __thiscall FUN_010dc650(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  FUN_01006770();
  FUN_01006770();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,8);
  }
  return param_1;
}

// 010DC700  hkDataWorldDict::vf2C  size=4  [run]
int __fastcall hkDataWorldDict::vf2C(int param_1)

{
  return param_1 + 0x10;
}

// 010DC720  FUN_010dc720  size=10  [run]
undefined4 FUN_010dc720(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 010DC740  FUN_010dc740  size=23  [run]
void FUN_010dc740(undefined4 param_1,undefined4 param_2)

{
  FUN_010dc720(param_1,param_2);
  return;
}

// 010DC760  FUN_010dc760  size=66  [run]
undefined4 FUN_010dc760(int *param_1)

{
  if (param_1[2] == -1) {
    if (((*param_1 != 0) || (param_1[3] == -1)) || (param_1[1] == 0)) {
      return 0;
    }
  }
  else if (param_1[3] == -1) {
    if (*param_1 == 0) {
      return 0;
    }
    if (param_1[1] != 0) {
      return 0;
    }
  }
  else if (*param_1 == 0) {
    return 0;
  }
  return 1;
}

// 010DC7B0  hkDefaultClassWrapper::hkDefaultClassWrapper  size=85  [run]
undefined4 * __thiscall
hkDefaultClassWrapper::hkDefaultClassWrapper(undefined4 *param_1,int param_2)

{
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = vftable;
  param_1[2] = 0;
  if (param_2 == 0) {
    param_2 = (**(code **)(*DAT_0209b610 + 0x10))();
    if (param_2 == 0) goto LAB_010dc7ee;
  }
  FUN_01006000();
LAB_010dc7ee:
  if (param_1[2] != 0) {
    FUN_010060a0();
  }
  param_1[2] = param_2;
  return param_1;
}

// 010DC810  hkDefaultClassWrapper::vf0C  size=87  [run]
int __thiscall hkDefaultClassWrapper::vf0C(int param_1,int *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  uVar1 = param_3;
  piVar3 = param_2;
  iVar2 = (**(code **)(*param_2 + 0x24))(param_3);
  if (iVar2 == 0) {
    iVar2 = (**(code **)(**(int **)(param_1 + 8) + 0x10))(uVar1);
    if (iVar2 != 0) {
      piVar3 = (int *)(**(code **)(*piVar3 + 0x18))(&param_2);
      if (*piVar3 == 1) {
        iVar2 = FUN_010ec880(iVar2);
        return iVar2;
      }
    }
    iVar2 = 0;
  }
  return iVar2;
}

// 010DC870  FUN_010dc870  size=16  [run]
undefined4 __thiscall FUN_010dc870(int param_1,int param_2)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x10) + param_2 * 4);
}

// 010DC880  FUN_010dc880  size=68  [run]
int FUN_010dc880(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = FUN_01025be0(param_1,0);
    if (iVar1 == 0) {
      iVar1 = FUN_01016080(param_1);
      FUN_01025470(iVar1,iVar1);
    }
    return iVar1;
  }
  return 0;
}

// 010DC8D0  FUN_010dc8d0  size=23  [run]
void FUN_010dc8d0(undefined4 param_1,undefined4 param_2)

{
  FUN_010dc870(param_1,param_2);
  return;
}

// 010DC8F0  FUN_010dc8f0  size=107  [run]
undefined8 __thiscall FUN_010dc8f0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_010dc880(param_2);
  iVar2 = FUN_010258b0(uVar1,*(undefined4 *)(param_1 + 0x14));
  if (iVar2 == *(int *)(param_1 + 0x14)) {
    if (*(uint *)(param_1 + 0x14) == (*(uint *)(param_1 + 0x18) & 0x3fffffff)) {
      FUN_0100a290(&PTR_vftable_018e9b94,(int *)(param_1 + 0x10),4);
    }
    *(undefined4 *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x14) * 4) = uVar1;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  }
  return CONCAT44(param_3,iVar2);
}

// 010DC960  FUN_010dc960  size=12  [run]
void FUN_010dc960(void)

{
  FUN_010dc8f0();
  return;
}

// 010DC970  FUN_010dc970  size=132  [run]
int __thiscall FUN_010dc970(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar2 = FUN_010105b0(param_2,param_3,0xffffffff,0);
  while( true ) {
    if (iVar2 == -1) {
      return -1;
    }
    puVar1 = *(undefined4 **)(*(int *)(param_1 + 0xc) + iVar2 * 4);
    if ((puVar1[3] == -1) ||
       (((param_4 == 0 && (puVar1[1] != 0)) && (iVar3 = FUN_01015b90(*puVar1,puVar1[1]), iVar3 != 0)
        ))) break;
    uVar4 = FUN_010dc8f0(puVar1[1],puVar1[3]);
    iVar2 = FUN_010105b0(uVar4,0xffffffff,0);
  }
  return iVar2;
}

// 010DCA00  FUN_010dca00  size=120  [run]
undefined4 FUN_010dca00(int param_1,undefined4 param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_01010120(param_2);
  if (*(int *)(param_4 + 8) < iVar1) {
    FUN_010100a0(&PTR_vftable_018e9b94,param_2,0);
    for (iVar1 = FUN_010df600(param_2); iVar1 != -1; iVar1 = *(int *)(*param_3 + 4 + iVar1 * 8)) {
      iVar2 = *(int *)(*param_3 + iVar1 * 8);
      if ((param_1 == iVar2) || (iVar2 = FUN_010dca00(param_1,iVar2,param_3,param_4), iVar2 != 0)) {
        return 1;
      }
    }
  }
  return 0;
}

// 010DCA80  FUN_010dca80  size=84  [run]
void __thiscall FUN_010dca80(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_010dc760(param_2);
  if (iVar1 != 0) {
    if (*(uint *)(param_1 + 0x10) == (*(uint *)(param_1 + 0x14) & 0x3fffffff)) {
      FUN_0100a290(&PTR_vftable_018e9b94,(int *)(param_1 + 0xc),4);
    }
    *(undefined4 *)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x10) * 4) = param_2;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    FUN_010107b0();
  }
  return;
}

// 010DCAE0  FUN_010dcae0  size=188  [run]
void __fastcall FUN_010dcae0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  LPVOID pvVar3;
  char local_5;
  
  uVar1 = FUN_010253c0();
  FUN_01025890(&local_5,uVar1);
  while (local_5 != '\0') {
    uVar2 = FUN_01025400(uVar1);
    pvVar3 = TlsGetValue(DAT_01f8fc4c);
    FUN_01005d00(*(undefined4 *)((int)pvVar3 + 0x2c),uVar2);
    uVar1 = FUN_01025440(uVar1);
    FUN_01025890(&local_5,uVar1);
  }
  FUN_01025870();
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (-1 < *(int *)(param_1 + 0x18)) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))
              (*(undefined4 *)(param_1 + 0x10),*(int *)(param_1 + 0x18) * 4);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0x80000000;
  FUN_01025870();
  return;
}

// 010DCBA0  hkBaseObject::hkBaseObject_73  size=137  [run]
void __fastcall hkBaseObject::hkBaseObject_73(undefined4 *param_1)

{
  int iVar1;
  LPVOID pvVar2;
  
  iVar1 = param_1[2];
  *param_1 = hkVersionPatchManager::vftable;
  if (iVar1 != 0) {
    FUN_010dcae0();
    pvVar2 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar2 + 0x2c) + 8))(iVar1,0x2c);
  }
  FUN_010107e0(&PTR_vftable_018e9b94);
  FUN_0100fe00();
  param_1[4] = 0;
  if (-1 < (int)param_1[5]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[3],param_1[5] * 4);
  }
  param_1[3] = 0;
  param_1[5] = 0x80000000;
  *param_1 = vftable;
  return;
}

// 010DCC30  FUN_010dcc30  size=982  [run]
undefined4 FUN_010dcc30(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int *unaff_ESI;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int local_58;
  int local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  uint local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int *local_20;
  int local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  local_10 = 0;
  if (0 < param_1[1]) {
    do {
      piVar6 = *(int **)(*param_1 + local_10 * 4);
      local_c = *piVar6;
      if (local_c == 0) {
        local_c = piVar6[1];
      }
      local_20 = piVar6;
      if (piVar6[2] == -1) {
        local_54 = piVar6[3];
        local_58 = local_c;
        local_4c = 0;
        local_48 = 0;
        local_44 = 0x80000000;
        local_50 = 0;
        iVar4 = (**(code **)(*unaff_ESI + 0x24))(local_c);
        if (iVar4 != 0) {
          local_48 = 0;
          if (-1 < (int)local_44) {
            (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_4c,(local_44 & 0x3fffffff) * 0xc);
          }
          return 1;
        }
        (**(code **)(*unaff_ESI + 0xc))(&local_58);
        local_48 = 0;
        if (-1 < (int)local_44) {
          (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_4c,(local_44 & 0x3fffffff) * 0xc);
        }
      }
      local_8 = (**(code **)(*unaff_ESI + 0x24))(local_c);
      if (((*piVar6 != 0) && (piVar6[1] != 0)) &&
         (iVar4 = FUN_01015b90(*piVar6,piVar6[1]), iVar4 != 0)) {
        (**(code **)(*unaff_ESI + 0x30))(&local_8,piVar6[1]);
        local_c = piVar6[1];
      }
      local_1c = 0;
      if (0 < piVar6[5]) {
        do {
          iVar7 = 0;
          iVar4 = piVar6[4] + local_1c * 8;
          switch(*(undefined4 *)(piVar6[4] + local_1c * 8)) {
          case 1:
            puVar2 = *(undefined4 **)(iVar4 + 4);
            uVar5 = puVar2[3];
            uVar9 = puVar2[2];
            uVar8 = puVar2[1];
            (**(code **)(*unaff_ESI + 0x2c))(uVar8,uVar9,uVar5);
            uVar5 = FUN_010e1a70(uVar8,uVar9,uVar5);
            (**(code **)(*unaff_ESI + 0x40))(&local_8,*puVar2,uVar5,puVar2[4]);
            break;
          case 2:
            (**(code **)(*unaff_ESI + 0x4c))(&local_8,**(undefined4 **)(iVar4 + 4));
            break;
          case 3:
            (**(code **)(*unaff_ESI + 0x48))
                      (&local_8,**(undefined4 **)(iVar4 + 4),(*(undefined4 **)(iVar4 + 4))[1]);
            break;
          case 4:
            (**(code **)(*unaff_ESI + 0x44))
                      (&local_8,**(undefined4 **)(iVar4 + 4),(*(undefined4 **)(iVar4 + 4))[1]);
            break;
          case 5:
            pcVar3 = *(code **)(*(int *)(iVar4 + 4) + 4);
            local_34 = 0;
            local_30 = 0;
            local_2c = -0x80000000;
            (**(code **)(*unaff_ESI + 0x50))(local_c,&local_34);
            if (0 < local_30) {
              iVar4 = 0;
              do {
                local_14 = *(undefined4 **)(local_34 + iVar4 * 4);
                if (local_14 != (undefined4 *)0x0) {
                  *(short *)((int)local_14 + 6) = *(short *)((int)local_14 + 6) + 1;
                  local_14[2] = local_14[2] + 1;
                }
                (*pcVar3)(&local_14);
                if (local_14 != (undefined4 *)0x0) {
                  *(short *)((int)local_14 + 6) = *(short *)((int)local_14 + 6) + -1;
                  piVar6 = local_14 + 2;
                  *piVar6 = *piVar6 + -1;
                  if (*piVar6 == 0) {
                    (**(code **)*local_14)(1);
                  }
                }
                iVar4 = iVar4 + 1;
              } while (iVar4 < local_30);
            }
            local_30 = 0;
            if (-1 < local_2c) {
              (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_34,local_2c * 4);
            }
            local_34 = 0;
            local_2c = 0x80000000;
            piVar6 = local_20;
            break;
          case 6:
            local_28 = (**(code **)(*unaff_ESI + 0x24))(**(undefined4 **)(iVar4 + 4));
            local_40 = 0;
            local_3c = 0;
            local_38 = -0x80000000;
            (**(code **)(*unaff_ESI + 0x54))(local_c,&local_40);
            if (0 < local_3c) {
              do {
                local_18 = *(undefined4 **)(local_40 + iVar7 * 4);
                if (local_18 != (undefined4 *)0x0) {
                  *(short *)((int)local_18 + 6) = *(short *)((int)local_18 + 6) + 1;
                  local_18[2] = local_18[2] + 1;
                }
                (**(code **)(*unaff_ESI + 0x58))(&local_18,&local_28);
                if (local_18 != (undefined4 *)0x0) {
                  *(short *)((int)local_18 + 6) = *(short *)((int)local_18 + 6) + -1;
                  piVar1 = local_18 + 2;
                  *piVar1 = *piVar1 + -1;
                  if (*piVar1 == 0) {
                    (**(code **)*local_18)(1);
                  }
                }
                iVar7 = iVar7 + 1;
              } while (iVar7 < local_3c);
            }
            local_3c = 0;
            if (-1 < local_38) {
              (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_40,local_38 * 4);
            }
            local_40 = 0;
            local_38 = 0x80000000;
            break;
          case 8:
            iVar4 = *(int *)(*(int *)(iVar4 + 4) + 4);
            if (iVar4 == 0) {
              local_24 = 0;
            }
            else {
              local_24 = (**(code **)(*unaff_ESI + 0x24))(iVar4);
            }
            (**(code **)(*unaff_ESI + 0x3c))(&local_8,&local_24);
          }
          local_1c = local_1c + 1;
        } while (local_1c < piVar6[5]);
      }
      iVar4 = piVar6[3];
      if (iVar4 == -1) {
        (**(code **)(*unaff_ESI + 0x34))(&local_8);
      }
      else if ((piVar6[2] != -1) && (piVar6[2] != iVar4)) {
        (**(code **)(*unaff_ESI + 0x38))(&local_8,iVar4);
      }
      local_10 = local_10 + 1;
    } while (local_10 < param_1[1]);
  }
  return 0;
}

// 010DD030  FUN_010dd030  size=239  [run]
int FUN_010dd030(int param_1,int *param_2,int *param_3,int param_4,int *param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(*param_2 + param_1 * 4) == -1) {
    *(undefined4 *)(*param_2 + param_1 * 4) = 0xfffffffe;
    if (param_5[1] == (param_5[2] & 0x3fffffffU)) {
      FUN_0100a290(&PTR_vftable_018e9b94,param_5,4);
    }
    *(int *)(*param_5 + param_5[1] * 4) = param_1;
    param_5[1] = param_5[1] + 1;
    for (iVar3 = FUN_010df600(param_1); iVar3 != -1; iVar3 = *(int *)(*param_3 + 4 + iVar3 * 8)) {
      iVar1 = *(int *)(*param_3 + iVar3 * 8);
      iVar2 = *(int *)(*param_2 + iVar1 * 4);
      if (iVar2 == -2) {
        if (param_5[1] == (param_5[2] & 0x3fffffffU)) {
          FUN_0100a290(&PTR_vftable_018e9b94,param_5,4);
        }
        *(int *)(*param_5 + param_5[1] * 4) = iVar1;
        param_5[1] = param_5[1];
      }
      else if (iVar2 == -1) {
        param_4 = FUN_010dd030(iVar1,param_2,param_3,param_4,param_5,param_6);
      }
    }
    param_5[1] = param_5[1] + -1;
    *(int *)(*param_2 + param_1 * 4) = param_4;
    return param_4 + 1;
  }
  return param_4;
}

// 010DD120  hkVersionPatchManager::hkVersionPatchManager  size=149  [run]
undefined4 * __fastcall hkVersionPatchManager::hkVersionPatchManager(undefined4 *param_1)

{
  LPVOID pvVar1;
  int iVar2;
  int local_8;
  
  *param_1 = vftable;
  *(undefined2 *)((int)param_1 + 6) = 1;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0x80000000;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0xffffffff;
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x2c);
  if (iVar2 != 0) {
    local_8 = ((uint)param_1 >> 8) << 8;
    FUN_01025830(local_8);
    local_8 = ((uint)param_1 >> 8) << 8;
    *(undefined4 *)(iVar2 + 0x10) = 0;
    *(undefined4 *)(iVar2 + 0x14) = 0;
    *(undefined4 *)(iVar2 + 0x18) = 0x80000000;
    FUN_01025830(local_8);
    param_1[2] = iVar2;
    return param_1;
  }
  param_1[2] = 0;
  return param_1;
}

// 010DD1C0  FUN_010dd1c0  size=158  [run]
void __fastcall FUN_010dd1c0(uint param_1)

{
  LPVOID pvVar1;
  int iVar2;
  undefined4 local_8;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  FUN_010107b0();
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 != 0) {
    FUN_010dcae0();
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(iVar2,0x2c);
  }
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x2c);
  if (iVar2 != 0) {
    local_8 = (param_1 >> 8) << 8;
    FUN_01025830(local_8);
    local_8 = (param_1 >> 8) << 8;
    *(undefined4 *)(iVar2 + 0x10) = 0;
    *(undefined4 *)(iVar2 + 0x14) = 0;
    *(undefined4 *)(iVar2 + 0x18) = 0x80000000;
    FUN_01025830(local_8);
    *(int *)(param_1 + 8) = iVar2;
    return;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

// 010DD260  FUN_010dd260  size=2963  [run]
undefined4 __fastcall FUN_010dd260(int param_1)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  uint local_b4;
  uint local_b0;
  int local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  uint local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  int local_8c;
  int local_88;
  undefined4 local_84;
  uint local_80;
  int local_7c;
  undefined4 local_78;
  int local_74;
  undefined4 local_70;
  int local_6c;
  uint local_68;
  uint local_64;
  int local_60;
  undefined4 local_5c;
  uint local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  int local_3c;
  int local_38;
  undefined4 local_34;
  uint local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  int *local_10;
  int local_c;
  int local_8;
  
  local_c0 = *(undefined4 *)(param_1 + 8);
  local_44 = 0;
  local_40 = 0;
  local_3c = -1;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0x80000000;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0xffffffff;
  local_20 = 0xffffffff;
  local_60 = 0;
  local_5c = 0;
  local_58 = 0x80000000;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0xffffffff;
  local_48 = 0xffffffff;
  local_8 = param_1;
  FUN_010107b0();
  local_c = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      piVar1 = *(int **)(*(int *)(local_8 + 0xc) + local_c * 4);
      iVar4 = FUN_010dc760(piVar1);
      if (iVar4 == 0) {
        FUN_01010310(&PTR_vftable_018e9b94);
        FUN_0100fd10();
        local_5c = 0;
        if ((local_58 & 0x80000000) != 0) goto LAB_010dd521;
        goto LAB_010dd511;
      }
      if (piVar1[2] == -1) {
        uVar12 = FUN_010dc8f0(piVar1[1],piVar1[3]);
        iVar4 = FUN_01010560(uVar12);
        if (iVar4 <= local_3c) goto LAB_010dd58d;
        FUN_010104c0(&PTR_vftable_018e9b94,uVar12,local_c,0);
      }
      else {
        uVar12 = FUN_010dc8f0(*piVar1,piVar1[2]);
        iVar4 = FUN_01010560(uVar12);
        if (iVar4 <= *(int *)(local_8 + 0x20)) {
LAB_010dd58d:
          FUN_010e0510();
          FUN_010e04b0();
          goto LAB_010dd56c;
        }
        FUN_010104c0(&PTR_vftable_018e9b94,uVar12,local_c,0);
        if ((piVar1[3] == -1) ||
           ((piVar1[1] != 0 && (iVar4 = FUN_01015b90(*piVar1,piVar1[1]), iVar4 != 0)))) {
          FUN_010e0330(*piVar1,&local_c);
        }
      }
      if (piVar1[3] != -1) {
        iVar4 = piVar1[1];
        if (iVar4 == 0) {
          iVar4 = *piVar1;
        }
        uVar12 = FUN_010dc8f0(iVar4,piVar1[3]);
        FUN_010e0290(uVar12,&local_c);
      }
      local_c = local_c + 1;
      param_1 = local_8;
    } while (local_c < *(int *)(local_8 + 0x10));
  }
  local_b0 = local_b0 & 0xffffff00;
  FUN_01025830(local_b0);
  local_a8 = 0;
  local_a4 = 0;
  local_a0 = 0x80000000;
  local_9c = 0;
  local_98 = 0;
  local_94 = 0xffffffff;
  local_90 = 0xffffffff;
  local_88 = 0;
  local_84 = 0;
  local_80 = 0x80000000;
  local_7c = 0;
  local_78 = 0;
  local_74 = -1;
  local_70 = 0xffffffff;
  local_ac = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      puVar2 = *(uint **)(*(int *)(local_8 + 0xc) + local_ac * 4);
      uVar5 = puVar2[2];
      local_b0 = *puVar2;
      if (uVar5 == 0xffffffff) {
        local_b0 = puVar2[1];
        uVar5 = puVar2[3];
        if ((local_b0 == 0) || (uVar5 == 0xffffffff)) {
          FUN_01010310(&PTR_vftable_018e9b94);
          FUN_0100fd10();
          local_84 = 0;
          if ((local_80 & 0x80000000) == 0) {
            (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_88,local_80 * 8);
          }
          local_88 = 0;
          local_80 = 0x80000000;
          FUN_01010310(&PTR_vftable_018e9b94);
          FUN_0100fd10();
          local_a4 = 0;
          if ((local_a0 & 0x80000000) != 0) goto LAB_010ddc5a;
          goto LAB_010ddc4a;
        }
      }
      uVar12 = FUN_010dc8f0(local_b0,uVar5);
      local_c8 = uVar12;
      if (puVar2[2] == 0xffffffff) {
        local_c = FUN_010105b0(uVar12,0xffffffff,0);
      }
      else {
        local_c = FUN_010105b0(uVar12,0xffffffff,0);
        iVar4 = FUN_010deda0(uVar12);
        iVar7 = local_c;
        for (; iVar4 != -1; iVar4 = *(int *)(local_38 + 4 + iVar4 * 8)) {
          local_10 = *(int **)(local_38 + iVar4 * 8);
          FUN_010e0200(iVar7,&local_10);
        }
      }
      local_10 = (int *)0x0;
      if (0 < (int)puVar2[5]) {
        do {
          if (*(int *)(puVar2[4] + (int)local_10 * 8) == 7) {
            puVar11 = *(undefined4 **)(puVar2[4] + (int)local_10 * 8 + 4);
            uVar12 = FUN_010dc8f0(*puVar11,puVar11[1]);
            iVar4 = FUN_010105b0(uVar12,0xffffffff,0);
            if (iVar4 != -1) {
              FUN_010e0200(iVar4,&local_c);
            }
            iVar4 = FUN_010deda0(uVar12);
            iVar7 = local_c;
            for (; iVar4 != -1; iVar4 = *(int *)(local_38 + 4 + iVar4 * 8)) {
              local_8c = *(int *)(local_38 + iVar4 * 8);
              FUN_010e0200(iVar7,&local_8c);
            }
          }
          local_10 = (int *)((int)local_10 + 1);
        } while ((int)local_10 < (int)puVar2[5]);
      }
      uVar5 = local_b0;
      if (puVar2[2] == 0xffffffff) {
        iVar4 = FUN_010df620(local_b0);
        if (iVar4 != -1) {
          iVar4 = FUN_010df620(uVar5);
          if (iVar4 != -1) {
            iVar6 = FUN_010dc970(local_c8,0);
            iVar7 = local_60;
            if (iVar6 == -1) {
              iVar7 = FUN_01025be0(uVar5,0xffffffff);
              if (iVar7 != -1) {
                FUN_01010310(&PTR_vftable_018e9b94);
                FUN_0100fd10();
                goto LAB_010ddcc5;
              }
              FUN_01025470(uVar5,local_ac);
              iVar7 = local_60;
            }
            do {
              local_8c = *(int *)(iVar7 + iVar4 * 8);
              if (iVar6 != local_8c) {
                FUN_010e0200(local_c,&local_8c);
                iVar7 = local_60;
              }
              iVar4 = *(int *)(iVar7 + 4 + iVar4 * 8);
            } while (iVar4 != -1);
          }
        }
      }
      local_ac = local_ac + 1;
    } while (local_ac < *(int *)(local_8 + 0x10));
  }
  iVar4 = 0;
  if (-1 < local_74) {
    do {
      if (*(int *)(local_7c + iVar4 * 8) != -1) break;
      iVar4 = iVar4 + 1;
    } while (iVar4 <= local_74);
  }
  if (iVar4 <= local_74) {
    do {
      uVar9 = *(undefined4 *)(local_7c + iVar4 * 8);
      iVar7 = FUN_010df600(uVar9);
      for (; iVar7 != -1; iVar7 = *(int *)(local_88 + 4 + iVar7 * 8)) {
        local_cc = 0;
        local_c8._0_4_ = 0;
        local_c8._4_4_ = 0xffffffff;
        local_8c = *(int *)(local_88 + iVar7 * 8);
        iVar6 = FUN_010dca00(uVar9,local_8c,&local_a8,&local_cc);
        if (iVar6 == 0) {
          FUN_010e0200(uVar9,&local_8c);
        }
        FUN_01010310(&PTR_vftable_018e9b94);
        FUN_0100fd10();
      }
      do {
        iVar4 = iVar4 + 1;
        if (local_74 < iVar4) break;
      } while (*(int *)(local_7c + iVar4 * 8) == -1);
    } while (iVar4 <= local_74);
  }
  iVar4 = local_8;
  local_10 = (int *)(local_8 + 0xc);
  local_1c = 0;
  local_18 = 0;
  local_14 = 0x80000000;
  FUN_010decf0(local_10);
  uVar5 = local_18;
  local_64 = 0x80000000;
  local_6c = 0;
  local_68 = 0;
  uVar8 = 0;
  if (0 < (int)local_18) {
    FUN_0100a210(&PTR_vftable_018e9b94,&local_6c,((int)local_18 < 0) - 1 & local_18,4);
    uVar8 = local_68;
  }
  iVar7 = uVar5 - uVar8;
  puVar11 = (undefined4 *)(local_6c + uVar8 * 4);
  if (0 < iVar7) {
    for (; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar11 = 0xffffffff;
      puVar11 = puVar11 + 1;
    }
  }
  uVar9 = 0;
  local_68 = uVar5;
  iVar7 = 0;
  local_bc = 0;
  local_b8 = 0;
  local_b4 = 0x80000000;
  if (0 < (int)local_18) {
    do {
      uVar9 = FUN_010dd030(iVar7,&local_6c,&local_a8,uVar9,&local_bc,&local_1c);
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)local_18);
  }
  piVar1 = local_10;
  uVar5 = local_18;
  if ((int)(local_10[2] & 0x3fffffffU) < (int)local_18) {
    uVar8 = (local_10[2] & 0x3fffffffU) * 2;
    uVar10 = local_18;
    if ((int)local_18 < (int)uVar8) {
      uVar10 = uVar8;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,local_10,uVar10,4);
  }
  iVar7 = 0;
  piVar1[1] = uVar5;
  if (0 < (int)local_18) {
    do {
      iVar4 = *(int *)(local_6c + iVar7 * 4);
      if (iVar4 < 0) {
        FUN_010decf0(&local_1c);
        local_b8 = 0;
        if ((local_b4 & 0x80000000) == 0) {
          (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_bc,local_b4 * 4);
        }
        local_bc = 0;
        local_b4 = 0x80000000;
        local_68 = 0;
        if ((local_64 & 0x80000000) == 0) {
          (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_6c,local_64 * 4);
        }
        local_6c = 0;
        local_64 = 0x80000000;
        local_18 = 0;
        if ((local_14 & 0x80000000) == 0) {
          (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_1c,local_14 * 4);
        }
        local_1c = 0;
        local_14 = 0x80000000;
        FUN_01010310(&PTR_vftable_018e9b94);
        FUN_0100fd10();
LAB_010ddcc5:
        local_84 = 0;
        if ((local_80 & 0x80000000) == 0) {
          (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_88,local_80 * 8);
        }
        local_88 = 0;
        local_80 = 0x80000000;
        FUN_01010310(&PTR_vftable_018e9b94);
        FUN_0100fd10();
        local_a4 = 0;
        if ((local_a0 & 0x80000000) == 0) {
LAB_010ddc4a:
          local_a4 = 0;
          (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_a8,local_a0 * 8);
        }
LAB_010ddc5a:
        local_a8 = 0;
        local_a0 = 0x80000000;
        FUN_01025870();
        FUN_01010310(&PTR_vftable_018e9b94);
        FUN_0100fd10();
        local_5c = 0;
        if ((local_58 & 0x80000000) == 0) {
LAB_010dd511:
          local_5c = 0;
          (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_60,local_58 * 8);
        }
LAB_010dd521:
        local_60 = 0;
        local_58 = 0x80000000;
        FUN_010107e0(&PTR_vftable_018e9b94);
        FUN_0100fe00();
        local_34 = 0;
        if ((local_30 & 0x80000000) == 0) {
          (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_38,local_30 * 8);
        }
        local_38 = 0;
        local_30 = 0x80000000;
LAB_010dd56c:
        FUN_010107e0(&PTR_vftable_018e9b94);
        FUN_0100fe00();
        return 1;
      }
      iVar6 = iVar7 * 4;
      iVar7 = iVar7 + 1;
      *(undefined4 *)(*piVar1 + iVar4 * 4) = *(undefined4 *)(local_1c + iVar6);
      iVar4 = local_8;
    } while (iVar7 < (int)local_18);
  }
  FUN_010107b0();
  iVar7 = 0;
  if (0 < *(int *)(iVar4 + 0x10)) {
    do {
      piVar3 = *(int **)(*piVar1 + iVar7 * 4);
      iVar6 = *piVar3;
      if (iVar6 != 0) {
        uVar12 = FUN_010dc8f0(iVar6,piVar3[2]);
        FUN_010104c0(&PTR_vftable_018e9b94,uVar12,iVar7,0);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(iVar4 + 0x10));
  }
  local_b8 = 0;
  if (-1 < (int)local_b4) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_bc,local_b4 * 4);
  }
  local_bc = 0;
  local_68 = 0;
  local_b4 = 0x80000000;
  if (-1 < (int)local_64) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_6c,local_64 * 4);
  }
  local_6c = 0;
  local_18 = 0;
  local_64 = 0x80000000;
  if (-1 < (int)local_14) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_1c,local_14 * 4);
  }
  local_1c = 0;
  local_14 = 0x80000000;
  FUN_01010310(&PTR_vftable_018e9b94);
  FUN_0100fd10();
  local_84 = 0;
  if ((local_80 & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_88,local_80 * 8);
  }
  local_88 = 0;
  local_80 = 0x80000000;
  FUN_01010310(&PTR_vftable_018e9b94);
  FUN_0100fd10();
  local_a4 = 0;
  if ((local_a0 & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_a8,local_a0 * 8);
  }
  local_a8 = 0;
  local_a0 = 0x80000000;
  FUN_01025870();
  FUN_01010310(&PTR_vftable_018e9b94);
  FUN_0100fd10();
  local_5c = 0;
  if ((local_58 & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_60,local_58 * 8);
  }
  local_60 = 0;
  local_58 = 0x80000000;
  FUN_010107e0(&PTR_vftable_018e9b94);
  FUN_0100fe00();
  local_34 = 0;
  if ((local_30 & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_38,local_30 * 8);
  }
  local_38 = 0;
  local_30 = 0x80000000;
  FUN_010107e0(&PTR_vftable_018e9b94);
  FUN_0100fe00();
  return 0;
}

// 010DDE10  FUN_010dde10  size=267  [run]
void FUN_010dde10(undefined4 *param_1,undefined4 param_2,int param_3,int *param_4,int param_5,
                 undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 local_18;
  int local_10;
  int local_8;
  
  uVar6 = FUN_010dc960(param_2,param_3);
  piVar3 = (int *)(**(code **)(*param_4 + 0x24))(param_2);
  iVar5 = -1;
  if ((piVar3 == (int *)0x0) || (iVar4 = (**(code **)(*piVar3 + 0xc))(), iVar4 != param_3)) {
    iVar5 = FUN_010105b0(uVar6,0xffffffff,0);
  }
  local_8 = FUN_010105b0(uVar6,0,0);
  if ((iVar5 == -1) || (local_8 == 1)) {
    iVar5 = FUN_010105b0(uVar6,0xffffffff,0);
  }
  local_10 = iVar5;
  local_18 = uVar6;
  if (local_8 != 2) {
    iVar4 = 0;
    if (0 < (int)param_1[1]) {
      piVar3 = (int *)*param_1;
      do {
        if (((int)uVar6 == *piVar3) && ((int)((ulonglong)uVar6 >> 0x20) == piVar3[1]))
        goto LAB_010ddecf;
        iVar4 = iVar4 + 1;
        piVar3 = piVar3 + 4;
      } while (iVar4 < (int)param_1[1]);
    }
    FUN_010e0630(&local_18);
  }
LAB_010ddecf:
  if (-1 < iVar5) {
    iVar5 = *(int *)(*(int *)(param_5 + 0xc) + iVar5 * 4);
    iVar4 = *(int *)(iVar5 + 0x14);
    while (iVar4 = iVar4 + -1, -1 < iVar4) {
      iVar1 = *(int *)(iVar5 + 0x10);
      if (*(int *)(iVar1 + iVar4 * 8) == 7) {
        puVar2 = *(undefined4 **)(iVar1 + iVar4 * 8 + 4);
        FUN_010dde10(param_1,*puVar2,puVar2[1],param_4,param_5,param_6,param_7);
      }
    }
  }
  return;
}


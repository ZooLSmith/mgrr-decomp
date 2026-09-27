// lib/havok/Source/Common/Compat/Deprecated/Packfile/Xml/hkXmlPackfileReader.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0105B560..0105C930, 36 functions

#include "mgrr.h"
#include "hkXmlPackfileReader.h"
#include "hkXmlPackfileUpdateTracker.h"

// 0105B560  hkXmlPackfileReader::vf38  size=3753  [__FILE__]
undefined4 __thiscall hkXmlPackfileReader::vf38(int *param_1,uint param_2,int *param_3)

{
  int *piVar1;
  code *pcVar2;
  char cVar3;
  LPVOID pvVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  int iVar11;
  uint uVar12;
  undefined1 *puVar13;
  undefined4 *puVar14;
  undefined *puVar15;
  undefined1 local_314 [528];
  undefined1 local_104 [20];
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined **local_bc [6];
  int local_a4;
  uint local_a0;
  int local_9c;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  int local_68;
  int local_64;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 *local_24;
  int *local_20;
  int local_1c;
  undefined4 local_18;
  uint local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  local_1c = 0;
  local_18 = 0;
  local_14 = 0x80000000;
  local_c = 0x4000;
  pvVar4 = TlsGetValue(DAT_01f8fc4c);
  local_10 = *(int *)((int)pvVar4 + 0xc);
  if ((*(int *)((int)pvVar4 + 8) < 0x4000) || (*(uint *)((int)pvVar4 + 0x10) < local_10 + 0x4000U))
  {
    local_10 = FUN_0100b780(0x4000);
  }
  else {
    *(uint *)((int)pvVar4 + 0xc) = local_10 + 0x4000U;
  }
  local_14 = 0x80004000;
  local_44 = 0;
  local_1c = local_10;
  hkLineNumberStreamReader::hkLineNumberStreamReader(param_2);
  hkXmlParser::hkXmlParser();
  param_2 = param_2 & 0xffffff00;
  local_bc[0] = _anon_EC4D7004::hkPatchClassInstanceXmlParser::vftable;
  local_a4 = 0;
  local_a0 = 0;
  local_9c = 1;
  local_f0 = 0;
  local_ec = 0;
  local_e8 = 0x80000000;
  local_e4 = 0;
  local_e0 = 0;
  local_dc = 0x80000000;
  local_d8 = 0;
  local_d4 = 0;
  local_d0 = 0x80000000;
  local_cc = 0;
  local_c8 = 0;
  local_c4 = 0x80000000;
  local_c0 = 0;
  FUN_01025830(param_2);
  param_2 = param_2 & 0xffffff00;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0xffffffff;
  FUN_01025830(param_2);
  param_2 = param_2 & 0xffffff00;
  FUN_01025830(param_2);
  param_2 = param_2 & 0xffffff00;
  FUN_01025830(param_2);
  hkXmlObjectReader::hkXmlObjectReader(local_bc,local_98);
  local_30 = 0;
  local_2c = 0;
  local_28 = 0xffffffff;
  local_64 = 0;
  (**(code **)(*param_1 + 0x30))();
  (**(code **)(*(int *)param_1[0x12] + 0x1c))(&DAT_0225bbe4,0);
  (**(code **)(*(int *)param_1[0x12] + 0x1c))(&DAT_0225bca4,0);
  if (param_3 != (int *)0x0) {
    local_50 = 0;
    local_4c = 0;
    local_48 = -0x80000000;
    (**(code **)(*param_3 + 0x14))(&local_50);
    iVar11 = 0;
    if (0 < local_4c) {
      do {
        (**(code **)(*(int *)param_1[0x12] + 0x1c))(*(undefined4 *)(local_50 + iVar11 * 4),0);
        iVar11 = iVar11 + 1;
      } while (iVar11 < local_4c);
    }
    local_4c = 0;
    if (-1 < local_48) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_50,local_48 * 4);
    }
  }
  FUN_01025470(&DAT_0164cd24,0);
  param_3 = (int *)0x1;
  iVar11 = _anon_EC4D7004::hkPatchClassInstanceXmlParser::vf0C(&local_24,local_104);
  do {
    if (iVar11 != 0) {
      pvVar4 = TlsGetValue(DAT_01f8fc4c);
      FUN_01005d00(*(undefined4 *)((int)pvVar4 + 0x2c),local_64);
      param_3 = (int *)FUN_010253c0();
      FUN_01025890((int)&param_2 + 3,param_3);
      while (param_2._3_1_ != '\0') {
        pcVar10 = (char *)FUN_010253e0(param_3);
        if ((*pcVar10 != '#') && (*pcVar10 == '@')) {
          uVar6 = FUN_01016080(pcVar10 + 1);
          iVar11 = param_1[6];
          if (*(uint *)(iVar11 + 0x38) == (*(uint *)(iVar11 + 0x3c) & 0x3fffffff)) {
            FUN_0100a290(&PTR_vftable_018e9b94,(int *)(iVar11 + 0x34),4);
          }
          *(undefined4 *)(*(int *)(iVar11 + 0x34) + *(int *)(iVar11 + 0x38) * 4) = uVar6;
          *(int *)(iVar11 + 0x38) = *(int *)(iVar11 + 0x38) + 1;
          iVar11 = FUN_01025400(param_3);
          if (iVar11 != -1) {
            iVar8 = *(int *)(param_1[0x11] + 0xc);
            do {
              FUN_010f9d70(uVar6,*(undefined4 *)(iVar8 + iVar11 * 8));
              iVar8 = *(int *)(param_1[0x11] + 0xc);
              iVar11 = *(int *)(iVar8 + 4 + iVar11 * 8);
            } while (iVar11 != -1);
          }
        }
        param_3 = (int *)FUN_01025440(param_3);
        FUN_01025890((int)&param_2 + 3,param_3);
      }
      FUN_0105cd40(param_1 + 0xe,&local_30);
      param_3 = (int *)FUN_010253c0();
      FUN_01025890((int)&param_2 + 3,param_3);
      while (param_2._3_1_ != '\0') {
        local_68 = FUN_01025400(param_3);
        iVar11 = *(int *)param_1[0x12];
        uVar6 = FUN_010093a0();
        iVar11 = (**(code **)(iVar11 + 0x10))(uVar6);
        if (iVar11 == 0) {
          (**(code **)(*(int *)param_1[0x12] + 0x1c))(local_68,0);
        }
        param_3 = (int *)FUN_01025440(param_3);
        FUN_01025890((int)&param_2 + 3,param_3);
      }
      FUN_01010310(&PTR_vftable_018e9b94);
      FUN_0100fd10();
      hkBaseObject::hkBaseObject_76();
      FUN_01025870();
      FUN_01025870();
      FUN_01025870();
      FUN_01010310(&PTR_vftable_018e9b94);
      FUN_0100fd10();
      FUN_0105d070();
      FUN_01025870();
      FUN_010f79a0();
      hkBaseObject::hkBaseObject();
      hkBaseObject::hkBaseObject_55();
      iVar8 = local_c;
      iVar11 = local_10;
      if (local_10 == local_1c) {
        local_18 = 0;
      }
      pvVar4 = TlsGetValue(DAT_01f8fc4c);
      uVar12 = iVar8 + 0x7fU & 0xffffff80;
      if (((*(int *)((int)pvVar4 + 8) < (int)uVar12) ||
          (uVar12 + iVar11 != *(int *)((int)pvVar4 + 0xc))) ||
         (*(int *)((int)pvVar4 + 0x14) == iVar11)) {
        FUN_0100b9b0(iVar11,uVar12);
      }
      else {
        *(int *)((int)pvVar4 + 0xc) = iVar11;
      }
      local_18 = 0;
      if (-1 < (int)local_14) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_1c,local_14 & 0x3fffffff);
      }
      return 0;
    }
    iVar11 = local_24[2];
    uVar12 = ~-(uint)(iVar11 != 1) & (uint)local_24;
    if (uVar12 == 0) {
      if (((uint)local_24 & (iVar11 != 2) - 1) == 0) {
        if (((iVar11 != 3) - 1 & (uint)local_24) == 0) {
          hkErrStream::hkErrStream(local_314,0x200);
          FUN_01018d00("Unhandled tag in XML");
          iVar11 = (**(code **)(*DAT_01f8fc58 + 0xc))
                             (3,0x5ef4e5a3,local_314,
                              "D:\\project\\PRJ_012\\p1\\common\\mw\\hk2011_3_0_r1\\Source\\Common\\Compat\\Deprecated\\Packfile\\Xml\\hkXmlPackfileReader.cpp"
                              ,0x3ba);
          if (iVar11 != 0) {
            pcVar2 = (code *)swi(3);
            uVar6 = (*pcVar2)();
            return uVar6;
          }
          hkBaseObject::hkBaseObject_38();
        }
        else {
          FUN_010fb630(0);
          iVar11 = FUN_010065c0();
          if (0 < iVar11) {
            FUN_01010310(&PTR_vftable_018e9b94);
            FUN_0100fd10();
            hkBaseObject::hkBaseObject_76();
            FUN_01025870();
            FUN_01025870();
            FUN_01025870();
            FUN_01010310(&PTR_vftable_018e9b94);
            FUN_0100fd10();
            FUN_0105d070();
            FUN_01025870();
            FUN_010f79a0();
            hkBaseObject::hkBaseObject();
            hkBaseObject::hkBaseObject_55();
            iVar8 = local_c;
            iVar11 = local_10;
            if (local_10 == local_1c) {
              local_18 = 0;
            }
            pvVar4 = TlsGetValue(DAT_01f8fc4c);
            uVar12 = iVar8 + 0x7fU & 0xffffff80;
            if (((*(int *)((int)pvVar4 + 8) < (int)uVar12) ||
                (uVar12 + iVar11 != *(int *)((int)pvVar4 + 0xc))) ||
               (*(int *)((int)pvVar4 + 0x14) == iVar11)) {
              FUN_0100b9b0(iVar11,uVar12);
            }
            else {
              *(int *)((int)pvVar4 + 0xc) = iVar11;
            }
            local_18 = 0;
            if ((int)local_14 < 0) {
              return 1;
            }
            (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_1c,local_14 & 0x3fffffff);
            return 1;
          }
        }
      }
    }
    else {
      uVar5 = *(uint *)(uVar12 + 0xc) & 0xfffffffe;
      if ((uVar5 == 0) || (iVar11 = FUN_01015b90(uVar5,"hkobject"), iVar11 != 0)) {
        uVar5 = *(uint *)(uVar12 + 0xc) & 0xfffffffe;
        if ((uVar5 != 0) && (iVar11 = FUN_01015b90(uVar5,"hksection"), iVar11 == 0)) {
          uVar6 = FUN_010fb580(&DAT_0164d4cc,"__data__");
          uVar7 = (**(code **)(*param_1 + 0x28))();
          cVar3 = FUN_0105a910(uVar7);
          if (cVar3 != '\0') {
            iVar11 = FUN_01015b90(uVar6,"__types__");
            local_a0 = (uint)(iVar11 == 0);
            local_9c = local_9c + (uint)(local_a0 == 0) * 2 + -1;
          }
          iVar11 = FUN_01025900(uVar6,&local_68);
          if (iVar11 == 0) {
            local_44 = local_68;
          }
          else {
            local_44 = param_1[8];
            uVar6 = FUN_01016080(uVar6);
            iVar11 = param_1[6];
            if (*(uint *)(iVar11 + 0x38) == (*(uint *)(iVar11 + 0x3c) & 0x3fffffff)) {
              FUN_0100a290(&PTR_vftable_018e9b94,(int *)(iVar11 + 0x34),4);
            }
            *(undefined4 *)(*(int *)(iVar11 + 0x34) + *(int *)(iVar11 + 0x38) * 4) = uVar6;
            *(int *)(iVar11 + 0x38) = *(int *)(iVar11 + 0x38) + 1;
            piVar1 = param_1 + 7;
            if (param_1[8] == (param_1[9] & 0x3fffffffU)) {
              FUN_0100a290(&PTR_vftable_018e9b94,piVar1,4);
            }
            *(undefined4 *)(*piVar1 + param_1[8] * 4) = uVar6;
            param_1[8] = param_1[8] + 1;
            FUN_01025470(*(undefined4 *)(*piVar1 + -4 + param_1[8] * 4),local_44);
          }
          goto LAB_0105bf69;
        }
        uVar12 = *(uint *)(uVar12 + 0xc) & 0xfffffffe;
        if ((uVar12 == 0) || (iVar11 = FUN_01015b90(uVar12,"hkpackfile"), iVar11 != 0)) {
LAB_0105c099:
          FUN_01010310(&PTR_vftable_018e9b94);
          FUN_0100fd10();
          hkBaseObject::hkBaseObject_76();
          FUN_01025870();
          FUN_01025870();
          FUN_01025870();
          FUN_01010310(&PTR_vftable_018e9b94);
          FUN_0100fd10();
          FUN_0105d070();
          FUN_01025870();
          FUN_010f79a0();
          hkBaseObject::hkBaseObject();
          hkBaseObject::hkBaseObject_55();
          if (local_10 == local_1c) {
            local_18 = 0;
          }
LAB_0105c033:
          iVar8 = local_c;
          iVar11 = local_10;
          pvVar4 = TlsGetValue(DAT_01f8fc4c);
          uVar12 = iVar8 + 0x7fU & 0xffffff80;
          if (((*(int *)((int)pvVar4 + 8) < (int)uVar12) ||
              (uVar12 + iVar11 != *(int *)((int)pvVar4 + 0xc))) ||
             (*(int *)((int)pvVar4 + 0x14) == iVar11)) {
            FUN_0100b9b0(iVar11,uVar12);
          }
          else {
            *(int *)((int)pvVar4 + 0xc) = iVar11;
          }
          local_18 = 0;
          if (-1 < (int)local_14) {
            (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_1c,local_14 & 0x3fffffff);
          }
          return 1;
        }
        local_8 = 0;
        FUN_0105aad0(&param_3,&local_8);
        uVar6 = local_8;
        (**(code **)(*param_1 + 0x2c))(local_8);
        pvVar4 = TlsGetValue(DAT_01f8fc4c);
        FUN_01005d00(*(undefined4 *)((int)pvVar4 + 0x2c),uVar6);
        if ((int)param_3 < 8) {
          if (4 < (int)param_3) {
            (**(code **)(*(int *)param_1[0x12] + 0x1c))(&DAT_0225bbb4,0);
            puVar15 = &DAT_01f904dc;
            goto LAB_0105bd93;
          }
          if (1 < (int)param_3) {
            puVar15 = &DAT_0225bc14;
            goto LAB_0105bd93;
          }
        }
        else {
          (**(code **)(*(int *)param_1[0x12] + 0x1c))(&DAT_01f9050c,0);
          puVar15 = &DAT_01f904dc;
LAB_0105bd93:
          (**(code **)(*(int *)param_1[0x12] + 0x1c))(puVar15,0);
        }
        iVar11 = (**(code **)(*param_1 + 0x28))();
        if ((iVar11 != 0) && (iVar11 = (**(code **)(*param_1 + 0x28))(), iVar11 != 0)) {
          uVar6 = FUN_010e0a10(iVar11);
          iVar8 = FUN_01015b90(uVar6);
          if (iVar8 == 0) {
            iVar11 = (**(code **)(*DAT_0209b610 + 0x10))();
          }
          else {
            iVar11 = FUN_0104ed70(iVar11);
          }
          if (iVar11 != 0) {
            FUN_010faf60(iVar11);
          }
        }
      }
      else {
        local_8 = FUN_010fb580("class",0);
        uVar6 = (**(code **)(*param_1 + 0x28))();
        local_40 = FUN_0105adc0(local_8,local_78,&local_3c,param_3,uVar6);
        local_8 = FUN_010fb580(&DAT_0164d4cc,0);
        if (local_40 == 0) {
          FUN_01010310(&PTR_vftable_018e9b94);
          FUN_0100fd10();
          hkBaseObject::hkBaseObject_76();
          FUN_01025870();
          FUN_01025870();
          FUN_01025870();
          FUN_01010310(&PTR_vftable_018e9b94);
          FUN_0100fd10();
          FUN_0105d070();
          FUN_01025870();
          FUN_010f79a0();
          hkBaseObject::hkBaseObject();
          hkBaseObject::hkBaseObject_55();
          if (local_10 == local_1c) {
            local_18 = 0;
          }
          goto LAB_0105c033;
        }
        local_20 = (int *)FUN_01025530(local_8);
        FUN_01025890((int)&param_2 + 3,local_20);
        if (param_2._3_1_ == '\0') {
          local_8 = FUN_01015d80(local_8,&PTR_vftable_018e9b94);
          FUN_01025470(local_8,0);
        }
        else {
          local_8 = FUN_010253e0(local_20);
          FUN_01025420(local_20,0);
        }
        local_20 = (int *)FUN_010fb580("export",0);
        if (local_20 == (int *)0x0) {
          local_20 = (int *)0x0;
        }
        else {
          local_20 = (int *)FUN_01016080(local_20);
          iVar11 = param_1[6];
          if (*(uint *)(iVar11 + 0x38) == (*(uint *)(iVar11 + 0x3c) & 0x3fffffff)) {
            FUN_0100a290(&PTR_vftable_018e9b94,(int *)(iVar11 + 0x34),4);
          }
          *(int **)(*(int *)(iVar11 + 0x34) + *(int *)(iVar11 + 0x38) * 4) = local_20;
          *(int *)(iVar11 + 0x38) = *(int *)(iVar11 + 0x38) + 1;
        }
        if (local_a4 != 0) {
          if (((uint)local_24 & ~-(uint)(local_24[2] != 1)) == 0) {
            if (((uint)local_24 & (local_24[2] != 2) - 1) != 0) {
              local_a4 = local_a4 + 1;
            }
          }
          else {
            local_a4 = local_a4 + -1;
          }
        }
        hkXmlParser::vf10(local_24);
        local_24 = (undefined4 *)0x0;
        local_18 = 0;
        iVar11 = FUN_010fee70(local_104,&local_1c,local_40,&local_f0);
        if (iVar11 != 0) goto LAB_0105c099;
        uVar6 = FUN_010093a0("hkClass");
        iVar11 = FUN_01015b90(uVar6);
        if (iVar11 == 0) {
          FUN_010f7870(local_1c);
          uVar6 = (**(code **)(*param_1 + 0x28))();
          puVar14 = &local_3c;
          puVar13 = local_78;
          iVar11 = (int)param_3;
          uVar7 = FUN_010093a0(puVar13,puVar14,param_3,uVar6);
          iVar11 = FUN_0105adc0(uVar7,puVar13,puVar14,iVar11,uVar6);
          if (iVar11 == 0) goto LAB_0105b9bc;
          local_ec = 0;
          local_e0 = 0;
          local_d4 = 0;
          local_c8 = 0;
        }
        else {
LAB_0105b9bc:
          uVar6 = local_18;
          pvVar4 = TlsGetValue(DAT_01f8fc4c);
          iVar11 = FUN_01005cb0(*(undefined4 *)((int)pvVar4 + 0x2c),uVar6);
          FUN_01015e80(iVar11,local_1c,local_18);
          FUN_010f7870(iVar11);
          iVar8 = param_1[6];
          if (*(uint *)(iVar8 + 0x38) == (*(uint *)(iVar8 + 0x3c) & 0x3fffffff)) {
            FUN_0100a290(&PTR_vftable_018e9b94,(int *)(iVar8 + 0x34),4);
          }
          *(int *)(*(int *)(iVar8 + 0x34) + *(int *)(iVar8 + 0x38) * 4) = iVar11;
          *(int *)(iVar8 + 0x38) = *(int *)(iVar8 + 0x38) + 1;
        }
        if (local_20 != (int *)0x0) {
          FUN_010f9d30(local_20,iVar11);
        }
        uVar6 = local_8;
        FUN_01025470(local_8,iVar11);
        FUN_0105b150(uVar6,iVar11,&local_f0,local_98,local_88);
        uVar6 = FUN_010093a0("hkClass");
        iVar8 = FUN_01015b90(uVar6);
        if (iVar8 == 0) {
          uVar6 = FUN_010093a0();
          FUN_01025470(uVar6,iVar11);
          local_ec = 0;
          local_e0 = 0;
          local_d4 = 0;
          local_c8 = 0;
        }
        else {
          iVar8 = FUN_010093a0();
          if (((iVar8 != 0) && (iVar9 = FUN_01015b90(iVar8,"hkClass"), iVar9 != 0)) &&
             ((iVar9 = FUN_01015b90(iVar8,"hkClassMember"), iVar9 != 0 &&
              ((iVar9 = FUN_01015b90(iVar8,"hkClassEnum"), iVar9 != 0 &&
               (iVar8 = FUN_01015b90(iVar8,"hkClassEnumItem"), iVar8 != 0)))))) {
            if (param_1[0xf] == (param_1[0x10] & 0x3fffffffU)) {
              FUN_0100a290(&PTR_vftable_018e9b94,param_1 + 0xe,8);
            }
            local_20 = (int *)(param_1[0xe] + param_1[0xf] * 8);
            param_1[0xf] = param_1[0xf] + 1;
            local_20[1] = local_40;
            *local_20 = iVar11;
            FUN_010100a0(&PTR_vftable_018e9b94,iVar11,local_40);
            if (((local_44 == 0) && (*(int *)(param_1[0x11] + 0x34) == 0)) &&
               (((local_64 == 0 && ((int)param_3 < 6)) ||
                (iVar11 = FUN_01015b90(local_64,local_8), iVar11 == 0)))) {
              piVar1 = local_20;
              uVar6 = FUN_010093a0();
              FUN_0105f510(*piVar1,uVar6);
            }
          }
          local_ec = 0;
          local_e0 = 0;
          local_d4 = 0;
          local_c8 = 0;
        }
      }
    }
LAB_0105bf69:
    if (local_24 != (undefined4 *)0x0) {
      (**(code **)*local_24)(1);
    }
    iVar11 = _anon_EC4D7004::hkPatchClassInstanceXmlParser::vf0C(&local_24,local_104);
  } while( true );
}

// 0105C410  _anon_EC4D7004::hkPatchClassInstanceXmlParser::hkPatchClassInstanceXmlParser  size=33  [between]
undefined4 * __fastcall
_anon_EC4D7004::hkPatchClassInstanceXmlParser::hkPatchClassInstanceXmlParser(undefined4 *param_1)

{
  hkXmlParser::hkXmlParser();
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = vftable;
  param_1[8] = 1;
  return param_1;
}

// 0105C440  _anon_EC4D7004::hkPatchClassInstanceXmlParser::vf10  size=76  [between]
void __thiscall _anon_EC4D7004::hkPatchClassInstanceXmlParser::vf10(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 != 0) {
    if ((param_2 & ~-(uint)(*(int *)(param_2 + 8) != 1)) != 0) {
      *(int *)(param_1 + 0x18) = iVar1 + -1;
      hkXmlParser::vf10(param_2);
      return;
    }
    if ((param_2 & (*(int *)(param_2 + 8) != 2) - 1) != 0) {
      *(int *)(param_1 + 0x18) = iVar1 + 1;
    }
  }
  hkXmlParser::vf10(param_2);
  return;
}

// 0105C490  _anon_EC4D7004::hkPatchClassInstanceXmlParser::vf14  size=36  [between]
void __thiscall
_anon_EC4D7004::hkPatchClassInstanceXmlParser::vf14
          (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  hkXmlParser::vf14(param_2,param_3,param_4);
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
  return;
}

// 0105C4C0  FUN_0105c4c0  size=27  [between]
void __thiscall FUN_0105c4c0(int param_1,int param_2)

{
  *(int *)(param_1 + 0x1c) = param_2;
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + (uint)(param_2 == 0) * 2 + -1;
  return;
}

// 0105C4F0  hkXmlPackfileUpdateTracker::hkXmlPackfileUpdateTracker_2  size=41  [between]
undefined4 * __thiscall
hkXmlPackfileUpdateTracker::hkXmlPackfileUpdateTracker_2
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  hkPackfileObjectUpdateTracker::hkPackfileObjectUpdateTracker(param_2);
  *param_1 = vftable;
  param_1[0xe] = 0;
  param_1[0xf] = param_3;
  return param_1;
}

// 0105C570  FUN_0105c570  size=27  [between]
uint __fastcall FUN_0105c570(uint param_1)

{
  undefined4 local_8;
  
  local_8 = param_1 & 0xffffff00;
  FUN_01025830(local_8);
  return param_1;
}

// 0105C590  FUN_0105c590  size=9  [between]
void FUN_0105c590(void)

{
  FUN_01025470();
  return;
}

// 0105C5A0  FUN_0105c5a0  size=9  [between]
void FUN_0105c5a0(void)

{
  FUN_01025530();
  return;
}

// 0105C5B0  FUN_0105c5b0  size=9  [between]
void FUN_0105c5b0(void)

{
  FUN_01025be0();
  return;
}

// 0105C5C0  FUN_0105c5c0  size=43  [between]
undefined4 FUN_0105c5c0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_01025900(param_1,&param_1);
  if (iVar1 == 0) {
    *param_2 = param_1;
    return 0;
  }
  return 1;
}

// 0105C5F0  FUN_0105c5f0  size=9  [between]
void FUN_0105c5f0(void)

{
  FUN_010255c0();
  return;
}

// 0105C610  FUN_0105c610  size=9  [between]
void FUN_0105c610(void)

{
  FUN_010253e0();
  return;
}

// 0105C620  FUN_0105c620  size=9  [between]
void FUN_0105c620(void)

{
  FUN_01025400();
  return;
}

// 0105C630  FUN_0105c630  size=9  [between]
void FUN_0105c630(void)

{
  FUN_01025440();
  return;
}

// 0105C640  FUN_0105c640  size=24  [between]
undefined4 FUN_0105c640(undefined4 param_1,undefined4 param_2)

{
  FUN_01025890(param_1,param_2);
  return param_1;
}

// 0105C660  FUN_0105c660  size=27  [between]
uint __fastcall FUN_0105c660(uint param_1)

{
  undefined4 local_8;
  
  local_8 = param_1 & 0xffffff00;
  FUN_01025830(local_8);
  return param_1;
}

// 0105C680  FUN_0105c680  size=9  [between]
void FUN_0105c680(void)

{
  FUN_01025470();
  return;
}

// 0105C690  FUN_0105c690  size=9  [between]
void FUN_0105c690(void)

{
  FUN_01025530();
  return;
}

// 0105C6A0  FUN_0105c6a0  size=9  [between]
void FUN_0105c6a0(void)

{
  FUN_010255c0();
  return;
}

// 0105C6C0  FUN_0105c6c0  size=9  [between]
void FUN_0105c6c0(void)

{
  FUN_01025400();
  return;
}

// 0105C6D0  FUN_0105c6d0  size=9  [between]
void FUN_0105c6d0(void)

{
  FUN_01025440();
  return;
}

// 0105C6E0  FUN_0105c6e0  size=24  [between]
undefined4 FUN_0105c6e0(undefined4 param_1,undefined4 param_2)

{
  FUN_01025890(param_1,param_2);
  return param_1;
}

// 0105C700  FUN_0105c700  size=27  [between]
uint __fastcall FUN_0105c700(uint param_1)

{
  undefined4 local_8;
  
  local_8 = param_1 & 0xffffff00;
  FUN_01025830(local_8);
  return param_1;
}

// 0105C720  FUN_0105c720  size=9  [between]
void FUN_0105c720(void)

{
  FUN_01025470();
  return;
}

// 0105C730  FUN_0105c730  size=43  [between]
undefined4 FUN_0105c730(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_01025900(param_1,&param_1);
  if (iVar1 == 0) {
    *param_2 = param_1;
    return 0;
  }
  return 1;
}

// 0105C760  FUN_0105c760  size=9  [between]
void FUN_0105c760(void)

{
  FUN_01025420();
  return;
}

// 0105C770  FUN_0105c770  size=20  [between]
void __thiscall FUN_0105c770(int *param_1,undefined4 param_2)

{
  *(bool *)param_2 = param_1[3] != *param_1;
  return;
}

// 0105C7C0  FUN_0105c7c0  size=15  [between]
int __thiscall FUN_0105c7c0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 8;
}

// 0105C7E0  FUN_0105c7e0  size=15  [between]
int __thiscall FUN_0105c7e0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 8;
}

// 0105C810  FUN_0105c810  size=22  [between]
void __fastcall FUN_0105c810(int *param_1)

{
  if (*param_1 != 0) {
    FUN_010060a0();
  }
  *param_1 = 0;
  return;
}

// 0105C830  FUN_0105c830  size=51  [between]
int __thiscall FUN_0105c830(uint *param_1,int param_2)

{
  int iVar1;
  
  if ((*param_1 & 0xfffffffe) == 0) {
    return -(uint)(param_2 != 0);
  }
  if (param_2 != 0) {
    iVar1 = FUN_01015b90(*param_1 & 0xfffffffe,param_2);
    return iVar1;
  }
  return 1;
}

// 0105C870  FUN_0105c870  size=78  [between]
bool __thiscall FUN_0105c870(uint *param_1,int param_2)

{
  int iVar1;
  
  if ((*param_1 & 0xfffffffe) == 0) {
    return param_2 == 0;
  }
  if (param_2 != 0) {
    iVar1 = FUN_01015b90(*param_1 & 0xfffffffe,param_2);
    return iVar1 == 0;
  }
  return false;
}

// 0105C8C0  FUN_0105c8c0  size=38  [between]
void FUN_0105c8c0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 0105C8F0  _anon_EC4D7004::hkPatchClassInstanceXmlParser::vf00  size=52  [between]
int __thiscall _anon_EC4D7004::hkPatchClassInstanceXmlParser::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 0105C930  FUN_0105c930  size=221  [__FILE__]
void __thiscall FUN_0105c930(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *puVar5;
  char *pcVar6;
  undefined1 local_214 [524];
  int *local_8;
  
  iVar3 = 0;
  local_8 = param_1;
  if (0 < param_3) {
    do {
      iVar2 = *(int *)(param_2 + iVar3 * 8);
      if ((iVar2 != 0) &&
         (piVar1 = (int *)(param_2 + 4 + iVar3 * 8), *(int *)(param_2 + 4 + iVar3 * 8) == 0)) {
        iVar2 = FUN_01010160(iVar2,0);
        *piVar1 = iVar2;
        if (iVar2 == 0) {
          hkErrStream::hkErrStream(local_214,0x200);
          uVar4 = *(undefined4 *)(param_2 + iVar3 * 8);
          pcVar6 = 
          "You will have to set manually corresponding class pointer in the variant. Otherwise you have to store metadata in the packfile."
          ;
          puVar5 = &DAT_0170216c;
          FUN_01018d00("Can not find class pointer for an object at 0x");
          FUN_01018c60(uVar4);
          FUN_01018d00(puVar5);
          FUN_01018d00(pcVar6);
          (**(code **)(*DAT_01f8fc58 + 0xc))
                    (1,0x67fde46,local_214,
                     "D:\\project\\PRJ_012\\p1\\common\\mw\\hk2011_3_0_r1\\Source\\Common\\Compat\\Deprecated\\Packfile\\Xml\\hkXmlPackfileReader.cpp"
                     ,0x15c);
          hkBaseObject::hkBaseObject_38();
        }
        else {
          (**(code **)(*local_8 + 0x14))(iVar2,piVar1);
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_3);
  }
  return;
}


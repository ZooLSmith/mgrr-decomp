// lib/havok/Source/Common/Serialize/Serialize/Xml/hkXmlObjectWriter.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 010F8DD0..010F8DD0, 1 functions

#include "mgrr.h"

// 010F8DD0  FUN_010f8dd0  size=1540  [__FILE__]
void FUN_010f8dd0(undefined4 *param_1,int *param_2,int param_3,undefined4 param_4,int param_5)

{
  code *pcVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  undefined1 *puVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  undefined1 local_314 [256];
  undefined1 local_214 [256];
  undefined1 local_114 [256];
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  piVar6 = param_2;
  piVar10 = (int *)((uint)*(ushort *)((int)param_2 + 0x12) + param_3);
  if (((*(ushort *)(param_2 + 4) & 0x400) != 0) && (*(char *)(param_5 + 0x28) == '\0')) {
    FUN_01018f60(param_4,"\n%s<!-- %s SERIALIZE_IGNORED -->",*param_1,*param_2);
    return;
  }
  if ((((char)param_2[3] == '\x14') && (*(char *)((int)param_2 + 0xd) == '\x02')) && (*piVar10 == 0)
     ) {
    FUN_01018f60(param_4,"\n%s<!-- <hkparam name=\"%s\">(null)</hkparam> -->",*param_1,*param_2);
    return;
  }
  FUN_01018f60(param_4,"\n%s<hkparam name=\"%s\"",*param_1,*param_2);
  switch((char)piVar6[3]) {
  case '\x16':
  case '\x17':
  case '\x1a':
    iVar8 = piVar10[1];
    break;
  default:
    goto switchD_010f8e71_caseD_18;
  case '\x1b':
    iVar8 = piVar10[2];
  }
  FUN_01018f60(param_4," numelements=\"%i\"",iVar8);
switchD_010f8e71_caseD_18:
  FUN_01018f60(param_4,&DAT_016cc48c);
  switch((char)piVar6[3]) {
  case '\x01':
  case '\x02':
  case '\x03':
  case '\x04':
  case '\x05':
  case '\x06':
  case '\a':
  case '\b':
  case '\t':
  case '\n':
  case '\v':
  case '\f':
  case '\r':
  case '\x0e':
  case '\x0f':
  case '\x10':
  case '\x11':
  case '\x12':
  case '\x1e':
  case ' ':
    iVar8 = FUN_010f7bf0();
    param_3 = iVar8;
    local_14 = FUN_01016360();
    local_14 = local_14 / iVar8;
    uVar9 = 0;
    param_2 = piVar10;
    if (0 < param_3) {
      do {
        param_2 = piVar10;
        if ((char)piVar6[3] == '\x02') {
          FUN_01018f60(param_4,&DAT_017d9f04,(int)(char)*piVar10);
          param_2 = piVar10;
        }
        else {
          if (uVar9 != 0) {
            puVar3 = &DAT_016cc51c;
            if (uVar9 != (uVar9 / 0x32) * 0x32) {
              puVar3 = &DAT_01663284;
            }
            FUN_01018f60(param_4,puVar3);
          }
          FUN_010f81c0(param_5);
        }
        piVar10 = (int *)((int)param_2 + local_14);
        uVar9 = uVar9 + 1;
        param_2 = piVar10;
      } while ((int)uVar9 < param_3);
    }
    break;
  case '\x13':
    FUN_01018f60(param_4,"<!-- zero %s -->",*piVar6);
    break;
  case '\x14':
    piVar5 = (int *)FUN_010f7bf0();
    param_2 = piVar5;
    if (*(char *)((int)piVar6 + 0xd) == '\x02') {
      FUN_010f7f00(piVar10,piVar5,param_4);
    }
    else {
      iVar8 = 0;
      if (0 < (int)piVar5) {
        do {
          if (piVar10[iVar8] == 0) {
            FUN_01018d00(&DAT_0164cd24);
          }
          else {
            (**(code **)(**(int **)(param_5 + 0x24) + 4))(piVar10[iVar8],local_114,0x100);
            FUN_01018f60(param_4,&DAT_016575ac,local_114);
            piVar5 = param_2;
          }
          if (iVar8 < (int)((int)piVar5 + -1)) {
            FUN_01018d00(&DAT_01663284);
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < (int)piVar5);
      }
    }
    break;
  case '\x15':
    iVar8 = FUN_010f7bf0();
    if (0 < iVar8) {
      do {
        FUN_01018d00(&DAT_0164cd24);
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    break;
  case '\x16':
  case '\x17':
  case '\x1a':
    FUN_010f8b20(param_1,piVar6,piVar10,param_4,param_5);
    break;
  case '\x18':
    FUN_01016330();
    uVar4 = FUN_01016560(piVar10);
    param_2 = (int *)0x0;
    iVar8 = FUN_01017740(uVar4,&param_2);
    if (iVar8 == 0) {
      FUN_01018f60(param_4,param_2);
    }
    else {
      FUN_01018f60(param_4,"INVALID_VALUE_%i",uVar4);
    }
    break;
  case '\x19':
    FUN_010f88b0();
    param_2 = (int *)FUN_010162f0();
    param_3 = FUN_010f7bf0();
    iVar8 = FUN_01009750();
    if (0 < param_3) {
      do {
        FUN_010f8930(param_2,piVar10,param_4,param_5);
        piVar10 = (int *)((int)piVar10 + iVar8);
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
    FUN_010f88b0();
    uVar4 = *param_1;
    FUN_01018ce0(10);
    FUN_01018d00(uVar4);
    break;
  case '\x1b':
    iVar8 = *piVar10;
    param_3 = iVar8;
    if (iVar8 != 0) {
      FUN_010f88b0();
      FUN_01018f60(param_4,"\n%s<!-- Homogeneous Class -->",*param_1);
      (**(code **)(**(int **)(param_5 + 0x24) + 4))(iVar8,local_114,0x100);
      FUN_01018f60(param_4,&DAT_016575ac,local_114);
      local_14 = FUN_01009750();
      iVar8 = 0;
      if (0 < piVar10[2]) {
        param_2 = (int *)0x0;
        do {
          FUN_010f8930(param_3,(char *)(piVar10[1] + (int)param_2),param_4,param_5);
          param_2 = (int *)((int)param_2 + local_14);
          iVar8 = iVar8 + 1;
        } while (iVar8 < piVar10[2]);
      }
      FUN_010f88b0();
    }
    break;
  case '\x1c':
    piVar6 = (int *)FUN_010f7bf0();
    iVar8 = 0;
    param_2 = piVar6;
    if (0 < (int)piVar6) {
      do {
        iVar2 = param_5;
        if ((piVar10[iVar8 * 2] != 0) && (piVar10[iVar8 * 2 + 1] != 0)) {
          (**(code **)(**(int **)(param_5 + 0x24) + 4))(piVar10[iVar8 * 2],local_214,0x100);
          (**(code **)(**(int **)(iVar2 + 0x24) + 4))(piVar10[iVar8 * 2 + 1],local_114,0x100);
          puVar7 = &DAT_01663284;
          if ((int)param_2 <= iVar8 + 1) {
            puVar7 = &DAT_016416fa;
          }
          FUN_01018f60(param_4,"(%s %s%s)",local_214,local_114,puVar7);
          piVar6 = param_2;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < (int)piVar6);
    }
    break;
  case '\x1d':
    uVar4 = FUN_010f7bf0();
    FUN_010f7f00(piVar10,uVar4,param_4);
    break;
  case '\x1f':
    FUN_01016330();
    uVar4 = FUN_01016560(piVar10);
    local_10 = 0;
    local_c = 0;
    local_8 = -0x80000000;
    FUN_010178d0(uVar4,&local_10,&param_2);
    iVar8 = 0;
    if (0 < local_c) {
      do {
        puVar7 = &DAT_016416fa;
        if (iVar8 != 0) {
          puVar7 = &DAT_01701278;
        }
        FUN_01018f60(param_4,&DAT_0165864c,puVar7,*(undefined4 *)(local_10 + iVar8 * 4));
        iVar8 = iVar8 + 1;
      } while (iVar8 < local_c);
    }
    if (param_2 == (int *)0x0) {
      if (local_c == 0) {
        FUN_01018f60(param_4,&DAT_016b964c);
      }
    }
    else {
      puVar7 = &DAT_016416fa;
      if (local_c != 0) {
        puVar7 = &DAT_01701278;
      }
      FUN_01018f60(param_4,"%s<!-- UNKNOWN BITS -->0x%x",puVar7,param_2);
    }
    local_c = 0;
    if (-1 < local_8) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_10,local_8 * 4);
    }
    break;
  case '!':
    uVar4 = FUN_010f7bf0();
    FUN_010f8060(piVar10,uVar4,param_4);
    break;
  default:
    hkErrStream::hkErrStream(local_314,0x200);
    FUN_01018d00("Unhandled member type found!");
    iVar8 = (**(code **)(*DAT_01f8fc58 + 0xc))
                      (3,0x40a18b57,local_314,
                       "D:\\project\\PRJ_012\\p1\\common\\mw\\hk2011_3_0_r1\\Source\\Common\\Serialize\\Serialize\\Xml\\hkXmlObjectWriter.cpp"
                       ,0x318);
    if (iVar8 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    hkBaseObject::hkBaseObject_38();
  }
  FUN_01018f60(param_4,"</hkparam>");
  return;
}


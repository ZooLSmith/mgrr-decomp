// lib/havok/Source/Common/Serialize/Serialize/Xml/hkXmlObjectReader.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 010FD240..010FEE70, 10 functions

#include "mgrr.h"
#include "hkXmlObjectReader.h"

// 010FD240  FUN_010fd240  size=937  [__FILE__]
uint FUN_010fd240(undefined4 param_1)

{
  code *pcVar1;
  undefined4 *in_EAX;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined1 local_210 [516];
  undefined4 local_c [2];
  
  uVar8 = param_1;
  switch(param_1) {
  case 1:
    FUN_01441ee0(in_EAX);
    break;
  case 2:
    FUN_014420a0();
    break;
  case 3:
    FUN_01442180(&param_1);
    *(undefined1 *)in_EAX = (undefined1)param_1;
    break;
  case 4:
    FUN_01442180(&param_1);
    *(undefined1 *)in_EAX = (undefined1)param_1;
    break;
  case 5:
    FUN_014420e0(in_EAX);
    break;
  case 6:
    FUN_01442130(in_EAX);
    break;
  case 7:
    FUN_01442180(in_EAX);
    break;
  case 8:
    FUN_014421c0(in_EAX);
    break;
  case 9:
    FUN_01442200(in_EAX);
    break;
  case 10:
    FUN_01442240(in_EAX);
    break;
  case 0xb:
    FUN_01442000(in_EAX);
    break;
  case 0xc:
  case 0xd:
    puVar2 = in_EAX + 3;
    puVar6 = in_EAX + 2;
    puVar7 = in_EAX + 1;
    goto LAB_010fd342;
  case 0xe:
  case 0xf:
    FUN_01015ea0();
    puVar2 = in_EAX + 2;
    puVar6 = in_EAX + 1;
    FUN_01442000(in_EAX);
    FUN_01442000(puVar6);
    FUN_01442000(puVar2);
    puVar2 = in_EAX + 6;
    puVar6 = in_EAX + 5;
    FUN_01442000(in_EAX + 4);
    FUN_01442000(puVar6);
    FUN_01442000(puVar2);
    puVar2 = in_EAX + 10;
    puVar6 = in_EAX + 9;
    puVar7 = in_EAX + 8;
    goto LAB_010fd34f;
  case 0x10:
    puVar2 = in_EAX + 2;
    puVar6 = in_EAX + 1;
    FUN_01442000(in_EAX);
    FUN_01442000(puVar6);
    FUN_01442000(puVar2);
    puVar2 = in_EAX + 7;
    puVar6 = in_EAX + 6;
    puVar7 = in_EAX + 5;
    FUN_01442000(in_EAX + 4);
    FUN_01442000(puVar7);
    FUN_01442000(puVar6);
    FUN_01442000(puVar2);
    puVar2 = in_EAX + 10;
    puVar6 = in_EAX + 9;
    FUN_01442000(in_EAX + 8);
    FUN_01442000(puVar6);
    FUN_01442000(puVar2);
    in_EAX[0xb] = 0;
    in_EAX[3] = 0;
    break;
  case 0x11:
    puVar2 = in_EAX + 3;
    puVar6 = in_EAX + 2;
    puVar7 = in_EAX + 1;
    FUN_01442000(in_EAX);
    FUN_01442000(puVar7);
    FUN_01442000(puVar6);
    FUN_01442000(puVar2);
    puVar2 = in_EAX + 7;
    puVar6 = in_EAX + 6;
    puVar7 = in_EAX + 5;
    FUN_01442000(in_EAX + 4);
    FUN_01442000(puVar7);
    FUN_01442000(puVar6);
    FUN_01442000(puVar2);
    puVar2 = in_EAX + 0xb;
    puVar6 = in_EAX + 10;
    puVar7 = in_EAX + 9;
    FUN_01442000(in_EAX + 8);
    FUN_01442000(puVar7);
    FUN_01442000(puVar6);
    FUN_01442000(puVar2);
    puVar2 = in_EAX + 0xf;
    puVar6 = in_EAX + 0xe;
    puVar7 = in_EAX + 0xd;
    in_EAX = in_EAX + 0xc;
LAB_010fd342:
    FUN_01442000(in_EAX);
LAB_010fd34f:
    FUN_01442000(puVar7);
    FUN_01442000(puVar6);
    FUN_01442000(puVar2);
    break;
  case 0x12:
    puVar2 = in_EAX + 2;
    puVar6 = in_EAX + 1;
    FUN_01442000(in_EAX);
    FUN_01442000(puVar6);
    FUN_01442000(puVar2);
    puVar2 = in_EAX + 6;
    puVar6 = in_EAX + 5;
    FUN_01442000(in_EAX + 4);
    FUN_01442000(puVar6);
    FUN_01442000(puVar2);
    puVar2 = in_EAX + 10;
    puVar6 = in_EAX + 9;
    FUN_01442000(in_EAX + 8);
    FUN_01442000(puVar6);
    FUN_01442000(puVar2);
    puVar2 = in_EAX + 0xe;
    puVar6 = in_EAX + 0xd;
    FUN_01442000(in_EAX + 0xc);
    FUN_01442000(puVar6);
    FUN_01442000(puVar2);
    in_EAX[0xb] = 0;
    in_EAX[7] = 0;
    in_EAX[3] = 0;
    in_EAX[0xf] = 0x3f800000;
    break;
  default:
    hkErrStream::hkErrStream(local_210,0x200);
    FUN_01018d00("Class member unknown / unhandled: ");
    FUN_01018dc0(uVar8);
    iVar3 = (**(code **)(*DAT_01f8fc58 + 0xc))
                      (3,0x19fca9ad,local_210,
                       "D:\\project\\PRJ_012\\p1\\common\\mw\\hk2011_3_0_r1\\Source\\Common\\Serialize\\Serialize\\Xml\\hkXmlObjectReader.cpp"
                       ,0x117);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    hkBaseObject::hkBaseObject_38();
    break;
  case 0x1e:
    FUN_01442240(local_c);
    *in_EAX = local_c[0];
    break;
  case 0x20:
    FUN_01442000(&param_1);
    *(short *)in_EAX = (short)((uint)param_1 >> 0x10);
  }
  pcVar5 = (char *)FUN_01441ba0((int)&param_1 + 3);
  return (uint)(*pcVar5 == '\0');
}

// 010FD660  FUN_010fd660  size=157  [between]
bool __thiscall FUN_010fd660(undefined4 param_1,char param_2)

{
  int *in_EAX;
  uint uVar1;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)0x0;
  (**(code **)(*in_EAX + 0xc))(&local_8,param_1);
  uVar1 = (local_8[2] != 3) - 1 & (uint)local_8;
  if (uVar1 != 0) {
    if (param_2 != '\0') {
      FUN_010fb630(&DAT_017da490);
    }
    FUN_01026140(*(uint *)(uVar1 + 0xc) & 0xfffffffe);
    uVar1 = *(uint *)(uVar1 + 0xc);
    if (local_8 != (undefined4 *)0x0) {
      (**(code **)*local_8)(1);
    }
    return (uVar1 & 0xfffffffe) != 0;
  }
  if (((uint)local_8 & (local_8[2] != 2) - 1) != 0) {
    (**(code **)(*in_EAX + 0x10))(local_8);
  }
  return true;
}

// 010FD700  FUN_010fd700  size=107  [between]
undefined4 __fastcall FUN_010fd700(int *param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *local_8;
  
  uVar4 = 0;
  local_8 = (undefined4 *)0x0;
  (**(code **)(*param_1 + 0xc))(&local_8,param_2);
  uVar3 = (local_8[2] != 2) - 1 & (uint)local_8;
  if (uVar3 != 0) {
    uVar1 = *(uint *)(param_3 + 0xc) & 0xfffffffe;
    uVar3 = *(uint *)(uVar3 + 0xc) & 0xfffffffe;
    if (uVar3 == 0) {
      iVar2 = -(uint)(uVar1 != 0);
    }
    else {
      if (uVar1 == 0) goto LAB_010fd753;
      iVar2 = FUN_01015b90(uVar3,uVar1);
    }
    if (iVar2 == 0) goto LAB_010fd758;
  }
LAB_010fd753:
  uVar4 = 1;
LAB_010fd758:
  if (local_8 != (undefined4 *)0x0) {
    (**(code **)*local_8)(1);
  }
  return uVar4;
}

// 010FD770  hkXmlObjectReader::vf10  size=62  [between]
int hkXmlObjectReader::vf10(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  FUN_010fd060("<![CDATA[");
  iVar1 = FUN_010fd0a0(param_1,param_2,param_3);
  if (iVar1 == 0) {
    FUN_010fd060(&DAT_017da494);
  }
  return iVar1;
}

// 010FD7B0  hkXmlObjectReader::hkXmlObjectReader  size=99  [between]
undefined4 * __thiscall
hkXmlObjectReader::hkXmlObjectReader(undefined4 *param_1,int param_2,undefined4 param_3)

{
  LPVOID pvVar1;
  int iVar2;
  undefined4 uVar3;
  
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = vftable;
  param_1[2] = param_2;
  param_1[3] = param_3;
  if (param_2 != 0) {
    FUN_01006000();
    return param_1;
  }
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x18);
  *(undefined2 *)(iVar2 + 4) = 0x18;
  uVar3 = hkXmlParser::hkXmlParser();
  param_1[2] = uVar3;
  return param_1;
}

// 010FD820  FUN_010fd820  size=142  [between]
undefined4 FUN_010fd820(undefined4 param_1,undefined4 *param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *unaff_ESI;
  
  iVar2 = param_2[1];
  if ((iVar2 == 2) && (*(char *)*param_2 == '\0')) {
    return 1;
  }
  iVar3 = FUN_010ff2e0(iVar2,0x10);
  FUN_01015e80(*(int *)*param_3 + iVar3,*param_2,iVar2);
  if (unaff_ESI[1] == (unaff_ESI[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94);
  }
  puVar1 = (undefined4 *)(*unaff_ESI + unaff_ESI[1] * 8);
  *puVar1 = param_1;
  puVar1[1] = iVar3;
  unaff_ESI[1] = unaff_ESI[1] + 1;
  *(uint *)(*param_3 + 4) = *(int *)(*param_3 + 4) + 0xf + iVar2 & 0xfffffff0;
  return 0;
}

// 010FD8B0  FUN_010fd8b0  size=660  [between]
int FUN_010fd8b0(int *param_1,undefined4 param_2,int *param_3,int *param_4,int *param_5,
                undefined4 param_6)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  int *piVar7;
  uint uVar8;
  undefined4 uVar9;
  int local_50;
  int local_4c;
  undefined4 local_48;
  int local_44;
  int local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  undefined4 uStack_10;
  int local_c;
  int local_8;
  
  piVar7 = param_4;
  param_4 = (undefined4 *)0x0;
  (**(code **)(*param_1 + 0xc))(&param_4,param_2);
  uVar8 = ~-(uint)(param_4[2] != 1) & (uint)param_4;
  uVar9 = 0x10;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0x80000000;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0x80000000;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0x80000000;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0x80000000;
  local_20 = 0;
  uVar2 = FUN_01009750(0x10);
  FUN_010ff2e0(uVar2,uVar9);
  iVar3 = FUN_01009750();
  *(uint *)(*param_3 + 4) = *(int *)(*param_3 + 4) + 0xf + iVar3 & 0xfffffff0;
  FUN_010fdee0(&DAT_01f9050c,0,param_3,uVar8,param_1,param_2,&local_50,param_6);
  iVar4 = FUN_010ff2e0(0,0x10);
  iVar5 = FUN_010ff2e0(iVar4,0x10);
  iVar3 = *piVar7;
  *(uint *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 0xf + iVar4 & 0xfffffff0;
  FUN_01015e80(*(int *)*piVar7 + iVar5,*(undefined4 *)*param_3,iVar4);
  iVar3 = 0;
  piVar7 = param_5;
  if (0 < local_4c) {
    do {
      piVar7 = param_5;
      local_c = *(int *)(local_50 + iVar3 * 8) + iVar5;
      local_8 = *(int *)(local_50 + 4 + iVar3 * 8) + iVar5;
      if (param_5[1] == (param_5[2] & 0x3fffffffU)) {
        FUN_0100a290(&PTR_vftable_018e9b94,param_5,8);
      }
      piVar1 = (int *)(*piVar7 + piVar7[1] * 8);
      *piVar1 = local_c;
      piVar1[1] = local_8;
      piVar7[1] = piVar7[1] + 1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < local_4c);
  }
  param_1 = (int *)0x0;
  if (0 < local_40) {
    uStack_10 = 0;
    local_8 = 0;
    do {
      local_1c = *(int *)(local_8 + local_44) + iVar5;
      uStack_18 = *(undefined4 *)(local_8 + 4 + local_44);
      local_14 = *(undefined4 *)(local_8 + 8 + local_44);
      if (piVar7[4] == (piVar7[5] & 0x3fffffffU)) {
        FUN_0100a290(&PTR_vftable_018e9b94,piVar7 + 3,0x10);
      }
      puVar6 = (undefined8 *)(piVar7[4] * 0x10 + piVar7[3]);
      local_8 = local_8 + 0x10;
      *puVar6 = CONCAT44(uStack_18,local_1c);
      puVar6[1] = CONCAT44(uStack_10,local_14);
      piVar7[4] = piVar7[4] + 1;
      param_1 = (int *)((int)param_1 + 1);
    } while ((int)param_1 < local_40);
  }
  param_1 = (int *)0x0;
  if (0 < local_34) {
    do {
      local_8 = *(int *)(local_38 + 4 + (int)param_1 * 8);
      local_c = *(int *)(local_38 + (int)param_1 * 8) + iVar5;
      if (piVar7[7] == (piVar7[8] & 0x3fffffffU)) {
        FUN_0100a290(&PTR_vftable_018e9b94,piVar7 + 6,8);
      }
      piVar1 = (int *)(piVar7[6] + piVar7[7] * 8);
      *piVar1 = local_c;
      piVar1[1] = local_8;
      piVar7[7] = piVar7[7] + 1;
      param_1 = (int *)((int)param_1 + 1);
    } while ((int)param_1 < local_34);
  }
  iVar3 = 0;
  if (0 < local_28) {
    do {
      FUN_010f78c0(*(int *)(local_2c + iVar3 * 8) + iVar5,*(undefined4 *)(local_2c + 4 + iVar3 * 8))
      ;
      iVar3 = iVar3 + 1;
    } while (iVar3 < local_28);
  }
  FUN_010f7870(*(undefined4 *)*param_3);
  if (param_4 != (undefined4 *)0x0) {
    (**(code **)*param_4)(1);
  }
  FUN_010f79a0();
  return iVar5;
}

// 010FDB50  FUN_010fdb50  size=853  [between]
int FUN_010fdb50(int *param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  LPVOID pvVar4;
  undefined4 uVar5;
  size_t sVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int local_28;
  uint local_24;
  uint local_20;
  int local_1c;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar8 = 0;
  local_8 = 0;
  iVar3 = FUN_01016510();
  local_14 = iVar3;
  switch(iVar3) {
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
  case 0x1e:
  case 0x20:
    iVar8 = FUN_01016520();
    local_c = iVar8;
    hkIstream::hkIstream(*param_1,param_1[1] + -1);
    FUN_010ff2e0(iVar8,1);
    iVar3 = FUN_010fd240(iVar3);
    while (iVar3 == 0) {
      *(int *)(*param_2 + 4) = *(int *)(*param_2 + 4) + iVar8;
      piVar2 = (int *)*param_2;
      iVar3 = piVar2[1];
      local_8 = local_8 + 1;
      iVar8 = iVar3 + local_c;
      if ((int)(piVar2[2] & 0x3fffffffU) < iVar8) {
        iVar9 = (piVar2[2] & 0x3fffffffU) * 2;
        if (iVar9 <= iVar8) {
          iVar9 = iVar8;
        }
        FUN_0100a210(&PTR_vftable_018e9b94,piVar2,iVar9,1);
      }
      sVar6 = iVar8 - piVar2[1];
      if (0 < (int)sVar6) {
        _memset((void *)(*piVar2 + piVar2[1]),0,sVar6);
      }
      piVar2[1] = iVar8;
      *(int *)(*param_2 + 4) = iVar3;
      iVar3 = FUN_010fd240(local_14);
      iVar8 = local_c;
    }
    hkBaseObject::hkBaseObject_216();
    break;
  case 0x14:
  case 0x15:
  case 0x1c:
    local_10 = 0;
    local_c = 0;
    if (param_1[1] != 1 && -1 < param_1[1] + -1) {
      do {
        cVar1 = *(char *)(*param_1 + local_c);
        if ((((cVar1 == ' ') || (cVar1 == '\t')) || (cVar1 == '\n')) || (cVar1 == '\r')) {
          if (iVar8 != local_c) {
            iVar9 = local_c - iVar8;
            iVar3 = 0;
            uVar10 = iVar9 + 1;
            local_28 = 0;
            local_24 = 0;
            local_20 = 0x80000000;
            local_18 = uVar10;
            if (uVar10 != 0) {
              pvVar4 = TlsGetValue(DAT_01f8fc4c);
              iVar3 = *(int *)((int)pvVar4 + 0xc);
              uVar7 = iVar9 + 0x80U & 0xffffff80;
              if ((*(int *)((int)pvVar4 + 8) < (int)uVar7) ||
                 (*(uint *)((int)pvVar4 + 0x10) < iVar3 + uVar7)) {
                iVar3 = FUN_0100b780(uVar7);
                iVar8 = local_10;
              }
              else {
                *(uint *)((int)pvVar4 + 0xc) = iVar3 + uVar7;
                iVar8 = local_10;
              }
            }
            local_20 = uVar10 | 0x80000000;
            local_28 = iVar3;
            local_1c = iVar3;
            FUN_01015e80(iVar3,*param_1 + iVar8,iVar9);
            if ((int)(local_20 & 0x3fffffff) < (int)uVar10) {
              uVar7 = (local_20 & 0x3fffffff) * 2;
              if ((int)uVar7 <= (int)uVar10) {
                uVar7 = uVar10;
              }
              FUN_0100a210(&PTR_vftable_018e9b94,&local_28,uVar7,1);
            }
            *(undefined1 *)((local_28 - iVar8) + local_c) = 0;
            local_24 = uVar10;
            uVar5 = FUN_010ff2e0(4,1);
            FUN_010f78c0(uVar5,local_28);
            uVar10 = local_18;
            iVar8 = local_1c;
            *(int *)(*param_2 + 4) = *(int *)(*param_2 + 4) + 4;
            local_8 = local_8 + 1;
            if (local_1c == local_28) {
              local_24 = 0;
            }
            pvVar4 = TlsGetValue(DAT_01f8fc4c);
            uVar10 = uVar10 + 0x7f & 0xffffff80;
            if (((*(int *)((int)pvVar4 + 8) < (int)uVar10) ||
                (uVar10 + iVar8 != *(int *)((int)pvVar4 + 0xc))) ||
               (*(int *)((int)pvVar4 + 0x14) == iVar8)) {
              FUN_0100b9b0(iVar8,uVar10);
            }
            else {
              *(int *)((int)pvVar4 + 0xc) = iVar8;
            }
            local_24 = 0;
            if (-1 < (int)local_20) {
              (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_28,local_20 & 0x3fffffff);
            }
          }
          iVar8 = local_c + 1;
          local_10 = iVar8;
        }
        local_c = local_c + 1;
      } while (local_c < param_1[1] + -1);
    }
    if (iVar8 != param_1[1] + -1) {
      uVar5 = FUN_010ff2e0(4,1);
      FUN_010f78c0(uVar5,*param_1 + iVar8);
      *(int *)(*param_2 + 4) = *(int *)(*param_2 + 4) + 4;
      local_8 = local_8 + 1;
    }
    if (local_14 == 0x1c) {
      local_8 = local_8 / 2;
    }
  default:
  }
  piVar2 = (int *)*param_2;
  iVar8 = piVar2[1];
  uVar10 = iVar8 + 0xfU & 0xfffffff0;
  if ((int)(piVar2[2] & 0x3fffffffU) < (int)uVar10) {
    uVar7 = (piVar2[2] & 0x3fffffffU) * 2;
    if ((int)uVar7 <= (int)uVar10) {
      uVar7 = uVar10;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,piVar2,uVar7,1);
  }
  sVar6 = uVar10 - piVar2[1];
  if (0 < (int)sVar6) {
    _memset((void *)(*piVar2 + piVar2[1]),0,sVar6);
  }
  piVar2[1] = uVar10;
  *(int *)(*param_2 + 4) = iVar8;
  *(uint *)(*param_2 + 4) = *(int *)(*param_2 + 4) + 0xfU & 0xfffffff0;
  return local_8;
}

// 010FDEE0  FUN_010fdee0  size=3891  [between]
undefined4
FUN_010fdee0(undefined4 param_1,int param_2,int *param_3,int param_4,int *param_5,undefined4 param_6
            ,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  LPVOID pvVar8;
  undefined1 *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  char *pcVar13;
  char *pcVar14;
  undefined4 local_208;
  undefined1 *local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined1 local_170 [140];
  undefined4 local_e4;
  undefined1 *local_e0;
  uint local_dc;
  uint local_d8;
  undefined1 local_d4 [128];
  undefined4 local_54;
  int *local_50;
  char *local_4c;
  char *local_48;
  uint local_44;
  int local_40;
  undefined4 *local_3c;
  uint local_38;
  int local_34;
  uint local_30;
  uint local_2c;
  int local_28;
  uint local_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
  iVar3 = (**(code **)(*param_5 + 0xc))(&local_3c,param_6);
  if (iVar3 != 0) {
    return 1;
  }
  do {
    local_38 = ~-(uint)(local_3c[2] != 1) & (uint)local_3c;
    if (local_38 == 0) {
      uVar11 = (local_3c[2] != 2) - 1 & (uint)local_3c;
      if ((uVar11 != 0) && (param_4 != 0)) {
        uVar10 = *(uint *)(param_4 + 0xc) & 0xfffffffe;
        uVar11 = *(uint *)(uVar11 + 0xc) & 0xfffffffe;
        if (uVar11 == 0) {
          iVar3 = -(uint)(uVar10 != 0);
        }
        else {
          if (uVar10 == 0) goto LAB_010fedd6;
          iVar3 = FUN_01015b90(uVar11,uVar10);
        }
        if (iVar3 == 0) {
          if (local_3c != (undefined4 *)0x0) {
            (**(code **)*local_3c)(1);
          }
          return 0;
        }
      }
      goto LAB_010fedd6;
    }
    uVar4 = FUN_010fb580(&DAT_0164d4cc,0);
    puVar5 = (undefined4 *)FUN_01009660(uVar4);
    if (puVar5 == (undefined4 *)0x0) {
      local_c = puVar5;
      (**(code **)(*param_5 + 0x14))(local_38,&local_c,param_6);
      FUN_010060a0();
      if (local_c != (undefined4 *)0x0) {
        FUN_0105d310(local_c);
      }
      goto LAB_010fede2;
    }
    switch(*(char *)(puVar5 + 3)) {
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
      local_e0 = local_d4;
      local_d8 = 0x80000080;
      local_dc = 1;
      local_d4[0] = 0;
      FUN_010fd660(1,&local_e0);
      hkIstream::hkIstream(local_e0,local_dc + -1);
      iVar12 = (uint)*(ushort *)((int)puVar5 + 0x12) + *(int *)*param_3 + param_2;
      puVar6 = (undefined4 *)FUN_010fcfd0();
      iVar3 = FUN_01016360();
      local_18 = (undefined4 *)(iVar3 / (int)puVar6);
      if (0 < (int)puVar6) {
        do {
          local_14 = puVar6;
          FUN_010fd240(*(undefined1 *)(puVar5 + 3));
          iVar12 = FUN_010fcf80(iVar12,local_18);
          local_14 = (undefined4 *)((int)local_14 - 1);
          puVar6 = local_14;
        } while (local_14 != (undefined4 *)0x0);
      }
      hkBaseObject::hkBaseObject_216();
      goto joined_r0x010fe3ab;
    case '\x14':
    case '\x15':
      if ((*(char *)(puVar5 + 3) == '\x14') && (*(char *)((int)puVar5 + 0xd) == '\x02')) {
        local_e0 = local_d4;
        local_d8 = 0x80000080;
        local_dc = 1;
        local_d4[0] = 0;
        iVar3 = FUN_010fd660(0,&local_e0);
        if (iVar3 != 0) {
          FUN_010fd820((uint)*(ushort *)((int)puVar5 + 0x12) + param_2,&local_e0,param_3);
        }
        goto LAB_010fed59;
      }
      local_e0 = local_d4;
      local_d8 = 0x80000080;
      local_dc = 1;
      local_d4[0] = 0;
      FUN_010fd660(1,&local_e0);
      puVar6 = (undefined4 *)0x0;
      local_c = (undefined4 *)0x0;
      puVar7 = (undefined4 *)FUN_010fcfd0();
      local_20 = puVar7;
      iVar3 = FUN_01016360();
      local_1c = (undefined4 *)(iVar3 / (int)puVar7);
      local_10 = (undefined4 *)0x0;
      local_8 = (undefined4 *)0x0;
      local_18 = (undefined4 *)((uint)*(ushort *)((int)puVar5 + 0x12) + param_2);
      puVar5 = local_18;
      if (0 < (int)puVar7) {
        do {
          local_14 = puVar5;
          if ((int)(local_dc + -1) <= (int)local_8) break;
          cVar1 = local_e0[(int)local_8];
          if ((((cVar1 == ' ') || (cVar1 == '\t')) || (cVar1 == '\n')) || (cVar1 == '\r')) {
            if (puVar6 != local_8) {
              iVar12 = (int)local_8 - (int)puVar6;
              iVar3 = 0;
              uVar11 = iVar12 + 1;
              local_34 = 0;
              local_30 = 0;
              local_2c = 0x80000000;
              local_24 = uVar11;
              if (uVar11 != 0) {
                pvVar8 = TlsGetValue(DAT_01f8fc4c);
                iVar3 = *(int *)((int)pvVar8 + 0xc);
                uVar10 = iVar12 + 0x80U & 0xffffff80;
                if ((*(int *)((int)pvVar8 + 8) < (int)uVar10) ||
                   (*(uint *)((int)pvVar8 + 0x10) < iVar3 + uVar10)) {
                  iVar3 = FUN_0100b780(uVar10);
                  puVar6 = local_10;
                }
                else {
                  *(uint *)((int)pvVar8 + 0xc) = iVar3 + uVar10;
                  puVar6 = local_10;
                }
              }
              local_2c = uVar11 | 0x80000000;
              local_34 = iVar3;
              local_28 = iVar3;
              FUN_01015e80(iVar3,local_e0 + (int)puVar6,iVar12);
              if ((int)(local_2c & 0x3fffffff) < (int)uVar11) {
                uVar10 = (local_2c & 0x3fffffff) * 2;
                if ((int)uVar10 <= (int)uVar11) {
                  uVar10 = uVar11;
                }
                FUN_0100a210(&PTR_vftable_018e9b94,&local_34,uVar10,1);
              }
              puVar5 = local_14;
              *(undefined1 *)((local_34 - (int)puVar6) + (int)local_8) = 0;
              local_30 = uVar11;
              FUN_010f78c0(local_14,local_34);
              uVar11 = local_24;
              iVar3 = local_28;
              local_14 = (undefined4 *)((int)puVar5 + (int)local_1c);
              local_c = (undefined4 *)((int)local_c + 1);
              if (local_28 == local_34) {
                local_30 = 0;
              }
              pvVar8 = TlsGetValue(DAT_01f8fc4c);
              uVar11 = uVar11 + 0x7f & 0xffffff80;
              if (((*(int *)((int)pvVar8 + 8) < (int)uVar11) ||
                  (uVar11 + iVar3 != *(int *)((int)pvVar8 + 0xc))) ||
                 (*(int *)((int)pvVar8 + 0x14) == iVar3)) {
                FUN_0100b9b0(iVar3,uVar11);
              }
              else {
                *(int *)((int)pvVar8 + 0xc) = iVar3;
              }
              local_30 = 0;
              if (-1 < (int)local_2c) {
                (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_34,local_2c & 0x3fffffff);
              }
            }
            puVar6 = (undefined4 *)((int)local_8 + 1);
            local_10 = puVar6;
          }
          local_8 = (undefined4 *)((int)local_8 + 1);
          puVar5 = local_14;
        } while ((int)local_c < (int)local_20);
      }
      if ((puVar6 != (undefined4 *)(local_dc - 1)) && ((int)local_c < (int)local_20)) {
        FUN_010f78c0((undefined4 *)((int)local_1c * (int)local_c + (int)local_18),
                     local_e0 + (int)puVar6);
      }
joined_r0x010fe3ab:
      local_dc = 0;
      if (-1 < (int)local_d8) {
        local_dc = 0;
        (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_e0,local_d8 & 0x3fffffff);
      }
      break;
    case '\x16':
    case '\x17':
    case '\x1a':
      local_8 = (undefined4 *)0xffffffff;
      local_14 = (undefined4 *)FUN_010ff2e0(0,1);
      cVar1 = *(char *)((int)puVar5 + 0xd);
      if (cVar1 == '\x19') {
        uVar4 = FUN_010fb580("numelements",0);
        local_8 = (undefined4 *)FUN_01015cf0(uVar4,0);
        local_18 = (undefined4 *)FUN_01016300();
        if (local_18 == (undefined4 *)0x0) {
          FUN_010fcfe0();
        }
        else {
          local_20 = (undefined4 *)FUN_01009750();
          local_1c = (undefined4 *)((int)local_20 * (int)local_8);
          FUN_010ff2e0(local_1c,0x10);
          *(uint *)(*param_3 + 4) = (int)local_1c + *(int *)(*param_3 + 4) + 0xf & 0xfffffff0;
          if (0 < (int)local_8) {
            local_10 = local_14;
            local_1c = local_8;
            do {
              local_c = (undefined4 *)0x0;
              (**(code **)(*param_5 + 0xc))(&local_c,param_6);
              FUN_010fdee0(local_18,local_10,param_3,~-(uint)(local_c[2] != 1) & (uint)local_c,
                           param_5,param_6,param_7,param_8);
              if (local_c != (undefined4 *)0x0) {
                (**(code **)*local_c)(1);
              }
              local_10 = (undefined4 *)((int)local_10 + (int)local_20);
              local_1c = (undefined4 *)((int)local_1c - 1);
            } while (local_1c != (undefined4 *)0x0);
            local_1c = (undefined4 *)0x0;
          }
        }
      }
      else if ((cVar1 != '\x18') && (cVar1 != '\x1f')) {
        iVar3 = FUN_01016510();
        if ((iVar3 == 0x1d) || (iVar3 = FUN_01016510(), iVar3 == 0x21)) {
          uVar4 = FUN_010fb580("numelements",0);
          local_8 = (undefined4 *)FUN_01015cf0(uVar4,0);
          FUN_010ff2e0((int)local_8 * 4,0x10);
          *(uint *)(*param_3 + 4) = (int)local_8 * 4 + 0xf + *(int *)(*param_3 + 4) & 0xfffffff0;
          if (0 < (int)local_8) {
            local_10 = local_14;
            local_18 = local_8;
            do {
              local_c = (undefined4 *)0x0;
              (**(code **)(*param_5 + 0xc))(&local_c,param_6);
              local_e0 = local_d4;
              local_d8 = 0x80000080;
              local_dc = 1;
              local_d4[0] = 0;
              iVar3 = FUN_010fd660(0,&local_e0);
              if (iVar3 != 0) {
                FUN_010fd820(local_10,&local_e0,param_3);
              }
              if (local_c != (undefined4 *)0x0) {
                (**(code **)*local_c)(1);
              }
              (**(code **)(*param_5 + 0xc))(&local_c,param_6);
              if (local_c != (undefined4 *)0x0) {
                (**(code **)*local_c)(1);
              }
              FUN_01015a80();
              local_10 = local_10 + 1;
              local_18 = (undefined4 *)((int)local_18 - 1);
            } while (local_18 != (undefined4 *)0x0);
          }
        }
        else if (*(char *)((int)puVar5 + 0xd) == '\0') {
          FUN_010fcfe0();
          local_8 = (undefined4 *)0x0;
        }
        else {
          local_e4 = CONCAT31(local_e4._1_3_,*(char *)((int)puVar5 + 0xd) != '\x19');
          local_e0 = local_d4;
          local_d8 = 0x80000080;
          local_dc = 1;
          local_d4[0] = 0;
          FUN_010fd660(local_e4,&local_e0);
          local_8 = (undefined4 *)FUN_010fdb50(&local_e0,param_3,param_7);
          FUN_01015a80();
        }
      }
      puVar6 = (undefined4 *)
               FUN_010ff140(*(int *)*param_3 + (uint)*(ushort *)((int)puVar5 + 0x12) + param_2);
      *puVar6 = 0;
      puVar6[1] = local_8;
      if (0 < (int)local_8) {
        FUN_010f7640((uint)*(ushort *)((int)puVar5 + 0x12) + param_2,local_14);
      }
      if (*(char *)(puVar5 + 3) != '\x1a') {
        puVar6[2] = (uint)local_8 | 0x80000000;
      }
      break;
    case '\x18':
      local_e0 = local_d4;
      local_d8 = 0x80000080;
      local_dc = 1;
      local_d4[0] = 0;
      FUN_010fd660(0,&local_e0);
      if (local_dc != 1) {
        FUN_01016330();
        local_54 = 0;
        FUN_01017780(local_e0,&local_54);
        FUN_01016580((uint)*(ushort *)((int)puVar5 + 0x12) + *(int *)*param_3 + param_2,local_54);
      }
      goto LAB_010fed59;
    case '\x19':
      local_10 = (undefined4 *)0x0;
      iVar3 = FUN_010fcfd0();
      if (0 < iVar3) {
        do {
          local_14 = (undefined4 *)0x0;
          (**(code **)(*param_5 + 0xc))(&local_14,param_6);
          uVar11 = ~-(uint)(local_14[2] != 1) & (uint)local_14;
          if (uVar11 == 0) {
            (**(code **)(*param_5 + 0x10))(local_14);
            break;
          }
          iVar3 = FUN_01016300();
          if (iVar3 == 0) {
            FUN_010fcfe0();
          }
          else {
            uVar2 = *(ushort *)((int)puVar5 + 0x12);
            FUN_010162f0();
            iVar3 = FUN_01009750();
            uVar4 = FUN_010162f0(iVar3 * (int)local_10 + (uint)uVar2 + param_2,param_3,uVar11,
                                 param_5,param_6,param_7,param_8);
            FUN_010fdee0(uVar4);
            if (local_14 != (undefined4 *)0x0) {
              (**(code **)*local_14)(1);
            }
          }
          puVar6 = (undefined4 *)((int)local_10 + 1);
          local_10 = puVar6;
          iVar3 = FUN_010fcfd0();
        } while ((int)puVar6 < iVar3);
      }
      break;
    case '\x1b':
      uVar4 = FUN_010fb580("numelements",0);
      local_8 = (undefined4 *)FUN_01015cf0(uVar4,0);
      local_40 = 0;
      (**(code **)(*param_5 + 0xc))(&local_40,param_6);
      (**(code **)(*param_5 + 0x10))(local_40);
      if (*(int *)(local_40 + 8) != 2) {
        local_c = (undefined4 *)0x0;
        local_34 = 0;
        local_30 = 0;
        local_2c = 0x80000000;
        local_24 = 0x400;
        pvVar8 = TlsGetValue(DAT_01f8fc4c);
        iVar3 = *(int *)((int)pvVar8 + 0xc);
        if ((*(int *)((int)pvVar8 + 8) < 0x400) || (*(uint *)((int)pvVar8 + 0x10) < iVar3 + 0x400U))
        {
          iVar3 = FUN_0100b780(0x400);
        }
        else {
          *(uint *)((int)pvVar8 + 0xc) = iVar3 + 0x400U;
        }
        local_50 = &local_34;
        local_2c = 0x80000400;
        local_34 = iVar3;
        local_28 = iVar3;
        if (*(int *)(local_40 + 8) == 1) {
          uVar4 = FUN_010fd8b0(param_5,param_6,&local_50,param_3,param_7,param_8);
          local_c = (undefined4 *)*local_50;
          FUN_010f7640((uint)*(ushort *)((int)puVar5 + 0x12) + param_2,uVar4);
        }
        else if (*(int *)(local_40 + 8) == 3) {
          local_17c = local_170;
          local_174 = 0x80000080;
          local_178 = 1;
          local_170[0] = 0;
          FUN_010fd660(1,&local_17c);
          local_c = (undefined4 *)FUN_01025be0(local_17c,0);
          FUN_010f78c0((uint)*(ushort *)((int)puVar5 + 0x12) + param_2,local_17c);
          FUN_01015a80();
        }
        local_18 = (undefined4 *)FUN_01009750();
        local_20 = (undefined4 *)FUN_010ff2e0(0,1);
        local_1c = (undefined4 *)((int)local_18 * (int)local_8);
        FUN_010ff2e0(local_1c,0x10);
        *(uint *)(*param_3 + 4) = (int)local_1c + *(int *)(*param_3 + 4) + 0xf & 0xfffffff0;
        if (0 < (int)local_8) {
          local_10 = local_20;
          local_1c = local_8;
          do {
            local_14 = (undefined4 *)0x0;
            (**(code **)(*param_5 + 0xc))(&local_14,param_6);
            FUN_010fdee0(local_c,local_10,param_3,~-(uint)(local_14[2] != 1) & (uint)local_14,
                         param_5,param_6,param_7,param_8);
            if (local_14 != (undefined4 *)0x0) {
              (**(code **)*local_14)(1);
            }
            local_10 = (undefined4 *)((int)local_10 + (int)local_18);
            local_1c = (undefined4 *)((int)local_1c - 1);
          } while (local_1c != (undefined4 *)0x0);
        }
        puVar6 = (undefined4 *)
                 FUN_010ff150(*(int *)*param_3 + (uint)*(ushort *)((int)puVar5 + 0x12) + param_2);
        *puVar6 = 0;
        puVar6[1] = 0;
        puVar6[2] = local_8;
        if (0 < (int)local_8) {
          FUN_010f7640(*(ushort *)((int)puVar5 + 0x12) + 4 + param_2,local_20);
        }
        uVar11 = local_24;
        iVar3 = local_28;
        if (local_28 == local_34) {
          local_30 = 0;
        }
        pvVar8 = TlsGetValue(DAT_01f8fc4c);
        uVar11 = uVar11 + 0x7f & 0xffffff80;
        if (((*(int *)((int)pvVar8 + 8) < (int)uVar11) ||
            (uVar11 + iVar3 != *(int *)((int)pvVar8 + 0xc))) ||
           (*(int *)((int)pvVar8 + 0x14) == iVar3)) {
          FUN_0100b9b0(iVar3,uVar11);
        }
        else {
          *(int *)((int)pvVar8 + 0xc) = iVar3;
        }
        local_30 = 0;
        if (-1 < (int)local_2c) {
          (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_34,local_2c & 0x3fffffff);
        }
      }
      break;
    case '\x1c':
      local_e0 = local_d4;
      local_d8 = 0x80000080;
      local_dc = 1;
      local_d4[0] = 0;
      FUN_010fd660(1,&local_e0);
      iVar3 = FUN_01025c80(0x20,0,0x7fffffff);
      if (iVar3 != -1) {
        iVar12 = (uint)*(ushort *)((int)puVar5 + 0x12) + param_2;
        FUN_010269c0(&local_e0);
        FUN_01026570(0,iVar3);
        FUN_010f78c0(iVar12,local_208);
        FUN_01026740(&local_e0);
        FUN_010260c0(iVar3 + 1);
        FUN_010f78c0(iVar12 + 4,local_208);
        FUN_01015a80();
      }
      goto LAB_010fed59;
    case '\x1d':
    case '!':
      local_e0 = local_d4;
      local_d8 = 0x80000080;
      local_dc = 1;
      local_d4[0] = 0;
      iVar3 = FUN_010fd660(0,&local_e0);
      if (iVar3 != 0) {
        FUN_010fd820((uint)*(ushort *)((int)puVar5 + 0x12) + param_2,&local_e0,param_3);
      }
      goto LAB_010fed59;
    case '\x1f':
      local_e0 = local_d4;
      local_d8 = 0x80000080;
      local_dc = 1;
      local_d4[0] = 0;
      FUN_010fd660(0,&local_e0);
      if (local_dc != 1) {
        local_1c = (undefined4 *)FUN_01016330();
        uVar11 = local_dc;
        local_4c = (char *)0x0;
        local_48 = (char *)0x0;
        local_44 = 0x80000000;
        if (0 < (int)local_dc) {
          FUN_0100a210(&PTR_vftable_018e9b94,&local_4c,local_dc & ((int)local_dc < 0) - 1,1);
        }
        local_48 = (char *)uVar11;
        FUN_01015cb0(local_4c,local_e0,local_dc);
        local_8 = (undefined4 *)0x0;
        pcVar14 = local_4c;
joined_r0x010fecb7:
        if (pcVar14 != (char *)0x0) {
          pcVar13 = (char *)0x0;
          puVar9 = (undefined1 *)FUN_01015d60(pcVar14,0x7c);
          if (puVar9 != (undefined1 *)0x0) {
            *puVar9 = 0;
            pcVar13 = puVar9 + 1;
          }
          if ((*pcVar14 < '0') || ('9' < *pcVar14)) goto LAB_010fecee;
          puVar6 = (undefined4 *)FUN_01015cf0(pcVar14,0);
          goto LAB_010fed09;
        }
        pcVar14 = (char *)0x0;
        FUN_01016580((uint)*(ushort *)((int)puVar5 + 0x12) + *(int *)*param_3 + param_2,local_8);
        local_48 = pcVar14;
        if (-1 < (int)local_44) {
          (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_4c,local_44 & 0x3fffffff);
        }
        local_44 = 0x80000000;
        local_4c = pcVar14;
      }
LAB_010fed59:
      FUN_01015a80();
    }
    iVar3 = FUN_010fd700(local_38);
    if (iVar3 == 1) {
      if (local_3c == (undefined4 *)0x0) {
        return 1;
      }
      (**(code **)*local_3c)(1);
      return 1;
    }
LAB_010fedd6:
    if (local_3c != (undefined4 *)0x0) {
      (**(code **)*local_3c)(1);
    }
LAB_010fede2:
    iVar3 = (**(code **)(*param_5 + 0xc))(&local_3c,param_6);
    if (iVar3 != 0) {
      return 1;
    }
  } while( true );
LAB_010fecee:
  local_18 = (undefined4 *)0x0;
  iVar3 = FUN_01017780(pcVar14,&local_18);
  puVar6 = local_18;
  pcVar14 = pcVar13;
  if (iVar3 == 0) {
LAB_010fed09:
    local_8 = (undefined4 *)((uint)local_8 | (uint)puVar6);
    pcVar14 = pcVar13;
  }
  goto joined_r0x010fecb7;
}

// 010FEE70  FUN_010fee70  size=395  [__FILE__]
undefined4 __thiscall
FUN_010fee70(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,int param_5)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined1 local_218 [520];
  undefined4 local_10;
  int local_c;
  undefined4 *local_8;
  
  local_8 = param_3;
  uVar5 = 1;
  local_c = param_1;
  iVar4 = (**(code **)(**(int **)(param_1 + 8) + 0xc))(&param_3,param_2);
  if (iVar4 == 0) {
    iVar4 = param_3[2];
    uVar7 = ~-(uint)(iVar4 != 1) & (uint)param_3;
    if (uVar7 == 0) {
      if (((iVar4 != 3) - 1 & (uint)param_3) == 0) {
        if (((uint)param_3 & (iVar4 != 2) - 1) == 0) {
          hkErrStream::hkErrStream(local_218,0x200);
          FUN_01018d00("Unknown element type returned from XML parser.");
          iVar4 = (**(code **)(*DAT_01f8fc58 + 0xc))
                            (3,0x6a858ec3,local_218,
                             "D:\\project\\PRJ_012\\p1\\common\\mw\\hk2011_3_0_r1\\Source\\Common\\Serialize\\Serialize\\Xml\\hkXmlObjectReader.cpp"
                             ,0x408);
          if (iVar4 != 0) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return uVar5;
          }
          hkBaseObject::hkBaseObject_38();
        }
      }
      else {
        FUN_010fb630(0);
      }
    }
    else {
      iVar4 = FUN_0105c870("hkobject");
      uVar3 = param_4;
      if (iVar4 != 0) {
        uVar8 = 0x10;
        uVar5 = FUN_01009750(0x10);
        param_4 = FUN_010ff2e0(uVar5,uVar8);
        iVar4 = FUN_01009750();
        local_8[1] = iVar4 + 0xf + local_8[1] & 0xfffffff0;
        local_10 = FUN_010093a0();
        iVar4 = param_5;
        piVar6 = (int *)(param_5 + 0x18);
        if (*(uint *)(param_5 + 0x1c) == (*(uint *)(param_5 + 0x20) & 0x3fffffff)) {
          FUN_0100a290(&PTR_vftable_018e9b94,piVar6,8);
        }
        puVar1 = (undefined4 *)(*piVar6 + *(int *)(iVar4 + 0x1c) * 8);
        puVar1[1] = local_10;
        *puVar1 = param_4;
        piVar6 = (int *)(iVar4 + 0x1c);
        *piVar6 = *piVar6 + 1;
        uVar5 = FUN_010fdee0(uVar3,param_4,&local_8,uVar7,*(undefined4 *)(local_c + 8),param_2,
                             param_5,*(undefined4 *)(local_c + 0xc));
      }
    }
    if (param_3 != (undefined4 *)0x0) {
      (**(code **)*param_3)(1);
    }
  }
  return uVar5;
}


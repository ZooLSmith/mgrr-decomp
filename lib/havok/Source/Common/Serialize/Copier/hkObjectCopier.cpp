// lib/havok/Source/Common/Serialize/Copier/hkObjectCopier.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 010F5600..010F6590, 10 functions

#include "mgrr.h"
#include "hkObjectCopier.h"

// 010F5600  FUN_010f5600  size=148  [__FILE__]
void __fastcall
FUN_010f5600(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  code *pcVar1;
  int iVar2;
  undefined1 local_210 [524];
  
  switch(param_4) {
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
    param_1 = param_1 * (param_2 >> 2);
    param_2 = 4;
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
  case 0x20:
    FUN_01016e20(param_5,param_2,param_1);
    return;
  }
  hkErrStream::hkErrStream(local_210,0x200);
  FUN_01018d00("Unknown class member found during write of plain data array.");
  iVar2 = (**(code **)(*DAT_01f8fc58 + 0xc))
                    (3,0x747e1e03,local_210,
                     "D:\\project\\PRJ_012\\p1\\common\\mw\\hk2011_3_0_r1\\Source\\Common\\Serialize\\Copier\\hkObjectCopier.cpp"
                     ,0x101);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  hkBaseObject::hkBaseObject_38();
  return;
}

// 010F56D0  FUN_010f56d0  size=134  [between]
undefined4 FUN_010f56d0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_8;
  
  local_8 = FUN_010098a0(param_3,param_4);
  if (((*(char *)(param_2 + 0xc) == '\x19') && (iVar1 = FUN_01016300(), iVar1 != 0)) &&
     (param_2 = FUN_010f5590(), 0 < param_2)) {
    do {
      iVar4 = 0;
      iVar2 = FUN_01009570();
      if (0 < iVar2) {
        do {
          uVar3 = FUN_01009590(iVar4);
          iVar2 = FUN_010f56d0(iVar1,uVar3,iVar4,param_4);
          if (iVar2 == 0) {
            local_8 = 0;
          }
          iVar4 = iVar4 + 1;
          iVar2 = FUN_01009570();
        } while (iVar4 < iVar2);
      }
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return local_8;
}

// 010F5760  hkObjectCopier::vf10  size=44  [between]
undefined4 hkObjectCopier::vf10(int param_1,int param_2)

{
  if ((*(char *)(param_1 + 0xc) == *(char *)(param_2 + 0xc)) &&
     ((*(char *)(param_1 + 0xd) == *(char *)(param_2 + 0xd) || (*(char *)(param_1 + 0xc) == '\x18'))
     )) {
    return 1;
  }
  return 0;
}

// 010F5790  FUN_010f5790  size=187  [between]
void FUN_010f5790(undefined4 param_1,int param_2,int param_3,int param_4)

{
  LPVOID pvVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (param_2 == 4) {
    FUN_01016e20(param_4,4,param_3);
    return;
  }
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = *(int *)((int)pvVar1 + 0xc);
  uVar4 = param_3 * 8 + 0x7fU & 0xffffff80;
  if ((*(int *)((int)pvVar1 + 8) < (int)uVar4) || (*(uint *)((int)pvVar1 + 0x10) < iVar2 + uVar4)) {
    iVar2 = FUN_0100b780(uVar4);
  }
  else {
    *(uint *)((int)pvVar1 + 0xc) = iVar2 + uVar4;
  }
  iVar3 = 0;
  if (0 < param_3) {
    do {
      *(undefined4 *)(iVar2 + iVar3 * 8) = *(undefined4 *)(param_4 + iVar3 * 4);
      *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = 0;
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_3);
  }
  FUN_01016e20(iVar2,param_2,param_3);
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  if ((((int)uVar4 <= *(int *)((int)pvVar1 + 8)) && (uVar4 + iVar2 == *(int *)((int)pvVar1 + 0xc)))
     && (*(int *)((int)pvVar1 + 0x14) != iVar2)) {
    *(int *)((int)pvVar1 + 0xc) = iVar2;
    return;
  }
  FUN_0100b9b0(iVar2,uVar4);
  return;
}

// 010F5850  FUN_010f5850  size=334  [between]
void FUN_010f5850(int *param_1)

{
  int iVar1;
  uint in_EAX;
  uint uVar2;
  LPVOID pvVar3;
  uint uVar4;
  int local_18;
  uint local_14;
  uint local_10;
  int local_c;
  uint local_8;
  
  uVar2 = (**(code **)(*param_1 + 0x20))();
  local_18 = 0;
  local_14 = 0;
  local_10 = 0x80000000;
  local_8 = in_EAX;
  if (in_EAX == 0) {
    local_c = 0;
  }
  else {
    pvVar3 = TlsGetValue(DAT_01f8fc4c);
    local_c = *(int *)((int)pvVar3 + 0xc);
    uVar4 = in_EAX + 0x7f & 0xffffff80;
    if ((*(int *)((int)pvVar3 + 8) < (int)uVar4) ||
       (*(uint *)((int)pvVar3 + 0x10) < local_c + uVar4)) {
      local_c = FUN_0100b780(uVar4);
    }
    else {
      *(uint *)((int)pvVar3 + 0xc) = local_c + uVar4;
    }
  }
  local_10 = in_EAX | 0x80000000;
  local_18 = local_c;
  if ((int)(in_EAX & 0x3fffffff) < (int)in_EAX) {
    uVar4 = (in_EAX & 0x3fffffff) * 2;
    if ((int)uVar4 <= (int)in_EAX) {
      uVar4 = in_EAX;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,&local_18,uVar4,1);
  }
  if (0 < (int)(in_EAX - local_14)) {
    _memset((void *)(local_14 + local_18),0,in_EAX - local_14);
  }
  uVar2 = in_EAX - 1 & uVar2;
  local_14 = in_EAX;
  if (uVar2 != 0) {
    (**(code **)(*param_1 + 0x10))(local_18,in_EAX - uVar2);
  }
  iVar1 = local_c;
  if (local_c == local_18) {
    local_14 = 0;
  }
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  uVar2 = local_8 + 0x7f & 0xffffff80;
  if (((*(int *)((int)pvVar3 + 8) < (int)uVar2) || (uVar2 + iVar1 != *(int *)((int)pvVar3 + 0xc)))
     || (*(int *)((int)pvVar3 + 0x14) == iVar1)) {
    FUN_0100b9b0(iVar1,uVar2);
  }
  else {
    *(int *)((int)pvVar3 + 0xc) = iVar1;
  }
  local_14 = 0;
  if (-1 < (int)local_10) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_18,local_10 & 0x3fffffff);
  }
  return;
}

// 010F59A0  FUN_010f59a0  size=307  [between]
undefined4 FUN_010f59a0(void)

{
  int iVar1;
  uint in_EAX;
  LPVOID pvVar2;
  undefined4 uVar3;
  uint uVar4;
  int local_18;
  uint local_14;
  uint local_10;
  int local_c;
  uint local_8;
  
  local_18 = 0;
  local_14 = 0;
  local_10 = 0x80000000;
  local_8 = in_EAX;
  if (in_EAX == 0) {
    local_c = 0;
  }
  else {
    pvVar2 = TlsGetValue(DAT_01f8fc4c);
    local_c = *(int *)((int)pvVar2 + 0xc);
    uVar4 = in_EAX + 0x7f & 0xffffff80;
    if ((*(int *)((int)pvVar2 + 8) < (int)uVar4) ||
       (*(uint *)((int)pvVar2 + 0x10) < local_c + uVar4)) {
      local_c = FUN_0100b780(uVar4);
    }
    else {
      *(uint *)((int)pvVar2 + 0xc) = local_c + uVar4;
    }
  }
  local_10 = in_EAX | 0x80000000;
  local_18 = local_c;
  if ((int)(in_EAX & 0x3fffffff) < (int)in_EAX) {
    uVar4 = (in_EAX & 0x3fffffff) * 2;
    if ((int)uVar4 <= (int)in_EAX) {
      uVar4 = in_EAX;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,&local_18,uVar4,1);
  }
  if (0 < (int)(in_EAX - local_14)) {
    _memset((void *)(local_14 + local_18),0,in_EAX - local_14);
  }
  local_14 = in_EAX;
  uVar3 = FUN_01016f90(local_18);
  iVar1 = local_c;
  if (local_c == local_18) {
    local_14 = 0;
  }
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  uVar4 = local_8 + 0x7f & 0xffffff80;
  if (((*(int *)((int)pvVar2 + 8) < (int)uVar4) || (uVar4 + iVar1 != *(int *)((int)pvVar2 + 0xc)))
     || (*(int *)((int)pvVar2 + 0x14) == iVar1)) {
    FUN_0100b9b0(iVar1,uVar4);
  }
  else {
    *(int *)((int)pvVar2 + 0xc) = iVar1;
  }
  local_14 = 0;
  if (-1 < (int)local_10) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_18,local_10 & 0x3fffffff);
  }
  return uVar3;
}

// 010F5AE0  FUN_010f5ae0  size=313  [__FILE__]
void __thiscall FUN_010f5ae0(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  undefined1 local_210 [512];
  undefined1 local_10;
  undefined8 local_f;
  undefined2 local_7;
  undefined1 local_5;
  
  cVar1 = *(char *)(param_3 + 0xc);
  uVar4 = 0;
  switch(cVar1) {
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
  case '\x18':
  case '\x1f':
  case ' ':
    FUN_01016360();
    break;
  default:
    hkErrStream::hkErrStream(local_210,0x200);
    FUN_01018d00("Unknown class member type found!");
    iVar3 = (**(code **)(*DAT_01f8fc58 + 0xc))
                      (3,0x5ef4e5a4,local_210,
                       "D:\\project\\PRJ_012\\p1\\common\\mw\\hk2011_3_0_r1\\Source\\Common\\Serialize\\Copier\\hkObjectCopier.cpp"
                       ,0xb0);
    if (iVar3 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    hkBaseObject::hkBaseObject_38();
    break;
  case '\x14':
  case '\x15':
  case '\x1e':
  case '!':
    FUN_010f5590();
    break;
  case '\x16':
  case '\x17':
  case '\x1a':
  case '\x1b':
    if (cVar1 == '\x1b') {
      uVar4 = (uint)*(byte *)(param_1 + 0xc);
    }
    if (cVar1 == '\x16') {
      local_10 = 0;
      local_7 = 0;
      local_5 = 0;
      local_f = 0;
      FUN_01016f90(&local_10,uVar4 + 4 + (uint)*(byte *)(param_1 + 0xc));
      FUN_01017120(0x80000000);
      return;
    }
    break;
  case '\x19':
    FUN_010162f0();
    FUN_01009750();
    FUN_010f5590();
    break;
  case '\x1c':
    FUN_010f5590();
  }
  FUN_010f59a0(param_2);
  return;
}

// 010F5C60  FUN_010f5c60  size=2123  [__FILE__]
undefined4 FUN_010f5c60(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  ushort uVar2;
  code *pcVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  undefined *puVar14;
  int iVar15;
  undefined *puVar16;
  int iVar17;
  undefined1 local_2a8 [512];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88 [4];
  undefined4 *local_68;
  undefined4 *puStack_64;
  int local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  int *local_54;
  uint local_50;
  int local_4c;
  undefined4 local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  uint local_34;
  undefined4 local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  int local_1c;
  uint local_18;
  int *local_14;
  uint local_10;
  int *local_c;
  undefined4 *local_8;
  
  piVar4 = (int *)FUN_01016fe0();
  local_54 = piVar4;
  local_48 = (**(code **)(*piVar4 + 0x20))();
  local_2c = 0;
  local_28 = 0;
  local_24 = 0x80000000;
  local_1c = 0;
  iVar5 = FUN_01009570();
  if (0 < iVar5) {
    do {
      puVar6 = (undefined4 *)FUN_01009590(local_1c);
      local_10 = (uint)*(ushort *)((int)puVar6 + 0x12);
      (**(code **)(*piVar4 + 0x20))();
      FUN_010f59a0(param_3);
      if ((*(ushort *)(puVar6 + 4) & 0x400) == 0) {
LAB_010f5d18:
        local_8 = (undefined4 *)FUN_01009660(*puVar6);
        if ((local_8 == (undefined4 *)0x0) ||
           (iVar5 = (**(code **)(*local_14 + 0x10))(local_8,puVar6), iVar5 == 0)) {
LAB_010f632a:
          FUN_010f56d0(param_4,puVar6,local_1c,piVar4);
        }
        else {
          piVar4 = (int *)((uint)*(ushort *)((int)local_8 + 0x12) + param_1);
          switch(*(char *)(puVar6 + 3)) {
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
          case ' ':
            local_10 = FUN_010f5590();
            uVar11 = FUN_010f5590();
            local_18 = FUN_01016360();
            FUN_010f7080(local_10,uVar11,piVar4);
            FUN_010f5600(param_3,*(undefined1 *)(puVar6 + 3));
            break;
          case '\x13':
            break;
          case '\x14':
          case '\x15':
          case '\x1d':
          case '!':
            iVar5 = FUN_010f5590();
            piVar4 = local_14;
            local_88[0] = 0;
            if (0 < iVar5) {
              do {
                FUN_01016f90(local_88,(char)piVar4[3]);
                iVar5 = iVar5 + -1;
              } while (iVar5 != 0);
            }
            break;
          case '\x16':
          case '\x1a':
          case '\x1b':
            if (*(char *)(puVar6 + 3) == '\x1b') {
              local_98 = 0;
              FUN_01016e20(&local_98,(char)local_14[3],1);
              if (*piVar4 == 0) {
                hkErrStream::hkErrStream(local_2a8,0x200);
                uVar11 = *local_8;
                puVar16 = &DAT_01656d18;
                puVar14 = &DAT_0170164c;
                uVar8 = FUN_010093a0(&DAT_0170164c,uVar11,&DAT_01656d18);
                FUN_01018d00("Can\'t copy homogeneous array. No hkClass for ");
                FUN_01018d00(uVar8);
                FUN_01018d00(puVar14);
                FUN_01018d00(uVar11);
                FUN_01018d00(puVar16);
                (**(code **)(*DAT_01f8fc58 + 0xc))
                          (1,0xabba5a55,local_2a8,
                           "D:\\project\\PRJ_012\\p1\\common\\mw\\hk2011_3_0_r1\\Source\\Common\\Serialize\\Copier\\hkObjectCopier.cpp"
                           ,0x1cb);
                hkBaseObject::hkBaseObject_38();
                uVar10 = 0;
              }
              else {
                uVar10 = piVar4[2];
              }
            }
            else if (*(char *)((int)puVar6 + 0xd) == '\0') {
              uVar10 = 0;
            }
            else {
              uVar10 = piVar4[1];
            }
            local_90 = 0;
            FUN_01016e20(&local_90,(char)local_14[3],1);
            FUN_01017100(uVar10);
            if (*(char *)(puVar6 + 3) == '\x16') {
              FUN_01017100(uVar10 | 0x80000000);
            }
            break;
          default:
            hkErrStream::hkErrStream(local_2a8,0x200);
            FUN_01018d00("Unknown class member found during write of data.");
            iVar5 = (**(code **)(*DAT_01f8fc58 + 0xc))
                              (3,0x641e3e03,local_2a8,
                               "D:\\project\\PRJ_012\\p1\\common\\mw\\hk2011_3_0_r1\\Source\\Common\\Serialize\\Copier\\hkObjectCopier.cpp"
                               ,0x245);
            if (iVar5 != 0) {
              pcVar3 = (code *)swi(3);
              uVar11 = (*pcVar3)();
              return uVar11;
            }
            hkBaseObject::hkBaseObject_38();
            break;
          case '\x18':
            if ((local_8[2] != 0) && (puVar6[2] != 0)) {
              local_c = (int *)FUN_010f5590();
              uVar11 = FUN_010f5590();
              piVar7 = (int *)FUN_010f7080(local_c,uVar11);
              local_10 = FUN_01016310();
              local_18 = FUN_01016310();
              iVar5 = FUN_01016360();
              iVar5 = iVar5 / (int)local_c;
              if (0 < (int)piVar7) {
                do {
                  local_c = piVar7;
                  uVar11 = FUN_01016560(piVar4);
                  local_30 = 0;
                  iVar13 = FUN_01017740(uVar11,&local_58);
                  if (iVar13 == 0) {
                    FUN_01017780(local_58,&local_30);
                  }
                  if (iVar5 == 1) {
                    FUN_01016dd0(local_30);
                  }
                  else if (iVar5 == 2) {
                    FUN_010170c0(local_30);
                  }
                  else if (iVar5 == 4) {
                    FUN_01017100(local_30);
                  }
                  piVar4 = (int *)((int)piVar4 + iVar5);
                  piVar7 = (int *)((int)local_c + -1);
                } while ((int)local_c + -1 != 0);
                local_c = (int *)0x0;
              }
            }
            break;
          case '\x19':
            uVar10 = FUN_01016300();
            local_10 = uVar10;
            local_18 = FUN_01016300();
            if ((uVar10 != 0) && (local_18 != 0)) {
              uVar11 = FUN_010f5590();
              uVar11 = FUN_010f5590(uVar11);
              local_38 = FUN_010f7080(uVar11);
              uVar10 = local_10;
              iVar5 = 0;
              if (0 < local_38) {
                do {
                  iVar13 = FUN_01009750();
                  FUN_010f5c60((int *)(iVar13 * iVar5 + (int)piVar4),uVar10,param_3,local_18);
                  iVar5 = iVar5 + 1;
                } while (iVar5 < local_38);
              }
            }
            break;
          case '\x1c':
            local_a8 = 0;
            local_a0 = 0;
            uVar11 = FUN_010f5590();
            uVar11 = FUN_010f5590(uVar11);
            iVar5 = FUN_010f7080(uVar11);
            piVar4 = local_14;
            if (0 < iVar5) {
              do {
                FUN_01016e20(&local_a8,(char)piVar4[3],2);
                iVar5 = iVar5 + -1;
              } while (iVar5 != 0);
            }
            break;
          case '\x1e':
            local_10 = FUN_010f5590();
            uVar11 = FUN_010f5590();
            uVar11 = FUN_010f7080(local_10,uVar11);
            FUN_010f5790(param_3,(char)local_14[3],uVar11,piVar4);
            break;
          case '\x1f':
            if ((local_8[2] != 0) && (puVar6[2] != 0)) {
              local_c = (int *)FUN_010f5590();
              uVar11 = FUN_010f5590();
              uVar10 = FUN_010f7080(local_c,uVar11);
              local_4c = FUN_01016310();
              local_38 = FUN_01016310();
              local_20 = FUN_01016360();
              local_20 = local_20 / (int)local_c;
              local_c = piVar4;
              if (0 < (int)uVar10) {
                do {
                  local_10 = uVar10;
                  uVar11 = FUN_01016560(local_c);
                  local_44 = 0;
                  local_40 = 0;
                  local_3c = -0x80000000;
                  local_34 = 0;
                  FUN_010178d0(uVar11,&local_44,&local_34);
                  uVar10 = 0;
                  iVar5 = 0;
                  if (0 < local_40) {
                    do {
                      iVar13 = FUN_01017780(*(undefined4 *)(local_44 + iVar5 * 4),&local_50);
                      if (iVar13 == 0) {
                        uVar10 = uVar10 | local_50;
                      }
                      else {
                        local_34 = local_34 | local_50;
                      }
                      iVar5 = iVar5 + 1;
                    } while (iVar5 < local_40);
                  }
                  if (local_34 != 0) {
                    local_18 = 0;
                    FUN_010178d0(local_34,&local_44,&local_18);
                    uVar10 = uVar10 | local_18;
                  }
                  iVar5 = local_20;
                  if (local_20 == 1) {
                    FUN_01016dd0(uVar10);
                  }
                  else if (local_20 == 2) {
                    FUN_010170c0(uVar10);
                  }
                  else if (local_20 == 4) {
                    FUN_01017100(uVar10);
                  }
                  local_c = (int *)((int)local_c + iVar5);
                  local_40 = 0;
                  if (-1 < local_3c) {
                    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_44,local_3c * 4);
                  }
                  local_44 = 0;
                  local_3c = 0x80000000;
                  uVar10 = local_10 + -1;
                } while (local_10 + -1 != 0);
                local_10 = 0;
              }
            }
            break;
          case '\"':
            FUN_010170e0((short)*piVar4);
            FUN_010170e0(*(undefined2 *)((int)piVar4 + 2));
            local_68 = local_8;
            local_60 = (uint)*(ushort *)((int)piVar4 + 2) + (int)piVar4;
            uStack_5c = CONCAT22(uStack_5c._2_2_,(short)*piVar4);
            puStack_64 = puVar6;
            if (local_28 == (local_24 & 0x3fffffff)) {
              FUN_0100a290(&PTR_vftable_018e9b8c,&local_2c,0x10);
            }
            puVar9 = (undefined8 *)(local_28 * 0x10 + local_2c);
            if (puVar9 != (undefined8 *)0x0) {
              *puVar9 = CONCAT44(puStack_64,local_68);
              *(int *)(puVar9 + 1) = local_60;
              *(undefined4 *)((int)puVar9 + 0xc) = uStack_5c;
            }
            local_28 = local_28 + 1;
          }
        }
      }
      else {
        if ((local_14[4] & 2U) == 0) {
          if ((local_14[4] & 1U) == 0) goto LAB_010f5d18;
          goto LAB_010f632a;
        }
        FUN_010f5ae0(param_3,puVar6);
      }
      iVar13 = local_1c + 1;
      local_1c = iVar13;
      iVar5 = FUN_01009570();
      piVar4 = local_54;
    } while (iVar13 < iVar5);
  }
  (**(code **)(*piVar4 + 0x20))();
  uVar11 = local_48;
  FUN_01009750();
  FUN_010f59a0(param_3);
  param_2 = 0;
  if (0 < (int)local_28) {
    param_4 = 0;
    do {
      uVar2 = *(ushort *)(param_4 + 0xc + local_2c);
      local_20 = *(int *)(param_4 + 4 + local_2c);
      local_4c = *(int *)(param_4 + 8 + local_2c);
      if ((((uVar2 != 0) && (cVar1 = *(char *)(local_20 + 0xd), cVar1 != '\0')) && (cVar1 != '\x14')
          ) && ((cVar1 != '\x1d' && (cVar1 != '!')))) {
        if (cVar1 == '\x19') {
          iVar5 = FUN_01016300();
          local_20 = FUN_01016300();
          if (((iVar5 != 0) && (local_20 != 0)) && (iVar13 = 0, uVar2 != 0)) {
            do {
              iVar15 = iVar5;
              uVar11 = param_3;
              iVar17 = local_20;
              iVar12 = FUN_01009750(iVar5,param_3,local_20);
              FUN_010f5c60(iVar12 * iVar13 + local_4c,iVar15,uVar11,iVar17);
              iVar13 = iVar13 + 1;
            } while (iVar13 < (int)(uint)uVar2);
          }
        }
        else if (cVar1 != '\x1c') {
          if (cVar1 == '\x1e') {
            FUN_010f5790(param_3,(char)local_14[3],uVar2);
          }
          else {
            FUN_01016520(local_4c);
            FUN_010f5600(param_3,cVar1);
          }
        }
      }
      param_2 = param_2 + 1;
      param_4 = param_4 + 0x10;
      uVar11 = local_48;
    } while (param_2 < (int)local_28);
  }
  local_28 = 0;
  if (-1 < (int)local_24) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_2c,local_24 << 4);
  }
  return uVar11;
}

// 010F6510  FUN_010f6510  size=128  [between]
undefined4 FUN_010f6510(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int *unaff_ESI;
  
  uVar2 = FUN_01016fe0();
  FUN_010f5850(uVar2);
  piVar3 = (int *)FUN_01016fe0();
  uVar2 = (**(code **)(*piVar3 + 0x20))();
  if (unaff_ESI[1] == (unaff_ESI[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94);
  }
  puVar1 = (undefined4 *)(*unaff_ESI + unaff_ESI[1] * 8);
  *puVar1 = param_2;
  puVar1[1] = uVar2;
  unaff_ESI[1] = unaff_ESI[1] + 1;
  iVar4 = FUN_01015cd0(param_1);
  FUN_01016f90(param_1,iVar4 + 1);
  return 0;
}

// 010F6590  FUN_010f6590  size=2465  [__FILE__]
void __thiscall
FUN_010f6590(int *param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,int param_6,
            int param_7,int param_8)

{
  char cVar1;
  ushort uVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  uint *puVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined4 uVar20;
  int iVar21;
  undefined1 local_260 [512];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48 [4];
  undefined8 local_28;
  int local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  int local_10;
  uint *local_c;
  int *local_8;
  
  uVar4 = param_4;
  local_8 = param_1;
  if (param_8 == 0) {
    iVar5 = FUN_010093a0();
    if (*(uint *)(param_7 + 0x1c) == (*(uint *)(param_7 + 0x20) & 0x3fffffff)) {
      FUN_0100a290(&PTR_vftable_018e9b94,(int *)(param_7 + 0x18),8);
    }
    piVar11 = (int *)(*(int *)(param_7 + 0x18) + *(int *)(param_7 + 0x1c) * 8);
    *piVar11 = param_6;
    piVar11[1] = iVar5;
    *(int *)(param_7 + 0x1c) = *(int *)(param_7 + 0x1c) + 1;
  }
  param_8 = param_8 + 1;
  iVar16 = 0;
  local_20 = 0;
  iVar5 = FUN_01009570();
  if (0 < iVar5) {
    do {
      puVar6 = (undefined4 *)FUN_01009590(iVar16);
      local_c = (uint *)FUN_01009660(*puVar6);
      if (local_c == (uint *)0x0) goto LAB_010f6f0f;
      puVar15 = (uint *)((uint)*(ushort *)((int)local_c + 0x12) + param_2);
      iVar5 = (**(code **)(*local_8 + 0x10))(local_c,puVar6);
      if ((iVar5 == 0) ||
         (((*(byte *)(local_8 + 4) & 2) != 0 && ((*(ushort *)(puVar6 + 4) & 0x400) != 0))))
      goto LAB_010f6f0f;
      switch(*(undefined1 *)(puVar6 + 3)) {
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
      case 0x15:
      case 0x18:
      case 0x1e:
      case 0x1f:
      case 0x20:
      case 0x22:
        break;
      case 0x13:
        hkErrStream::hkErrStream(local_260,0x200);
        FUN_01018d00("TYPE_ZERO should not occur.");
        iVar5 = (**(code **)(*DAT_01f8fc58 + 0xc))
                          (3,0x641e3e05,local_260,
                           "D:\\project\\PRJ_012\\p1\\common\\mw\\hk2011_3_0_r1\\Source\\Common\\Serialize\\Copier\\hkObjectCopier.cpp"
                           ,0x406);
        if (iVar5 != 0) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        goto LAB_010f6ef5;
      case 0x14:
        uVar14 = FUN_010f5590();
        uVar14 = FUN_010f5590(uVar14);
        local_18 = FUN_010f7080(uVar14);
        iVar5 = FUN_010f5590();
        iVar16 = FUN_01016360();
        local_1c = iVar16 / iVar5;
        local_10 = 0;
        if (0 < (int)local_18) {
          do {
            uVar19 = *puVar15;
            local_c = puVar15;
            if (uVar19 != 0) {
              iVar5 = (uint)*(byte *)(local_8 + 3) * local_10 +
                      (uint)*(ushort *)((int)puVar6 + 0x12);
              if (*(char *)((int)puVar6 + 0xd) == '\x02') {
                FUN_010f6510(uVar19,iVar5 + param_6);
              }
              else if (*(char *)((int)puVar6 + 0xd) != '\0') {
                uVar7 = 0;
                uVar14 = FUN_01016300(0);
                FUN_010f7690(iVar5 + param_6,uVar19,uVar14,uVar7);
              }
            }
            puVar15 = (uint *)((int)local_c + local_1c);
            local_10 = local_10 + 1;
            local_c = puVar15;
          } while (local_10 < (int)local_18);
        }
        break;
      case 0x16:
      case 0x17:
      case 0x1a:
        if ((puVar15[1] != 0) && (cVar1 = *(char *)((int)puVar6 + 0xd), cVar1 != '\0')) {
          if (cVar1 == '\x14') {
            piVar11 = (int *)FUN_01016fe0();
            local_1c = (uint)*(ushort *)((int)puVar6 + 0x12);
            uVar14 = (**(code **)(*piVar11 + 0x20))();
            FUN_010f7640(local_1c + param_6,uVar14);
            local_50 = 0;
            local_14 = FUN_01016520();
            local_18 = 0;
            if (0 < (int)puVar15[1]) {
              local_10 = 0;
              do {
                local_1c = *(uint *)(local_10 + *puVar15);
                if ((local_1c != 0) && (*(char *)((int)puVar6 + 0xd) != '\0')) {
                  piVar11 = (int *)FUN_01016fe0();
                  uVar20 = 0;
                  uVar14 = FUN_01016300(0);
                  uVar19 = local_1c;
                  uVar7 = (**(code **)(*piVar11 + 0x20))(local_1c,uVar14);
                  FUN_010f7690(uVar7,uVar19,uVar14,uVar20);
                }
                FUN_01016f90(&local_50,(char)local_8[3]);
                local_10 = local_10 + local_14;
                local_18 = local_18 + 1;
              } while ((int)local_18 < (int)puVar15[1]);
            }
          }
          else if (cVar1 == '\x1d') {
            piVar11 = (int *)FUN_01016fe0();
            uVar2 = *(ushort *)((int)puVar6 + 0x12);
            uVar14 = (**(code **)(*piVar11 + 0x20))();
            FUN_010f7640((uint)uVar2 + param_6,uVar14);
            local_28 = 0;
            piVar11 = (int *)FUN_01016fe0();
            local_14 = (**(code **)(*piVar11 + 0x20))();
            iVar5 = 0;
            if (0 < (int)puVar15[1]) {
              do {
                FUN_01016f90(&local_28,(char)local_8[3]);
                iVar5 = iVar5 + 1;
              } while (iVar5 < (int)puVar15[1]);
            }
            param_4 = 0;
            if (0 < (int)puVar15[1]) {
              do {
                if (*(int *)(*puVar15 + param_4 * 4) != 0) {
                  FUN_010f6510(*(undefined4 *)(*puVar15 + param_4 * 4),
                               (uint)*(byte *)(local_8 + 3) * param_4 + local_14);
                }
                param_4 = param_4 + 1;
              } while (param_4 < (int)puVar15[1]);
            }
          }
          else if (cVar1 == '!') {
            piVar11 = (int *)FUN_01016fe0();
            uVar2 = *(ushort *)((int)puVar6 + 0x12);
            uVar14 = (**(code **)(*piVar11 + 0x20))();
            FUN_010f7640((uint)uVar2 + param_6,uVar14);
            local_48[0] = 0;
            piVar11 = (int *)FUN_01016fe0();
            local_14 = (**(code **)(*piVar11 + 0x20))();
            iVar5 = 0;
            if (0 < (int)puVar15[1]) {
              do {
                FUN_01016f90(local_48,(char)local_8[3]);
                iVar5 = iVar5 + 1;
              } while (iVar5 < (int)puVar15[1]);
            }
            param_4 = 0;
            if (0 < (int)puVar15[1]) {
              do {
                uVar19 = *(uint *)(*puVar15 + param_4 * 4);
                if ((uVar19 & 0xfffffffe) != 0) {
                  FUN_010f6510(uVar19 & 0xfffffffe,(uint)*(byte *)(local_8 + 3) * param_4 + local_14
                              );
                }
                param_4 = param_4 + 1;
              } while (param_4 < (int)puVar15[1]);
            }
          }
          else if (cVar1 == '\x19') {
            piVar11 = (int *)FUN_01016fe0();
            local_14 = (**(code **)(*piVar11 + 0x20))();
            FUN_010f7640((uint)*(ushort *)((int)puVar6 + 0x12) + param_6,local_14);
            iVar5 = FUN_01016300();
            iVar16 = FUN_01016300();
            if ((iVar5 != 0) && (iVar16 != 0)) {
              local_18 = *puVar15;
              local_10 = 0;
              if (0 < (int)puVar15[1]) {
                do {
                  iVar12 = iVar5;
                  uVar14 = uVar4;
                  iVar13 = iVar16;
                  iVar8 = FUN_01009750(iVar5,uVar4,iVar16);
                  FUN_010f5c60(iVar8 * local_10 + local_18,iVar12,uVar14,iVar13);
                  local_10 = local_10 + 1;
                } while (local_10 < (int)puVar15[1]);
              }
              local_c = (uint *)0x0;
              if (0 < (int)puVar15[1]) {
                do {
                  iVar8 = param_7;
                  iVar21 = param_8;
                  iVar12 = FUN_01009750(param_7,param_8);
                  iVar9 = iVar12 * (int)local_c + local_14;
                  iVar12 = iVar5;
                  uVar14 = uVar4;
                  iVar13 = iVar16;
                  iVar10 = FUN_01009750(iVar5,uVar4,iVar16,iVar9);
                  FUN_010f6590(iVar10 * (int)local_c + local_18,iVar12,uVar14,iVar13,iVar9,iVar8,
                               iVar21);
                  local_c = (uint *)((int)local_c + 1);
                } while ((int)local_c < (int)puVar15[1]);
              }
            }
          }
          else if (cVar1 == '\x1c') {
            piVar11 = (int *)FUN_01016fe0();
            local_18 = (**(code **)(*piVar11 + 0x20))();
            FUN_010f7640((uint)*(ushort *)((int)puVar6 + 0x12) + param_6,local_18);
            iVar5 = 0;
            if (0 < (int)puVar15[1]) {
              do {
                local_60 = 0;
                local_58 = 0;
                FUN_01016e20(&local_60,(char)local_8[3],2);
                iVar5 = iVar5 + 1;
              } while (iVar5 < (int)puVar15[1]);
            }
            param_4 = 0;
            if (0 < (int)puVar15[1]) {
              do {
                piVar11 = (int *)(*puVar15 + param_4 * 8);
                iVar5 = *piVar11;
                iVar16 = (uint)*(byte *)(local_8 + 3) * param_4 * 2;
                if (iVar5 != 0) {
                  FUN_010f7690(iVar16 + local_18,iVar5,piVar11[1],0);
                }
                iVar5 = *(int *)(*puVar15 + 4 + param_4 * 8);
                if (iVar5 != 0) {
                  FUN_010f7690((uint)*(byte *)(local_8 + 3) + iVar16 + local_18,iVar5,&DAT_01f9050c,
                               0);
                }
                param_4 = param_4 + 1;
              } while (param_4 < (int)puVar15[1]);
            }
          }
          else {
            piVar11 = (int *)FUN_01016fe0();
            uVar2 = *(ushort *)((int)puVar6 + 0x12);
            uVar14 = (**(code **)(*piVar11 + 0x20))();
            FUN_010f7640((uint)uVar2 + param_6,uVar14);
            cVar1 = *(char *)((int)puVar6 + 0xd);
            if (cVar1 == '\x1e') {
              FUN_010f5790(uVar4,(char)local_8[3],puVar15[1],*puVar15);
            }
            else {
              FUN_01016520(*puVar15);
              FUN_010f5600(uVar4,cVar1);
            }
          }
        }
        break;
      case 0x19:
        iVar5 = FUN_01016300();
        local_10 = iVar5;
        local_18 = FUN_01016300();
        if ((iVar5 != 0) && (local_18 != 0)) {
          local_1c = (uint)*(ushort *)((int)puVar6 + 0x12) + param_6;
          local_14 = FUN_010f5590();
          uVar14 = FUN_010f5590();
          local_14 = FUN_010f7080(local_14,uVar14);
          param_4 = 0;
          if (0 < local_14) {
            do {
              iVar12 = FUN_01009750();
              iVar5 = param_7;
              iVar16 = param_8;
              iVar13 = FUN_01009750(param_7,param_8);
              FUN_010f6590((uint *)(iVar12 * param_4 + (int)puVar15),local_10,uVar4,local_18,
                           iVar13 * param_4 + local_1c,iVar5,iVar16);
              param_4 = param_4 + 1;
            } while (param_4 < local_14);
          }
        }
        break;
      case 0x1b:
        uVar19 = *puVar15;
        if (uVar19 != 0) {
          FUN_010f7690((uint)*(ushort *)((int)puVar6 + 0x12) + param_6,uVar19,&DAT_01f9050c,1);
          piVar11 = (int *)FUN_01016fe0();
          local_14 = (**(code **)(*piVar11 + 0x20))();
          FUN_010f7640((uint)*(ushort *)((int)puVar6 + 0x12) +
                       (uint)*(byte *)(local_8 + 3) + param_6,local_14);
          local_18 = puVar15[1];
          param_4 = 0;
          if (0 < (int)puVar15[2]) {
            do {
              uVar17 = uVar19;
              uVar14 = uVar4;
              uVar18 = uVar19;
              iVar5 = FUN_01009750(uVar19,uVar4,uVar19);
              FUN_010f5c60(iVar5 * param_4 + local_18,uVar17,uVar14,uVar18);
              param_4 = param_4 + 1;
            } while (param_4 < (int)puVar15[2]);
          }
          param_4 = 0;
          if (0 < (int)puVar15[2]) {
            do {
              iVar5 = param_7;
              iVar16 = param_8;
              iVar12 = FUN_01009750(param_7,param_8);
              iVar12 = iVar12 * param_4 + local_14;
              uVar17 = uVar19;
              uVar14 = uVar4;
              uVar18 = uVar19;
              iVar13 = FUN_01009750(uVar19,uVar4,uVar19,iVar12);
              FUN_010f6590(iVar13 * param_4 + local_18,uVar17,uVar14,uVar18,iVar12,iVar5,iVar16);
              param_4 = param_4 + 1;
            } while (param_4 < (int)puVar15[2]);
          }
        }
        break;
      case 0x1c:
        local_14 = FUN_010f5590();
        uVar14 = FUN_010f5590();
        local_14 = FUN_010f7080(local_14,uVar14);
        local_c = (uint *)0x0;
        if (0 < local_14) {
          local_10 = 1;
          do {
            iVar5 = *(int *)((int)puVar15 + (int)local_c * (uint)*(byte *)(local_8 + 2) * 2);
            uVar19 = *(uint *)(local_10 * (uint)*(byte *)(local_8 + 2) + (int)puVar15);
            if (iVar5 != 0) {
              FUN_010f7690((uint)*(ushort *)((int)puVar6 + 0x12) + param_6 +
                           (uint)*(byte *)(local_8 + 3) * (int)local_c * 2,iVar5,uVar19,0);
            }
            if (uVar19 != 0) {
              FUN_010f7690((uint)*(ushort *)((int)puVar6 + 0x12) +
                           (uint)*(byte *)(local_8 + 3) * local_10 + param_6,uVar19,&DAT_01f9050c,0)
              ;
            }
            local_10 = local_10 + 2;
            local_c = (uint *)((int)local_c + 1);
          } while ((int)local_c < local_14);
        }
        break;
      case 0x1d:
        if (*puVar15 != 0) {
          FUN_010f6510(*puVar15,(uint)*(ushort *)((int)puVar6 + 0x12) + param_6);
        }
        break;
      case 0x21:
        if ((*puVar15 & 0xfffffffe) != 0) {
          FUN_010f6510(*puVar15 & 0xfffffffe,(uint)*(ushort *)((int)puVar6 + 0x12) + param_6);
        }
        break;
      default:
        hkErrStream::hkErrStream(local_260,0x200);
        FUN_01018d00("Unknown class member found during write of data.");
        iVar5 = (**(code **)(*DAT_01f8fc58 + 0xc))
                          (3,0x641e3e05,local_260,
                           "D:\\project\\PRJ_012\\p1\\common\\mw\\hk2011_3_0_r1\\Source\\Common\\Serialize\\Copier\\hkObjectCopier.cpp"
                           ,0x40b);
        if (iVar5 != 0) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
LAB_010f6ef5:
        hkBaseObject::hkBaseObject_38();
      }
      uVar14 = FUN_01016fe0();
      FUN_010f5850(uVar14);
LAB_010f6f0f:
      iVar16 = local_20 + 1;
      local_20 = iVar16;
      iVar5 = FUN_01009570();
    } while (iVar16 < iVar5);
  }
  return;
}


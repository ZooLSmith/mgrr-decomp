// src/misc/cUnLockDisp.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CC34F0..00D42170, 5 functions

#include "mgrr.h"
#include "cUnLockDisp.h"

// 00CC34F0  cUnLockDisp::vf08  size=138  [class]
void __fastcall cUnLockDisp::vf08(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0x88);
  }
  *(uint *)(param_1 + 0x1c) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0x8a);
  }
  *(uint *)(param_1 + 0x20) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0x8c);
  }
  *(uint *)(param_1 + 0x24) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0x9a);
  }
  *(uint *)(param_1 + 0x28) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0xfe);
  }
  *(uint *)(param_1 + 0x2c) = uVar2;
  if (*(char *)(param_1 + 0x33) == '\0') {
    *(undefined1 *)(param_1 + 0x30) = 3;
    if (*(int *)(param_1 + 0x14) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0;
      return;
    }
  }
  else if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 1;
  }
  return;
}

// 00D1ABA0  cUnLockDisp::vf00  size=101  [class]
undefined4 * __thiscall cUnLockDisp::vf00(undefined4 *param_1,byte param_2)

{
  int iVar1;
  
  *param_1 = vftable;
  if (DAT_01dc0730 != 0) {
    FUN_00cfcb70(0x18);
  }
  iVar1 = param_1[5];
  *param_1 = cCustomObjCtrlManager::vftable;
  param_1[6] = 0;
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[5] = 0;
  }
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D1AC10  cUnLockDisp::vf14  size=2184  [class]
void __fastcall cUnLockDisp::vf14(int param_1)

{
  float fVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  
  switch(*(undefined1 *)(param_1 + 0x30)) {
  case 0:
    bVar2 = 0;
    while (((int)(char)bVar2 <= *(int *)(param_1 + 0x34) ||
           ((*(uint *)(param_1 + 0x38) & 1 << (bVar2 & 0x1f)) == 0))) {
      bVar2 = bVar2 + 1;
      if ('\x1b' < (char)bVar2) {
        return;
      }
    }
    *(char *)(param_1 + 0x33) = *(char *)(param_1 + 0x33) + -1;
    *(int *)(param_1 + 0x34) = (int)(char)bVar2;
    *(undefined1 *)(param_1 + 0x30) = 1;
    return;
  case 1:
    switch(*(undefined4 *)(param_1 + 0x34)) {
    case 0:
      uVar4 = FUN_00e03ea0("custom_item_icon_0002");
      FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x1c),uVar4);
      uVar4 = FUN_00e03ea0("custom_item_icon_0002");
      FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x20),uVar4);
      pcVar6 = "HUD_ITEM_NAME_0002";
      break;
    case 1:
      uVar4 = FUN_00e03ea0("custom_item_icon_0003");
      FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x1c),uVar4);
      uVar4 = FUN_00e03ea0("custom_item_icon_0003");
      FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x20),uVar4);
      pcVar6 = "HUD_ITEM_NAME_0003";
      break;
    case 2:
      uVar4 = FUN_00e03ea0("custom_item_icon_0004");
      FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x1c),uVar4);
      uVar4 = FUN_00e03ea0("custom_item_icon_0004");
      FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x20),uVar4);
      pcVar6 = "HUD_ITEM_NAME_0004";
      break;
    case 3:
      uVar4 = FUN_00e03ea0("custom_item_icon_0005");
      FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x1c),uVar4);
      uVar4 = FUN_00e03ea0("custom_item_icon_0005");
      FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x20),uVar4);
      pcVar6 = "HUD_ITEM_NAME_0005";
      break;
    case 4:
      uVar4 = FUN_00e03ea0("custom_item_icon_0006");
      FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x1c),uVar4);
      uVar4 = FUN_00e03ea0("custom_item_icon_0006");
      FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x20),uVar4);
      pcVar6 = "HUD_ITEM_NAME_0006";
      break;
    case 5:
      uVar4 = FUN_00e03ea0("custom_item_icon_0007");
      FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x1c),uVar4);
      uVar4 = FUN_00e03ea0("custom_item_icon_0007");
      FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x20),uVar4);
      pcVar6 = "HUD_ITEM_NAME_0007";
      break;
    case 6:
      uVar4 = FUN_00e03ea0("custom_item_icon_0008");
      FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x1c),uVar4);
      uVar4 = FUN_00e03ea0("custom_item_icon_0008");
      FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x20),uVar4);
      pcVar6 = "HUD_ITEM_NAME_0008";
      break;
    case 7:
      uVar4 = FUN_00e03ea0("custom_item_icon_0115");
      FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x1c),uVar4);
      uVar4 = FUN_00e03ea0("custom_item_icon_0115");
      FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x20),uVar4);
      pcVar6 = "HUD_ITEM_NAME_0115";
      break;
    case 8:
      uVar4 = FUN_00e03ea0("custom_item_icon_0013");
      FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x1c),uVar4);
      uVar4 = FUN_00e03ea0("custom_item_icon_0013");
      FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x20),uVar4);
      pcVar6 = "HUD_ITEM_NAME_0013";
      break;
    case 9:
      uVar4 = FUN_00e03ea0("custom_item_icon_0014");
      FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x1c),uVar4);
      uVar4 = FUN_00e03ea0("custom_item_icon_0014");
      FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x20),uVar4);
      pcVar6 = "HUD_ITEM_NAME_0014";
      break;
    case 10:
      uVar4 = FUN_00e03ea0("custom_item_icon_0012");
      FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x1c),uVar4);
      uVar4 = FUN_00e03ea0("custom_item_icon_0012");
      FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x20),uVar4);
      pcVar6 = "HUD_ITEM_NAME_0012";
      break;
    case 0xb:
      uVar4 = FUN_00e03ea0("custom_item_icon_0019");
      FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x1c),uVar4);
      uVar4 = FUN_00e03ea0("custom_item_icon_0019");
      FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x20),uVar4);
      pcVar6 = "HUD_ITEM_NAME_0019";
      break;
    case 0xc:
      uVar4 = FUN_00e03ea0("custom_item_icon_0020");
      FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x1c),uVar4);
      uVar4 = FUN_00e03ea0("custom_item_icon_0020");
      FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x20),uVar4);
      pcVar6 = "HUD_ITEM_NAME_0020";
      break;
    case 0xd:
      uVar4 = FUN_00e03ea0("custom_item_icon_0023");
      FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x1c),uVar4);
      uVar4 = FUN_00e03ea0("custom_item_icon_0023");
      FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x20),uVar4);
      pcVar6 = "HUD_ITEM_NAME_0023";
      break;
    case 0xe:
      uVar4 = FUN_00e03ea0("custom_item_icon_0024");
      FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x1c),uVar4);
      uVar4 = FUN_00e03ea0("custom_item_icon_0024");
      FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x20),uVar4);
      pcVar6 = "HUD_ITEM_NAME_0024";
      break;
    case 0xf:
      uVar4 = FUN_00e03ea0("custom_item_icon_0022");
      FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x1c),uVar4);
      uVar4 = FUN_00e03ea0("custom_item_icon_0022");
      FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x20),uVar4);
      pcVar6 = "HUD_ITEM_NAME_0022";
      break;
    case 0x10:
      uVar4 = FUN_00e03ea0("custom_item_icon_0025");
      FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x1c),uVar4);
      uVar4 = FUN_00e03ea0("custom_item_icon_0025");
      FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x20),uVar4);
      pcVar6 = "HUD_ITEM_NAME_0025";
      break;
    case 0x11:
      uVar4 = FUN_00e03ea0("custom_item_icon_0026");
      FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x1c),uVar4);
      uVar4 = FUN_00e03ea0("custom_item_icon_0026");
      FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x20),uVar4);
      pcVar6 = "HUD_ITEM_NAME_0026";
      break;
    case 0x12:
      uVar4 = FUN_00e03ea0("custom_item_icon_0027");
      FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x1c),uVar4);
      uVar4 = FUN_00e03ea0("custom_item_icon_0027");
      FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x20),uVar4);
      pcVar6 = "HUD_ITEM_NAME_0027";
      break;
    case 0x13:
      uVar4 = FUN_00e03ea0("custom_item_icon_0028");
      FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x1c),uVar4);
      uVar4 = FUN_00e03ea0("custom_item_icon_0028");
      FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x20),uVar4);
      pcVar6 = "HUD_ITEM_NAME_0028";
      break;
    case 0x14:
      uVar4 = FUN_00e03ea0("custom_item_icon_0029");
      FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x1c),uVar4);
      uVar4 = FUN_00e03ea0("custom_item_icon_0029");
      FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x20),uVar4);
      pcVar6 = "HUD_ITEM_NAME_0029";
      break;
    case 0x15:
      uVar4 = FUN_00e03ea0("custom_item_icon_0030");
      FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x1c),uVar4);
      uVar4 = FUN_00e03ea0("custom_item_icon_0030");
      FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x20),uVar4);
      pcVar6 = "HUD_ITEM_NAME_0030";
      break;
    case 0x16:
      uVar4 = FUN_00e03ea0("custom_item_icon_0015");
      FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x1c),uVar4);
      uVar4 = FUN_00e03ea0("custom_item_icon_0015");
      FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x20),uVar4);
      pcVar6 = "HUD_ITEM_NAME_0015";
      break;
    case 0x17:
      uVar4 = FUN_00e03ea0("custom_item_icon_0016");
      FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x1c),uVar4);
      uVar4 = FUN_00e03ea0("custom_item_icon_0016");
      FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x20),uVar4);
      pcVar6 = "HUD_ITEM_NAME_0016";
      break;
    case 0x18:
      uVar4 = FUN_00e03ea0("custom_item_icon_0017");
      FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x1c),uVar4);
      uVar4 = FUN_00e03ea0("custom_item_icon_0017");
      FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x20),uVar4);
      pcVar6 = "HUD_ITEM_NAME_0017";
      break;
    case 0x19:
      uVar4 = FUN_00e03ea0("custom_item_icon_0010");
      FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x1c),uVar4);
      uVar4 = FUN_00e03ea0("custom_item_icon_0010");
      FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x20),uVar4);
      pcVar6 = "HUD_ITEM_NAME_0010";
      break;
    case 0x1a:
      uVar4 = FUN_00e03ea0("custom_item_icon_0001");
      FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x1c),uVar4);
      uVar4 = FUN_00e03ea0("custom_item_icon_0001");
      FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x20),uVar4);
      pcVar6 = "HUD_ITEM_NAME_0001";
      break;
    case 0x1b:
      uVar4 = FUN_00e03ea0("custom_item_icon_0021");
      FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x1c),uVar4);
      uVar4 = FUN_00e03ea0("custom_item_icon_0021");
      FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x20),uVar4);
      pcVar6 = "HUD_ITEM_NAME_0021";
      break;
    default:
      goto switchD_00d1ac68_default;
    }
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x24),pcVar6,0,0xffffffff);
switchD_00d1ac68_default:
    if (*(int *)(param_1 + 0x18) != 0) {
      FUN_00cdeec0(0);
    }
    if (*(int *)(param_1 + 0x18) != 0) {
      FUN_00cdeec0(2);
    }
    *(char *)(param_1 + 0x30) = *(char *)(param_1 + 0x30) + '\x01';
    return;
  case 2:
    if (((*(int *)(param_1 + 0x18) != 0) && (iVar5 = FUN_00cdf400(0), iVar5 != 0)) &&
       ((cVar3 = FUN_00ce12f0(0), cVar3 != '\0' || (cVar3 = FUN_00d0d3e0(0x18,0), cVar3 != '\0'))))
    {
      if (*(char *)(param_1 + 0x33) < '\x01') {
        *(char *)(param_1 + 0x30) = *(char *)(param_1 + 0x30) + '\x01';
        FUN_00e5e050("core_se_sys_decide_s",0);
        return;
      }
      *(undefined1 *)(param_1 + 0x30) = 0;
      FUN_00e5e050("core_se_sys_decide_s",0);
      return;
    }
    break;
  case 3:
    iVar5 = *(int *)(param_1 + 0x18);
    if (((iVar5 != 0) && (*(uint *)(param_1 + 0x2c) < *(uint *)(iVar5 + 0x80))) &&
       (iVar5 = *(uint *)(param_1 + 0x2c) * 0x400 + 0x2a0 + *(int *)(iVar5 + 0x7c), iVar5 != 0)) {
      fVar1 = *(float *)(iVar5 + 0xfc) - 0.06666667;
      *(float *)(iVar5 + 0xfc) = fVar1;
      if (fVar1 < 0.0 != (fVar1 == 0.0)) {
        *(undefined4 *)(iVar5 + 0xfc) = 0;
      }
    }
    iVar5 = *(int *)(param_1 + 0x18);
    if (((iVar5 != 0) && (*(uint *)(param_1 + 0x28) < *(uint *)(iVar5 + 0x80))) &&
       (iVar5 = *(uint *)(param_1 + 0x28) * 0x400 + 0x2a0 + *(int *)(iVar5 + 0x7c), iVar5 != 0)) {
      fVar1 = *(float *)(iVar5 + 0xfc) - 0.06666667;
      *(float *)(iVar5 + 0xfc) = fVar1;
      if (fVar1 < 0.0 != (fVar1 == 0.0)) {
        *(undefined4 *)(iVar5 + 0xfc) = 0;
        *(char *)(param_1 + 0x30) = *(char *)(param_1 + 0x30) + '\x01';
        *(undefined1 *)(param_1 + 0x31) = 1;
        return;
      }
    }
  }
  return;
}

// 00D36B60  cUnLockDisp::cUnLockDisp  size=111  [class]
undefined4 * cUnLockDisp::cUnLockDisp(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x3c,&DAT_01b7be50);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 1;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *puVar1 = vftable;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0xffffffff;
    puVar1[0xe] = 0;
    puVar1[3] = "cUnLockDisp";
    puVar1[2] = 10;
    uVar2 = FUN_00d29960(0x85);
    puVar1[5] = uVar2;
    puVar1[4] = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 00D42170  cUnLockDisp::vf0C  size=57  [class]
void __fastcall cUnLockDisp::vf0C(int param_1)

{
  if (DAT_01dc0730 != 0) {
    FUN_00d38930(0x18,0,0,0,*(undefined4 *)(param_1 + 0x18),0x19,1);
  }
  return;
}


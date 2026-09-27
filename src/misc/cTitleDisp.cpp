// src/misc/cTitleDisp.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CC4900..00D42210, 4 functions

#include "mgrr.h"
#include "cTitleDisp.h"

// 00CC4900  cTitleDisp::vf08  size=1053  [class]
void __fastcall cTitleDisp::vf08(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  
  cVar1 = *(char *)(param_1 + 0xe0);
  if ((cVar1 == '\0') || (cVar1 == '\x02')) {
    iVar2 = *(int *)(param_1 + 0x18);
    if (iVar2 == 0) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = (uint)*(ushort *)(iVar2 + 0x88);
    }
    *(uint *)(param_1 + 0x1c) = uVar3;
    if (iVar2 == 0) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = (uint)*(ushort *)(iVar2 + 0x8a);
    }
    *(uint *)(param_1 + 0x20) = uVar3;
    if (iVar2 == 0) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = (uint)*(ushort *)(iVar2 + 0x8c);
    }
    *(uint *)(param_1 + 0x24) = uVar3;
    if (iVar2 == 0) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = (uint)*(ushort *)(iVar2 + 0x8e);
    }
    *(uint *)(param_1 + 0x28) = uVar3;
    if (iVar2 == 0) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = (uint)*(ushort *)(iVar2 + 0x90);
    }
    *(uint *)(param_1 + 0x2c) = uVar3;
    if (iVar2 == 0) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = (uint)*(ushort *)(iVar2 + 0x92);
    }
    *(uint *)(param_1 + 0x30) = uVar3;
    if (iVar2 == 0) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = (uint)*(ushort *)(iVar2 + 0x94);
    }
    *(uint *)(param_1 + 0x34) = uVar3;
    if (iVar2 == 0) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = (uint)*(ushort *)(iVar2 + 0x96);
    }
    *(uint *)(param_1 + 0x38) = uVar3;
    if (iVar2 == 0) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = (uint)*(ushort *)(iVar2 + 0x98);
    }
    *(uint *)(param_1 + 0x3c) = uVar3;
    if (iVar2 == 0) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = (uint)*(ushort *)(iVar2 + 0x9a);
    }
    *(uint *)(param_1 + 0x40) = uVar3;
    if (iVar2 == 0) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = (uint)*(ushort *)(iVar2 + 0x9c);
    }
    *(uint *)(param_1 + 0x44) = uVar3;
  }
  else if (cVar1 == '\x01') {
    iVar2 = *(int *)(param_1 + 0x18);
    if (iVar2 == 0) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = (uint)*(ushort *)(iVar2 + 0x9e);
    }
    *(uint *)(param_1 + 0x48) = uVar3;
    if (iVar2 == 0) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = (uint)*(ushort *)(iVar2 + 0xa0);
    }
    *(uint *)(param_1 + 0x4c) = uVar3;
    if (iVar2 == 0) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = (uint)*(ushort *)(iVar2 + 0xa2);
    }
    *(uint *)(param_1 + 0x50) = uVar3;
    if (iVar2 == 0) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = (uint)*(ushort *)(iVar2 + 0xa4);
    }
    *(uint *)(param_1 + 0x54) = uVar3;
    if (iVar2 == 0) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = (uint)*(ushort *)(iVar2 + 0xa6);
    }
    *(uint *)(param_1 + 0x58) = uVar3;
    if (iVar2 == 0) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = (uint)*(ushort *)(iVar2 + 0xa8);
    }
    *(uint *)(param_1 + 0x5c) = uVar3;
    if (iVar2 == 0) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = (uint)*(ushort *)(iVar2 + 0xaa);
    }
    *(uint *)(param_1 + 0x60) = uVar3;
    if (iVar2 == 0) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = (uint)*(ushort *)(iVar2 + 0xac);
    }
    *(uint *)(param_1 + 100) = uVar3;
    if (iVar2 == 0) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = (uint)*(ushort *)(iVar2 + 0xae);
    }
    *(uint *)(param_1 + 0x68) = uVar3;
    if (iVar2 == 0) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = (uint)*(ushort *)(iVar2 + 0xb0);
    }
    *(uint *)(param_1 + 0x6c) = uVar3;
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
    }
    else {
      *(uint *)(param_1 + 0x70) = (uint)*(ushort *)(iVar2 + 0xb2);
    }
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar2 + 0xea);
  }
  *(uint *)(param_1 + 0x74) = uVar3;
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar2 + 0xfe);
  }
  *(uint *)(param_1 + 0x78) = uVar3;
  if ((cVar1 == '\0') || (cVar1 == '\x02')) {
    if (iVar2 == 0) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = (uint)*(ushort *)(iVar2 + 0x100);
    }
    *(uint *)(param_1 + 0x7c) = uVar3;
    if (iVar2 == 0) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = (uint)*(ushort *)(iVar2 + 0x102);
    }
    *(uint *)(param_1 + 0x80) = uVar3;
    if (iVar2 == 0) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = (uint)*(ushort *)(iVar2 + 0x104);
    }
    *(uint *)(param_1 + 0x84) = uVar3;
    if (iVar2 == 0) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = (uint)*(ushort *)(iVar2 + 0x106);
    }
    *(uint *)(param_1 + 0x88) = uVar3;
    if (iVar2 == 0) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = (uint)*(ushort *)(iVar2 + 0x108);
    }
    *(uint *)(param_1 + 0x8c) = uVar3;
    if (iVar2 == 0) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = (uint)*(ushort *)(iVar2 + 0x10a);
    }
    *(uint *)(param_1 + 0x90) = uVar3;
    if (iVar2 == 0) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = (uint)*(ushort *)(iVar2 + 0x10c);
    }
    *(uint *)(param_1 + 0x94) = uVar3;
    if (iVar2 == 0) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = (uint)*(ushort *)(iVar2 + 0x10e);
    }
    *(uint *)(param_1 + 0x98) = uVar3;
    if (iVar2 == 0) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = (uint)*(ushort *)(iVar2 + 0x110);
    }
    *(uint *)(param_1 + 0x9c) = uVar3;
    if (iVar2 == 0) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = (uint)*(ushort *)(iVar2 + 0x112);
    }
    *(uint *)(param_1 + 0xa0) = uVar3;
    if (iVar2 == 0) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = (uint)*(ushort *)(iVar2 + 0x114);
    }
    *(uint *)(param_1 + 0xa4) = uVar3;
  }
  else if (cVar1 == '\x01') {
    if (iVar2 == 0) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = (uint)*(ushort *)(iVar2 + 0x116);
    }
    *(uint *)(param_1 + 0xa8) = uVar3;
    if (iVar2 == 0) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = (uint)*(ushort *)(iVar2 + 0x118);
    }
    *(uint *)(param_1 + 0xac) = uVar3;
    if (iVar2 == 0) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = (uint)*(ushort *)(iVar2 + 0x11a);
    }
    *(uint *)(param_1 + 0xb0) = uVar3;
    if (iVar2 == 0) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = (uint)*(ushort *)(iVar2 + 0x11c);
    }
    *(uint *)(param_1 + 0xb4) = uVar3;
    if (iVar2 == 0) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = (uint)*(ushort *)(iVar2 + 0x11e);
    }
    *(uint *)(param_1 + 0xb8) = uVar3;
    if (iVar2 == 0) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = (uint)*(ushort *)(iVar2 + 0x120);
    }
    *(uint *)(param_1 + 0xbc) = uVar3;
    if (iVar2 == 0) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = (uint)*(ushort *)(iVar2 + 0x122);
    }
    *(uint *)(param_1 + 0xc0) = uVar3;
    if (iVar2 == 0) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = (uint)*(ushort *)(iVar2 + 0x124);
    }
    *(uint *)(param_1 + 0xc4) = uVar3;
    if (iVar2 == 0) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = (uint)*(ushort *)(iVar2 + 0x126);
    }
    *(uint *)(param_1 + 200) = uVar3;
    if (iVar2 == 0) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = (uint)*(ushort *)(iVar2 + 0x128);
    }
    *(uint *)(param_1 + 0xcc) = uVar3;
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0xd0) = 0xffffffff;
    }
    else {
      *(uint *)(param_1 + 0xd0) = (uint)*(ushort *)(iVar2 + 0x12a);
    }
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 1;
  }
  *(undefined1 *)(param_1 + 0xd6) = 1;
  return;
}

// 00D1BD60  cTitleDisp::vf00  size=101  [class]
undefined4 * __thiscall cTitleDisp::vf00(undefined4 *param_1,byte param_2)

{
  int iVar1;
  
  *param_1 = vftable;
  if (DAT_01dc0730 != 0) {
    FUN_00cfcb70(0x19);
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

// 00D37A60  cTitleDisp::cTitleDisp  size=130  [class]
undefined4 * cTitleDisp::cTitleDisp(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0xe4,&DAT_01b7be50);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 1;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *puVar1 = vftable;
    puVar1[0x35] = 0;
    puVar1[0x36] = 0xffffffff;
    puVar1[0x37] = 0;
    *(undefined2 *)(puVar1 + 0x38) = 0;
    puVar1[3] = "cTitleDisp";
    puVar1[2] = 10;
    uVar2 = FUN_00d29960(0x84);
    puVar1[5] = uVar2;
    puVar1[4] = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 00D42210  cTitleDisp::vf14  size=1037  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall cTitleDisp::vf14(int param_1)

{
  uint uVar1;
  float fVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 fVar7;
  float10 extraout_ST1;
  float10 extraout_ST1_00;
  int local_24 [9];
  
  if (*(char *)(param_1 + 0xd6) != '\0') {
    switch(*(char *)(param_1 + 0xd4)) {
    case '\0':
      if (*(char *)(param_1 + 0xd7) == '\0') {
        if (((*(char *)(param_1 + 0xe0) != '\x02') || (*(char *)(param_1 + 0xe1) == '\0')) &&
           (*(int *)(param_1 + 0x14) != 0)) {
          *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0;
        }
        *(undefined1 *)(param_1 + 0xd4) = 3;
        return;
      }
      sVar4 = 0;
      while (((int)sVar4 <= *(int *)(param_1 + 0xd8) ||
             ((*(uint *)(param_1 + 0xdc) & 1 << ((byte)sVar4 & 0x1f)) == 0))) {
        sVar4 = sVar4 + 1;
        if (0x1b < sVar4) {
          return;
        }
      }
      *(int *)(param_1 + 0xd8) = (int)sVar4;
      *(undefined1 *)(param_1 + 0xd4) = 1;
      *(char *)(param_1 + 0xd7) = *(char *)(param_1 + 0xd7) + -1;
      return;
    case '\x01':
      local_24[2] = 0x16;
      local_24[7] = 0x16;
      local_24[5] = 0x16;
      local_24[0] = 0;
      local_24[1] = 0xb;
      iVar6 = local_24[*(char *)(param_1 + 0xe0)];
      local_24[6] = 0xb;
      local_24[8] = 0x1c;
      local_24[3] = 0;
      local_24[4] = 0;
      if (iVar6 < local_24[*(char *)(param_1 + 0xe0) + 6]) {
        do {
          if (iVar6 == *(int *)(param_1 + 0xd8)) {
            iVar5 = *(int *)(param_1 + 0x18);
            uVar1 = *(uint *)(param_1 + 0x1c + (iVar6 - local_24[*(char *)(param_1 + 0xe0) + 3]) * 4
                             );
            if (iVar5 != 0) {
              if ((uVar1 < *(uint *)(iVar5 + 0x80)) &&
                 (iVar5 = uVar1 * 0x400 + *(int *)(iVar5 + 0x7c), iVar5 != 0)) {
                *(undefined4 *)(iVar5 + 0x3b0) = 1;
              }
              if (*(int *)(param_1 + 0x18) != 0) {
                FUN_00cded00(*(undefined4 *)
                              (param_1 + 0x7c +
                              (iVar6 - local_24[*(char *)(param_1 + 0xe0) + 3]) * 4),4);
              }
            }
            if (DAT_01dc0730 != 0) {
              FUN_00cfcc30(0x19,0);
            }
            local_24[0] = 0;
            local_24[1] = 0;
            FUN_00d389f0(0x19,0,0,0,*(undefined4 *)(param_1 + 0x18),
                         (iVar6 - local_24[*(char *)(param_1 + 0xe0) + 3]) + 0x3d,1);
          }
          else {
            uVar1 = *(uint *)(param_1 + 0x1c + (iVar6 - local_24[*(char *)(param_1 + 0xe0) + 3]) * 4
                             );
            iVar5 = *(int *)(param_1 + 0x18);
            if (((iVar5 != 0) && (uVar1 < *(uint *)(iVar5 + 0x80))) &&
               (iVar5 = uVar1 * 0x400 + *(int *)(iVar5 + 0x7c), iVar5 != 0)) {
              *(undefined4 *)(iVar5 + 0x3b0) = 0;
            }
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < local_24[*(char *)(param_1 + 0xe0) + 6]);
      }
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cdeec0(0);
      }
      *(char *)(param_1 + 0xd4) = *(char *)(param_1 + 0xd4) + '\x01';
      return;
    case '\x02':
      iVar6 = FUN_00cb24b0(*(undefined4 *)(param_1 + 0x74));
      if ((iVar6 != 0) &&
         ((cVar3 = FUN_00ce12f0(0), cVar3 != '\0' || (cVar3 = FUN_00d0d3e0(0x19,0), cVar3 != '\0')))
         ) {
        if (*(char *)(param_1 + 0xd7) < '\x01') {
          *(char *)(param_1 + 0xd4) = *(char *)(param_1 + 0xd4) + '\x01';
          FUN_00e5e050("core_se_sys_decide_s",0);
          return;
        }
        *(undefined1 *)(param_1 + 0xd4) = 0;
        FUN_00e5e050("core_se_sys_decide_s",0);
        return;
      }
      break;
    case '\x03':
      if (DAT_018b9174 == 0xf07) {
        if (*(char *)(param_1 + 0xe0) != '\x01') {
LAB_00d424a6:
          *(char *)(param_1 + 0xd4) = *(char *)(param_1 + 0xd4) + '\x01';
          return;
        }
      }
      else if (((DAT_018b9174 != 0xf31) && (DAT_018b9174 != 0xf33)) ||
              (*(char *)(param_1 + 0xe0) != '\x02')) goto LAB_00d424a6;
      iVar6 = FUN_00cb2760(*(undefined4 *)(param_1 + 0x78));
      if (iVar6 != 0) {
        fVar2 = *(float *)(iVar6 + 0xfc) - 0.06666667;
        *(float *)(iVar6 + 0xfc) = fVar2;
        if (fVar2 < 0.0 != (fVar2 == 0.0)) {
          *(undefined4 *)(iVar6 + 0xfc) = 0;
        }
      }
      iVar6 = FUN_00cb2760(*(undefined4 *)(param_1 + 0x74));
      if (iVar6 != 0) {
        fVar7 = (float10)*(float *)(iVar6 + 0xfc) - extraout_ST0;
        *(float *)(iVar6 + 0xfc) = (float)fVar7;
        if (fVar7 < extraout_ST1 != (fVar7 == extraout_ST1)) {
          *(float *)(iVar6 + 0xfc) = (float)extraout_ST1;
          _DAT_01b76388 = _DAT_01b76388 & 0xffffff;
          iVar6 = FUN_009c4bf0();
          _DAT_01b76388 = _DAT_01b76388 | iVar6 << 0x18;
          FUN_009c8eb0();
          *(char *)(param_1 + 0xd4) = *(char *)(param_1 + 0xd4) + '\x01';
          return;
        }
      }
      break;
    case '\x04':
      iVar6 = FUN_009c5690();
      if ((iVar6 == 0) && (DAT_018b5758 == 0)) {
        *(char *)(param_1 + 0xd4) = *(char *)(param_1 + 0xd4) + '\x01';
        *(undefined1 *)(param_1 + 0xd5) = 1;
        return;
      }
      break;
    case '\x05':
    case '\x06':
    case '\a':
    case '\b':
    case '\t':
      break;
    case '\n':
      iVar6 = FUN_00cb2760(*(undefined4 *)(param_1 + 0x78));
      if (iVar6 != 0) {
        fVar2 = *(float *)(iVar6 + 0xfc) - 0.06666667;
        *(float *)(iVar6 + 0xfc) = fVar2;
        if (fVar2 < 0.0 != (fVar2 == 0.0)) {
          *(undefined4 *)(iVar6 + 0xfc) = 0;
        }
      }
      iVar6 = FUN_00cb2760(*(undefined4 *)(param_1 + 0x74));
      if (iVar6 != 0) {
        fVar7 = (float10)*(float *)(iVar6 + 0xfc) - extraout_ST0_00;
        *(float *)(iVar6 + 0xfc) = (float)fVar7;
        if (fVar7 < extraout_ST1_00 != (fVar7 == extraout_ST1_00)) {
          *(float *)(iVar6 + 0xfc) = (float)extraout_ST1_00;
          *(undefined1 *)(param_1 + 0xd4) = 4;
          return;
        }
      }
      break;
    default:
      goto switchD_00d42238_default;
    }
  }
switchD_00d42238_default:
  return;
}


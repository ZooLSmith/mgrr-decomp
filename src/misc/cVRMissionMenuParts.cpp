// src/misc/cVRMissionMenuParts.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00995420..009BF030, 13 functions

#include "types.h"

// 00995420  cVRMissionMenuParts::vf0C  size=72  [class]
void __fastcall cVRMissionMenuParts::vf0C(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    iVar1 = 0;
    do {
      FUN_00d389f0(0xb,iVar1,0,0,*(undefined4 *)(param_1 + 0x18),iVar1 + 0x3a,1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x15);
  }
  return;
}

// 00995470  FUN_00995470  size=51  [callgraph]
void __thiscall FUN_00995470(int param_1,short param_2)

{
  *(short *)(param_1 + 0x5aa) = param_2;
  if (param_2 < 0) {
    *(undefined2 *)(param_1 + 0x5aa) = 0;
  }
  if (0x14 < *(short *)(param_1 + 0x5aa)) {
    *(undefined2 *)(param_1 + 0x5aa) = 0x14;
  }
  return;
}

// 009954B0  FUN_009954b0  size=123  [callgraph]
void __thiscall FUN_009954b0(int param_1,int param_2)

{
  char local_8 [8];
  
  if (-1 < param_2) {
    _sprintf_s(local_8,8,"%03d",param_2);
    FUN_00cce090(*(undefined4 *)(param_1 + 0x4c4),local_8);
    FUN_00cce090(*(undefined4 *)(param_1 + 0x4c8),local_8);
    return;
  }
  FUN_00cce090(*(undefined4 *)(param_1 + 0x4c4),&DAT_01656cd4);
  FUN_00cce090(*(undefined4 *)(param_1 + 0x4c8),&DAT_01656cd4);
  return;
}

// 00995530  FUN_00995530  size=81  [callgraph]
void __thiscall FUN_00995530(int param_1,undefined4 param_2,undefined4 param_3)

{
  char local_8 [8];
  
  _sprintf_s(local_8,8,"%02d/%02d",param_2,param_3);
  FUN_00cce090(*(undefined4 *)(param_1 + 0x4d8),local_8);
  FUN_00cce090(*(undefined4 *)(param_1 + 0x4dc),local_8);
  return;
}

// 00995590  FUN_00995590  size=67  [callgraph]
int FUN_00995590(void)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  pfVar1 = (float *)&DAT_01b6efe4;
  iVar3 = 0x14;
  do {
    if (((pfVar1[-1] != 0.0) || (*pfVar1 != 0.0)) || (pfVar1[1] != 0.0)) {
      iVar2 = iVar2 + 1;
    }
    pfVar1 = pfVar1 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return iVar2;
}

// 009955E0  FUN_009955e0  size=76  [callgraph]
int __fastcall FUN_009955e0(int param_1)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (*(short *)(param_1 + 0x5c8) != 0) {
    pfVar1 = (float *)&DAT_01b6f124;
    iVar3 = 0x1e;
    do {
      if (((pfVar1[-1] != 0.0) || (*pfVar1 != 0.0)) || (pfVar1[1] != 0.0)) {
        iVar2 = iVar2 + 1;
      }
      pfVar1 = pfVar1 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return iVar2;
}

// 009B6820  cVRMissionMenuParts::vf00  size=30  [class]
undefined4 __thiscall cVRMissionMenuParts::vf00(undefined4 param_1,byte param_2)

{
  cMessWindowCtrl::cMessWindowCtrl_22();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 009B6840  FUN_009b6840  size=491  [callgraph]
undefined4 __thiscall FUN_009b6840(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  char local_10 [16];
  
  param_2 = *(short *)(param_1 + 0x5c4) + param_2;
  if (param_2 < 7) {
    if ((2 < param_2 + 1) &&
       (iVar1 = param_2 + 0x14,
       (1 << ((byte)iVar1 & 0x1f) & (&DAT_01b6f3a0)[(int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5]) ==
       0)) {
      return 0;
    }
    iVar1 = param_2 + 0x14;
    (&DAT_01b6f3a8)[(int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5] =
         (&DAT_01b6f3a8)[(int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5] | 1 << ((byte)iVar1 & 0x1f);
    if (param_2 < 10) {
      uVar2 = param_2 + 0xef3;
    }
    else {
      uVar2 = param_2 + 0xef3 + (param_2 / 10) * 6;
    }
  }
  else {
    if (param_2 < 0x1c) {
      param_2 = param_2 + -7;
      if ((1 << ((byte)param_2 & 0x1f) &
          (&DAT_01b6f3a0)[(int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5]) == 0) {
        return 0;
      }
      iVar1 = param_2 + (param_2 >> 0x1f & 0x1fU);
    }
    else {
      iVar1 = FUN_009c73f0(5);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = param_2 + -3 + (param_2 + -3 >> 0x1f & 0x1fU);
      param_2 = param_2 + -3;
    }
    (&DAT_01b6f3a8)[iVar1 >> 5] = (&DAT_01b6f3a8)[iVar1 >> 5] | 1 << ((byte)param_2 & 0x1f);
    uVar2 = cXmlBinary::cXmlBinary_98(param_2);
  }
  _sprintf_s(local_10,0x10,"P%03X_START",uVar2);
  FUN_009c83f0(1);
  if ((uVar2 & 0xf00) == 0xc00) {
    uVar3 = 3;
  }
  else if ((uVar2 & 0xf00) == 0xd00) {
    uVar3 = 4;
  }
  else {
    uVar3 = 2;
  }
  FUN_00cad0a0(uVar3);
  FUN_00a4ac40(uVar2,local_10,0xffffffff);
  *(undefined1 *)(param_1 + 0x5a0) = 10;
  DAT_01b39210 = *(undefined2 *)(param_1 + 0x5aa);
  DAT_01b39214 = *(undefined2 *)(param_1 + 0x5c4);
  return 1;
}

// 009B6A30  FUN_009b6a30  size=408  [callgraph]
void __fastcall FUN_009b6a30(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00cb25d0(1);
  *(undefined4 *)(param_1 + 0x50c) = uVar1;
  uVar1 = FUN_00cb25d0(2);
  *(undefined4 *)(param_1 + 0x510) = uVar1;
  uVar1 = FUN_00cb25d0(3);
  *(undefined4 *)(param_1 + 0x514) = uVar1;
  uVar1 = FUN_00cb25d0(4);
  *(undefined4 *)(param_1 + 0x518) = uVar1;
  uVar1 = FUN_00cb25d0(5);
  *(undefined4 *)(param_1 + 0x51c) = uVar1;
  uVar1 = FUN_00cb25d0(6);
  *(undefined4 *)(param_1 + 0x520) = uVar1;
  uVar1 = FUN_00cb25d0(7);
  *(undefined4 *)(param_1 + 0x524) = uVar1;
  uVar1 = FUN_00cb25d0(8);
  *(undefined4 *)(param_1 + 0x528) = uVar1;
  uVar1 = FUN_00cb25d0(9);
  *(undefined4 *)(param_1 + 0x52c) = uVar1;
  uVar1 = FUN_00cb25d0(0xb);
  *(undefined4 *)(param_1 + 0x530) = uVar1;
  uVar1 = FUN_00cb25d0(0xc);
  *(undefined4 *)(param_1 + 0x534) = uVar1;
  uVar1 = FUN_00cb25d0(0x15);
  *(undefined4 *)(param_1 + 0x538) = uVar1;
  uVar1 = FUN_00cb25d0(0x16);
  *(undefined4 *)(param_1 + 0x53c) = uVar1;
  uVar1 = FUN_00cb25d0(0x1f);
  *(undefined4 *)(param_1 + 0x540) = uVar1;
  uVar1 = FUN_00cb25d0(0x20);
  *(undefined4 *)(param_1 + 0x544) = uVar1;
  uVar1 = FUN_00cb25d0(0x29);
  *(undefined4 *)(param_1 + 0x548) = uVar1;
  uVar1 = FUN_00cb25d0(0x2a);
  *(undefined4 *)(param_1 + 0x54c) = uVar1;
  uVar1 = FUN_00cb25d0(0x47);
  *(undefined4 *)(param_1 + 0x550) = uVar1;
  uVar1 = FUN_00cb25d0(0x48);
  *(undefined4 *)(param_1 + 0x554) = uVar1;
  uVar1 = FUN_00cb25d0(0x49);
  *(undefined4 *)(param_1 + 0x558) = uVar1;
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x52c),0);
  FUN_009a79c0(1,0xbf800000);
  FUN_009a79c0(2,0xbf800000);
  FUN_009a79c0(3,0xbf800000);
  *(undefined1 *)(param_1 + 0x605) = 1;
  return;
}

// 009B6BD0  FUN_009b6bd0  size=2150  [callgraph]
void __thiscall FUN_009b6bd0(int param_1,short param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  float local_18;
  float local_14;
  float local_10;
  
  if (-1 < *(short *)(param_1 + 0x5ac)) {
    FUN_00ce4d70(1);
    FUN_00ce4d70(3);
    uVar6 = FUN_00e03ea0("vr_icon_parts_02");
    FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x590),uVar6);
  }
  *(short *)(param_1 + 0x5ac) = param_2;
  if (-1 < param_2) {
    FUN_00ce4d70(0);
    FUN_00ce4d70(2);
    uVar6 = FUN_00e03ea0("vr_icon_parts_03");
    FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x590),uVar6);
    iVar8 = (int)*(short *)(param_1 + 0x5c4) + (int)param_2;
    if (iVar8 < 7) {
      FUN_009954b0(param_2 + 1);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x504),0);
      FUN_009a79c0(1,0xbf800000);
      FUN_009a79c0(2,0xbf800000);
      FUN_009a79c0(3,0xbf800000);
      FUN_009a79c0(4,0xbf800000);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x52c),1);
      if (*(char *)(param_1 + 0x605) != '\0') {
        *(undefined1 *)(param_1 + 0x605) = 0;
        FUN_00ce4d70(3);
      }
      FUN_00995630(1);
      return;
    }
    if (iVar8 < 0x1c) {
      iVar7 = iVar8 + -7;
      FUN_009954b0(iVar8 + -6);
      FUN_00995630(0);
      iVar8 = iVar8 + -7;
      if ((1 << ((byte)iVar8 & 0x1f) & (&DAT_01b6f3a0)[(int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5])
          != 0) {
        cXmlBinary::cXmlBinary_56(iVar7,0);
        cXmlBinary::cXmlBinary_57(iVar7,0);
        FUN_009a79c0(4,0xbf800000);
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x52c),1);
        if (*(char *)(param_1 + 0x605) != '\0') {
          *(undefined1 *)(param_1 + 0x605) = 0;
          FUN_00ce4d70(3);
        }
        fVar1 = (float)(&DAT_01b6efe0)[iVar7 * 4];
        fVar2 = (float)(&DAT_01b6efe4)[iVar7 * 4];
        fVar3 = (float)(&DAT_01b6efe8)[iVar7 * 4];
        fVar9 = (float10)cXmlBinary::cXmlBinary_61(iVar7,1);
        fVar4 = (float)fVar9;
        fVar9 = (float10)cXmlBinary::cXmlBinary_61(iVar7,2);
        fVar5 = (float)fVar9;
        fVar9 = (float10)cXmlBinary::cXmlBinary_61(iVar7,3);
        local_10 = (float)fVar9;
        local_18 = fVar4;
        local_14 = fVar5;
        if (fVar3 != 0.0) {
          if (fVar4 <= fVar3) {
            if (fVar5 <= fVar3) {
              fVar9 = (float10)cXmlBinary::cXmlBinary_61(iVar7,3);
              if ((float10)fVar3 < fVar9) {
                FUN_00cb2310(*(undefined4 *)(param_1 + 0x52c),1);
                *(undefined1 *)(param_1 + 0x605) = 1;
                FUN_00cb2310(*(undefined4 *)(param_1 + 0x550),0);
                FUN_00cb2310(*(undefined4 *)(param_1 + 0x554),0);
                FUN_00cb2310(*(undefined4 *)(param_1 + 0x558),1);
                FUN_00ce4d70(2);
                local_10 = fVar3;
              }
            }
            else {
              FUN_00cb2310(*(undefined4 *)(param_1 + 0x52c),1);
              *(undefined1 *)(param_1 + 0x605) = 1;
              FUN_00cb2310(*(undefined4 *)(param_1 + 0x550),0);
              FUN_00cb2310(*(undefined4 *)(param_1 + 0x554),1);
              FUN_00cb2310(*(undefined4 *)(param_1 + 0x558),0);
              FUN_00ce4d70(2);
              local_14 = fVar3;
              local_10 = fVar5;
            }
          }
          else {
            FUN_00995f50(1);
            local_18 = fVar3;
            local_14 = fVar4;
            local_10 = fVar5;
          }
          FUN_009a79c0(1,local_18);
          FUN_009a79c0(2,local_14);
          FUN_009a79c0(3,local_10);
          FUN_009a79c0(4,fVar3);
        }
        if (fVar2 != 0.0) {
          if (local_18 <= fVar2) {
            if (local_14 <= fVar2) {
              if (fVar2 < local_10) {
                FUN_00cb2310(*(undefined4 *)(param_1 + 0x52c),1);
                *(undefined1 *)(param_1 + 0x605) = 1;
                FUN_00cb2310(*(undefined4 *)(param_1 + 0x550),0);
                FUN_00cb2310(*(undefined4 *)(param_1 + 0x554),0);
                FUN_00cb2310(*(undefined4 *)(param_1 + 0x558),1);
                FUN_00ce4d70(2);
                local_10 = fVar2;
              }
            }
            else {
              FUN_00cb2310(*(undefined4 *)(param_1 + 0x52c),1);
              *(undefined1 *)(param_1 + 0x605) = 1;
              FUN_00cb2310(*(undefined4 *)(param_1 + 0x550),0);
              FUN_00cb2310(*(undefined4 *)(param_1 + 0x554),1);
              FUN_00cb2310(*(undefined4 *)(param_1 + 0x558),0);
              FUN_00ce4d70(2);
              local_10 = local_14;
              local_14 = fVar2;
            }
          }
          else {
            FUN_00995f50(1);
            local_10 = local_14;
            local_14 = local_18;
            local_18 = fVar2;
          }
          FUN_009a79c0(1,local_18);
          FUN_009a79c0(2,local_14);
          FUN_009a79c0(3,local_10);
          FUN_009a79c0(4,fVar2);
        }
        if (fVar1 == 0.0) {
          return;
        }
        if (local_18 <= fVar1) {
          if (local_14 <= fVar1) {
            if (fVar1 < local_10) {
              FUN_00cb2310(*(undefined4 *)(param_1 + 0x52c),1);
              *(undefined1 *)(param_1 + 0x605) = 1;
              FUN_00cb2310(*(undefined4 *)(param_1 + 0x550),0);
              FUN_00cb2310(*(undefined4 *)(param_1 + 0x554),0);
              FUN_00cb2310(*(undefined4 *)(param_1 + 0x558),1);
              FUN_00ce4d70(2);
              local_10 = fVar1;
            }
          }
          else {
            FUN_00cb2310(*(undefined4 *)(param_1 + 0x52c),1);
            *(undefined1 *)(param_1 + 0x605) = 1;
            FUN_00cb2310(*(undefined4 *)(param_1 + 0x550),0);
            FUN_00cb2310(*(undefined4 *)(param_1 + 0x554),1);
            FUN_00cb2310(*(undefined4 *)(param_1 + 0x558),0);
            FUN_00ce4d70(2);
            local_10 = local_14;
            local_14 = fVar1;
          }
        }
        else {
          FUN_00995f50(1);
          local_10 = local_14;
          local_14 = local_18;
          local_18 = fVar1;
        }
        FUN_009a79c0(1,local_18);
        FUN_009a79c0(2,local_14);
        FUN_009a79c0(3,local_10);
        FUN_009a79c0(4,fVar1);
        return;
      }
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x504),0);
      FUN_009a79c0(1,0xbf800000);
      FUN_009a79c0(2,0xbf800000);
      FUN_009a79c0(3,0xbf800000);
      FUN_009a79c0(4,0xbf800000);
      uVar6 = *(undefined4 *)(param_1 + 0x52c);
    }
    else {
      FUN_009954b0(iVar8 + -0x1b);
      FUN_00995690(1);
      iVar7 = FUN_009c73f0(5);
      if (iVar7 != 0) {
        iVar7 = iVar8 + -3;
        cXmlBinary::cXmlBinary_57(iVar7,0);
        FUN_009a79c0(4,0xbf800000);
        cXmlBinary::cXmlBinary_56(iVar7,0);
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x52c),1);
        if (*(char *)(param_1 + 0x605) != '\0') {
          *(undefined1 *)(param_1 + 0x605) = 0;
          FUN_00ce4d70(3);
        }
        FUN_009a87f0(iVar8 + -8,iVar7);
        return;
      }
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x504),0);
      FUN_009a79c0(1,0xbf800000);
      FUN_009a79c0(2,0xbf800000);
      FUN_009a79c0(3,0xbf800000);
      FUN_009a79c0(4,0xbf800000);
      uVar6 = *(undefined4 *)(param_1 + 0x52c);
    }
    FUN_00cb2310(uVar6,1);
    if (*(char *)(param_1 + 0x605) != '\0') {
      *(undefined1 *)(param_1 + 0x605) = 0;
      FUN_00ce4d70(3);
      return;
    }
  }
  return;
}

// 009BE340  cVRMissionMenuParts::vf08  size=1070  [class]
void __fastcall cVRMissionMenuParts::vf08(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = DAT_01b6f3ac;
  uVar2 = DAT_01b6f3a8;
  FUN_009c80e0();
  iVar4 = 0x33;
  puVar3 = (undefined4 *)(param_1 + 0x424);
  iVar5 = 0x23;
  DAT_01b6f3a8 = uVar2;
  DAT_01b6f3ac = uVar1;
  do {
    uVar2 = FUN_00cb25d0(iVar4);
    *puVar3 = uVar2;
    puVar3 = puVar3 + 1;
    iVar4 = iVar4 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  uVar2 = FUN_00cb25d0(10);
  *(undefined4 *)(param_1 + 0x4b0) = uVar2;
  uVar2 = FUN_00cb25d0(0xb);
  *(undefined4 *)(param_1 + 0x4b4) = uVar2;
  uVar2 = FUN_00cb25d0(0xc);
  *(undefined4 *)(param_1 + 0x4b8) = uVar2;
  uVar2 = FUN_00cb25d0(0xd);
  *(undefined4 *)(param_1 + 0x4bc) = uVar2;
  uVar2 = FUN_00cb25d0(0xe);
  *(undefined4 *)(param_1 + 0x4c0) = uVar2;
  uVar2 = FUN_00cb25d0(0xf);
  *(undefined4 *)(param_1 + 0x4c4) = uVar2;
  uVar2 = FUN_00cb25d0(0x10);
  *(undefined4 *)(param_1 + 0x4c8) = uVar2;
  uVar2 = FUN_00cb25d0(0x14);
  *(undefined4 *)(param_1 + 0x4cc) = uVar2;
  uVar2 = FUN_00cb25d0(0x15);
  *(undefined4 *)(param_1 + 0x4d0) = uVar2;
  uVar2 = FUN_00cb25d0(0x16);
  *(undefined4 *)(param_1 + 0x4d4) = uVar2;
  uVar2 = FUN_00cb25d0(0x11);
  *(undefined4 *)(param_1 + 0x4d8) = uVar2;
  uVar2 = FUN_00cb25d0(0x12);
  *(undefined4 *)(param_1 + 0x4dc) = uVar2;
  uVar2 = FUN_00cb25d0(0x17);
  *(undefined4 *)(param_1 + 0x4e0) = uVar2;
  uVar2 = FUN_00cb25d0(0x18);
  *(undefined4 *)(param_1 + 0x4e4) = uVar2;
  uVar2 = FUN_00cb25d0(0x19);
  *(undefined4 *)(param_1 + 0x4e8) = uVar2;
  uVar2 = FUN_00cb25d0(0x1a);
  *(undefined4 *)(param_1 + 0x4ec) = uVar2;
  uVar2 = FUN_00cb25d0(0x5b);
  *(undefined4 *)(param_1 + 0x4f0) = uVar2;
  uVar2 = FUN_00cb25d0(0x5c);
  *(undefined4 *)(param_1 + 0x4f4) = uVar2;
  uVar2 = FUN_00cb25d0(0x5d);
  *(undefined4 *)(param_1 + 0x4f8) = uVar2;
  uVar2 = FUN_00cb25d0(0x5e);
  *(undefined4 *)(param_1 + 0x4fc) = uVar2;
  uVar2 = FUN_00cb25d0(0x61);
  *(undefined4 *)(param_1 + 0x500) = uVar2;
  uVar2 = FUN_00cb25d0(0x62);
  *(undefined4 *)(param_1 + 0x504) = uVar2;
  uVar2 = FUN_00cb25d0(99);
  *(undefined4 *)(param_1 + 0x508) = uVar2;
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x4b4),0);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x4b8),0);
  FUN_00cf9770(*(undefined4 *)(param_1 + 0x4bc),"VR_TITLE_05",0,0xffffffff);
  FUN_00cf9770(*(undefined4 *)(param_1 + 0x4c0),"VR_TITLE_05",0,0xffffffff);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x4bc),0);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x4c0),0);
  iVar5 = FUN_00cb3300(*(undefined4 *)(param_1 + 0x500));
  if (iVar5 != 0) {
    FUN_00cb2240(iVar5);
  }
  FUN_009b6a30();
  puVar3 = (undefined4 *)(param_1 + 0x424);
  iVar5 = 0x23;
  do {
    iVar4 = FUN_00cb3300(*puVar3);
    if (iVar4 != 0) {
      FUN_00cb2240(iVar4);
    }
    FUN_00cb2310(*puVar3,0);
    puVar3 = puVar3 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  FUN_00996120();
  FUN_009a7e90(DAT_01b39214);
  iVar5 = *(int *)(param_1 + 0x420);
  puVar3 = (undefined4 *)FUN_00cb2790(*(undefined4 *)(param_1 + 0x508));
  uVar2 = *puVar3;
  iVar4 = FUN_00cb2790(*(undefined4 *)(param_1 + 0x508));
  uVar1 = *(undefined4 *)(iVar4 + 4);
  FUN_0099a440(iVar5 + 0x8c,&DAT_016575ac,"select_vr_mission");
  *(undefined4 *)(iVar5 + 0x10c) = uVar2;
  *(undefined4 *)(iVar5 + 0x110) = uVar1;
  *(undefined4 *)(iVar5 + 0x118) = 0;
  *(undefined4 *)(iVar5 + 0x114) = 0x41700000;
  *(undefined4 *)(iVar5 + 0x5c) = 1;
  FUN_00cb2570(1);
  FUN_00cb2570(1);
  *(undefined2 *)(param_1 + 0x5a1) = 0;
  *(undefined1 *)(param_1 + 0x5a0) = 0;
  *(undefined1 *)(param_1 + 0x5a4) = 0;
  *(undefined2 *)(param_1 + 0x5aa) = DAT_01b39210;
  *(undefined2 *)(param_1 + 0x5ac) = 0xffff;
  iVar5 = FUN_009c73f0(5);
  if (iVar5 == 0) {
    *(undefined2 *)(param_1 + 0x5c8) = 0;
  }
  else {
    *(undefined2 *)(param_1 + 0x5c8) = 1;
  }
  *(undefined2 *)(param_1 + 0x5c4) = DAT_01b39214;
  *(undefined2 *)(param_1 + 0x5c6) = 4;
  if (*(short *)(param_1 + 0x5c8) != 0) {
    *(undefined2 *)(param_1 + 0x5c6) = 9;
  }
  *(undefined2 *)(param_1 + 0x5ca) = 1;
  iVar5 = (int)*(short *)(param_1 + 0x5aa);
  *(short *)(param_1 + 0x5c6) = (*(short *)(param_1 + 0x5c6) + -3) * 7;
  *(undefined4 *)(param_1 + 0x5d0) = 0;
  *(undefined4 *)(param_1 + 0x5cc) = 0;
  *(undefined1 *)(param_1 + 0x604) = 0;
  if (((iVar5 == 0x14) || (0x33 < iVar5 + 1)) ||
     ((1 << ((byte)*(short *)(param_1 + 0x5aa) & 0x1f) &
      (&DAT_01b6f3a0)[(int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5]) == 0)) {
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x504),0);
  }
  FUN_00cb2600(1);
  return;
}

// 009BE770  cVRMissionMenuParts::vf14  size=2177  [class]
void __fastcall cVRMissionMenuParts::vf14(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  short sVar6;
  ushort uVar7;
  char cVar8;
  undefined4 *puVar9;
  uint uVar10;
  char *local_48;
  char local_40 [64];
  
  iVar2 = FUN_00c20a50();
  if (iVar2 != 0) {
    return;
  }
  switch(*(undefined1 *)(param_1 + 0x5a0)) {
  case 0:
    iVar2 = FUN_00eb4340(DAT_01be8e4c);
    if (iVar2 == 0) goto switchD_009be795_caseD_5;
    FUN_00ce4d70(0);
    FUN_00ce4d70(0);
    FUN_00e5e050("core_se_sys_vr_window_open",0);
    *(undefined4 *)(param_1 + 0x5a6) = 0;
    break;
  case 1:
    *(short *)(param_1 + 0x5a6) = *(short *)(param_1 + 0x5a6) + 1;
    if (0x19 < *(short *)(param_1 + 0x5a6)) {
      sVar6 = FUN_00dde2d0(0,999);
      FUN_009954b0((int)sVar6);
    }
    if (0x3b < *(short *)(param_1 + 0x5a6)) {
      sVar6 = FUN_00dde2d0(0,99);
      iVar2 = (int)sVar6;
      sVar6 = FUN_00dde2d0(0,99);
      FUN_00995530((int)sVar6,iVar2);
    }
    sVar6 = *(short *)(param_1 + 0x5a6);
    if (sVar6 == 0x1a) {
      FUN_009b6bd0(*(undefined2 *)(param_1 + 0x5aa));
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x4b4),1);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x4b8),1);
      FUN_00ccdf90(*(undefined4 *)(param_1 + 0x4b4),1,3);
      FUN_00ccdf90(*(undefined4 *)(param_1 + 0x4b8),1,3);
      iVar2 = FUN_00cb2480(*(undefined4 *)(param_1 + 0x4bc));
      if (iVar2 != 0) {
        FUN_00ccdf90(*(undefined4 *)(param_1 + 0x4bc),1,3);
        FUN_00ccdf90(*(undefined4 *)(param_1 + 0x4c0),1,3);
      }
      FUN_00ccdf90(*(undefined4 *)(param_1 + 0x4d0),1,3);
      FUN_00ccdf90(*(undefined4 *)(param_1 + 0x4d4),1,3);
      goto switchD_009be795_caseD_5;
    }
    if ((sVar6 == 0x44) || (sVar6 != 0x5a)) goto switchD_009be795_caseD_5;
    iVar2 = (int)*(short *)(param_1 + 0x5c4) + (int)*(short *)(param_1 + 0x5aa);
    if (iVar2 < 7) {
      iVar2 = iVar2 + 1;
    }
    else if (iVar2 < 0x1c) {
      iVar2 = iVar2 + -6;
    }
    else {
      iVar2 = iVar2 + -0x1b;
    }
    FUN_009954b0(iVar2);
    if (*(short *)(param_1 + 0x5c8) == 0) {
      uVar5 = 0x14;
      uVar4 = FUN_00995590(0x14);
      FUN_00995530(uVar4,uVar5);
    }
    else {
      uVar4 = 0x32;
      iVar2 = FUN_009955e0(0x32);
      iVar3 = FUN_00995590();
      FUN_00995530(iVar2 + iVar3,uVar4);
    }
    break;
  case 2:
    local_48 = (char *)(param_1 + 0x5a8);
    cVar8 = '\0';
    puVar9 = (undefined4 *)(param_1 + 0x424);
    do {
      if ((byte)(cVar8 - 7U) < 0x15) {
        if ((int)*local_48 ==
            (int)((int)*(short *)(param_1 + 0x5a8) + ((int)*(short *)(param_1 + 0x5a8) >> 0x1f & 3U)
                 ) >> 2) {
          FUN_00ce4d70(4);
          iVar2 = FUN_00cb2480(*puVar9);
          if (iVar2 == 0) {
            FUN_00cb2310(*puVar9,1);
          }
          FUN_00e5e050("core_se_sys_icon_open",0);
        }
      }
      else {
        iVar2 = FUN_00cb2480(*puVar9);
        if (iVar2 == 0) {
          FUN_00cb2310(*puVar9,1);
        }
      }
      local_48 = local_48 + 1;
      cVar8 = cVar8 + '\x01';
      puVar9 = puVar9 + 1;
    } while (cVar8 < '#');
    if (0x53 < *(ushort *)(param_1 + 0x5a8)) {
      if (*(short *)(param_1 + 0x5c4) == 0) {
        iVar2 = FUN_00cb2480(*(undefined4 *)(param_1 + 0x4ec));
        if (iVar2 == 0) {
          FUN_00cb2310(*(undefined4 *)(param_1 + 0x4ec),1);
          FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x4f8),5);
          uVar4 = *(undefined4 *)(param_1 + 0x4fc);
          goto LAB_009beab7;
        }
      }
      else {
        iVar2 = FUN_00cb2480(*(undefined4 *)(param_1 + 0x4e4));
        if (iVar2 == 0) {
          FUN_00cb2310(*(undefined4 *)(param_1 + 0x4e4),1);
          FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x4f0),5);
          uVar4 = *(undefined4 *)(param_1 + 0x4f4);
LAB_009beab7:
          FUN_00ce4ce0(uVar4,5);
        }
      }
      FUN_009a76d0();
      *(undefined1 *)(param_1 + 0x5ae) = 0;
      iVar2 = cUnLockDisp::cUnLockDisp();
      *(int *)(param_1 + 0x40c) = iVar2;
      if (iVar2 != 0) {
        if ((DAT_01b73880 == '\0') && (iVar2 = FUN_00995590(), 5 < iVar2)) {
          DAT_01b73880 = '\x01';
          FUN_00cc3590(0);
          *(undefined1 *)(param_1 + 0x5ae) = 1;
        }
        if ((DAT_01b738a0 == '\0') && (iVar2 = FUN_00995590(), 9 < iVar2)) {
          DAT_01b738a0 = '\x01';
          FUN_00cc3590(1);
          *(undefined1 *)(param_1 + 0x5ae) = 1;
        }
        if ((DAT_01b738c0 == '\0') && (iVar2 = FUN_00995590(), 0x13 < iVar2)) {
          DAT_01b738c0 = '\x01';
          FUN_00cc3590(2);
          *(undefined1 *)(param_1 + 0x5ae) = 1;
        }
        if ((DAT_01b73a60 == '\0') && (*(char *)(param_1 + 0x5a3) != '\0')) {
          DAT_01b73a60 = '\x01';
          FUN_00cc3590(0xf);
          *(undefined1 *)(param_1 + 0x5ae) = 1;
        }
      }
      *(char *)(param_1 + 0x5a0) = *(char *)(param_1 + 0x5a0) + '\x01';
    }
    *(short *)(param_1 + 0x5a8) = *(short *)(param_1 + 0x5a8) + 1;
    goto switchD_009be795_caseD_5;
  case 3:
    puVar9 = *(undefined4 **)(param_1 + 0x40c);
    if (*(char *)((int)puVar9 + 0x31) == '\0') goto switchD_009be795_caseD_5;
    if (puVar9 != (undefined4 *)0x0) {
      (**(code **)*puVar9)(1);
      *(undefined4 *)(param_1 + 0x40c) = 0;
    }
    if (*(char *)(param_1 + 0x5ae) != '\0') {
      FUN_009c8df0();
    }
    break;
  case 4:
    iVar2 = FUN_009c5690();
    if ((iVar2 == 0) && (DAT_018b5758 == 0)) {
      *(undefined1 *)(param_1 + 0x5a4) = 1;
      FUN_009a2a10();
    }
  default:
    goto switchD_009be795_caseD_5;
  case 10:
    iVar2 = FUN_00999fa0();
    if ((iVar2 == 1) || (iVar2 == -1)) {
      *(undefined2 *)(param_1 + 0x5a0) = 2;
      goto switchD_009be795_caseD_5;
    }
    if (iVar2 != 2) goto switchD_009be795_caseD_5;
    FUN_009c8d50();
    break;
  case 0xb:
    iVar2 = FUN_009c5690();
    if ((iVar2 != 0) || (DAT_018b5758 != 0)) goto switchD_009be795_caseD_5;
    FUN_00cad0c0();
    iVar2 = FUN_00416d50(0x3b);
    if (iVar2 == 0) {
      FUN_00a4ac40(0xf01,"PF01_START",0xffffffff);
    }
    else {
      FUN_0049cc90(0x3b);
      FUN_00a4d650();
    }
  }
  *(char *)(param_1 + 0x5a0) = *(char *)(param_1 + 0x5a0) + '\x01';
switchD_009be795_caseD_5:
  if ((*(char *)(param_1 + 0x5a1) == '\x01') && (iVar2 = FUN_00cb25b0(), iVar2 != 0)) {
    *(undefined1 *)(param_1 + 0x5a1) = 0;
    FUN_009a7e90(*(undefined2 *)(param_1 + 0x5c4));
    puVar9 = (undefined4 *)(param_1 + 0x424);
    iVar2 = 0x23;
    do {
      FUN_00ce4ce0(*puVar9,4);
      puVar9 = puVar9 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    iVar2 = FUN_00cb2480(*(undefined4 *)(param_1 + 0x578));
    if (iVar2 == 0) {
      uVar1 = *(undefined2 *)(param_1 + 0x5aa);
LAB_009bee80:
      FUN_009b6bd0(uVar1);
    }
    else if (*(char *)(param_1 + 0x5a5) == '\x01') {
      if (*(short *)(param_1 + 0x5c4) < *(short *)(param_1 + 0x5c6)) {
        *(char *)(param_1 + 0x5a1) = *(char *)(param_1 + 0x5a1) + '\x01';
        *(short *)(param_1 + 0x5c4) = *(short *)(param_1 + 0x5c4) + 7;
        FUN_00ce4d70(1);
      }
      else {
        for (sVar6 = *(short *)(param_1 + 0x5aa) + 7; -1 < sVar6; sVar6 = sVar6 + -1) {
          iVar2 = FUN_00cb2480(*(undefined4 *)(param_1 + 0x578));
          if (iVar2 == 0) {
            *(short *)(param_1 + 0x5aa) = sVar6 + -7;
            if ((short)(sVar6 + -7) < 0) {
              *(undefined2 *)(param_1 + 0x5aa) = 0;
            }
            if (0x14 < *(short *)(param_1 + 0x5aa)) {
              *(undefined2 *)(param_1 + 0x5aa) = 0x14;
            }
            uVar1 = *(undefined2 *)(param_1 + 0x5aa);
            goto LAB_009bee80;
          }
        }
      }
    }
    else if (*(char *)(param_1 + 0x5a5) == '\x02') {
      if (*(short *)(param_1 + 0x5c4) == 0) {
        uVar7 = *(short *)(param_1 + 0x5aa) + 7;
        uVar10 = (uint)uVar7;
        while (-1 < (short)uVar7) {
          iVar2 = FUN_00cb2480(*(undefined4 *)(param_1 + 0x578));
          if (iVar2 == 0) {
            *(short *)(param_1 + 0x5aa) = (short)uVar10;
            FUN_00995470(uVar10 - 7);
            uVar1 = *(undefined2 *)(param_1 + 0x5aa);
            goto LAB_009bee80;
          }
          uVar10 = uVar10 - 1;
          uVar7 = (ushort)uVar10;
        }
      }
      else {
        *(char *)(param_1 + 0x5a1) = *(char *)(param_1 + 0x5a1) + '\x01';
        *(short *)(param_1 + 0x5c4) = *(short *)(param_1 + 0x5c4) + -7;
        FUN_00ce4d70(2);
      }
    }
  }
  iVar2 = 0;
  do {
    FUN_00d38a30(0xb,iVar2,*(undefined4 *)(param_1 + 0x18));
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x15);
  if ((*(char *)(param_1 + 0x5a2) == '\x01') && (*(char *)(param_1 + 0x604) == '\0')) {
    iVar2 = FUN_00e9cf60(*(undefined4 *)(param_1 + 0x5cc));
    iVar3 = FUN_00e9cf60(*(undefined4 *)(param_1 + 0x5d0));
    if ((iVar2 != 0) && (iVar3 != 0)) {
      *(undefined1 *)(param_1 + 0x604) = 1;
      FUN_00de3530();
      uVar4 = FUN_00e9d0b0(*(undefined4 *)(param_1 + 0x5cc));
      uVar5 = FUN_00e9d0b0(*(undefined4 *)(param_1 + 0x5d0));
      FUN_00de3540(uVar4,uVar5);
      _sprintf_s(local_40,0x40,"vr_mission_img_%02d.wtb",(int)*(short *)(param_1 + 0x5ca));
      uVar4 = FUN_00de4550(local_40,0);
      FUN_00fa25d0(uVar4);
      *(int *)(param_1 + 0x5d8) = param_1 + 0x5e8;
      if (*(int *)(param_1 + 0x5f4) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(param_1 + 0x5f0);
      }
      *(undefined4 *)(param_1 + 0x5e4) = uVar4;
      FUN_00ccde60(*(undefined4 *)(param_1 + 0x52c),param_1 + 0x5d4);
      FUN_00ccdee0(*(undefined4 *)(param_1 + 0x52c),0,0,0,0x43e00000);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x52c),1);
      *(undefined1 *)(param_1 + 0x5a2) = 0;
    }
  }
  if (*(int **)(param_1 + 0x40c) == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x009befea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x40c) + 4))();
  return;
}

// 009BF030  FUN_009bf030  size=1893  [callgraph]
void __thiscall FUN_009bf030(int param_1,uint param_2)

{
  ushort uVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  
  if (10 < param_2) {
    return;
  }
switchD_009bf048_switchD:
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_2) {
  case 0:
  case 8:
    goto switchD_009bf048_caseD_0;
  case 1:
  case 9:
    if (*(short *)(param_1 + 0x5aa) < 0xe) {
      iVar6 = FUN_00cb2480(*(undefined4 *)(param_1 + 0x578));
      if (iVar6 == 0) {
        FUN_00995470(*(short *)(param_1 + 0x5aa) + 7);
        FUN_009b6bd0(*(undefined2 *)(param_1 + 0x5aa));
        FUN_00e5e050("core_se_sys_vr_curcor",0);
        return;
      }
      uVar1 = *(ushort *)(param_1 + 0x5aa);
      if ((short)uVar1 < 7) {
        FUN_00995470(uVar1 + 0xe);
        FUN_009b6bd0(*(undefined2 *)(param_1 + 0x5aa));
        FUN_00e5e050("core_se_sys_vr_curcor",0);
        return;
      }
      if (*(short *)(param_1 + 0x5c6) <= *(short *)(param_1 + 0x5c4)) {
        uVar5 = uVar1 + 7;
        uVar7 = uVar5 & 0xffff;
        if (-1 < (short)uVar5) {
          do {
            iVar6 = FUN_00cb2480(*(undefined4 *)(param_1 + 0x578));
            if (iVar6 == 0) {
              *(short *)(param_1 + 0x5aa) = (short)uVar7;
              FUN_00995470(uVar7);
              FUN_009b6bd0(*(undefined2 *)(param_1 + 0x5aa));
              FUN_00e5e050("core_se_sys_vr_curcor",0);
              return;
            }
            uVar7 = uVar7 - 1;
          } while (-1 < (short)uVar7);
          FUN_00e5e050("core_se_sys_vr_curcor",0);
          return;
        }
        goto LAB_009bf3df;
      }
      *(short *)(param_1 + 0x5c4) = *(short *)(param_1 + 0x5c4) + 7;
      uVar8 = *(undefined4 *)(param_1 + 0x4e8);
    }
    else {
      if (*(short *)(param_1 + 0x5c6) <= *(short *)(param_1 + 0x5c4)) goto LAB_009bf3df;
      *(short *)(param_1 + 0x5c4) = *(short *)(param_1 + 0x5c4) + 7;
      uVar8 = *(undefined4 *)(param_1 + 0x4e8);
    }
    *(char *)(param_1 + 0x5a1) = *(char *)(param_1 + 0x5a1) + '\x01';
    FUN_00ce4ce0(uVar8,3);
    FUN_00ce4d70(1);
    *(undefined1 *)(param_1 + 0x5a5) = 1;
LAB_009bf3df:
    FUN_00e5e050("core_se_sys_vr_curcor",0);
    return;
  case 2:
    uVar1 = *(ushort *)(param_1 + 0x5aa);
    if ((int)(short)uVar1 % 7 != 0) {
      iVar6 = uVar1 - 1;
      *(short *)(param_1 + 0x5aa) = (short)iVar6;
      FUN_00995470(iVar6);
      FUN_009b6bd0(*(undefined2 *)(param_1 + 0x5aa));
      FUN_00e5e050("core_se_sys_vr_curcor",0);
      return;
    }
    if (uVar1 != 0) {
      uVar5 = uVar1 - 1;
      uVar7 = uVar5 & 0xffff;
      sVar3 = (short)uVar5;
      *(short *)(param_1 + 0x5aa) = sVar3;
      if (-1 < sVar3) {
        while (iVar6 = FUN_00cb2480(*(undefined4 *)(param_1 + 0x578)), iVar6 != 0) {
          uVar7 = uVar7 - 1;
          if ((short)uVar7 < 0) {
            FUN_00e5e050("core_se_sys_vr_curcor",0);
            return;
          }
        }
LAB_009bf5a4:
        *(short *)(param_1 + 0x5aa) = (short)uVar7;
        FUN_00995470(uVar7);
        FUN_009b6bd0(*(undefined2 *)(param_1 + 0x5aa));
      }
      FUN_00e5e050("core_se_sys_vr_curcor",0);
      return;
    }
    *(undefined2 *)(param_1 + 0x5aa) = 6;
    if (*(short *)(param_1 + 0x5c4) == 0) {
      uVar7 = 6;
      while (iVar6 = FUN_00cb2480(*(undefined4 *)(param_1 + 0x578)), iVar6 != 0) {
        uVar7 = uVar7 - 1;
        if ((short)uVar7 < 0) {
          FUN_00e5e050("core_se_sys_vr_curcor",0);
          return;
        }
      }
      goto LAB_009bf5a4;
    }
    iVar6 = FUN_00cb2480(*(undefined4 *)(param_1 + 0x578));
    if ((iVar6 == 0) || (sVar3 = *(short *)(param_1 + 0x5aa), sVar3 < 0)) goto LAB_009bf4c4;
    goto LAB_009bf492;
  case 3:
    iVar6 = FUN_00cb2480(*(undefined4 *)(param_1 + 0x578));
    uVar1 = *(ushort *)(param_1 + 0x5aa);
    uVar5 = (uint)uVar1;
    if (iVar6 == 0) {
      if (((int)(short)uVar1 % 7 != 6) || (uVar1 != 0x14)) {
        *(short *)(param_1 + 0x5aa) = (short)(uVar5 + 1);
        FUN_00995470(uVar5 + 1);
        FUN_009b6bd0(*(undefined2 *)(param_1 + 0x5aa));
        FUN_00e5e050("core_se_sys_vr_curcor",0);
        return;
      }
      iVar6 = 0xe;
    }
    else {
      iVar6 = (int)(short)uVar1 % 7;
      if ((short)uVar1 < 0xe) {
        FUN_00995470(uVar5 - iVar6);
        *(short *)(param_1 + 0x5aa) = *(short *)(param_1 + 0x5aa) + 7;
        FUN_009b6bd0(*(undefined2 *)(param_1 + 0x5aa));
        FUN_00e5e050("core_se_sys_vr_curcor",0);
        return;
      }
      iVar6 = uVar5 - iVar6;
    }
    FUN_00995470(iVar6);
    if (*(short *)(param_1 + 0x5c4) != *(short *)(param_1 + 0x5c6)) {
      *(char *)(param_1 + 0x5a1) = *(char *)(param_1 + 0x5a1) + '\x01';
      *(short *)(param_1 + 0x5c4) = *(short *)(param_1 + 0x5c4) + 7;
      FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x4e8),3);
      FUN_00ce4d70(1);
      *(undefined1 *)(param_1 + 0x5a5) = 1;
      FUN_00e5e050("core_se_sys_vr_curcor",0);
      return;
    }
    FUN_009b6bd0(*(undefined2 *)(param_1 + 0x5aa));
    FUN_00e5e050("core_se_sys_vr_curcor",0);
    return;
  case 4:
    iVar6 = FUN_009b6840((int)*(short *)(param_1 + 0x5aa));
    if (iVar6 != 0) {
      FUN_00e5e050("core_se_sys_vr_decide",0);
      *(undefined1 *)(param_1 + 0x5a1) = 2;
      return;
    }
    FUN_00e5e050("core_se_sys_custom_item_money_error",0);
    return;
  case 5:
    if (((byte)DAT_01bea094 & 0x10) == 0) {
      uVar8 = 0x35;
    }
    else {
      uVar8 = 0x2d;
    }
    (**(code **)(*(int *)(param_1 + 0x410) + 4))(uVar8,0,1);
    *(undefined2 *)(param_1 + 0x5a0) = 0x20a;
    FUN_00e5e050("core_se_sys_cancel",0);
  case 6:
  case 7:
    return;
  default:
    break;
  }
  iVar6 = 0;
  while( true ) {
    sVar3 = (short)iVar6;
    if (0x14 < sVar3) {
      return;
    }
    iVar4 = FUN_00cb2480(*(undefined4 *)(param_1 + 0x578));
    if ((iVar4 == 0) && (cVar2 = FUN_00d0d3e0(0xb,(int)sVar3), cVar2 != '\0')) break;
    iVar6 = iVar6 + 1;
  }
  *(short *)(param_1 + 0x5aa) = sVar3;
  FUN_00995470(iVar6);
  FUN_009b6bd0(*(undefined2 *)(param_1 + 0x5aa));
  goto switchD_009bf048_switchD;
  while (sVar3 = sVar3 + -1, -1 < sVar3) {
LAB_009bf492:
    iVar6 = FUN_00cb2480(*(undefined4 *)(param_1 + 0x578));
    if (iVar6 == 0) {
      *(short *)(param_1 + 0x5aa) = sVar3;
      break;
    }
  }
LAB_009bf4c4:
  *(short *)(param_1 + 0x5c4) = *(short *)(param_1 + 0x5c4) + -7;
  *(char *)(param_1 + 0x5a1) = *(char *)(param_1 + 0x5a1) + '\x01';
  FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x4e0),3);
  FUN_00ce4d70(2);
  *(undefined1 *)(param_1 + 0x5a5) = 2;
  FUN_00e5e050("core_se_sys_vr_curcor",0);
  return;
switchD_009bf048_caseD_0:
  if (*(short *)(param_1 + 0x5aa) < 7) {
    if (*(short *)(param_1 + 0x5c4) == 0) goto LAB_009bf23d;
    *(short *)(param_1 + 0x5c4) = *(short *)(param_1 + 0x5c4) + -7;
    uVar8 = *(undefined4 *)(param_1 + 0x4e0);
  }
  else {
    iVar6 = FUN_00cb2480(*(undefined4 *)(param_1 + 0x578));
    if (iVar6 == 0) {
      FUN_00995470(*(short *)(param_1 + 0x5aa) + -7);
      FUN_009b6bd0(*(undefined2 *)(param_1 + 0x5aa));
      FUN_00e5e050("core_se_sys_vr_curcor",0);
      return;
    }
    uVar1 = *(ushort *)(param_1 + 0x5aa);
    if (0xd < (short)uVar1) {
      FUN_00995470(uVar1 - 0xe);
      FUN_009b6bd0(*(undefined2 *)(param_1 + 0x5aa));
      FUN_00e5e050("core_se_sys_vr_curcor",0);
      return;
    }
    if (*(short *)(param_1 + 0x5c4) == 0) {
      uVar5 = uVar1 - 7;
      uVar7 = uVar5 & 0xffff;
      if (-1 < (short)uVar5) {
        do {
          iVar6 = FUN_00cb2480(*(undefined4 *)(param_1 + 0x578));
          if (iVar6 == 0) {
            *(short *)(param_1 + 0x5aa) = (short)uVar7;
            FUN_00995470(uVar7);
            FUN_009b6bd0(*(undefined2 *)(param_1 + 0x5aa));
            FUN_00e5e050("core_se_sys_vr_curcor",0);
            return;
          }
          uVar7 = uVar7 - 1;
        } while (-1 < (short)uVar7);
        FUN_00e5e050("core_se_sys_vr_curcor",0);
        return;
      }
      goto LAB_009bf23d;
    }
    uVar8 = *(undefined4 *)(param_1 + 0x4e0);
    *(short *)(param_1 + 0x5c4) = *(short *)(param_1 + 0x5c4) + -7;
  }
  *(char *)(param_1 + 0x5a1) = *(char *)(param_1 + 0x5a1) + '\x01';
  FUN_00ce4ce0(uVar8,3);
  FUN_00ce4d70(2);
  *(undefined1 *)(param_1 + 0x5a5) = 2;
LAB_009bf23d:
  FUN_00e5e050("core_se_sys_vr_curcor",0);
  return;
}


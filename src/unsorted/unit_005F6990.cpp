// src/unsorted/unit_005F6990.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005F6990..005FA210, 22 functions

#include "mgrr.h"

// 005F6990  FUN_005f6990  size=255  [run]
void __fastcall FUN_005f6990(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char acStack_84 [132];
  
  (**(code **)(*param_1 + 0x314))();
  (**(code **)(*param_1 + 800))(0x3c888889);
  *(undefined1 *)((int)param_1 + 0xdaf) = 0;
  *(undefined1 *)((int)param_1 + 0xdb5) = 0;
  iVar2 = FUN_00a8cac0();
  if (iVar2 == 0) {
    _sprintf_s(&stack0xfffffefc,0x80,"Em0040_%s.mot",&DAT_0163b604);
    uVar3 = FUN_00de4550(&stack0xfffffefc,0);
    _sprintf_s(acStack_84,0x80,"Em0040_%s_0_seq.bxm",&DAT_0163b604);
    uVar4 = FUN_00de4550(acStack_84,0);
    uVar1 = 0x3e4ccccd;
    if (*(char *)((int)param_1 + 0xdc2) != '\0') {
      *(undefined1 *)((int)param_1 + 0xdc2) = 0;
      uVar1 = 0;
    }
    FUN_00a9efb0(uVar3,uVar4,0,uVar1,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  return;
}

// 005F6A90  FUN_005f6a90  size=744  [run]
void __fastcall FUN_005f6a90(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float10 fVar4;
  char acStack_84 [132];
  
  (**(code **)(*param_1 + 0x314))();
  (**(code **)(*param_1 + 800))(0x3c888889);
  *(undefined1 *)((int)param_1 + 0xdaf) = 1;
  *(undefined1 *)((int)param_1 + 0xdb5) = 0;
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    _sprintf_s(&stack0xfffffefc,0x80,"Em0040_%s.mot",&DAT_016456e8);
    uVar2 = FUN_00de4550(&stack0xfffffefc,0);
    _sprintf_s(acStack_84,0x80,"Em0040_%s_0_seq.bxm",&DAT_016456e8);
    uVar3 = FUN_00de4550(acStack_84,0);
    FUN_00a9efb0(uVar2,uVar3,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x254] = 0;
    return;
  }
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 1) {
    if (param_1[0x254] == 0) {
      fVar4 = (float10)FUN_00a958c0(0);
      if ((float10)0.31666666 <= fVar4) {
        param_1[0x254] = 1;
        FUN_00e5e0c0("em0040_vo_shout",param_1,0xffffffff,0);
      }
    }
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x24d] = 0;
      param_1[0x188] = 0;
      return;
    }
  }
  else {
    iVar1 = FUN_00a8cac0();
    if (iVar1 == 2) {
      if (param_1[0x188] == 0) {
        fVar4 = (float10)FUN_00a92ff0();
        fVar4 = fVar4 * (float10)0.016666668 + (float10)(float)param_1[0x24d];
        param_1[0x24d] = (int)(float)fVar4;
        if ((float10)1 < fVar4) {
          param_1[0x188] = param_1[0x188] + 1;
          uVar2 = FUN_005f5bf0(&DAT_016456cc);
          uVar3 = FUN_005f5ba0(&DAT_016456cc);
          FUN_00a9efb0(uVar2,uVar3,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
        }
      }
      if (*(char *)((int)param_1 + 0xdb1) != '\0') {
        if (*(char *)((int)param_1 + 0xdba) != '\0') {
          FUN_005f4410(0x13,0,0,0);
          param_1[0x187] = 1;
          return;
        }
LAB_005f6d38:
        param_1[0x187] = param_1[0x187] + 1;
        return;
      }
    }
    else {
      iVar1 = FUN_00a8cac0();
      if (iVar1 == 3) {
        uVar2 = FUN_005f5bf0(&DAT_016456c4);
        uVar3 = FUN_005f5ba0(&DAT_016456c4);
        FUN_00a9efb0(uVar2,uVar3,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
        FUN_00a96070(0,0x8000000,1);
        goto LAB_005f6d38;
      }
      iVar1 = FUN_00a8cac0();
      if (iVar1 == 4) {
        iVar1 = FUN_00a94ce0(0);
        if (iVar1 != 0) {
          FUN_005f4410(0,0,0,0);
        }
      }
    }
  }
  return;
}

// 005F6D80  FUN_005f6d80  size=529  [run]
void __fastcall FUN_005f6d80(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  char acStack_184 [128];
  char acStack_104 [128];
  char acStack_84 [132];
  
  (**(code **)(*param_1 + 0x314))();
  (**(code **)(*param_1 + 800))(0x3c888889);
  *(undefined1 *)((int)param_1 + 0xdaf) = 1;
  *(undefined1 *)((int)param_1 + 0xdb5) = 0;
  *(undefined1 *)((int)param_1 + 0xdad) = 1;
  iVar1 = FUN_00a8cac0();
  if (iVar1 != 0) {
    iVar1 = FUN_00a8cac0();
    if (iVar1 == 1) {
      iVar1 = FUN_00a94ce0(0);
      if (iVar1 != 0) {
        *(undefined1 *)((int)param_1 + 0xdad) = 0;
        iVar1 = FUN_00a8cab0();
        if ((iVar1 != 0) || (*(char *)((int)param_1 + 0xdb5) != '\0')) {
          *(undefined1 *)((int)param_1 + 0xdbe) = 0;
          FUN_00a8caf0(0,0,0,0);
        }
      }
    }
    return;
  }
  iVar1 = param_1[0x36a];
  if (iVar1 == 5) {
    _sprintf_s(acStack_184,0x80,"Em0040_%s.mot",&DAT_01642b64);
    uVar2 = FUN_00de4550(acStack_184,0);
    _sprintf_s(acStack_84,0x80,"Em0040_%s_0_seq.bxm",&DAT_01642b64);
    pcVar4 = acStack_84;
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 == 2) {
        uVar2 = FUN_005f5bf0(&DAT_016456f0);
        uVar3 = FUN_005f5ba0(&DAT_016456f0);
      }
      else {
        uVar2 = FUN_005f5bf0(&DAT_01642b64);
        uVar3 = FUN_005f5ba0(&DAT_01642b64);
      }
      goto LAB_005f6ee9;
    }
    _sprintf_s(acStack_104,0x80,"Em0040_%s.mot",&DAT_016456f8);
    uVar2 = FUN_00de4550(acStack_104,0);
    _sprintf_s(&stack0xfffffdfc,0x80,"Em0040_%s_0_seq.bxm",&DAT_016456f8);
    pcVar4 = &stack0xfffffdfc;
  }
  uVar3 = FUN_00de4550(pcVar4,0);
LAB_005f6ee9:
  FUN_00a9efb0(uVar2,uVar3,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
  FUN_00a96070(0,0x8000000,1);
  param_1[0x187] = param_1[0x187] + 1;
  param_1[0x248] = 0;
  return;
}

// 005F6FA0  FUN_005f6fa0  size=853  [run]
void __fastcall FUN_005f6fa0(int *param_1)

{
  code *pcVar1;
  float10 fVar2;
  undefined4 uVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float10 fVar9;
  float10 fVar10;
  float fStack_184;
  undefined1 auStack_16c [4];
  undefined4 uStack_168;
  undefined1 auStack_164 [64];
  undefined1 auStack_124 [16];
  char acStack_114 [128];
  char acStack_94 [144];
  
  pcVar1 = *(code **)(*param_1 + 800);
  *(undefined1 *)((int)param_1 + 0xdb3) = 1;
  iVar5 = (*pcVar1)(0x3c888889);
  (**(code **)(*param_1 + 0x314))();
  *(undefined1 *)((int)param_1 + 0xdb5) = 0;
  iVar6 = FUN_00a8cac0();
  if (iVar6 == 0) {
    _sprintf_s(acStack_114,0x80,"Em0040_%s.mot",&DAT_01641bfc);
    uVar7 = FUN_00de4550(acStack_114,0);
    _sprintf_s(acStack_94,0x80,"Em0040_%s_0_seq.bxm",&DAT_01641bfc);
    uVar8 = FUN_00de4550(acStack_94,0);
    uStack_168 = 0x3e4ccccd;
    if (param_1[0x18a] == 8) {
      uVar3 = 0;
    }
    else {
      param_1[0x249] = 0x3f800000;
      iVar5 = param_1[0x3a4];
      iVar6 = param_1[0x3a6];
      FUN_00a925a0(auStack_124);
      D3DXMatrixRotationY(auStack_164,param_1[0x4ad]);
      D3DXVec3TransformNormal(&stack0xfffffe74,&stack0xfffffe74,auStack_16c);
      param_1[0x224] = iVar5;
      param_1[0x226] = iVar6;
      uVar3 = uStack_168;
    }
    FUN_00a9efb0(uVar7,uVar8,0,uVar3,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x3cf5c28f;
  }
  else {
    iVar6 = FUN_00a8cac0();
    if (iVar6 == 1) {
      fVar9 = (float10)FUN_00a92ff0();
      fVar2 = (float10)0;
      if ((float10)(float)param_1[0x249] <= fVar2) {
        param_1[0x250] = 0;
      }
      else {
        fVar10 = (float10)(float)param_1[0x249] - fVar9;
        param_1[0x249] = (int)(float)fVar10;
        if ((param_1[0x250] != 0) && (fVar10 < fVar2 != (fVar10 == fVar2))) {
          param_1[0x250] = 0;
          param_1[0x225] =
               (int)(float)((fVar10 + fVar9) * (float10)(float)param_1[0x248] +
                           (float10)(float)param_1[0x225]);
        }
      }
      if (param_1[0x250] != 0) {
        param_1[0x225] =
             (int)(float)((float10)(float)param_1[0x248] * fVar9 + (float10)(float)param_1[0x225]);
      }
      if ((iVar5 != 0) &&
         ((iVar5 = FUN_00a8cab0(), iVar5 != 9 || (*(char *)((int)param_1 + 0xdb5) != '\0')))) {
        *(undefined1 *)((int)param_1 + 0xdbe) = 0;
        FUN_00a8caf0(9,0,0,0);
      }
    }
  }
  fStack_184 = 0.0;
  fVar4 = 0.93;
  if ((char)param_1[0x36b] == '\0') {
    if ((float)param_1[0x4ae] <= 90000.0) goto LAB_005f728d;
    D3DXMatrixRotationY(auStack_164,param_1[0x4ad]);
    fStack_184 = 0.12;
  }
  else {
    if ((float)param_1[0x4ae] <= 90000.0) goto LAB_005f728d;
    D3DXMatrixRotationY(auStack_164,param_1[0x4ad]);
    fStack_184 = 0.24;
  }
  D3DXVec3TransformNormal(&stack0xfffffe74,&stack0xfffffe74,auStack_16c);
  fVar4 = 0.9;
LAB_005f728d:
  param_1[0x224] = (int)((float)param_1[0x224] * fVar4 + fStack_184 * (1.0 - fVar4));
  param_1[0x226] = (int)((1.0 - fVar4) * 0.0 + (float)param_1[0x226] * fVar4);
  FUN_005f62a0();
  (**(code **)(*param_1 + 0x308))(0x3e99999a,0,0x3f060a92,0);
  return;
}

// 005F7300  FUN_005f7300  size=1186  [run]
void __fastcall FUN_005f7300(int *param_1)

{
  code *pcVar1;
  float10 fVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float10 fVar6;
  float10 fVar7;
  int iStack_11c;
  int iStack_118;
  char acStack_114 [128];
  char acStack_94 [144];
  
  pcVar1 = *(code **)(*param_1 + 0x314);
  *(undefined1 *)((int)param_1 + 0xdb3) = 1;
  *(undefined1 *)((int)param_1 + 0xdaf) = 0;
  (*pcVar1)();
  (**(code **)(*param_1 + 800))(0x3c888889);
  *(undefined1 *)((int)param_1 + 0xdb5) = 0;
  iVar3 = FUN_00a8cac0();
  if (iVar3 == 0) {
    _sprintf_s(acStack_114,0x80,"Em0040_%s.mot",&DAT_01641c14);
    uVar4 = FUN_00de4550(acStack_114,0);
    _sprintf_s(acStack_94,0x80,"Em0040_%s_0_seq.bxm",&DAT_01641c14);
    uVar5 = FUN_00de4550(acStack_94,0);
    FUN_00a9efb0(uVar4,uVar5,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8038000,1);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else {
    iVar3 = FUN_00a8cac0();
    if (iVar3 == 1) {
      iVar3 = FUN_00a94ce0(0);
      if (iVar3 != 0) {
        param_1[0x187] = param_1[0x187] + 1;
      }
    }
    else {
      iVar3 = FUN_00a8cac0();
      if (iVar3 == 2) {
        _sprintf_s(acStack_94,0x80,"Em0040_%s.mot",&DAT_01641c0c);
        uVar4 = FUN_00de4550(acStack_94,0);
        _sprintf_s(acStack_114,0x80,"Em0040_%s_0_seq.bxm",&DAT_01641c0c);
        uVar5 = FUN_00de4550(acStack_114,0);
        FUN_00a9efb0(uVar4,uVar5,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
        FUN_00a96070(0,0x8000000,1);
        param_1[0x224] = 0;
        param_1[0x225] = 0x3e4ccccd;
        param_1[0x226] = 0;
        param_1[0x227] = iStack_118;
        param_1[0x248] = 0x3cf5c28f;
        param_1[0x224] = 0;
        fVar6 = (float10)FUN_00a92ff0();
        param_1[0x225] = (int)(float)(fVar6 * (float10)(float)param_1[0x248]);
        param_1[0x226] = 0;
        param_1[0x23d] = param_1[0x25];
        if (90000.0 < (float)param_1[0x4ae]) {
          param_1[0x23d] = param_1[0x4ad];
          D3DXMatrixRotationY(acStack_114,param_1[0x4ad]);
          D3DXVec3TransformNormal(&stack0xfffffed4,&stack0xfffffed4,&iStack_11c);
          param_1[0x224] = 0x3df5c28f;
          param_1[0x226] = iStack_11c;
        }
        param_1[0x187] = param_1[0x187] + 1;
        param_1[0x249] = 0x40e00000;
        param_1[0x250] = 1;
        param_1[0x188] = 0;
      }
      else {
        iVar3 = FUN_00a8cac0();
        if (iVar3 == 3) {
          iVar3 = FUN_00a94ce0(0);
          if (iVar3 != 0) {
            FUN_005f4410(7,0,0,0);
            return;
          }
          if ((((float)param_1[0x225] <= 0.0) && (param_1[0x1d9] != 0)) &&
             (iVar3 = FUN_008e2740(), iVar3 != 0)) {
            param_1[0x187] = param_1[0x187] + 1;
            FUN_005f4410(9,0,0,0);
            return;
          }
        }
      }
    }
  }
  if ((2 < param_1[0x187]) && (param_1[0x187] < 4)) {
    if ((float)param_1[0x4af] < 0.0) {
      fVar6 = (float10)FUN_00a92ff0();
      if ((*(char *)((int)param_1 + 0xdb2) == '\0') && ((float)param_1[0x249] < 3.0)) {
        param_1[0x250] = 0;
      }
      fVar2 = (float10)0;
      if ((float10)(float)param_1[0x249] <= fVar2) {
        param_1[0x250] = 0;
      }
      else {
        fVar7 = (float10)(float)param_1[0x249] - fVar6;
        param_1[0x249] = (int)(float)fVar7;
        if ((param_1[0x250] != 0) && (fVar7 < fVar2 != (fVar7 == fVar2))) {
          param_1[0x250] = 0;
          param_1[0x225] =
               (int)(float)((fVar7 + fVar6) * (float10)(float)param_1[0x248] +
                           (float10)(float)param_1[0x225]);
        }
      }
      if (param_1[0x250] != 0) {
        param_1[0x225] =
             (int)(float)(fVar6 * (float10)(float)param_1[0x248] + (float10)(float)param_1[0x225]);
      }
    }
    if ((char)param_1[0x36b] == '\0') {
      uVar4 = 0x3df5c28f;
    }
    else {
      uVar4 = 0x3e75c28f;
    }
    FUN_005f5d80(uVar4,0);
  }
  if (90000.0 < (float)param_1[0x4ae]) {
    param_1[0x23d] = param_1[0x4ad];
  }
  FUN_005f62a0();
  (**(code **)(*param_1 + 0x308))(0x3e99999a,0,0x3f060a92,0);
  return;
}

// 005F77B0  FUN_005f77b0  size=939  [run]
void __fastcall FUN_005f77b0(int *param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  char local_100 [128];
  char local_80 [128];
  
  *(undefined1 *)((int)param_1 + 0xdb3) = 0;
  *(undefined1 *)((int)param_1 + 0xdaf) = 0;
  *(undefined1 *)((int)param_1 + 0xdb5) = 0;
  if ((param_1[0x449] == 2) || (param_1[0x128] == 2)) {
    if (DAT_018b9174 != 0xe24) {
      param_1[0x225] = 0;
    }
  }
  else {
    param_1[0x225] = 0;
  }
  iVar2 = FUN_00a8cac0();
  if (iVar2 == 0) {
    if ((*(char *)((int)param_1 + 0xdb1) != '\0') &&
       (fVar1 = (float)param_1[0x4ae], !NAN(fVar1) && 640000.0 < fVar1 != (fVar1 == 640000.0))) {
      _sprintf_s(local_100,0x80,"Em0040_%s.mot",&DAT_01645708);
      uVar3 = FUN_00de4550(local_100,0);
      _sprintf_s(local_80,0x80,"Em0040_%s_0_seq.bxm",&DAT_01645708);
      uVar4 = FUN_00de4550(local_80,0);
      FUN_00a9efb0(uVar3,uVar4,0,0,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00a96070(0,0x8000000,1);
      param_1[0x187] = 2;
      return;
    }
    param_1[0x248] = 0;
    param_1[0x249] = 0;
    param_1[0x225] = 0;
    param_1[0x250] = 1;
    _sprintf_s(local_80,0x80,"Em0040_%s.mot",&DAT_01645700);
    uVar3 = FUN_00de4550(local_80,0);
    _sprintf_s(local_100,0x80,"Em0040_%s_0_seq.bxm",&DAT_01645700);
    uVar4 = FUN_00de4550(local_100,0);
    FUN_00a9efb0(uVar3,uVar4,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
  iVar2 = FUN_00a8cac0();
  if (iVar2 == 1) {
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 == 0) {
      return;
    }
    iVar2 = FUN_00a8cab0();
    if ((iVar2 == 0) && (*(char *)((int)param_1 + 0xdb5) == '\0')) {
      return;
    }
    *(undefined1 *)((int)param_1 + 0xdbe) = 0;
    FUN_00a8caf0(0,0,0,0);
    return;
  }
  iVar2 = FUN_00a8cac0();
  if (iVar2 != 2) {
    return;
  }
  if ((param_1[0x449] == 2) || (param_1[0x128] == 2)) {
    param_1[0x225] = 0;
  }
  fVar5 = (float10)FUN_00a958c0(0);
  fVar6 = (float10)FUN_00a95680(0);
  fVar7 = (float10)FUN_00a92ff0();
  fVar6 = (float10)(float)fVar6 - fVar7 * (float10)0.016666668;
  if (fVar6 < (float10)(float)fVar5 == (fVar6 == (float10)(float)fVar5)) {
    if (*(char *)((int)param_1 + 0xdb1) == '\0') goto LAB_005f7b17;
    if ((char)param_1[0x36b] != '\0') {
      *(undefined1 *)((int)param_1 + 0xdbb) = 1;
      FUN_005f4410(3,0,0,0);
      return;
    }
    if ((640000.0 <= (float)param_1[0x4ae]) && (iVar2 = FUN_00416d50(7), iVar2 == 0))
    goto LAB_005f7b1e;
    *(undefined1 *)((int)param_1 + 0xdbb) = 1;
    uVar3 = 1;
  }
  else {
    if (*(char *)((int)param_1 + 0xdb1) != '\0') {
      *(undefined1 *)((int)param_1 + 0xdbb) = 1;
      if ((char)param_1[0x36b] != '\0') {
        FUN_005f4410(3,0,0,0);
        return;
      }
      FUN_005f4410(2,0,0,0);
      return;
    }
LAB_005f7b17:
    uVar3 = 0;
  }
  FUN_005f4410(uVar3,0,0,0);
LAB_005f7b1e:
  FUN_005f62a0();
  (**(code **)(*param_1 + 0x308))(0x3e99999a,0,0x3f060a92,0);
  return;
}

// 005F7B60  FUN_005f7b60  size=706  [run]
void __fastcall FUN_005f7b60(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float10 fVar4;
  char local_100 [128];
  char local_80 [128];
  
  *(undefined1 *)((int)param_1 + 0xdad) = 1;
  *(undefined1 *)((int)param_1 + 0xdaf) = 1;
  *(undefined1 *)((int)param_1 + 0xdb5) = 0;
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00e5e0c0("em0040_vo_shout",param_1,0xffffffff,0);
    _sprintf_s(local_100,0x80,"Em0040_%s.mot",&DAT_01645714);
    uVar2 = FUN_00de4550(local_100,0);
    _sprintf_s(local_80,0x80,"Em0040_%s_0_seq.bxm",&DAT_01645714);
    uVar3 = FUN_00de4550(local_80,0);
    FUN_00a9efb0(uVar2,uVar3,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0;
  }
  else {
    iVar1 = FUN_00a8cac0();
    if (iVar1 == 1) {
      iVar1 = FUN_00a94ce0(0);
      if (iVar1 != 0) {
        param_1[0x187] = param_1[0x187] + 1;
        param_1[0x24d] = 0;
        param_1[0x188] = 0;
      }
    }
    else {
      iVar1 = FUN_00a8cac0();
      if (iVar1 == 2) {
        if (*(char *)((int)param_1 + 0xdb1) != '\0') {
          if (*(char *)((int)param_1 + 0xdba) != '\0') {
            FUN_005f4410(0x13,0,0,0);
            param_1[0x187] = 1;
            return;
          }
          param_1[0x187] = param_1[0x187] + 1;
        }
        if (param_1[0x188] == 0) {
          fVar4 = (float10)FUN_00a92ff0();
          fVar4 = fVar4 * (float10)0.016666668 + (float10)(float)param_1[0x24d];
          param_1[0x24d] = (int)(float)fVar4;
          if ((float10)1 < fVar4) {
            param_1[0x188] = param_1[0x188] + 1;
            uVar2 = FUN_005f5bf0(&DAT_016456cc);
            uVar3 = FUN_005f5ba0(&DAT_016456cc);
            FUN_00a9efb0(uVar2,uVar3,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
          }
        }
        else if (param_1[0x188] == 1) {
          *(undefined1 *)((int)param_1 + 0xdb5) = 1;
          return;
        }
      }
      else {
        iVar1 = FUN_00a8cac0();
        if (iVar1 == 3) {
          uVar2 = FUN_005f5bf0(&DAT_016456c4);
          uVar3 = FUN_005f5ba0(&DAT_016456c4);
          FUN_00a9efb0(uVar2,uVar3,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
          FUN_00a96070(0,0x8000000,1);
          param_1[0x187] = param_1[0x187] + 1;
        }
        else {
          iVar1 = FUN_00a8cac0();
          if (iVar1 == 4) {
            iVar1 = FUN_00a94ce0(0);
            if (iVar1 != 0) {
              *(undefined1 *)((int)param_1 + 0xdad) = 0;
              FUN_005f4410(0,0,0,0);
            }
          }
        }
      }
    }
  }
  (**(code **)(*param_1 + 0x220))(0x3f800000);
  return;
}

// 005F8070  FUN_005f8070  size=294  [run]
void __fastcall FUN_005f8070(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char acStack_84 [132];
  
  (**(code **)(*param_1 + 0x314))();
  (**(code **)(*param_1 + 800))(0x3c888889);
  *(undefined1 *)((int)param_1 + 0xdaf) = 0;
  *(undefined1 *)((int)param_1 + 0xdb5) = 0;
  *(undefined1 *)((int)param_1 + 0xdbe) = 0;
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    _sprintf_s(&stack0xfffffefc,0x80,"Em0040_%s.mot",&DAT_01645724);
    uVar2 = FUN_00de4550(&stack0xfffffefc,0);
    _sprintf_s(acStack_84,0x80,"Em0040_%s_0_seq.bxm",&DAT_01645724);
    uVar3 = FUN_00de4550(acStack_84,0);
    FUN_00a9efb0(uVar2,uVar3,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    *(undefined1 *)((int)param_1 + 0xdbe) = 1;
    return;
  }
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 1) {
    *(undefined1 *)((int)param_1 + 0xdbe) = 1;
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
  }
  return;
}

// 005F81A0  FUN_005f81a0  size=434  [run]
void __fastcall FUN_005f81a0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char acStack_104 [128];
  char acStack_84 [132];
  
  (**(code **)(*param_1 + 0x314))();
  (**(code **)(*param_1 + 800))(0x3c888889);
  *(undefined1 *)((int)param_1 + 0xdaf) = 0;
  *(undefined1 *)((int)param_1 + 0xdb5) = 0;
  *(undefined1 *)((int)param_1 + 0xdbe) = 0;
  iVar1 = FUN_00a12210(0);
  if (iVar1 != 0) {
    param_1[0x4e0] = *(int *)(iVar1 + 0x50);
    param_1[0x4e1] = *(int *)(iVar1 + 0x54);
    param_1[0x4e2] = *(int *)(iVar1 + 0x58);
    param_1[0x4e3] = *(int *)(iVar1 + 0x5c);
    param_1[0x4e1] = 0;
  }
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    _sprintf_s(acStack_104,0x80,"Em0040_%s.mot",&DAT_01645740);
    uVar2 = FUN_00de4550(acStack_104,0);
    _sprintf_s(acStack_84,0x80,"Em0040_%s_0_seq.bxm",&DAT_01645740);
    uVar3 = FUN_00de4550(acStack_84,0);
    FUN_00a9efb0(uVar2,uVar3,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    *(undefined1 *)((int)param_1 + 0xdbe) = 1;
    param_1[0x254] = 0;
    return;
  }
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 1) {
    if (param_1[0x254] == 0) {
      iVar1 = FUN_00a959f0(0);
      if (10.0 <= (float)iVar1) {
        param_1[0x254] = 1;
        FUN_00e5e0c0("em0040_vo_matador",param_1,0xffffffff,0);
      }
    }
    *(undefined1 *)((int)param_1 + 0xdbe) = 1;
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
  }
  return;
}

// 005F8360  FUN_005f8360  size=644  [run]
void __fastcall FUN_005f8360(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char acStack_84 [132];
  
  (**(code **)(*param_1 + 0x314))();
  (**(code **)(*param_1 + 800))(0x3c888889);
  *(undefined1 *)((int)param_1 + 0xdaf) = 0;
  *(undefined1 *)((int)param_1 + 0xdb5) = 0;
  iVar2 = FUN_00a8cac0();
  if (iVar2 == 0) {
    _sprintf_s(&stack0xfffffefc,0x80,"Em0040_%s.mot",&DAT_01645758);
    uVar3 = FUN_00de4550(&stack0xfffffefc,0);
    _sprintf_s(acStack_84,0x80,"Em0040_%s_0_seq.bxm",&DAT_01645758);
    uVar4 = FUN_00de4550(acStack_84,0);
    uVar5 = 0;
LAB_005f8430:
    FUN_00a9efb0(uVar3,uVar4,0,uVar5,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
  iVar2 = FUN_00a8cac0();
  if (iVar2 == 1) {
    iVar2 = FUN_00a94ce0(0);
    if ((iVar2 != 0) || (*(char *)((int)param_1 + 0xdb6) == '\x01')) {
      _sprintf_s(acStack_84,0x80,"Em0040_%s.mot",&DAT_01645750);
      uVar3 = FUN_00de4550(acStack_84,0);
      _sprintf_s(&stack0xfffffefc,0x80,"Em0040_%s_0_seq.bxm",&DAT_01645750);
      uVar4 = FUN_00de4550(&stack0xfffffefc,0);
      FUN_00a9efb0(uVar3,uVar4,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      *(undefined1 *)((int)param_1 + 0xdb6) = 0;
      return;
    }
  }
  else {
    iVar2 = FUN_00a8cac0();
    if (iVar2 == 2) {
      cVar1 = FUN_005f4570();
      if ((cVar1 == '\0') && (*(char *)((int)param_1 + 0xdba) == '\0')) {
        uVar3 = FUN_005f5bf0(&DAT_01645748);
        uVar4 = FUN_005f5ba0(&DAT_01645748);
        uVar5 = 0x3e4ccccd;
        goto LAB_005f8430;
      }
      if (*(char *)((int)param_1 + 0xdb1) != '\0') {
        FUN_005f4410(0x14,0,0,0);
        return;
      }
    }
    else {
      iVar2 = FUN_00a8cac0();
      if (iVar2 == 3) {
        iVar2 = FUN_00a94ce0(0);
        if (iVar2 != 0) {
          *(undefined1 *)((int)param_1 + 0xdb6) = 0;
          FUN_005f4410(0,0,0,0);
        }
      }
    }
  }
  return;
}

// 005F85F0  FUN_005f85f0  size=350  [run]
void __fastcall FUN_005f85f0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char acStack_84 [132];
  
  (**(code **)(*param_1 + 0x314))();
  (**(code **)(*param_1 + 800))(0x3c888889);
  *(undefined1 *)((int)param_1 + 0xdaf) = 0;
  *(undefined1 *)(param_1 + 0x36e) = 0;
  *(undefined1 *)((int)param_1 + 0xdb5) = 0;
  if (param_1[0x449] != 2) {
    param_1[0x25] = param_1[0x4f3];
  }
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    _sprintf_s(&stack0xfffffefc,0x80,"Em0040_%s.mot",&DAT_01645748);
    uVar2 = FUN_00de4550(&stack0xfffffefc,0);
    _sprintf_s(acStack_84,0x80,"Em0040_%s_0_seq.bxm",&DAT_01645748);
    uVar3 = FUN_00de4550(acStack_84,0);
    FUN_00a9efb0(uVar2,uVar3,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 1) {
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      *(undefined1 *)((int)param_1 + 0xdb6) = 0;
      iVar1 = FUN_00a8cab0();
      if ((iVar1 != 0) || (*(char *)((int)param_1 + 0xdb5) != '\0')) {
        *(undefined1 *)((int)param_1 + 0xdbe) = 0;
        FUN_00a8caf0(0,0,0,0);
      }
    }
  }
  return;
}

// 005F8750  FUN_005f8750  size=1102  [run]
void __fastcall FUN_005f8750(int *param_1)

{
  float fVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char acStack_84 [132];
  
  (**(code **)(*param_1 + 0x314))();
  (**(code **)(*param_1 + 800))(0x3c888889);
  *(undefined1 *)((int)param_1 + 0xdaf) = 0;
  *(undefined1 *)((int)param_1 + 0xdb5) = 0;
  iVar3 = FUN_00a8cac0();
  if (iVar3 == 0) {
    fVar1 = (float)param_1[0x4ae];
    if ((!NAN(fVar1) && 640000.0 < fVar1 != (fVar1 == 640000.0)) || (param_1[0x18a] == 0x13)) {
      _sprintf_s(acStack_84,0x80,"Em0040_%s.mot",&DAT_01645768);
      uVar4 = FUN_00de4550(acStack_84,0);
      _sprintf_s(&stack0xfffffefc,0x80,"Em0040_%s_0_seq.bxm",&DAT_01645768);
      uVar5 = FUN_00de4550(&stack0xfffffefc,0);
      FUN_00a9efb0(uVar4,uVar5,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x187] = 2;
      return;
    }
    _sprintf_s(&stack0xfffffefc,0x80,"Em0040_%s.mot",&DAT_01645758);
    uVar4 = FUN_00de4550(&stack0xfffffefc,0);
    _sprintf_s(acStack_84,0x80,"Em0040_%s_0_seq.bxm",&DAT_01645758);
    uVar5 = FUN_00de4550(acStack_84,0);
    goto LAB_005f8aa9;
  }
  iVar3 = FUN_00a8cac0();
  if (iVar3 == 1) {
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 == 0) {
      return;
    }
    _sprintf_s(acStack_84,0x80,"Em0040_%s.mot",&DAT_01645768);
    uVar4 = FUN_00de4550(acStack_84,0);
    _sprintf_s(&stack0xfffffefc,0x80,"Em0040_%s_0_seq.bxm",&DAT_01645768);
    uVar5 = FUN_00de4550(&stack0xfffffefc,0);
    FUN_00a9efb0(uVar4,uVar5,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
  iVar3 = FUN_00a8cac0();
  if (iVar3 != 2) {
    iVar3 = FUN_00a8cac0();
    if (iVar3 != 3) {
      return;
    }
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 == 0) {
      return;
    }
    *(undefined1 *)((int)param_1 + 0xdb6) = 0;
    FUN_005f4410(0,0,0,0);
    return;
  }
  if ((char)param_1[0x36b] == '\0') {
    fVar1 = (float)param_1[0x4ae];
    if (!NAN(fVar1) && 640000.0 < fVar1 != (fVar1 == 640000.0)) {
      uVar4 = 0x3f800000;
      goto LAB_005f8a16;
    }
    if (((float)param_1[0x4ae] < 640000.0) && ((float)param_1[0x4ae] <= 90000.0)) {
      uVar4 = 0x3f000000;
      goto LAB_005f8a16;
    }
  }
  else {
    uVar4 = 0x3fc00000;
LAB_005f8a16:
    FUN_00a96030(0,uVar4);
  }
  FUN_005f62a0();
  (**(code **)(*param_1 + 0x308))(0x3e99999a,0,0x3f060a92,0);
  cVar2 = FUN_005f4570();
  if ((cVar2 != '\0') || (*(char *)((int)param_1 + 0xdba) != '\0')) {
    iVar3 = FUN_00a94ce0(0);
    if ((iVar3 != 0) && (*(char *)((int)param_1 + 0xdb1) == '\0')) {
      uVar4 = FUN_005f5bf0(&DAT_01645760);
      uVar5 = FUN_005f5ba0(&DAT_01645760);
      FUN_00a9efb0(uVar4,uVar5,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00a96070(0,0x8000000,1);
      FUN_005f4410(0x13,2,0,0);
      *(undefined1 *)((int)param_1 + 0xdb6) = 1;
      return;
    }
    return;
  }
  uVar4 = FUN_005f5bf0(&DAT_01645748);
  uVar5 = FUN_005f5ba0(&DAT_01645748);
LAB_005f8aa9:
  FUN_00a9efb0(uVar4,uVar5,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
  FUN_00a96070(0,0x8000000,1);
  param_1[0x187] = param_1[0x187] + 1;
  return;
}

// 005F8BA0  FUN_005f8ba0  size=377  [run]
void __fastcall FUN_005f8ba0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char acStack_84 [132];
  
  (**(code **)(*param_1 + 0x314))();
  (**(code **)(*param_1 + 800))(0x3c888889);
  *(undefined1 *)((int)param_1 + 0xdaf) = 1;
  *(undefined1 *)((int)param_1 + 0xdb5) = 0;
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    _sprintf_s(&stack0xfffffefc,0x80,"Em0040_%s.mot",&DAT_01645770);
    uVar2 = FUN_00de4550(&stack0xfffffefc,0);
    _sprintf_s(acStack_84,0x80,"Em0040_%s_0_seq.bxm",&DAT_01645770);
    uVar3 = FUN_00de4550(acStack_84,0);
    FUN_00a9efb0(uVar2,uVar3,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else {
    iVar1 = FUN_00a8cac0();
    if (iVar1 == 1) {
      iVar1 = FUN_00a94ce0(0);
      if (iVar1 != 0) {
        iVar1 = FUN_00a8cab0();
        if ((iVar1 != 0) || (*(char *)((int)param_1 + 0xdb5) != '\0')) {
          *(undefined1 *)((int)param_1 + 0xdbe) = 0;
          FUN_00a8caf0(0,0,0,0);
        }
        *(undefined1 *)((int)param_1 + 0xdaf) = 0;
      }
    }
  }
  FUN_005f62a0();
  (**(code **)(*param_1 + 0x308))(0x3e99999a,0,0x3f060a92,0);
  return;
}

// 005F8D20  FUN_005f8d20  size=1180  [run]
void __fastcall FUN_005f8d20(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float10 fVar4;
  char acStack_84 [132];
  
  *(undefined1 *)((int)param_1 + 0xdad) = 1;
  *(undefined1 *)((int)param_1 + 0xdaf) = 1;
  *(undefined1 *)((int)param_1 + 0xdb5) = 0;
  *(undefined1 *)((int)param_1 + 0xdb3) = 0;
  iVar1 = FUN_00a8cac0();
  if (iVar1 < 2) {
    (**(code **)(*param_1 + 0x318))();
  }
  else {
    (**(code **)(*param_1 + 0x314))();
    (**(code **)(*param_1 + 800))(0x3c888889);
  }
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00e5e0c0("em0040_vo_shout",param_1,0xffffffff,0);
    _sprintf_s(&stack0xfffffefc,0x80,"Em0040_%s.mot",&DAT_016419e8);
    uVar2 = FUN_00de4550(&stack0xfffffefc,0);
    _sprintf_s(acStack_84,0x80,"Em0040_%s_0_seq.bxm",&DAT_016419e8);
    uVar3 = FUN_00de4550(acStack_84,0);
    FUN_00a9efb0(uVar2,uVar3,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0;
  }
  else {
    iVar1 = FUN_00a8cac0();
    if (iVar1 == 1) {
      FUN_00a959f0(0);
      iVar1 = FUN_00a94ce0(0);
      if (iVar1 != 0) {
        param_1[0x187] = param_1[0x187] + 1;
        param_1[0x225] = -0x41c7ae14;
        _sprintf_s(acStack_84,0x80,"Em0040_%s.mot",&DAT_01645778);
        uVar2 = FUN_00de4550(acStack_84,0);
        _sprintf_s(&stack0xfffffefc,0x80,"Em0040_%s_0_seq.bxm",&DAT_01645778);
        uVar3 = FUN_00de4550(&stack0xfffffefc,0);
        FUN_00a9efb0(uVar2,uVar3,0,0,0x3f800000,0,0xbf800000,0x3f800000);
        FUN_00a96070(0,0x8000000,1);
        (**(code **)(*param_1 + 0x314))();
        (**(code **)(*param_1 + 800))(0x3c888889);
      }
    }
    else {
      iVar1 = FUN_00a8cac0();
      if (iVar1 == 2) {
        if (param_1[0x1d9] != 0) {
          iVar1 = FUN_008e2740();
          if (iVar1 != 0) {
            param_1[0x187] = param_1[0x187] + 1;
          }
        }
      }
      else {
        iVar1 = FUN_00a8cac0();
        if (iVar1 == 3) {
          uVar2 = FUN_005f5bf0(&DAT_01645714);
          uVar3 = FUN_005f5ba0(&DAT_01645714);
          FUN_00a9efb0(uVar2,uVar3,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
          FUN_00a96070(0,0x8000000,1);
          param_1[0x187] = param_1[0x187] + 1;
        }
        else {
          iVar1 = FUN_00a8cac0();
          if (iVar1 == 4) {
            iVar1 = FUN_00a94ce0(0);
            if (iVar1 != 0) {
              param_1[0x187] = param_1[0x187] + 1;
              param_1[0x24d] = 0;
              param_1[0x188] = 0;
            }
          }
          else {
            iVar1 = FUN_00a8cac0();
            if (iVar1 == 5) {
              if (*(char *)((int)param_1 + 0xdb1) != '\0') {
                if (*(char *)((int)param_1 + 0xdba) != '\0') {
                  FUN_005f4410(0x13,0,0,0);
                  param_1[0x187] = 1;
                  return;
                }
                param_1[0x187] = param_1[0x187] + 1;
                uVar2 = FUN_005f5bf0(&DAT_016456c4);
                uVar3 = FUN_005f5ba0(&DAT_016456c4);
                FUN_00a9efb0(uVar2,uVar3,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
                FUN_00a96070(0,0x8000000,1);
                return;
              }
              if (param_1[0x188] == 0) {
                fVar4 = (float10)FUN_00a92ff0();
                fVar4 = fVar4 * (float10)0.016666668 + (float10)(float)param_1[0x24d];
                param_1[0x24d] = (int)(float)fVar4;
                if ((float10)1 < fVar4) {
                  param_1[0x188] = param_1[0x188] + 1;
                  uVar2 = FUN_005f5bf0(&DAT_016456cc);
                  uVar3 = FUN_005f5ba0(&DAT_016456cc);
                  FUN_00a9efb0(uVar2,uVar3,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
                }
              }
              else if (param_1[0x188] == 1) {
                *(undefined1 *)((int)param_1 + 0xdb5) = 1;
                return;
              }
            }
            else {
              iVar1 = FUN_00a8cac0();
              if (iVar1 == 6) {
                iVar1 = FUN_00a94ce0(0);
                if (iVar1 != 0) {
                  *(undefined1 *)((int)param_1 + 0xdaf) = 0;
                  *(undefined1 *)((int)param_1 + 0xdad) = 0;
                  FUN_005f4410(0,0,0,0);
                }
              }
            }
          }
        }
      }
    }
  }
  (**(code **)(*param_1 + 0x220))(0x3f800000);
  return;
}

// 005F91C0  FUN_005f91c0  size=572  [run]
void __fastcall FUN_005f91c0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char acStack_84 [132];
  
  (**(code **)(*param_1 + 0x220))(0x3f800000);
  *(undefined1 *)(param_1 + 0x36e) = 1;
  *(undefined1 *)((int)param_1 + 0xdb5) = 0;
  *(undefined1 *)((int)param_1 + 0xdb3) = 0;
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    param_1[0x23d] = param_1[0x25];
    _sprintf_s(&stack0xfffffefc,0x80,"Em0040_%s.mot",&DAT_01645768);
    uVar2 = FUN_00de4550(&stack0xfffffefc,0);
    _sprintf_s(acStack_84,0x80,"Em0040_%s_0_seq.bxm",&DAT_01645768);
    uVar3 = FUN_00de4550(acStack_84,0);
    FUN_00a9efb0(uVar2,uVar3,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96030(0,0x3fc00000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else {
    iVar1 = FUN_00a8cac0();
    if (iVar1 == 1) {
      param_1[0x187] = param_1[0x187] + 1;
      FUN_00a96030(0,0x3fc00000);
    }
    else {
      iVar1 = FUN_00a8cac0();
      if (iVar1 == 2) {
        FUN_005f62a0();
        (**(code **)(*param_1 + 0x308))(0x3e99999a,0,0x3f060a92,0);
        FUN_00a96030(0,0x3fc00000);
        if (*(char *)((int)param_1 + 0xdb1) == '\0') {
          *(undefined1 *)(param_1 + 0x36e) = 0;
          uVar2 = FUN_005f5bf0(&DAT_01645750);
          uVar3 = FUN_005f5ba0(&DAT_01645750);
          FUN_00a9efb0(uVar2,uVar3,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
          FUN_005f4410(0x13,2,0,0);
          return;
        }
      }
      else {
        iVar1 = FUN_00a8cac0();
        if (iVar1 == 3) {
          *(undefined1 *)(param_1 + 0x36e) = 0;
          FUN_005f4410(0,0,0,0);
          return;
        }
      }
    }
  }
  if ((*(char *)((int)param_1 + 0xdba) == '\0') && (param_1[0x187] == 2)) {
    param_1[0x187] = 3;
  }
  return;
}

// 005F9400  FUN_005f9400  size=1271  [run]
void __fastcall FUN_005f9400(int *param_1)

{
  code *pcVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float fStack_124;
  float fStack_11c;
  int iStack_118;
  char acStack_114 [128];
  char acStack_94 [144];
  
  pcVar1 = *(code **)(*param_1 + 0x314);
  *(undefined1 *)((int)param_1 + 0xdb3) = 1;
  *(undefined1 *)((int)param_1 + 0xdaf) = 0;
  *(undefined1 *)(param_1 + 0x36e) = 1;
  (*pcVar1)();
  (**(code **)(*param_1 + 800))(0x3c888889);
  *(undefined1 *)((int)param_1 + 0xdb5) = 0;
  iVar3 = FUN_00a8cac0();
  if (iVar3 == 0) {
    _sprintf_s(acStack_114,0x80,"Em0040_%s.mot",&DAT_01641c14);
    uVar4 = FUN_00de4550(acStack_114,0);
    _sprintf_s(acStack_94,0x80,"Em0040_%s_0_seq.bxm",&DAT_01641c14);
    uVar5 = FUN_00de4550(acStack_94,0);
    FUN_00a9efb0(uVar4,uVar5,0,0,0x3f800000,0,0xbf800000,0x3fb33333);
    FUN_00a96070(0,0x8038000,1);
  }
  else {
    iVar3 = FUN_00a8cac0();
    if (iVar3 != 1) {
      iVar3 = FUN_00a8cac0();
      if (iVar3 == 2) {
        _sprintf_s(acStack_94,0x80,"Em0040_%s.mot",&DAT_01641c0c);
        uVar4 = FUN_00de4550(acStack_94,0);
        _sprintf_s(acStack_114,0x80,"Em0040_%s_0_seq.bxm",&DAT_01641c0c);
        uVar5 = FUN_00de4550(acStack_114,0);
        FUN_00a9efb0(uVar4,uVar5,0,0,0x3f800000,0,0xbf800000,0x3fb33333);
        FUN_00a96070(0,0x8000000,1);
        param_1[0x224] = 0;
        param_1[0x225] = 0x3e800000;
        param_1[0x226] = 0;
        param_1[0x227] = iStack_118;
        param_1[0x248] = 0x3cf5c28f;
        param_1[0x224] = 0;
        fVar8 = (float10)FUN_00a92ff0();
        param_1[0x225] = (int)(float)(fVar8 * (float10)(float)param_1[0x248]);
        param_1[0x226] = 0;
        param_1[0x23d] = param_1[0x25];
        if (90000.0 < (float)param_1[0x4ae]) {
          param_1[0x23d] = param_1[0x4ad];
          D3DXMatrixRotationY(acStack_114,param_1[0x4ad]);
          D3DXVec3TransformNormal(&stack0xfffffed4,&stack0xfffffed4,&fStack_11c);
          param_1[0x224] = 0x3df5c28f;
          param_1[0x226] = (int)fStack_11c;
        }
        param_1[0x187] = param_1[0x187] + 1;
        param_1[0x249] = 0x40a00000;
        param_1[0x250] = 1;
        param_1[0x188] = 0;
      }
      else {
        iVar3 = FUN_00a8cac0();
        if (iVar3 == 3) {
          iVar3 = FUN_00a94ce0(0);
          if (iVar3 != 0) {
            *(undefined1 *)(param_1 + 0x36e) = 0;
            FUN_005f4410(7,0,0,0);
            return;
          }
          if ((((float)param_1[0x225] <= 0.0) && (param_1[0x1d9] != 0)) &&
             (iVar3 = FUN_008e2740(), iVar3 != 0)) {
            *(undefined1 *)(param_1 + 0x36e) = 0;
            FUN_005f4410(9,0,0,0);
            return;
          }
        }
      }
      goto LAB_005f9507;
    }
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 == 0) goto LAB_005f9507;
  }
  param_1[0x187] = param_1[0x187] + 1;
LAB_005f9507:
  if ((2 < param_1[0x187]) && (param_1[0x187] < 4)) {
    if ((float)param_1[0x4af] < 0.0) {
      fVar6 = (float10)FUN_00a92ff0();
      fVar8 = (float10)0;
      if ((float10)(float)param_1[0x249] <= fVar8) {
        param_1[0x250] = 0;
      }
      else {
        fVar7 = (float10)(float)param_1[0x249] - fVar6;
        param_1[0x249] = (int)(float)fVar7;
        if ((param_1[0x250] != 0) && (fVar7 < fVar8 != (fVar7 == fVar8))) {
          param_1[0x250] = 0;
          param_1[0x225] =
               (int)(float)((fVar7 + fVar6) * (float10)(float)param_1[0x248] +
                           (float10)(float)param_1[0x225]);
        }
      }
      if (param_1[0x250] != 0) {
        param_1[0x225] =
             (int)(float)((float10)(float)param_1[0x248] * fVar6 + (float10)(float)param_1[0x225]);
      }
    }
    fStack_124 = 0.0;
    fStack_11c = 0.0;
    fVar2 = 0.93;
    if (90000.0 < (float)param_1[0x4ae]) {
      D3DXMatrixRotationY(acStack_114,param_1[0x4ad]);
      fStack_124 = 0.12;
      D3DXVec3TransformNormal(&stack0xfffffed4,&stack0xfffffed4,&fStack_11c);
      fVar2 = 0.9;
    }
    param_1[0x224] = (int)((float)param_1[0x224] * fVar2 + fStack_124 * (1.0 - fVar2));
    param_1[0x226] = (int)(fVar2 * (float)param_1[0x226] + (1.0 - fVar2) * fStack_11c);
  }
  if (90000.0 < (float)param_1[0x4ae]) {
    param_1[0x23d] = param_1[0x4ad];
  }
  FUN_005f62a0();
  (**(code **)(*param_1 + 0x308))(0x3e99999a,0,0x3f060a92,0);
  return;
}

// 005F9900  FUN_005f9900  size=383  [run]
void __fastcall FUN_005f9900(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 != 0) {
    iVar1 = FUN_00a8cac0();
    if (iVar1 == 1) {
      FUN_00cbb500(1);
      if (DAT_01dc0ec4 != 0) {
        iVar1 = FUN_00eb4340(*(undefined4 *)(param_1 + 0xda4));
        if (iVar1 != 0) {
          DAT_01bea070 = DAT_01bea070 | 0x220000;
          *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
          return;
        }
      }
    }
    else {
      iVar1 = FUN_00a8cac0();
      if (iVar1 == 2) {
        FUN_00ebdd50(*(undefined4 *)(param_1 + 0xda4));
        FUN_005f65a0();
        uVar2 = cFade::set(0,0xff000000,0,0x3c,1,0,0x68);
        *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
        *(undefined4 *)(param_1 + 0xda4) = uVar2;
        return;
      }
      iVar1 = FUN_00a8cac0();
      if (iVar1 == 3) {
        iVar1 = FUN_00eb4340(*(undefined4 *)(param_1 + 0xda4));
        if (iVar1 != 0) {
          DAT_01bea070 = DAT_01bea070 & 0xffddffff;
          E3_EnemyBoardDebrisSokushi::vf4C();
          return;
        }
      }
      else {
        iVar1 = FUN_00a8cac0();
        if (iVar1 == 10) {
          FUN_00cbb500(1);
          fVar3 = (float10)FUN_00a92ff0();
          fVar3 = fVar3 + (float10)*(float *)(param_1 + 0x920);
          *(float *)(param_1 + 0x920) = (float)fVar3;
          if ((float10)120.0 <= fVar3) {
            FUN_00c17870();
            *(undefined4 *)(param_1 + 0x61c) = 99;
          }
        }
      }
    }
    return;
  }
  if (*(char *)(param_1 + 0xdbd) != '\0') {
    FUN_00cbb500(1);
    uVar2 = cFade::set(0,0,0xff000000,0x3c,1,0,0x68);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0xda4) = uVar2;
    FUN_00c29a50();
    return;
  }
  *(undefined4 *)(param_1 + 0x61c) = 10;
  FUN_00cbb500(1);
  *(undefined4 *)(param_1 + 0x920) = 0;
  FUN_00c29a50();
  return;
}

// 005F9A80  FUN_005f9a80  size=1010  [run]
void __fastcall FUN_005f9a80(int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  (**(code **)(*param_1 + 0x220))(0x3f800000);
  if ((param_1[0x449] == 2) || (param_1[0x128] == 2)) {
    iVar2 = FUN_00a92f90();
    if (iVar2 != 0) {
      FUN_00a92f90();
      FUN_00e26e90();
      FUN_00e22f10(0);
      FUN_00db3e80(0,0,&DAT_01bea1d0);
    }
    pcVar1 = *(code **)(*param_1 + 0x314);
    *(undefined1 *)((int)param_1 + 0xdaf) = 1;
    (*pcVar1)();
    iVar2 = FUN_00a8cac0();
    if (iVar2 == 0) {
      FUN_00eaa6e0(0x41200000,0);
      FUN_00eaa6e0(0x41200000,0);
      FUN_00e5e0c0("pl2040_se_dmg_spark_stop",param_1,0xffffffff,0);
      uVar3 = FUN_005f67a0(param_1[0x4f9],"pl2040_a600");
      uVar4 = FUN_005f6810(param_1[0x4f9],"pl2040_a600");
      FUN_00a9efb0(uVar4,uVar3,0,0,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00a96070(0,0x8000000,1);
      DAT_01bea070 = DAT_01bea070 | 0x220000;
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    iVar2 = FUN_00a8cac0();
    if (iVar2 == 1) {
      iVar2 = FUN_00a94ce0(0);
      if (iVar2 != 0) {
        uVar3 = FUN_005f67a0(param_1[0x4f9],"pl2040_a601");
        uVar4 = FUN_005f6810(param_1[0x4f9],"pl2040_a601");
        FUN_00a9efb0(uVar4,uVar3,0,0,0x3f800000,0,0xbf800000,0x3f800000);
        FUN_00a96070(0,0x8000000,1);
        param_1[0x187] = param_1[0x187] + 1;
        return;
      }
    }
    else {
      iVar2 = FUN_00a8cac0();
      if (iVar2 == 2) {
        iVar2 = FUN_00a94ce0(0);
        if (iVar2 != 0) {
          if (1 < (short)param_1[0xc9]) {
            *(uint *)(param_1[200] + 0xa8) = *(uint *)(param_1[200] + 0xa8) & 0xfffffffe;
          }
          if (2 < (short)param_1[0xc9]) {
            *(uint *)(param_1[200] + 0x118) = *(uint *)(param_1[200] + 0x118) & 0xfffffffe;
          }
          if (0xc < (short)param_1[0xc9]) {
            *(uint *)(param_1[200] + 0x578) = *(uint *)(param_1[200] + 0x578) & 0xfffffffe;
          }
          uVar3 = FUN_005f67a0(param_1[0x4f9],"pl2040_a602");
          uVar4 = FUN_005f6810(param_1[0x4f9],"pl2040_a602");
          FUN_00a9efb0(uVar4,uVar3,0,0,0x3f800000,0,0xbf800000,0x3f800000);
          FUN_00a96070(0,0x8000000,1);
          if (param_1[0x4f9] != 0) {
            piVar5 = (int *)FUN_00a7c8a0();
            (**(code **)(*piVar5 + 0x1c))();
            uVar11 = 0x3f800000;
            uVar10 = 0xbf800000;
            uVar9 = 0;
            uVar8 = 0x3f800000;
            uVar7 = 0;
            uVar6 = 0;
            FUN_00a7c8a0(uVar4,uVar3,0,0,0x3f800000,0,0xbf800000,0x3f800000);
            FUN_00a9efb0(uVar4,uVar3,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11);
            uVar6 = 1;
            uVar4 = 0x8000000;
            uVar3 = 0;
            FUN_00a7c8a0(0,0x8000000,1);
            FUN_00a96070(uVar3,uVar4,uVar6);
          }
          param_1[0x187] = param_1[0x187] + 1;
          return;
        }
      }
      else {
        iVar2 = FUN_00a8cac0();
        if ((iVar2 == 3) && ((DAT_01bea090 & 0x8000000) == 0)) {
          if (param_1[0x4f9] != 0) {
            piVar5 = (int *)FUN_00a7c8a0();
            (**(code **)(*piVar5 + 0x20))();
          }
          if (1 < (short)param_1[0xc9]) {
            *(uint *)(param_1[200] + 0xa8) = *(uint *)(param_1[200] + 0xa8) | 1;
          }
          if (2 < (short)param_1[0xc9]) {
            *(uint *)(param_1[200] + 0x118) = *(uint *)(param_1[200] + 0x118) | 1;
          }
          if (0xc < (short)param_1[0xc9]) {
            *(uint *)(param_1[200] + 0x578) = *(uint *)(param_1[200] + 0x578) | 1;
          }
          FUN_0049cd00(0xe);
          FUN_0049cd00(10);
          FUN_005f4410(0,0,0,0);
        }
      }
    }
  }
  else {
    FUN_00dd5650(&DAT_016457a8);
    iVar2 = FUN_00a8cab0();
    if ((iVar2 != 0) || (*(char *)((int)param_1 + 0xdb5) != '\0')) {
      *(undefined1 *)((int)param_1 + 0xdbe) = 0;
      FUN_00a8caf0(0,0,0,0);
      return;
    }
  }
  return;
}

// 005F9E80  FUN_005f9e80  size=330  [run]
undefined4 __thiscall FUN_005f9e80(int *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  
  *param_3 = 1;
  if ((DAT_01bea060 & 0x2000000) == 0) {
    iVar1 = FUN_00c15530();
    if (iVar1 != 0) {
      if (param_1[0x449] == 2) {
        if (*(int *)(param_2 + 0x58) == 0x1001) {
          param_1[0x4b0] = 0x40400000;
          if (param_1[0x288] == 0) {
            uVar2 = 0x20;
          }
          else {
            uVar2 = *(uint *)(param_1[0x288] + 0xe38);
          }
          if ((param_1[0x3ce] & uVar2) != 0) {
            iVar1 = FUN_00a81330();
            if (iVar1 != 0) {
              piVar3 = (int *)FUN_005f4370();
              if (piVar3 != (int *)0x0) goto LAB_005f9f1b;
            }
          }
        }
      }
      else {
        param_1[0x4b0] = 0x40400000;
        if (param_1[0x288] == 0) {
          uVar2 = 0x20;
        }
        else {
          uVar2 = *(uint *)(param_1[0x288] + 0xe38);
        }
        if ((param_1[0x3ce] & uVar2) != 0) {
          iVar1 = FUN_00a81330();
          if (iVar1 != 0) {
            piVar3 = (int *)FUN_005f4370();
            if (*(int *)(param_2 + 0x58) == 0x1001) {
LAB_005f9f1b:
              DAT_01bea060 = DAT_01bea060 | 0x2000000;
              FUN_00db3e80(0x41a00000,0,&DAT_01bea1d0);
              uVar4 = FUN_00a81330();
              (**(code **)(*param_1 + 0x150))(0x25,uVar4);
              (**(code **)(*piVar3 + 0x150))(0x25,param_1[0x13c]);
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}

// 005F9FD0  FUN_005f9fd0  size=134  [run]
void __fastcall FUN_005f9fd0(int param_1)

{
  int *piVar1;
  
  *(undefined4 *)(param_1 + 0x130c) = 0;
  FUN_004066f0();
  FUN_00a7c950();
  FUN_00901540(0x1f);
  FUN_0112c440(0x3f800000);
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
      return;
    }
  }
  return;
}

// 005FA060  FUN_005fa060  size=412  [run]
void __fastcall FUN_005fa060(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined *puVar6;
  
  uVar5 = 0;
  piVar1 = (int *)FUN_00c13920();
  iVar2 = (**(code **)(*piVar1 + 0x28))(1);
  if ((iVar2 != 0) && (piVar1 = (int *)FUN_00a7c8a0(), piVar1 != (int *)0x0)) {
    puVar6 = &DAT_01b35420;
    (**(code **)(*piVar1 + 4))(&DAT_01b35420);
    iVar2 = FUN_00dd6d80(puVar6);
    uVar5 = -(uint)(iVar2 != 0) & (uint)piVar1;
  }
  *(undefined4 *)(param_1 + 0x168c) = 1;
  *(uint *)(param_1 + 0xdd8) = *(uint *)(param_1 + 0xdd8) | 0x200000;
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    if (uVar5 == 0) {
      if (DAT_018b9174 != 0x230) break;
      uVar4 = FUN_005f5510("Em0010",&DAT_0163f42c);
      puVar6 = &DAT_0163f42c;
LAB_005fa144:
      uVar3 = FUN_005f5570("Em0010",puVar6);
    }
    else {
      uVar4 = FUN_005f5b30("Em0010",&DAT_0163f42c);
      puVar6 = &DAT_0163f42c;
LAB_005fa0ed:
      uVar3 = FUN_005f5ac0("Em0010",puVar6);
    }
    FUN_00a9efb0(uVar4,uVar3,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    break;
  case 1:
  case 3:
    goto switchD_005fa0ca_caseD_1;
  case 2:
    if (uVar5 != 0) {
      uVar4 = FUN_005f5b30("Em0010",&DAT_016457d4);
      puVar6 = &DAT_016457d4;
      goto LAB_005fa0ed;
    }
    if (DAT_018b9174 == 0x230) {
      uVar4 = FUN_005f5510("Em0010",&DAT_016457d4);
      puVar6 = &DAT_016457d4;
      goto LAB_005fa144;
    }
    break;
  default:
    goto switchD_005fa0ca_default;
  }
  *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
switchD_005fa0ca_caseD_1:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0x61c) = 0;
    return;
  }
switchD_005fa0ca_default:
  return;
}

// 005FA210  FUN_005fa210  size=335  [run]
void __fastcall FUN_005fa210(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined *puVar6;
  
  uVar5 = 0;
  piVar1 = (int *)FUN_00c13920();
  iVar2 = (**(code **)(*piVar1 + 0x28))(1);
  if (iVar2 != 0) {
    piVar1 = (int *)FUN_00a7c8a0();
    if (piVar1 != (int *)0x0) {
      puVar6 = &DAT_01b35420;
      (**(code **)(*piVar1 + 4))(&DAT_01b35420);
      iVar2 = FUN_00dd6d80(puVar6);
      uVar5 = -(uint)(iVar2 != 0) & (uint)piVar1;
    }
  }
  *(undefined4 *)(param_1 + 0x168c) = 1;
  *(uint *)(param_1 + 0xdd8) = *(uint *)(param_1 + 0xdd8) | 0x200000;
  if (*(int *)(param_1 + 0x61c) != 0) {
    if (*(int *)(param_1 + 0x61c) != 1) {
      return;
    }
    goto LAB_005fa348;
  }
  if (uVar5 == 0) {
    if (DAT_018b9174 == 0x230) {
      uVar3 = FUN_005f5510("Em0010",&DAT_016457d4);
      uVar4 = FUN_005f5570("Em0010",&DAT_016457d4);
      goto LAB_005fa323;
    }
  }
  else {
    uVar3 = FUN_005f5b30("Em0010",&DAT_016457d4);
    uVar4 = FUN_005f5ac0("Em0010",&DAT_016457d4);
LAB_005fa323:
    FUN_00a9efb0(uVar3,uVar4,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  }
  FUN_00b345b0(*(undefined4 *)(param_1 + 0x1748),0x40000000);
  *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
LAB_005fa348:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}


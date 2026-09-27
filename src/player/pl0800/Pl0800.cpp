// src/player/pl0800/Pl0800.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005F1200..00AC1220, 24 functions

#include "types.h"

// 005F1200  Pl0800::thunk_vf48  size=5  [class]
void __fastcall Pl0800::thunk_vf48(int *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  float10 fVar5;
  undefined *puVar6;
  
  iVar1 = FUN_00c13920();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    piVar2 = (int *)FUN_00c13920();
    iVar1 = (**(code **)(*piVar2 + 0x28))(0);
  }
  param_1[0x2a2] = iVar1;
  param_1[0x2a1] = 0;
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    uVar3 = 0;
    if (piVar2 != (int *)0x0) {
      puVar6 = &DAT_01be9c24;
      (**(code **)(*piVar2 + 4))(&DAT_01be9c24);
      iVar1 = FUN_00dd6d80(puVar6);
      uVar3 = -(uint)(iVar1 != 0) & (uint)piVar2;
    }
    param_1[0x2a1] = uVar3;
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    uVar4 = FUN_00a92fb0();
    FUN_00e08600(uVar4);
  }
  FUN_00a92fb0();
  fVar5 = (float10)FUN_00e049b0();
  param_1[0x244] = (int)(float)fVar5;
  param_1[0x361] = 0;
  iVar1 = FUN_00a8c760(0x15);
  if (iVar1 != 0) {
    FUN_00a8d280();
  }
  (**(code **)(*param_1 + 0x32c))();
  if (param_1[0x2fc] != 0) {
    uVar4 = FUN_00a8eea0();
    *(undefined4 *)(param_1[0x2fc] + 0x44) = uVar4;
  }
  iVar1 = FUN_00a8c760(0x18);
  if ((iVar1 == 0) && (param_1[0x21e] != 0)) {
    Behavior::updateGroundSupportForParts
              (param_1 + 0x297,param_1 + 0x16c,param_1 + 0x165,param_1 + 0x17c,param_1[0x21f]);
    Behavior::updateGroundSupportForParts
              (param_1 + 0x298,param_1 + 0x170,param_1 + 0x166,param_1 + 0x17d,param_1[0x220]);
  }
  FUN_00c3dac0(param_1 + 0x10,param_1 + 0x365);
  BehaviorAppBase::vf48();
  return;
}

// 005F1210  Pl0800::vf50  size=46  [class]
void __fastcall Pl0800::vf50(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x764) == 0) || (*(int *)(*(int *)(param_1 + 0x764) + 0x10c) != 0)) {
    iVar1 = FUN_00a8c240();
    if (iVar1 == 0) {
      FUN_00a93170();
    }
  }
  BehaviorEmBase::vf50();
  return;
}

// 005F1240  Pl0800::thunk_vf54  size=5  [class]
void __fastcall Pl0800::thunk_vf54(int *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined1 auStack_20 [28];
  
  bVar2 = false;
  iVar3 = FUN_00ac8410();
  if (iVar3 == 0) {
    iVar3 = FUN_00a8c760(0x25);
    if ((((iVar3 != 0) && (iVar3 = FUN_00a81330(), iVar3 != 0)) &&
        (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) &&
       (((((float)param_1[0x218] != 0.0 || ((float)param_1[0x219] != 0.0)) ||
         ((float)param_1[0x21a] != 0.0)) && (iVar3 = FUN_00a12210(0xffffffff), iVar3 != 0)))) {
      iVar1 = *param_1;
      fStack_40 = (float)param_1[0x10] +
                  (((float)param_1[0x218] + *(float *)(iVar3 + 0x40)) - (float)param_1[0x10]);
      fStack_3c = ((*(float *)(iVar3 + 0x44) + (float)param_1[0x219]) - (float)param_1[0x11]) +
                  (float)param_1[0x11];
      fStack_38 = ((*(float *)(iVar3 + 0x48) + (float)param_1[0x21a]) - (float)param_1[0x12]) +
                  (float)param_1[0x12];
      fStack_34 = (((float)param_1[0x21b] + *(float *)(iVar3 + 0x4c)) - (float)param_1[0x13]) +
                  (float)param_1[0x13];
      uVar4 = (**(code **)(iVar1 + 0x84))();
      (**(code **)(iVar1 + 0x7c))(&fStack_40,uVar4);
      bVar2 = true;
    }
    iVar3 = FUN_00a8c760(0x24);
    if (((iVar3 != 0) && (iVar3 = FUN_00ac82f0(), iVar3 == 0)) &&
       ((!bVar2 && ((iVar3 = FUN_00a81330(), iVar3 != 0 && (iVar3 = FUN_00a7c8a0(), iVar3 != 0))))))
    {
      FUN_00a8ce90(&fStack_40,auStack_20);
      D3DXVec3TransformNormal(&fStack_40,&fStack_40,iVar3 + 0x10);
      fStack_40 = *(float *)(iVar3 + 0x40) + fStack_40;
      fStack_3c = *(float *)(iVar3 + 0x44) + fStack_3c;
      fStack_38 = *(float *)(iVar3 + 0x48) + fStack_38;
      fStack_30 = fStack_40 - (float)param_1[0x10];
      fStack_2c = fStack_3c - (float)param_1[0x11];
      fStack_28 = fStack_38 - (float)param_1[0x12];
      fStack_24 = fStack_34 - (float)param_1[0x13];
      FUN_00a12310(&fStack_30);
    }
  }
  Behavior::vf54();
  return;
}

// 005F1260  FUN_005f1260  size=64  [between]
void __fastcall FUN_005f1260(int param_1)

{
  if ((((DAT_01bea070 & 0x180000) != 0) || ((DAT_01bea090 & 0x8000) != 0)) &&
     (*(char *)(param_1 + 0xdc6) != '\0')) {
    DAT_01bea070 = DAT_01bea070 & 0xffc7ffff;
    DAT_01bea090 = DAT_01bea090 & 0xffff7fff;
    DAT_01bea094 = DAT_01bea094 & 0xfffffdff;
  }
  return;
}

// 005F12A0  FUN_005f12a0  size=141  [between]
undefined4 __fastcall FUN_005f12a0(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  float fStack_20;
  float fStack_1c;
  
  iVar1 = FUN_00f98a90();
  iVar2 = FUN_00f98aa0();
  uVar3 = (**(code **)(*param_1 + 0x68))();
  iVar4 = FUN_00d9fa80(&fStack_20,uVar3);
  if ((iVar4 != 0) &&
     ((((0.0 <= fStack_20 || (fStack_20 <= (float)iVar1)) || (0.0 <= fStack_1c)) ||
      (fStack_1c <= (float)iVar2)))) {
    return 1;
  }
  return 0;
}

// 005F1330  FUN_005f1330  size=21  [between]
void __fastcall FUN_005f1330(int *param_1)

{
  (**(code **)(*param_1 + 800))(0x3c888889);
  return;
}

// 005F1380  Pl0800::vf44  size=157  [class]
void __fastcall Pl0800::vf44(int param_1)

{
  int *piVar1;
  
  FUN_008e3c10();
  FUN_008e1c60();
  if (*(int *)(param_1 + 0xe70) != 0) {
    piVar1 = (int *)FUN_00910da0();
    (**(code **)(*piVar1 + 0x2c))(param_1 + 0xe70);
  }
  FUN_00a944d0();
  BehaviorEmBase::vf44();
  if ((((DAT_01bea070 & 0x180000) != 0) || ((DAT_01bea090 & 0x8000) != 0)) &&
     (*(char *)(param_1 + 0xdc6) != '\0')) {
    DAT_01bea070 = DAT_01bea070 & 0xffc7ffff;
    DAT_01bea090 = DAT_01bea090 & 0xffff7fff;
    DAT_01bea094 = DAT_01bea094 & 0xfffffdff;
  }
  FUN_00983c50(param_1);
  FUN_00dd7270();
  return;
}

// 005F1420  Pl0800::vf0C  size=66  [class]
void __fastcall Pl0800::vf0C(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00932720();
  if ((iVar1 != 0x92) && (*(char *)(param_1 + 0xdc3) == '\0')) {
    FUN_00a5c080(*(undefined4 *)(param_1 + 0x4f0),*(undefined4 *)(param_1 + 0xb9c),
                 (int)*(short *)(param_1 + 0xab2),(int)*(short *)(param_1 + 0xab4));
  }
  return;
}

// 005F1470  FUN_005f1470  size=206  [between]
void __thiscall FUN_005f1470(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  char local_40 [64];
  
  uVar1 = FUN_00a8c6b0(param_2);
  _sprintf_s(local_40,0x40,"pl0800_%s.mot",uVar1);
  uVar2 = FUN_00de4550(local_40,0);
  _sprintf_s(local_40,0x40,"pl0800_%s_0_seq.bxm",uVar1);
  uVar1 = FUN_00de4550(local_40,0);
  FUN_00a9efb0(uVar2,uVar1,0,param_3,0x3f800000,0,0xbf800000,0x3f800000);
  if ((*(int *)(param_1 + 0x4b0) != 0x10800) && (*(int *)(param_1 + 0x4b0) != 0x10801)) {
    iVar3 = FUN_00de4550("pl0800.wmb",0);
    if (iVar3 == 0) {
      FUN_00a96100(0);
    }
  }
  return;
}

// 005F1540  FUN_005f1540  size=194  [between]
void __fastcall FUN_005f1540(int param_1)

{
  int iVar1;
  int *piVar2;
  
  *(undefined4 *)(param_1 + 0x870) = 0;
  *(undefined4 *)(param_1 + 0x6bc) = 1;
  iVar1 = FUN_00932720();
  if (iVar1 != 0x92) {
    FUN_00a5f390(*(undefined4 *)(param_1 + 0x4f0),*(undefined4 *)(param_1 + 0xb9c),
                 (int)*(short *)(param_1 + 0xab2),(int)*(short *)(param_1 + 0xab4));
  }
  if (*(int *)(param_1 + 0x4a0) == 0) {
    if (*(int *)(param_1 + 0xe70) != 0) {
      piVar2 = (int *)FUN_00910da0();
      (**(code **)(*piVar2 + 0x2c))(param_1 + 0xe70);
    }
    iVar1 = FUN_00a8cab0();
    if (iVar1 != 3) {
      iVar1 = FUN_00a8cab0();
      if (iVar1 == 4) {
        FUN_00a8caf0(7,0,0,0);
        FUN_00983c50(param_1);
        return;
      }
    }
    FUN_00a8caf0(6,0,0,0);
  }
  FUN_00983c50(param_1);
  return;
}

// 005F1610  FUN_005f1610  size=475  [between]
void __thiscall FUN_005f1610(int *param_1,int param_2)

{
  uint *puVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  char *pcVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  undefined4 uVar10;
  
  (**(code **)(*param_1 + 0x1c))();
  iVar7 = 0;
  if (0 < (short)param_1[0xc9]) {
    iVar8 = 0;
    do {
      pbVar3 = *(byte **)(*(int *)(param_1[200] + 0x60 + iVar8) + 0x40);
      if (pbVar3 != (byte *)0x0) {
        pcVar5 = "skin_in";
        do {
          bVar2 = *pbVar3;
          bVar9 = bVar2 < (byte)*pcVar5;
          if (bVar2 != *pcVar5) {
LAB_005f1670:
            iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            goto LAB_005f1675;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar3[1];
          bVar9 = bVar2 < (byte)pcVar5[1];
          if (bVar2 != pcVar5[1]) goto LAB_005f1670;
          pbVar3 = pbVar3 + 2;
          pcVar5 = pcVar5 + 2;
        } while (bVar2 != 0);
        iVar4 = 0;
LAB_005f1675:
        if (iVar4 == 0) {
          puVar1 = (uint *)(param_1[200] + iVar8 + 0x38);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
      }
      iVar7 = iVar7 + 1;
      iVar8 = iVar8 + 0x70;
    } while (iVar7 < (short)param_1[0xc9]);
  }
  if (param_2 == 0) {
    FUN_005f1470(5,0);
    uVar10 = 3;
  }
  else if (param_2 == 1) {
    if ((param_1[300] == 0x10800) || (param_1[300] == 0x10801)) {
      iVar7 = 0;
      if (0 < (short)param_1[0xc9]) {
        iVar8 = 0;
        do {
          pbVar3 = *(byte **)(*(int *)(param_1[200] + 0x60 + iVar8) + 0x40);
          if (pbVar3 != (byte *)0x0) {
            pbVar6 = &DAT_01645500;
            do {
              bVar2 = *pbVar3;
              bVar9 = bVar2 < *pbVar6;
              if (bVar2 != *pbVar6) {
LAB_005f1720:
                iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
                goto LAB_005f1725;
              }
              if (bVar2 == 0) break;
              bVar2 = pbVar3[1];
              bVar9 = bVar2 < pbVar6[1];
              if (bVar2 != pbVar6[1]) goto LAB_005f1720;
              pbVar3 = pbVar3 + 2;
              pbVar6 = pbVar6 + 2;
            } while (bVar2 != 0);
            iVar4 = 0;
LAB_005f1725:
            if (iVar4 == 0) {
              puVar1 = (uint *)(param_1[200] + iVar8 + 0x38);
              *puVar1 = *puVar1 & 0xfffffffe;
            }
          }
          iVar7 = iVar7 + 1;
          iVar8 = iVar8 + 0x70;
        } while (iVar7 < (short)param_1[0xc9]);
      }
      iVar7 = 0;
      if (0 < (short)param_1[0xc9]) {
        iVar8 = 0;
        do {
          pbVar3 = *(byte **)(*(int *)(param_1[200] + 0x60 + iVar8) + 0x40);
          if (pbVar3 != (byte *)0x0) {
            pbVar6 = &DAT_01640b88;
            do {
              bVar2 = *pbVar3;
              bVar9 = bVar2 < *pbVar6;
              if (bVar2 != *pbVar6) {
LAB_005f1786:
                iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
                goto LAB_005f178b;
              }
              if (bVar2 == 0) break;
              bVar2 = pbVar3[1];
              bVar9 = bVar2 < pbVar6[1];
              if (bVar2 != pbVar6[1]) goto LAB_005f1786;
              pbVar3 = pbVar3 + 2;
              pbVar6 = pbVar6 + 2;
            } while (bVar2 != 0);
            iVar4 = 0;
LAB_005f178b:
            if (iVar4 == 0) {
              puVar1 = (uint *)(param_1[200] + 0x38 + iVar8);
              *puVar1 = *puVar1 & 0xfffffffe;
            }
          }
          iVar7 = iVar7 + 1;
          iVar8 = iVar8 + 0x70;
        } while (iVar7 < (short)param_1[0xc9]);
      }
    }
    uVar10 = 10;
  }
  else {
    if (param_2 != 2) goto LAB_005f17d4;
    FUN_005f1470(0x10,0x3ca3d70a);
    uVar10 = 9;
  }
  FUN_00a8caf0(uVar10,0,0,0);
LAB_005f17d4:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 005F17F0  FUN_005f17f0  size=721  [between]
void __fastcall FUN_005f17f0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  float10 fVar6;
  undefined *puVar7;
  
  piVar1 = (int *)FUN_00c13920();
  iVar2 = (**(code **)(*piVar1 + 0x28))(0xffffffff);
  if (iVar2 != 0) {
    piVar1 = (int *)FUN_00a7c8a0();
    if (piVar1 != (int *)0x0) {
      puVar7 = &DAT_01be9db8;
      (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
      iVar3 = FUN_00dd6d80(puVar7);
      if (iVar3 != 0) {
        piVar1[0x14fa] = 0;
      }
    }
  }
  iVar3 = FUN_00a8cac0();
  if (iVar3 == 0) {
    iVar5 = 0;
    iVar3 = 0;
    if (0 < (short)param_1[0xcb]) {
      do {
        *(undefined4 *)(iVar5 + 0x460 + param_1[0xca]) = 0;
        iVar3 = iVar3 + 1;
        iVar5 = iVar5 + 0x560;
      } while (iVar3 < (short)param_1[0xcb]);
    }
    FUN_00983c50(param_1);
    if (iVar2 != 0) {
      piVar1 = (int *)FUN_00a7c8a0();
      if (piVar1 != (int *)0x0) {
        puVar7 = &DAT_01be9db8;
        (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
        iVar2 = FUN_00dd6d80(puVar7);
        if (iVar2 != 0) {
          (**(code **)(*piVar1 + 0x150))(0x75,param_1[0x13c]);
        }
      }
    }
    FUN_005f1470(10,0x3ca3d70a);
    FUN_00a96070(0,0x8000000,1);
    param_1[0x187] = param_1[0x187] + 1;
    if (param_1[0x39c] != 0) {
      piVar1 = (int *)FUN_00910da0();
      (**(code **)(*piVar1 + 0x2c))(param_1 + 0x39c);
      return;
    }
  }
  else {
    iVar2 = FUN_00a8cac0();
    if (iVar2 == 1) {
      FUN_00a92f90();
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        fVar6 = (float10)FUN_00e36970(0);
        if ((float10)2.65 <= fVar6) {
          uVar4 = FUN_00a7c8b0();
          FUN_00a8e880(uVar4);
          (**(code **)(*param_1 + 0x308))(0x3cf5c28f,0x393702d3,0x3d567750,0);
        }
      }
      iVar2 = FUN_00a94ce0(0);
      if (iVar2 != 0) {
        FUN_005f1470(4,0x3ca3d70a);
        iVar2 = FUN_00932720();
        if (iVar2 != 0x92) {
          FUN_00a5f430(param_1[0x13c],param_1[0x2e7],(int)*(short *)((int)param_1 + 0xab2),
                       (int)(short)param_1[0x2ad]);
        }
        param_1[0x187] = param_1[0x187] + 1;
        return;
      }
    }
    else {
      iVar2 = FUN_00a8cac0();
      if (iVar2 == 2) {
        uVar4 = FUN_00a7c8b0();
        FUN_00a8e880(uVar4);
        (**(code **)(*param_1 + 0x308))(0x3cf5c28f,0x393702d3,0x3d567750,0);
        *(undefined1 *)((int)param_1 + 0xdc7) = 1;
        FUN_00a8caf0(8,0,0,0);
        return;
      }
      iVar2 = FUN_00a8cac0();
      if (iVar2 == 3) {
        uVar4 = FUN_00a7c8b0();
        FUN_00a8e880(uVar4);
        (**(code **)(*param_1 + 0x308))(0x3cf5c28f,0x393702d3,0x3d567750,0);
        iVar2 = FUN_00a94ce0(0);
        if (iVar2 == 1) {
          FUN_00a8caf0(8,0,0,0);
        }
      }
    }
  }
  return;
}

// 005F1AD0  FUN_005f1ad0  size=210  [between]
void __fastcall FUN_005f1ad0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    if ((((DAT_01bea070 & 0x180000) != 0) || ((DAT_01bea090 & 0x8000) != 0)) &&
       (*(char *)(param_1 + 0xdc6) != '\0')) {
      DAT_01bea070 = DAT_01bea070 & 0xffc7ffff;
      DAT_01bea090 = DAT_01bea090 & 0xffff7fff;
      DAT_01bea094 = DAT_01bea094 & 0xfffffdff;
    }
    FUN_005f1470(6,0x3ca3d70a);
    FUN_00a96070(0,0x8000000,1);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    if ((((DAT_01bea070 & 0x180000) != 0) || ((DAT_01bea090 & 0x8000) != 0)) &&
       (*(char *)(param_1 + 0xdc6) != '\0')) {
      DAT_01bea070 = DAT_01bea070 & 0xffc7ffff;
      DAT_01bea090 = DAT_01bea090 & 0xffff7fff;
      DAT_01bea094 = DAT_01bea094 & 0xfffffdff;
    }
    if (*(int *)(param_1 + 0x764) != 0) {
      FUN_008e5c50(0xd);
    }
    return;
  }
  FUN_00a8cab0();
  return;
}

// 005F1BB0  FUN_005f1bb0  size=163  [between]
void __fastcall FUN_005f1bb0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_005f1470(6,0x3ca3d70a);
    FUN_00a96070(0,0x8000000,1);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    if ((((DAT_01bea070 & 0x180000) != 0) || ((DAT_01bea090 & 0x8000) != 0)) &&
       (*(char *)(param_1 + 0xdc6) != '\0')) {
      DAT_01bea070 = DAT_01bea070 & 0xffc7ffff;
      DAT_01bea090 = DAT_01bea090 & 0xffff7fff;
      DAT_01bea094 = DAT_01bea094 & 0xfffffdff;
    }
    if (*(int *)(param_1 + 0x764) != 0) {
      FUN_008e5270(0x100000);
      FUN_008e5c50(0xd);
    }
    return;
  }
  FUN_00a8cac0();
  return;
}

// 005F1C60  FUN_005f1c60  size=883  [between]
void __fastcall FUN_005f1c60(int *param_1)

{
  uint *puVar1;
  byte bVar2;
  code *pcVar3;
  int *piVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  
  iVar9 = 0;
  switch(param_1[0x187]) {
  case 0:
    if (param_1[0x1d9] != 0) {
      FUN_008e5c50(0x13);
    }
    FUN_005f1470(0xe,0x3ca3d70a);
    pcVar3 = *(code **)(*param_1 + 0x68);
    param_1[599] = 0;
    param_1[0x256] = 0;
    piVar4 = (int *)(*pcVar3)();
    param_1[0x398] = *piVar4;
    param_1[0x399] = piVar4[1];
    param_1[0x39a] = piVar4[2];
    param_1[0x39b] = piVar4[3];
    *(undefined1 *)((int)param_1 + 0xdc1) = 0;
    if ((param_1[300] == 0x10800) || (param_1[300] == 0x10801)) {
      iVar9 = 0;
      if (0 < (short)param_1[0xc9]) {
        iVar10 = 0;
        do {
          pbVar5 = *(byte **)(*(int *)(param_1[200] + 0x60 + iVar10) + 0x40);
          if (pbVar5 != (byte *)0x0) {
            pbVar7 = &DAT_01640b88;
            do {
              bVar2 = *pbVar5;
              bVar11 = bVar2 < *pbVar7;
              if (bVar2 != *pbVar7) {
LAB_005f1e26:
                iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                goto LAB_005f1e2b;
              }
              if (bVar2 == 0) break;
              bVar2 = pbVar5[1];
              bVar11 = bVar2 < pbVar7[1];
              if (bVar2 != pbVar7[1]) goto LAB_005f1e26;
              pbVar5 = pbVar5 + 2;
              pbVar7 = pbVar7 + 2;
            } while (bVar2 != 0);
            iVar6 = 0;
LAB_005f1e2b:
            if (iVar6 == 0) {
              puVar1 = (uint *)(param_1[200] + 0x38 + iVar10);
              *puVar1 = *puVar1 | 1;
            }
          }
          iVar9 = iVar9 + 1;
          iVar10 = iVar10 + 0x70;
        } while (iVar9 < (short)param_1[0xc9]);
      }
      iVar9 = 0;
      if (0 < (short)param_1[0xc9]) {
        iVar10 = 0;
        do {
          pbVar5 = *(byte **)(*(int *)(param_1[200] + 0x60 + iVar10) + 0x40);
          if (pbVar5 != (byte *)0x0) {
            pbVar7 = &DAT_01645514;
            do {
              bVar2 = *pbVar5;
              bVar11 = bVar2 < *pbVar7;
              if (bVar2 != *pbVar7) {
LAB_005f1e88:
                iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                goto LAB_005f1e8d;
              }
              if (bVar2 == 0) break;
              bVar2 = pbVar5[1];
              bVar11 = bVar2 < pbVar7[1];
              if (bVar2 != pbVar7[1]) goto LAB_005f1e88;
              pbVar5 = pbVar5 + 2;
              pbVar7 = pbVar7 + 2;
            } while (bVar2 != 0);
            iVar6 = 0;
LAB_005f1e8d:
            if (iVar6 == 0) {
              puVar1 = (uint *)(param_1[200] + 0x38 + iVar10);
              *puVar1 = *puVar1 | 1;
            }
          }
          iVar9 = iVar9 + 1;
          iVar10 = iVar10 + 0x70;
        } while (iVar9 < (short)param_1[0xc9]);
      }
      iVar9 = 0;
      if (0 < (short)param_1[0xc9]) {
        iVar10 = 0;
        do {
          pbVar5 = *(byte **)(*(int *)(param_1[200] + 0x60 + iVar10) + 0x40);
          if (pbVar5 != (byte *)0x0) {
            pcVar8 = "skin_in";
            do {
              bVar2 = *pbVar5;
              bVar11 = bVar2 < (byte)*pcVar8;
              if (bVar2 != *pcVar8) {
LAB_005f1f00:
                iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                goto LAB_005f1f05;
              }
              if (bVar2 == 0) break;
              bVar2 = pbVar5[1];
              bVar11 = bVar2 < (byte)pcVar8[1];
              if (bVar2 != pcVar8[1]) goto LAB_005f1f00;
              pbVar5 = pbVar5 + 2;
              pcVar8 = pcVar8 + 2;
            } while (bVar2 != 0);
            iVar6 = 0;
LAB_005f1f05:
            if (iVar6 == 0) {
              puVar1 = (uint *)(param_1[200] + iVar10 + 0x38);
              *puVar1 = *puVar1 & 0xfffffffe;
            }
          }
          iVar9 = iVar9 + 1;
          iVar10 = iVar10 + 0x70;
        } while (iVar9 < (short)param_1[0xc9]);
      }
    }
    else {
      if (0 < (short)param_1[0xc9]) {
        iVar10 = 0;
        do {
          pbVar5 = *(byte **)(*(int *)(param_1[200] + 0x60 + iVar10) + 0x40);
          if (pbVar5 != (byte *)0x0) {
            pbVar7 = &DAT_0164551c;
            do {
              bVar2 = *pbVar5;
              bVar11 = bVar2 < *pbVar7;
              if (bVar2 != *pbVar7) {
LAB_005f1d46:
                iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                goto LAB_005f1d4b;
              }
              if (bVar2 == 0) break;
              bVar2 = pbVar5[1];
              bVar11 = bVar2 < pbVar7[1];
              if (bVar2 != pbVar7[1]) goto LAB_005f1d46;
              pbVar5 = pbVar5 + 2;
              pbVar7 = pbVar7 + 2;
            } while (bVar2 != 0);
            iVar6 = 0;
LAB_005f1d4b:
            if (iVar6 == 0) {
              puVar1 = (uint *)(param_1[200] + 0x38 + iVar10);
              *puVar1 = *puVar1 | 1;
            }
          }
          iVar9 = iVar9 + 1;
          iVar10 = iVar10 + 0x70;
        } while (iVar9 < (short)param_1[0xc9]);
      }
      iVar9 = 0;
      if (0 < (short)param_1[0xc9]) {
        iVar10 = 0;
        do {
          pbVar5 = *(byte **)(*(int *)(param_1[200] + 0x60 + iVar10) + 0x40);
          if (pbVar5 != (byte *)0x0) {
            pcVar8 = "skin_in";
            do {
              bVar2 = *pbVar5;
              bVar11 = bVar2 < (byte)*pcVar8;
              if (bVar2 != *pcVar8) {
LAB_005f1dc0:
                iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                goto LAB_005f1dc5;
              }
              if (bVar2 == 0) break;
              bVar2 = pbVar5[1];
              bVar11 = bVar2 < (byte)pcVar8[1];
              if (bVar2 != pcVar8[1]) goto LAB_005f1dc0;
              pbVar5 = pbVar5 + 2;
              pcVar8 = pcVar8 + 2;
            } while (bVar2 != 0);
            iVar6 = 0;
LAB_005f1dc5:
            if (iVar6 == 0) {
              puVar1 = (uint *)(param_1[200] + iVar10 + 0x38);
              *puVar1 = *puVar1 & 0xfffffffe;
            }
          }
          iVar9 = iVar9 + 1;
          iVar10 = iVar10 + 0x70;
        } while (iVar9 < (short)param_1[0xc9]);
      }
    }
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    if ((*(char *)((int)param_1 + 0xdc1) != '\0') && (param_1[0x256] == 0)) {
      param_1[0x187] = 2;
      return;
    }
    iVar9 = FUN_00a94ce0(0);
    if ((iVar9 != 0) && (param_1[599] = param_1[599] + 1, 2 < param_1[599])) {
      (**(code **)(*param_1 + 0x6c))(param_1 + 0x398);
      param_1[0x187] = 0;
      return;
    }
    break;
  case 2:
    param_1[599] = 0;
    param_1[0x256] = 1;
    FUN_005f1470(0xf,0x3ca3d70a);
    FUN_00a96070(0,0x8000000,1);
    param_1[0x187] = 3;
    return;
  case 3:
    iVar9 = FUN_00a94ce0(0);
    if (iVar9 != 0) {
      param_1[0x187] = 1;
      FUN_005f1470(0x10,0x3ca3d70a);
    }
  }
  return;
}

// 005F2000  FUN_005f2000  size=510  [between]
void __fastcall FUN_005f2000(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  param_1[0x14fa] = 0;
  DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    iVar1 = FUN_00a81330();
    if (iVar1 == 0) {
      iVar1 = *param_1;
      uVar2 = FUN_00a81330();
      (**(code **)(iVar1 + 0x15c))(0x75,uVar2);
      (**(code **)(*param_1 + 0x388))(0);
      return;
    }
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a81330();
    FUN_00a7c8a0();
    if (param_1[0x2dd] == 0) {
      uVar2 = FUN_00de4550("pl0010_a161.mot",0);
      uVar3 = FUN_00de4550("pl0010_a161_0_seq.bxm",0);
      FUN_00a9f180(uVar2,uVar3,&DAT_01645520,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
    else {
      uVar2 = FUN_00de4550("pl0010_a160.mot",0);
      uVar3 = FUN_00de4550("pl0010_a160_0_seq.bxm",0);
      FUN_00a9f180(uVar2,uVar3,&DAT_01645550,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
  }
  else {
    iVar1 = FUN_00a8cac0();
    if (iVar1 == 1) {
      iVar1 = FUN_00a94ce0(0);
      if (iVar1 != 0) {
        iVar1 = *param_1;
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        uVar2 = FUN_00a81330(&local_20);
        (**(code **)(iVar1 + 0x154))(0x75,uVar2);
        FUN_00ba6810(1,0);
        (**(code **)(*param_1 + 0x388))(0);
      }
    }
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    uVar2 = FUN_00a7c8b0();
    FUN_00a8e880(uVar2);
    (**(code **)(*param_1 + 0x308))(0x3f4ccccd,0x3c8efa35,0x3c8efa35,0);
  }
  return;
}

// 005F2210  Pl0800::vf40  size=730  [class]
undefined4 __fastcall Pl0800::vf40(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = BehaviorEmBase::vf40();
  if (iVar1 != 0) {
    *(undefined1 *)(param_1 + 0xdc3) = 0;
    *(undefined4 *)(param_1 + 0x870) = 100;
    *(undefined2 *)(param_1 + 0xdc0) = 0;
    *(undefined1 *)(param_1 + 0xdc8) = 0;
    FUN_00dd7240();
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) & 0xffefffff;
    uVar2 = FUN_00a8d2a0();
    puVar3 = (undefined4 *)FUN_009f8b60();
    iVar1 = CollisionCapsule::CollisionCapsule(4,*puVar3,0);
    if (iVar1 != 0) {
      lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>_2(3);
      *(undefined4 *)(iVar1 + 0x380) = 0;
      FUN_00d77c50(*(undefined4 *)(param_1 + 0x4f0),4);
      *(undefined4 *)(iVar1 + 0x594) = 0x3e99999a;
      *(undefined4 *)(iVar1 + 0x590) = 0x3e99999a;
      FUN_00a93a00(iVar1,uVar2);
      FUN_00d7b0f0();
      FUN_00d7b890();
      puVar3 = (undefined4 *)FUN_009f8b60();
      iVar1 = CollisionCapsule::CollisionCapsule(4,*puVar3,0);
      if (iVar1 != 0) {
        *(undefined4 *)(iVar1 + 0x380) = 1;
        FUN_00d77c50(*(undefined4 *)(param_1 + 0x4f0),0);
        *(undefined4 *)(iVar1 + 0x594) = 0x3e99999a;
        *(undefined4 *)(iVar1 + 0x590) = 0x3e99999a;
        local_20 = 0;
        local_1c = 0xbf000000;
        local_18 = 0;
        local_14 = 0x3f800000;
        FUN_00d77c90(&local_20);
        FUN_00a93a00(iVar1,uVar2);
        FUN_00d7b0f0();
        FUN_00d7b890();
        puVar3 = (undefined4 *)FUN_009f8b60();
        iVar1 = CollisionCapsule::CollisionCapsule(4,*puVar3,0);
        if (iVar1 != 0) {
          *(undefined4 *)(iVar1 + 0x380) = 2;
          FUN_00d77c50(*(undefined4 *)(param_1 + 0x4f0),0);
          *(undefined4 *)(iVar1 + 0x594) = 0x3fb33333;
          *(undefined4 *)(iVar1 + 0x590) = 0x3e99999a;
          _strncpy_s((char *)(iVar1 + 0x394),0x20,"Body",0x1f);
          FUN_00a93a00(iVar1,uVar2);
          FUN_00d7b0f0();
          FUN_00d7b890();
          iVar1 = FUN_008ec660(param_1,0x3fc00000,0x3e99999a,0x42200000,0x41a00000,0x78,7,0);
          *(int *)(param_1 + 0x764) = iVar1;
          if (iVar1 != 0) {
            FUN_008e5610(0x100);
            FUN_008e6d00();
            *(float *)(*(int *)(param_1 + 0x764) + 0xf4) =
                 *(float *)(*(int *)(param_1 + 0x764) + 0xf4) * 0.5;
            FUN_008e5270(0x100000);
          }
          FUN_005f1610(*(undefined4 *)(param_1 + 0x4a0));
          if (*(undefined4 **)(param_1 + 0x370) != (undefined4 *)0x0) {
            *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) & 0xffbfffff;
            **(undefined4 **)(param_1 + 0x370) = 1;
          }
          if (*(int *)(param_1 + 0x370) != 0) {
            *(undefined4 *)(*(int *)(param_1 + 0x370) + 4) = 0;
            *(undefined4 *)(*(int *)(param_1 + 0x370) + 8) = 0;
          }
          *(undefined1 *)(param_1 + 0xdc6) = 0;
          *(undefined4 *)(param_1 + 0xe40) = 0;
          *(undefined4 *)(param_1 + 0xe44) = 0;
          *(undefined4 *)(param_1 + 0xe48) = 0;
          *(undefined4 *)(param_1 + 0xe4c) = 0x3f800000;
          FUN_009872e0(param_1);
          *(undefined2 *)(param_1 + 0xdc4) = 0;
          *(undefined1 *)(param_1 + 0xdc7) = 0;
          return 1;
        }
      }
    }
  }
  return 0;
}

// 005F24F0  Pl0800::vf264  size=618  [class]
undefined4 __thiscall Pl0800::vf264(int *param_1,undefined4 param_2)

{
  int iVar1;
  float *pfVar2;
  undefined4 uVar3;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  int *piStack_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined1 auStack_f4 [4];
  undefined1 auStack_f0 [16];
  uint local_e0 [36];
  undefined4 local_50;
  undefined1 local_2c;
  
  FUN_0040ac60(param_2);
  FUN_00aa0ba0(param_1[0x2c2],param_1[0x2e7]);
  FUN_00aa0920(param_1[0x2c3]);
  FUN_005f1610(param_1[0x128]);
  if ((param_1[0x128] != 1) && (param_1[0x128] == 0)) {
    FUN_0118f7b0();
    iVar1 = FUN_009f8b40();
    local_50 = 0;
    local_110 = 0;
    local_108 = 0;
    local_e0[0] = iVar1 << 0x10 | 7;
    local_104 = 0x3f800000;
    local_114 = 0x3f800000;
    local_2c = 5;
    local_120 = 0;
    local_11c = 0;
    local_118 = 0;
    local_10c = 0x3fc00000;
    pfVar2 = (float *)(**(code **)(*param_1 + 0x68))();
    fStack_140 = *pfVar2;
    fStack_13c = pfVar2[1];
    fStack_138 = pfVar2[2];
    fStack_134 = pfVar2[3];
    pfVar2 = (float *)FUN_00a925a0(auStack_f0);
    fStack_140 = *pfVar2 * 0.25 + fStack_140;
    fStack_13c = pfVar2[1] * 0.25 + fStack_13c;
    fStack_138 = pfVar2[2] * 0.25 + fStack_138;
    fStack_134 = pfVar2[3] * 0.25 + fStack_134;
    piStack_124 = (int *)FUN_00910da0();
    iVar1 = *piStack_124;
    uVar3 = (**(code **)(*param_1 + 0x84))(&local_110,&local_120,0x3f333333,1);
    uVar3 = (**(code **)(iVar1 + 0xc))(auStack_f4,local_e0,&fStack_140,uVar3);
    FUN_00910ab0(uVar3);
    FUN_00917bd0(param_1[0x39c],0x100);
    FUN_00917bd0(param_1[0x39c],0x20);
    FUN_00917bd0(param_1[0x39c],0x40);
    FUN_00917bd0(param_1[0x39c],4);
    FUN_00917bd0(param_1[0x39c],8);
    iVar1 = FUN_00932720();
    if (iVar1 != 0x92) {
      FUN_00a61600(param_1[0x13c],param_1[0x2e7],(int)*(short *)((int)param_1 + 0xab2),
                   (int)(short)param_1[0x2ad]);
    }
    iVar1 = FUN_00c3d5e0(4,param_1[0x2c8]);
    if (iVar1 != 0) {
      iVar1 = FUN_00932720();
      if (iVar1 == 0x128) {
        uVar3 = 0x51;
      }
      else {
        iVar1 = FUN_00932720();
        if (iVar1 == 0x140) {
          uVar3 = 0x52;
        }
        else {
          iVar1 = FUN_00932720();
          if (iVar1 == 0x330) {
            uVar3 = 0x53;
          }
          else {
            iVar1 = FUN_00932720();
            if (iVar1 != 0x520) {
              return 1;
            }
            uVar3 = 0x54;
          }
        }
      }
      FUN_00c81e40(uVar3);
    }
  }
  return 1;
}

// 005F2760  FUN_005f2760  size=1797  [between]
void __fastcall FUN_005f2760(int *param_1)

{
  float *pfVar1;
  int *piVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  undefined4 uVar6;
  undefined *puVar7;
  int local_d0;
  int local_cc;
  int local_c8;
  undefined4 local_c4;
  float local_c0;
  int local_bc;
  float local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  float local_98;
  float local_94;
  float local_90;
  int local_8c;
  float local_88;
  float local_84;
  float local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 local_70 [16];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 auStack_50 [76];
  
  if ((param_1[0x254] == 0) && (*(char *)((int)param_1 + 0xdc1) != '\0')) {
    iVar3 = param_1[0x187];
    if ((iVar3 == 4) || (iVar3 == 5)) {
      param_1[0x187] = 8;
    }
    else {
      param_1[0x255] = iVar3;
      param_1[0x187] = 6;
    }
    param_1[0x254] = 1;
  }
  switch(param_1[0x187]) {
  case 0:
    param_1[0x253] = 0;
    param_1[0x254] = 0;
    if (param_1[0x1d9] != 0) {
      FUN_008e5c50(0x13);
    }
    iVar3 = FUN_00d46690((char)param_1[0x2c9]);
    if (iVar3 == 0) {
      FUN_009f8ea0(local_70,10,param_1[300],0);
      FUN_00dd5650(&DAT_0163d460,local_70,param_1[0x2c9]);
      FUN_00a8caf0(0,0,0,0);
      return;
    }
    FUN_00a5dcc0(iVar3);
    param_1[0x249] = 0;
    param_1[0x24a] = 0x40400000;
    FUN_00a585a0(&local_c0,0x40400000,0);
    fVar5 = (float10)fpatan((float10)local_c0,(float10)local_b8);
    fVar4 = (float10)FUN_00ddba30((float)((float10)(float)param_1[0x25] - fVar5));
    fVar4 = fVar4 * (float10)57.29578;
    fVar5 = (float10)0;
    if ((fVar5 < fVar4 == (fVar5 == fVar4)) || ((float10)180.0 <= fVar4)) {
      if ((fVar4 < fVar5) && ((float10)-180.0 < fVar4)) {
        uVar6 = 0xd;
        goto LAB_005f2892;
      }
    }
    else {
      uVar6 = 0xc;
LAB_005f2892:
      FUN_005f1470(uVar6,0x3ca3d70a);
      FUN_00a96070(0,0x8000000,1);
    }
    fVar5 = (float10)FUN_00a581b0(&local_d0,param_1[0x24a],param_1[0x249]);
    param_1[0x249] = (int)(float)fVar5;
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x390] = local_d0;
    param_1[0x391] = local_cc;
    param_1[0x251] = 0;
    param_1[0x392] = local_c8;
    param_1[0x393] = 0x3f800000;
    FUN_00a8e880(param_1 + 0x390);
  case 1:
    iVar3 = FUN_00a959f0(0);
    if ((param_1[0x251] == 0) && (99 < iVar3)) {
      param_1[0x251] = 1;
    }
    if (0x82 < iVar3) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    FUN_00a8e880(param_1 + 0x390);
    break;
  case 2:
    FUN_005f1470(0xe,0x3ca3d70a);
    iVar3 = FUN_00a54a60(param_1[0x249]);
    if (iVar3 == 0) {
      fVar5 = (float10)FUN_00a581b0(&local_d0,param_1[0x24a],param_1[0x249]);
      param_1[0x249] = (int)(float)fVar5;
    }
    param_1[0x390] = local_d0;
    param_1[0x391] = local_cc;
    param_1[0x392] = local_c8;
    param_1[0x393] = 0x3f800000;
    FUN_00a8e880(param_1 + 0x390);
    (**(code **)(*param_1 + 0x308))(0x3f333333,0,0x3dfa35dd,0);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    pfVar1 = (float *)(**(code **)(*param_1 + 0x68))();
    if (SQRT((pfVar1[2] - (float)param_1[0x23a]) * (pfVar1[2] - (float)param_1[0x23a]) +
             (*pfVar1 - (float)param_1[0x238]) * (*pfVar1 - (float)param_1[0x238])) < 1.0) {
      iVar3 = FUN_00a54a60(param_1[0x249]);
      if (iVar3 == 0) {
        fVar5 = (float10)FUN_00a581b0(&local_d0,param_1[0x24a],param_1[0x249]);
        param_1[0x249] = (int)(float)fVar5;
      }
      param_1[0x253] = param_1[0x253] + 1;
      param_1[0x390] = local_d0;
      param_1[0x391] = local_cc;
      param_1[0x392] = local_c8;
      param_1[0x393] = 0x3f800000;
      FUN_00a8e880(param_1 + 0x390);
      if (param_1[0x253] == 3) {
        FUN_00c49970(4,param_1[0x2c8]);
        FUN_005f1260();
      }
    }
    FUN_00a8e880(param_1 + 0x390);
    (**(code **)(*param_1 + 0x308))(0x3f333333,0,0x3dfa35dd,0);
    iVar3 = FUN_00a54a60(param_1[0x249]);
    if (iVar3 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 4:
    if (*(char *)((int)param_1 + 0xdc1) == '\0') {
      uVar6 = 4;
    }
    else {
      uVar6 = 0x11;
    }
    FUN_005f1470(uVar6,0x3e4ccccd);
    local_d0 = 0;
    local_cc = 0;
    local_c8 = 0x3f800000;
    local_c4 = 0x3f800000;
    local_c0 = 0.0;
    local_bc = param_1[0x2e6];
    local_b8 = 0.0;
    local_78 = 0;
    local_7c = 0;
    local_80 = 0.0;
    local_84 = 0.0;
    local_8c = 0;
    local_90 = 0.0;
    local_94 = 0.0;
    local_98 = 0.0;
    local_a0 = 0;
    local_a4 = 0;
    local_a8 = 0;
    local_ac = 0;
    local_54 = 0;
    local_b4 = 0x3f800000;
    local_74 = 0x3f800000;
    local_88 = 1.0;
    local_9c = 0x3f800000;
    local_b0 = 0x3f800000;
    local_60 = 0x3f800000;
    local_5c = 0x3f800000;
    local_58 = 0x3f800000;
    piVar2 = (int *)(**(code **)(*param_1 + 0x68))();
    thunk_FUN_00ddc1d0(&local_b0,&local_c0,5);
    FUN_00ddd140(auStack_50,&local_60);
    D3DXMatrixMultiply(&local_b0,auStack_50,&local_b0);
    local_8c = *piVar2;
    local_88 = (float)piVar2[1];
    local_84 = (float)piVar2[2];
    D3DXVec3TransformNormal(&local_7c,&stack0xffffff24,&local_bc);
    local_98 = local_98 + local_88;
    local_94 = local_84 + local_94;
    local_90 = local_80 + local_90;
    param_1[0x238] = (int)local_98;
    param_1[0x239] = (int)local_94;
    param_1[0x23a] = (int)local_90;
    param_1[0x23b] = local_8c;
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8e880(param_1 + 0x238);
    (**(code **)(*param_1 + 0x308))(0x3f333333,0x3bab92a6,0x3d567750,0);
    break;
  case 5:
    FUN_00a8e880(param_1 + 0x238);
    (**(code **)(*param_1 + 0x308))(0x3f333333,0x3bab92a6,0x3d567750,0);
    iVar3 = FUN_005f12a0();
    if (iVar3 == 0) {
      FUN_009fdde0();
    }
    break;
  case 6:
  case 8:
    FUN_005f1470(0xf,0x3e4ccccd);
    FUN_00a96070(0,0x8000000,1);
    param_1[0x187] = param_1[0x187] + 1;
    break;
  case 7:
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_005f1470(0x10,0x3e4ccccd);
      param_1[0x187] = param_1[0x255];
    }
    break;
  case 9:
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_005f1470(0x11,0x3e4ccccd);
      param_1[0x187] = 5;
    }
  }
  if (param_1[0x253] < 3) {
    piVar2 = (int *)FUN_00c13920();
    iVar3 = (**(code **)(*piVar2 + 0x28))(0xffffffff);
    if ((iVar3 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
      puVar7 = &DAT_01be9db8;
      (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
      iVar3 = FUN_00dd6d80(puVar7);
      if (iVar3 != 0) {
        piVar2[0x14fa] = 0;
      }
    }
  }
  return;
}

// 005F2E90  Pl0800::vf32C  size=3305  [class]
undefined4 __fastcall Pl0800::vf32C(int *param_1)

{
  uint *puVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  char *pcVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  bool bVar12;
  
  param_1[0x1a1] = 0;
  if ((param_1[0x21c] == 0) || (iVar4 = FUN_00a8ef10(), iVar4 == 1)) {
    return 0;
  }
  FUN_00ac2080(0);
  piVar9 = (int *)param_1[0x19f];
  piVar10 = piVar9 + param_1[0x1a1] * 0x54;
  for (; piVar9 != piVar10; piVar9 = piVar9 + 0x54) {
    iVar4 = *piVar9;
    if ((((iVar4 != 0) && (iVar4 != 1)) && (iVar4 != 2)) && ((iVar4 != 0x1b0 && (iVar4 != 0x147))))
    {
      if (piVar9[5] == 0) goto LAB_005f3b83;
      iVar4 = FUN_00a7c8a0();
      uVar3 = *(undefined4 *)(iVar4 + 0x4b0);
      iVar4 = FUN_009f9350(uVar3);
      if (iVar4 == 0) {
        iVar4 = FUN_009f93b0(uVar3);
        if ((iVar4 == 0) || (*piVar9 == 0x9e)) goto LAB_005f3b83;
        goto LAB_005f3b7c;
      }
      if ((*piVar9 != 0x60) &&
         (((piVar9[0x23] & 0x40000000U) != 0 && ((piVar9[0x23] & 0x10000000U) == 0)))) {
        iVar4 = param_1[0x128];
        if (iVar4 != 0) {
          if (iVar4 == 1) {
            if (*(char *)((int)param_1 + 0xdc1) == '\0') {
              iVar4 = 0;
              if ((char)param_1[0x370] == '\x01') {
                if (0 < (short)param_1[0xc9]) {
                  iVar11 = 0;
                  do {
                    pbVar5 = *(byte **)(*(int *)(iVar11 + 0x60 + param_1[200]) + 0x40);
                    if (pbVar5 != (byte *)0x0) {
                      pbVar7 = &DAT_01645594;
                      do {
                        bVar2 = *pbVar5;
                        bVar12 = bVar2 < *pbVar7;
                        if (bVar2 != *pbVar7) {
LAB_005f33a0:
                          iVar6 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                          goto LAB_005f33a5;
                        }
                        if (bVar2 == 0) break;
                        bVar2 = pbVar5[1];
                        bVar12 = bVar2 < pbVar7[1];
                        if (bVar2 != pbVar7[1]) goto LAB_005f33a0;
                        pbVar5 = pbVar5 + 2;
                        pbVar7 = pbVar7 + 2;
                      } while (bVar2 != 0);
                      iVar6 = 0;
LAB_005f33a5:
                      if (iVar6 == 0) {
                        puVar1 = (uint *)(iVar11 + param_1[200] + 0x38);
                        *puVar1 = *puVar1 & 0xfffffffe;
                      }
                    }
                    iVar4 = iVar4 + 1;
                    iVar11 = iVar11 + 0x70;
                  } while (iVar4 < (short)param_1[0xc9]);
                }
                iVar4 = 0;
                if (0 < (short)param_1[0xc9]) {
                  iVar11 = 0;
                  do {
                    pbVar5 = *(byte **)(*(int *)(iVar11 + 0x60 + param_1[200]) + 0x40);
                    if (pbVar5 != (byte *)0x0) {
                      pbVar7 = &DAT_01645588;
                      do {
                        bVar2 = *pbVar5;
                        bVar12 = bVar2 < *pbVar7;
                        if (bVar2 != *pbVar7) {
LAB_005f3410:
                          iVar6 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                          goto LAB_005f3415;
                        }
                        if (bVar2 == 0) break;
                        bVar2 = pbVar5[1];
                        bVar12 = bVar2 < pbVar7[1];
                        if (bVar2 != pbVar7[1]) goto LAB_005f3410;
                        pbVar5 = pbVar5 + 2;
                        pbVar7 = pbVar7 + 2;
                      } while (bVar2 != 0);
                      iVar6 = 0;
LAB_005f3415:
                      if (iVar6 == 0) {
                        puVar1 = (uint *)(iVar11 + param_1[200] + 0x38);
                        *puVar1 = *puVar1 & 0xfffffffe;
                      }
                    }
                    iVar4 = iVar4 + 1;
                    iVar11 = iVar11 + 0x70;
                  } while (iVar4 < (short)param_1[0xc9]);
                }
                iVar4 = 0;
                if (0 < (short)param_1[0xc9]) {
                  iVar11 = 0;
                  do {
                    pbVar5 = *(byte **)(*(int *)(iVar11 + 0x60 + param_1[200]) + 0x40);
                    if (pbVar5 != (byte *)0x0) {
                      pbVar7 = &DAT_01640b88;
                      do {
                        bVar2 = *pbVar5;
                        bVar12 = bVar2 < *pbVar7;
                        if (bVar2 != *pbVar7) {
LAB_005f3480:
                          iVar6 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                          goto LAB_005f3485;
                        }
                        if (bVar2 == 0) break;
                        bVar2 = pbVar5[1];
                        bVar12 = bVar2 < pbVar7[1];
                        if (bVar2 != pbVar7[1]) goto LAB_005f3480;
                        pbVar5 = pbVar5 + 2;
                        pbVar7 = pbVar7 + 2;
                      } while (bVar2 != 0);
                      iVar6 = 0;
LAB_005f3485:
                      if (iVar6 == 0) {
                        puVar1 = (uint *)(iVar11 + param_1[200] + 0x38);
                        *puVar1 = *puVar1 & 0xfffffffe;
                      }
                    }
                    iVar4 = iVar4 + 1;
                    iVar11 = iVar11 + 0x70;
                  } while (iVar4 < (short)param_1[0xc9]);
                }
                iVar4 = 0;
                if (0 < (short)param_1[0xc9]) {
                  iVar11 = 0;
                  do {
                    pbVar5 = *(byte **)(*(int *)(iVar11 + 0x60 + param_1[200]) + 0x40);
                    if (pbVar5 != (byte *)0x0) {
                      pbVar7 = &DAT_01645514;
                      do {
                        bVar2 = *pbVar5;
                        bVar12 = bVar2 < *pbVar7;
                        if (bVar2 != *pbVar7) {
LAB_005f34f0:
                          iVar6 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                          goto LAB_005f34f5;
                        }
                        if (bVar2 == 0) break;
                        bVar2 = pbVar5[1];
                        bVar12 = bVar2 < pbVar7[1];
                        if (bVar2 != pbVar7[1]) goto LAB_005f34f0;
                        pbVar5 = pbVar5 + 2;
                        pbVar7 = pbVar7 + 2;
                      } while (bVar2 != 0);
                      iVar6 = 0;
LAB_005f34f5:
                      if (iVar6 == 0) {
                        puVar1 = (uint *)(iVar11 + param_1[200] + 0x38);
                        *puVar1 = *puVar1 & 0xfffffffe;
                      }
                    }
                    iVar4 = iVar4 + 1;
                    iVar11 = iVar11 + 0x70;
                  } while (iVar4 < (short)param_1[0xc9]);
                }
                iVar4 = 0;
                if (0 < (short)param_1[0xc9]) {
                  iVar11 = 0;
                  do {
                    pbVar5 = *(byte **)(*(int *)(iVar11 + 0x60 + param_1[200]) + 0x40);
                    if (pbVar5 != (byte *)0x0) {
                      pbVar7 = &DAT_01645500;
                      do {
                        bVar2 = *pbVar5;
                        bVar12 = bVar2 < *pbVar7;
                        if (bVar2 != *pbVar7) {
LAB_005f3560:
                          iVar6 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                          goto LAB_005f3565;
                        }
                        if (bVar2 == 0) break;
                        bVar2 = pbVar5[1];
                        bVar12 = bVar2 < pbVar7[1];
                        if (bVar2 != pbVar7[1]) goto LAB_005f3560;
                        pbVar5 = pbVar5 + 2;
                        pbVar7 = pbVar7 + 2;
                      } while (bVar2 != 0);
                      iVar6 = 0;
LAB_005f3565:
                      if (iVar6 == 0) {
                        puVar1 = (uint *)(iVar11 + param_1[200] + 0x38);
                        *puVar1 = *puVar1 | 1;
                      }
                    }
                    iVar4 = iVar4 + 1;
                    iVar11 = iVar11 + 0x70;
                  } while (iVar4 < (short)param_1[0xc9]);
                }
                iVar4 = 0;
                if (0 < (short)param_1[0xc9]) {
                  iVar11 = 0;
                  do {
                    pbVar5 = *(byte **)(*(int *)(iVar11 + 0x60 + param_1[200]) + 0x40);
                    if (pbVar5 != (byte *)0x0) {
                      pcVar8 = "skin_in";
                      do {
                        bVar2 = *pbVar5;
                        bVar12 = bVar2 < (byte)*pcVar8;
                        if (bVar2 != *pcVar8) {
LAB_005f35d0:
                          iVar6 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                          goto LAB_005f35d5;
                        }
                        if (bVar2 == 0) break;
                        bVar2 = pbVar5[1];
                        bVar12 = bVar2 < (byte)pcVar8[1];
                        if (bVar2 != pcVar8[1]) goto LAB_005f35d0;
                        pbVar5 = pbVar5 + 2;
                        pcVar8 = pcVar8 + 2;
                      } while (bVar2 != 0);
                      iVar6 = 0;
LAB_005f35d5:
                      if (iVar6 == 0) {
                        puVar1 = (uint *)(iVar11 + param_1[200] + 0x38);
                        *puVar1 = *puVar1 | 1;
                      }
                    }
                    iVar4 = iVar4 + 1;
                    iVar11 = iVar11 + 0x70;
                  } while (iVar4 < (short)param_1[0xc9]);
                }
                iVar4 = 0;
                if (0 < (short)param_1[0xc9]) {
                  iVar11 = 0;
                  do {
                    pbVar5 = *(byte **)(*(int *)(iVar11 + 0x60 + param_1[200]) + 0x40);
                    if (pbVar5 != (byte *)0x0) {
                      pbVar7 = &DAT_016454c0;
                      do {
                        bVar2 = *pbVar5;
                        bVar12 = bVar2 < *pbVar7;
                        if (bVar2 != *pbVar7) {
LAB_005f3640:
                          iVar6 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                          goto LAB_005f3645;
                        }
                        if (bVar2 == 0) break;
                        bVar2 = pbVar5[1];
                        bVar12 = bVar2 < pbVar7[1];
                        if (bVar2 != pbVar7[1]) goto LAB_005f3640;
                        pbVar5 = pbVar5 + 2;
                        pbVar7 = pbVar7 + 2;
                      } while (bVar2 != 0);
                      iVar6 = 0;
LAB_005f3645:
                      if (iVar6 == 0) {
                        puVar1 = (uint *)(iVar11 + param_1[200] + 0x38);
                        *puVar1 = *puVar1 | 1;
                      }
                    }
                    iVar4 = iVar4 + 1;
                    iVar11 = iVar11 + 0x70;
                  } while (iVar4 < (short)param_1[0xc9]);
                }
                *(undefined1 *)((int)param_1 + 0xdc1) = 1;
                FUN_00aa92c0(1);
                FUN_00a8caf0(0xd,0,0,0);
              }
              else {
                if (0 < (short)param_1[0xc9]) {
                  iVar11 = 0;
                  do {
                    pbVar5 = *(byte **)(*(int *)(iVar11 + 0x60 + param_1[200]) + 0x40);
                    if (pbVar5 != (byte *)0x0) {
                      pbVar7 = &DAT_01640b88;
                      do {
                        bVar2 = *pbVar5;
                        bVar12 = bVar2 < *pbVar7;
                        if (bVar2 != *pbVar7) {
LAB_005f36d0:
                          iVar6 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                          goto LAB_005f36d5;
                        }
                        if (bVar2 == 0) break;
                        bVar2 = pbVar5[1];
                        bVar12 = bVar2 < pbVar7[1];
                        if (bVar2 != pbVar7[1]) goto LAB_005f36d0;
                        pbVar5 = pbVar5 + 2;
                        pbVar7 = pbVar7 + 2;
                      } while (bVar2 != 0);
                      iVar6 = 0;
LAB_005f36d5:
                      if (iVar6 == 0) {
                        puVar1 = (uint *)(iVar11 + param_1[200] + 0x38);
                        *puVar1 = *puVar1 | 1;
                      }
                    }
                    iVar4 = iVar4 + 1;
                    iVar11 = iVar11 + 0x70;
                  } while (iVar4 < (short)param_1[0xc9]);
                }
                iVar4 = 0;
                if (0 < (short)param_1[0xc9]) {
                  iVar11 = 0;
                  do {
                    pbVar5 = *(byte **)(*(int *)(iVar11 + 0x60 + param_1[200]) + 0x40);
                    if (pbVar5 != (byte *)0x0) {
                      pbVar7 = &DAT_01645514;
                      do {
                        bVar2 = *pbVar5;
                        bVar12 = bVar2 < *pbVar7;
                        if (bVar2 != *pbVar7) {
LAB_005f3740:
                          iVar6 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                          goto LAB_005f3745;
                        }
                        if (bVar2 == 0) break;
                        bVar2 = pbVar5[1];
                        bVar12 = bVar2 < pbVar7[1];
                        if (bVar2 != pbVar7[1]) goto LAB_005f3740;
                        pbVar5 = pbVar5 + 2;
                        pbVar7 = pbVar7 + 2;
                      } while (bVar2 != 0);
                      iVar6 = 0;
LAB_005f3745:
                      if (iVar6 == 0) {
                        puVar1 = (uint *)(iVar11 + param_1[200] + 0x38);
                        *puVar1 = *puVar1 | 1;
                      }
                    }
                    iVar4 = iVar4 + 1;
                    iVar11 = iVar11 + 0x70;
                  } while (iVar4 < (short)param_1[0xc9]);
                }
                iVar4 = 0;
                if (0 < (short)param_1[0xc9]) {
                  iVar11 = 0;
                  do {
                    pbVar5 = *(byte **)(*(int *)(iVar11 + 0x60 + param_1[200]) + 0x40);
                    if (pbVar5 != (byte *)0x0) {
                      pbVar7 = &DAT_01645500;
                      do {
                        bVar2 = *pbVar5;
                        bVar12 = bVar2 < *pbVar7;
                        if (bVar2 != *pbVar7) {
LAB_005f37b0:
                          iVar6 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                          goto LAB_005f37b5;
                        }
                        if (bVar2 == 0) break;
                        bVar2 = pbVar5[1];
                        bVar12 = bVar2 < pbVar7[1];
                        if (bVar2 != pbVar7[1]) goto LAB_005f37b0;
                        pbVar5 = pbVar5 + 2;
                        pbVar7 = pbVar7 + 2;
                      } while (bVar2 != 0);
                      iVar6 = 0;
LAB_005f37b5:
                      if (iVar6 == 0) {
                        puVar1 = (uint *)(iVar11 + param_1[200] + 0x38);
                        *puVar1 = *puVar1 | 1;
                      }
                    }
                    iVar4 = iVar4 + 1;
                    iVar11 = iVar11 + 0x70;
                  } while (iVar4 < (short)param_1[0xc9]);
                }
                iVar4 = 0;
                if (0 < (short)param_1[0xc9]) {
                  iVar11 = 0;
                  do {
                    pbVar5 = *(byte **)(*(int *)(param_1[200] + 0x60 + iVar11) + 0x40);
                    if (pbVar5 != (byte *)0x0) {
                      pbVar7 = &DAT_016454c0;
                      do {
                        bVar2 = *pbVar5;
                        bVar12 = bVar2 < *pbVar7;
                        if (bVar2 != *pbVar7) {
LAB_005f3816:
                          iVar6 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                          goto LAB_005f381b;
                        }
                        if (bVar2 == 0) break;
                        bVar2 = pbVar5[1];
                        bVar12 = bVar2 < pbVar7[1];
                        if (bVar2 != pbVar7[1]) goto LAB_005f3816;
                        pbVar5 = pbVar5 + 2;
                        pbVar7 = pbVar7 + 2;
                      } while (bVar2 != 0);
                      iVar6 = 0;
LAB_005f381b:
                      if (iVar6 == 0) {
                        puVar1 = (uint *)(param_1[200] + 0x38 + iVar11);
                        *puVar1 = *puVar1 | 1;
                      }
                    }
                    iVar4 = iVar4 + 1;
                    iVar11 = iVar11 + 0x70;
                  } while (iVar4 < (short)param_1[0xc9]);
                }
                *(undefined1 *)(param_1 + 0x370) = 1;
                FUN_00a8caf0(0xb,0,0,0);
              }
            }
          }
          else if (iVar4 == 2) {
            if ((param_1[300] == 0x10800) || (param_1[300] == 0x10801)) {
              iVar4 = 0;
              if (0 < (short)param_1[0xc9]) {
                iVar11 = 0;
                do {
                  pbVar5 = *(byte **)(*(int *)(param_1[200] + 0x60 + iVar11) + 0x40);
                  if (pbVar5 != (byte *)0x0) {
                    pbVar7 = &DAT_01640b88;
                    do {
                      bVar2 = *pbVar5;
                      bVar12 = bVar2 < *pbVar7;
                      if (bVar2 != *pbVar7) {
LAB_005f3996:
                        iVar6 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                        goto LAB_005f399b;
                      }
                      if (bVar2 == 0) break;
                      bVar2 = pbVar5[1];
                      bVar12 = bVar2 < pbVar7[1];
                      if (bVar2 != pbVar7[1]) goto LAB_005f3996;
                      pbVar5 = pbVar5 + 2;
                      pbVar7 = pbVar7 + 2;
                    } while (bVar2 != 0);
                    iVar6 = 0;
LAB_005f399b:
                    if (iVar6 == 0) {
                      puVar1 = (uint *)(param_1[200] + 0x38 + iVar11);
                      *puVar1 = *puVar1 & 0xfffffffe;
                    }
                  }
                  iVar4 = iVar4 + 1;
                  iVar11 = iVar11 + 0x70;
                } while (iVar4 < (short)param_1[0xc9]);
              }
              iVar4 = 0;
              if (0 < (short)param_1[0xc9]) {
                iVar11 = 0;
                do {
                  pbVar5 = *(byte **)(*(int *)(param_1[200] + 0x60 + iVar11) + 0x40);
                  if (pbVar5 != (byte *)0x0) {
                    pbVar7 = &DAT_01645514;
                    do {
                      bVar2 = *pbVar5;
                      bVar12 = bVar2 < *pbVar7;
                      if (bVar2 != *pbVar7) {
LAB_005f39f8:
                        iVar6 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                        goto LAB_005f39fd;
                      }
                      if (bVar2 == 0) break;
                      bVar2 = pbVar5[1];
                      bVar12 = bVar2 < pbVar7[1];
                      if (bVar2 != pbVar7[1]) goto LAB_005f39f8;
                      pbVar5 = pbVar5 + 2;
                      pbVar7 = pbVar7 + 2;
                    } while (bVar2 != 0);
                    iVar6 = 0;
LAB_005f39fd:
                    if (iVar6 == 0) {
                      puVar1 = (uint *)(param_1[200] + 0x38 + iVar11);
                      *puVar1 = *puVar1 & 0xfffffffe;
                    }
                  }
                  iVar4 = iVar4 + 1;
                  iVar11 = iVar11 + 0x70;
                } while (iVar4 < (short)param_1[0xc9]);
              }
              iVar4 = 0;
              if (0 < (short)param_1[0xc9]) {
                iVar11 = 0;
                do {
                  pbVar5 = *(byte **)(*(int *)(param_1[200] + 0x60 + iVar11) + 0x40);
                  if (pbVar5 != (byte *)0x0) {
                    pcVar8 = "skin_in";
                    do {
                      bVar2 = *pbVar5;
                      bVar12 = bVar2 < (byte)*pcVar8;
                      if (bVar2 != *pcVar8) {
LAB_005f3a70:
                        iVar6 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                        goto LAB_005f3a75;
                      }
                      if (bVar2 == 0) break;
                      bVar2 = pbVar5[1];
                      bVar12 = bVar2 < (byte)pcVar8[1];
                      if (bVar2 != pcVar8[1]) goto LAB_005f3a70;
                      pbVar5 = pbVar5 + 2;
                      pcVar8 = pcVar8 + 2;
                    } while (bVar2 != 0);
                    iVar6 = 0;
LAB_005f3a75:
                    if (iVar6 == 0) {
                      puVar1 = (uint *)(param_1[200] + iVar11 + 0x38);
                      *puVar1 = *puVar1 | 1;
                    }
                  }
                  iVar4 = iVar4 + 1;
                  iVar11 = iVar11 + 0x70;
                } while (iVar4 < (short)param_1[0xc9]);
              }
              iVar4 = 0;
              if (0 < (short)param_1[0xc9]) {
                iVar11 = 0;
                do {
                  pbVar5 = *(byte **)(*(int *)(param_1[200] + 0x60 + iVar11) + 0x40);
                  if (pbVar5 != (byte *)0x0) {
                    pbVar7 = &DAT_016454c0;
                    do {
                      bVar2 = *pbVar5;
                      bVar12 = bVar2 < *pbVar7;
                      if (bVar2 != *pbVar7) {
LAB_005f3ad6:
                        iVar6 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                        goto LAB_005f3adb;
                      }
                      if (bVar2 == 0) break;
                      bVar2 = pbVar5[1];
                      bVar12 = bVar2 < pbVar7[1];
                      if (bVar2 != pbVar7[1]) goto LAB_005f3ad6;
                      pbVar5 = pbVar5 + 2;
                      pbVar7 = pbVar7 + 2;
                    } while (bVar2 != 0);
                    iVar6 = 0;
LAB_005f3adb:
                    if (iVar6 == 0) {
                      puVar1 = (uint *)(param_1[200] + 0x38 + iVar11);
                      *puVar1 = *puVar1 | 1;
                    }
                  }
                  iVar4 = iVar4 + 1;
                  iVar11 = iVar11 + 0x70;
                } while (iVar4 < (short)param_1[0xc9]);
              }
            }
            else {
              iVar4 = 0;
              if (0 < (short)param_1[0xc9]) {
                iVar11 = 0;
                do {
                  pbVar5 = *(byte **)(*(int *)(param_1[200] + 0x60 + iVar11) + 0x40);
                  if (pbVar5 != (byte *)0x0) {
                    pbVar7 = &DAT_0164551c;
                    do {
                      bVar2 = *pbVar5;
                      bVar12 = bVar2 < *pbVar7;
                      if (bVar2 != *pbVar7) {
LAB_005f38b8:
                        iVar6 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                        goto LAB_005f38bd;
                      }
                      if (bVar2 == 0) break;
                      bVar2 = pbVar5[1];
                      bVar12 = bVar2 < pbVar7[1];
                      if (bVar2 != pbVar7[1]) goto LAB_005f38b8;
                      pbVar5 = pbVar5 + 2;
                      pbVar7 = pbVar7 + 2;
                    } while (bVar2 != 0);
                    iVar6 = 0;
LAB_005f38bd:
                    if (iVar6 == 0) {
                      puVar1 = (uint *)(param_1[200] + 0x38 + iVar11);
                      *puVar1 = *puVar1 & 0xfffffffe;
                    }
                  }
                  iVar4 = iVar4 + 1;
                  iVar11 = iVar11 + 0x70;
                } while (iVar4 < (short)param_1[0xc9]);
              }
              iVar4 = 0;
              if (0 < (short)param_1[0xc9]) {
                iVar11 = 0;
                do {
                  pbVar5 = *(byte **)(*(int *)(param_1[200] + 0x60 + iVar11) + 0x40);
                  if (pbVar5 != (byte *)0x0) {
                    pcVar8 = "skin_in";
                    do {
                      bVar2 = *pbVar5;
                      bVar12 = bVar2 < (byte)*pcVar8;
                      if (bVar2 != *pcVar8) {
LAB_005f3930:
                        iVar6 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                        goto LAB_005f3935;
                      }
                      if (bVar2 == 0) break;
                      bVar2 = pbVar5[1];
                      bVar12 = bVar2 < (byte)pcVar8[1];
                      if (bVar2 != pcVar8[1]) goto LAB_005f3930;
                      pbVar5 = pbVar5 + 2;
                      pcVar8 = pcVar8 + 2;
                    } while (bVar2 != 0);
                    iVar6 = 0;
LAB_005f3935:
                    if (iVar6 == 0) {
                      puVar1 = (uint *)(param_1[200] + iVar11 + 0x38);
                      *puVar1 = *puVar1 | 1;
                    }
                  }
                  iVar4 = iVar4 + 1;
                  iVar11 = iVar11 + 0x70;
                } while (iVar4 < (short)param_1[0xc9]);
              }
            }
            if (*(char *)((int)param_1 + 0xdc1) == '\0') {
              *(undefined1 *)((int)param_1 + 0xdc1) = 1;
              FUN_00aa92c0(1);
              iVar4 = FUN_00932720();
              if (iVar4 != 0x92) {
                FUN_00a5f4e0(param_1[0x13c],param_1[0x2e7],(int)*(short *)((int)param_1 + 0xab2),
                             (int)(short)param_1[0x2ad]);
                FUN_0094f090(0x10101010);
              }
              FUN_00e5e0c0("pl0800_se_foot_shoeless",param_1,0xffffffff,0);
            }
          }
          goto LAB_005f3b83;
        }
        iVar4 = FUN_00a8cab0();
        if (iVar4 == 8) {
          if ((param_1[300] == 0x10800) || (param_1[300] == 0x10801)) {
            iVar4 = 0;
            if (0 < (short)param_1[0xc9]) {
              iVar11 = 0;
              do {
                pbVar5 = *(byte **)(*(int *)(iVar11 + 0x60 + param_1[200]) + 0x40);
                if (pbVar5 != (byte *)0x0) {
                  pbVar7 = &DAT_01640b88;
                  do {
                    bVar2 = *pbVar5;
                    bVar12 = bVar2 < *pbVar7;
                    if (bVar2 != *pbVar7) {
LAB_005f3130:
                      iVar6 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                      goto LAB_005f3135;
                    }
                    if (bVar2 == 0) break;
                    bVar2 = pbVar5[1];
                    bVar12 = bVar2 < pbVar7[1];
                    if (bVar2 != pbVar7[1]) goto LAB_005f3130;
                    pbVar5 = pbVar5 + 2;
                    pbVar7 = pbVar7 + 2;
                  } while (bVar2 != 0);
                  iVar6 = 0;
LAB_005f3135:
                  if (iVar6 == 0) {
                    puVar1 = (uint *)(iVar11 + param_1[200] + 0x38);
                    *puVar1 = *puVar1 & 0xfffffffe;
                  }
                }
                iVar4 = iVar4 + 1;
                iVar11 = iVar11 + 0x70;
              } while (iVar4 < (short)param_1[0xc9]);
            }
            iVar4 = 0;
            if (0 < (short)param_1[0xc9]) {
              iVar11 = 0;
              do {
                pbVar5 = *(byte **)(*(int *)(iVar11 + 0x60 + param_1[200]) + 0x40);
                if (pbVar5 != (byte *)0x0) {
                  pbVar7 = &DAT_01645514;
                  do {
                    bVar2 = *pbVar5;
                    bVar12 = bVar2 < *pbVar7;
                    if (bVar2 != *pbVar7) {
LAB_005f31a0:
                      iVar6 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                      goto LAB_005f31a5;
                    }
                    if (bVar2 == 0) break;
                    bVar2 = pbVar5[1];
                    bVar12 = bVar2 < pbVar7[1];
                    if (bVar2 != pbVar7[1]) goto LAB_005f31a0;
                    pbVar5 = pbVar5 + 2;
                    pbVar7 = pbVar7 + 2;
                  } while (bVar2 != 0);
                  iVar6 = 0;
LAB_005f31a5:
                  if (iVar6 == 0) {
                    puVar1 = (uint *)(iVar11 + param_1[200] + 0x38);
                    *puVar1 = *puVar1 & 0xfffffffe;
                  }
                }
                iVar4 = iVar4 + 1;
                iVar11 = iVar11 + 0x70;
              } while (iVar4 < (short)param_1[0xc9]);
            }
            iVar4 = 0;
            if (0 < (short)param_1[0xc9]) {
              iVar11 = 0;
              do {
                pbVar5 = *(byte **)(*(int *)(iVar11 + 0x60 + param_1[200]) + 0x40);
                if (pbVar5 != (byte *)0x0) {
                  pcVar8 = "skin_in";
                  do {
                    bVar2 = *pbVar5;
                    bVar12 = bVar2 < (byte)*pcVar8;
                    if (bVar2 != *pcVar8) {
LAB_005f3210:
                      iVar6 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                      goto LAB_005f3215;
                    }
                    if (bVar2 == 0) break;
                    bVar2 = pbVar5[1];
                    bVar12 = bVar2 < (byte)pcVar8[1];
                    if (bVar2 != pcVar8[1]) goto LAB_005f3210;
                    pbVar5 = pbVar5 + 2;
                    pcVar8 = pcVar8 + 2;
                  } while (bVar2 != 0);
                  iVar6 = 0;
LAB_005f3215:
                  if (iVar6 == 0) {
                    puVar1 = (uint *)(iVar11 + param_1[200] + 0x38);
                    *puVar1 = *puVar1 | 1;
                  }
                }
                iVar4 = iVar4 + 1;
                iVar11 = iVar11 + 0x70;
              } while (iVar4 < (short)param_1[0xc9]);
            }
            iVar4 = 0;
            if (0 < (short)param_1[0xc9]) {
              iVar11 = 0;
              do {
                pbVar5 = *(byte **)(*(int *)(iVar11 + 0x60 + param_1[200]) + 0x40);
                if (pbVar5 != (byte *)0x0) {
                  pbVar7 = &DAT_016454c0;
                  do {
                    bVar2 = *pbVar5;
                    bVar12 = bVar2 < *pbVar7;
                    if (bVar2 != *pbVar7) {
LAB_005f3280:
                      iVar6 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                      goto LAB_005f3285;
                    }
                    if (bVar2 == 0) break;
                    bVar2 = pbVar5[1];
                    bVar12 = bVar2 < pbVar7[1];
                    if (bVar2 != pbVar7[1]) goto LAB_005f3280;
                    pbVar5 = pbVar5 + 2;
                    pbVar7 = pbVar7 + 2;
                  } while (bVar2 != 0);
                  iVar6 = 0;
LAB_005f3285:
                  if (iVar6 == 0) {
                    puVar1 = (uint *)(iVar11 + param_1[200] + 0x38);
                    *puVar1 = *puVar1 | 1;
                  }
                }
                iVar4 = iVar4 + 1;
                iVar11 = iVar11 + 0x70;
              } while (iVar4 < (short)param_1[0xc9]);
            }
          }
          else {
            iVar4 = 0;
            if (0 < (short)param_1[0xc9]) {
              iVar11 = 0;
              do {
                pbVar5 = *(byte **)(*(int *)(iVar11 + 0x60 + param_1[200]) + 0x40);
                if (pbVar5 != (byte *)0x0) {
                  pbVar7 = &DAT_0164551c;
                  do {
                    bVar2 = *pbVar5;
                    bVar12 = bVar2 < *pbVar7;
                    if (bVar2 != *pbVar7) {
LAB_005f3050:
                      iVar6 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                      goto LAB_005f3055;
                    }
                    if (bVar2 == 0) break;
                    bVar2 = pbVar5[1];
                    bVar12 = bVar2 < pbVar7[1];
                    if (bVar2 != pbVar7[1]) goto LAB_005f3050;
                    pbVar5 = pbVar5 + 2;
                    pbVar7 = pbVar7 + 2;
                  } while (bVar2 != 0);
                  iVar6 = 0;
LAB_005f3055:
                  if (iVar6 == 0) {
                    puVar1 = (uint *)(iVar11 + param_1[200] + 0x38);
                    *puVar1 = *puVar1 & 0xfffffffe;
                  }
                }
                iVar4 = iVar4 + 1;
                iVar11 = iVar11 + 0x70;
              } while (iVar4 < (short)param_1[0xc9]);
            }
            iVar4 = 0;
            if (0 < (short)param_1[0xc9]) {
              iVar11 = 0;
              do {
                pbVar5 = *(byte **)(*(int *)(iVar11 + 0x60 + param_1[200]) + 0x40);
                if (pbVar5 != (byte *)0x0) {
                  pcVar8 = "skin_in";
                  do {
                    bVar2 = *pbVar5;
                    bVar12 = bVar2 < (byte)*pcVar8;
                    if (bVar2 != *pcVar8) {
LAB_005f30c0:
                      iVar6 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                      goto LAB_005f30c5;
                    }
                    if (bVar2 == 0) break;
                    bVar2 = pbVar5[1];
                    bVar12 = bVar2 < (byte)pcVar8[1];
                    if (bVar2 != pcVar8[1]) goto LAB_005f30c0;
                    pbVar5 = pbVar5 + 2;
                    pcVar8 = pcVar8 + 2;
                  } while (bVar2 != 0);
                  iVar6 = 0;
LAB_005f30c5:
                  if (iVar6 == 0) {
                    puVar1 = (uint *)(iVar11 + param_1[200] + 0x38);
                    *puVar1 = *puVar1 | 1;
                  }
                }
                iVar4 = iVar4 + 1;
                iVar11 = iVar11 + 0x70;
              } while (iVar4 < (short)param_1[0xc9]);
            }
          }
          if (*(char *)((int)param_1 + 0xdc1) == '\0') {
            *(undefined1 *)((int)param_1 + 0xdc1) = 1;
            FUN_00aa92c0(1);
            iVar4 = FUN_00932720();
            if (iVar4 != 0x92) {
              FUN_00a5f4e0(param_1[0x13c],param_1[0x2e7],(int)*(short *)((int)param_1 + 0xab2),
                           (int)(short)param_1[0x2ad]);
              FUN_0094f090(0x10101010);
            }
            FUN_00e5e0c0("pl0800_se_foot_shoeless",param_1,0xffffffff,0);
            FUN_0093b4a0("CLOTH_CUTTING",0,0);
          }
          goto LAB_005f3b83;
        }
      }
    }
  }
  FUN_00ac2080(2);
  piVar9 = (int *)param_1[0x19f];
  piVar10 = piVar9 + param_1[0x1a1] * 0x54;
  do {
    if (piVar9 == piVar10) {
      return 0;
    }
    iVar4 = *piVar9;
    if ((((iVar4 != 0) && (iVar4 != 1)) && (iVar4 != 2)) && ((iVar4 != 0x1b0 && (iVar4 != 0x147))))
    {
      if (piVar9[5] == 0) goto LAB_005f3b83;
      iVar4 = FUN_00a7c8a0();
      iVar4 = FUN_009f9350(*(undefined4 *)(iVar4 + 0x4b0));
      if (iVar4 == 0) break;
    }
    piVar9 = piVar9 + 0x54;
  } while( true );
LAB_005f3b7c:
  FUN_005f1540();
LAB_005f3b83:
  iVar4 = param_1[399];
  if ((iVar4 != 0) && (*(int *)(iVar4 + 4) != 0)) {
    *(undefined4 *)(iVar4 + 8) = 0;
  }
  (**(code **)(*param_1 + 0x220))(0x42700000);
  return 1;
}

// 005F4240  FUN_005f4240  size=88  [callgraph]
void FUN_005f4240(void)

{
  int iVar1;
  
  iVar1 = FUN_00a8cab0();
  if (iVar1 == 3) {
    lib::StaticArray<Entity*,64>::StaticArray<Entity*,64>_5();
    return;
  }
  if (iVar1 == 5) {
    FUN_005f17f0();
    return;
  }
  if (iVar1 == 7) {
    FUN_005f1ad0();
    return;
  }
  if (iVar1 == 6) {
    FUN_005f1bb0();
    return;
  }
  if (iVar1 == 8) {
    FUN_005f2760();
    return;
  }
  if (iVar1 == 9) {
    FUN_005f1c60();
    return;
  }
  return;
}

// 005F42A0  Pl0800::vf4C  size=36  [class]
void Pl0800::vf4C(void)

{
  BehaviorEmBase::vf4C();
  FUN_005f4240();
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00AAB640  Pl0800::vf04  size=6  [class]
undefined * Pl0800::vf04(void)

{
  return &DAT_01b353f0;
}

// 00AC1220  Pl0800::vf00  size=30  [class]
undefined4 __thiscall Pl0800::vf00(undefined4 param_1,byte param_2)

{
  lib::Array<Entity*>::Array<Entity*>();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}


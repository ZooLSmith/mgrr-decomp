// src/misc/E3_EnemyBoard.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0040AA70..00AB9410, 22 functions

#include "mgrr.h"
#include "E3_EnemyBoard.h"

// 0040AA70  E3_EnemyBoard::vf4C  size=29  [class]
void E3_EnemyBoard::vf4C(void)

{
  BehaviorEmBase::vf4C();
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 0040AA90  E3_EnemyBoard::vf50  size=47  [class]
void __fastcall E3_EnemyBoard::vf50(int *param_1)

{
  int iVar1;
  
  FUN_00a93170();
  BehaviorEmBase::vf50();
  iVar1 = FUN_00c81c60(0xb);
  if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0040aabb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x128))();
    return;
  }
  return;
}

// 0040AAD0  FUN_0040aad0  size=54  [between]
void __thiscall FUN_0040aad0(int param_1,undefined1 param_2)

{
  if (*(int *)(param_1 + 0xde0) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xdc8));
  }
  *(undefined1 *)(param_1 + 0xe0f) = param_2;
  if (*(int *)(param_1 + 0xde0) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xdc8));
  }
  return;
}

// 0040AB10  FUN_0040ab10  size=54  [between]
void __thiscall FUN_0040ab10(int param_1,undefined1 param_2)

{
  if (*(int *)(param_1 + 0xde0) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xdc8));
  }
  *(undefined1 *)(param_1 + 0xe10) = param_2;
  if (*(int *)(param_1 + 0xde0) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xdc8));
  }
  return;
}

// 0040AB50  FUN_0040ab50  size=93  [between]
void __thiscall FUN_0040ab50(int param_1,undefined4 param_2,undefined4 *param_3)

{
  if (*(int *)(param_1 + 0xde0) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xdc8));
  }
  *(undefined4 *)(param_1 + 0xe20) = *param_3;
  *(undefined4 *)(param_1 + 0xe24) = param_3[1];
  *(undefined4 *)(param_1 + 0xe28) = param_3[2];
  *(undefined4 *)(param_1 + 0xe2c) = param_3[3];
  *(undefined4 *)(param_1 + 0xe5c) = param_2;
  if (*(int *)(param_1 + 0xde0) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xdc8));
  }
  return;
}

// 0040ABF0  FUN_0040abf0  size=27  [between]
undefined4 __fastcall FUN_0040abf0(int param_1)

{
  if (((*(byte *)(param_1 + 0xeb0) & 2) == 0) && ((*(byte *)(param_1 + 0x4a8) & 2) == 0)) {
    return 0;
  }
  return 1;
}

// 0040AC10  E3_EnemyBoard::vf200  size=6  [class]
undefined4 E3_EnemyBoard::vf200(void)

{
  return 1;
}

// 0040AC60  FUN_0040ac60  size=502  [callgraph]
void __thiscall FUN_0040ac60(undefined2 *param_1,undefined2 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0x16);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 0x1a);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x1e) = *(undefined4 *)(param_2 + 0x1e);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x22) = *(undefined4 *)(param_2 + 0x22);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x26) = *(undefined4 *)(param_2 + 0x26);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x2a) = *(undefined4 *)(param_2 + 0x2a);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x2e) = *(undefined4 *)(param_2 + 0x2e);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x32) = *(undefined4 *)(param_2 + 0x32);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x36) = *(undefined4 *)(param_2 + 0x36);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3a) = *(undefined4 *)(param_2 + 0x3a);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x3e) = *(undefined4 *)(param_2 + 0x3e);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  puVar2 = (undefined4 *)(param_2 + 0x48);
  puVar3 = (undefined4 *)(param_1 + 0x48);
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x6a) = *(undefined4 *)(param_2 + 0x6a);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0x6e) = *(undefined4 *)(param_2 + 0x6e);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 0x72) = *(undefined4 *)(param_2 + 0x72);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_2 + 0x74);
  *(undefined4 *)(param_1 + 0x76) = *(undefined4 *)(param_2 + 0x76);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  *(undefined4 *)(param_1 + 0x7a) = *(undefined4 *)(param_2 + 0x7a);
  *(undefined1 *)(param_1 + 0x7c) = *(undefined1 *)(param_2 + 0x7c);
  *(undefined1 *)((int)param_1 + 0xf9) = *(undefined1 *)((int)param_2 + 0xf9);
  *(undefined1 *)(param_1 + 0x7d) = *(undefined1 *)(param_2 + 0x7d);
  *(undefined1 *)((int)param_1 + 0xfb) = *(undefined1 *)((int)param_2 + 0xfb);
  *(undefined4 *)(param_1 + 0x7e) = *(undefined4 *)(param_2 + 0x7e);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
  *(undefined4 *)(param_1 + 0x82) = *(undefined4 *)(param_2 + 0x82);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_2 + 0x84);
  *(undefined4 *)(param_1 + 0x86) = *(undefined4 *)(param_2 + 0x86);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x8a) = *(undefined4 *)(param_2 + 0x8a);
  return;
}

// 0040B130  FUN_0040b130  size=42  [callgraph]
uint FUN_0040b130(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  puVar2 = &DAT_01b34b50;
  (**(code **)(*param_1 + 4))(&DAT_01b34b50);
  iVar1 = FUN_00dd6d80(puVar2);
  return -(uint)(iVar1 != 0) & (uint)param_1;
}

// 0040B160  FUN_0040b160  size=42  [callgraph]
uint FUN_0040b160(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  puVar2 = &DAT_01b34b4c;
  (**(code **)(*param_1 + 4))(&DAT_01b34b4c);
  iVar1 = FUN_00dd6d80(puVar2);
  return -(uint)(iVar1 != 0) & (uint)param_1;
}

// 0040B190  FUN_0040b190  size=108  [callgraph]
void __fastcall FUN_0040b190(undefined4 *param_1)

{
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[0x13] = 0x3f800000;
  param_1[0xe] = 0x3f800000;
  param_1[9] = 0x3f800000;
  param_1[4] = 0x3f800000;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0x3f800000;
  param_1[0x1b] = 0x3f800000;
  param_1[0x1c] = 0x3f800000;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0xffffffff;
  return;
}

// 0040B270  E3_EnemyBoard::vf130  size=144  [class]
int __fastcall E3_EnemyBoard::vf130(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_00dd3500(0x110,&DAT_01b7c0b8);
  if (iVar2 != 0) {
    iVar2 = CollisionAttackData::CollisionAttackData_3();
    if (iVar2 != 0) {
      puVar1 = *(undefined4 **)(iVar2 + 8);
      puVar1[5] = *(undefined4 *)(param_1 + 0x4f0);
      uVar3 = FUN_00a7c7f0();
      FUN_00a7c960(uVar3);
      puVar1[3] = 10;
      puVar1[2] = 10;
      *(undefined2 *)(puVar1 + 0x21) = 0x4000;
      puVar1[1] = 1;
      *(undefined1 *)(puVar1 + 4) = 0;
      *puVar1 = 0x18b;
      puVar1[0x24] = puVar1[0x24] | 0x2000000;
      return iVar2;
    }
  }
  FUN_00dd5650(&DAT_0163bcd8);
  return 0;
}

// 0040B300  FUN_0040b300  size=551  [between]
void __fastcall FUN_0040b300(int param_1)

{
  uint *puVar1;
  byte bVar2;
  code *pcVar3;
  int *piVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  byte *pbVar8;
  int *piVar9;
  int *piVar10;
  bool bVar11;
  undefined *puVar12;
  
  if (*(int *)(param_1 + 0xde0) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xdc8));
  }
  piVar9 = *(int **)(param_1 + 0xdec);
  if (piVar9 != piVar9 + *(int *)(param_1 + 0xdf0)) {
    do {
      if ((*piVar9 != 0) && (piVar4 = (int *)FUN_00a7c8a0(), piVar4 != (int *)0x0)) {
        puVar12 = &DAT_01b34b50;
        (**(code **)(*piVar4 + 4))(&DAT_01b34b50);
        iVar5 = FUN_00dd6d80(puVar12);
        if ((iVar5 != 0) && ((piVar4[300] == 0xf008a && ((char)piVar4[0x2e6] == '\0')))) {
          pcVar3 = *(code **)(*piVar4 + 0x1c);
          *(undefined1 *)(piVar4 + 0x2e6) = 1;
          *(undefined1 *)((int)piVar4 + 0xb91) = 1;
          (*pcVar3)();
          iVar5 = 0;
          if (0 < (short)piVar4[0xc9]) {
            piVar10 = (int *)(piVar4[200] + 0x60);
            do {
              pbVar8 = *(byte **)(*piVar10 + 0x40);
              if (pbVar8 != (byte *)0x0) {
                pbVar6 = &DAT_0163bd1c;
                do {
                  bVar2 = *pbVar6;
                  bVar11 = bVar2 < *pbVar8;
                  if (bVar2 != *pbVar8) {
LAB_0040b3f2:
                    iVar7 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                    goto LAB_0040b3f7;
                  }
                  if (bVar2 == 0) break;
                  bVar2 = pbVar6[1];
                  bVar11 = bVar2 < pbVar8[1];
                  if (bVar2 != pbVar8[1]) goto LAB_0040b3f2;
                  pbVar6 = pbVar6 + 2;
                  pbVar8 = pbVar8 + 2;
                } while (bVar2 != 0);
                iVar7 = 0;
LAB_0040b3f7:
                if (iVar7 == 0) {
                  if ((iVar5 != -1) && (iVar5 = iVar5 * 0x70 + piVar4[200], iVar5 != 0)) {
                    puVar1 = (uint *)(iVar5 + 0x38);
                    *puVar1 = *puVar1 | 1;
                  }
                  break;
                }
              }
              iVar5 = iVar5 + 1;
              piVar10 = piVar10 + 0x1c;
            } while (iVar5 < (short)piVar4[0xc9]);
          }
          iVar5 = 0;
          if (0 < (short)piVar4[0xc9]) {
            piVar10 = (int *)(piVar4[200] + 0x60);
            do {
              pbVar8 = *(byte **)(*piVar10 + 0x40);
              if (pbVar8 != (byte *)0x0) {
                pbVar6 = &DAT_0163bd10;
                do {
                  bVar2 = *pbVar6;
                  bVar11 = bVar2 < *pbVar8;
                  if (bVar2 != *pbVar8) {
LAB_0040b466:
                    iVar7 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                    goto LAB_0040b46b;
                  }
                  if (bVar2 == 0) break;
                  bVar2 = pbVar6[1];
                  bVar11 = bVar2 < pbVar8[1];
                  if (bVar2 != pbVar8[1]) goto LAB_0040b466;
                  pbVar6 = pbVar6 + 2;
                  pbVar8 = pbVar8 + 2;
                } while (bVar2 != 0);
                iVar7 = 0;
LAB_0040b46b:
                if (iVar7 == 0) {
                  if ((iVar5 != -1) && (iVar5 = iVar5 * 0x70 + piVar4[200], iVar5 != 0)) {
                    puVar1 = (uint *)(iVar5 + 0x38);
                    *puVar1 = *puVar1 & 0xfffffffe;
                  }
                  break;
                }
              }
              iVar5 = iVar5 + 1;
              piVar10 = piVar10 + 0x1c;
            } while (iVar5 < (short)piVar4[0xc9]);
          }
          if (*(char *)(param_1 + 0xe11) == '\0') {
            *(undefined1 *)(param_1 + 0xe11) = 1;
            iVar5 = FUN_00932720();
            if (((iVar5 == 0xf12) || (iVar5 == 0xef1)) && (*(char *)(param_1 + 0xe0d) == '\x01')) {
              FUN_00d5d150(*(undefined4 *)(param_1 + 0x4f0),*(undefined4 *)(param_1 + 0xf4c),
                           (int)*(short *)(param_1 + 0xe62));
            }
            *(undefined4 *)(param_1 + 0x6bc) = 1;
          }
        }
      }
      piVar9 = piVar9 + 1;
    } while (piVar9 != (int *)(*(int *)(param_1 + 0xdec) + *(int *)(param_1 + 0xdf0) * 4));
  }
  if (*(int *)(param_1 + 0xde0) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xdc8));
  }
  return;
}

// 0040B530  E3_EnemyBoard::vf264  size=110  [class]
undefined4 __thiscall E3_EnemyBoard::vf264(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0xde0) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xdc8));
  }
  *(undefined1 *)(param_1 + 0xe0d) = 1;
  FUN_0040ac60(param_2);
  FUN_00c5e220(*(undefined4 *)(param_1 + 0x4f0));
  FUN_00aa0ba0(*(undefined4 *)(param_1 + 0xeb8),*(undefined4 *)(param_1 + 0xf4c));
  if (*(int *)(param_1 + 0xde0) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xdc8));
  }
  return 1;
}

// 0040B5A0  E3_EnemyBoard::vf370  size=324  [class]
void __fastcall E3_EnemyBoard::vf370(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  if (param_1[0x187] == 0) {
    uVar11 = 0;
    uVar9 = 0;
    uVar7 = 0;
    uVar5 = 0;
    FUN_00a7c8a0(0,0,0,0);
    FUN_00a8caf0(uVar5,uVar7,uVar9,uVar11);
    pcVar1 = *(code **)(*param_1 + 0x20);
    param_1[0x131] = param_1[0x131] | 1;
    (*pcVar1)();
    uVar5 = FUN_00de4550("ba0085_0000.mot",0);
    uVar7 = FUN_00de4550("ba0085_0000_0_seq.bxm",0);
    FUN_00a9efb0(uVar5,uVar7,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    iVar3 = param_1[0x37b];
    if (iVar3 != iVar3 + param_1[0x37c] * 4) {
      do {
        uVar12 = 0x3f800000;
        uVar10 = 0xbf800000;
        uVar8 = 0x8000000;
        uVar6 = 0x3f800000;
        uVar4 = 0;
        uVar11 = 0;
        uVar9 = 0;
        uVar7 = uVar5;
        FUN_00a7c8a0(uVar5,0,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        FUN_00a9efb0(uVar7,uVar9,uVar11,uVar4,uVar6,uVar8,uVar10,uVar12);
        iVar2 = FUN_00a7c8a0();
        *(uint *)(iVar2 + 0x4c4) = *(uint *)(iVar2 + 0x4c4) | 1;
        uVar7 = 2;
        FUN_00a7c8a0(2);
        FUN_00a92560(uVar7);
        iVar2 = FUN_00a7c8a0();
        if (*(undefined4 **)(iVar2 + 0x370) != (undefined4 *)0x0) {
          *(uint *)(iVar2 + 0x364) = *(uint *)(iVar2 + 0x364) & 0xffbfffff;
          **(undefined4 **)(iVar2 + 0x370) = 1;
        }
        iVar3 = iVar3 + 4;
      } while (iVar3 != param_1[0x37b] + param_1[0x37c] * 4);
    }
    param_1[0x187] = param_1[0x187] + 1;
  }
  return;
}

// 0040C1B0  FUN_0040c1b0  size=12  [callgraph]
undefined4 __fastcall FUN_0040c1b0(undefined4 param_1)

{
  FUN_0040b190();
  return param_1;
}

// 0040C1C0  E3_EnemyBoard::vf40  size=1494  [class]
undefined4 __fastcall E3_EnemyBoard::vf40(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 uVar5;
  undefined *puVar6;
  undefined4 uStack_94;
  undefined1 local_90 [80];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  *(undefined1 *)((int)param_1 + 0xe0d) = 0;
  iVar1 = BehaviorEmBase::vf40();
  if (iVar1 == 0) {
    return 0;
  }
  param_1[0x388] = 0;
  param_1[0x389] = 0;
  param_1[0x38a] = 0;
  param_1[0x38b] = 0x3f800000;
  param_1[0x382] = 0;
  param_1[0x397] = 0;
  param_1[0x396] = 0;
  *(undefined1 *)((int)param_1 + 0xe11) = 0;
  *(undefined1 *)((int)param_1 + 0xe0e) = 0;
  if (param_1[0x37b] != 0) {
    param_1[0x37c] = 0;
  }
  *(undefined1 *)(param_1 + 899) = 0;
  *(undefined1 *)(param_1 + 0x370) = 0;
  *(undefined2 *)((int)param_1 + 0xe0f) = 0;
  param_1[0x38c] = 0;
  param_1[0x38d] = 0;
  param_1[0x38e] = 0;
  param_1[0x390] = 0;
  param_1[0x391] = 0;
  param_1[0x392] = 0;
  param_1[0x393] = 0x3f800000;
  iVar1 = lib::StaticArray<Constraints,32>::StaticArray<Constraints,32>();
  if (iVar1 == 0) {
    return 0;
  }
  FUN_00dd7240();
  param_1[0x394] = 0x3dcccccd;
  param_1[0x381] = 0;
  param_1[0x395] = 0x40400000;
  if (param_1[0x378] != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x372));
  }
  iVar1 = param_1[0x128];
  if (iVar1 == 0) {
    FUN_0040b190();
    puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x68))();
    uStack_40 = *puVar2;
    uStack_3c = puVar2[1];
    uStack_38 = puVar2[2];
    puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x84))();
    uStack_34 = *puVar2;
    uStack_30 = puVar2[1];
    uStack_2c = puVar2[2];
    uStack_94 = FUN_00a82090("BoardEnemy",0xf0086,local_90);
    piVar3 = (int *)FUN_00a7c8a0();
    uVar4 = 0;
    if (piVar3 != (int *)0x0) {
      puVar6 = &DAT_01b34b50;
      (**(code **)(*piVar3 + 4))(&DAT_01b34b50);
      iVar1 = FUN_00dd6d80(puVar6);
      uVar4 = -(uint)(iVar1 != 0) & (uint)piVar3;
    }
    *(int *)(uVar4 + 0xb40) = param_1[0x13c];
    (**(code **)(param_1[0x37a] + 8))(&uStack_94);
    iVar1 = param_1[0x13c];
    uVar5 = 0;
  }
  else if (iVar1 == 1) {
    FUN_0040b190();
    puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x68))();
    uStack_40 = *puVar2;
    uStack_3c = puVar2[1];
    uStack_38 = puVar2[2];
    puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x84))();
    uStack_34 = *puVar2;
    uStack_30 = puVar2[1];
    uStack_2c = puVar2[2];
    uStack_94 = FUN_00a82090("BoardEnemy",0xf0087,local_90);
    uVar5 = FUN_00a7c8a0();
    iVar1 = FUN_0040b130(uVar5);
    *(int *)(iVar1 + 0xb40) = param_1[0x13c];
    (**(code **)(param_1[0x37a] + 8))(&uStack_94);
    FUN_00a8c5f0(0,param_1[0x13c],unaff_EBX,0xffffffff,0xffffffff);
    FUN_00a82090("HostageEnemy",0xf0088,&uStack_94);
    uVar5 = FUN_00a7c8a0();
    iVar1 = FUN_0040b130(uVar5);
    *(int *)(iVar1 + 0xb40) = param_1[0x13c];
    (**(code **)(param_1[0x37a] + 8))(&stack0xffffff68);
    iVar1 = param_1[0x13c];
    uVar5 = 1;
  }
  else {
    if (iVar1 != 2) goto LAB_0040c643;
    FUN_0040b190();
    puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x68))();
    uStack_40 = *puVar2;
    uStack_3c = puVar2[1];
    uStack_38 = puVar2[2];
    puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x84))();
    uStack_34 = *puVar2;
    uStack_30 = puVar2[1];
    uStack_2c = puVar2[2];
    uStack_94 = FUN_00a82090("BoardEnemy",0xf0089,local_90);
    uVar5 = FUN_00a7c8a0();
    iVar1 = FUN_0040b130(uVar5);
    *(int *)(iVar1 + 0xb40) = param_1[0x13c];
    (**(code **)(param_1[0x37a] + 8))(&uStack_94);
    FUN_00a8c5f0(0,param_1[0x13c],unaff_EBX,0xffffffff,0xffffffff);
    FUN_00a82090("HostageEnemyW",0xf008a,&uStack_94);
    uVar5 = FUN_00a7c8a0();
    iVar1 = FUN_0040b130(uVar5);
    *(int *)(iVar1 + 0xb40) = param_1[0x13c];
    (**(code **)(param_1[0x37a] + 8))(&stack0xffffff68);
    FUN_00a8c5f0(1,param_1[0x13c],unaff_ESI,0xffffffff,0xffffffff);
    FUN_00a82090("HostageEnemyW_N",0xf008a,&stack0xffffff68);
    uVar5 = FUN_00a7c8a0();
    piVar3 = (int *)FUN_0040b130(uVar5);
    piVar3[0x2d0] = param_1[0x13c];
    (**(code **)(*piVar3 + 0x20))();
    (**(code **)(param_1[0x37a] + 8))(&stack0xffffff64);
    iVar1 = param_1[0x13c];
    uVar5 = 2;
  }
  FUN_00a8c5f0(uVar5,iVar1,uStack_94,0xffffffff,0xffffffff);
LAB_0040c643:
  FUN_0040b190();
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x68))();
  uStack_40 = *puVar2;
  uStack_3c = puVar2[1];
  uStack_38 = puVar2[2];
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x84))();
  uStack_34 = *puVar2;
  uStack_30 = puVar2[1];
  uStack_2c = puVar2[2];
  iVar1 = FUN_00a82090("GroundCircle",0xf0156,local_90);
  param_1[0x381] = iVar1;
  if (param_1[0x378] != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x372));
  }
  if ((undefined4 *)param_1[0xdc] != (undefined4 *)0x0) {
    param_1[0xd9] = param_1[0xd9] & 0xffbfffff;
    *(undefined4 *)param_1[0xdc] = 1;
  }
  (**(code **)(*param_1 + 0x318))();
  FUN_00a8caf0(param_1[299],0,0,0);
  FUN_00a9e290(&DAT_0163b5f4,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  lib::AllocatedArray<Collision*>::AllocatedArray<Collision*>();
  lib::StaticArray<Collision*,250>::StaticArray<Collision*,250>(1);
  param_1[400] = 5;
  if (param_1[0x1ec] != 0) {
    FUN_008f03a0(8,1);
    FUN_008f03a0(0x20,1);
    FUN_008f03a0(0x40,1);
  }
  return 1;
}

// 0040C7A0  E3_EnemyBoard::vf44  size=81  [class]
void __fastcall E3_EnemyBoard::vf44(int param_1)

{
  int iVar1;
  
  FUN_00a92ef0();
  FUN_00a944d0();
  if (*(int *)(param_1 + 0xdec) != 0) {
    *(undefined4 *)(param_1 + 0xdf0) = 0;
  }
  FUN_00dd7270();
  iVar1 = param_1;
  FUN_00c1cf50(param_1);
  FUN_00c1d1c0(iVar1);
  if (*(int *)(param_1 + 0xe04) != 0) {
    FUN_00a805f0();
  }
  BehaviorEmBase::vf44();
  return;
}

// 0040C800  E3_EnemyBoard::vf48  size=1110  [class]
void __fastcall E3_EnemyBoard::vf48(int *param_1)

{
  uint uVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  float10 fVar12;
  float10 fVar13;
  undefined4 uVar14;
  undefined *puVar15;
  float fStack_8;
  
  if (param_1[0x378] != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x372));
  }
  BehaviorEmBase::vf48();
  if ((char)param_1[0x370] == '\0') {
    *(undefined1 *)(param_1 + 0x370) = 1;
    FUN_00932720();
    if (*(char *)((int)param_1 + 0xe0d) == '\x01') {
      FUN_00d55aa0(param_1[0x13c],param_1[0x3d3],(int)*(short *)((int)param_1 + 0xe62));
    }
    piVar6 = (int *)param_1[0x37b];
    if (piVar6 != piVar6 + param_1[0x37c]) {
      do {
        if ((*piVar6 != 0) && (piVar3 = (int *)FUN_00a7c8a0(), piVar3 != (int *)0x0)) {
          puVar15 = &DAT_01b34b50;
          (**(code **)(*piVar3 + 4))(&DAT_01b34b50);
          iVar4 = FUN_00dd6d80(puVar15);
          if ((iVar4 != 0) && ((iVar4 = FUN_0040abf0(), iVar4 == 1 && (piVar3[300] == 0xf008a)))) {
            *(undefined1 *)(piVar3 + 0x2e4) = 1;
          }
        }
        piVar6 = piVar6 + 1;
      } while (piVar6 != (int *)(param_1[0x37b] + param_1[0x37c] * 4));
    }
  }
  puVar10 = (undefined4 *)param_1[0x37b];
  if (puVar10 != puVar10 + param_1[0x37c]) {
    do {
      iVar4 = FUN_00a7c7e0();
      if (iVar4 == 0) {
        uVar1 = param_1[0x37c];
        iVar4 = param_1[0x37b];
        puVar11 = (undefined4 *)(iVar4 + uVar1 * 4);
        if ((((puVar10 != puVar11) && (iVar4 != 0)) && (uVar1 != 0)) &&
           ((uint)((int)puVar10 - iVar4 >> 2) < uVar1)) {
          for (puVar5 = puVar10; puVar5 != puVar11 + -1; puVar5 = puVar5 + 1) {
            *puVar5 = puVar5[1];
          }
          param_1[0x37c] = param_1[0x37c] + -1;
          puVar11 = puVar10;
        }
      }
      else {
        puVar11 = puVar10 + 1;
      }
      puVar10 = puVar11;
    } while (puVar11 != (undefined4 *)(param_1[0x37b] + param_1[0x37c] * 4));
  }
  if (param_1[0x186] == 0) {
    (**(code **)(*param_1 + 0x370))();
  }
  else if (param_1[0x186] == 1) {
    (**(code **)(*param_1 + 0x374))();
  }
  else {
    iVar4 = FUN_00a8cab0();
    if (iVar4 == 2) {
      if (((char)param_1[899] == '\x01') && (*(char *)((int)param_1 + 0xe11) == '\0')) {
        *(undefined1 *)((int)param_1 + 0xe11) = 1;
        iVar4 = FUN_00932720();
        if (((iVar4 == 0xf12) || (iVar4 == 0xef1)) && (*(char *)((int)param_1 + 0xe0d) == '\x01')) {
          FUN_00d5d150(param_1[0x13c],param_1[0x3d3],(int)*(short *)((int)param_1 + 0xe62));
        }
      }
      iVar4 = FUN_00a8cac0();
      if (iVar4 == 0) {
        uVar14 = 2;
        iVar7 = iVar4;
        iVar8 = iVar4;
        FUN_00a7c8a0(2,0,0,0);
        FUN_00a8caf0(uVar14,iVar4,iVar7,iVar8);
        if ((char)param_1[900] == '\x01') {
          FUN_00cbc1e0(param_1[0x397],param_1 + 0x388);
          piVar6 = (int *)FUN_00c1b9a0();
          (**(code **)(*piVar6 + 0x3c))(param_1[0x397]);
        }
        if ((DAT_018b9174 < 0xe21) && (0xe50 < DAT_018b9174)) {
          FUN_00a8c9b0(0,2,0x42700000,0);
        }
        param_1[0x187] = param_1[0x187] + 1;
      }
      else {
        iVar4 = FUN_00a8cac0();
        if (iVar4 == 1) {
          *(char *)((int)param_1 + 0xe0e) = *(char *)((int)param_1 + 0xe0e) + '\x01';
          if (10 < *(byte *)((int)param_1 + 0xe0e)) {
            param_1[0x187] = param_1[0x187] + 1;
            if ((undefined4 *)param_1[0xdc] != (undefined4 *)0x0) {
              param_1[0xd9] = param_1[0xd9] & 0xffbfffff;
              *(undefined4 *)param_1[0xdc] = 1;
            }
          }
        }
        else {
          iVar4 = FUN_00a8cac0();
          if (iVar4 == 2) {
            fVar12 = (float10)FUN_00a93060();
            fVar13 = (float10)FUN_00a92ff0();
            fVar13 = fVar13 * (float10)(float)fVar12 + (float10)(float)param_1[0x382];
            param_1[0x382] = (int)(float)fVar13;
            fVar12 = (float10)1;
            fVar13 = fVar12 - (fVar13 - fVar12);
            if (fVar12 <= fVar13) {
              fVar13 = fVar12;
            }
            fStack_8 = (float)fVar13;
            iVar7 = 0;
            iVar4 = 0;
            if (0 < (short)param_1[0xc9]) {
              do {
                *(float *)(iVar7 + 0x1c + param_1[200]) = (float)fVar13;
                iVar4 = iVar4 + 1;
                iVar7 = iVar7 + 0x70;
              } while (iVar4 < (short)param_1[0xc9]);
            }
            iVar4 = param_1[0x37b];
            if (iVar4 != iVar4 + param_1[0x37c] * 4) {
              do {
                iVar7 = FUN_00a7c8a0();
                fVar13 = (float10)fStack_8;
                iVar9 = 0;
                iVar8 = 0;
                if (0 < *(short *)(iVar7 + 0x324)) {
                  do {
                    *(float *)(iVar9 + 0x1c + *(int *)(iVar7 + 800)) = fStack_8;
                    iVar8 = iVar8 + 1;
                    iVar9 = iVar9 + 0x70;
                  } while (iVar8 < *(short *)(iVar7 + 0x324));
                }
                iVar4 = iVar4 + 4;
              } while (iVar4 != param_1[0x37b] + param_1[0x37c] * 4);
            }
            if (fVar13 <= (float10)0) {
              param_1[0x187] = param_1[0x187] + 1;
            }
          }
          else {
            iVar4 = FUN_00a8cac0();
            if (iVar4 == 3) {
              FUN_009fdde0();
              pcVar2 = *(code **)(*param_1 + 0x20);
              param_1[0x131] = param_1[0x131] | 1;
              (*pcVar2)();
              iVar4 = param_1[0x37b];
              if (iVar4 != iVar4 + param_1[0x37c] * 4) {
                do {
                  iVar7 = FUN_00a7c8a0();
                  *(uint *)(iVar7 + 0x4c4) = *(uint *)(iVar7 + 0x4c4) | 1;
                  uVar14 = 2;
                  FUN_00a7c8a0(2);
                  FUN_00a92560(uVar14);
                  FUN_00a805f0();
                  iVar4 = iVar4 + 4;
                } while (iVar4 != param_1[0x37b] + param_1[0x37c] * 4);
              }
            }
          }
        }
      }
    }
  }
  if (param_1[0x378] != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x372));
  }
  return;
}

// 0040CC60  E3_EnemyBoard::vf374  size=1127  [class]
void __fastcall E3_EnemyBoard::vf374(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  float10 fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  int *piVar14;
  undefined4 uVar15;
  undefined1 auStack_1c4 [4];
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  undefined4 uStack_1a8;
  int iStack_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  float local_17c;
  float local_178;
  float local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  
  iVar5 = param_1[0x187];
  if (iVar5 == 0) {
    uVar9 = 1;
    iVar2 = iVar5;
    iVar13 = iVar5;
    FUN_00a7c8a0(1,0,0,0);
    FUN_00a8caf0(uVar9,iVar5,iVar2,iVar13);
    piVar14 = param_1;
    FUN_00c1cf50(param_1);
    FUN_00c54720(piVar14);
    (**(code **)(*param_1 + 0x1c))();
    uVar9 = FUN_00de4550("ba0085_0100.mot",0);
    uStack_1a8 = uVar9;
    uVar1 = FUN_00de4550("ba0085_0100_0_seq.bxm",0);
    FUN_00a9efb0(uVar9,uVar1,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    iVar5 = param_1[0x37b];
    iStack_1a4 = 0;
    if (iVar5 != iVar5 + param_1[0x37c] * 4) {
      do {
        iStack_1a4 = iStack_1a4 + 1;
        if (iStack_1a4 != 3) {
          uVar15 = 0x3f800000;
          uVar12 = 0xbf800000;
          uVar11 = 0x8000000;
          uVar10 = 0x3f800000;
          uVar8 = 0;
          uVar7 = 0;
          uVar1 = 0;
          uVar9 = uStack_1a8;
          FUN_00a7c8a0(uStack_1a8,0,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
          FUN_00a9efb0(uVar9,uVar1,uVar7,uVar8,uVar10,uVar11,uVar12,uVar15);
          iVar2 = FUN_00a7c8a0();
          *(uint *)(iVar2 + 0x4c4) = *(uint *)(iVar2 + 0x4c4) & 0xfffffffe;
          uVar9 = 2;
          FUN_00a7c8a0(2);
          FUN_00a92530(uVar9);
        }
        iVar5 = iVar5 + 4;
      } while (iVar5 != param_1[0x37b] + param_1[0x37c] * 4);
    }
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
  if (iVar5 == 1) {
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 == 1) {
      iVar5 = param_1[0x37b];
      if (iVar5 != iVar5 + param_1[0x37c] * 4) {
        do {
          iVar2 = FUN_00a7c8a0();
          if (*(undefined4 **)(iVar2 + 0x370) != (undefined4 *)0x0) {
            *(uint *)(iVar2 + 0x364) = *(uint *)(iVar2 + 0x364) | 0x400000;
            **(undefined4 **)(iVar2 + 0x370) = 0;
          }
          iVar5 = iVar5 + 4;
        } while (iVar5 != param_1[0x37b] + param_1[0x37c] * 4);
      }
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
  }
  else if ((iVar5 == 2) && (param_1[0x3ae] != -1)) {
    iVar5 = param_1[0x188];
    if (iVar5 == 0) {
      FUN_00a8d6c0(param_1 + 0x10);
      param_1[0x188] = param_1[0x188] + 1;
      return;
    }
    if (iVar5 == 1) {
      param_1[0x394] = 0x3dcccccd;
      param_1[0x395] = 0x40400000;
      FUN_00a8d790(param_1 + 0x38c);
      pfVar4 = (float *)(param_1 + 0x390);
      *pfVar4 = 0.0;
      param_1[0x391] = 0;
      param_1[0x392] = 0;
      param_1[0x393] = 0x3f800000;
      local_164 = 0x3f800000;
      local_178 = 1.0;
      local_18c = 0x3f800000;
      local_1a0 = 0x3f800000;
      local_168 = 0;
      local_16c = 0;
      local_170 = 0;
      local_174 = 0.0;
      local_17c = 0.0;
      local_180 = 0;
      local_184 = 0;
      local_188 = 0;
      local_190 = 0;
      local_194 = 0;
      local_198 = 0;
      local_19c = 0;
      *pfVar4 = 0.0;
      param_1[0x391] = 0;
      param_1[0x392] = param_1[0x394];
      param_1[0x393] = 0x3f800000;
      pfVar3 = (float *)(**(code **)(*param_1 + 0x68))();
      fStack_1c0 = 0.0;
      fVar6 = (float10)fpatan((float10)(float)param_1[0x38c] - (float10)*pfVar3,
                              (float10)(float)param_1[0x38e] - (float10)pfVar3[2]);
      fStack_1bc = (float)fVar6;
      fStack_1b8 = 0.0;
      fStack_1b4 = 1.0;
      thunk_FUN_00ddc1d0(&local_1a0,&fStack_1c0,5);
      D3DXVec3TransformNormal(pfVar4,pfVar4,&local_1a0);
      *pfVar4 = *pfVar4 + local_17c;
      param_1[0x391] = (int)((float)param_1[0x391] + local_178);
      param_1[0x392] = (int)(local_174 + (float)param_1[0x392]);
      param_1[0x188] = param_1[0x188] + 1;
      if ((DAT_018b9174 < 0xe21) && (0xe50 < DAT_018b9174)) {
        uVar9 = FUN_004039a0(2,param_1,0);
        FUN_00a963e0(uVar9);
        return;
      }
    }
    else if (iVar5 == 2) {
      iVar5 = FUN_00a97e60(param_1[0x394],1);
      if (iVar5 == 1) {
        param_1[0x188] = param_1[0x188] + 1;
        param_1[0x396] = 0;
        if ((DAT_018b9174 < 0xe21) && (0xe50 < DAT_018b9174)) {
          FUN_00a8c9b0(0,2,0x42700000,0);
          return;
        }
      }
      else {
        pfVar4 = (float *)(**(code **)(*param_1 + 0x68))();
        fStack_1c0 = *pfVar4;
        fStack_1bc = pfVar4[1];
        fStack_1b8 = pfVar4[2];
        fStack_1b4 = pfVar4[3];
        fVar6 = (float10)FUN_00a92ff0();
        fStack_1c0 = (float)((float10)(float)param_1[0x390] * fVar6 + (float10)fStack_1c0);
        fStack_1bc = (float)((float10)(float)param_1[0x391] * fVar6 + (float10)fStack_1bc);
        fStack_1b8 = (float)((float10)(float)param_1[0x392] * fVar6 + (float10)fStack_1b8);
        fStack_1b4 = (float)((float10)(float)param_1[0x393] * fVar6 + (float10)fStack_1b4);
        (**(code **)(*param_1 + 0x6c))(&fStack_1c0);
        if (param_1[0x381] != 0) {
          FUN_00a7ce90(auStack_1c4);
          return;
        }
      }
    }
    else if (iVar5 == 3) {
      fVar6 = (float10)FUN_00a92ff0();
      fVar6 = fVar6 * (float10)0.016666668 + (float10)(float)param_1[0x396];
      param_1[0x396] = (int)(float)fVar6;
      if ((float10)(float)param_1[0x395] < fVar6) {
        param_1[0x188] = 1;
        return;
      }
    }
  }
  return;
}

// 00AB0B10  E3_EnemyBoard::vf04  size=6  [class]
undefined * E3_EnemyBoard::vf04(void)

{
  return &DAT_01b34b4c;
}

// 00AB9410  E3_EnemyBoard::vf00  size=81  [class]
int __thiscall E3_EnemyBoard::vf00(int param_1,byte param_2)

{
  *(undefined ***)(param_1 + 0xde8) = lib::Array<Entity*>::vftable;
  if (*(int *)(param_1 + 0xdec) != 0) {
    *(undefined4 *)(param_1 + 0xdf0) = 0;
  }
  *(undefined4 *)(param_1 + 0xdec) = 0;
  *(undefined4 *)(param_1 + 0xdf4) = 0;
  FUN_00dd7270();
  cEnemyCautionStateManager::cEnemyCautionStateManager_3();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}


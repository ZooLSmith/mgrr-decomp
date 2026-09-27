// src/managers/scenarioregionmanager/ScenarioRegionManagerImplement.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A6DFC0..00A76100, 38 functions

#include "mgrr.h"
#include "ScenarioRegionManagerImplement.h"

// 00A6DFC0  ScenarioRegionManagerImplement::vf08  size=1  [class]
void ScenarioRegionManagerImplement::vf08(void)

{
  return;
}

// 00A6DFD0  ScenarioRegionManagerImplement::vf0C  size=3  [class]
void ScenarioRegionManagerImplement::vf0C(void)

{
  return;
}

// 00A6E070  ScenarioRegionManagerImplement::vf3C  size=109  [class]
undefined4 __thiscall
ScenarioRegionManagerImplement::vf3C
          (int param_1,undefined4 param_2,uint param_3,undefined4 param_4,int param_5)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  
  piVar1 = (int *)(param_1 + 8);
  iVar4 = 0;
  do {
    if (*piVar1 == param_5) {
      iVar4 = 0;
      if (0 < piVar1[0x1b01]) {
        piVar2 = piVar1 + 1;
        do {
          if (*(ushort *)((int)piVar2 + 2) == param_3) {
            uVar3 = FUN_00d900c0(piVar2[0x16],param_2);
            return uVar3;
          }
          iVar4 = iVar4 + 1;
          piVar2 = piVar2 + 0x1b;
        } while (iVar4 < piVar1[0x1b01]);
      }
      return 0;
    }
    iVar4 = iVar4 + 1;
    piVar1 = piVar1 + 0x1b03;
  } while (iVar4 < 3);
  return 0;
}

// 00A6E0E0  ScenarioRegionManagerImplement::vf20  size=40  [class]
bool __thiscall
ScenarioRegionManagerImplement::vf20
          (int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint unaff_retaddr;
  
  iVar1 = (**(code **)(*param_1 + 0x40))(param_2,param_4);
  if (iVar1 == 0) {
    return false;
  }
  return (*(uint *)(iVar1 + 100) & unaff_retaddr) != 0;
}

// 00A6E110  ScenarioRegionManagerImplement::vf24  size=103  [class]
undefined4 __thiscall
ScenarioRegionManagerImplement::vf24(int param_1,uint param_2,uint param_3,int param_4)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  
  piVar1 = (int *)(param_1 + 8);
  iVar3 = 0;
  while (*piVar1 != param_4) {
    iVar3 = iVar3 + 1;
    piVar1 = piVar1 + 0x1b03;
    if (2 < iVar3) {
      return 0;
    }
  }
  iVar3 = 0;
  if (0 < piVar1[0x1b01]) {
    puVar2 = (uint *)(piVar1 + 0x1a);
    do {
      if ((*(ushort *)((int)puVar2 + -0x62) == param_2) && ((*puVar2 & param_3) != 0)) {
        return 1;
      }
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 0x1b;
    } while (iVar3 < piVar1[0x1b01]);
  }
  return 0;
}

// 00A6E180  ScenarioRegionManagerImplement::vf40  size=102  [class]
ushort * __thiscall ScenarioRegionManagerImplement::vf40(int param_1,uint param_2,int param_3)

{
  int *piVar1;
  ushort *puVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar1 = (int *)(param_1 + 8);
  while (*piVar1 != param_3) {
    iVar3 = iVar3 + 1;
    piVar1 = piVar1 + 0x1b03;
    if (2 < iVar3) {
      return (ushort *)0x0;
    }
  }
  iVar3 = 0;
  if (0 < piVar1[0x1b01]) {
    puVar2 = (ushort *)(piVar1 + 1);
    do {
      if (*puVar2 == param_2) {
        return puVar2;
      }
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 0x36;
    } while (iVar3 < piVar1[0x1b01]);
  }
  FUN_00dd5650(&DAT_01663148,param_3,param_2);
  return (ushort *)0x0;
}

// 00A6E1F0  ScenarioRegionManagerImplement::vf44  size=81  [class]
void __thiscall ScenarioRegionManagerImplement::vf44(int param_1,uint param_2,int param_3)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  
  piVar1 = (int *)(param_1 + 8);
  iVar3 = 0;
  do {
    if (*piVar1 == param_3) {
      iVar3 = 0;
      if (0 < piVar1[0x1b01]) {
        puVar2 = (uint *)(piVar1 + 2);
        do {
          if (*(ushort *)((int)puVar2 + -2) == param_2) {
            *puVar2 = *puVar2 & 0xfffffffe;
          }
          iVar3 = iVar3 + 1;
          puVar2 = puVar2 + 0x1b;
        } while (iVar3 < piVar1[0x1b01]);
      }
      return;
    }
    iVar3 = iVar3 + 1;
    piVar1 = piVar1 + 0x1b03;
  } while (iVar3 < 3);
  return;
}

// 00A6E250  ScenarioRegionManagerImplement::vf48  size=86  [class]
void __thiscall ScenarioRegionManagerImplement::vf48(int param_1,uint param_2,int param_3)

{
  int iVar1;
  uint *puVar2;
  int *piVar3;
  
  iVar1 = 0;
  piVar3 = (int *)(param_1 + 8);
  do {
    if (*piVar3 == param_3) {
      iVar1 = 0;
      if (0 < piVar3[0x1b01]) {
        puVar2 = (uint *)(piVar3 + 2);
        do {
          if (*(ushort *)((int)puVar2 + -2) == param_2) {
            *puVar2 = *puVar2 | 1;
            puVar2[0x18] = puVar2[0x18] & 0xfffffff8;
          }
          iVar1 = iVar1 + 1;
          puVar2 = puVar2 + 0x1b;
        } while (iVar1 < piVar3[0x1b01]);
      }
      return;
    }
    iVar1 = iVar1 + 1;
    piVar3 = piVar3 + 0x1b03;
  } while (iVar1 < 3);
  return;
}

// 00A6E2B0  ScenarioRegionManagerImplement::vf50  size=96  [class]
undefined4 __thiscall ScenarioRegionManagerImplement::vf50(int param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  ushort *puVar4;
  
  iVar1 = 0;
  piVar3 = (int *)(param_1 + 8);
  do {
    if (*piVar3 == param_3) {
      uVar2 = 0;
      iVar1 = 0;
      if (0 < piVar3[0x1b01]) {
        puVar4 = (ushort *)((int)piVar3 + 6);
        while (*puVar4 != param_2) {
          iVar1 = iVar1 + 1;
          puVar4 = puVar4 + 0x36;
          if (piVar3[0x1b01] <= iVar1) {
            return uVar2;
          }
        }
        uVar2 = 1;
      }
      return uVar2;
    }
    iVar1 = iVar1 + 1;
    piVar3 = piVar3 + 0x1b03;
  } while (iVar1 < 3);
  return 0;
}

// 00A6E310  ScenarioRegionManagerImplement::vf54  size=110  [class]
void __thiscall
ScenarioRegionManagerImplement::vf54(int param_1,int *param_2,byte *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  byte *pbVar4;
  
  iVar1 = param_4;
  piVar3 = (int *)(param_1 + 8);
  iVar2 = 0;
  do {
    if ((byte *)*piVar3 == param_3) {
      iVar2 = 0;
      if (0 < piVar3[0x1b01]) {
        pbVar4 = (byte *)(piVar3 + 0x1a);
        do {
          param_3 = pbVar4 + -100;
          if ((*(int *)(pbVar4 + -0x44) == iVar1) && ((*pbVar4 & 1) != 0)) {
            (**(code **)(*param_2 + 8))(&param_3);
          }
          iVar2 = iVar2 + 1;
          pbVar4 = pbVar4 + 0x6c;
        } while (iVar2 < piVar3[0x1b01]);
      }
      return;
    }
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 0x1b03;
  } while (iVar2 < 3);
  return;
}

// 00A6E390  ScenarioRegionManagerImplement::vf58  size=102  [class]
void __thiscall
ScenarioRegionManagerImplement::vf58(int param_1,int *param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar1 = param_4;
  piVar4 = (int *)(param_1 + 8);
  iVar2 = 0;
  do {
    if ((int *)*piVar4 == param_3) {
      iVar2 = 0;
      if (0 < piVar4[0x1b01]) {
        piVar3 = piVar4 + 1;
        do {
          if (piVar3[8] == iVar1) {
            param_3 = piVar3;
            (**(code **)(*param_2 + 8))(&param_3);
          }
          iVar2 = iVar2 + 1;
          piVar3 = piVar3 + 0x1b;
        } while (iVar2 < piVar4[0x1b01]);
      }
      return;
    }
    iVar2 = iVar2 + 1;
    piVar4 = piVar4 + 0x1b03;
  } while (iVar2 < 3);
  return;
}

// 00A6E400  ScenarioRegionManagerImplement::vf5C  size=114  [class]
void __thiscall
ScenarioRegionManagerImplement::vf5C
          (int param_1,int *param_2,uint param_3,ushort *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  ushort *puVar4;
  
  iVar1 = param_5;
  piVar3 = (int *)(param_1 + 8);
  iVar2 = 0;
  do {
    if ((ushort *)*piVar3 == param_4) {
      iVar2 = 0;
      if (0 < piVar3[0x1b01]) {
        puVar4 = (ushort *)((int)piVar3 + 6);
        do {
          param_4 = puVar4 + -1;
          if ((*(int *)(puVar4 + 0xf) == iVar1) && (*puVar4 == param_3)) {
            (**(code **)(*param_2 + 8))(&param_4);
          }
          iVar2 = iVar2 + 1;
          puVar4 = puVar4 + 0x36;
        } while (iVar2 < piVar3[0x1b01]);
      }
      return;
    }
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 0x1b03;
  } while (iVar2 < 3);
  return;
}

// 00A6E480  ScenarioRegionManagerImplement::vf74  size=110  [class]
void __thiscall ScenarioRegionManagerImplement::vf74(int *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = (**(code **)(*param_1 + 0x20))(param_2,1,2);
  if (iVar1 != 0) {
    iVar3 = 0;
    piVar2 = (int *)FUN_00c14bb0();
    iVar1 = (**(code **)(*piVar2 + 0x24))();
    if (0 < iVar1) {
      do {
        iVar3 = iVar3 + 1;
        piVar2 = (int *)FUN_00c14bb0();
        iVar1 = (**(code **)(*piVar2 + 0x24))();
      } while (iVar3 < iVar1);
    }
    iVar3 = 0;
    piVar2 = (int *)FUN_00c18350();
    iVar1 = (**(code **)(*piVar2 + 0x6c))();
    if (0 < iVar1) {
      do {
        iVar3 = iVar3 + 1;
        piVar2 = (int *)FUN_00c18350();
        iVar1 = (**(code **)(*piVar2 + 0x6c))();
      } while (iVar3 < iVar1);
    }
  }
  return;
}

// 00A6E4F0  ScenarioRegionManagerImplement::vf70  size=43  [class]
void __thiscall ScenarioRegionManagerImplement::vf70(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 unaff_ESI;
  
  iVar1 = (**(code **)(*param_1 + 0x20))(param_2,1,2);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x6c))(unaff_ESI);
  }
  return;
}

// 00A6E520  ScenarioRegionManagerImplement::vf64  size=8  [class]
undefined4 ScenarioRegionManagerImplement::vf64(void)

{
  return 1;
}

// 00A6E530  ScenarioRegionManagerImplement::vf68  size=3  [class]
void ScenarioRegionManagerImplement::vf68(void)

{
  return;
}

// 00A6E540  ScenarioRegionManagerImplement::vf84  size=20  [class]
void __thiscall ScenarioRegionManagerImplement::vf84(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x80))(10,param_2);
  return;
}

// 00A6E560  ScenarioRegionManagerImplement::vf78  size=87  [class]
int * __thiscall ScenarioRegionManagerImplement::vf78(int param_1,uint param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)(param_1 + 8);
  iVar3 = 0;
  while (*piVar1 != param_3) {
    iVar3 = iVar3 + 1;
    piVar1 = piVar1 + 0x1b03;
    if (2 < iVar3) {
      return (int *)0x0;
    }
  }
  iVar3 = 0;
  if (0 < piVar1[0x1b01]) {
    piVar2 = piVar1 + 1;
    do {
      if (*(ushort *)((int)piVar2 + 2) == param_2) {
        return piVar2;
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 0x1b;
    } while (iVar3 < piVar1[0x1b01]);
  }
  return (int *)0x0;
}

// 00A6E5C0  ScenarioRegionManagerImplement::vf7C  size=36  [class]
int * __thiscall ScenarioRegionManagerImplement::vf7C(int param_1,byte *param_2,int param_3)

{
  byte bVar1;
  int *piVar2;
  int *piVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  bool bVar8;
  
  piVar2 = (int *)(param_1 + 8);
  iVar6 = 0;
  while (*piVar2 != param_3) {
    iVar6 = iVar6 + 1;
    piVar2 = piVar2 + 0x1b03;
    if (2 < iVar6) {
      return (int *)0x0;
    }
  }
  iVar6 = 0;
  if (0 < piVar2[0x1b01]) {
    piVar3 = piVar2 + 1;
    do {
      pbVar4 = (byte *)(piVar3 + 0xd);
      pbVar7 = param_2;
      do {
        bVar1 = *pbVar4;
        bVar8 = bVar1 < *pbVar7;
        if (bVar1 != *pbVar7) {
LAB_00a6e625:
          iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_00a6e62a;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar8 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_00a6e625;
        pbVar4 = pbVar4 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_00a6e62a:
      if (iVar5 == 0) {
        return piVar3;
      }
      iVar6 = iVar6 + 1;
      piVar3 = piVar3 + 0x1b;
    } while (iVar6 < piVar2[0x1b01]);
  }
  return (int *)0x0;
}

// 00A6F760  FUN_00a6f760  size=149  [callgraph]
void __fastcall FUN_00a6f760(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  
  param_1[0x1b01] = 0;
  *param_1 = 0xffffffff;
  param_1 = param_1 + 0xe;
  iVar2 = 0x100;
  do {
    *(undefined2 *)(param_1 + -0xd) = 0;
    *(undefined2 *)((int)param_1 + -0x32) = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[-0xc] = 0;
    param_1[-0xb] = 0;
    param_1[-10] = 0;
    param_1[-8] = 0;
    param_1[-9] = 1;
    param_1[-4] = 0xffffffff;
    param_1[-3] = 0xffffffff;
    param_1[-2] = 0xffffffff;
    param_1[-1] = 0xffffffff;
    uVar1 = 0x18;
    do {
      *(undefined4 *)((int)param_1 + (uVar1 - 0x34)) = 0xffffffff;
      uVar1 = uVar1 + 4;
    } while (uVar1 < 0x20);
    param_1[-5] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[-0xc] = param_1[-0xc] | 1;
    param_1[0xc] = param_1[0xc] & 0xfffffff8;
    param_1 = param_1 + 0x1b;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

// 00A6F800  ScenarioRegionManagerImplement::vf88  size=108  [class]
int * __thiscall ScenarioRegionManagerImplement::vf88(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)(param_1 + 8);
  iVar3 = 0;
  while (*piVar1 != param_2) {
    iVar3 = iVar3 + 1;
    piVar1 = piVar1 + 0x1b03;
    if (2 < iVar3) {
      return (int *)0x0;
    }
  }
  iVar3 = 0;
  if (0 < piVar1[0x1b01]) {
    piVar2 = piVar1 + 1;
    do {
      if ((((piVar2 != (int *)0x0) && (piVar2[0x17] != 0)) && (param_3 != 0)) &&
         (piVar2[0x17] == param_3)) {
        return piVar2;
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 0x1b;
    } while (iVar3 < piVar1[0x1b01]);
  }
  return (int *)0x0;
}

// 00A6F870  ScenarioRegionManagerImplement::setGroupResource  size=900  [class]
void __thiscall
ScenarioRegionManagerImplement::setGroupResource(int param_1,int param_2,uint param_3,uint param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  int *piVar12;
  int *piVar13;
  undefined **local_28 [8];
  undefined4 local_8;
  int *local_4;
  
  iVar5 = 0;
  piVar12 = (int *)(param_1 + 8);
  do {
    if (*piVar12 == -1) {
      local_4 = piVar12;
      cXmlBinary::cXmlBinary();
      FUN_00e062b0(param_3,0);
      uVar6 = cXmlBinary::vf04();
      uVar6 = cXmlBinary::vf18(uVar6,&DAT_01661874);
      *piVar12 = param_2;
      iVar5 = cXmlBinary::vf10(uVar6);
      piVar12[0x1b01] = iVar5;
      iVar9 = 0;
      iVar10 = 0;
      iVar5 = cXmlBinary::vf10(uVar6);
      if (0 < iVar5) {
        do {
          uVar7 = cXmlBinary::vf14(uVar6,iVar10);
          param_3 = CONCAT13(0xff,(undefined3)param_3);
          uVar7 = cXmlBinary::vf18(uVar7,&DAT_0164fcc8);
          cXmlBinary::vf70(uVar7,(int)&param_3 + 3);
          iVar5 = FUN_00d90360(param_3 >> 0x18);
          iVar9 = iVar9 + iVar5;
          iVar10 = iVar10 + 1;
          iVar5 = cXmlBinary::vf10(uVar6);
        } while (iVar10 < iVar5);
      }
      uVar8 = FUN_00dd29b0(iVar9,0x20,0,0);
      local_4[0x1b02] = uVar8;
      if (uVar8 == 0) {
        FUN_00dd5650("ScenarioRegionManagerImplement::setGroupResource heap alloc error");
      }
      else {
        iVar9 = 0;
        param_4 = uVar8;
        iVar5 = cXmlBinary::vf10(uVar6);
        if (0 < iVar5) {
          puVar11 = (uint *)(local_4 + 2);
          do {
            local_8 = cXmlBinary::vf14(uVar6,iVar9);
            param_3 = CONCAT13(0xff,(undefined3)param_3);
            uVar7 = cXmlBinary::vf18(local_8,&DAT_0164fcc8);
            cXmlBinary::vf70(uVar7,(int)&param_3 + 3);
            FUN_00a6ee80(local_28,&local_8);
            if ((puVar11[7] == 3) || (puVar11[7] == 5)) {
              *puVar11 = *puVar11 & 0xfffffffe;
            }
            if ((int)*puVar11 < 0) {
              puVar11[0x18] = puVar11[0x18] & 0xfffffff8;
              *puVar11 = *puVar11 | 1;
            }
            puVar11[0x15] = param_4;
            FUN_00d95780(param_4,param_3 >> 0x18,local_28,&local_8);
            if (puVar11[4] != 0) {
              uVar8 = FUN_00e03ea0(puVar11 + 0x11);
              puVar11[0x10] = uVar8;
            }
            iVar5 = FUN_00d90360(param_3 >> 0x18);
            param_4 = param_4 + iVar5;
            iVar9 = iVar9 + 1;
            puVar11 = puVar11 + 0x1b;
            iVar5 = cXmlBinary::vf10(uVar6);
          } while (iVar9 < iVar5);
        }
        if (param_2 != 2) {
          iVar5 = 0;
          if (0 < local_4[0x1b01]) {
            piVar12 = local_4 + 0x17;
            piVar13 = local_4;
            do {
              if (piVar12[-0x11] == 0) {
                piVar12[-0x15] = piVar12[-0x15] & 0xfffffffe;
                iVar9 = *piVar12;
                *(undefined4 *)(iVar9 + 0x10) = *(undefined4 *)(iVar9 + 0x20);
                *(undefined4 *)(iVar9 + 0x14) = *(undefined4 *)(iVar9 + 0x24);
                *(undefined4 *)(iVar9 + 0x18) = *(undefined4 *)(iVar9 + 0x28);
                *(undefined4 *)(iVar9 + 0x1c) = *(undefined4 *)(iVar9 + 0x2c);
                if (*(char *)*piVar12 == '\x06') {
                  FUN_00d9c9c0();
                }
                else if (*(char *)*piVar12 == '\a') {
                  FUN_00d9c2f0();
                }
              }
              else {
                iVar9 = FUN_00a18cf0(piVar12[-5]);
                if (iVar9 == 0) {
                  piVar12[-0x15] = piVar12[-0x15] | 1;
                  piVar12[3] = piVar12[3] & 0xfffffff8;
                  iVar9 = *piVar12;
                  piVar12[1] = 0;
                  *(undefined4 *)(iVar9 + 0x10) = *(undefined4 *)(iVar9 + 0x20);
                  *(undefined4 *)(iVar9 + 0x14) = *(undefined4 *)(iVar9 + 0x24);
                  *(undefined4 *)(iVar9 + 0x18) = *(undefined4 *)(iVar9 + 0x28);
                  *(undefined4 *)(iVar9 + 0x1c) = *(undefined4 *)(iVar9 + 0x2c);
                  if (*(char *)*piVar12 == '\x06') {
                    FUN_00d9c9c0();
                    piVar12[-0x15] = piVar12[-0x15] | 0x20000000;
                    piVar13 = local_4;
                  }
                  else {
                    if (*(char *)*piVar12 == '\a') {
                      FUN_00d9c2f0();
                    }
                    piVar12[-0x15] = piVar12[-0x15] | 0x20000000;
                    piVar13 = local_4;
                  }
                }
                else {
                  iVar10 = FUN_00a7c8a0();
                  pcVar4 = (char *)*piVar12;
                  if (*pcVar4 == '\x06') {
                    FUN_00d9c9a0(iVar10 + 0x10);
                    piVar12[-0x15] = piVar12[-0x15] & 0xfffffffe;
                    piVar12[-0x15] = piVar12[-0x15] | 0x20000000;
                    piVar12[1] = iVar9;
                    piVar13 = local_4;
                  }
                  else if (*pcVar4 == '\a') {
                    FUN_00d9c2d0(iVar10 + 0x10);
                    piVar12[-0x15] = piVar12[-0x15] & 0xfffffffe;
                    piVar12[-0x15] = piVar12[-0x15] | 0x20000000;
                    piVar12[1] = iVar9;
                    piVar13 = local_4;
                  }
                  else {
                    fVar1 = *(float *)(iVar10 + 0x44);
                    fVar2 = *(float *)(iVar10 + 0x48);
                    fVar3 = *(float *)(iVar10 + 0x4c);
                    *(float *)(pcVar4 + 0x10) =
                         *(float *)(pcVar4 + 0x30) + *(float *)(iVar10 + 0x40);
                    *(float *)(pcVar4 + 0x14) = *(float *)(pcVar4 + 0x34) + fVar1;
                    *(float *)(pcVar4 + 0x18) = *(float *)(pcVar4 + 0x38) + fVar2;
                    *(float *)(pcVar4 + 0x1c) = fVar3 + *(float *)(pcVar4 + 0x3c);
                    piVar12[-0x15] = piVar12[-0x15] & 0xfffffffe;
                    piVar12[-0x15] = piVar12[-0x15] | 0x20000000;
                    piVar12[1] = iVar9;
                    piVar13 = local_4;
                  }
                }
              }
              iVar5 = iVar5 + 1;
              piVar12 = piVar12 + 0x1b;
            } while (iVar5 < piVar13[0x1b01]);
          }
        }
      }
      local_28[0] = cXmlBinary::vftable;
      FUN_00e04180();
      return;
    }
    iVar5 = iVar5 + 1;
    piVar12 = piVar12 + 0x1b03;
  } while (iVar5 < 3);
  FUN_00dd5650(&DAT_016630d8);
  return;
}

// 00A6FC00  ScenarioRegionManagerImplement::vf14  size=77  [class]
void __thiscall ScenarioRegionManagerImplement::vf14(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 8);
  iVar1 = 0;
  do {
    if (*piVar2 == param_2) {
      if (piVar2[0x1b02] != 0) {
        FUN_00dd48d0(piVar2[0x1b02],0);
        piVar2[0x1b02] = 0;
      }
      *piVar2 = -1;
      return;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 0x1b03;
  } while (iVar1 < 3);
  return;
}

// 00A6FC50  ScenarioRegionManagerImplement::vf18  size=177  [class]
void __thiscall ScenarioRegionManagerImplement::vf18(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int local_8;
  
  local_8 = 0;
  do {
    iVar2 = 0;
    piVar4 = (int *)(param_1 + 8);
    do {
      if (*piVar4 == local_8) {
        iVar2 = 0;
        if (0 < piVar4[0x1b01]) {
          piVar3 = piVar4 + 0x17;
          do {
            if (piVar3[-0x11] == 0) {
              if ((piVar3[-0x10] == param_2) || (piVar3[-0xf] == param_2)) {
                piVar3[-0x15] = piVar3[-0x15] & 0xfffffffe;
              }
              iVar1 = *piVar3;
              *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(iVar1 + 0x20);
              *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(iVar1 + 0x24);
              *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(iVar1 + 0x28);
              *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(iVar1 + 0x2c);
              if (*(char *)*piVar3 == '\x06') {
                FUN_00d9c9c0();
              }
              else if (*(char *)*piVar3 == '\a') {
                FUN_00d9c2f0();
              }
            }
            iVar2 = iVar2 + 1;
            piVar3 = piVar3 + 0x1b;
          } while (iVar2 < piVar4[0x1b01]);
        }
        break;
      }
      iVar2 = iVar2 + 1;
      piVar4 = piVar4 + 0x1b03;
    } while (iVar2 < 3);
    local_8 = local_8 + 1;
    if (2 < local_8) {
      return;
    }
  } while( true );
}

// 00A6FD10  ScenarioRegionManagerImplement::vf1C  size=203  [class]
void __thiscall ScenarioRegionManagerImplement::vf1C(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int local_8;
  
  local_8 = 0;
  do {
    iVar1 = 0;
    piVar4 = (int *)(param_1 + 8);
    do {
      if (*piVar4 == local_8) {
        iVar1 = 0;
        if (0 < piVar4[0x1b01]) {
          piVar3 = piVar4 + 8;
          do {
            if (((piVar3 != (int *)0x1c) && (piVar3[-1] == param_2)) &&
               ((*piVar3 == -1 || (iVar2 = FUN_00a4c810(*piVar3), iVar2 == 0)))) {
              piVar3[-6] = piVar3[-6] | 1;
              piVar3[0x12] = piVar3[0x12] & 0xfffffff8;
              iVar2 = piVar3[0xf];
              *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(iVar2 + 0x20);
              *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(iVar2 + 0x24);
              *(undefined4 *)(iVar2 + 0x18) = *(undefined4 *)(iVar2 + 0x28);
              *(undefined4 *)(iVar2 + 0x1c) = *(undefined4 *)(iVar2 + 0x2c);
              if (*(char *)piVar3[0xf] == '\x06') {
                FUN_00d9c9c0();
              }
              else if (*(char *)piVar3[0xf] == '\a') {
                FUN_00d9c2f0();
              }
            }
            iVar1 = iVar1 + 1;
            piVar3 = piVar3 + 0x1b;
          } while (iVar1 < piVar4[0x1b01]);
        }
        break;
      }
      iVar1 = iVar1 + 1;
      piVar4 = piVar4 + 0x1b03;
    } while (iVar1 < 3);
    local_8 = local_8 + 1;
    if (2 < local_8) {
      return;
    }
  } while( true );
}

// 00A6FDE0  ScenarioRegionManagerImplement::vf30  size=143  [class]
undefined4 __thiscall
ScenarioRegionManagerImplement::vf30(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  
  piVar5 = (int *)(param_1 + 8);
  iVar1 = 0;
  while (*piVar5 != param_3) {
    iVar1 = iVar1 + 1;
    piVar5 = piVar5 + 0x1b03;
    if (2 < iVar1) {
      return 0;
    }
  }
  piVar2 = (int *)FUN_00c13920();
  iVar1 = (**(code **)(*piVar2 + 0xa0))();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = 0;
  if (0 < piVar5[0x1b01]) {
    puVar4 = (uint *)(piVar5 + 2);
    do {
      if ((((*puVar4 & 1) == 0) && ((*puVar4 & 0x40000000) != 0)) &&
         (iVar3 = FUN_00d900c0(puVar4[0x15],param_2), iVar3 != 0)) {
        return 1;
      }
      iVar1 = iVar1 + 1;
      puVar4 = puVar4 + 0x1b;
    } while (iVar1 < piVar5[0x1b01]);
  }
  return 0;
}

// 00A6FE70  ScenarioRegionManagerImplement::vf28  size=52  [class]
undefined4 __thiscall
ScenarioRegionManagerImplement::vf28
          (int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x40))(param_3,param_4);
  if ((iVar1 != 0) && ((*(byte *)(iVar1 + 4) & 1) == 0)) {
    uVar2 = FUN_00d900c0(*(undefined4 *)(iVar1 + 0x58),param_4);
    return uVar2;
  }
  return 0;
}

// 00A6FEB0  ScenarioRegionManagerImplement::vf2C  size=129  [class]
undefined4 __thiscall
ScenarioRegionManagerImplement::vf2C(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  int *piVar4;
  
  piVar4 = (int *)(param_1 + 8);
  iVar1 = 0;
  do {
    if (*piVar4 == param_4) {
      if (piVar4[0x1b01] < 1) {
        return 0;
      }
      pbVar3 = (byte *)(piVar4 + 2);
      iVar1 = 0;
      while (((*(ushort *)(pbVar3 + -2) != param_3 || ((*pbVar3 & 1) != 0)) ||
             (iVar2 = FUN_00d900c0(*(undefined4 *)(pbVar3 + 0x54),param_2), iVar2 == 0))) {
        iVar1 = iVar1 + 1;
        pbVar3 = pbVar3 + 0x6c;
        if (piVar4[0x1b01] <= iVar1) {
          return 0;
        }
      }
      return 1;
    }
    iVar1 = iVar1 + 1;
    piVar4 = piVar4 + 0x1b03;
  } while (iVar1 < 3);
  return 0;
}

// 00A6FF40  ScenarioRegionManagerImplement::vf4C  size=100  [class]
uint __thiscall ScenarioRegionManagerImplement::vf4C(int param_1,uint param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)(param_1 + 8);
  iVar3 = 0;
  do {
    if (*piVar1 == param_3) {
      iVar3 = 0;
      if (0 < piVar1[0x1b01]) {
        piVar2 = piVar1 + 1;
        do {
          if (*(ushort *)((int)piVar2 + 2) == param_2) {
            return ~piVar2[1] & 1;
          }
          iVar3 = iVar3 + 1;
          piVar2 = piVar2 + 0x1b;
        } while (iVar3 < piVar1[0x1b01]);
      }
      return 0;
    }
    iVar3 = iVar3 + 1;
    piVar1 = piVar1 + 0x1b03;
  } while (iVar3 < 3);
  return 0;
}

// 00A6FFB0  ScenarioRegionManagerImplement::vf60  size=118  [class]
int __thiscall
ScenarioRegionManagerImplement::vf60(int param_1,int *param_2,uint param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = (int *)(param_1 + 8);
  iVar1 = 0;
  do {
    if ((int *)*piVar3 == param_4) {
      iVar1 = 0;
      if (0 < piVar3[0x1b01]) {
        piVar2 = piVar3 + 1;
        do {
          if (*(ushort *)((int)piVar2 + 2) == param_3) {
            param_4 = piVar2;
            (**(code **)(*param_2 + 8))(&param_4);
          }
          iVar1 = iVar1 + 1;
          piVar2 = piVar2 + 0x1b;
        } while (iVar1 < piVar3[0x1b01]);
      }
      return param_2[2];
    }
    iVar1 = iVar1 + 1;
    piVar3 = piVar3 + 0x1b03;
  } while (iVar1 < 3);
  return 0;
}

// 00A70030  ScenarioRegionManagerImplement::vf6C  size=269  [class]
void __fastcall ScenarioRegionManagerImplement::vf6C(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_EBX;
  int iVar4;
  undefined4 unaff_retaddr;
  
  iVar4 = 0;
  piVar1 = (int *)FUN_00c14bb0();
  iVar2 = (**(code **)(*piVar1 + 0x24))();
  if (0 < iVar2) {
    do {
      piVar1 = (int *)FUN_00c14bb0();
      iVar2 = (**(code **)(*piVar1 + 0x18))(iVar4,0xffffffff);
      if (iVar2 == 0) {
LAB_00a70099:
        iVar4 = iVar4 + 1;
      }
      else {
        iVar2 = FUN_00a7c800();
        iVar2 = (**(code **)(*param_1 + 0x28))(iVar2 + 0x130,unaff_EBX,2);
        if (iVar2 == 0) goto LAB_00a70099;
        piVar1 = (int *)FUN_00c14bb0();
        iVar2 = (**(code **)(*piVar1 + 0x38))(iVar4);
        if (iVar2 == 0) goto LAB_00a70099;
      }
      piVar1 = (int *)FUN_00c14bb0();
      iVar2 = (**(code **)(*piVar1 + 0x24))();
    } while (iVar4 < iVar2);
  }
  iVar4 = 0;
  piVar1 = (int *)FUN_00c18350();
  iVar2 = (**(code **)(*piVar1 + 0x6c))();
  if (0 < iVar2) {
    do {
      piVar1 = (int *)FUN_00c18350();
      iVar2 = (**(code **)(*piVar1 + 0x70))(iVar4);
      if (iVar2 != 0) {
        iVar2 = FUN_00a7c8a0();
        iVar2 = *(int *)(iVar2 + 0x4b4);
        if (((iVar2 != 0xf0d41) && (iVar2 != 0xf0d42)) && (iVar2 != 0xf0c06)) {
          iVar2 = *param_1;
          uVar3 = FUN_00a7c8b0(unaff_retaddr,2);
          iVar2 = (**(code **)(iVar2 + 0x28))(uVar3);
          if (iVar2 != 0) {
            piVar1 = (int *)FUN_00c18350();
            (**(code **)(*piVar1 + 0x68))(iVar4);
          }
        }
      }
      iVar4 = iVar4 + 1;
      piVar1 = (int *)FUN_00c18350();
      iVar2 = (**(code **)(*piVar1 + 0x6c))();
    } while (iVar4 < iVar2);
  }
  return;
}

// 00A70140  ScenarioRegionManagerImplement::vf80  size=122  [class]
byte * __thiscall ScenarioRegionManagerImplement::vf80(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  byte *pbVar3;
  int iVar4;
  byte *local_4;
  
  iVar4 = 0;
  iVar1 = 0;
  piVar2 = (int *)(param_1 + 8);
  do {
    if (*piVar2 == 0) {
      local_4 = (byte *)0x0;
      if (0 < piVar2[0x1b01]) {
        pbVar3 = (byte *)(piVar2 + 0x1a);
        while ((((local_4 = pbVar3 + -100, (pbVar3[-0x60] & 1) != 0 || ((*pbVar3 & 1) == 0)) ||
                (*(int *)(pbVar3 + -0x44) != param_2)) || (*(int *)(pbVar3 + -0x40) != param_3))) {
          iVar4 = iVar4 + 1;
          pbVar3 = pbVar3 + 0x6c;
          if (piVar2[0x1b01] <= iVar4) {
            return (byte *)0x0;
          }
        }
      }
      return local_4;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 0x1b03;
  } while (iVar1 < 3);
  return (byte *)0x0;
}

// 00A71AF0  FUN_00a71af0  size=121  [callgraph]
void __fastcall FUN_00a71af0(int param_1)

{
  int iVar1;
  
  if ((*(uint *)(param_1 + 4) & 0x20000000) != 0) {
    if (*(int *)(param_1 + 0x5c) == 0) {
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
      if (10 < *(int *)(param_1 + 0x60)) {
        *(undefined4 *)(param_1 + 0x60) = 0;
        iVar1 = FUN_00a18cf0(*(undefined4 *)(param_1 + 0x44));
        *(int *)(param_1 + 0x5c) = iVar1;
        if (iVar1 != 0) {
          iVar1 = FUN_00a7c8a0();
          FUN_00a6f710(iVar1 + 0x10);
          *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
        }
      }
    }
    else {
      iVar1 = FUN_00a7c8a0();
      FUN_00a6f710(iVar1 + 0x10);
      iVar1 = FUN_00a7c7e0();
      if (iVar1 == 0) {
        *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
        *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) & 0xfffffff8;
        *(undefined4 *)(param_1 + 0x5c) = 0;
        return;
      }
    }
  }
  return;
}

// 00A71BC0  ScenarioRegionManagerImplement::vf04  size=458  [class]
void __fastcall ScenarioRegionManagerImplement::vf04(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  uint *puVar7;
  int *piVar8;
  int local_2c;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  if ((DAT_01be8e58 != 0) && (piVar1 = (int *)FUN_00a7c8a0(), piVar1 != (int *)0x0)) {
    local_20 = piVar1[0x10];
    local_1c = piVar1[0x11];
    local_18 = piVar1[0x12];
    local_14 = piVar1[0x13];
    iVar2 = FUN_00a12210(1);
    local_18 = *(undefined4 *)(iVar2 + 0x48);
    local_20 = *(int *)(iVar2 + 0x40);
    local_2c = 3;
    piVar6 = param_1;
    do {
      piVar8 = piVar6 + 0x1b03;
      if ((piVar6[2] != -1) && (iVar2 = 0, 0 < *piVar8)) {
        puVar7 = (uint *)(piVar6 + 0x1c);
        do {
          if ((puVar7[-0x18] & 1) == 0) {
            iVar3 = FUN_00d900c0(puVar7[-3],&local_20);
            if (iVar3 == 0) {
              uVar4 = *puVar7 & 0xfffffff8;
              *puVar7 = uVar4;
              if ((puVar7[1] & 1) != 0) {
                uVar4 = uVar4 | 4;
                goto LAB_00a71c8b;
              }
            }
            else {
              uVar4 = *puVar7 | 3;
              *puVar7 = uVar4;
              if ((puVar7[1] & 1) != 0) {
                uVar4 = uVar4 & 0xfffffffd;
LAB_00a71c8b:
                *puVar7 = uVar4;
              }
            }
            puVar7[1] = *puVar7;
          }
          FUN_00a71af0();
          iVar2 = iVar2 + 1;
          puVar7 = puVar7 + 0x1b;
        } while (iVar2 < *piVar8);
      }
      local_2c = local_2c + -1;
      piVar6 = piVar8;
    } while (local_2c != 0);
    iVar2 = FUN_00c15900();
    if ((iVar2 != 0) && (iVar3 = *(int *)(iVar2 + 0x14), iVar3 != *(int *)(iVar2 + 0x18))) {
      do {
        iVar5 = FUN_00a81330();
        if ((iVar5 != 0) && (iVar5 = FUN_00a7c7e0(), iVar5 != 0)) {
          iVar5 = FUN_00a7c8a0();
          iVar5 = (**(code **)(*param_1 + 0x30))(iVar5 + 0x40,2);
          if ((iVar5 != 0) ||
             ((param_1[0x510c] != 0 &&
              (iVar5 = FUN_00a7c8a0(),
              *(float *)(iVar5 + 0x44) < (float)param_1[0x510b] !=
              (*(float *)(iVar5 + 0x44) == (float)param_1[0x510b]))))) {
            piVar6 = (int *)FUN_00a7c8a0();
            (**(code **)(*piVar6 + 0x2f8))();
          }
        }
        iVar3 = *(int *)(iVar3 + 8);
      } while (iVar3 != *(int *)(iVar2 + 0x18));
    }
    iVar2 = (**(code **)(*param_1 + 0x30))(piVar1 + 0x10,2);
    if ((iVar2 != 0) ||
       ((param_1[0x510c] != 0 &&
        ((float)piVar1[0x11] < (float)param_1[0x510b] !=
         ((float)piVar1[0x11] == (float)param_1[0x510b]))))) {
      (**(code **)(*piVar1 + 0x2f8))();
    }
  }
  return;
}

// 00A76020  ScenarioRegionManagerImplement::ScenarioRegionManagerImplement  size=102  [class]
undefined4 * __thiscall
ScenarioRegionManagerImplement::ScenarioRegionManagerImplement
          (undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  *param_1 = vftable;
  param_1[1] = param_2;
  iVar1 = 2;
  do {
    FUN_00a73340();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  param_1[0x510c] = 0;
  param_1[0x510b] = 0x800000;
  iVar1 = 3;
  do {
    FUN_00a6f760();
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return param_1;
}

// 00A76090  ScenarioRegionManagerImplement::vf34  size=23  [class]
void __thiscall ScenarioRegionManagerImplement::vf34(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x14430) = 1;
  *(undefined4 *)(param_1 + 0x1442c) = param_2;
  return;
}

// 00A760B0  ScenarioRegionManagerImplement::vf38  size=11  [class]
void __fastcall ScenarioRegionManagerImplement::vf38(int param_1)

{
  *(undefined4 *)(param_1 + 0x14430) = 0;
  return;
}

// 00A76100  ScenarioRegionManagerImplement::vf00  size=76  [class]
undefined4 * __thiscall ScenarioRegionManagerImplement::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if (param_1[2] != -1) {
    param_1[2] = 0xffffffff;
  }
  if (param_1[0x1b05] != -1) {
    param_1[0x1b05] = 0xffffffff;
  }
  if (param_1[0x3608] != -1) {
    param_1[0x3608] = 0xffffffff;
  }
  *param_1 = ScenarioRegionManager::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}


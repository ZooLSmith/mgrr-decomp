// lib/havok/unit_01055AD0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 01055AD0..0105B4C0, 176 functions

#include "types.h"

// 01055AD0  FUN_01055ad0  size=606  [run]
void FUN_01055ad0(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_14 = 0;
  iVar2 = FUN_01009570();
  if (0 < iVar2) {
    do {
      iVar2 = FUN_01009590(local_14);
      if ((*(ushort *)(iVar2 + 0x10) & 0x400) != 0x400) {
        switch(*(undefined1 *)(iVar2 + 0xc)) {
        case 0x16:
        case 0x1a:
          iVar1 = param_1;
          iVar7 = param_4;
          if (*(char *)(iVar2 + 0xd) == '\x1c') {
            while (-1 < iVar7 + -1) {
              FUN_0143e7a0(iVar1,iVar2);
              iVar3 = FUN_0143e9a0(0);
              FUN_01055a00(*(undefined4 *)(iVar3 + 4),param_3);
              iVar3 = FUN_01009750();
              iVar1 = iVar1 + iVar3;
              iVar7 = iVar7 + -1;
            }
          }
          else if (*(char *)(iVar2 + 0xd) == '\x19') {
            while (-1 < iVar7 + -1) {
              FUN_0143e7a0(iVar1,iVar2);
              puVar4 = (undefined4 *)FUN_0143e9a0(0);
              uVar5 = FUN_010162f0(param_3,puVar4[1]);
              FUN_01055ad0(*puVar4,uVar5);
              iVar3 = FUN_01009750();
              iVar1 = iVar1 + iVar3;
              iVar7 = iVar7 + -1;
            }
          }
          break;
        case 0x19:
          iVar3 = FUN_01016320();
          iVar1 = param_1;
          iVar7 = param_4;
          if (iVar3 == 0) {
            local_10 = 1;
          }
          else {
            local_10 = FUN_01016320();
          }
          while (-1 < iVar7 + -1) {
            FUN_0143e7a0(iVar1,iVar2);
            uVar5 = FUN_010162f0(param_3,local_10);
            uVar5 = FUN_0143e830(uVar5);
            FUN_01055ad0(uVar5);
            iVar3 = FUN_01009750();
            iVar1 = iVar1 + iVar3;
            iVar7 = iVar7 + -1;
          }
          break;
        case 0x1b:
          iVar7 = param_1;
          iVar1 = param_4;
          while (iVar1 = iVar1 + -1, -1 < iVar1) {
            FUN_0143e7a0(iVar7,iVar2);
            piVar6 = (int *)FUN_0143e9b0(0);
            if ((piVar6[1] != 0) && (*piVar6 != 0)) {
              FUN_01055ad0(piVar6[1],*piVar6,param_3,piVar6[2]);
            }
            iVar3 = FUN_01009750();
            iVar7 = iVar7 + iVar3;
          }
          break;
        case 0x1c:
          iVar3 = FUN_01016320();
          iVar1 = param_1;
          iVar7 = param_4;
          if (iVar3 == 0) {
            local_c = 1;
          }
          else {
            local_c = FUN_01016320();
          }
          while (-1 < iVar7 + -1) {
            FUN_0143e7a0(iVar1,iVar2);
            FUN_0143e830(local_c,param_3);
            FUN_01055a00();
            iVar3 = FUN_01009750();
            iVar1 = iVar1 + iVar3;
            iVar7 = iVar7 + -1;
          }
        }
      }
      local_14 = local_14 + 1;
      iVar2 = FUN_01009570();
    } while (local_14 < iVar2);
  }
  return;
}

// 01055D50  FUN_01055d50  size=112  [run]
void __thiscall FUN_01055d50(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  puVar1 = param_2;
  uVar3 = *(undefined4 *)*param_2;
  FUN_0105f980(param_2[1],*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),
               *(undefined4 *)(param_1 + 0x14));
  pcVar2 = (char *)FUN_01009770((int)&param_2 + 3);
  if (*pcVar2 != '\0') {
    uVar3 = FUN_01010160(uVar3,0);
    uVar3 = (**(code **)(**(int **)(param_1 + 8) + 0x10))(uVar3);
    puVar1[1] = uVar3;
    FUN_0105f980(uVar3,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),
                 *(undefined4 *)(param_1 + 0x14));
  }
  return;
}

// 01055DC0  FUN_01055dc0  size=579  [run]
void FUN_01055dc0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  int local_10;
  
  local_10 = 0;
  iVar2 = FUN_01009570();
  if (0 < iVar2) {
    do {
      iVar2 = FUN_01009590(local_10);
      if ((*(ushort *)(iVar2 + 0x10) & 0x400) != 0x400) {
        switch(*(undefined1 *)(iVar2 + 0xc)) {
        case 0x16:
        case 0x1a:
          iVar1 = param_1;
          iVar8 = param_3;
          if (*(char *)(iVar2 + 0xd) == '\x19') {
            while (-1 < iVar8 + -1) {
              FUN_0143e7a0(iVar1,iVar2);
              puVar5 = (undefined4 *)FUN_0143e9a0(0);
              uVar9 = puVar5[1];
              uVar4 = FUN_010162f0(uVar9);
              FUN_01055dc0(*puVar5,uVar4,uVar9);
              iVar3 = FUN_01009750();
              iVar1 = iVar1 + iVar3;
              iVar8 = iVar8 + -1;
            }
          }
          else if (*(char *)(iVar2 + 0xd) == '\x1d') {
            while (-1 < iVar8 + -1) {
              FUN_0143e7a0(iVar1,iVar2);
              puVar5 = (undefined4 *)FUN_0143e9a0(0);
              FUN_010556a0(*puVar5,puVar5[1]);
              iVar3 = FUN_01009750();
              iVar1 = iVar1 + iVar3;
              iVar8 = iVar8 + -1;
            }
          }
          break;
        case 0x19:
          iVar3 = FUN_01016320();
          iVar1 = param_1;
          iVar8 = param_3;
          if (iVar3 == 0) {
            param_2 = 1;
          }
          else {
            param_2 = FUN_01016320();
          }
          while (-1 < iVar8 + -1) {
            FUN_0143e7a0(iVar1,iVar2);
            uVar9 = param_2;
            uVar4 = FUN_010162f0(param_2);
            uVar6 = FUN_0143e830(uVar4);
            FUN_01055dc0(uVar6,uVar4,uVar9);
            iVar3 = FUN_01009750();
            iVar1 = iVar1 + iVar3;
            iVar8 = iVar8 + -1;
          }
          break;
        case 0x1b:
          iVar8 = param_1;
          iVar1 = param_3;
          while (iVar1 = iVar1 + -1, -1 < iVar1) {
            FUN_0143e7a0(iVar8,iVar2);
            piVar7 = (int *)FUN_0143e9b0(0);
            if ((piVar7[1] != 0) && (*piVar7 != 0)) {
              FUN_01055dc0(piVar7[1],*piVar7,piVar7[2]);
            }
            iVar3 = FUN_01009750();
            iVar8 = iVar8 + iVar3;
          }
          break;
        case 0x1d:
          iVar3 = FUN_01016320();
          iVar1 = param_1;
          iVar8 = param_3;
          if (iVar3 == 0) {
            param_2 = 1;
          }
          else {
            param_2 = FUN_01016320();
          }
          while (-1 < iVar8 + -1) {
            FUN_0143e7a0(iVar1,iVar2);
            uVar9 = param_2;
            uVar4 = FUN_0143e830(param_2);
            FUN_010556a0(uVar4,uVar9);
            iVar3 = FUN_01009750();
            iVar1 = iVar1 + iVar3;
            iVar8 = iVar8 + -1;
          }
        }
      }
      local_10 = local_10 + 1;
      iVar2 = FUN_01009570();
    } while (local_10 < iVar2);
  }
  return;
}

// 01056070  FUN_01056070  size=107  [run]
void FUN_01056070(void)

{
  int in_EAX;
  int iVar1;
  undefined4 *unaff_EDI;
  undefined *local_14 [4];
  
  local_14[0] = &DAT_01f9050c;
  local_14[1] = &DAT_01f9047c;
  local_14[2] = &DAT_01f904dc;
  local_14[3] = &DAT_01f904ac;
  if (in_EAX == 1) {
    local_14[0] = &DAT_0225ba94;
    local_14[1] = &DAT_0225baf4;
  }
  else if (in_EAX < 8) {
    local_14[0] = &DAT_0225bbb4;
    local_14[1] = &DAT_0225bb84;
  }
  iVar1 = 0;
  do {
    (**(code **)(*(int *)*unaff_EDI + 0x1c))(local_14[iVar1],0);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  return;
}

// 010560E0  FUN_010560e0  size=430  [run]
void FUN_010560e0(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int local_c;
  undefined4 local_8;
  
  local_c = 0;
  iVar2 = FUN_010095e0();
  if (0 < iVar2) {
    do {
      iVar2 = FUN_010095f0(local_c);
      if ((*(ushort *)(iVar2 + 0x10) & 0x400) != 0x400) {
        switch(*(undefined1 *)(iVar2 + 0xc)) {
        case 0x16:
        case 0x1a:
          iVar1 = param_2;
          iVar6 = param_4;
          if (*(char *)(iVar2 + 0xd) == '\x19') {
            while (-1 < iVar6 + -1) {
              FUN_0143e7a0(iVar1,iVar2);
              piVar4 = (int *)FUN_0143e9a0(0);
              if ((*piVar4 != 0) && (piVar4[1] != 0)) {
                uVar3 = FUN_010162f0(piVar4[1]);
                FUN_010560e0(param_1,*piVar4,uVar3);
              }
              iVar5 = FUN_01009750();
              iVar1 = iVar1 + iVar5;
              iVar6 = iVar6 + -1;
            }
          }
          break;
        case 0x19:
          iVar5 = FUN_01016320();
          iVar1 = param_2;
          iVar6 = param_4;
          if (iVar5 == 0) {
            local_8 = 1;
          }
          else {
            local_8 = FUN_01016320();
          }
          while (-1 < iVar6 + -1) {
            FUN_0143e7a0(iVar1,iVar2);
            uVar3 = FUN_010162f0(local_8);
            uVar3 = FUN_0143e830(uVar3);
            FUN_010560e0(param_1,uVar3);
            iVar5 = FUN_01009750();
            iVar1 = iVar1 + iVar5;
            iVar6 = iVar6 + -1;
          }
          break;
        case 0x1b:
          iVar6 = param_2;
          iVar1 = param_4;
          while (iVar1 = iVar1 + -1, -1 < iVar1) {
            FUN_0143e7a0(iVar6,iVar2);
            piVar4 = (int *)FUN_0143e9b0(0);
            FUN_01055830(param_1,*piVar4);
            if (((*piVar4 != 0) && (piVar4[1] != 0)) && (piVar4[2] != 0)) {
              FUN_010560e0(param_1,piVar4[1],*piVar4,piVar4[2]);
            }
            iVar5 = FUN_01009750();
            iVar6 = iVar6 + iVar5;
          }
        }
      }
      local_c = local_c + 1;
      iVar2 = FUN_010095e0();
    } while (local_c < iVar2);
  }
  return;
}

// 010562B0  FUN_010562b0  size=82  [run]
void __thiscall FUN_010562b0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_01010160(param_2,0);
  if (iVar1 != 0) {
    FUN_01025be0(iVar1,0);
    FUN_0102cc00(param_2);
    if (*(int *)(param_1 + 8) == param_2) {
      *(undefined4 *)(param_1 + 8) = 0;
    }
    uVar2 = FUN_01010120(param_2);
    FUN_010101e0(uVar2);
  }
  return;
}

// 01056310  hkBinaryPackfileReader::vf40  size=33  [run]
int __thiscall hkBinaryPackfileReader::vf40(int param_1,int param_2,int param_3)

{
  if (*(int *)(*(int *)(param_1 + 0x24) + param_2 * 4) != 0) {
    return *(int *)(*(int *)(param_1 + 0x24) + param_2 * 4) + param_3;
  }
  return 0;
}

// 01056340  FUN_01056340  size=88  [run]
void __thiscall FUN_01056340(int param_1,int param_2)

{
  int iVar1;
  LPVOID pvVar2;
  int *piVar3;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x38)) {
    piVar3 = *(int **)(param_1 + 0x34);
    while (*piVar3 != param_2) {
      iVar1 = iVar1 + 1;
      piVar3 = piVar3 + 1;
      if (*(int *)(param_1 + 0x38) <= iVar1) {
        return;
      }
    }
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
    if (*(int *)(param_1 + 0x38) != iVar1) {
      *(undefined4 *)(*(int *)(param_1 + 0x34) + iVar1 * 4) =
           *(undefined4 *)(*(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x38) * 4);
    }
    pvVar2 = TlsGetValue(DAT_01f8fc4c);
    FUN_01005d00(*(undefined4 *)((int)pvVar2 + 0x2c),param_2);
  }
  return;
}

// 010563A0  hkBinaryPackfileReader::vf24  size=760  [run]
int __fastcall hkBinaryPackfileReader::vf24(int *param_1)

{
  int *piVar1;
  LPVOID pvVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined **local_48;
  int local_44;
  int *local_40;
  undefined **local_3c;
  int local_38;
  int *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int *local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  char local_5;
  
  if (param_1[0x1e] != 0) {
    return param_1[0x1e];
  }
  piVar1 = (int *)(**(code **)(*param_1 + 0x30))();
  local_1c = piVar1;
  if (piVar1 != (int *)0x0) {
    FUN_01006000();
  }
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  iVar3 = (**(code **)(**(int **)((int)pvVar2 + 0x2c) + 4))(0x40);
  *(undefined2 *)(iVar3 + 4) = 0x40;
  piVar8 = param_1 + 0x1f;
  uVar4 = (**(code **)(*param_1 + 0x1c))(piVar8);
  iVar3 = _anon_8D865E27::hkContentsUpdateTracker::hkContentsUpdateTracker(param_1[6],uVar4,piVar8);
  param_1[0x1e] = iVar3;
  local_5 = *(int *)(param_1[7] + 0xc) == 1;
  local_10 = 0;
  if (0 < *(int *)(param_1[7] + 0x14)) {
    local_14 = 0;
    do {
      if (*(int *)(param_1[9] + local_10 * 4) != 0) {
        iVar3 = param_1[8] + local_14;
        local_c = *(int *)(param_1[9] + local_10 * 4);
        if (local_5 == '\0') {
          iVar5 = *(int *)(iVar3 + 0x20) - *(int *)(iVar3 + 0x1c);
          local_18 = 0;
          if (0 < (int)(iVar5 + (iVar5 >> 0x1f & 3U)) >> 2) {
            puVar7 = (undefined4 *)(*(int *)(iVar3 + 0x1c) + 8 + local_c);
            do {
              local_20 = puVar7[-2];
              if (local_20 != -1) {
                local_24 = (**(code **)(*param_1 + 0x40))(puVar7[-1],*puVar7);
                (**(code **)(*(int *)param_1[0x1e] + 0x14))(local_24,local_20 + local_c);
              }
              iVar5 = *(int *)(iVar3 + 0x20) - *(int *)(iVar3 + 0x1c);
              local_18 = local_18 + 3;
              puVar7 = puVar7 + 3;
              piVar1 = local_1c;
            } while (local_18 < (int)(iVar5 + (iVar5 >> 0x1f & 3U)) >> 2);
          }
        }
        iVar5 = *(int *)(iVar3 + 0x24) - *(int *)(iVar3 + 0x20);
        local_18 = 0;
        if (0 < (int)(iVar5 + (iVar5 >> 0x1f & 3U)) >> 2) {
          puVar7 = (undefined4 *)(*(int *)(iVar3 + 0x20) + 8 + local_c);
          do {
            if (puVar7[-2] != -1) {
              local_24 = *puVar7;
              local_20 = puVar7[-1];
              local_c = (**(code **)(*param_1 + 0x40))(local_10,puVar7[-2]);
              uVar4 = (**(code **)(*param_1 + 0x40))(local_20,local_24);
              (**(code **)(*(int *)param_1[0x1e] + 0x1c))(local_c,uVar4);
            }
            iVar5 = *(int *)(iVar3 + 0x24) - *(int *)(iVar3 + 0x20);
            local_18 = local_18 + 3;
            puVar7 = puVar7 + 3;
            piVar1 = local_1c;
          } while (local_18 < (int)(iVar5 + (iVar5 >> 0x1f & 3U)) >> 2);
        }
      }
      local_14 = local_14 + 0x30;
      local_10 = local_10 + 1;
    } while (local_10 < *(int *)(param_1[7] + 0x14));
  }
  uVar4 = FUN_010559c0();
  uVar6 = FUN_01055980(uVar4);
  FUN_0105f510(uVar6,uVar4);
  if (local_5 != '\0') {
    local_38 = (**(code **)(*param_1 + 0x28))();
    local_3c = *(undefined ***)(param_1[7] + 0xc);
    local_44 = param_1[0x1e];
    iVar3 = *piVar1;
    local_34 = param_1 + 2;
    local_48 = _anon_8D865E27::PackfilePointersMapListener::vftable;
    local_30 = 0;
    local_2c = 0;
    local_28 = 0xffffffff;
    local_40 = piVar1;
    uVar4 = FUN_010559c0();
    uVar4 = (**(code **)(iVar3 + 0x10))(uVar4);
    uVar6 = (**(code **)(*param_1 + 0x28))(param_1 + 2);
    FUN_0105f980(uVar4,*(undefined4 *)(param_1[7] + 0xc),uVar6);
    FUN_010fad40(*(undefined4 *)(param_1[0x1e] + 0x34),uVar4,&local_48);
    FUN_01010310(&PTR_vftable_018e9b94);
    FUN_0100fd10();
  }
  if (*(int *)(param_1[7] + 0xc) < 7) {
    local_38 = param_1[0x1e];
    iVar3 = *piVar1;
    local_3c = _anon_8D865E27::PackfileCstringListener::vftable;
    local_30 = 0;
    local_2c = 0;
    local_28 = 0xffffffff;
    local_34 = piVar1;
    uVar4 = FUN_010559c0();
    uVar4 = (**(code **)(iVar3 + 0x10))(uVar4);
    FUN_010fad40(*(undefined4 *)(param_1[0x1e] + 0x34),uVar4,&local_3c);
    FUN_01010310(&PTR_vftable_018e9b94);
    FUN_0100fd10();
  }
  if (piVar1 != (int *)0x0) {
    FUN_010060a0();
  }
  return param_1[0x1e];
}

// 010566A0  FUN_010566a0  size=598  [run]
void __thiscall FUN_010566a0(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int local_14;
  int local_c;
  int local_8;
  
  piVar3 = param_2;
  if (*(int *)(param_1[7] + 0xc) < 4) {
    uVar4 = (**(code **)(*param_1 + 0x28))("Havok-4.0.0-b1");
    iVar5 = FUN_01015b90(uVar4);
    if (iVar5 != 0) {
      iVar5 = (**(code **)(*param_1 + 0x3c))("__classindex__");
      if (((-1 < iVar5) && (iVar6 = *(int *)(param_1[8] + 0x18 + iVar5 * 0x30), iVar6 != 0)) &&
         (*(int *)(param_1[9] + iVar5 * 4) != 0)) {
        iVar5 = *(int *)(param_1[9] + iVar5 * 4);
        iVar6 = (int)(iVar6 + (iVar6 >> 0x1f & 3U)) >> 2;
        param_2 = (int *)0x0;
        if (0 < iVar6) {
          do {
            iVar10 = *(int *)(iVar5 + (int)param_2 * 4);
            if (iVar10 == -1) break;
            iVar2 = *(int *)(iVar5 + 4 + (int)param_2 * 4);
            iVar7 = (**(code **)(*param_1 + 0x40))(iVar10,iVar2);
            if (iVar7 != 0) {
              if (piVar3[1] == (piVar3[2] & 0x3fffffffU)) {
                FUN_0100a290(&PTR_vftable_018e9b94,piVar3,0xc);
              }
              piVar9 = (int *)(*piVar3 + piVar3[1] * 0xc);
              piVar3[1] = piVar3[1] + 1;
              *piVar9 = iVar7;
              piVar9[1] = iVar10;
              piVar9[2] = iVar2;
            }
            param_2 = (int *)((int)param_2 + 2);
          } while ((int)param_2 < iVar6);
        }
      }
      goto LAB_010568cc;
    }
  }
  local_14 = 0;
  if (0 < *(int *)(param_1[7] + 0x14)) {
    local_c = 0;
    do {
      if (*(int *)(param_1[9] + local_14 * 4) != 0) {
        iVar5 = *(int *)(param_1[9] + local_14 * 4);
        iVar10 = param_1[8] + local_c;
        iVar6 = *(int *)(iVar10 + 0x24) - *(int *)(iVar10 + 0x20);
        local_8 = 0;
        if (0 < (int)(iVar6 + (iVar6 >> 0x1f & 3U)) >> 2) {
          piVar9 = (int *)(*(int *)(iVar10 + 0x20) + 8 + iVar5);
          do {
            iVar6 = piVar9[-2];
            if (iVar6 != -1) {
              iVar2 = piVar9[-1];
              iVar7 = *piVar9;
              uVar4 = (**(code **)(*param_1 + 0x40))(iVar2,iVar7);
              iVar8 = FUN_01015b90(uVar4,"hkClass");
              if (iVar8 == 0) {
                if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
                  FUN_0100a290(&PTR_vftable_018e9b94,param_2,0xc);
                }
                iVar8 = param_2[1];
                param_2[1] = iVar8 + 1;
                piVar1 = (int *)(*param_2 + iVar8 * 0xc);
                *piVar1 = iVar6 + iVar5;
                piVar1[1] = iVar2;
                piVar1[2] = iVar7;
              }
            }
            iVar6 = *(int *)(iVar10 + 0x24) - *(int *)(iVar10 + 0x20);
            local_8 = local_8 + 3;
            piVar9 = piVar9 + 3;
          } while (local_8 < (int)(iVar6 + (iVar6 >> 0x1f & 3U)) >> 2);
        }
      }
      local_c = local_c + 0x30;
      local_14 = local_14 + 1;
    } while (local_14 < *(int *)(param_1[7] + 0x14));
  }
LAB_010568cc:
  iVar5 = 0;
  if (0 < piVar3[1]) {
    do {
      FUN_010557f0();
      iVar5 = iVar5 + 1;
    } while (iVar5 < piVar3[1]);
  }
  return;
}

// 01056900  hkBinaryPackfileReader::vf1C  size=661  [run]
int __fastcall hkBinaryPackfileReader::vf1C(int *param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  LPVOID pvVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined **local_58;
  int local_54;
  undefined4 *local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int *local_38;
  undefined4 local_34;
  uint local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  int *local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  if (param_1[0x1d] == 0) {
    piVar2 = (int *)(**(code **)(*param_1 + 0x30))();
    local_14 = -1;
    local_1c = piVar2;
    uVar3 = (**(code **)(*param_1 + 0x28))();
    cVar1 = FUN_010557a0(uVar3);
    if (cVar1 != '\0') {
      local_14 = (**(code **)(*param_1 + 0x3c))("__types__");
    }
    local_34 = 0;
    local_30 = 0;
    local_2c = 0xffffffff;
    local_18 = 0;
    if (0 < *(int *)(param_1[7] + 0x14)) {
      local_10 = 0;
      do {
        if (*(int *)(param_1[9] + local_18 * 4) != 0) {
          local_28 = *(int *)(param_1[9] + local_18 * 4);
          iVar9 = param_1[8] + local_10;
          iVar4 = *(int *)(iVar9 + 0x24) - *(int *)(iVar9 + 0x20);
          local_c = 0;
          if (0 < (int)(iVar4 + (iVar4 >> 0x1f & 3U)) >> 2) {
            puVar6 = (undefined4 *)(*(int *)(iVar9 + 0x20) + 8 + local_28);
            do {
              local_24 = puVar6[-2];
              if (local_24 != -1) {
                uVar3 = (**(code **)(*param_1 + 0x40))(puVar6[-1],*puVar6);
                local_20 = (**(code **)(*local_1c + 0x10))(uVar3);
                if (local_14 != local_c) {
                  local_8 = FUN_010093a0();
                  iVar4 = FUN_01015b90(local_8,"hkClass");
                  if ((((iVar4 != 0) && (iVar4 = FUN_01015b90(local_8,"hkClassMember"), iVar4 != 0))
                      && (iVar4 = FUN_01015b90(local_8,"hkClassEnum"), iVar4 != 0)) &&
                     (iVar4 = FUN_01015b90(local_8,"hkClassEnumItem"), iVar4 != 0)) {
                    FUN_010100a0(&PTR_vftable_018e9b94,local_24 + local_28,local_20);
                  }
                }
              }
              iVar4 = *(int *)(iVar9 + 0x24) - *(int *)(iVar9 + 0x20);
              local_c = local_c + 3;
              puVar6 = puVar6 + 3;
            } while (local_c < (int)(iVar4 + (iVar4 >> 0x1f & 3U)) >> 2);
          }
        }
        local_10 = local_10 + 0x30;
        local_18 = local_18 + 1;
        piVar2 = local_1c;
      } while (local_18 < *(int *)(param_1[7] + 0x14));
    }
    pvVar5 = TlsGetValue(DAT_01f8fc4c);
    puVar6 = (undefined4 *)(**(code **)(**(int **)((int)pvVar5 + 0x2c) + 4))(0xc);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0x80000000;
    }
    param_1[0x1d] = (int)puVar6;
    local_3c = (**(code **)(*param_1 + 0x28))();
    local_40 = *(undefined4 *)(param_1[7] + 0xc);
    local_54 = param_1[0x1d];
    local_50 = &local_34;
    local_38 = param_1 + 2;
    local_58 = _anon_8D865E27::PackfileObjectsCollector::vftable;
    local_4c = 0;
    local_48 = 0;
    local_44 = 0xffffffff;
    uVar7 = local_30 & 0x7fffffff;
    uVar8 = *(uint *)(local_54 + 8) & 0x3fffffff;
    if (uVar8 < uVar7) {
      uVar8 = uVar8 * 2;
      if (uVar7 < uVar8) {
        uVar7 = uVar8;
      }
      FUN_0100a210(&PTR_vftable_018e9b94,local_54,uVar7,8);
    }
    iVar4 = *piVar2;
    uVar3 = FUN_010559c0();
    uVar3 = (**(code **)(iVar4 + 0x10))(uVar3);
    uVar3 = FUN_01055980(uVar3,&local_58);
    FUN_010fad40(uVar3);
    FUN_01010310(&PTR_vftable_018e9b94);
    FUN_0100fd10();
    local_58 = hkObjectInspector::ObjectListener::vftable;
    FUN_01010310(&PTR_vftable_018e9b94);
    FUN_0100fd10();
  }
  return param_1[0x1d];
}

// 01056BA0  FUN_01056ba0  size=288  [run]
undefined4 __thiscall FUN_01056ba0(int param_1,int *param_2,int *param_3)

{
  char *pcVar1;
  undefined4 uVar2;
  LPVOID pvVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_20;
  undefined4 local_10;
  undefined1 local_5;
  
  if (*(int *)(param_1 + 0x7c) != 0) {
    FUN_010060a0();
  }
  *(undefined4 *)(param_1 + 0x7c) = 0;
  FUN_010f9a30(0);
  pcVar1 = (char *)(**(code **)(*param_2 + 0x24))(&local_5);
  if (*pcVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*param_2 + 0x2c))();
  }
  *(undefined4 *)(param_1 + 0x70) = uVar2;
  if (param_3 == (int *)0x0) {
    pvVar3 = TlsGetValue(DAT_01f8fc4c);
    param_3 = (int *)FUN_01005cb0(*(undefined4 *)((int)pvVar3 + 0x2c),0x40);
    iVar4 = *(int *)(param_1 + 0x18);
    if (*(uint *)(iVar4 + 0x38) == (*(uint *)(iVar4 + 0x3c) & 0x3fffffff)) {
      FUN_0100a290(&PTR_vftable_018e9b94,(int *)(iVar4 + 0x34),4);
    }
    *(int **)(*(int *)(iVar4 + 0x34) + *(int *)(iVar4 + 0x38) * 4) = param_3;
    *(int *)(iVar4 + 0x38) = *(int *)(iVar4 + 0x38) + 1;
  }
  iVar4 = (**(code **)(*param_2 + 0x10))(param_3,0x40);
  if (iVar4 == 0x40) {
    FUN_01015ea0(&local_48,0xffffffff,0x40);
    local_48 = 0x57e0e057;
    local_44 = 0x10c0c010;
    local_20 = 0;
    local_10 = 0;
    if ((*param_3 == 0x57e0e057) && (param_3[1] == 0x10c0c010)) {
      *(int **)(param_1 + 0x1c) = param_3;
      uVar5 = FUN_01055710(param_3);
      (**(code **)((int)((ulonglong)uVar5 >> 0x20) + 0x2c))((int)uVar5);
      return 0;
    }
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return 1;
}

// 01056CC0  FUN_01056cc0  size=284  [run]
undefined4 __thiscall FUN_01056cc0(int param_1,int *param_2,int param_3)

{
  LPVOID pvVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  
  if (*(int *)(param_1 + 0x7c) != 0) {
    FUN_010060a0();
  }
  *(undefined4 *)(param_1 + 0x7c) = 0;
  FUN_010f9a30(0);
  if (param_3 == 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0x14);
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    param_3 = FUN_01005cb0(*(undefined4 *)((int)pvVar1 + 0x2c),iVar2 * 0x30);
    iVar2 = *(int *)(param_1 + 0x18);
    if (*(uint *)(iVar2 + 0x38) == (*(uint *)(iVar2 + 0x3c) & 0x3fffffff)) {
      FUN_0100a290(&PTR_vftable_018e9b94,(int *)(iVar2 + 0x34),4);
    }
    *(int *)(*(int *)(iVar2 + 0x34) + *(int *)(iVar2 + 0x38) * 4) = param_3;
    *(int *)(iVar2 + 0x38) = *(int *)(iVar2 + 0x38) + 1;
  }
  iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 0x14) * 0x30;
  iVar2 = (**(code **)(*param_2 + 0x10))(param_3,iVar5);
  if (iVar2 != iVar5) {
    return 1;
  }
  *(int *)(param_1 + 0x20) = param_3;
  iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0x14);
  uVar3 = *(uint *)(param_1 + 0x2c) & 0x3fffffff;
  if ((int)uVar3 < iVar2) {
    iVar5 = uVar3 * 2;
    iVar4 = iVar2;
    if (iVar2 < iVar5) {
      iVar4 = iVar5;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,(int *)(param_1 + 0x24),iVar4,4);
  }
  iVar5 = iVar2 - *(int *)(param_1 + 0x28);
  puVar6 = (undefined4 *)(*(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x28) * 4);
  if (0 < iVar5) {
    for (; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
  }
  *(int *)(param_1 + 0x28) = iVar2;
  if (*(int *)(*(int *)(param_1 + 0x1c) + 0xc) < 4) {
    FUN_01055680(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x14));
  }
  return 0;
}

// 01056DE0  _anon_8D865E27::PackfileObjectsCollector::vf04  size=540  [run]
undefined4 __thiscall
_anon_8D865E27::PackfileObjectsCollector::vf04
          (int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 *local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  piVar3 = param_4;
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1[1] == (piVar1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,piVar1,8);
  }
  puVar9 = (undefined4 *)(*piVar1 + piVar1[1] * 8);
  piVar1[1] = piVar1[1] + 1;
  puVar9[1] = param_3;
  *puVar9 = param_2;
  FUN_010100a0(&PTR_vftable_018e9b94,param_2,2);
  local_14 = (undefined4 *)0x0;
  local_10 = 0;
  local_c = 0x80000000;
  if (0 < param_4[1]) {
    FUN_0100a210(&PTR_vftable_018e9b8c,&local_14,param_4[1],8);
  }
  local_8 = 0;
  uVar8 = local_10;
  if (0 < param_4[1]) {
    do {
      puVar9 = (undefined4 *)(*param_4 + local_8 * 8);
      iVar7 = *(int *)*puVar9;
      if ((iVar7 != 0) &&
         (iVar4 = FUN_01010120(iVar7), uVar8 = local_10, *(int *)(param_1 + 0x14) < iVar4)) {
        uVar5 = FUN_01010160(iVar7,puVar9[1]);
        puVar9[1] = uVar5;
        FUN_010100a0(&PTR_vftable_018e9b94,iVar7,1);
        FUN_0105f980(puVar9[1],*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),
                     *(undefined4 *)(param_1 + 0x20));
        if (local_10 == (local_c & 0x3fffffff)) {
          FUN_0100a290(&PTR_vftable_018e9b8c,&local_14,8);
        }
        uVar8 = local_10 + 1;
        local_14[local_10 * 2] = *puVar9;
        (local_14 + local_10 * 2)[1] = puVar9[1];
        local_10 = uVar8;
      }
      local_8 = local_8 + 1;
    } while ((int)local_8 < param_4[1]);
  }
  uVar10 = param_4[1];
  if ((int)uVar8 <= param_4[1]) {
    uVar10 = uVar8;
  }
  local_8 = uVar8;
  if ((int)(param_4[2] & 0x3fffffffU) < (int)uVar8) {
    uVar2 = (param_4[2] & 0x3fffffffU) * 2;
    if ((int)uVar8 < (int)uVar2) {
      uVar8 = uVar2;
    }
    FUN_0100a210(&PTR_vftable_018e9b8c,param_4,uVar8,8);
  }
  puVar9 = (undefined4 *)*param_4;
  puVar6 = local_14;
  param_4 = (int *)uVar10;
  if (0 < (int)uVar10) {
    do {
      *puVar9 = *puVar6;
      puVar9[1] = puVar6[1];
      puVar9 = puVar9 + 2;
      param_4 = (int *)((int)param_4 - 1);
      puVar6 = puVar6 + 2;
    } while (param_4 != (int *)0x0);
  }
  puVar9 = (undefined4 *)(*piVar3 + uVar10 * 8);
  iVar7 = local_8 - uVar10;
  if (0 < iVar7) {
    iVar4 = (int)local_14 + (uVar10 * 8 - (int)puVar9);
    do {
      if (puVar9 != (undefined4 *)0x0) {
        *puVar9 = *(undefined4 *)(iVar4 + (int)puVar9);
        puVar9[1] = *(undefined4 *)(iVar4 + 4 + (int)puVar9);
      }
      puVar9 = puVar9 + 2;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  piVar3[1] = local_8;
  FUN_01055ad0(param_2,param_3,*(undefined4 *)(param_1 + 8),1);
  local_10 = 0;
  if (-1 < (int)local_c) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_14,local_c * 8);
  }
  return 0;
}

// 01057000  _anon_8D865E27::PackfilePointersMapListener::vf04  size=302  [run]
undefined4 __thiscall
_anon_8D865E27::PackfilePointersMapListener::vf04
          (int param_1,int param_2,undefined4 param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int local_10;
  uint local_c;
  uint local_8;
  
  FUN_010100a0(&PTR_vftable_018e9b94,param_2,2);
  local_10 = 0;
  local_c = 0;
  local_8 = 0x80000000;
  if (0 < param_4[1]) {
    FUN_0100a210(&PTR_vftable_018e9b8c,&local_10,param_4[1],8);
  }
  param_2 = 0;
  if (0 < param_4[1]) {
    do {
      puVar1 = (undefined4 *)(*param_4 + param_2 * 8);
      iVar3 = *(int *)*puVar1;
      (**(code **)(**(int **)(param_1 + 4) + 0x14))(iVar3,(int *)*puVar1);
      if ((iVar3 != 0) && (iVar4 = FUN_01010120(iVar3), *(int *)(param_1 + 0x20) < iVar4)) {
        FUN_010100a0(&PTR_vftable_018e9b94,iVar3,1);
        FUN_01055d50(puVar1);
        if (local_c == (local_8 & 0x3fffffff)) {
          FUN_0100a290(&PTR_vftable_018e9b8c,&local_10,8);
        }
        puVar2 = (undefined4 *)(local_10 + local_c * 8);
        local_c = local_c + 1;
        *puVar2 = *puVar1;
        puVar2[1] = puVar1[1];
      }
      param_2 = param_2 + 1;
    } while (param_2 < param_4[1]);
  }
  FUN_01058870(&local_10);
  local_c = 0;
  if (-1 < (int)local_8) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_10,local_8 * 8);
  }
  return 0;
}

// 01057130  _anon_8D865E27::PackfileCstringListener::vf04  size=303  [run]
undefined4 __thiscall
_anon_8D865E27::PackfileCstringListener::vf04
          (int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int local_18;
  uint local_14;
  uint local_10;
  int local_c;
  int local_8;
  
  local_c = param_1;
  FUN_010100a0(&PTR_vftable_018e9b94,param_2,2);
  local_18 = 0;
  local_14 = 0;
  local_10 = 0x80000000;
  if (0 < param_4[1]) {
    FUN_0100a210(&PTR_vftable_018e9b8c,&local_18,param_4[1],8);
  }
  local_8 = 0;
  if (0 < param_4[1]) {
    do {
      puVar1 = (undefined4 *)(*param_4 + local_8 * 8);
      iVar3 = *(int *)*puVar1;
      if ((iVar3 != 0) && (iVar4 = FUN_01010120(iVar3), *(int *)(param_1 + 0x14) < iVar4)) {
        FUN_010100a0(&PTR_vftable_018e9b94,iVar3,1);
        if (local_14 == (local_10 & 0x3fffffff)) {
          FUN_0100a290(&PTR_vftable_018e9b8c,&local_18,8);
        }
        puVar2 = (undefined4 *)(local_18 + local_14 * 8);
        local_14 = local_14 + 1;
        *puVar2 = *puVar1;
        puVar2[1] = puVar1[1];
      }
      local_8 = local_8 + 1;
    } while (local_8 < param_4[1]);
  }
  FUN_01058870(&local_18);
  FUN_01055dc0(param_2,param_3,1);
  local_14 = 0;
  if (-1 < (int)local_10) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_18,local_10 * 8);
  }
  return 0;
}

// 01057260  hkBinaryPackfileReader::BinaryPackfileData::BinaryPackfileData  size=137  [run]
undefined4 * __fastcall
hkBinaryPackfileReader::BinaryPackfileData::BinaryPackfileData(undefined4 *param_1)

{
  LPVOID pvVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  hkPackfileReader::hkPackfileReader();
  *param_1 = hkBinaryPackfileReader::vftable;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = &DAT_80000010;
  param_1[9] = param_1 + 0xc;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  puVar2 = (undefined4 *)(**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x70);
  *(undefined2 *)(puVar2 + 1) = 0x70;
  hkPackfileData::hkPackfileData(0);
  *puVar2 = vftable;
  param_1[6] = puVar2;
  uVar3 = FUN_010500f0();
  uVar3 = FUN_0104ed70(uVar3);
  FUN_010f9a30(uVar3);
  return param_1;
}

// 010572F0  hkBinaryPackfileReader::vf30  size=480  [run]
int __fastcall hkBinaryPackfileReader::vf30(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  LPVOID pvVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  int local_24;
  int local_20;
  uint local_1c;
  int *local_18;
  int *local_14;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  iVar1 = param_1[0x1f];
  piVar7 = param_1 + 0x1f;
  if (iVar1 == 0) {
    local_14 = piVar7;
    iVar1 = (**(code **)(*param_1 + 0x28))();
    if (iVar1 == 0) {
      local_c = 0;
    }
    else {
      uVar2 = FUN_010e0a10(iVar1);
      iVar3 = FUN_01015b90(uVar2);
      if (iVar3 == 0) {
        local_c = (**(code **)(*DAT_0209b610 + 0x10))();
      }
      else {
        local_c = FUN_0104ed70(iVar1);
      }
    }
    pvVar4 = TlsGetValue(DAT_01f8fc4c);
    iVar1 = (**(code **)(**(int **)((int)pvVar4 + 0x2c) + 4))(0x20);
    *(undefined2 *)(iVar1 + 4) = 0x20;
    iVar1 = hkDynamicClassNameRegistry::hkDynamicClassNameRegistry(0);
    if (iVar1 != 0) {
      FUN_01006000();
    }
    if (*piVar7 != 0) {
      FUN_010060a0();
    }
    *piVar7 = iVar1;
    FUN_010060a0();
    if ((param_1[0x1e] == 0) || (*(int *)(param_1[0x1e] + 0x38) == 0)) {
      local_24 = 0;
      local_20 = 0;
      local_1c = 0x80000000;
      FUN_010566a0(&local_24);
      if (0 < local_20) {
        local_10 = 0;
        local_8 = 0;
        do {
          uVar2 = *(undefined4 *)(local_8 + local_24);
          uVar6 = (**(code **)(*param_1 + 0x28))(param_1 + 2);
          FUN_0105f980(uVar2,*(undefined4 *)(param_1[7] + 0xc),uVar6);
          local_18 = (int *)*piVar7;
          iVar1 = *local_18;
          uVar6 = FUN_010093a0();
          (**(code **)(iVar1 + 0x1c))(uVar2,uVar6);
          piVar7 = local_14;
          local_8 = local_8 + 0xc;
          local_10 = local_10 + 1;
        } while (local_10 < local_20);
        FUN_01056070();
      }
      local_20 = 0;
      if (-1 < (int)local_1c) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_24,(local_1c & 0x3fffffff) * 0xc);
      }
    }
    else {
      FUN_010faf60(0);
      piVar5 = (int *)(**(code **)(*param_1 + 0x1c))();
      iVar1 = 0;
      if (0 < piVar5[1]) {
        do {
          local_14 = *(int **)(*piVar5 + 4 + iVar1 * 8);
          FUN_01055830(*piVar7,local_14);
          FUN_010560e0(*piVar7,*(undefined4 *)(*piVar5 + iVar1 * 8),local_14,1);
          iVar1 = iVar1 + 1;
        } while (iVar1 < piVar5[1]);
        FUN_010faf60(local_c);
        return *piVar7;
      }
    }
    FUN_010faf60(local_c);
    iVar1 = *piVar7;
  }
  return iVar1;
}

// 010574D0  FUN_010574d0  size=555  [run]
undefined4 __thiscall FUN_010574d0(int *param_1,int *param_2,int param_3,int param_4)

{
  LPVOID pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if (param_1[0x1f] != 0) {
    FUN_010060a0();
  }
  param_1[0x1f] = 0;
  FUN_010f9a30(0);
  iVar5 = param_3 * 0x30 + param_1[8];
  local_8 = *(int *)(iVar5 + 0x2c);
  if (param_4 == 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    param_4 = FUN_01005cb0(*(undefined4 *)((int)pvVar1 + 0x2c),local_8);
    iVar2 = param_1[6];
    if (*(uint *)(iVar2 + 0x38) == (*(uint *)(iVar2 + 0x3c) & 0x3fffffff)) {
      FUN_0100a290(&PTR_vftable_018e9b94,(int *)(iVar2 + 0x34),4);
    }
    *(int *)(*(int *)(iVar2 + 0x34) + *(int *)(iVar2 + 0x38) * 4) = param_4;
    *(int *)(iVar2 + 0x38) = *(int *)(iVar2 + 0x38) + 1;
  }
  iVar2 = (**(code **)(*param_2 + 0x10))(param_4,local_8);
  if (iVar2 != local_8) {
    return 1;
  }
  iVar2 = *(int *)(iVar5 + 0x18) + param_4;
  iVar3 = *(int *)(iVar5 + 0x1c) - *(int *)(iVar5 + 0x18);
  iVar4 = 0;
  if (0 < (int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2) {
    do {
      iVar3 = *(int *)(iVar2 + iVar4 * 4);
      if (iVar3 != -1) {
        *(int *)(iVar3 + param_4) = *(int *)(iVar2 + 4 + iVar4 * 4) + param_4;
      }
      iVar3 = *(int *)(iVar5 + 0x1c) - *(int *)(iVar5 + 0x18);
      iVar4 = iVar4 + 2;
    } while (iVar4 < (int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2);
  }
  local_14 = 0;
  local_10 = 0;
  local_c = -0x80000000;
  FUN_010fb110(param_4,&local_14);
  iVar5 = 0;
  if (0 < local_10) {
    do {
      FUN_010f9d30(*(undefined4 *)(local_14 + iVar5 * 8),*(undefined4 *)(local_14 + 4 + iVar5 * 8));
      iVar5 = iVar5 + 1;
    } while (iVar5 < local_10);
  }
  local_10 = 0;
  if (-1 < local_c) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_14,local_c * 8);
  }
  local_14 = 0;
  local_10 = 0;
  local_c = -0x80000000;
  FUN_010fb1b0(param_4,&local_14);
  iVar5 = 0;
  if (0 < local_10) {
    do {
      FUN_010f9d70(*(undefined4 *)(local_14 + iVar5 * 8),*(undefined4 *)(local_14 + 4 + iVar5 * 8));
      iVar5 = iVar5 + 1;
    } while (iVar5 < local_10);
  }
  local_10 = 0;
  if (-1 < local_c) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_14,local_c * 8);
  }
  *(int *)(param_1[9] + param_3 * 4) = param_4;
  iVar5 = *(int *)(param_1[7] + 0x20);
  iVar2 = *(int *)(param_1[7] + 0x24);
  if (((param_3 == iVar5) && (-1 < iVar2)) && (*(int *)(param_1[7] + 0xc) < 3)) {
    (**(code **)(*param_1 + 0x40))(iVar5,iVar2);
    iVar5 = FUN_010093a0();
    *(int *)(param_1[7] + 0x24) = iVar5 - param_4;
  }
  return 0;
}

// 01057700  FUN_01057700  size=77  [run]
undefined4 __thiscall FUN_01057700(int param_1,int *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*param_2 + 0x28))
                    (*(int *)(*(int *)(param_1 + 0x20) + 0x14 + param_3 * 0x30) +
                     *(int *)(param_1 + 0x70),0);
  if (iVar1 == 0) {
    uVar2 = FUN_010574d0(param_2,param_3,param_4);
    return uVar2;
  }
  return 1;
}

// 01057750  FUN_01057750  size=362  [run]
undefined4 __thiscall FUN_01057750(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = *(int *)(*(int *)(param_1 + 0x24) + param_2 * 4);
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = -0x80000000;
  FUN_010fb1b0(local_8,&local_18);
  if (0 < local_14) {
    do {
      FUN_010f9af0(*(undefined4 *)(local_18 + 4 + iVar2 * 8));
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_14);
  }
  local_14 = 0;
  if (-1 < local_10) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_18,local_10 * 8);
  }
  local_18 = 0;
  local_14 = 0;
  local_10 = -0x80000000;
  FUN_010fb110(local_8,&local_18);
  iVar2 = 0;
  if (0 < local_14) {
    do {
      FUN_010f9aa0(*(undefined4 *)(local_18 + 4 + iVar2 * 8));
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_14);
  }
  local_14 = 0;
  if (-1 < local_10) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_18,local_10 * 8);
  }
  iVar1 = *(int *)(param_2 * 0x30 + iVar1 + 0x20) + local_8;
  local_c = FUN_010556e0();
  iVar2 = 0;
  if (0 < local_c) {
    do {
      FUN_010562b0(*(int *)(iVar1 + iVar2 * 4) + local_8);
      iVar2 = iVar2 + 3;
    } while (iVar2 < local_c);
  }
  if (*(int *)(param_1 + 0x7c) != 0) {
    FUN_010060a0();
  }
  *(undefined4 *)(param_1 + 0x7c) = 0;
  FUN_010f9a30(0);
  FUN_01056340(*(undefined4 *)(*(int *)(param_1 + 0x24) + param_2 * 4));
  *(undefined4 *)(*(int *)(param_1 + 0x24) + param_2 * 4) = 0;
  return 0;
}

// 010578C0  FUN_010578c0  size=298  [run]
void __thiscall FUN_010578c0(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int local_20;
  int local_1c;
  int local_18;
  int *local_14;
  int *local_10;
  int local_c;
  char local_5;
  
  local_5 = param_1[0x1e] == 0;
  local_14 = param_1;
  local_10 = (int *)(**(code **)(*param_1 + 0x24))();
  piVar2 = (int *)(**(code **)(*param_1 + 0x30))();
  if (piVar2 != (int *)0x0) {
    FUN_01006000();
  }
  local_20 = 0;
  local_1c = 0;
  local_18 = -0x80000000;
  (**(code **)(*piVar2 + 0x14))(&local_20);
  local_c = 0;
  if (0 < local_1c) {
    do {
      iVar1 = *(int *)(local_20 + local_c * 4);
      iVar4 = *param_2;
      uVar3 = FUN_010093a0();
      iVar4 = (**(code **)(iVar4 + 0x10))(uVar3);
      if ((iVar4 != 0) && (iVar4 != iVar1)) {
        (**(code **)(*piVar2 + 0x1c))(iVar4,0);
        (**(code **)(*local_10 + 0x18))(iVar1,iVar4,&DAT_01f9050c);
        (**(code **)(*local_10 + 0x20))(iVar4);
      }
      local_c = local_c + 1;
      param_1 = local_14;
    } while (local_c < local_1c);
  }
  if (local_5 != '\0') {
    FUN_010060a0();
    param_1[0x1e] = 0;
  }
  FUN_01006000();
  if (param_1[0x1f] != 0) {
    FUN_010060a0();
  }
  param_1[0x1f] = (int)piVar2;
  local_1c = 0;
  if (-1 < local_18) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_20,local_18 * 4);
  }
  local_20 = 0;
  local_18 = 0x80000000;
  FUN_010060a0();
  return;
}

// 010579F0  hkBinaryPackfileReader::~hkBinaryPackfileReader  size=194  [run]
void __fastcall hkBinaryPackfileReader::~hkBinaryPackfileReader(undefined4 *param_1)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  *param_1 = vftable;
  if ((undefined4 *)param_1[0x1e] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x1e])(1);
  }
  puVar1 = (undefined4 *)param_1[0x1d];
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    if (-1 < (int)puVar1[2]) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(*puVar1,puVar1[2] * 8);
    }
    *puVar1 = 0;
    puVar1[2] = 0x80000000;
    pvVar2 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar2 + 0x2c) + 8))(puVar1,0xc);
  }
  FUN_010060a0();
  if (param_1[0x1f] != 0) {
    FUN_010060a0();
  }
  param_1[0x1f] = 0;
  param_1[10] = 0;
  if (-1 < (int)param_1[0xb]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[9],param_1[0xb] * 4);
  }
  param_1[9] = 0;
  param_1[0xb] = 0x80000000;
  hkBaseObject::hkBaseObject_48();
  return;
}

// 01057AC0  hkBinaryPackfileReader::vf34  size=301  [run]
int __fastcall hkBinaryPackfileReader::vf34(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  
  (**(code **)(*param_1 + 0x1c))();
  iVar2 = FUN_010f9b40();
  if (iVar2 == 0) {
    iVar2 = param_1[0x1e];
    (**(code **)(*param_1 + 0x24))();
    iVar3 = (**(code **)(*param_1 + 0x28))();
    if (iVar3 != 0) {
      uVar4 = FUN_010e0a10(iVar3);
      iVar5 = FUN_01015b90(uVar4);
      if (iVar5 == 0) {
        iVar3 = (**(code **)(*DAT_0209b610 + 0x10))();
      }
      else {
        iVar3 = FUN_0104ed70(iVar3);
      }
      if (iVar3 != 0) {
        FUN_010578c0(iVar3);
      }
    }
    iVar5 = param_1[0x1e];
    iVar1 = *(int *)(iVar5 + 0x30);
    iVar3 = 0;
    if (-1 < iVar1) {
      piVar6 = *(int **)(iVar5 + 0x28);
      do {
        if (*piVar6 != -1) break;
        iVar3 = iVar3 + 1;
        piVar6 = piVar6 + 2;
      } while (iVar3 <= iVar1);
    }
    if (iVar3 <= iVar1) {
      do {
        FUN_010100a0(&PTR_vftable_018e9b94,*(undefined4 *)(*(int *)(iVar5 + 0x28) + iVar3 * 8),
                     *(undefined4 *)(*(int *)(iVar5 + 0x28) + 4 + iVar3 * 8));
        iVar1 = *(int *)(iVar5 + 0x30);
        iVar3 = iVar3 + 1;
        if (iVar3 <= iVar1) {
          piVar6 = (int *)(*(int *)(iVar5 + 0x28) + iVar3 * 8);
          do {
            if (*piVar6 != -1) break;
            iVar3 = iVar3 + 1;
            piVar6 = piVar6 + 2;
          } while (iVar3 <= iVar1);
        }
      } while (iVar3 <= iVar1);
    }
    uVar4 = (**(code **)(*param_1 + 0x30))();
    FUN_010f9a30(uVar4);
    uVar4 = (**(code **)(*param_1 + 0x18))();
    FUN_010f9a00(*(undefined4 *)(param_1[0x1e] + 0x34),uVar4);
    if (iVar2 == 0) {
      FUN_010060a0();
      param_1[0x1e] = 0;
    }
  }
  return param_1[6];
}

// 01057BF0  hkBinaryPackfileReader::vf20  size=154  [run]
undefined4 * __thiscall hkBinaryPackfileReader::vf20(int *param_1,undefined4 *param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  
  if (param_1[0x1e] == 0) {
    uVar3 = FUN_01055980();
  }
  else {
    uVar3 = *(undefined4 *)(param_1[0x1e] + 0x34);
  }
  *param_2 = uVar3;
  pcVar1 = *(code **)(*param_1 + 0x28);
  param_2[1] = 0;
  iVar2 = (*pcVar1)();
  if (iVar2 != 0) {
    uVar3 = FUN_010e0a10(iVar2);
    iVar4 = FUN_01015b90(uVar3);
    if (iVar4 == 0) {
      iVar2 = (**(code **)(*DAT_0209b610 + 0x10))();
    }
    else {
      iVar2 = FUN_0104ed70(iVar2);
    }
    if (iVar2 != 0) {
      FUN_010578c0(iVar2);
    }
  }
  piVar5 = (int *)(**(code **)(*param_1 + 0x30))();
  iVar2 = *piVar5;
  uVar3 = (**(code **)(*param_1 + 0x18))();
  uVar3 = (**(code **)(iVar2 + 0x10))(uVar3);
  param_2[1] = uVar3;
  return param_2;
}

// 01057C90  hkBinaryPackfileReader::vf10  size=252  [run]
undefined4 __thiscall hkBinaryPackfileReader::vf10(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = param_3;
  if (param_3 != 0) {
    FUN_0105fa00();
  }
  iVar1 = (**(code **)(*param_1 + 0x18))();
  iVar5 = param_2;
  if ((param_2 != 0) && (iVar1 != 0)) {
    piVar2 = (int *)(**(code **)(*param_1 + 0x30))();
    (**(code **)(*piVar2 + 0x10))(iVar5);
    uVar3 = (**(code **)(*piVar2 + 0x10))(iVar1);
    pcVar4 = (char *)FUN_010093e0((int)&param_2 + 3,uVar3);
    iVar7 = param_3;
    if (*pcVar4 == '\0') {
      return 0;
    }
  }
  (**(code **)(*param_1 + 0x1c))();
  if (iVar7 == 0) {
    iVar5 = (**(code **)(*param_1 + 0x28))();
    if (iVar5 != 0) {
      uVar3 = FUN_010e0a10(iVar5);
      iVar6 = FUN_01015b90(uVar3);
      if (iVar6 == 0) {
        iVar5 = (**(code **)(*DAT_0209b610 + 0x10))();
      }
      else {
        iVar5 = FUN_0104ed70(iVar5);
      }
      if (iVar5 != 0) {
        FUN_010578c0(iVar5);
      }
    }
    uVar3 = (**(code **)(*param_1 + 0x30))();
    FUN_010f9a30(uVar3);
  }
  else {
    iVar5 = FUN_010558f0(iVar7);
    if (iVar5 == 1) {
      return 0;
    }
  }
  uVar3 = (**(code **)(*(int *)param_1[6] + 0x18))(iVar1,iVar7);
  return uVar3;
}

// 01057D90  hkBaseObject::hkBaseObject_122  size=1446  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall hkBaseObject::hkBaseObject_122(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  LPVOID pvVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  undefined **local_84;
  undefined2 local_7e;
  int local_7c;
  int local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  int local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54 [15];
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_10 = 0;
  if (0 < *(int *)(param_1[7] + 0x14)) {
    local_8 = 0;
    do {
      if (*(int *)(param_1[9] + local_10 * 4) != 0) {
        local_18 = *(int *)(param_1[9] + local_10 * 4);
        iVar6 = param_1[8] + local_8;
        iVar1 = *(int *)(iVar6 + 0x20) - *(int *)(iVar6 + 0x1c);
        local_c = 0;
        if (0 < (int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2) {
          puVar5 = (undefined4 *)(*(int *)(iVar6 + 0x1c) + 8 + local_18);
          do {
            local_14 = puVar5[-2];
            if (local_14 != -1) {
              uVar2 = (**(code **)(*param_1 + 0x40))(puVar5[-1],*puVar5);
              *(undefined4 *)(local_14 + local_18) = uVar2;
            }
            iVar1 = *(int *)(iVar6 + 0x20) - *(int *)(iVar6 + 0x1c);
            local_c = local_c + 3;
            puVar5 = puVar5 + 3;
          } while (local_c < (int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2);
        }
      }
      local_8 = local_8 + 0x30;
      local_10 = local_10 + 1;
    } while (local_10 < *(int *)(param_1[7] + 0x14));
  }
  if (((*(int *)(param_1[7] + 0xc) < 5) && (param_1[0x1e] == 0)) && (param_1[0x1f] == 0)) {
    pvVar3 = TlsGetValue(DAT_01f8fc4c);
    iVar1 = (**(code **)(**(int **)((int)pvVar3 + 0x2c) + 4))(0x20);
    *(undefined2 *)(iVar1 + 4) = 0x20;
    iVar1 = (**(code **)(*param_1 + 0x28))();
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = FUN_010e0a10(iVar1);
      iVar6 = FUN_01015b90(uVar2);
      if (iVar6 == 0) {
        uVar2 = (**(code **)(*DAT_0209b610 + 0x10))();
      }
      else {
        uVar2 = FUN_0104ed70(iVar1);
      }
    }
    iVar1 = hkDynamicClassNameRegistry::hkDynamicClassNameRegistry(uVar2);
    if (iVar1 != 0) {
      FUN_01006000();
    }
    if (param_1[0x1f] != 0) {
      FUN_010060a0();
    }
    param_1[0x1f] = iVar1;
    FUN_010060a0();
    local_54[8] = 0;
    local_54[9] = 0;
    local_54[10] = 0x80000000;
    FUN_010566a0(local_54 + 8);
    iVar1 = local_54[9];
    if (0 < local_54[9]) {
      local_54[0xd] = -0x80000000;
      local_54[0xb] = 0;
      local_54[0xc] = 0;
      FUN_0100a210(&PTR_vftable_018e9b94,local_54 + 0xb,local_54[9],8);
      local_54[0xc] = local_54[0xc] + iVar1;
      iVar1 = 0;
      if (0 < local_54[0xc]) {
        iVar6 = 0;
        do {
          *(undefined4 *)(local_54[0xb] + iVar1 * 8) = *(undefined4 *)(iVar6 + local_54[8]);
          *(undefined **)(local_54[0xb] + 4 + iVar1 * 8) = &DAT_0225ba94;
          iVar1 = iVar1 + 1;
          iVar6 = iVar6 + 0xc;
        } while (iVar1 < local_54[0xc]);
      }
      local_7c = param_1[6];
      local_7e = 1;
      local_84 = _anon_8D865E27::ClassUpdateTracker::vftable;
      local_78 = 0;
      local_70 = 0;
      local_6c = 0;
      local_68 = -0x80000000;
      local_64 = 0;
      local_60 = 0;
      local_5c = 0xffffffff;
      local_58 = 0xffffffff;
      if ((_DAT_0209a3cc & 1) == 0) {
        _DAT_0209a3cc = _DAT_0209a3cc | 1;
        hkStaticClassNameRegistry::hkStaticClassNameRegistry
                  (&PTR_DAT_01b1bef8,0xffffffff,"internal meta-data versioning");
        _atexit((_func_4879 *)&LAB_015fc3e0);
      }
      local_54[2] = 0xef90576;
      local_54[3] = 0xef90576;
      local_54[4] = 0xef90576;
      local_54[0] = 0;
      local_54[1] = 0;
      if (*(uint *)(param_1[7] + 0xc) < 5) {
        _DAT_01b1bed0 = local_54[*(uint *)(param_1[7] + 0xc)];
      }
      if ((_DAT_0209a3cc & 2) == 0) {
        _DAT_0209a3cc = _DAT_0209a3cc | 2;
        _DAT_0209a3a4 = 0;
        _DAT_0209a3a8 = &DAT_01b1bed0;
        _DAT_0209a3ac = &DAT_0209a3b4;
        _DAT_0209a3b0 = 0;
      }
      hkRenamedClassNameRegistry::hkRenamedClassNameRegistry
                (local_54 + 0xb,&local_84,&DAT_0209a3a4,&DAT_0209a3b4);
      iVar1 = *(int *)(param_1[7] + 0x14);
      pvVar3 = TlsGetValue(DAT_01f8fc4c);
      iVar1 = iVar1 * 0x30;
      local_10 = FUN_01005cb0(*(undefined4 *)((int)pvVar3 + 0x2c),iVar1 + 0x30);
      iVar6 = param_1[6];
      if (*(uint *)(iVar6 + 0x38) == (*(uint *)(iVar6 + 0x3c) & 0x3fffffff)) {
        FUN_0100a290(&PTR_vftable_018e9b94,(int *)(iVar6 + 0x34),4);
      }
      *(int *)(*(int *)(iVar6 + 0x34) + *(int *)(iVar6 + 0x38) * 4) = local_10;
      *(int *)(iVar6 + 0x38) = *(int *)(iVar6 + 0x38) + 1;
      FUN_01015e80(local_10,param_1[8],iVar1);
      param_1[8] = local_10;
      *(int *)(param_1[7] + 0x14) = *(int *)(param_1[7] + 0x14) + 1;
      iVar1 = param_1[8] + iVar1;
      FUN_01015c90(iVar1,"__types__");
      *(undefined1 *)(iVar1 + 0x13) = 0;
      *(undefined4 *)(iVar1 + 0x14) = 0xffffffff;
      *(undefined4 *)(iVar1 + 0x18) = local_74;
      *(undefined4 *)(iVar1 + 0x1c) = local_74;
      *(undefined4 *)(iVar1 + 0x20) = local_74;
      *(undefined4 *)(iVar1 + 0x24) = local_74;
      *(undefined4 *)(iVar1 + 0x28) = local_74;
      *(undefined4 *)(iVar1 + 0x2c) = local_74;
      local_18 = param_1[10];
      if (param_1[10] == (param_1[0xb] & 0x3fffffffU)) {
        FUN_0100a290(&PTR_vftable_018e9b94,param_1 + 9,4);
      }
      *(int *)(param_1[9] + param_1[10] * 4) = local_78;
      param_1[10] = param_1[10] + 1;
      iVar1 = 0;
      local_54[5] = 0;
      local_54[6] = 0;
      local_54[7] = 0xffffffff;
      if (0 < local_54[0xc]) {
        local_8 = 0;
        do {
          uVar2 = *(undefined4 *)(local_54[0xb] + iVar1 * 8);
          FUN_010100a0(&PTR_vftable_018e9b94,*(undefined4 *)(local_8 + local_54[8]),iVar1);
          uVar4 = (**(code **)(*param_1 + 0x28))(param_1 + 2);
          FUN_0105f980(uVar2,*(undefined4 *)(param_1[7] + 0xc),uVar4);
          (**(code **)(*(int *)param_1[0x1f] + 0x1c))(uVar2,0);
          local_8 = local_8 + 0xc;
          iVar1 = iVar1 + 1;
        } while (iVar1 < local_54[0xc]);
      }
      local_8 = 0;
      if (0 < *(int *)(param_1[7] + 0x14)) {
        local_c = 0;
        do {
          iVar6 = param_1[8] + local_c;
          local_54[0xe] = *(int *)(param_1[9] + local_8 * 4);
          iVar1 = *(int *)(iVar6 + 0x20) - *(int *)(iVar6 + 0x1c);
          local_10 = 0;
          if (0 < (int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2) {
            piVar7 = (int *)(*(int *)(iVar6 + 0x1c) + 8 + local_54[0xe]);
            do {
              local_14 = piVar7[-2];
              if (local_14 != -1) {
                uVar2 = (**(code **)(*param_1 + 0x40))(piVar7[-1],*piVar7);
                iVar1 = FUN_01010160(uVar2,0xffffffff);
                if (iVar1 != -1) {
                  piVar7[-1] = local_18;
                  *piVar7 = *(int *)(local_54[0xb] + iVar1 * 8) - local_78;
                  *(undefined4 *)(local_14 + local_54[0xe]) =
                       *(undefined4 *)(local_54[0xb] + iVar1 * 8);
                }
              }
              iVar1 = *(int *)(iVar6 + 0x20) - *(int *)(iVar6 + 0x1c);
              local_10 = local_10 + 3;
              piVar7 = piVar7 + 3;
            } while (local_10 < (int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2);
          }
          local_c = local_c + 0x30;
          local_8 = local_8 + 1;
        } while (local_8 < *(int *)(param_1[7] + 0x14));
      }
      FUN_01010310(&PTR_vftable_018e9b94);
      FUN_0100fd10();
      FUN_01010310(&PTR_vftable_018e9b94);
      FUN_0100fd10();
      local_6c = 0;
      if (-1 < local_68) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_70,local_68 * 8);
      }
      local_70 = 0;
      local_68 = 0x80000000;
      local_84 = vftable;
      local_54[0xc] = 0;
      if (-1 < local_54[0xd]) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_54[0xb],local_54[0xd] * 8);
      }
    }
    local_54[9] = 0;
    if (-1 < local_54[10]) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_54[8],(local_54[10] & 0x3fffffffU) * 0xc);
    }
  }
  return 0;
}

// 01058340  hkBinaryPackfileReader::vf0C  size=156  [run]
bool __thiscall hkBinaryPackfileReader::vf0C(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_01056ba0(param_2,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x1c);
    if ((((*(char *)(iVar1 + 0x10) == (char)DAT_01b1dc08) &&
         (*(char *)(iVar1 + 0x11) == (char)((uint)DAT_01b1dc08 >> 8))) &&
        (*(char *)(iVar1 + 0x12) == DAT_01b1dc08._2_1_)) &&
       (*(char *)(iVar1 + 0x13) == DAT_01b1dc08._3_1_)) {
      iVar1 = FUN_01056cc0(param_2,0);
      if (iVar1 == 0) {
        iVar1 = 0;
        if (0 < *(int *)(*(int *)(param_1 + 0x1c) + 0x14)) {
          do {
            iVar2 = FUN_010574d0(param_2,iVar1,0);
            if (iVar2 == 1) {
              return true;
            }
            iVar1 = iVar1 + 1;
          } while (iVar1 < *(int *)(*(int *)(param_1 + 0x1c) + 0x14));
        }
        iVar1 = hkBaseObject::hkBaseObject_122();
        return iVar1 == 1;
      }
    }
  }
  return true;
}

// 010583E0  hkBinaryPackfileReader::vf38  size=398  [run]
undefined4 __thiscall hkBinaryPackfileReader::vf38(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_28;
  undefined4 local_18;
  int local_10;
  int local_c;
  int local_8;
  
  FUN_01015ea0(&local_50,0xffffffff,0x40);
  local_50 = 0x57e0e057;
  local_4c = 0x10c0c010;
  local_28 = 0;
  local_18 = 0;
  if ((*param_2 == 0x57e0e057) && (param_2[1] == 0x10c0c010)) {
    param_1[7] = (int)param_2;
    uVar7 = FUN_01055710(param_2);
    (**(code **)((int)((ulonglong)uVar7 >> 0x20) + 0x2c))((int)uVar7);
    iVar1 = param_1[7];
    if (*(int *)(iVar1 + 0x14) < 1) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = param_2 + 0x10;
    }
    param_1[8] = (int)piVar3;
    if (*(int *)(iVar1 + 0xc) < 4) {
      FUN_01055680(piVar3,*(undefined4 *)(iVar1 + 0x14));
    }
    iVar1 = *(int *)(param_1[7] + 0x14);
    if ((int)(param_1[0xb] & 0x3fffffffU) < iVar1) {
      iVar4 = (param_1[0xb] & 0x3fffffffU) * 2;
      if (iVar4 <= iVar1) {
        iVar4 = iVar1;
      }
      FUN_0100a210(&PTR_vftable_018e9b94,param_1 + 9,iVar4,4);
    }
    param_1[10] = iVar1;
    local_c = 0;
    if (0 < *(int *)(param_1[7] + 0x14)) {
      local_8 = 0;
      do {
        iVar4 = param_1[8] + local_8;
        iVar5 = *(int *)(iVar4 + 0x14) + (int)param_2;
        local_10 = *(int *)(iVar4 + 0x18) + iVar5;
        iVar1 = *(int *)(iVar4 + 0x1c) - *(int *)(iVar4 + 0x18);
        iVar6 = 0;
        if (0 < (int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2) {
          do {
            iVar1 = *(int *)(local_10 + iVar6 * 4);
            if (iVar1 != -1) {
              *(int *)(iVar1 + iVar5) = *(int *)(local_10 + 4 + iVar6 * 4) + iVar5;
            }
            iVar1 = *(int *)(iVar4 + 0x1c) - *(int *)(iVar4 + 0x18);
            iVar6 = iVar6 + 2;
          } while (iVar6 < (int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2);
        }
        local_8 = local_8 + 0x30;
        *(int *)(param_1[9] + local_c * 4) = iVar5;
        local_c = local_c + 1;
      } while (local_c < *(int *)(param_1[7] + 0x14));
    }
    iVar1 = param_1[7];
    iVar4 = *(int *)(iVar1 + 0x20);
    if (((-1 < iVar4) && (-1 < *(int *)(iVar1 + 0x24))) && (*(int *)(iVar1 + 0xc) < 3)) {
      (**(code **)(*param_1 + 0x40))(iVar4,*(int *)(iVar1 + 0x24));
      iVar1 = FUN_010093a0();
      *(int *)(param_1[7] + 0x24) = iVar1 - *(int *)(param_1[9] + iVar4 * 4);
    }
    uVar2 = hkBaseObject::hkBaseObject_122();
    return uVar2;
  }
  return 1;
}

// 01058590  FUN_01058590  size=59  [run]
void __thiscall FUN_01058590(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  
  if (0 < param_3) {
    piVar1 = (int *)(param_2 + 4);
    do {
      if ((piVar1[-1] != 0) && (*piVar1 != 0)) {
        (**(code **)(*param_1 + 0x14))(*piVar1,piVar1);
      }
      piVar1 = piVar1 + 2;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// 01058610  FUN_01058610  size=9  [run]
void FUN_01058610(void)

{
  FUN_01010120();
  return;
}

// 01058620  FUN_01058620  size=9  [run]
void FUN_01058620(void)

{
  FUN_01010160();
  return;
}

// 01058630  FUN_01058630  size=9  [run]
void FUN_01058630(void)

{
  FUN_010101e0();
  return;
}

// 01058640  FUN_01058640  size=9  [run]
void FUN_01058640(void)

{
  FUN_01025be0();
  return;
}

// 01058650  FUN_01058650  size=9  [run]
void FUN_01058650(void)

{
  FUN_01010160();
  return;
}

// 01058660  FUN_01058660  size=31  [run]
int * __thiscall FUN_01058660(int *param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_01006000();
  }
  *param_1 = param_2;
  return param_1;
}

// 01058680  FUN_01058680  size=15  [run]
int __thiscall FUN_01058680(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 010586C0  FUN_010586c0  size=15  [run]
int __thiscall FUN_010586c0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 8;
}

// 01058710  FUN_01058710  size=15  [run]
int __thiscall FUN_01058710(int *param_1,int param_2)

{
  return *param_1 + param_2 * 8;
}

// 01058730  FUN_01058730  size=31  [run]
int * __thiscall FUN_01058730(int *param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_01006000();
  }
  *param_1 = param_2;
  return param_1;
}

// 01058750  FUN_01058750  size=22  [run]
void __fastcall FUN_01058750(int *param_1)

{
  if (*param_1 != 0) {
    FUN_010060a0();
  }
  *param_1 = 0;
  return;
}

// 01058770  FUN_01058770  size=40  [run]
void __thiscall FUN_01058770(int *param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_01006000();
  }
  if (*param_1 != 0) {
    FUN_010060a0();
  }
  *param_1 = param_2;
  return;
}

// 010587A0  FUN_010587a0  size=52  [run]
void __thiscall FUN_010587a0(int *param_1,int *param_2)

{
  if (*param_2 != 0) {
    FUN_01006000();
  }
  if (*param_1 != 0) {
    FUN_010060a0();
    *param_1 = *param_2;
    return;
  }
  *param_1 = *param_2;
  return;
}

// 01058820  FUN_01058820  size=15  [run]
int __thiscall FUN_01058820(int *param_1,int param_2)

{
  return *param_1 + param_2 * 8;
}

// 01058870  FUN_01058870  size=44  [run]
void __thiscall FUN_01058870(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  param_2[1] = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  param_2[2] = uVar1;
  return;
}

// 010588D0  FUN_010588d0  size=18  [run]
int __thiscall FUN_010588d0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 0xc;
}

// 01058900  FUN_01058900  size=32  [run]
void __thiscall FUN_01058900(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4 | 0x80000000;
  return;
}

// 01058980  FUN_01058980  size=28  [run]
void __thiscall FUN_01058980(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 8);
  return;
}

// 010589B0  FUN_010589b0  size=28  [run]
void __thiscall FUN_010589b0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 8);
  return;
}

// 010589D0  FUN_010589d0  size=52  [run]
undefined4 __thiscall FUN_010589d0(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_3) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    uVar3 = FUN_0100a210(param_2,param_1,iVar2,8);
    return uVar3;
  }
  return 0;
}

// 01058A10  FUN_01058a10  size=40  [run]
void FUN_01058a10(undefined4 *param_1,int param_2,int param_3)

{
  if (0 < param_3) {
    param_2 = param_2 - (int)param_1;
    do {
      *param_1 = *(undefined4 *)(param_2 + (int)param_1);
      param_1[1] = *(undefined4 *)(param_2 + 4 + (int)param_1);
      param_1 = param_1 + 2;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// 01058A40  FUN_01058a40  size=28  [run]
void __thiscall FUN_01058a40(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 8);
  return;
}

// 01058A70  FUN_01058a70  size=44  [run]
void FUN_01058a70(undefined4 *param_1,int param_2,int param_3)

{
  if (0 < param_2) {
    param_3 = param_3 - (int)param_1;
    do {
      if (param_1 != (undefined4 *)0x0) {
        *param_1 = *(undefined4 *)(param_3 + (int)param_1);
        param_1[1] = *(undefined4 *)(param_3 + 4 + (int)param_1);
      }
      param_1 = param_1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 01058AB0  FUN_01058ab0  size=28  [run]
void __thiscall FUN_01058ab0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 8);
  return;
}

// 01058AD0  FUN_01058ad0  size=29  [run]
void __thiscall FUN_01058ad0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 0xc);
  return;
}

// 01058B30  FUN_01058b30  size=37  [run]
void FUN_01058b30(undefined4 param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  *(short *)(iVar2 + 4) = (short)param_1;
  return;
}

// 01058B60  FUN_01058b60  size=38  [run]
void FUN_01058b60(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01058B90  hkBinaryPackfileReader::BinaryPackfileData::vf00  size=52  [run]
int __thiscall hkBinaryPackfileReader::BinaryPackfileData::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_24();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 01058BD0  FUN_01058bd0  size=37  [run]
void FUN_01058bd0(undefined4 param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  *(short *)(iVar2 + 4) = (short)param_1;
  return;
}

// 01058C00  FUN_01058c00  size=38  [run]
void FUN_01058c00(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01058C30  FUN_01058c30  size=37  [run]
void FUN_01058c30(undefined4 param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  *(short *)(iVar2 + 4) = (short)param_1;
  return;
}

// 01058C80  hkObjectInspector::ObjectListener::ObjectListener_2  size=34  [run]
void __fastcall hkObjectInspector::ObjectListener::ObjectListener_2(undefined4 *param_1)

{
  FUN_01010310(&PTR_vftable_018e9b94);
  FUN_0100fd10();
  *param_1 = vftable;
  return;
}

// 01058CD0  hkObjectInspector::ObjectListener::ObjectListener_3  size=34  [run]
void __fastcall hkObjectInspector::ObjectListener::ObjectListener_3(undefined4 *param_1)

{
  FUN_01010310(&PTR_vftable_018e9b94);
  FUN_0100fd10();
  *param_1 = vftable;
  return;
}

// 01058D20  hkObjectInspector::ObjectListener::ObjectListener  size=34  [run]
void __fastcall hkObjectInspector::ObjectListener::ObjectListener(undefined4 *param_1)

{
  FUN_01010310(&PTR_vftable_018e9b94);
  FUN_0100fd10();
  *param_1 = vftable;
  return;
}

// 01058D50  FUN_01058d50  size=663  [run]
void __thiscall FUN_01058d50(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  int local_18;
  undefined4 local_14;
  int local_10;
  
  local_18 = 0;
  iVar2 = FUN_01009570();
  if (0 < iVar2) {
    do {
      iVar2 = FUN_01009590(local_18);
      if ((*(ushort *)(iVar2 + 0x10) & 0x400) != 0x400) {
        switch(*(undefined1 *)(iVar2 + 0xc)) {
        case 0x16:
        case 0x1a:
          iVar1 = param_2;
          iVar8 = param_4;
          if (*(char *)(iVar2 + 0xd) == '\x1c') {
            while (-1 < iVar8 + -1) {
              FUN_0143e7a0(iVar1,iVar2);
              piVar6 = (int *)FUN_0143e9a0(0);
              iVar3 = piVar6[1];
              if (0 < iVar3) {
                piVar6 = (int *)(*piVar6 + 4);
                do {
                  if ((piVar6[-1] != 0) && (*piVar6 != 0)) {
                    (**(code **)(*param_1 + 0x14))(*piVar6,piVar6);
                  }
                  piVar6 = piVar6 + 2;
                  iVar3 = iVar3 + -1;
                } while (iVar3 != 0);
              }
              iVar3 = FUN_01009750();
              iVar1 = iVar1 + iVar3;
              iVar8 = iVar8 + -1;
            }
          }
          else if (*(char *)(iVar2 + 0xd) == '\x19') {
            while (-1 < iVar8 + -1) {
              FUN_0143e7a0(iVar1,iVar2);
              puVar4 = (undefined4 *)FUN_0143e9a0(0);
              uVar9 = puVar4[1];
              uVar5 = FUN_010162f0(uVar9);
              FUN_01058d50(*puVar4,uVar5,uVar9);
              iVar3 = FUN_01009750();
              iVar1 = iVar1 + iVar3;
              iVar8 = iVar8 + -1;
            }
          }
          break;
        case 0x19:
          iVar3 = FUN_01016320();
          iVar1 = param_2;
          iVar8 = param_4;
          if (iVar3 == 0) {
            local_14 = 1;
          }
          else {
            local_14 = FUN_01016320();
          }
          while (-1 < iVar8 + -1) {
            FUN_0143e7a0(iVar1,iVar2);
            uVar9 = local_14;
            uVar5 = FUN_010162f0(local_14);
            uVar7 = FUN_0143e830(uVar5);
            FUN_01058d50(uVar7,uVar5,uVar9);
            iVar3 = FUN_01009750();
            iVar1 = iVar1 + iVar3;
            iVar8 = iVar8 + -1;
          }
          break;
        case 0x1b:
          iVar8 = param_2;
          iVar1 = param_4;
          while (iVar1 = iVar1 + -1, -1 < iVar1) {
            FUN_0143e7a0(iVar8,iVar2);
            piVar6 = (int *)FUN_0143e9b0(0);
            if (*piVar6 != 0) {
              (**(code **)(*param_1 + 0x14))(*piVar6,piVar6);
              FUN_01058d50(piVar6[1],*piVar6,piVar6[2]);
            }
            iVar3 = FUN_01009750();
            iVar8 = iVar8 + iVar3;
          }
          break;
        case 0x1c:
          iVar3 = FUN_01016320();
          iVar1 = param_2;
          iVar8 = param_4;
          if (iVar3 == 0) {
            local_10 = 1;
          }
          else {
            local_10 = FUN_01016320();
          }
          while (-1 < iVar8 + -1) {
            FUN_0143e7a0(iVar1,iVar2);
            iVar3 = FUN_0143e830();
            if (0 < local_10) {
              piVar6 = (int *)(iVar3 + 4);
              iVar3 = local_10;
              do {
                if ((piVar6[-1] != 0) && (*piVar6 != 0)) {
                  (**(code **)(*param_1 + 0x14))(*piVar6,piVar6);
                }
                piVar6 = piVar6 + 2;
                iVar3 = iVar3 + -1;
              } while (iVar3 != 0);
            }
            iVar3 = FUN_01009750();
            iVar1 = iVar1 + iVar3;
            iVar8 = iVar8 + -1;
          }
        }
      }
      local_18 = local_18 + 1;
      iVar2 = FUN_01009570();
    } while (local_18 < iVar2);
  }
  return;
}

// 01059010  _anon_8D865E27::hkContentsUpdateTracker::hkContentsUpdateTracker  size=585  [run]
int * __thiscall
_anon_8D865E27::hkContentsUpdateTracker::hkContentsUpdateTracker
          (int *param_1,undefined4 param_2,int *param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int local_c;
  int local_8;
  
  hkPackfileObjectUpdateTracker::hkPackfileObjectUpdateTracker(param_2);
  *param_1 = (int)vftable;
  param_1[0xe] = 0;
  param_1[0xf] = param_4;
  local_c = 0;
  if (0 < param_3[1]) {
    do {
      uVar1 = *(undefined4 *)(*param_3 + local_c * 8);
      local_8 = 0;
      iVar2 = FUN_01009570();
      if (0 < iVar2) {
        do {
          iVar2 = FUN_01009590(local_8);
          if ((*(ushort *)(iVar2 + 0x10) & 0x400) == 0x400) goto switchD_010590a4_caseD_17;
          switch(*(undefined1 *)(iVar2 + 0xc)) {
          case 0x16:
          case 0x1a:
            if (*(char *)(iVar2 + 0xd) == '\x1c') {
              FUN_0143e7a0(uVar1,iVar2);
              piVar6 = (int *)FUN_0143e9a0(0);
              iVar2 = piVar6[1];
              if (0 < iVar2) {
                piVar6 = (int *)(*piVar6 + 4);
                do {
                  if ((piVar6[-1] != 0) && (*piVar6 != 0)) {
                    (**(code **)(*param_1 + 0x14))(*piVar6,piVar6);
                  }
                  piVar6 = piVar6 + 2;
                  iVar2 = iVar2 + -1;
                } while (iVar2 != 0);
              }
              FUN_01009750();
            }
            else if (*(char *)(iVar2 + 0xd) == '\x19') {
              FUN_0143e7a0(uVar1,iVar2);
              puVar4 = (undefined4 *)FUN_0143e9a0(0);
              uVar7 = puVar4[1];
              uVar5 = FUN_010162f0(uVar7);
              uVar8 = *puVar4;
              goto LAB_01059212;
            }
            break;
          case 0x19:
            iVar3 = FUN_01016320();
            if (iVar3 == 0) {
              uVar7 = 1;
            }
            else {
              uVar7 = FUN_01016320();
            }
            FUN_0143e7a0(uVar1,iVar2);
            uVar5 = FUN_010162f0(uVar7);
            uVar8 = FUN_0143e830(uVar5);
LAB_01059212:
            FUN_01058d50(uVar8,uVar5,uVar7);
            goto LAB_0105921a;
          case 0x1b:
            FUN_0143e7a0(uVar1,iVar2);
            piVar6 = (int *)FUN_0143e9b0(0);
            if (*piVar6 != 0) {
              (**(code **)(*param_1 + 0x14))(*piVar6,piVar6);
              FUN_01058d50(piVar6[1],*piVar6,piVar6[2]);
            }
            FUN_01009750();
            break;
          case 0x1c:
            iVar3 = FUN_01016320();
            if (iVar3 == 0) {
              iVar3 = 1;
            }
            else {
              iVar3 = FUN_01016320();
            }
            FUN_0143e7a0(uVar1,iVar2);
            iVar2 = FUN_0143e830();
            if (0 < iVar3) {
              piVar6 = (int *)(iVar2 + 4);
              do {
                if ((piVar6[-1] != 0) && (*piVar6 != 0)) {
                  (**(code **)(*param_1 + 0x14))(*piVar6,piVar6);
                }
                piVar6 = piVar6 + 2;
                iVar3 = iVar3 + -1;
              } while (iVar3 != 0);
            }
LAB_0105921a:
            FUN_01009750();
          }
switchD_010590a4_caseD_17:
          local_8 = local_8 + 1;
          iVar2 = FUN_01009570();
        } while (local_8 < iVar2);
      }
      local_c = local_c + 1;
    } while (local_c < param_3[1]);
  }
  return param_1;
}

// 01059290  FUN_01059290  size=38  [run]
void FUN_01059290(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 010592E0  FUN_010592e0  size=59  [run]
void __thiscall FUN_010592e0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x38) = 1;
  if (*piVar1 != 0) {
    FUN_010060a0();
  }
  *piVar1 = 0;
  hkPackfileObjectUpdateTracker::vf18(param_2,param_3,param_4);
  return;
}

// 01059320  FUN_01059320  size=51  [run]
void __thiscall FUN_01059320(int param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x38) = 1;
  if (*piVar1 != 0) {
    FUN_010060a0();
  }
  *piVar1 = 0;
  hkPackfileObjectUpdateTracker::vf20(param_2);
  return;
}

// 01059360  _anon_8D865E27::hkContentsUpdateTracker::vf00  size=52  [run]
int __thiscall _anon_8D865E27::hkContentsUpdateTracker::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_53();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 010593A0  hkObjectUpdateTracker::vf00  size=53  [run]
undefined4 * __thiscall hkObjectUpdateTracker::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 01059400  FUN_01059400  size=25  [run]
void FUN_01059400(undefined4 param_1,undefined4 param_2)

{
  FUN_010100a0(&PTR_vftable_018e9b94,param_1,param_2);
  return;
}

// 01059420  FUN_01059420  size=15  [run]
undefined4 __thiscall FUN_01059420(int *param_1,int param_2)

{
  return *(undefined4 *)(*param_1 + param_2 * 8);
}

// 01059430  FUN_01059430  size=16  [run]
undefined4 __thiscall FUN_01059430(int *param_1,int param_2)

{
  return *(undefined4 *)(*param_1 + 4 + param_2 * 8);
}

// 01059440  FUN_01059440  size=21  [run]
void __thiscall FUN_01059440(int param_1,undefined4 param_2,int param_3)

{
  *(bool *)param_2 = param_3 <= *(int *)(param_1 + 8);
  return;
}

// 010594A0  FUN_010594a0  size=31  [run]
void FUN_010594a0(undefined4 param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  return;
}

// 010594C0  FUN_010594c0  size=39  [run]
void FUN_010594c0(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0xc);
  }
  return;
}

// 010594F0  FUN_010594f0  size=25  [run]
void FUN_010594f0(undefined4 param_1,undefined4 param_2)

{
  FUN_010100a0(&PTR_vftable_018e9b94,param_1,param_2);
  return;
}

// 01059520  FUN_01059520  size=25  [run]
void FUN_01059520(undefined4 param_1,undefined4 param_2)

{
  FUN_010100a0(&PTR_vftable_018e9b94,param_1,param_2);
  return;
}

// 01059560  FUN_01059560  size=25  [run]
void FUN_01059560(undefined4 param_1,undefined4 param_2)

{
  FUN_010100a0(&PTR_vftable_018e9b94,param_1,param_2);
  return;
}

// 01059580  FUN_01059580  size=25  [run]
void FUN_01059580(undefined4 param_1,undefined4 param_2)

{
  FUN_010100a0(&PTR_vftable_018e9b94,param_1,param_2);
  return;
}

// 010595E0  FUN_010595e0  size=28  [run]
void __thiscall FUN_010595e0(int *param_1,int param_2)

{
  param_1[1] = param_1[1] + -1;
  if (param_1[1] != param_2) {
    *(undefined4 *)(*param_1 + param_2 * 4) = *(undefined4 *)(*param_1 + param_1[1] * 4);
  }
  return;
}

// 01059600  FUN_01059600  size=88  [run]
void __thiscall FUN_01059600(int *param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((int)(param_1[2] & 0x3fffffffU) < param_3) {
    iVar2 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    FUN_0100a210(param_2,param_1,iVar2,4);
  }
  iVar2 = param_1[1];
  iVar1 = *param_1;
  iVar3 = param_3 - iVar2;
  iVar4 = 0;
  if (0 < iVar3) {
    do {
      *(undefined4 *)(iVar1 + iVar2 * 4 + iVar4 * 4) = *param_4;
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  param_1[1] = param_3;
  return;
}

// 01059670  FUN_01059670  size=45  [run]
undefined4 __thiscall FUN_01059670(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((int)(*(uint *)(param_1 + 8) & 0x3fffffff) < param_3) {
    uVar1 = FUN_0100a210(param_2,param_1,param_3,8);
    return uVar1;
  }
  return 0;
}

// 010596A0  FUN_010596a0  size=51  [run]
int __thiscall FUN_010596a0(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,8);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 8;
}

// 010596E0  FUN_010596e0  size=54  [run]
int __thiscall FUN_010596e0(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,0xc);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 0xc;
}

// 01059720  FUN_01059720  size=36  [run]
void FUN_01059720(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  FUN_01005cb0(*(undefined4 *)((int)pvVar1 + 0x2c),param_1 << 6);
  return;
}

// 01059750  FUN_01059750  size=39  [run]
void FUN_01059750(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  FUN_01005cb0(*(undefined4 *)((int)pvVar1 + 0x2c),param_1 * 0x30);
  return;
}

// 01059780  FUN_01059780  size=32  [run]
void __thiscall FUN_01059780(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4 | 0x80000000;
  return;
}

// 010597A0  FUN_010597a0  size=165  [run]
int * __thiscall FUN_010597a0(int *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = param_3[1];
  iVar5 = param_1[1];
  if (iVar1 <= param_1[1]) {
    iVar5 = iVar1;
  }
  if ((int)(param_1[2] & 0x3fffffffU) < iVar1) {
    iVar4 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar4 <= iVar1) {
      iVar4 = iVar1;
    }
    FUN_0100a210(param_2,param_1,iVar4,8);
  }
  puVar3 = (undefined4 *)*param_1;
  if (0 < iVar5) {
    iVar2 = *param_3 - (int)puVar3;
    iVar4 = iVar5;
    do {
      *puVar3 = *(undefined4 *)(iVar2 + (int)puVar3);
      puVar3[1] = *(undefined4 *)(iVar2 + 4 + (int)puVar3);
      puVar3 = puVar3 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  puVar3 = (undefined4 *)(*param_1 + iVar5 * 8);
  iVar4 = iVar1 - iVar5;
  if (0 < iVar4) {
    iVar5 = (*param_3 + iVar5 * 8) - (int)puVar3;
    do {
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = *(undefined4 *)(iVar5 + (int)puVar3);
        puVar3[1] = *(undefined4 *)(iVar5 + 4 + (int)puVar3);
      }
      puVar3 = puVar3 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  param_1[1] = iVar1;
  return param_1;
}

// 010598A0  FUN_010598a0  size=28  [run]
void FUN_010598a0(undefined4 param_1,undefined4 param_2)

{
  FUN_010100a0(&PTR_vftable_018e9b94,param_1,param_2);
  return;
}

// 010598C0  FUN_010598c0  size=27  [run]
void __fastcall FUN_010598c0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (-1 < (int)param_1[2]) {
    piVar2 = (int *)*param_1;
    do {
      if (*piVar2 != -1) {
        return;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 2;
    } while (iVar1 <= (int)param_1[2]);
  }
  return;
}

// 010598E0  FUN_010598e0  size=36  [run]
void __thiscall FUN_010598e0(int *param_1,int param_2)

{
  int *piVar1;
  
  param_2 = param_2 + 1;
  if (param_2 <= param_1[2]) {
    piVar1 = (int *)(*param_1 + param_2 * 8);
    do {
      if (*piVar1 != -1) {
        return;
      }
      param_2 = param_2 + 1;
      piVar1 = piVar1 + 2;
    } while (param_2 <= param_1[2]);
  }
  return;
}

// 01059910  FUN_01059910  size=89  [run]
void __thiscall FUN_01059910(int *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((int)(param_1[2] & 0x3fffffffU) < param_2) {
    iVar2 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar2 <= param_2) {
      iVar2 = param_2;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,4);
  }
  iVar2 = param_1[1];
  iVar1 = *param_1;
  iVar3 = param_2 - iVar2;
  iVar4 = 0;
  if (0 < iVar3) {
    do {
      *(undefined4 *)(iVar1 + iVar2 * 4 + iVar4 * 4) = *param_3;
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  param_1[1] = param_2;
  return;
}

// 010599B0  FUN_010599b0  size=31  [run]
void __thiscall FUN_010599b0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_01010120(param_3);
  *(bool *)param_2 = iVar1 <= *(int *)(param_1 + 8);
  return;
}

// 010599D0  FUN_010599d0  size=46  [run]
undefined4 __thiscall FUN_010599d0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((int)(*(uint *)(param_1 + 8) & 0x3fffffff) < param_2) {
    uVar1 = FUN_0100a210(&PTR_vftable_018e9b8c,param_1,param_2,8);
    return uVar1;
  }
  return 0;
}

// 01059A00  FUN_01059a00  size=46  [run]
int __fastcall FUN_01059a00(int *param_1)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b8c,param_1,8);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 8;
}

// 01059A50  FUN_01059a50  size=31  [run]
void __thiscall FUN_01059a50(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_01010120(param_3);
  *(bool *)param_2 = iVar1 <= *(int *)(param_1 + 8);
  return;
}

// 01059A90  FUN_01059a90  size=31  [run]
void __thiscall FUN_01059a90(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_01010120(param_3);
  *(bool *)param_2 = iVar1 <= *(int *)(param_1 + 8);
  return;
}

// 01059AB0  FUN_01059ab0  size=49  [run]
int __fastcall FUN_01059ab0(int *param_1)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,0xc);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 0xc;
}

// 01059AF0  FUN_01059af0  size=165  [run]
int * __thiscall FUN_01059af0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = param_2[1];
  iVar5 = param_1[1];
  if (iVar1 <= param_1[1]) {
    iVar5 = iVar1;
  }
  if ((int)(param_1[2] & 0x3fffffffU) < iVar1) {
    iVar4 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar4 <= iVar1) {
      iVar4 = iVar1;
    }
    FUN_0100a210(&PTR_vftable_018e9b8c,param_1,iVar4,8);
  }
  puVar3 = (undefined4 *)*param_1;
  if (0 < iVar5) {
    iVar2 = *param_2 - (int)puVar3;
    iVar4 = iVar5;
    do {
      *puVar3 = *(undefined4 *)(iVar2 + (int)puVar3);
      puVar3[1] = *(undefined4 *)(iVar2 + 4 + (int)puVar3);
      puVar3 = puVar3 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  puVar3 = (undefined4 *)(*param_1 + iVar5 * 8);
  iVar4 = iVar1 - iVar5;
  if (0 < iVar4) {
    iVar5 = (*param_2 + iVar5 * 8) - (int)puVar3;
    do {
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = *(undefined4 *)(iVar5 + (int)puVar3);
        puVar3[1] = *(undefined4 *)(iVar5 + 4 + (int)puVar3);
      }
      puVar3 = puVar3 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  param_1[1] = iVar1;
  return param_1;
}

// 01059BA0  FUN_01059ba0  size=63  [run]
void __thiscall FUN_01059ba0(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01059BE0  FUN_01059be0  size=63  [run]
void __thiscall FUN_01059be0(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01059C20  FUN_01059c20  size=63  [run]
void __thiscall FUN_01059c20(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01059C60  FUN_01059c60  size=63  [run]
void __thiscall FUN_01059c60(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01059CA0  FUN_01059ca0  size=64  [run]
void __thiscall FUN_01059ca0(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0xc);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01059CE0  FUN_01059ce0  size=57  [run]
void __thiscall FUN_01059ce0(int param_1,undefined4 param_2)

{
  if (*(uint *)(param_1 + 0x38) == (*(uint *)(param_1 + 0x3c) & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,(int *)(param_1 + 0x34),4);
  }
  *(undefined4 *)(*(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x38) * 4) = param_2;
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
  return;
}

// 01059D20  _anon_8D865E27::PackfileObjectsCollector::PackfileObjectsCollector  size=60  [run]
void __thiscall
_anon_8D865E27::PackfileObjectsCollector::PackfileObjectsCollector
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6)

{
  param_1[1] = param_2;
  param_1[2] = param_3;
  *param_1 = vftable;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0xffffffff;
  param_1[6] = param_4;
  param_1[7] = param_5;
  param_1[8] = param_6;
  return;
}

// 01059D60  _anon_8D865E27::PackfileObjectsCollector::vf00  size=38  [run]
undefined4 * __fastcall _anon_8D865E27::PackfileObjectsCollector::vf00(undefined4 *param_1)

{
  FUN_01010310(&PTR_vftable_018e9b94);
  FUN_0100fd10();
  *param_1 = hkObjectInspector::ObjectListener::vftable;
  return param_1;
}

// 01059D90  _anon_8D865E27::PackfilePointersMapListener::PackfilePointersMapListener  size=60  [run]
void __thiscall
_anon_8D865E27::PackfilePointersMapListener::PackfilePointersMapListener
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6)

{
  param_1[1] = param_2;
  param_1[3] = param_4;
  param_1[2] = param_3;
  param_1[5] = param_6;
  *param_1 = vftable;
  param_1[4] = param_5;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0xffffffff;
  return;
}

// 01059DD0  _anon_8D865E27::PackfilePointersMapListener::vf00  size=38  [run]
undefined4 * __fastcall _anon_8D865E27::PackfilePointersMapListener::vf00(undefined4 *param_1)

{
  FUN_01010310(&PTR_vftable_018e9b94);
  FUN_0100fd10();
  *param_1 = hkObjectInspector::ObjectListener::vftable;
  return param_1;
}

// 01059E00  _anon_8D865E27::PackfileCstringListener::PackfileCstringListener  size=42  [run]
void __thiscall
_anon_8D865E27::PackfileCstringListener::PackfileCstringListener
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  param_1[1] = param_2;
  *param_1 = vftable;
  param_1[2] = param_3;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0xffffffff;
  return;
}

// 01059E30  _anon_8D865E27::PackfileCstringListener::vf00  size=38  [run]
undefined4 * __fastcall _anon_8D865E27::PackfileCstringListener::vf00(undefined4 *param_1)

{
  FUN_01010310(&PTR_vftable_018e9b94);
  FUN_0100fd10();
  *param_1 = hkObjectInspector::ObjectListener::vftable;
  return param_1;
}

// 01059E60  FUN_01059e60  size=27  [run]
void __thiscall FUN_01059e60(int *param_1,int param_2)

{
  *param_1 = (int)(param_1 + 3);
  param_1[1] = param_2;
  param_1[2] = (int)&DAT_80000010;
  return;
}

// 01059E80  FUN_01059e80  size=63  [run]
void __fastcall FUN_01059e80(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01059EC0  FUN_01059ec0  size=63  [run]
void __fastcall FUN_01059ec0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01059F00  FUN_01059f00  size=63  [run]
void __fastcall FUN_01059f00(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01059F40  FUN_01059f40  size=63  [run]
void __fastcall FUN_01059f40(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01059F80  FUN_01059f80  size=64  [run]
void __fastcall FUN_01059f80(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0xc);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01059FC0  FUN_01059fc0  size=61  [run]
void __fastcall FUN_01059fc0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0105A000  FUN_0105a000  size=63  [run]
void __fastcall FUN_0105a000(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0105A040  FUN_0105a040  size=63  [run]
void __fastcall FUN_0105a040(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0105A080  FUN_0105a080  size=63  [run]
void __fastcall FUN_0105a080(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0105A0C0  FUN_0105a0c0  size=63  [run]
void __fastcall FUN_0105a0c0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0105A100  FUN_0105a100  size=64  [run]
void __fastcall FUN_0105a100(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0xc);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0105A140  FUN_0105a140  size=87  [run]
void __fastcall FUN_0105a140(undefined4 *param_1)

{
  FUN_01010310(&PTR_vftable_018e9b94);
  FUN_0100fd10();
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0105A1A0  hkBaseObject::hkBaseObject_13  size=88  [run]
void __fastcall hkBaseObject::hkBaseObject_13(undefined4 *param_1)

{
  FUN_01010310(&PTR_vftable_018e9b94);
  FUN_0100fd10();
  param_1[6] = 0;
  if (-1 < (int)param_1[7]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[5],param_1[7] * 8);
  }
  param_1[5] = 0;
  param_1[7] = 0x80000000;
  *param_1 = vftable;
  return;
}

// 0105A200  FUN_0105a200  size=38  [run]
void FUN_0105a200(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 0105A230  FUN_0105a230  size=103  [run]
undefined4 * __thiscall FUN_0105a230(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0xc);
  }
  return param_1;
}

// 0105A2C0  _anon_8D865E27::ClassUpdateTracker::ClassUpdateTracker  size=63  [run]
void __thiscall
_anon_8D865E27::ClassUpdateTracker::ClassUpdateTracker(undefined4 *param_1,undefined4 param_2)

{
  *(undefined2 *)((int)param_1 + 6) = 1;
  param_1[3] = 0;
  *param_1 = vftable;
  param_1[2] = param_2;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0x80000000;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  return;
}

// 0105A300  FUN_0105a300  size=26  [run]
void __thiscall
FUN_0105a300(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  return;
}

// 0105A320  _anon_8D865E27::ClassUpdateTracker::vf1C  size=3  [run]
void _anon_8D865E27::ClassUpdateTracker::vf1C(void)

{
  return;
}

// 0105A330  _anon_8D865E27::ClassUpdateTracker::vf20  size=3  [run]
void _anon_8D865E27::ClassUpdateTracker::vf20(void)

{
  return;
}

// 0105A340  FUN_0105a340  size=15  [run]
int __thiscall FUN_0105a340(int *param_1,int param_2)

{
  return *param_1 + param_2 * 8;
}

// 0105A350  FUN_0105a350  size=21  [run]
void FUN_0105a350(undefined4 param_1)

{
  FUN_01010160(param_1,0xffffffff);
  return;
}

// 0105A370  FUN_0105a370  size=9  [run]
void FUN_0105a370(void)

{
  FUN_01010120();
  return;
}

// 0105A380  FUN_0105a380  size=16  [run]
undefined4 __thiscall FUN_0105a380(int *param_1,int param_2)

{
  return *(undefined4 *)(*param_1 + 4 + param_2 * 8);
}

// 0105A3A0  FUN_0105a3a0  size=15  [run]
int __thiscall FUN_0105a3a0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 8;
}

// 0105A3B0  FUN_0105a3b0  size=11  [run]
int FUN_0105a3b0(int param_1,int param_2)

{
  return param_2 + param_1;
}

// 0105A3E0  FUN_0105a3e0  size=15  [run]
int __thiscall FUN_0105a3e0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 8;
}

// 0105A3F0  FUN_0105a3f0  size=16  [run]
undefined4 __thiscall FUN_0105a3f0(int *param_1,int param_2)

{
  return *(undefined4 *)(*param_1 + 4 + param_2 * 8);
}

// 0105A400  FUN_0105a400  size=19  [run]
void __thiscall FUN_0105a400(int *param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(*param_1 + 4 + param_2 * 8) = param_3;
  return;
}

// 0105A420  FUN_0105a420  size=44  [run]
void FUN_0105a420(undefined8 *param_1,int param_2,undefined8 *param_3)

{
  if (0 < param_2) {
    do {
      if (param_1 != (undefined8 *)0x0) {
        *param_1 = *param_3;
        *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_3 + 1);
      }
      param_1 = (undefined8 *)((int)param_1 + 0xc);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 0105A450  FUN_0105a450  size=51  [run]
int __thiscall FUN_0105a450(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,8);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 8;
}

// 0105A490  _anon_8D865E27::ClassUpdateTracker::vf18  size=89  [run]
void __thiscall _anon_8D865E27::ClassUpdateTracker::vf18(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0105a350(param_2);
  if (param_3 != 0) {
    FUN_010100a0(&PTR_vftable_018e9b94,param_3,iVar1);
  }
  if (iVar1 != -1) {
    iVar2 = *(int *)(param_1 + 0x14);
    do {
      **(int **)(iVar2 + iVar1 * 8) = param_3;
      iVar2 = *(int *)(param_1 + 0x14);
      iVar1 = *(int *)(iVar2 + 4 + iVar1 * 8);
    } while (iVar1 != -1);
  }
  return;
}

// 0105A4F0  FUN_0105a4f0  size=74  [run]
void __thiscall FUN_0105a4f0(int *param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,0xc);
  }
  puVar1 = (undefined8 *)(*param_1 + param_1[1] * 0xc);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_3;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_3 + 1);
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 0105A540  FUN_0105a540  size=133  [run]
int __thiscall FUN_0105a540(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *param_1;
  iVar4 = *(int *)(iVar3 + 4 + param_3 * 8);
  if (iVar4 == -1) {
    iVar3 = FUN_01010120(param_2);
    piVar1 = (int *)(param_1[3] + 4 + iVar3 * 8);
    iVar4 = *piVar1;
    if (iVar4 == param_3) {
      *piVar1 = -1;
      iVar4 = param_3;
    }
    else {
      piVar2 = (int *)(*param_1 + 4 + iVar4 * 8);
      iVar3 = *piVar2;
      if (iVar3 == param_3) {
        *piVar2 = -1;
        iVar4 = param_3;
      }
      else {
        *piVar1 = iVar3;
        *(undefined4 *)(*param_1 + param_3 * 8) = *(undefined4 *)(*param_1 + iVar4 * 8);
      }
    }
    param_3 = -1;
  }
  else {
    *(undefined4 *)(iVar3 + param_3 * 8) = *(undefined4 *)(iVar3 + iVar4 * 8);
    *(undefined4 *)(iVar3 + 4 + param_3 * 8) = *(undefined4 *)(iVar3 + 4 + iVar4 * 8);
  }
  *(int *)(*param_1 + 4 + iVar4 * 8) = param_1[6];
  param_1[6] = iVar4;
  return param_3;
}

// 0105A5D0  FUN_0105a5d0  size=46  [run]
int __fastcall FUN_0105a5d0(int *param_1)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,8);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 8;
}

// 0105A600  _anon_8D865E27::ClassUpdateTracker::vf0C  size=60  [run]
void __thiscall _anon_8D865E27::ClassUpdateTracker::vf0C(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (*(uint *)(iVar1 + 0x38) == (*(uint *)(iVar1 + 0x3c) & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,(int *)(iVar1 + 0x34),4);
  }
  *(undefined4 *)(*(int *)(iVar1 + 0x34) + *(int *)(iVar1 + 0x38) * 4) = param_2;
  *(int *)(iVar1 + 0x38) = *(int *)(iVar1 + 0x38) + 1;
  return;
}

// 0105A640  FUN_0105a640  size=75  [run]
void __thiscall FUN_0105a640(int *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,0xc);
  }
  puVar1 = (undefined8 *)(*param_1 + param_1[1] * 0xc);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_2;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_2 + 1);
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 0105A690  FUN_0105a690  size=62  [run]
uint __fastcall FUN_0105a690(int *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[6];
  if (uVar1 != 0xffffffff) {
    param_1[6] = *(int *)(*param_1 + 4 + uVar1 * 8);
    return uVar1;
  }
  uVar1 = param_1[1];
  if (uVar1 == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,8);
  }
  param_1[1] = param_1[1] + 1;
  return uVar1;
}

// 0105A6D0  FUN_0105a6d0  size=93  [run]
void __thiscall FUN_0105a6d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  
  if (*(uint *)(param_1 + 0x44) == (*(uint *)(param_1 + 0x48) & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,(int *)(param_1 + 0x40),0xc);
  }
  puVar1 = (undefined8 *)(*(int *)(param_1 + 0x40) + *(int *)(param_1 + 0x44) * 0xc);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = CONCAT44(param_3,param_2);
    *(undefined4 *)(puVar1 + 1) = param_4;
  }
  *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
  return;
}

// 0105A730  _anon_8D865E27::ClassUpdateTracker::vf10  size=110  [run]
void __thiscall
_anon_8D865E27::ClassUpdateTracker::vf10
          (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  if (*(uint *)(iVar2 + 0x44) == (*(uint *)(iVar2 + 0x48) & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,(int *)(iVar2 + 0x40),0xc);
  }
  puVar1 = (undefined8 *)(*(int *)(iVar2 + 0x40) + *(int *)(iVar2 + 0x44) * 0xc);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = CONCAT44(param_3,param_2);
    *(undefined4 *)(puVar1 + 1) = param_4;
  }
  *(int *)(iVar2 + 0x44) = *(int *)(iVar2 + 0x44) + 1;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  return;
}

// 0105A7A0  FUN_0105a7a0  size=72  [run]
void __thiscall FUN_0105a7a0(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = FUN_01010160(param_2,0xffffffff);
  iVar3 = FUN_0105a690();
  puVar1 = (undefined4 *)(*param_1 + iVar3 * 8);
  *puVar1 = *param_3;
  puVar1[1] = uVar2;
  FUN_010100a0(&PTR_vftable_018e9b94,param_2,iVar3);
  return;
}

// 0105A7F0  _anon_8D865E27::ClassUpdateTracker::vf14  size=101  [run]
void __thiscall _anon_8D865E27::ClassUpdateTracker::vf14(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = param_3;
  iVar1 = *param_3;
  if (iVar1 != 0) {
    iVar3 = FUN_0105a350(iVar1);
    if (iVar3 != -1) {
      do {
        if (*(int **)(*(int *)(param_1 + 0x14) + iVar3 * 8) == piVar2) {
          if (param_2 == iVar1) {
            return;
          }
          FUN_0105a540(iVar1,iVar3);
          break;
        }
        iVar3 = *(int *)(*(int *)(param_1 + 0x14) + 4 + iVar3 * 8);
      } while (iVar3 != -1);
    }
  }
  if (param_2 != 0) {
    FUN_0105a7a0(param_2,&param_3);
  }
  *piVar2 = param_2;
  return;
}

// 0105A860  _anon_8D865E27::ClassUpdateTracker::vf00  size=52  [run]
int __thiscall _anon_8D865E27::ClassUpdateTracker::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_13();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 0105A8A0  hkBinaryPackfileReader::vf00  size=52  [run]
int __thiscall hkBinaryPackfileReader::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  ~hkBinaryPackfileReader();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 0105A910  FUN_0105a910  size=79  [run]
uint FUN_0105a910(undefined4 param_1)

{
  undefined *puVar1;
  undefined **in_EAX;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (PTR_s_Havok_5_0_0_b1_01b1bf00 != (undefined *)0x0) {
    in_EAX = &PTR_s_Havok_5_0_0_b1_01b1bf00;
    do {
      puVar1 = *in_EAX;
      uVar2 = FUN_01015cd0(puVar1);
      iVar3 = FUN_01015bd0(param_1,puVar1,uVar2);
      if (iVar3 == 0) {
        return 1;
      }
      iVar4 = iVar4 + 1;
      in_EAX = &PTR_s_Havok_5_0_0_b1_01b1bf00 + iVar4;
    } while ((&PTR_s_Havok_5_0_0_b1_01b1bf00)[iVar4] != (undefined *)0x0);
  }
  return (uint)in_EAX & 0xffffff00;
}

// 0105A960  FUN_0105a960  size=85  [run]
undefined4 FUN_0105a960(void)

{
  int iVar1;
  int unaff_ESI;
  
  if (unaff_ESI != 0) {
    iVar1 = FUN_01015b90();
    if (iVar1 != 0) {
      iVar1 = FUN_01015b90();
      if (iVar1 != 0) {
        iVar1 = FUN_01015b90();
        if (iVar1 != 0) {
          iVar1 = FUN_01015b90();
          if (iVar1 != 0) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

// 0105A9C0  FUN_0105a9c0  size=107  [run]
void FUN_0105a9c0(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  
  uVar1 = FUN_010093a0("hkxSparselyAnimatedEnum");
  iVar2 = FUN_01015b90(uVar1);
  if (iVar2 != 0) {
    uVar1 = FUN_010093a0("hctAttributeDescription");
    iVar2 = FUN_01015b90(uVar1);
    if (iVar2 != 0) {
      return;
    }
  }
  uVar1 = FUN_010093a0("hkxSparselyAnimatedEnum");
  iVar2 = FUN_01015b90(uVar1);
  puVar3 = &DAT_01662d64;
  if (iVar2 != 0) {
    puVar3 = &DAT_01704c3c;
  }
  iVar2 = FUN_01009660(puVar3);
  if (*(int *)(iVar2 + 4) == 0) {
    *(undefined **)(iVar2 + 4) = &DAT_01f904dc;
  }
  return;
}

// 0105AA30  FUN_0105aa30  size=122  [run]
void FUN_0105aa30(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 != 0) {
    iVar2 = *param_1;
    uVar1 = FUN_010093a0();
    iVar2 = (**(code **)(iVar2 + 0x10))(uVar1);
    if (iVar2 == 0) {
      (**(code **)(*param_1 + 0x1c))(param_2,0);
      uVar1 = FUN_010093b0();
      FUN_0105aa30(param_1,uVar1);
      iVar2 = FUN_010095e0();
      if (0 < iVar2) {
        iVar2 = 0;
        do {
          FUN_010095f0(iVar2);
          uVar1 = FUN_01016300();
          FUN_0105aa30(param_1,uVar1);
          iVar2 = iVar2 + 1;
          iVar3 = FUN_010095e0();
        } while (iVar2 < iVar3);
      }
    }
  }
  return;
}

// 0105AAB0  hkXmlPackfileReader::vf1C  size=4  [run]
int __fastcall hkXmlPackfileReader::vf1C(int param_1)

{
  return param_1 + 0x38;
}

// 0105AAC0  hkXmlPackfileReader::vf24  size=4  [run]
undefined4 __fastcall hkXmlPackfileReader::vf24(int param_1)

{
  return *(undefined4 *)(param_1 + 0x44);
}

// 0105AAD0  FUN_0105aad0  size=171  [run]
undefined4 FUN_0105aad0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *unaff_ESI;
  
  *unaff_ESI = 0;
  iVar1 = FUN_010fb580("toplevelobject",0);
  if (iVar1 != 0) {
    uVar2 = FUN_01016080(iVar1);
    *unaff_ESI = uVar2;
  }
  iVar1 = FUN_010fb580("classversion",0);
  if (iVar1 != 0) {
    iVar1 = FUN_01015cf0(iVar1,0);
    *param_1 = iVar1;
    if (iVar1 != 1) {
      if (7 < iVar1 - 2U) {
        return 1;
      }
      iVar1 = FUN_010fb580("contentsversion",0);
      if (iVar1 != 0) {
        uVar2 = FUN_01016080(iVar1);
        *param_2 = uVar2;
        return 0;
      }
      uVar2 = FUN_01016080("Havok-3.1.0");
      *param_2 = uVar2;
      return 0;
    }
  }
  uVar2 = FUN_01016080("Havok-3.0.0");
  *param_2 = uVar2;
  return 0;
}

// 0105AB80  hkXmlPackfileReader::vf0C  size=20  [run]
void __thiscall hkXmlPackfileReader::vf0C(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x38))(param_2,0);
  return;
}

// 0105ABA0  hkXmlPackfileReader::vf18  size=8  [run]
void hkXmlPackfileReader::vf18(void)

{
  FUN_0105f4f0();
  return;
}

// 0105ABF0  FUN_0105abf0  size=430  [run]
void FUN_0105abf0(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int local_c;
  undefined4 local_8;
  
  local_c = 0;
  iVar2 = FUN_010095e0();
  if (0 < iVar2) {
    do {
      iVar2 = FUN_010095f0(local_c);
      if ((*(ushort *)(iVar2 + 0x10) & 0x400) != 0x400) {
        switch(*(undefined1 *)(iVar2 + 0xc)) {
        case 0x16:
        case 0x1a:
          iVar1 = param_2;
          iVar6 = param_4;
          if (*(char *)(iVar2 + 0xd) == '\x19') {
            while (-1 < iVar6 + -1) {
              FUN_0143e7a0(iVar1,iVar2);
              piVar4 = (int *)FUN_0143e9a0(0);
              if ((*piVar4 != 0) && (piVar4[1] != 0)) {
                uVar3 = FUN_010162f0(piVar4[1]);
                FUN_0105abf0(param_1,*piVar4,uVar3);
              }
              iVar5 = FUN_01009750();
              iVar1 = iVar1 + iVar5;
              iVar6 = iVar6 + -1;
            }
          }
          break;
        case 0x19:
          iVar5 = FUN_01016320();
          iVar1 = param_2;
          iVar6 = param_4;
          if (iVar5 == 0) {
            local_8 = 1;
          }
          else {
            local_8 = FUN_01016320();
          }
          while (-1 < iVar6 + -1) {
            FUN_0143e7a0(iVar1,iVar2);
            uVar3 = FUN_010162f0(local_8);
            uVar3 = FUN_0143e830(uVar3);
            FUN_0105abf0(param_1,uVar3);
            iVar5 = FUN_01009750();
            iVar1 = iVar1 + iVar5;
            iVar6 = iVar6 + -1;
          }
          break;
        case 0x1b:
          iVar6 = param_2;
          iVar1 = param_4;
          while (iVar1 = iVar1 + -1, -1 < iVar1) {
            FUN_0143e7a0(iVar6,iVar2);
            piVar4 = (int *)FUN_0143e9b0(0);
            FUN_0105aa30(param_1,*piVar4);
            if (((*piVar4 != 0) && (piVar4[1] != 0)) && (piVar4[2] != 0)) {
              FUN_0105abf0(param_1,piVar4[1],*piVar4,piVar4[2]);
            }
            iVar5 = FUN_01009750();
            iVar6 = iVar6 + iVar5;
          }
        }
      }
      local_c = local_c + 1;
      iVar2 = FUN_010095e0();
    } while (local_c < iVar2);
  }
  return;
}

// 0105ADC0  FUN_0105adc0  size=155  [run]
int __thiscall
FUN_0105adc0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = param_2;
  iVar1 = (**(code **)(**(int **)(param_1 + 0x48) + 0x10))(param_2);
  if (iVar1 == 0) {
    uVar2 = FUN_01025530(uVar2);
    FUN_01025890((int)&param_2 + 3,uVar2);
    if (param_2._3_1_ != '\0') {
      iVar1 = FUN_01025400(uVar2);
      FUN_010255c0(uVar2);
      FUN_0105f980(iVar1,param_5,param_6,param_1 + 8);
      FUN_010e6cb0();
      FUN_010e71e0(iVar1,param_4,1);
      FUN_0105a9c0();
      (**(code **)(**(int **)(param_1 + 0x48) + 0x1c))(iVar1,0);
    }
  }
  return iVar1;
}

// 0105AE60  hkXmlPackfileReader::vf30  size=259  [run]
int __fastcall hkXmlPackfileReader::vf30(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  LPVOID pvVar4;
  undefined4 local_8;
  
  iVar1 = param_1[0x12];
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*param_1 + 0x28))();
    if (iVar1 == 0) {
      local_8 = 0;
    }
    else {
      uVar2 = FUN_010e0a10(iVar1);
      iVar3 = FUN_01015b90(uVar2);
      if (iVar3 == 0) {
        local_8 = (**(code **)(*DAT_0209b610 + 0x10))();
      }
      else {
        local_8 = FUN_0104ed70(iVar1);
      }
    }
    pvVar4 = TlsGetValue(DAT_01f8fc4c);
    iVar1 = (**(code **)(**(int **)((int)pvVar4 + 0x2c) + 4))(0x20);
    *(undefined2 *)(iVar1 + 4) = 0x20;
    iVar1 = hkDynamicClassNameRegistry::hkDynamicClassNameRegistry(0);
    if (iVar1 != 0) {
      FUN_01006000();
    }
    if (param_1[0x12] != 0) {
      FUN_010060a0();
    }
    param_1[0x12] = iVar1;
    FUN_010060a0();
    iVar1 = (**(code **)(*param_1 + 0x24))();
    if ((*(int *)(iVar1 + 0x38) != 0) && (iVar1 = 0, 0 < param_1[0xf])) {
      do {
        uVar2 = *(undefined4 *)(param_1[0xe] + 4 + iVar1 * 8);
        FUN_0105aa30(param_1[0x12],uVar2);
        FUN_0105abf0(param_1[0x12],*(undefined4 *)(param_1[0xe] + iVar1 * 8),uVar2,1);
        iVar1 = iVar1 + 1;
      } while (iVar1 < param_1[0xf]);
    }
    FUN_010faf60(local_8);
    iVar1 = param_1[0x12];
  }
  return iVar1;
}

// 0105AF70  hkXmlPackfileUpdateTracker::hkXmlPackfileUpdateTracker  size=292  [run]
undefined4 * __fastcall hkXmlPackfileUpdateTracker::hkXmlPackfileUpdateTracker(undefined4 *param_1)

{
  int *piVar1;
  LPVOID pvVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint local_8;
  
  hkPackfileReader::hkPackfileReader();
  *param_1 = hkXmlPackfileReader::vftable;
  piVar1 = param_1 + 7;
  local_8 = (uint)param_1 & 0xffffff00;
  *piVar1 = 0;
  param_1[8] = 0;
  param_1[9] = 0x80000000;
  FUN_01025830(local_8);
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0x80000000;
  param_1[0x12] = 0;
  if (param_1[8] == (param_1[9] & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,piVar1,4);
  }
  *(char **)(*piVar1 + param_1[8] * 4) = "__data__";
  param_1[8] = param_1[8] + 1;
  FUN_01025470(*(undefined4 *)(*piVar1 + -4 + param_1[8] * 4),0);
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  iVar3 = (**(code **)(**(int **)((int)pvVar2 + 0x2c) + 4))(0x70);
  *(undefined2 *)(iVar3 + 4) = 0x70;
  uVar4 = hkPackfileData::hkPackfileData(0);
  param_1[6] = uVar4;
  uVar4 = FUN_010500f0();
  uVar4 = FUN_0104ed70(uVar4);
  FUN_010f9a30(uVar4);
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  puVar5 = (undefined4 *)(**(code **)(**(int **)((int)pvVar2 + 0x2c) + 4))(0x40);
  *(undefined2 *)(puVar5 + 1) = 0x40;
  hkPackfileObjectUpdateTracker::hkPackfileObjectUpdateTracker(param_1[6]);
  puVar5[0xf] = param_1 + 0x12;
  *puVar5 = vftable;
  puVar5[0xe] = 0;
  param_1[0x11] = puVar5;
  return param_1;
}

// 0105B0A0  hkXmlPackfileReader::~hkXmlPackfileReader  size=169  [run]
void __fastcall hkXmlPackfileReader::~hkXmlPackfileReader(undefined4 *param_1)

{
  *param_1 = vftable;
  if ((undefined4 *)param_1[0x11] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x11])(1);
  }
  FUN_010060a0();
  if (param_1[0x12] != 0) {
    FUN_010060a0();
  }
  param_1[0x12] = 0;
  param_1[0xf] = 0;
  if (-1 < (int)param_1[0x10]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0xe],param_1[0x10] * 8);
  }
  param_1[0xe] = 0;
  param_1[0x10] = 0x80000000;
  FUN_01025870();
  param_1[8] = 0;
  if (-1 < (int)param_1[9]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[7],param_1[9] * 4);
  }
  param_1[7] = 0;
  param_1[9] = 0x80000000;
  hkBaseObject::hkBaseObject_48();
  return;
}

// 0105B150  FUN_0105b150  size=303  [run]
void __thiscall
FUN_0105b150(int param_1,int *param_2,int param_3,int param_4,undefined4 param_5,undefined4 param_6)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar3 = FUN_01025530(param_2);
  param_6 = uVar3;
  FUN_01025890((int)&param_2 + 3,uVar3);
  iVar2 = param_3;
  if (param_2._3_1_ != '\0') {
    iVar4 = FUN_01025400(uVar3);
    iVar5 = *(int *)(param_1 + 0x44);
    if (iVar4 != -1) {
      iVar7 = *(int *)(iVar5 + 0xc);
      iVar6 = iVar4;
      do {
        **(int **)(iVar7 + iVar6 * 8) = iVar2;
        iVar7 = *(int *)(iVar5 + 0xc);
        iVar6 = *(int *)(iVar7 + 4 + iVar6 * 8);
      } while (iVar6 != -1);
    }
    FUN_0105d0d0(iVar2,iVar4);
    FUN_010255c0(param_6);
  }
  iVar5 = param_4;
  if (*(int *)(param_4 + 0x1c) != 0) {
    param_2 = *(int **)(param_1 + 0x44);
    (**(code **)(*param_2 + 0x1c))
              (**(int **)(param_4 + 0x18) + iVar2,(*(int **)(param_4 + 0x18))[1]);
  }
  param_2 = (int *)0x0;
  if (0 < *(int *)(iVar5 + 0x28)) {
    do {
      piVar1 = (int *)(*(int *)(iVar5 + 0x24) + (int)param_2 * 8);
      iVar5 = FUN_01025900(piVar1[1],&param_6);
      if (iVar5 == 0) {
        (**(code **)(**(int **)(param_1 + 0x44) + 0x14))(param_6,*piVar1 + iVar2);
      }
      else {
        uVar3 = FUN_01025be0(piVar1[1],0xffffffff);
        param_3 = *piVar1 + iVar2;
        uVar3 = FUN_0105d4f0(&param_3,uVar3);
        FUN_01025470(piVar1[1],uVar3);
      }
      param_2 = (int *)((int)param_2 + 1);
      iVar5 = param_4;
    } while ((int)param_2 < *(int *)(param_4 + 0x28));
  }
  return;
}

// 0105B290  FUN_0105b290  size=201  [run]
void __thiscall FUN_0105b290(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int local_18;
  int local_14;
  int local_10;
  int *local_c;
  int local_8;
  
  piVar2 = (int *)(**(code **)(*param_1 + 0x30))();
  local_c = piVar2;
  if (piVar2 != (int *)0x0) {
    FUN_01006000();
  }
  local_18 = 0;
  local_14 = 0;
  local_10 = -0x80000000;
  (**(code **)(*piVar2 + 0x14))(&local_18);
  local_8 = 0;
  if (0 < local_14) {
    do {
      iVar1 = *(int *)(local_18 + local_8 * 4);
      iVar4 = *param_2;
      uVar3 = FUN_010093a0();
      iVar4 = (**(code **)(iVar4 + 0x10))(uVar3);
      if ((iVar4 != 0) && (iVar4 != iVar1)) {
        (**(code **)(*local_c + 0x1c))(iVar4,0);
      }
      local_8 = local_8 + 1;
    } while (local_8 < local_14);
  }
  local_14 = 0;
  if (-1 < local_10) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_18,local_10 * 4);
  }
  local_18 = 0;
  local_10 = 0x80000000;
  FUN_010060a0();
  return;
}

// 0105B360  hkXmlPackfileReader::vf34  size=205  [run]
int __fastcall hkXmlPackfileReader::vf34(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar2 = (**(code **)(*param_1 + 0x28))();
  if (iVar2 != 0) {
    uVar3 = FUN_010e0a10(iVar2);
    iVar4 = FUN_01015b90(uVar3);
    if (iVar4 == 0) {
      iVar2 = (**(code **)(*DAT_0209b610 + 0x10))();
    }
    else {
      iVar2 = FUN_0104ed70(iVar2);
    }
    if (iVar2 != 0) {
      FUN_0105b290(iVar2);
    }
  }
  uVar3 = (**(code **)(*param_1 + 0x30))();
  FUN_010f9a30(uVar3);
  iVar2 = FUN_010f9b40();
  if (iVar2 == 0) {
    iVar2 = 0;
    if (0 < param_1[0xf]) {
      do {
        puVar1 = (undefined4 *)(param_1[0xe] + iVar2 * 8);
        iVar4 = FUN_01010160(*puVar1,0);
        if (iVar4 != 0) {
          uVar3 = FUN_010093a0();
          FUN_010100a0(&PTR_vftable_018e9b94,*puVar1,uVar3);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < param_1[0xf]);
    }
    uVar3 = (**(code **)(*param_1 + 0x18))();
    FUN_010f9a00(*(undefined4 *)(param_1[0x11] + 0x34),uVar3);
  }
  return param_1[6];
}

// 0105B430  hkXmlPackfileReader::vf20  size=144  [run]
undefined4 * __thiscall hkXmlPackfileReader::vf20(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  
  iVar1 = *param_1;
  *param_2 = *(undefined4 *)(param_1[0x11] + 0x34);
  param_2[1] = 0;
  iVar1 = (**(code **)(iVar1 + 0x28))();
  if (iVar1 != 0) {
    uVar2 = FUN_010e0a10(iVar1);
    iVar3 = FUN_01015b90(uVar2);
    if (iVar3 == 0) {
      iVar1 = (**(code **)(*DAT_0209b610 + 0x10))();
    }
    else {
      iVar1 = FUN_0104ed70(iVar1);
    }
    if (iVar1 != 0) {
      FUN_0105b290(iVar1);
    }
  }
  piVar4 = (int *)(**(code **)(*param_1 + 0x30))();
  iVar1 = *piVar4;
  uVar2 = (**(code **)(*param_1 + 0x18))();
  uVar2 = (**(code **)(iVar1 + 0x10))(uVar2);
  param_2[1] = uVar2;
  return param_2;
}

// 0105B4C0  hkXmlPackfileReader::vf10  size=155  [run]
void __thiscall hkXmlPackfileReader::vf10(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_3 == 0) {
    iVar1 = (**(code **)(*param_1 + 0x28))();
    if (iVar1 == 0) {
      return;
    }
    iVar1 = (**(code **)(*param_1 + 0x28))();
    if (iVar1 != 0) {
      uVar2 = FUN_010e0a10(iVar1);
      iVar3 = FUN_01015b90(uVar2);
      if (iVar3 == 0) {
        iVar1 = (**(code **)(*DAT_0209b610 + 0x10))();
      }
      else {
        iVar1 = FUN_0104ed70(iVar1);
      }
      if (iVar1 != 0) {
        FUN_0105b290(iVar1);
      }
    }
    FUN_010f9a30(param_1[0x12]);
  }
  else {
    FUN_0105fa00();
    (**(code **)(*param_1 + 0x34))();
  }
  (**(code **)(*(int *)param_1[6] + 0x18))(param_2,param_3);
  return;
}


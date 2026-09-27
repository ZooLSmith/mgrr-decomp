// src/unsorted/unit_00928FF0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00928FF0..0092AE30, 32 functions

#include "types.h"

// 00928FF0  FUN_00928ff0  size=185  [run]
void __thiscall FUN_00928ff0(int param_1,byte param_2)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int local_8;
  
  if (param_2 < 5) {
    piVar2 = (int *)(param_1 + 0x2c);
    local_8 = 5;
    do {
      iVar3 = 0;
      if (0 < *piVar2) {
        do {
          FUN_00912dd0(*(undefined4 *)(piVar2[-1] + iVar3 * 4));
          iVar3 = iVar3 + 1;
        } while (iVar3 < *piVar2);
      }
      iVar3 = 0;
      if (0 < piVar2[0xf]) {
        do {
          puVar1 = (uint *)(*(int *)(piVar2[0xe] + iVar3 * 4) + 0x38);
          *puVar1 = *puVar1 & 0xfffffffe;
          iVar3 = iVar3 + 1;
        } while (iVar3 < piVar2[0xf]);
      }
      piVar2 = piVar2 + 3;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    iVar4 = 0;
    iVar3 = param_1 + (uint)param_2 * 0xc;
    if (0 < *(int *)(param_1 + 0x2c + (uint)param_2 * 0xc)) {
      do {
        FUN_009182d0(*(undefined4 *)(*(int *)(iVar3 + 0x28) + iVar4 * 4));
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(iVar3 + 0x2c));
    }
    iVar4 = 0;
    if (0 < *(int *)(iVar3 + 0x68)) {
      do {
        puVar1 = (uint *)(*(int *)(*(int *)(iVar3 + 100) + iVar4 * 4) + 0x38);
        *puVar1 = *puVar1 | 1;
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(iVar3 + 0x68));
    }
  }
  return;
}

// 009290B0  FUN_009290b0  size=74  [run]
void __thiscall FUN_009290b0(int param_1,byte param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = param_1 + (uint)param_2 * 0xc;
  if (0 < *(int *)(param_1 + 0x2c + (uint)param_2 * 0xc)) {
    do {
      FUN_00912dd0(*(undefined4 *)(*(int *)(iVar2 + 0x28) + iVar3 * 4));
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(iVar2 + 0x2c));
  }
  iVar3 = 0;
  if (0 < *(int *)(iVar2 + 0x68)) {
    do {
      puVar1 = (uint *)(*(int *)(*(int *)(iVar2 + 100) + iVar3 * 4) + 0x38);
      *puVar1 = *puVar1 & 0xfffffffe;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(iVar2 + 0x68));
  }
  return;
}

// 00929100  FUN_00929100  size=75  [run]
void __fastcall FUN_00929100(int param_1)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar2 = 5;
  piVar3 = (int *)(param_1 + 0x2c);
  do {
    iVar4 = 0;
    if (0 < *piVar3) {
      do {
        FUN_00912dd0(*(undefined4 *)(piVar3[-1] + iVar4 * 4));
        iVar4 = iVar4 + 1;
      } while (iVar4 < *piVar3);
    }
    iVar4 = 0;
    if (0 < piVar3[0xf]) {
      do {
        puVar1 = (uint *)(*(int *)(piVar3[0xe] + iVar4 * 4) + 0x38);
        *puVar1 = *puVar1 & 0xfffffffe;
        iVar4 = iVar4 + 1;
      } while (iVar4 < piVar3[0xf]);
    }
    piVar3 = piVar3 + 3;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

// 00929150  FUN_00929150  size=49  [run]
void __fastcall FUN_00929150(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)(param_1 + 0x2c);
  iVar1 = 5;
  do {
    iVar2 = 0;
    if (0 < *piVar3) {
      do {
        FUN_00912dd0(*(undefined4 *)(piVar3[-1] + iVar2 * 4));
        iVar2 = iVar2 + 1;
      } while (iVar2 < *piVar3);
    }
    piVar3 = piVar3 + 3;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

// 009291C0  FUN_009291c0  size=159  [run]
void __thiscall FUN_009291c0(int param_1,undefined4 param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uStack_11c;
  char local_110 [248];
  undefined4 uStack_18;
  
  uStack_11c = (char *)(uint)*(byte *)(param_1 + 6);
  _sprintf_s(local_110,0x10,"Lv%d");
  uStack_11c = local_110;
  iVar2 = (**(code **)(*param_3 + 0x18))(*(undefined4 *)(param_1 + 0x1c));
  if (iVar2 != -1) {
    iVar2 = (**(code **)(*param_3 + 0x18))(iVar2,&DAT_0164d4a4);
    if (iVar2 != -1) {
      (**(code **)(*param_3 + 0x74))(iVar2,local_110,0x100);
      pcVar3 = (char *)&uStack_11c;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      if (pcVar3 != (char *)((int)&uStack_11c + 1)) {
        FUN_00e5e0c0(&uStack_11c,uStack_18,0xffffffff,0);
      }
    }
  }
  return;
}

// 00929290  FUN_00929290  size=806  [run]
void __thiscall
FUN_00929290(int param_1,int param_2,int param_3,int *param_4,undefined4 param_5,undefined1 param_6)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  char local_58 [4];
  int local_54;
  undefined1 local_50 [4];
  undefined4 local_4c;
  undefined1 local_30 [16];
  undefined1 local_20 [28];
  
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (iVar1 = FUN_00a7c800(), iVar1 != 0)) {
    local_58[0] = '\0';
    local_58[1] = '\0';
    local_58[2] = '\0';
    local_58[3] = 0;
    FUN_00928930(param_2);
    iVar2 = FUN_00fdbbd0(param_2,&DAT_0164d4c8);
    if (iVar2 != 0) {
      _strncpy_s(local_58,4,(char *)(param_2 + 3),2);
      lVar3 = _strtol(local_58,(char **)0x0,0x10);
      *(undefined1 *)(param_1 + 7) = param_6;
      *(float *)(param_1 + 0x18) = 1.0 / (float)lVar3;
      return;
    }
    iVar2 = FUN_00fdbbd0(param_2,"RECONST");
    if (iVar2 == 0) {
      iVar2 = FUN_00fdbbd0(param_2,"HITDYNA");
      if (iVar2 != 0) {
        FUN_004066f0();
        iVar2 = 0;
        if (0 < param_4[1]) {
          do {
            FUN_00910a40(*(undefined4 *)(*param_4 + iVar2 * 4));
            iVar4 = FUN_0091aa00();
            FUN_00912530(1,2);
            FUN_009164e0(0xb);
            FUN_00916530();
            if (iVar4 != 0) {
              local_4c = 0;
              FUN_00910a40(*(undefined4 *)(*param_4 + iVar2 * 4));
              FUN_00915860(local_50);
              FUN_009161b0(local_20,local_30);
            }
            *(uint *)(iVar1 + 0x364) = *(uint *)(iVar1 + 0x364) & 0xfffffffd;
            iVar2 = iVar2 + 1;
          } while (iVar2 < param_4[1]);
        }
        FUN_00406760();
        return;
      }
      iVar2 = FUN_00fdbbd0(param_2,&DAT_0164d4b0);
      if (iVar2 != 0) {
        FUN_004066f0();
        local_54 = 0;
        if (0 < param_4[1]) {
          do {
            FUN_00910a40(*(undefined4 *)(*param_4 + local_54 * 4));
            iVar2 = FUN_0091aa00();
            iVar4 = FUN_009f8b40();
            FUN_00912530(1,2);
            FUN_009164e0(iVar4 << 0x10 | 0xb);
            FUN_00916530();
            if (iVar2 != 0) {
              local_4c = 0;
              FUN_00915860(local_50);
              FUN_009161b0(local_20,local_30);
            }
            *(uint *)(iVar1 + 0x364) = *(uint *)(iVar1 + 0x364) & 0xfffffffd;
            local_54 = local_54 + 1;
          } while (local_54 < param_4[1]);
        }
        FUN_00406760();
        return;
      }
      iVar1 = FUN_00fdbbd0(param_2,&DAT_0164d4ac);
      if (iVar1 != 0) {
        _strncpy_s(local_58,4,(char *)(param_2 + 2),2);
        lVar3 = _strtol(local_58,(char **)0x0,0x10);
        iVar1 = 0;
        if (0 < param_4[1]) {
          do {
            iVar2 = iVar1 * 4;
            iVar1 = iVar1 + 1;
            *(short *)(*(int *)(*param_4 + iVar2) + 0x1fe) =
                 (short)((uint)((float)lVar3 * 0.5) >> 0x10);
          } while (iVar1 < param_4[1]);
          return;
        }
      }
    }
    else {
      iVar1 = 0;
      if (0 < param_4[1]) {
        do {
          if (*(int *)(param_3 + 0x48) != 0) {
            FUN_008f2630(*(undefined4 *)(*param_4 + iVar1 * 4));
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < param_4[1]);
        return;
      }
    }
  }
  return;
}

// 009295C0  FUN_009295c0  size=117  [run]
undefined4 __fastcall FUN_009295c0(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = FUN_00a81330();
  if ((iVar2 != 0) && (iVar2 = FUN_00a7c800(), iVar2 != 0)) {
    iVar3 = 0;
    iVar2 = param_1 + (uint)*(byte *)(param_1 + 8) * 0xc;
    uVar4 = 0;
    if (0 < *(int *)(iVar2 + 0x68)) {
      do {
        iVar2 = *(int *)(*(int *)(iVar2 + 100) + iVar3 * 4);
        fVar1 = *(float *)(iVar2 + 0x2c) - *(float *)(param_1 + 0x18);
        if (fVar1 < 0.0) {
          uVar4 = 1;
          fVar1 = 0.0;
        }
        *(float *)(iVar2 + 0x2c) = fVar1;
        iVar3 = iVar3 + 1;
        iVar2 = param_1 + (uint)*(byte *)(param_1 + 8) * 0xc;
      } while (iVar3 < *(int *)(param_1 + 0x68 + (uint)*(byte *)(param_1 + 8) * 0xc));
    }
    return uVar4;
  }
  return 0;
}

// 009296B0  FUN_009296b0  size=58  [run]
void __thiscall FUN_009296b0(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 009296F0  FUN_009296f0  size=55  [run]
void __thiscall FUN_009296f0(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_3;
  param_1[1] = param_1[1] + 1;
  return;
}

// 00929770  FUN_00929770  size=55  [run]
void __thiscall FUN_00929770(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_3;
  param_1[1] = param_1[1] + 1;
  return;
}

// 00929840  FUN_00929840  size=114  [run]
void __thiscall FUN_00929840(int param_1,undefined1 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  
  *(undefined2 *)(param_1 + 4) = 0xffff;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x1c) = param_3;
  *(undefined1 *)(param_1 + 6) = param_2;
  iVar1 = (**(code **)(*param_4 + 0x9c))(param_3,&DAT_0164a424);
  if (iVar1 != -1) {
    (**(code **)(*param_4 + 0xec))(iVar1,(undefined2 *)(param_1 + 4));
  }
  return;
}

// 009298F0  FUN_009298f0  size=342  [run]
void __thiscall FUN_009298f0(int param_1,byte param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  short sVar5;
  int local_8;
  
  if ((param_2 < 5) && (param_3 != (int *)0x0)) {
    FUN_004066f0();
    param_1 = param_1 + (uint)param_2 * 0xc;
    local_8 = 0;
    if (0 < *(int *)(param_1 + 0x20)) {
      do {
        iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + local_8 * 4);
        sVar4 = (**(code **)(*param_3 + 0x20))(iVar2);
        _param_2 = 0;
        if (0 < *(int *)(param_1 + 0x2c)) {
          do {
            iVar3 = *(int *)(*(int *)(param_1 + 0x28) + _param_2 * 4);
            sVar5 = (**(code **)(*param_3 + 0x20))(iVar3);
            if ((sVar4 == sVar5) &&
               (FUN_011a0140(iVar2 + 0x120,iVar2 + 0x160), *(char *)(iVar3 + 0xe8) != '\x05')) {
              FUN_0118fe70();
              (**(code **)(*(int *)(iVar3 + 0xe0) + 0x40))(iVar2 + 0x1b0);
              FUN_0118fe70();
              (**(code **)(*(int *)(iVar3 + 0xe0) + 0x44))(iVar2 + 0x1c0);
            }
            _param_2 = _param_2 + 1;
          } while (_param_2 < *(int *)(param_1 + 0x2c));
        }
        local_8 = local_8 + 1;
      } while (local_8 < *(int *)(param_1 + 0x20));
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  return;
}

// 00929A50  FUN_00929a50  size=150  [run]
void __thiscall FUN_00929a50(int param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  undefined2 local_108 [2];
  char *local_104;
  char local_100 [256];
  
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xf7ffffff;
  if ((byte)param_3 < 5) {
    iVar2 = FUN_009288b0(param_2,param_3,local_100,0x100);
    if (iVar2 != 0) {
      local_108[0] = 0x20;
      pbVar3 = (byte *)_strtok_s(local_100,(char *)local_108,&local_104);
      while (pbVar3 != (byte *)0x0) {
        bVar1 = *pbVar3;
        while (bVar1 != 0) {
          iVar2 = _toupper((uint)*pbVar3);
          *pbVar3 = (byte)iVar2;
          pbVar3 = pbVar3 + 1;
          bVar1 = *pbVar3;
        }
        pbVar3 = (byte *)_strtok_s((char *)0x0,(char *)local_108,&local_104);
      }
    }
  }
  return;
}

// 00929AF0  FUN_00929af0  size=61  [run]
void __fastcall FUN_00929af0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 00929B30  FUN_00929b30  size=55  [run]
void __thiscall FUN_00929b30(int *param_1,undefined4 *param_2)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}

// 00929B70  FUN_00929b70  size=61  [run]
void __fastcall FUN_00929b70(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 00929BD0  FUN_00929bd0  size=58  [run]
void __thiscall FUN_00929bd0(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 00929C10  FUN_00929c10  size=55  [run]
void __thiscall FUN_00929c10(int *param_1,undefined4 *param_2)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}

// 00929C50  FUN_00929c50  size=58  [run]
void __thiscall FUN_00929c50(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 00929D00  FUN_00929d00  size=340  [run]
void __thiscall FUN_00929d00(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  int local_120;
  char local_110 [260];
  int *piStack_c;
  
  if (param_2 != 0) {
    local_120 = 0;
    puVar6 = (uint *)(param_1 + 0x2c);
    do {
      _sprintf_s(local_110,0x10,"Lv%d",local_120);
      iVar1 = (**(code **)(*param_3 + 0x18))(*(undefined4 *)(param_1 + 0x1c),local_110);
      if ((iVar1 != -1) && (iVar1 = (**(code **)(*param_3 + 0x18))(iVar1,"ColList"), iVar1 != -1)) {
        iVar5 = 0;
        iVar2 = (**(code **)(*param_3 + 0x10))(iVar1);
        if (0 < iVar2) {
          do {
            iVar2 = iVar5;
            uVar3 = (**(code **)(*param_3 + 0x14))(iVar1);
            iVar4 = (**(code **)(*param_3 + 0x9c))(uVar3,&DAT_0164d4cc);
            if (iVar4 != -1) {
              (**(code **)(*param_3 + 0xa4))(iVar4,local_110,0x100);
            }
            (**(code **)(*piStack_c + 0x2c))(&stack0xfffffed4,local_110);
            if (iVar2 != 0) {
              if (*puVar6 == (puVar6[1] & 0x3fffffff)) {
                FUN_0100a290(&PTR_vftable_018e9b94,puVar6 + -1,4);
              }
              *(int *)(puVar6[-1] + *puVar6 * 4) = iVar2;
              *puVar6 = *puVar6 + 1;
            }
            iVar5 = iVar5 + 1;
            iVar2 = (**(code **)(*param_3 + 0x10))(iVar1);
          } while (iVar5 < iVar2);
        }
      }
      local_120 = local_120 + 1;
      puVar6 = puVar6 + 3;
    } while (local_120 < 5);
  }
  return;
}

// 00929E60  FUN_00929e60  size=445  [run]
void __thiscall FUN_00929e60(int param_1,undefined4 param_2,int *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  byte *pbVar5;
  byte *pbVar6;
  int *piVar7;
  int unaff_ESI;
  int iVar8;
  uint *unaff_EDI;
  bool bVar9;
  int local_124;
  int local_11c;
  byte local_110 [260];
  int iStack_c;
  
  local_124 = param_1 + 0x68;
  local_11c = 0;
  do {
    _sprintf_s((char *)local_110,0x10,"Lv%d",local_11c);
    iVar2 = (**(code **)(*param_3 + 0x18))(*(undefined4 *)(param_1 + 0x1c),local_110);
    if ((iVar2 != -1) && (iVar2 = (**(code **)(*param_3 + 0x18))(iVar2,"MeshList"), iVar2 != -1)) {
      iVar8 = 0;
      iVar3 = (**(code **)(*param_3 + 0x10))(iVar2);
      if (0 < iVar3) {
        do {
          uVar4 = (**(code **)(*param_3 + 0x14))(iVar2,iVar8);
          iVar2 = (**(code **)(*param_3 + 0x9c))(uVar4,&DAT_0164d4cc);
          if (iVar2 != -1) {
            (**(code **)(*param_3 + 0xa4))(iVar2,local_110,0x100);
          }
          iVar2 = 0;
          if (0 < *(short *)(iStack_c + 0x324)) {
            piVar7 = (int *)(*(int *)(iStack_c + 800) + 0x60);
            do {
              pbVar6 = *(byte **)(*piVar7 + 0x40);
              if (pbVar6 != (byte *)0x0) {
                pbVar5 = local_110;
                do {
                  bVar1 = *pbVar5;
                  bVar9 = bVar1 < *pbVar6;
                  if (bVar1 != *pbVar6) {
LAB_00929f80:
                    iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
                    goto LAB_00929f85;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar5[1];
                  bVar9 = bVar1 < pbVar6[1];
                  if (bVar1 != pbVar6[1]) goto LAB_00929f80;
                  pbVar5 = pbVar5 + 2;
                  pbVar6 = pbVar6 + 2;
                } while (bVar1 != 0);
                iVar3 = 0;
LAB_00929f85:
                if (iVar3 == 0) {
                  if ((iVar2 != -1) && (iVar2 = iVar2 * 0x70 + *(int *)(iStack_c + 800), iVar2 != 0)
                     ) {
                    if (*unaff_EDI == (unaff_EDI[1] & 0x3fffffff)) {
                      FUN_0100a290(&PTR_vftable_018e9b94,unaff_EDI + -1,4);
                    }
                    *(int *)(unaff_EDI[-1] + *unaff_EDI * 4) = iVar2;
                    *unaff_EDI = *unaff_EDI + 1;
                  }
                  break;
                }
              }
              iVar2 = iVar2 + 1;
              piVar7 = piVar7 + 0x1c;
            } while (iVar2 < *(short *)(iStack_c + 0x324));
          }
          iVar8 = unaff_ESI + 1;
          iVar3 = (**(code **)(*param_3 + 0x10))(local_124);
          iVar2 = local_124;
          unaff_ESI = iVar8;
        } while (iVar8 < iVar3);
      }
    }
    local_124 = local_124 + 0xc;
    local_11c = local_11c + 1;
    if (4 < local_11c) {
      return;
    }
  } while( true );
}

// 0092A020  FUN_0092a020  size=61  [run]
void __fastcall FUN_0092a020(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0092A060  FUN_0092a060  size=61  [run]
void __fastcall FUN_0092a060(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0092A0A0  FUN_0092a0a0  size=485  [run]
void FUN_0092a0a0(int param_1,int *param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 uVar6;
  uint uVar7;
  byte *pbVar8;
  bool bVar9;
  byte abStack_27c [12];
  char local_270 [244];
  undefined1 auStack_17c [376];
  
  if (param_1 != 0) {
    _sprintf_s(local_270,0x10,"Lv%d");
    iVar4 = (**(code **)(*param_2 + 0x18))();
    if (iVar4 != -1) {
      iVar4 = (**(code **)(*param_2 + 0x18))(iVar4);
      if (iVar4 != -1) {
        (**(code **)(*param_2 + 0x74))(iVar4,local_270,0x100);
        pbVar8 = &DAT_016416fa;
        pbVar5 = abStack_27c;
        do {
          bVar3 = *pbVar5;
          bVar9 = bVar3 < *pbVar8;
          if (bVar3 != *pbVar8) {
LAB_0092a158:
            iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            goto LAB_0092a15d;
          }
          if (bVar3 == 0) break;
          bVar3 = pbVar5[1];
          bVar9 = bVar3 < pbVar8[1];
          if (bVar3 != pbVar8[1]) goto LAB_0092a158;
          pbVar5 = pbVar5 + 2;
          pbVar8 = pbVar8 + 2;
        } while (bVar3 != 0);
        iVar4 = 0;
LAB_0092a15d:
        if (iVar4 != 0) {
          FUN_009f8c40();
          uVar6 = FUN_00928930(abStack_27c);
          iVar4 = FUN_00fdbbd0(uVar6,&DAT_0164d4e8);
          if (iVar4 != 0) {
            uVar7 = _strtol((char *)(iVar4 + 4),(char **)0x0,10);
            FUN_004039a0(uVar7 & 0xffff,param_1,0xffffffff);
            iVar4 = FUN_0040ea80(param_1);
            iVar4 = *(int *)(iVar4 + 0x888);
            FUN_00dffb30(iVar4);
            uVar6 = param_4[1];
            uVar1 = param_4[2];
            *(undefined4 *)(iVar4 + 0x50) = *param_4;
            *(undefined4 *)(iVar4 + 0x54) = uVar6;
            *(undefined4 *)(iVar4 + 0x58) = uVar1;
            *(uint *)(iVar4 + 0x68) = *(uint *)(iVar4 + 0x68) | 4;
            FUN_00a8c930(0,auStack_17c);
            return;
          }
          _strncpy_s(&stack0xfffffd64,4,(char *)abStack_27c,3);
          uVar7 = _strtol(&stack0xfffffd64,(char **)0x0,10);
          FUN_004039a0(uVar7 & 0xffff,param_1,0);
          FUN_00a963e0(auStack_17c);
          uVar6 = *param_4;
          uVar1 = param_4[1];
          uVar2 = param_4[2];
          iVar4 = FUN_00a8c890(0);
          *(undefined4 *)(iVar4 + 0x50) = uVar6;
          *(undefined4 *)(iVar4 + 0x54) = uVar1;
          *(undefined4 *)(iVar4 + 0x58) = uVar2;
          *(uint *)(iVar4 + 0x68) = *(uint *)(iVar4 + 0x68) | 4;
        }
      }
    }
  }
  return;
}

// 0092A290  FUN_0092a290  size=61  [run]
void __fastcall FUN_0092a290(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0092A2D0  FUN_0092a2d0  size=61  [run]
void __fastcall FUN_0092a2d0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0092A530  FUN_0092a530  size=157  [run]
void __fastcall FUN_0092a530(int param_1)

{
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0x80000000;
  *(undefined4 *)(param_1 + 0x3c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x48) = 0x80000000;
  *(undefined4 *)(param_1 + 0x54) = 0x80000000;
  *(undefined4 *)(param_1 + 0x60) = 0x80000000;
  *(undefined4 *)(param_1 + 0x6c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x78) = 0x80000000;
  *(undefined4 *)(param_1 + 0x84) = 0x80000000;
  *(undefined4 *)(param_1 + 0x90) = 0x80000000;
  *(undefined4 *)(param_1 + 0x9c) = 0x80000000;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined2 *)(param_1 + 4) = 0xffff;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 7) = 0xff;
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}

// 0092A5D0  FUN_0092a5d0  size=253  [run]
void __fastcall FUN_0092a5d0(int param_1)

{
  int iVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar2 = (uint *)(param_1 + 0x30);
  iVar1 = 5;
  do {
    puVar2[-1] = 0;
    if ((*puVar2 & 0x80000000) == 0) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(puVar2[-2],*puVar2 * 4);
    }
    puVar2[-2] = 0;
    *puVar2 = 0x80000000;
    puVar2[0xe] = 0;
    if ((puVar2[0xf] & 0x80000000) == 0) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(puVar2[0xd],puVar2[0xf] * 4);
    }
    puVar2[0xd] = 0;
    puVar2[0xf] = 0x80000000;
    puVar2 = puVar2 + 3;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = 4;
  puVar4 = (undefined4 *)(param_1 + 0xa0);
  do {
    puVar3 = puVar4 + -3;
    puVar4[-2] = 0;
    if ((puVar4[-1] & 0x80000000) == 0) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(*puVar3,puVar4[-1] * 4);
    }
    iVar1 = iVar1 + -1;
    *puVar3 = 0;
    puVar4[-1] = 0x80000000;
    puVar4 = puVar3;
  } while (-1 < iVar1);
  iVar1 = 4;
  puVar4 = (undefined4 *)(param_1 + 100);
  do {
    puVar3 = puVar4 + -3;
    puVar4[-2] = 0;
    if ((puVar4[-1] & 0x80000000) == 0) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(*puVar3,puVar4[-1] * 4);
    }
    iVar1 = iVar1 + -1;
    *puVar3 = 0;
    puVar4[-1] = 0x80000000;
    puVar4 = puVar3;
  } while (-1 < iVar1);
  return;
}

// 0092A6D0  FUN_0092a6d0  size=252  [run]
void FUN_0092a6d0(int param_1,undefined4 param_2,float *param_3)

{
  float fVar1;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  local_20 = *param_3 - *(float *)(param_1 + 0x40);
  local_1c = param_3[1] - *(float *)(param_1 + 0x44);
  local_18 = param_3[2] - *(float *)(param_1 + 0x48);
  local_14 = param_3[3] - *(float *)(param_1 + 0x4c);
  if (((local_20 != 0.0) || (local_1c != 0.0)) || (local_18 != 0.0)) {
    fVar1 = local_18 * local_18 + local_1c * local_1c + local_20 * local_20;
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      FUN_00ddf460(&local_20,&local_20);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_20 = 0.0;
      local_1c = 1.0;
      local_18 = 0.0;
    }
  }
  FUN_0092a0a0(param_1,param_2,param_3,&local_20);
  return;
}

// 0092A7D0  FUN_0092a7d0  size=1070  [run]
void FUN_0092a7d0(int param_1)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined4 unaff_EBX;
  int unaff_EBP;
  int iVar10;
  int *piVar11;
  char *pcVar12;
  bool bVar13;
  int iStack_170;
  undefined *puStack_16c;
  uint uStack_168;
  char *pcStack_164;
  undefined4 uStack_160;
  uint uStack_15c;
  char *pcStack_158;
  int iStack_13c;
  int iStack_138;
  undefined4 uStack_134;
  uint uStack_130;
  int iStack_12c;
  char *pcStack_128;
  undefined4 uStack_124;
  int local_120;
  uint auStack_11c [61];
  int iStack_28;
  int iStack_20;
  int iStack_18;
  undefined4 uStack_14;
  
  iVar3 = FUN_00a81330();
  if ((iVar3 != 0) && (local_120 = FUN_00a7c800(), local_120 != 0)) {
    piVar1 = (int *)(param_1 + 0x24);
    pcStack_158 = (char *)0x92a817;
    uStack_15c = (**(code **)(*(int *)(param_1 + 0x24) + 4))();
    pcStack_158 = "CommandList";
    uStack_160 = 0x92a826;
    uVar4 = (**(code **)(*piVar1 + 0x18))();
    uStack_130 = 0x80000000;
    iStack_13c = -0x80000000;
    iStack_138 = 0;
    uStack_134 = 0;
    uStack_124 = 0;
    pcStack_164 = (char *)0x92a857;
    uStack_160 = uVar4;
    auStack_11c[0] = uVar4;
    iVar3 = (**(code **)(*piVar1 + 0x10))();
    uVar7 = unaff_EBX;
    if (0 < iVar3) {
      do {
        pcStack_164 = pcStack_128;
        puStack_16c = (undefined *)0x92a86f;
        uStack_168 = uVar4;
        iVar3 = (**(code **)(*piVar1 + 0x14))();
        puStack_16c = &DAT_0164a424;
        iStack_170 = iVar3;
        iStack_12c = iVar3;
        iVar5 = (**(code **)(*piVar1 + 0x9c))();
        if (iVar5 != -1) {
          (**(code **)(*piVar1 + 0xf0))(iVar5,(int)&uStack_160 + 3);
        }
        if (uStack_160._3_1_ == (char)uStack_14) {
          if ((*(int *)(param_1 + 0x48) != 0) &&
             (iVar5 = (**(code **)(*piVar1 + 0x18))(iVar3,"ColList"), iVar5 != -1)) {
            iVar10 = 0;
            iVar6 = (**(code **)(*piVar1 + 0x10))(iVar5);
            param_1 = iStack_18;
            if (0 < iVar6) {
              do {
                uVar7 = (**(code **)(*piVar1 + 0x14))(iVar5,iVar10);
                iVar3 = (**(code **)(*piVar1 + 0x9c))(uVar7,&DAT_0164d4cc);
                if (iVar3 != -1) {
                  (**(code **)(*piVar1 + 0xa4))(iVar3,&iStack_12c,0x100);
                }
                (**(code **)(**(int **)(iStack_28 + 0x48) + 0x2c))(&uStack_134,&iStack_12c);
                if (uStack_160 == (uStack_15c & 0x3fffffff)) {
                  FUN_0100a290(&PTR_vftable_018e9b94,&pcStack_164,4);
                }
                pcVar12 = pcStack_164 + uStack_160 * 4;
                pcVar12[0] = '\0';
                pcVar12[1] = '\0';
                pcVar12[2] = '\0';
                pcVar12[3] = -0x80;
                uStack_160 = uStack_160 + 1;
                iVar10 = iVar10 + 1;
                iVar6 = (**(code **)(*piVar1 + 0x10))(iVar5);
                iVar3 = unaff_EBP;
                param_1 = iStack_18;
              } while (iVar10 < iVar6);
            }
          }
          iVar5 = (**(code **)(*piVar1 + 0x18))(iVar3,"MeshList");
          uStack_134 = iVar5;
          if ((iVar5 != -1) && (iVar6 = (**(code **)(*piVar1 + 0x10))(iVar5), 0 < iVar6)) {
            do {
              uVar7 = (**(code **)(*piVar1 + 0x14))(iVar5,0);
              iVar3 = (**(code **)(*piVar1 + 0x9c))(uVar7,&DAT_0164d4cc);
              if (iVar3 != -1) {
                (**(code **)(*piVar1 + 0xa4))(iVar3,&uStack_134,0x100);
              }
              iVar3 = 0;
              if (0 < sRam00000324) {
                piVar11 = (int *)(iRam00000320 + 0x60);
                do {
                  pbVar9 = *(byte **)(*piVar11 + 0x40);
                  if (pbVar9 != (byte *)0x0) {
                    pbVar8 = (byte *)&uStack_134;
                    do {
                      bVar2 = *pbVar8;
                      bVar13 = bVar2 < *pbVar9;
                      if (bVar2 != *pbVar9) {
LAB_0092aa70:
                        iVar5 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
                        goto LAB_0092aa75;
                      }
                      if (bVar2 == 0) break;
                      bVar2 = pbVar8[1];
                      bVar13 = bVar2 < pbVar9[1];
                      if (bVar2 != pbVar9[1]) goto LAB_0092aa70;
                      pbVar8 = pbVar8 + 2;
                      pbVar9 = pbVar9 + 2;
                    } while (bVar2 != 0);
                    iVar5 = 0;
LAB_0092aa75:
                    if (iVar5 == 0) {
                      if ((iVar3 != -1) && (iVar3 = iVar3 * 0x70 + iRam00000320, iVar3 != 0)) {
                        if (puStack_16c == (undefined *)(uStack_168 & 0x3fffffff)) {
                          FUN_0100a290(&PTR_vftable_018e9b94,&iStack_170,4);
                        }
                        *(int *)(iStack_170 + (int)puStack_16c * 4) = iVar3;
                        puStack_16c = puStack_16c + 1;
                      }
                      break;
                    }
                  }
                  iVar3 = iVar3 + 1;
                  piVar11 = piVar11 + 0x1c;
                } while (iVar3 < sRam00000324);
              }
              pcVar12 = pcStack_158 + 1;
              pcStack_158 = pcVar12;
              iVar6 = (**(code **)(*piVar1 + 0x10))(0);
              iVar3 = iStack_13c;
              param_1 = iStack_20;
              iVar5 = uStack_134;
            } while ((int)pcVar12 < iVar6);
          }
          iVar3 = (**(code **)(*piVar1 + 0x18))(iVar3,"Command");
          uVar4 = uStack_130;
          if (iVar3 != -1) {
            (**(code **)(*piVar1 + 0x74))(iVar3,auStack_11c,0x100);
            uStack_15c = CONCAT22(uStack_15c._2_2_,0x20);
            pcVar12 = _strtok_s((char *)auStack_11c,(char *)&uStack_15c,&pcStack_128);
            uVar4 = uStack_130;
            while (uStack_130 = uVar4, pcVar12 != (char *)0x0) {
              FUN_00929290(pcVar12,param_1,&stack0xfffffeb4,&pcStack_158,uStack_14);
              pcVar12 = _strtok_s((char *)0x0,(char *)&uStack_15c,&pcStack_128);
              uVar4 = uStack_130;
            }
          }
        }
        iStack_138 = iStack_138 + 1;
        iVar3 = (**(code **)(*piVar1 + 0x10))(uVar4);
        uVar7 = 0;
      } while (iStack_138 < iVar3);
    }
    uStack_160 = uVar7;
    uStack_15c = 0;
    pcStack_164 = (char *)0x92abc4;
    (**(code **)(PTR_vftable_018e9b94 + 0x10))();
    if (-1 < uStack_134) {
      uStack_15c = uStack_134 * 4;
      uStack_160 = 0x80000000;
      pcStack_164 = (char *)0x92abfb;
      (**(code **)(PTR_vftable_018e9b94 + 0x10))();
    }
  }
  return;
}

// 0092AC10  FUN_0092ac10  size=541  [run]
uint FUN_0092ac10(int param_1)

{
  byte bVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  int unaff_EBX;
  undefined *puVar9;
  int *piVar10;
  undefined4 unaff_ESI;
  int *piVar11;
  uint unaff_EDI;
  int iVar12;
  bool bVar13;
  undefined *puStack_144;
  int iStack_134;
  int iStack_130;
  undefined4 uStack_12c;
  
  iVar3 = FUN_00a81330();
  if ((iVar3 == 0) || (iVar3 = FUN_00a7c800(), iVar3 == 0)) {
    return 0;
  }
  piVar11 = (int *)(param_1 + 0x24);
  uStack_12c = (char *)0x92ac5d;
  iStack_130 = (**(code **)(*(int *)(param_1 + 0x24) + 4))();
  uStack_12c = "CommandList";
  uVar4 = (**(code **)(*piVar11 + 0x18))();
  iVar12 = 0;
  iVar3 = (**(code **)(*piVar11 + 0x10))();
  if (0 < iVar3) {
    do {
      uVar5 = (**(code **)(*piVar11 + 0x14))(uVar4);
      puStack_144 = &DAT_0164a424;
      iVar3 = (**(code **)(*piVar11 + 0x9c))(uVar5);
      if (iVar3 != -1) {
        (**(code **)(*piVar11 + 0xf0))(iVar3,&stack0xfffffecb);
      }
      if (((char)((uint)unaff_EBX >> 0x18) == *(char *)(unaff_EDI + 7)) &&
         (iVar3 = (**(code **)(*piVar11 + 0x18))(uVar5,"MeshList"), iVar3 != -1)) {
        puVar9 = (undefined *)0x0;
        iStack_134 = 0;
        iVar6 = (**(code **)(*piVar11 + 0x10))(iVar3);
        if (0 < iVar6) {
          do {
            uVar4 = (**(code **)(*piVar11 + 0x14))(iVar3,puVar9);
            iVar3 = (**(code **)(*piVar11 + 0x9c))(uVar4,&DAT_0164d4cc);
            if (iVar3 != -1) {
              (**(code **)(*piVar11 + 0xa4))(iVar3,&uStack_12c,0x100);
            }
            iVar3 = 0;
            if (0 < *(short *)(iVar12 + 0x324)) {
              piVar10 = (int *)(*(int *)(iVar12 + 800) + 0x60);
              do {
                pbVar8 = *(byte **)(*piVar10 + 0x40);
                if (pbVar8 != (byte *)0x0) {
                  pbVar7 = (byte *)&uStack_12c;
                  do {
                    bVar1 = *pbVar7;
                    bVar13 = bVar1 < *pbVar8;
                    if (bVar1 != *pbVar8) {
LAB_0092ad95:
                      iVar6 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
                      goto LAB_0092ad9a;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pbVar7[1];
                    bVar13 = bVar1 < pbVar8[1];
                    if (bVar1 != pbVar8[1]) goto LAB_0092ad95;
                    pbVar7 = pbVar7 + 2;
                    pbVar8 = pbVar8 + 2;
                  } while (bVar1 != 0);
                  iVar6 = 0;
LAB_0092ad9a:
                  if (iVar6 == 0) {
                    if ((iVar3 != -1) && (iVar3 = iVar3 * 0x70 + *(int *)(iVar12 + 800), iVar3 != 0)
                       ) {
                      fVar2 = *(float *)(iVar3 + 0x2c) - *(float *)(unaff_EBX + 0x18);
                      if (fVar2 < 0.0) {
                        fVar2 = 0.0;
                      }
                      *(float *)(iVar3 + 0x2c) = fVar2;
                    }
                    break;
                  }
                }
                iVar3 = iVar3 + 1;
                piVar10 = piVar10 + 0x1c;
              } while (iVar3 < *(short *)(iVar12 + 0x324));
            }
            puVar9 = puStack_144 + 1;
            iVar6 = (**(code **)(*piVar11 + 0x10))(0);
            uVar4 = unaff_ESI;
            iVar3 = iStack_134;
            puStack_144 = puVar9;
          } while ((int)puVar9 < iVar6);
        }
      }
      iVar12 = iStack_130 + 1;
      iVar3 = (**(code **)(*piVar11 + 0x10))(uVar4);
      iStack_130 = iVar12;
    } while (iVar12 < iVar3);
  }
  return unaff_EDI >> 0x10 & 0xff;
}

// 0092AE30  FUN_0092ae30  size=30  [run]
undefined4 __thiscall FUN_0092ae30(undefined4 param_1,byte param_2)

{
  FUN_0092a5d0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}


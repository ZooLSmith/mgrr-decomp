// lib/havok/Source/Common/Base/System/Io/Socket/Bsd/hkBsdSocket.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0102C010..0102C290, 5 functions

#include "types.h"

// 0102C010  FUN_0102c010  size=131  [__FILE__]
void FUN_0102c010(void)

{
  code *pcVar1;
  int iVar2;
  WSADATA local_3a0;
  undefined1 local_210 [524];
  
  if (DAT_01f90a38 == '\0') {
    iVar2 = WSAStartup(0x202,&local_3a0);
    if (iVar2 == -1) {
      hkErrStream::hkErrStream(local_210,0x200);
      FUN_01018d00("(Windows)WSAStartup failed with error!");
      iVar2 = (**(code **)(*DAT_01f8fc58 + 0xc))
                        (3,0x321825f8,local_210,
                         "D:\\project\\PRJ_012\\p1\\common\\mw\\hk2011_3_0_r1\\Source\\Common\\Base\\System\\Io\\Socket\\Bsd\\hkBsdSocket.cpp"
                         ,0x49);
      if (iVar2 != 0) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      hkBaseObject::hkBaseObject_38();
    }
    DAT_01f90a38 = '\x01';
  }
  return;
}

// 0102C0A0  hkBaseObject::hkBaseObject_202  size=29  [between]
void __fastcall hkBaseObject::hkBaseObject_202(undefined4 *param_1)

{
  *param_1 = hkBsdSocket::vftable;
  hkBsdSocket::vf10();
  param_1[5] = vftable;
  param_1[2] = vftable;
  *param_1 = vftable;
  return;
}

// 0102C0C0  hkBsdSocket::~hkBsdSocket  size=42  [between]
undefined4 * __thiscall hkBsdSocket::~hkBsdSocket(undefined4 *param_1,int param_2)

{
  hkSocket::ReaderAdapter::ReaderAdapter();
  *param_1 = vftable;
  param_1[8] = param_2;
  if (param_2 == -1) {
    FUN_0102bdc0();
  }
  return param_1;
}

// 0102C0F0  hkBsdSocket::vf2C  size=413  [__FILE__]
undefined4 __fastcall hkBsdSocket::vf2C(int param_1)

{
  in_addr in;
  u_short uVar1;
  int iVar2;
  SOCKET s;
  uint uVar3;
  char *pcVar4;
  LPVOID pvVar5;
  undefined4 uVar6;
  undefined1 local_4c4 [512];
  fd_set local_2c4;
  fd_set local_1c0;
  undefined1 *local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined1 local_b0 [128];
  sockaddr local_30;
  timeval local_14;
  int local_c;
  char local_8 [4];
  
  local_2c4.fd_array[0] = *(SOCKET *)(param_1 + 0x20);
  if (local_2c4.fd_array[0] != 0xffffffff) {
    local_1c0.fd_count = 1;
    local_2c4.fd_count = 1;
    local_14.tv_sec = 0;
    local_14.tv_usec = 0;
    local_1c0.fd_array[0] = local_2c4.fd_array[0];
    iVar2 = select(local_2c4.fd_array[0] + 1,&local_1c0,(fd_set *)0x0,&local_2c4,&local_14);
    if (0 < iVar2) {
      iVar2 = __WSAFDIsSet(*(SOCKET *)(param_1 + 0x20),&local_1c0);
      if (iVar2 != 0) {
        local_c = 0x10;
        s = accept(*(SOCKET *)(param_1 + 0x20),&local_30,&local_c);
        local_bc = local_b0;
        local_b4 = 0x80000080;
        local_b8 = 1;
        local_b0[0] = 0;
        uVar1 = ntohs(local_30.sa_data._0_2_);
        in.S_un._2_1_ = local_30.sa_data[4];
        in.S_un._3_1_ = local_30.sa_data[5];
        in.S_un._0_1_ = local_30.sa_data[2];
        in.S_un._1_1_ = local_30.sa_data[3];
        uVar3 = (uint)uVar1;
        pcVar4 = inet_ntoa(in);
        FUN_010262e0(&local_bc,"Socket got connection from [%s:%d]\n",pcVar4,uVar3);
        hkErrStream::hkErrStream(local_4c4,0x200);
        FUN_010192f0(&local_bc);
        (**(code **)(*DAT_01f8fc58 + 0xc))
                  (0,0xffffffff,local_4c4,
                   "D:\\project\\PRJ_012\\p1\\common\\mw\\hk2011_3_0_r1\\Source\\Common\\Base\\System\\Io\\Socket\\Bsd\\hkBsdSocket.cpp"
                   ,0x1c3);
        hkBaseObject::hkBaseObject_38();
        if (s != 0xffffffff) {
          local_8[0] = '\x01';
          local_8[1] = '\0';
          local_8[2] = '\0';
          local_8[3] = '\0';
          setsockopt(s,6,1,local_8,4);
          pvVar5 = TlsGetValue(DAT_01f8fc4c);
          iVar2 = (**(code **)(**(int **)((int)pvVar5 + 0x2c) + 4))(0x24);
          *(undefined2 *)(iVar2 + 4) = 0x24;
          uVar6 = ~hkBsdSocket(s);
          FUN_01015a80();
          return uVar6;
        }
        FUN_01015a80();
      }
    }
  }
  return 0;
}

// 0102C290  hkBsdSocket::vf20  size=354  [__FILE__]
undefined4 __thiscall hkBsdSocket::vf20(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 **ppuVar2;
  char *pcVar3;
  undefined1 local_3b0 [512];
  char local_1b0 [256];
  undefined1 *local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined1 local_a4 [140];
  sockaddr local_18;
  char local_8 [4];
  
  iVar1 = FUN_0102bdc0();
  if (iVar1 != 0) {
    return 1;
  }
  local_18.sa_family = 2;
  local_18.sa_data[2] = '\0';
  local_18.sa_data[3] = '\0';
  local_18.sa_data[4] = '\0';
  local_18.sa_data[5] = '\0';
  local_18.sa_data._0_2_ = htons((u_short)param_2);
  local_8[0] = '\x01';
  local_8[1] = '\0';
  local_8[2] = '\0';
  local_8[3] = '\0';
  setsockopt(param_1[8],0xffff,4,local_8,4);
  iVar1 = bind(param_1[8],&local_18,0x10);
  if (iVar1 != -1) {
    iVar1 = listen(param_1[8],2);
    if (iVar1 != -1) {
      local_b0 = local_a4;
      local_a8 = 0x80000080;
      local_ac = 1;
      local_a4[0] = 0;
      gethostname(local_1b0,0x100);
      FUN_01026140(local_1b0);
      hkErrStream::hkErrStream(local_3b0,0x200);
      pcVar3 = "] port ";
      ppuVar2 = &local_b0;
      FUN_01018d00("Listening on host[");
      FUN_010192f0(ppuVar2);
      FUN_01018d00(pcVar3);
      FUN_01018dc0(param_2);
      (**(code **)(*DAT_01f8fc58 + 0xc))
                (0,0xffffffff,local_3b0,
                 "D:\\project\\PRJ_012\\p1\\common\\mw\\hk2011_3_0_r1\\Source\\Common\\Base\\System\\Io\\Socket\\Bsd\\hkBsdSocket.cpp"
                 ,0x18c);
      hkBaseObject::hkBaseObject_38();
      FUN_01015a80();
      return 0;
    }
  }
  (**(code **)(*param_1 + 0x10))();
  return 1;
}


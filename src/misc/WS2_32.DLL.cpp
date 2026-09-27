// src/misc/WS2_32.DLL.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 01436EA8..01436F20, 21 functions

#include "mgrr.h"

// 01436EA8  WS2_32.DLL::closesocket  size=6  [class]
int closesocket(SOCKET s)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x01436ea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = closesocket(s);
  return iVar1;
}

// 01436EAE  WS2_32.DLL::socket  size=6  [class]
SOCKET socket(int af,int type,int protocol)

{
  SOCKET SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x01436eae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SVar1 = socket(af,type,protocol);
  return SVar1;
}

// 01436EB4  WS2_32.DLL::WSAGetLastError  size=6  [class]
int WSAGetLastError(void)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x01436eb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = WSAGetLastError();
  return iVar1;
}

// 01436EBA  WS2_32.DLL::recv  size=6  [class]
int recv(SOCKET s,char *buf,int len,int flags)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x01436eba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = recv(s,buf,len,flags);
  return iVar1;
}

// 01436EC0  WS2_32.DLL::send  size=6  [class]
int send(SOCKET s,char *buf,int len,int flags)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x01436ec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = send(s,buf,len,flags);
  return iVar1;
}

// 01436EC6  WS2_32.DLL::connect  size=6  [class]
int connect(SOCKET s,sockaddr *name,int namelen)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x01436ec6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = connect(s,name,namelen);
  return iVar1;
}

// 01436ECC  WS2_32.DLL::gethostbyname  size=6  [class]
hostent * gethostbyname(char *name)

{
  hostent *phVar1;
  
                    /* WARNING: Could not recover jumptable at 0x01436ecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  phVar1 = gethostbyname(name);
  return phVar1;
}

// 01436ED2  WS2_32.DLL::inet_addr  size=6  [class]
ulong inet_addr(char *cp)

{
  ulong uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x01436ed2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = inet_addr(cp);
  return uVar1;
}

// 01436ED8  WS2_32.DLL::htons  size=6  [class]
u_short htons(u_short hostshort)

{
  u_short uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x01436ed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = htons(hostshort);
  return uVar1;
}

// 01436EDE  WS2_32.DLL::WSAAsyncSelect  size=6  [class]
int WSAAsyncSelect(SOCKET s,HWND hWnd,u_int wMsg,long lEvent)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x01436ede. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = WSAAsyncSelect(s,hWnd,wMsg,lEvent);
  return iVar1;
}

// 01436EE4  WS2_32.DLL::select  size=6  [class]
int select(int nfds,fd_set *readfds,fd_set *writefds,fd_set *exceptfds,timeval *timeout)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x01436ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = select(nfds,readfds,writefds,exceptfds,timeout);
  return iVar1;
}

// 01436EEA  WS2_32.DLL::ioctlsocket  size=6  [class]
int ioctlsocket(SOCKET s,long cmd,u_long *argp)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x01436eea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ioctlsocket(s,cmd,argp);
  return iVar1;
}

// 01436EF0  WS2_32.DLL::WSAStartup  size=6  [class]
int WSAStartup(WORD wVersionRequired,LPWSADATA lpWSAData)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x01436ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = WSAStartup(wVersionRequired,lpWSAData);
  return iVar1;
}

// 01436EF6  WS2_32.DLL::setsockopt  size=6  [class]
int setsockopt(SOCKET s,int level,int optname,char *optval,int optlen)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x01436ef6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = setsockopt(s,level,optname,optval,optlen);
  return iVar1;
}

// 01436EFC  WS2_32.DLL::inet_ntoa  size=6  [class]
char * inet_ntoa(in_addr in)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x01436efc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = inet_ntoa(in);
  return pcVar1;
}

// 01436F02  WS2_32.DLL::ntohs  size=6  [class]
u_short ntohs(u_short netshort)

{
  u_short uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x01436f02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = ntohs(netshort);
  return uVar1;
}

// 01436F08  WS2_32.DLL::accept  size=6  [class]
SOCKET accept(SOCKET s,sockaddr *addr,int *addrlen)

{
  SOCKET SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x01436f08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SVar1 = accept(s,addr,addrlen);
  return SVar1;
}

// 01436F0E  WS2_32.DLL::__WSAFDIsSet  size=6  [class]
int __WSAFDIsSet(SOCKET param_1,fd_set *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x01436f0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = __WSAFDIsSet(param_1,param_2);
  return iVar1;
}

// 01436F14  WS2_32.DLL::gethostname  size=6  [class]
int gethostname(char *name,int namelen)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x01436f14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = gethostname(name,namelen);
  return iVar1;
}

// 01436F1A  WS2_32.DLL::listen  size=6  [class]
int listen(SOCKET s,int backlog)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x01436f1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = listen(s,backlog);
  return iVar1;
}

// 01436F20  WS2_32.DLL::bind  size=6  [class]
int bind(SOCKET s,sockaddr *addr,int namelen)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x01436f20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = bind(s,addr,namelen);
  return iVar1;
}


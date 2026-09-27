// Primitive types used by the Ghidra decompiler output, sized for 32-bit MSVC.
// Reconstructed (cleaned) code should use real types; these keep raw output compiling.
#pragma once

typedef unsigned char      undefined;
typedef unsigned char      undefined1;
typedef unsigned short     undefined2;
typedef unsigned int       undefined4;
typedef unsigned long long undefined8;
struct undefined3 { unsigned char b[3]; };
struct undefined5 { unsigned char b[5]; };
struct undefined6 { unsigned char b[6]; };
struct undefined7 { unsigned char b[7]; };

typedef unsigned char      byte;
typedef signed char        sbyte;
typedef unsigned char      uchar;
typedef unsigned short     ushort;
typedef unsigned short     word;
typedef unsigned int       uint;
typedef unsigned int       dword;
typedef unsigned long      ulong;
typedef long long          longlong;
typedef unsigned long long ulonglong;
typedef unsigned long long qword;
typedef long double        float10;   // x87 80-bit; MSVC long double is 64-bit
typedef unsigned short     wchar16;
typedef unsigned int       wchar32;

typedef void code;                    // "code *" = pointer to function of unknown type

#define CONCAT11(a, b) ((unsigned short)(((unsigned char)(a) << 8) | (unsigned char)(b)))
#define CONCAT22(a, b) ((unsigned int)(((unsigned short)(a) << 16) | (unsigned short)(b)))
#define CONCAT31(a, b) ((unsigned int)(((unsigned int)(a) << 8) | (unsigned char)(b)))
#define CONCAT44(a, b) ((unsigned long long)(((unsigned long long)(unsigned int)(a) << 32) | (unsigned int)(b)))
#define SUB41(x, n)    ((unsigned char)((unsigned int)(x) >> ((n) * 8)))
#define SUB42(x, n)    ((unsigned short)((unsigned int)(x) >> ((n) * 8)))
#define SUB84(x, n)    ((unsigned int)((unsigned long long)(x) >> ((n) * 8)))
#define ZEXT14(x)      ((unsigned int)(unsigned char)(x))
#define ZEXT24(x)      ((unsigned int)(unsigned short)(x))
#define ZEXT48(x)      ((unsigned long long)(unsigned int)(x))
#define SEXT14(x)      ((int)(signed char)(x))
#define SEXT24(x)      ((int)(short)(x))
#define SEXT48(x)      ((long long)(int)(x))
#define CARRY4(a, b)   ((unsigned int)(a) + (unsigned int)(b) < (unsigned int)(a))
#define SCARRY4(a, b)  ((((a) ^ ((a) + (b))) & ((b) ^ ((a) + (b)))) < 0)
#define SBORROW4(a, b) ((((a) ^ (b)) & ((a) ^ ((a) - (b)))) < 0)
#define NAN_CHECK(x)   ((x) != (x))

// Win32 types that appear in decompiler prototypes (avoids pulling in <windows.h>)
typedef int            BOOL;
typedef unsigned long  DWORD;
typedef const char    *LPCSTR;
typedef char          *LPSTR;
typedef void          *LPVOID;
typedef void          *HANDLE;
struct HWND__; typedef HWND__ *HWND;

// src/system/InputBxmArchive.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "InputBxmArchive.h"
#include <string.h>  // strcmp / strlen: inlined by the compiler in the original

// Callees whose functions.h prototype is a plain free function although the code calls them
// thiscall (ECX = the std::string); called through thiscall casts with the real argument lists.
typedef int *(__thiscall *StringAssignSubFn)(int *str, int *right, unsigned int offset, unsigned int count); // FUN_00c55960 basic_string::assign(const basic_string &, size_t, size_t)
typedef void (__thiscall *StringCopyFn)(int *str, unsigned int newSize, unsigned int oldSize);              // FUN_00c3ef00 basic_string::_Copy
// 00FDA39B (FILEMAP: std::length_error::length_error_3) -- std::_Xlength_error, does not return; no prototype exists.
typedef void (__cdecl *XlengthErrorFn)(const char *message);
#define XLENGTH_ERROR ((XlengthErrorFn)0x00FDA39B)

// 00E91320  sys::InputBxmArchive::vf74  size=10  [class]
bool sys::InputBxmArchive::vf74(void *out)
{
    return textArchiveSlot(0x74)(textArchive(), out);  // tail jump
}

// 00E91830  sys::InputBxmArchive::vf10  size=373  [class]
// Searches the children of the node on top of the stack for one whose name equals `name`
// (resuming after resumeAfterNode() if set), pushes it and loads its text into the text archive.
// (/GS cookie check omitted: compiler-generated.)
bool sys::InputBxmArchive::vf10(const char *name, int unused)
{
    char buffer[0x400];
    int node = nodeData()[nodeCount() - 1];
    int childCount = xmlChildCountSlot()(xml(), node);
    int index = 0;
    int child;

    if (resumeAfterNode() != -1) {
        if (0 < childCount) {
            do {
                child = xmlChildAtSlot()(xml(), node, index);
                index = index + 1;
                if (resumeAfterNode() == child) break;
            } while (index < childCount);
        }
        resumeAfterNode() = -1;
    }

    for (; index < childCount; index = index + 1) {
        child = xmlChildAtSlot()(xml(), node, index);
        xml()->vf24(child, buffer, 0x400);
        if (strcmp(name, buffer) == 0) {
            nodeStackPushSlot()(nodeStack(), &child);
            xml()->vf74(child, buffer, 0x400);
            FUN_00e97ef0(textString(), (int *)buffer, strlen(buffer));

            char *text = (textCapacity() < 0x10) ? textInlineBuf() : textHeapPtr();
            char *end = text + strlen(text);
            textPos() = 0;
            textEnd() = end;
            textBegin() = text;
            textCursor() = text;
            textFlag() = 0;
            return true;
        }
    }
    return false;
}

// 00E919B0  sys::InputBxmArchive::vf14  size=243  [class]
// Pops the current node (remembering it in resumeAfterNode()) and reloads the parent's text.
// (/GS cookie check omitted: compiler-generated.)
bool sys::InputBxmArchive::vf14(int unused1, int unused2)
{
    char buffer[0x400];

    if (nodeData() != 0 && nodeCount() != 0) {
        resumeAfterNode() = nodeData()[nodeCount() - 1];
        if (nodeData() != 0 && nodeCount() != 0) {
            nodeCount() = nodeCount() - 1;
        }
        xml()->vf74(nodeData()[nodeCount() - 1], buffer, 0x400);
        FUN_00e97ef0(textString(), (int *)buffer, strlen(buffer));

        char *text = (textCapacity() < 0x10) ? textInlineBuf() : textHeapPtr();
        char *end = text + strlen(text);
        textPos() = 0;
        textEnd() = end;
        textBegin() = text;
        textCursor() = text;
        textFlag() = 0;
        return true;
    }
    return false;
}

// 00E97CB0  sys::InputBxmArchive::vf04  size=3  [class]
bool sys::InputBxmArchive::vf04()
{
    return false;
}

// 00E97CC0  sys::InputBxmArchive::vf0C  size=3  [class]
bool sys::InputBxmArchive::vf0C()
{
    return false;
}

// 00E97D60  sys::InputBxmArchive::vf40  size=10  [class]
bool sys::InputBxmArchive::vf40(void *out)
{
    return textArchiveSlot(0x40)(textArchive(), out);  // tail jump
}

// 00E97D70  sys::InputBxmArchive::vf34  size=10  [class]
bool sys::InputBxmArchive::vf34(void *out)
{
    return textArchiveSlot(0x34)(textArchive(), out);  // tail jump
}

// 00E97D80  sys::InputBxmArchive::vf30  size=10  [class]
bool sys::InputBxmArchive::vf30(void *out)
{
    return textArchiveSlot(0x30)(textArchive(), out);  // tail jump
}

// 00E97D90  sys::InputBxmArchive::vf2C  size=10  [class]
bool sys::InputBxmArchive::vf2C(void *out)
{
    return textArchiveSlot(0x2C)(textArchive(), out);  // tail jump
}

// 00E97DA0  sys::InputBxmArchive::vf28  size=10  [class]
bool sys::InputBxmArchive::vf28(void *out)
{
    return textArchiveSlot(0x28)(textArchive(), out);  // tail jump
}

// 00E97DB0  sys::InputBxmArchive::vf24  size=10  [class]
bool sys::InputBxmArchive::vf24(void *out)
{
    return textArchiveSlot(0x24)(textArchive(), out);  // tail jump
}

// 00E97DC0  sys::InputBxmArchive::vf20  size=10  [class]
bool sys::InputBxmArchive::vf20(void *out)
{
    return textArchiveSlot(0x20)(textArchive(), out);  // tail jump
}

// 00E97DD0  sys::InputBxmArchive::vf1C  size=10  [class]
bool sys::InputBxmArchive::vf1C(void *out)
{
    return textArchiveSlot(0x1C)(textArchive(), out);  // tail jump
}

// 00E97DE0  sys::InputBxmArchive::vf18  size=10  [class]
bool sys::InputBxmArchive::vf18(void *out)
{
    return textArchiveSlot(0x18)(textArchive(), out);  // tail jump
}

// 00E97E50  sys::InputBxmArchive::vf3C  size=41  [class]
// (raw showed a store of 0xFC through unaff_retaddr; the machine code reads a byte into a stack
//  temporary via textArchive vf2C and copies it to the caller's pointer argument)
bool sys::InputBxmArchive::vf3C(char *out)
{
    char value;
    if (textArchiveSlot(0x2C)(textArchive(), &value)) {
        *out = value;
        return true;
    }
    return false;
}

// 00E97E80  sys::InputBxmArchive::vf38  size=41  [class]
// (same machine code as vf3C)
bool sys::InputBxmArchive::vf38(char *out)
{
    char value;
    if (textArchiveSlot(0x2C)(textArchive(), &value)) {
        *out = value;
        return true;
    }
    return false;
}

// 00E97EF0  FUN_00e97ef0  size=240  [callgraph]
// MSVC10 std::string::assign(const char *ptr, size_t count), thiscall with ECX = str.
// str layout (ints): [0..3] inline buffer / heap pointer, [4] size, [5] capacity.
int *FUN_00e97ef0(int *str, int *ptr, unsigned int count)
{
    if (ptr != 0) {
        unsigned int capacity = (unsigned int)str[5];
        char *data = (0xf < capacity) ? *(char **)str : (char *)str;
        if (data <= (char *)ptr) {
            data = (0xf < capacity) ? *(char **)str : (char *)str;
            if ((char *)ptr < data + str[4]) {
                // source aliases our own buffer: assign(*this, ptr - data, count)
                if (0xf < capacity) {
                    return ((StringAssignSubFn)FUN_00c55960)(str, str, (unsigned int)((char *)ptr - *(char **)str), count);
                }
                return ((StringAssignSubFn)FUN_00c55960)(str, str, (unsigned int)((char *)ptr - (char *)str), count);
            }
        }
    }
    if (count == 0xffffffff) {
        XLENGTH_ERROR("string too long");  // 0x016A3C64; does not return
    }
    if ((unsigned int)str[5] < count) {
        ((StringCopyFn)FUN_00c3ef00)(str, count, (unsigned int)str[4]);
        if (count == 0) {
            return str;
        }
    }
    else if (count == 0) {
        str[4] = 0;
        if (0xf < (unsigned int)str[5]) {
            **(char **)str = 0;
            return str;
        }
        *(char *)str = 0;
        return str;
    }
    char *data = (0xf < (unsigned int)str[5]) ? *(char **)str : (char *)str;
    FID_conflict__memcpy(data, ptr, count);
    str[4] = (int)count;
    if ((unsigned int)str[5] < 0x10) {
        ((char *)str)[count] = 0;
        return str;
    }
    (*(char **)str)[count] = 0;
    return str;
}

// 00E98A40  sys::InputBxmArchive::vf78  size=30  [class]
// Scalar deleting destructor.
sys::InputBxmArchive *sys::InputBxmArchive::vf78(unsigned char flags)
{
    ((cXml *)this)->ctor_00E91740();  // 00E91740 (FILEMAP: cXml::cXml_5) = this class's destructor body
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // operator delete
    }
    return this;
}

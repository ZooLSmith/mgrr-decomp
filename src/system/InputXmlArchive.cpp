// src/system/InputXmlArchive.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "InputXmlArchive.h"

// Callees whose Ghidra prototype lost the ECX (this) argument; called through thiscall casts.
typedef int  (__thiscall *XmlFindChildFn)(int node, const char **name);   // FUN_00e91f50
typedef char (__thiscall *XmlNameEqualsFn)(int nameStr, const char *name); // FUN_00e05b60
typedef void (__thiscall *TreeEraseFn)(int *head, int node);               // FUN_00e91de0

// 00E914E0  sys::InputXmlArchive::vf10  size=162  [class]
bool sys::InputXmlArchive::vf10(const char *name, int unused)
{
    int node;

    if (parentNode() == 0) {
        node = ((XmlFindChildFn)FUN_00e91f50)(currentNode(), &name);
    }
    else {
        node = FUN_00e04220(parentNode());
        while (node != 0) {
            if (((XmlNameEqualsFn)FUN_00e05b60)(node + 0x18, name) != '\0')
                break;
            node = FUN_00e04220(node);
        }
    }
    if (node == 0)
        return false;

    currentNode() = node;
    parentNode() = 0;
    char *text = (char *)FUN_00e09460(node + 0x38);
    char *end = text;
    while (*end != '\0')
        end++;
    textPos() = 0;
    textBegin() = text;
    textCursor() = text;
    textEnd() = end;
    textFlag() = 0;
    return true;
}

// 00E91590  sys::InputXmlArchive::vf14  size=84  [class]
bool sys::InputXmlArchive::vf14(int unused1, int unused2)
{
    parentNode() = currentNode();
    int child = FUN_00e04210((undefined4 *)currentNode());
    currentNode() = child;
    char *text = (char *)FUN_00e09460(child + 0x38);
    char *end = text;
    while (*end != '\0')
        end++;
    textPos() = 0;
    textBegin() = text;
    textCursor() = text;
    textEnd() = end;
    textFlag() = 0;
    return true;
}

// 00E92970  sys::InputXmlArchive::vf04  size=3  [class]
bool sys::InputXmlArchive::vf04()
{
    return false;
}

// 00E92980  sys::InputXmlArchive::vf0C  size=3  [class]
bool sys::InputXmlArchive::vf0C()
{
    return false;
}

// 00E92990  sys::InputXmlArchive::vf74  size=10  [class]
bool sys::InputXmlArchive::vf74(void *out)
{
    return textArchiveSlot(0x74)(textArchive(), out);  // tail jump
}

// 00E92A30  sys::InputXmlArchive::vf40  size=10  [class]
bool sys::InputXmlArchive::vf40(void *out)
{
    return textArchiveSlot(0x40)(textArchive(), out);  // tail jump
}

// 00E92A40  sys::InputXmlArchive::vf34  size=10  [class]
bool sys::InputXmlArchive::vf34(void *out)
{
    return textArchiveSlot(0x34)(textArchive(), out);  // tail jump
}

// 00E92A50  sys::InputXmlArchive::vf30  size=10  [class]
bool sys::InputXmlArchive::vf30(void *out)
{
    return textArchiveSlot(0x30)(textArchive(), out);  // tail jump
}

// 00E92A60  sys::InputXmlArchive::vf2C  size=10  [class]
bool sys::InputXmlArchive::vf2C(void *out)
{
    return textArchiveSlot(0x2C)(textArchive(), out);  // tail jump
}

// 00E92A70  sys::InputXmlArchive::vf28  size=10  [class]
bool sys::InputXmlArchive::vf28(void *out)
{
    return textArchiveSlot(0x28)(textArchive(), out);  // tail jump
}

// 00E92A80  sys::InputXmlArchive::vf24  size=10  [class]
bool sys::InputXmlArchive::vf24(void *out)
{
    return textArchiveSlot(0x24)(textArchive(), out);  // tail jump
}

// 00E92A90  sys::InputXmlArchive::vf20  size=10  [class]
bool sys::InputXmlArchive::vf20(void *out)
{
    return textArchiveSlot(0x20)(textArchive(), out);  // tail jump
}

// 00E92AA0  sys::InputXmlArchive::vf1C  size=10  [class]
bool sys::InputXmlArchive::vf1C(void *out)
{
    return textArchiveSlot(0x1C)(textArchive(), out);  // tail jump
}

// 00E92AB0  sys::InputXmlArchive::vf18  size=10  [class]
bool sys::InputXmlArchive::vf18(void *out)
{
    return textArchiveSlot(0x18)(textArchive(), out);  // tail jump
}

// 00E93EA0  sys::InputXmlArchive::vf3C  size=44  [class]
// (raw showed a store of 0xFC through unaff_retaddr; the machine code reads a byte into a stack
//  temporary via textArchive vf2C and copies it to the caller's pointer argument)
bool sys::InputXmlArchive::vf3C(char *out)
{
    char value;
    if (textArchiveSlot(0x2C)(textArchive(), &value)) {
        *out = value;
        return true;
    }
    return false;
}

// 00E93ED0  sys::InputXmlArchive::vf38  size=44  [class]
bool sys::InputXmlArchive::vf38(char *out)
{
    char value;
    if (textArchiveSlot(0x2C)(textArchive(), &value)) {
        *out = value;
        return true;
    }
    return false;
}

// 00E93FC0  FUN_00e93fc0  size=118  [between]
// Tree container clear: tree[0] vptr, tree[1] head node, tree[2]/tree[3] leftmost/rightmost,
// byte +0x0D of a node = "is nil" flag.
void __fastcall FUN_00e93fc0(int *tree)
{
    typedef void (__thiscall *EraseNodeFn)(int *tree, int node);

    int node = tree[3];
    while (*(char *)(node + 0xd) == '\0') {
        (*(EraseNodeFn *)(*tree + 4))(tree, node);  // virtual slot 0x04
        node = tree[3];
    }
    int *head = tree + 1;
    int *root = (int *)tree[1];
    if (*(char *)((char *)root + 0xd) == '\0') {
        if (*(char *)(root[1] + 0xd) == '\0') {
            ((TreeEraseFn)FUN_00e91de0)(head, root[1]);
        }
        if (*(char *)(root[2] + 0xd) == '\0') {
            ((TreeEraseFn)FUN_00e91de0)(head, root[2]);
        }
        root[2] = 0;
        root[1] = 0;
        root[0] = 0;
        tree[3] = (int)head;
        tree[2] = (int)head;
        *head = (int)head;
        *(unsigned short *)(tree + 4) = 0x100;
    }
}

// 00E94050  sys::InputXmlArchive::vf78  size=55  [class]
sys::InputXmlArchive *sys::InputXmlArchive::vf78(unsigned char flags)
{
    // vftable = sys::InputXmlArchive::vftable (0x016D1634)
    textArchiveVtbl() = (void *)0x016A785C;  // embedded text archive: vptr = lib::Archive::vftable
    FUN_00e09a00((int)xmlDocument());
    // vftable = lib::Archive::vftable (0x016A785C)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // operator delete
    }
    return this;
}

#ifndef _LINKED_LIST_H
#define _LINKED_LIST_H


typedef struct Node_type node;
struct Node_type
{
    u32 value;
    node *Next;

};

void addNode(u32 val);
void printLinkedList(void);
void deleteNode(u32 val);
#endif
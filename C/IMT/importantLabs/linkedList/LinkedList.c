#include <stdio.h>
#include <string.h>
#include <stddef.h>

#include "./STD_TYPES.h"
#include "./BIT_MATH.h"
#include "./LinkedList.h"

extern node head;
u32 ListLength =0;

void AddNode (u32 val)
{
    if(ListLength==0)
    {
        head.value = val;
        head.Next=NULL;        
    }
    else
    {
        node *last;
        //Allocate the node
        node *new=(node*)malloc(sizeof(node));
        new->value=val;
        new->Next=NULL;
        last=&head;
        while((last->Next) !=NULL)
        {
            last=(last->Next);
        }
        last->Next=new;
    }
    ListLength++;
    return;
}
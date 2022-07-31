#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

#include "./STD_TYPES.h"
#include "./LinkedList.h"

extern node head;
u32 listLength=0;

void addNode(u32 val)
{
    if(listLength==0)
    {
        head.value=val;
        head.Next=NULL;
    }
    else
    {
        node *last;
        node *new;

        new=(node*)malloc(sizeof(node));
        new->value=val;
        new->Next=NULL;
        last=&head;

        while((last->Next) !=NULL)
        {
            last=last->Next;
        }
        last->Next=new;
    }
    listLength++;
    return;
}

void printLinkedList(void)
{
    node *last=&head;
    u32 count=1;
    if(listLength==0)
    printf("list is empty");
    else
    {
        while((last->Next) != NULL)
        {
            printf("Node Number %d = %d\n",count,last->value);
            last=(last->Next);
            count++;
        }
    
        printf("Node Number %d = %d",count,last->value);
    }

}

void deleteNode(u32 val)
{
    node *last=&head;
    //new pointer to store the address of the next location of the deleted Node
    node *new;
    if((last->value)==val)
    {
        new=last->Next;
        head.value=new->value;
        head.Next=new->Next;
    }
    else
    {
        while(1)
        {
            last=last->Next;
            if((last->value)==val)
            {
                new=last->Next;
                last->value=new->value;
                last->Next=new->Next;
                break;
            }
        }
    }
}
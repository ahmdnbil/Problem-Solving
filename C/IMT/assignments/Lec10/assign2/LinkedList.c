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
    {
        printf("list is empty");
    }
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

void addNodeIndex(u32 val,u32 index)
{
    int count=1;
    node *new=(node*)malloc(sizeof(node));
    node *temp=(node*)malloc(sizeof(node));

    node *last=&head;
    new->value=val;    
    
    if(listLength>=index)
    {

        if(index==count)
        {
            temp->value=head.value;
            temp->Next=head.Next;

            head.value=new->value;
            head.Next=temp;

        }
        else
        {
            while(1)
            {
                count++;
                last=last->Next;
                if(index==count)
                {   
                    temp->value=last->value;
                    temp->Next=last->Next;

                    last->value=new->value;
                    last->Next=temp;
                    break;
                }
            }
        }   
    }
    else
    {
        printf("You have enterd a number of an node it doesn't existed\n");
    }
}


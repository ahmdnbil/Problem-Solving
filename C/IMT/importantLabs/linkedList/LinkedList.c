#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <stdlib.h>

#include "./STD_TYPES.h"
#include "./BIT_MATH.h"
#include "./LinkedList.h"

extern node head;
u32 ListLength =0;

//you can add any numbers of node by passing the value 
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

//print all the linked list
void printLinkedList(void)
{
    node *last=&head;
    u32 count=1;
    if(ListLength==0)
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

//add node with specific index and shifting the other nodes
void addNodeIndex(u32 val,u32 index)
{
    int count=1;
    node *new=(node*)malloc(sizeof(node));
    node *temp=(node*)malloc(sizeof(node));

    node *last=&head;
    new->value=val;    
    
    if(ListLength>=index)
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

//delete any node by passing its valu
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
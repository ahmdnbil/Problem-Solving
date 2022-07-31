#include <stdio.h>
#include <string.h>
#include <stddef.h>

#include "./STD_TYPES.h"
#include "./BIT_MATH.h"
#include "./LinkedList.h"

#pragma pack(4) //it will read 4 bytes by 4 bytes  "the normal word"

node head;
void main (void)
{
    u32 local_intNewNode,local_intChoice,local_intDelete;
    do
    {
        printf("To add node enter 0\n");
        printf("To print the linked list 1\n");
        printf("To exit press to 2\n");
        printf("To delete node press 3\n");
        printf("Your choice: ");
        scanf("%d",&local_intChoice);
        if(local_intChoice == 0)
        {
            printf("Please enter the node value: ");
            scanf("%d",&local_intNewNode);
            addNode(local_intNewNode);
        }
        else if(local_intChoice == 1)
        {
            puts(" ");
            puts("-------------------- ");
            printLinkedList();
            puts(" ");
            puts("-------------------- ");
            puts(" ");
        }
        else if(local_intChoice==2)
        {
            puts("Thank You");
            puts("Good Bye");
            break;
        }
        else if(local_intChoice==3)
        {
            printf("Pleas enter the node value you want it to be deleted: ");
            scanf("%d",&local_intDelete);
            deleteNode(local_intDelete);
        }
        else
        {
            puts(" ");
            puts(" ");
            printf("incorrect entry");
            puts(" ");
            puts(" ");
        }


    }while(1);

    

}


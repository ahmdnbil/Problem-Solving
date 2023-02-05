/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

typedef struct ListNode
{
 int val;
 int *next;
}List;


int listSum(List * l1);
int numberLength(int x);
List* addTwoNumbers(List* l1, List* l2);

int main(void)
{
    
    int sum=0;
    List* ptr=(List*)malloc(3*sizeof(List));
    ptr->val=3;
    ptr->next=ptr+1;
    ptr=ptr->next;
    ptr->val=5;
    ptr->next=ptr+1;
    ptr=ptr->next;
    ptr->val=2;
    ptr->next=NULL;
    ptr-=2;
    printf("%d\n",listSum(ptr));
    
    List* ptr2=(List*)malloc(3*sizeof(List));
    ptr2->val=2;
    ptr2->next=ptr2+1;
    ptr2=ptr2->next;
    ptr2->val=5;
    ptr2->next=ptr2+1;
    ptr2=ptr2->next;
    ptr2->val=3;
    ptr2->next=NULL;
    ptr2-=2;
    printf("%d\n",listSum(ptr2));  
    //addTwoNumbers(ptr,ptr2);
    sum=listSum(ptr2)+listSum(ptr);
    printf("%d\n",sum);  
    printf("%d\n",(addTwoNumbers(ptr,ptr2)+2)->val);
    
}


int numberLength(int x)
{
    int count=0;
    while(x!=0)
    {
        x/=10;
        count++;
    }
    return count;
}

List* addTwoNumbers(List* l1, List* l2){
    int ListOneSum=0,ListTwoSum=0,i=0,sum=0,rem;

    ListOneSum=listSum(l2);
    ListTwoSum=listSum(l1);

    sum=ListTwoSum+ListOneSum;

    int length=numberLength(sum);
    List* ptr=(List*)malloc(length*sizeof(List));
    if (ptr==NULL)
    {
        return NULL;
    }
    else
    {
        for (;i<length;i++)
        {
            if(i == (length-1))
            {
                ptr->val=sum%10;
                ptr->next=NULL;

            }
            else
            {
                ptr->val = sum%10;
                ptr->next=ptr+1;
                ptr++;
                sum/=10;
            }
        }   
    return ptr-length+1;
    }
}

int listSum(List * l1)
{
    int ListOneSum=0,ListTwoSum=0,i=0,sum=0,rem;
    while (l1 !=NULL)
    {
        ListOneSum=ListOneSum+(l1->val)*pow(10,i);
        i++;
        l1=l1->next;
    }
    return ListOneSum;
}


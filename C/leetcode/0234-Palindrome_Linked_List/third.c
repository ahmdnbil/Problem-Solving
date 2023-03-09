#include <stdbool.h>
#define NULL ((void*)0)

struct ListNode {
    int val;
    struct ListNode *next;
};
typedef struct ListNode List;

typedef struct ListNode List;

List* reverseList(List* head){

    List*ptr=NULL;
    List*temp=NULL;
    if(!head || !head->next) return head;
    else
    {
        ptr=head->next;
        head->next=NULL;
        while(ptr)
        {
            temp=ptr->next;
            ptr->next=head;
            head=ptr;
            ptr=temp;
        }
    }
    return head;
}

bool isPalindrome(List* head)
{
    //special cases
    if(!head)return false;
    else if(!head->next) return true;
    int mid;

    List*ptr=head;
    int count =0;
    while (ptr)
    {
        count++;
        ptr=ptr->next;
    }
    ptr=head;
    mid=(count %2==0)?(count/2):(count/2)+1;
    while(mid!=0)
    {
        mid--;
        ptr=ptr->next;
    }
    mid=(count %2==0)?(count/2):(count/2)+1;
    ptr=reverseList(ptr);
    while(mid !=0 && ptr)
    {
        if(ptr->val != head->val)return false;
        ptr=ptr->next;
        head=head->next;
        mid--;
    }
    return true;   
}
#include <stdbool.h>
#define NULL ((void*)0)

struct ListNode {
    int val;
    struct ListNode *next;
};
typedef struct ListNode List;


List* rotateRight(List* head, int k){
    //special cases 
    if(k==0 || !head)return head; 
    List*ptr =head,*temp;

    int count=0;
    while(ptr)
    {
        count++;
        if(!ptr->next)
        {
            while(k>count) k=k-count;
            if(count==k) return head; //special case
            ptr->next=head;
            break;
        }
        ptr=ptr->next;
    }
    k=count-k;
    while(k!=0)
    {
        if(k==1)temp=head;
        k--;
        head=head->next;
    }
    temp->next=NULL;  
    return head;
}

bool isPalindrome(List* head)
{
    //special cases
    if(!head)return false;
    else if(!head->next) return true;
    int mid;
    int rotate;

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
    rotate=count/2;
    ptr=rotateRight(ptr, rotate);
    while(mid !=0)
    {
        if(ptr->val != head->val)return false;
        ptr=ptr->next;
        head=head->next;
        mid--;
    }
    return true;   
}
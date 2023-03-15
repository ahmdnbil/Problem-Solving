#define NULL ((void*)0)

struct ListNode {
    int val;
    struct ListNode *next;
};

typedef struct ListNode List;
List* deleteMiddle(List* head){
    if(!head)return head;
    else if(!head->next) return NULL;
    else if(!head->next->next)
    {
        head->next=NULL;
        return head;
    }
    int count=0;
    int mid;
    List*ptr=head;

    while(ptr)
    {
        count++;
        ptr=ptr->next;
    }
    ptr=head;
    mid=(count%2==0)?(count/2):(count/2);
    while(mid!=1)
    {
        ptr=ptr->next;
        mid--;
    }
    ptr->next=ptr->next->next;

    return head;
}
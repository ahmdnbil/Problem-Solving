#define NULL ((void*)0)

struct ListNode {
    int val;
    struct ListNode *next;
};

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
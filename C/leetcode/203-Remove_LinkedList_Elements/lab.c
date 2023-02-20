#define NULL ((void*)0)

struct ListNode {
    int val;
    struct ListNode *next;
}

typedef struct ListNode List;
List* removeElements(List* head, int val){
    List* ptr=head;
    if(!head) return head;

    else if(head->val == val)
    {
        while(head->val ==val)
        {
            head=head->next;
            if(head == NULL) return NULL;
        }
    }
    ptr=head;
    while(ptr)
    {
        if(ptr->next && ptr->next->val== val)
        {
            while(ptr->next && ptr->next->val == val)
            {
                ptr->next=ptr->next->next;
            }
        
        }
        ptr=ptr->next;
    }
    return head;

}
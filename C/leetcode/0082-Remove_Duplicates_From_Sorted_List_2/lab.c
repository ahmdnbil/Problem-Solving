#define NULL ((void*)0)
struct ListNode {
    int val;
    struct ListNode *next;
};

typedef struct ListNode List;

List* deleteDuplicates(List* head){
    List* ptr1=NULL;
    List*ptr2=NULL;
    int val;
    if( !head || !head->next) return head;
    //this while loop to get the head if 1 -> 1 -> 2 -> 3 ==> the head will be 2
    // if 1 -> 1 -> 2 -> 2 -> 3  ==> the head will be 3
    while(head->next && head->val == head->next->val)
    {
        val=head->val;
        while(head && head->val ==val)
        {
            head=head->next;
        }
        if(!head) return head;
    }
    //creating two ptrs to walk through the list and elimnate the dublicated elements
    ptr1=head;
    ptr2=head->next;
    while(ptr2)
    {
        if(ptr2->next && ptr2->val==ptr2->next->val)
        {
            val=ptr2->val;
            while(ptr2->val ==val)
            {
                ptr2=ptr2->next;
                if(!ptr2)
                {
                    ptr1->next=NULL;
                    return head;
                }
            }
            ptr1->next=ptr2;
        }
        else
        {
            ptr1=ptr2;
            ptr2=ptr2->next;
        }
    }
    return head;
}
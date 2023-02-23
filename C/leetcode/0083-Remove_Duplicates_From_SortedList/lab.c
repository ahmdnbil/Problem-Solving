
struct ListNode {
    int val;
    struct ListNode *next;
};

typedef struct ListNode List;

List* deleteDuplicates(List* head){
    List* ptr=head;
    if (!head) return head;
    else
    {
        while(ptr)
        {
            while(ptr->next && ptr->val == ptr->next->val ) ptr->next=ptr->next->next;
            ptr=ptr->next;
        }
    }
    return head;
}
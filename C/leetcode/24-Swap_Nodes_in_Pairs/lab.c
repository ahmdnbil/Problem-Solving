
#define NULL 0
struct ListNode {
    int val;
    struct ListNode *next;
};

typedef struct ListNode List;

List* swapPairs(List* head)
{
    List* swap=head;
    int temp;
    if (head==NULL) return NULL;
    else if (head->next == NULL) return head;
    else
    {
        while(swap->next != NULL)
        {
            temp=swap->val;
            swap->val=swap->next->val;
            swap->next->val=temp;
            swap=swap->next->next;
            if (swap==NULL) break; 
        }
    }
    return head;

}
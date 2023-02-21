
#define NULL 0
struct ListNode{
    int val;
    struct ListNode* next;
}

typedef struct ListNode List;
List* mergeTwoLists(List* l1,List* l2)
{
    List* head=NULL;
    List*temp=NULL;

    if (l1 == NULL) return l2;
    else if (l2 == NULL) return l1;
    else
    {
        if(l1->val >= l2->val) 
        {
            temp=l1;
            l1=l2;
            l2=temp;
            head=l1;
        }
        else head=l1;
    }

    while(l1)
    {
        while(l1->next && l1->next->val <= l2->val)
        {
            l1=l1->next;
        }
        if(l1->next == NULL)
        {
            l1->next=l2;
            return head;
        }
        else
        {
            temp=l1->next;
            l1->next=l2;
            l1=l2;
            l2=temp;
        }
    }
    return head;
}
struct ListNode {
    int val;
    struct ListNode *next;
};

#define NULL 0
typedef struct ListNode List; 

List* removeNthFromEnd(List* head, int n)
{
    List* counter=head;
    int count=0,flag=0;
    if (head == NULL) return NULL;
    count++;
    while(counter->next != NULL)
    {
        count++;
        counter=counter->next;
    }
    counter=head;

    if(count == 1) return NULL;
    while(counter->next !=NULL)
    {
        if (count == n) return head->next;
        else if(count == n+1) 
        {
            counter->next=counter->next->next;
            break;
        }
        else
        {
            counter=counter->next;
            count--;
        }
    }
    return head;
}
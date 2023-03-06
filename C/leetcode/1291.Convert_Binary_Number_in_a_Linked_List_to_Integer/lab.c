struct ListNode {
    int val;
    struct ListNode *next;
};

typedef struct ListNode List;
int getDecimalValue(List* head){
    int count=0,sum=0;
    List*ptr=head;
    while(ptr)
    {
        count++;
        ptr=ptr->next;
    }
    ptr=head;
    if(count==0) return ptr->val;
    while(count !=0)
    {
        sum=sum+(ptr->val)*pow(2,count-1);
        ptr=ptr->next;
        count--;
    }
    return sum;
}
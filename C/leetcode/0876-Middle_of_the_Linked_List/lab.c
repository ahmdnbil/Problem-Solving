
struct ListNode {
    int val;
    struct ListNode *next;
};
typedef struct ListNode List;
List* middleNode(List* head){
    List*ptr=head;
    int count=0;
    if(!head || !head->next) return head;
    while(ptr)
    {
        count++;
        ptr=ptr->next;
    }
    int middle=(count/2)+1;
    count=1;
    while(middle != count)
    {
        count++;
        head=head->next;
    }
    return head;

}
/*
convert singly linked list to circular linked
list then count the steps to go for desired node
note: this solution is very bad for both memory and time
*/

#define NULL ((void*)0)
struct ListNode {
    int val;
    struct ListNode *next;
};
typedef struct ListNode List;

List* rotateRight(List* head, int k){
    //special cases 
    if(k==0 || !head)return head; 
    List*ptr =head,*temp;

    int count=0;
    while(ptr)
    {
        count++;
        if(!ptr->next)
        {
            while(k>count) k=k-count;
            if(count==k) return head; //special case
            ptr->next=head;
            break;
        }
        ptr=ptr->next;
    }
    k=count-k;
    while(k!=0)
    {
        if(k==1)temp=head;
        k--;
        head=head->next;
    }
    temp->next=NULL;  
    return head;
}
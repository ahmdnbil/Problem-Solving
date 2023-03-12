#define NULL ((void*)0)
struct ListNode {
    int val;
    struct ListNode *next;
};

typedef struct ListNode List;
List* swapNodes(List* head, int k){
    //special case
    if(!head || !head->next) return head;
    
    List*ptr=head,*ptr2=NULL;
    int second,first,temp;
    int count=0;
    
    //counting linkedList Nodes
    while(ptr)
    {
        count++;
        ptr=ptr->next;
    }
    
    //check if the elemnet at the mid and count is odd
    if(count%2 !=0 && k==(count/2)+1 ) return head;
    
    count--;//number of jumps
    ptr=head;
    first=count-k+1;
    second=k-1;
    if((count+1)%2==0 && k>((count+1)/2) || (count+1)%2!=0 && k>((count+1)/2)+1 )
    {
        temp=first;
        first=second;
        second=temp;
    }
    //if number of jumps equals 0
    if(!first) ptr2=head;
    while(count !=0)
    {
        
        if(count==first)ptr2=ptr;
        else if (count==second)break;
        count--;
        ptr=ptr->next;
    }
    //swaping code
    first=ptr2->val;
    ptr2->val=ptr->val;
    ptr->val=first;

    return head;
}
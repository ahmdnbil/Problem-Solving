//accepted in leetcode 
#define NULL ((void*)0)
struct ListNode {
    int val;
    struct ListNode *next;
};


typedef struct ListNode List;
List head;
int listLength =0;
void addNode(int val)
{
    if(listLength == 0)
    {
        head.val=val;
        head.next=NULL;
    }
    else
    {
        List*last=&head;
        List*new=(List*)malloc(sizeof(List));
        new->val=val;
        new->next=NULL;
        while(last->next != NULL)
        {
            last=last->next;
        }
        last->next=new;
    }
    listLength++;
}
List* addTwoNumbers(List* l1, List* l2){
    listLength=0;
    if(!l1 && !l2) return l1;
    int nodeVal;
    int rem=0;
    while(l1 && l2)
    {
        nodeVal=(l1->val + l2->val) + rem;
        if(nodeVal >9)
        {
            rem=nodeVal/10;
            nodeVal=nodeVal%10;
        }
        else rem=0;
        addNode(nodeVal);
        l1=l1->next;
        l2=l2->next;
        
    }
    while(l1)
    {
        nodeVal=l1->val + rem;
        if(nodeVal>9)
        {
            rem=nodeVal/10;
            nodeVal%=10;
        }
        else rem=0;
        addNode(nodeVal);
        l1=l1->next;
    }
    while(l2)
    {
        nodeVal=l2->val + rem;
        if(nodeVal>9)
        {
            rem=nodeVal/10;
            nodeVal %=10;
        }
        else rem=0;
        addNode(nodeVal);
        l2=l2->next;
    }
    if(rem) addNode(rem);
    return &head;
}
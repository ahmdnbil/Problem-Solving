

#define NULL 0
struct ListNode
{
    int val;
    struct ListNode *next;
};

typedef struct ListNode List;


void addNode(int val,List* head)
{
    List* last=&head;
    List* new=(List*)malloc(sizeof(List));
    new->val=val;
    new->next=NULL;
    while(last->next != NULL)
    {
        last=last->next;
    }
    last->next=new;
}
List* addTwoNumbers(List* l1, List* l2)
{
    int sum=0,rem=0,length=0,flag=0;
    List *head=(List*)malloc(sizeof(List));
    while(l1 && l2)
    {
        flag=1;
        sum=((l1->val)+(l2->val)+rem)%10;
        rem=sum/10;
        l1=l1->next;
        l2=l2->next;
        if (length==0)
        {
            head->val=sum;
            head->next=NULL;
            length++;
        }
        else
        {
            addNode(sum,head);
        }
    }
    

    if(flag==0)head=NULL;
    return head;
}
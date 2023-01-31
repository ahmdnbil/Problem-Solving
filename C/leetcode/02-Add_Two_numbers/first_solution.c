/**
 * Definition for singly-linked list.
*/
#define NULL 0
struct ListNode {
    int val;
    struct ListNode *next;
};




typedef struct ListNode List;


int numberLength(int x)
{
    int count=0;
    while(x!=0)
    {
        x/=10;
        count++;
    }
    return count;
}

int listSum(List * l1)
{
    int ListOneSum=0,ListTwoSum=0,i=0,sum=0,rem;
    while (l1 !=NULL)
    {
        ListOneSum=ListOneSum+(l1->val)*pow(10,i);
        i++;
        l1=l1->next;
    }
    return ListOneSum;
}


List* addTwoNumbers(List* l1, List* l2){
    int ListOneSum=0,ListTwoSum=0,i=0,sum=0,rem;

    ListOneSum=listSum(l2);
    ListTwoSum=listSum(l1);
    sum=  ListTwoSum+ListOneSum;
    List* ptr=(List*)malloc(numberLength(sum)*sizeof(List));
    if (ptr==NULL)
    {
        return NULL;
    }
    else
    {
        for (;i<numberLength(sum);i++)
        {
            if(i == (numberLength(sum)-1))
            {
                ptr->val=(ListTwoSum+ListOneSum)%10;
                ptr->next=NULL;

            }
            else
            {
                ptr->val = (ListTwoSum+ListOneSum)%10;
                ptr->next=ptr+1;
                ptr++;
                sum/=10;
            }
        }   
    return ptr-numberLength(sum)+1;
    }
}
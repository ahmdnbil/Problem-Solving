/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    
    int count1=1,count2=1,sum1=0,sum2=0,total=0,mod;
    struct ListNode l3[3];
    int index=0;
    
    struct ListNode l11={l1->val,l1->next};
    struct ListNode l22={l2->val,l2->next};
    struct ListNode* l13=&l11;
    struct ListNode* l23=&l22;
    
    
    
    while ((l1->next) != NULL)
    {
        l1=l1->next;
        count1++;
    }
    
    while ((l2->next) != NULL)
    {
        l2=l2->next;
        count2++;
    }
    
    for(int i=0;i<count1;i++)
    {
        sum1+=(10^(i))*(l13->val);
        l13=l13->next;
    }
    
    for(int i=0;i<count2;i++)
    {
        sum2+=(10^(i))*(l23->val);
        l23=l23->next;
    }
    
    total=sum1+sum2;
    while(total!=0)
    {
        mod=total%10;
        total/=10;
        l3[index].val=mod;
        // l3=l3->next;
        index++;
    }
    
    return l3;
}
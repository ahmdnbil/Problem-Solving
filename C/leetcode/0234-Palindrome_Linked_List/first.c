#include <stdbool.h>
struct ListNode {
    int val;
    struct ListNode *next;
};

bool isPalindrome(struct ListNode* head){
    //special cases
    if(!head) return false;
    else if(!head->next) return true;
    
    unsigned long long int sum=0,revNum=0,temp=0;
    
    while(head)
    {
        sum=sum*10+head->val;
        head=head->next;
    }
    temp=sum;
    while(temp!=0)
    {
        revNum=revNum*10+(temp%10);
        temp/=10;
    }
    return (revNum==sum)?true:false;
}
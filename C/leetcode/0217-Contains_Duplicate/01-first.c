//time limit exceed in leetcode

#include <stdbool.h>

#define MAXSTACK 100000
typedef struct stack
{
    int top;
    int entry[MAXSTACK];
}Stack;

void createStack(Stack*ps)
{
    ps->top=0;
}

void push(Stack*ps,int e)
{
    ps->entry[ps->top++]=e;
}

int checkElement(int e,Stack*ps)
{
    for(int i=0;i<ps->top;i++)
    {
        if(ps->entry[i] == e) return 1;
    }
    return 0;
}

bool containsDuplicate(int* nums, int numsSize){
    Stack s;
    createStack(&s);
    int i=0;
    for(;i<numsSize;i++)
    {
        if(checkElement(nums[i],&s)) return true;
        else push(&s,nums[i]);
    }
    return false;
}
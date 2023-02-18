//solution using stack

#define MAXSTACK 10000
typedef struct stack
{
    int top;
    int entry[MAXSTACK];
}Stack;
void CreateStack(Stack *ps)
{
    ps->top=0;
}
void push(int e,Stack *ps)
{
    ps->entry[ps->top]=e;
    ps->top++;
}

void pop(int *pe,Stack *ps)
{
    ps->top--;
    *pe=ps->entry[ps->top];
}
int stackEmpty(Stack*ps)
{
    return !ps->top;
}
int stackSize(Stack *ps)
{
    return ps->top;
}
int * stackArray(Stack *ps)
{
    return (ps->entry);
}
int removeDuplicates(int* nums, int numsSize)
{
    int poped;
    Stack s;
    CreateStack(&s);
    for(int i=0;i<numsSize;i++)
    {
        if(!stackEmpty(&s))
        {
            pop(&poped,&s);
        }
        if(i !=0 && poped != nums[i] ) push(poped,&s);
        push(nums[i],&s);
    }

    int size=stackSize(&s);
    if (size > 0)
    {
        for(int i=size-1;i>=0;i--)
        {
            pop(&nums[i],&s);
        }
    }
    return size;
}
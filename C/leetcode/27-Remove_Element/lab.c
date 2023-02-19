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
int stackSize(Stack *ps)
{
    return ps->top;
}

void pop(int *pe,Stack *ps)
{
    ps->top--;
    *pe=ps->entry[ps->top];
}

int removeElement(int* nums, int numsSize, int val){
    Stack s;
    CreateStack(&s);
    int size;
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i] != val)  push(nums[i],&s);
    }

    size=stackSize(&s);
    if (size > 0)
    {
        for(int i=size-1;i>=0;i--)
        {
            pop(&nums[i],&s);
        }
    }
    return size;

}
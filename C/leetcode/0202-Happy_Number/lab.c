#define MAXSTACK 1000
typedef struct stack
{
    int top;
    int entry[MAXSTACK];
}Stack;

void createStack(Stack*ps)
{
    ps->top=0;
}
void push(int e,Stack*ps)
{
    ps->entry[ps->top]=e;
    ps->top++;
}
bool stackSearchElement(int e,Stack*ps)
{
    if(ps->top == 0)return false;
    for(int i=0;i<ps->top;i++)
    {
        if(ps->entry[i]==e) return true;
    }
    return false;
}

int squareDigits(int x)
{
    int sum=0,rem;
    while(x!=0)
    {
        rem=x%10;
        x/=10;
        sum=sum+(rem*rem);
    }
    return sum;
}

bool isHappy(int n){
    if (n==0) return false;
    Stack s;
    createStack(&s);
    while(n!=1)
    {
        n=squareDigits(n);
        if(stackSearchElement(n,&s)) return false;
        else push(n,&s);

    }
    return true;
}
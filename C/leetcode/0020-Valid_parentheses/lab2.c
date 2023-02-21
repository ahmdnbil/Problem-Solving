//this sol is valid on leet (:

#define MAXSTACK 10000

typedef struct stack
{
    int top;
    char entry[MAXSTACK];
}Stack;

void CreateStack(Stack *ps)
{
    ps->top=0;
}

void push(Stack *s,char e)
{   

    s->entry[s->top]=e;
    s->top++;
}

int pop(Stack *s)
{
    s->top--;
    return s->entry[s->top];
}
int stackEmpty(Stack *s)
{
    return s->top == 0? 1:0;
}
/*
Note I have replaced bool with int cause it's not recognized in
my compiler or any online compiler
*/
int isValid(char * s)
{
    Stack ss;
    CreateStack(&ss);
    int i=0;
    char poped=0;
    while (s[i]!='\0')
    {
        if(stackEmpty(&ss))
        {
            push(&ss,s[i]);
            i++;
        }
        else
        {
            poped=pop(&ss);
            if(s[i] == poped+1 || s[i]==poped+2) i++;
            else
            {
                push(&ss,poped);
                push(&ss,s[i]);
                i++;
            }
        }
    }
    
    return stackEmpty(&ss)?1:0;
}
#include <stdio.h>

//claculator functions prototyping
int math_intAdd(int x,int y);
int math_intSub(int x,int y);
int math_intMultiply(int x,int y);
float math_floatDiv(int x,int y);

int logic_intAnd(int x,int y);
int logic_intOr(int x,int y);
int logic_intNot(int x);
int logic_intXor(int x,int y);

int math_intReminder(int x,int y);
int math_intIncrement(int x);
int math_intDecrement(int x);

//choice functions prototyping
int calc_intChoice(int x);
int calc_intChoice2(int x);


//global variables
int global_intFirstNo;
int global_intSecondNo;

void main()
{
    int local_intChoice;

    printf("please enter the operation ID: ");
    scanf("%d",&local_intChoice);
    if(local_intChoice <= 11)
    {
        if((local_intChoice == 7) || (local_intChoice ==10) || (local_intChoice == 11))
        {
            printf("please enter the number: ");
            scanf("%d",&global_intFirstNo);
            printf("the result: %d",calc_intChoice(local_intChoice));
        }
        else
        {
            printf("please enter the first number: ");
            scanf("%d",&global_intFirstNo);
            printf("please enter the second number: ");
            scanf("%d",&global_intSecondNo);

            if(local_intChoice==4)
            printf("the result: %.3f",math_floatDiv(global_intFirstNo,global_intSecondNo));
            else
            printf("the result: %d",calc_intChoice2(local_intChoice));
            
        }

    }else
    {
        printf("ID must be in [1:11]");
    }
}

int math_intAdd(int x,int y)
{
    return x+y;
}
int math_intSub(int x,int y)
{
    return x-y;
}
int math_intMultiply(int x,int y)
{
    return x*y;
}
float math_floatDiv(int x,int y)
{
    return (float)x/y;
}


int logic_intAnd(int x,int y)
{
    return x & y;
}
int logic_intOr(int x,int y)
{
    return x | y;
}
int logic_intNot(int x)
{
    x= ~x;
    return x;
}
int logic_intXor(int x,int y)
{
    return x ^ y;
}
int math_intReminder(int x,int y)
{
    return x % y;
}
int math_intIncrement(int x )
{
    x+=1;
    return x;
}
int math_intDecrement(int x)
{
    x-=1;
    return x;
}

int calc_intChoice(int x)
{
    if(x==7)
    return logic_intNot(global_intFirstNo);
    if(x==10)
    return math_intIncrement(global_intFirstNo);
    if(x==11)
    return math_intDecrement(global_intFirstNo);
    
}
int calc_intChoice2(int x)
{
    if(x==1)
    return math_intAdd(global_intFirstNo,global_intSecondNo);
    if(x==2)
    return math_intSub(global_intFirstNo,global_intSecondNo);
    if(x==3)
    return math_intMultiply(global_intFirstNo,global_intSecondNo);
    if(x==5)
    return logic_intAnd(global_intFirstNo,global_intSecondNo);
    if(x==6)
    return logic_intOr(global_intFirstNo,global_intSecondNo);
    if(x==8)
    return logic_intXor(global_intFirstNo,global_intSecondNo);
    if(x==9)
    return math_intReminder(global_intFirstNo,global_intSecondNo);
}

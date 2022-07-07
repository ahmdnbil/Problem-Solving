#include <stdio.h>
void main()
{
    int x,y;
    for(;;)
    {
        printf("Please enter first number ");
        scanf("%d",&x);
        printf("Please enter second number ");
        scanf("%d",&y);
        printf("The result is %d \n",x+y);
    }
}
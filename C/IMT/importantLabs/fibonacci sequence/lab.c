#include <stdio.h>

int fabonacci(int n);

void main(void) 
{
    int n,f=0;
    printf("please enter the no. of terms you want to print: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("%d\n", fabonacci(f));
        f++;
    }


}

int fabonacci(int n)
{
    if ((n==0) || (n==1))
    return n;
    else
    return fabonacci(n-1)+fabonacci(n-2);
}
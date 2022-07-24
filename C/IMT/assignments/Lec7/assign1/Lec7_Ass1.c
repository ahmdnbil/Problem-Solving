#include <stdio.h>

void main()
{
    int local_intMax,local_intMin;
    int arr[10];
    printf("please enter 10 values \n");
    for(int i=0;i<10;i++)
    {
        printf(" number %d: ",i+1);
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<10;i++)
    {
        if(i==0)
        {
            local_intMin=arr[i];
            local_intMax=arr[i];
        }

        if(local_intMin>arr[i])
        local_intMin=arr[i];

        if(local_intMax<arr[i])
        local_intMax=arr[i];
    }

    printf("Maximum number : %d\n",local_intMax);
    printf("Minimun number : %d",local_intMin);
}
#include <stdio.h>
void main (void)
{
    int arr[3];
    int local_intMaximum;
    for (int i=0;i<3;i++)
    {
        printf("Enter number %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<3;i++)
    {
        if(arr[i]>local_intMaximum)
        local_intMaximum=arr[i];
    }
    printf("Maximum number is %d",local_intMaximum);
}
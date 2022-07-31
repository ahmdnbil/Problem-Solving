#include <stdio.h>

void main(void)
{
    int local_intSearchNumber;
    int arr[10];
    for(int i=0;i<10;i++)
    {
        printf("Enter Number %d: ",i+1);
        scanf("%d",&arr[i]); 
    }

    printf("Enter the value to search: ");
    scanf("%d",&local_intSearchNumber);
    for(int i=0;i<10;i++)
    {
        if(arr[i]==local_intSearchNumber)
        printf("Value is exist at element number %d",i+1);
    }
}
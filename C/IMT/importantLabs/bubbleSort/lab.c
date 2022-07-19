#include <stdio.h>
void main()
{
    int local_intSize;
    int local_intTemp=0;
    printf("please enter the size of your array: ");
    scanf("%d",&local_intSize);
    int arr[local_intSize];
    printf("please eneter your array element \n");
    for (int i = 0; i < local_intSize; i++)
    {
        printf("element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("unsorted array: \n");
    for (int i = 0; i < local_intSize; i++)
    {
        printf("%d \t",arr[i]);
    }

    for(int i=0 ;i<(local_intSize-1);i++)
    {
        for(int k=0; k<(local_intSize-i-1);k++)
        {
            if(arr[k]>arr[k+1])
            {
                local_intTemp=arr[k];
                arr[k] = arr[k+1];
                arr[k+1]=local_intTemp;
            }
        }
    }

    printf("\n");
    printf("Sorted array: \n");
    for (int i = 0; i < local_intSize; i++)
    {
        printf("%d \t",arr[i]);
    }


}
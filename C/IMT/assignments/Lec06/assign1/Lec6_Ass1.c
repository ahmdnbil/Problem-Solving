#include <stdio.h>
#include <string.h>
#include <stddef.h>

#pragma pack(4)

typedef unsigned char u8 ;
typedef signed char s8;
typedef unsigned short u16 ;
typedef signed short s16 ;
typedef unsigned long int u32 ;
typedef signed long int s32 ;
typedef unsigned long long int u64 ;
typedef signed long long int s64 ;
typedef float f32;
typedef double f64;

void bubbleSort (u32 *arr,u32 size);

void main()
{
    u32 local_intSize;
    printf("please enter the size of your array: ");
    scanf("%d",&local_intSize);

    u32 arr[local_intSize];
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

    printf("\n");
    
    bubbleSort(arr,local_intSize);

    printf("Sorted array: \n");
    for (int i = 0; i < local_intSize; i++)
    {
        printf("%d \t",arr[i]);
    }


}

void bubbleSort (u32 *ptr,u32 size)
{
    int local_intTemp=0;
    for(u32 i=0 ;i<(size-1);i++)
    {
        for(int k=0; k<(size-i-1);k++)
        {
            if(*(ptr+k) > *(ptr+k+1))
            {
                local_intTemp=*(ptr+k);
                *(ptr+k) = *(ptr+k+1);
                *(ptr+k+1)=local_intTemp;
            }
        }
    }
}

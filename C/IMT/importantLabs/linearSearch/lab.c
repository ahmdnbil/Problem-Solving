#include <stdio.h>
void main(void) 
{
    int local_intSize, local_intSearch,local_intIndex,local_intFlag=0;
    printf("Please Enter size of array: ");
    scanf("%d",&local_intSize);

    int arr[local_intSize];
    printf("Please Enter the elments of array: ");
    for (int i = 0; i < local_intSize; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Please enter the number you want to searh for: ");
    scanf("%d",&local_intSearch);
    for (int i = 0; i < local_intSize; i++)
    {
        if(local_intSearch==arr[i])
        {
            local_intIndex=i;
            local_intFlag=1;
            break;
        }
    }
if (local_intFlag)
{
    printf("the index of elemnt you search for: %d",local_intIndex);
}
else
    printf("Element is not existed");
{

}


    
    
}
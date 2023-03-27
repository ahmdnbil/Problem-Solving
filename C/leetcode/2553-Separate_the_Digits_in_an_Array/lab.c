/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int reverseNum(int x)
{
    int sum=1;
    while(x!=0)
    {
        sum=sum*10+x%10;
        x/=10;
    }
    return sum;
}
int* separateDigits(int* nums, int numsSize, int* returnSize){
    int*ptr=NULL;
    int count=0;
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]<10)
        {
            count++;
            ptr=(int*)realloc(ptr,(count)*sizeof(int));
            ptr[count-1]=nums[i];
        }
        else
        {
            nums[i]=reverseNum(nums[i]);
            while(nums[i]!=1)
            {
                count++;
                ptr=(int*)realloc(ptr,(count)*sizeof(int));
                ptr[count-1]=nums[i]%10;
                nums[i]/=10;
            }
        }
    }
    *returnSize=count;
    return ptr;
}

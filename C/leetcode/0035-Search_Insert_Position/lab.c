int searchInsert(int* nums, int numsSize, int target)
{
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]<target)
        {
            continue;
        }
        else if(nums[i]==target)
        {
            return i;
        }
        else
        {
            return i;
        }
    }
    return numsSize;
}
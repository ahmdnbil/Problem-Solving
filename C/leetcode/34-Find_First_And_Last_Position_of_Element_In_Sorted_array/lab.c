int* searchRange(int* nums, int numsSize, int target, int* returnSize){

    int *ptr=(int*)malloc(2*sizeof(int));
    *returnSize=2;
    
    int flag=0,first,last;
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i] == target)
        {
            if(flag==0)
            {
                flag=1;
                first=i;
            }
            last=i;
        }
    }

    if(flag)
    {
        *(ptr)=first;
        *(ptr+1)=last;
    }
    else
    {
        ptr[0]=-1;
        ptr[1]=-1;
    }
    return ptr;
}
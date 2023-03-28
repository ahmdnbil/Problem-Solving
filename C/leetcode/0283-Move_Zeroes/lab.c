void moveZeroes(int* nums, int numsSize){
    int temp;
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]==0)
        {
            for(int j=i;j<numsSize-1;j++)
            {
                temp=nums[j];
                nums[j]=nums[j+1];
                nums[j+1]=temp;
            }
            numsSize--;
            i--;
        }
    }
}

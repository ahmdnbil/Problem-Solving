//just using bubble sort algorthim :)
void sortColors(int* nums, int numsSize){

    int temp=0,flag;
    for(int i=0;i<numsSize-1;i++)
    {
        flag=0;
        for(int j=0;j<numsSize-1-i;j++)
        {
            if(nums[j]>nums[j+1])
            {
                temp=nums[j];
                nums[j]=nums[j+1];
                nums[j+1]=temp;
                flag=1;
            }
        }
        if(flag==0)break;
    }
}
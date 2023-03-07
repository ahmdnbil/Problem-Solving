//solving using brute force algorthim
int singleNumber(int* nums, int numsSize){
    int flag,temp,i;
    //first special case
    if(numsSize ==1) return nums[0];
    //applying bubble sort algorthim
    for(i=0;i<numsSize-1;i++)
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
        if(!flag)break;
    }
    //second special case
    if(nums[0] != nums[1])return nums[0];
    
    for(i=0;i<numsSize-1;i++)
    {
        if(i && nums[i] != nums[i+1] && nums[i] !=nums[i-1]) return nums[i];
    }
    //third special case
    if(nums[i] != nums[i-1])return nums[i];
    //it should be unreachable code
    return 0;
}
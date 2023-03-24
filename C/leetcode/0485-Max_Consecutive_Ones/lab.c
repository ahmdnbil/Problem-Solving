int findMaxConsecutiveOnes(int* nums, int numsSize){
    int count=0,i=0,maxCount=0;
    while(i!=numsSize)
    {
        if(nums[i]==1) count++;
        else count=0;
        if(count>maxCount) maxCount=count;
        else if(maxCount>numsSize-i) return maxCount;
        i++;
    }
    return maxCount;
}

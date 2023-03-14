//time limit exceed in leetcode
#include <stdbool.h>
bool containsDuplicate(int* nums, int numsSize){
    int temp,flag=0;

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
        if(!flag) break;
    }
    for(int i=0;i<numsSize-1;i++)
    {
        if(nums[i] == nums[i+1]) return true;
    }
    return false;
}
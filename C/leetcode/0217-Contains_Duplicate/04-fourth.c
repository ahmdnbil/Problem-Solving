//solution using quick sort algorhim built in function, And it's accepted in Leetcode
#include <stdbool.h>
#include <stdlib.h>

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

bool containsDuplicate(int* nums, int numsSize){
    int temp,flag=0;
    qsort(nums,numsSize,sizeof(int),cmpfunc);
    for(int i=0;i<numsSize-1;i++)
    {
        if(nums[i] == nums[i+1]) return true;
    }
    return false;
}
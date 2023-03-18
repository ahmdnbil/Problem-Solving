int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int missingNumber(int* nums, int numsSize){
    int i;
    qsort(nums,numsSize,sizeof(int),cmpfunc);
    for(i=0;i<numsSize;i++)
    {
        if(i != nums[i])return i;
    }
    return i;
}

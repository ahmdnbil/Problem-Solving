int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}
int* sortArray(int* nums, int numsSize, int* returnSize){
    qsort(nums, numsSize, sizeof(int), cmpfunc);
    *returnSize=numsSize;
    return nums;
}

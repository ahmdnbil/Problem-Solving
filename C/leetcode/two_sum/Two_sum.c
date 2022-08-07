

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int i=0,flag=0,sum=0;
	
	//dynamic memroy allocation for index of two numbers
    int *ret_array=(int *)malloc(2*sizeof(int));
    
	if(ret_array==NULL)
    {
        *returnSize=0;
    }
    else
    {   
        *returnSize=2;
        for(;i<(numsSize-1);i++)
        {
            for(int j=i+1;j<numsSize;j++)
            {
                sum=nums[i]+nums[j];
                if(sum==target)
                {
                    flag=1;
                    ret_array[0]=i;
                    ret_array[1]=j;
                    break;
                }
               
            }
            if (flag==1)
            break;
		}    
    }

    
    return ret_array;
}
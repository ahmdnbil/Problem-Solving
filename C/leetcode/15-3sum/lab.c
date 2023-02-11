//Runtime error in leetcode 
#define NULL 0
int** threeSum(int* nums, int numsSize, int* returnSize, int** returnColumnSizes){
 int **arr=0;
    int count=0,flag=0,temp;
    
    //bubble sort algorthim to avoid getting dublicate array
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
        if (flag==0) break;
    }
    
    flag =0;
    for (int i=0;i<(numsSize-2);i++)
    {
        for(int j=i+1;j<(numsSize-1);j++)
        {
            for(int k=j+1;k<numsSize;k++)
            {
                if(nums[i]+nums[j]+nums[k] == 0)
                {
                    for(int x=0;x<count;x++) if ( arr[x][0] == nums[i] && arr[x][1] ==nums[j] && arr[x][2] ==nums[k])flag=1;
        
                    if (flag == 0)
                    {
                        count++;
                        arr=(int **)realloc(arr,count *sizeof(*arr));
                        if (arr== NULL) exit(1);
                        arr[count-1]=(int *)malloc(3*sizeof(int));
                        if (arr[count-1]== NULL) exit(1);
                        arr[count-1][0]=nums[i];
                        arr[count-1][1]=nums[j];
                        arr[count-1][2]=nums[k];
                    }
                    flag=0;
                    break;
                }
            }
        }
    }
    *returnSize = count;
    **returnColumnSizes=3;   
    return arr;
}
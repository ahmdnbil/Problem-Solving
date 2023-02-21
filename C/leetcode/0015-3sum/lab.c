//Runtime error in leetcode 
#define NULL 0

/*
steps of sol:-
1- bubble sort algorthim (it will help to not repeate any there numbers)
2- three for loop to navigate the arry
3- check if sum equals 0 of each 3 elements of array
4- if sum not equal 0 it will continue
5- if sum equal 0 it will check if the the elements is used before or not
6- if it's not used it will reallocate array of pointers to carry a new pointer
7- then we mallocate the new numbers in the pointer 
*/
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
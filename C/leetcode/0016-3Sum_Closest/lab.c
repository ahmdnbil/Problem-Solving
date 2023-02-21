int threeSumClosest(int* nums, int numsSize, int target)
{

    int closest,flag=0,sum,diff,minDiff;
    for (int i=0;i<(numsSize-2);i++)
    {
        for(int j=i+1;j<(numsSize-1);j++)
        {
            for(int k=j+1;k<numsSize;k++)
            {
                sum=nums[i]+nums[j]+nums[k];
                if(sum==target) return target;
                if(!flag)
                {
                    closest=sum;
                    minDiff=(closest-target) >=0 ?closest-target:-1*(closest-target);
                    if (minDiff ==0) return target;
                    flag=1;
                }
                else
                {
                    diff=(sum-target) >=0 ?sum-target:-1*(sum-target);
                    if(diff<minDiff)
                    {
                        closest=sum;
                        minDiff=diff;
                        if (minDiff ==0) return target;
                    }
                } 

            }
        }
    }

    return closest;
}
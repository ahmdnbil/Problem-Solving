//sol with bubble sort algorthim
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    
    int size=m+n,temp,flag=0;
    
    for(int i=m;i<size;i++)
    {
        nums1[i]=nums2[i-m];
    }

    for(int i=0;i<size-1;i++)
    {
        flag=0;
        for(int j=0;j<size-1-i;j++)
        {
            if(nums1[j] > nums1[j+1])
            {
                temp=nums1[j];
                nums1[j]=nums1[j+1];
                nums1[j+1]=temp;
                flag=1;
            }
        }
        if(!flag)break;
    }
}
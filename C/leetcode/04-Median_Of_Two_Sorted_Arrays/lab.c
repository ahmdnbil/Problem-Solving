double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size)
{
    int local_u32Temp,local_u8Flag;
    int *ptr=(int *)malloc((nums1Size+nums2Size)*sizeof(int));
    int i=0,j=0;
    int size = nums1Size+nums2Size;
    double res;

    //Mergeing the Two arrays
    while(i<nums1Size)
    {
        ptr[j]=nums1[i];
        i++;
        j++;
    }
    i=0;
    while(i<nums2Size)
    {
        ptr[j]=nums2[i];
        i++;
        j++;
    }
    //end of merge

    //sorting array using bubble sort algorthim
    i=0;
    for(;i<size-1;i++)
    {
        local_u8Flag=0;
        j=0;
        for(; j<size-1-i ; j++)
        {
            if(ptr[j+1] < ptr[j])
            {
                local_u32Temp=ptr[j];
                ptr[j]=ptr[j+1];
                ptr[j+1]=local_u32Temp;
                local_u8Flag=1;
            }
        }
        if(local_u8Flag==0) break;
    }
    //ending of sort
    res=size%2 == 0 ? (double)(ptr[size/2] +ptr[(size/2)-1])/2 : ptr[size/2];
    free(ptr);
    return res;
}
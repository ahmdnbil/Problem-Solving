/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* constructRectangle(int area, int* returnSize){
    //if area required is zero
    if(!area)return NULL;
    //memeory allocation for Length and Width
    int* ptr=(int*)malloc(2*sizeof(int));
    //size of returned array
    *returnSize=2;
    //creating variables
    int divided=1,l,w,diff,minDiff,finalw,finalL,flag=0;
    if(area==1)
    {
        ptr[0]=1;
        ptr[1]=1;
        return ptr;
    }
    while(divided<=area)
    {
        if(area%divided==0)
        {
            w=divided;
            l=area/divided;
            diff=(w-l>=0)?w-l:-1*(w-l);
            if(!flag)
            {
                minDiff=diff;
                finalw=w;
                finalL=l;
            }
            flag=1;
            if(diff<minDiff)
            {
                finalw=w;
                finalL=l;
                minDiff=diff;
            }

        }
        divided++;
    }
    if(finalw>finalL)
    {
        ptr[0]=finalw;
        ptr[1]=finalL;

    }
    else
    {
        ptr[0]=finalL;
        ptr[1]=finalw;
    }
    return ptr;
}

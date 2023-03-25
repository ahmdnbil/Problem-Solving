// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

int firstBadVersion(int n) {
    int end=n,bottom=1,mid,result=n;
    while(bottom <= end)
    {
        mid = bottom + ( end - bottom ) / 2;
        if(isBadVersion(mid))
        {
            result=mid;
            end=mid-1;
        }
        else bottom=mid+1;
    }
    return result;
}

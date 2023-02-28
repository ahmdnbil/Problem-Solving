int mySqrt(int x){

    unsigned int long long bottom=0,top=x;
    unsigned int long long mid;
    if (x ==0 || x==1)return x;
    while(bottom+1<top)
    {
        mid=bottom+(top-bottom)/2;
        if(mid*mid==x) return mid;
        else if(mid*mid < x )bottom=mid;
        else top=mid;
    }
    if(top*top == mid) return top;
    else return bottom;
}
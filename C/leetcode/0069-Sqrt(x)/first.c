int mySqrt(int x){
    unsigned int long long i=0,target=i*i;
    if(x==0) return x;
    while(target < x)
    {
        i++;
        target=i*i;
        if (target == x) return i;
    }
    return i-1;
}
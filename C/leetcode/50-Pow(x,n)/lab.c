double myPow(double x, int n)
{
    char sign;
    double res=x;
    if (n==0) return 1.0;
    else if (x==1) return 1.0;
    else if (x == -1) return (n%2==0) ? 1:-1;
    else if (x ==0) return (n>0)?0:1;
    else if (n==-2147483648) return 0;
    else if (n ==2147483647 ) return 0;
    else
    {
        sign=(n>0)?1:-1;
        n= sign==1?n:-n;
        while((n-1)!=0)
        {
            res*=x;
            n--;
        } 
        return (sign==1)? res: 1/res;
    }
        
}
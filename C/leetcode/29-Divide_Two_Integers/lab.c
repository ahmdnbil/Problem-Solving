//without using even single multiplication, division, or modulus

#define INVERT_NUMBER(x) if(x>0) x=(~x)+1; \
                        else {x-=1; x=~x;}

int divide(int dividend, int divisor){
    int count=0;

    if (dividend == 0) return 0;
    else if(dividend == divisor) return 1;
    else if(divisor ==1) return dividend; 
    else if ((dividend >0) && (divisor >0))
    {
        while(dividend > 0)
        {
            dividend=dividend-divisor;
            count++;
        }
        if (dividend<0) count--;
    }
    else if ((dividend<0) && (divisor<0))
    {
        if(divisor == -1) 
        {
            if (dividend == -2147483648) return 2147483647; 
            INVERT_NUMBER(dividend) 
            return dividend;
        }
        while(dividend < 0)
        {
            dividend=dividend-divisor;
            if (count == 2147483647) break;
            count++;
        }
        if (dividend>0) count--;
    }
    else
    {
        if(dividend<0)
        {
            while(dividend < 0)
            {
                dividend=dividend+divisor;
                count--;
            }
            if (dividend>0) count++;
        }else
        {
            if(divisor == -1) 
            {
                INVERT_NUMBER(dividend)
                return dividend;
            }
            while(dividend > 0)
            {
                dividend=dividend+divisor;
                count--;
            }
            if (dividend<0) count++;
        }
    }
    return count;
}
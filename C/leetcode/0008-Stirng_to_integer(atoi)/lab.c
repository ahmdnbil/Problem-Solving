#include <limits.h>

int numberCount(int s)
{
    char count=0;
    while(s)
    {
        count++;
        s/=10;
    }
    return count;
}

int myAtoi(char * s)
{
    int i=0,number=0,sign=1,count=0,numberFlag=0;
    while(s[i] != '\0')
    {
        if(s[i]>='0' && s[i]<='9')
        {
            numberFlag=1;
            number=number *10+sign*(s[i]-'0');
            count=numberCount(number);
            
        }
        else if (s[i] == '-' || s[i]== '+')
        {
            sign = s[i]== '+' ? 1:-1;
            if(numberFlag ) return number;
            numberFlag=1;
        }
        else if (s[i]==' ' &&  numberFlag==1) return number;
        else if (s[i]==' ' &&  numberFlag==0)  {i++; continue;}
        else break;
        
    
        //for limits constraint
        if (count == 10 && (s[i+1]<='9' && s[i+1]>='0'))
        {
            return number > 0 ? INT_MAX:INT_MIN;
        }
        else if (count == 9)
        {
            if (number > 0)
            {
                if (number >INT_MAX/(int)pow(10,10-count)  ) return INT_MAX;
                else if (number==INT_MAX/(int)pow(10,10-count) && s[i+1]-'0' > 7 ) return INT_MAX;
            }
            else if (number < 0)
            {
                if (number <INT_MIN/(int)pow(10,10-count)  ) return INT_MIN;
                else if (number==INT_MIN/(int)pow(10,10-count) && s[i+1]-'0' > 8 ) return INT_MIN;
            }
            
            
        }
        i++;
    }
    return number;
}
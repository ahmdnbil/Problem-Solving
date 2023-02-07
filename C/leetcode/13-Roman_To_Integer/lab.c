int symToInt(char s)
{
    short int res;
    switch(s)
    {
        case 'I': res=1;break;
        case 'V': res=5;break;
        case 'X': res=10;break;
        case 'L': res=50;break;
        case 'C': res=100;break;
        case 'D': res=500;break;
        case 'M': res=1000;break;
    }
    return res;
}

int romanToInt(char * s){
    int i=0,sum=0;
    while(s[i]!='\0')
    {
        if (s[i+1]!= '\0')
        {
            if (symToInt(s[i]) >= symToInt(s[i+1]))
            {
                sum=sum+symToInt(s[i]);
                i++;
            }
            else
            {

                sum=sum+(symToInt(s[i+1]) -symToInt(s[i])) ;
                i=i+2;
            }
        }
        else 
        {
            sum=sum+symToInt(s[i]);
            break;
        }
    }
    return sum;

}
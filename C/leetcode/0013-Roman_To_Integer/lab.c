int romanLookupTable(char s)
{
    switch(s)
    {
        case 'I': return 1;break;
        case 'V': return 5;break;
        case 'X': return 10;break;
        case 'L': return 50;break;
        case 'C': return 100;break;
        case 'D': return 500;break;
        case 'M': return 1000;break;
    }
    return 0;
}

int romanToInt(char * s){
    int i=0,sum=0;
    while(s[i]!='\0')
    {
        if (s[i+1]!= '\0')
        {
            if (romanLookupTable(s[i]) >= romanLookupTable(s[i+1]))
            {
                sum=sum+romanLookupTable(s[i]);
                i++;
            }
            else
            {

                sum=sum+(romanLookupTable(s[i+1]) -romanLookupTable(s[i])) ;
                i=i+2;
            }
        }
        else 
        {
            sum=sum+romanLookupTable(s[i]);
            break;
        }
    }
    return sum;

}
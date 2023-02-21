bool isPalindrome(int x)
{
    
    signed int y=x;
    long int newNumber=0;
    int rem,count=0;
    if (x<0) return false;
    while(x!=0)
    {
        rem=x%10;
        newNumber=newNumber*10+rem;
        if (newNumber > 2147483647) return false;
        x/=10;
    }
    if (newNumber ==y)
    return true;
    else 
    return false; 

}
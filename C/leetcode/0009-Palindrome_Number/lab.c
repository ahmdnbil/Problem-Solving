bool isPalindrome(int x)
{
    
    signed int y=x,z=x,newNumber=0;
    int rem,count=0;
    if (x<0) return false;
    
    // this while loop to count length of the number
    while(x!=0)
    {
        count++;
        x/=10;
    }

    //reverse number here
    for(int i=0;i<count;i++)
    {
        rem=y%10;
        newNumber=newNumber+rem*pow(10,(count-1-i));
        y/=10;
    }
    if (newNumber ==z)
    return true;
    else 
    return false; 

}
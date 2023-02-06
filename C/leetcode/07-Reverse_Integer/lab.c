#define MAX_INT_POS 2147483647
#define MAX_INT_NEG -2147483648

int reverse(int x){
    
    int y=x,z=x,newNumber=0,i=0;
    int rem,count=0;
    
    // this while loop to count length of the number
    while(x!=0)
    {
        count++;
        x/=10;
    }

    //Reversing Number
    while(y!=0)
    {
        rem=y%10;
        newNumber=newNumber*10+rem;
        
        //checking if the number exceeds the limit 
        if (count == 10)
        {
            if ((y>0) && (newNumber > (MAX_INT_POS/((int)pow(10,count-1-i)))))
            return 0;
            else if((y<0) && (newNumber < (MAX_INT_NEG/((int)pow(10,count-1-i)))))
            return 0;
        }

        y/=10;
        i++;
    }
    return newNumber;
}
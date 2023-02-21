// not working for large numbers so it's not accepted in leetcode

#define NULL ((void*)0)
unsigned long long int convertNumber(char *num)
{
    char i=0;
    unsigned long long int sum=0;
    while(num[i] != '\0')
    {
        sum=sum*10+(num[i]-'0');
        i++;
    }
    return sum;
}

char* multiply(char * num1, char * num2){
    char *ptr=NULL;
    unsigned long long int mul = convertNumber(num1)*convertNumber(num2),reversedMul=1;
    int count=0;
    if (mul==0)
    {
        ptr=(char*)calloc(2,sizeof(char));
        *ptr='0';
        ptr++;
        *ptr='\0';
        return ptr-1;
    }
    while(mul!=0)
    {
        reversedMul=reversedMul*10+mul%10;
        mul/=10;
        count++;
    }
    ptr=(char*)calloc(count+1,sizeof(char));
    while(reversedMul != 1)
    {
        *ptr='0'+reversedMul%10;
        ptr++; 
        reversedMul/=10;
        
    }
    *ptr='\0';
    return ptr-count;

}
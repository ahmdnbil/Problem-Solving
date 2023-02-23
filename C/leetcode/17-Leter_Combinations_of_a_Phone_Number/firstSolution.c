char* numToStr(char i)
{
    char*ptr;
    switch(i)
    {
        case 2:
        ptr=(char*)malloc(4*sizeof(char));
        ptr="abc";
        break;

        case 3:
        ptr=(char*)malloc(4*sizeof(char));
        ptr="def";
        break;

        case 4:
        ptr=(char*)malloc(4*sizeof(char));
        ptr="ghi";
        break;

        case 5:
        ptr=(char*)malloc(4*sizeof(char));
        ptr="jkl";
        break;

        case 6:
        ptr=(char*)malloc(4*sizeof(char));
        ptr="mno";
        break;

        case 7:
        ptr=(char*)malloc(5*sizeof(char));
        ptr="pqrs";
        break;

        case 8:
        ptr=(char*)malloc(4*sizeof(char));
        ptr="tuv";
        break;

        case 9:
        ptr=(char*)malloc(5*sizeof(char));
        ptr="wxyz";
        break;
    }
    return ptr;

}
char ** letterCombinations(char * digits, int* returnSize)
{
    int i=0,mul=1,count=0;
    char **symbols=0;
    char **str=0;
    
    str=(char**)realloc(str,count*sizeof(*str));
    
    while(digits[i]!='\0')
    {
        mul= (digits[i]-'0' == 7 || digits[i]-'0' == 9 )? mul*4:mul*3;
        str[i]=(char*)malloc(5*sizeof(char));
        str[i]=numToStr(digits[i]-'0');
        i++;
    }
    
    count=i;
    return count;
    symbols=(char**)realloc(symbols,mul*sizeof(*symbols));
    
}
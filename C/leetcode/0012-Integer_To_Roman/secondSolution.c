char * intToRoman(int x)
{
    char *ptr=(char *)malloc(10*sizeof(char));
    while(x >=1000)
    {
        ptr=strcat(ptr,"M");
        x-=1000;
    }
    while(x >=900)
    {
        ptr=strcat(ptr,"CM");
        x-=900;
    }
    while(x >=500)
    {
        ptr=strcat(ptr,"D");
        x-=500;
    }
    while(x >=400)
    {
        ptr=strcat(ptr,"CD");
        x-=400;
    }
    while(x >=100)
    {
        ptr=strcat(ptr,"C");
        x-=100;
    }
    while(x >=90)
    {
        ptr=strcat(ptr,"XC");
        x-=90;
    }
    while(x >=50)
    {
        ptr=strcat(ptr,"L");
        x-=50;
    }
    while(x >=40)
    {
        ptr=strcat(ptr,"XL");
        x-=40;
    }
    while(x >=10)
    {
        ptr=strcat(ptr,"X");
        x-=10;
    }
    while(x ==9)
    {
        ptr=strcat(ptr,"IX");
        x-=9;
    }
    while(x >=5)
    {
        ptr=strcat(ptr,"V");
        x-=5;
    }
    while(x ==4)
    {
        ptr=strcat(ptr,"IV");
        x-=4;
    }
    while(x >=1)
    {
        ptr=strcat(ptr,"I");
        x-=1;
    }
    return ptr;
}
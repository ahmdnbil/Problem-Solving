#define NULL 0
char *concatString(char *ptr1,char *ptr2)
{
    int i=0,j=0;
    char*ptr3=(char*)malloc(10*sizeof(char));
    if (ptr3 == NULL)
    {
        return NULL;
    }
    else
    {
        while (ptr1[i] != '\0')
        {
            ptr3[j] = ptr1[i];
            i++;
            j++;
        }
        i=0;
        while (ptr2[i] != '\0')
        {
            ptr3[j] = ptr2[i];
            i++;
            j++;
        }
        return ptr3;
    }

}

char * intToRoman(int x){
    char* ptr2="\0";
    if (x==0) return ptr2;
    else
    {
        while(x!=0)
        {
            switch(x)
            {
                case 1000 ... 4000:
                {
                    ptr2=concatString(ptr2,"M");
                    x-=1000;
                    break;
                }
                case 900 ... 999:
                {
                    ptr2=concatString(ptr2,"CM");
                    x-=900;
                    break;
                }
                case 500 ... 899:
                {
                    ptr2=concatString(ptr2,"D");
                    x-=500;
                    break;
                }
                case 400 ... 499:
                {
                    ptr2=concatString(ptr2,"CD");
                    x-=400;
                    break;
                }
                case 100 ... 399:
                {
                    ptr2=concatString(ptr2,"C");
                    x-=100;
                    break;
                }
                case 90 ... 99:
                {
                    ptr2=concatString(ptr2,"XC");
                    x-=90;
                    break;
                }
                case 50 ... 89:
                {
                    ptr2=concatString(ptr2,"L");
                    x-=50;
                    break;
                }
                case 40 ... 49:
                {
                    ptr2=concatString(ptr2,"XL");
                    x-=40;
                    break;
                }
                case 10 ... 39:
                {
                    ptr2=concatString(ptr2,"X");
                    x-=10;
                    break;
                }
                case 9:
                {
                    ptr2=concatString(ptr2,"IX");
                    x-=9;
                    break;
                }
                case 5 ... 8:
                {
                    ptr2=concatString(ptr2,"V");
                    x-=5;
                    break;
                }
                case 4:
                {
                    ptr2=concatString(ptr2,"IV");
                    x-=4;
                    break;
                }
                case 1 ... 3:
                {
                    ptr2=concatString(ptr2,"I");
                    x-=1;
                    break;
                }
            }
        }
    }
    return ptr2;
}
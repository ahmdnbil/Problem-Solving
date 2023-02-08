char * intToRoman(int x)
{
    char *ptr=(char *)malloc(10*sizeof(char));
    char *ptr2[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    int ptr3[]=  {1000, 900 , 500, 400, 100,90,50,40,10,9,5,4,1};
    for(int i=0;i<13;i++)
    {
        while(x>=ptr3[i])
        {
            ptr=strcat(ptr,ptr2[i]);
            x-=ptr3[i];            
        }
    }
    return ptr;
}
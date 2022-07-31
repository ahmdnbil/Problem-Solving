#include <stdio.h>

void main (void)
{
    
    int local_intRows= 6; // by changing the number we will get the no. of rows desired
    int local_intSpaces =local_intRows;
    int local_intStarts=1;
    int local_intNewLine= local_intRows-1;

    for(int i=0;i<local_intRows;i++)
    {
        for(int j=0;j<local_intSpaces;j++)
        {
            printf(" ");
        }
        for(int k=0;k<local_intStarts;k++)
        {
            printf("*");
        }
        local_intStarts+=2;
        local_intSpaces-=1;

        if(i != local_intNewLine) //to make sure it will not print new line at the end
        printf("\n");
    }
}
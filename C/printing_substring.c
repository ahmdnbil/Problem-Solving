#include <stdio.h>
#include <stdlib.h>
char * substring(char *str,int A_u32Start,int A_u32End);


int main()
{
    char c[]="ahmed nabil";
    printf("%s",substring(c,2,8));
    return 0;
}

char * substring(char *str,int A_u32Start,int A_u32End)
{
    int local_u32Len= A_u32End-A_u32Start+1;
    char *local_ptrStr=(char*)calloc(local_u32Len+1,sizeof(char));
    for(char i=A_u32Start;i<=A_u32End && str[i] != '\0';i++)
    {       
        *local_ptrStr=str[i];
        local_ptrStr++;
    }
    *local_ptrStr='\0';
    return local_ptrStr-local_u32Len;
}


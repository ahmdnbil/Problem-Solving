//this solution is not accepted in leetcode cause it takes a long time
#include <stdbool.h>
#include <stdlib.h>

static inline bool isPalindrom(char *s,int start,int end)
{
    int len=end-start+1;
    for(int i=0;i<len/2;i++)
    {
        if(s[start+i] != s[end-i]) return false;
    }
    return true;
}

char * longestPalindrome(char * s){
    int slen=strlen(s);
    int max_len=0,len,start=0,end=0,i,j;
    char *ptr=NULL;
    for(i=0;i<slen;i++)
    {
        for(j=i;j<slen;j++)
        {
            if(isPalindrom(s,i,j))
            {
                len=j-i+1;
                if(max_len<len)
                {
                    max_len=len;
                    start=i;
                    end=j;
                }
            }
        }
    }
    len=end-start+1;
    ptr=(char*)malloc((len+1)*sizeof(char));
    for(i=0;i<=len;i++)
    {
        ptr[i]=s[start+i];
    }
    ptr[i]='\0';
    return ptr;
}
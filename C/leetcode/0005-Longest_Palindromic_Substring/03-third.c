//this solution is accepted in leetcode with the small trick in inner for loop
#include <stdbool.h>
#include <stdlib.h>
char r[1001];

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
        //modification here to start the counting from count bigger than last maximum
        for(j=i+max_len;j<slen;j++)
        {
            if(isPalindrom(s,i,j))
            {
                len=j-i+1;
                if(max_len<len)
                {
                    max_len=len;
                    start=i;
                }
            }
        }
    }
    strncpy(r,s+start,max_len);
    r[max_len]='\0';
    return r;
}
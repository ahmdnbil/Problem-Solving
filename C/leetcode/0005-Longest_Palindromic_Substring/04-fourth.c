//this solution is accepted in leetcode with the small trick in inner for loop
#include <stdbool.h>
#include <stdlib.h>

#if defined(BRUTE_FORCE)

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

char r[1001];
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

#else
char r[1001];
int find_longest_pal(char *s,int len,int start,int end)
{
    while(start>=0 && end< len && s[start] ==s[end])
    {
        start--;
        end++;
    }
    return end-start-1;
}
char * longestPalindrome(char * s){
    int i,slen=strlen(s),max_len=0,len,start;
    if(slen<2) return s;
    for (int i = 0; i < slen-1; i++)
    {
        len=find_longest_pal(s,slen,i,i);
        if(len>max_len)
        {
            max_len=len;
            start=i;
        }
        len=find_longest_pal(s,slen,i,i+1);
        if(len>max_len)
        {
            max_len=len;
            start=i+1;
        }

    }
    strncpy(r,s+start-max_len/2,max_len);
    r[max_len]='\0';
    return r;
}
#endif
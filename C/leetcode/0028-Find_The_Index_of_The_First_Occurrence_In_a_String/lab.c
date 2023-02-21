
int strStr(char * haystack, char * needle){
    int i=0,j=0,index=-1,newIndex=0;
    while(haystack[i] != '\0')
    {
        while(haystack[i] == needle[j])
        {
            if(j==0) index=i;
            else if(j !=0 && haystack[i] == needle[0] && !newIndex) newIndex=i;
            
            if(needle[j+1]=='\0') return index;
            else if(haystack[i+1] != needle[j+1])
            {
                if (newIndex != 0)
                {
                    i=newIndex-1;
                    newIndex=0;
                }
                break;
            }
            i++;
            j++;
        }      
        index=-1;
        j=0;
        i++;
    }
    //unreachable code 
    return index;
}
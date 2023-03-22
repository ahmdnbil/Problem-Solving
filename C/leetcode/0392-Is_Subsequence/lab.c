bool isSubsequence(char * s, char * t){
    int i=0,j=0;
    if(s[j] =='\0')return true;
    while(t[i] !='\0')
    {
        if(t[i]==s[j])
        {
            j++;
            if(s[j] == '\0') return true;

        }
        i++;
    }
    return false;
}

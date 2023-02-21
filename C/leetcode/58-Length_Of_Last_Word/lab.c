int lengthOfLastWord(char * s){
    int i=0,count=0;
    while(s[i]!='\0')
    {
        if(s[i]!=' ')
        {
            if(i !=0 && s[i-1] == ' ') count=0;
            count++;
        }
        i++;
    } 
    return count;
}
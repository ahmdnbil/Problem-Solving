bool detectCapitalUse(char * word){
    int i=1;
    if(word[i] != '\0' && word[i] >= 97)
    {
        while( word[i] !='\0'&& word[i] >= 97)i++;
        if(word[i] != '\0')return false;

    }
    else if(word[i] != '\0' && word[i] < 97)
    {
        if(word[0]>=97) return false;
        while( word[i] !='\0' && word[i] < 97)i++;
        if(word[i] != '\0')return false;

    }
    return true;
}

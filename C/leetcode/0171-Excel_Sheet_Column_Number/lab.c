int titleToNumber(char * columnTitle){
    if(columnTitle == NULL) return 0;
    char i=0,j=0;
    int product=0;

    while(columnTitle[i] != '\0') //"ah"
    {
        i++;
    }
    i--;
    while(i!=-1)
    {
        product+=(int)pow(26,i)*(columnTitle[j]-'A'+1);
        i--;
        j++;
    }
    return product;
}

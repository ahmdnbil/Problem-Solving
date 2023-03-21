void reverseString(char* s, int sSize){
    int i=0,j=sSize-1,temp;
    sSize/=2;
    while(i != sSize)
    {
        temp=s[i];
        s[i]=s[j];
        s[j]=temp;
        i++;j--;
    }
}

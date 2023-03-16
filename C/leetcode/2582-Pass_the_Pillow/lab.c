int passThePillow(int n, int time){
    int i=1;
    int mul;
    while(time)
    {
        time--;
        if(i==1)mul=1;
        else if(i==n)mul=-1;
        i=i+mul*1;
        
    }
    return i;
}
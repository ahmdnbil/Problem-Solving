bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n){
    int i=0,counter=0;
    if(n==0) return true;
    else if(n==1 && flowerbedSize == 1 && flowerbed[0]==1)return false;
    else if(n==1 && flowerbedSize == 1 && flowerbed[0]==0)return true;
    while(i != flowerbedSize)
    {
        if(i==0)
        {
            if(flowerbed[i+1]!=1 && flowerbed[i] !=1)
            {
                counter++;
                flowerbed[i]=1;
            }
        }
        else if(i == flowerbedSize-1)
        {
            if(flowerbed[i-1]!=1 &&flowerbed[i] != 1)
            {
                counter++;
                flowerbed[i]=1;
            }
        }
        else
        {
            if(flowerbed[i] != 1 && flowerbed[i-1] !=1 && flowerbed[i+1] !=1)  
            {
                counter++;
                flowerbed[i]=1;

            }
        }
        i++;
    }
    return (counter>=n)?true:false;
}

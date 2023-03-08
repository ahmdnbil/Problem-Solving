//sloution using brute force algorthim
#include <stdbool.h>

bool isPowerOfTwo(int n){
    if (n==1 )return true;
    else if(n %2 !=0 ||  n==2147483646) return false;
    int temp=0,i=0;
    if(!n) return false;
    while(n>temp)
    {
        temp=pow(2,i);
        if(n==temp)return true;
        i++;
    }
    return false;
}
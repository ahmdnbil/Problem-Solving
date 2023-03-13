#include <stdbool.h>

bool isPowerOfThree(int n){
    long long signed int power=0,i=0;
    if(n==0 || n<0) return false;
    while(power < n)
    {
        power=pow(3,i);
        if(power == n) return true;
        i++;
    }
    return false;
}
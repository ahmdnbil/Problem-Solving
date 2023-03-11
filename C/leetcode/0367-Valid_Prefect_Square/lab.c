#include <stdbool.h>

bool isPerfectSquare(int num){
    int i=0,square=0;
    if (num ==2147483647) return false;
    while(square < num)
    {
        i++;
        square=i*i;
        if(num==square) return true;
    }
    return false;
}
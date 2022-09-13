#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    int sum=0;
    int mod;
    scanf("%d", &n);
    mod=n;
    while(n!=0)
    {
        mod=n%10;
        n/=10;
        sum+=mod;
        
    }
    printf("%d",sum);
    return 0;
}
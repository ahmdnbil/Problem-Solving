#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef unsigned int u32;
int main() {

    u32 n,sum=0,i=0,*ptr;
    scanf("%d",&n);
    ptr=(u32 *)malloc(n*sizeof(u32));
    for(;i<n;i++)
    {
        scanf("%d",ptr+i);
        sum+=ptr[i];
    }
    printf("%d",sum);
    free(ptr);
    return 0;
}
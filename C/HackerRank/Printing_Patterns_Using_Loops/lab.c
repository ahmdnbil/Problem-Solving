#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef unsigned char u8 ;
typedef signed char s8;
typedef unsigned short u16 ;
typedef signed short s16 ;
typedef unsigned long int u32 ;
typedef signed long int s32 ;
typedef unsigned long long int u64 ;
typedef signed long long int s64 ;
typedef float f32;
typedef double f64;

int main() 
{

    u32 n;
    scanf("%d", &n);
    for(u32 i=0;i<(2*n-1);i++)
        {
            for(u32 j=0;j<(2*n-1);j++)
            {
                printf("%d ",n);
            }
            printf("\n");
        }
    return 0;
}
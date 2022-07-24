#include <stdio.h>
#include <string.h>
#include <stddef.h>

#pragma pack(4)

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

void main()
{
    u32 local_intPassed=0;
    u32 local_intFaild=0;
    f32 local_floatHigh=0;
    f32 local_floatLow=0;
    f32 local_floatAvg=0;
    f32 local_floatSum=0;

    f32 c1[10]={44,23,78,60,90.4,97,86,35,54,46};
    f32 c2[10]={41,20,80.9,67,83.7,98,54.6,30,60,40};
    f32 c3[10]={42,69.8,73,68,100,96.7,10.9,59,50.8,48.3};
    f32 c[10];
    int i=0;

    for(int j=0;j<3;j++)
    {
        if(j==0)
        {
            for(int k=0;k<10;k++)
            {
                c[k]=c1[k];
            }
        }
        if(j==1)
        {
            for(int k=0;k<10;k++)
            {
                c[k]=c2[k];
            }
        }
        if(j==2)
        {
            for(int k=0;k<10;k++)
            {
                c[k]=c3[k];
            }
        }

        local_floatHigh=c[0];
        local_floatLow=c[0];
        printf("For first class %d:-\n",j+1);

        for(;i<10;i++)
        {
            if(c[i]>local_floatHigh)
            local_floatHigh=c[i];

            if(c[i]<local_floatLow)
            local_floatLow=c[i];

            if(c[i]>=(f32)50)
            local_intPassed++;
            else
            {local_intFaild++;}

            local_floatSum+=c[i];

        }
        local_floatAvg=local_floatSum/10;
        printf("Number of Passed students: %d\n",local_intPassed);
        printf("Number of faild students: %d\n",local_intFaild);
        printf("Higest grade: %.3f\n",local_floatHigh);
        printf("Lowest grade: %.3f\n",local_floatLow);
        printf("Average of grades: %.3f\n",local_floatAvg);
        printf("\n");
        local_intPassed=0;
        local_intFaild=0;
        local_floatHigh=0;
        local_floatLow=0;
        local_floatAvg=0;
        local_floatSum=0;
        i=0;
    }
}
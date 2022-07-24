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

void swap(u32 *p,u32 *q, u32 *r);
void main()
{
    u32 x=10,y=8,z=6;
    u32 *p=&x,*q=&y,*r=&z;
    printf("value of x: %d \n",x);
    printf("value of y: %d \n",y);
    printf("value of z: %d \n",z);
    printf("value of p: %d \n",p);
    printf("value of q: %d \n",q);
    printf("value of r: %d \n",r);
    printf("value of *p: %d \n",*p);
    printf("value of *q: %d \n",*q);
    printf("value of *r: %d \n",*r);
    puts(" ");

    printf("Swapping pointers\n");
    swap(p,q,r);
    
    puts(" ");
    printf("value of x: %d \n",x);
    printf("value of y: %d \n",y);
    printf("value of z: %d \n",z);
    printf("value of p: %d \n",p);
    printf("value of q: %d \n",q);
    printf("value of r: %d \n",r);
    printf("value of *p: %d \n",*p);
    printf("value of *q: %d \n",*q);
    printf("value of *r: %d \n",*r);

}
void swap(u32 *p,u32 *q, u32 *r)
{
    u32 temp1=*p,temp2=*q;
    *p=temp2;
    *q=*r;
    *r=temp1;
}
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef unsigned char u8;
void numberToText(u8 x,u8 *text);

int main() 
{
    int a, b;
    u8 y[20];
    scanf("%d\n%d", &a, &b);
  	for(;a<=b;a++)
      {
          if((a<=9) && (a>=1))
          {
              numberToText(a,y);
              printf("%s\n",y);
          }
          else
          {
              if(a%2==0)
              {
                  printf("even\n");
              }
              else 
              {
                  printf("odd\n");
              
              }
          }
      }

    return 0;
}

void numberToText(u8 x,u8 *text)
{
    if(x==1)
        strcpy(text,"one");
    else if(x==2)
        strcpy(text,"two");
    else if(x==3)
        strcpy(text,"three");
    else if(x==4)
        strcpy(text,"four");
    else if(x==5)
        strcpy(text,"five");
    else if(x==6)
        strcpy(text,"six");
    else if(x==7)
        strcpy(text,"seven");
    else if(x==8)
        strcpy(text,"eight");
    else if(x==9)
        strcpy(text,"nine");
    
}


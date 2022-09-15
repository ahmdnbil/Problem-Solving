#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char str[1700];
    int i=0,count=0,number=48;
    scanf("%[^\n]%*c", str);
    for(int j=0;j<=9;j++)
    {
        while(str[i] != '\0')
        {
            if(str[i]==number)
            {
                count++;
            }
            i++;
        }    
        printf("%d ",count);
        count=0;
        number++;
        i=0;        
    }
    return 0;
}

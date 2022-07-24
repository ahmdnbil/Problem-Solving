#include <stdio.h>
#include <string.h>

//consepts [gets - fgets - strlen - strcpy - strcat - strcmp - strrev - strlwr - strupr]
void main()
{
    char s[100];
    char s2[100];
    char s3[100];


    //concept 1
    //first method to input string
    printf("please enter string you want to print: ");
    gets(s);
    printf("%s\n",s);


    //concept 2
    //second method to input string
    printf("please enter string you want to print: ");
    scanf("%[^\n]%*c",s2);
    printf("%s\n",s2);


    //concept 3
    //third method to input string
    printf("please enter string you want to print: ");
    fgets(s3,20,stdin);
    printf("%s",s3);


    //concept 4
    //strlen: get the length of string
    char str[20]={'p','r','o','g','r','a','m','\0'};
    printf("the length of this string %d\n",strlen(str));


    //concept 5
    //it will copy str2 and stores it in str3
    char str2[20]="hello world";
    char str3[20];
    strcpy(str3,str2);
    puts(str3); //it's like printf


    //concept 6
    //it will concatenates str5 with str4 and stores it in str4;
    char str4[20]="this is " ,str5[20]="program";
    strcat(str4,str5);
    puts(str4);


    //concept 7
    //strcmp : it will return 0 if they are equal and non-zero result if they are not equal.
    char str6[] = "abcd", str7[] = "abCd", str8[] = "abcd";
    int result;
    result=strcmp(str6,str7);
    printf("%d\n",result);
    result=strcmp(str6,str8);
    printf("%d\n",result);



    //concept 8
    //strrev: it will reverse the string.
    char str9[50] = "geeksforgeeks";
    printf("After reversing string is =%s \n",strrev(str9));
    
    
    //concept 9
    //strlwr: it will make all caharacters lowercase
    char str10[ ] = "GEEKSFORGEEKS IS THE BEST";
    printf("%s\n",strlwr (str10));



    //concept 10
    //strupr: converting the given string into uppercase.
    char str11[ ] = "geeksforgeeks is the best";
    printf("%s\n", strupr (str11));

}

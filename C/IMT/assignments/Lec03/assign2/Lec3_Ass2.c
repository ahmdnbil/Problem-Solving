#include <stdio.h>
void main()
{
    int local_intPassword,local_intID;
    int local_intCorrectID=1234;
    int local_intCorrectPass=7788;
    int i=0;

    printf("Please enter your ID: ");
    scanf("%d",&local_intID);

    if(local_intID==local_intCorrectID)
    {
        printf("Please enter Password: ");
        for (i=0;i<3;i++)
        {
        scanf("%d",&local_intPassword);
        if (local_intPassword==local_intCorrectPass)
        {
            printf("welcom Ahmed");
            break;
        }
        else
        {
            if(i==2)
            {
            printf("No more Tries");
            break;
            }
            printf("Try again: ");
        }
        }
    }else{
        printf("You are not registered");
    }
}
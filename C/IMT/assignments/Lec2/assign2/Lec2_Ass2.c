#include <stdio.h>
void main (void)
{
    int local_intCorrectPassword= 1234;
    int local_intID= 73546;
    int local_intEnteredPassword;
    int local_intEnteredID;
    char local_strUsername[8]="ahmdnbil";

    printf("Please, Enter your ID: ");
    scanf("%d",&local_intEnteredID);

    if(local_intID==local_intEnteredID)
    {
        printf("Password: ");
        scanf("%d",&local_intEnteredPassword);
        if(local_intEnteredPassword==local_intCorrectPassword)
            printf("the username is %s",local_strUsername);
        else
            printf("Incorrect Password");
        
    }
    else
        printf("Incorrect ID");

}
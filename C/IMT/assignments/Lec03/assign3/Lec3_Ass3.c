#include <stdio.h>
void main(void)
{
    int local_intRows;
    int local_intStarsNo=1;
    int local_intCloumnsNo;
    int local_intSpacesNo;

    printf("Please Enter the height of the pyramid: ");
    scanf("%d",&local_intRows);

    local_intCloumnsNo=(2*local_intRows)-1;
    local_intSpacesNo=local_intRows;

    for(int i=0; i<local_intRows;i++)
    {
        for(int f=0;f<local_intSpacesNo;f++)
        {
            printf(" ");
        }

        for(int j=0;j<local_intStarsNo;j++)
        {
            printf("*");
        }

        local_intStarsNo+=2;
        local_intSpacesNo--;

        if(i != local_intRows -1 )
        printf("\n");
    }
}
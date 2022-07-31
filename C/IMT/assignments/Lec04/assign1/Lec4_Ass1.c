#include <stdio.h>

int math_intMax(int A_intFirstNo,int A_intSecondNo,int A_intThirdNo,int A_intFourthNo);
int math_intMin(int A_intFirstNo,int A_intSecondNo,int A_intThirdNo,int A_intFourthNo);

void main()
{
    
int local_intx,local_inty,local_intz,local_intw;
printf("Please enter four numbers, you want to get max and min of them (ex: 1 2 3 4): ");
scanf("%d %d %d %d",&local_intx,&local_inty,&local_intz,&local_intw);
printf("the maximum: %d \n",math_intMax(local_intx,local_inty,local_intz,local_intw));
printf("the minimum: %d",math_intMin(local_intx,local_inty,local_intz,local_intw));
}

int math_intMax(int A_intFirstNo,int A_intSecondNo,int A_intThirdNo,int A_intFourthNo)
{
    int local_intMax=A_intFirstNo;
    int arr[4]={A_intFirstNo,A_intSecondNo,A_intThirdNo,A_intFourthNo};
    for(int i=0;i<4;i++)
    {
        if(arr[i]>local_intMax)
        local_intMax=arr[i];
    }
        return local_intMax;
}

int math_intMin(int A_intFirstNo,int A_intSecondNo,int A_intThirdNo,int A_intFourthNo)
{
    int local_intMin=A_intFirstNo;
    int arr[4]={A_intFirstNo,A_intSecondNo,A_intThirdNo,A_intFourthNo};
    for(int i=0;i<4;i++)
    {
        if(arr[i]<local_intMin)
        local_intMin=arr[i];
    }
        return local_intMin;

}
#include<stdio.h>

//////////////////////////////////////////////////////////
//
//Function Name:    PrintEven
//Description:      Display n even number 
//Input:            Integer
//Author:           Aaryaa Patil
//Date:             23/10/25
//
//////////////////////////////////////////////////////////
void PrintEven(int iNo)
{
    if(iNo<=0)
    {
        return;
    }

    int iCnt=1;
    int iNum=2;

    while(iCnt<=iNo)
    {
        printf("%d\n",iNum);
        iNum+=2;
        iCnt++;
    }
    
}

int main()
{
    int iValue=0;

    printf("Enter a number:");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}
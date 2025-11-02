#include<stdio.h>

//////////////////////////////////////////////////////////
//
//Function Name:    DisplayEvenFactor
//Description:      Display even factors
//Input:            Integer
//Author:           Aaryaa Patil
//Date:             23/10/25
//
//////////////////////////////////////////////////////////

void DisplayEvenFactor(int iNo)
{
    int i=0;
    int iNum=2;

    if(iNo<=0)
    {
        iNo=-iNo;
    }

    for(i=1; i<=iNo ;i++)
    {
        if((iNo%2==0) && (iNo%i==0))
        {
            printf("%d\n",iNum);
            iNum+=2;
        }
    }
}

int main()
{
    int iValue=0;

    printf("Enter a number:");
    scanf("%d",&iValue);

    DisplayEvenFactor(iValue);

    return 0;
}
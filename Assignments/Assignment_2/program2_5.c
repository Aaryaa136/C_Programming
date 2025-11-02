#include<stdio.h>
#include<stdbool.h>

//////////////////////////////////////////////////////////
//
//Function Name:    CheckEven
//Description:      check whether a number is even
//Input:            Integer
//Author:           Aaryaa Patil
//Date:             21/10/25
//
//////////////////////////////////////////////////////////


bool CheckEven(int iNo)
{
    if((iNo%2)==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue=0;
    bool bRet=false;

    printf("Enter number:");
    scanf("%d",&iValue);

    bRet=CheckEven(iValue);

    if(bRet==true)
    {
        printf("Number is even");
    }
    else
    {
        printf("Number is odd");
    }

    return 0;
}
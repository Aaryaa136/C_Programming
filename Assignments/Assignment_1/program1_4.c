#include<stdio.h>
#include<stdbool.h>

//////////////////////////////////////////////////////////
//
//Function Name:    Check
//Description:      Checks whether number is divisible by 5 
//Input:            Integer
//Output:           Boolean
//Author:           Aaryaa Patil
//Date:             20/10/25
//
//////////////////////////////////////////////////////////

bool Check(int iNo)
{
    if((iNo%5)==0)
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

    printf("Enter a number:");
    scanf("%d",&iValue);

    bRet=Check(iValue);

    if(bRet==true)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not divisible by 5");
    }

    return 0;
}
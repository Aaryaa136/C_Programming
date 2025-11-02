#include<stdio.h>
#include<stdbool.h>

//Time complexity:O(1)

//////////////////////////////////////////////////////////
//
//Function Name:    ChkGreater
//Description:      Check if number is greater or smaller then 100
//Input:            Integer
//Output:           Boolean
//Author:           Aaryaa Patil
//Date:             27/10/25
//
//////////////////////////////////////////////////////////

bool ChkGreater(int iNo)
{
    bool bAns;

    if(iNo>100)
    {
        return true;
    }
    else
    {
        return false;
    }

    return bAns;
}

int main()
{
    int iValue=0;
    bool bRet=false;

    printf("Please enter number: ");
    scanf("%d",&iValue);

    bRet=ChkGreater(iValue);

    if(bRet==true)
    {
        printf("Greater");
    }
    else
    {
        printf("Smaller");
    }

    return 0;
}


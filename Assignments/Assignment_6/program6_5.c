#include<stdio.h>
#include<stdbool.h>

//Time complexity:O(1)

//////////////////////////////////////////////////////////
//
//Function Name:    Percentage
//Description:      Calculate percentage of obtained marks 
//Input:            Integer,Integer
//Output:           Float
//Author:           Aaryaa Patil
//Date:             27/10/25
//
//////////////////////////////////////////////////////////

float Percentage(float iNo1, float iNo2)
{
    float fAns=0;

    fAns=(iNo2/iNo1)* 100;

    return fAns;
}

int main()
{
    int iValue1=0 ,iValue2=0;
    float fRet=0.0;

    printf("Please enter total marks:");
    scanf("%d",&iValue1);

    printf("Please enter obtained marks:");
    scanf("%d",&iValue2);

    fRet=Percentage(iValue1,iValue2);

    printf("Percentage is:%f",fRet);

    return 0;
}


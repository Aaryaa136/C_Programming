#include<stdio.h>
#include<stdbool.h>

//Time complexity:O(1)

//////////////////////////////////////////////////////////
//
//Function Name:    Multiply
//Description:      Multiplication of three numbers
//Input:            Integer,Integer,Integer
//Output:           Integer
//Author:           Aaryaa Patil
//Date:             27/10/25
//
//////////////////////////////////////////////////////////

int Multiply(int iNo1, int iNo2 ,int iNo3)
{
    int iAns=0;
    
    iAns=iNo1*iNo2*iNo3;

    return iAns;
}

int main()
{
    int iValue1=0 ,iValue2=0,iValue3=0;
    int iRet=0;

    printf("Please enter number: ");
    scanf("%d %d %d",&iValue1 ,&iValue2 ,&iValue3);

    iRet=Multiply(iValue1,iValue2,iValue3);

    printf("Multiplication of number is:%d",iRet);

    return 0;
}


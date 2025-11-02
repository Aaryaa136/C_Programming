#include<stdio.h>

//Time complexity:O(1)

//////////////////////////////////////////////////////////
//
//Function Name:    SqaureMeter
//Description:      Converts squarefeet into meter
//Input:            Integer
//Output:           Double
//Author:           Aaryaa Patil
//Date:             29/10/25
//
//////////////////////////////////////////////////////////

double SquareMeter(int SquareFeet)
{
    return SquareFeet*0.0929;
}

int main()
{
    int iValue=0;
    double dRet=0.0;

    printf("Enter area in square feet:");
    scanf("%d",&iValue);

    dRet=SquareMeter(iValue);

    printf("Area in square meter is:%lf",dRet);

    return 0;
}


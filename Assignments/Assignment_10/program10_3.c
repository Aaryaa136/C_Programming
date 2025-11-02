#include<stdio.h>

//Time complexity:O(1)

//////////////////////////////////////////////////////////
//
//Function Name:    kMtoMeter
//Description:      Converts kilometer into meter
//Input:            Integer
//Output:           Integer
//Author:           Aaryaa Patil
//Date:             29/10/25
//
//////////////////////////////////////////////////////////

int kMtoMeter(int iKiloMeter)
{
    int iMeter=0;
    iMeter=iKiloMeter*1000;
    return iMeter;
}

int main()
{
    int iValue=0,iRet=0;

    printf("Enter distance:");
    scanf("%d",&iValue);

    iRet=kMtoMeter(iValue);

    printf("Distance in meter is:%d",iRet);

    return 0;
}


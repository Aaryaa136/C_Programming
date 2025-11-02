#include<stdio.h>

//Time complexity:O(1)

//////////////////////////////////////////////////////////
//
//Function Name:    FhtoCs
//Description:      Convert fahrenheit into celius
//Input:            Float
//Output:           Double
//Author:           Aaryaa Patil
//Date:             29/10/25
//
//////////////////////////////////////////////////////////

double FhtoCs(float fTemp)
{
    double fCelius=0.0;
    fCelius=(fTemp-32)*(5.0/9.0);
    return fCelius;
}

int main()
{
    float fValue=0.0f;
    double dRet=0.0;

    printf("Enter Temperature in Fahrenheit:");
    scanf("%f",&fValue);

    dRet=FhtoCs(fValue);

    printf("temperature in celsius is:%lf",dRet);

    return 0;
}


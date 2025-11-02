#include<stdio.h>

//Time complexity:O(1)

//////////////////////////////////////////////////////////
//
//Function Name:    CircleArea
//Description:      Display area of circle
//Input:            Float
//Output:           Double
//Author:           Aaryaa Patil
//Date:             29/10/25
//
//////////////////////////////////////////////////////////

double CircleArea(float fRadius)
{
    double fArea=0.0f;
    fArea=3.14*fRadius*fRadius;
    return fArea;
}

int main()
{
    float fValue=0.0f;
    double dRet=0.0;

    printf("Enter radius:");
    scanf("%f",&fValue);

    dRet=CircleArea(fValue);

    printf("Area of circle is:%lf",dRet);

    return 0;
}


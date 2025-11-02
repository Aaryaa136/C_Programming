#include<stdio.h>

//Time complexity:O(1)

//////////////////////////////////////////////////////////
//
//Function Name:    RectArea
//Description:      Display area of rectangle 
//Input:            Float,Float
//Output:           Double
//Author:           Aaryaa Patil
//Date:             29/10/25
//
//////////////////////////////////////////////////////////

double RectArea(float fWidth,float fHeight)
{
    double fArea=0.0f;
    fArea=fWidth*fHeight;
    return fArea;
}

int main()
{
    float fValue1=0.0f,fValue2;
    double dRet=0.0;

    printf("Enter width:");
    scanf("%f",&fValue1);

    printf("Enter height:");
    scanf("%f",&fValue2);

    dRet=RectArea(fValue1,fValue2);

    printf("Radius of circle is:%lf",dRet);

    return 0;
}


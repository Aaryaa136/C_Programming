#include <stdio.h>

//////////////////////////////////////////////////////////
//
//Function Name:    Display
//Description:      Display pattern using recursive program  
//Author:           Aaryaa Patil
//Date:             7/12/25
//
//////////////////////////////////////////////////////////

void Display(int iNo)
{
    static int iCnt = 1;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    if (iCnt <= iNo)
    {
        printf("*\t");
        iCnt++;
        Display(iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}

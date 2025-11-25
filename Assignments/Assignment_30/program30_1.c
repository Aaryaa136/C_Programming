#include<stdio.h>

//////////////////////////////////////////////////////////
//
//Function Name:    Pattern
//Description:      Display non linear pattern
//Input:            Integer
//oUtput:           Triangle pattern
//Author:           Aaryaa Patil
//Date:             25/11/25
//
//////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(j<=i)
            {
                printf("*\t");
            }
            else
            {
                printf("#\t");
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows: ");
    scanf("%d", &iValue1);

    printf("Enter number of columns: ");
    scanf("%d", &iValue2);

    if(iValue1 != iValue2)
    {
        printf("Invalid input....\n");
        printf("Enter same number of rows and columns");
        return 0;
    }

    Pattern(iValue1, iValue2);

    return 0;
}

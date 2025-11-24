#include <stdio.h>

//////////////////////////////////////////////////////////
//
//Function Name:    Pattern
//Description:      Display non linear pattern
//Input:            Integer
//Author:           Aaryaa Patil
//Date:             23/11/25
//
//////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i, j;
    char ch = 'A';

    for (i = 1; i <= iRow; i++)
    {
        for (j = 1; j <= iCol; j++)
        {
            printf("%c\t",ch);   
        }
        printf("\n");
        ch++; 
    }
}

int main(void)
{
    int iValue1, iValue2;

    printf("Enter number of rows: ");
    scanf("%d", &iValue1);

    printf("Enter number of columns: ");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);
    return 0;
}

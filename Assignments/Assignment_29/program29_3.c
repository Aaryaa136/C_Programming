#include<stdio.h>

//////////////////////////////////////////////////////////
//
//Function Name:    Pattern
//Description:      Display non linear pattern
//Input:            Integer
//Author:           Aaryaa Patil
//Date:             24/11/25
//
//////////////////////////////////////////////////////////

void Pattern(int iRow ,int iCol)
{
    int i=0 , j=0;
    char ch='a';

    for(i=2 ; i<=iRow ; i++)
    {
        ch='a';
        for(j=1 ; j<=iCol ; j++)
        {
            
            if(i % 2 == 1)
            {
                printf("%d\t",j);
            }
            else
            {
                printf("%c\t",ch);
                ch++;
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1=0 , iValue2=0;

    printf("Enter number of rows:");
    scanf("%d",&iValue1);

    printf("Enter number of column:");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}
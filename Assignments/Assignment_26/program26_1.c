#include<stdio.h>

//////////////////////////////////////////////////////////
//
//Function Name:    Pattern
//Description:      Display  linear pattern
//Input:            Integer
//Author:           Aaryaa Patil
//Date:             22/11/25
//
//////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    char ch='A';
    
    for(ch='A' ; ch<'A'+iNo ; ch++)
    {
        printf("%c\t",ch);
    }
}

int main()
{
    int iValue=0;

    printf("Enter number:");
    scanf("%d",&iValue);

    Pattern(iValue);
    return 0;
}
#include<stdio.h>

//Time complexity:0(1)

//////////////////////////////////////////////////////////
//
//Function Name:    Number
//Description:      Display in which range number lie according the condition given
//Input:            Integer
//Author:           Aaryaa Patil
//Date:             28/10/25
//
//////////////////////////////////////////////////////////

void Number(int iNo)
{
    if(iNo<50)
    {
        printf("Smaller");
    }
    else if(iNo>100)
    {
        printf("Greater");
    }
    else
    {
        printf("Medium");
    }
}

int main()
{
    int iValue=0;

    printf("Enter number:");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}
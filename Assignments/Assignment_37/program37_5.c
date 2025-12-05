#include<stdio.h>

//////////////////////////////////////////////////////////
//
//Function Name:    StrRevX
//Description:      Inplace reverse string
//Input:            String
//Output:           String
//Author:           Aaryaa Patil
//Date:             4/12/25
//
//////////////////////////////////////////////////////////

void StrRevX(char *str)
{
    char *temp=str;

    while(*str != '\0')
    {
        str++;
    }

    while(str >= temp)
    {
        str--;
    }
    printf("\n");
}

int main()
{
    char arr[20];

    printf("Enter string:");
    scanf("%[^'\n']s",arr);

    StrRevX(arr);

    printf("Modified string is:%s",arr);
    return 0;
}
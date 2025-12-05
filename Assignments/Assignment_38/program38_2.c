#include<stdio.h>

//////////////////////////////////////////////////////////
//
//Function Name:    StrCpyX
//Description:      Remove white spaces and copy it into another string
//Input:            String
//Output:           String
//Author:           Aaryaa Patil
//Date:             4/12/25
//
//////////////////////////////////////////////////////////

void StrCpyX(char *src , char *desc)
{
    while(*src != '\0')
    {
        if(*src != ' ')
        { 
            *desc = *src;
            desc++;
        }
        src++;
    }
    *desc = '\0';
}

int main()
{
    char arr[30];
    char brr[30];

    printf("Enter string: ");
    scanf("%[^\n]s", arr);

    StrCpyX(arr, brr);

    printf("%s", brr);

    return 0;
}

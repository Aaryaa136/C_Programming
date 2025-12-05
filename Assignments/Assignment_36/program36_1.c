#include <stdio.h>

//////////////////////////////////////////////////////////
//
//Function Name:    strlwrx
//Description:      Convert upper case into lower case
//Input:            String
//Output:           String
//Author:           Aaryaa Patil
//Date:             3/12/25
//
//////////////////////////////////////////////////////////

void strlwrx(char *str)
{
    while (*str != '\0')
    {
        if (*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;  
        }
        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter string: ");
    scanf("% [^\n]s", arr);

    strlwrx(arr);

    printf("Modified string is: %s\n", arr);

    return 0;
}

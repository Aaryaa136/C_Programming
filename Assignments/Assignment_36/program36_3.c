#include <stdio.h>

//////////////////////////////////////////////////////////
//
//Function Name:    strogglex
//Description:      Convert upper to lower case and lower to upper case
//Input:            String
//Output:           String
//Author:           Aaryaa Patil
//Date:             3/12/25
//
//////////////////////////////////////////////////////////

void strogglex(char *str)
{
    while (*str != '\0')
    {
        if (*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;  
        }
        else if(*str >= 'A' && *str <= 'Z')
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
    scanf(" %[^\n]s", arr);

    strogglex(arr);

    printf("Modified string is: %s\n", arr);

    return 0;
}

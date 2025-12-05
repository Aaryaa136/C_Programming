#include <stdio.h>

//////////////////////////////////////////////////////////
//
//Function Name:    struprx
//Description:      Convert lower case into upper case
//Input:            String
//Output:           String
//Author:           Aaryaa Patil
//Date:             3/12/25
//
//////////////////////////////////////////////////////////

void struprx(char *str)
{
    while (*str != '\0')
    {
        if (*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;  
        }
        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter string: ");
    scanf(" %[^\n]s", arr);

    struprx(arr);

    printf("Modified string is: %s\n", arr);

    return 0;
}

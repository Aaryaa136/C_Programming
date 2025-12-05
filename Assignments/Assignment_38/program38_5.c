#include<stdio.h>
//////////////////////////////////////////////////////////
//
//Function Name:    StrCpyToggel
//Description:      Convert upper to lower case and lower to upper case and copy it into another string
//Input:            String
//Output:           String
//Author:           Aaryaa Patil
//Date:             4/12/25
//
//////////////////////////////////////////////////////////

void StrCpyToggle(char *src , char *desc)
{
    while(*src != '\0')
    {
        if(*src >= 'A' && *src <= 'Z')
        {
            *desc = *src + 32;   
        }
        else if(*src >= 'a' && *src <= 'z')
        {
            *desc = *src - 32;   
        }
        else 
        {
            *desc = *src;        
        }
        src++;
        desc++;
    }
    *desc = '\0';
}

int main()
{
    char arr[30];
    char brr[30];

    printf("Enter string: ");
    scanf("%[^\n]s", arr);

    StrCpyToggle(arr, brr);

    printf("%s", brr);

    return 0;
}

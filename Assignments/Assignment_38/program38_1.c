#include<stdio.h>

//////////////////////////////////////////////////////////
//
//Function Name:    StrCpyRev
//Description:      Reverse string and copy it into aother string
//Input:            String
//Output:           String
//Author:           Aaryaa Patil
//Date:             4/12/25
//
//////////////////////////////////////////////////////////

void StrCpyRev(char *src , char *desc)
{
    char *end = src;

    while (*end != '\0')
    {
        end++;
    }
    end--; 

    while (end >= src)
    {
        *desc = *end;
        desc++;
        end--;
    }

    *desc = '\0'; 

}

int main()
{
    char arr[30];
    char brr[30];

    printf("Enter string: ");
    scanf("%[^\n]s", arr);

    StrCpyRev(arr, brr);

    printf("%s", brr);

    return 0;
}

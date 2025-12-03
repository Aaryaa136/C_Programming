#include<stdio.h>

//////////////////////////////////////////////////////////
//
//Function Name:    Difference
//Description:      Difference between upper and lower case
//Input:            String
//Output:           Integer
//Author:           Aaryaa Patil
//Date:             29/11/25
//
//////////////////////////////////////////////////////////

int Difference(char *str)
{
    int iCountCapital = 0;
    int iCountSmall = 0;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')          
        {
            iCountSmall++;
        }
        else if(*str >= 'A' && *str <= 'Z')     
        {
            iCountCapital++;
        }
        str++;                                 
    }

    return iCountSmall - iCountCapital;
}

int main()
{
    char arr[20] = {'\0'};
    int iRet = 0;

    printf("Enter string:\n");
    scanf("%[^\n]s", arr);

    iRet = Difference(arr);

    printf("Difference of small and capital characters is: %d\n", iRet);
    return 0;
}

#include<stdio.h>

//////////////////////////////////////////////////////////
//
//Function Name:    CountCapital
//Description:      Count number of capital letters
//Input:            String
//Output:           Integer
//Author:           Aaryaa Patil
//Date:             29/11/25
//
//////////////////////////////////////////////////////////

int CountCapital(char *str)
{
    int iCount=0;

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            iCount++;
        }
        str++;
    }

    return iCount;
}

int main()
{
    char arr[20]={'\0'};
    int iRet=0;

    printf("Enter string:\n");
    scanf("%[^'\n]s",arr);

    iRet=CountCapital(arr);

    printf("Count of capital characters is:%d",iRet);
    return 0;
}
#include<stdio.h>

//////////////////////////////////////////////////////////
//
//Function Name:    CountSmall
//Description:      Count number of lower case 
//Input:            String
//Output:           Integer
//Author:           Aaryaa Patil
//Date:             29/11/25
//
//////////////////////////////////////////////////////////

int CountSmall(char *str)
{
    int iCount=0;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
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

    iRet=CountSmall(arr);

    printf("Count of small characters is:%d",iRet);
    return 0;
}
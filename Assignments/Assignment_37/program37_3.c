#include<stdio.h>

//////////////////////////////////////////////////////////
//
//Function Name:    FirstChar
//Description:      Find index of first occured character mentioned
//Input:            String
//Output:           Integer
//Author:           Aaryaa Patil
//Date:             4/12/25
//
//////////////////////////////////////////////////////////

int  FirstChar(char *str , char ch)
{
    int iIndex=0;
    int pos=0;

    while(*str !='\0')
    {
        if(*str == ch)
        {
            pos=iIndex;
            break;
        }
        str++;
        iIndex++;
    }
    return pos;
}

int main()
{
    char arr[20];
    char cValue='\0';
    int iRet =0;

    printf("Enter string:");
    scanf("%[^'\n']s",arr);

    printf("Enter the character:");
    scanf(" %c",&cValue);

    iRet=FirstChar(arr,cValue);

    printf("Character location is:%d",iRet);

    return 0;
}
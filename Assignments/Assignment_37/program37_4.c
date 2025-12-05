#include<stdio.h>

//////////////////////////////////////////////////////////
//
//Function Name:    LastChar
//Description:      Return index of last appearance character mentioned by user  
//Input:            String
//Output:           Integer
//Author:           Aaryaa Patil
//Date:             4/12/25
//
//////////////////////////////////////////////////////////

int  LastChar(char *str , char ch)
{
    int iIndex=0;
    int pos=0;

    while(*str !='\0')
    {
        if(*str == ch)
        {
            pos=iIndex;
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

    iRet=LastChar(arr,cValue);

    printf("Character last location is:%d",iRet);

    return 0;
}
#include<stdio.h>
#include<stdbool.h>

//////////////////////////////////////////////////////////
//
//Function Name:    ChkVowel
//Description:      Check whether word contains vowel or not
//Input:            String
//Output:           Boolean
//Author:           Aaryaa Patil
//Date:             29/11/25
//
//////////////////////////////////////////////////////////

bool ChkVowel(char *str)
{
    
    while(*str != '\0')
    {
        if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' || *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U' )          
        {
           return true;
        }
        str++;  
    }
    return false;
}

int main()
{
    char arr[20] = {'\0'};
    bool bRet=false;

    printf("Enter string:\n");
    scanf("%[^\n]s", arr);

    bRet = ChkVowel(arr);

    if(bRet == true)
    {
        printf("Contains vowel");
    }
    else
    {
        printf("There is no vowel");
    }

    return 0;
}

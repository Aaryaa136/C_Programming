#include<stdio.h>

//////////////////////////////////////////////////////////
//
//Function Name:    Reverse
//Description:      Reverse the string
//Input:            Character
//Output:           String
//Author:           Aaryaa Patil
//Date:             29/11/25
//
//////////////////////////////////////////////////////////

void Reverse(char *str)
{
    char *start=str;
    char *end=str;

    char temp='\0';

    while(*end != '\0')
    {
        end++;
    }

    end--;
                    
    while(start < end)
    {
        temp=*start;
        *start=*end;
        *end=temp;
        start++;
        end--;
    }
    
    printf("\n");   
}   

int main()
{
    char Arr[20]={'\0'};

    printf("Enter source string:");
    scanf("%[^'\n']s",Arr);

    Reverse(Arr);

    printf("Updates string is:%s\n",Arr);

    return 0;
}
             
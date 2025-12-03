#include<stdio.h>

//////////////////////////////////////////////////////////
//
//Function Name:    DisplaySchedule
//Description:      Display exam time according to divison entered
//Input:            Character
//Author:           Aaryaa Patil
//Date:             28/11/25
//
//////////////////////////////////////////////////////////

void DisplaySchedule(char chDiv)
{
    if(chDiv == 'a' || chDiv == 'A')
    {
        printf("Your exam at 7 AM");
    }
    else if(chDiv == 'b' || chDiv == 'B')
    {
        printf("Your exam at 8:30 AM");   
    }
    else if(chDiv == 'c' || chDiv == 'C')
    {
        printf("Your exam at 9:20 AM");   
    }
    else if(chDiv == 'd' || chDiv == 'D')
    {
        printf("Your exam at 10:30 AM");   
    }
    else
    {
        printf("Please enter valid Division");
    }
}

int main()
{
    char cValue='\0';

    printf("Enter your division:");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return 0;
} 
#include<stdio.h>

//////////////////////////////////////////////////////////
//
//Function Name:    Display
//Description:      If character is upper display that value and rest till Z if lower display in reverse order(A)
//Input:            Character
//Output:           Character
//Author:           Aaryaa Patil
//Date:             4/12/25
//
//////////////////////////////////////////////////////////

void Display(char ch)
{
    char c='\0';
    if(ch >= 'A' && ch <= 'Z')
    {
        for(c=ch ; c<= 'Z' ; c++)
        {
            printf("%c\t",c);
        }
        printf("\n");
    }

    else if(ch >= 'a' && ch <= 'z')
    {
        for(c=ch ; c>= 'a' ; c--)
        {
            printf("%c\t",c);
        }
        printf("\n");
    }
    
}

int main()
{
    char cValue='\0';

    printf("Enter character:");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}
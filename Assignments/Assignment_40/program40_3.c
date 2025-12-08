#include <stdio.h> 

//////////////////////////////////////////////////////////
//
//Function Name:    Display
//Description:      Display pattern using recursive program  in reverse order
//Output:           Integer
//Author:           Aaryaa Patil
//Date:             7/12/25
//
//////////////////////////////////////////////////////////


int main() 
{
    int iValue = 0; 
     
    printf("Enter number of elements: "); 
    scanf("%d", &iValue);

    Display(iValue); 

    return 0; 
}



/*
void Display(int iNo) {
    static int iCnt;       // Will retain value between calls
    static int initialized = 0; // Flag to check first call

    if (!initialized) {    // First call only
        if (iNo < 0) {
            iNo = -iNo;
        }
        iCnt = iNo;        // Initialize once
        initialized = 1;
    }

    if (iCnt > 0) {
        printf("%d\t", iCnt);
        iCnt--;
        Display(iNo);      // Recursive call
    }
}
*/
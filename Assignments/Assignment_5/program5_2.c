#include<stdio.h>

//////////////////////////////////////////////////////////
//
//Function Name:    FindMax
//Description:      Find maximum among two numbers
//Input:            Integer,Integer
//Output:           Integer
//Author:           Aaryaa Patil
//Date:             27/10/25
//
//////////////////////////////////////////////////////////

int FindMax(int a,int b)
{
    int iAns=0;

    if(a>b)
    {
        iAns=a;
    }    
    else
    {
        iAns=b;
    }

    return iAns;
}

int main()
{
    int num1,num2;
    int result;

    printf("Enter two numbers:");
    scanf("%d %d",&num1 ,&num2);

    result=FindMax(num1,num2);

    printf("Maximum is:%d\n",result);

    return 0; 
}
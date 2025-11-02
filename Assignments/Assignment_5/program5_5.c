#include<stdio.h>

//////////////////////////////////////////////////////////
//
//Function Name:    FindMax
//Description:      Find largest among three numbers
//Input:            Integer,Integer,Integer
//Output:           Integer
//Author:           Aaryaa Patil
//Date:             27/10/25
//
//////////////////////////////////////////////////////////

int FindLargest(int x,int y,int z)
{
    int iAns=0;

    if(x>y && x>z)
    {
        iAns=x;
    }
    else if(y>x && y>z)
    {
        iAns=y;
    }
    else
    {
        iAns=z;
    }

    return iAns;
}

int main()
{
    int a,b,c;
    int result;

    printf("Enter two numbers:");
    scanf("%d %d %d",&a ,&b ,&c);

    result=FindLargest(a,b,c);
    
    printf("Largest number is:%d\n",result);

    return 0; 
}
#include <stdio.h>

void Display(int iNo)
{
    int icnt = iNo;
    while(iNo > 0)
    {
         printf("*");
         icnt --;
    }
}

int main()
{
    int iValue = 0;
    printf("Enter a Number");
    scanf("%d",&iValue);

    Display(iValue);
    
    return 0;
}
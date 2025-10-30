#include<stdio.h>
#include <stdbool.h>

bool CheckEven(int ino)
{
    if((ino % 2) == 0 )
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int ivalue = 0;
    
    printf("Enter The Number : ");
    scanf("%d",&ivalue);

    int iRet = 0;
    iRet = CheckEven(ivalue);

    if (iRet == true)
    {
        printf("The number is Even");
    }
    else
    {
        printf("The Number is Odd");
    }
    return 0;
}
#include<stdio.h>
#include <stdbool.h>

bool Check(int ino)
{
    if((ino % 5) == 0)
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
    int value = 0;
    bool bRet =false;

    printf("Enter the number");
    scanf("%d",&value);

    bRet = Check(value);

    if (bRet == true)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not Divisible by 5");
    }
    return 0;
}

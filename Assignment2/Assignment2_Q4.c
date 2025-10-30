#include <stdio.h>

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;               // Loop counter

    // Updater will be iCnt++
    for(iCnt = 0; iCnt < iFrequency; iCnt++)
    {
        printf("%d\n", iNo);    // Print the number
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    printf("Enter frequency: ");
    scanf("%d", &iCount);

    Display(iValue, iCount);    // Call function with number and frequency

    return 0;
}

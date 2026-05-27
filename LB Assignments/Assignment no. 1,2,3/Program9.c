#include <stdio.h>

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;  

    
    if(iFrequency < 0)
    {
        iFrequency = -iFrequency;
    }

    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("%d ", iNo);
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter first number: ");
    scanf("%d", &iValue1);

    printf("Enter second number (Frequency): ");
    scanf("%d", &iValue2);

    Display(iValue1, iValue2);

    return 0;
}
#include <stdio.h>

typedef int BOOL;
#define true 1
#define false 0

BOOL Check(int No)
{
   if(No%5 ==0)
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
   
int iValue =0;    
BOOL iRet = false;

printf("Enter your number\n");
scanf("%d", &iValue);

iRet = Check(iValue);

if(iRet == true)
{
    printf("Number is divisible by 5");
}

else
{
    printf("Number is not divisible by 5");
}


    return 0;
}
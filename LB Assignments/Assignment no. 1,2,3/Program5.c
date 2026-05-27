#include <stdio.h>

 void Accept(int No)
    {
      for(int iCnt =1; iCnt <= No; iCnt++)
      {
           printf("*\n");
      }
        
    }
int main()
{
   int iValue =0;

   printf("Enter your number\n");
   scanf("%d",&iValue);


   Accept(iValue);


    return 0;
}
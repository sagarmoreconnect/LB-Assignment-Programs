#include <stdio.h>

void Display(int iNo1,int iNo2)              //764
{

   for(int iCnt=iNo1; iCnt <= iNo2; iCnt++ )
   {

      if(iCnt%2==0){
        printf("%d ", iCnt);
      }
   }

}


int main()
{

int iValue1 =0;
int iValue2=0;

printf("Enter first number\n");
scanf("%d", &iValue1);

printf("Enter second number\n");
scanf("%d", &iValue2);

Display(iValue1, iValue2);



return 0;
}
#include <stdio.h>

void Display(int iNo1,int iNo2)              //764
{
    if(iNo1<0)
    {
     iNo1 = -iNo1;

    }
    int iSum =0;

   for(int iCnt=iNo1; iCnt <= iNo2; iCnt++ )
   {

       iSum = iSum +iCnt;
      
   }  printf("%d",iSum);

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
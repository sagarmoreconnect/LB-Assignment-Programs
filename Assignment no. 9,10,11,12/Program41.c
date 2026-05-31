#include <stdio.h>

void Display(int iNo)              //764
{

int iDigit =0;
int iCount =0;

while(iNo!=0)
{
   iDigit = iNo%10;
   iNo = iNo/10;

   if(iDigit >=3 && iDigit <=7)
   {
      iCount++;
   }

}  printf("%d\n" , iCount);
}


int main()
{

int iValue =0;

printf("Enter number\n");
scanf("%d", &iValue);

Display(iValue);



return 0;
}
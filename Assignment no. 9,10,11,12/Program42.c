#include <stdio.h>

void Display(int iNo)              //764
{

int iDigit =0;
int iCount =0;
int iMulti =1;

while(iNo!=0)
{
   iDigit = iNo%10;
   iNo = iNo/10;

   iMulti= iMulti*iDigit;

}  printf("%d\n" , iMulti);
}


int main()
{

int iValue =0;

printf("Enter number\n");
scanf("%d", &iValue);

Display(iValue);



return 0;
}
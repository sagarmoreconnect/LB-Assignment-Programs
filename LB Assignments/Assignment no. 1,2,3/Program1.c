#include<stdio.h>

int Divide(int No1, int No2)
{

    if(No2 ==0)
    {
        return -1;
    }
    
    int Ans =0;

    Ans = No1 /No2;
    return Ans;

}



int main()
{
  int iRet =0;
  int iValue1 =15;
  int iValue2 =5;

  iRet = Divide(iValue1, iValue2);

  printf("%d", iRet);


    return 0;
}




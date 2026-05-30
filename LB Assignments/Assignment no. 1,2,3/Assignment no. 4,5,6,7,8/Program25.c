#include <stdio.h>

void Display(int iNo)
{

   if(iNo<50)
   {
       printf("Small");
   }
   else if(iNo>50 && iNo<100)
   {
       printf("Medium");
   }
   else 
   {
       printf("Large");
   }

}

int main()
{

    int iValue;
    printf("Enter number\n");
    scanf("%d", & iValue);

    Display(iValue);

    return 0;
}


// Time Complexity = o(1)
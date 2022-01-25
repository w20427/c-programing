//2.31: WRITE A PROGRAM TO CALCULATE THE SUM OG MAXIMUM OF 10 POSITIVE NUMBERS IF THE USER DOES NOT ENTER A NEGATIVE NUMBER IN BETWEEN . IF THE USER ENTERS A NEGATIVE NUMBER, THE SUM IS CALCULATED TILL THE POSITIVE NUMBER ENTERED.
#include <stdio.h>

int main()
{
  int k;
  double num, result=0.0;
  printf("Input the numbers \n\n");
  for(k=1;k<=10;++k)
  {
      printf("Enter num %d:",k);
      scanf("%lf",&num);
      //loop is terminated if user enters negative number
      if(num<0.0)
      {
          break;
      }
      result+=num; //result= result+num
  }
  printf("\n Result=%.2lf",result);
    return 0;
}
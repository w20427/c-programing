//2.10 EXAMPLE TO DEMONSTRATE HOW AN INSIDE LOOP TERMINATE USING BREAK STATEMENT.
#include <stdio.h>

int main() {
   for(int x=1;x<=2;x++)
   {
       printf("\n x=%d",x);
       for(int y=1; y<=3;y++)
       {
           printf("\n y=%d",y);
       break;
       }
   }
    return 0;
}
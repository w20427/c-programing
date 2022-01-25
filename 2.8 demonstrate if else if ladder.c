//EXAMPLE TO DEMONSTRATE IF-ELSE-IF LADDER.
#include <stdio.h>
int main(){
    int X=100,Y=200,Z=50;
    if(X>Y)
    {
        Z=X+Y;
        printf("Result 1=%d",Z);
        if(Y<Z)
        {
            X=Y+Z;
             printf("Result 2=%d",X);
            
        }
        else
        {
            Y=X+Z;
             printf("Result 3=%d",Y);
        }
    }
    else if(Y<Z)
    {
        X=Y+Z;
         printf("Result 4=%d",X);
    }
    else
    {
      Y=X+Z;
       printf("Result 5=%d",Y);
    }
}
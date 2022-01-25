//2.29 WRITE A PROGRAM TO INPUT THREE NUMBERS AND PRINT THE GREATEST NUMBER
#include <stdio.h>
int main(){
    int x,y,z;
    printf("Input 3 Numbers:\n");
    scanf("%d%d%d",&x,&y,&z);
    if(x>y)
    {
        if(x>z)
        {
        printf("1st x Number is greatest");
        }
        else
        {
            printf("3rd number Z is greatest");
        }
        
    }
    else if(y>z)
    {
        printf("2nd number y is greatest");
    }
    else
    {
       printf("3rd number z is greatest");
    }
}
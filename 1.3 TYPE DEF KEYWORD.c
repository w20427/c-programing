// PROGRAM TO DEMONSTRATE THE WORKING OF typedef KEYWORD
#include <stdio.h>
int main()
{
    typedef char byte;
    byte a;
    printf("Enter a character:\n");
    scanf("%c",&a);
    printf("The character is:%c\n",a);
    return 0;
}

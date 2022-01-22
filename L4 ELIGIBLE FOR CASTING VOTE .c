/*QUESTION 04: WRITE A PROGRAM TO CHECK WHETHER OR NOT YOU ARE ELIGIBLE FOR CASTING VOTE?*/
#include <stdio.h>
int main (){
int age;
printf("Enter your age:\n");
scanf("%d",&age);
if(age>=18)
{
printf("You are eligible for voting.\n");
}
else
{
printf("You are not eligible for voting.\n");
}
return 0;
}
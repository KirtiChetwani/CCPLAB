/* PROGRAM TO PRINT THE DIGIT AT ONES PLACE OF A NUMBER */
#include<stdio.h>
int main()
{
   int num,digit;
   clrscr();
   printf("Enter a number:");
   scanf("%d",&num);
   digit=num%10;
   printf("Digits at one's place : %d",digit);
   getch();
   return 0;
}
/* PROGRAM TO PRINT THE DIGIT AT TEN'S PLACE OF A NUMBER */
#include<stdio.h>
int main()
{
  int num,digit,rem;
  clrscr();
  printf("Enter a number:");
  scanf("%d",&num);
  rem = num%100;
  digit = rem/10;
  printf("Digit at ten's place is %d",digit);
  getch();
  return 0;
}

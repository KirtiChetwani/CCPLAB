/* PROGRAM TO ENTER A NUMBER AND CALCULATE SUM OF ITS DIGITS */
#include<stdio.h>
int main()
{
 int n = 0;
 clrscr();
 printf("Enter a number");
 scanf("%d",&n);
 find_sum(n);
 getch();
 return 0;
}
int find_sum(int n)
{
 int digit,sum,num;
 num = n;
 sum = 0;
 digit = 0;
 while(n!=0)
 {
  digit = n%10;
  sum = sum + digit;
  n = n/10;
 }
 printf("The sum of digits of %d is %d",num,sum);
 return 0;
}
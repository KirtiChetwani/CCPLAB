/* PROGRAM TO CALCULATE SUM OF SQUARES OF FIRST N ODD NUMBERS */
#include<stdio.h>
int main()
{
   int n;
   clrscr();
   printf("Enter a number \n");
   scanf("%d",&n);
   sum_sqaure(n);
   getch();
   return 0;
}
int sum_sqaure(int n)
{
 int i,sum=0;
 for(i = 1; i<= n; i++)
   sum+=(2*i-1)*(2*i-1);
 printf("The sum of square of first %d odd numbers is %d",n,sum);
 return 0;
}

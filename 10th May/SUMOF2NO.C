/*PROGRAM TO FIND SUM OF TWO NUMBERS */
#include<stdio.h>
int main()
{

  int a,b,sum=0;
  clrscr();
  printf("\n Enter two no:");
  scanf("%d %d",&a,&b);
  sum=a+b;
  printf("The sum of the two numbers = %d",sum);
  getch();
  return 0;

}
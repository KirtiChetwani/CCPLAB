/* PROGRAM TO FIND LARGER OF THE TWO NUMBERS */
#include<stdio.h>
int main()
{
  int a,b;
  clrscr();
  printf("Enter 2 numbers\n");
  scanf("%d %d",&a,&b);
  if(a>b)
   printf("%d is greater than %d",a,b);
  else
   printf("%d is greater than %d",b,a);
   getch();
   return 0;
}


/* PROGRAM TO FIND THE SUM OF N NATURAL NUMBERS USING FUNCTIONS */
#include<stdio.h>
int sum(int n)
{
  int i;
  int add= 0;
  for(i=1; i<=n ; i++)
  {
   add=add+i;
  }
  return add;
}
 int main()
 {
  int n,ans;
  clrscr();
  printf("Enter a number \n");
  scanf("%d",&n);
  ans = sum(n);
  printf("Sum of %d natural numbers is = %d",n,ans);
  getch();
 }

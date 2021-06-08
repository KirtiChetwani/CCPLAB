/* PROGRAM TO CALCULATE SQUARE OF ANY NUMBER USING FUNCTIONS */
#include<stdio.h>
int main()
{
  int num , ans;
  clrscr();
  printf("Enter a number");
  scanf("%d",&num);
  ans = find_square(num);
  printf("Square of %d is %d",num,ans);
  getch();
  return 0;
}
int find_square(int num)
{
 return(num*num);
}
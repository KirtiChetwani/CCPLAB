/* Sum of first 10 natural nos */
#include<stdio.h>
int main()
{
  int i , sum = 0;
  printf("The first 10 natural numbers are ");
  for(i = 1; i <=10 ;i++)
  {
    sum =sum + i;
    printf("%d" , i);
  }
  printf("\nThe sum of the first 10 natural numbers is %d",sum);
  getch();
  return 0;
}

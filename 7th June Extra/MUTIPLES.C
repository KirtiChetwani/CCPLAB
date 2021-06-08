/* PROGRAM TO PRINT MULTIPLES OF N FROM 1 TO 100*/
#include<stdio.h>
int main()
{
  int n;
  clrscr();
  printf("Enter a number");
  scanf("%d",&n);
  find_mutiples(n);
  getch();
  return 0;
}
int find_mutiples(int n)
{
  int ans = n;
  int i =2;
  printf("\n The mutiples of %d are :",n);
  while(ans<=100)
  {
    printf("\n %d",ans);
    ans = n * i;
    i = i+1;
  }
  return 0;
}


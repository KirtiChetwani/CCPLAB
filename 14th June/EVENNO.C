/* PROGRAM TO PRINT EVEN NUMBERS FROM M TO N */
#include<stdio.h>
int main()
{
  int m,n,i;
  clrscr();
  printf("Enter two numbers \n");
  scanf("%d %d",&m,&n);
  for(i=m;i<=n;i++)
  {
    if(i%2==0)
    {
     printf("%d \n",i);
    }
  }
  getch();
  return 0;
}
/* PROGRAM TO CHECK IF PRIME OR NOT */
#include<stdio.h>
int main()
{
  int n,i,flag=0;
  clrscr();
  printf("Enter a positive integer:");
  scanf("%d",&n);

  for(i=2;i<=n/2;i++)
  {
   if (n % i == 0)
   {
    flag = 1;
    break;
   }
  }

 if (n ==1)
 {
   printf("1 is neither prime nor composite");
 }
  else
  {
   if(flag == 0)
      printf("%d is a prime number",n);
    else
     printf("%dis not a prime number",n);
    }

    getch();
    return 0;
  }

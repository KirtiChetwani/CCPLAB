/* FIND THE SMALLEST OF THREE NUMBERS */
#include<stdio.h>
int main()
{
int n1 , n2 , n3;
clrscr();
printf("Enter three numbers");
scanf("%d %d %d",&n1,&n2,&n3);
small_num(n1,n2,n3);
getch();
return 0;
}

int small_num(int n1, int n2, int n3)
{
if(n1<n2 && n1<n3)
{
  printf("%d is the smallest",n1);
}
else if(n2<n3)
{
  printf("%d is the smallest",n2);
}
else
{
 printf("%d is the smallest",n3);
}

}
/* PROGRAM TO CHECK EQUALITY OF TWO NUMBERS */
#include<stdio.h>
int main()
{
 int a,b;
 clrscr();
 printf("Input the values for Number1 and Number2 :");
 scanf("%d %d",&a,&b);
 if(a==b)
   printf("Number1 and Number2 are equal\n");
 else
   printf("Number1 and Number2 are not equal\n");
 getch();

}
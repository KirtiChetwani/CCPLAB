/*program to print ascii value of a charater */
#include<stdio.h>
int main()
{
   char c;
   clrscr();
   printf("Enter a character:");
   scanf("%c",&c);
   printf("ASCII value of %c = %d", c, c);
   getch();
   return 0 ;
}
/*PROGRAM TO READ A CHARACTER IN UPPERCASE AND THEN PRINT IT IN LOWERCASE */
#include<stdio.h>
#include<conio.h>
int main()
{
  char upperchar , lowerchar ;
  int ascii;
  clrscr();
  printf("Enter an uppercase character: ");
  scanf("%c",&upperchar);
  ascii = upperchar ;
  lowerchar = ascii + 32;
  printf("\n Its lowercase character is %c",lowerchar);
  getch();
  return 0;
}
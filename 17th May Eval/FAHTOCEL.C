/* program to convert degree fahrenheit to degree celcius */
#include<stdio.h>

int main()
{
  float celcius , fahrenheit ;
  clrscr();
  printf("Enter temperature in Fahrenheit : ");
  scanf("%f" ,&fahrenheit );
  celcius = (fahrenheit - 32) * 5 / 9 ;
  printf("%.2f Fahreneheit = %.2f Celcius " , fahrenheit , celcius);
  getch();
  return 0;
}
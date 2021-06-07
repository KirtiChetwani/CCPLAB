/* PROGAM TO MUTIPLY TWO FLOATING POINT NUMBERS */
#include<stdio.h>
int main()
{
   double a,b,product =1;
   clrscr();
   printf("Enter two numbers");
   scanf("%lf %lf", &a ,&b);
    product = a*b;
    printf("Product = %lf" , product);
    getch();
    return 0;

}


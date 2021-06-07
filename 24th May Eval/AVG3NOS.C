/* FIND AVG OF 3 NUMBERS USING FUNCTIONS */
#include<stdio.h>
#include<conio.h>

double avg(double, double, double);
int main()
{
   double a,b,c,ans=0;
   clrscr();
   printf("Enter three numbers :");
   scanf("%lf %lf %lf",&a ,&b ,&c);
   ans = avg(a,b,c);
   printf("Average of 3 nos = %.2lf", ans);
   getch();
   return 0;

}
double avg(double a, double b, double c)
{
 double average;
 average = (a+b+c)/3.0;
 return average;
 }
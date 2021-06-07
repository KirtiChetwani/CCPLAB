/* C PROGRAM TO FIND AREA OF TRAINGLE GIVEN ITS SIDES AS ITS INPUT USING FUNCTIONS */
#include <stdio.h>
#include <math.h>

double trianglearea(double, double, double);
int main()
{
  double a,b,c,area;
  clrscr();
  printf("Enter length of side of triangle\n");
  scanf("%lf %lf %lf", &a, &b, &c);
  area = trianglearea(a, b, c);
  printf("Area of triangle = %.2lf\n",area);
  getch();
  return 0;
}

double trianglearea(double a, double b, double c)
{
  double s , ans ;
  s = (a+b+c)/2;
  ans = sqrt(s*(s-a)*(s-b)*(s-c));
  return ans;
}

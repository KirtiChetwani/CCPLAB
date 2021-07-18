/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<stdio.h>
int operations(int *, int *, int *, int *, int*, float*, int *);
int main()
{
int a,b;
int add,sub,multiplication,rem;
float division;
printf("Enter two operands: ");
scanf("%d %d",&a,&b);
operations(&a, &b, &add, &sub, &multiplication,&division, &rem);
printf("Addition :%d\n",add);
printf("Subtraction :%d\n",sub);
printf("Division :%0.2f\n",division);
printf("Multiplication :%d\n",multiplication);
printf("Remainder :%d\n",rem);
return 0;
}
int operations(int *a, int *b, int *add, int *sub, int *multiplication, float *division, int *rem)
{
 *add=*a+*b;
 *sub=*a-*b;
 *multiplication=*a**b;
 *division=(float)(*a)/(*b);
 *rem=(*a)%(*b);
 return 0;
}
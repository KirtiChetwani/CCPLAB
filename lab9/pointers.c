/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
void swap(int *,int *);
int main()
{
 int num1,num2;
 printf("Enter value of num1: ");
 scanf("%d",&num1); 
 printf("Enter value of num2: "); 
 scanf("%d",&num2); 
 printf("The numbers before swapping are %d and %d\n",num1,num2); 
 swap(&num1,&num2); 
 printf("The numbers before swapping are %d and %d\n",num1,num2);
 return 0;
}
void swap(int *x, int *y) 
{
 int t;
 t = *x; 
 *x = *y; 
 *y = t; 
}

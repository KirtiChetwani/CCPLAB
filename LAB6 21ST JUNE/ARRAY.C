/* PROGRAM TO INTERCHANGE LARGEST AND SMALLEST NUMBER IN THE GIVEN ARRAY */
#include<stdio.h>
int main()
{
 int a[20],b[20],n,small=0,large=0,spos,lpos,i,temp;
 clrscr();
 printf("Enter the number of terms \n");
 scanf("%d", &n);
 printf("Enter the terms: \n");
 for(i=1;i<=n;i++)
 {
   scanf("%d",&a[i]);
   b[i]=a[i];
 }
 small=a[1];
 for(i=1;i<=n;i++)
 {
   if(a[i]<=small)
   {
     small=a[i];
     spos=i;
   }
   if(large<=a[i])
   {
    large=a[i];
    lpos=i;
   }
 }
 temp=a[spos];
 a[spos]=a[lpos];
 a[lpos]=temp;

 printf("The Array entered by the user is: \n");
 for(i=1;i<=n;i++)
  printf("%d\t",b[i]);

 printf("\n The Array after interchaning the smallest and largest element :\n");
 for(i=1;i<=n;i++)
  printf("%d\t",a[i]);

 getch();
 return 0;
}

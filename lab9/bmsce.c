#include<stdio.h>
#include<conio.h>
void main()
{
 FILE * fp;
 char input[100];
 int i;
 fp=fopen("C:\\Users\\Rajiv\\Desktop\\bmsce.txt","w");
 printf("\nEnter the content to be inputted into the file: ");
 gets(input);
 fprintf(fp,"%s",input);
 fp=fopen("C:\\Users\\Rajiv\\Desktop\\bmsce.txt","r");
 printf("Data read:");
 fscanf(fp,"%s",input);
 printf("\n %s",input);
 fclose(fp);
}
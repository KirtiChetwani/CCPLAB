/* PROGRAM TO CONVERT HOURS INTO MINUTES */
#include<stdio.h>
int convert_hours(int hours,int minutes)
{
int min;
min=hours*60;
min=min+minutes;
printf("%d hours:%d minutes=%d minutes",hours,minutes,min);
return 0;
}

int main()
{
int hours,minutes,ans;
clrscr();
printf("Enter hours and minutes \n");
printf("hours:minutes = ");
scanf("%d:%d",&hours,&minutes);
convert_hours(hours,minutes);
getch();
return 0;
}

#include <stdio.h>

int main() 
{
    char str1[100],str2[100];
    int i;
    printf("Enter string 1\n");
    scanf("%s",str1);
    printf("Enter string 2\n");
    scanf("%s",str2);
    for(i=0;str1[i]!='\0';i++)
    {
        str2[i] = str1[i];
    }
    str2[i]='\0';
    printf("Copied String(str2) is %s and its length is %d",str2,i);
    return 0;
}
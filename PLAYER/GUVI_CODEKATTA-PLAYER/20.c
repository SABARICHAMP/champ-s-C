#include <stdio.h>
int main()
{
char a[20];
int i;
printf("Enter the string:");
scanf("%s",a);
for(int i=0;a[i]!='\0';i++)
{
printf("%c",a[i]+3);
}
return 0;
}

#include <stdio.h>
#include <string.h>
int main(void) 
{
char str[15];
int num,length;
scanf("%s",str);
scanf("%d",&num);
int l=strlen(str);
for(int i=0;i<num;i++)
{
length=l-1;
printf("%c",str[length]);
l--;
}
return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
char string[20];
int i,length;
scanf("%s",string);
length=strlen(string);
i=length/2;
if(length%2==0)
{
string[i]='*';
string[i-1]='*';
printf("%s",string);
}
else
{
string[i]='*';
printf("%s",string);
}
return 0;
}

#include <stdio.h>
int main()
{
char s[20];
int flag=0;
printf("Enter the string:");
scanf("%s",s);
for(int i=0;s[i]!='\0';i++)
{
if(s[i]>='0' && s[i]<='9')
{
flag=1;
}
else
{
flag=0;
break;
}
}
if(flag==1)
{
printf("yes");
}
else
{
printf("no");
}
return 0;
}

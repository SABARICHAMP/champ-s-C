#include <stdio.h>
int main()
{
char s1[20],s2[20];
int count=0;
scanf("%s %s",s1,s2);
for(int i=0;s1[i]!='\0';i++)
{
if(s1[i]==s2[i])
{
count=0;	
}
else
{
count++;
}
}
if(count==1)
{
printf("yes");
}
else
{
printf("no");
}
return 0;
}

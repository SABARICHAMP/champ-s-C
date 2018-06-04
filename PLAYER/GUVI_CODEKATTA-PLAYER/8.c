#include <stdio.h>
int main()
{
char s[50];	
int j;
scanf("%[^\n]s",s); 
for(j=0;s[j]!='\0';j++)
{
if(j==0)
{
if((s[j]>='a'&&s[j]<='z'))
s[j]=s[j]-32; 
continue; 
}
if(s[j]==' ')
{
++j;
if(s[j]>='a &&s[j]<='z')
{
s[j]=s[j]-32; 
continue; 
}
}
else
{
if(s[j]>='A'&&s[j]<='Z')
{
s[j]=s[j]+32; 
continue; 
}}}
printf("%s",s);
return 0;
}

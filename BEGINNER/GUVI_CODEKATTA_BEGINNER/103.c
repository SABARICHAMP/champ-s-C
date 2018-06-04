#include <stdio.h>
int main()
{
char string[50];	
int i;
scanf("%[^\n]s",string); 
for(i=0; string[i]!='\0'; i++)
{
if(i==0)
{
if((string[i]>='a'&&string[i]<='z'))
string[i]=string[i]-32; 
continue; 
}
if(string[i]==' ')
{
++i;
if(string[i]>='a' && string[i]<='z')
{
string[i]=string[i]-32; 
continue; 
}}}
printf("%s",string);
return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
char s[25];
scanf("%s",s);
int count=1,maxi=0;
char maxChar=0;
int length;
length=strlen(s);
for(int i=1;i<length;i++)
{ 
 if(s[i]==s[i-1])
{
count++;
}
else 
{
if(count>maxi){ 
maxi=count;
maxChar=s[i-1];
}
count = 1; 
 }}
if(count>maxi){
maxi=count; 
maxChar=s[length-1];
}
 printf("%c",maxChar);
 return 0;
}

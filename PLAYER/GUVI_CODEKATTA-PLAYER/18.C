#include<stdio.h>
#include<string.h>
int main() 
{
char a[10];
char s[]="kabali";
int i,j,temp=0,n,n1,length,k=0,l,count=0;
n=strlen(s);
scanf("%d",&n1);
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(s[i]>s[j])
{
temp=s[i];
s[i]=s[j];
s[j]=temp;
}}}
while(k<n1)
{
scanf("%s",a);
length=strlen(a);
if(n==l)
{
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}}}
if(strcmp(s,a)==0)
{
count++;
}
}
k++;
}
printf("%d",count);
return 0;
}

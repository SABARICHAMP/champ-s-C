#include <stdio.h>
int main(void) { 
int a[20],t=0,n,k;
scanf("%d %d",&n,&k);
for(int i=0;i<n;i++)
{
scanf("%d ",&a[i]);
}
for(int i=0;i<n;i++)
{
for(int j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}}}
printf("%d",a[1]);
return 0;
}

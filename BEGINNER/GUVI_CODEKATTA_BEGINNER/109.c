#include <stdio.h>
int main(void) {
int a[20],t=0;
for(int i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
for(int i=0;i<10;i++)
{
for(int j=i+1;j<10;j++)
{
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}}}
printf("%d\n",a[0]);
return 0;
}

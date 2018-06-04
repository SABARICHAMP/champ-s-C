#include <stdio.h>
int main()
{
int a[15],num,k,temp=0;
scanf("%d %d",&num,&k);
for(int i=0;i<num;i++)
{
scanf("%d",&a[i]);
}
for(int j=0;j<k;j++)
{
for(int i=num;i>0;i--)
{
temp=a[i];
a[i]=a[i-1];
a[i-1]=temp;
}
}
for(int i=0;i<num;i++)
{
printf("%d",a[i]);
}
return 0;}

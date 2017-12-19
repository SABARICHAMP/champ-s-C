#include<stdio.h>
void main()
{
int a;
scanf("%d",&a);
int count=a,sum=0;
for(int i=1;i<=3;i++)
{
count=count*10;
a+=count;
sum+=a;
}
printf("%d",9+sum);
}

#include<stdio.h>
int main()
{
int m,n,d,sum=0;
scanf("%d %d %d",&m,&n,&d);
for(int i=0;i<n;i++)
{
sum=sum+(m+i*d);
}
printf("%d",sum);
return 0;
}

#include <stdio.h>
int main()
{
int i,j,num,flag=0;
printf("Enter the number:");
scanf("%d",&num);
for(i=2;i<=num;i++)
{
if(num%i==0)
{
flag=1;
for(j=2;j<=i/2;j++)
{
if(i%j==0)
{
flag=0;
break;
 }}
 if(flag==1)
{
 printf("%d ",i);
}}}
return 0;
}

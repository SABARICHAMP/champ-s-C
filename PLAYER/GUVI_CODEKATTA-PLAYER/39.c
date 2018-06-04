#include <stdio.h>
int main(void) 
{
int num;
scanf("%d",&num);
int i,m=2,flag=0;
for(i=0;i<num;i++)
{
m=2*m;
if(m==num)
{
flag=1;
printf("yes");
break;
}}
if(flag==0)
printf("no");
return 0;
}

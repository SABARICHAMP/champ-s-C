#include <stdio.h>
int main(void) {
int num,flag;
scanf("%d",&num);
int i;
for(i=2;i<num;i++)
{
if(num%i==0)
{
printf("yes");
break;
}
else
{
flag=0;
}}
if(flag==0)
{
printf("no");
}
  return 0;
}

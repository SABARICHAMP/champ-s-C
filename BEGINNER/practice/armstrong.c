#include<stdio.h>

int main()
{
int n,p=0,sum=0,x,y,t,r;
scanf("%d",&n);
t=n;
while(t!=0)
{  
    p++;
    t=t/10;
}
printf("\n%d",p);
x=p;
t=n;
while(t!=0)
{
 r=t%10;
 y=1;
while(x!=0)
{
    
    y*=r;
    x--;
}
x=p;
sum+=y;
t=t/10;
}
if(sum==n)
{
    printf("\nArmstrong");
}
else
{
    printf("\nNot Armstrong");
}
  
  
}

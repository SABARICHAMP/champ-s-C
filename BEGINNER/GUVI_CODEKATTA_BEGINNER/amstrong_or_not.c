#include<stdio.h>
#include<math.h>
void main()
{
int n,sum=0,t,rem=0,g=0,t1,d;
scanf("%d",&n);
if(n>999)
{
t=n;
t1=n;
while(t1!=0)
{
    t1=t1/10;
    g++;
}
while(n!=0)
{
    r=n%10;
    sum=sum+pow(rem,g);
    n=n/10;
}
(s==t)?printf("yes"):printf("no");
}
else
{
    d=n;
    while(n!=0)
{
    r=n%10;
    sum=sum+rem*rem*rem;
    n=n/10;
}
(sum==d)?printf("yes"):printf("no");
}
}

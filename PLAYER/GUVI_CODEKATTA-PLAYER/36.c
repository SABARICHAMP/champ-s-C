#include <stdio.h>
int main(void) {
int m,k;
scanf("%d %d",&m,&k);
int i,a,count=0;
while(m>0)
{
a=m%10;
if(a==k)
{
count=count+1;
}
m=m/10;
}
printf("%d",count);
return 0;
}

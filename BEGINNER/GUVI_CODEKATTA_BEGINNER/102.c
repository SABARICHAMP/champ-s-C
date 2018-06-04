#include <stdio.h>
int main(void) 
{
int num,i;
scanf("%d",&num);
int x,rem;
while(num!=1)
{
rem=num%2;
x=num/2;
printf("%d\n",x);
num=rem;
break;
}
return 0;
}

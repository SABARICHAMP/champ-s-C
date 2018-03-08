#include<stdio.h>
int main(void)
{
int a,b;
scanf("%d",&a);
scanf("%d",&b);
a=a^b;
b=b^a;
a=a^b;
printf("%d %d",a,b);
return 0;
}

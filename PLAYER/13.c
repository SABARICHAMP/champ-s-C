#include<stdio.h>
int main(void)
{
int a=10,b=0;
b=a++;
printf("%d",b);
printf("%d%d",b,a);
b&=20;
printf("\n%d",b);

}

#include <stdio.h>
int main(void) {
int a,b,t;
scanf("%d%d",&a,&b);
t=a;a=b;b=t;
printf("a=%d\nb=%d",a,b);
}

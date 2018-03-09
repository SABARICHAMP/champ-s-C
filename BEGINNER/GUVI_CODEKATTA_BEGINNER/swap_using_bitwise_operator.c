#include <stdio.h>
int main(void) {
int a,b,t;
scanf("%d%d",&a,&b);
a=a^b;b=a^b;a=a^b;
printf("a=%d\nb=%d",a,b);
}

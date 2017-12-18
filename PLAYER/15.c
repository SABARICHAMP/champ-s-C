#include<stdio.h>
int main(void)
{char max;
int a=5,b=10 ,c=15;
max=((a>b)?(a>c)?a:c):((b>c)?b:c);
printf("%c",max);
}

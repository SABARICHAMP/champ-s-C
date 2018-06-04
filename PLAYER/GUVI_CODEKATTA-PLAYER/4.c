#include <stdio.h>
int main(void) { 
int num,reverse,r=0;
scanf("%d",&num);
while(num!=0)
{
r=num%10;
reverse=reverse*10+r;
num=num/10;
}
printf("%d",reverse);
return 0;
}

#include <stdio.h>
#include<string.h>
int main(void) 
{ 
int num,fact=1;
scanf("%d",&num);
for(int i=5;i>1;i--)
{
fact=fact*i;
}
printf("%d",fact);
return 0;
}

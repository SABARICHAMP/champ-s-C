#include <stdio.h>
int main(void)
{
signed int num;
scanf("%d",&num);
if(num>=-32768 && num<=32767)
{
printf("INT");
}
else
{
printf("LONG LONG");
}
return 0;
}

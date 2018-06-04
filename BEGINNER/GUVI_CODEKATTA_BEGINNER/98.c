#include <stdio.h>
int main(void) {
int num,a[20];
scanf("%d",&num);
for(int i=1;i<=num;i++)
{
scanf("%d ",&a[i]);
if(a[i]!=i)
{
printf("%d",i);
break;
}
}
return 0;
}

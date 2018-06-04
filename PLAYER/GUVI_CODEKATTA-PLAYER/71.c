#include <stdio.h>

int main(void) {
int num;
scanf("%d",&num);
 int a[num];
int i;
for(i=0;i<num;i++)
{
 scanf("%d",&a[i]);
}
for(i=0;i<num-1;i++)
{
if(a[i]>a[i+1])
{
printf("%d ",a[i]);
}
else
{
printf("%d ",a[i+1]);
}}
return 0;
}

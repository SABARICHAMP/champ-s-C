#include <stdio.h>
int main(void) {
int num,a[20],count=0;
scanf("%d",&num);
for(int i=0;i<num;i++)
{
scanf("%d",&a[i]);
}
for(int i=0;i<num;i++)
{
for(int j=0;j<num;j++)
{
if(a[i]==a[j])
{
count++;
}
}
if(count==1)
{
printf("%d",a[i]);
}
}
return 0;
}

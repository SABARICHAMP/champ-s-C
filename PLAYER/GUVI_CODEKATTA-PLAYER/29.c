#include <stdio.h>
#include <math.h>
int main()
{
int n1,n2,num,count=0;
float sq;
printf("Enter the range of numbers:");
scanf("%d %d",&n1,&n2);
for(int i=n1;i<n2;i++)
{
sq=sqrt(i);
num=sq;
if(num==sq)
{
count++;
}
}
printf("%d",count);
return 0;
}

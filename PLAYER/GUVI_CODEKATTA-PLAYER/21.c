#include <stdio.h>
int main()
{
int a1[3],a2[3];
int i,flag;
printf("\nEnter three points");
for(i=0;i<3;i++)
{
scanf("%d %d",&a1[i],&a2[i]);
}
for(i=0;i<2;i++)
{
if(a1[i]==a1[i+1] || a2[i]==a2[i+1])
{
flag=1;	
}
else
{
flag=0;
break;
}
}
if(flag==1)
{
printf("yes");
}
else
{
printf("no");
}
return 0;
}

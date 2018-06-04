#include <stdio.h>
int main()
{
int n1,n2,a[20],flag=0;
scanf("%d %d",&n1,&n2);
for(int i=0;i<n1;i++)
{
scanf("%d",&a[i]);
 }
for(int i=0;i<n1;i++)
{
if(a[i]==n2)
{
flag=1;
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

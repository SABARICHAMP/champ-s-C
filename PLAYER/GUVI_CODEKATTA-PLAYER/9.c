#include <stdio.h>
int main()
{
int x,y,f,c=0;
scanf("%d %d",&x,&y);
for(int i=x;i<=y;i++)
{
f=0;
for(int j=2;j<=i/2;j++)
{
if(i%j==0)
{
f=1;
break;
}}
if(f==0)
{
c++;
}}
 printf("%d",c);
return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
int n1,n2,x,j=0;
scanf("%d",&n);
scanf("%d %d",&n1,&n2);
for(int i=n1+1;i<n2;i++)
{
	if(i==x)
	{
		j++;
	}
}
if(j>=1)
{
	printf("yes");
}
else
{
	printf("no");
}
return 0;
}

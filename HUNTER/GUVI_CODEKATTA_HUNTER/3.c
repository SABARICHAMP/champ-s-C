#include <stdio.h>

int main(void) {
int n,t=0,j=0,count=0,a[15];
scanf("%d",&n);
for(int i=0;i<n;i++)
{
	scanf("%d ",&a[i]);
}
for(int i=0;i<n;i++)
{
	if(i==a[i])
	{
		a[j]=a[i];
		j++;
		count++;
	}
}
if(count==0)
{
	printf(-1);
}
else
{

	for(int j=0;j<count;j++)
	{
		for(int k=j+1;k<count;k++)
		{
			if(a[j]>a[k])
			{
				t=a[j];
				a[j]=a[k];
				a[k]=t;
			}
		}
	}
		
		
for(int i=0;i<count;i++)
{
		
	printf("%d ",a[i]);
}
}			
	return 0;
}

#include <stdio.h>

int main(void) {
int a[100],i,j,sum=0,n,n1;
scanf("%d",&n);
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
	for(j=i+1;j<n;j++)
	{
		sum=a[i]+a[j];
		for(n1=0;n1<n;n1++)
		{
			if(sum==a[n1])
			{
				printf("%d %d %d \n",a[i],a[j],sum);
			}
		}
	}
}


	return 0;
}

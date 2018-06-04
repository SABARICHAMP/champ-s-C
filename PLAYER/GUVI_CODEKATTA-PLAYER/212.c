#include <stdio.h>

int main(void) 
{
	int m,n,a[100][100],i,j,sum=1,sum1=1,product;
	scanf("%d",&m);
	scanf("%d",&n);
for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
				sum=sum+a[i][j];
			}
			else
			{
				sum1=sum1+a[i][j];
			}
		}
	}
	product=sum*sum1;
	printf("\nThe sum of product of diagonal is %d",product);
	return 0;
}

#include <stdio.h>
int main(void) {
	int n,n[100],i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&n[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
				if(n[i]+n[j]==0)
				{
					printf("%d+%d=0\n",n[i],n[j]);
				}
		}
	}
	return 0;
}

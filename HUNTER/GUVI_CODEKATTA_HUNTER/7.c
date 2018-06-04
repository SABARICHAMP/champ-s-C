#include <stdio.h>
int main(void) {
	int n,n1[100],n2[100],i,j,count1=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&n1[i]);
	}

	for(i=0;i<n;i++)
	{
		if((i%2)==0)
		{
			if((n1[i]%2)!=0)
			{
				printf("%d\n",n1[i]);
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if((i%2)!=0)
		{
			if((n1[i]%2)==0)
			{
			printf("%d\n",n1[i]);
			}
		}
	}
	
	return 0;
}

#include<stdio.h>
int main(void)
{
	int n,m,n1[100],n2[100],temp,i,j,count=0,count1=1;
	scanf("%d",&n);
	scanf("%d",&m);
	for(i=0;i<n;i++)
	{
		scanf("%d",&n1[i]);
	}
	for(i=0;i<m;i++)
	{
		scanf("%d",&n2[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(n1[i]==n2[j])
			{
				count++;
			}
			else
			{
				count1++;
			}
		}
	}
	if(count>0)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	
	return 0;
}

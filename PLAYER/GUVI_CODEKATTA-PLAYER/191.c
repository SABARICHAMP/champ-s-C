#include <stdio.h>
int main(void) 
{
	int n1[10],n2[10],i,n,count=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	scanf("%d",&n1[i]);
	scanf("%d",&n2[i]);
	}
	for(i=0;i<n;i++)
	{
		if(n1[i]==n2[n-i-1])
		count++;
	}
	if(count==n)
	printf("YES");
	else
	printf("NO");
 	return 0;
}

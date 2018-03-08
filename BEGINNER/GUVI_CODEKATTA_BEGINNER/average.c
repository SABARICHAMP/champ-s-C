#include <stdio.h>
int main()
{
	int a[10],i,n,sum=0;
    int average;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	    sum+=a[i];
	}
    average=sum/n;
	printf("%d",average);
	return 0;
}

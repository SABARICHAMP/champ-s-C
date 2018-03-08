#include <stdio.h>

int main() 
{
	int n,ki,i,a[10],count;
	scanf("%d %d",&n,&ki);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	    if(a[i]==ki)
	    {
	        printf("yes..%d is present",ki);
	        count=1;
	    }
	}
	if(count!=1)
	{
	    printf("%d is not present",ki);
	}
	return 0;
}

#include <stdio.h>
int main(void) {
	int i,n,j,c=0;
	scanf("%d",&n);
	int a[15];
	for(i=0;i<n;i++)
	{
	scanf("%d ",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	
		for(j=0;j<n;j++)
		{
			if(a[i]==a[j])
			c++;
		}
		if(c==1)
		printf("%d",a[i]);
	}
	return 0;
}

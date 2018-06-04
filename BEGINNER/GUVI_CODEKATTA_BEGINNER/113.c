
#include <stdio.h>

int main(void) {
	int n,m,i,c=0;
	scanf("%d %d",&n,&m);
	int a[10];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==m)
		{
			
			c++;
		
		}
		
	}
	printf("%d",c);
	return 0;
}

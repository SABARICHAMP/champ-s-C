#include <stdio.h>

int main(void) 
{
	int num,k;
	scanf("%d %d",&num,&k);
	int a[num],i;
	for(i=0;i<num;i++)
	{
		scanf("%d ",&a[i]);
	}
	for(i=0;i<num;i++)
	{
		if(a[i]-a[i+1]==k)
		{
			printf("%d",a[i]);
			break;
		}
	}
	return 0;
}

#include <stdio.h>

int main(void) {
	int num,count=0;
	scanf("%d",&num);
	int a[num],i;
	for(i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<num;i++)
	{
		if(a[i+1]>a[i])
		{
			count=count+1;
		}
		else
		{
			break;
		}
	}
	printf("%d",count);
}

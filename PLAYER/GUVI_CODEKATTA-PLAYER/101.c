#include <stdio.h>

int main(void) {
	int num,sum=0;
	scanf("%d",&num);
	int a[num];
	int i;
	for(i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<num-1;i++)
	{
		if(a[i]>a[i+1])
		{
			sum=sum+a[i];
		}
		else
		{
			sum=sum+a[i+1];
		}
	}
	printf("%d",sum);
	return 0;
}
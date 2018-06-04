#include <stdio.h>

int main(void) {
	int num;
	scanf("%d",&num);
	int a[num];
	int i;
	for(i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<num;i++)
	{
		int sum=0;
		for(int j=0;j<i+1;j++)
		{
			sum=sum+a[j];	
		}
		printf("%d ",sum);
	}
	return 0;
}

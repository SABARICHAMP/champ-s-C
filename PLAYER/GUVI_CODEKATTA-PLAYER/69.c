#include <stdio.h>

int main(void) {
	int num,k;
	scanf("%d %d",&num,&k);
	int a[num];
	int i;
	for(i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<num-k;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}

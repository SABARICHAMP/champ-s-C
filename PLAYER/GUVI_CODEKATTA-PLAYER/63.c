#include <stdio.h>
int main(void) {
	int num,i;
	scanf("%d",&num);
	int a[num],b[num];
	for(i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<num;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<num;i++)
	{
		if(a[i]==b[i])
		{
			printf("%d ",a[i]);
		}
	}
	return 0;
}

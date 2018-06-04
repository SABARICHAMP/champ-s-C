#include <stdio.h>

int main(void)
{
	int num,j,count=0;
	scanf("%d",&n);
	int a[num];
	int i;
	for(i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<num;i++)
	{
		for(j=i+1;j<num;j++)
		{
			if(a[i]<a[j])
			{
				count=count+1;
			}
		}
	}
	printf("%d",count);

	return 0;
}

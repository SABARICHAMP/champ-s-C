#include <stdio.h>

int main(void) {
	int num,temp=0;
	scanf("%d",&num);
	int a[num],i;
	for(i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
	}
	int j;
	for(i=0;i<num;i++)
	{
		int count=1;
		for(j=i+1;j<num;j++)
		{
			if(a[i]==a[j])
			{
				count=count+1;
			}
			if(a[i]!=a[j])
			{break;
			}
		}
		if(count>temp)
		{
			temp=count;
		}
	}
	printf("%d",temp);
	return 0;
}

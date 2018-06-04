#include <stdio.h>

int main(void) {
	int num,k,count=1;
	scanf("%d %d",&num,&k);
	int a[num];
	int i,j;
	for(i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<num;i++)
	{
		for(j=i+1;j<num;j++)
		{
			if(a[i]==a[j])
			{
				count=count+1;
				
			}
		}
		if(count==k)
		{
			printf("%d",a[i]);
			break;
		}
	}
return 0;
}

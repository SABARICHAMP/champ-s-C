#include <stdio.h>

int main(void) {
	int num,m,j,temp=0;
	scanf("%d",&num);
	int i,a[num];
	for(i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<num;i++)
	{
	for(j=i+1;j<num;j++)
	{
		if(a[i]>a[j])
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	int min=a[num-1];
	}
	for(i=0;i<num;i++)
	{
		for(j=i+1;j<num;j++)
		{
			m=a[j]-a[i];
			if(m<min)
			{
				min=m;
			}
			
		}
	}
	printf("%d",min);
	return 0;
}

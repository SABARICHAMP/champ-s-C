#include <stdio.h>

int main(void) {
	int num,k;
	scanf("%d %d",&num,&k);
	int a[num];
	int i,j,temp;
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
	}
	
		printf("%d",a[k]);
	
	return 0;
}

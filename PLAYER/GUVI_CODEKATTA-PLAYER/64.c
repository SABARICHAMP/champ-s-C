#include <stdio.h>

int main(void) {
	int num1,num2;
	scanf("%d %d",&num1,&num2);
	int i,j,temp;
	int a[num1];
	for(i=0;i<num1;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<num1;i++)
	{
		for(j=i+1;j<num1;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<num1;i++)
	{
		if(a[i]<num2)
		{
			printf("%d ",a[i]);
		}
	}
	return 0;
}

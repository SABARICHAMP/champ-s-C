#include<stdio.h>
#include<stdlib.h>
void main()
{
	int num,k=0,i,j,x=0,temp;
	scanf("%d",&num);
	int *a=malloc(sizeof(int)*num);
	for(i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]<0)
		{
			exit(0);
		}
	}
	for(i=0;i<num-1;i++)
	{
		for(j=0;j<num-i-1;j++)
		{
			if(a[j]<a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(i=0;i<umn;i++)
	{
		x=x*10+a[i];
	}
	printf("%d",x);
}

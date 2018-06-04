#include <stdio.h>


int main(void){
	int num,max=0,p,j;
	scanf("%d",&num);
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
			p=(a[i])^(a[j]);
			if(p>max)
			{
				max=p;
			}
		}
	}
	printf("%d",max);
	

	return 0;
}

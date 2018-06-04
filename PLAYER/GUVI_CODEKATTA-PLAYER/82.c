#include <stdio.h>

int main(void){
	int num,temp=0;
	scanf("%d",&num);
	int a[num];
	int i;
	for(i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<num;i++)
	{
		temp=temp&a[i];
	}
	printf("%d",temp);
	

	return 0;
}

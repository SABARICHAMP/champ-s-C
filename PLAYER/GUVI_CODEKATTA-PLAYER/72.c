#include <stdio.h>

int main(void) {
	int num;
	scanf("%d",&num);
	int a[num];
	int i;
	for(i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<num;i++)
	{
		if(a[i+1]<a[i])
		{
			printf("%d",a[i]);
			break;
		}
	
	}
	
return 0;
}

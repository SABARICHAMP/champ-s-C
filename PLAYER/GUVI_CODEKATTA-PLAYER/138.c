#include <stdio.h>

int main(void) {
	int num;
	scanf("%d",&num);
	int i=2;
	int flag=1;
	while(flag!=0)
	{
		if(num==i)
		{
			printf("yes");
			flag=0;
		}
		else
		{
			i=i*2;
			flag++;
		}
	}
	if(flag!=0)
	{
		printf("no");
	}
	
	return 0;
}

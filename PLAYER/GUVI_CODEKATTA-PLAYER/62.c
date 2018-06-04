#include <stdio.h>
int main(void) {
	int num,a,i;
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		a=num/i;
		if(a%2!=0)
		{
			printf("%d",i);
			break;
		}
	}
	return 0;
}

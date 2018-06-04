#include <stdio.h>

int main(void) {
	int num,i,facto=1;
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		facto=facto*i;
	}
	printf("%d",facto);
	return 0;
}

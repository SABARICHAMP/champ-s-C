#include <stdio.h>
int main(void) {
	int num,rem,pr=1;
	scanf("%d",&num);
	while(num!=0)
	{
		rem=num%10;
		pr=pr*rem;
		num=num/10;
	}
	printf("%d",pr);
	return 0;
}

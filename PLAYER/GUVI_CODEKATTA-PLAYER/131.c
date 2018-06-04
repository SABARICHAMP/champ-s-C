#include <stdio.h>

int main(void) {
	long int num,rem;
	int sum;
	scanf("%ld",&num);
	while(num!=0)
	{
		rem=num%10;
		if(rem%2!=0)
		{
			sum=sum+rem;
		}
		num=num/10;
	}
	if(sum%2==0)
	{
		printf("E");
	}
	else
	{
		printf("O");
	}
	return 0;
}

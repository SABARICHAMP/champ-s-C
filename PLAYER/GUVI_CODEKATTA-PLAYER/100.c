#include <stdio.h>
#include <math.h>
int main(void) {
	long int num,rem=0,i=1,sum=0;

	scanf("%ld",&num);
	while(num!=0)
	{
		rem=num%10;
		sum=sum+rem*i;
		num=num/10;
		i=i*2;
	}
	printf("%lx",sum);
	return 0;
}

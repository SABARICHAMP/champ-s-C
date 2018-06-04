#include <stdio.h>

int main(void){
	long int num;
	int i,sum=0,rem;
	scanf("%ld",&num);
	i=1;
	while(num!=0)
	{
		rem=num%10;
		if(rem==0)
		{
			i=i+i;
		}
		else
		{
			sum=sum+(rem*i);
			i=i+i;
		}
		num=num/10;
	}
	printf("%d",sum);
	return 0;
}

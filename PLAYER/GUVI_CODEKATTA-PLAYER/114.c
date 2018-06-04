#include <stdio.h>

int main(void){
	int num,rem,j,sum=0;
	scanf("%d",&num);
	while(num>0)
	{
		rem=num%10;
		j=rem*rem;
		sum=sum+j;
		num=num/10;
	}
	printf("%d",sum);
	return 0;
}

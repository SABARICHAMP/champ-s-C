#include <stdio.h>

int main(void){
	int num,remainder,j,sum=0;
	scanf("%d",&num);
	while(num>0)
	{
		remainder=num%10;
		j=remainder*remainder;
		sum=sum+j;
		num=num/10;
	}
	printf("%d",sum);
	return 0;
}

#include <stdio.h>

int main(void) {
	int num,rem,sum=0,flag=0;
	scanf("%d",&num);
	while(num>0)
	{
		if(num<10)
		{
			rem=num%10;
			sum=sum+rem;
			break;
		}
		if(flag==0)
		{
		rem=num%10;
		sum=sum+rem;
		num=num/10;
		flag=1;
		}
		else
		{
		num=num/10;	
		}
		
		
	}
	printf("%d",sum);
	return 0;
}

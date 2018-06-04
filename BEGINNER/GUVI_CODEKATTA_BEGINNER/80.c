#include <stdio.h>
int main(void) 
{
	int num,digit=0,r=0;
	scanf("%d",&num);
	while(num>0)
	{
		digit=num%10;
		num=num/10;
		r=digit%2;
	
		if(r!=0)
		{
			printf("%d ",digit);
		}
	}
	return 0;
}

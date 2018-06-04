#include <stdio.h>
int main(void) 
{
	int n1,n2,x;
	scanf("%d %d",&n1,&n2);
	x=n2*n1;
	for(int i=0;i<=x;i++)
	{
		if(x==i*i)
		{
			printf("Yes");
			return 0;
		}
	}
	printf("No");
	return 0;
}

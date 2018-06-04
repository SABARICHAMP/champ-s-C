#include <stdio.h>

int main(void) {
	int num,k;
	scanf("%d %d",&num,&k);
	int i,m=k,flag=0;
	for(i=0;i<num;i++)
	{
		m=k*m;
		if(m==num)
		{
			flag=1;
			printf("yes");
			break;
		}
	}
	if(flag==0)
	printf("no");
	return 0;
}

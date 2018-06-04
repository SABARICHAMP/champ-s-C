#include <stdio.h>

int main(void) {
	int num,i=0,rem,arr[10],flag=0;
	scanf("%d",&num);
	while(num>=1)
	{
		rem=num%10;
		arr[i]=rem;
		num=num/10;
		i++;
	}
	for(int j=0;j<i;j++)
	{
		for(int k=j+1;k<i;k++)
		{
			if(arr[j]==arr[k])
			{
				printf("yes");
				flag=1;
				break;
			}
		}
		if(flag==1)
		{
			break;
		}
	}
	if(flag==0)
	{
		printf("no");
	}
	return 0;
}

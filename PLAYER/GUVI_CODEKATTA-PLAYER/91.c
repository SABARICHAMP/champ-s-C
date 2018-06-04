#include <stdio.h>

int main(void){
	int num,i=0,arr[10],rem;
	scanf("%d",&num);
	while(num!=0)
	{
		rem=n%2;
		arr[i]=rem;
		num=num/2;
		i++;
	}
	for(int j=i-1;j>=0;j--)
	{
	printf("%d",arr[j]);
	}
	return 0;
}

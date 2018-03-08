#include<stdio.h>
int main(void) {
	int n,m,i,j;
	scanf("%d %d",&n,&m);
	int arr[10];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]%2!=0)
		{
			
			for(j=i+1;j<n;j++)
			{
				if(arr[j]%2!=0)
				{
					printf("%d",arr[j]);
					break;
				}
			}
		break;
		}
		
	}
	
	return 0;
}

#include <stdio.h>

int main(void) {
	int a[]={1,2,0,3,4,5},b[]={5,6,7,0,9},i,j,size1,size2;
	size1=sizeof(a)/sizeof(a[0]);
	size2=sizeof(b)/sizeof(b[0]);
	for(i=0;i<size1;i++)
	{
		for(j=0;j<size2;j++)
		{
			if(a[i]==b[j])
			printf("%d ",a[i]);
		}
	}
	return 0;
}

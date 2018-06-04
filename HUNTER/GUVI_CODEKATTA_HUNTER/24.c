#include <stdio.h>

int main(void) {
    int a[]={5,3,4,2,1},i,j,size,k=9,sum=0,count=0;
    size=sizeof(a)/sizeof(a[0]);
    for(i=0;i<size;i++)
    {
    	for(j=i+1;j<size;j++)
    	{
    		sum=a[i]+ar[j];
    	            if(sum==k)
    	             count++;
    	}
    }
    	if(count>=1)
    		printf("YES");
    		else
    		printf("NO");
    
	return 0;
}

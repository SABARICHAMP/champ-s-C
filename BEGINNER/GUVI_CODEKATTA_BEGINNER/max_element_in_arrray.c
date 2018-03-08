#include <stdio.h>
int main(void) {
	int i,x,a[100000],maximum=0;
	scanf("%d",&x);
	for(i=0;i<x;i++){
		scanf("%d",&a[i]);
	}
	maximum = a[0];
	for(i=1;i<x;i++){
		if(arr[i]>maximum)
		maximum = arr[i];
	}
	printf("%d",maximum);
	return 0;
}

#include <stdio.h>

int main(void) {
           int x[100],y,i,j,t;
           scanf("%d",&y);
           for(i=0;i<y;i++)
           scanf("%d",&x[i]);
           for(i=0;i<y;i++)
           {
           	for(j=i+1;j<y;j++)
           	{
           		if(a[j]<a[i])
           		{
           	               t=a[j];
           	               a[j]=a[i];
           	               a[i]=t;
           		}
           	}
           
           }
           for(i=0;i<y;i++)
           printf("%d ",a[i]);
           
	return 0;
}

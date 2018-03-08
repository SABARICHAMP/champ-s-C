#include <stdio.h>

int main(void) {
           int array[100],n,i,j,t;
           int m=0;
           scanf("%d",&n);
           for(i=0;i<n;i++)
           scanf("%d",&array[i]);
           for(i=0;i<n;i++)
           {
           	for(j=i+1;j<n;j++)
           	{
           		if(array[j]<array[i])
           		{
           	               t=array[j];
           	               array[j]=array[i];
           	               array[i]=t;
           		}
           	}
           
           }
          if(n%2==0) {
        
        m=((array[n/2] + array[n/2 - 1]) / 2);
        printf("%d",m);
    } 
    else 
    {
      
        m=array[n/2];
        printf("%d",m);
    }
          
           
	return 0;
}

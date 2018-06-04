#include <stdio.h>
int main() 
{
    int num,a[10],i,j,difference,max=0;
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(i=0;i<num;i++)
	{
	 for(j=i+1;j<num;j++)
	 {
	   if(a[i]>a[j])
	   {
	       difference=a[i]-a[j];
	   }
	   else
	   {
	        difference=a[j]-a[i];  
	   }
	   if(difference>max)
	   {
	       max=difference;
	   }
	 }
	}
	printf("%d",max);
	return 0;
}

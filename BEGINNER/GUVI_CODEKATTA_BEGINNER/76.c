#include<stdio.h>
#include<string.h>
int main()
{
int number,count=0;
scanf("%d",&number);
for(int i=1;i<=number;i++)
{
	if(number%i==0)
	{
		count++;
	}
}
if(count!=2)
{
	printf("yes");
}
else
{
	printf("no");
}
return 0;
}

#include <stdio.h>
int main(void) 
{
int m,n;
char ch;
for(int i=0;i<4;i++)
{
scanf("%d %c %d",&m,&ch,&n);
if(ch=='/')
{
	printf("%d",m/n);
	printf("\n");
}
else
{
	printf("%d",m%n);
	printf("\n");
}
}
return 0;
}

#include <stdio.h>
int main(void) {
	int num,c=0;
	scanf("%d",&num);
for(int i=1;i<num;i++)
{
if(num%i==0)
{
c++;
}
}
if(c>1)
{
printf("yes");
}
else
{
printf("no");
}
return 0;
}

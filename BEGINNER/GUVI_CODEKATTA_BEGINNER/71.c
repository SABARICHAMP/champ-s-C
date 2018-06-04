#include<stdio.h>
#include<string.h>
int main()
{
char str[20];
scanf("%s",str);
int f=0;
int length=strlen(str);
for(int i=0;i<length;i++)
{
	if(str[i]!=str[length-i-1])
	{
		f=1;
		break;
	}
}
if(f)
{
	printf("no");
}
else
{
	printf("yes");
}

return 0;
}

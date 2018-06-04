#include <stdio.h>

int main(void) {
	char s[100];
	int flag;
	scanf("%s",s);
	for(int i=0;s[i]!='\0';i++)
	{
		if(s[i]=='a' || s[i]=='b')
		{
			flag=1;
		}
		else
		{
			flag=0;
			break;
		}
	}
	if(flag==0)
	{
		printf("no");
	}
	else
	{
		printf("yes");
	}
	return 0;
}

#include <stdio.h>
#include<string.h>
int main(void) 
{
	char string[20];
	int c=0;
	scanf("%s",string);
	int length=strlen(string);
	for(int i=0;i<length;i+=2)
	{
	if(string[i]==string[i+1])
	{
            c++;
	}
	}
	if(c>0)
	{
		printf("No");
	}
	else
	{
		printf("Yes");
	}
	return 0;
}

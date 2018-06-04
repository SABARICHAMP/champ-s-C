#include <stdio.h>
#include<string.h>
int main(void) 
{
	char string[20];
	scanf("%s",string);
	int length;
  length=strlen(string);
	for(int i=0;i<length;i+=2)
	{
		printf("%c",string[i]);
	}
	printf("\t");
	for(int i=1;i<length;i+=2)
	{
		printf("%c",string[i]);
	}
	return 0;
}

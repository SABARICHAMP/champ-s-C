#include <stdio.h>
#include<string.h>
int main(void) {
	char string[20];
	scanf("%s",string);
	int length;
  length=strlen(string);
	for(int i=0;i<length;i++)
	{
		if(string[i]>='0'&&string[i]<='9')
		{
			printf("%c",string[i]);
		}
	}
	
	return 0;
}

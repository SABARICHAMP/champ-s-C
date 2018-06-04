#include<stdio.h>
#include<string.h>
int main()
{
char string[20];
int length,c=0;
scanf("%s",string);
length=strlen(string);
for(int i=0;i<length;i++)
{
if(string[i]=='a' ||string[i]=='e' ||string[i]=='i' ||string[i]=='o' ||string[i]=='u' ||string[i]=='A' ||string[i]=='E' ||string[i]=='I' ||string[i]=='O' ||string[i]=='U')
{
	c++;
}
}
if(c>=1)
{
	printf("yes");
}
else
{
	printf("no");
}

return 0;
}

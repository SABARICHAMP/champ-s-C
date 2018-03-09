#include <stdio.h>
int main(void) {
char s[100];
scanf("%s",s);
int a=0,d=0;
for(int i=0;s[i]!=0;i++)
{
if((s[i]>='a'&& s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
{
	a++;
}
if(s[i]>='0' && s[i]<='9')
{
	digit++;
}
}
if(a>=1 && d>=1)
{
	printf("Yes");
}
else
{
	printf("no");
}
return 0;
}

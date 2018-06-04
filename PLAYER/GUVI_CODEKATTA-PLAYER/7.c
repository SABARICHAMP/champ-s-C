#include <stdio.h>
#include <string.h>
int main(void) 
{
char s[20];
int temp=0;
scanf("%s",s);
int length;
length=strlen(s);
for(int i=0;i<length;i+=2)
{
temp=s[i];
s[i]=s[i+1];
s[i+1]=temp;
}
printf("%s",s);
return 0;
}
